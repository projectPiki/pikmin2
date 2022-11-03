.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_BigTreasure_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8048CA80:
	.4byte 0
	.4byte 0
	.4byte 0
.balign 4
lbl_8048CA8C:
	.asciz "246-BigTreasure"
.balign 4
lbl_8048CA9C:
	.asciz "mat_body"
.balign 4
lbl_8048CAA8:
	.asciz "mat_eye1"
.balign 4
lbl_8048CAB4:
	.asciz "mat_eye2"
.balign 4
lbl_8048CAC0:
	.asciz "rhand1jnt"
.balign 4
lbl_8048CACC:
	.asciz "rhand2jnt"
.balign 4
lbl_8048CAD8:
	.asciz "rhand3jnt"
.balign 4
lbl_8048CAE4:
	.asciz "lhand1jnt"
.balign 4
lbl_8048CAF0:
	.asciz "lhand2jnt"
.balign 4
lbl_8048CAFC:
	.asciz "lhand3jnt"
.balign 4
lbl_8048CB08:
	.asciz "rfoot1jnt"
.balign 4
lbl_8048CB14:
	.asciz "rfoot2jnt"
.balign 4
lbl_8048CB20:
	.asciz "rfoot3jnt"
.balign 4
lbl_8048CB2C:
	.asciz "lfoot1jnt"
.balign 4
lbl_8048CB38:
	.asciz "lfoot2jnt"
.balign 4
lbl_8048CB44:
	.asciz "lfoot3jnt"
.balign 4
lbl_8048CB50:
	.4byte lbl_8048CAC0
	.4byte lbl_8048CACC
	.4byte lbl_8048CAD8
	.4byte lbl_8048CAE4
	.4byte lbl_8048CAF0
	.4byte lbl_8048CAFC
	.4byte lbl_8048CB08
	.4byte lbl_8048CB14
	.4byte lbl_8048CB20
	.4byte lbl_8048CB2C
	.4byte lbl_8048CB38
	.4byte lbl_8048CB44
lbl_8048CB80:
	.4byte 0x6C667431 # LFT1
	.4byte 0x6C687431 # LHT1
	.4byte 0x72667431 # RFT1
	.4byte 0x72687431 # RHT1
lbl_8048CB90:
	.4byte 0x656C6563
	.4byte 0x66697265
	.4byte 0x67617369
	.4byte 0x6D697A75
lbl_8048CBA0:
	.4byte lbl_8051CCB0 # elec
	.4byte lbl_8051CCB8 # gas
	.4byte lbl_8051CCC0 # water
	.4byte lbl_8051CCC4 # fire
.balign 4
lbl_8048CBB0:
	.asciz "otakara_elec"
.balign 4
lbl_8048CBC0:
	.asciz "otakara_fire"
.balign 4
lbl_8048CBD0:
	.asciz "otakara_gas"
.balign 4
lbl_8048CBDC:
	.asciz "otakara_water"
.balign 4
lbl_8048CBEC:
	.4byte lbl_8048CBB0
	.4byte lbl_8048CBC0
	.4byte lbl_8048CBD0
	.4byte lbl_8048CBDC
.balign 4
lbl_8048CBFC:
	.asciz "otakara_loozy"
.balign 4
lbl_8048CC0C:
	.asciz "PSMainSide_ObjSound.h"
.balign 4
lbl_8048CC24:
	.asciz "P2Assert"
.balign 4
lbl_8048CC30:
	.asciz "g36_find_louie"
.balign 4
lbl_8048CC40:
	.asciz "ArgPosPos"
.balign 4
lbl_8048CC4C:
	.asciz "PelletInitArg"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__Q23efx14TOootaBombBody
__vt__Q23efx14TOootaBombBody:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q23efx16TOootaStartSmoke
__vt__Q23efx16TOootaStartSmoke:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q23efx14TOootaPartsoff
__vt__Q23efx14TOootaPartsoff:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global "__vt__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>"
"__vt__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>":
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
	.4byte "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
	.4byte "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
	.4byte "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
.global __vt__Q23efx24TChasePosPosLocalYScale3
__vt__Q23efx24TChasePosPosLocalYScale3:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
	.4byte "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
	.4byte "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
	.4byte "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
.global __vt__Q23efx14TOootaParticle
__vt__Q23efx14TOootaParticle:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TOootaParticleFv"
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
	.4byte __dt__Q23efx14TOootaParticleFv
.global __vt__Q23efx16TOootaChangeBody
__vt__Q23efx16TOootaChangeBody:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx16TOootaChangeBodyFv"
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
	.4byte __dt__Q23efx16TOootaChangeBodyFv
.global __vt__Q23efx13TOootaDeadAwa
__vt__Q23efx13TOootaDeadAwa:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx13TOootaDeadAwaFv"
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
	.4byte __dt__Q23efx13TOootaDeadAwaFv
.global __vt__Q23efx14TOootaDeadBody
__vt__Q23efx14TOootaDeadBody:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
.global __vt__Q23efx15TOootaStartBody
__vt__Q23efx15TOootaStartBody:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx15TOootaStartBodyFv"
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
	.4byte __dt__Q23efx15TOootaStartBodyFv
.global __vt__Q23efx15TOootaChangeLeg
__vt__Q23efx15TOootaChangeLeg:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx15TOootaChangeLegFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx23TChasePosPosLocalYScaleFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx15TOootaChangeLegFv
.global __vt__Q23efx13TOootaDeadLeg
__vt__Q23efx13TOootaDeadLeg:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
	.4byte "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
	.4byte "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
	.4byte "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
.global __vt__Q23efx14TOootaStartLeg
__vt__Q23efx14TOootaStartLeg:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TOootaStartLegFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx23TChasePosPosLocalYScaleFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx14TOootaStartLegFv
.global __vt__Q23efx14TOootaStartOta
__vt__Q23efx14TOootaStartOta:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TOootaStartOtaFv"
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
	.4byte __dt__Q23efx14TOootaStartOtaFv
.global __vt__Q23efx10TOootaFoot
__vt__Q23efx10TOootaFoot:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
.global __vt__Q34Game11BigTreasure3Obj
__vt__Q34Game11BigTreasure3Obj:
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
	.4byte onInit__Q34Game11BigTreasure3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game11BigTreasure3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game11BigTreasure3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game11BigTreasure3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game11BigTreasure3ObjFv
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
	.4byte getShadowParam__Q34Game11BigTreasure3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game11BigTreasure3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game11BigTreasure3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game11BigTreasure3ObjFv
	.4byte doUpdateCommon__Q34Game11BigTreasure3ObjFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q34Game11BigTreasure3ObjFv
	.4byte doAnimationCullingOff__Q34Game11BigTreasure3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game11BigTreasure3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game11BigTreasure3ObjFv
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
	.4byte getEnemyTypeID__Q34Game11BigTreasure3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q34Game11BigTreasure3ObjFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q34Game11BigTreasure3ObjFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q34Game11BigTreasure3ObjFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game11BigTreasure3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game11BigTreasure3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game11BigTreasure3ObjFv
	.4byte doFinishStoneState__Q34Game11BigTreasure3ObjFv
	.4byte getDamageCoeStoneState__Q34Game11BigTreasure3ObjFv
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
	.4byte doStartMovie__Q34Game11BigTreasure3ObjFv
	.4byte doEndMovie__Q34Game11BigTreasure3ObjFv
	.4byte setFSM__Q34Game11BigTreasure3ObjFPQ34Game11BigTreasure3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@1412@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@1412@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@1412@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@1412@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@1412@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@1412@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.global __vt__Q34Game11BigTreasure14ProperAnimator
__vt__Q34Game11BigTreasure14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game11BigTreasure14ProperAnimatorFv
	.4byte setAnimMgr__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFv
	.4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFi
	.4byte animate__Q24Game22EnemyBlendAnimatorBaseFf
	.4byte animate__Q24Game22EnemyBlendAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game22EnemyBlendAnimatorBaseFv
.global __vt__Q34Game11BigTreasure25BigTreasureGroundCallBack
__vt__Q34Game11BigTreasure25BigTreasureGroundCallBack:
	.4byte 0
	.4byte 0
	.4byte invokeOnGround__Q34Game11BigTreasure25BigTreasureGroundCallBackFiPQ24Game8WaterBox
	.4byte invokeOffGround__Q34Game11BigTreasure25BigTreasureGroundCallBackFiPQ24Game8WaterBox

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051CC30:
	.float 0.0
lbl_8051CC34:
	.float 1.0
lbl_8051CC38:
	.float 60.0
lbl_8051CC3C:
	.float 0.1
lbl_8051CC40:
	.float 0.25
lbl_8051CC44:
	.float 10.0
lbl_8051CC48:
	.float -1000.0
.balign 4
lbl_8051CC4C:
	.asciz "kosi"
.balign 4
lbl_8051CC54:
	.float 2.0
lbl_8051CC58:
	.float 32768.0
.balign 8
lbl_8051CC60:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_8051CC68:
	.float 3.0
lbl_8051CC6C:
	.float 4.0
lbl_8051CC70:
	.float 300.0
lbl_8051CC74:
	.float 225.0
lbl_8051CC78:
	.float 625.0
lbl_8051CC7C: # pi
	.float 3.1415927
lbl_8051CC80: # half-pi
	.float 1.5707964
lbl_8051CC84:
	.float -325.9493
lbl_8051CC88:
	.float 325.9493
lbl_8051CC8C:
	.float 0.75
lbl_8051CC90:
	.float 120.0
lbl_8051CC94:
	.float -0.15
lbl_8051CC98:
	.float 0.5
lbl_8051CC9C:
	.float -2.0
lbl_8051CCA0:
	.float 75.0
lbl_8051CCA4:
	.float 30.0
lbl_8051CCA8:
	.float 0.7
lbl_8051CCAC:
	.float -1.5
.balign 4
lbl_8051CCB0:
	.asciz "elec"
.balign 4
lbl_8051CCB8:
	.asciz "fire"
.balign 4
lbl_8051CCC0:
	.asciz "gas"
.balign 4
lbl_8051CCC4:
	.asciz "water"
.balign 4
STARTING_TREASURE_HEALTH:
	.float 6000.0
.balign 4
lbl_8051CCD0:
	.asciz "loozy"
.balign 4
lbl_8051CCD8:
	.float 1.4
lbl_8051CCDC: # tau
	.float 6.2831855
lbl_8051CCE0:
	.float 0.15
lbl_8051CCE4:
	.float -22.0
lbl_8051CCE8:
	.float 100.0
CRITICAL_TREASURE_HEALTH:
	.float 3000.0
lbl_8051CCF0:
	.float 150.0
lbl_8051CCF4:
	.float 12000.0
lbl_8051CCF8:
	.float 180.0
lbl_8051CCFC:
	.float 1280.0
lbl_8051CD00: # pi/4
	.float 0.7853982
lbl_8051CD04:
	.float 2.3561945
lbl_8051CD08:
	.float 3.926991
lbl_8051CD0C:
	.float 5.4977875
lbl_8051CD10:
	.float 5.0
lbl_8051CD14:
	.float 20.0
lbl_8051CD18:
	.float 255.0
lbl_8051CD1C:
	.float 90.0
lbl_8051CD20:
	.float 160.0
lbl_8051CD24:
	.float 70.0
lbl_8051CD28:
	.float 80.0
lbl_8051CD2C:
	.float 45.0
lbl_8051CD30:
	.float 220.0
lbl_8051CD34:
	.float 68.0
lbl_8051CD38:
	.float 40.0
lbl_8051CD3C:
	.float 200.0
lbl_8051CD40:
	.float 64.0
lbl_8051CD44:
	.float 230.0
lbl_8051CD48:
	.float 0.01
lbl_8051CD4C:
	.float 1.2
lbl_8051CD50:
	.float 1.0E-5

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global invokeOnGround__Q34Game11BigTreasure25BigTreasureGroundCallBackFiPQ24Game8WaterBox
invokeOnGround__Q34Game11BigTreasure25BigTreasureGroundCallBackFiPQ24Game8WaterBox:
/* 802DBBB4 002D8AF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DBBB8 002D8AF8  7C 08 02 A6 */	mflr r0
/* 802DBBBC 002D8AFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DBBC0 002D8B00  80 63 00 04 */	lwz r3, 4(r3)
/* 802DBBC4 002D8B04  48 00 47 35 */	bl createOnGroundEffect__Q34Game11BigTreasure3ObjFiPQ24Game8WaterBox
/* 802DBBC8 002D8B08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DBBCC 002D8B0C  7C 08 03 A6 */	mtlr r0
/* 802DBBD0 002D8B10  38 21 00 10 */	addi r1, r1, 0x10
/* 802DBBD4 002D8B14  4E 80 00 20 */	blr 

.global invokeOffGround__Q34Game11BigTreasure25BigTreasureGroundCallBackFiPQ24Game8WaterBox
invokeOffGround__Q34Game11BigTreasure25BigTreasureGroundCallBackFiPQ24Game8WaterBox:
/* 802DBBD8 002D8B18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DBBDC 002D8B1C  7C 08 02 A6 */	mflr r0
/* 802DBBE0 002D8B20  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DBBE4 002D8B24  80 63 00 04 */	lwz r3, 4(r3)
/* 802DBBE8 002D8B28  48 00 48 D1 */	bl createOffGroundEffect__Q34Game11BigTreasure3ObjFiPQ24Game8WaterBox
/* 802DBBEC 002D8B2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DBBF0 002D8B30  7C 08 03 A6 */	mtlr r0
/* 802DBBF4 002D8B34  38 21 00 10 */	addi r1, r1, 0x10
/* 802DBBF8 002D8B38  4E 80 00 20 */	blr 

.global __ct__Q34Game11BigTreasure3ObjFv
__ct__Q34Game11BigTreasure3ObjFv:
/* 802DBBFC 002D8B3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DBC00 002D8B40  7C 08 02 A6 */	mflr r0
/* 802DBC04 002D8B44  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DBC08 002D8B48  7C 80 07 35 */	extsh. r0, r4
/* 802DBC0C 002D8B4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DBC10 002D8B50  7C 7F 1B 78 */	mr r31, r3
/* 802DBC14 002D8B54  93 C1 00 08 */	stw r30, 8(r1)
/* 802DBC18 002D8B58  41 82 00 24 */	beq .L_802DBC3C
/* 802DBC1C 002D8B5C  38 1F 05 84 */	addi r0, r31, 0x584
/* 802DBC20 002D8B60  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802DBC24 002D8B64  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802DBC28 002D8B68  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802DBC2C 002D8B6C  38 00 00 00 */	li r0, 0
/* 802DBC30 002D8B70  90 7F 05 84 */	stw r3, 0x584(r31)
/* 802DBC34 002D8B74  90 1F 05 88 */	stw r0, 0x588(r31)
/* 802DBC38 002D8B78  90 1F 05 8C */	stw r0, 0x58c(r31)
.L_802DBC3C:
/* 802DBC3C 002D8B7C  7F E3 FB 78 */	mr r3, r31
/* 802DBC40 002D8B80  38 80 00 00 */	li r4, 0
/* 802DBC44 002D8B84  4B E2 57 5D */	bl __ct__Q24Game9EnemyBaseFv
/* 802DBC48 002D8B88  3C 80 80 4D */	lis r4, __vt__Q34Game11BigTreasure3Obj@ha
/* 802DBC4C 002D8B8C  38 1F 05 84 */	addi r0, r31, 0x584
/* 802DBC50 002D8B90  38 C4 35 80 */	addi r6, r4, __vt__Q34Game11BigTreasure3Obj@l
/* 802DBC54 002D8B94  3C 60 80 12 */	lis r3, "__ct__10Vector3<f>Fv"@ha
/* 802DBC58 002D8B98  90 DF 00 00 */	stw r6, 0(r31)
/* 802DBC5C 002D8B9C  38 A6 01 B0 */	addi r5, r6, 0x1b0
/* 802DBC60 002D8BA0  39 26 02 FC */	addi r9, r6, 0x2fc
/* 802DBC64 002D8BA4  38 83 F3 48 */	addi r4, r3, "__ct__10Vector3<f>Fv"@l
/* 802DBC68 002D8BA8  90 BF 01 78 */	stw r5, 0x178(r31)
/* 802DBC6C 002D8BAC  38 7F 03 04 */	addi r3, r31, 0x304
/* 802DBC70 002D8BB0  38 A0 00 00 */	li r5, 0
/* 802DBC74 002D8BB4  38 C0 00 0C */	li r6, 0xc
/* 802DBC78 002D8BB8  81 1F 01 7C */	lwz r8, 0x17c(r31)
/* 802DBC7C 002D8BBC  38 E0 00 10 */	li r7, 0x10
/* 802DBC80 002D8BC0  91 28 00 00 */	stw r9, 0(r8)
/* 802DBC84 002D8BC4  81 1F 01 7C */	lwz r8, 0x17c(r31)
/* 802DBC88 002D8BC8  7C 08 00 50 */	subf r0, r8, r0
/* 802DBC8C 002D8BCC  90 08 00 0C */	stw r0, 0xc(r8)
/* 802DBC90 002D8BD0  4B DE 5B AD */	bl __construct_array
/* 802DBC94 002D8BD4  38 60 00 60 */	li r3, 0x60
/* 802DBC98 002D8BD8  4B D4 82 0D */	bl __nw__FUl
/* 802DBC9C 002D8BDC  7C 7E 1B 79 */	or. r30, r3, r3
/* 802DBCA0 002D8BE0  41 82 00 14 */	beq .L_802DBCB4
/* 802DBCA4 002D8BE4  4B E5 24 45 */	bl __ct__Q24Game22EnemyBlendAnimatorBaseFv
/* 802DBCA8 002D8BE8  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure14ProperAnimator@ha
/* 802DBCAC 002D8BEC  38 03 38 AC */	addi r0, r3, __vt__Q34Game11BigTreasure14ProperAnimator@l
/* 802DBCB0 002D8BF0  90 1E 00 00 */	stw r0, 0(r30)
.L_802DBCB4:
/* 802DBCB4 002D8BF4  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802DBCB8 002D8BF8  38 60 00 1C */	li r3, 0x1c
/* 802DBCBC 002D8BFC  4B D4 81 E9 */	bl __nw__FUl
/* 802DBCC0 002D8C00  7C 64 1B 79 */	or. r4, r3, r3
/* 802DBCC4 002D8C04  41 82 00 24 */	beq .L_802DBCE8
/* 802DBCC8 002D8C08  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802DBCCC 002D8C0C  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure3FSM@ha
/* 802DBCD0 002D8C10  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802DBCD4 002D8C14  38 A0 FF FF */	li r5, -1
/* 802DBCD8 002D8C18  90 04 00 00 */	stw r0, 0(r4)
/* 802DBCDC 002D8C1C  38 03 31 70 */	addi r0, r3, __vt__Q34Game11BigTreasure3FSM@l
/* 802DBCE0 002D8C20  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802DBCE4 002D8C24  90 04 00 00 */	stw r0, 0(r4)
.L_802DBCE8:
/* 802DBCE8 002D8C28  81 9F 00 00 */	lwz r12, 0(r31)
/* 802DBCEC 002D8C2C  7F E3 FB 78 */	mr r3, r31
/* 802DBCF0 002D8C30  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802DBCF4 002D8C34  7D 89 03 A6 */	mtctr r12
/* 802DBCF8 002D8C38  4E 80 04 21 */	bctrl 
/* 802DBCFC 002D8C3C  7F E3 FB 78 */	mr r3, r31
/* 802DBD00 002D8C40  48 00 0D 3D */	bl createIKSystem__Q34Game11BigTreasure3ObjFv
/* 802DBD04 002D8C44  7F E3 FB 78 */	mr r3, r31
/* 802DBD08 002D8C48  48 00 12 49 */	bl createShadowSystem__Q34Game11BigTreasure3ObjFv
/* 802DBD0C 002D8C4C  7F E3 FB 78 */	mr r3, r31
/* 802DBD10 002D8C50  48 00 1F 1D */	bl createAttack__Q34Game11BigTreasure3ObjFv
/* 802DBD14 002D8C54  7F E3 FB 78 */	mr r3, r31
/* 802DBD18 002D8C58  48 00 3D 21 */	bl createEffect__Q34Game11BigTreasure3ObjFv
/* 802DBD1C 002D8C5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DBD20 002D8C60  7F E3 FB 78 */	mr r3, r31
/* 802DBD24 002D8C64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DBD28 002D8C68  83 C1 00 08 */	lwz r30, 8(r1)
/* 802DBD2C 002D8C6C  7C 08 03 A6 */	mtlr r0
/* 802DBD30 002D8C70  38 21 00 10 */	addi r1, r1, 0x10
/* 802DBD34 002D8C74  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game11BigTreasure3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game11BigTreasure3ObjFPQ24Game21EnemyInitialParamBase:
/* 802DBD38 002D8C78  4E 80 00 20 */	blr 

.global onInit__Q34Game11BigTreasure3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game11BigTreasure3ObjFPQ24Game15CreatureInitArg:
/* 802DBD3C 002D8C7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DBD40 002D8C80  7C 08 02 A6 */	mflr r0
/* 802DBD44 002D8C84  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DBD48 002D8C88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DBD4C 002D8C8C  7C 7F 1B 78 */	mr r31, r3
/* 802DBD50 002D8C90  4B E2 5D 09 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802DBD54 002D8C94  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802DBD58 002D8C98  7F E3 FB 78 */	mr r3, r31
/* 802DBD5C 002D8C9C  60 00 00 04 */	ori r0, r0, 4
/* 802DBD60 002D8CA0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802DBD64 002D8CA4  4B E2 BA 19 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802DBD68 002D8CA8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802DBD6C 002D8CAC  7F E3 FB 78 */	mr r3, r31
/* 802DBD70 002D8CB0  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DBD74 002D8CB4  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802DBD78 002D8CB8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802DBD7C 002D8CBC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802DBD80 002D8CC0  54 00 05 24 */	rlwinm r0, r0, 0, 0x14, 0x12
/* 802DBD84 002D8CC4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802DBD88 002D8CC8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802DBD8C 002D8CCC  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 802DBD90 002D8CD0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802DBD94 002D8CD4  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802DBD98 002D8CD8  48 00 07 89 */	bl resetAttackLimitTimer__Q34Game11BigTreasure3ObjFv
/* 802DBD9C 002D8CDC  38 00 FF FF */	li r0, -1
/* 802DBDA0 002D8CE0  C0 02 E8 D4 */	lfs f0, lbl_8051CC34@sda21(r2)
/* 802DBDA4 002D8CE4  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802DBDA8 002D8CE8  7F E3 FB 78 */	mr r3, r31
/* 802DBDAC 002D8CEC  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 802DBDB0 002D8CF0  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 802DBDB4 002D8CF4  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 802DBDB8 002D8CF8  D0 3F 02 D0 */	stfs f1, 0x2d0(r31)
/* 802DBDBC 002D8CFC  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 802DBDC0 002D8D00  D0 3F 02 D4 */	stfs f1, 0x2d4(r31)
/* 802DBDC4 002D8D04  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 802DBDC8 002D8D08  48 00 0D 81 */	bl setupIKSystem__Q34Game11BigTreasure3ObjFv
/* 802DBDCC 002D8D0C  7F E3 FB 78 */	mr r3, r31
/* 802DBDD0 002D8D10  48 00 11 C9 */	bl setupShadowSystem__Q34Game11BigTreasure3ObjFv
/* 802DBDD4 002D8D14  7F E3 FB 78 */	mr r3, r31
/* 802DBDD8 002D8D18  48 00 1E 9D */	bl setupAttack__Q34Game11BigTreasure3ObjFv
/* 802DBDDC 002D8D1C  7F E3 FB 78 */	mr r3, r31
/* 802DBDE0 002D8D20  48 00 12 5D */	bl setupCollision__Q34Game11BigTreasure3ObjFv
/* 802DBDE4 002D8D24  7F E3 FB 78 */	mr r3, r31
/* 802DBDE8 002D8D28  48 00 12 E5 */	bl setupTreasure__Q34Game11BigTreasure3ObjFv
/* 802DBDEC 002D8D2C  7F E3 FB 78 */	mr r3, r31
/* 802DBDF0 002D8D30  48 00 25 0D */	bl resetMaterialColor__Q34Game11BigTreasure3ObjFv
/* 802DBDF4 002D8D34  7F E3 FB 78 */	mr r3, r31
/* 802DBDF8 002D8D38  48 00 42 E1 */	bl setupEffect__Q34Game11BigTreasure3ObjFv
/* 802DBDFC 002D8D3C  7F E3 FB 78 */	mr r3, r31
/* 802DBE00 002D8D40  48 00 3A 19 */	bl resetBossAppearBGM__Q34Game11BigTreasure3ObjFv
/* 802DBE04 002D8D44  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802DBE08 002D8D48  7F E4 FB 78 */	mr r4, r31
/* 802DBE0C 002D8D4C  4B F6 5E E5 */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802DBE10 002D8D50  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802DBE14 002D8D54  7F E4 FB 78 */	mr r4, r31
/* 802DBE18 002D8D58  38 A0 00 01 */	li r5, 1
/* 802DBE1C 002D8D5C  38 C0 00 00 */	li r6, 0
/* 802DBE20 002D8D60  81 83 00 00 */	lwz r12, 0(r3)
/* 802DBE24 002D8D64  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802DBE28 002D8D68  7D 89 03 A6 */	mtctr r12
/* 802DBE2C 002D8D6C  4E 80 04 21 */	bctrl 
/* 802DBE30 002D8D70  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802DBE34 002D8D74  28 03 00 00 */	cmplwi r3, 0
/* 802DBE38 002D8D78  41 82 00 34 */	beq .L_802DBE6C
/* 802DBE3C 002D8D7C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802DBE40 002D8D80  2C 00 00 04 */	cmpwi r0, 4
/* 802DBE44 002D8D84  40 82 00 28 */	bne .L_802DBE6C
/* 802DBE48 002D8D88  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802DBE4C 002D8D8C  7F E4 FB 78 */	mr r4, r31
/* 802DBE50 002D8D90  38 A0 00 02 */	li r5, 2
/* 802DBE54 002D8D94  38 C0 00 00 */	li r6, 0
/* 802DBE58 002D8D98  81 83 00 00 */	lwz r12, 0(r3)
/* 802DBE5C 002D8D9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802DBE60 002D8DA0  7D 89 03 A6 */	mtctr r12
/* 802DBE64 002D8DA4  4E 80 04 21 */	bctrl 
/* 802DBE68 002D8DA8  48 00 00 18 */	b .L_802DBE80
.L_802DBE6C:
/* 802DBE6C 002D8DAC  7F E3 FB 78 */	mr r3, r31
/* 802DBE70 002D8DB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802DBE74 002D8DB4  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 802DBE78 002D8DB8  7D 89 03 A6 */	mtctr r12
/* 802DBE7C 002D8DBC  4E 80 04 21 */	bctrl 
.L_802DBE80:
/* 802DBE80 002D8DC0  7F E3 FB 78 */	mr r3, r31
/* 802DBE84 002D8DC4  48 00 4E F9 */	bl startShineParticleEffect__Q34Game11BigTreasure3ObjFv
/* 802DBE88 002D8DC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DBE8C 002D8DCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DBE90 002D8DD0  7C 08 03 A6 */	mtlr r0
/* 802DBE94 002D8DD4  38 21 00 10 */	addi r1, r1, 0x10
/* 802DBE98 002D8DD8  4E 80 00 20 */	blr 

.global onKill__Q34Game11BigTreasure3ObjFPQ24Game15CreatureKillArg
onKill__Q34Game11BigTreasure3ObjFPQ24Game15CreatureKillArg:
/* 802DBE9C 002D8DDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DBEA0 002D8DE0  7C 08 02 A6 */	mflr r0
/* 802DBEA4 002D8DE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DBEA8 002D8DE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DBEAC 002D8DEC  7C 9F 23 78 */	mr r31, r4
/* 802DBEB0 002D8DF0  93 C1 00 08 */	stw r30, 8(r1)
/* 802DBEB4 002D8DF4  7C 7E 1B 78 */	mr r30, r3
/* 802DBEB8 002D8DF8  48 00 4E F9 */	bl finishShineParticleEffect__Q34Game11BigTreasure3ObjFv
/* 802DBEBC 002D8DFC  7F C3 F3 78 */	mr r3, r30
/* 802DBEC0 002D8E00  48 00 1D 01 */	bl releaseItemLoozy__Q34Game11BigTreasure3ObjFv
/* 802DBEC4 002D8E04  7F C3 F3 78 */	mr r3, r30
/* 802DBEC8 002D8E08  7F E4 FB 78 */	mr r4, r31
/* 802DBECC 002D8E0C  4B E2 60 1D */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 802DBED0 002D8E10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DBED4 002D8E14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DBED8 002D8E18  83 C1 00 08 */	lwz r30, 8(r1)
/* 802DBEDC 002D8E1C  7C 08 03 A6 */	mtlr r0
/* 802DBEE0 002D8E20  38 21 00 10 */	addi r1, r1, 0x10
/* 802DBEE4 002D8E24  4E 80 00 20 */	blr 

.global doUpdate__Q34Game11BigTreasure3ObjFv
doUpdate__Q34Game11BigTreasure3ObjFv:
/* 802DBEE8 002D8E28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DBEEC 002D8E2C  7C 08 02 A6 */	mflr r0
/* 802DBEF0 002D8E30  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DBEF4 002D8E34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DBEF8 002D8E38  7C 7F 1B 78 */	mr r31, r3
/* 802DBEFC 002D8E3C  48 00 2B 95 */	bl updateMaterialColor__Q34Game11BigTreasure3ObjFv
/* 802DBF00 002D8E40  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802DBF04 002D8E44  7F E4 FB 78 */	mr r4, r31
/* 802DBF08 002D8E48  81 83 00 00 */	lwz r12, 0(r3)
/* 802DBF0C 002D8E4C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802DBF10 002D8E50  7D 89 03 A6 */	mtctr r12
/* 802DBF14 002D8E54  4E 80 04 21 */	bctrl 
/* 802DBF18 002D8E58  7F E3 FB 78 */	mr r3, r31
/* 802DBF1C 002D8E5C  48 00 0D F5 */	bl updateIKSystem__Q34Game11BigTreasure3ObjFv
/* 802DBF20 002D8E60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DBF24 002D8E64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DBF28 002D8E68  7C 08 03 A6 */	mtlr r0
/* 802DBF2C 002D8E6C  38 21 00 10 */	addi r1, r1, 0x10
/* 802DBF30 002D8E70  4E 80 00 20 */	blr 

.global doUpdateCommon__Q34Game11BigTreasure3ObjFv
doUpdateCommon__Q34Game11BigTreasure3ObjFv:
/* 802DBF34 002D8E74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DBF38 002D8E78  7C 08 02 A6 */	mflr r0
/* 802DBF3C 002D8E7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DBF40 002D8E80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DBF44 002D8E84  7C 7F 1B 78 */	mr r31, r3
/* 802DBF48 002D8E88  48 00 1D 51 */	bl updateAttack__Q34Game11BigTreasure3ObjFv
/* 802DBF4C 002D8E8C  7F E3 FB 78 */	mr r3, r31
/* 802DBF50 002D8E90  4B E2 6F C5 */	bl doUpdateCommon__Q24Game9EnemyBaseFv
/* 802DBF54 002D8E94  7F E3 FB 78 */	mr r3, r31
/* 802DBF58 002D8E98  48 00 37 C5 */	bl updateBossBGM__Q34Game11BigTreasure3ObjFv
/* 802DBF5C 002D8E9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DBF60 002D8EA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DBF64 002D8EA4  7C 08 03 A6 */	mtlr r0
/* 802DBF68 002D8EA8  38 21 00 10 */	addi r1, r1, 0x10
/* 802DBF6C 002D8EAC  4E 80 00 20 */	blr 

.global doAnimationUpdateAnimator__Q34Game11BigTreasure3ObjFv
doAnimationUpdateAnimator__Q34Game11BigTreasure3ObjFv:
/* 802DBF70 002D8EB0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802DBF74 002D8EB4  7C 08 02 A6 */	mflr r0
/* 802DBF78 002D8EB8  3C A0 80 4B */	lis r5, __vt__Q28SysShape13BlendFunction@ha
/* 802DBF7C 002D8EBC  3C 80 80 4B */	lis r4, __vt__Q28SysShape14BlendLinearFun@ha
/* 802DBF80 002D8EC0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802DBF84 002D8EC4  38 05 AD 94 */	addi r0, r5, __vt__Q28SysShape13BlendFunction@l
/* 802DBF88 002D8EC8  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 802DBF8C 002D8ECC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802DBF90 002D8ED0  7C 7F 1B 78 */	mr r31, r3
/* 802DBF94 002D8ED4  C0 02 E8 D8 */	lfs f0, lbl_8051CC38@sda21(r2)
/* 802DBF98 002D8ED8  90 01 00 08 */	stw r0, 8(r1)
/* 802DBF9C 002D8EDC  38 04 F8 18 */	addi r0, r4, __vt__Q28SysShape14BlendLinearFun@l
/* 802DBFA0 002D8EE0  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 802DBFA4 002D8EE4  38 81 00 08 */	addi r4, r1, 8
/* 802DBFA8 002D8EE8  90 01 00 08 */	stw r0, 8(r1)
/* 802DBFAC 002D8EEC  C0 65 00 54 */	lfs f3, 0x54(r5)
/* 802DBFB0 002D8EF0  80 63 01 84 */	lwz r3, 0x184(r3)
/* 802DBFB4 002D8EF4  EC 41 00 F2 */	fmuls f2, f1, f3
/* 802DBFB8 002D8EF8  EC 20 00 F2 */	fmuls f1, f0, f3
/* 802DBFBC 002D8EFC  FC 60 10 90 */	fmr f3, f2
/* 802DBFC0 002D8F00  4B E5 22 6D */	bl animate__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape13BlendFunctionfff
/* 802DBFC4 002D8F04  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 802DBFC8 002D8F08  85 83 00 10 */	lwzu r12, 0x10(r3)
/* 802DBFCC 002D8F0C  83 FF 01 74 */	lwz r31, 0x174(r31)
/* 802DBFD0 002D8F10  81 8C 00 08 */	lwz r12, 8(r12)
/* 802DBFD4 002D8F14  7D 89 03 A6 */	mtctr r12
/* 802DBFD8 002D8F18  4E 80 04 21 */	bctrl 
/* 802DBFDC 002D8F1C  80 9F 00 08 */	lwz r4, 8(r31)
/* 802DBFE0 002D8F20  80 84 00 04 */	lwz r4, 4(r4)
/* 802DBFE4 002D8F24  80 84 00 28 */	lwz r4, 0x28(r4)
/* 802DBFE8 002D8F28  80 84 00 00 */	lwz r4, 0(r4)
/* 802DBFEC 002D8F2C  90 64 00 54 */	stw r3, 0x54(r4)
/* 802DBFF0 002D8F30  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802DBFF4 002D8F34  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802DBFF8 002D8F38  7C 08 03 A6 */	mtlr r0
/* 802DBFFC 002D8F3C  38 21 00 20 */	addi r1, r1, 0x20
/* 802DC000 002D8F40  4E 80 00 20 */	blr 

.global doAnimationCullingOff__Q34Game11BigTreasure3ObjFv
doAnimationCullingOff__Q34Game11BigTreasure3ObjFv:
/* 802DC004 002D8F44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DC008 002D8F48  7C 08 02 A6 */	mflr r0
/* 802DC00C 002D8F4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DC010 002D8F50  38 00 00 00 */	li r0, 0
/* 802DC014 002D8F54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DC018 002D8F58  7C 7F 1B 78 */	mr r31, r3
/* 802DC01C 002D8F5C  80 83 01 88 */	lwz r4, 0x188(r3)
/* 802DC020 002D8F60  98 04 00 24 */	stb r0, 0x24(r4)
/* 802DC024 002D8F64  81 83 00 00 */	lwz r12, 0(r3)
/* 802DC028 002D8F68  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 802DC02C 002D8F6C  7D 89 03 A6 */	mtctr r12
/* 802DC030 002D8F70  4E 80 04 21 */	bctrl 
/* 802DC034 002D8F74  7F E3 FB 78 */	mr r3, r31
/* 802DC038 002D8F78  48 00 0D 39 */	bl doAnimationIKSystem__Q34Game11BigTreasure3ObjFv
/* 802DC03C 002D8F7C  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802DC040 002D8F80  38 7F 01 38 */	addi r3, r31, 0x138
/* 802DC044 002D8F84  80 84 00 08 */	lwz r4, 8(r4)
/* 802DC048 002D8F88  38 84 00 24 */	addi r4, r4, 0x24
/* 802DC04C 002D8F8C  4B E0 E2 81 */	bl PSMTXCopy
/* 802DC050 002D8F90  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802DC054 002D8F94  80 63 00 08 */	lwz r3, 8(r3)
/* 802DC058 002D8F98  81 83 00 00 */	lwz r12, 0(r3)
/* 802DC05C 002D8F9C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802DC060 002D8FA0  7D 89 03 A6 */	mtctr r12
/* 802DC064 002D8FA4  4E 80 04 21 */	bctrl 
/* 802DC068 002D8FA8  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 802DC06C 002D8FAC  4B E5 9A 31 */	bl update__8CollTreeFv
/* 802DC070 002D8FB0  7F E3 FB 78 */	mr r3, r31
/* 802DC074 002D8FB4  48 00 0F A5 */	bl doAnimationShadowSystem__Q34Game11BigTreasure3ObjFv
/* 802DC078 002D8FB8  7F E3 FB 78 */	mr r3, r31
/* 802DC07C 002D8FBC  48 00 13 AD */	bl updateTreasure__Q34Game11BigTreasure3ObjFv
/* 802DC080 002D8FC0  7F E3 FB 78 */	mr r3, r31
/* 802DC084 002D8FC4  48 00 0D 4D */	bl finishAnimationIKSystem__Q34Game11BigTreasure3ObjFv
/* 802DC088 002D8FC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DC08C 002D8FCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DC090 002D8FD0  7C 08 03 A6 */	mtlr r0
/* 802DC094 002D8FD4  38 21 00 10 */	addi r1, r1, 0x10
/* 802DC098 002D8FD8  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game11BigTreasure3ObjFv
changeMaterial__Q34Game11BigTreasure3ObjFv:
/* 802DC09C 002D8FDC  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 802DC0A0 002D8FE0  7C 08 02 A6 */	mflr r0
/* 802DC0A4 002D8FE4  3C 80 80 49 */	lis r4, lbl_8048CA80@ha
/* 802DC0A8 002D8FE8  90 01 00 74 */	stw r0, 0x74(r1)
/* 802DC0AC 002D8FEC  BF 21 00 54 */	stmw r25, 0x54(r1)
/* 802DC0B0 002D8FF0  7C 7E 1B 78 */	mr r30, r3
/* 802DC0B4 002D8FF4  3B A4 CA 80 */	addi r29, r4, lbl_8048CA80@l
/* 802DC0B8 002D8FF8  38 9D 00 1C */	addi r4, r29, 0x1c
/* 802DC0BC 002D8FFC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802DC0C0 002D9000  83 E3 00 08 */	lwz r31, 8(r3)
/* 802DC0C4 002D9004  83 9F 00 04 */	lwz r28, 4(r31)
/* 802DC0C8 002D9008  80 7C 00 64 */	lwz r3, 0x64(r28)
/* 802DC0CC 002D900C  4B D5 2C B9 */	bl getIndex__10JUTNameTabCFPCc
/* 802DC0D0 002D9010  80 9C 00 60 */	lwz r4, 0x60(r28)
/* 802DC0D4 002D9014  54 63 13 BA */	rlwinm r3, r3, 2, 0xe, 0x1d
/* 802DC0D8 002D9018  A8 1E 04 14 */	lha r0, 0x414(r30)
/* 802DC0DC 002D901C  38 A1 00 18 */	addi r5, r1, 0x18
/* 802DC0E0 002D9020  7C 64 18 2E */	lwzx r3, r4, r3
/* 802DC0E4 002D9024  38 80 00 00 */	li r4, 0
/* 802DC0E8 002D9028  B0 01 00 18 */	sth r0, 0x18(r1)
/* 802DC0EC 002D902C  A8 1E 04 16 */	lha r0, 0x416(r30)
/* 802DC0F0 002D9030  B0 01 00 1A */	sth r0, 0x1a(r1)
/* 802DC0F4 002D9034  A8 1E 04 18 */	lha r0, 0x418(r30)
/* 802DC0F8 002D9038  B0 01 00 1C */	sth r0, 0x1c(r1)
/* 802DC0FC 002D903C  A8 1E 04 1A */	lha r0, 0x41a(r30)
/* 802DC100 002D9040  B0 01 00 1E */	sth r0, 0x1e(r1)
/* 802DC104 002D9044  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 802DC108 002D9048  81 83 00 00 */	lwz r12, 0(r3)
/* 802DC10C 002D904C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802DC110 002D9050  7D 89 03 A6 */	mtctr r12
/* 802DC114 002D9054  4E 80 04 21 */	bctrl 
/* 802DC118 002D9058  C0 5E 04 50 */	lfs f2, 0x450(r30)
/* 802DC11C 002D905C  38 9D 00 28 */	addi r4, r29, 0x28
/* 802DC120 002D9060  C0 3E 04 54 */	lfs f1, 0x454(r30)
/* 802DC124 002D9064  C0 1E 04 58 */	lfs f0, 0x458(r30)
/* 802DC128 002D9068  FC 40 10 1E */	fctiwz f2, f2
/* 802DC12C 002D906C  FC 20 08 1E */	fctiwz f1, f1
/* 802DC130 002D9070  80 7C 00 64 */	lwz r3, 0x64(r28)
/* 802DC134 002D9074  FC 00 00 1E */	fctiwz f0, f0
/* 802DC138 002D9078  D8 41 00 20 */	stfd f2, 0x20(r1)
/* 802DC13C 002D907C  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 802DC140 002D9080  83 61 00 24 */	lwz r27, 0x24(r1)
/* 802DC144 002D9084  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802DC148 002D9088  83 41 00 2C */	lwz r26, 0x2c(r1)
/* 802DC14C 002D908C  83 21 00 34 */	lwz r25, 0x34(r1)
/* 802DC150 002D9090  4B D5 2C 35 */	bl getIndex__10JUTNameTabCFPCc
/* 802DC154 002D9094  80 9C 00 60 */	lwz r4, 0x60(r28)
/* 802DC158 002D9098  54 63 13 BA */	rlwinm r3, r3, 2, 0xe, 0x1d
/* 802DC15C 002D909C  38 00 00 FF */	li r0, 0xff
/* 802DC160 002D90A0  38 A1 00 10 */	addi r5, r1, 0x10
/* 802DC164 002D90A4  7C 64 18 2E */	lwzx r3, r4, r3
/* 802DC168 002D90A8  38 80 00 00 */	li r4, 0
/* 802DC16C 002D90AC  B3 61 00 10 */	sth r27, 0x10(r1)
/* 802DC170 002D90B0  B3 41 00 12 */	sth r26, 0x12(r1)
/* 802DC174 002D90B4  B3 21 00 14 */	sth r25, 0x14(r1)
/* 802DC178 002D90B8  B0 01 00 16 */	sth r0, 0x16(r1)
/* 802DC17C 002D90BC  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 802DC180 002D90C0  81 83 00 00 */	lwz r12, 0(r3)
/* 802DC184 002D90C4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802DC188 002D90C8  7D 89 03 A6 */	mtctr r12
/* 802DC18C 002D90CC  4E 80 04 21 */	bctrl 
/* 802DC190 002D90D0  C0 5E 04 74 */	lfs f2, 0x474(r30)
/* 802DC194 002D90D4  38 9D 00 34 */	addi r4, r29, 0x34
/* 802DC198 002D90D8  C0 3E 04 78 */	lfs f1, 0x478(r30)
/* 802DC19C 002D90DC  C0 1E 04 7C */	lfs f0, 0x47c(r30)
/* 802DC1A0 002D90E0  FC 40 10 1E */	fctiwz f2, f2
/* 802DC1A4 002D90E4  FC 20 08 1E */	fctiwz f1, f1
/* 802DC1A8 002D90E8  80 7C 00 64 */	lwz r3, 0x64(r28)
/* 802DC1AC 002D90EC  FC 00 00 1E */	fctiwz f0, f0
/* 802DC1B0 002D90F0  D8 41 00 38 */	stfd f2, 0x38(r1)
/* 802DC1B4 002D90F4  D8 21 00 40 */	stfd f1, 0x40(r1)
/* 802DC1B8 002D90F8  83 21 00 3C */	lwz r25, 0x3c(r1)
/* 802DC1BC 002D90FC  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 802DC1C0 002D9100  83 41 00 44 */	lwz r26, 0x44(r1)
/* 802DC1C4 002D9104  83 61 00 4C */	lwz r27, 0x4c(r1)
/* 802DC1C8 002D9108  4B D5 2B BD */	bl getIndex__10JUTNameTabCFPCc
/* 802DC1CC 002D910C  80 9C 00 60 */	lwz r4, 0x60(r28)
/* 802DC1D0 002D9110  54 63 13 BA */	rlwinm r3, r3, 2, 0xe, 0x1d
/* 802DC1D4 002D9114  38 00 00 FF */	li r0, 0xff
/* 802DC1D8 002D9118  38 A1 00 08 */	addi r5, r1, 8
/* 802DC1DC 002D911C  7C 64 18 2E */	lwzx r3, r4, r3
/* 802DC1E0 002D9120  38 80 00 00 */	li r4, 0
/* 802DC1E4 002D9124  B3 21 00 08 */	sth r25, 8(r1)
/* 802DC1E8 002D9128  B3 41 00 0A */	sth r26, 0xa(r1)
/* 802DC1EC 002D912C  B3 61 00 0C */	sth r27, 0xc(r1)
/* 802DC1F0 002D9130  B0 01 00 0E */	sth r0, 0xe(r1)
/* 802DC1F4 002D9134  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 802DC1F8 002D9138  81 83 00 00 */	lwz r12, 0(r3)
/* 802DC1FC 002D913C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802DC200 002D9140  7D 89 03 A6 */	mtctr r12
/* 802DC204 002D9144  4E 80 04 21 */	bctrl 
/* 802DC208 002D9148  7F E3 FB 78 */	mr r3, r31
/* 802DC20C 002D914C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802DC210 002D9150  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802DC214 002D9154  7D 89 03 A6 */	mtctr r12
/* 802DC218 002D9158  4E 80 04 21 */	bctrl 
/* 802DC21C 002D915C  BB 21 00 54 */	lmw r25, 0x54(r1)
/* 802DC220 002D9160  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802DC224 002D9164  7C 08 03 A6 */	mtlr r0
/* 802DC228 002D9168  38 21 00 70 */	addi r1, r1, 0x70
/* 802DC22C 002D916C  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game11BigTreasure3ObjFR8Graphics
doDirectDraw__Q34Game11BigTreasure3ObjFR8Graphics:
/* 802DC230 002D9170  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game11BigTreasure3ObjFR8Graphics
doDebugDraw__Q34Game11BigTreasure3ObjFR8Graphics:
/* 802DC234 002D9174  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DC238 002D9178  7C 08 02 A6 */	mflr r0
/* 802DC23C 002D917C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DC240 002D9180  4B E2 9C 2D */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802DC244 002D9184  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DC248 002D9188  7C 08 03 A6 */	mtlr r0
/* 802DC24C 002D918C  38 21 00 10 */	addi r1, r1, 0x10
/* 802DC250 002D9190  4E 80 00 20 */	blr 

.global setFSM__Q34Game11BigTreasure3ObjFPQ34Game11BigTreasure3FSM
setFSM__Q34Game11BigTreasure3ObjFPQ34Game11BigTreasure3FSM:
/* 802DC254 002D9194  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DC258 002D9198  7C 08 02 A6 */	mflr r0
/* 802DC25C 002D919C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DC260 002D91A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DC264 002D91A4  7C 7F 1B 78 */	mr r31, r3
/* 802DC268 002D91A8  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802DC26C 002D91AC  7F E4 FB 78 */	mr r4, r31
/* 802DC270 002D91B0  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802DC274 002D91B4  81 83 00 00 */	lwz r12, 0(r3)
/* 802DC278 002D91B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802DC27C 002D91BC  7D 89 03 A6 */	mtctr r12
/* 802DC280 002D91C0  4E 80 04 21 */	bctrl 
/* 802DC284 002D91C4  38 00 00 00 */	li r0, 0
/* 802DC288 002D91C8  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802DC28C 002D91CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DC290 002D91D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DC294 002D91D4  7C 08 03 A6 */	mtlr r0
/* 802DC298 002D91D8  38 21 00 10 */	addi r1, r1, 0x10
/* 802DC29C 002D91DC  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game11BigTreasure3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game11BigTreasure3ObjFRQ24Game11ShadowParam:
/* 802DC2A0 002D91E0  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802DC2A4 002D91E4  C0 42 E8 D0 */	lfs f2, lbl_8051CC30@sda21(r2)
/* 802DC2A8 002D91E8  D0 04 00 00 */	stfs f0, 0(r4)
/* 802DC2AC 002D91EC  C0 22 E8 D4 */	lfs f1, lbl_8051CC34@sda21(r2)
/* 802DC2B0 002D91F0  C0 63 01 90 */	lfs f3, 0x190(r3)
/* 802DC2B4 002D91F4  C0 02 E8 DC */	lfs f0, lbl_8051CC3C@sda21(r2)
/* 802DC2B8 002D91F8  D0 64 00 04 */	stfs f3, 4(r4)
/* 802DC2BC 002D91FC  C0 63 01 94 */	lfs f3, 0x194(r3)
/* 802DC2C0 002D9200  D0 64 00 08 */	stfs f3, 8(r4)
/* 802DC2C4 002D9204  D0 44 00 0C */	stfs f2, 0xc(r4)
/* 802DC2C8 002D9208  D0 24 00 10 */	stfs f1, 0x10(r4)
/* 802DC2CC 002D920C  D0 44 00 14 */	stfs f2, 0x14(r4)
/* 802DC2D0 002D9210  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 802DC2D4 002D9214  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 802DC2D8 002D9218  4E 80 00 20 */	blr 

.global damageCallBack__Q34Game11BigTreasure3ObjFPQ24Game8CreaturefP8CollPart
damageCallBack__Q34Game11BigTreasure3ObjFPQ24Game8CreaturefP8CollPart:
/* 802DC2DC 002D921C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802DC2E0 002D9220  7C 08 02 A6 */	mflr r0
/* 802DC2E4 002D9224  90 01 00 24 */	stw r0, 0x24(r1)
/* 802DC2E8 002D9228  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802DC2EC 002D922C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802DC2F0 002D9230  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DC2F4 002D9234  93 C1 00 08 */	stw r30, 8(r1)
/* 802DC2F8 002D9238  7C BF 2B 79 */	or. r31, r5, r5
/* 802DC2FC 002D923C  FF E0 08 90 */	fmr f31, f1
/* 802DC300 002D9240  7C 7E 1B 78 */	mr r30, r3
/* 802DC304 002D9244  41 82 00 B4 */	beq .L_802DC3B8
/* 802DC308 002D9248  28 04 00 00 */	cmplwi r4, 0
/* 802DC30C 002D924C  41 82 00 AC */	beq .L_802DC3B8
/* 802DC310 002D9250  7C 83 23 78 */	mr r3, r4
/* 802DC314 002D9254  81 84 00 00 */	lwz r12, 0(r4)
/* 802DC318 002D9258  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802DC31C 002D925C  7D 89 03 A6 */	mtctr r12
/* 802DC320 002D9260  4E 80 04 21 */	bctrl 
/* 802DC324 002D9264  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DC328 002D9268  41 82 00 90 */	beq .L_802DC3B8
/* 802DC32C 002D926C  7F C3 F3 78 */	mr r3, r30
/* 802DC330 002D9270  4B E2 B0 C5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802DC334 002D9274  2C 03 00 02 */	cmpwi r3, 2
/* 802DC338 002D9278  40 82 00 0C */	bne .L_802DC344
/* 802DC33C 002D927C  C0 02 E8 E0 */	lfs f0, lbl_8051CC40@sda21(r2)
/* 802DC340 002D9280  EF FF 00 32 */	fmuls f31, f31, f0
.L_802DC344:
/* 802DC344 002D9284  38 00 00 04 */	li r0, 4
/* 802DC348 002D9288  7F C3 F3 78 */	mr r3, r30
/* 802DC34C 002D928C  38 80 00 00 */	li r4, 0
/* 802DC350 002D9290  7C 09 03 A6 */	mtctr r0
.L_802DC354:
/* 802DC354 002D9294  80 03 03 F8 */	lwz r0, 0x3f8(r3)
/* 802DC358 002D9298  7C 00 F8 40 */	cmplw r0, r31
/* 802DC35C 002D929C  40 82 00 28 */	bne .L_802DC384
/* 802DC360 002D92A0  FC 20 F8 90 */	fmr f1, f31
/* 802DC364 002D92A4  7F C3 F3 78 */	mr r3, r30
/* 802DC368 002D92A8  48 00 15 35 */	bl addTreasureDamage__Q34Game11BigTreasure3ObjFif
/* 802DC36C 002D92AC  C0 3E 02 0C */	lfs f1, 0x20c(r30)
/* 802DC370 002D92B0  38 60 00 01 */	li r3, 1
/* 802DC374 002D92B4  C0 02 E8 D4 */	lfs f0, lbl_8051CC34@sda21(r2)
/* 802DC378 002D92B8  EC 01 00 2A */	fadds f0, f1, f0
/* 802DC37C 002D92BC  D0 1E 02 0C */	stfs f0, 0x20c(r30)
/* 802DC380 002D92C0  48 00 00 3C */	b .L_802DC3BC
.L_802DC384:
/* 802DC384 002D92C4  38 63 00 04 */	addi r3, r3, 4
/* 802DC388 002D92C8  38 84 00 01 */	addi r4, r4, 1
/* 802DC38C 002D92CC  42 00 FF C8 */	bdnz .L_802DC354
/* 802DC390 002D92D0  7F C3 F3 78 */	mr r3, r30
/* 802DC394 002D92D4  48 00 14 45 */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFv
/* 802DC398 002D92D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DC39C 002D92DC  40 82 00 1C */	bne .L_802DC3B8
/* 802DC3A0 002D92E0  FC 20 F8 90 */	fmr f1, f31
/* 802DC3A4 002D92E4  C0 42 E8 D4 */	lfs f2, lbl_8051CC34@sda21(r2)
/* 802DC3A8 002D92E8  7F C3 F3 78 */	mr r3, r30
/* 802DC3AC 002D92EC  4B E2 9C 81 */	bl addDamage__Q24Game9EnemyBaseFff
/* 802DC3B0 002D92F0  38 60 00 01 */	li r3, 1
/* 802DC3B4 002D92F4  48 00 00 08 */	b .L_802DC3BC
.L_802DC3B8:
/* 802DC3B8 002D92F8  38 60 00 00 */	li r3, 0
.L_802DC3BC:
/* 802DC3BC 002D92FC  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802DC3C0 002D9300  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802DC3C4 002D9304  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802DC3C8 002D9308  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DC3CC 002D930C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802DC3D0 002D9310  7C 08 03 A6 */	mtlr r0
/* 802DC3D4 002D9314  38 21 00 20 */	addi r1, r1, 0x20
/* 802DC3D8 002D9318  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game11BigTreasure3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game11BigTreasure3ObjFPQ24Game8CreaturefP8CollPart:
/* 802DC3DC 002D931C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DC3E0 002D9320  7C 08 02 A6 */	mflr r0
/* 802DC3E4 002D9324  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DC3E8 002D9328  81 83 00 00 */	lwz r12, 0(r3)
/* 802DC3EC 002D932C  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 802DC3F0 002D9330  7D 89 03 A6 */	mtctr r12
/* 802DC3F4 002D9334  4E 80 04 21 */	bctrl 
/* 802DC3F8 002D9338  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 802DC3FC 002D933C  7C 00 00 34 */	cntlzw r0, r0
/* 802DC400 002D9340  54 03 D9 7E */	srwi r3, r0, 5
/* 802DC404 002D9344  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DC408 002D9348  7C 08 03 A6 */	mtlr r0
/* 802DC40C 002D934C  38 21 00 10 */	addi r1, r1, 0x10
/* 802DC410 002D9350  4E 80 00 20 */	blr 

.global doStartStoneState__Q34Game11BigTreasure3ObjFv
doStartStoneState__Q34Game11BigTreasure3ObjFv:
/* 802DC414 002D9354  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DC418 002D9358  7C 08 02 A6 */	mflr r0
/* 802DC41C 002D935C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DC420 002D9360  4B E2 6A D5 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802DC424 002D9364  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DC428 002D9368  7C 08 03 A6 */	mtlr r0
/* 802DC42C 002D936C  38 21 00 10 */	addi r1, r1, 0x10
/* 802DC430 002D9370  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game11BigTreasure3ObjFv
doFinishStoneState__Q34Game11BigTreasure3ObjFv:
/* 802DC434 002D9374  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DC438 002D9378  7C 08 02 A6 */	mflr r0
/* 802DC43C 002D937C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DC440 002D9380  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DC444 002D9384  7C 7F 1B 78 */	mr r31, r3
/* 802DC448 002D9388  4B E2 6A C1 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802DC44C 002D938C  C0 22 E8 D4 */	lfs f1, lbl_8051CC34@sda21(r2)
/* 802DC450 002D9390  7F E3 FB 78 */	mr r3, r31
/* 802DC454 002D9394  C0 42 E8 E4 */	lfs f2, lbl_8051CC44@sda21(r2)
/* 802DC458 002D9398  38 80 00 00 */	li r4, 0
/* 802DC45C 002D939C  C0 62 E8 D0 */	lfs f3, lbl_8051CC30@sda21(r2)
/* 802DC460 002D93A0  C0 82 E8 E8 */	lfs f4, lbl_8051CC48@sda21(r2)
/* 802DC464 002D93A4  4B E3 6C B9 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802DC468 002D93A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DC46C 002D93AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DC470 002D93B0  7C 08 03 A6 */	mtlr r0
/* 802DC474 002D93B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802DC478 002D93B8  4E 80 00 20 */	blr 

.global doStartMovie__Q34Game11BigTreasure3ObjFv
doStartMovie__Q34Game11BigTreasure3ObjFv:
/* 802DC47C 002D93BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DC480 002D93C0  7C 08 02 A6 */	mflr r0
/* 802DC484 002D93C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DC488 002D93C8  48 00 4B 1D */	bl effectDrawOff__Q34Game11BigTreasure3ObjFv
/* 802DC48C 002D93CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DC490 002D93D0  7C 08 03 A6 */	mtlr r0
/* 802DC494 002D93D4  38 21 00 10 */	addi r1, r1, 0x10
/* 802DC498 002D93D8  4E 80 00 20 */	blr 

.global doEndMovie__Q34Game11BigTreasure3ObjFv
doEndMovie__Q34Game11BigTreasure3ObjFv:
/* 802DC49C 002D93DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DC4A0 002D93E0  7C 08 02 A6 */	mflr r0
/* 802DC4A4 002D93E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DC4A8 002D93E8  48 00 49 39 */	bl effectDrawOn__Q34Game11BigTreasure3ObjFv
/* 802DC4AC 002D93EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DC4B0 002D93F0  7C 08 03 A6 */	mtlr r0
/* 802DC4B4 002D93F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802DC4B8 002D93F8  4E 80 00 20 */	blr 

.global "getThrowupItemPosition__Q34Game11BigTreasure3ObjFP10Vector3<f>"
"getThrowupItemPosition__Q34Game11BigTreasure3ObjFP10Vector3<f>":
/* 802DC4BC 002D93FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DC4C0 002D9400  7C 08 02 A6 */	mflr r0
/* 802DC4C4 002D9404  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DC4C8 002D9408  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DC4CC 002D940C  7C 9F 23 78 */	mr r31, r4
/* 802DC4D0 002D9410  38 82 E8 EC */	addi r4, r2, lbl_8051CC4C@sda21
/* 802DC4D4 002D9414  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802DC4D8 002D9418  48 16 2B 0D */	bl getJoint__Q28SysShape5ModelFPc
/* 802DC4DC 002D941C  48 14 D3 C5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802DC4E0 002D9420  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802DC4E4 002D9424  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802DC4E8 002D9428  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802DC4EC 002D942C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802DC4F0 002D9430  D0 3F 00 04 */	stfs f1, 4(r31)
/* 802DC4F4 002D9434  D0 5F 00 08 */	stfs f2, 8(r31)
/* 802DC4F8 002D9438  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DC4FC 002D943C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DC500 002D9440  7C 08 03 A6 */	mtlr r0
/* 802DC504 002D9444  38 21 00 10 */	addi r1, r1, 0x10
/* 802DC508 002D9448  4E 80 00 20 */	blr 

.global "getThrowupItemVelocity__Q34Game11BigTreasure3ObjFP10Vector3<f>"
"getThrowupItemVelocity__Q34Game11BigTreasure3ObjFP10Vector3<f>":
/* 802DC50C 002D944C  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DC510 002D9450  D0 04 00 08 */	stfs f0, 8(r4)
/* 802DC514 002D9454  D0 04 00 04 */	stfs f0, 4(r4)
/* 802DC518 002D9458  D0 04 00 00 */	stfs f0, 0(r4)
/* 802DC51C 002D945C  4E 80 00 20 */	blr 

.global resetAttackLimitTimer__Q34Game11BigTreasure3ObjFv
resetAttackLimitTimer__Q34Game11BigTreasure3ObjFv:
/* 802DC520 002D9460  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802DC524 002D9464  7C 08 02 A6 */	mflr r0
/* 802DC528 002D9468  90 01 00 24 */	stw r0, 0x24(r1)
/* 802DC52C 002D946C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802DC530 002D9470  7C 7F 1B 78 */	mr r31, r3
/* 802DC534 002D9474  4B DE D0 6D */	bl rand
/* 802DC538 002D9478  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802DC53C 002D947C  3C 00 43 30 */	lis r0, 0x4330
/* 802DC540 002D9480  90 61 00 0C */	stw r3, 0xc(r1)
/* 802DC544 002D9484  C8 62 E9 00 */	lfd f3, lbl_8051CC60@sda21(r2)
/* 802DC548 002D9488  90 01 00 08 */	stw r0, 8(r1)
/* 802DC54C 002D948C  C0 22 E8 F4 */	lfs f1, lbl_8051CC54@sda21(r2)
/* 802DC550 002D9490  C8 41 00 08 */	lfd f2, 8(r1)
/* 802DC554 002D9494  C0 02 E8 F8 */	lfs f0, lbl_8051CC58@sda21(r2)
/* 802DC558 002D9498  EC 42 18 28 */	fsubs f2, f2, f3
/* 802DC55C 002D949C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802DC560 002D94A0  EC 01 00 24 */	fdivs f0, f1, f0
/* 802DC564 002D94A4  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802DC568 002D94A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802DC56C 002D94AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802DC570 002D94B0  7C 08 03 A6 */	mtlr r0
/* 802DC574 002D94B4  38 21 00 20 */	addi r1, r1, 0x20
/* 802DC578 002D94B8  4E 80 00 20 */	blr 

.global isAttackLimitTime__Q34Game11BigTreasure3ObjFv
isAttackLimitTime__Q34Game11BigTreasure3ObjFv:
/* 802DC57C 002D94BC  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 802DC580 002D94C0  7C 08 02 A6 */	mflr r0
/* 802DC584 002D94C4  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 802DC588 002D94C8  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 802DC58C 002D94CC  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 802DC590 002D94D0  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 802DC594 002D94D4  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 802DC598 002D94D8  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 802DC59C 002D94DC  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 802DC5A0 002D94E0  93 E1 00 AC */	stw r31, 0xac(r1)
/* 802DC5A4 002D94E4  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 802DC5A8 002D94E8  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 802DC5AC 002D94EC  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802DC5B0 002D94F0  7C 7D 1B 78 */	mr r29, r3
/* 802DC5B4 002D94F4  C0 02 E9 08 */	lfs f0, lbl_8051CC68@sda21(r2)
/* 802DC5B8 002D94F8  3B E0 00 00 */	li r31, 0
/* 802DC5BC 002D94FC  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 802DC5C0 002D9500  FF E0 08 90 */	fmr f31, f1
/* 802DC5C4 002D9504  EF C0 00 72 */	fmuls f30, f0, f1
/* 802DC5C8 002D9508  48 00 12 89 */	bl getCapturedTreasureNum__Q34Game11BigTreasure3ObjFv
/* 802DC5CC 002D950C  C0 1D 01 8C */	lfs f0, 0x18c(r29)
/* 802DC5D0 002D9510  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802DC5D4 002D9514  3C 00 43 30 */	lis r0, 0x4330
/* 802DC5D8 002D9518  90 61 00 94 */	stw r3, 0x94(r1)
/* 802DC5DC 002D951C  C8 42 E9 00 */	lfd f2, lbl_8051CC60@sda21(r2)
/* 802DC5E0 002D9520  38 61 00 24 */	addi r3, r1, 0x24
/* 802DC5E4 002D9524  90 01 00 90 */	stw r0, 0x90(r1)
/* 802DC5E8 002D9528  38 81 00 14 */	addi r4, r1, 0x14
/* 802DC5EC 002D952C  C0 62 E8 F4 */	lfs f3, lbl_8051CC54@sda21(r2)
/* 802DC5F0 002D9530  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802DC5F4 002D9534  C8 21 00 90 */	lfd f1, 0x90(r1)
/* 802DC5F8 002D9538  C0 1D 01 90 */	lfs f0, 0x190(r29)
/* 802DC5FC 002D953C  EC 81 10 28 */	fsubs f4, f1, f2
/* 802DC600 002D9540  C0 42 E9 0C */	lfs f2, lbl_8051CC6C@sda21(r2)
/* 802DC604 002D9544  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802DC608 002D9548  C0 02 E9 10 */	lfs f0, lbl_8051CC70@sda21(r2)
/* 802DC60C 002D954C  C0 3D 01 94 */	lfs f1, 0x194(r29)
/* 802DC610 002D9550  EF A3 11 3A */	fmadds f29, f3, f4, f2
/* 802DC614 002D9554  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802DC618 002D9558  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802DC61C 002D955C  4B F5 1D 85 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 802DC620 002D9560  38 00 00 01 */	li r0, 1
/* 802DC624 002D9564  38 61 00 44 */	addi r3, r1, 0x44
/* 802DC628 002D9568  98 01 00 40 */	stb r0, 0x40(r1)
/* 802DC62C 002D956C  38 81 00 24 */	addi r4, r1, 0x24
/* 802DC630 002D9570  4B F5 1D B1 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 802DC634 002D9574  38 61 00 44 */	addi r3, r1, 0x44
/* 802DC638 002D9578  4B F5 1E 25 */	bl first__Q24Game12CellIteratorFv
/* 802DC63C 002D957C  48 00 01 04 */	b .L_802DC740
.L_802DC640:
/* 802DC640 002D9580  38 61 00 44 */	addi r3, r1, 0x44
/* 802DC644 002D9584  4B F5 1F 01 */	bl __ml__Q24Game12CellIteratorFv
/* 802DC648 002D9588  81 83 00 00 */	lwz r12, 0(r3)
/* 802DC64C 002D958C  7C 7E 1B 78 */	mr r30, r3
/* 802DC650 002D9590  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802DC654 002D9594  7D 89 03 A6 */	mtctr r12
/* 802DC658 002D9598  4E 80 04 21 */	bctrl 
/* 802DC65C 002D959C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DC660 002D95A0  41 82 00 D8 */	beq .L_802DC738
/* 802DC664 002D95A4  7F C3 F3 78 */	mr r3, r30
/* 802DC668 002D95A8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802DC66C 002D95AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DC670 002D95B0  7D 89 03 A6 */	mtctr r12
/* 802DC674 002D95B4  4E 80 04 21 */	bctrl 
/* 802DC678 002D95B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DC67C 002D95BC  40 82 00 20 */	bne .L_802DC69C
/* 802DC680 002D95C0  7F C3 F3 78 */	mr r3, r30
/* 802DC684 002D95C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802DC688 002D95C8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802DC68C 002D95CC  7D 89 03 A6 */	mtctr r12
/* 802DC690 002D95D0  4E 80 04 21 */	bctrl 
/* 802DC694 002D95D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DC698 002D95D8  41 82 00 A0 */	beq .L_802DC738
.L_802DC69C:
/* 802DC69C 002D95DC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802DC6A0 002D95E0  40 82 00 78 */	bne .L_802DC718
/* 802DC6A4 002D95E4  7F C4 F3 78 */	mr r4, r30
/* 802DC6A8 002D95E8  38 61 00 08 */	addi r3, r1, 8
/* 802DC6AC 002D95EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802DC6B0 002D95F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802DC6B4 002D95F4  7D 89 03 A6 */	mtctr r12
/* 802DC6B8 002D95F8  4E 80 04 21 */	bctrl 
/* 802DC6BC 002D95FC  C0 5D 01 8C */	lfs f2, 0x18c(r29)
/* 802DC6C0 002D9600  C0 21 00 08 */	lfs f1, 8(r1)
/* 802DC6C4 002D9604  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DC6C8 002D9608  EC 22 08 28 */	fsubs f1, f2, f1
/* 802DC6CC 002D960C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 802DC6D0 002D9610  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DC6D4 002D9614  40 81 00 08 */	ble .L_802DC6DC
/* 802DC6D8 002D9618  48 00 00 08 */	b .L_802DC6E0
.L_802DC6DC:
/* 802DC6DC 002D961C  FC 20 08 50 */	fneg f1, f1
.L_802DC6E0:
/* 802DC6E0 002D9620  C0 02 E9 14 */	lfs f0, lbl_8051CC74@sda21(r2)
/* 802DC6E4 002D9624  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DC6E8 002D9628  40 80 00 30 */	bge .L_802DC718
/* 802DC6EC 002D962C  C0 3D 01 94 */	lfs f1, 0x194(r29)
/* 802DC6F0 002D9630  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DC6F4 002D9634  EC 21 10 28 */	fsubs f1, f1, f2
/* 802DC6F8 002D9638  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DC6FC 002D963C  40 81 00 08 */	ble .L_802DC704
/* 802DC700 002D9640  48 00 00 08 */	b .L_802DC708
.L_802DC704:
/* 802DC704 002D9644  FC 20 08 50 */	fneg f1, f1
.L_802DC708:
/* 802DC708 002D9648  C0 02 E9 14 */	lfs f0, lbl_8051CC74@sda21(r2)
/* 802DC70C 002D964C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DC710 002D9650  40 80 00 08 */	bge .L_802DC718
/* 802DC714 002D9654  3B E0 00 01 */	li r31, 1
.L_802DC718:
/* 802DC718 002D9658  7F C3 F3 78 */	mr r3, r30
/* 802DC71C 002D965C  4B EC 2E 59 */	bl isStickTo__Q24Game8CreatureFv
/* 802DC720 002D9660  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DC724 002D9664  41 82 00 14 */	beq .L_802DC738
/* 802DC728 002D9668  80 1E 00 F4 */	lwz r0, 0xf4(r30)
/* 802DC72C 002D966C  7C 00 E8 40 */	cmplw r0, r29
/* 802DC730 002D9670  41 82 00 08 */	beq .L_802DC738
/* 802DC734 002D9674  FF E0 F0 90 */	fmr f31, f30
.L_802DC738:
/* 802DC738 002D9678  38 61 00 44 */	addi r3, r1, 0x44
/* 802DC73C 002D967C  4B F5 1D C5 */	bl next__Q24Game12CellIteratorFv
.L_802DC740:
/* 802DC740 002D9680  38 61 00 44 */	addi r3, r1, 0x44
/* 802DC744 002D9684  4B F5 1D F1 */	bl isDone__Q24Game12CellIteratorFv
/* 802DC748 002D9688  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DC74C 002D968C  41 82 FE F4 */	beq .L_802DC640
/* 802DC750 002D9690  C0 1D 02 C4 */	lfs f0, 0x2c4(r29)
/* 802DC754 002D9694  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 802DC758 002D9698  40 81 00 0C */	ble .L_802DC764
/* 802DC75C 002D969C  7F E3 FB 78 */	mr r3, r31
/* 802DC760 002D96A0  48 00 00 10 */	b .L_802DC770
.L_802DC764:
/* 802DC764 002D96A4  EC 00 F8 2A */	fadds f0, f0, f31
/* 802DC768 002D96A8  38 60 00 00 */	li r3, 0
/* 802DC76C 002D96AC  D0 1D 02 C4 */	stfs f0, 0x2c4(r29)
.L_802DC770:
/* 802DC770 002D96B0  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 802DC774 002D96B4  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 802DC778 002D96B8  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 802DC77C 002D96BC  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 802DC780 002D96C0  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 802DC784 002D96C4  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 802DC788 002D96C8  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 802DC78C 002D96CC  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 802DC790 002D96D0  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 802DC794 002D96D4  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 802DC798 002D96D8  7C 08 03 A6 */	mtlr r0
/* 802DC79C 002D96DC  38 21 00 E0 */	addi r1, r1, 0xe0
/* 802DC7A0 002D96E0  4E 80 00 20 */	blr 

.global getTargetPosition__Q34Game11BigTreasure3ObjFv
getTargetPosition__Q34Game11BigTreasure3ObjFv:
/* 802DC7A4 002D96E4  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 802DC7A8 002D96E8  7C 08 02 A6 */	mflr r0
/* 802DC7AC 002D96EC  90 01 00 74 */	stw r0, 0x74(r1)
/* 802DC7B0 002D96F0  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 802DC7B4 002D96F4  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 802DC7B8 002D96F8  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 802DC7BC 002D96FC  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 802DC7C0 002D9700  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802DC7C4 002D9704  7C 7F 1B 78 */	mr r31, r3
/* 802DC7C8 002D9708  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802DC7CC 002D970C  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 802DC7D0 002D9710  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 802DC7D4 002D9714  EC 41 00 28 */	fsubs f2, f1, f0
/* 802DC7D8 002D9718  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 802DC7DC 002D971C  C0 83 01 98 */	lfs f4, 0x198(r3)
/* 802DC7E0 002D9720  C0 07 03 5C */	lfs f0, 0x35c(r7)
/* 802DC7E4 002D9724  EC 61 20 28 */	fsubs f3, f1, f4
/* 802DC7E8 002D9728  EC 22 00 B2 */	fmuls f1, f2, f2
/* 802DC7EC 002D972C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802DC7F0 002D9730  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 802DC7F4 002D9734  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DC7F8 002D9738  40 80 02 00 */	bge .L_802DC9F8
/* 802DC7FC 002D973C  3C A0 80 4B */	lis r5, "__vt__23Condition<Q24Game4Piki>"@ha
/* 802DC800 002D9740  3C 80 80 4D */	lis r4, __vt__Q24Game23ConditionNotStickClient@ha
/* 802DC804 002D9744  38 C5 BC 60 */	addi r6, r5, "__vt__23Condition<Q24Game4Piki>"@l
/* 802DC808 002D9748  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DC80C 002D974C  38 04 DB 70 */	addi r0, r4, __vt__Q24Game23ConditionNotStickClient@l
/* 802DC810 002D9750  38 A1 00 08 */	addi r5, r1, 8
/* 802DC814 002D9754  90 C1 00 08 */	stw r6, 8(r1)
/* 802DC818 002D9758  38 80 00 00 */	li r4, 0
/* 802DC81C 002D975C  90 01 00 08 */	stw r0, 8(r1)
/* 802DC820 002D9760  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 802DC824 002D9764  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 802DC828 002D9768  4B E3 63 3D */	bl "getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
/* 802DC82C 002D976C  28 03 00 00 */	cmplwi r3, 0
/* 802DC830 002D9770  41 82 00 38 */	beq .L_802DC868
/* 802DC834 002D9774  7C 64 1B 78 */	mr r4, r3
/* 802DC838 002D9778  38 61 00 10 */	addi r3, r1, 0x10
/* 802DC83C 002D977C  81 84 00 00 */	lwz r12, 0(r4)
/* 802DC840 002D9780  81 8C 00 08 */	lwz r12, 8(r12)
/* 802DC844 002D9784  7D 89 03 A6 */	mtctr r12
/* 802DC848 002D9788  4E 80 04 21 */	bctrl 
/* 802DC84C 002D978C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802DC850 002D9790  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802DC854 002D9794  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 802DC858 002D9798  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802DC85C 002D979C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 802DC860 002D97A0  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 802DC864 002D97A4  48 00 01 A8 */	b .L_802DCA0C
.L_802DC868:
/* 802DC868 002D97A8  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 802DC86C 002D97AC  C0 1F 02 D4 */	lfs f0, 0x2d4(r31)
/* 802DC870 002D97B0  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 802DC874 002D97B4  EC 61 00 28 */	fsubs f3, f1, f0
/* 802DC878 002D97B8  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802DC87C 002D97BC  C0 02 E9 18 */	lfs f0, lbl_8051CC78@sda21(r2)
/* 802DC880 002D97C0  EC 42 08 28 */	fsubs f2, f2, f1
/* 802DC884 002D97C4  EC 23 00 F2 */	fmuls f1, f3, f3
/* 802DC888 002D97C8  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802DC88C 002D97CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DC890 002D97D0  40 80 01 7C */	bge .L_802DCA0C
/* 802DC894 002D97D4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802DC898 002D97D8  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 802DC89C 002D97DC  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802DC8A0 002D97E0  EF C1 00 28 */	fsubs f30, f1, f0
/* 802DC8A4 002D97E4  4B DE CC FD */	bl rand
/* 802DC8A8 002D97E8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802DC8AC 002D97EC  3C 00 43 30 */	lis r0, 0x4330
/* 802DC8B0 002D97F0  90 61 00 24 */	stw r3, 0x24(r1)
/* 802DC8B4 002D97F4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802DC8B8 002D97F8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802DC8BC 002D97FC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802DC8C0 002D9800  90 01 00 20 */	stw r0, 0x20(r1)
/* 802DC8C4 002D9804  C8 22 E9 00 */	lfd f1, lbl_8051CC60@sda21(r2)
/* 802DC8C8 002D9808  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 802DC8CC 002D980C  C0 A2 E8 F8 */	lfs f5, lbl_8051CC58@sda21(r2)
/* 802DC8D0 002D9810  EC 00 08 28 */	fsubs f0, f0, f1
/* 802DC8D4 002D9814  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 802DC8D8 002D9818  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 802DC8DC 002D981C  C0 84 03 84 */	lfs f4, 0x384(r4)
/* 802DC8E0 002D9820  EC DE 00 32 */	fmuls f6, f30, f0
/* 802DC8E4 002D9824  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 802DC8E8 002D9828  EC 23 08 28 */	fsubs f1, f3, f1
/* 802DC8EC 002D982C  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802DC8F0 002D9830  EC 66 28 24 */	fdivs f3, f6, f5
/* 802DC8F4 002D9834  EF E4 18 2A */	fadds f31, f4, f3
/* 802DC8F8 002D9838  EC 42 00 28 */	fsubs f2, f2, f0
/* 802DC8FC 002D983C  4B D5 88 0D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802DC900 002D9840  FF C0 08 90 */	fmr f30, f1
/* 802DC904 002D9844  4B DE CC 9D */	bl rand
/* 802DC908 002D9848  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802DC90C 002D984C  3C 00 43 30 */	lis r0, 0x4330
/* 802DC910 002D9850  90 61 00 2C */	stw r3, 0x2c(r1)
/* 802DC914 002D9854  C8 42 E9 00 */	lfd f2, lbl_8051CC60@sda21(r2)
/* 802DC918 002D9858  90 01 00 28 */	stw r0, 0x28(r1)
/* 802DC91C 002D985C  C0 62 E9 1C */	lfs f3, lbl_8051CC7C@sda21(r2)
/* 802DC920 002D9860  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 802DC924 002D9864  C0 22 E8 F8 */	lfs f1, lbl_8051CC58@sda21(r2)
/* 802DC928 002D9868  EC 80 10 28 */	fsubs f4, f0, f2
/* 802DC92C 002D986C  C0 42 E9 20 */	lfs f2, lbl_8051CC80@sda21(r2)
/* 802DC930 002D9870  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DC934 002D9874  EC 63 01 32 */	fmuls f3, f3, f4
/* 802DC938 002D9878  EC 23 08 24 */	fdivs f1, f3, f1
/* 802DC93C 002D987C  EC 3E 08 2A */	fadds f1, f30, f1
/* 802DC940 002D9880  EC 62 08 2A */	fadds f3, f2, f1
/* 802DC944 002D9884  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802DC948 002D9888  40 80 00 30 */	bge .L_802DC978
/* 802DC94C 002D988C  C0 02 E9 24 */	lfs f0, lbl_8051CC84@sda21(r2)
/* 802DC950 002D9890  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802DC954 002D9894  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802DC958 002D9898  EC 03 00 32 */	fmuls f0, f3, f0
/* 802DC95C 002D989C  FC 00 00 1E */	fctiwz f0, f0
/* 802DC960 002D98A0  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802DC964 002D98A4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802DC968 002D98A8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802DC96C 002D98AC  7C 03 04 2E */	lfsx f0, r3, r0
/* 802DC970 002D98B0  FC 40 00 50 */	fneg f2, f0
/* 802DC974 002D98B4  48 00 00 28 */	b .L_802DC99C
.L_802DC978:
/* 802DC978 002D98B8  C0 02 E9 28 */	lfs f0, lbl_8051CC88@sda21(r2)
/* 802DC97C 002D98BC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802DC980 002D98C0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802DC984 002D98C4  EC 03 00 32 */	fmuls f0, f3, f0
/* 802DC988 002D98C8  FC 00 00 1E */	fctiwz f0, f0
/* 802DC98C 002D98CC  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 802DC990 002D98D0  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 802DC994 002D98D4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802DC998 002D98D8  7C 43 04 2E */	lfsx f2, r3, r0
.L_802DC99C:
/* 802DC99C 002D98DC  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 802DC9A0 002D98E0  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DC9A4 002D98E4  EC 3F 08 BA */	fmadds f1, f31, f2, f1
/* 802DC9A8 002D98E8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802DC9AC 002D98EC  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 802DC9B0 002D98F0  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802DC9B4 002D98F4  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802DC9B8 002D98F8  40 80 00 08 */	bge .L_802DC9C0
/* 802DC9BC 002D98FC  FC 60 18 50 */	fneg f3, f3
.L_802DC9C0:
/* 802DC9C0 002D9900  C0 22 E9 28 */	lfs f1, lbl_8051CC88@sda21(r2)
/* 802DC9C4 002D9904  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802DC9C8 002D9908  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802DC9CC 002D990C  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802DC9D0 002D9910  EC 23 00 72 */	fmuls f1, f3, f1
/* 802DC9D4 002D9914  FC 20 08 1E */	fctiwz f1, f1
/* 802DC9D8 002D9918  D8 21 00 40 */	stfd f1, 0x40(r1)
/* 802DC9DC 002D991C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802DC9E0 002D9920  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802DC9E4 002D9924  7C 63 02 14 */	add r3, r3, r0
/* 802DC9E8 002D9928  C0 23 00 04 */	lfs f1, 4(r3)
/* 802DC9EC 002D992C  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 802DC9F0 002D9930  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 802DC9F4 002D9934  48 00 00 18 */	b .L_802DCA0C
.L_802DC9F8:
/* 802DC9F8 002D9938  D0 9F 02 CC */	stfs f4, 0x2cc(r31)
/* 802DC9FC 002D993C  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802DCA00 002D9940  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802DCA04 002D9944  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802DCA08 002D9948  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
.L_802DCA0C:
/* 802DCA0C 002D994C  7F E3 FB 78 */	mr r3, r31
/* 802DCA10 002D9950  38 9F 02 CC */	addi r4, r31, 0x2cc
/* 802DCA14 002D9954  48 00 02 DD */	bl "setIKSystemTargetPosition__Q34Game11BigTreasure3ObjFR10Vector3<f>"
/* 802DCA18 002D9958  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 802DCA1C 002D995C  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 802DCA20 002D9960  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 802DCA24 002D9964  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 802DCA28 002D9968  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802DCA2C 002D996C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802DCA30 002D9970  7C 08 03 A6 */	mtlr r0
/* 802DCA34 002D9974  38 21 00 70 */	addi r1, r1, 0x70
/* 802DCA38 002D9978  4E 80 00 20 */	blr 

.global createIKSystem__Q34Game11BigTreasure3ObjFv
createIKSystem__Q34Game11BigTreasure3ObjFv:
/* 802DCA3C 002D997C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DCA40 002D9980  7C 08 02 A6 */	mflr r0
/* 802DCA44 002D9984  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DCA48 002D9988  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DCA4C 002D998C  7C 7F 1B 78 */	mr r31, r3
/* 802DCA50 002D9990  38 60 00 9C */	li r3, 0x9c
/* 802DCA54 002D9994  4B D4 74 51 */	bl __nw__FUl
/* 802DCA58 002D9998  7C 60 1B 79 */	or. r0, r3, r3
/* 802DCA5C 002D999C  41 82 00 0C */	beq .L_802DCA68
/* 802DCA60 002D99A0  4B FC C0 59 */	bl __ct__Q24Game11IKSystemMgrFv
/* 802DCA64 002D99A4  7C 60 1B 78 */	mr r0, r3
.L_802DCA68:
/* 802DCA68 002D99A8  90 1F 02 E4 */	stw r0, 0x2e4(r31)
/* 802DCA6C 002D99AC  38 60 00 48 */	li r3, 0x48
/* 802DCA70 002D99B0  4B D4 74 35 */	bl __nw__FUl
/* 802DCA74 002D99B4  28 03 00 00 */	cmplwi r3, 0
/* 802DCA78 002D99B8  41 82 00 88 */	beq .L_802DCB00
/* 802DCA7C 002D99BC  38 00 FF FF */	li r0, -1
/* 802DCA80 002D99C0  C0 A2 E8 D0 */	lfs f5, lbl_8051CC30@sda21(r2)
/* 802DCA84 002D99C4  90 03 00 00 */	stw r0, 0(r3)
/* 802DCA88 002D99C8  C0 22 E9 2C */	lfs f1, lbl_8051CC8C@sda21(r2)
/* 802DCA8C 002D99CC  D0 A3 00 04 */	stfs f5, 4(r3)
/* 802DCA90 002D99D0  C0 02 E9 30 */	lfs f0, lbl_8051CC90@sda21(r2)
/* 802DCA94 002D99D4  D0 A3 00 08 */	stfs f5, 8(r3)
/* 802DCA98 002D99D8  C0 42 E9 08 */	lfs f2, lbl_8051CC68@sda21(r2)
/* 802DCA9C 002D99DC  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 802DCAA0 002D99E0  C0 22 E9 34 */	lfs f1, lbl_8051CC94@sda21(r2)
/* 802DCAA4 002D99E4  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802DCAA8 002D99E8  C0 02 E9 38 */	lfs f0, lbl_8051CC98@sda21(r2)
/* 802DCAAC 002D99EC  D0 43 00 14 */	stfs f2, 0x14(r3)
/* 802DCAB0 002D99F0  C0 42 E8 E4 */	lfs f2, lbl_8051CC44@sda21(r2)
/* 802DCAB4 002D99F4  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 802DCAB8 002D99F8  C0 22 E9 3C */	lfs f1, lbl_8051CC9C@sda21(r2)
/* 802DCABC 002D99FC  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802DCAC0 002D9A00  C0 02 E9 40 */	lfs f0, lbl_8051CCA0@sda21(r2)
/* 802DCAC4 002D9A04  D0 43 00 20 */	stfs f2, 0x20(r3)
/* 802DCAC8 002D9A08  C0 82 E9 44 */	lfs f4, lbl_8051CCA4@sda21(r2)
/* 802DCACC 002D9A0C  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 802DCAD0 002D9A10  C0 62 E8 D8 */	lfs f3, lbl_8051CC38@sda21(r2)
/* 802DCAD4 002D9A14  D0 A3 00 28 */	stfs f5, 0x28(r3)
/* 802DCAD8 002D9A18  C0 42 E8 DC */	lfs f2, lbl_8051CC3C@sda21(r2)
/* 802DCADC 002D9A1C  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802DCAE0 002D9A20  C0 22 E9 48 */	lfs f1, lbl_8051CCA8@sda21(r2)
/* 802DCAE4 002D9A24  D0 A3 00 30 */	stfs f5, 0x30(r3)
/* 802DCAE8 002D9A28  C0 02 E9 4C */	lfs f0, lbl_8051CCAC@sda21(r2)
/* 802DCAEC 002D9A2C  D0 83 00 34 */	stfs f4, 0x34(r3)
/* 802DCAF0 002D9A30  D0 63 00 38 */	stfs f3, 0x38(r3)
/* 802DCAF4 002D9A34  D0 43 00 3C */	stfs f2, 0x3c(r3)
/* 802DCAF8 002D9A38  D0 23 00 40 */	stfs f1, 0x40(r3)
/* 802DCAFC 002D9A3C  D0 03 00 44 */	stfs f0, 0x44(r3)
.L_802DCB00:
/* 802DCB00 002D9A40  90 7F 02 E8 */	stw r3, 0x2e8(r31)
/* 802DCB04 002D9A44  38 60 00 08 */	li r3, 8
/* 802DCB08 002D9A48  4B D4 73 9D */	bl __nw__FUl
/* 802DCB0C 002D9A4C  28 03 00 00 */	cmplwi r3, 0
/* 802DCB10 002D9A50  41 82 00 20 */	beq .L_802DCB30
/* 802DCB14 002D9A54  3C A0 80 4D */	lis r5, __vt__Q24Game19JointGroundCallBack@ha
/* 802DCB18 002D9A58  3C 80 80 4D */	lis r4, __vt__Q34Game11BigTreasure25BigTreasureGroundCallBack@ha
/* 802DCB1C 002D9A5C  38 05 DB 60 */	addi r0, r5, __vt__Q24Game19JointGroundCallBack@l
/* 802DCB20 002D9A60  90 03 00 00 */	stw r0, 0(r3)
/* 802DCB24 002D9A64  38 04 38 D4 */	addi r0, r4, __vt__Q34Game11BigTreasure25BigTreasureGroundCallBack@l
/* 802DCB28 002D9A68  90 03 00 00 */	stw r0, 0(r3)
/* 802DCB2C 002D9A6C  93 E3 00 04 */	stw r31, 4(r3)
.L_802DCB30:
/* 802DCB30 002D9A70  90 7F 02 EC */	stw r3, 0x2ec(r31)
/* 802DCB34 002D9A74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DCB38 002D9A78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DCB3C 002D9A7C  7C 08 03 A6 */	mtlr r0
/* 802DCB40 002D9A80  38 21 00 10 */	addi r1, r1, 0x10
/* 802DCB44 002D9A84  4E 80 00 20 */	blr 

.global setupIKSystem__Q34Game11BigTreasure3ObjFv
setupIKSystem__Q34Game11BigTreasure3ObjFv:
/* 802DCB48 002D9A88  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802DCB4C 002D9A8C  7C 08 02 A6 */	mflr r0
/* 802DCB50 002D9A90  38 A0 00 00 */	li r5, 0
/* 802DCB54 002D9A94  90 01 00 54 */	stw r0, 0x54(r1)
/* 802DCB58 002D9A98  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 802DCB5C 002D9A9C  7C 7F 1B 78 */	mr r31, r3
/* 802DCB60 002D9AA0  7F E4 FB 78 */	mr r4, r31
/* 802DCB64 002D9AA4  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802DCB68 002D9AA8  4B FC BF CD */	bl init__Q24Game11IKSystemMgrFPQ24Game9EnemyBasePQ24Game19JointGroundCallBack
/* 802DCB6C 002D9AAC  3C 60 80 49 */	lis r3, lbl_8048CB50@ha
/* 802DCB70 002D9AB0  38 C1 00 08 */	addi r6, r1, 8
/* 802DCB74 002D9AB4  3B 63 CB 50 */	addi r27, r3, lbl_8048CB50@l
/* 802DCB78 002D9AB8  38 A0 00 00 */	li r5, 0
/* 802DCB7C 002D9ABC  83 9B 00 00 */	lwz r28, 0(r27)
/* 802DCB80 002D9AC0  83 BB 00 04 */	lwz r29, 4(r27)
/* 802DCB84 002D9AC4  83 DB 00 08 */	lwz r30, 8(r27)
/* 802DCB88 002D9AC8  81 9B 00 0C */	lwz r12, 0xc(r27)
/* 802DCB8C 002D9ACC  81 7B 00 10 */	lwz r11, 0x10(r27)
/* 802DCB90 002D9AD0  81 5B 00 14 */	lwz r10, 0x14(r27)
/* 802DCB94 002D9AD4  81 3B 00 18 */	lwz r9, 0x18(r27)
/* 802DCB98 002D9AD8  81 1B 00 1C */	lwz r8, 0x1c(r27)
/* 802DCB9C 002D9ADC  80 FB 00 20 */	lwz r7, 0x20(r27)
/* 802DCBA0 002D9AE0  80 9B 00 24 */	lwz r4, 0x24(r27)
/* 802DCBA4 002D9AE4  80 7B 00 28 */	lwz r3, 0x28(r27)
/* 802DCBA8 002D9AE8  80 1B 00 2C */	lwz r0, 0x2c(r27)
/* 802DCBAC 002D9AEC  93 81 00 08 */	stw r28, 8(r1)
/* 802DCBB0 002D9AF0  93 A1 00 0C */	stw r29, 0xc(r1)
/* 802DCBB4 002D9AF4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802DCBB8 002D9AF8  91 81 00 14 */	stw r12, 0x14(r1)
/* 802DCBBC 002D9AFC  91 61 00 18 */	stw r11, 0x18(r1)
/* 802DCBC0 002D9B00  91 41 00 1C */	stw r10, 0x1c(r1)
/* 802DCBC4 002D9B04  91 21 00 20 */	stw r9, 0x20(r1)
/* 802DCBC8 002D9B08  91 01 00 24 */	stw r8, 0x24(r1)
/* 802DCBCC 002D9B0C  90 E1 00 28 */	stw r7, 0x28(r1)
/* 802DCBD0 002D9B10  90 81 00 2C */	stw r4, 0x2c(r1)
/* 802DCBD4 002D9B14  90 61 00 30 */	stw r3, 0x30(r1)
/* 802DCBD8 002D9B18  90 01 00 34 */	stw r0, 0x34(r1)
/* 802DCBDC 002D9B1C  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 802DCBE0 002D9B20  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802DCBE4 002D9B24  4B FC C0 95 */	bl setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
/* 802DCBE8 002D9B28  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 802DCBEC 002D9B2C  38 C1 00 14 */	addi r6, r1, 0x14
/* 802DCBF0 002D9B30  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802DCBF4 002D9B34  38 A0 00 01 */	li r5, 1
/* 802DCBF8 002D9B38  4B FC C0 81 */	bl setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
/* 802DCBFC 002D9B3C  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 802DCC00 002D9B40  38 C1 00 20 */	addi r6, r1, 0x20
/* 802DCC04 002D9B44  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802DCC08 002D9B48  38 A0 00 02 */	li r5, 2
/* 802DCC0C 002D9B4C  4B FC C0 6D */	bl setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
/* 802DCC10 002D9B50  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 802DCC14 002D9B54  38 C1 00 2C */	addi r6, r1, 0x2c
/* 802DCC18 002D9B58  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802DCC1C 002D9B5C  38 A0 00 03 */	li r5, 3
/* 802DCC20 002D9B60  4B FC C0 59 */	bl setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
/* 802DCC24 002D9B64  3C 80 80 49 */	lis r4, lbl_8048CAD8@ha
/* 802DCC28 002D9B68  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 802DCC2C 002D9B6C  38 A4 CA D8 */	addi r5, r4, lbl_8048CAD8@l
/* 802DCC30 002D9B70  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802DCC34 002D9B74  4B FC C0 B1 */	bl setupCallBack__Q24Game11IKSystemMgrFPQ28SysShape5ModelPc
/* 802DCC38 002D9B78  7F E3 FB 78 */	mr r3, r31
/* 802DCC3C 002D9B7C  48 00 00 31 */	bl setIKParameter__Q34Game11BigTreasure3ObjFv
/* 802DCC40 002D9B80  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 802DCC44 002D9B84  80 9F 02 E8 */	lwz r4, 0x2e8(r31)
/* 802DCC48 002D9B88  4B FC C0 D5 */	bl setParameters__Q24Game11IKSystemMgrFPQ24Game13IKSystemParms
/* 802DCC4C 002D9B8C  80 1F 02 EC */	lwz r0, 0x2ec(r31)
/* 802DCC50 002D9B90  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 802DCC54 002D9B94  90 03 00 94 */	stw r0, 0x94(r3)
/* 802DCC58 002D9B98  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 802DCC5C 002D9B9C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802DCC60 002D9BA0  7C 08 03 A6 */	mtlr r0
/* 802DCC64 002D9BA4  38 21 00 50 */	addi r1, r1, 0x50
/* 802DCC68 002D9BA8  4E 80 00 20 */	blr 

.global setIKParameter__Q34Game11BigTreasure3ObjFv
setIKParameter__Q34Game11BigTreasure3ObjFv:
/* 802DCC6C 002D9BAC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802DCC70 002D9BB0  80 83 02 E8 */	lwz r4, 0x2e8(r3)
/* 802DCC74 002D9BB4  C0 05 03 34 */	lfs f0, 0x334(r5)
/* 802DCC78 002D9BB8  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 802DCC7C 002D9BBC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802DCC80 002D9BC0  80 83 02 E8 */	lwz r4, 0x2e8(r3)
/* 802DCC84 002D9BC4  C0 05 02 E4 */	lfs f0, 0x2e4(r5)
/* 802DCC88 002D9BC8  D0 04 00 2C */	stfs f0, 0x2c(r4)
/* 802DCC8C 002D9BCC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802DCC90 002D9BD0  80 83 02 E8 */	lwz r4, 0x2e8(r3)
/* 802DCC94 002D9BD4  C0 05 08 1C */	lfs f0, 0x81c(r5)
/* 802DCC98 002D9BD8  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 802DCC9C 002D9BDC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802DCCA0 002D9BE0  80 83 02 E8 */	lwz r4, 0x2e8(r3)
/* 802DCCA4 002D9BE4  C0 05 08 44 */	lfs f0, 0x844(r5)
/* 802DCCA8 002D9BE8  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 802DCCAC 002D9BEC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802DCCB0 002D9BF0  80 83 02 E8 */	lwz r4, 0x2e8(r3)
/* 802DCCB4 002D9BF4  C0 05 08 6C */	lfs f0, 0x86c(r5)
/* 802DCCB8 002D9BF8  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 802DCCBC 002D9BFC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802DCCC0 002D9C00  80 83 02 E8 */	lwz r4, 0x2e8(r3)
/* 802DCCC4 002D9C04  C0 05 08 BC */	lfs f0, 0x8bc(r5)
/* 802DCCC8 002D9C08  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 802DCCCC 002D9C0C  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802DCCD0 002D9C10  80 83 02 E8 */	lwz r4, 0x2e8(r3)
/* 802DCCD4 002D9C14  C0 05 08 94 */	lfs f0, 0x894(r5)
/* 802DCCD8 002D9C18  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 802DCCDC 002D9C1C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802DCCE0 002D9C20  80 63 02 E8 */	lwz r3, 0x2e8(r3)
/* 802DCCE4 002D9C24  C0 04 08 E4 */	lfs f0, 0x8e4(r4)
/* 802DCCE8 002D9C28  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802DCCEC 002D9C2C  4E 80 00 20 */	blr 

.global "setIKSystemTargetPosition__Q34Game11BigTreasure3ObjFR10Vector3<f>"
"setIKSystemTargetPosition__Q34Game11BigTreasure3ObjFR10Vector3<f>":
/* 802DCCF0 002D9C30  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802DCCF4 002D9C34  C0 04 00 00 */	lfs f0, 0(r4)
/* 802DCCF8 002D9C38  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802DCCFC 002D9C3C  C0 04 00 04 */	lfs f0, 4(r4)
/* 802DCD00 002D9C40  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 802DCD04 002D9C44  C0 04 00 08 */	lfs f0, 8(r4)
/* 802DCD08 002D9C48  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 802DCD0C 002D9C4C  4E 80 00 20 */	blr 

.global updateIKSystem__Q34Game11BigTreasure3ObjFv
updateIKSystem__Q34Game11BigTreasure3ObjFv:
/* 802DCD10 002D9C50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DCD14 002D9C54  7C 08 02 A6 */	mflr r0
/* 802DCD18 002D9C58  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DCD1C 002D9C5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DCD20 002D9C60  7C 7F 1B 78 */	mr r31, r3
/* 802DCD24 002D9C64  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802DCD28 002D9C68  4B FC C3 BD */	bl doUpdate__Q24Game11IKSystemMgrFv
/* 802DCD2C 002D9C6C  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 802DCD30 002D9C70  C0 23 00 3C */	lfs f1, 0x3c(r3)
/* 802DCD34 002D9C74  C0 43 00 40 */	lfs f2, 0x40(r3)
/* 802DCD38 002D9C78  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 802DCD3C 002D9C7C  D0 1F 01 8C */	stfs f0, 0x18c(r31)
/* 802DCD40 002D9C80  D0 3F 01 90 */	stfs f1, 0x190(r31)
/* 802DCD44 002D9C84  D0 5F 01 94 */	stfs f2, 0x194(r31)
/* 802DCD48 002D9C88  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 802DCD4C 002D9C8C  C0 03 00 04 */	lfs f0, 4(r3)
/* 802DCD50 002D9C90  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 802DCD54 002D9C94  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802DCD58 002D9C98  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802DCD5C 002D9C9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DCD60 002D9CA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DCD64 002D9CA4  7C 08 03 A6 */	mtlr r0
/* 802DCD68 002D9CA8  38 21 00 10 */	addi r1, r1, 0x10
/* 802DCD6C 002D9CAC  4E 80 00 20 */	blr 

.global doAnimationIKSystem__Q34Game11BigTreasure3ObjFv
doAnimationIKSystem__Q34Game11BigTreasure3ObjFv:
/* 802DCD70 002D9CB0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802DCD74 002D9CB4  7C 08 02 A6 */	mflr r0
/* 802DCD78 002D9CB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802DCD7C 002D9CBC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802DCD80 002D9CC0  7C 7F 1B 78 */	mr r31, r3
/* 802DCD84 002D9CC4  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802DCD88 002D9CC8  4B FC C3 55 */	bl setAnimationCallBack__Q24Game11IKSystemMgrFv
/* 802DCD8C 002D9CCC  80 FF 02 E4 */	lwz r7, 0x2e4(r31)
/* 802DCD90 002D9CD0  38 7F 01 38 */	addi r3, r31, 0x138
/* 802DCD94 002D9CD4  38 9F 01 68 */	addi r4, r31, 0x168
/* 802DCD98 002D9CD8  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 802DCD9C 002D9CDC  C0 27 00 48 */	lfs f1, 0x48(r7)
/* 802DCDA0 002D9CE0  38 C1 00 08 */	addi r6, r1, 8
/* 802DCDA4 002D9CE4  C0 47 00 4C */	lfs f2, 0x4c(r7)
/* 802DCDA8 002D9CE8  C0 07 00 44 */	lfs f0, 0x44(r7)
/* 802DCDAC 002D9CEC  D0 01 00 08 */	stfs f0, 8(r1)
/* 802DCDB0 002D9CF0  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802DCDB4 002D9CF4  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 802DCDB8 002D9CF8  48 14 B5 21 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 802DCDBC 002D9CFC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802DCDC0 002D9D00  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802DCDC4 002D9D04  7C 08 03 A6 */	mtlr r0
/* 802DCDC8 002D9D08  38 21 00 20 */	addi r1, r1, 0x20
/* 802DCDCC 002D9D0C  4E 80 00 20 */	blr 

.global finishAnimationIKSystem__Q34Game11BigTreasure3ObjFv
finishAnimationIKSystem__Q34Game11BigTreasure3ObjFv:
/* 802DCDD0 002D9D10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DCDD4 002D9D14  7C 08 02 A6 */	mflr r0
/* 802DCDD8 002D9D18  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DCDDC 002D9D1C  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802DCDE0 002D9D20  4B FC C2 F1 */	bl resetAnimationCallBack__Q24Game11IKSystemMgrFv
/* 802DCDE4 002D9D24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DCDE8 002D9D28  7C 08 03 A6 */	mtlr r0
/* 802DCDEC 002D9D2C  38 21 00 10 */	addi r1, r1, 0x10
/* 802DCDF0 002D9D30  4E 80 00 20 */	blr 

.global startProgramedIK__Q34Game11BigTreasure3ObjFv
startProgramedIK__Q34Game11BigTreasure3ObjFv:
/* 802DCDF4 002D9D34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DCDF8 002D9D38  7C 08 02 A6 */	mflr r0
/* 802DCDFC 002D9D3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DCE00 002D9D40  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802DCE04 002D9D44  4B FC BF 7D */	bl startProgramedIK__Q24Game11IKSystemMgrFv
/* 802DCE08 002D9D48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DCE0C 002D9D4C  7C 08 03 A6 */	mtlr r0
/* 802DCE10 002D9D50  38 21 00 10 */	addi r1, r1, 0x10
/* 802DCE14 002D9D54  4E 80 00 20 */	blr 

.global startIKMotion__Q34Game11BigTreasure3ObjFv
startIKMotion__Q34Game11BigTreasure3ObjFv:
/* 802DCE18 002D9D58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DCE1C 002D9D5C  7C 08 02 A6 */	mflr r0
/* 802DCE20 002D9D60  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DCE24 002D9D64  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802DCE28 002D9D68  4B FC C0 E1 */	bl startIKMotion__Q24Game11IKSystemMgrFv
/* 802DCE2C 002D9D6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DCE30 002D9D70  7C 08 03 A6 */	mtlr r0
/* 802DCE34 002D9D74  38 21 00 10 */	addi r1, r1, 0x10
/* 802DCE38 002D9D78  4E 80 00 20 */	blr 

.global finishIKMotion__Q34Game11BigTreasure3ObjFv
finishIKMotion__Q34Game11BigTreasure3ObjFv:
/* 802DCE3C 002D9D7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DCE40 002D9D80  7C 08 02 A6 */	mflr r0
/* 802DCE44 002D9D84  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DCE48 002D9D88  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802DCE4C 002D9D8C  4B FC C0 E1 */	bl finishIKMotion__Q24Game11IKSystemMgrFv
/* 802DCE50 002D9D90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DCE54 002D9D94  7C 08 03 A6 */	mtlr r0
/* 802DCE58 002D9D98  38 21 00 10 */	addi r1, r1, 0x10
/* 802DCE5C 002D9D9C  4E 80 00 20 */	blr 

.global forceFinishIKMotion__Q34Game11BigTreasure3ObjFv
forceFinishIKMotion__Q34Game11BigTreasure3ObjFv:
/* 802DCE60 002D9DA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DCE64 002D9DA4  7C 08 02 A6 */	mflr r0
/* 802DCE68 002D9DA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DCE6C 002D9DAC  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802DCE70 002D9DB0  4B FC C0 C9 */	bl forceFinishIKMotion__Q24Game11IKSystemMgrFv
/* 802DCE74 002D9DB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DCE78 002D9DB8  7C 08 03 A6 */	mtlr r0
/* 802DCE7C 002D9DBC  38 21 00 10 */	addi r1, r1, 0x10
/* 802DCE80 002D9DC0  4E 80 00 20 */	blr 

.global isFinishIKMotion__Q34Game11BigTreasure3ObjFv
isFinishIKMotion__Q34Game11BigTreasure3ObjFv:
/* 802DCE84 002D9DC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DCE88 002D9DC8  7C 08 02 A6 */	mflr r0
/* 802DCE8C 002D9DCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DCE90 002D9DD0  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802DCE94 002D9DD4  4B FC C1 CD */	bl isFinishIKMotion__Q24Game11IKSystemMgrFv
/* 802DCE98 002D9DD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DCE9C 002D9DDC  7C 08 03 A6 */	mtlr r0
/* 802DCEA0 002D9DE0  38 21 00 10 */	addi r1, r1, 0x10
/* 802DCEA4 002D9DE4  4E 80 00 20 */	blr 

.global startBlendMotion__Q34Game11BigTreasure3ObjFv
startBlendMotion__Q34Game11BigTreasure3ObjFv:
/* 802DCEA8 002D9DE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DCEAC 002D9DEC  7C 08 02 A6 */	mflr r0
/* 802DCEB0 002D9DF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DCEB4 002D9DF4  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802DCEB8 002D9DF8  4B FC C0 95 */	bl startBlendMotion__Q24Game11IKSystemMgrFv
/* 802DCEBC 002D9DFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DCEC0 002D9E00  7C 08 03 A6 */	mtlr r0
/* 802DCEC4 002D9E04  38 21 00 10 */	addi r1, r1, 0x10
/* 802DCEC8 002D9E08  4E 80 00 20 */	blr 

.global finishBlendMotion__Q34Game11BigTreasure3ObjFv
finishBlendMotion__Q34Game11BigTreasure3ObjFv:
/* 802DCECC 002D9E0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DCED0 002D9E10  7C 08 02 A6 */	mflr r0
/* 802DCED4 002D9E14  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DCED8 002D9E18  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802DCEDC 002D9E1C  4B FC C0 CD */	bl finishBlendMotion__Q24Game11IKSystemMgrFv
/* 802DCEE0 002D9E20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DCEE4 002D9E24  7C 08 03 A6 */	mtlr r0
/* 802DCEE8 002D9E28  38 21 00 10 */	addi r1, r1, 0x10
/* 802DCEEC 002D9E2C  4E 80 00 20 */	blr 

.global checkJointScaleOn__Q34Game11BigTreasure3ObjFv
checkJointScaleOn__Q34Game11BigTreasure3ObjFv:
/* 802DCEF0 002D9E30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DCEF4 002D9E34  7C 08 02 A6 */	mflr r0
/* 802DCEF8 002D9E38  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DCEFC 002D9E3C  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802DCF00 002D9E40  4B FC C1 05 */	bl checkJointScaleOn__Q24Game11IKSystemMgrFv
/* 802DCF04 002D9E44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DCF08 002D9E48  7C 08 03 A6 */	mtlr r0
/* 802DCF0C 002D9E4C  38 21 00 10 */	addi r1, r1, 0x10
/* 802DCF10 002D9E50  4E 80 00 20 */	blr 

.global getTraceCentrePosition__Q34Game11BigTreasure3ObjFv
getTraceCentrePosition__Q34Game11BigTreasure3ObjFv:
/* 802DCF14 002D9E54  80 84 02 E4 */	lwz r4, 0x2e4(r4)
/* 802DCF18 002D9E58  C0 04 00 44 */	lfs f0, 0x44(r4)
/* 802DCF1C 002D9E5C  D0 03 00 00 */	stfs f0, 0(r3)
/* 802DCF20 002D9E60  C0 04 00 48 */	lfs f0, 0x48(r4)
/* 802DCF24 002D9E64  D0 03 00 04 */	stfs f0, 4(r3)
/* 802DCF28 002D9E68  C0 04 00 4C */	lfs f0, 0x4c(r4)
/* 802DCF2C 002D9E6C  D0 03 00 08 */	stfs f0, 8(r3)
/* 802DCF30 002D9E70  4E 80 00 20 */	blr 

.global getJointPositionPtr__Q34Game11BigTreasure3ObjFii
getJointPositionPtr__Q34Game11BigTreasure3ObjFii:
/* 802DCF34 002D9E74  1C 84 00 30 */	mulli r4, r4, 0x30
/* 802DCF38 002D9E78  7C 66 1B 78 */	mr r6, r3
/* 802DCF3C 002D9E7C  1C 05 00 0C */	mulli r0, r5, 0xc
/* 802DCF40 002D9E80  7C 64 02 14 */	add r3, r4, r0
/* 802DCF44 002D9E84  38 63 03 04 */	addi r3, r3, 0x304
/* 802DCF48 002D9E88  7C 66 1A 14 */	add r3, r6, r3
/* 802DCF4C 002D9E8C  4E 80 00 20 */	blr 

.global createShadowSystem__Q34Game11BigTreasure3ObjFv
createShadowSystem__Q34Game11BigTreasure3ObjFv:
/* 802DCF50 002D9E90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DCF54 002D9E94  7C 08 02 A6 */	mflr r0
/* 802DCF58 002D9E98  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DCF5C 002D9E9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DCF60 002D9EA0  7C 7F 1B 78 */	mr r31, r3
/* 802DCF64 002D9EA4  38 60 01 70 */	li r3, 0x170
/* 802DCF68 002D9EA8  4B D4 6F 3D */	bl __nw__FUl
/* 802DCF6C 002D9EAC  7C 60 1B 79 */	or. r0, r3, r3
/* 802DCF70 002D9EB0  41 82 00 10 */	beq .L_802DCF80
/* 802DCF74 002D9EB4  7F E4 FB 78 */	mr r4, r31
/* 802DCF78 002D9EB8  4B FF D6 51 */	bl __ct__Q34Game11BigTreasure20BigTreasureShadowMgrFPQ34Game11BigTreasure3Obj
/* 802DCF7C 002D9EBC  7C 60 1B 78 */	mr r0, r3
.L_802DCF80:
/* 802DCF80 002D9EC0  90 1F 02 F0 */	stw r0, 0x2f0(r31)
/* 802DCF84 002D9EC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DCF88 002D9EC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DCF8C 002D9ECC  7C 08 03 A6 */	mtlr r0
/* 802DCF90 002D9ED0  38 21 00 10 */	addi r1, r1, 0x10
/* 802DCF94 002D9ED4  4E 80 00 20 */	blr 

.global setupShadowSystem__Q34Game11BigTreasure3ObjFv
setupShadowSystem__Q34Game11BigTreasure3ObjFv:
/* 802DCF98 002D9ED8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802DCF9C 002D9EDC  7C 08 02 A6 */	mflr r0
/* 802DCFA0 002D9EE0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802DCFA4 002D9EE4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802DCFA8 002D9EE8  7C 7B 1B 78 */	mr r27, r3
/* 802DCFAC 002D9EEC  80 63 02 F0 */	lwz r3, 0x2f0(r3)
/* 802DCFB0 002D9EF0  4B FF DA 31 */	bl init__Q34Game11BigTreasure20BigTreasureShadowMgrFv
/* 802DCFB4 002D9EF4  80 7B 02 F0 */	lwz r3, 0x2f0(r27)
/* 802DCFB8 002D9EF8  38 9B 02 F8 */	addi r4, r27, 0x2f8
/* 802DCFBC 002D9EFC  4B FF DC D9 */	bl "setKosiJointPosPtr__Q34Game11BigTreasure20BigTreasureShadowMgrFP10Vector3<f>"
/* 802DCFC0 002D9F00  3B A0 00 00 */	li r29, 0
/* 802DCFC4 002D9F04  7F 7E DB 78 */	mr r30, r27
.L_802DCFC8:
/* 802DCFC8 002D9F08  3B 80 00 00 */	li r28, 0
/* 802DCFCC 002D9F0C  7F DF F3 78 */	mr r31, r30
.L_802DCFD0:
/* 802DCFD0 002D9F10  80 7B 02 F0 */	lwz r3, 0x2f0(r27)
/* 802DCFD4 002D9F14  7F A4 EB 78 */	mr r4, r29
/* 802DCFD8 002D9F18  7F 85 E3 78 */	mr r5, r28
/* 802DCFDC 002D9F1C  38 DF 03 04 */	addi r6, r31, 0x304
/* 802DCFE0 002D9F20  4B FF DC BD */	bl "setJointPosPtr__Q34Game11BigTreasure20BigTreasureShadowMgrFiiP10Vector3<f>"
/* 802DCFE4 002D9F24  3B 9C 00 01 */	addi r28, r28, 1
/* 802DCFE8 002D9F28  3B FF 00 0C */	addi r31, r31, 0xc
/* 802DCFEC 002D9F2C  2C 1C 00 04 */	cmpwi r28, 4
/* 802DCFF0 002D9F30  41 80 FF E0 */	blt .L_802DCFD0
/* 802DCFF4 002D9F34  3B BD 00 01 */	addi r29, r29, 1
/* 802DCFF8 002D9F38  3B DE 00 30 */	addi r30, r30, 0x30
/* 802DCFFC 002D9F3C  2C 1D 00 04 */	cmpwi r29, 4
/* 802DD000 002D9F40  41 80 FF C8 */	blt .L_802DCFC8
/* 802DD004 002D9F44  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802DD008 002D9F48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802DD00C 002D9F4C  7C 08 03 A6 */	mtlr r0
/* 802DD010 002D9F50  38 21 00 20 */	addi r1, r1, 0x20
/* 802DD014 002D9F54  4E 80 00 20 */	blr 

.global doAnimationShadowSystem__Q34Game11BigTreasure3ObjFv
doAnimationShadowSystem__Q34Game11BigTreasure3ObjFv:
/* 802DD018 002D9F58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DD01C 002D9F5C  7C 08 02 A6 */	mflr r0
/* 802DD020 002D9F60  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DD024 002D9F64  80 63 02 F0 */	lwz r3, 0x2f0(r3)
/* 802DD028 002D9F68  4B FF DC 8D */	bl update__Q34Game11BigTreasure20BigTreasureShadowMgrFv
/* 802DD02C 002D9F6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DD030 002D9F70  7C 08 03 A6 */	mtlr r0
/* 802DD034 002D9F74  38 21 00 10 */	addi r1, r1, 0x10
/* 802DD038 002D9F78  4E 80 00 20 */	blr 

.global setupCollision__Q34Game11BigTreasure3ObjFv
setupCollision__Q34Game11BigTreasure3ObjFv:
/* 802DD03C 002D9F7C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802DD040 002D9F80  7C 08 02 A6 */	mflr r0
/* 802DD044 002D9F84  3C 80 80 49 */	lis r4, lbl_8048CB80@ha
/* 802DD048 002D9F88  90 01 00 34 */	stw r0, 0x34(r1)
/* 802DD04C 002D9F8C  38 C4 CB 80 */	addi r6, r4, lbl_8048CB80@l
/* 802DD050 002D9F90  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802DD054 002D9F94  3B E1 00 08 */	addi r31, r1, 8
/* 802DD058 002D9F98  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802DD05C 002D9F9C  3B C0 00 00 */	li r30, 0
/* 802DD060 002D9FA0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802DD064 002D9FA4  7C 7D 1B 78 */	mr r29, r3
/* 802DD068 002D9FA8  80 A6 00 00 */	lwz r5, 0(r6)
/* 802DD06C 002D9FAC  80 86 00 04 */	lwz r4, 4(r6)
/* 802DD070 002D9FB0  80 66 00 08 */	lwz r3, 8(r6)
/* 802DD074 002D9FB4  80 06 00 0C */	lwz r0, 0xc(r6)
/* 802DD078 002D9FB8  90 A1 00 08 */	stw r5, 8(r1)
/* 802DD07C 002D9FBC  90 81 00 0C */	stw r4, 0xc(r1)
/* 802DD080 002D9FC0  90 61 00 10 */	stw r3, 0x10(r1)
/* 802DD084 002D9FC4  90 01 00 14 */	stw r0, 0x14(r1)
.L_802DD088:
/* 802DD088 002D9FC8  80 7D 01 14 */	lwz r3, 0x114(r29)
/* 802DD08C 002D9FCC  80 9F 00 00 */	lwz r4, 0(r31)
/* 802DD090 002D9FD0  4B E5 8D B5 */	bl getCollPart__8CollTreeFUl
/* 802DD094 002D9FD4  28 03 00 00 */	cmplwi r3, 0
/* 802DD098 002D9FD8  41 82 00 08 */	beq .L_802DD0A0
/* 802DD09C 002D9FDC  4B E5 A3 01 */	bl makeTubeTree__8CollPartFv
.L_802DD0A0:
/* 802DD0A0 002D9FE0  3B DE 00 01 */	addi r30, r30, 1
/* 802DD0A4 002D9FE4  3B FF 00 04 */	addi r31, r31, 4
/* 802DD0A8 002D9FE8  2C 1E 00 04 */	cmpwi r30, 4
/* 802DD0AC 002D9FEC  41 80 FF DC */	blt .L_802DD088
/* 802DD0B0 002D9FF0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802DD0B4 002D9FF4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802DD0B8 002D9FF8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802DD0BC 002D9FFC  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802DD0C0 002DA000  7C 08 03 A6 */	mtlr r0
/* 802DD0C4 002DA004  38 21 00 30 */	addi r1, r1, 0x30
/* 802DD0C8 002DA008  4E 80 00 20 */	blr 

.global setupTreasure__Q34Game11BigTreasure3ObjFv
setupTreasure__Q34Game11BigTreasure3ObjFv:
/* 802DD0CC 002DA00C  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 802DD0D0 002DA010  7C 08 02 A6 */	mflr r0
/* 802DD0D4 002DA014  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 802DD0D8 002DA018  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 802DD0DC 002DA01C  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 802DD0E0 002DA020  BE C1 00 88 */	stmw r22, 0x88(r1)
/* 802DD0E4 002DA024  3C 80 80 49 */	lis r4, lbl_8048CA80@ha
/* 802DD0E8 002DA028  7C 78 1B 78 */	mr r24, r3
/* 802DD0EC 002DA02C  3B C4 CA 80 */	addi r30, r4, lbl_8048CA80@l
/* 802DD0F0 002DA030  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 802DD0F4 002DA034  82 DE 01 10 */	lwz r22, 0x110(r30)
/* 802DD0F8 002DA038  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 802DD0FC 002DA03C  81 9E 01 14 */	lwz r12, 0x114(r30)
/* 802DD100 002DA040  7F 1D C3 78 */	mr r29, r24
/* 802DD104 002DA044  81 7E 01 18 */	lwz r11, 0x118(r30)
/* 802DD108 002DA048  3B 81 00 28 */	addi r28, r1, 0x28
/* 802DD10C 002DA04C  81 5E 01 1C */	lwz r10, 0x11c(r30)
/* 802DD110 002DA050  3B 61 00 18 */	addi r27, r1, 0x18
/* 802DD114 002DA054  81 3E 01 20 */	lwz r9, 0x120(r30)
/* 802DD118 002DA058  3B 41 00 08 */	addi r26, r1, 8
/* 802DD11C 002DA05C  81 1E 01 24 */	lwz r8, 0x124(r30)
/* 802DD120 002DA060  3B E4 A2 F4 */	addi r31, r4, __vt__Q24Game15CreatureInitArg@l
/* 802DD124 002DA064  80 FE 01 28 */	lwz r7, 0x128(r30)
/* 802DD128 002DA068  3A E3 A2 B8 */	addi r23, r3, __vt__Q24Game13PelletInitArg@l
/* 802DD12C 002DA06C  80 DE 01 2C */	lwz r6, 0x12c(r30)
/* 802DD130 002DA070  3B 20 00 00 */	li r25, 0
/* 802DD134 002DA074  80 BE 01 6C */	lwz r5, 0x16c(r30)
/* 802DD138 002DA078  80 9E 01 70 */	lwz r4, 0x170(r30)
/* 802DD13C 002DA07C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802DD140 002DA080  80 1E 01 78 */	lwz r0, 0x178(r30)
/* 802DD144 002DA084  92 C1 00 28 */	stw r22, 0x28(r1)
/* 802DD148 002DA088  C3 E2 E8 D0 */	lfs f31, lbl_8051CC30@sda21(r2)
/* 802DD14C 002DA08C  91 81 00 2C */	stw r12, 0x2c(r1)
/* 802DD150 002DA090  91 61 00 30 */	stw r11, 0x30(r1)
/* 802DD154 002DA094  91 41 00 34 */	stw r10, 0x34(r1)
/* 802DD158 002DA098  91 21 00 18 */	stw r9, 0x18(r1)
/* 802DD15C 002DA09C  91 01 00 1C */	stw r8, 0x1c(r1)
/* 802DD160 002DA0A0  90 E1 00 20 */	stw r7, 0x20(r1)
/* 802DD164 002DA0A4  90 C1 00 24 */	stw r6, 0x24(r1)
/* 802DD168 002DA0A8  90 A1 00 08 */	stw r5, 8(r1)
/* 802DD16C 002DA0AC  90 81 00 0C */	stw r4, 0xc(r1)
/* 802DD170 002DA0B0  90 61 00 10 */	stw r3, 0x10(r1)
/* 802DD174 002DA0B4  90 01 00 14 */	stw r0, 0x14(r1)
.L_802DD178:
/* 802DD178 002DA0B8  38 19 02 DD */	addi r0, r25, 0x2dd
/* 802DD17C 002DA0BC  38 60 00 00 */	li r3, 0
/* 802DD180 002DA0C0  7C 78 01 AE */	stbx r3, r24, r0
/* 802DD184 002DA0C4  80 9C 00 00 */	lwz r4, 0(r28)
/* 802DD188 002DA0C8  90 7D 03 C4 */	stw r3, 0x3c4(r29)
/* 802DD18C 002DA0CC  D3 FD 03 D8 */	stfs f31, 0x3d8(r29)
/* 802DD190 002DA0D0  D3 FD 03 E8 */	stfs f31, 0x3e8(r29)
/* 802DD194 002DA0D4  80 78 01 14 */	lwz r3, 0x114(r24)
/* 802DD198 002DA0D8  4B E5 8C AD */	bl getCollPart__8CollTreeFUl
/* 802DD19C 002DA0DC  90 7D 03 F8 */	stw r3, 0x3f8(r29)
/* 802DD1A0 002DA0E0  39 00 00 00 */	li r8, 0
/* 802DD1A4 002DA0E4  38 00 FF FF */	li r0, -1
/* 802DD1A8 002DA0E8  38 E0 00 FF */	li r7, 0xff
/* 802DD1AC 002DA0EC  93 E1 00 60 */	stw r31, 0x60(r1)
/* 802DD1B0 002DA0F0  38 C0 00 01 */	li r6, 1
/* 802DD1B4 002DA0F4  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 802DD1B8 002DA0F8  38 81 00 60 */	addi r4, r1, 0x60
/* 802DD1BC 002DA0FC  92 E1 00 60 */	stw r23, 0x60(r1)
/* 802DD1C0 002DA100  80 BB 00 00 */	lwz r5, 0(r27)
/* 802DD1C4 002DA104  99 01 00 7C */	stb r8, 0x7c(r1)
/* 802DD1C8 002DA108  B1 01 00 74 */	sth r8, 0x74(r1)
/* 802DD1CC 002DA10C  98 E1 00 76 */	stb r7, 0x76(r1)
/* 802DD1D0 002DA110  91 01 00 78 */	stw r8, 0x78(r1)
/* 802DD1D4 002DA114  99 01 00 77 */	stb r8, 0x77(r1)
/* 802DD1D8 002DA118  98 C1 00 64 */	stb r6, 0x64(r1)
/* 802DD1DC 002DA11C  99 01 00 7D */	stb r8, 0x7d(r1)
/* 802DD1E0 002DA120  90 01 00 84 */	stw r0, 0x84(r1)
/* 802DD1E4 002DA124  90 01 00 80 */	stw r0, 0x80(r1)
/* 802DD1E8 002DA128  99 01 00 7E */	stb r8, 0x7e(r1)
/* 802DD1EC 002DA12C  99 01 00 7F */	stb r8, 0x7f(r1)
/* 802DD1F0 002DA130  4B E9 07 F5 */	bl makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgPc
/* 802DD1F4 002DA134  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DD1F8 002DA138  41 82 00 48 */	beq .L_802DD240
/* 802DD1FC 002DA13C  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 802DD200 002DA140  38 81 00 60 */	addi r4, r1, 0x60
/* 802DD204 002DA144  4B E9 02 BD */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 802DD208 002DA148  90 7D 03 C4 */	stw r3, 0x3c4(r29)
/* 802DD20C 002DA14C  80 1D 03 C4 */	lwz r0, 0x3c4(r29)
/* 802DD210 002DA150  28 00 00 00 */	cmplwi r0, 0
/* 802DD214 002DA154  41 82 00 2C */	beq .L_802DD240
/* 802DD218 002DA158  80 78 01 74 */	lwz r3, 0x174(r24)
/* 802DD21C 002DA15C  80 9A 00 00 */	lwz r4, 0(r26)
/* 802DD220 002DA160  48 16 1D C5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802DD224 002DA164  48 14 C6 7D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802DD228 002DA168  7C 60 1B 78 */	mr r0, r3
/* 802DD22C 002DA16C  80 7D 03 C4 */	lwz r3, 0x3c4(r29)
/* 802DD230 002DA170  7C 04 03 78 */	mr r4, r0
/* 802DD234 002DA174  4B EC 28 75 */	bl startCapture__Q24Game8CreatureFP7Matrixf
/* 802DD238 002DA178  C0 02 E9 6C */	lfs f0, STARTING_TREASURE_HEALTH@sda21(r2)
/* 802DD23C 002DA17C  D0 1D 03 D8 */	stfs f0, 0x3d8(r29)
.L_802DD240:
/* 802DD240 002DA180  3B 39 00 01 */	addi r25, r25, 1
/* 802DD244 002DA184  3B 9C 00 04 */	addi r28, r28, 4
/* 802DD248 002DA188  2C 19 00 04 */	cmpwi r25, 4
/* 802DD24C 002DA18C  3B 7B 00 04 */	addi r27, r27, 4
/* 802DD250 002DA190  3B 5A 00 04 */	addi r26, r26, 4
/* 802DD254 002DA194  3B BD 00 04 */	addi r29, r29, 4
/* 802DD258 002DA198  41 80 FF 20 */	blt .L_802DD178
/* 802DD25C 002DA19C  39 00 00 00 */	li r8, 0
/* 802DD260 002DA1A0  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 802DD264 002DA1A4  91 18 03 D4 */	stw r8, 0x3d4(r24)
/* 802DD268 002DA1A8  38 00 FF FF */	li r0, -1
/* 802DD26C 002DA1AC  38 83 A2 F4 */	addi r4, r3, __vt__Q24Game15CreatureInitArg@l
/* 802DD270 002DA1B0  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 802DD274 002DA1B4  90 81 00 38 */	stw r4, 0x38(r1)
/* 802DD278 002DA1B8  38 63 A2 B8 */	addi r3, r3, __vt__Q24Game13PelletInitArg@l
/* 802DD27C 002DA1BC  38 E0 00 FF */	li r7, 0xff
/* 802DD280 002DA1C0  38 C0 00 01 */	li r6, 1
/* 802DD284 002DA1C4  90 61 00 38 */	stw r3, 0x38(r1)
/* 802DD288 002DA1C8  38 81 00 38 */	addi r4, r1, 0x38
/* 802DD28C 002DA1CC  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 802DD290 002DA1D0  38 A2 E9 70 */	addi r5, r2, lbl_8051CCD0@sda21
/* 802DD294 002DA1D4  99 01 00 54 */	stb r8, 0x54(r1)
/* 802DD298 002DA1D8  B1 01 00 4C */	sth r8, 0x4c(r1)
/* 802DD29C 002DA1DC  98 E1 00 4E */	stb r7, 0x4e(r1)
/* 802DD2A0 002DA1E0  91 01 00 50 */	stw r8, 0x50(r1)
/* 802DD2A4 002DA1E4  99 01 00 4F */	stb r8, 0x4f(r1)
/* 802DD2A8 002DA1E8  98 C1 00 3C */	stb r6, 0x3c(r1)
/* 802DD2AC 002DA1EC  99 01 00 55 */	stb r8, 0x55(r1)
/* 802DD2B0 002DA1F0  90 01 00 5C */	stw r0, 0x5c(r1)
/* 802DD2B4 002DA1F4  90 01 00 58 */	stw r0, 0x58(r1)
/* 802DD2B8 002DA1F8  99 01 00 56 */	stb r8, 0x56(r1)
/* 802DD2BC 002DA1FC  99 01 00 57 */	stb r8, 0x57(r1)
/* 802DD2C0 002DA200  4B E9 07 25 */	bl makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgPc
/* 802DD2C4 002DA204  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DD2C8 002DA208  41 82 00 40 */	beq .L_802DD308
/* 802DD2CC 002DA20C  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 802DD2D0 002DA210  38 81 00 38 */	addi r4, r1, 0x38
/* 802DD2D4 002DA214  4B E9 01 ED */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 802DD2D8 002DA218  90 78 03 D4 */	stw r3, 0x3d4(r24)
/* 802DD2DC 002DA21C  80 18 03 D4 */	lwz r0, 0x3d4(r24)
/* 802DD2E0 002DA220  28 00 00 00 */	cmplwi r0, 0
/* 802DD2E4 002DA224  41 82 00 24 */	beq .L_802DD308
/* 802DD2E8 002DA228  80 78 01 74 */	lwz r3, 0x174(r24)
/* 802DD2EC 002DA22C  38 9E 01 7C */	addi r4, r30, 0x17c
/* 802DD2F0 002DA230  48 16 1C F5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802DD2F4 002DA234  48 14 C5 AD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802DD2F8 002DA238  7C 60 1B 78 */	mr r0, r3
/* 802DD2FC 002DA23C  80 78 03 D4 */	lwz r3, 0x3d4(r24)
/* 802DD300 002DA240  7C 04 03 78 */	mr r4, r0
/* 802DD304 002DA244  4B EC 27 A5 */	bl startCapture__Q24Game8CreatureFP7Matrixf
.L_802DD308:
/* 802DD308 002DA248  7F 19 C3 78 */	mr r25, r24
/* 802DD30C 002DA24C  3A E0 00 01 */	li r23, 1
/* 802DD310 002DA250  3A C0 00 00 */	li r22, 0
.L_802DD314:
/* 802DD314 002DA254  80 19 03 C4 */	lwz r0, 0x3c4(r25)
/* 802DD318 002DA258  28 00 00 00 */	cmplwi r0, 0
/* 802DD31C 002DA25C  41 82 00 0C */	beq .L_802DD328
/* 802DD320 002DA260  3A E0 00 00 */	li r23, 0
/* 802DD324 002DA264  48 00 00 4C */	b .L_802DD370
.L_802DD328:
/* 802DD328 002DA268  80 99 03 F8 */	lwz r4, 0x3f8(r25)
/* 802DD32C 002DA26C  28 04 00 00 */	cmplwi r4, 0
/* 802DD330 002DA270  41 82 00 40 */	beq .L_802DD370
/* 802DD334 002DA274  7F 03 C3 78 */	mr r3, r24
/* 802DD338 002DA278  48 00 06 05 */	bl flickStickCollPartPikmin__Q34Game11BigTreasure3ObjFP8CollPart
/* 802DD33C 002DA27C  80 B9 03 F8 */	lwz r5, 0x3f8(r25)
/* 802DD340 002DA280  3C 60 5F 74 */	lis r3, 0x5F745F5F@ha
/* 802DD344 002DA284  38 83 5F 5F */	addi r4, r3, 0x5F745F5F@l
/* 802DD348 002DA288  38 65 00 3C */	addi r3, r5, 0x3c
/* 802DD34C 002DA28C  48 13 60 B9 */	bl __as__4ID32FUl
/* 802DD350 002DA290  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DD354 002DA294  38 80 00 01 */	li r4, 1
/* 802DD358 002DA298  80 79 03 F8 */	lwz r3, 0x3f8(r25)
/* 802DD35C 002DA29C  38 00 00 00 */	li r0, 0
/* 802DD360 002DA2A0  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802DD364 002DA2A4  80 79 03 F8 */	lwz r3, 0x3f8(r25)
/* 802DD368 002DA2A8  B0 83 00 48 */	sth r4, 0x48(r3)
/* 802DD36C 002DA2AC  90 19 03 F8 */	stw r0, 0x3f8(r25)
.L_802DD370:
/* 802DD370 002DA2B0  3A D6 00 01 */	addi r22, r22, 1
/* 802DD374 002DA2B4  3B 39 00 04 */	addi r25, r25, 4
/* 802DD378 002DA2B8  2C 16 00 04 */	cmpwi r22, 4
/* 802DD37C 002DA2BC  41 80 FF 98 */	blt .L_802DD314
/* 802DD380 002DA2C0  3C 80 74 61 */	lis r4, 0x74616D31@ha
/* 802DD384 002DA2C4  80 78 01 14 */	lwz r3, 0x114(r24)
/* 802DD388 002DA2C8  38 84 6D 31 */	addi r4, r4, 0x74616D31@l
/* 802DD38C 002DA2CC  4B E5 8A B9 */	bl getCollPart__8CollTreeFUl
/* 802DD390 002DA2D0  7C 7A 1B 78 */	mr r26, r3
/* 802DD394 002DA2D4  3C 80 74 61 */	lis r4, 0x74616D32@ha
/* 802DD398 002DA2D8  80 78 01 14 */	lwz r3, 0x114(r24)
/* 802DD39C 002DA2DC  38 84 6D 32 */	addi r4, r4, 0x74616D32@l
/* 802DD3A0 002DA2E0  4B E5 8A A5 */	bl getCollPart__8CollTreeFUl
/* 802DD3A4 002DA2E4  28 1A 00 00 */	cmplwi r26, 0
/* 802DD3A8 002DA2E8  7C 79 1B 78 */	mr r25, r3
/* 802DD3AC 002DA2EC  41 82 00 58 */	beq .L_802DD404
/* 802DD3B0 002DA2F0  28 19 00 00 */	cmplwi r25, 0
/* 802DD3B4 002DA2F4  41 82 00 50 */	beq .L_802DD404
/* 802DD3B8 002DA2F8  56 E0 06 3F */	clrlwi. r0, r23, 0x18
/* 802DD3BC 002DA2FC  41 82 00 28 */	beq .L_802DD3E4
/* 802DD3C0 002DA300  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 802DD3C4 002DA304  38 7A 00 3C */	addi r3, r26, 0x3c
/* 802DD3C8 002DA308  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 802DD3CC 002DA30C  48 13 60 39 */	bl __as__4ID32FUl
/* 802DD3D0 002DA310  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 802DD3D4 002DA314  38 79 00 3C */	addi r3, r25, 0x3c
/* 802DD3D8 002DA318  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 802DD3DC 002DA31C  48 13 60 29 */	bl __as__4ID32FUl
/* 802DD3E0 002DA320  48 00 00 24 */	b .L_802DD404
.L_802DD3E4:
/* 802DD3E4 002DA324  3C 80 5F 74 */	lis r4, 0x5F745F5F@ha
/* 802DD3E8 002DA328  38 7A 00 3C */	addi r3, r26, 0x3c
/* 802DD3EC 002DA32C  38 84 5F 5F */	addi r4, r4, 0x5F745F5F@l
/* 802DD3F0 002DA330  48 13 60 15 */	bl __as__4ID32FUl
/* 802DD3F4 002DA334  3C 80 5F 74 */	lis r4, 0x5F745F5F@ha
/* 802DD3F8 002DA338  38 79 00 3C */	addi r3, r25, 0x3c
/* 802DD3FC 002DA33C  38 84 5F 5F */	addi r4, r4, 0x5F745F5F@l
/* 802DD400 002DA340  48 13 60 05 */	bl __as__4ID32FUl
.L_802DD404:
/* 802DD404 002DA344  38 00 FF FF */	li r0, -1
/* 802DD408 002DA348  90 18 04 08 */	stw r0, 0x408(r24)
/* 802DD40C 002DA34C  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 802DD410 002DA350  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 802DD414 002DA354  BA C1 00 88 */	lmw r22, 0x88(r1)
/* 802DD418 002DA358  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 802DD41C 002DA35C  7C 08 03 A6 */	mtlr r0
/* 802DD420 002DA360  38 21 00 C0 */	addi r1, r1, 0xc0
/* 802DD424 002DA364  4E 80 00 20 */	blr 

.global updateTreasure__Q34Game11BigTreasure3ObjFv
updateTreasure__Q34Game11BigTreasure3ObjFv:
/* 802DD428 002DA368  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 802DD42C 002DA36C  7C 08 02 A6 */	mflr r0
/* 802DD430 002DA370  90 01 00 94 */	stw r0, 0x94(r1)
/* 802DD434 002DA374  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 802DD438 002DA378  93 C1 00 88 */	stw r30, 0x88(r1)
/* 802DD43C 002DA37C  93 A1 00 84 */	stw r29, 0x84(r1)
/* 802DD440 002DA380  7C 7D 1B 78 */	mr r29, r3
/* 802DD444 002DA384  48 00 01 4D */	bl dropTreasure__Q34Game11BigTreasure3ObjFv
/* 802DD448 002DA388  3B C0 00 00 */	li r30, 0
/* 802DD44C 002DA38C  7F BF EB 78 */	mr r31, r29
.L_802DD450:
/* 802DD450 002DA390  80 1F 03 C4 */	lwz r0, 0x3c4(r31)
/* 802DD454 002DA394  28 00 00 00 */	cmplwi r0, 0
/* 802DD458 002DA398  41 82 00 EC */	beq .L_802DD544
/* 802DD45C 002DA39C  38 61 00 38 */	addi r3, r1, 0x38
/* 802DD460 002DA3A0  4B E0 CE 41 */	bl PSMTXIdentity
/* 802DD464 002DA3A4  38 7E 02 DD */	addi r3, r30, 0x2dd
/* 802DD468 002DA3A8  7C 1D 18 AE */	lbzx r0, r29, r3
/* 802DD46C 002DA3AC  28 00 00 00 */	cmplwi r0, 0
/* 802DD470 002DA3B0  41 82 00 B8 */	beq .L_802DD528
/* 802DD474 002DA3B4  C0 5F 03 E8 */	lfs f2, 0x3e8(r31)
/* 802DD478 002DA3B8  C0 22 E9 78 */	lfs f1, lbl_8051CCD8@sda21(r2)
/* 802DD47C 002DA3BC  C0 02 E9 7C */	lfs f0, lbl_8051CCDC@sda21(r2)
/* 802DD480 002DA3C0  EC 22 08 2A */	fadds f1, f2, f1
/* 802DD484 002DA3C4  D0 3F 03 E8 */	stfs f1, 0x3e8(r31)
/* 802DD488 002DA3C8  C0 3F 03 E8 */	lfs f1, 0x3e8(r31)
/* 802DD48C 002DA3CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DD490 002DA3D0  40 81 00 14 */	ble .L_802DD4A4
/* 802DD494 002DA3D4  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DD498 002DA3D8  38 00 00 00 */	li r0, 0
/* 802DD49C 002DA3DC  D0 1F 03 E8 */	stfs f0, 0x3e8(r31)
/* 802DD4A0 002DA3E0  7C 1D 19 AE */	stbx r0, r29, r3
.L_802DD4A4:
/* 802DD4A4 002DA3E4  C0 5F 03 E8 */	lfs f2, 0x3e8(r31)
/* 802DD4A8 002DA3E8  38 61 00 08 */	addi r3, r1, 8
/* 802DD4AC 002DA3EC  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DD4B0 002DA3F0  38 80 00 59 */	li r4, 0x59
/* 802DD4B4 002DA3F4  C0 22 E9 80 */	lfs f1, lbl_8051CCE0@sda21(r2)
/* 802DD4B8 002DA3F8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802DD4BC 002DA3FC  40 80 00 30 */	bge .L_802DD4EC
/* 802DD4C0 002DA400  C0 02 E9 24 */	lfs f0, lbl_8051CC84@sda21(r2)
/* 802DD4C4 002DA404  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 802DD4C8 002DA408  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 802DD4CC 002DA40C  EC 02 00 32 */	fmuls f0, f2, f0
/* 802DD4D0 002DA410  FC 00 00 1E */	fctiwz f0, f0
/* 802DD4D4 002DA414  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 802DD4D8 002DA418  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 802DD4DC 002DA41C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802DD4E0 002DA420  7C 05 04 2E */	lfsx f0, r5, r0
/* 802DD4E4 002DA424  FC 00 00 50 */	fneg f0, f0
/* 802DD4E8 002DA428  48 00 00 28 */	b .L_802DD510
.L_802DD4EC:
/* 802DD4EC 002DA42C  C0 02 E9 28 */	lfs f0, lbl_8051CC88@sda21(r2)
/* 802DD4F0 002DA430  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 802DD4F4 002DA434  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 802DD4F8 002DA438  EC 02 00 32 */	fmuls f0, f2, f0
/* 802DD4FC 002DA43C  FC 00 00 1E */	fctiwz f0, f0
/* 802DD500 002DA440  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 802DD504 002DA444  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802DD508 002DA448  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802DD50C 002DA44C  7C 05 04 2E */	lfsx f0, r5, r0
.L_802DD510:
/* 802DD510 002DA450  EC 21 00 32 */	fmuls f1, f1, f0
/* 802DD514 002DA454  4B E0 D0 01 */	bl PSMTXRotRad
/* 802DD518 002DA458  38 61 00 38 */	addi r3, r1, 0x38
/* 802DD51C 002DA45C  38 81 00 08 */	addi r4, r1, 8
/* 802DD520 002DA460  7C 65 1B 78 */	mr r5, r3
/* 802DD524 002DA464  4B E0 CD DD */	bl PSMTXConcat
.L_802DD528:
/* 802DD528 002DA468  2C 1E 00 02 */	cmpwi r30, 2
/* 802DD52C 002DA46C  40 82 00 0C */	bne .L_802DD538
/* 802DD530 002DA470  C0 02 E9 84 */	lfs f0, lbl_8051CCE4@sda21(r2)
/* 802DD534 002DA474  D0 01 00 54 */	stfs f0, 0x54(r1)
.L_802DD538:
/* 802DD538 002DA478  80 7F 03 C4 */	lwz r3, 0x3c4(r31)
/* 802DD53C 002DA47C  38 81 00 38 */	addi r4, r1, 0x38
/* 802DD540 002DA480  4B EC 25 BD */	bl updateCapture__Q24Game8CreatureFR7Matrixf
.L_802DD544:
/* 802DD544 002DA484  3B DE 00 01 */	addi r30, r30, 1
/* 802DD548 002DA488  3B FF 00 04 */	addi r31, r31, 4
/* 802DD54C 002DA48C  2C 1E 00 04 */	cmpwi r30, 4
/* 802DD550 002DA490  41 80 FF 00 */	blt .L_802DD450
/* 802DD554 002DA494  80 1D 03 D4 */	lwz r0, 0x3d4(r29)
/* 802DD558 002DA498  28 00 00 00 */	cmplwi r0, 0
/* 802DD55C 002DA49C  41 82 00 18 */	beq .L_802DD574
/* 802DD560 002DA4A0  38 61 00 38 */	addi r3, r1, 0x38
/* 802DD564 002DA4A4  4B E0 CD 3D */	bl PSMTXIdentity
/* 802DD568 002DA4A8  80 7D 03 D4 */	lwz r3, 0x3d4(r29)
/* 802DD56C 002DA4AC  38 81 00 38 */	addi r4, r1, 0x38
/* 802DD570 002DA4B0  4B EC 25 8D */	bl updateCapture__Q24Game8CreatureFR7Matrixf
.L_802DD574:
/* 802DD574 002DA4B4  80 01 00 94 */	lwz r0, 0x94(r1)
/* 802DD578 002DA4B8  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 802DD57C 002DA4BC  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 802DD580 002DA4C0  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 802DD584 002DA4C4  7C 08 03 A6 */	mtlr r0
/* 802DD588 002DA4C8  38 21 00 90 */	addi r1, r1, 0x90
/* 802DD58C 002DA4CC  4E 80 00 20 */	blr 

.global dropTreasure__Q34Game11BigTreasure3ObjFv
dropTreasure__Q34Game11BigTreasure3ObjFv:
/* 802DD590 002DA4D0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802DD594 002DA4D4  7C 08 02 A6 */	mflr r0
/* 802DD598 002DA4D8  90 01 00 34 */	stw r0, 0x34(r1)
/* 802DD59C 002DA4DC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802DD5A0 002DA4E0  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802DD5A4 002DA4E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802DD5A8 002DA4E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802DD5AC 002DA4EC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802DD5B0 002DA4F0  93 81 00 10 */	stw r28, 0x10(r1)
/* 802DD5B4 002DA4F4  7C 7F 1B 78 */	mr r31, r3
/* 802DD5B8 002DA4F8  C3 E2 E8 D0 */	lfs f31, lbl_8051CC30@sda21(r2)
/* 802DD5BC 002DA4FC  7F FD FB 78 */	mr r29, r31
/* 802DD5C0 002DA500  3B 80 00 00 */	li r28, 0
/* 802DD5C4 002DA504  3B C0 00 00 */	li r30, 0
.L_802DD5C8:
/* 802DD5C8 002DA508  80 1D 03 C4 */	lwz r0, 0x3c4(r29)
/* 802DD5CC 002DA50C  28 00 00 00 */	cmplwi r0, 0
/* 802DD5D0 002DA510  41 82 00 3C */	beq .L_802DD60C
/* 802DD5D4 002DA514  C0 1D 03 D8 */	lfs f0, 0x3d8(r29)
/* 802DD5D8 002DA518  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802DD5DC 002DA51C  4C 40 13 82 */	cror 2, 0, 2
/* 802DD5E0 002DA520  40 82 00 2C */	bne .L_802DD60C
/* 802DD5E4 002DA524  7F E3 FB 78 */	mr r3, r31
/* 802DD5E8 002DA528  7F C4 F3 78 */	mr r4, r30
/* 802DD5EC 002DA52C  3B 80 00 01 */	li r28, 1
/* 802DD5F0 002DA530  48 00 2F DD */	bl createDropTreasureEffect__Q34Game11BigTreasure3ObjFi
/* 802DD5F4 002DA534  7F E3 FB 78 */	mr r3, r31
/* 802DD5F8 002DA538  7F C4 F3 78 */	mr r4, r30
/* 802DD5FC 002DA53C  48 00 2F 99 */	bl finishTreasurePinchSmoke__Q34Game11BigTreasure3ObjFi
/* 802DD600 002DA540  7F E3 FB 78 */	mr r3, r31
/* 802DD604 002DA544  7F C4 F3 78 */	mr r4, r30
/* 802DD608 002DA548  48 00 01 49 */	bl dropTreasure__Q34Game11BigTreasure3ObjFi
.L_802DD60C:
/* 802DD60C 002DA54C  3B DE 00 01 */	addi r30, r30, 1
/* 802DD610 002DA550  3B BD 00 04 */	addi r29, r29, 4
/* 802DD614 002DA554  2C 1E 00 04 */	cmpwi r30, 4
/* 802DD618 002DA558  41 80 FF B0 */	blt .L_802DD5C8
/* 802DD61C 002DA55C  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 802DD620 002DA560  41 82 01 08 */	beq .L_802DD728
/* 802DD624 002DA564  7F E3 FB 78 */	mr r3, r31
/* 802DD628 002DA568  48 00 1F 45 */	bl startBossItemDropBGM__Q34Game11BigTreasure3ObjFv
/* 802DD62C 002DA56C  7F FC FB 78 */	mr r28, r31
/* 802DD630 002DA570  3B A0 00 01 */	li r29, 1
/* 802DD634 002DA574  3B C0 00 00 */	li r30, 0
.L_802DD638:
/* 802DD638 002DA578  80 1C 03 C4 */	lwz r0, 0x3c4(r28)
/* 802DD63C 002DA57C  28 00 00 00 */	cmplwi r0, 0
/* 802DD640 002DA580  41 82 00 0C */	beq .L_802DD64C
/* 802DD644 002DA584  3B A0 00 00 */	li r29, 0
/* 802DD648 002DA588  48 00 00 4C */	b .L_802DD694
.L_802DD64C:
/* 802DD64C 002DA58C  80 9C 03 F8 */	lwz r4, 0x3f8(r28)
/* 802DD650 002DA590  28 04 00 00 */	cmplwi r4, 0
/* 802DD654 002DA594  41 82 00 40 */	beq .L_802DD694
/* 802DD658 002DA598  7F E3 FB 78 */	mr r3, r31
/* 802DD65C 002DA59C  48 00 02 E1 */	bl flickStickCollPartPikmin__Q34Game11BigTreasure3ObjFP8CollPart
/* 802DD660 002DA5A0  80 BC 03 F8 */	lwz r5, 0x3f8(r28)
/* 802DD664 002DA5A4  3C 60 5F 74 */	lis r3, 0x5F745F5F@ha
/* 802DD668 002DA5A8  38 83 5F 5F */	addi r4, r3, 0x5F745F5F@l
/* 802DD66C 002DA5AC  38 65 00 3C */	addi r3, r5, 0x3c
/* 802DD670 002DA5B0  48 13 5D 95 */	bl __as__4ID32FUl
/* 802DD674 002DA5B4  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DD678 002DA5B8  38 80 00 01 */	li r4, 1
/* 802DD67C 002DA5BC  80 7C 03 F8 */	lwz r3, 0x3f8(r28)
/* 802DD680 002DA5C0  38 00 00 00 */	li r0, 0
/* 802DD684 002DA5C4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802DD688 002DA5C8  80 7C 03 F8 */	lwz r3, 0x3f8(r28)
/* 802DD68C 002DA5CC  B0 83 00 48 */	sth r4, 0x48(r3)
/* 802DD690 002DA5D0  90 1C 03 F8 */	stw r0, 0x3f8(r28)
.L_802DD694:
/* 802DD694 002DA5D4  3B DE 00 01 */	addi r30, r30, 1
/* 802DD698 002DA5D8  3B 9C 00 04 */	addi r28, r28, 4
/* 802DD69C 002DA5DC  2C 1E 00 04 */	cmpwi r30, 4
/* 802DD6A0 002DA5E0  41 80 FF 98 */	blt .L_802DD638
/* 802DD6A4 002DA5E4  3C 80 74 61 */	lis r4, 0x74616D31@ha
/* 802DD6A8 002DA5E8  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 802DD6AC 002DA5EC  38 84 6D 31 */	addi r4, r4, 0x74616D31@l
/* 802DD6B0 002DA5F0  4B E5 87 95 */	bl getCollPart__8CollTreeFUl
/* 802DD6B4 002DA5F4  7C 7E 1B 78 */	mr r30, r3
/* 802DD6B8 002DA5F8  3C 80 74 61 */	lis r4, 0x74616D32@ha
/* 802DD6BC 002DA5FC  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 802DD6C0 002DA600  38 84 6D 32 */	addi r4, r4, 0x74616D32@l
/* 802DD6C4 002DA604  4B E5 87 81 */	bl getCollPart__8CollTreeFUl
/* 802DD6C8 002DA608  28 1E 00 00 */	cmplwi r30, 0
/* 802DD6CC 002DA60C  7C 7F 1B 78 */	mr r31, r3
/* 802DD6D0 002DA610  41 82 00 58 */	beq .L_802DD728
/* 802DD6D4 002DA614  28 1F 00 00 */	cmplwi r31, 0
/* 802DD6D8 002DA618  41 82 00 50 */	beq .L_802DD728
/* 802DD6DC 002DA61C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 802DD6E0 002DA620  41 82 00 28 */	beq .L_802DD708
/* 802DD6E4 002DA624  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 802DD6E8 002DA628  38 7E 00 3C */	addi r3, r30, 0x3c
/* 802DD6EC 002DA62C  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 802DD6F0 002DA630  48 13 5D 15 */	bl __as__4ID32FUl
/* 802DD6F4 002DA634  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 802DD6F8 002DA638  38 7F 00 3C */	addi r3, r31, 0x3c
/* 802DD6FC 002DA63C  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 802DD700 002DA640  48 13 5D 05 */	bl __as__4ID32FUl
/* 802DD704 002DA644  48 00 00 24 */	b .L_802DD728
.L_802DD708:
/* 802DD708 002DA648  3C 80 5F 74 */	lis r4, 0x5F745F5F@ha
/* 802DD70C 002DA64C  38 7E 00 3C */	addi r3, r30, 0x3c
/* 802DD710 002DA650  38 84 5F 5F */	addi r4, r4, 0x5F745F5F@l
/* 802DD714 002DA654  48 13 5C F1 */	bl __as__4ID32FUl
/* 802DD718 002DA658  3C 80 5F 74 */	lis r4, 0x5F745F5F@ha
/* 802DD71C 002DA65C  38 7F 00 3C */	addi r3, r31, 0x3c
/* 802DD720 002DA660  38 84 5F 5F */	addi r4, r4, 0x5F745F5F@l
/* 802DD724 002DA664  48 13 5C E1 */	bl __as__4ID32FUl
.L_802DD728:
/* 802DD728 002DA668  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802DD72C 002DA66C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802DD730 002DA670  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802DD734 002DA674  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802DD738 002DA678  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802DD73C 002DA67C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802DD740 002DA680  83 81 00 10 */	lwz r28, 0x10(r1)
/* 802DD744 002DA684  7C 08 03 A6 */	mtlr r0
/* 802DD748 002DA688  38 21 00 30 */	addi r1, r1, 0x30
/* 802DD74C 002DA68C  4E 80 00 20 */	blr 

.global dropTreasure__Q34Game11BigTreasure3ObjFi
dropTreasure__Q34Game11BigTreasure3ObjFi:
/* 802DD750 002DA690  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802DD754 002DA694  7C 08 02 A6 */	mflr r0
/* 802DD758 002DA698  90 01 00 34 */	stw r0, 0x34(r1)
/* 802DD75C 002DA69C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802DD760 002DA6A0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802DD764 002DA6A4  54 9E 10 3A */	slwi r30, r4, 2
/* 802DD768 002DA6A8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802DD76C 002DA6AC  7C 7D 1B 78 */	mr r29, r3
/* 802DD770 002DA6B0  7F FD F2 14 */	add r31, r29, r30
/* 802DD774 002DA6B4  80 7F 03 C4 */	lwz r3, 0x3c4(r31)
/* 802DD778 002DA6B8  4B EC 24 25 */	bl endCapture__Q24Game8CreatureFv
/* 802DD77C 002DA6BC  C0 22 E8 D0 */	lfs f1, lbl_8051CC30@sda21(r2)
/* 802DD780 002DA6C0  38 81 00 08 */	addi r4, r1, 8
/* 802DD784 002DA6C4  C0 02 E9 88 */	lfs f0, lbl_8051CCE8@sda21(r2)
/* 802DD788 002DA6C8  D0 21 00 08 */	stfs f1, 8(r1)
/* 802DD78C 002DA6CC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802DD790 002DA6D0  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 802DD794 002DA6D4  80 7F 03 C4 */	lwz r3, 0x3c4(r31)
/* 802DD798 002DA6D8  81 83 00 00 */	lwz r12, 0(r3)
/* 802DD79C 002DA6DC  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 802DD7A0 002DA6E0  7D 89 03 A6 */	mtctr r12
/* 802DD7A4 002DA6E4  4E 80 04 21 */	bctrl 
/* 802DD7A8 002DA6E8  38 00 00 00 */	li r0, 0
/* 802DD7AC 002DA6EC  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DD7B0 002DA6F0  90 1F 03 C4 */	stw r0, 0x3c4(r31)
/* 802DD7B4 002DA6F4  38 60 00 01 */	li r3, 1
/* 802DD7B8 002DA6F8  D0 1F 03 D8 */	stfs f0, 0x3d8(r31)
/* 802DD7BC 002DA6FC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802DD7C0 002DA700  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802DD7C4 002DA704  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802DD7C8 002DA708  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802DD7CC 002DA70C  7C 08 03 A6 */	mtlr r0
/* 802DD7D0 002DA710  38 21 00 30 */	addi r1, r1, 0x30
/* 802DD7D4 002DA714  4E 80 00 20 */	blr 

.global isCapturedTreasure__Q34Game11BigTreasure3ObjFv
isCapturedTreasure__Q34Game11BigTreasure3ObjFv:
/* 802DD7D8 002DA718  80 03 03 C4 */	lwz r0, 0x3c4(r3)
/* 802DD7DC 002DA71C  28 00 00 00 */	cmplwi r0, 0
/* 802DD7E0 002DA720  41 82 00 0C */	beq .L_802DD7EC
/* 802DD7E4 002DA724  38 60 00 01 */	li r3, 1
/* 802DD7E8 002DA728  4E 80 00 20 */	blr 
.L_802DD7EC:
/* 802DD7EC 002DA72C  80 03 03 C8 */	lwz r0, 0x3c8(r3)
/* 802DD7F0 002DA730  28 00 00 00 */	cmplwi r0, 0
/* 802DD7F4 002DA734  41 82 00 0C */	beq .L_802DD800
/* 802DD7F8 002DA738  38 60 00 01 */	li r3, 1
/* 802DD7FC 002DA73C  4E 80 00 20 */	blr 
.L_802DD800:
/* 802DD800 002DA740  38 63 00 08 */	addi r3, r3, 8
/* 802DD804 002DA744  80 03 03 C4 */	lwz r0, 0x3c4(r3)
/* 802DD808 002DA748  28 00 00 00 */	cmplwi r0, 0
/* 802DD80C 002DA74C  41 82 00 0C */	beq .L_802DD818
/* 802DD810 002DA750  38 60 00 01 */	li r3, 1
/* 802DD814 002DA754  4E 80 00 20 */	blr 
.L_802DD818:
/* 802DD818 002DA758  80 03 03 C8 */	lwz r0, 0x3c8(r3)
/* 802DD81C 002DA75C  28 00 00 00 */	cmplwi r0, 0
/* 802DD820 002DA760  41 82 00 0C */	beq .L_802DD82C
/* 802DD824 002DA764  38 60 00 01 */	li r3, 1
/* 802DD828 002DA768  4E 80 00 20 */	blr 
.L_802DD82C:
/* 802DD82C 002DA76C  38 60 00 00 */	li r3, 0
/* 802DD830 002DA770  4E 80 00 20 */	blr 

.global isCapturedTreasure__Q34Game11BigTreasure3ObjFi
isCapturedTreasure__Q34Game11BigTreasure3ObjFi:
/* 802DD834 002DA774  54 80 10 3A */	slwi r0, r4, 2
/* 802DD838 002DA778  7C 63 02 14 */	add r3, r3, r0
/* 802DD83C 002DA77C  80 63 03 C4 */	lwz r3, 0x3c4(r3)
/* 802DD840 002DA780  7C 03 00 D0 */	neg r0, r3
/* 802DD844 002DA784  7C 00 1B 78 */	or r0, r0, r3
/* 802DD848 002DA788  54 03 0F FE */	srwi r3, r0, 0x1f
/* 802DD84C 002DA78C  4E 80 00 20 */	blr 

.global getCapturedTreasureNum__Q34Game11BigTreasure3ObjFv
getCapturedTreasureNum__Q34Game11BigTreasure3ObjFv:
/* 802DD850 002DA790  80 03 03 C4 */	lwz r0, 0x3c4(r3)
/* 802DD854 002DA794  38 80 00 00 */	li r4, 0
/* 802DD858 002DA798  28 00 00 00 */	cmplwi r0, 0
/* 802DD85C 002DA79C  41 82 00 08 */	beq .L_802DD864
/* 802DD860 002DA7A0  38 80 00 01 */	li r4, 1
.L_802DD864:
/* 802DD864 002DA7A4  80 03 03 C8 */	lwz r0, 0x3c8(r3)
/* 802DD868 002DA7A8  28 00 00 00 */	cmplwi r0, 0
/* 802DD86C 002DA7AC  41 82 00 08 */	beq .L_802DD874
/* 802DD870 002DA7B0  38 84 00 01 */	addi r4, r4, 1
.L_802DD874:
/* 802DD874 002DA7B4  80 03 03 CC */	lwz r0, 0x3cc(r3)
/* 802DD878 002DA7B8  28 00 00 00 */	cmplwi r0, 0
/* 802DD87C 002DA7BC  41 82 00 08 */	beq .L_802DD884
/* 802DD880 002DA7C0  38 84 00 01 */	addi r4, r4, 1
.L_802DD884:
/* 802DD884 002DA7C4  80 03 03 D0 */	lwz r0, 0x3d0(r3)
/* 802DD888 002DA7C8  28 00 00 00 */	cmplwi r0, 0
/* 802DD88C 002DA7CC  41 82 00 08 */	beq .L_802DD894
/* 802DD890 002DA7D0  38 84 00 01 */	addi r4, r4, 1
.L_802DD894:
/* 802DD894 002DA7D4  7C 83 23 78 */	mr r3, r4
/* 802DD898 002DA7D8  4E 80 00 20 */	blr 

.global addTreasureDamage__Q34Game11BigTreasure3ObjFif
addTreasureDamage__Q34Game11BigTreasure3ObjFif:
/* 802DD89C 002DA7DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DD8A0 002DA7E0  7C 08 02 A6 */	mflr r0
/* 802DD8A4 002DA7E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DD8A8 002DA7E8  54 80 10 3A */	slwi r0, r4, 2
/* 802DD8AC 002DA7EC  7C C3 02 14 */	add r6, r3, r0
/* 802DD8B0 002DA7F0  80 06 03 C4 */	lwz r0, 0x3c4(r6)
/* 802DD8B4 002DA7F4  28 00 00 00 */	cmplwi r0, 0
/* 802DD8B8 002DA7F8  41 82 00 70 */	beq .L_802DD928
/* 802DD8BC 002DA7FC  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802DD8C0 002DA800  C0 66 03 D8 */	lfs f3, 0x3d8(r6)
/* 802DD8C4 002DA804  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802DD8C8 002DA808  41 82 00 0C */	beq .L_802DD8D4
/* 802DD8CC 002DA80C  C0 02 E8 DC */	lfs f0, lbl_8051CC3C@sda21(r2)
/* 802DD8D0 002DA810  EC 21 00 32 */	fmuls f1, f1, f0
.L_802DD8D4:
/* 802DD8D4 002DA814  7C A3 22 14 */	add r5, r3, r4
/* 802DD8D8 002DA818  38 00 00 01 */	li r0, 1
/* 802DD8DC 002DA81C  98 05 02 DD */	stb r0, 0x2dd(r5)
/* 802DD8E0 002DA820  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DD8E4 002DA824  C0 46 03 D8 */	lfs f2, 0x3d8(r6)
/* 802DD8E8 002DA828  EC 22 08 28 */	fsubs f1, f2, f1
/* 802DD8EC 002DA82C  D0 26 03 D8 */	stfs f1, 0x3d8(r6)
/* 802DD8F0 002DA830  C0 26 03 D8 */	lfs f1, 0x3d8(r6)
/* 802DD8F4 002DA834  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DD8F8 002DA838  40 80 00 08 */	bge .L_802DD900
/* 802DD8FC 002DA83C  D0 06 03 D8 */	stfs f0, 0x3d8(r6)
.L_802DD900:
/* 802DD900 002DA840  C0 22 E9 8C */	lfs f1, CRITICAL_TREASURE_HEALTH@sda21(r2)
/* 802DD904 002DA844  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 802DD908 002DA848  4C 41 13 82 */	cror 2, 1, 2
/* 802DD90C 002DA84C  40 82 00 14 */	bne .L_802DD920
/* 802DD910 002DA850  C0 06 03 D8 */	lfs f0, 0x3d8(r6)
/* 802DD914 002DA854  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802DD918 002DA858  40 80 00 08 */	bge .L_802DD920
/* 802DD91C 002DA85C  48 00 2C 3D */	bl startTreasurePinchSmoke__Q34Game11BigTreasure3ObjFi
.L_802DD920:
/* 802DD920 002DA860  38 60 00 01 */	li r3, 1
/* 802DD924 002DA864  48 00 00 08 */	b .L_802DD92C
.L_802DD928:
/* 802DD928 002DA868  38 60 00 00 */	li r3, 0
.L_802DD92C:
/* 802DD92C 002DA86C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DD930 002DA870  7C 08 03 A6 */	mtlr r0
/* 802DD934 002DA874  38 21 00 10 */	addi r1, r1, 0x10
/* 802DD938 002DA878  4E 80 00 20 */	blr 

.global flickStickCollPartPikmin__Q34Game11BigTreasure3ObjFP8CollPart
flickStickCollPartPikmin__Q34Game11BigTreasure3ObjFP8CollPart:
/* 802DD93C 002DA87C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802DD940 002DA880  7C 08 02 A6 */	mflr r0
/* 802DD944 002DA884  90 01 00 64 */	stw r0, 0x64(r1)
/* 802DD948 002DA888  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802DD94C 002DA88C  7C 9F 23 78 */	mr r31, r4
/* 802DD950 002DA890  93 C1 00 58 */	stw r30, 0x58(r1)
/* 802DD954 002DA894  7C 7E 1B 78 */	mr r30, r3
/* 802DD958 002DA898  7F C4 F3 78 */	mr r4, r30
/* 802DD95C 002DA89C  38 61 00 2C */	addi r3, r1, 0x2c
/* 802DD960 002DA8A0  93 A1 00 54 */	stw r29, 0x54(r1)
/* 802DD964 002DA8A4  4B EC 22 F9 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 802DD968 002DA8A8  38 00 00 00 */	li r0, 0
/* 802DD96C 002DA8AC  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 802DD970 002DA8B0  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 802DD974 002DA8B4  38 61 00 2C */	addi r3, r1, 0x2c
/* 802DD978 002DA8B8  28 00 00 00 */	cmplwi r0, 0
/* 802DD97C 002DA8BC  90 81 00 08 */	stw r4, 8(r1)
/* 802DD980 002DA8C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DD984 002DA8C4  90 01 00 0C */	stw r0, 0xc(r1)
/* 802DD988 002DA8C8  90 61 00 10 */	stw r3, 0x10(r1)
/* 802DD98C 002DA8CC  40 82 00 1C */	bne .L_802DD9A8
/* 802DD990 002DA8D0  81 83 00 00 */	lwz r12, 0(r3)
/* 802DD994 002DA8D4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802DD998 002DA8D8  7D 89 03 A6 */	mtctr r12
/* 802DD99C 002DA8DC  4E 80 04 21 */	bctrl 
/* 802DD9A0 002DA8E0  90 61 00 0C */	stw r3, 0xc(r1)
/* 802DD9A4 002DA8E4  48 00 01 D4 */	b .L_802DDB78
.L_802DD9A8:
/* 802DD9A8 002DA8E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802DD9AC 002DA8EC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802DD9B0 002DA8F0  7D 89 03 A6 */	mtctr r12
/* 802DD9B4 002DA8F4  4E 80 04 21 */	bctrl 
/* 802DD9B8 002DA8F8  90 61 00 0C */	stw r3, 0xc(r1)
/* 802DD9BC 002DA8FC  48 00 00 58 */	b .L_802DDA14
.L_802DD9C0:
/* 802DD9C0 002DA900  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802DD9C4 002DA904  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802DD9C8 002DA908  81 83 00 00 */	lwz r12, 0(r3)
/* 802DD9CC 002DA90C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802DD9D0 002DA910  7D 89 03 A6 */	mtctr r12
/* 802DD9D4 002DA914  4E 80 04 21 */	bctrl 
/* 802DD9D8 002DA918  7C 64 1B 78 */	mr r4, r3
/* 802DD9DC 002DA91C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802DD9E0 002DA920  81 83 00 00 */	lwz r12, 0(r3)
/* 802DD9E4 002DA924  81 8C 00 08 */	lwz r12, 8(r12)
/* 802DD9E8 002DA928  7D 89 03 A6 */	mtctr r12
/* 802DD9EC 002DA92C  4E 80 04 21 */	bctrl 
/* 802DD9F0 002DA930  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DD9F4 002DA934  40 82 01 84 */	bne .L_802DDB78
/* 802DD9F8 002DA938  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802DD9FC 002DA93C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802DDA00 002DA940  81 83 00 00 */	lwz r12, 0(r3)
/* 802DDA04 002DA944  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802DDA08 002DA948  7D 89 03 A6 */	mtctr r12
/* 802DDA0C 002DA94C  4E 80 04 21 */	bctrl 
/* 802DDA10 002DA950  90 61 00 0C */	stw r3, 0xc(r1)
.L_802DDA14:
/* 802DDA14 002DA954  81 81 00 08 */	lwz r12, 8(r1)
/* 802DDA18 002DA958  38 61 00 08 */	addi r3, r1, 8
/* 802DDA1C 002DA95C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802DDA20 002DA960  7D 89 03 A6 */	mtctr r12
/* 802DDA24 002DA964  4E 80 04 21 */	bctrl 
/* 802DDA28 002DA968  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DDA2C 002DA96C  41 82 FF 94 */	beq .L_802DD9C0
/* 802DDA30 002DA970  48 00 01 48 */	b .L_802DDB78
.L_802DDA34:
/* 802DDA34 002DA974  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802DDA38 002DA978  81 83 00 00 */	lwz r12, 0(r3)
/* 802DDA3C 002DA97C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802DDA40 002DA980  7D 89 03 A6 */	mtctr r12
/* 802DDA44 002DA984  4E 80 04 21 */	bctrl 
/* 802DDA48 002DA988  81 83 00 00 */	lwz r12, 0(r3)
/* 802DDA4C 002DA98C  7C 7D 1B 78 */	mr r29, r3
/* 802DDA50 002DA990  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802DDA54 002DA994  7D 89 03 A6 */	mtctr r12
/* 802DDA58 002DA998  4E 80 04 21 */	bctrl 
/* 802DDA5C 002DA99C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DDA60 002DA9A0  41 82 00 5C */	beq .L_802DDABC
/* 802DDA64 002DA9A4  80 1D 00 F8 */	lwz r0, 0xf8(r29)
/* 802DDA68 002DA9A8  7C 00 F8 40 */	cmplw r0, r31
/* 802DDA6C 002DA9AC  40 82 00 50 */	bne .L_802DDABC
/* 802DDA70 002DA9B0  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802DDA74 002DA9B4  C0 42 E8 E4 */	lfs f2, lbl_8051CC44@sda21(r2)
/* 802DDA78 002DA9B8  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802DDA7C 002DA9BC  C0 22 E8 D0 */	lfs f1, lbl_8051CC30@sda21(r2)
/* 802DDA80 002DA9C0  C0 02 E8 E8 */	lfs f0, lbl_8051CC48@sda21(r2)
/* 802DDA84 002DA9C4  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractFlick@ha
/* 802DDA88 002DA9C8  90 01 00 18 */	stw r0, 0x18(r1)
/* 802DDA8C 002DA9CC  38 03 4E 04 */	addi r0, r3, __vt__Q24Game13InteractFlick@l
/* 802DDA90 002DA9D0  7F A3 EB 78 */	mr r3, r29
/* 802DDA94 002DA9D4  38 81 00 18 */	addi r4, r1, 0x18
/* 802DDA98 002DA9D8  93 C1 00 1C */	stw r30, 0x1c(r1)
/* 802DDA9C 002DA9DC  90 01 00 18 */	stw r0, 0x18(r1)
/* 802DDAA0 002DA9E0  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802DDAA4 002DA9E4  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802DDAA8 002DA9E8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802DDAAC 002DA9EC  81 9D 00 00 */	lwz r12, 0(r29)
/* 802DDAB0 002DA9F0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802DDAB4 002DA9F4  7D 89 03 A6 */	mtctr r12
/* 802DDAB8 002DA9F8  4E 80 04 21 */	bctrl 
.L_802DDABC:
/* 802DDABC 002DA9FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DDAC0 002DAA00  28 00 00 00 */	cmplwi r0, 0
/* 802DDAC4 002DAA04  40 82 00 24 */	bne .L_802DDAE8
/* 802DDAC8 002DAA08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802DDACC 002DAA0C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802DDAD0 002DAA10  81 83 00 00 */	lwz r12, 0(r3)
/* 802DDAD4 002DAA14  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802DDAD8 002DAA18  7D 89 03 A6 */	mtctr r12
/* 802DDADC 002DAA1C  4E 80 04 21 */	bctrl 
/* 802DDAE0 002DAA20  90 61 00 0C */	stw r3, 0xc(r1)
/* 802DDAE4 002DAA24  48 00 00 94 */	b .L_802DDB78
.L_802DDAE8:
/* 802DDAE8 002DAA28  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802DDAEC 002DAA2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802DDAF0 002DAA30  81 83 00 00 */	lwz r12, 0(r3)
/* 802DDAF4 002DAA34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802DDAF8 002DAA38  7D 89 03 A6 */	mtctr r12
/* 802DDAFC 002DAA3C  4E 80 04 21 */	bctrl 
/* 802DDB00 002DAA40  90 61 00 0C */	stw r3, 0xc(r1)
/* 802DDB04 002DAA44  48 00 00 58 */	b .L_802DDB5C
.L_802DDB08:
/* 802DDB08 002DAA48  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802DDB0C 002DAA4C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802DDB10 002DAA50  81 83 00 00 */	lwz r12, 0(r3)
/* 802DDB14 002DAA54  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802DDB18 002DAA58  7D 89 03 A6 */	mtctr r12
/* 802DDB1C 002DAA5C  4E 80 04 21 */	bctrl 
/* 802DDB20 002DAA60  7C 64 1B 78 */	mr r4, r3
/* 802DDB24 002DAA64  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802DDB28 002DAA68  81 83 00 00 */	lwz r12, 0(r3)
/* 802DDB2C 002DAA6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802DDB30 002DAA70  7D 89 03 A6 */	mtctr r12
/* 802DDB34 002DAA74  4E 80 04 21 */	bctrl 
/* 802DDB38 002DAA78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DDB3C 002DAA7C  40 82 00 3C */	bne .L_802DDB78
/* 802DDB40 002DAA80  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802DDB44 002DAA84  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802DDB48 002DAA88  81 83 00 00 */	lwz r12, 0(r3)
/* 802DDB4C 002DAA8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802DDB50 002DAA90  7D 89 03 A6 */	mtctr r12
/* 802DDB54 002DAA94  4E 80 04 21 */	bctrl 
/* 802DDB58 002DAA98  90 61 00 0C */	stw r3, 0xc(r1)
.L_802DDB5C:
/* 802DDB5C 002DAA9C  81 81 00 08 */	lwz r12, 8(r1)
/* 802DDB60 002DAAA0  38 61 00 08 */	addi r3, r1, 8
/* 802DDB64 002DAAA4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802DDB68 002DAAA8  7D 89 03 A6 */	mtctr r12
/* 802DDB6C 002DAAAC  4E 80 04 21 */	bctrl 
/* 802DDB70 002DAAB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DDB74 002DAAB4  41 82 FF 94 */	beq .L_802DDB08
.L_802DDB78:
/* 802DDB78 002DAAB8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802DDB7C 002DAABC  81 83 00 00 */	lwz r12, 0(r3)
/* 802DDB80 002DAAC0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DDB84 002DAAC4  7D 89 03 A6 */	mtctr r12
/* 802DDB88 002DAAC8  4E 80 04 21 */	bctrl 
/* 802DDB8C 002DAACC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802DDB90 002DAAD0  7C 04 18 40 */	cmplw r4, r3
/* 802DDB94 002DAAD4  40 82 FE A0 */	bne .L_802DDA34
/* 802DDB98 002DAAD8  38 61 00 2C */	addi r3, r1, 0x2c
/* 802DDB9C 002DAADC  38 80 FF FF */	li r4, -1
/* 802DDBA0 002DAAE0  4B EC 21 C5 */	bl __dt__Q24Game8StickersFv
/* 802DDBA4 002DAAE4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802DDBA8 002DAAE8  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802DDBAC 002DAAEC  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802DDBB0 002DAAF0  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 802DDBB4 002DAAF4  7C 08 03 A6 */	mtlr r0
/* 802DDBB8 002DAAF8  38 21 00 60 */	addi r1, r1, 0x60
/* 802DDBBC 002DAAFC  4E 80 00 20 */	blr 

.global releaseItemLoozy__Q34Game11BigTreasure3ObjFv
releaseItemLoozy__Q34Game11BigTreasure3ObjFv:
/* 802DDBC0 002DAB00  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802DDBC4 002DAB04  7C 08 02 A6 */	mflr r0
/* 802DDBC8 002DAB08  90 01 00 24 */	stw r0, 0x24(r1)
/* 802DDBCC 002DAB0C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802DDBD0 002DAB10  7C 7F 1B 78 */	mr r31, r3
/* 802DDBD4 002DAB14  80 63 03 D4 */	lwz r3, 0x3d4(r3)
/* 802DDBD8 002DAB18  28 03 00 00 */	cmplwi r3, 0
/* 802DDBDC 002DAB1C  41 82 00 3C */	beq .L_802DDC18
/* 802DDBE0 002DAB20  4B EC 1F BD */	bl endCapture__Q24Game8CreatureFv
/* 802DDBE4 002DAB24  C0 22 E8 D0 */	lfs f1, lbl_8051CC30@sda21(r2)
/* 802DDBE8 002DAB28  38 81 00 08 */	addi r4, r1, 8
/* 802DDBEC 002DAB2C  C0 02 E9 90 */	lfs f0, lbl_8051CCF0@sda21(r2)
/* 802DDBF0 002DAB30  D0 21 00 08 */	stfs f1, 8(r1)
/* 802DDBF4 002DAB34  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802DDBF8 002DAB38  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 802DDBFC 002DAB3C  80 7F 03 D4 */	lwz r3, 0x3d4(r31)
/* 802DDC00 002DAB40  81 83 00 00 */	lwz r12, 0(r3)
/* 802DDC04 002DAB44  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 802DDC08 002DAB48  7D 89 03 A6 */	mtctr r12
/* 802DDC0C 002DAB4C  4E 80 04 21 */	bctrl 
/* 802DDC10 002DAB50  38 00 00 00 */	li r0, 0
/* 802DDC14 002DAB54  90 1F 03 D4 */	stw r0, 0x3d4(r31)
.L_802DDC18:
/* 802DDC18 002DAB58  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802DDC1C 002DAB5C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802DDC20 002DAB60  7C 08 03 A6 */	mtlr r0
/* 802DDC24 002DAB64  38 21 00 20 */	addi r1, r1, 0x20
/* 802DDC28 002DAB68  4E 80 00 20 */	blr 

.global createAttack__Q34Game11BigTreasure3ObjFv
createAttack__Q34Game11BigTreasure3ObjFv:
/* 802DDC2C 002DAB6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DDC30 002DAB70  7C 08 02 A6 */	mflr r0
/* 802DDC34 002DAB74  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DDC38 002DAB78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DDC3C 002DAB7C  7C 7F 1B 78 */	mr r31, r3
/* 802DDC40 002DAB80  38 60 01 20 */	li r3, 0x120
/* 802DDC44 002DAB84  4B D4 62 61 */	bl __nw__FUl
/* 802DDC48 002DAB88  7C 60 1B 79 */	or. r0, r3, r3
/* 802DDC4C 002DAB8C  41 82 00 10 */	beq .L_802DDC5C
/* 802DDC50 002DAB90  7F E4 FB 78 */	mr r4, r31
/* 802DDC54 002DAB94  48 01 70 15 */	bl __ct__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure3Obj
/* 802DDC58 002DAB98  7C 60 1B 78 */	mr r0, r3
.L_802DDC5C:
/* 802DDC5C 002DAB9C  90 1F 02 F4 */	stw r0, 0x2f4(r31)
/* 802DDC60 002DABA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DDC64 002DABA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DDC68 002DABA8  7C 08 03 A6 */	mtlr r0
/* 802DDC6C 002DABAC  38 21 00 10 */	addi r1, r1, 0x10
/* 802DDC70 002DABB0  4E 80 00 20 */	blr 

.global setupAttack__Q34Game11BigTreasure3ObjFv
setupAttack__Q34Game11BigTreasure3ObjFv:
/* 802DDC74 002DABB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DDC78 002DABB8  7C 08 02 A6 */	mflr r0
/* 802DDC7C 002DABBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DDC80 002DABC0  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802DDC84 002DABC4  48 01 77 99 */	bl init__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802DDC88 002DABC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DDC8C 002DABCC  7C 08 03 A6 */	mtlr r0
/* 802DDC90 002DABD0  38 21 00 10 */	addi r1, r1, 0x10
/* 802DDC94 002DABD4  4E 80 00 20 */	blr 

.global updateAttack__Q34Game11BigTreasure3ObjFv
updateAttack__Q34Game11BigTreasure3ObjFv:
/* 802DDC98 002DABD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DDC9C 002DABDC  7C 08 02 A6 */	mflr r0
/* 802DDCA0 002DABE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DDCA4 002DABE4  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802DDCA8 002DABE8  48 01 79 3D */	bl update__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802DDCAC 002DABEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DDCB0 002DABF0  7C 08 03 A6 */	mtlr r0
/* 802DDCB4 002DABF4  38 21 00 10 */	addi r1, r1, 0x10
/* 802DDCB8 002DABF8  4E 80 00 20 */	blr 

.global startAttack__Q34Game11BigTreasure3ObjFv
startAttack__Q34Game11BigTreasure3ObjFv:
/* 802DDCBC 002DABFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DDCC0 002DAC00  7C 08 02 A6 */	mflr r0
/* 802DDCC4 002DAC04  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DDCC8 002DAC08  80 03 04 08 */	lwz r0, 0x408(r3)
/* 802DDCCC 002DAC0C  2C 00 00 02 */	cmpwi r0, 2
/* 802DDCD0 002DAC10  41 82 00 3C */	beq .L_802DDD0C
/* 802DDCD4 002DAC14  40 80 00 14 */	bge .L_802DDCE8
/* 802DDCD8 002DAC18  2C 00 00 00 */	cmpwi r0, 0
/* 802DDCDC 002DAC1C  41 82 00 18 */	beq .L_802DDCF4
/* 802DDCE0 002DAC20  40 80 00 20 */	bge .L_802DDD00
/* 802DDCE4 002DAC24  48 00 00 3C */	b .L_802DDD20
.L_802DDCE8:
/* 802DDCE8 002DAC28  2C 00 00 04 */	cmpwi r0, 4
/* 802DDCEC 002DAC2C  40 80 00 34 */	bge .L_802DDD20
/* 802DDCF0 002DAC30  48 00 00 28 */	b .L_802DDD18
.L_802DDCF4:
/* 802DDCF4 002DAC34  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802DDCF8 002DAC38  48 01 94 A1 */	bl startElecAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802DDCFC 002DAC3C  48 00 00 24 */	b .L_802DDD20
.L_802DDD00:
/* 802DDD00 002DAC40  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802DDD04 002DAC44  48 01 79 C9 */	bl startFireAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802DDD08 002DAC48  48 00 00 18 */	b .L_802DDD20
.L_802DDD0C:
/* 802DDD0C 002DAC4C  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802DDD10 002DAC50  48 01 7E 25 */	bl startGasAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802DDD14 002DAC54  48 00 00 0C */	b .L_802DDD20
.L_802DDD18:
/* 802DDD18 002DAC58  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802DDD1C 002DAC5C  48 01 86 65 */	bl startWaterAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
.L_802DDD20:
/* 802DDD20 002DAC60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DDD24 002DAC64  7C 08 03 A6 */	mtlr r0
/* 802DDD28 002DAC68  38 21 00 10 */	addi r1, r1, 0x10
/* 802DDD2C 002DAC6C  4E 80 00 20 */	blr 

.global finishAttack__Q34Game11BigTreasure3ObjFv
finishAttack__Q34Game11BigTreasure3ObjFv:
/* 802DDD30 002DAC70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DDD34 002DAC74  7C 08 02 A6 */	mflr r0
/* 802DDD38 002DAC78  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DDD3C 002DAC7C  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802DDD40 002DAC80  48 01 9B 75 */	bl finishAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802DDD44 002DAC84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DDD48 002DAC88  7C 08 03 A6 */	mtlr r0
/* 802DDD4C 002DAC8C  38 21 00 10 */	addi r1, r1, 0x10
/* 802DDD50 002DAC90  4E 80 00 20 */	blr 

.global setTreasureAttack__Q34Game11BigTreasure3ObjFv
setTreasureAttack__Q34Game11BigTreasure3ObjFv:
/* 802DDD54 002DAC94  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802DDD58 002DAC98  7C 08 02 A6 */	mflr r0
/* 802DDD5C 002DAC9C  90 01 00 54 */	stw r0, 0x54(r1)
/* 802DDD60 002DACA0  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802DDD64 002DACA4  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802DDD68 002DACA8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802DDD6C 002DACAC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802DDD70 002DACB0  93 A1 00 34 */	stw r29, 0x34(r1)
/* 802DDD74 002DACB4  7C 7D 1B 78 */	mr r29, r3
/* 802DDD78 002DACB8  3B E1 00 08 */	addi r31, r1, 8
/* 802DDD7C 002DACBC  80 03 03 C4 */	lwz r0, 0x3c4(r3)
/* 802DDD80 002DACC0  7F E4 FB 78 */	mr r4, r31
/* 802DDD84 002DACC4  C3 E2 E8 D0 */	lfs f31, lbl_8051CC30@sda21(r2)
/* 802DDD88 002DACC8  38 61 00 18 */	addi r3, r1, 0x18
/* 802DDD8C 002DACCC  28 00 00 00 */	cmplwi r0, 0
/* 802DDD90 002DACD0  C0 22 E9 94 */	lfs f1, lbl_8051CCF4@sda21(r2)
/* 802DDD94 002DACD4  3B C0 00 00 */	li r30, 0
/* 802DDD98 002DACD8  38 A0 00 00 */	li r5, 0
/* 802DDD9C 002DACDC  41 82 00 28 */	beq .L_802DDDC4
/* 802DDDA0 002DACE0  C0 1D 03 D8 */	lfs f0, 0x3d8(r29)
/* 802DDDA4 002DACE4  38 9F 00 04 */	addi r4, r31, 4
/* 802DDDA8 002DACE8  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802DDDAC 002DACEC  3B C0 00 01 */	li r30, 1
/* 802DDDB0 002DACF0  EC 01 00 28 */	fsubs f0, f1, f0
/* 802DDDB4 002DACF4  38 63 00 04 */	addi r3, r3, 4
/* 802DDDB8 002DACF8  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802DDDBC 002DACFC  C0 1F 00 00 */	lfs f0, 0(r31)
/* 802DDDC0 002DAD00  EF FF 00 2A */	fadds f31, f31, f0
.L_802DDDC4:
/* 802DDDC4 002DAD04  80 1D 03 C8 */	lwz r0, 0x3c8(r29)
/* 802DDDC8 002DAD08  38 A0 00 01 */	li r5, 1
/* 802DDDCC 002DAD0C  28 00 00 00 */	cmplwi r0, 0
/* 802DDDD0 002DAD10  41 82 00 28 */	beq .L_802DDDF8
/* 802DDDD4 002DAD14  C0 1D 03 DC */	lfs f0, 0x3dc(r29)
/* 802DDDD8 002DAD18  3B DE 00 01 */	addi r30, r30, 1
/* 802DDDDC 002DAD1C  90 A3 00 00 */	stw r5, 0(r3)
/* 802DDDE0 002DAD20  38 63 00 04 */	addi r3, r3, 4
/* 802DDDE4 002DAD24  EC 01 00 28 */	fsubs f0, f1, f0
/* 802DDDE8 002DAD28  D0 04 00 00 */	stfs f0, 0(r4)
/* 802DDDEC 002DAD2C  C0 04 00 00 */	lfs f0, 0(r4)
/* 802DDDF0 002DAD30  38 84 00 04 */	addi r4, r4, 4
/* 802DDDF4 002DAD34  EF FF 00 2A */	fadds f31, f31, f0
.L_802DDDF8:
/* 802DDDF8 002DAD38  80 1D 03 CC */	lwz r0, 0x3cc(r29)
/* 802DDDFC 002DAD3C  38 A0 00 02 */	li r5, 2
/* 802DDE00 002DAD40  28 00 00 00 */	cmplwi r0, 0
/* 802DDE04 002DAD44  41 82 00 28 */	beq .L_802DDE2C
/* 802DDE08 002DAD48  C0 1D 03 E0 */	lfs f0, 0x3e0(r29)
/* 802DDE0C 002DAD4C  3B DE 00 01 */	addi r30, r30, 1
/* 802DDE10 002DAD50  90 A3 00 00 */	stw r5, 0(r3)
/* 802DDE14 002DAD54  38 63 00 04 */	addi r3, r3, 4
/* 802DDE18 002DAD58  EC 01 00 28 */	fsubs f0, f1, f0
/* 802DDE1C 002DAD5C  D0 04 00 00 */	stfs f0, 0(r4)
/* 802DDE20 002DAD60  C0 04 00 00 */	lfs f0, 0(r4)
/* 802DDE24 002DAD64  38 84 00 04 */	addi r4, r4, 4
/* 802DDE28 002DAD68  EF FF 00 2A */	fadds f31, f31, f0
.L_802DDE2C:
/* 802DDE2C 002DAD6C  80 1D 03 D0 */	lwz r0, 0x3d0(r29)
/* 802DDE30 002DAD70  38 A0 00 03 */	li r5, 3
/* 802DDE34 002DAD74  28 00 00 00 */	cmplwi r0, 0
/* 802DDE38 002DAD78  41 82 00 20 */	beq .L_802DDE58
/* 802DDE3C 002DAD7C  C0 1D 03 E4 */	lfs f0, 0x3e4(r29)
/* 802DDE40 002DAD80  3B DE 00 01 */	addi r30, r30, 1
/* 802DDE44 002DAD84  90 A3 00 00 */	stw r5, 0(r3)
/* 802DDE48 002DAD88  EC 01 00 28 */	fsubs f0, f1, f0
/* 802DDE4C 002DAD8C  D0 04 00 00 */	stfs f0, 0(r4)
/* 802DDE50 002DAD90  C0 04 00 00 */	lfs f0, 0(r4)
/* 802DDE54 002DAD94  EF FF 00 2A */	fadds f31, f31, f0
.L_802DDE58:
/* 802DDE58 002DAD98  2C 1E 00 00 */	cmpwi r30, 0
/* 802DDE5C 002DAD9C  41 82 00 74 */	beq .L_802DDED0
/* 802DDE60 002DADA0  4B DE B7 41 */	bl rand
/* 802DDE64 002DADA4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802DDE68 002DADA8  3C 00 43 30 */	lis r0, 0x4330
/* 802DDE6C 002DADAC  90 61 00 2C */	stw r3, 0x2c(r1)
/* 802DDE70 002DADB0  38 60 00 00 */	li r3, 0
/* 802DDE74 002DADB4  C8 42 E9 00 */	lfd f2, lbl_8051CC60@sda21(r2)
/* 802DDE78 002DADB8  90 01 00 28 */	stw r0, 0x28(r1)
/* 802DDE7C 002DADBC  C0 02 E8 F8 */	lfs f0, lbl_8051CC58@sda21(r2)
/* 802DDE80 002DADC0  C8 21 00 28 */	lfd f1, 0x28(r1)
/* 802DDE84 002DADC4  C0 62 E8 D0 */	lfs f3, lbl_8051CC30@sda21(r2)
/* 802DDE88 002DADC8  EC 21 10 28 */	fsubs f1, f1, f2
/* 802DDE8C 002DADCC  EC 3F 00 72 */	fmuls f1, f31, f1
/* 802DDE90 002DADD0  EC 21 00 24 */	fdivs f1, f1, f0
/* 802DDE94 002DADD4  7F C9 03 A6 */	mtctr r30
/* 802DDE98 002DADD8  2C 1E 00 00 */	cmpwi r30, 0
/* 802DDE9C 002DADDC  40 81 00 34 */	ble .L_802DDED0
.L_802DDEA0:
/* 802DDEA0 002DADE0  C0 1F 00 00 */	lfs f0, 0(r31)
/* 802DDEA4 002DADE4  EC 63 00 2A */	fadds f3, f3, f0
/* 802DDEA8 002DADE8  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 802DDEAC 002DADEC  40 81 00 18 */	ble .L_802DDEC4
/* 802DDEB0 002DADF0  54 60 10 3A */	slwi r0, r3, 2
/* 802DDEB4 002DADF4  38 61 00 18 */	addi r3, r1, 0x18
/* 802DDEB8 002DADF8  7C 03 00 2E */	lwzx r0, r3, r0
/* 802DDEBC 002DADFC  90 1D 04 08 */	stw r0, 0x408(r29)
/* 802DDEC0 002DAE00  48 00 00 18 */	b .L_802DDED8
.L_802DDEC4:
/* 802DDEC4 002DAE04  3B FF 00 04 */	addi r31, r31, 4
/* 802DDEC8 002DAE08  38 63 00 01 */	addi r3, r3, 1
/* 802DDECC 002DAE0C  42 00 FF D4 */	bdnz .L_802DDEA0
.L_802DDED0:
/* 802DDED0 002DAE10  38 00 FF FF */	li r0, -1
/* 802DDED4 002DAE14  90 1D 04 08 */	stw r0, 0x408(r29)
.L_802DDED8:
/* 802DDED8 002DAE18  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802DDEDC 002DAE1C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802DDEE0 002DAE20  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802DDEE4 002DAE24  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802DDEE8 002DAE28  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802DDEEC 002DAE2C  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 802DDEF0 002DAE30  7C 08 03 A6 */	mtlr r0
/* 802DDEF4 002DAE34  38 21 00 50 */	addi r1, r1, 0x50
/* 802DDEF8 002DAE38  4E 80 00 20 */	blr 

.global getPreAttackAnimIndex__Q34Game11BigTreasure3ObjFv
getPreAttackAnimIndex__Q34Game11BigTreasure3ObjFv:
/* 802DDEFC 002DAE3C  80 03 04 08 */	lwz r0, 0x408(r3)
/* 802DDF00 002DAE40  2C 00 00 00 */	cmpwi r0, 0
/* 802DDF04 002DAE44  40 82 00 0C */	bne .L_802DDF10
/* 802DDF08 002DAE48  38 60 00 15 */	li r3, 0x15
/* 802DDF0C 002DAE4C  4E 80 00 20 */	blr 
.L_802DDF10:
/* 802DDF10 002DAE50  2C 00 00 01 */	cmpwi r0, 1
/* 802DDF14 002DAE54  40 82 00 0C */	bne .L_802DDF20
/* 802DDF18 002DAE58  38 60 00 03 */	li r3, 3
/* 802DDF1C 002DAE5C  4E 80 00 20 */	blr 
.L_802DDF20:
/* 802DDF20 002DAE60  2C 00 00 02 */	cmpwi r0, 2
/* 802DDF24 002DAE64  40 82 00 0C */	bne .L_802DDF30
/* 802DDF28 002DAE68  38 60 00 12 */	li r3, 0x12
/* 802DDF2C 002DAE6C  4E 80 00 20 */	blr 
.L_802DDF30:
/* 802DDF30 002DAE70  2C 00 00 03 */	cmpwi r0, 3
/* 802DDF34 002DAE74  38 60 00 18 */	li r3, 0x18
/* 802DDF38 002DAE78  4C 82 00 20 */	bnelr 
/* 802DDF3C 002DAE7C  38 60 00 0F */	li r3, 0xf
/* 802DDF40 002DAE80  4E 80 00 20 */	blr 

.global getAttackAnimIndex__Q34Game11BigTreasure3ObjFv
getAttackAnimIndex__Q34Game11BigTreasure3ObjFv:
/* 802DDF44 002DAE84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DDF48 002DAE88  7C 08 02 A6 */	mflr r0
/* 802DDF4C 002DAE8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DDF50 002DAE90  80 03 04 08 */	lwz r0, 0x408(r3)
/* 802DDF54 002DAE94  2C 00 00 00 */	cmpwi r0, 0
/* 802DDF58 002DAE98  40 82 00 0C */	bne .L_802DDF64
/* 802DDF5C 002DAE9C  38 60 00 16 */	li r3, 0x16
/* 802DDF60 002DAEA0  48 00 00 64 */	b .L_802DDFC4
.L_802DDF64:
/* 802DDF64 002DAEA4  2C 00 00 01 */	cmpwi r0, 1
/* 802DDF68 002DAEA8  40 82 00 3C */	bne .L_802DDFA4
/* 802DDF6C 002DAEAC  48 00 11 99 */	bl getCurrAnimationIndex__Q34Game11BigTreasure3ObjFv
/* 802DDF70 002DAEB0  2C 03 00 03 */	cmpwi r3, 3
/* 802DDF74 002DAEB4  40 82 00 0C */	bne .L_802DDF80
/* 802DDF78 002DAEB8  38 60 00 04 */	li r3, 4
/* 802DDF7C 002DAEBC  48 00 00 48 */	b .L_802DDFC4
.L_802DDF80:
/* 802DDF80 002DAEC0  2C 03 00 06 */	cmpwi r3, 6
/* 802DDF84 002DAEC4  40 82 00 0C */	bne .L_802DDF90
/* 802DDF88 002DAEC8  38 60 00 07 */	li r3, 7
/* 802DDF8C 002DAECC  48 00 00 38 */	b .L_802DDFC4
.L_802DDF90:
/* 802DDF90 002DAED0  2C 03 00 09 */	cmpwi r3, 9
/* 802DDF94 002DAED4  38 60 00 0D */	li r3, 0xd
/* 802DDF98 002DAED8  40 82 00 2C */	bne .L_802DDFC4
/* 802DDF9C 002DAEDC  38 60 00 0A */	li r3, 0xa
/* 802DDFA0 002DAEE0  48 00 00 24 */	b .L_802DDFC4
.L_802DDFA4:
/* 802DDFA4 002DAEE4  2C 00 00 02 */	cmpwi r0, 2
/* 802DDFA8 002DAEE8  40 82 00 0C */	bne .L_802DDFB4
/* 802DDFAC 002DAEEC  38 60 00 13 */	li r3, 0x13
/* 802DDFB0 002DAEF0  48 00 00 14 */	b .L_802DDFC4
.L_802DDFB4:
/* 802DDFB4 002DAEF4  2C 00 00 03 */	cmpwi r0, 3
/* 802DDFB8 002DAEF8  38 60 00 18 */	li r3, 0x18
/* 802DDFBC 002DAEFC  40 82 00 08 */	bne .L_802DDFC4
/* 802DDFC0 002DAF00  38 60 00 10 */	li r3, 0x10
.L_802DDFC4:
/* 802DDFC4 002DAF04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DDFC8 002DAF08  7C 08 03 A6 */	mtlr r0
/* 802DDFCC 002DAF0C  38 21 00 10 */	addi r1, r1, 0x10
/* 802DDFD0 002DAF10  4E 80 00 20 */	blr 

.global getPutItemAnimIndex__Q34Game11BigTreasure3ObjFv
getPutItemAnimIndex__Q34Game11BigTreasure3ObjFv:
/* 802DDFD4 002DAF14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DDFD8 002DAF18  7C 08 02 A6 */	mflr r0
/* 802DDFDC 002DAF1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DDFE0 002DAF20  80 03 04 08 */	lwz r0, 0x408(r3)
/* 802DDFE4 002DAF24  2C 00 00 00 */	cmpwi r0, 0
/* 802DDFE8 002DAF28  40 82 00 0C */	bne .L_802DDFF4
/* 802DDFEC 002DAF2C  38 60 00 17 */	li r3, 0x17
/* 802DDFF0 002DAF30  48 00 00 64 */	b .L_802DE054
.L_802DDFF4:
/* 802DDFF4 002DAF34  2C 00 00 01 */	cmpwi r0, 1
/* 802DDFF8 002DAF38  40 82 00 3C */	bne .L_802DE034
/* 802DDFFC 002DAF3C  48 00 11 09 */	bl getCurrAnimationIndex__Q34Game11BigTreasure3ObjFv
/* 802DE000 002DAF40  2C 03 00 04 */	cmpwi r3, 4
/* 802DE004 002DAF44  40 82 00 0C */	bne .L_802DE010
/* 802DE008 002DAF48  38 60 00 05 */	li r3, 5
/* 802DE00C 002DAF4C  48 00 00 48 */	b .L_802DE054
.L_802DE010:
/* 802DE010 002DAF50  2C 03 00 07 */	cmpwi r3, 7
/* 802DE014 002DAF54  40 82 00 0C */	bne .L_802DE020
/* 802DE018 002DAF58  38 60 00 08 */	li r3, 8
/* 802DE01C 002DAF5C  48 00 00 38 */	b .L_802DE054
.L_802DE020:
/* 802DE020 002DAF60  2C 03 00 0A */	cmpwi r3, 0xa
/* 802DE024 002DAF64  38 60 00 0E */	li r3, 0xe
/* 802DE028 002DAF68  40 82 00 2C */	bne .L_802DE054
/* 802DE02C 002DAF6C  38 60 00 0B */	li r3, 0xb
/* 802DE030 002DAF70  48 00 00 24 */	b .L_802DE054
.L_802DE034:
/* 802DE034 002DAF74  2C 00 00 02 */	cmpwi r0, 2
/* 802DE038 002DAF78  40 82 00 0C */	bne .L_802DE044
/* 802DE03C 002DAF7C  38 60 00 14 */	li r3, 0x14
/* 802DE040 002DAF80  48 00 00 14 */	b .L_802DE054
.L_802DE044:
/* 802DE044 002DAF84  2C 00 00 03 */	cmpwi r0, 3
/* 802DE048 002DAF88  38 60 00 18 */	li r3, 0x18
/* 802DE04C 002DAF8C  40 82 00 08 */	bne .L_802DE054
/* 802DE050 002DAF90  38 60 00 11 */	li r3, 0x11
.L_802DE054:
/* 802DE054 002DAF94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DE058 002DAF98  7C 08 03 A6 */	mtlr r0
/* 802DE05C 002DAF9C  38 21 00 10 */	addi r1, r1, 0x10
/* 802DE060 002DAFA0  4E 80 00 20 */	blr 

.global getFireAttackAnimIndex__Q34Game11BigTreasure3ObjFv
getFireAttackAnimIndex__Q34Game11BigTreasure3ObjFv:
/* 802DE064 002DAFA4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802DE068 002DAFA8  7C 08 02 A6 */	mflr r0
/* 802DE06C 002DAFAC  C0 22 E9 98 */	lfs f1, lbl_8051CCF8@sda21(r2)
/* 802DE070 002DAFB0  38 80 00 00 */	li r4, 0
/* 802DE074 002DAFB4  90 01 00 34 */	stw r0, 0x34(r1)
/* 802DE078 002DAFB8  38 A0 00 00 */	li r5, 0
/* 802DE07C 002DAFBC  C0 42 E9 9C */	lfs f2, lbl_8051CCFC@sda21(r2)
/* 802DE080 002DAFC0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802DE084 002DAFC4  7C 7F 1B 78 */	mr r31, r3
/* 802DE088 002DAFC8  4B E3 46 6D */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
/* 802DE08C 002DAFCC  28 03 00 00 */	cmplwi r3, 0
/* 802DE090 002DAFD0  41 82 00 A4 */	beq .L_802DE134
/* 802DE094 002DAFD4  7C 64 1B 78 */	mr r4, r3
/* 802DE098 002DAFD8  38 61 00 08 */	addi r3, r1, 8
/* 802DE09C 002DAFDC  81 84 00 00 */	lwz r12, 0(r4)
/* 802DE0A0 002DAFE0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802DE0A4 002DAFE4  7D 89 03 A6 */	mtctr r12
/* 802DE0A8 002DAFE8  4E 80 04 21 */	bctrl 
/* 802DE0AC 002DAFEC  C0 61 00 08 */	lfs f3, 8(r1)
/* 802DE0B0 002DAFF0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802DE0B4 002DAFF4  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 802DE0B8 002DAFF8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802DE0BC 002DAFFC  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 802DE0C0 002DB000  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 802DE0C4 002DB004  EC 23 08 28 */	fsubs f1, f3, f1
/* 802DE0C8 002DB008  EC 42 00 28 */	fsubs f2, f2, f0
/* 802DE0CC 002DB00C  4B D5 70 3D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802DE0D0 002DB010  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DE0D4 002DB014  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DE0D8 002DB018  40 80 00 10 */	bge .L_802DE0E8
/* 802DE0DC 002DB01C  C0 02 E9 7C */	lfs f0, lbl_8051CCDC@sda21(r2)
/* 802DE0E0 002DB020  EC 20 08 2A */	fadds f1, f0, f1
/* 802DE0E4 002DB024  48 00 00 18 */	b .L_802DE0FC
.L_802DE0E8:
/* 802DE0E8 002DB028  C0 02 E9 7C */	lfs f0, lbl_8051CCDC@sda21(r2)
/* 802DE0EC 002DB02C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DE0F0 002DB030  4C 41 13 82 */	cror 2, 1, 2
/* 802DE0F4 002DB034  40 82 00 08 */	bne .L_802DE0FC
/* 802DE0F8 002DB038  EC 21 00 28 */	fsubs f1, f1, f0
.L_802DE0FC:
/* 802DE0FC 002DB03C  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802DE100 002DB040  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DE104 002DB044  EC 21 10 28 */	fsubs f1, f1, f2
/* 802DE108 002DB048  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DE10C 002DB04C  40 80 00 10 */	bge .L_802DE11C
/* 802DE110 002DB050  C0 02 E9 7C */	lfs f0, lbl_8051CCDC@sda21(r2)
/* 802DE114 002DB054  EC 20 08 2A */	fadds f1, f0, f1
/* 802DE118 002DB058  48 00 00 4C */	b .L_802DE164
.L_802DE11C:
/* 802DE11C 002DB05C  C0 02 E9 7C */	lfs f0, lbl_8051CCDC@sda21(r2)
/* 802DE120 002DB060  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DE124 002DB064  4C 41 13 82 */	cror 2, 1, 2
/* 802DE128 002DB068  40 82 00 3C */	bne .L_802DE164
/* 802DE12C 002DB06C  EC 21 00 28 */	fsubs f1, f1, f0
/* 802DE130 002DB070  48 00 00 34 */	b .L_802DE164
.L_802DE134:
/* 802DE134 002DB074  4B DE B4 6D */	bl rand
/* 802DE138 002DB078  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802DE13C 002DB07C  3C 00 43 30 */	lis r0, 0x4330
/* 802DE140 002DB080  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802DE144 002DB084  C8 62 E9 00 */	lfd f3, lbl_8051CC60@sda21(r2)
/* 802DE148 002DB088  90 01 00 18 */	stw r0, 0x18(r1)
/* 802DE14C 002DB08C  C0 22 E9 7C */	lfs f1, lbl_8051CCDC@sda21(r2)
/* 802DE150 002DB090  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 802DE154 002DB094  C0 02 E8 F8 */	lfs f0, lbl_8051CC58@sda21(r2)
/* 802DE158 002DB098  EC 42 18 28 */	fsubs f2, f2, f3
/* 802DE15C 002DB09C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802DE160 002DB0A0  EC 21 00 24 */	fdivs f1, f1, f0
.L_802DE164:
/* 802DE164 002DB0A4  C0 02 E9 A0 */	lfs f0, lbl_8051CD00@sda21(r2)
/* 802DE168 002DB0A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DE16C 002DB0AC  40 81 00 1C */	ble .L_802DE188
/* 802DE170 002DB0B0  C0 02 E9 A4 */	lfs f0, lbl_8051CD04@sda21(r2)
/* 802DE174 002DB0B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DE178 002DB0B8  4C 40 13 82 */	cror 2, 0, 2
/* 802DE17C 002DB0BC  40 82 00 0C */	bne .L_802DE188
/* 802DE180 002DB0C0  38 60 00 09 */	li r3, 9
/* 802DE184 002DB0C4  48 00 00 50 */	b .L_802DE1D4
.L_802DE188:
/* 802DE188 002DB0C8  C0 02 E9 A4 */	lfs f0, lbl_8051CD04@sda21(r2)
/* 802DE18C 002DB0CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DE190 002DB0D0  40 81 00 1C */	ble .L_802DE1AC
/* 802DE194 002DB0D4  C0 02 E9 A8 */	lfs f0, lbl_8051CD08@sda21(r2)
/* 802DE198 002DB0D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DE19C 002DB0DC  4C 40 13 82 */	cror 2, 0, 2
/* 802DE1A0 002DB0E0  40 82 00 0C */	bne .L_802DE1AC
/* 802DE1A4 002DB0E4  38 60 00 0C */	li r3, 0xc
/* 802DE1A8 002DB0E8  48 00 00 2C */	b .L_802DE1D4
.L_802DE1AC:
/* 802DE1AC 002DB0EC  C0 02 E9 A8 */	lfs f0, lbl_8051CD08@sda21(r2)
/* 802DE1B0 002DB0F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DE1B4 002DB0F4  40 81 00 1C */	ble .L_802DE1D0
/* 802DE1B8 002DB0F8  C0 02 E9 AC */	lfs f0, lbl_8051CD0C@sda21(r2)
/* 802DE1BC 002DB0FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DE1C0 002DB100  4C 40 13 82 */	cror 2, 0, 2
/* 802DE1C4 002DB104  40 82 00 0C */	bne .L_802DE1D0
/* 802DE1C8 002DB108  38 60 00 06 */	li r3, 6
/* 802DE1CC 002DB10C  48 00 00 08 */	b .L_802DE1D4
.L_802DE1D0:
/* 802DE1D0 002DB110  38 60 00 03 */	li r3, 3
.L_802DE1D4:
/* 802DE1D4 002DB114  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802DE1D8 002DB118  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802DE1DC 002DB11C  7C 08 03 A6 */	mtlr r0
/* 802DE1E0 002DB120  38 21 00 30 */	addi r1, r1, 0x30
/* 802DE1E4 002DB124  4E 80 00 20 */	blr 

.global getPreAttackTimeMax__Q34Game11BigTreasure3ObjFv
getPreAttackTimeMax__Q34Game11BigTreasure3ObjFv:
/* 802DE1E8 002DB128  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DE1EC 002DB12C  7C 08 02 A6 */	mflr r0
/* 802DE1F0 002DB130  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DE1F4 002DB134  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DE1F8 002DB138  7C 7F 1B 78 */	mr r31, r3
/* 802DE1FC 002DB13C  80 83 04 08 */	lwz r4, 0x408(r3)
/* 802DE200 002DB140  2C 04 00 00 */	cmpwi r4, 0
/* 802DE204 002DB144  40 82 00 10 */	bne .L_802DE214
/* 802DE208 002DB148  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802DE20C 002DB14C  C0 23 09 0C */	lfs f1, 0x90c(r3)
/* 802DE210 002DB150  48 00 00 5C */	b .L_802DE26C
.L_802DE214:
/* 802DE214 002DB154  2C 04 00 01 */	cmpwi r4, 1
/* 802DE218 002DB158  40 82 00 28 */	bne .L_802DE240
/* 802DE21C 002DB15C  48 00 00 C1 */	bl isNormalAttack__Q34Game11BigTreasure3ObjFi
/* 802DE220 002DB160  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802DE224 002DB164  41 82 00 10 */	beq .L_802DE234
/* 802DE228 002DB168  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802DE22C 002DB16C  C0 23 09 34 */	lfs f1, 0x934(r3)
/* 802DE230 002DB170  48 00 00 3C */	b .L_802DE26C
.L_802DE234:
/* 802DE234 002DB174  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802DE238 002DB178  C0 23 09 5C */	lfs f1, 0x95c(r3)
/* 802DE23C 002DB17C  48 00 00 30 */	b .L_802DE26C
.L_802DE240:
/* 802DE240 002DB180  2C 04 00 02 */	cmpwi r4, 2
/* 802DE244 002DB184  40 82 00 10 */	bne .L_802DE254
/* 802DE248 002DB188  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802DE24C 002DB18C  C0 23 09 84 */	lfs f1, 0x984(r3)
/* 802DE250 002DB190  48 00 00 1C */	b .L_802DE26C
.L_802DE254:
/* 802DE254 002DB194  2C 04 00 03 */	cmpwi r4, 3
/* 802DE258 002DB198  40 82 00 10 */	bne .L_802DE268
/* 802DE25C 002DB19C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802DE260 002DB1A0  C0 23 09 AC */	lfs f1, 0x9ac(r3)
/* 802DE264 002DB1A4  48 00 00 08 */	b .L_802DE26C
.L_802DE268:
/* 802DE268 002DB1A8  C0 22 E9 B0 */	lfs f1, lbl_8051CD10@sda21(r2)
.L_802DE26C:
/* 802DE26C 002DB1AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DE270 002DB1B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DE274 002DB1B4  7C 08 03 A6 */	mtlr r0
/* 802DE278 002DB1B8  38 21 00 10 */	addi r1, r1, 0x10
/* 802DE27C 002DB1BC  4E 80 00 20 */	blr 

.global getAttackTimeMax__Q34Game11BigTreasure3ObjFv
getAttackTimeMax__Q34Game11BigTreasure3ObjFv:
/* 802DE280 002DB1C0  80 03 04 08 */	lwz r0, 0x408(r3)
/* 802DE284 002DB1C4  2C 00 00 00 */	cmpwi r0, 0
/* 802DE288 002DB1C8  40 82 00 10 */	bne .L_802DE298
/* 802DE28C 002DB1CC  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802DE290 002DB1D0  C0 23 09 D4 */	lfs f1, 0x9d4(r3)
/* 802DE294 002DB1D4  4E 80 00 20 */	blr 
.L_802DE298:
/* 802DE298 002DB1D8  2C 00 00 01 */	cmpwi r0, 1
/* 802DE29C 002DB1DC  40 82 00 10 */	bne .L_802DE2AC
/* 802DE2A0 002DB1E0  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802DE2A4 002DB1E4  C0 23 09 FC */	lfs f1, 0x9fc(r3)
/* 802DE2A8 002DB1E8  4E 80 00 20 */	blr 
.L_802DE2AC:
/* 802DE2AC 002DB1EC  2C 00 00 02 */	cmpwi r0, 2
/* 802DE2B0 002DB1F0  40 82 00 10 */	bne .L_802DE2C0
/* 802DE2B4 002DB1F4  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802DE2B8 002DB1F8  C0 23 0A 24 */	lfs f1, 0xa24(r3)
/* 802DE2BC 002DB1FC  4E 80 00 20 */	blr 
.L_802DE2C0:
/* 802DE2C0 002DB200  2C 00 00 03 */	cmpwi r0, 3
/* 802DE2C4 002DB204  40 82 00 10 */	bne .L_802DE2D4
/* 802DE2C8 002DB208  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802DE2CC 002DB20C  C0 23 0A 4C */	lfs f1, 0xa4c(r3)
/* 802DE2D0 002DB210  4E 80 00 20 */	blr 
.L_802DE2D4:
/* 802DE2D4 002DB214  C0 22 E9 B0 */	lfs f1, lbl_8051CD10@sda21(r2)
/* 802DE2D8 002DB218  4E 80 00 20 */	blr 

.global isNormalAttack__Q34Game11BigTreasure3ObjFi
isNormalAttack__Q34Game11BigTreasure3ObjFi:
/* 802DE2DC 002DB21C  54 80 10 3A */	slwi r0, r4, 2
/* 802DE2E0 002DB220  C0 02 E9 8C */	lfs f0, CRITICAL_TREASURE_HEALTH@sda21(r2)
/* 802DE2E4 002DB224  7C 63 02 14 */	add r3, r3, r0
/* 802DE2E8 002DB228  C0 23 03 D8 */	lfs f1, 0x3d8(r3)
/* 802DE2EC 002DB22C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802DE2F0 002DB230  7C 00 00 26 */	mfcr r0
/* 802DE2F4 002DB234  54 03 17 FE */	rlwinm r3, r0, 2, 0x1f, 0x1f
/* 802DE2F8 002DB238  4E 80 00 20 */	blr 

.global resetMaterialColor__Q34Game11BigTreasure3ObjFv
resetMaterialColor__Q34Game11BigTreasure3ObjFv:
/* 802DE2FC 002DB23C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DE300 002DB240  7C 08 02 A6 */	mflr r0
/* 802DE304 002DB244  38 80 00 00 */	li r4, 0
/* 802DE308 002DB248  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DE30C 002DB24C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DE310 002DB250  7C 7F 1B 78 */	mr r31, r3
/* 802DE314 002DB254  98 83 02 DC */	stb r4, 0x2dc(r3)
/* 802DE318 002DB258  80 03 03 C4 */	lwz r0, 0x3c4(r3)
/* 802DE31C 002DB25C  28 00 00 00 */	cmplwi r0, 0
/* 802DE320 002DB260  41 82 00 0C */	beq .L_802DE32C
/* 802DE324 002DB264  38 80 00 01 */	li r4, 1
/* 802DE328 002DB268  48 00 00 40 */	b .L_802DE368
.L_802DE32C:
/* 802DE32C 002DB26C  80 1F 03 C8 */	lwz r0, 0x3c8(r31)
/* 802DE330 002DB270  28 00 00 00 */	cmplwi r0, 0
/* 802DE334 002DB274  41 82 00 0C */	beq .L_802DE340
/* 802DE338 002DB278  38 80 00 01 */	li r4, 1
/* 802DE33C 002DB27C  48 00 00 2C */	b .L_802DE368
.L_802DE340:
/* 802DE340 002DB280  38 7F 00 08 */	addi r3, r31, 8
/* 802DE344 002DB284  80 1F 03 CC */	lwz r0, 0x3cc(r31)
/* 802DE348 002DB288  28 00 00 00 */	cmplwi r0, 0
/* 802DE34C 002DB28C  41 82 00 0C */	beq .L_802DE358
/* 802DE350 002DB290  38 80 00 01 */	li r4, 1
/* 802DE354 002DB294  48 00 00 14 */	b .L_802DE368
.L_802DE358:
/* 802DE358 002DB298  80 03 03 C8 */	lwz r0, 0x3c8(r3)
/* 802DE35C 002DB29C  28 00 00 00 */	cmplwi r0, 0
/* 802DE360 002DB2A0  41 82 00 08 */	beq .L_802DE368
/* 802DE364 002DB2A4  38 80 00 01 */	li r4, 1
.L_802DE368:
/* 802DE368 002DB2A8  7F E3 FB 78 */	mr r3, r31
/* 802DE36C 002DB2AC  48 00 00 41 */	bl resetTargetMatBodyColor__Q34Game11BigTreasure3ObjFb
/* 802DE370 002DB2B0  7F E3 FB 78 */	mr r3, r31
/* 802DE374 002DB2B4  48 00 00 71 */	bl resetCurrentMatBodyColor__Q34Game11BigTreasure3ObjFv
/* 802DE378 002DB2B8  38 00 00 01 */	li r0, 1
/* 802DE37C 002DB2BC  7F E3 FB 78 */	mr r3, r31
/* 802DE380 002DB2C0  90 1F 04 1C */	stw r0, 0x41c(r31)
/* 802DE384 002DB2C4  48 00 00 85 */	bl resetTargetEyeMatColor__Q34Game11BigTreasure3ObjFv
/* 802DE388 002DB2C8  7F E3 FB 78 */	mr r3, r31
/* 802DE38C 002DB2CC  48 00 00 D5 */	bl resetCurrentMatEyeColor__Q34Game11BigTreasure3ObjFv
/* 802DE390 002DB2D0  7F E3 FB 78 */	mr r3, r31
/* 802DE394 002DB2D4  48 00 01 01 */	bl setMatEyeAnimSpeed__Q34Game11BigTreasure3ObjFv
/* 802DE398 002DB2D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DE39C 002DB2DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DE3A0 002DB2E0  7C 08 03 A6 */	mtlr r0
/* 802DE3A4 002DB2E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802DE3A8 002DB2E8  4E 80 00 20 */	blr 

.global resetTargetMatBodyColor__Q34Game11BigTreasure3ObjFb
resetTargetMatBodyColor__Q34Game11BigTreasure3ObjFb:
/* 802DE3AC 002DB2EC  38 A0 00 1E */	li r5, 0x1e
/* 802DE3B0 002DB2F0  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802DE3B4 002DB2F4  B0 A3 04 0C */	sth r5, 0x40c(r3)
/* 802DE3B8 002DB2F8  38 80 00 46 */	li r4, 0x46
/* 802DE3BC 002DB2FC  38 00 00 3C */	li r0, 0x3c
/* 802DE3C0 002DB300  B0 83 04 0E */	sth r4, 0x40e(r3)
/* 802DE3C4 002DB304  B0 03 04 10 */	sth r0, 0x410(r3)
/* 802DE3C8 002DB308  41 82 00 10 */	beq .L_802DE3D8
/* 802DE3CC 002DB30C  38 00 00 FF */	li r0, 0xff
/* 802DE3D0 002DB310  B0 03 04 12 */	sth r0, 0x412(r3)
/* 802DE3D4 002DB314  4E 80 00 20 */	blr 
.L_802DE3D8:
/* 802DE3D8 002DB318  38 00 00 00 */	li r0, 0
/* 802DE3DC 002DB31C  B0 03 04 12 */	sth r0, 0x412(r3)
/* 802DE3E0 002DB320  4E 80 00 20 */	blr 

.global resetCurrentMatBodyColor__Q34Game11BigTreasure3ObjFv
resetCurrentMatBodyColor__Q34Game11BigTreasure3ObjFv:
/* 802DE3E4 002DB324  A8 03 04 0C */	lha r0, 0x40c(r3)
/* 802DE3E8 002DB328  B0 03 04 14 */	sth r0, 0x414(r3)
/* 802DE3EC 002DB32C  A8 03 04 0E */	lha r0, 0x40e(r3)
/* 802DE3F0 002DB330  B0 03 04 16 */	sth r0, 0x416(r3)
/* 802DE3F4 002DB334  A8 03 04 10 */	lha r0, 0x410(r3)
/* 802DE3F8 002DB338  B0 03 04 18 */	sth r0, 0x418(r3)
/* 802DE3FC 002DB33C  A8 03 04 12 */	lha r0, 0x412(r3)
/* 802DE400 002DB340  B0 03 04 1A */	sth r0, 0x41a(r3)
/* 802DE404 002DB344  4E 80 00 20 */	blr 

.global resetTargetEyeMatColor__Q34Game11BigTreasure3ObjFv
resetTargetEyeMatColor__Q34Game11BigTreasure3ObjFv:
/* 802DE408 002DB348  C0 42 E9 B4 */	lfs f2, lbl_8051CD14@sda21(r2)
/* 802DE40C 002DB34C  C0 02 E8 D8 */	lfs f0, lbl_8051CC38@sda21(r2)
/* 802DE410 002DB350  D0 43 04 38 */	stfs f2, 0x438(r3)
/* 802DE414 002DB354  C0 22 E9 30 */	lfs f1, lbl_8051CC90@sda21(r2)
/* 802DE418 002DB358  D0 03 04 3C */	stfs f0, 0x43c(r3)
/* 802DE41C 002DB35C  C0 02 E9 B8 */	lfs f0, lbl_8051CD18@sda21(r2)
/* 802DE420 002DB360  D0 43 04 40 */	stfs f2, 0x440(r3)
/* 802DE424 002DB364  C0 82 E9 BC */	lfs f4, lbl_8051CD1C@sda21(r2)
/* 802DE428 002DB368  D0 23 04 44 */	stfs f1, 0x444(r3)
/* 802DE42C 002DB36C  C0 62 E8 D0 */	lfs f3, lbl_8051CC30@sda21(r2)
/* 802DE430 002DB370  D0 03 04 48 */	stfs f0, 0x448(r3)
/* 802DE434 002DB374  C0 42 E9 44 */	lfs f2, lbl_8051CCA4@sda21(r2)
/* 802DE438 002DB378  D0 83 04 4C */	stfs f4, 0x44c(r3)
/* 802DE43C 002DB37C  C0 22 E9 98 */	lfs f1, lbl_8051CCF8@sda21(r2)
/* 802DE440 002DB380  D0 63 04 5C */	stfs f3, 0x45c(r3)
/* 802DE444 002DB384  C0 02 E9 C0 */	lfs f0, lbl_8051CD20@sda21(r2)
/* 802DE448 002DB388  D0 43 04 60 */	stfs f2, 0x460(r3)
/* 802DE44C 002DB38C  D0 63 04 64 */	stfs f3, 0x464(r3)
/* 802DE450 002DB390  D0 83 04 68 */	stfs f4, 0x468(r3)
/* 802DE454 002DB394  D0 23 04 6C */	stfs f1, 0x46c(r3)
/* 802DE458 002DB398  D0 03 04 70 */	stfs f0, 0x470(r3)
/* 802DE45C 002DB39C  4E 80 00 20 */	blr 

.global resetCurrentMatEyeColor__Q34Game11BigTreasure3ObjFv
resetCurrentMatEyeColor__Q34Game11BigTreasure3ObjFv:
/* 802DE460 002DB3A0  C0 03 04 38 */	lfs f0, 0x438(r3)
/* 802DE464 002DB3A4  D0 03 04 50 */	stfs f0, 0x450(r3)
/* 802DE468 002DB3A8  C0 03 04 3C */	lfs f0, 0x43c(r3)
/* 802DE46C 002DB3AC  D0 03 04 54 */	stfs f0, 0x454(r3)
/* 802DE470 002DB3B0  C0 03 04 40 */	lfs f0, 0x440(r3)
/* 802DE474 002DB3B4  D0 03 04 58 */	stfs f0, 0x458(r3)
/* 802DE478 002DB3B8  C0 03 04 5C */	lfs f0, 0x45c(r3)
/* 802DE47C 002DB3BC  D0 03 04 74 */	stfs f0, 0x474(r3)
/* 802DE480 002DB3C0  C0 03 04 60 */	lfs f0, 0x460(r3)
/* 802DE484 002DB3C4  D0 03 04 78 */	stfs f0, 0x478(r3)
/* 802DE488 002DB3C8  C0 03 04 64 */	lfs f0, 0x464(r3)
/* 802DE48C 002DB3CC  D0 03 04 7C */	stfs f0, 0x47c(r3)
/* 802DE490 002DB3D0  4E 80 00 20 */	blr 

.global setMatEyeAnimSpeed__Q34Game11BigTreasure3ObjFv
setMatEyeAnimSpeed__Q34Game11BigTreasure3ObjFv:
/* 802DE494 002DB3D4  88 03 02 DC */	lbz r0, 0x2dc(r3)
/* 802DE498 002DB3D8  C0 A2 E9 44 */	lfs f5, lbl_8051CCA4@sda21(r2)
/* 802DE49C 002DB3DC  28 00 00 00 */	cmplwi r0, 0
/* 802DE4A0 002DB3E0  41 82 00 08 */	beq .L_802DE4A8
/* 802DE4A4 002DB3E4  C0 A2 E8 E4 */	lfs f5, lbl_8051CC44@sda21(r2)
.L_802DE4A8:
/* 802DE4A8 002DB3E8  38 00 00 03 */	li r0, 3
/* 802DE4AC 002DB3EC  7C 65 1B 78 */	mr r5, r3
/* 802DE4B0 002DB3F0  C0 62 E8 D0 */	lfs f3, lbl_8051CC30@sda21(r2)
/* 802DE4B4 002DB3F4  38 C0 00 00 */	li r6, 0
/* 802DE4B8 002DB3F8  C0 42 E8 D4 */	lfs f2, lbl_8051CC34@sda21(r2)
/* 802DE4BC 002DB3FC  7C 09 03 A6 */	mtctr r0
.L_802DE4C0:
/* 802DE4C0 002DB400  80 03 04 1C */	lwz r0, 0x41c(r3)
/* 802DE4C4 002DB404  C0 05 04 50 */	lfs f0, 0x450(r5)
/* 802DE4C8 002DB408  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802DE4CC 002DB40C  7C 80 32 14 */	add r4, r0, r6
/* 802DE4D0 002DB410  38 04 04 38 */	addi r0, r4, 0x438
/* 802DE4D4 002DB414  7C 23 04 2E */	lfsx f1, r3, r0
/* 802DE4D8 002DB418  EC 81 00 28 */	fsubs f4, f1, f0
/* 802DE4DC 002DB41C  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802DE4E0 002DB420  40 81 00 08 */	ble .L_802DE4E8
/* 802DE4E4 002DB424  48 00 00 08 */	b .L_802DE4EC
.L_802DE4E8:
/* 802DE4E8 002DB428  FC 80 20 50 */	fneg f4, f4
.L_802DE4EC:
/* 802DE4EC 002DB42C  C0 25 04 44 */	lfs f1, 0x444(r5)
/* 802DE4F0 002DB430  C0 05 04 38 */	lfs f0, 0x438(r5)
/* 802DE4F4 002DB434  EC 01 00 28 */	fsubs f0, f1, f0
/* 802DE4F8 002DB438  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 802DE4FC 002DB43C  40 81 00 08 */	ble .L_802DE504
/* 802DE500 002DB440  48 00 00 08 */	b .L_802DE508
.L_802DE504:
/* 802DE504 002DB444  FC 00 00 50 */	fneg f0, f0
.L_802DE508:
/* 802DE508 002DB448  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802DE50C 002DB44C  40 81 00 08 */	ble .L_802DE514
/* 802DE510 002DB450  48 00 00 08 */	b .L_802DE518
.L_802DE514:
/* 802DE514 002DB454  FC 80 00 90 */	fmr f4, f0
.L_802DE518:
/* 802DE518 002DB458  D0 85 04 20 */	stfs f4, 0x420(r5)
/* 802DE51C 002DB45C  C0 05 04 20 */	lfs f0, 0x420(r5)
/* 802DE520 002DB460  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802DE524 002DB464  40 80 00 08 */	bge .L_802DE52C
/* 802DE528 002DB468  D0 45 04 20 */	stfs f2, 0x420(r5)
.L_802DE52C:
/* 802DE52C 002DB46C  C0 05 04 20 */	lfs f0, 0x420(r5)
/* 802DE530 002DB470  EC 00 28 24 */	fdivs f0, f0, f5
/* 802DE534 002DB474  D0 05 04 20 */	stfs f0, 0x420(r5)
/* 802DE538 002DB478  80 03 04 1C */	lwz r0, 0x41c(r3)
/* 802DE53C 002DB47C  C0 05 04 74 */	lfs f0, 0x474(r5)
/* 802DE540 002DB480  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802DE544 002DB484  7C 80 32 14 */	add r4, r0, r6
/* 802DE548 002DB488  38 04 04 5C */	addi r0, r4, 0x45c
/* 802DE54C 002DB48C  7C 23 04 2E */	lfsx f1, r3, r0
/* 802DE550 002DB490  EC 81 00 28 */	fsubs f4, f1, f0
/* 802DE554 002DB494  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802DE558 002DB498  40 81 00 08 */	ble .L_802DE560
/* 802DE55C 002DB49C  48 00 00 08 */	b .L_802DE564
.L_802DE560:
/* 802DE560 002DB4A0  FC 80 20 50 */	fneg f4, f4
.L_802DE564:
/* 802DE564 002DB4A4  C0 25 04 68 */	lfs f1, 0x468(r5)
/* 802DE568 002DB4A8  C0 05 04 5C */	lfs f0, 0x45c(r5)
/* 802DE56C 002DB4AC  EC 01 00 28 */	fsubs f0, f1, f0
/* 802DE570 002DB4B0  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 802DE574 002DB4B4  40 81 00 08 */	ble .L_802DE57C
/* 802DE578 002DB4B8  48 00 00 08 */	b .L_802DE580
.L_802DE57C:
/* 802DE57C 002DB4BC  FC 00 00 50 */	fneg f0, f0
.L_802DE580:
/* 802DE580 002DB4C0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802DE584 002DB4C4  40 81 00 08 */	ble .L_802DE58C
/* 802DE588 002DB4C8  48 00 00 08 */	b .L_802DE590
.L_802DE58C:
/* 802DE58C 002DB4CC  FC 80 00 90 */	fmr f4, f0
.L_802DE590:
/* 802DE590 002DB4D0  D0 85 04 2C */	stfs f4, 0x42c(r5)
/* 802DE594 002DB4D4  C0 05 04 2C */	lfs f0, 0x42c(r5)
/* 802DE598 002DB4D8  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802DE59C 002DB4DC  40 80 00 08 */	bge .L_802DE5A4
/* 802DE5A0 002DB4E0  D0 45 04 2C */	stfs f2, 0x42c(r5)
.L_802DE5A4:
/* 802DE5A4 002DB4E4  C0 05 04 2C */	lfs f0, 0x42c(r5)
/* 802DE5A8 002DB4E8  38 C6 00 04 */	addi r6, r6, 4
/* 802DE5AC 002DB4EC  EC 00 28 24 */	fdivs f0, f0, f5
/* 802DE5B0 002DB4F0  D0 05 04 2C */	stfs f0, 0x42c(r5)
/* 802DE5B4 002DB4F4  38 A5 00 04 */	addi r5, r5, 4
/* 802DE5B8 002DB4F8  42 00 FF 08 */	bdnz .L_802DE4C0
/* 802DE5BC 002DB4FC  4E 80 00 20 */	blr 

.global setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
setAttackMaterialColor__Q34Game11BigTreasure3ObjFb:
/* 802DE5C0 002DB500  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DE5C4 002DB504  7C 08 02 A6 */	mflr r0
/* 802DE5C8 002DB508  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DE5CC 002DB50C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DE5D0 002DB510  7C 7F 1B 78 */	mr r31, r3
/* 802DE5D4 002DB514  98 83 02 DC */	stb r4, 0x2dc(r3)
/* 802DE5D8 002DB518  88 03 02 DC */	lbz r0, 0x2dc(r3)
/* 802DE5DC 002DB51C  28 00 00 00 */	cmplwi r0, 0
/* 802DE5E0 002DB520  41 82 01 EC */	beq .L_802DE7CC
/* 802DE5E4 002DB524  80 1F 04 08 */	lwz r0, 0x408(r31)
/* 802DE5E8 002DB528  2C 00 00 02 */	cmpwi r0, 2
/* 802DE5EC 002DB52C  41 82 00 FC */	beq .L_802DE6E8
/* 802DE5F0 002DB530  40 80 00 14 */	bge .L_802DE604
/* 802DE5F4 002DB534  2C 00 00 00 */	cmpwi r0, 0
/* 802DE5F8 002DB538  41 82 00 18 */	beq .L_802DE610
/* 802DE5FC 002DB53C  40 80 00 80 */	bge .L_802DE67C
/* 802DE600 002DB540  48 00 03 54 */	b .L_802DE954
.L_802DE604:
/* 802DE604 002DB544  2C 00 00 04 */	cmpwi r0, 4
/* 802DE608 002DB548  40 80 03 4C */	bge .L_802DE954
/* 802DE60C 002DB54C  48 00 01 50 */	b .L_802DE75C
.L_802DE610:
/* 802DE610 002DB550  38 00 00 96 */	li r0, 0x96
/* 802DE614 002DB554  38 60 00 82 */	li r3, 0x82
/* 802DE618 002DB558  B0 1F 04 0C */	sth r0, 0x40c(r31)
/* 802DE61C 002DB55C  38 00 00 14 */	li r0, 0x14
/* 802DE620 002DB560  C0 A2 E9 44 */	lfs f5, lbl_8051CCA4@sda21(r2)
/* 802DE624 002DB564  B0 7F 04 0E */	sth r3, 0x40e(r31)
/* 802DE628 002DB568  C0 22 E8 D0 */	lfs f1, lbl_8051CC30@sda21(r2)
/* 802DE62C 002DB56C  B0 1F 04 10 */	sth r0, 0x410(r31)
/* 802DE630 002DB570  C0 82 E9 B8 */	lfs f4, lbl_8051CD18@sda21(r2)
/* 802DE634 002DB574  D0 BF 04 38 */	stfs f5, 0x438(r31)
/* 802DE638 002DB578  C0 02 E9 98 */	lfs f0, lbl_8051CCF8@sda21(r2)
/* 802DE63C 002DB57C  D0 BF 04 3C */	stfs f5, 0x43c(r31)
/* 802DE640 002DB580  C0 62 E9 C4 */	lfs f3, lbl_8051CD24@sda21(r2)
/* 802DE644 002DB584  D0 3F 04 40 */	stfs f1, 0x440(r31)
/* 802DE648 002DB588  C0 42 E8 D8 */	lfs f2, lbl_8051CC38@sda21(r2)
/* 802DE64C 002DB58C  D0 9F 04 44 */	stfs f4, 0x444(r31)
/* 802DE650 002DB590  C0 22 E9 90 */	lfs f1, lbl_8051CCF0@sda21(r2)
/* 802DE654 002DB594  D0 1F 04 48 */	stfs f0, 0x448(r31)
/* 802DE658 002DB598  C0 02 E9 C8 */	lfs f0, lbl_8051CD28@sda21(r2)
/* 802DE65C 002DB59C  D0 7F 04 4C */	stfs f3, 0x44c(r31)
/* 802DE660 002DB5A0  D0 5F 04 5C */	stfs f2, 0x45c(r31)
/* 802DE664 002DB5A4  D0 5F 04 60 */	stfs f2, 0x460(r31)
/* 802DE668 002DB5A8  D0 BF 04 64 */	stfs f5, 0x464(r31)
/* 802DE66C 002DB5AC  D0 9F 04 68 */	stfs f4, 0x468(r31)
/* 802DE670 002DB5B0  D0 3F 04 6C */	stfs f1, 0x46c(r31)
/* 802DE674 002DB5B4  D0 1F 04 70 */	stfs f0, 0x470(r31)
/* 802DE678 002DB5B8  48 00 02 DC */	b .L_802DE954
.L_802DE67C:
/* 802DE67C 002DB5BC  38 00 00 A0 */	li r0, 0xa0
/* 802DE680 002DB5C0  38 60 00 32 */	li r3, 0x32
/* 802DE684 002DB5C4  B0 1F 04 0C */	sth r0, 0x40c(r31)
/* 802DE688 002DB5C8  38 00 00 14 */	li r0, 0x14
/* 802DE68C 002DB5CC  C0 C2 E8 D8 */	lfs f6, lbl_8051CC38@sda21(r2)
/* 802DE690 002DB5D0  B0 7F 04 0E */	sth r3, 0x40e(r31)
/* 802DE694 002DB5D4  C0 02 E9 B4 */	lfs f0, lbl_8051CD14@sda21(r2)
/* 802DE698 002DB5D8  B0 1F 04 10 */	sth r0, 0x410(r31)
/* 802DE69C 002DB5DC  C0 A2 E9 B8 */	lfs f5, lbl_8051CD18@sda21(r2)
/* 802DE6A0 002DB5E0  D0 DF 04 38 */	stfs f6, 0x438(r31)
/* 802DE6A4 002DB5E4  C0 82 E9 88 */	lfs f4, lbl_8051CCE8@sda21(r2)
/* 802DE6A8 002DB5E8  D0 1F 04 3C */	stfs f0, 0x43c(r31)
/* 802DE6AC 002DB5EC  C0 62 E9 C8 */	lfs f3, lbl_8051CD28@sda21(r2)
/* 802DE6B0 002DB5F0  D0 1F 04 40 */	stfs f0, 0x440(r31)
/* 802DE6B4 002DB5F4  C0 42 E9 CC */	lfs f2, lbl_8051CD2C@sda21(r2)
/* 802DE6B8 002DB5F8  D0 BF 04 44 */	stfs f5, 0x444(r31)
/* 802DE6BC 002DB5FC  C0 22 E9 90 */	lfs f1, lbl_8051CCF0@sda21(r2)
/* 802DE6C0 002DB600  D0 9F 04 48 */	stfs f4, 0x448(r31)
/* 802DE6C4 002DB604  C0 02 E9 30 */	lfs f0, lbl_8051CC90@sda21(r2)
/* 802DE6C8 002DB608  D0 9F 04 4C */	stfs f4, 0x44c(r31)
/* 802DE6CC 002DB60C  D0 7F 04 5C */	stfs f3, 0x45c(r31)
/* 802DE6D0 002DB610  D0 DF 04 60 */	stfs f6, 0x460(r31)
/* 802DE6D4 002DB614  D0 5F 04 64 */	stfs f2, 0x464(r31)
/* 802DE6D8 002DB618  D0 BF 04 68 */	stfs f5, 0x468(r31)
/* 802DE6DC 002DB61C  D0 3F 04 6C */	stfs f1, 0x46c(r31)
/* 802DE6E0 002DB620  D0 1F 04 70 */	stfs f0, 0x470(r31)
/* 802DE6E4 002DB624  48 00 02 70 */	b .L_802DE954
.L_802DE6E8:
/* 802DE6E8 002DB628  38 00 00 5A */	li r0, 0x5a
/* 802DE6EC 002DB62C  38 60 00 05 */	li r3, 5
/* 802DE6F0 002DB630  B0 1F 04 0C */	sth r0, 0x40c(r31)
/* 802DE6F4 002DB634  38 00 00 78 */	li r0, 0x78
/* 802DE6F8 002DB638  C0 82 E9 44 */	lfs f4, lbl_8051CCA4@sda21(r2)
/* 802DE6FC 002DB63C  B0 7F 04 0E */	sth r3, 0x40e(r31)
/* 802DE700 002DB640  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DE704 002DB644  B0 1F 04 10 */	sth r0, 0x410(r31)
/* 802DE708 002DB648  C0 62 E9 D0 */	lfs f3, lbl_8051CD30@sda21(r2)
/* 802DE70C 002DB64C  D0 9F 04 38 */	stfs f4, 0x438(r31)
/* 802DE710 002DB650  C0 42 E9 D4 */	lfs f2, lbl_8051CD34@sda21(r2)
/* 802DE714 002DB654  D0 1F 04 3C */	stfs f0, 0x43c(r31)
/* 802DE718 002DB658  C0 22 E9 C0 */	lfs f1, lbl_8051CD20@sda21(r2)
/* 802DE71C 002DB65C  D0 9F 04 40 */	stfs f4, 0x440(r31)
/* 802DE720 002DB660  C0 02 E9 D8 */	lfs f0, lbl_8051CD38@sda21(r2)
/* 802DE724 002DB664  D0 7F 04 44 */	stfs f3, 0x444(r31)
/* 802DE728 002DB668  C0 62 E9 B4 */	lfs f3, lbl_8051CD14@sda21(r2)
/* 802DE72C 002DB66C  D0 5F 04 48 */	stfs f2, 0x448(r31)
/* 802DE730 002DB670  C0 42 E9 C8 */	lfs f2, lbl_8051CD28@sda21(r2)
/* 802DE734 002DB674  D0 3F 04 4C */	stfs f1, 0x44c(r31)
/* 802DE738 002DB678  C0 22 E9 30 */	lfs f1, lbl_8051CC90@sda21(r2)
/* 802DE73C 002DB67C  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 802DE740 002DB680  C0 02 E9 DC */	lfs f0, lbl_8051CD3C@sda21(r2)
/* 802DE744 002DB684  D0 7F 04 60 */	stfs f3, 0x460(r31)
/* 802DE748 002DB688  D0 5F 04 64 */	stfs f2, 0x464(r31)
/* 802DE74C 002DB68C  D0 3F 04 68 */	stfs f1, 0x468(r31)
/* 802DE750 002DB690  D0 7F 04 6C */	stfs f3, 0x46c(r31)
/* 802DE754 002DB694  D0 1F 04 70 */	stfs f0, 0x470(r31)
/* 802DE758 002DB698  48 00 01 FC */	b .L_802DE954
.L_802DE75C:
/* 802DE75C 002DB69C  38 00 00 28 */	li r0, 0x28
/* 802DE760 002DB6A0  38 60 00 64 */	li r3, 0x64
/* 802DE764 002DB6A4  B0 1F 04 0C */	sth r0, 0x40c(r31)
/* 802DE768 002DB6A8  38 00 00 B4 */	li r0, 0xb4
/* 802DE76C 002DB6AC  C0 42 E9 D8 */	lfs f2, lbl_8051CD38@sda21(r2)
/* 802DE770 002DB6B0  B0 7F 04 0E */	sth r3, 0x40e(r31)
/* 802DE774 002DB6B4  C0 22 E9 C8 */	lfs f1, lbl_8051CD28@sda21(r2)
/* 802DE778 002DB6B8  B0 1F 04 10 */	sth r0, 0x410(r31)
/* 802DE77C 002DB6BC  C0 02 E9 C4 */	lfs f0, lbl_8051CD24@sda21(r2)
/* 802DE780 002DB6C0  D0 5F 04 38 */	stfs f2, 0x438(r31)
/* 802DE784 002DB6C4  C0 82 E9 30 */	lfs f4, lbl_8051CC90@sda21(r2)
/* 802DE788 002DB6C8  D0 3F 04 3C */	stfs f1, 0x43c(r31)
/* 802DE78C 002DB6CC  C0 62 E9 B8 */	lfs f3, lbl_8051CD18@sda21(r2)
/* 802DE790 002DB6D0  D0 1F 04 40 */	stfs f0, 0x440(r31)
/* 802DE794 002DB6D4  C0 02 E9 98 */	lfs f0, lbl_8051CCF8@sda21(r2)
/* 802DE798 002DB6D8  D0 9F 04 44 */	stfs f4, 0x444(r31)
/* 802DE79C 002DB6DC  C0 42 E9 B4 */	lfs f2, lbl_8051CD14@sda21(r2)
/* 802DE7A0 002DB6E0  D0 7F 04 48 */	stfs f3, 0x448(r31)
/* 802DE7A4 002DB6E4  C0 22 E8 D8 */	lfs f1, lbl_8051CC38@sda21(r2)
/* 802DE7A8 002DB6E8  D0 1F 04 4C */	stfs f0, 0x44c(r31)
/* 802DE7AC 002DB6EC  C0 02 E9 90 */	lfs f0, lbl_8051CCF0@sda21(r2)
/* 802DE7B0 002DB6F0  D0 5F 04 5C */	stfs f2, 0x45c(r31)
/* 802DE7B4 002DB6F4  D0 5F 04 60 */	stfs f2, 0x460(r31)
/* 802DE7B8 002DB6F8  D0 3F 04 64 */	stfs f1, 0x464(r31)
/* 802DE7BC 002DB6FC  D0 9F 04 68 */	stfs f4, 0x468(r31)
/* 802DE7C0 002DB700  D0 1F 04 6C */	stfs f0, 0x46c(r31)
/* 802DE7C4 002DB704  D0 7F 04 70 */	stfs f3, 0x470(r31)
/* 802DE7C8 002DB708  48 00 01 8C */	b .L_802DE954
.L_802DE7CC:
/* 802DE7CC 002DB70C  80 1F 03 C4 */	lwz r0, 0x3c4(r31)
/* 802DE7D0 002DB710  38 80 00 00 */	li r4, 0
/* 802DE7D4 002DB714  28 00 00 00 */	cmplwi r0, 0
/* 802DE7D8 002DB718  41 82 00 0C */	beq .L_802DE7E4
/* 802DE7DC 002DB71C  38 80 00 01 */	li r4, 1
/* 802DE7E0 002DB720  48 00 00 40 */	b .L_802DE820
.L_802DE7E4:
/* 802DE7E4 002DB724  80 1F 03 C8 */	lwz r0, 0x3c8(r31)
/* 802DE7E8 002DB728  28 00 00 00 */	cmplwi r0, 0
/* 802DE7EC 002DB72C  41 82 00 0C */	beq .L_802DE7F8
/* 802DE7F0 002DB730  38 80 00 01 */	li r4, 1
/* 802DE7F4 002DB734  48 00 00 2C */	b .L_802DE820
.L_802DE7F8:
/* 802DE7F8 002DB738  38 7F 00 08 */	addi r3, r31, 8
/* 802DE7FC 002DB73C  80 1F 03 CC */	lwz r0, 0x3cc(r31)
/* 802DE800 002DB740  28 00 00 00 */	cmplwi r0, 0
/* 802DE804 002DB744  41 82 00 0C */	beq .L_802DE810
/* 802DE808 002DB748  38 80 00 01 */	li r4, 1
/* 802DE80C 002DB74C  48 00 00 14 */	b .L_802DE820
.L_802DE810:
/* 802DE810 002DB750  80 03 03 C8 */	lwz r0, 0x3c8(r3)
/* 802DE814 002DB754  28 00 00 00 */	cmplwi r0, 0
/* 802DE818 002DB758  41 82 00 08 */	beq .L_802DE820
/* 802DE81C 002DB75C  38 80 00 01 */	li r4, 1
.L_802DE820:
/* 802DE820 002DB760  38 60 00 1E */	li r3, 0x1e
/* 802DE824 002DB764  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802DE828 002DB768  B0 7F 04 0C */	sth r3, 0x40c(r31)
/* 802DE82C 002DB76C  38 60 00 46 */	li r3, 0x46
/* 802DE830 002DB770  38 00 00 3C */	li r0, 0x3c
/* 802DE834 002DB774  B0 7F 04 0E */	sth r3, 0x40e(r31)
/* 802DE838 002DB778  B0 1F 04 10 */	sth r0, 0x410(r31)
/* 802DE83C 002DB77C  41 82 00 10 */	beq .L_802DE84C
/* 802DE840 002DB780  38 00 00 FF */	li r0, 0xff
/* 802DE844 002DB784  B0 1F 04 12 */	sth r0, 0x412(r31)
/* 802DE848 002DB788  48 00 00 0C */	b .L_802DE854
.L_802DE84C:
/* 802DE84C 002DB78C  38 00 00 00 */	li r0, 0
/* 802DE850 002DB790  B0 1F 04 12 */	sth r0, 0x412(r31)
.L_802DE854:
/* 802DE854 002DB794  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802DE858 002DB798  41 82 00 5C */	beq .L_802DE8B4
/* 802DE85C 002DB79C  C0 42 E9 B4 */	lfs f2, lbl_8051CD14@sda21(r2)
/* 802DE860 002DB7A0  C0 02 E8 D8 */	lfs f0, lbl_8051CC38@sda21(r2)
/* 802DE864 002DB7A4  D0 5F 04 38 */	stfs f2, 0x438(r31)
/* 802DE868 002DB7A8  C0 22 E9 30 */	lfs f1, lbl_8051CC90@sda21(r2)
/* 802DE86C 002DB7AC  D0 1F 04 3C */	stfs f0, 0x43c(r31)
/* 802DE870 002DB7B0  C0 02 E9 B8 */	lfs f0, lbl_8051CD18@sda21(r2)
/* 802DE874 002DB7B4  D0 5F 04 40 */	stfs f2, 0x440(r31)
/* 802DE878 002DB7B8  C0 82 E9 BC */	lfs f4, lbl_8051CD1C@sda21(r2)
/* 802DE87C 002DB7BC  D0 3F 04 44 */	stfs f1, 0x444(r31)
/* 802DE880 002DB7C0  C0 62 E8 D0 */	lfs f3, lbl_8051CC30@sda21(r2)
/* 802DE884 002DB7C4  D0 1F 04 48 */	stfs f0, 0x448(r31)
/* 802DE888 002DB7C8  C0 42 E9 44 */	lfs f2, lbl_8051CCA4@sda21(r2)
/* 802DE88C 002DB7CC  D0 9F 04 4C */	stfs f4, 0x44c(r31)
/* 802DE890 002DB7D0  C0 22 E9 98 */	lfs f1, lbl_8051CCF8@sda21(r2)
/* 802DE894 002DB7D4  D0 7F 04 5C */	stfs f3, 0x45c(r31)
/* 802DE898 002DB7D8  C0 02 E9 C0 */	lfs f0, lbl_8051CD20@sda21(r2)
/* 802DE89C 002DB7DC  D0 5F 04 60 */	stfs f2, 0x460(r31)
/* 802DE8A0 002DB7E0  D0 7F 04 64 */	stfs f3, 0x464(r31)
/* 802DE8A4 002DB7E4  D0 9F 04 68 */	stfs f4, 0x468(r31)
/* 802DE8A8 002DB7E8  D0 3F 04 6C */	stfs f1, 0x46c(r31)
/* 802DE8AC 002DB7EC  D0 1F 04 70 */	stfs f0, 0x470(r31)
/* 802DE8B0 002DB7F0  48 00 00 A4 */	b .L_802DE954
.L_802DE8B4:
/* 802DE8B4 002DB7F4  C0 02 E8 E4 */	lfs f0, lbl_8051CC44@sda21(r2)
/* 802DE8B8 002DB7F8  C0 62 E9 88 */	lfs f3, lbl_8051CCE8@sda21(r2)
/* 802DE8BC 002DB7FC  D0 1F 04 38 */	stfs f0, 0x438(r31)
/* 802DE8C0 002DB800  C0 02 E9 B8 */	lfs f0, lbl_8051CD18@sda21(r2)
/* 802DE8C4 002DB804  D0 7F 04 3C */	stfs f3, 0x43c(r31)
/* 802DE8C8 002DB808  C0 42 E9 98 */	lfs f2, lbl_8051CCF8@sda21(r2)
/* 802DE8CC 002DB80C  D0 1F 04 40 */	stfs f0, 0x440(r31)
/* 802DE8D0 002DB810  C0 22 E9 E0 */	lfs f1, lbl_8051CD40@sda21(r2)
/* 802DE8D4 002DB814  D0 1F 04 44 */	stfs f0, 0x444(r31)
/* 802DE8D8 002DB818  C0 02 E8 D8 */	lfs f0, lbl_8051CC38@sda21(r2)
/* 802DE8DC 002DB81C  D0 5F 04 48 */	stfs f2, 0x448(r31)
/* 802DE8E0 002DB820  C0 42 E9 E4 */	lfs f2, lbl_8051CD44@sda21(r2)
/* 802DE8E4 002DB824  D0 3F 04 4C */	stfs f1, 0x44c(r31)
/* 802DE8E8 002DB828  C0 22 E9 44 */	lfs f1, lbl_8051CCA4@sda21(r2)
/* 802DE8EC 002DB82C  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 802DE8F0 002DB830  C0 02 E9 DC */	lfs f0, lbl_8051CD3C@sda21(r2)
/* 802DE8F4 002DB834  D0 5F 04 60 */	stfs f2, 0x460(r31)
/* 802DE8F8 002DB838  D0 3F 04 64 */	stfs f1, 0x464(r31)
/* 802DE8FC 002DB83C  D0 7F 04 68 */	stfs f3, 0x468(r31)
/* 802DE900 002DB840  D0 3F 04 6C */	stfs f1, 0x46c(r31)
/* 802DE904 002DB844  D0 1F 04 70 */	stfs f0, 0x470(r31)
/* 802DE908 002DB848  A8 1F 04 12 */	lha r0, 0x412(r31)
/* 802DE90C 002DB84C  2C 00 00 00 */	cmpwi r0, 0
/* 802DE910 002DB850  40 82 00 44 */	bne .L_802DE954
/* 802DE914 002DB854  A8 1F 04 1A */	lha r0, 0x41a(r31)
/* 802DE918 002DB858  2C 00 00 FF */	cmpwi r0, 0xff
/* 802DE91C 002DB85C  40 82 00 38 */	bne .L_802DE954
/* 802DE920 002DB860  7F E3 FB 78 */	mr r3, r31
/* 802DE924 002DB864  48 00 23 01 */	bl createChangeMaterialEffect__Q34Game11BigTreasure3ObjFv
/* 802DE928 002DB868  7F E3 FB 78 */	mr r3, r31
/* 802DE92C 002DB86C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802DE930 002DB870  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802DE934 002DB874  7D 89 03 A6 */	mtctr r12
/* 802DE938 002DB878  4E 80 04 21 */	bctrl 
/* 802DE93C 002DB87C  81 83 00 00 */	lwz r12, 0(r3)
/* 802DE940 002DB880  38 80 59 1B */	li r4, 0x591b
/* 802DE944 002DB884  38 A0 00 00 */	li r5, 0
/* 802DE948 002DB888  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802DE94C 002DB88C  7D 89 03 A6 */	mtctr r12
/* 802DE950 002DB890  4E 80 04 21 */	bctrl 
.L_802DE954:
/* 802DE954 002DB894  88 1F 02 DC */	lbz r0, 0x2dc(r31)
/* 802DE958 002DB898  C0 82 E9 44 */	lfs f4, lbl_8051CCA4@sda21(r2)
/* 802DE95C 002DB89C  28 00 00 00 */	cmplwi r0, 0
/* 802DE960 002DB8A0  41 82 00 08 */	beq .L_802DE968
/* 802DE964 002DB8A4  C0 82 E8 E4 */	lfs f4, lbl_8051CC44@sda21(r2)
.L_802DE968:
/* 802DE968 002DB8A8  38 00 00 03 */	li r0, 3
/* 802DE96C 002DB8AC  38 A0 00 00 */	li r5, 0
/* 802DE970 002DB8B0  7F E4 FB 78 */	mr r4, r31
/* 802DE974 002DB8B4  C0 62 E8 D0 */	lfs f3, lbl_8051CC30@sda21(r2)
/* 802DE978 002DB8B8  C0 42 E8 D4 */	lfs f2, lbl_8051CC34@sda21(r2)
/* 802DE97C 002DB8BC  7C 09 03 A6 */	mtctr r0
.L_802DE980:
/* 802DE980 002DB8C0  80 1F 04 1C */	lwz r0, 0x41c(r31)
/* 802DE984 002DB8C4  C0 04 04 50 */	lfs f0, 0x450(r4)
/* 802DE988 002DB8C8  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802DE98C 002DB8CC  7C 60 2A 14 */	add r3, r0, r5
/* 802DE990 002DB8D0  38 03 04 38 */	addi r0, r3, 0x438
/* 802DE994 002DB8D4  7C 3F 04 2E */	lfsx f1, r31, r0
/* 802DE998 002DB8D8  EC A1 00 28 */	fsubs f5, f1, f0
/* 802DE99C 002DB8DC  FC 05 18 40 */	fcmpo cr0, f5, f3
/* 802DE9A0 002DB8E0  40 81 00 08 */	ble .L_802DE9A8
/* 802DE9A4 002DB8E4  48 00 00 08 */	b .L_802DE9AC
.L_802DE9A8:
/* 802DE9A8 002DB8E8  FC A0 28 50 */	fneg f5, f5
.L_802DE9AC:
/* 802DE9AC 002DB8EC  C0 24 04 44 */	lfs f1, 0x444(r4)
/* 802DE9B0 002DB8F0  C0 04 04 38 */	lfs f0, 0x438(r4)
/* 802DE9B4 002DB8F4  EC 01 00 28 */	fsubs f0, f1, f0
/* 802DE9B8 002DB8F8  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 802DE9BC 002DB8FC  40 81 00 08 */	ble .L_802DE9C4
/* 802DE9C0 002DB900  48 00 00 08 */	b .L_802DE9C8
.L_802DE9C4:
/* 802DE9C4 002DB904  FC 00 00 50 */	fneg f0, f0
.L_802DE9C8:
/* 802DE9C8 002DB908  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802DE9CC 002DB90C  40 81 00 08 */	ble .L_802DE9D4
/* 802DE9D0 002DB910  48 00 00 08 */	b .L_802DE9D8
.L_802DE9D4:
/* 802DE9D4 002DB914  FC A0 00 90 */	fmr f5, f0
.L_802DE9D8:
/* 802DE9D8 002DB918  D0 A4 04 20 */	stfs f5, 0x420(r4)
/* 802DE9DC 002DB91C  C0 04 04 20 */	lfs f0, 0x420(r4)
/* 802DE9E0 002DB920  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802DE9E4 002DB924  40 80 00 08 */	bge .L_802DE9EC
/* 802DE9E8 002DB928  D0 44 04 20 */	stfs f2, 0x420(r4)
.L_802DE9EC:
/* 802DE9EC 002DB92C  C0 04 04 20 */	lfs f0, 0x420(r4)
/* 802DE9F0 002DB930  EC 00 20 24 */	fdivs f0, f0, f4
/* 802DE9F4 002DB934  D0 04 04 20 */	stfs f0, 0x420(r4)
/* 802DE9F8 002DB938  80 1F 04 1C */	lwz r0, 0x41c(r31)
/* 802DE9FC 002DB93C  C0 04 04 74 */	lfs f0, 0x474(r4)
/* 802DEA00 002DB940  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802DEA04 002DB944  7C 60 2A 14 */	add r3, r0, r5
/* 802DEA08 002DB948  38 03 04 5C */	addi r0, r3, 0x45c
/* 802DEA0C 002DB94C  7C 3F 04 2E */	lfsx f1, r31, r0
/* 802DEA10 002DB950  EC A1 00 28 */	fsubs f5, f1, f0
/* 802DEA14 002DB954  FC 05 18 40 */	fcmpo cr0, f5, f3
/* 802DEA18 002DB958  40 81 00 08 */	ble .L_802DEA20
/* 802DEA1C 002DB95C  48 00 00 08 */	b .L_802DEA24
.L_802DEA20:
/* 802DEA20 002DB960  FC A0 28 50 */	fneg f5, f5
.L_802DEA24:
/* 802DEA24 002DB964  C0 24 04 68 */	lfs f1, 0x468(r4)
/* 802DEA28 002DB968  C0 04 04 5C */	lfs f0, 0x45c(r4)
/* 802DEA2C 002DB96C  EC 01 00 28 */	fsubs f0, f1, f0
/* 802DEA30 002DB970  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 802DEA34 002DB974  40 81 00 08 */	ble .L_802DEA3C
/* 802DEA38 002DB978  48 00 00 08 */	b .L_802DEA40
.L_802DEA3C:
/* 802DEA3C 002DB97C  FC 00 00 50 */	fneg f0, f0
.L_802DEA40:
/* 802DEA40 002DB980  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802DEA44 002DB984  40 81 00 08 */	ble .L_802DEA4C
/* 802DEA48 002DB988  48 00 00 08 */	b .L_802DEA50
.L_802DEA4C:
/* 802DEA4C 002DB98C  FC A0 00 90 */	fmr f5, f0
.L_802DEA50:
/* 802DEA50 002DB990  D0 A4 04 2C */	stfs f5, 0x42c(r4)
/* 802DEA54 002DB994  C0 04 04 2C */	lfs f0, 0x42c(r4)
/* 802DEA58 002DB998  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802DEA5C 002DB99C  40 80 00 08 */	bge .L_802DEA64
/* 802DEA60 002DB9A0  D0 44 04 2C */	stfs f2, 0x42c(r4)
.L_802DEA64:
/* 802DEA64 002DB9A4  C0 04 04 2C */	lfs f0, 0x42c(r4)
/* 802DEA68 002DB9A8  38 A5 00 04 */	addi r5, r5, 4
/* 802DEA6C 002DB9AC  EC 00 20 24 */	fdivs f0, f0, f4
/* 802DEA70 002DB9B0  D0 04 04 2C */	stfs f0, 0x42c(r4)
/* 802DEA74 002DB9B4  38 84 00 04 */	addi r4, r4, 4
/* 802DEA78 002DB9B8  42 00 FF 08 */	bdnz .L_802DE980
/* 802DEA7C 002DB9BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DEA80 002DB9C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DEA84 002DB9C4  7C 08 03 A6 */	mtlr r0
/* 802DEA88 002DB9C8  38 21 00 10 */	addi r1, r1, 0x10
/* 802DEA8C 002DB9CC  4E 80 00 20 */	blr 

.global updateMaterialColor__Q34Game11BigTreasure3ObjFv
updateMaterialColor__Q34Game11BigTreasure3ObjFv:
/* 802DEA90 002DB9D0  A8 83 04 0C */	lha r4, 0x40c(r3)
/* 802DEA94 002DB9D4  A8 A3 04 14 */	lha r5, 0x414(r3)
/* 802DEA98 002DB9D8  7C C4 28 51 */	subf. r6, r4, r5
/* 802DEA9C 002DB9DC  7C 06 00 D0 */	neg r0, r6
/* 802DEAA0 002DB9E0  40 81 00 08 */	ble .L_802DEAA8
/* 802DEAA4 002DB9E4  7C C0 33 78 */	mr r0, r6
.L_802DEAA8:
/* 802DEAA8 002DB9E8  2C 00 00 05 */	cmpwi r0, 5
/* 802DEAAC 002DB9EC  40 80 00 08 */	bge .L_802DEAB4
/* 802DEAB0 002DB9F0  48 00 00 1C */	b .L_802DEACC
.L_802DEAB4:
/* 802DEAB4 002DB9F4  7C 05 20 00 */	cmpw r5, r4
/* 802DEAB8 002DB9F8  40 80 00 0C */	bge .L_802DEAC4
/* 802DEABC 002DB9FC  38 A5 00 05 */	addi r5, r5, 5
/* 802DEAC0 002DBA00  48 00 00 08 */	b .L_802DEAC8
.L_802DEAC4:
/* 802DEAC4 002DBA04  38 A5 FF FB */	addi r5, r5, -5
.L_802DEAC8:
/* 802DEAC8 002DBA08  7C A4 2B 78 */	mr r4, r5
.L_802DEACC:
/* 802DEACC 002DBA0C  B0 83 04 14 */	sth r4, 0x414(r3)
/* 802DEAD0 002DBA10  A8 83 04 0E */	lha r4, 0x40e(r3)
/* 802DEAD4 002DBA14  A8 A3 04 16 */	lha r5, 0x416(r3)
/* 802DEAD8 002DBA18  7C C4 28 51 */	subf. r6, r4, r5
/* 802DEADC 002DBA1C  7C 06 00 D0 */	neg r0, r6
/* 802DEAE0 002DBA20  40 81 00 08 */	ble .L_802DEAE8
/* 802DEAE4 002DBA24  7C C0 33 78 */	mr r0, r6
.L_802DEAE8:
/* 802DEAE8 002DBA28  2C 00 00 05 */	cmpwi r0, 5
/* 802DEAEC 002DBA2C  40 80 00 08 */	bge .L_802DEAF4
/* 802DEAF0 002DBA30  48 00 00 1C */	b .L_802DEB0C
.L_802DEAF4:
/* 802DEAF4 002DBA34  7C 05 20 00 */	cmpw r5, r4
/* 802DEAF8 002DBA38  40 80 00 0C */	bge .L_802DEB04
/* 802DEAFC 002DBA3C  38 A5 00 05 */	addi r5, r5, 5
/* 802DEB00 002DBA40  48 00 00 08 */	b .L_802DEB08
.L_802DEB04:
/* 802DEB04 002DBA44  38 A5 FF FB */	addi r5, r5, -5
.L_802DEB08:
/* 802DEB08 002DBA48  7C A4 2B 78 */	mr r4, r5
.L_802DEB0C:
/* 802DEB0C 002DBA4C  B0 83 04 16 */	sth r4, 0x416(r3)
/* 802DEB10 002DBA50  A8 83 04 10 */	lha r4, 0x410(r3)
/* 802DEB14 002DBA54  A8 A3 04 18 */	lha r5, 0x418(r3)
/* 802DEB18 002DBA58  7C C4 28 51 */	subf. r6, r4, r5
/* 802DEB1C 002DBA5C  7C 06 00 D0 */	neg r0, r6
/* 802DEB20 002DBA60  40 81 00 08 */	ble .L_802DEB28
/* 802DEB24 002DBA64  7C C0 33 78 */	mr r0, r6
.L_802DEB28:
/* 802DEB28 002DBA68  2C 00 00 05 */	cmpwi r0, 5
/* 802DEB2C 002DBA6C  40 80 00 08 */	bge .L_802DEB34
/* 802DEB30 002DBA70  48 00 00 1C */	b .L_802DEB4C
.L_802DEB34:
/* 802DEB34 002DBA74  7C 05 20 00 */	cmpw r5, r4
/* 802DEB38 002DBA78  40 80 00 0C */	bge .L_802DEB44
/* 802DEB3C 002DBA7C  38 A5 00 05 */	addi r5, r5, 5
/* 802DEB40 002DBA80  48 00 00 08 */	b .L_802DEB48
.L_802DEB44:
/* 802DEB44 002DBA84  38 A5 FF FB */	addi r5, r5, -5
.L_802DEB48:
/* 802DEB48 002DBA88  7C A4 2B 78 */	mr r4, r5
.L_802DEB4C:
/* 802DEB4C 002DBA8C  B0 83 04 18 */	sth r4, 0x418(r3)
/* 802DEB50 002DBA90  A8 83 04 12 */	lha r4, 0x412(r3)
/* 802DEB54 002DBA94  A8 A3 04 1A */	lha r5, 0x41a(r3)
/* 802DEB58 002DBA98  7C C4 28 51 */	subf. r6, r4, r5
/* 802DEB5C 002DBA9C  7C 06 00 D0 */	neg r0, r6
/* 802DEB60 002DBAA0  40 81 00 08 */	ble .L_802DEB68
/* 802DEB64 002DBAA4  7C C0 33 78 */	mr r0, r6
.L_802DEB68:
/* 802DEB68 002DBAA8  2C 00 00 05 */	cmpwi r0, 5
/* 802DEB6C 002DBAAC  40 80 00 08 */	bge .L_802DEB74
/* 802DEB70 002DBAB0  48 00 00 1C */	b .L_802DEB8C
.L_802DEB74:
/* 802DEB74 002DBAB4  7C 05 20 00 */	cmpw r5, r4
/* 802DEB78 002DBAB8  40 80 00 0C */	bge .L_802DEB84
/* 802DEB7C 002DBABC  38 A5 00 05 */	addi r5, r5, 5
/* 802DEB80 002DBAC0  48 00 00 08 */	b .L_802DEB88
.L_802DEB84:
/* 802DEB84 002DBAC4  38 A5 FF FB */	addi r5, r5, -5
.L_802DEB88:
/* 802DEB88 002DBAC8  7C A4 2B 78 */	mr r4, r5
.L_802DEB8C:
/* 802DEB8C 002DBACC  B0 83 04 1A */	sth r4, 0x41a(r3)
/* 802DEB90 002DBAD0  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DEB94 002DBAD4  80 03 04 1C */	lwz r0, 0x41c(r3)
/* 802DEB98 002DBAD8  C0 23 04 50 */	lfs f1, 0x450(r3)
/* 802DEB9C 002DBADC  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802DEBA0 002DBAE0  C0 63 04 20 */	lfs f3, 0x420(r3)
/* 802DEBA4 002DBAE4  7C 83 02 14 */	add r4, r3, r0
/* 802DEBA8 002DBAE8  C0 44 04 38 */	lfs f2, 0x438(r4)
/* 802DEBAC 002DBAEC  EC 81 10 28 */	fsubs f4, f1, f2
/* 802DEBB0 002DBAF0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802DEBB4 002DBAF4  40 81 00 08 */	ble .L_802DEBBC
/* 802DEBB8 002DBAF8  48 00 00 08 */	b .L_802DEBC0
.L_802DEBBC:
/* 802DEBBC 002DBAFC  FC 80 20 50 */	fneg f4, f4
.L_802DEBC0:
/* 802DEBC0 002DBB00  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802DEBC4 002DBB04  40 80 00 08 */	bge .L_802DEBCC
/* 802DEBC8 002DBB08  48 00 00 18 */	b .L_802DEBE0
.L_802DEBCC:
/* 802DEBCC 002DBB0C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802DEBD0 002DBB10  40 80 00 0C */	bge .L_802DEBDC
/* 802DEBD4 002DBB14  EC 41 18 2A */	fadds f2, f1, f3
/* 802DEBD8 002DBB18  48 00 00 08 */	b .L_802DEBE0
.L_802DEBDC:
/* 802DEBDC 002DBB1C  EC 41 18 28 */	fsubs f2, f1, f3
.L_802DEBE0:
/* 802DEBE0 002DBB20  D0 43 04 50 */	stfs f2, 0x450(r3)
/* 802DEBE4 002DBB24  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DEBE8 002DBB28  80 03 04 1C */	lwz r0, 0x41c(r3)
/* 802DEBEC 002DBB2C  C0 23 04 54 */	lfs f1, 0x454(r3)
/* 802DEBF0 002DBB30  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802DEBF4 002DBB34  C0 63 04 24 */	lfs f3, 0x424(r3)
/* 802DEBF8 002DBB38  7C 83 02 14 */	add r4, r3, r0
/* 802DEBFC 002DBB3C  C0 44 04 3C */	lfs f2, 0x43c(r4)
/* 802DEC00 002DBB40  EC 81 10 28 */	fsubs f4, f1, f2
/* 802DEC04 002DBB44  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802DEC08 002DBB48  40 81 00 08 */	ble .L_802DEC10
/* 802DEC0C 002DBB4C  48 00 00 08 */	b .L_802DEC14
.L_802DEC10:
/* 802DEC10 002DBB50  FC 80 20 50 */	fneg f4, f4
.L_802DEC14:
/* 802DEC14 002DBB54  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802DEC18 002DBB58  40 80 00 08 */	bge .L_802DEC20
/* 802DEC1C 002DBB5C  48 00 00 18 */	b .L_802DEC34
.L_802DEC20:
/* 802DEC20 002DBB60  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802DEC24 002DBB64  40 80 00 0C */	bge .L_802DEC30
/* 802DEC28 002DBB68  EC 41 18 2A */	fadds f2, f1, f3
/* 802DEC2C 002DBB6C  48 00 00 08 */	b .L_802DEC34
.L_802DEC30:
/* 802DEC30 002DBB70  EC 41 18 28 */	fsubs f2, f1, f3
.L_802DEC34:
/* 802DEC34 002DBB74  D0 43 04 54 */	stfs f2, 0x454(r3)
/* 802DEC38 002DBB78  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DEC3C 002DBB7C  80 03 04 1C */	lwz r0, 0x41c(r3)
/* 802DEC40 002DBB80  C0 23 04 58 */	lfs f1, 0x458(r3)
/* 802DEC44 002DBB84  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802DEC48 002DBB88  C0 63 04 28 */	lfs f3, 0x428(r3)
/* 802DEC4C 002DBB8C  7C 83 02 14 */	add r4, r3, r0
/* 802DEC50 002DBB90  C0 44 04 40 */	lfs f2, 0x440(r4)
/* 802DEC54 002DBB94  EC 81 10 28 */	fsubs f4, f1, f2
/* 802DEC58 002DBB98  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802DEC5C 002DBB9C  40 81 00 08 */	ble .L_802DEC64
/* 802DEC60 002DBBA0  48 00 00 08 */	b .L_802DEC68
.L_802DEC64:
/* 802DEC64 002DBBA4  FC 80 20 50 */	fneg f4, f4
.L_802DEC68:
/* 802DEC68 002DBBA8  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802DEC6C 002DBBAC  40 80 00 08 */	bge .L_802DEC74
/* 802DEC70 002DBBB0  48 00 00 18 */	b .L_802DEC88
.L_802DEC74:
/* 802DEC74 002DBBB4  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802DEC78 002DBBB8  40 80 00 0C */	bge .L_802DEC84
/* 802DEC7C 002DBBBC  EC 41 18 2A */	fadds f2, f1, f3
/* 802DEC80 002DBBC0  48 00 00 08 */	b .L_802DEC88
.L_802DEC84:
/* 802DEC84 002DBBC4  EC 41 18 28 */	fsubs f2, f1, f3
.L_802DEC88:
/* 802DEC88 002DBBC8  D0 43 04 58 */	stfs f2, 0x458(r3)
/* 802DEC8C 002DBBCC  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DEC90 002DBBD0  80 03 04 1C */	lwz r0, 0x41c(r3)
/* 802DEC94 002DBBD4  C0 23 04 74 */	lfs f1, 0x474(r3)
/* 802DEC98 002DBBD8  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802DEC9C 002DBBDC  C0 63 04 2C */	lfs f3, 0x42c(r3)
/* 802DECA0 002DBBE0  7C 83 02 14 */	add r4, r3, r0
/* 802DECA4 002DBBE4  C0 44 04 5C */	lfs f2, 0x45c(r4)
/* 802DECA8 002DBBE8  EC 81 10 28 */	fsubs f4, f1, f2
/* 802DECAC 002DBBEC  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802DECB0 002DBBF0  40 81 00 08 */	ble .L_802DECB8
/* 802DECB4 002DBBF4  48 00 00 08 */	b .L_802DECBC
.L_802DECB8:
/* 802DECB8 002DBBF8  FC 80 20 50 */	fneg f4, f4
.L_802DECBC:
/* 802DECBC 002DBBFC  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802DECC0 002DBC00  40 80 00 08 */	bge .L_802DECC8
/* 802DECC4 002DBC04  48 00 00 18 */	b .L_802DECDC
.L_802DECC8:
/* 802DECC8 002DBC08  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802DECCC 002DBC0C  40 80 00 0C */	bge .L_802DECD8
/* 802DECD0 002DBC10  EC 41 18 2A */	fadds f2, f1, f3
/* 802DECD4 002DBC14  48 00 00 08 */	b .L_802DECDC
.L_802DECD8:
/* 802DECD8 002DBC18  EC 41 18 28 */	fsubs f2, f1, f3
.L_802DECDC:
/* 802DECDC 002DBC1C  D0 43 04 74 */	stfs f2, 0x474(r3)
/* 802DECE0 002DBC20  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DECE4 002DBC24  80 03 04 1C */	lwz r0, 0x41c(r3)
/* 802DECE8 002DBC28  C0 23 04 78 */	lfs f1, 0x478(r3)
/* 802DECEC 002DBC2C  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802DECF0 002DBC30  C0 63 04 30 */	lfs f3, 0x430(r3)
/* 802DECF4 002DBC34  7C 83 02 14 */	add r4, r3, r0
/* 802DECF8 002DBC38  C0 44 04 60 */	lfs f2, 0x460(r4)
/* 802DECFC 002DBC3C  EC 81 10 28 */	fsubs f4, f1, f2
/* 802DED00 002DBC40  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802DED04 002DBC44  40 81 00 08 */	ble .L_802DED0C
/* 802DED08 002DBC48  48 00 00 08 */	b .L_802DED10
.L_802DED0C:
/* 802DED0C 002DBC4C  FC 80 20 50 */	fneg f4, f4
.L_802DED10:
/* 802DED10 002DBC50  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802DED14 002DBC54  40 80 00 08 */	bge .L_802DED1C
/* 802DED18 002DBC58  48 00 00 18 */	b .L_802DED30
.L_802DED1C:
/* 802DED1C 002DBC5C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802DED20 002DBC60  40 80 00 0C */	bge .L_802DED2C
/* 802DED24 002DBC64  EC 41 18 2A */	fadds f2, f1, f3
/* 802DED28 002DBC68  48 00 00 08 */	b .L_802DED30
.L_802DED2C:
/* 802DED2C 002DBC6C  EC 41 18 28 */	fsubs f2, f1, f3
.L_802DED30:
/* 802DED30 002DBC70  D0 43 04 78 */	stfs f2, 0x478(r3)
/* 802DED34 002DBC74  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802DED38 002DBC78  80 03 04 1C */	lwz r0, 0x41c(r3)
/* 802DED3C 002DBC7C  C0 23 04 7C */	lfs f1, 0x47c(r3)
/* 802DED40 002DBC80  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802DED44 002DBC84  C0 63 04 34 */	lfs f3, 0x434(r3)
/* 802DED48 002DBC88  7C 83 02 14 */	add r4, r3, r0
/* 802DED4C 002DBC8C  C0 44 04 64 */	lfs f2, 0x464(r4)
/* 802DED50 002DBC90  EC 81 10 28 */	fsubs f4, f1, f2
/* 802DED54 002DBC94  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802DED58 002DBC98  40 81 00 08 */	ble .L_802DED60
/* 802DED5C 002DBC9C  48 00 00 08 */	b .L_802DED64
.L_802DED60:
/* 802DED60 002DBCA0  FC 80 20 50 */	fneg f4, f4
.L_802DED64:
/* 802DED64 002DBCA4  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802DED68 002DBCA8  40 80 00 08 */	bge .L_802DED70
/* 802DED6C 002DBCAC  48 00 00 18 */	b .L_802DED84
.L_802DED70:
/* 802DED70 002DBCB0  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802DED74 002DBCB4  40 80 00 0C */	bge .L_802DED80
/* 802DED78 002DBCB8  EC 41 18 2A */	fadds f2, f1, f3
/* 802DED7C 002DBCBC  48 00 00 08 */	b .L_802DED84
.L_802DED80:
/* 802DED80 002DBCC0  EC 41 18 28 */	fsubs f2, f1, f3
.L_802DED84:
/* 802DED84 002DBCC4  38 00 00 03 */	li r0, 3
/* 802DED88 002DBCC8  D0 43 04 7C */	stfs f2, 0x47c(r3)
/* 802DED8C 002DBCCC  7C 65 1B 78 */	mr r5, r3
/* 802DED90 002DBCD0  38 E0 00 01 */	li r7, 1
/* 802DED94 002DBCD4  C0 62 E8 D0 */	lfs f3, lbl_8051CC30@sda21(r2)
/* 802DED98 002DBCD8  38 80 00 00 */	li r4, 0
/* 802DED9C 002DBCDC  C0 42 E9 E8 */	lfs f2, lbl_8051CD48@sda21(r2)
/* 802DEDA0 002DBCE0  7C 09 03 A6 */	mtctr r0
.L_802DEDA4:
/* 802DEDA4 002DBCE4  80 03 04 1C */	lwz r0, 0x41c(r3)
/* 802DEDA8 002DBCE8  C0 25 04 50 */	lfs f1, 0x450(r5)
/* 802DEDAC 002DBCEC  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802DEDB0 002DBCF0  7C C0 22 14 */	add r6, r0, r4
/* 802DEDB4 002DBCF4  7C C3 32 14 */	add r6, r3, r6
/* 802DEDB8 002DBCF8  C0 06 04 38 */	lfs f0, 0x438(r6)
/* 802DEDBC 002DBCFC  EC 01 00 28 */	fsubs f0, f1, f0
/* 802DEDC0 002DBD00  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 802DEDC4 002DBD04  40 81 00 08 */	ble .L_802DEDCC
/* 802DEDC8 002DBD08  48 00 00 08 */	b .L_802DEDD0
.L_802DEDCC:
/* 802DEDCC 002DBD0C  FC 00 00 50 */	fneg f0, f0
.L_802DEDD0:
/* 802DEDD0 002DBD10  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802DEDD4 002DBD14  41 81 00 28 */	bgt .L_802DEDFC
/* 802DEDD8 002DBD18  C0 25 04 74 */	lfs f1, 0x474(r5)
/* 802DEDDC 002DBD1C  C0 06 04 5C */	lfs f0, 0x45c(r6)
/* 802DEDE0 002DBD20  EC 01 00 28 */	fsubs f0, f1, f0
/* 802DEDE4 002DBD24  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 802DEDE8 002DBD28  40 81 00 08 */	ble .L_802DEDF0
/* 802DEDEC 002DBD2C  48 00 00 08 */	b .L_802DEDF4
.L_802DEDF0:
/* 802DEDF0 002DBD30  FC 00 00 50 */	fneg f0, f0
.L_802DEDF4:
/* 802DEDF4 002DBD34  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802DEDF8 002DBD38  40 81 00 0C */	ble .L_802DEE04
.L_802DEDFC:
/* 802DEDFC 002DBD3C  38 E0 00 00 */	li r7, 0
/* 802DEE00 002DBD40  48 00 00 10 */	b .L_802DEE10
.L_802DEE04:
/* 802DEE04 002DBD44  38 84 00 04 */	addi r4, r4, 4
/* 802DEE08 002DBD48  38 A5 00 04 */	addi r5, r5, 4
/* 802DEE0C 002DBD4C  42 00 FF 98 */	bdnz .L_802DEDA4
.L_802DEE10:
/* 802DEE10 002DBD50  54 E0 06 3F */	clrlwi. r0, r7, 0x18
/* 802DEE14 002DBD54  4D 82 00 20 */	beqlr 
/* 802DEE18 002DBD58  80 03 04 1C */	lwz r0, 0x41c(r3)
/* 802DEE1C 002DBD5C  C0 82 E9 44 */	lfs f4, lbl_8051CCA4@sda21(r2)
/* 802DEE20 002DBD60  68 00 00 01 */	xori r0, r0, 1
/* 802DEE24 002DBD64  90 03 04 1C */	stw r0, 0x41c(r3)
/* 802DEE28 002DBD68  88 03 02 DC */	lbz r0, 0x2dc(r3)
/* 802DEE2C 002DBD6C  28 00 00 00 */	cmplwi r0, 0
/* 802DEE30 002DBD70  41 82 00 08 */	beq .L_802DEE38
/* 802DEE34 002DBD74  C0 82 E8 E4 */	lfs f4, lbl_8051CC44@sda21(r2)
.L_802DEE38:
/* 802DEE38 002DBD78  38 00 00 03 */	li r0, 3
/* 802DEE3C 002DBD7C  38 C0 00 00 */	li r6, 0
/* 802DEE40 002DBD80  7C 65 1B 78 */	mr r5, r3
/* 802DEE44 002DBD84  C0 62 E8 D0 */	lfs f3, lbl_8051CC30@sda21(r2)
/* 802DEE48 002DBD88  C0 42 E8 D4 */	lfs f2, lbl_8051CC34@sda21(r2)
/* 802DEE4C 002DBD8C  7C 09 03 A6 */	mtctr r0
.L_802DEE50:
/* 802DEE50 002DBD90  80 03 04 1C */	lwz r0, 0x41c(r3)
/* 802DEE54 002DBD94  C0 05 04 50 */	lfs f0, 0x450(r5)
/* 802DEE58 002DBD98  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802DEE5C 002DBD9C  7C 80 32 14 */	add r4, r0, r6
/* 802DEE60 002DBDA0  38 04 04 38 */	addi r0, r4, 0x438
/* 802DEE64 002DBDA4  7C 23 04 2E */	lfsx f1, r3, r0
/* 802DEE68 002DBDA8  EC A1 00 28 */	fsubs f5, f1, f0
/* 802DEE6C 002DBDAC  FC 05 18 40 */	fcmpo cr0, f5, f3
/* 802DEE70 002DBDB0  40 81 00 08 */	ble .L_802DEE78
/* 802DEE74 002DBDB4  48 00 00 08 */	b .L_802DEE7C
.L_802DEE78:
/* 802DEE78 002DBDB8  FC A0 28 50 */	fneg f5, f5
.L_802DEE7C:
/* 802DEE7C 002DBDBC  C0 25 04 44 */	lfs f1, 0x444(r5)
/* 802DEE80 002DBDC0  C0 05 04 38 */	lfs f0, 0x438(r5)
/* 802DEE84 002DBDC4  EC 01 00 28 */	fsubs f0, f1, f0
/* 802DEE88 002DBDC8  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 802DEE8C 002DBDCC  40 81 00 08 */	ble .L_802DEE94
/* 802DEE90 002DBDD0  48 00 00 08 */	b .L_802DEE98
.L_802DEE94:
/* 802DEE94 002DBDD4  FC 00 00 50 */	fneg f0, f0
.L_802DEE98:
/* 802DEE98 002DBDD8  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802DEE9C 002DBDDC  40 81 00 08 */	ble .L_802DEEA4
/* 802DEEA0 002DBDE0  48 00 00 08 */	b .L_802DEEA8
.L_802DEEA4:
/* 802DEEA4 002DBDE4  FC A0 00 90 */	fmr f5, f0
.L_802DEEA8:
/* 802DEEA8 002DBDE8  D0 A5 04 20 */	stfs f5, 0x420(r5)
/* 802DEEAC 002DBDEC  C0 05 04 20 */	lfs f0, 0x420(r5)
/* 802DEEB0 002DBDF0  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802DEEB4 002DBDF4  40 80 00 08 */	bge .L_802DEEBC
/* 802DEEB8 002DBDF8  D0 45 04 20 */	stfs f2, 0x420(r5)
.L_802DEEBC:
/* 802DEEBC 002DBDFC  C0 05 04 20 */	lfs f0, 0x420(r5)
/* 802DEEC0 002DBE00  EC 00 20 24 */	fdivs f0, f0, f4
/* 802DEEC4 002DBE04  D0 05 04 20 */	stfs f0, 0x420(r5)
/* 802DEEC8 002DBE08  80 03 04 1C */	lwz r0, 0x41c(r3)
/* 802DEECC 002DBE0C  C0 05 04 74 */	lfs f0, 0x474(r5)
/* 802DEED0 002DBE10  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802DEED4 002DBE14  7C 80 32 14 */	add r4, r0, r6
/* 802DEED8 002DBE18  38 04 04 5C */	addi r0, r4, 0x45c
/* 802DEEDC 002DBE1C  7C 23 04 2E */	lfsx f1, r3, r0
/* 802DEEE0 002DBE20  EC A1 00 28 */	fsubs f5, f1, f0
/* 802DEEE4 002DBE24  FC 05 18 40 */	fcmpo cr0, f5, f3
/* 802DEEE8 002DBE28  40 81 00 08 */	ble .L_802DEEF0
/* 802DEEEC 002DBE2C  48 00 00 08 */	b .L_802DEEF4
.L_802DEEF0:
/* 802DEEF0 002DBE30  FC A0 28 50 */	fneg f5, f5
.L_802DEEF4:
/* 802DEEF4 002DBE34  C0 25 04 68 */	lfs f1, 0x468(r5)
/* 802DEEF8 002DBE38  C0 05 04 5C */	lfs f0, 0x45c(r5)
/* 802DEEFC 002DBE3C  EC 01 00 28 */	fsubs f0, f1, f0
/* 802DEF00 002DBE40  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 802DEF04 002DBE44  40 81 00 08 */	ble .L_802DEF0C
/* 802DEF08 002DBE48  48 00 00 08 */	b .L_802DEF10
.L_802DEF0C:
/* 802DEF0C 002DBE4C  FC 00 00 50 */	fneg f0, f0
.L_802DEF10:
/* 802DEF10 002DBE50  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802DEF14 002DBE54  40 81 00 08 */	ble .L_802DEF1C
/* 802DEF18 002DBE58  48 00 00 08 */	b .L_802DEF20
.L_802DEF1C:
/* 802DEF1C 002DBE5C  FC A0 00 90 */	fmr f5, f0
.L_802DEF20:
/* 802DEF20 002DBE60  D0 A5 04 2C */	stfs f5, 0x42c(r5)
/* 802DEF24 002DBE64  C0 05 04 2C */	lfs f0, 0x42c(r5)
/* 802DEF28 002DBE68  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802DEF2C 002DBE6C  40 80 00 08 */	bge .L_802DEF34
/* 802DEF30 002DBE70  D0 45 04 2C */	stfs f2, 0x42c(r5)
.L_802DEF34:
/* 802DEF34 002DBE74  C0 05 04 2C */	lfs f0, 0x42c(r5)
/* 802DEF38 002DBE78  38 C6 00 04 */	addi r6, r6, 4
/* 802DEF3C 002DBE7C  EC 00 20 24 */	fdivs f0, f0, f4
/* 802DEF40 002DBE80  D0 05 04 2C */	stfs f0, 0x42c(r5)
/* 802DEF44 002DBE84  38 A5 00 04 */	addi r5, r5, 4
/* 802DEF48 002DBE88  42 00 FF 08 */	bdnz .L_802DEE50
/* 802DEF4C 002DBE8C  4E 80 00 20 */	blr 

.global startBlendAnimation__Q34Game11BigTreasure3ObjFib
startBlendAnimation__Q34Game11BigTreasure3ObjFib:
/* 802DEF50 002DBE90  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802DEF54 002DBE94  7C 08 02 A6 */	mflr r0
/* 802DEF58 002DBE98  90 01 00 34 */	stw r0, 0x34(r1)
/* 802DEF5C 002DBE9C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802DEF60 002DBEA0  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802DEF64 002DBEA4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802DEF68 002DBEA8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802DEF6C 002DBEAC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802DEF70 002DBEB0  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 802DEF74 002DBEB4  7C 7D 1B 78 */	mr r29, r3
/* 802DEF78 002DBEB8  7C 9E 23 78 */	mr r30, r4
/* 802DEF7C 002DBEBC  41 82 00 C4 */	beq .L_802DF040
/* 802DEF80 002DBEC0  80 7D 01 84 */	lwz r3, 0x184(r29)
/* 802DEF84 002DBEC4  38 80 00 00 */	li r4, 0
/* 802DEF88 002DBEC8  81 83 00 00 */	lwz r12, 0(r3)
/* 802DEF8C 002DBECC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802DEF90 002DBED0  7D 89 03 A6 */	mtctr r12
/* 802DEF94 002DBED4  4E 80 04 21 */	bctrl 
/* 802DEF98 002DBED8  80 83 00 0C */	lwz r4, 0xc(r3)
/* 802DEF9C 002DBEDC  7C 7F 1B 78 */	mr r31, r3
/* 802DEFA0 002DBEE0  28 04 00 00 */	cmplwi r4, 0
/* 802DEFA4 002DBEE4  41 82 00 2C */	beq .L_802DEFD0
/* 802DEFA8 002DBEE8  80 64 00 18 */	lwz r3, 0x18(r4)
/* 802DEFAC 002DBEEC  3C 00 43 30 */	lis r0, 0x4330
/* 802DEFB0 002DBEF0  90 01 00 08 */	stw r0, 8(r1)
/* 802DEFB4 002DBEF4  A8 03 00 06 */	lha r0, 6(r3)
/* 802DEFB8 002DBEF8  C8 22 E9 00 */	lfd f1, lbl_8051CC60@sda21(r2)
/* 802DEFBC 002DBEFC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802DEFC0 002DBF00  90 01 00 0C */	stw r0, 0xc(r1)
/* 802DEFC4 002DBF04  C8 01 00 08 */	lfd f0, 8(r1)
/* 802DEFC8 002DBF08  EC 20 08 28 */	fsubs f1, f0, f1
/* 802DEFCC 002DBF0C  48 00 00 08 */	b .L_802DEFD4
.L_802DEFD0:
/* 802DEFD0 002DBF10  C0 22 E8 D0 */	lfs f1, lbl_8051CC30@sda21(r2)
.L_802DEFD4:
/* 802DEFD4 002DBF14  C0 02 E8 D4 */	lfs f0, lbl_8051CC34@sda21(r2)
/* 802DEFD8 002DBF18  C3 FF 00 08 */	lfs f31, 8(r31)
/* 802DEFDC 002DBF1C  EC 01 00 28 */	fsubs f0, f1, f0
/* 802DEFE0 002DBF20  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802DEFE4 002DBF24  40 81 00 48 */	ble .L_802DF02C
/* 802DEFE8 002DBF28  28 04 00 00 */	cmplwi r4, 0
/* 802DEFEC 002DBF2C  41 82 00 0C */	beq .L_802DEFF8
/* 802DEFF0 002DBF30  A8 84 00 20 */	lha r4, 0x20(r4)
/* 802DEFF4 002DBF34  48 00 00 08 */	b .L_802DEFFC
.L_802DEFF8:
/* 802DEFF8 002DBF38  38 80 FF FF */	li r4, -1
.L_802DEFFC:
/* 802DEFFC 002DBF3C  7C 1E 20 00 */	cmpw r30, r4
/* 802DF000 002DBF40  41 82 00 48 */	beq .L_802DF048
/* 802DF004 002DBF44  C0 22 E9 44 */	lfs f1, lbl_8051CCA4@sda21(r2)
/* 802DF008 002DBF48  7F A3 EB 78 */	mr r3, r29
/* 802DF00C 002DBF4C  7F C5 F3 78 */	mr r5, r30
/* 802DF010 002DBF50  38 CD 92 40 */	addi r6, r13, sBlendLinearFun__Q24Game22EnemyBlendAnimatorBase@sda21
/* 802DF014 002DBF54  38 E0 00 00 */	li r7, 0
/* 802DF018 002DBF58  4B E2 5D A1 */	bl startBlend__Q24Game9EnemyBaseFiiPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener
/* 802DF01C 002DBF5C  FC 20 F8 90 */	fmr f1, f31
/* 802DF020 002DBF60  7F E3 FB 78 */	mr r3, r31
/* 802DF024 002DBF64  48 14 9D 9D */	bl setCurrFrame__Q28SysShape8AnimatorFf
/* 802DF028 002DBF68  48 00 00 20 */	b .L_802DF048
.L_802DF02C:
/* 802DF02C 002DBF6C  7F A3 EB 78 */	mr r3, r29
/* 802DF030 002DBF70  7F C4 F3 78 */	mr r4, r30
/* 802DF034 002DBF74  38 A0 00 00 */	li r5, 0
/* 802DF038 002DBF78  4B E2 5F CD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802DF03C 002DBF7C  48 00 00 0C */	b .L_802DF048
.L_802DF040:
/* 802DF040 002DBF80  38 A0 00 00 */	li r5, 0
/* 802DF044 002DBF84  4B E2 5F C1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_802DF048:
/* 802DF048 002DBF88  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802DF04C 002DBF8C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802DF050 002DBF90  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802DF054 002DBF94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802DF058 002DBF98  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802DF05C 002DBF9C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802DF060 002DBFA0  7C 08 03 A6 */	mtlr r0
/* 802DF064 002DBFA4  38 21 00 30 */	addi r1, r1, 0x30
/* 802DF068 002DBFA8  4E 80 00 20 */	blr 

.global endBlendAnimation__Q34Game11BigTreasure3ObjFv
endBlendAnimation__Q34Game11BigTreasure3ObjFv:
/* 802DF06C 002DBFAC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802DF070 002DBFB0  7C 08 02 A6 */	mflr r0
/* 802DF074 002DBFB4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802DF078 002DBFB8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802DF07C 002DBFBC  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802DF080 002DBFC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DF084 002DBFC4  93 C1 00 08 */	stw r30, 8(r1)
/* 802DF088 002DBFC8  7C 7E 1B 78 */	mr r30, r3
/* 802DF08C 002DBFCC  38 80 00 01 */	li r4, 1
/* 802DF090 002DBFD0  80 63 01 84 */	lwz r3, 0x184(r3)
/* 802DF094 002DBFD4  81 83 00 00 */	lwz r12, 0(r3)
/* 802DF098 002DBFD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802DF09C 002DBFDC  7D 89 03 A6 */	mtctr r12
/* 802DF0A0 002DBFE0  4E 80 04 21 */	bctrl 
/* 802DF0A4 002DBFE4  80 83 00 0C */	lwz r4, 0xc(r3)
/* 802DF0A8 002DBFE8  28 04 00 00 */	cmplwi r4, 0
/* 802DF0AC 002DBFEC  41 82 00 0C */	beq .L_802DF0B8
/* 802DF0B0 002DBFF0  AB E4 00 20 */	lha r31, 0x20(r4)
/* 802DF0B4 002DBFF4  48 00 00 08 */	b .L_802DF0BC
.L_802DF0B8:
/* 802DF0B8 002DBFF8  3B E0 FF FF */	li r31, -1
.L_802DF0BC:
/* 802DF0BC 002DBFFC  C3 E3 00 08 */	lfs f31, 8(r3)
/* 802DF0C0 002DC000  7F C3 F3 78 */	mr r3, r30
/* 802DF0C4 002DC004  4B E2 5E E5 */	bl endBlend__Q24Game9EnemyBaseFv
/* 802DF0C8 002DC008  7F C3 F3 78 */	mr r3, r30
/* 802DF0CC 002DC00C  7F E4 FB 78 */	mr r4, r31
/* 802DF0D0 002DC010  38 A0 00 00 */	li r5, 0
/* 802DF0D4 002DC014  4B E2 5F 31 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802DF0D8 002DC018  FC 20 F8 90 */	fmr f1, f31
/* 802DF0DC 002DC01C  7F C3 F3 78 */	mr r3, r30
/* 802DF0E0 002DC020  4B E2 61 49 */	bl setMotionFrame__Q24Game9EnemyBaseFf
/* 802DF0E4 002DC024  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802DF0E8 002DC028  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802DF0EC 002DC02C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802DF0F0 002DC030  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DF0F4 002DC034  83 C1 00 08 */	lwz r30, 8(r1)
/* 802DF0F8 002DC038  7C 08 03 A6 */	mtlr r0
/* 802DF0FC 002DC03C  38 21 00 20 */	addi r1, r1, 0x20
/* 802DF100 002DC040  4E 80 00 20 */	blr 

.global getCurrAnimationIndex__Q34Game11BigTreasure3ObjFv
getCurrAnimationIndex__Q34Game11BigTreasure3ObjFv:
/* 802DF104 002DC044  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DF108 002DC048  7C 08 02 A6 */	mflr r0
/* 802DF10C 002DC04C  38 80 00 00 */	li r4, 0
/* 802DF110 002DC050  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DF114 002DC054  80 63 01 84 */	lwz r3, 0x184(r3)
/* 802DF118 002DC058  81 83 00 00 */	lwz r12, 0(r3)
/* 802DF11C 002DC05C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802DF120 002DC060  7D 89 03 A6 */	mtctr r12
/* 802DF124 002DC064  4E 80 04 21 */	bctrl 
/* 802DF128 002DC068  80 63 00 0C */	lwz r3, 0xc(r3)
/* 802DF12C 002DC06C  28 03 00 00 */	cmplwi r3, 0
/* 802DF130 002DC070  41 82 00 0C */	beq .L_802DF13C
/* 802DF134 002DC074  A8 63 00 20 */	lha r3, 0x20(r3)
/* 802DF138 002DC078  48 00 00 08 */	b .L_802DF140
.L_802DF13C:
/* 802DF13C 002DC07C  38 60 FF FF */	li r3, -1
.L_802DF140:
/* 802DF140 002DC080  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DF144 002DC084  7C 08 03 A6 */	mtlr r0
/* 802DF148 002DC088  38 21 00 10 */	addi r1, r1, 0x10
/* 802DF14C 002DC08C  4E 80 00 20 */	blr 

.global startBossChargeBGM__Q34Game11BigTreasure3ObjFv
startBossChargeBGM__Q34Game11BigTreasure3ObjFv:
/* 802DF150 002DC090  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DF154 002DC094  7C 08 02 A6 */	mflr r0
/* 802DF158 002DC098  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DF15C 002DC09C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DF160 002DC0A0  3B E0 00 00 */	li r31, 0
/* 802DF164 002DC0A4  93 C1 00 08 */	stw r30, 8(r1)
/* 802DF168 002DC0A8  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802DF16C 002DC0AC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF170 002DC0B0  7F C3 F3 78 */	mr r3, r30
/* 802DF174 002DC0B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF178 002DC0B8  7D 89 03 A6 */	mtctr r12
/* 802DF17C 002DC0BC  4E 80 04 21 */	bctrl 
/* 802DF180 002DC0C0  2C 03 00 05 */	cmpwi r3, 5
/* 802DF184 002DC0C4  41 82 00 3C */	beq .L_802DF1C0
/* 802DF188 002DC0C8  7F C3 F3 78 */	mr r3, r30
/* 802DF18C 002DC0CC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF190 002DC0D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF194 002DC0D4  7D 89 03 A6 */	mtctr r12
/* 802DF198 002DC0D8  4E 80 04 21 */	bctrl 
/* 802DF19C 002DC0DC  2C 03 00 06 */	cmpwi r3, 6
/* 802DF1A0 002DC0E0  41 82 00 20 */	beq .L_802DF1C0
/* 802DF1A4 002DC0E4  7F C3 F3 78 */	mr r3, r30
/* 802DF1A8 002DC0E8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF1AC 002DC0EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF1B0 002DC0F0  7D 89 03 A6 */	mtctr r12
/* 802DF1B4 002DC0F4  4E 80 04 21 */	bctrl 
/* 802DF1B8 002DC0F8  2C 03 00 07 */	cmpwi r3, 7
/* 802DF1BC 002DC0FC  40 82 00 08 */	bne .L_802DF1C4
.L_802DF1C0:
/* 802DF1C0 002DC100  3B E0 00 01 */	li r31, 1
.L_802DF1C4:
/* 802DF1C4 002DC104  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802DF1C8 002DC108  40 82 00 20 */	bne .L_802DF1E8
/* 802DF1CC 002DC10C  3C 60 80 49 */	lis r3, lbl_8048CC0C@ha
/* 802DF1D0 002DC110  3C A0 80 49 */	lis r5, lbl_8048CC24@ha
/* 802DF1D4 002DC114  38 63 CC 0C */	addi r3, r3, lbl_8048CC0C@l
/* 802DF1D8 002DC118  38 80 04 54 */	li r4, 0x454
/* 802DF1DC 002DC11C  38 A5 CC 24 */	addi r5, r5, lbl_8048CC24@l
/* 802DF1E0 002DC120  4C C6 31 82 */	crclr 6
/* 802DF1E4 002DC124  4B D4 B4 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802DF1E8:
/* 802DF1E8 002DC128  7F C3 F3 78 */	mr r3, r30
/* 802DF1EC 002DC12C  38 80 00 02 */	li r4, 2
/* 802DF1F0 002DC130  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF1F4 002DC134  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802DF1F8 002DC138  7D 89 03 A6 */	mtctr r12
/* 802DF1FC 002DC13C  4E 80 04 21 */	bctrl 
/* 802DF200 002DC140  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DF204 002DC144  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DF208 002DC148  83 C1 00 08 */	lwz r30, 8(r1)
/* 802DF20C 002DC14C  7C 08 03 A6 */	mtlr r0
/* 802DF210 002DC150  38 21 00 10 */	addi r1, r1, 0x10
/* 802DF214 002DC154  4E 80 00 20 */	blr 

.global startBossAttackBGM__Q34Game11BigTreasure3ObjFv
startBossAttackBGM__Q34Game11BigTreasure3ObjFv:
/* 802DF218 002DC158  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802DF21C 002DC15C  7C 08 02 A6 */	mflr r0
/* 802DF220 002DC160  90 01 00 24 */	stw r0, 0x24(r1)
/* 802DF224 002DC164  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802DF228 002DC168  3B E0 00 00 */	li r31, 0
/* 802DF22C 002DC16C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802DF230 002DC170  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802DF234 002DC174  7C 7D 1B 78 */	mr r29, r3
/* 802DF238 002DC178  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802DF23C 002DC17C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF240 002DC180  7F C3 F3 78 */	mr r3, r30
/* 802DF244 002DC184  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF248 002DC188  7D 89 03 A6 */	mtctr r12
/* 802DF24C 002DC18C  4E 80 04 21 */	bctrl 
/* 802DF250 002DC190  2C 03 00 05 */	cmpwi r3, 5
/* 802DF254 002DC194  41 82 00 3C */	beq .L_802DF290
/* 802DF258 002DC198  7F C3 F3 78 */	mr r3, r30
/* 802DF25C 002DC19C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF260 002DC1A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF264 002DC1A4  7D 89 03 A6 */	mtctr r12
/* 802DF268 002DC1A8  4E 80 04 21 */	bctrl 
/* 802DF26C 002DC1AC  2C 03 00 06 */	cmpwi r3, 6
/* 802DF270 002DC1B0  41 82 00 20 */	beq .L_802DF290
/* 802DF274 002DC1B4  7F C3 F3 78 */	mr r3, r30
/* 802DF278 002DC1B8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF27C 002DC1BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF280 002DC1C0  7D 89 03 A6 */	mtctr r12
/* 802DF284 002DC1C4  4E 80 04 21 */	bctrl 
/* 802DF288 002DC1C8  2C 03 00 07 */	cmpwi r3, 7
/* 802DF28C 002DC1CC  40 82 00 08 */	bne .L_802DF294
.L_802DF290:
/* 802DF290 002DC1D0  3B E0 00 01 */	li r31, 1
.L_802DF294:
/* 802DF294 002DC1D4  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802DF298 002DC1D8  40 82 00 20 */	bne .L_802DF2B8
/* 802DF29C 002DC1DC  3C 60 80 49 */	lis r3, lbl_8048CC0C@ha
/* 802DF2A0 002DC1E0  3C A0 80 49 */	lis r5, lbl_8048CC24@ha
/* 802DF2A4 002DC1E4  38 63 CC 0C */	addi r3, r3, lbl_8048CC0C@l
/* 802DF2A8 002DC1E8  38 80 04 54 */	li r4, 0x454
/* 802DF2AC 002DC1EC  38 A5 CC 24 */	addi r5, r5, lbl_8048CC24@l
/* 802DF2B0 002DC1F0  4C C6 31 82 */	crclr 6
/* 802DF2B4 002DC1F4  4B D4 B3 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802DF2B8:
/* 802DF2B8 002DC1F8  80 1D 04 08 */	lwz r0, 0x408(r29)
/* 802DF2BC 002DC1FC  38 80 00 03 */	li r4, 3
/* 802DF2C0 002DC200  2C 00 00 02 */	cmpwi r0, 2
/* 802DF2C4 002DC204  41 82 00 34 */	beq .L_802DF2F8
/* 802DF2C8 002DC208  40 80 00 14 */	bge .L_802DF2DC
/* 802DF2CC 002DC20C  2C 00 00 00 */	cmpwi r0, 0
/* 802DF2D0 002DC210  41 82 00 18 */	beq .L_802DF2E8
/* 802DF2D4 002DC214  40 80 00 1C */	bge .L_802DF2F0
/* 802DF2D8 002DC218  48 00 00 2C */	b .L_802DF304
.L_802DF2DC:
/* 802DF2DC 002DC21C  2C 00 00 04 */	cmpwi r0, 4
/* 802DF2E0 002DC220  40 80 00 24 */	bge .L_802DF304
/* 802DF2E4 002DC224  48 00 00 1C */	b .L_802DF300
.L_802DF2E8:
/* 802DF2E8 002DC228  38 80 00 07 */	li r4, 7
/* 802DF2EC 002DC22C  48 00 00 18 */	b .L_802DF304
.L_802DF2F0:
/* 802DF2F0 002DC230  38 80 00 03 */	li r4, 3
/* 802DF2F4 002DC234  48 00 00 10 */	b .L_802DF304
.L_802DF2F8:
/* 802DF2F8 002DC238  38 80 00 05 */	li r4, 5
/* 802DF2FC 002DC23C  48 00 00 08 */	b .L_802DF304
.L_802DF300:
/* 802DF300 002DC240  38 80 00 06 */	li r4, 6
.L_802DF304:
/* 802DF304 002DC244  7F C3 F3 78 */	mr r3, r30
/* 802DF308 002DC248  54 84 04 3E */	clrlwi r4, r4, 0x10
/* 802DF30C 002DC24C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF310 002DC250  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802DF314 002DC254  7D 89 03 A6 */	mtctr r12
/* 802DF318 002DC258  4E 80 04 21 */	bctrl 
/* 802DF31C 002DC25C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802DF320 002DC260  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802DF324 002DC264  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802DF328 002DC268  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802DF32C 002DC26C  7C 08 03 A6 */	mtlr r0
/* 802DF330 002DC270  38 21 00 20 */	addi r1, r1, 0x20
/* 802DF334 002DC274  4E 80 00 20 */	blr 

.global finishBossAttackBGM__Q34Game11BigTreasure3ObjFv
finishBossAttackBGM__Q34Game11BigTreasure3ObjFv:
/* 802DF338 002DC278  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802DF33C 002DC27C  7C 08 02 A6 */	mflr r0
/* 802DF340 002DC280  90 01 00 24 */	stw r0, 0x24(r1)
/* 802DF344 002DC284  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802DF348 002DC288  3B E0 00 00 */	li r31, 0
/* 802DF34C 002DC28C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802DF350 002DC290  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802DF354 002DC294  7C 7D 1B 78 */	mr r29, r3
/* 802DF358 002DC298  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802DF35C 002DC29C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF360 002DC2A0  7F C3 F3 78 */	mr r3, r30
/* 802DF364 002DC2A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF368 002DC2A8  7D 89 03 A6 */	mtctr r12
/* 802DF36C 002DC2AC  4E 80 04 21 */	bctrl 
/* 802DF370 002DC2B0  2C 03 00 05 */	cmpwi r3, 5
/* 802DF374 002DC2B4  41 82 00 3C */	beq .L_802DF3B0
/* 802DF378 002DC2B8  7F C3 F3 78 */	mr r3, r30
/* 802DF37C 002DC2BC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF380 002DC2C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF384 002DC2C4  7D 89 03 A6 */	mtctr r12
/* 802DF388 002DC2C8  4E 80 04 21 */	bctrl 
/* 802DF38C 002DC2CC  2C 03 00 06 */	cmpwi r3, 6
/* 802DF390 002DC2D0  41 82 00 20 */	beq .L_802DF3B0
/* 802DF394 002DC2D4  7F C3 F3 78 */	mr r3, r30
/* 802DF398 002DC2D8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF39C 002DC2DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF3A0 002DC2E0  7D 89 03 A6 */	mtctr r12
/* 802DF3A4 002DC2E4  4E 80 04 21 */	bctrl 
/* 802DF3A8 002DC2E8  2C 03 00 07 */	cmpwi r3, 7
/* 802DF3AC 002DC2EC  40 82 00 08 */	bne .L_802DF3B4
.L_802DF3B0:
/* 802DF3B0 002DC2F0  3B E0 00 01 */	li r31, 1
.L_802DF3B4:
/* 802DF3B4 002DC2F4  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802DF3B8 002DC2F8  40 82 00 20 */	bne .L_802DF3D8
/* 802DF3BC 002DC2FC  3C 60 80 49 */	lis r3, lbl_8048CC0C@ha
/* 802DF3C0 002DC300  3C A0 80 49 */	lis r5, lbl_8048CC24@ha
/* 802DF3C4 002DC304  38 63 CC 0C */	addi r3, r3, lbl_8048CC0C@l
/* 802DF3C8 002DC308  38 80 04 54 */	li r4, 0x454
/* 802DF3CC 002DC30C  38 A5 CC 24 */	addi r5, r5, lbl_8048CC24@l
/* 802DF3D0 002DC310  4C C6 31 82 */	crclr 6
/* 802DF3D4 002DC314  4B D4 B2 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802DF3D8:
/* 802DF3D8 002DC318  80 1D 03 C4 */	lwz r0, 0x3c4(r29)
/* 802DF3DC 002DC31C  38 80 00 01 */	li r4, 1
/* 802DF3E0 002DC320  38 60 00 00 */	li r3, 0
/* 802DF3E4 002DC324  28 00 00 00 */	cmplwi r0, 0
/* 802DF3E8 002DC328  41 82 00 08 */	beq .L_802DF3F0
/* 802DF3EC 002DC32C  38 60 00 01 */	li r3, 1
.L_802DF3F0:
/* 802DF3F0 002DC330  80 1D 03 C8 */	lwz r0, 0x3c8(r29)
/* 802DF3F4 002DC334  28 00 00 00 */	cmplwi r0, 0
/* 802DF3F8 002DC338  41 82 00 08 */	beq .L_802DF400
/* 802DF3FC 002DC33C  38 63 00 01 */	addi r3, r3, 1
.L_802DF400:
/* 802DF400 002DC340  80 1D 03 CC */	lwz r0, 0x3cc(r29)
/* 802DF404 002DC344  28 00 00 00 */	cmplwi r0, 0
/* 802DF408 002DC348  41 82 00 08 */	beq .L_802DF410
/* 802DF40C 002DC34C  38 63 00 01 */	addi r3, r3, 1
.L_802DF410:
/* 802DF410 002DC350  80 1D 03 D0 */	lwz r0, 0x3d0(r29)
/* 802DF414 002DC354  28 00 00 00 */	cmplwi r0, 0
/* 802DF418 002DC358  41 82 00 08 */	beq .L_802DF420
/* 802DF41C 002DC35C  38 63 00 01 */	addi r3, r3, 1
.L_802DF420:
/* 802DF420 002DC360  2C 03 00 02 */	cmpwi r3, 2
/* 802DF424 002DC364  41 82 00 38 */	beq .L_802DF45C
/* 802DF428 002DC368  40 80 00 14 */	bge .L_802DF43C
/* 802DF42C 002DC36C  2C 03 00 00 */	cmpwi r3, 0
/* 802DF430 002DC370  41 82 00 1C */	beq .L_802DF44C
/* 802DF434 002DC374  40 80 00 20 */	bge .L_802DF454
/* 802DF438 002DC378  48 00 00 38 */	b .L_802DF470
.L_802DF43C:
/* 802DF43C 002DC37C  2C 03 00 04 */	cmpwi r3, 4
/* 802DF440 002DC380  41 82 00 2C */	beq .L_802DF46C
/* 802DF444 002DC384  40 80 00 2C */	bge .L_802DF470
/* 802DF448 002DC388  48 00 00 1C */	b .L_802DF464
.L_802DF44C:
/* 802DF44C 002DC38C  38 80 00 0B */	li r4, 0xb
/* 802DF450 002DC390  48 00 00 20 */	b .L_802DF470
.L_802DF454:
/* 802DF454 002DC394  38 80 00 0A */	li r4, 0xa
/* 802DF458 002DC398  48 00 00 18 */	b .L_802DF470
.L_802DF45C:
/* 802DF45C 002DC39C  38 80 00 09 */	li r4, 9
/* 802DF460 002DC3A0  48 00 00 10 */	b .L_802DF470
.L_802DF464:
/* 802DF464 002DC3A4  38 80 00 08 */	li r4, 8
/* 802DF468 002DC3A8  48 00 00 08 */	b .L_802DF470
.L_802DF46C:
/* 802DF46C 002DC3AC  38 80 00 01 */	li r4, 1
.L_802DF470:
/* 802DF470 002DC3B0  7F C3 F3 78 */	mr r3, r30
/* 802DF474 002DC3B4  54 84 04 3E */	clrlwi r4, r4, 0x10
/* 802DF478 002DC3B8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF47C 002DC3BC  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802DF480 002DC3C0  7D 89 03 A6 */	mtctr r12
/* 802DF484 002DC3C4  4E 80 04 21 */	bctrl 
/* 802DF488 002DC3C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802DF48C 002DC3CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802DF490 002DC3D0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802DF494 002DC3D4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802DF498 002DC3D8  7C 08 03 A6 */	mtlr r0
/* 802DF49C 002DC3DC  38 21 00 20 */	addi r1, r1, 0x20
/* 802DF4A0 002DC3E0  4E 80 00 20 */	blr 

.global startBossFlickBGM__Q34Game11BigTreasure3ObjFv
startBossFlickBGM__Q34Game11BigTreasure3ObjFv:
/* 802DF4A4 002DC3E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DF4A8 002DC3E8  7C 08 02 A6 */	mflr r0
/* 802DF4AC 002DC3EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DF4B0 002DC3F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DF4B4 002DC3F4  3B E0 00 00 */	li r31, 0
/* 802DF4B8 002DC3F8  93 C1 00 08 */	stw r30, 8(r1)
/* 802DF4BC 002DC3FC  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802DF4C0 002DC400  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF4C4 002DC404  7F C3 F3 78 */	mr r3, r30
/* 802DF4C8 002DC408  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF4CC 002DC40C  7D 89 03 A6 */	mtctr r12
/* 802DF4D0 002DC410  4E 80 04 21 */	bctrl 
/* 802DF4D4 002DC414  2C 03 00 05 */	cmpwi r3, 5
/* 802DF4D8 002DC418  41 82 00 3C */	beq .L_802DF514
/* 802DF4DC 002DC41C  7F C3 F3 78 */	mr r3, r30
/* 802DF4E0 002DC420  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF4E4 002DC424  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF4E8 002DC428  7D 89 03 A6 */	mtctr r12
/* 802DF4EC 002DC42C  4E 80 04 21 */	bctrl 
/* 802DF4F0 002DC430  2C 03 00 06 */	cmpwi r3, 6
/* 802DF4F4 002DC434  41 82 00 20 */	beq .L_802DF514
/* 802DF4F8 002DC438  7F C3 F3 78 */	mr r3, r30
/* 802DF4FC 002DC43C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF500 002DC440  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF504 002DC444  7D 89 03 A6 */	mtctr r12
/* 802DF508 002DC448  4E 80 04 21 */	bctrl 
/* 802DF50C 002DC44C  2C 03 00 07 */	cmpwi r3, 7
/* 802DF510 002DC450  40 82 00 08 */	bne .L_802DF518
.L_802DF514:
/* 802DF514 002DC454  3B E0 00 01 */	li r31, 1
.L_802DF518:
/* 802DF518 002DC458  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802DF51C 002DC45C  40 82 00 20 */	bne .L_802DF53C
/* 802DF520 002DC460  3C 60 80 49 */	lis r3, lbl_8048CC0C@ha
/* 802DF524 002DC464  3C A0 80 49 */	lis r5, lbl_8048CC24@ha
/* 802DF528 002DC468  38 63 CC 0C */	addi r3, r3, lbl_8048CC0C@l
/* 802DF52C 002DC46C  38 80 04 54 */	li r4, 0x454
/* 802DF530 002DC470  38 A5 CC 24 */	addi r5, r5, lbl_8048CC24@l
/* 802DF534 002DC474  4C C6 31 82 */	crclr 6
/* 802DF538 002DC478  4B D4 B1 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802DF53C:
/* 802DF53C 002DC47C  7F C3 F3 78 */	mr r3, r30
/* 802DF540 002DC480  38 80 00 04 */	li r4, 4
/* 802DF544 002DC484  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF548 002DC488  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802DF54C 002DC48C  7D 89 03 A6 */	mtctr r12
/* 802DF550 002DC490  4E 80 04 21 */	bctrl 
/* 802DF554 002DC494  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DF558 002DC498  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DF55C 002DC49C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802DF560 002DC4A0  7C 08 03 A6 */	mtlr r0
/* 802DF564 002DC4A4  38 21 00 10 */	addi r1, r1, 0x10
/* 802DF568 002DC4A8  4E 80 00 20 */	blr 

.global startBossItemDropBGM__Q34Game11BigTreasure3ObjFv
startBossItemDropBGM__Q34Game11BigTreasure3ObjFv:
/* 802DF56C 002DC4AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802DF570 002DC4B0  7C 08 02 A6 */	mflr r0
/* 802DF574 002DC4B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802DF578 002DC4B8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802DF57C 002DC4BC  3B E0 00 00 */	li r31, 0
/* 802DF580 002DC4C0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802DF584 002DC4C4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802DF588 002DC4C8  7C 7D 1B 78 */	mr r29, r3
/* 802DF58C 002DC4CC  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802DF590 002DC4D0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF594 002DC4D4  7F C3 F3 78 */	mr r3, r30
/* 802DF598 002DC4D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF59C 002DC4DC  7D 89 03 A6 */	mtctr r12
/* 802DF5A0 002DC4E0  4E 80 04 21 */	bctrl 
/* 802DF5A4 002DC4E4  2C 03 00 05 */	cmpwi r3, 5
/* 802DF5A8 002DC4E8  41 82 00 3C */	beq .L_802DF5E4
/* 802DF5AC 002DC4EC  7F C3 F3 78 */	mr r3, r30
/* 802DF5B0 002DC4F0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF5B4 002DC4F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF5B8 002DC4F8  7D 89 03 A6 */	mtctr r12
/* 802DF5BC 002DC4FC  4E 80 04 21 */	bctrl 
/* 802DF5C0 002DC500  2C 03 00 06 */	cmpwi r3, 6
/* 802DF5C4 002DC504  41 82 00 20 */	beq .L_802DF5E4
/* 802DF5C8 002DC508  7F C3 F3 78 */	mr r3, r30
/* 802DF5CC 002DC50C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF5D0 002DC510  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF5D4 002DC514  7D 89 03 A6 */	mtctr r12
/* 802DF5D8 002DC518  4E 80 04 21 */	bctrl 
/* 802DF5DC 002DC51C  2C 03 00 07 */	cmpwi r3, 7
/* 802DF5E0 002DC520  40 82 00 08 */	bne .L_802DF5E8
.L_802DF5E4:
/* 802DF5E4 002DC524  3B E0 00 01 */	li r31, 1
.L_802DF5E8:
/* 802DF5E8 002DC528  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802DF5EC 002DC52C  40 82 00 20 */	bne .L_802DF60C
/* 802DF5F0 002DC530  3C 60 80 49 */	lis r3, lbl_8048CC0C@ha
/* 802DF5F4 002DC534  3C A0 80 49 */	lis r5, lbl_8048CC24@ha
/* 802DF5F8 002DC538  38 63 CC 0C */	addi r3, r3, lbl_8048CC0C@l
/* 802DF5FC 002DC53C  38 80 04 54 */	li r4, 0x454
/* 802DF600 002DC540  38 A5 CC 24 */	addi r5, r5, lbl_8048CC24@l
/* 802DF604 002DC544  4C C6 31 82 */	crclr 6
/* 802DF608 002DC548  4B D4 B0 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802DF60C:
/* 802DF60C 002DC54C  80 1D 03 C4 */	lwz r0, 0x3c4(r29)
/* 802DF610 002DC550  3B E0 00 08 */	li r31, 8
/* 802DF614 002DC554  38 60 00 00 */	li r3, 0
/* 802DF618 002DC558  28 00 00 00 */	cmplwi r0, 0
/* 802DF61C 002DC55C  41 82 00 08 */	beq .L_802DF624
/* 802DF620 002DC560  38 60 00 01 */	li r3, 1
.L_802DF624:
/* 802DF624 002DC564  80 1D 03 C8 */	lwz r0, 0x3c8(r29)
/* 802DF628 002DC568  28 00 00 00 */	cmplwi r0, 0
/* 802DF62C 002DC56C  41 82 00 08 */	beq .L_802DF634
/* 802DF630 002DC570  38 63 00 01 */	addi r3, r3, 1
.L_802DF634:
/* 802DF634 002DC574  80 1D 03 CC */	lwz r0, 0x3cc(r29)
/* 802DF638 002DC578  28 00 00 00 */	cmplwi r0, 0
/* 802DF63C 002DC57C  41 82 00 08 */	beq .L_802DF644
/* 802DF640 002DC580  38 63 00 01 */	addi r3, r3, 1
.L_802DF644:
/* 802DF644 002DC584  80 1D 03 D0 */	lwz r0, 0x3d0(r29)
/* 802DF648 002DC588  28 00 00 00 */	cmplwi r0, 0
/* 802DF64C 002DC58C  41 82 00 08 */	beq .L_802DF654
/* 802DF650 002DC590  38 63 00 01 */	addi r3, r3, 1
.L_802DF654:
/* 802DF654 002DC594  2C 03 00 02 */	cmpwi r3, 2
/* 802DF658 002DC598  41 82 00 34 */	beq .L_802DF68C
/* 802DF65C 002DC59C  40 80 00 14 */	bge .L_802DF670
/* 802DF660 002DC5A0  2C 03 00 00 */	cmpwi r3, 0
/* 802DF664 002DC5A4  41 82 00 18 */	beq .L_802DF67C
/* 802DF668 002DC5A8  40 80 00 1C */	bge .L_802DF684
/* 802DF66C 002DC5AC  48 00 00 2C */	b .L_802DF698
.L_802DF670:
/* 802DF670 002DC5B0  2C 03 00 04 */	cmpwi r3, 4
/* 802DF674 002DC5B4  40 80 00 24 */	bge .L_802DF698
/* 802DF678 002DC5B8  48 00 00 1C */	b .L_802DF694
.L_802DF67C:
/* 802DF67C 002DC5BC  3B E0 00 0B */	li r31, 0xb
/* 802DF680 002DC5C0  48 00 00 18 */	b .L_802DF698
.L_802DF684:
/* 802DF684 002DC5C4  3B E0 00 0A */	li r31, 0xa
/* 802DF688 002DC5C8  48 00 00 10 */	b .L_802DF698
.L_802DF68C:
/* 802DF68C 002DC5CC  3B E0 00 09 */	li r31, 9
/* 802DF690 002DC5D0  48 00 00 08 */	b .L_802DF698
.L_802DF694:
/* 802DF694 002DC5D4  3B E0 00 08 */	li r31, 8
.L_802DF698:
/* 802DF698 002DC5D8  7F A3 EB 78 */	mr r3, r29
/* 802DF69C 002DC5DC  4B E2 7D 59 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802DF6A0 002DC5E0  2C 03 00 07 */	cmpwi r3, 7
/* 802DF6A4 002DC5E4  40 82 00 44 */	bne .L_802DF6E8
/* 802DF6A8 002DC5E8  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 802DF6AC 002DC5EC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802DF6B0 002DC5F0  41 82 00 50 */	beq .L_802DF700
/* 802DF6B4 002DC5F4  80 1D 04 08 */	lwz r0, 0x408(r29)
/* 802DF6B8 002DC5F8  54 00 10 3A */	slwi r0, r0, 2
/* 802DF6BC 002DC5FC  7C 7D 02 14 */	add r3, r29, r0
/* 802DF6C0 002DC600  80 03 03 C4 */	lwz r0, 0x3c4(r3)
/* 802DF6C4 002DC604  28 00 00 00 */	cmplwi r0, 0
/* 802DF6C8 002DC608  40 82 00 38 */	bne .L_802DF700
/* 802DF6CC 002DC60C  7F C3 F3 78 */	mr r3, r30
/* 802DF6D0 002DC610  57 E4 04 3E */	clrlwi r4, r31, 0x10
/* 802DF6D4 002DC614  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF6D8 002DC618  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802DF6DC 002DC61C  7D 89 03 A6 */	mtctr r12
/* 802DF6E0 002DC620  4E 80 04 21 */	bctrl 
/* 802DF6E4 002DC624  48 00 00 1C */	b .L_802DF700
.L_802DF6E8:
/* 802DF6E8 002DC628  7F C3 F3 78 */	mr r3, r30
/* 802DF6EC 002DC62C  57 E4 04 3E */	clrlwi r4, r31, 0x10
/* 802DF6F0 002DC630  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF6F4 002DC634  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802DF6F8 002DC638  7D 89 03 A6 */	mtctr r12
/* 802DF6FC 002DC63C  4E 80 04 21 */	bctrl 
.L_802DF700:
/* 802DF700 002DC640  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802DF704 002DC644  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802DF708 002DC648  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802DF70C 002DC64C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802DF710 002DC650  7C 08 03 A6 */	mtlr r0
/* 802DF714 002DC654  38 21 00 20 */	addi r1, r1, 0x20
/* 802DF718 002DC658  4E 80 00 20 */	blr 

.global updateBossBGM__Q34Game11BigTreasure3ObjFv
updateBossBGM__Q34Game11BigTreasure3ObjFv:
/* 802DF71C 002DC65C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802DF720 002DC660  7C 08 02 A6 */	mflr r0
/* 802DF724 002DC664  90 01 00 24 */	stw r0, 0x24(r1)
/* 802DF728 002DC668  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802DF72C 002DC66C  3B E0 00 00 */	li r31, 0
/* 802DF730 002DC670  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802DF734 002DC674  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802DF738 002DC678  7C 7D 1B 78 */	mr r29, r3
/* 802DF73C 002DC67C  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802DF740 002DC680  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF744 002DC684  7F C3 F3 78 */	mr r3, r30
/* 802DF748 002DC688  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF74C 002DC68C  7D 89 03 A6 */	mtctr r12
/* 802DF750 002DC690  4E 80 04 21 */	bctrl 
/* 802DF754 002DC694  2C 03 00 05 */	cmpwi r3, 5
/* 802DF758 002DC698  41 82 00 3C */	beq .L_802DF794
/* 802DF75C 002DC69C  7F C3 F3 78 */	mr r3, r30
/* 802DF760 002DC6A0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF764 002DC6A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF768 002DC6A8  7D 89 03 A6 */	mtctr r12
/* 802DF76C 002DC6AC  4E 80 04 21 */	bctrl 
/* 802DF770 002DC6B0  2C 03 00 06 */	cmpwi r3, 6
/* 802DF774 002DC6B4  41 82 00 20 */	beq .L_802DF794
/* 802DF778 002DC6B8  7F C3 F3 78 */	mr r3, r30
/* 802DF77C 002DC6BC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF780 002DC6C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF784 002DC6C4  7D 89 03 A6 */	mtctr r12
/* 802DF788 002DC6C8  4E 80 04 21 */	bctrl 
/* 802DF78C 002DC6CC  2C 03 00 07 */	cmpwi r3, 7
/* 802DF790 002DC6D0  40 82 00 08 */	bne .L_802DF798
.L_802DF794:
/* 802DF794 002DC6D4  3B E0 00 01 */	li r31, 1
.L_802DF798:
/* 802DF798 002DC6D8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802DF79C 002DC6DC  40 82 00 20 */	bne .L_802DF7BC
/* 802DF7A0 002DC6E0  3C 60 80 49 */	lis r3, lbl_8048CC0C@ha
/* 802DF7A4 002DC6E4  3C A0 80 49 */	lis r5, lbl_8048CC24@ha
/* 802DF7A8 002DC6E8  38 63 CC 0C */	addi r3, r3, lbl_8048CC0C@l
/* 802DF7AC 002DC6EC  38 80 04 54 */	li r4, 0x454
/* 802DF7B0 002DC6F0  38 A5 CC 24 */	addi r5, r5, lbl_8048CC24@l
/* 802DF7B4 002DC6F4  4C C6 31 82 */	crclr 6
/* 802DF7B8 002DC6F8  4B D4 AE 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802DF7BC:
/* 802DF7BC 002DC6FC  80 1D 01 F4 */	lwz r0, 0x1f4(r29)
/* 802DF7C0 002DC700  2C 00 00 00 */	cmpwi r0, 0
/* 802DF7C4 002DC704  41 82 00 20 */	beq .L_802DF7E4
/* 802DF7C8 002DC708  7F C3 F3 78 */	mr r3, r30
/* 802DF7CC 002DC70C  38 80 00 01 */	li r4, 1
/* 802DF7D0 002DC710  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF7D4 002DC714  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 802DF7D8 002DC718  7D 89 03 A6 */	mtctr r12
/* 802DF7DC 002DC71C  4E 80 04 21 */	bctrl 
/* 802DF7E0 002DC720  48 00 00 1C */	b .L_802DF7FC
.L_802DF7E4:
/* 802DF7E4 002DC724  7F C3 F3 78 */	mr r3, r30
/* 802DF7E8 002DC728  38 80 00 00 */	li r4, 0
/* 802DF7EC 002DC72C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF7F0 002DC730  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 802DF7F4 002DC734  7D 89 03 A6 */	mtctr r12
/* 802DF7F8 002DC738  4E 80 04 21 */	bctrl 
.L_802DF7FC:
/* 802DF7FC 002DC73C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802DF800 002DC740  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802DF804 002DC744  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802DF808 002DC748  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802DF80C 002DC74C  7C 08 03 A6 */	mtlr r0
/* 802DF810 002DC750  38 21 00 20 */	addi r1, r1, 0x20
/* 802DF814 002DC754  4E 80 00 20 */	blr 

.global resetBossAppearBGM__Q34Game11BigTreasure3ObjFv
resetBossAppearBGM__Q34Game11BigTreasure3ObjFv:
/* 802DF818 002DC758  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DF81C 002DC75C  7C 08 02 A6 */	mflr r0
/* 802DF820 002DC760  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DF824 002DC764  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DF828 002DC768  3B E0 00 00 */	li r31, 0
/* 802DF82C 002DC76C  93 C1 00 08 */	stw r30, 8(r1)
/* 802DF830 002DC770  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802DF834 002DC774  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF838 002DC778  7F C3 F3 78 */	mr r3, r30
/* 802DF83C 002DC77C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF840 002DC780  7D 89 03 A6 */	mtctr r12
/* 802DF844 002DC784  4E 80 04 21 */	bctrl 
/* 802DF848 002DC788  2C 03 00 05 */	cmpwi r3, 5
/* 802DF84C 002DC78C  41 82 00 3C */	beq .L_802DF888
/* 802DF850 002DC790  7F C3 F3 78 */	mr r3, r30
/* 802DF854 002DC794  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF858 002DC798  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF85C 002DC79C  7D 89 03 A6 */	mtctr r12
/* 802DF860 002DC7A0  4E 80 04 21 */	bctrl 
/* 802DF864 002DC7A4  2C 03 00 06 */	cmpwi r3, 6
/* 802DF868 002DC7A8  41 82 00 20 */	beq .L_802DF888
/* 802DF86C 002DC7AC  7F C3 F3 78 */	mr r3, r30
/* 802DF870 002DC7B0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF874 002DC7B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF878 002DC7B8  7D 89 03 A6 */	mtctr r12
/* 802DF87C 002DC7BC  4E 80 04 21 */	bctrl 
/* 802DF880 002DC7C0  2C 03 00 07 */	cmpwi r3, 7
/* 802DF884 002DC7C4  40 82 00 08 */	bne .L_802DF88C
.L_802DF888:
/* 802DF888 002DC7C8  3B E0 00 01 */	li r31, 1
.L_802DF88C:
/* 802DF88C 002DC7CC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802DF890 002DC7D0  40 82 00 20 */	bne .L_802DF8B0
/* 802DF894 002DC7D4  3C 60 80 49 */	lis r3, lbl_8048CC0C@ha
/* 802DF898 002DC7D8  3C A0 80 49 */	lis r5, lbl_8048CC24@ha
/* 802DF89C 002DC7DC  38 63 CC 0C */	addi r3, r3, lbl_8048CC0C@l
/* 802DF8A0 002DC7E0  38 80 04 54 */	li r4, 0x454
/* 802DF8A4 002DC7E4  38 A5 CC 24 */	addi r5, r5, lbl_8048CC24@l
/* 802DF8A8 002DC7E8  4C C6 31 82 */	crclr 6
/* 802DF8AC 002DC7EC  4B D4 AD 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802DF8B0:
/* 802DF8B0 002DC7F0  7F C3 F3 78 */	mr r3, r30
/* 802DF8B4 002DC7F4  38 80 00 00 */	li r4, 0
/* 802DF8B8 002DC7F8  48 18 01 39 */	bl setAppearFlag__Q23PSM9EnemyBossFb
/* 802DF8BC 002DC7FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DF8C0 002DC800  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DF8C4 002DC804  83 C1 00 08 */	lwz r30, 8(r1)
/* 802DF8C8 002DC808  7C 08 03 A6 */	mtlr r0
/* 802DF8CC 002DC80C  38 21 00 10 */	addi r1, r1, 0x10
/* 802DF8D0 002DC810  4E 80 00 20 */	blr 

.global setBossAppearBGM__Q34Game11BigTreasure3ObjFv
setBossAppearBGM__Q34Game11BigTreasure3ObjFv:
/* 802DF8D4 002DC814  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802DF8D8 002DC818  7C 08 02 A6 */	mflr r0
/* 802DF8DC 002DC81C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802DF8E0 002DC820  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802DF8E4 002DC824  3B E0 00 00 */	li r31, 0
/* 802DF8E8 002DC828  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802DF8EC 002DC82C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802DF8F0 002DC830  7C 7D 1B 78 */	mr r29, r3
/* 802DF8F4 002DC834  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802DF8F8 002DC838  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF8FC 002DC83C  7F C3 F3 78 */	mr r3, r30
/* 802DF900 002DC840  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF904 002DC844  7D 89 03 A6 */	mtctr r12
/* 802DF908 002DC848  4E 80 04 21 */	bctrl 
/* 802DF90C 002DC84C  2C 03 00 05 */	cmpwi r3, 5
/* 802DF910 002DC850  41 82 00 3C */	beq .L_802DF94C
/* 802DF914 002DC854  7F C3 F3 78 */	mr r3, r30
/* 802DF918 002DC858  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF91C 002DC85C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF920 002DC860  7D 89 03 A6 */	mtctr r12
/* 802DF924 002DC864  4E 80 04 21 */	bctrl 
/* 802DF928 002DC868  2C 03 00 06 */	cmpwi r3, 6
/* 802DF92C 002DC86C  41 82 00 20 */	beq .L_802DF94C
/* 802DF930 002DC870  7F C3 F3 78 */	mr r3, r30
/* 802DF934 002DC874  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802DF938 002DC878  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802DF93C 002DC87C  7D 89 03 A6 */	mtctr r12
/* 802DF940 002DC880  4E 80 04 21 */	bctrl 
/* 802DF944 002DC884  2C 03 00 07 */	cmpwi r3, 7
/* 802DF948 002DC888  40 82 00 08 */	bne .L_802DF950
.L_802DF94C:
/* 802DF94C 002DC88C  3B E0 00 01 */	li r31, 1
.L_802DF950:
/* 802DF950 002DC890  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802DF954 002DC894  40 82 00 20 */	bne .L_802DF974
/* 802DF958 002DC898  3C 60 80 49 */	lis r3, lbl_8048CC0C@ha
/* 802DF95C 002DC89C  3C A0 80 49 */	lis r5, lbl_8048CC24@ha
/* 802DF960 002DC8A0  38 63 CC 0C */	addi r3, r3, lbl_8048CC0C@l
/* 802DF964 002DC8A4  38 80 04 54 */	li r4, 0x454
/* 802DF968 002DC8A8  38 A5 CC 24 */	addi r5, r5, lbl_8048CC24@l
/* 802DF96C 002DC8AC  4C C6 31 82 */	crclr 6
/* 802DF970 002DC8B0  4B D4 AC D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802DF974:
/* 802DF974 002DC8B4  80 1D 03 C4 */	lwz r0, 0x3c4(r29)
/* 802DF978 002DC8B8  38 80 00 01 */	li r4, 1
/* 802DF97C 002DC8BC  38 60 00 00 */	li r3, 0
/* 802DF980 002DC8C0  28 00 00 00 */	cmplwi r0, 0
/* 802DF984 002DC8C4  41 82 00 08 */	beq .L_802DF98C
/* 802DF988 002DC8C8  38 60 00 01 */	li r3, 1
.L_802DF98C:
/* 802DF98C 002DC8CC  80 1D 03 C8 */	lwz r0, 0x3c8(r29)
/* 802DF990 002DC8D0  28 00 00 00 */	cmplwi r0, 0
/* 802DF994 002DC8D4  41 82 00 08 */	beq .L_802DF99C
/* 802DF998 002DC8D8  38 63 00 01 */	addi r3, r3, 1
.L_802DF99C:
/* 802DF99C 002DC8DC  80 1D 03 CC */	lwz r0, 0x3cc(r29)
/* 802DF9A0 002DC8E0  28 00 00 00 */	cmplwi r0, 0
/* 802DF9A4 002DC8E4  41 82 00 08 */	beq .L_802DF9AC
/* 802DF9A8 002DC8E8  38 63 00 01 */	addi r3, r3, 1
.L_802DF9AC:
/* 802DF9AC 002DC8EC  80 1D 03 D0 */	lwz r0, 0x3d0(r29)
/* 802DF9B0 002DC8F0  28 00 00 00 */	cmplwi r0, 0
/* 802DF9B4 002DC8F4  41 82 00 08 */	beq .L_802DF9BC
/* 802DF9B8 002DC8F8  38 63 00 01 */	addi r3, r3, 1
.L_802DF9BC:
/* 802DF9BC 002DC8FC  2C 03 00 02 */	cmpwi r3, 2
/* 802DF9C0 002DC900  41 82 00 38 */	beq .L_802DF9F8
/* 802DF9C4 002DC904  40 80 00 14 */	bge .L_802DF9D8
/* 802DF9C8 002DC908  2C 03 00 00 */	cmpwi r3, 0
/* 802DF9CC 002DC90C  41 82 00 1C */	beq .L_802DF9E8
/* 802DF9D0 002DC910  40 80 00 20 */	bge .L_802DF9F0
/* 802DF9D4 002DC914  48 00 00 38 */	b .L_802DFA0C
.L_802DF9D8:
/* 802DF9D8 002DC918  2C 03 00 04 */	cmpwi r3, 4
/* 802DF9DC 002DC91C  41 82 00 2C */	beq .L_802DFA08
/* 802DF9E0 002DC920  40 80 00 2C */	bge .L_802DFA0C
/* 802DF9E4 002DC924  48 00 00 1C */	b .L_802DFA00
.L_802DF9E8:
/* 802DF9E8 002DC928  38 80 00 0B */	li r4, 0xb
/* 802DF9EC 002DC92C  48 00 00 20 */	b .L_802DFA0C
.L_802DF9F0:
/* 802DF9F0 002DC930  38 80 00 0A */	li r4, 0xa
/* 802DF9F4 002DC934  48 00 00 18 */	b .L_802DFA0C
.L_802DF9F8:
/* 802DF9F8 002DC938  38 80 00 09 */	li r4, 9
/* 802DF9FC 002DC93C  48 00 00 10 */	b .L_802DFA0C
.L_802DFA00:
/* 802DFA00 002DC940  38 80 00 08 */	li r4, 8
/* 802DFA04 002DC944  48 00 00 08 */	b .L_802DFA0C
.L_802DFA08:
/* 802DFA08 002DC948  38 80 00 01 */	li r4, 1
.L_802DFA0C:
/* 802DFA0C 002DC94C  B0 9E 01 1C */	sth r4, 0x11c(r30)
/* 802DFA10 002DC950  7F C3 F3 78 */	mr r3, r30
/* 802DFA14 002DC954  38 80 00 01 */	li r4, 1
/* 802DFA18 002DC958  48 17 FF D9 */	bl setAppearFlag__Q23PSM9EnemyBossFb
/* 802DFA1C 002DC95C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802DFA20 002DC960  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802DFA24 002DC964  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802DFA28 002DC968  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802DFA2C 002DC96C  7C 08 03 A6 */	mtlr r0
/* 802DFA30 002DC970  38 21 00 20 */	addi r1, r1, 0x20
/* 802DFA34 002DC974  4E 80 00 20 */	blr 

.global createEffect__Q34Game11BigTreasure3ObjFv
createEffect__Q34Game11BigTreasure3ObjFv:
/* 802DFA38 002DC978  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802DFA3C 002DC97C  7C 08 02 A6 */	mflr r0
/* 802DFA40 002DC980  3D 60 80 4E */	lis r11, __vt__Q23efx5TSync@ha
/* 802DFA44 002DC984  3D 40 80 4E */	lis r10, __vt__Q23efx9TChasePos@ha
/* 802DFA48 002DC988  90 01 00 54 */	stw r0, 0x54(r1)
/* 802DFA4C 002DC98C  3D 20 80 4D */	lis r9, __vt__Q23efx10TDamaFootw@ha
/* 802DFA50 002DC990  3D 00 80 4D */	lis r8, __vt__Q23efx10TDamaSmoke@ha
/* 802DFA54 002DC994  3C E0 80 4E */	lis r7, __vt__Q23efx10TChaseMtxT@ha
/* 802DFA58 002DC998  BD E1 00 0C */	stmw r15, 0xc(r1)
/* 802DFA5C 002DC99C  7C 7F 1B 78 */	mr r31, r3
/* 802DFA60 002DC9A0  3C C0 80 4D */	lis r6, __vt__Q23efx14TOootaStartOta@ha
/* 802DFA64 002DC9A4  3C A0 80 4E */	lis r5, __vt__Q23efx23TChasePosPosLocalYScale@ha
/* 802DFA68 002DC9A8  3C 80 80 4D */	lis r4, __vt__Q23efx14TOootaStartLeg@ha
/* 802DFA6C 002DC9AC  3C 60 80 4D */	lis r3, __vt__Q23efx15TOootaChangeLeg@ha
/* 802DFA70 002DC9B0  39 6B 69 8C */	addi r11, r11, __vt__Q23efx5TSync@l
/* 802DFA74 002DC9B4  39 4A 69 40 */	addi r10, r10, __vt__Q23efx9TChasePos@l
/* 802DFA78 002DC9B8  39 29 DA F8 */	addi r9, r9, __vt__Q23efx10TDamaFootw@l
/* 802DFA7C 002DC9BC  39 08 D9 30 */	addi r8, r8, __vt__Q23efx10TDamaSmoke@l
/* 802DFA80 002DC9C0  38 E7 68 5C */	addi r7, r7, __vt__Q23efx10TChaseMtxT@l
/* 802DFA84 002DC9C4  38 C6 35 18 */	addi r6, r6, __vt__Q23efx14TOootaStartOta@l
/* 802DFA88 002DC9C8  38 A5 67 78 */	addi r5, r5, __vt__Q23efx23TChasePosPosLocalYScale@l
/* 802DFA8C 002DC9CC  38 84 34 CC */	addi r4, r4, __vt__Q23efx14TOootaStartLeg@l
/* 802DFA90 002DC9D0  38 63 34 64 */	addi r3, r3, __vt__Q23efx15TOootaChangeLeg@l
/* 802DFA94 002DC9D4  7F FC FB 78 */	mr r28, r31
/* 802DFA98 002DC9D8  7F FB FB 78 */	mr r27, r31
/* 802DFA9C 002DC9DC  7F FA FB 78 */	mr r26, r31
/* 802DFAA0 002DC9E0  3A 4B 00 14 */	addi r18, r11, 0x14
/* 802DFAA4 002DC9E4  3A 2A 00 14 */	addi r17, r10, 0x14
/* 802DFAA8 002DC9E8  3B 29 00 14 */	addi r25, r9, 0x14
/* 802DFAAC 002DC9EC  3B 08 00 14 */	addi r24, r8, 0x14
/* 802DFAB0 002DC9F0  3A E7 00 14 */	addi r23, r7, 0x14
/* 802DFAB4 002DC9F4  3A C6 00 14 */	addi r22, r6, 0x14
/* 802DFAB8 002DC9F8  3A A5 00 14 */	addi r21, r5, 0x14
/* 802DFABC 002DC9FC  3A 84 00 14 */	addi r20, r4, 0x14
/* 802DFAC0 002DCA00  3A 63 00 14 */	addi r19, r3, 0x14
/* 802DFAC4 002DCA04  3A 00 00 00 */	li r16, 0
.L_802DFAC8:
/* 802DFAC8 002DCA08  38 60 00 2C */	li r3, 0x2c
/* 802DFACC 002DCA0C  4B D4 43 D9 */	bl __nw__FUl
/* 802DFAD0 002DCA10  7C 6F 1B 79 */	or. r15, r3, r3
/* 802DFAD4 002DCA14  41 82 00 20 */	beq .L_802DFAF4
/* 802DFAD8 002DCA18  38 80 00 00 */	li r4, 0
/* 802DFADC 002DCA1C  38 A0 01 11 */	li r5, 0x111
/* 802DFAE0 002DCA20  38 C0 01 12 */	li r6, 0x112
/* 802DFAE4 002DCA24  48 0D 07 5D */	bl "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs"
/* 802DFAE8 002DCA28  3C 60 80 4D */	lis r3, __vt__Q23efx10TOootaFoot@ha
/* 802DFAEC 002DCA2C  38 03 35 64 */	addi r0, r3, __vt__Q23efx10TOootaFoot@l
/* 802DFAF0 002DCA30  90 0F 00 00 */	stw r0, 0(r15)
.L_802DFAF4:
/* 802DFAF4 002DCA34  91 FC 04 80 */	stw r15, 0x480(r28)
/* 802DFAF8 002DCA38  38 60 00 14 */	li r3, 0x14
/* 802DFAFC 002DCA3C  4B D4 43 A9 */	bl __nw__FUl
/* 802DFB00 002DCA40  28 03 00 00 */	cmplwi r3, 0
/* 802DFB04 002DCA44  41 82 00 6C */	beq .L_802DFB70
/* 802DFB08 002DCA48  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802DFB0C 002DCA4C  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802DFB10 002DCA50  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802DFB14 002DCA54  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802DFB18 002DCA58  90 03 00 00 */	stw r0, 0(r3)
/* 802DFB1C 002DCA5C  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802DFB20 002DCA60  3C A0 80 4E */	lis r5, __vt__Q23efx9TChasePos@ha
/* 802DFB24 002DCA64  3C 80 80 4D */	lis r4, __vt__Q23efx10TDamaFootw@ha
/* 802DFB28 002DCA68  90 03 00 04 */	stw r0, 4(r3)
/* 802DFB2C 002DCA6C  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802DFB30 002DCA70  39 00 00 00 */	li r8, 0
/* 802DFB34 002DCA74  38 E0 02 B2 */	li r7, 0x2b2
/* 802DFB38 002DCA78  90 03 00 00 */	stw r0, 0(r3)
/* 802DFB3C 002DCA7C  38 C5 69 40 */	addi r6, r5, __vt__Q23efx9TChasePos@l
/* 802DFB40 002DCA80  38 A0 00 23 */	li r5, 0x23
/* 802DFB44 002DCA84  38 04 DA F8 */	addi r0, r4, __vt__Q23efx10TDamaFootw@l
/* 802DFB48 002DCA88  92 43 00 04 */	stw r18, 4(r3)
/* 802DFB4C 002DCA8C  91 03 00 08 */	stw r8, 8(r3)
/* 802DFB50 002DCA90  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802DFB54 002DCA94  99 03 00 0E */	stb r8, 0xe(r3)
/* 802DFB58 002DCA98  90 C3 00 00 */	stw r6, 0(r3)
/* 802DFB5C 002DCA9C  92 23 00 04 */	stw r17, 4(r3)
/* 802DFB60 002DCAA0  91 03 00 10 */	stw r8, 0x10(r3)
/* 802DFB64 002DCAA4  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802DFB68 002DCAA8  90 03 00 00 */	stw r0, 0(r3)
/* 802DFB6C 002DCAAC  93 23 00 04 */	stw r25, 4(r3)
.L_802DFB70:
/* 802DFB70 002DCAB0  90 7C 04 90 */	stw r3, 0x490(r28)
/* 802DFB74 002DCAB4  38 60 00 14 */	li r3, 0x14
/* 802DFB78 002DCAB8  4B D4 43 2D */	bl __nw__FUl
/* 802DFB7C 002DCABC  28 03 00 00 */	cmplwi r3, 0
/* 802DFB80 002DCAC0  41 82 00 6C */	beq .L_802DFBEC
/* 802DFB84 002DCAC4  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802DFB88 002DCAC8  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802DFB8C 002DCACC  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802DFB90 002DCAD0  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802DFB94 002DCAD4  90 03 00 00 */	stw r0, 0(r3)
/* 802DFB98 002DCAD8  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802DFB9C 002DCADC  3C A0 80 4E */	lis r5, __vt__Q23efx9TChasePos@ha
/* 802DFBA0 002DCAE0  3C 80 80 4D */	lis r4, __vt__Q23efx10TDamaSmoke@ha
/* 802DFBA4 002DCAE4  90 03 00 04 */	stw r0, 4(r3)
/* 802DFBA8 002DCAE8  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802DFBAC 002DCAEC  39 00 00 00 */	li r8, 0
/* 802DFBB0 002DCAF0  38 E0 02 B2 */	li r7, 0x2b2
/* 802DFBB4 002DCAF4  90 03 00 00 */	stw r0, 0(r3)
/* 802DFBB8 002DCAF8  38 C5 69 40 */	addi r6, r5, __vt__Q23efx9TChasePos@l
/* 802DFBBC 002DCAFC  38 A0 00 27 */	li r5, 0x27
/* 802DFBC0 002DCB00  38 04 D9 30 */	addi r0, r4, __vt__Q23efx10TDamaSmoke@l
/* 802DFBC4 002DCB04  92 43 00 04 */	stw r18, 4(r3)
/* 802DFBC8 002DCB08  91 03 00 08 */	stw r8, 8(r3)
/* 802DFBCC 002DCB0C  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802DFBD0 002DCB10  99 03 00 0E */	stb r8, 0xe(r3)
/* 802DFBD4 002DCB14  90 C3 00 00 */	stw r6, 0(r3)
/* 802DFBD8 002DCB18  92 23 00 04 */	stw r17, 4(r3)
/* 802DFBDC 002DCB1C  91 03 00 10 */	stw r8, 0x10(r3)
/* 802DFBE0 002DCB20  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802DFBE4 002DCB24  90 03 00 00 */	stw r0, 0(r3)
/* 802DFBE8 002DCB28  93 03 00 04 */	stw r24, 4(r3)
.L_802DFBEC:
/* 802DFBEC 002DCB2C  90 7C 04 A0 */	stw r3, 0x4a0(r28)
/* 802DFBF0 002DCB30  38 60 00 14 */	li r3, 0x14
/* 802DFBF4 002DCB34  4B D4 42 B1 */	bl __nw__FUl
/* 802DFBF8 002DCB38  28 03 00 00 */	cmplwi r3, 0
/* 802DFBFC 002DCB3C  41 82 00 6C */	beq .L_802DFC68
/* 802DFC00 002DCB40  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802DFC04 002DCB44  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802DFC08 002DCB48  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802DFC0C 002DCB4C  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802DFC10 002DCB50  90 03 00 00 */	stw r0, 0(r3)
/* 802DFC14 002DCB54  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802DFC18 002DCB58  3C A0 80 4E */	lis r5, __vt__Q23efx10TChaseMtxT@ha
/* 802DFC1C 002DCB5C  3C 80 80 4D */	lis r4, __vt__Q23efx14TOootaStartOta@ha
/* 802DFC20 002DCB60  90 03 00 04 */	stw r0, 4(r3)
/* 802DFC24 002DCB64  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802DFC28 002DCB68  39 00 00 00 */	li r8, 0
/* 802DFC2C 002DCB6C  38 E0 02 B2 */	li r7, 0x2b2
/* 802DFC30 002DCB70  90 03 00 00 */	stw r0, 0(r3)
/* 802DFC34 002DCB74  38 C5 68 5C */	addi r6, r5, __vt__Q23efx10TChaseMtxT@l
/* 802DFC38 002DCB78  38 A0 02 6B */	li r5, 0x26b
/* 802DFC3C 002DCB7C  38 04 35 18 */	addi r0, r4, __vt__Q23efx14TOootaStartOta@l
/* 802DFC40 002DCB80  92 43 00 04 */	stw r18, 4(r3)
/* 802DFC44 002DCB84  91 03 00 08 */	stw r8, 8(r3)
/* 802DFC48 002DCB88  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802DFC4C 002DCB8C  99 03 00 0E */	stb r8, 0xe(r3)
/* 802DFC50 002DCB90  90 C3 00 00 */	stw r6, 0(r3)
/* 802DFC54 002DCB94  92 E3 00 04 */	stw r23, 4(r3)
/* 802DFC58 002DCB98  91 03 00 10 */	stw r8, 0x10(r3)
/* 802DFC5C 002DCB9C  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802DFC60 002DCBA0  90 03 00 00 */	stw r0, 0(r3)
/* 802DFC64 002DCBA4  92 C3 00 04 */	stw r22, 4(r3)
.L_802DFC68:
/* 802DFC68 002DCBA8  90 7C 04 B4 */	stw r3, 0x4b4(r28)
/* 802DFC6C 002DCBAC  7F 7E DB 78 */	mr r30, r27
/* 802DFC70 002DCBB0  3B A0 00 00 */	li r29, 0
.L_802DFC74:
/* 802DFC74 002DCBB4  38 60 00 1C */	li r3, 0x1c
/* 802DFC78 002DCBB8  4B D4 42 2D */	bl __nw__FUl
/* 802DFC7C 002DCBBC  28 03 00 00 */	cmplwi r3, 0
/* 802DFC80 002DCBC0  41 82 00 78 */	beq .L_802DFCF8
/* 802DFC84 002DCBC4  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802DFC88 002DCBC8  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802DFC8C 002DCBCC  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802DFC90 002DCBD0  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802DFC94 002DCBD4  90 03 00 00 */	stw r0, 0(r3)
/* 802DFC98 002DCBD8  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802DFC9C 002DCBDC  3C A0 80 4E */	lis r5, __vt__Q23efx23TChasePosPosLocalYScale@ha
/* 802DFCA0 002DCBE0  3C 80 80 4D */	lis r4, __vt__Q23efx14TOootaStartLeg@ha
/* 802DFCA4 002DCBE4  90 03 00 04 */	stw r0, 4(r3)
/* 802DFCA8 002DCBE8  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802DFCAC 002DCBEC  39 00 00 00 */	li r8, 0
/* 802DFCB0 002DCBF0  38 E0 02 B2 */	li r7, 0x2b2
/* 802DFCB4 002DCBF4  90 03 00 00 */	stw r0, 0(r3)
/* 802DFCB8 002DCBF8  38 C5 67 78 */	addi r6, r5, __vt__Q23efx23TChasePosPosLocalYScale@l
/* 802DFCBC 002DCBFC  C0 02 E9 88 */	lfs f0, lbl_8051CCE8@sda21(r2)
/* 802DFCC0 002DCC00  38 A0 02 6A */	li r5, 0x26a
/* 802DFCC4 002DCC04  92 43 00 04 */	stw r18, 4(r3)
/* 802DFCC8 002DCC08  38 04 34 CC */	addi r0, r4, __vt__Q23efx14TOootaStartLeg@l
/* 802DFCCC 002DCC0C  91 03 00 08 */	stw r8, 8(r3)
/* 802DFCD0 002DCC10  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802DFCD4 002DCC14  99 03 00 0E */	stb r8, 0xe(r3)
/* 802DFCD8 002DCC18  90 C3 00 00 */	stw r6, 0(r3)
/* 802DFCDC 002DCC1C  92 A3 00 04 */	stw r21, 4(r3)
/* 802DFCE0 002DCC20  91 03 00 10 */	stw r8, 0x10(r3)
/* 802DFCE4 002DCC24  91 03 00 14 */	stw r8, 0x14(r3)
/* 802DFCE8 002DCC28  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 802DFCEC 002DCC2C  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802DFCF0 002DCC30  90 03 00 00 */	stw r0, 0(r3)
/* 802DFCF4 002DCC34  92 83 00 04 */	stw r20, 4(r3)
.L_802DFCF8:
/* 802DFCF8 002DCC38  3B BD 00 01 */	addi r29, r29, 1
/* 802DFCFC 002DCC3C  90 7E 04 C4 */	stw r3, 0x4c4(r30)
/* 802DFD00 002DCC40  2C 1D 00 03 */	cmpwi r29, 3
/* 802DFD04 002DCC44  3B DE 00 04 */	addi r30, r30, 4
/* 802DFD08 002DCC48  41 80 FF 6C */	blt .L_802DFC74
/* 802DFD0C 002DCC4C  39 E0 00 00 */	li r15, 0
/* 802DFD10 002DCC50  7F 5D D3 78 */	mr r29, r26
.L_802DFD14:
/* 802DFD14 002DCC54  38 60 00 58 */	li r3, 0x58
/* 802DFD18 002DCC58  4B D4 41 8D */	bl __nw__FUl
/* 802DFD1C 002DCC5C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802DFD20 002DCC60  41 82 00 2C */	beq .L_802DFD4C
/* 802DFD24 002DCC64  C0 22 E9 88 */	lfs f1, lbl_8051CCE8@sda21(r2)
/* 802DFD28 002DCC68  38 80 00 00 */	li r4, 0
/* 802DFD2C 002DCC6C  38 A0 00 00 */	li r5, 0
/* 802DFD30 002DCC70  38 C0 02 66 */	li r6, 0x266
/* 802DFD34 002DCC74  38 E0 02 67 */	li r7, 0x267
/* 802DFD38 002DCC78  39 00 02 7E */	li r8, 0x27e
/* 802DFD3C 002DCC7C  48 0D 0E 91 */	bl "__ct__Q23efx24TChasePosPosLocalYScale3FP10Vector3<f>P10Vector3<f>fUsUsUs"
/* 802DFD40 002DCC80  3C 60 80 4D */	lis r3, __vt__Q23efx13TOootaDeadLeg@ha
/* 802DFD44 002DCC84  38 03 34 B0 */	addi r0, r3, __vt__Q23efx13TOootaDeadLeg@l
/* 802DFD48 002DCC88  90 1E 00 00 */	stw r0, 0(r30)
.L_802DFD4C:
/* 802DFD4C 002DCC8C  93 DD 04 F4 */	stw r30, 0x4f4(r29)
/* 802DFD50 002DCC90  38 60 00 1C */	li r3, 0x1c
/* 802DFD54 002DCC94  4B D4 41 51 */	bl __nw__FUl
/* 802DFD58 002DCC98  28 03 00 00 */	cmplwi r3, 0
/* 802DFD5C 002DCC9C  41 82 00 78 */	beq .L_802DFDD4
/* 802DFD60 002DCCA0  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802DFD64 002DCCA4  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802DFD68 002DCCA8  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802DFD6C 002DCCAC  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802DFD70 002DCCB0  90 03 00 00 */	stw r0, 0(r3)
/* 802DFD74 002DCCB4  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802DFD78 002DCCB8  3C A0 80 4E */	lis r5, __vt__Q23efx23TChasePosPosLocalYScale@ha
/* 802DFD7C 002DCCBC  3C 80 80 4D */	lis r4, __vt__Q23efx15TOootaChangeLeg@ha
/* 802DFD80 002DCCC0  90 03 00 04 */	stw r0, 4(r3)
/* 802DFD84 002DCCC4  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802DFD88 002DCCC8  39 00 00 00 */	li r8, 0
/* 802DFD8C 002DCCCC  38 E0 02 B2 */	li r7, 0x2b2
/* 802DFD90 002DCCD0  90 03 00 00 */	stw r0, 0(r3)
/* 802DFD94 002DCCD4  38 C5 67 78 */	addi r6, r5, __vt__Q23efx23TChasePosPosLocalYScale@l
/* 802DFD98 002DCCD8  C0 02 E9 88 */	lfs f0, lbl_8051CCE8@sda21(r2)
/* 802DFD9C 002DCCDC  38 A0 02 78 */	li r5, 0x278
/* 802DFDA0 002DCCE0  92 43 00 04 */	stw r18, 4(r3)
/* 802DFDA4 002DCCE4  38 04 34 64 */	addi r0, r4, __vt__Q23efx15TOootaChangeLeg@l
/* 802DFDA8 002DCCE8  91 03 00 08 */	stw r8, 8(r3)
/* 802DFDAC 002DCCEC  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802DFDB0 002DCCF0  99 03 00 0E */	stb r8, 0xe(r3)
/* 802DFDB4 002DCCF4  90 C3 00 00 */	stw r6, 0(r3)
/* 802DFDB8 002DCCF8  92 A3 00 04 */	stw r21, 4(r3)
/* 802DFDBC 002DCCFC  91 03 00 10 */	stw r8, 0x10(r3)
/* 802DFDC0 002DCD00  91 03 00 14 */	stw r8, 0x14(r3)
/* 802DFDC4 002DCD04  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 802DFDC8 002DCD08  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802DFDCC 002DCD0C  90 03 00 00 */	stw r0, 0(r3)
/* 802DFDD0 002DCD10  92 63 00 04 */	stw r19, 4(r3)
.L_802DFDD4:
/* 802DFDD4 002DCD14  39 EF 00 01 */	addi r15, r15, 1
/* 802DFDD8 002DCD18  90 7D 05 3C */	stw r3, 0x53c(r29)
/* 802DFDDC 002DCD1C  2C 0F 00 04 */	cmpwi r15, 4
/* 802DFDE0 002DCD20  3B BD 00 04 */	addi r29, r29, 4
/* 802DFDE4 002DCD24  41 80 FF 30 */	blt .L_802DFD14
/* 802DFDE8 002DCD28  3A 10 00 01 */	addi r16, r16, 1
/* 802DFDEC 002DCD2C  3B 7B 00 0C */	addi r27, r27, 0xc
/* 802DFDF0 002DCD30  2C 10 00 04 */	cmpwi r16, 4
/* 802DFDF4 002DCD34  3B 5A 00 10 */	addi r26, r26, 0x10
/* 802DFDF8 002DCD38  3B 9C 00 04 */	addi r28, r28, 4
/* 802DFDFC 002DCD3C  41 80 FC CC */	blt .L_802DFAC8
/* 802DFE00 002DCD40  38 60 00 14 */	li r3, 0x14
/* 802DFE04 002DCD44  4B D4 40 A1 */	bl __nw__FUl
/* 802DFE08 002DCD48  28 03 00 00 */	cmplwi r3, 0
/* 802DFE0C 002DCD4C  41 82 00 74 */	beq .L_802DFE80
/* 802DFE10 002DCD50  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802DFE14 002DCD54  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802DFE18 002DCD58  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802DFE1C 002DCD5C  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802DFE20 002DCD60  90 03 00 00 */	stw r0, 0(r3)
/* 802DFE24 002DCD64  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802DFE28 002DCD68  3C A0 80 4E */	lis r5, __vt__Q23efx9TChaseMtx@ha
/* 802DFE2C 002DCD6C  3C 80 80 4D */	lis r4, __vt__Q23efx15TOootaStartBody@ha
/* 802DFE30 002DCD70  90 03 00 04 */	stw r0, 4(r3)
/* 802DFE34 002DCD74  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802DFE38 002DCD78  38 E5 68 A8 */	addi r7, r5, __vt__Q23efx9TChaseMtx@l
/* 802DFE3C 002DCD7C  38 84 34 18 */	addi r4, r4, __vt__Q23efx15TOootaStartBody@l
/* 802DFE40 002DCD80  90 03 00 00 */	stw r0, 0(r3)
/* 802DFE44 002DCD84  39 20 00 00 */	li r9, 0
/* 802DFE48 002DCD88  39 00 02 B2 */	li r8, 0x2b2
/* 802DFE4C 002DCD8C  38 C7 00 14 */	addi r6, r7, 0x14
/* 802DFE50 002DCD90  92 43 00 04 */	stw r18, 4(r3)
/* 802DFE54 002DCD94  38 A0 02 69 */	li r5, 0x269
/* 802DFE58 002DCD98  38 04 00 14 */	addi r0, r4, 0x14
/* 802DFE5C 002DCD9C  91 23 00 08 */	stw r9, 8(r3)
/* 802DFE60 002DCDA0  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802DFE64 002DCDA4  99 23 00 0E */	stb r9, 0xe(r3)
/* 802DFE68 002DCDA8  90 E3 00 00 */	stw r7, 0(r3)
/* 802DFE6C 002DCDAC  90 C3 00 04 */	stw r6, 4(r3)
/* 802DFE70 002DCDB0  91 23 00 10 */	stw r9, 0x10(r3)
/* 802DFE74 002DCDB4  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802DFE78 002DCDB8  90 83 00 00 */	stw r4, 0(r3)
/* 802DFE7C 002DCDBC  90 03 00 04 */	stw r0, 4(r3)
.L_802DFE80:
/* 802DFE80 002DCDC0  90 7F 04 B0 */	stw r3, 0x4b0(r31)
/* 802DFE84 002DCDC4  38 60 00 40 */	li r3, 0x40
/* 802DFE88 002DCDC8  4B D4 40 1D */	bl __nw__FUl
/* 802DFE8C 002DCDCC  7C 6F 1B 79 */	or. r15, r3, r3
/* 802DFE90 002DCDD0  41 82 00 24 */	beq .L_802DFEB4
/* 802DFE94 002DCDD4  38 80 00 00 */	li r4, 0
/* 802DFE98 002DCDD8  38 A0 02 64 */	li r5, 0x264
/* 802DFE9C 002DCDDC  38 C0 02 65 */	li r6, 0x265
/* 802DFEA0 002DCDE0  38 E0 02 7D */	li r7, 0x27d
/* 802DFEA4 002DCDE4  48 0D 07 09 */	bl __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs
/* 802DFEA8 002DCDE8  3C 60 80 4D */	lis r3, __vt__Q23efx14TOootaDeadBody@ha
/* 802DFEAC 002DCDEC  38 03 33 FC */	addi r0, r3, __vt__Q23efx14TOootaDeadBody@l
/* 802DFEB0 002DCDF0  90 0F 00 00 */	stw r0, 0(r15)
.L_802DFEB4:
/* 802DFEB4 002DCDF4  91 FF 05 34 */	stw r15, 0x534(r31)
/* 802DFEB8 002DCDF8  38 60 00 14 */	li r3, 0x14
/* 802DFEBC 002DCDFC  4B D4 3F E9 */	bl __nw__FUl
/* 802DFEC0 002DCE00  28 03 00 00 */	cmplwi r3, 0
/* 802DFEC4 002DCE04  41 82 00 74 */	beq .L_802DFF38
/* 802DFEC8 002DCE08  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802DFECC 002DCE0C  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802DFED0 002DCE10  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802DFED4 002DCE14  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802DFED8 002DCE18  90 03 00 00 */	stw r0, 0(r3)
/* 802DFEDC 002DCE1C  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802DFEE0 002DCE20  3C A0 80 4E */	lis r5, __vt__Q23efx9TChaseMtx@ha
/* 802DFEE4 002DCE24  3C 80 80 4D */	lis r4, __vt__Q23efx13TOootaDeadAwa@ha
/* 802DFEE8 002DCE28  90 03 00 04 */	stw r0, 4(r3)
/* 802DFEEC 002DCE2C  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802DFEF0 002DCE30  38 E5 68 A8 */	addi r7, r5, __vt__Q23efx9TChaseMtx@l
/* 802DFEF4 002DCE34  38 84 33 B0 */	addi r4, r4, __vt__Q23efx13TOootaDeadAwa@l
/* 802DFEF8 002DCE38  90 03 00 00 */	stw r0, 0(r3)
/* 802DFEFC 002DCE3C  39 20 00 00 */	li r9, 0
/* 802DFF00 002DCE40  39 00 02 B2 */	li r8, 0x2b2
/* 802DFF04 002DCE44  38 C7 00 14 */	addi r6, r7, 0x14
/* 802DFF08 002DCE48  92 43 00 04 */	stw r18, 4(r3)
/* 802DFF0C 002DCE4C  38 A0 02 63 */	li r5, 0x263
/* 802DFF10 002DCE50  38 04 00 14 */	addi r0, r4, 0x14
/* 802DFF14 002DCE54  91 23 00 08 */	stw r9, 8(r3)
/* 802DFF18 002DCE58  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802DFF1C 002DCE5C  99 23 00 0E */	stb r9, 0xe(r3)
/* 802DFF20 002DCE60  90 E3 00 00 */	stw r7, 0(r3)
/* 802DFF24 002DCE64  90 C3 00 04 */	stw r6, 4(r3)
/* 802DFF28 002DCE68  91 23 00 10 */	stw r9, 0x10(r3)
/* 802DFF2C 002DCE6C  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802DFF30 002DCE70  90 83 00 00 */	stw r4, 0(r3)
/* 802DFF34 002DCE74  90 03 00 04 */	stw r0, 4(r3)
.L_802DFF38:
/* 802DFF38 002DCE78  90 7F 05 38 */	stw r3, 0x538(r31)
/* 802DFF3C 002DCE7C  38 60 00 14 */	li r3, 0x14
/* 802DFF40 002DCE80  4B D4 3F 65 */	bl __nw__FUl
/* 802DFF44 002DCE84  28 03 00 00 */	cmplwi r3, 0
/* 802DFF48 002DCE88  41 82 00 74 */	beq .L_802DFFBC
/* 802DFF4C 002DCE8C  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802DFF50 002DCE90  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802DFF54 002DCE94  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802DFF58 002DCE98  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802DFF5C 002DCE9C  90 03 00 00 */	stw r0, 0(r3)
/* 802DFF60 002DCEA0  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802DFF64 002DCEA4  3C A0 80 4E */	lis r5, __vt__Q23efx9TChaseMtx@ha
/* 802DFF68 002DCEA8  3C 80 80 4D */	lis r4, __vt__Q23efx16TOootaChangeBody@ha
/* 802DFF6C 002DCEAC  90 03 00 04 */	stw r0, 4(r3)
/* 802DFF70 002DCEB0  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802DFF74 002DCEB4  38 E5 68 A8 */	addi r7, r5, __vt__Q23efx9TChaseMtx@l
/* 802DFF78 002DCEB8  38 84 33 64 */	addi r4, r4, __vt__Q23efx16TOootaChangeBody@l
/* 802DFF7C 002DCEBC  90 03 00 00 */	stw r0, 0(r3)
/* 802DFF80 002DCEC0  39 20 00 00 */	li r9, 0
/* 802DFF84 002DCEC4  39 00 02 B2 */	li r8, 0x2b2
/* 802DFF88 002DCEC8  38 C7 00 14 */	addi r6, r7, 0x14
/* 802DFF8C 002DCECC  92 43 00 04 */	stw r18, 4(r3)
/* 802DFF90 002DCED0  38 A0 02 77 */	li r5, 0x277
/* 802DFF94 002DCED4  38 04 00 14 */	addi r0, r4, 0x14
/* 802DFF98 002DCED8  91 23 00 08 */	stw r9, 8(r3)
/* 802DFF9C 002DCEDC  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802DFFA0 002DCEE0  99 23 00 0E */	stb r9, 0xe(r3)
/* 802DFFA4 002DCEE4  90 E3 00 00 */	stw r7, 0(r3)
/* 802DFFA8 002DCEE8  90 C3 00 04 */	stw r6, 4(r3)
/* 802DFFAC 002DCEEC  91 23 00 10 */	stw r9, 0x10(r3)
/* 802DFFB0 002DCEF0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802DFFB4 002DCEF4  90 83 00 00 */	stw r4, 0(r3)
/* 802DFFB8 002DCEF8  90 03 00 04 */	stw r0, 4(r3)
.L_802DFFBC:
/* 802DFFBC 002DCEFC  90 7F 05 7C */	stw r3, 0x57c(r31)
/* 802DFFC0 002DCF00  38 60 00 14 */	li r3, 0x14
/* 802DFFC4 002DCF04  4B D4 3E E1 */	bl __nw__FUl
/* 802DFFC8 002DCF08  28 03 00 00 */	cmplwi r3, 0
/* 802DFFCC 002DCF0C  41 82 00 70 */	beq .L_802E003C
/* 802DFFD0 002DCF10  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802DFFD4 002DCF14  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802DFFD8 002DCF18  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802DFFDC 002DCF1C  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802DFFE0 002DCF20  90 03 00 00 */	stw r0, 0(r3)
/* 802DFFE4 002DCF24  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802DFFE8 002DCF28  3C A0 80 4E */	lis r5, __vt__Q23efx9TChasePos@ha
/* 802DFFEC 002DCF2C  3C 80 80 4D */	lis r4, __vt__Q23efx14TOootaParticle@ha
/* 802DFFF0 002DCF30  90 03 00 04 */	stw r0, 4(r3)
/* 802DFFF4 002DCF34  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802DFFF8 002DCF38  38 84 33 18 */	addi r4, r4, __vt__Q23efx14TOootaParticle@l
/* 802DFFFC 002DCF3C  39 00 00 00 */	li r8, 0
/* 802E0000 002DCF40  90 03 00 00 */	stw r0, 0(r3)
/* 802E0004 002DCF44  38 E0 02 B2 */	li r7, 0x2b2
/* 802E0008 002DCF48  38 C5 69 40 */	addi r6, r5, __vt__Q23efx9TChasePos@l
/* 802E000C 002DCF4C  38 A0 02 80 */	li r5, 0x280
/* 802E0010 002DCF50  92 43 00 04 */	stw r18, 4(r3)
/* 802E0014 002DCF54  38 04 00 14 */	addi r0, r4, 0x14
/* 802E0018 002DCF58  91 03 00 08 */	stw r8, 8(r3)
/* 802E001C 002DCF5C  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802E0020 002DCF60  99 03 00 0E */	stb r8, 0xe(r3)
/* 802E0024 002DCF64  90 C3 00 00 */	stw r6, 0(r3)
/* 802E0028 002DCF68  92 23 00 04 */	stw r17, 4(r3)
/* 802E002C 002DCF6C  91 03 00 10 */	stw r8, 0x10(r3)
/* 802E0030 002DCF70  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802E0034 002DCF74  90 83 00 00 */	stw r4, 0(r3)
/* 802E0038 002DCF78  90 03 00 04 */	stw r0, 4(r3)
.L_802E003C:
/* 802E003C 002DCF7C  90 7F 05 80 */	stw r3, 0x580(r31)
/* 802E0040 002DCF80  B9 E1 00 0C */	lmw r15, 0xc(r1)
/* 802E0044 002DCF84  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802E0048 002DCF88  7C 08 03 A6 */	mtlr r0
/* 802E004C 002DCF8C  38 21 00 50 */	addi r1, r1, 0x50
/* 802E0050 002DCF90  4E 80 00 20 */	blr 

.global __dt__Q23efx23TChasePosPosLocalYScaleFv
__dt__Q23efx23TChasePosPosLocalYScaleFv:
/* 802E0054 002DCF94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E0058 002DCF98  7C 08 02 A6 */	mflr r0
/* 802E005C 002DCF9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0060 002DCFA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E0064 002DCFA4  7C 9F 23 78 */	mr r31, r4
/* 802E0068 002DCFA8  93 C1 00 08 */	stw r30, 8(r1)
/* 802E006C 002DCFAC  7C 7E 1B 79 */	or. r30, r3, r3
/* 802E0070 002DCFB0  41 82 00 4C */	beq .L_802E00BC
/* 802E0074 002DCFB4  3C 60 80 4E */	lis r3, __vt__Q23efx23TChasePosPosLocalYScale@ha
/* 802E0078 002DCFB8  38 63 67 78 */	addi r3, r3, __vt__Q23efx23TChasePosPosLocalYScale@l
/* 802E007C 002DCFBC  90 7E 00 00 */	stw r3, 0(r30)
/* 802E0080 002DCFC0  38 03 00 14 */	addi r0, r3, 0x14
/* 802E0084 002DCFC4  90 1E 00 04 */	stw r0, 4(r30)
/* 802E0088 002DCFC8  41 82 00 24 */	beq .L_802E00AC
/* 802E008C 002DCFCC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802E0090 002DCFD0  38 7E 00 04 */	addi r3, r30, 4
/* 802E0094 002DCFD4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802E0098 002DCFD8  38 80 00 00 */	li r4, 0
/* 802E009C 002DCFDC  90 BE 00 00 */	stw r5, 0(r30)
/* 802E00A0 002DCFE0  38 05 00 14 */	addi r0, r5, 0x14
/* 802E00A4 002DCFE4  90 1E 00 04 */	stw r0, 4(r30)
/* 802E00A8 002DCFE8  4B DA FB F5 */	bl __dt__18JPAEmitterCallBackFv
.L_802E00AC:
/* 802E00AC 002DCFEC  7F E0 07 35 */	extsh. r0, r31
/* 802E00B0 002DCFF0  40 81 00 0C */	ble .L_802E00BC
/* 802E00B4 002DCFF4  7F C3 F3 78 */	mr r3, r30
/* 802E00B8 002DCFF8  4B D4 3F FD */	bl __dl__FPv
.L_802E00BC:
/* 802E00BC 002DCFFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E00C0 002DD000  7F C3 F3 78 */	mr r3, r30
/* 802E00C4 002DD004  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E00C8 002DD008  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E00CC 002DD00C  7C 08 03 A6 */	mtlr r0
/* 802E00D0 002DD010  38 21 00 10 */	addi r1, r1, 0x10
/* 802E00D4 002DD014  4E 80 00 20 */	blr 

.global setupEffect__Q34Game11BigTreasure3ObjFv
setupEffect__Q34Game11BigTreasure3ObjFv:
/* 802E00D8 002DD018  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802E00DC 002DD01C  7C 08 02 A6 */	mflr r0
/* 802E00E0 002DD020  90 01 00 44 */	stw r0, 0x44(r1)
/* 802E00E4 002DD024  BE 81 00 10 */	stmw r20, 0x10(r1)
/* 802E00E8 002DD028  7C 79 1B 78 */	mr r25, r3
/* 802E00EC 002DD02C  3C 60 80 49 */	lis r3, lbl_8048CA80@ha
/* 802E00F0 002DD030  3B 40 00 00 */	li r26, 0
/* 802E00F4 002DD034  7F 3E CB 78 */	mr r30, r25
/* 802E00F8 002DD038  7F 3D CB 78 */	mr r29, r25
/* 802E00FC 002DD03C  7F 3C CB 78 */	mr r28, r25
/* 802E0100 002DD040  7F 3B CB 78 */	mr r27, r25
/* 802E0104 002DD044  3B E3 CA 80 */	addi r31, r3, lbl_8048CA80@l
/* 802E0108 002DD048  3B 19 02 F8 */	addi r24, r25, 0x2f8
.L_802E010C:
/* 802E010C 002DD04C  80 7D 04 80 */	lwz r3, 0x480(r29)
/* 802E0110 002DD050  38 9E 03 28 */	addi r4, r30, 0x328
/* 802E0114 002DD054  48 0D 02 31 */	bl "setPosptr__Q23efx10TChasePos2FP10Vector3<f>"
/* 802E0118 002DD058  80 7D 04 90 */	lwz r3, 0x490(r29)
/* 802E011C 002DD05C  38 1E 03 28 */	addi r0, r30, 0x328
/* 802E0120 002DD060  38 BE 03 04 */	addi r5, r30, 0x304
/* 802E0124 002DD064  38 DE 03 10 */	addi r6, r30, 0x310
/* 802E0128 002DD068  90 03 00 10 */	stw r0, 0x10(r3)
/* 802E012C 002DD06C  38 1E 03 1C */	addi r0, r30, 0x31c
/* 802E0130 002DD070  7F 04 C3 78 */	mr r4, r24
/* 802E0134 002DD074  80 7C 04 C4 */	lwz r3, 0x4c4(r28)
/* 802E0138 002DD078  93 03 00 10 */	stw r24, 0x10(r3)
/* 802E013C 002DD07C  90 A3 00 14 */	stw r5, 0x14(r3)
/* 802E0140 002DD080  80 7C 04 C8 */	lwz r3, 0x4c8(r28)
/* 802E0144 002DD084  90 A3 00 10 */	stw r5, 0x10(r3)
/* 802E0148 002DD088  90 C3 00 14 */	stw r6, 0x14(r3)
/* 802E014C 002DD08C  80 7C 04 CC */	lwz r3, 0x4cc(r28)
/* 802E0150 002DD090  90 C3 00 10 */	stw r6, 0x10(r3)
/* 802E0154 002DD094  90 03 00 14 */	stw r0, 0x14(r3)
/* 802E0158 002DD098  80 7B 04 F4 */	lwz r3, 0x4f4(r27)
/* 802E015C 002DD09C  48 0D 0B 39 */	bl "setPosptr__Q23efx24TChasePosPosLocalYScale3FP10Vector3<f>P10Vector3<f>"
/* 802E0160 002DD0A0  80 7B 05 3C */	lwz r3, 0x53c(r27)
/* 802E0164 002DD0A4  38 1E 03 04 */	addi r0, r30, 0x304
/* 802E0168 002DD0A8  3A FE 00 0C */	addi r23, r30, 0xc
/* 802E016C 002DD0AC  3A DB 00 04 */	addi r22, r27, 4
/* 802E0170 002DD0B0  93 03 00 10 */	stw r24, 0x10(r3)
/* 802E0174 002DD0B4  3A 80 00 01 */	li r20, 1
/* 802E0178 002DD0B8  90 03 00 14 */	stw r0, 0x14(r3)
.L_802E017C:
/* 802E017C 002DD0BC  38 14 FF FF */	addi r0, r20, -1
/* 802E0180 002DD0C0  80 76 04 F4 */	lwz r3, 0x4f4(r22)
/* 802E0184 002DD0C4  1C 80 00 0C */	mulli r4, r0, 0xc
/* 802E0188 002DD0C8  38 B7 03 04 */	addi r5, r23, 0x304
/* 802E018C 002DD0CC  3A A4 03 04 */	addi r21, r4, 0x304
/* 802E0190 002DD0D0  7E BE AA 14 */	add r21, r30, r21
/* 802E0194 002DD0D4  7E A4 AB 78 */	mr r4, r21
/* 802E0198 002DD0D8  48 0D 0A FD */	bl "setPosptr__Q23efx24TChasePosPosLocalYScale3FP10Vector3<f>P10Vector3<f>"
/* 802E019C 002DD0DC  80 76 05 3C */	lwz r3, 0x53c(r22)
/* 802E01A0 002DD0E0  3A 94 00 01 */	addi r20, r20, 1
/* 802E01A4 002DD0E4  38 17 03 04 */	addi r0, r23, 0x304
/* 802E01A8 002DD0E8  3A F7 00 0C */	addi r23, r23, 0xc
/* 802E01AC 002DD0EC  92 A3 00 10 */	stw r21, 0x10(r3)
/* 802E01B0 002DD0F0  2C 14 00 04 */	cmpwi r20, 4
/* 802E01B4 002DD0F4  3A D6 00 04 */	addi r22, r22, 4
/* 802E01B8 002DD0F8  90 03 00 14 */	stw r0, 0x14(r3)
/* 802E01BC 002DD0FC  41 80 FF C0 */	blt .L_802E017C
/* 802E01C0 002DD100  3B 5A 00 01 */	addi r26, r26, 1
/* 802E01C4 002DD104  3B BD 00 04 */	addi r29, r29, 4
/* 802E01C8 002DD108  2C 1A 00 04 */	cmpwi r26, 4
/* 802E01CC 002DD10C  3B 9C 00 0C */	addi r28, r28, 0xc
/* 802E01D0 002DD110  3B 7B 00 10 */	addi r27, r27, 0x10
/* 802E01D4 002DD114  3B DE 00 30 */	addi r30, r30, 0x30
/* 802E01D8 002DD118  41 80 FF 34 */	blt .L_802E010C
/* 802E01DC 002DD11C  80 B9 03 C4 */	lwz r5, 0x3c4(r25)
/* 802E01E0 002DD120  28 05 00 00 */	cmplwi r5, 0
/* 802E01E4 002DD124  41 82 00 10 */	beq .L_802E01F4
/* 802E01E8 002DD128  80 79 04 A0 */	lwz r3, 0x4a0(r25)
/* 802E01EC 002DD12C  38 05 03 AC */	addi r0, r5, 0x3ac
/* 802E01F0 002DD130  90 03 00 10 */	stw r0, 0x10(r3)
.L_802E01F4:
/* 802E01F4 002DD134  80 B9 03 C8 */	lwz r5, 0x3c8(r25)
/* 802E01F8 002DD138  28 05 00 00 */	cmplwi r5, 0
/* 802E01FC 002DD13C  41 82 00 10 */	beq .L_802E020C
/* 802E0200 002DD140  80 79 04 A4 */	lwz r3, 0x4a4(r25)
/* 802E0204 002DD144  38 05 03 AC */	addi r0, r5, 0x3ac
/* 802E0208 002DD148  90 03 00 10 */	stw r0, 0x10(r3)
.L_802E020C:
/* 802E020C 002DD14C  38 99 00 08 */	addi r4, r25, 8
/* 802E0210 002DD150  80 B9 03 CC */	lwz r5, 0x3cc(r25)
/* 802E0214 002DD154  28 05 00 00 */	cmplwi r5, 0
/* 802E0218 002DD158  41 82 00 10 */	beq .L_802E0228
/* 802E021C 002DD15C  80 64 04 A0 */	lwz r3, 0x4a0(r4)
/* 802E0220 002DD160  38 05 03 AC */	addi r0, r5, 0x3ac
/* 802E0224 002DD164  90 03 00 10 */	stw r0, 0x10(r3)
.L_802E0228:
/* 802E0228 002DD168  80 A4 03 C8 */	lwz r5, 0x3c8(r4)
/* 802E022C 002DD16C  28 05 00 00 */	cmplwi r5, 0
/* 802E0230 002DD170  41 82 00 10 */	beq .L_802E0240
/* 802E0234 002DD174  80 64 04 A4 */	lwz r3, 0x4a4(r4)
/* 802E0238 002DD178  38 05 03 AC */	addi r0, r5, 0x3ac
/* 802E023C 002DD17C  90 03 00 10 */	stw r0, 0x10(r3)
.L_802E0240:
/* 802E0240 002DD180  80 79 01 74 */	lwz r3, 0x174(r25)
/* 802E0244 002DD184  38 82 E8 EC */	addi r4, r2, lbl_8051CC4C@sda21
/* 802E0248 002DD188  48 15 ED 9D */	bl getJoint__Q28SysShape5ModelFPc
/* 802E024C 002DD18C  48 14 96 55 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802E0250 002DD190  80 99 04 B0 */	lwz r4, 0x4b0(r25)
/* 802E0254 002DD194  7C 74 1B 78 */	mr r20, r3
/* 802E0258 002DD198  92 84 00 10 */	stw r20, 0x10(r4)
/* 802E025C 002DD19C  7E 84 A3 78 */	mr r4, r20
/* 802E0260 002DD1A0  80 79 05 34 */	lwz r3, 0x534(r25)
/* 802E0264 002DD1A4  48 0D 03 E9 */	bl setMtxptr__Q23efx10TChaseMtx3FPA4_f
/* 802E0268 002DD1A8  80 79 05 38 */	lwz r3, 0x538(r25)
/* 802E026C 002DD1AC  38 9F 01 30 */	addi r4, r31, 0x130
/* 802E0270 002DD1B0  92 83 00 10 */	stw r20, 0x10(r3)
/* 802E0274 002DD1B4  80 79 05 7C */	lwz r3, 0x57c(r25)
/* 802E0278 002DD1B8  92 83 00 10 */	stw r20, 0x10(r3)
/* 802E027C 002DD1BC  80 79 01 74 */	lwz r3, 0x174(r25)
/* 802E0280 002DD1C0  48 15 ED 65 */	bl getJoint__Q28SysShape5ModelFPc
/* 802E0284 002DD1C4  48 14 96 1D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802E0288 002DD1C8  80 B9 04 B4 */	lwz r5, 0x4b4(r25)
/* 802E028C 002DD1CC  38 9F 01 40 */	addi r4, r31, 0x140
/* 802E0290 002DD1D0  90 65 00 10 */	stw r3, 0x10(r5)
/* 802E0294 002DD1D4  80 79 01 74 */	lwz r3, 0x174(r25)
/* 802E0298 002DD1D8  48 15 ED 4D */	bl getJoint__Q28SysShape5ModelFPc
/* 802E029C 002DD1DC  48 14 96 05 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802E02A0 002DD1E0  80 B9 04 B8 */	lwz r5, 0x4b8(r25)
/* 802E02A4 002DD1E4  38 9F 01 50 */	addi r4, r31, 0x150
/* 802E02A8 002DD1E8  90 65 00 10 */	stw r3, 0x10(r5)
/* 802E02AC 002DD1EC  80 79 01 74 */	lwz r3, 0x174(r25)
/* 802E02B0 002DD1F0  48 15 ED 35 */	bl getJoint__Q28SysShape5ModelFPc
/* 802E02B4 002DD1F4  48 14 95 ED */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802E02B8 002DD1F8  80 B9 04 BC */	lwz r5, 0x4bc(r25)
/* 802E02BC 002DD1FC  38 9F 01 5C */	addi r4, r31, 0x15c
/* 802E02C0 002DD200  90 65 00 10 */	stw r3, 0x10(r5)
/* 802E02C4 002DD204  80 79 01 74 */	lwz r3, 0x174(r25)
/* 802E02C8 002DD208  48 15 ED 1D */	bl getJoint__Q28SysShape5ModelFPc
/* 802E02CC 002DD20C  48 14 95 D5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802E02D0 002DD210  80 99 04 C0 */	lwz r4, 0x4c0(r25)
/* 802E02D4 002DD214  38 19 01 98 */	addi r0, r25, 0x198
/* 802E02D8 002DD218  90 64 00 10 */	stw r3, 0x10(r4)
/* 802E02DC 002DD21C  80 79 05 80 */	lwz r3, 0x580(r25)
/* 802E02E0 002DD220  90 03 00 10 */	stw r0, 0x10(r3)
/* 802E02E4 002DD224  BA 81 00 10 */	lmw r20, 0x10(r1)
/* 802E02E8 002DD228  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802E02EC 002DD22C  7C 08 03 A6 */	mtlr r0
/* 802E02F0 002DD230  38 21 00 40 */	addi r1, r1, 0x40
/* 802E02F4 002DD234  4E 80 00 20 */	blr 

.global createOnGroundEffect__Q34Game11BigTreasure3ObjFiPQ24Game8WaterBox
createOnGroundEffect__Q34Game11BigTreasure3ObjFiPQ24Game8WaterBox:
/* 802E02F8 002DD238  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 802E02FC 002DD23C  7C 08 02 A6 */	mflr r0
/* 802E0300 002DD240  28 05 00 00 */	cmplwi r5, 0
/* 802E0304 002DD244  90 01 00 74 */	stw r0, 0x74(r1)
/* 802E0308 002DD248  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 802E030C 002DD24C  1F E4 00 30 */	mulli r31, r4, 0x30
/* 802E0310 002DD250  93 C1 00 68 */	stw r30, 0x68(r1)
/* 802E0314 002DD254  7C 7E 1B 78 */	mr r30, r3
/* 802E0318 002DD258  7C 7E FA 14 */	add r3, r30, r31
/* 802E031C 002DD25C  C0 43 03 28 */	lfs f2, 0x328(r3)
/* 802E0320 002DD260  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802E0324 002DD264  C0 23 03 2C */	lfs f1, 0x32c(r3)
/* 802E0328 002DD268  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802E032C 002DD26C  C0 03 03 30 */	lfs f0, 0x330(r3)
/* 802E0330 002DD270  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802E0334 002DD274  41 82 00 D0 */	beq .L_802E0404
/* 802E0338 002DD278  7C A3 2B 78 */	mr r3, r5
/* 802E033C 002DD27C  81 85 00 00 */	lwz r12, 0(r5)
/* 802E0340 002DD280  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E0344 002DD284  7D 89 03 A6 */	mtctr r12
/* 802E0348 002DD288  4E 80 04 21 */	bctrl 
/* 802E034C 002DD28C  C0 43 00 00 */	lfs f2, 0(r3)
/* 802E0350 002DD290  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802E0354 002DD294  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802E0358 002DD298  38 A0 00 00 */	li r5, 0
/* 802E035C 002DD29C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple3@ha
/* 802E0360 002DD2A0  90 01 00 44 */	stw r0, 0x44(r1)
/* 802E0364 002DD2A4  38 03 6A 50 */	addi r0, r3, __vt__Q23efx8TSimple3@l
/* 802E0368 002DD2A8  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 802E036C 002DD2AC  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802E0370 002DD2B0  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802E0374 002DD2B4  3C 60 80 4D */	lis r3, __vt__Q23efx10TDamaWalkw@ha
/* 802E0378 002DD2B8  39 00 00 28 */	li r8, 0x28
/* 802E037C 002DD2BC  39 24 A7 EC */	addi r9, r4, __vt__Q23efx3Arg@l
/* 802E0380 002DD2C0  38 E0 00 29 */	li r7, 0x29
/* 802E0384 002DD2C4  38 C0 00 2A */	li r6, 0x2a
/* 802E0388 002DD2C8  90 01 00 44 */	stw r0, 0x44(r1)
/* 802E038C 002DD2CC  38 03 D8 4C */	addi r0, r3, __vt__Q23efx10TDamaWalkw@l
/* 802E0390 002DD2D0  38 61 00 44 */	addi r3, r1, 0x44
/* 802E0394 002DD2D4  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 802E0398 002DD2D8  38 81 00 28 */	addi r4, r1, 0x28
/* 802E039C 002DD2DC  91 21 00 28 */	stw r9, 0x28(r1)
/* 802E03A0 002DD2E0  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 802E03A4 002DD2E4  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 802E03A8 002DD2E8  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802E03AC 002DD2EC  B1 01 00 48 */	sth r8, 0x48(r1)
/* 802E03B0 002DD2F0  B0 E1 00 4A */	sth r7, 0x4a(r1)
/* 802E03B4 002DD2F4  B0 C1 00 4C */	sth r6, 0x4c(r1)
/* 802E03B8 002DD2F8  90 A1 00 50 */	stw r5, 0x50(r1)
/* 802E03BC 002DD2FC  90 A1 00 54 */	stw r5, 0x54(r1)
/* 802E03C0 002DD300  90 A1 00 58 */	stw r5, 0x58(r1)
/* 802E03C4 002DD304  90 01 00 44 */	stw r0, 0x44(r1)
/* 802E03C8 002DD308  48 0C EC F5 */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 802E03CC 002DD30C  38 9F 03 28 */	addi r4, r31, 0x328
/* 802E03D0 002DD310  38 60 38 49 */	li r3, 0x3849
/* 802E03D4 002DD314  7C 9E 22 14 */	add r4, r30, r4
/* 802E03D8 002DD318  48 18 DC DD */	bl PSStartSoundVec__FUlP3Vec
/* 802E03DC 002DD31C  28 03 00 00 */	cmplwi r3, 0
/* 802E03E0 002DD320  41 82 00 88 */	beq .L_802E0468
/* 802E03E4 002DD324  81 83 00 10 */	lwz r12, 0x10(r3)
/* 802E03E8 002DD328  38 80 00 00 */	li r4, 0
/* 802E03EC 002DD32C  C0 22 E9 EC */	lfs f1, lbl_8051CD4C@sda21(r2)
/* 802E03F0 002DD330  38 A0 00 00 */	li r5, 0
/* 802E03F4 002DD334  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 802E03F8 002DD338  7D 89 03 A6 */	mtctr r12
/* 802E03FC 002DD33C  4E 80 04 21 */	bctrl 
/* 802E0400 002DD340  48 00 00 68 */	b .L_802E0468
.L_802E0404:
/* 802E0404 002DD344  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802E0408 002DD348  38 A0 00 00 */	li r5, 0
/* 802E040C 002DD34C  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802E0410 002DD350  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 802E0414 002DD354  90 01 00 08 */	stw r0, 8(r1)
/* 802E0418 002DD358  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 802E041C 002DD35C  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802E0420 002DD360  3C 60 80 4D */	lis r3, __vt__Q23efx10TOootaWalk@ha
/* 802E0424 002DD364  90 01 00 08 */	stw r0, 8(r1)
/* 802E0428 002DD368  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 802E042C 002DD36C  38 03 0F 00 */	addi r0, r3, __vt__Q23efx10TOootaWalk@l
/* 802E0430 002DD370  38 E0 01 15 */	li r7, 0x115
/* 802E0434 002DD374  38 C0 01 16 */	li r6, 0x116
/* 802E0438 002DD378  90 81 00 18 */	stw r4, 0x18(r1)
/* 802E043C 002DD37C  38 61 00 08 */	addi r3, r1, 8
/* 802E0440 002DD380  38 81 00 18 */	addi r4, r1, 0x18
/* 802E0444 002DD384  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 802E0448 002DD388  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 802E044C 002DD38C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802E0450 002DD390  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 802E0454 002DD394  B0 C1 00 0E */	sth r6, 0xe(r1)
/* 802E0458 002DD398  90 A1 00 10 */	stw r5, 0x10(r1)
/* 802E045C 002DD39C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802E0460 002DD3A0  90 01 00 08 */	stw r0, 8(r1)
/* 802E0464 002DD3A4  48 0C EB B1 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
.L_802E0468:
/* 802E0468 002DD3A8  38 9F 03 28 */	addi r4, r31, 0x328
/* 802E046C 002DD3AC  38 60 59 48 */	li r3, 0x5948
/* 802E0470 002DD3B0  7C 9E 22 14 */	add r4, r30, r4
/* 802E0474 002DD3B4  48 18 DC 41 */	bl PSStartSoundVec__FUlP3Vec
/* 802E0478 002DD3B8  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802E047C 002DD3BC  38 A1 00 38 */	addi r5, r1, 0x38
/* 802E0480 002DD3C0  38 80 00 06 */	li r4, 6
/* 802E0484 002DD3C4  38 C0 00 02 */	li r6, 2
/* 802E0488 002DD3C8  4B F7 1D B5 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802E048C 002DD3CC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802E0490 002DD3D0  38 A1 00 38 */	addi r5, r1, 0x38
/* 802E0494 002DD3D4  38 80 00 0E */	li r4, 0xe
/* 802E0498 002DD3D8  38 C0 00 02 */	li r6, 2
/* 802E049C 002DD3DC  4B F7 32 E5 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802E04A0 002DD3E0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802E04A4 002DD3E4  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 802E04A8 002DD3E8  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 802E04AC 002DD3EC  7C 08 03 A6 */	mtlr r0
/* 802E04B0 002DD3F0  38 21 00 70 */	addi r1, r1, 0x70
/* 802E04B4 002DD3F4  4E 80 00 20 */	blr 

.global createOffGroundEffect__Q34Game11BigTreasure3ObjFiPQ24Game8WaterBox
createOffGroundEffect__Q34Game11BigTreasure3ObjFiPQ24Game8WaterBox:
/* 802E04B8 002DD3F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E04BC 002DD3FC  7C 08 02 A6 */	mflr r0
/* 802E04C0 002DD400  28 05 00 00 */	cmplwi r5, 0
/* 802E04C4 002DD404  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E04C8 002DD408  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E04CC 002DD40C  7C 7F 1B 78 */	mr r31, r3
/* 802E04D0 002DD410  41 82 00 28 */	beq .L_802E04F8
/* 802E04D4 002DD414  54 80 10 3A */	slwi r0, r4, 2
/* 802E04D8 002DD418  38 80 00 00 */	li r4, 0
/* 802E04DC 002DD41C  7C 7F 02 14 */	add r3, r31, r0
/* 802E04E0 002DD420  80 63 04 90 */	lwz r3, 0x490(r3)
/* 802E04E4 002DD424  81 83 00 00 */	lwz r12, 0(r3)
/* 802E04E8 002DD428  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E04EC 002DD42C  7D 89 03 A6 */	mtctr r12
/* 802E04F0 002DD430  4E 80 04 21 */	bctrl 
/* 802E04F4 002DD434  48 00 00 24 */	b .L_802E0518
.L_802E04F8:
/* 802E04F8 002DD438  54 80 10 3A */	slwi r0, r4, 2
/* 802E04FC 002DD43C  38 80 00 00 */	li r4, 0
/* 802E0500 002DD440  7C 7F 02 14 */	add r3, r31, r0
/* 802E0504 002DD444  80 63 04 80 */	lwz r3, 0x480(r3)
/* 802E0508 002DD448  81 83 00 00 */	lwz r12, 0(r3)
/* 802E050C 002DD44C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E0510 002DD450  7D 89 03 A6 */	mtctr r12
/* 802E0514 002DD454  4E 80 04 21 */	bctrl 
.L_802E0518:
/* 802E0518 002DD458  7F E3 FB 78 */	mr r3, r31
/* 802E051C 002DD45C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E0520 002DD460  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802E0524 002DD464  7D 89 03 A6 */	mtctr r12
/* 802E0528 002DD468  4E 80 04 21 */	bctrl 
/* 802E052C 002DD46C  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0530 002DD470  38 80 59 49 */	li r4, 0x5949
/* 802E0534 002DD474  38 A0 00 00 */	li r5, 0
/* 802E0538 002DD478  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802E053C 002DD47C  7D 89 03 A6 */	mtctr r12
/* 802E0540 002DD480  4E 80 04 21 */	bctrl 
/* 802E0544 002DD484  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E0548 002DD488  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E054C 002DD48C  7C 08 03 A6 */	mtlr r0
/* 802E0550 002DD490  38 21 00 10 */	addi r1, r1, 0x10
/* 802E0554 002DD494  4E 80 00 20 */	blr 

.global startTreasurePinchSmoke__Q34Game11BigTreasure3ObjFi
startTreasurePinchSmoke__Q34Game11BigTreasure3ObjFi:
/* 802E0558 002DD498  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E055C 002DD49C  7C 08 02 A6 */	mflr r0
/* 802E0560 002DD4A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0564 002DD4A4  54 80 10 3A */	slwi r0, r4, 2
/* 802E0568 002DD4A8  7C 63 02 14 */	add r3, r3, r0
/* 802E056C 002DD4AC  38 80 00 00 */	li r4, 0
/* 802E0570 002DD4B0  80 63 04 A0 */	lwz r3, 0x4a0(r3)
/* 802E0574 002DD4B4  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0578 002DD4B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E057C 002DD4BC  7D 89 03 A6 */	mtctr r12
/* 802E0580 002DD4C0  4E 80 04 21 */	bctrl 
/* 802E0584 002DD4C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E0588 002DD4C8  7C 08 03 A6 */	mtlr r0
/* 802E058C 002DD4CC  38 21 00 10 */	addi r1, r1, 0x10
/* 802E0590 002DD4D0  4E 80 00 20 */	blr 

.global finishTreasurePinchSmoke__Q34Game11BigTreasure3ObjFi
finishTreasurePinchSmoke__Q34Game11BigTreasure3ObjFi:
/* 802E0594 002DD4D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E0598 002DD4D8  7C 08 02 A6 */	mflr r0
/* 802E059C 002DD4DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E05A0 002DD4E0  54 80 10 3A */	slwi r0, r4, 2
/* 802E05A4 002DD4E4  7C 63 02 14 */	add r3, r3, r0
/* 802E05A8 002DD4E8  80 63 04 A0 */	lwz r3, 0x4a0(r3)
/* 802E05AC 002DD4EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E05B0 002DD4F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E05B4 002DD4F4  7D 89 03 A6 */	mtctr r12
/* 802E05B8 002DD4F8  4E 80 04 21 */	bctrl 
/* 802E05BC 002DD4FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E05C0 002DD500  7C 08 03 A6 */	mtlr r0
/* 802E05C4 002DD504  38 21 00 10 */	addi r1, r1, 0x10
/* 802E05C8 002DD508  4E 80 00 20 */	blr 

.global createDropTreasureEffect__Q34Game11BigTreasure3ObjFi
createDropTreasureEffect__Q34Game11BigTreasure3ObjFi:
/* 802E05CC 002DD50C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802E05D0 002DD510  7C 08 02 A6 */	mflr r0
/* 802E05D4 002DD514  90 01 00 44 */	stw r0, 0x44(r1)
/* 802E05D8 002DD518  54 80 10 3A */	slwi r0, r4, 2
/* 802E05DC 002DD51C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802E05E0 002DD520  7C 7F 1B 78 */	mr r31, r3
/* 802E05E4 002DD524  7C 9F 02 14 */	add r4, r31, r0
/* 802E05E8 002DD528  38 61 00 08 */	addi r3, r1, 8
/* 802E05EC 002DD52C  80 84 03 C4 */	lwz r4, 0x3c4(r4)
/* 802E05F0 002DD530  81 84 00 00 */	lwz r12, 0(r4)
/* 802E05F4 002DD534  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E05F8 002DD538  7D 89 03 A6 */	mtctr r12
/* 802E05FC 002DD53C  4E 80 04 21 */	bctrl 
/* 802E0600 002DD540  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802E0604 002DD544  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 802E0608 002DD548  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802E060C 002DD54C  C0 41 00 08 */	lfs f2, 8(r1)
/* 802E0610 002DD550  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0614 002DD554  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 802E0618 002DD558  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802E061C 002DD55C  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802E0620 002DD560  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E0624 002DD564  3C 60 80 4D */	lis r3, __vt__Q23efx14TOootaPartsoff@ha
/* 802E0628 002DD568  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 802E062C 002DD56C  38 C0 02 68 */	li r6, 0x268
/* 802E0630 002DD570  38 A0 00 00 */	li r5, 0
/* 802E0634 002DD574  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0638 002DD578  38 03 32 CC */	addi r0, r3, __vt__Q23efx14TOootaPartsoff@l
/* 802E063C 002DD57C  38 61 00 14 */	addi r3, r1, 0x14
/* 802E0640 002DD580  90 81 00 20 */	stw r4, 0x20(r1)
/* 802E0644 002DD584  38 81 00 20 */	addi r4, r1, 0x20
/* 802E0648 002DD588  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 802E064C 002DD58C  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 802E0650 002DD590  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802E0654 002DD594  B0 C1 00 18 */	sth r6, 0x18(r1)
/* 802E0658 002DD598  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 802E065C 002DD59C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0660 002DD5A0  48 0C E9 25 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 802E0664 002DD5A4  7F E3 FB 78 */	mr r3, r31
/* 802E0668 002DD5A8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E066C 002DD5AC  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802E0670 002DD5B0  7D 89 03 A6 */	mtctr r12
/* 802E0674 002DD5B4  4E 80 04 21 */	bctrl 
/* 802E0678 002DD5B8  81 83 00 00 */	lwz r12, 0(r3)
/* 802E067C 002DD5BC  38 80 59 4F */	li r4, 0x594f
/* 802E0680 002DD5C0  38 A0 00 00 */	li r5, 0
/* 802E0684 002DD5C4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802E0688 002DD5C8  7D 89 03 A6 */	mtctr r12
/* 802E068C 002DD5CC  4E 80 04 21 */	bctrl 
/* 802E0690 002DD5D0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802E0694 002DD5D4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802E0698 002DD5D8  7C 08 03 A6 */	mtlr r0
/* 802E069C 002DD5DC  38 21 00 40 */	addi r1, r1, 0x40
/* 802E06A0 002DD5E0  4E 80 00 20 */	blr 

.global createAppearBodyEffect__Q34Game11BigTreasure3ObjFv
createAppearBodyEffect__Q34Game11BigTreasure3ObjFv:
/* 802E06A4 002DD5E4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802E06A8 002DD5E8  7C 08 02 A6 */	mflr r0
/* 802E06AC 002DD5EC  38 80 00 00 */	li r4, 0
/* 802E06B0 002DD5F0  90 01 00 44 */	stw r0, 0x44(r1)
/* 802E06B4 002DD5F4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802E06B8 002DD5F8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802E06BC 002DD5FC  93 A1 00 34 */	stw r29, 0x34(r1)
/* 802E06C0 002DD600  7C 7D 1B 78 */	mr r29, r3
/* 802E06C4 002DD604  80 63 04 B0 */	lwz r3, 0x4b0(r3)
/* 802E06C8 002DD608  81 83 00 00 */	lwz r12, 0(r3)
/* 802E06CC 002DD60C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E06D0 002DD610  7D 89 03 A6 */	mtctr r12
/* 802E06D4 002DD614  4E 80 04 21 */	bctrl 
/* 802E06D8 002DD618  3B C0 00 00 */	li r30, 0
/* 802E06DC 002DD61C  7F BF EB 78 */	mr r31, r29
.L_802E06E0:
/* 802E06E0 002DD620  80 1F 03 C4 */	lwz r0, 0x3c4(r31)
/* 802E06E4 002DD624  28 00 00 00 */	cmplwi r0, 0
/* 802E06E8 002DD628  41 82 00 1C */	beq .L_802E0704
/* 802E06EC 002DD62C  80 7F 04 B4 */	lwz r3, 0x4b4(r31)
/* 802E06F0 002DD630  38 80 00 00 */	li r4, 0
/* 802E06F4 002DD634  81 83 00 00 */	lwz r12, 0(r3)
/* 802E06F8 002DD638  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E06FC 002DD63C  7D 89 03 A6 */	mtctr r12
/* 802E0700 002DD640  4E 80 04 21 */	bctrl 
.L_802E0704:
/* 802E0704 002DD644  3B DE 00 01 */	addi r30, r30, 1
/* 802E0708 002DD648  3B FF 00 04 */	addi r31, r31, 4
/* 802E070C 002DD64C  2C 1E 00 04 */	cmpwi r30, 4
/* 802E0710 002DD650  41 80 FF D0 */	blt .L_802E06E0
/* 802E0714 002DD654  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 802E0718 002DD658  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802E071C 002DD65C  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 802E0720 002DD660  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 802E0724 002DD664  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0728 002DD668  3C 60 80 4D */	lis r3, __vt__Q23efx16TOootaStartSmoke@ha
/* 802E072C 002DD66C  39 05 A7 F8 */	addi r8, r5, __vt__Q23efx5TBase@l
/* 802E0730 002DD670  38 E4 6A 78 */	addi r7, r4, __vt__Q23efx8TSimple1@l
/* 802E0734 002DD674  C0 1D 01 8C */	lfs f0, 0x18c(r29)
/* 802E0738 002DD678  38 03 32 B8 */	addi r0, r3, __vt__Q23efx16TOootaStartSmoke@l
/* 802E073C 002DD67C  38 C0 02 6C */	li r6, 0x26c
/* 802E0740 002DD680  38 A0 00 00 */	li r5, 0
/* 802E0744 002DD684  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802E0748 002DD688  38 61 00 08 */	addi r3, r1, 8
/* 802E074C 002DD68C  38 81 00 14 */	addi r4, r1, 0x14
/* 802E0750 002DD690  C0 1D 01 90 */	lfs f0, 0x190(r29)
/* 802E0754 002DD694  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802E0758 002DD698  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 802E075C 002DD69C  91 01 00 08 */	stw r8, 8(r1)
/* 802E0760 002DD6A0  90 E1 00 08 */	stw r7, 8(r1)
/* 802E0764 002DD6A4  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802E0768 002DD6A8  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 802E076C 002DD6AC  90 A1 00 10 */	stw r5, 0x10(r1)
/* 802E0770 002DD6B0  90 01 00 08 */	stw r0, 8(r1)
/* 802E0774 002DD6B4  48 0C E8 11 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 802E0778 002DD6B8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802E077C 002DD6BC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802E0780 002DD6C0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802E0784 002DD6C4  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 802E0788 002DD6C8  7C 08 03 A6 */	mtlr r0
/* 802E078C 002DD6CC  38 21 00 40 */	addi r1, r1, 0x40
/* 802E0790 002DD6D0  4E 80 00 20 */	blr 

.global createAppearLegEffect__Q34Game11BigTreasure3ObjFi
createAppearLegEffect__Q34Game11BigTreasure3ObjFi:
/* 802E0794 002DD6D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E0798 002DD6D8  7C 08 02 A6 */	mflr r0
/* 802E079C 002DD6DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E07A0 002DD6E0  1C 04 00 0C */	mulli r0, r4, 0xc
/* 802E07A4 002DD6E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E07A8 002DD6E8  7F E3 02 14 */	add r31, r3, r0
/* 802E07AC 002DD6EC  93 C1 00 08 */	stw r30, 8(r1)
/* 802E07B0 002DD6F0  3B C0 00 00 */	li r30, 0
.L_802E07B4:
/* 802E07B4 002DD6F4  80 7F 04 C4 */	lwz r3, 0x4c4(r31)
/* 802E07B8 002DD6F8  38 80 00 00 */	li r4, 0
/* 802E07BC 002DD6FC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E07C0 002DD700  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E07C4 002DD704  7D 89 03 A6 */	mtctr r12
/* 802E07C8 002DD708  4E 80 04 21 */	bctrl 
/* 802E07CC 002DD70C  3B DE 00 01 */	addi r30, r30, 1
/* 802E07D0 002DD710  3B FF 00 04 */	addi r31, r31, 4
/* 802E07D4 002DD714  2C 1E 00 03 */	cmpwi r30, 3
/* 802E07D8 002DD718  41 80 FF DC */	blt .L_802E07B4
/* 802E07DC 002DD71C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E07E0 002DD720  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E07E4 002DD724  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E07E8 002DD728  7C 08 03 A6 */	mtlr r0
/* 802E07EC 002DD72C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E07F0 002DD730  4E 80 00 20 */	blr 

.global createDeadBombLegEffect__Q34Game11BigTreasure3ObjFi
createDeadBombLegEffect__Q34Game11BigTreasure3ObjFi:
/* 802E07F4 002DD734  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 802E07F8 002DD738  7C 08 02 A6 */	mflr r0
/* 802E07FC 002DD73C  2C 04 00 00 */	cmpwi r4, 0
/* 802E0800 002DD740  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 802E0804 002DD744  BE E1 00 AC */	stmw r23, 0xac(r1)
/* 802E0808 002DD748  7C 7D 1B 78 */	mr r29, r3
/* 802E080C 002DD74C  40 82 00 FC */	bne .L_802E0908
/* 802E0810 002DD750  1C 04 00 0C */	mulli r0, r4, 0xc
/* 802E0814 002DD754  3D 00 80 51 */	lis r8, "zero__10Vector3<f>"@ha
/* 802E0818 002DD758  3C E0 80 4B */	lis r7, __vt__Q23efx3Arg@ha
/* 802E081C 002DD75C  3C C0 80 4D */	lis r6, __vt__Q23efx9ArgPosPos@ha
/* 802E0820 002DD760  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802E0824 002DD764  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 802E0828 002DD768  3C 60 80 4F */	lis r3, __vt__Q23efx13TOootaBombLeg@ha
/* 802E082C 002DD76C  7F DD 02 14 */	add r30, r29, r0
/* 802E0830 002DD770  3B E8 41 E4 */	addi r31, r8, "zero__10Vector3<f>"@l
/* 802E0834 002DD774  3B 07 A7 EC */	addi r24, r7, __vt__Q23efx3Arg@l
/* 802E0838 002DD778  3B 86 0E A4 */	addi r28, r6, __vt__Q23efx9ArgPosPos@l
/* 802E083C 002DD77C  3B 65 A7 F8 */	addi r27, r5, __vt__Q23efx5TBase@l
/* 802E0840 002DD780  3B 44 6A 78 */	addi r26, r4, __vt__Q23efx8TSimple1@l
/* 802E0844 002DD784  3B 23 A1 38 */	addi r25, r3, __vt__Q23efx13TOootaBombLeg@l
/* 802E0848 002DD788  3A E0 00 00 */	li r23, 0
.L_802E084C:
/* 802E084C 002DD78C  81 7E 03 04 */	lwz r11, 0x304(r30)
/* 802E0850 002DD790  38 A0 02 62 */	li r5, 0x262
/* 802E0854 002DD794  81 5E 03 08 */	lwz r10, 0x308(r30)
/* 802E0858 002DD798  38 00 00 00 */	li r0, 0
/* 802E085C 002DD79C  81 3E 03 0C */	lwz r9, 0x30c(r30)
/* 802E0860 002DD7A0  38 61 00 44 */	addi r3, r1, 0x44
/* 802E0864 002DD7A4  81 1D 02 F8 */	lwz r8, 0x2f8(r29)
/* 802E0868 002DD7A8  38 81 00 78 */	addi r4, r1, 0x78
/* 802E086C 002DD7AC  80 FD 02 FC */	lwz r7, 0x2fc(r29)
/* 802E0870 002DD7B0  80 DD 03 00 */	lwz r6, 0x300(r29)
/* 802E0874 002DD7B4  91 61 00 20 */	stw r11, 0x20(r1)
/* 802E0878 002DD7B8  C1 1F 00 00 */	lfs f8, 0(r31)
/* 802E087C 002DD7BC  91 41 00 24 */	stw r10, 0x24(r1)
/* 802E0880 002DD7C0  C0 FF 00 04 */	lfs f7, 4(r31)
/* 802E0884 002DD7C4  91 21 00 28 */	stw r9, 0x28(r1)
/* 802E0888 002DD7C8  C0 DF 00 08 */	lfs f6, 8(r31)
/* 802E088C 002DD7CC  91 01 00 2C */	stw r8, 0x2c(r1)
/* 802E0890 002DD7D0  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802E0894 002DD7D4  90 E1 00 30 */	stw r7, 0x30(r1)
/* 802E0898 002DD7D8  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 802E089C 002DD7DC  90 C1 00 34 */	stw r6, 0x34(r1)
/* 802E08A0 002DD7E0  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802E08A4 002DD7E4  93 61 00 44 */	stw r27, 0x44(r1)
/* 802E08A8 002DD7E8  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 802E08AC 002DD7EC  93 01 00 78 */	stw r24, 0x78(r1)
/* 802E08B0 002DD7F0  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802E08B4 002DD7F4  93 41 00 44 */	stw r26, 0x44(r1)
/* 802E08B8 002DD7F8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802E08BC 002DD7FC  D1 01 00 7C */	stfs f8, 0x7c(r1)
/* 802E08C0 002DD800  D0 E1 00 80 */	stfs f7, 0x80(r1)
/* 802E08C4 002DD804  D0 C1 00 84 */	stfs f6, 0x84(r1)
/* 802E08C8 002DD808  93 81 00 78 */	stw r28, 0x78(r1)
/* 802E08CC 002DD80C  D0 A1 00 88 */	stfs f5, 0x88(r1)
/* 802E08D0 002DD810  D0 81 00 8C */	stfs f4, 0x8c(r1)
/* 802E08D4 002DD814  D0 61 00 90 */	stfs f3, 0x90(r1)
/* 802E08D8 002DD818  D0 41 00 94 */	stfs f2, 0x94(r1)
/* 802E08DC 002DD81C  D0 21 00 98 */	stfs f1, 0x98(r1)
/* 802E08E0 002DD820  D0 01 00 9C */	stfs f0, 0x9c(r1)
/* 802E08E4 002DD824  B0 A1 00 48 */	sth r5, 0x48(r1)
/* 802E08E8 002DD828  90 01 00 4C */	stw r0, 0x4c(r1)
/* 802E08EC 002DD82C  93 21 00 44 */	stw r25, 0x44(r1)
/* 802E08F0 002DD830  48 10 AE 91 */	bl create__Q23efx13TOootaBombLegFPQ23efx3Arg
/* 802E08F4 002DD834  3A F7 00 01 */	addi r23, r23, 1
/* 802E08F8 002DD838  3B DE 00 30 */	addi r30, r30, 0x30
/* 802E08FC 002DD83C  2C 17 00 04 */	cmpwi r23, 4
/* 802E0900 002DD840  41 80 FF 4C */	blt .L_802E084C
/* 802E0904 002DD844  48 00 00 F8 */	b .L_802E09FC
.L_802E0908:
/* 802E0908 002DD848  1C 04 00 0C */	mulli r0, r4, 0xc
/* 802E090C 002DD84C  3D 00 80 51 */	lis r8, "zero__10Vector3<f>"@ha
/* 802E0910 002DD850  3C E0 80 4B */	lis r7, __vt__Q23efx3Arg@ha
/* 802E0914 002DD854  3C C0 80 4D */	lis r6, __vt__Q23efx9ArgPosPos@ha
/* 802E0918 002DD858  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802E091C 002DD85C  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 802E0920 002DD860  3C 60 80 4F */	lis r3, __vt__Q23efx13TOootaBombLeg@ha
/* 802E0924 002DD864  7F DD 02 14 */	add r30, r29, r0
/* 802E0928 002DD868  3B E8 41 E4 */	addi r31, r8, "zero__10Vector3<f>"@l
/* 802E092C 002DD86C  3B 27 A7 EC */	addi r25, r7, __vt__Q23efx3Arg@l
/* 802E0930 002DD870  3B 46 0E A4 */	addi r26, r6, __vt__Q23efx9ArgPosPos@l
/* 802E0934 002DD874  3B 65 A7 F8 */	addi r27, r5, __vt__Q23efx5TBase@l
/* 802E0938 002DD878  3B 84 6A 78 */	addi r28, r4, __vt__Q23efx8TSimple1@l
/* 802E093C 002DD87C  3B A3 A1 38 */	addi r29, r3, __vt__Q23efx13TOootaBombLeg@l
/* 802E0940 002DD880  3A E0 00 00 */	li r23, 0
.L_802E0944:
/* 802E0944 002DD884  81 7E 03 04 */	lwz r11, 0x304(r30)
/* 802E0948 002DD888  38 A0 02 62 */	li r5, 0x262
/* 802E094C 002DD88C  81 5E 03 08 */	lwz r10, 0x308(r30)
/* 802E0950 002DD890  38 00 00 00 */	li r0, 0
/* 802E0954 002DD894  81 3E 03 0C */	lwz r9, 0x30c(r30)
/* 802E0958 002DD898  38 61 00 38 */	addi r3, r1, 0x38
/* 802E095C 002DD89C  81 1E 02 F8 */	lwz r8, 0x2f8(r30)
/* 802E0960 002DD8A0  38 81 00 50 */	addi r4, r1, 0x50
/* 802E0964 002DD8A4  80 FE 02 FC */	lwz r7, 0x2fc(r30)
/* 802E0968 002DD8A8  80 DE 03 00 */	lwz r6, 0x300(r30)
/* 802E096C 002DD8AC  91 61 00 08 */	stw r11, 8(r1)
/* 802E0970 002DD8B0  C1 1F 00 00 */	lfs f8, 0(r31)
/* 802E0974 002DD8B4  91 41 00 0C */	stw r10, 0xc(r1)
/* 802E0978 002DD8B8  C0 FF 00 04 */	lfs f7, 4(r31)
/* 802E097C 002DD8BC  91 21 00 10 */	stw r9, 0x10(r1)
/* 802E0980 002DD8C0  C0 DF 00 08 */	lfs f6, 8(r31)
/* 802E0984 002DD8C4  91 01 00 14 */	stw r8, 0x14(r1)
/* 802E0988 002DD8C8  C0 41 00 08 */	lfs f2, 8(r1)
/* 802E098C 002DD8CC  90 E1 00 18 */	stw r7, 0x18(r1)
/* 802E0990 002DD8D0  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 802E0994 002DD8D4  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 802E0998 002DD8D8  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 802E099C 002DD8DC  93 61 00 38 */	stw r27, 0x38(r1)
/* 802E09A0 002DD8E0  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 802E09A4 002DD8E4  93 21 00 50 */	stw r25, 0x50(r1)
/* 802E09A8 002DD8E8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802E09AC 002DD8EC  93 81 00 38 */	stw r28, 0x38(r1)
/* 802E09B0 002DD8F0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E09B4 002DD8F4  D1 01 00 54 */	stfs f8, 0x54(r1)
/* 802E09B8 002DD8F8  D0 E1 00 58 */	stfs f7, 0x58(r1)
/* 802E09BC 002DD8FC  D0 C1 00 5C */	stfs f6, 0x5c(r1)
/* 802E09C0 002DD900  93 41 00 50 */	stw r26, 0x50(r1)
/* 802E09C4 002DD904  D0 A1 00 60 */	stfs f5, 0x60(r1)
/* 802E09C8 002DD908  D0 81 00 64 */	stfs f4, 0x64(r1)
/* 802E09CC 002DD90C  D0 61 00 68 */	stfs f3, 0x68(r1)
/* 802E09D0 002DD910  D0 41 00 6C */	stfs f2, 0x6c(r1)
/* 802E09D4 002DD914  D0 21 00 70 */	stfs f1, 0x70(r1)
/* 802E09D8 002DD918  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 802E09DC 002DD91C  B0 A1 00 3C */	sth r5, 0x3c(r1)
/* 802E09E0 002DD920  90 01 00 40 */	stw r0, 0x40(r1)
/* 802E09E4 002DD924  93 A1 00 38 */	stw r29, 0x38(r1)
/* 802E09E8 002DD928  48 10 AD 99 */	bl create__Q23efx13TOootaBombLegFPQ23efx3Arg
/* 802E09EC 002DD92C  3A F7 00 01 */	addi r23, r23, 1
/* 802E09F0 002DD930  3B DE 00 30 */	addi r30, r30, 0x30
/* 802E09F4 002DD934  2C 17 00 04 */	cmpwi r23, 4
/* 802E09F8 002DD938  41 80 FF 4C */	blt .L_802E0944
.L_802E09FC:
/* 802E09FC 002DD93C  BA E1 00 AC */	lmw r23, 0xac(r1)
/* 802E0A00 002DD940  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 802E0A04 002DD944  7C 08 03 A6 */	mtlr r0
/* 802E0A08 002DD948  38 21 00 D0 */	addi r1, r1, 0xd0
/* 802E0A0C 002DD94C  4E 80 00 20 */	blr 

.global createDeadBombBodyEffect__Q34Game11BigTreasure3ObjFv
createDeadBombBodyEffect__Q34Game11BigTreasure3ObjFv:
/* 802E0A10 002DD950  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802E0A14 002DD954  7C 08 02 A6 */	mflr r0
/* 802E0A18 002DD958  38 82 E8 EC */	addi r4, r2, lbl_8051CC4C@sda21
/* 802E0A1C 002DD95C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802E0A20 002DD960  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802E0A24 002DD964  48 15 E5 C1 */	bl getJoint__Q28SysShape5ModelFPc
/* 802E0A28 002DD968  48 14 8E 79 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802E0A2C 002DD96C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802E0A30 002DD970  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802E0A34 002DD974  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802E0A38 002DD978  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 802E0A3C 002DD97C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802E0A40 002DD980  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 802E0A44 002DD984  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 802E0A48 002DD988  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 802E0A4C 002DD98C  90 81 00 08 */	stw r4, 8(r1)
/* 802E0A50 002DD990  3C 60 80 4D */	lis r3, __vt__Q23efx14TOootaBombBody@ha
/* 802E0A54 002DD994  38 85 A7 EC */	addi r4, r5, __vt__Q23efx3Arg@l
/* 802E0A58 002DD998  38 C0 02 61 */	li r6, 0x261
/* 802E0A5C 002DD99C  38 A0 00 00 */	li r5, 0
/* 802E0A60 002DD9A0  90 01 00 08 */	stw r0, 8(r1)
/* 802E0A64 002DD9A4  38 03 32 A4 */	addi r0, r3, __vt__Q23efx14TOootaBombBody@l
/* 802E0A68 002DD9A8  38 61 00 08 */	addi r3, r1, 8
/* 802E0A6C 002DD9AC  90 81 00 14 */	stw r4, 0x14(r1)
/* 802E0A70 002DD9B0  38 81 00 14 */	addi r4, r1, 0x14
/* 802E0A74 002DD9B4  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802E0A78 002DD9B8  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802E0A7C 002DD9BC  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802E0A80 002DD9C0  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 802E0A84 002DD9C4  90 A1 00 10 */	stw r5, 0x10(r1)
/* 802E0A88 002DD9C8  90 01 00 08 */	stw r0, 8(r1)
/* 802E0A8C 002DD9CC  48 0C E4 F9 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 802E0A90 002DD9D0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802E0A94 002DD9D4  7C 08 03 A6 */	mtlr r0
/* 802E0A98 002DD9D8  38 21 00 30 */	addi r1, r1, 0x30
/* 802E0A9C 002DD9DC  4E 80 00 20 */	blr 

.global startDeadBubbleLegEffect__Q34Game11BigTreasure3ObjFi
startDeadBubbleLegEffect__Q34Game11BigTreasure3ObjFi:
/* 802E0AA0 002DD9E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E0AA4 002DD9E4  7C 08 02 A6 */	mflr r0
/* 802E0AA8 002DD9E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0AAC 002DD9EC  54 80 10 3A */	slwi r0, r4, 2
/* 802E0AB0 002DD9F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E0AB4 002DD9F4  7F E3 02 14 */	add r31, r3, r0
/* 802E0AB8 002DD9F8  93 C1 00 08 */	stw r30, 8(r1)
/* 802E0ABC 002DD9FC  3B C0 00 00 */	li r30, 0
.L_802E0AC0:
/* 802E0AC0 002DDA00  80 7F 04 F4 */	lwz r3, 0x4f4(r31)
/* 802E0AC4 002DDA04  38 80 00 00 */	li r4, 0
/* 802E0AC8 002DDA08  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0ACC 002DDA0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E0AD0 002DDA10  7D 89 03 A6 */	mtctr r12
/* 802E0AD4 002DDA14  4E 80 04 21 */	bctrl 
/* 802E0AD8 002DDA18  3B DE 00 01 */	addi r30, r30, 1
/* 802E0ADC 002DDA1C  3B FF 00 10 */	addi r31, r31, 0x10
/* 802E0AE0 002DDA20  2C 1E 00 04 */	cmpwi r30, 4
/* 802E0AE4 002DDA24  41 80 FF DC */	blt .L_802E0AC0
/* 802E0AE8 002DDA28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E0AEC 002DDA2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E0AF0 002DDA30  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E0AF4 002DDA34  7C 08 03 A6 */	mtlr r0
/* 802E0AF8 002DDA38  38 21 00 10 */	addi r1, r1, 0x10
/* 802E0AFC 002DDA3C  4E 80 00 20 */	blr 

.global finishDeadBubbleLegEffect__Q34Game11BigTreasure3ObjFi
finishDeadBubbleLegEffect__Q34Game11BigTreasure3ObjFi:
/* 802E0B00 002DDA40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E0B04 002DDA44  7C 08 02 A6 */	mflr r0
/* 802E0B08 002DDA48  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0B0C 002DDA4C  54 80 10 3A */	slwi r0, r4, 2
/* 802E0B10 002DDA50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E0B14 002DDA54  7F E3 02 14 */	add r31, r3, r0
/* 802E0B18 002DDA58  93 C1 00 08 */	stw r30, 8(r1)
/* 802E0B1C 002DDA5C  3B C0 00 00 */	li r30, 0
.L_802E0B20:
/* 802E0B20 002DDA60  80 7F 04 F4 */	lwz r3, 0x4f4(r31)
/* 802E0B24 002DDA64  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0B28 002DDA68  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E0B2C 002DDA6C  7D 89 03 A6 */	mtctr r12
/* 802E0B30 002DDA70  4E 80 04 21 */	bctrl 
/* 802E0B34 002DDA74  3B DE 00 01 */	addi r30, r30, 1
/* 802E0B38 002DDA78  3B FF 00 10 */	addi r31, r31, 0x10
/* 802E0B3C 002DDA7C  2C 1E 00 04 */	cmpwi r30, 4
/* 802E0B40 002DDA80  41 80 FF E0 */	blt .L_802E0B20
/* 802E0B44 002DDA84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E0B48 002DDA88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E0B4C 002DDA8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E0B50 002DDA90  7C 08 03 A6 */	mtlr r0
/* 802E0B54 002DDA94  38 21 00 10 */	addi r1, r1, 0x10
/* 802E0B58 002DDA98  4E 80 00 20 */	blr 

.global startDeadBubbleBodyEffect__Q34Game11BigTreasure3ObjFv
startDeadBubbleBodyEffect__Q34Game11BigTreasure3ObjFv:
/* 802E0B5C 002DDA9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E0B60 002DDAA0  7C 08 02 A6 */	mflr r0
/* 802E0B64 002DDAA4  38 80 00 00 */	li r4, 0
/* 802E0B68 002DDAA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0B6C 002DDAAC  80 63 05 34 */	lwz r3, 0x534(r3)
/* 802E0B70 002DDAB0  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0B74 002DDAB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E0B78 002DDAB8  7D 89 03 A6 */	mtctr r12
/* 802E0B7C 002DDABC  4E 80 04 21 */	bctrl 
/* 802E0B80 002DDAC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E0B84 002DDAC4  7C 08 03 A6 */	mtlr r0
/* 802E0B88 002DDAC8  38 21 00 10 */	addi r1, r1, 0x10
/* 802E0B8C 002DDACC  4E 80 00 20 */	blr 

.global finishDeadBubbleBodyEffect__Q34Game11BigTreasure3ObjFv
finishDeadBubbleBodyEffect__Q34Game11BigTreasure3ObjFv:
/* 802E0B90 002DDAD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E0B94 002DDAD4  7C 08 02 A6 */	mflr r0
/* 802E0B98 002DDAD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0B9C 002DDADC  80 63 05 34 */	lwz r3, 0x534(r3)
/* 802E0BA0 002DDAE0  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0BA4 002DDAE4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E0BA8 002DDAE8  7D 89 03 A6 */	mtctr r12
/* 802E0BAC 002DDAEC  4E 80 04 21 */	bctrl 
/* 802E0BB0 002DDAF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E0BB4 002DDAF4  7C 08 03 A6 */	mtlr r0
/* 802E0BB8 002DDAF8  38 21 00 10 */	addi r1, r1, 0x10
/* 802E0BBC 002DDAFC  4E 80 00 20 */	blr 

.global startDeadBubbleMouthEffect__Q34Game11BigTreasure3ObjFv
startDeadBubbleMouthEffect__Q34Game11BigTreasure3ObjFv:
/* 802E0BC0 002DDB00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E0BC4 002DDB04  7C 08 02 A6 */	mflr r0
/* 802E0BC8 002DDB08  38 80 00 00 */	li r4, 0
/* 802E0BCC 002DDB0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0BD0 002DDB10  80 63 05 38 */	lwz r3, 0x538(r3)
/* 802E0BD4 002DDB14  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0BD8 002DDB18  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E0BDC 002DDB1C  7D 89 03 A6 */	mtctr r12
/* 802E0BE0 002DDB20  4E 80 04 21 */	bctrl 
/* 802E0BE4 002DDB24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E0BE8 002DDB28  7C 08 03 A6 */	mtlr r0
/* 802E0BEC 002DDB2C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E0BF0 002DDB30  4E 80 00 20 */	blr 

.global finishDeadBubbleMouthEffect__Q34Game11BigTreasure3ObjFv
finishDeadBubbleMouthEffect__Q34Game11BigTreasure3ObjFv:
/* 802E0BF4 002DDB34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E0BF8 002DDB38  7C 08 02 A6 */	mflr r0
/* 802E0BFC 002DDB3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0C00 002DDB40  80 63 05 38 */	lwz r3, 0x538(r3)
/* 802E0C04 002DDB44  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0C08 002DDB48  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E0C0C 002DDB4C  7D 89 03 A6 */	mtctr r12
/* 802E0C10 002DDB50  4E 80 04 21 */	bctrl 
/* 802E0C14 002DDB54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E0C18 002DDB58  7C 08 03 A6 */	mtlr r0
/* 802E0C1C 002DDB5C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E0C20 002DDB60  4E 80 00 20 */	blr 

.global createChangeMaterialEffect__Q34Game11BigTreasure3ObjFv
createChangeMaterialEffect__Q34Game11BigTreasure3ObjFv:
/* 802E0C24 002DDB64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E0C28 002DDB68  7C 08 02 A6 */	mflr r0
/* 802E0C2C 002DDB6C  38 80 00 00 */	li r4, 0
/* 802E0C30 002DDB70  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E0C34 002DDB74  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802E0C38 002DDB78  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802E0C3C 002DDB7C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802E0C40 002DDB80  93 81 00 10 */	stw r28, 0x10(r1)
/* 802E0C44 002DDB84  7C 7C 1B 78 */	mr r28, r3
/* 802E0C48 002DDB88  80 63 05 7C */	lwz r3, 0x57c(r3)
/* 802E0C4C 002DDB8C  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0C50 002DDB90  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E0C54 002DDB94  7D 89 03 A6 */	mtctr r12
/* 802E0C58 002DDB98  4E 80 04 21 */	bctrl 
/* 802E0C5C 002DDB9C  3B A0 00 00 */	li r29, 0
/* 802E0C60 002DDBA0  7F 9E E3 78 */	mr r30, r28
.L_802E0C64:
/* 802E0C64 002DDBA4  3B 80 00 00 */	li r28, 0
/* 802E0C68 002DDBA8  7F DF F3 78 */	mr r31, r30
.L_802E0C6C:
/* 802E0C6C 002DDBAC  80 7F 05 3C */	lwz r3, 0x53c(r31)
/* 802E0C70 002DDBB0  38 80 00 00 */	li r4, 0
/* 802E0C74 002DDBB4  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0C78 002DDBB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E0C7C 002DDBBC  7D 89 03 A6 */	mtctr r12
/* 802E0C80 002DDBC0  4E 80 04 21 */	bctrl 
/* 802E0C84 002DDBC4  3B 9C 00 01 */	addi r28, r28, 1
/* 802E0C88 002DDBC8  3B FF 00 04 */	addi r31, r31, 4
/* 802E0C8C 002DDBCC  2C 1C 00 04 */	cmpwi r28, 4
/* 802E0C90 002DDBD0  41 80 FF DC */	blt .L_802E0C6C
/* 802E0C94 002DDBD4  3B BD 00 01 */	addi r29, r29, 1
/* 802E0C98 002DDBD8  3B DE 00 10 */	addi r30, r30, 0x10
/* 802E0C9C 002DDBDC  2C 1D 00 04 */	cmpwi r29, 4
/* 802E0CA0 002DDBE0  41 80 FF C4 */	blt .L_802E0C64
/* 802E0CA4 002DDBE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E0CA8 002DDBE8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802E0CAC 002DDBEC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802E0CB0 002DDBF0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802E0CB4 002DDBF4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 802E0CB8 002DDBF8  7C 08 03 A6 */	mtlr r0
/* 802E0CBC 002DDBFC  38 21 00 20 */	addi r1, r1, 0x20
/* 802E0CC0 002DDC00  4E 80 00 20 */	blr 

.global createDeadBombFootEffect__Q34Game11BigTreasure3ObjFv
createDeadBombFootEffect__Q34Game11BigTreasure3ObjFv:
/* 802E0CC4 002DDC04  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802E0CC8 002DDC08  7C 08 02 A6 */	mflr r0
/* 802E0CCC 002DDC0C  3C E0 80 4B */	lis r7, __vt__Q23efx3Arg@ha
/* 802E0CD0 002DDC10  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 802E0CD4 002DDC14  90 01 00 54 */	stw r0, 0x54(r1)
/* 802E0CD8 002DDC18  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple1@ha
/* 802E0CDC 002DDC1C  3C 80 80 4D */	lis r4, __vt__Q23efx13TDamaDeadBomb@ha
/* 802E0CE0 002DDC20  BE C1 00 28 */	stmw r22, 0x28(r1)
/* 802E0CE4 002DDC24  7C 78 1B 78 */	mr r24, r3
/* 802E0CE8 002DDC28  3B 47 A7 EC */	addi r26, r7, __vt__Q23efx3Arg@l
/* 802E0CEC 002DDC2C  3B 66 A7 F8 */	addi r27, r6, __vt__Q23efx5TBase@l
/* 802E0CF0 002DDC30  3B 85 6A 78 */	addi r28, r5, __vt__Q23efx8TSimple1@l
/* 802E0CF4 002DDC34  3B E4 D8 24 */	addi r31, r4, __vt__Q23efx13TDamaDeadBomb@l
/* 802E0CF8 002DDC38  3A E0 00 00 */	li r23, 0
.L_802E0CFC:
/* 802E0CFC 002DDC3C  7F 19 C3 78 */	mr r25, r24
/* 802E0D00 002DDC40  3A C0 00 00 */	li r22, 0
/* 802E0D04 002DDC44  3B A0 00 1C */	li r29, 0x1c
/* 802E0D08 002DDC48  3B C0 00 00 */	li r30, 0
.L_802E0D0C:
/* 802E0D0C 002DDC4C  93 41 00 14 */	stw r26, 0x14(r1)
/* 802E0D10 002DDC50  38 61 00 08 */	addi r3, r1, 8
/* 802E0D14 002DDC54  38 81 00 14 */	addi r4, r1, 0x14
/* 802E0D18 002DDC58  C0 19 03 04 */	lfs f0, 0x304(r25)
/* 802E0D1C 002DDC5C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802E0D20 002DDC60  C0 19 03 08 */	lfs f0, 0x308(r25)
/* 802E0D24 002DDC64  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802E0D28 002DDC68  C0 19 03 0C */	lfs f0, 0x30c(r25)
/* 802E0D2C 002DDC6C  93 61 00 08 */	stw r27, 8(r1)
/* 802E0D30 002DDC70  93 81 00 08 */	stw r28, 8(r1)
/* 802E0D34 002DDC74  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802E0D38 002DDC78  B3 A1 00 0C */	sth r29, 0xc(r1)
/* 802E0D3C 002DDC7C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802E0D40 002DDC80  93 E1 00 08 */	stw r31, 8(r1)
/* 802E0D44 002DDC84  48 0C E2 41 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 802E0D48 002DDC88  3A D6 00 01 */	addi r22, r22, 1
/* 802E0D4C 002DDC8C  3B 39 00 0C */	addi r25, r25, 0xc
/* 802E0D50 002DDC90  2C 16 00 03 */	cmpwi r22, 3
/* 802E0D54 002DDC94  41 80 FF B8 */	blt .L_802E0D0C
/* 802E0D58 002DDC98  3A F7 00 01 */	addi r23, r23, 1
/* 802E0D5C 002DDC9C  3B 18 00 30 */	addi r24, r24, 0x30
/* 802E0D60 002DDCA0  2C 17 00 04 */	cmpwi r23, 4
/* 802E0D64 002DDCA4  41 80 FF 98 */	blt .L_802E0CFC
/* 802E0D68 002DDCA8  BA C1 00 28 */	lmw r22, 0x28(r1)
/* 802E0D6C 002DDCAC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802E0D70 002DDCB0  7C 08 03 A6 */	mtlr r0
/* 802E0D74 002DDCB4  38 21 00 50 */	addi r1, r1, 0x50
/* 802E0D78 002DDCB8  4E 80 00 20 */	blr 

.global startShineParticleEffect__Q34Game11BigTreasure3ObjFv
startShineParticleEffect__Q34Game11BigTreasure3ObjFv:
/* 802E0D7C 002DDCBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E0D80 002DDCC0  7C 08 02 A6 */	mflr r0
/* 802E0D84 002DDCC4  38 80 00 00 */	li r4, 0
/* 802E0D88 002DDCC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0D8C 002DDCCC  80 63 05 80 */	lwz r3, 0x580(r3)
/* 802E0D90 002DDCD0  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0D94 002DDCD4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E0D98 002DDCD8  7D 89 03 A6 */	mtctr r12
/* 802E0D9C 002DDCDC  4E 80 04 21 */	bctrl 
/* 802E0DA0 002DDCE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E0DA4 002DDCE4  7C 08 03 A6 */	mtlr r0
/* 802E0DA8 002DDCE8  38 21 00 10 */	addi r1, r1, 0x10
/* 802E0DAC 002DDCEC  4E 80 00 20 */	blr 

.global finishShineParticleEffect__Q34Game11BigTreasure3ObjFv
finishShineParticleEffect__Q34Game11BigTreasure3ObjFv:
/* 802E0DB0 002DDCF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E0DB4 002DDCF4  7C 08 02 A6 */	mflr r0
/* 802E0DB8 002DDCF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E0DBC 002DDCFC  80 63 05 80 */	lwz r3, 0x580(r3)
/* 802E0DC0 002DDD00  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0DC4 002DDD04  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E0DC8 002DDD08  7D 89 03 A6 */	mtctr r12
/* 802E0DCC 002DDD0C  4E 80 04 21 */	bctrl 
/* 802E0DD0 002DDD10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E0DD4 002DDD14  7C 08 03 A6 */	mtlr r0
/* 802E0DD8 002DDD18  38 21 00 10 */	addi r1, r1, 0x10
/* 802E0DDC 002DDD1C  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game11BigTreasure3ObjFv
effectDrawOn__Q34Game11BigTreasure3ObjFv:
/* 802E0DE0 002DDD20  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E0DE4 002DDD24  7C 08 02 A6 */	mflr r0
/* 802E0DE8 002DDD28  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E0DEC 002DDD2C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802E0DF0 002DDD30  7C 7B 1B 78 */	mr r27, r3
/* 802E0DF4 002DDD34  3B C0 00 00 */	li r30, 0
/* 802E0DF8 002DDD38  7F 7F DB 78 */	mr r31, r27
.L_802E0DFC:
/* 802E0DFC 002DDD3C  80 7F 04 80 */	lwz r3, 0x480(r31)
/* 802E0E00 002DDD40  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0E04 002DDD44  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802E0E08 002DDD48  7D 89 03 A6 */	mtctr r12
/* 802E0E0C 002DDD4C  4E 80 04 21 */	bctrl 
/* 802E0E10 002DDD50  80 7F 04 90 */	lwz r3, 0x490(r31)
/* 802E0E14 002DDD54  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0E18 002DDD58  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802E0E1C 002DDD5C  7D 89 03 A6 */	mtctr r12
/* 802E0E20 002DDD60  4E 80 04 21 */	bctrl 
/* 802E0E24 002DDD64  80 7F 04 A0 */	lwz r3, 0x4a0(r31)
/* 802E0E28 002DDD68  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0E2C 002DDD6C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802E0E30 002DDD70  7D 89 03 A6 */	mtctr r12
/* 802E0E34 002DDD74  4E 80 04 21 */	bctrl 
/* 802E0E38 002DDD78  3B DE 00 01 */	addi r30, r30, 1
/* 802E0E3C 002DDD7C  3B FF 00 04 */	addi r31, r31, 4
/* 802E0E40 002DDD80  2C 1E 00 04 */	cmpwi r30, 4
/* 802E0E44 002DDD84  41 80 FF B8 */	blt .L_802E0DFC
/* 802E0E48 002DDD88  80 7B 04 B0 */	lwz r3, 0x4b0(r27)
/* 802E0E4C 002DDD8C  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0E50 002DDD90  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802E0E54 002DDD94  7D 89 03 A6 */	mtctr r12
/* 802E0E58 002DDD98  4E 80 04 21 */	bctrl 
/* 802E0E5C 002DDD9C  3B C0 00 00 */	li r30, 0
/* 802E0E60 002DDDA0  7F 7F DB 78 */	mr r31, r27
.L_802E0E64:
/* 802E0E64 002DDDA4  80 7F 04 B4 */	lwz r3, 0x4b4(r31)
/* 802E0E68 002DDDA8  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0E6C 002DDDAC  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802E0E70 002DDDB0  7D 89 03 A6 */	mtctr r12
/* 802E0E74 002DDDB4  4E 80 04 21 */	bctrl 
/* 802E0E78 002DDDB8  3B DE 00 01 */	addi r30, r30, 1
/* 802E0E7C 002DDDBC  3B FF 00 04 */	addi r31, r31, 4
/* 802E0E80 002DDDC0  2C 1E 00 04 */	cmpwi r30, 4
/* 802E0E84 002DDDC4  41 80 FF E0 */	blt .L_802E0E64
/* 802E0E88 002DDDC8  3B A0 00 00 */	li r29, 0
/* 802E0E8C 002DDDCC  7F 7E DB 78 */	mr r30, r27
.L_802E0E90:
/* 802E0E90 002DDDD0  3B 80 00 00 */	li r28, 0
/* 802E0E94 002DDDD4  7F DF F3 78 */	mr r31, r30
.L_802E0E98:
/* 802E0E98 002DDDD8  80 7F 04 C4 */	lwz r3, 0x4c4(r31)
/* 802E0E9C 002DDDDC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0EA0 002DDDE0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802E0EA4 002DDDE4  7D 89 03 A6 */	mtctr r12
/* 802E0EA8 002DDDE8  4E 80 04 21 */	bctrl 
/* 802E0EAC 002DDDEC  3B 9C 00 01 */	addi r28, r28, 1
/* 802E0EB0 002DDDF0  3B FF 00 04 */	addi r31, r31, 4
/* 802E0EB4 002DDDF4  2C 1C 00 03 */	cmpwi r28, 3
/* 802E0EB8 002DDDF8  41 80 FF E0 */	blt .L_802E0E98
/* 802E0EBC 002DDDFC  3B BD 00 01 */	addi r29, r29, 1
/* 802E0EC0 002DDE00  3B DE 00 0C */	addi r30, r30, 0xc
/* 802E0EC4 002DDE04  2C 1D 00 04 */	cmpwi r29, 4
/* 802E0EC8 002DDE08  41 80 FF C8 */	blt .L_802E0E90
/* 802E0ECC 002DDE0C  3B 80 00 00 */	li r28, 0
/* 802E0ED0 002DDE10  7F 7F DB 78 */	mr r31, r27
.L_802E0ED4:
/* 802E0ED4 002DDE14  3B A0 00 00 */	li r29, 0
/* 802E0ED8 002DDE18  7F FE FB 78 */	mr r30, r31
.L_802E0EDC:
/* 802E0EDC 002DDE1C  80 7E 04 F4 */	lwz r3, 0x4f4(r30)
/* 802E0EE0 002DDE20  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0EE4 002DDE24  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802E0EE8 002DDE28  7D 89 03 A6 */	mtctr r12
/* 802E0EEC 002DDE2C  4E 80 04 21 */	bctrl 
/* 802E0EF0 002DDE30  3B BD 00 01 */	addi r29, r29, 1
/* 802E0EF4 002DDE34  3B DE 00 04 */	addi r30, r30, 4
/* 802E0EF8 002DDE38  2C 1D 00 04 */	cmpwi r29, 4
/* 802E0EFC 002DDE3C  41 80 FF E0 */	blt .L_802E0EDC
/* 802E0F00 002DDE40  3B 9C 00 01 */	addi r28, r28, 1
/* 802E0F04 002DDE44  3B FF 00 10 */	addi r31, r31, 0x10
/* 802E0F08 002DDE48  2C 1C 00 04 */	cmpwi r28, 4
/* 802E0F0C 002DDE4C  41 80 FF C8 */	blt .L_802E0ED4
/* 802E0F10 002DDE50  80 7B 05 34 */	lwz r3, 0x534(r27)
/* 802E0F14 002DDE54  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0F18 002DDE58  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802E0F1C 002DDE5C  7D 89 03 A6 */	mtctr r12
/* 802E0F20 002DDE60  4E 80 04 21 */	bctrl 
/* 802E0F24 002DDE64  80 7B 05 38 */	lwz r3, 0x538(r27)
/* 802E0F28 002DDE68  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0F2C 002DDE6C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802E0F30 002DDE70  7D 89 03 A6 */	mtctr r12
/* 802E0F34 002DDE74  4E 80 04 21 */	bctrl 
/* 802E0F38 002DDE78  3B 80 00 00 */	li r28, 0
/* 802E0F3C 002DDE7C  7F 7F DB 78 */	mr r31, r27
.L_802E0F40:
/* 802E0F40 002DDE80  3B A0 00 00 */	li r29, 0
/* 802E0F44 002DDE84  7F FE FB 78 */	mr r30, r31
.L_802E0F48:
/* 802E0F48 002DDE88  80 7E 05 3C */	lwz r3, 0x53c(r30)
/* 802E0F4C 002DDE8C  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0F50 002DDE90  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802E0F54 002DDE94  7D 89 03 A6 */	mtctr r12
/* 802E0F58 002DDE98  4E 80 04 21 */	bctrl 
/* 802E0F5C 002DDE9C  3B BD 00 01 */	addi r29, r29, 1
/* 802E0F60 002DDEA0  3B DE 00 04 */	addi r30, r30, 4
/* 802E0F64 002DDEA4  2C 1D 00 04 */	cmpwi r29, 4
/* 802E0F68 002DDEA8  41 80 FF E0 */	blt .L_802E0F48
/* 802E0F6C 002DDEAC  3B 9C 00 01 */	addi r28, r28, 1
/* 802E0F70 002DDEB0  3B FF 00 10 */	addi r31, r31, 0x10
/* 802E0F74 002DDEB4  2C 1C 00 04 */	cmpwi r28, 4
/* 802E0F78 002DDEB8  41 80 FF C8 */	blt .L_802E0F40
/* 802E0F7C 002DDEBC  80 7B 05 7C */	lwz r3, 0x57c(r27)
/* 802E0F80 002DDEC0  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0F84 002DDEC4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802E0F88 002DDEC8  7D 89 03 A6 */	mtctr r12
/* 802E0F8C 002DDECC  4E 80 04 21 */	bctrl 
/* 802E0F90 002DDED0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802E0F94 002DDED4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E0F98 002DDED8  7C 08 03 A6 */	mtlr r0
/* 802E0F9C 002DDEDC  38 21 00 20 */	addi r1, r1, 0x20
/* 802E0FA0 002DDEE0  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game11BigTreasure3ObjFv
effectDrawOff__Q34Game11BigTreasure3ObjFv:
/* 802E0FA4 002DDEE4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E0FA8 002DDEE8  7C 08 02 A6 */	mflr r0
/* 802E0FAC 002DDEEC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E0FB0 002DDEF0  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802E0FB4 002DDEF4  7C 7B 1B 78 */	mr r27, r3
/* 802E0FB8 002DDEF8  3B C0 00 00 */	li r30, 0
/* 802E0FBC 002DDEFC  7F 7F DB 78 */	mr r31, r27
.L_802E0FC0:
/* 802E0FC0 002DDF00  80 7F 04 80 */	lwz r3, 0x480(r31)
/* 802E0FC4 002DDF04  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0FC8 002DDF08  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E0FCC 002DDF0C  7D 89 03 A6 */	mtctr r12
/* 802E0FD0 002DDF10  4E 80 04 21 */	bctrl 
/* 802E0FD4 002DDF14  80 7F 04 90 */	lwz r3, 0x490(r31)
/* 802E0FD8 002DDF18  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0FDC 002DDF1C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802E0FE0 002DDF20  7D 89 03 A6 */	mtctr r12
/* 802E0FE4 002DDF24  4E 80 04 21 */	bctrl 
/* 802E0FE8 002DDF28  80 7F 04 A0 */	lwz r3, 0x4a0(r31)
/* 802E0FEC 002DDF2C  81 83 00 00 */	lwz r12, 0(r3)
/* 802E0FF0 002DDF30  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802E0FF4 002DDF34  7D 89 03 A6 */	mtctr r12
/* 802E0FF8 002DDF38  4E 80 04 21 */	bctrl 
/* 802E0FFC 002DDF3C  3B DE 00 01 */	addi r30, r30, 1
/* 802E1000 002DDF40  3B FF 00 04 */	addi r31, r31, 4
/* 802E1004 002DDF44  2C 1E 00 04 */	cmpwi r30, 4
/* 802E1008 002DDF48  41 80 FF B8 */	blt .L_802E0FC0
/* 802E100C 002DDF4C  80 7B 04 B0 */	lwz r3, 0x4b0(r27)
/* 802E1010 002DDF50  81 83 00 00 */	lwz r12, 0(r3)
/* 802E1014 002DDF54  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802E1018 002DDF58  7D 89 03 A6 */	mtctr r12
/* 802E101C 002DDF5C  4E 80 04 21 */	bctrl 
/* 802E1020 002DDF60  3B C0 00 00 */	li r30, 0
/* 802E1024 002DDF64  7F 7F DB 78 */	mr r31, r27
.L_802E1028:
/* 802E1028 002DDF68  80 7F 04 B4 */	lwz r3, 0x4b4(r31)
/* 802E102C 002DDF6C  81 83 00 00 */	lwz r12, 0(r3)
/* 802E1030 002DDF70  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802E1034 002DDF74  7D 89 03 A6 */	mtctr r12
/* 802E1038 002DDF78  4E 80 04 21 */	bctrl 
/* 802E103C 002DDF7C  3B DE 00 01 */	addi r30, r30, 1
/* 802E1040 002DDF80  3B FF 00 04 */	addi r31, r31, 4
/* 802E1044 002DDF84  2C 1E 00 04 */	cmpwi r30, 4
/* 802E1048 002DDF88  41 80 FF E0 */	blt .L_802E1028
/* 802E104C 002DDF8C  3B A0 00 00 */	li r29, 0
/* 802E1050 002DDF90  7F 7E DB 78 */	mr r30, r27
.L_802E1054:
/* 802E1054 002DDF94  3B 80 00 00 */	li r28, 0
/* 802E1058 002DDF98  7F DF F3 78 */	mr r31, r30
.L_802E105C:
/* 802E105C 002DDF9C  80 7F 04 C4 */	lwz r3, 0x4c4(r31)
/* 802E1060 002DDFA0  81 83 00 00 */	lwz r12, 0(r3)
/* 802E1064 002DDFA4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802E1068 002DDFA8  7D 89 03 A6 */	mtctr r12
/* 802E106C 002DDFAC  4E 80 04 21 */	bctrl 
/* 802E1070 002DDFB0  3B 9C 00 01 */	addi r28, r28, 1
/* 802E1074 002DDFB4  3B FF 00 04 */	addi r31, r31, 4
/* 802E1078 002DDFB8  2C 1C 00 03 */	cmpwi r28, 3
/* 802E107C 002DDFBC  41 80 FF E0 */	blt .L_802E105C
/* 802E1080 002DDFC0  3B BD 00 01 */	addi r29, r29, 1
/* 802E1084 002DDFC4  3B DE 00 0C */	addi r30, r30, 0xc
/* 802E1088 002DDFC8  2C 1D 00 04 */	cmpwi r29, 4
/* 802E108C 002DDFCC  41 80 FF C8 */	blt .L_802E1054
/* 802E1090 002DDFD0  3B 80 00 00 */	li r28, 0
/* 802E1094 002DDFD4  7F 7F DB 78 */	mr r31, r27
.L_802E1098:
/* 802E1098 002DDFD8  3B A0 00 00 */	li r29, 0
/* 802E109C 002DDFDC  7F FE FB 78 */	mr r30, r31
.L_802E10A0:
/* 802E10A0 002DDFE0  80 7E 04 F4 */	lwz r3, 0x4f4(r30)
/* 802E10A4 002DDFE4  81 83 00 00 */	lwz r12, 0(r3)
/* 802E10A8 002DDFE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E10AC 002DDFEC  7D 89 03 A6 */	mtctr r12
/* 802E10B0 002DDFF0  4E 80 04 21 */	bctrl 
/* 802E10B4 002DDFF4  3B BD 00 01 */	addi r29, r29, 1
/* 802E10B8 002DDFF8  3B DE 00 04 */	addi r30, r30, 4
/* 802E10BC 002DDFFC  2C 1D 00 04 */	cmpwi r29, 4
/* 802E10C0 002DE000  41 80 FF E0 */	blt .L_802E10A0
/* 802E10C4 002DE004  3B 9C 00 01 */	addi r28, r28, 1
/* 802E10C8 002DE008  3B FF 00 10 */	addi r31, r31, 0x10
/* 802E10CC 002DE00C  2C 1C 00 04 */	cmpwi r28, 4
/* 802E10D0 002DE010  41 80 FF C8 */	blt .L_802E1098
/* 802E10D4 002DE014  80 7B 05 34 */	lwz r3, 0x534(r27)
/* 802E10D8 002DE018  81 83 00 00 */	lwz r12, 0(r3)
/* 802E10DC 002DE01C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E10E0 002DE020  7D 89 03 A6 */	mtctr r12
/* 802E10E4 002DE024  4E 80 04 21 */	bctrl 
/* 802E10E8 002DE028  80 7B 05 38 */	lwz r3, 0x538(r27)
/* 802E10EC 002DE02C  81 83 00 00 */	lwz r12, 0(r3)
/* 802E10F0 002DE030  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802E10F4 002DE034  7D 89 03 A6 */	mtctr r12
/* 802E10F8 002DE038  4E 80 04 21 */	bctrl 
/* 802E10FC 002DE03C  3B 80 00 00 */	li r28, 0
/* 802E1100 002DE040  7F 7F DB 78 */	mr r31, r27
.L_802E1104:
/* 802E1104 002DE044  3B A0 00 00 */	li r29, 0
/* 802E1108 002DE048  7F FE FB 78 */	mr r30, r31
.L_802E110C:
/* 802E110C 002DE04C  80 7E 05 3C */	lwz r3, 0x53c(r30)
/* 802E1110 002DE050  81 83 00 00 */	lwz r12, 0(r3)
/* 802E1114 002DE054  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802E1118 002DE058  7D 89 03 A6 */	mtctr r12
/* 802E111C 002DE05C  4E 80 04 21 */	bctrl 
/* 802E1120 002DE060  3B BD 00 01 */	addi r29, r29, 1
/* 802E1124 002DE064  3B DE 00 04 */	addi r30, r30, 4
/* 802E1128 002DE068  2C 1D 00 04 */	cmpwi r29, 4
/* 802E112C 002DE06C  41 80 FF E0 */	blt .L_802E110C
/* 802E1130 002DE070  3B 9C 00 01 */	addi r28, r28, 1
/* 802E1134 002DE074  3B FF 00 10 */	addi r31, r31, 0x10
/* 802E1138 002DE078  2C 1C 00 04 */	cmpwi r28, 4
/* 802E113C 002DE07C  41 80 FF C8 */	blt .L_802E1104
/* 802E1140 002DE080  80 7B 05 7C */	lwz r3, 0x57c(r27)
/* 802E1144 002DE084  81 83 00 00 */	lwz r12, 0(r3)
/* 802E1148 002DE088  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802E114C 002DE08C  7D 89 03 A6 */	mtctr r12
/* 802E1150 002DE090  4E 80 04 21 */	bctrl 
/* 802E1154 002DE094  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802E1158 002DE098  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E115C 002DE09C  7C 08 03 A6 */	mtlr r0
/* 802E1160 002DE0A0  38 21 00 20 */	addi r1, r1, 0x20
/* 802E1164 002DE0A4  4E 80 00 20 */	blr 

.global subShadowScale__Q34Game11BigTreasure3ObjFv
subShadowScale__Q34Game11BigTreasure3ObjFv:
/* 802E1168 002DE0A8  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802E116C 002DE0AC  C0 43 02 D8 */	lfs f2, 0x2d8(r3)
/* 802E1170 002DE0B0  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 802E1174 002DE0B4  C0 02 E9 F0 */	lfs f0, lbl_8051CD50@sda21(r2)
/* 802E1178 002DE0B8  EC 22 08 28 */	fsubs f1, f2, f1
/* 802E117C 002DE0BC  D0 23 02 D8 */	stfs f1, 0x2d8(r3)
/* 802E1180 002DE0C0  C0 23 02 D8 */	lfs f1, 0x2d8(r3)
/* 802E1184 002DE0C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E1188 002DE0C8  4C 80 00 20 */	bgelr 
/* 802E118C 002DE0CC  D0 03 02 D8 */	stfs f0, 0x2d8(r3)
/* 802E1190 002DE0D0  4E 80 00 20 */	blr 

.global startBigTreasureBootUpDemo__Q34Game11BigTreasure3ObjFv
startBigTreasureBootUpDemo__Q34Game11BigTreasure3ObjFv:
/* 802E1194 002DE0D4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802E1198 002DE0D8  7C 08 02 A6 */	mflr r0
/* 802E119C 002DE0DC  90 01 00 54 */	stw r0, 0x54(r1)
/* 802E11A0 002DE0E0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802E11A4 002DE0E4  7C 7F 1B 78 */	mr r31, r3
/* 802E11A8 002DE0E8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802E11AC 002DE0EC  28 04 00 00 */	cmplwi r4, 0
/* 802E11B0 002DE0F0  41 82 00 C8 */	beq .L_802E1278
/* 802E11B4 002DE0F4  80 04 00 44 */	lwz r0, 0x44(r4)
/* 802E11B8 002DE0F8  2C 00 00 00 */	cmpwi r0, 0
/* 802E11BC 002DE0FC  40 82 00 BC */	bne .L_802E1278
/* 802E11C0 002DE100  80 0D 9B 54 */	lwz r0, moviePlayer__4Game@sda21(r13)
/* 802E11C4 002DE104  28 00 00 00 */	cmplwi r0, 0
/* 802E11C8 002DE108  41 82 00 B0 */	beq .L_802E1278
/* 802E11CC 002DE10C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802E11D0 002DE110  38 80 00 17 */	li r4, 0x17
/* 802E11D4 002DE114  4B F0 62 0D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 802E11D8 002DE118  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E11DC 002DE11C  40 82 00 9C */	bne .L_802E1278
/* 802E11E0 002DE120  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802E11E4 002DE124  38 80 00 17 */	li r4, 0x17
/* 802E11E8 002DE128  4B F0 61 BD */	bl setDemoFlag__Q24Game8PlayDataFi
/* 802E11EC 002DE12C  C0 02 E8 D0 */	lfs f0, lbl_8051CC30@sda21(r2)
/* 802E11F0 002DE130  3C 60 80 49 */	lis r3, lbl_8048CC30@ha
/* 802E11F4 002DE134  38 00 00 00 */	li r0, 0
/* 802E11F8 002DE138  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 802E11FC 002DE13C  38 C3 CC 30 */	addi r6, r3, lbl_8048CC30@l
/* 802E1200 002DE140  90 01 00 0C */	stw r0, 0xc(r1)
/* 802E1204 002DE144  7F E3 FB 78 */	mr r3, r31
/* 802E1208 002DE148  38 80 00 00 */	li r4, 0
/* 802E120C 002DE14C  90 C1 00 08 */	stw r6, 8(r1)
/* 802E1210 002DE150  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E1214 002DE154  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802E1218 002DE158  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802E121C 002DE15C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802E1220 002DE160  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802E1224 002DE164  90 01 00 30 */	stw r0, 0x30(r1)
/* 802E1228 002DE168  90 01 00 18 */	stw r0, 0x18(r1)
/* 802E122C 002DE16C  90 01 00 10 */	stw r0, 0x10(r1)
/* 802E1230 002DE170  90 01 00 34 */	stw r0, 0x34(r1)
/* 802E1234 002DE174  90 01 00 1C */	stw r0, 0x1c(r1)
/* 802E1238 002DE178  90 01 00 38 */	stw r0, 0x38(r1)
/* 802E123C 002DE17C  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 802E1240 002DE180  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802E1244 002DE184  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802E1248 002DE188  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802E124C 002DE18C  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 802E1250 002DE190  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802E1254 002DE194  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802E1258 002DE198  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802E125C 002DE19C  93 E5 01 94 */	stw r31, 0x194(r5)
/* 802E1260 002DE1A0  4B E5 A7 F1 */	bl movie_begin__Q24Game8CreatureFb
/* 802E1264 002DE1A4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802E1268 002DE1A8  38 81 00 08 */	addi r4, r1, 8
/* 802E126C 002DE1AC  48 14 B7 65 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802E1270 002DE1B0  38 60 00 01 */	li r3, 1
/* 802E1274 002DE1B4  48 00 00 08 */	b .L_802E127C
.L_802E1278:
/* 802E1278 002DE1B8  38 60 00 00 */	li r3, 0
.L_802E127C:
/* 802E127C 002DE1BC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802E1280 002DE1C0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802E1284 002DE1C4  7C 08 03 A6 */	mtlr r0
/* 802E1288 002DE1C8  38 21 00 50 */	addi r1, r1, 0x50
/* 802E128C 002DE1CC  4E 80 00 20 */	blr 

.global __dt__Q23efx14TOootaParticleFv
__dt__Q23efx14TOootaParticleFv:
/* 802E1290 002DE1D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E1294 002DE1D4  7C 08 02 A6 */	mflr r0
/* 802E1298 002DE1D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E129C 002DE1DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E12A0 002DE1E0  7C 9F 23 78 */	mr r31, r4
/* 802E12A4 002DE1E4  93 C1 00 08 */	stw r30, 8(r1)
/* 802E12A8 002DE1E8  7C 7E 1B 79 */	or. r30, r3, r3
/* 802E12AC 002DE1EC  41 82 00 64 */	beq .L_802E1310
/* 802E12B0 002DE1F0  3C 60 80 4D */	lis r3, __vt__Q23efx14TOootaParticle@ha
/* 802E12B4 002DE1F4  38 63 33 18 */	addi r3, r3, __vt__Q23efx14TOootaParticle@l
/* 802E12B8 002DE1F8  90 7E 00 00 */	stw r3, 0(r30)
/* 802E12BC 002DE1FC  38 03 00 14 */	addi r0, r3, 0x14
/* 802E12C0 002DE200  90 1E 00 04 */	stw r0, 4(r30)
/* 802E12C4 002DE204  41 82 00 3C */	beq .L_802E1300
/* 802E12C8 002DE208  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 802E12CC 002DE20C  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 802E12D0 002DE210  90 7E 00 00 */	stw r3, 0(r30)
/* 802E12D4 002DE214  38 03 00 14 */	addi r0, r3, 0x14
/* 802E12D8 002DE218  90 1E 00 04 */	stw r0, 4(r30)
/* 802E12DC 002DE21C  41 82 00 24 */	beq .L_802E1300
/* 802E12E0 002DE220  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802E12E4 002DE224  38 7E 00 04 */	addi r3, r30, 4
/* 802E12E8 002DE228  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802E12EC 002DE22C  38 80 00 00 */	li r4, 0
/* 802E12F0 002DE230  90 BE 00 00 */	stw r5, 0(r30)
/* 802E12F4 002DE234  38 05 00 14 */	addi r0, r5, 0x14
/* 802E12F8 002DE238  90 1E 00 04 */	stw r0, 4(r30)
/* 802E12FC 002DE23C  4B DA E9 A1 */	bl __dt__18JPAEmitterCallBackFv
.L_802E1300:
/* 802E1300 002DE240  7F E0 07 35 */	extsh. r0, r31
/* 802E1304 002DE244  40 81 00 0C */	ble .L_802E1310
/* 802E1308 002DE248  7F C3 F3 78 */	mr r3, r30
/* 802E130C 002DE24C  4B D4 2D A9 */	bl __dl__FPv
.L_802E1310:
/* 802E1310 002DE250  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E1314 002DE254  7F C3 F3 78 */	mr r3, r30
/* 802E1318 002DE258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E131C 002DE25C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E1320 002DE260  7C 08 03 A6 */	mtlr r0
/* 802E1324 002DE264  38 21 00 10 */	addi r1, r1, 0x10
/* 802E1328 002DE268  4E 80 00 20 */	blr 

.global __dt__Q23efx16TOootaChangeBodyFv
__dt__Q23efx16TOootaChangeBodyFv:
/* 802E132C 002DE26C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E1330 002DE270  7C 08 02 A6 */	mflr r0
/* 802E1334 002DE274  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E1338 002DE278  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E133C 002DE27C  7C 9F 23 78 */	mr r31, r4
/* 802E1340 002DE280  93 C1 00 08 */	stw r30, 8(r1)
/* 802E1344 002DE284  7C 7E 1B 79 */	or. r30, r3, r3
/* 802E1348 002DE288  41 82 00 64 */	beq .L_802E13AC
/* 802E134C 002DE28C  3C 60 80 4D */	lis r3, __vt__Q23efx16TOootaChangeBody@ha
/* 802E1350 002DE290  38 63 33 64 */	addi r3, r3, __vt__Q23efx16TOootaChangeBody@l
/* 802E1354 002DE294  90 7E 00 00 */	stw r3, 0(r30)
/* 802E1358 002DE298  38 03 00 14 */	addi r0, r3, 0x14
/* 802E135C 002DE29C  90 1E 00 04 */	stw r0, 4(r30)
/* 802E1360 002DE2A0  41 82 00 3C */	beq .L_802E139C
/* 802E1364 002DE2A4  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802E1368 002DE2A8  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802E136C 002DE2AC  90 7E 00 00 */	stw r3, 0(r30)
/* 802E1370 002DE2B0  38 03 00 14 */	addi r0, r3, 0x14
/* 802E1374 002DE2B4  90 1E 00 04 */	stw r0, 4(r30)
/* 802E1378 002DE2B8  41 82 00 24 */	beq .L_802E139C
/* 802E137C 002DE2BC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802E1380 002DE2C0  38 7E 00 04 */	addi r3, r30, 4
/* 802E1384 002DE2C4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802E1388 002DE2C8  38 80 00 00 */	li r4, 0
/* 802E138C 002DE2CC  90 BE 00 00 */	stw r5, 0(r30)
/* 802E1390 002DE2D0  38 05 00 14 */	addi r0, r5, 0x14
/* 802E1394 002DE2D4  90 1E 00 04 */	stw r0, 4(r30)
/* 802E1398 002DE2D8  4B DA E9 05 */	bl __dt__18JPAEmitterCallBackFv
.L_802E139C:
/* 802E139C 002DE2DC  7F E0 07 35 */	extsh. r0, r31
/* 802E13A0 002DE2E0  40 81 00 0C */	ble .L_802E13AC
/* 802E13A4 002DE2E4  7F C3 F3 78 */	mr r3, r30
/* 802E13A8 002DE2E8  4B D4 2D 0D */	bl __dl__FPv
.L_802E13AC:
/* 802E13AC 002DE2EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E13B0 002DE2F0  7F C3 F3 78 */	mr r3, r30
/* 802E13B4 002DE2F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E13B8 002DE2F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E13BC 002DE2FC  7C 08 03 A6 */	mtlr r0
/* 802E13C0 002DE300  38 21 00 10 */	addi r1, r1, 0x10
/* 802E13C4 002DE304  4E 80 00 20 */	blr 

.global __dt__Q23efx13TOootaDeadAwaFv
__dt__Q23efx13TOootaDeadAwaFv:
/* 802E13C8 002DE308  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E13CC 002DE30C  7C 08 02 A6 */	mflr r0
/* 802E13D0 002DE310  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E13D4 002DE314  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E13D8 002DE318  7C 9F 23 78 */	mr r31, r4
/* 802E13DC 002DE31C  93 C1 00 08 */	stw r30, 8(r1)
/* 802E13E0 002DE320  7C 7E 1B 79 */	or. r30, r3, r3
/* 802E13E4 002DE324  41 82 00 64 */	beq .L_802E1448
/* 802E13E8 002DE328  3C 60 80 4D */	lis r3, __vt__Q23efx13TOootaDeadAwa@ha
/* 802E13EC 002DE32C  38 63 33 B0 */	addi r3, r3, __vt__Q23efx13TOootaDeadAwa@l
/* 802E13F0 002DE330  90 7E 00 00 */	stw r3, 0(r30)
/* 802E13F4 002DE334  38 03 00 14 */	addi r0, r3, 0x14
/* 802E13F8 002DE338  90 1E 00 04 */	stw r0, 4(r30)
/* 802E13FC 002DE33C  41 82 00 3C */	beq .L_802E1438
/* 802E1400 002DE340  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802E1404 002DE344  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802E1408 002DE348  90 7E 00 00 */	stw r3, 0(r30)
/* 802E140C 002DE34C  38 03 00 14 */	addi r0, r3, 0x14
/* 802E1410 002DE350  90 1E 00 04 */	stw r0, 4(r30)
/* 802E1414 002DE354  41 82 00 24 */	beq .L_802E1438
/* 802E1418 002DE358  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802E141C 002DE35C  38 7E 00 04 */	addi r3, r30, 4
/* 802E1420 002DE360  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802E1424 002DE364  38 80 00 00 */	li r4, 0
/* 802E1428 002DE368  90 BE 00 00 */	stw r5, 0(r30)
/* 802E142C 002DE36C  38 05 00 14 */	addi r0, r5, 0x14
/* 802E1430 002DE370  90 1E 00 04 */	stw r0, 4(r30)
/* 802E1434 002DE374  4B DA E8 69 */	bl __dt__18JPAEmitterCallBackFv
.L_802E1438:
/* 802E1438 002DE378  7F E0 07 35 */	extsh. r0, r31
/* 802E143C 002DE37C  40 81 00 0C */	ble .L_802E1448
/* 802E1440 002DE380  7F C3 F3 78 */	mr r3, r30
/* 802E1444 002DE384  4B D4 2C 71 */	bl __dl__FPv
.L_802E1448:
/* 802E1448 002DE388  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E144C 002DE38C  7F C3 F3 78 */	mr r3, r30
/* 802E1450 002DE390  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E1454 002DE394  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E1458 002DE398  7C 08 03 A6 */	mtlr r0
/* 802E145C 002DE39C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E1460 002DE3A0  4E 80 00 20 */	blr 

.global __dt__Q23efx15TOootaStartBodyFv
__dt__Q23efx15TOootaStartBodyFv:
/* 802E1464 002DE3A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E1468 002DE3A8  7C 08 02 A6 */	mflr r0
/* 802E146C 002DE3AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E1470 002DE3B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E1474 002DE3B4  7C 9F 23 78 */	mr r31, r4
/* 802E1478 002DE3B8  93 C1 00 08 */	stw r30, 8(r1)
/* 802E147C 002DE3BC  7C 7E 1B 79 */	or. r30, r3, r3
/* 802E1480 002DE3C0  41 82 00 64 */	beq .L_802E14E4
/* 802E1484 002DE3C4  3C 60 80 4D */	lis r3, __vt__Q23efx15TOootaStartBody@ha
/* 802E1488 002DE3C8  38 63 34 18 */	addi r3, r3, __vt__Q23efx15TOootaStartBody@l
/* 802E148C 002DE3CC  90 7E 00 00 */	stw r3, 0(r30)
/* 802E1490 002DE3D0  38 03 00 14 */	addi r0, r3, 0x14
/* 802E1494 002DE3D4  90 1E 00 04 */	stw r0, 4(r30)
/* 802E1498 002DE3D8  41 82 00 3C */	beq .L_802E14D4
/* 802E149C 002DE3DC  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802E14A0 002DE3E0  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802E14A4 002DE3E4  90 7E 00 00 */	stw r3, 0(r30)
/* 802E14A8 002DE3E8  38 03 00 14 */	addi r0, r3, 0x14
/* 802E14AC 002DE3EC  90 1E 00 04 */	stw r0, 4(r30)
/* 802E14B0 002DE3F0  41 82 00 24 */	beq .L_802E14D4
/* 802E14B4 002DE3F4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802E14B8 002DE3F8  38 7E 00 04 */	addi r3, r30, 4
/* 802E14BC 002DE3FC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802E14C0 002DE400  38 80 00 00 */	li r4, 0
/* 802E14C4 002DE404  90 BE 00 00 */	stw r5, 0(r30)
/* 802E14C8 002DE408  38 05 00 14 */	addi r0, r5, 0x14
/* 802E14CC 002DE40C  90 1E 00 04 */	stw r0, 4(r30)
/* 802E14D0 002DE410  4B DA E7 CD */	bl __dt__18JPAEmitterCallBackFv
.L_802E14D4:
/* 802E14D4 002DE414  7F E0 07 35 */	extsh. r0, r31
/* 802E14D8 002DE418  40 81 00 0C */	ble .L_802E14E4
/* 802E14DC 002DE41C  7F C3 F3 78 */	mr r3, r30
/* 802E14E0 002DE420  4B D4 2B D5 */	bl __dl__FPv
.L_802E14E4:
/* 802E14E4 002DE424  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E14E8 002DE428  7F C3 F3 78 */	mr r3, r30
/* 802E14EC 002DE42C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E14F0 002DE430  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E14F4 002DE434  7C 08 03 A6 */	mtlr r0
/* 802E14F8 002DE438  38 21 00 10 */	addi r1, r1, 0x10
/* 802E14FC 002DE43C  4E 80 00 20 */	blr 

.global __dt__Q23efx15TOootaChangeLegFv
__dt__Q23efx15TOootaChangeLegFv:
/* 802E1500 002DE440  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E1504 002DE444  7C 08 02 A6 */	mflr r0
/* 802E1508 002DE448  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E150C 002DE44C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E1510 002DE450  7C 9F 23 78 */	mr r31, r4
/* 802E1514 002DE454  93 C1 00 08 */	stw r30, 8(r1)
/* 802E1518 002DE458  7C 7E 1B 79 */	or. r30, r3, r3
/* 802E151C 002DE45C  41 82 00 64 */	beq .L_802E1580
/* 802E1520 002DE460  3C 60 80 4D */	lis r3, __vt__Q23efx15TOootaChangeLeg@ha
/* 802E1524 002DE464  38 63 34 64 */	addi r3, r3, __vt__Q23efx15TOootaChangeLeg@l
/* 802E1528 002DE468  90 7E 00 00 */	stw r3, 0(r30)
/* 802E152C 002DE46C  38 03 00 14 */	addi r0, r3, 0x14
/* 802E1530 002DE470  90 1E 00 04 */	stw r0, 4(r30)
/* 802E1534 002DE474  41 82 00 3C */	beq .L_802E1570
/* 802E1538 002DE478  3C 60 80 4E */	lis r3, __vt__Q23efx23TChasePosPosLocalYScale@ha
/* 802E153C 002DE47C  38 63 67 78 */	addi r3, r3, __vt__Q23efx23TChasePosPosLocalYScale@l
/* 802E1540 002DE480  90 7E 00 00 */	stw r3, 0(r30)
/* 802E1544 002DE484  38 03 00 14 */	addi r0, r3, 0x14
/* 802E1548 002DE488  90 1E 00 04 */	stw r0, 4(r30)
/* 802E154C 002DE48C  41 82 00 24 */	beq .L_802E1570
/* 802E1550 002DE490  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802E1554 002DE494  38 7E 00 04 */	addi r3, r30, 4
/* 802E1558 002DE498  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802E155C 002DE49C  38 80 00 00 */	li r4, 0
/* 802E1560 002DE4A0  90 BE 00 00 */	stw r5, 0(r30)
/* 802E1564 002DE4A4  38 05 00 14 */	addi r0, r5, 0x14
/* 802E1568 002DE4A8  90 1E 00 04 */	stw r0, 4(r30)
/* 802E156C 002DE4AC  4B DA E7 31 */	bl __dt__18JPAEmitterCallBackFv
.L_802E1570:
/* 802E1570 002DE4B0  7F E0 07 35 */	extsh. r0, r31
/* 802E1574 002DE4B4  40 81 00 0C */	ble .L_802E1580
/* 802E1578 002DE4B8  7F C3 F3 78 */	mr r3, r30
/* 802E157C 002DE4BC  4B D4 2B 39 */	bl __dl__FPv
.L_802E1580:
/* 802E1580 002DE4C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E1584 002DE4C4  7F C3 F3 78 */	mr r3, r30
/* 802E1588 002DE4C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E158C 002DE4CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E1590 002DE4D0  7C 08 03 A6 */	mtlr r0
/* 802E1594 002DE4D4  38 21 00 10 */	addi r1, r1, 0x10
/* 802E1598 002DE4D8  4E 80 00 20 */	blr 

.global __dt__Q23efx14TOootaStartLegFv
__dt__Q23efx14TOootaStartLegFv:
/* 802E159C 002DE4DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E15A0 002DE4E0  7C 08 02 A6 */	mflr r0
/* 802E15A4 002DE4E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E15A8 002DE4E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E15AC 002DE4EC  7C 9F 23 78 */	mr r31, r4
/* 802E15B0 002DE4F0  93 C1 00 08 */	stw r30, 8(r1)
/* 802E15B4 002DE4F4  7C 7E 1B 79 */	or. r30, r3, r3
/* 802E15B8 002DE4F8  41 82 00 64 */	beq .L_802E161C
/* 802E15BC 002DE4FC  3C 60 80 4D */	lis r3, __vt__Q23efx14TOootaStartLeg@ha
/* 802E15C0 002DE500  38 63 34 CC */	addi r3, r3, __vt__Q23efx14TOootaStartLeg@l
/* 802E15C4 002DE504  90 7E 00 00 */	stw r3, 0(r30)
/* 802E15C8 002DE508  38 03 00 14 */	addi r0, r3, 0x14
/* 802E15CC 002DE50C  90 1E 00 04 */	stw r0, 4(r30)
/* 802E15D0 002DE510  41 82 00 3C */	beq .L_802E160C
/* 802E15D4 002DE514  3C 60 80 4E */	lis r3, __vt__Q23efx23TChasePosPosLocalYScale@ha
/* 802E15D8 002DE518  38 63 67 78 */	addi r3, r3, __vt__Q23efx23TChasePosPosLocalYScale@l
/* 802E15DC 002DE51C  90 7E 00 00 */	stw r3, 0(r30)
/* 802E15E0 002DE520  38 03 00 14 */	addi r0, r3, 0x14
/* 802E15E4 002DE524  90 1E 00 04 */	stw r0, 4(r30)
/* 802E15E8 002DE528  41 82 00 24 */	beq .L_802E160C
/* 802E15EC 002DE52C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802E15F0 002DE530  38 7E 00 04 */	addi r3, r30, 4
/* 802E15F4 002DE534  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802E15F8 002DE538  38 80 00 00 */	li r4, 0
/* 802E15FC 002DE53C  90 BE 00 00 */	stw r5, 0(r30)
/* 802E1600 002DE540  38 05 00 14 */	addi r0, r5, 0x14
/* 802E1604 002DE544  90 1E 00 04 */	stw r0, 4(r30)
/* 802E1608 002DE548  4B DA E6 95 */	bl __dt__18JPAEmitterCallBackFv
.L_802E160C:
/* 802E160C 002DE54C  7F E0 07 35 */	extsh. r0, r31
/* 802E1610 002DE550  40 81 00 0C */	ble .L_802E161C
/* 802E1614 002DE554  7F C3 F3 78 */	mr r3, r30
/* 802E1618 002DE558  4B D4 2A 9D */	bl __dl__FPv
.L_802E161C:
/* 802E161C 002DE55C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E1620 002DE560  7F C3 F3 78 */	mr r3, r30
/* 802E1624 002DE564  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E1628 002DE568  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E162C 002DE56C  7C 08 03 A6 */	mtlr r0
/* 802E1630 002DE570  38 21 00 10 */	addi r1, r1, 0x10
/* 802E1634 002DE574  4E 80 00 20 */	blr 

.global __dt__Q23efx14TOootaStartOtaFv
__dt__Q23efx14TOootaStartOtaFv:
/* 802E1638 002DE578  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E163C 002DE57C  7C 08 02 A6 */	mflr r0
/* 802E1640 002DE580  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E1644 002DE584  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E1648 002DE588  7C 9F 23 78 */	mr r31, r4
/* 802E164C 002DE58C  93 C1 00 08 */	stw r30, 8(r1)
/* 802E1650 002DE590  7C 7E 1B 79 */	or. r30, r3, r3
/* 802E1654 002DE594  41 82 00 64 */	beq .L_802E16B8
/* 802E1658 002DE598  3C 60 80 4D */	lis r3, __vt__Q23efx14TOootaStartOta@ha
/* 802E165C 002DE59C  38 63 35 18 */	addi r3, r3, __vt__Q23efx14TOootaStartOta@l
/* 802E1660 002DE5A0  90 7E 00 00 */	stw r3, 0(r30)
/* 802E1664 002DE5A4  38 03 00 14 */	addi r0, r3, 0x14
/* 802E1668 002DE5A8  90 1E 00 04 */	stw r0, 4(r30)
/* 802E166C 002DE5AC  41 82 00 3C */	beq .L_802E16A8
/* 802E1670 002DE5B0  3C 60 80 4E */	lis r3, __vt__Q23efx10TChaseMtxT@ha
/* 802E1674 002DE5B4  38 63 68 5C */	addi r3, r3, __vt__Q23efx10TChaseMtxT@l
/* 802E1678 002DE5B8  90 7E 00 00 */	stw r3, 0(r30)
/* 802E167C 002DE5BC  38 03 00 14 */	addi r0, r3, 0x14
/* 802E1680 002DE5C0  90 1E 00 04 */	stw r0, 4(r30)
/* 802E1684 002DE5C4  41 82 00 24 */	beq .L_802E16A8
/* 802E1688 002DE5C8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802E168C 002DE5CC  38 7E 00 04 */	addi r3, r30, 4
/* 802E1690 002DE5D0  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802E1694 002DE5D4  38 80 00 00 */	li r4, 0
/* 802E1698 002DE5D8  90 BE 00 00 */	stw r5, 0(r30)
/* 802E169C 002DE5DC  38 05 00 14 */	addi r0, r5, 0x14
/* 802E16A0 002DE5E0  90 1E 00 04 */	stw r0, 4(r30)
/* 802E16A4 002DE5E4  4B DA E5 F9 */	bl __dt__18JPAEmitterCallBackFv
.L_802E16A8:
/* 802E16A8 002DE5E8  7F E0 07 35 */	extsh. r0, r31
/* 802E16AC 002DE5EC  40 81 00 0C */	ble .L_802E16B8
/* 802E16B0 002DE5F0  7F C3 F3 78 */	mr r3, r30
/* 802E16B4 002DE5F4  4B D4 2A 01 */	bl __dl__FPv
.L_802E16B8:
/* 802E16B8 002DE5F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E16BC 002DE5FC  7F C3 F3 78 */	mr r3, r30
/* 802E16C0 002DE600  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E16C4 002DE604  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E16C8 002DE608  7C 08 03 A6 */	mtlr r0
/* 802E16CC 002DE60C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E16D0 002DE610  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game11BigTreasure3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game11BigTreasure3ObjFPQ24Game8WaterBox:
/* 802E16D4 002DE614  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game11BigTreasure3ObjFv
outWaterCallback__Q34Game11BigTreasure3ObjFv:
/* 802E16D8 002DE618  4E 80 00 20 */	blr 

.global getDamageCoeStoneState__Q34Game11BigTreasure3ObjFv
getDamageCoeStoneState__Q34Game11BigTreasure3ObjFv:
/* 802E16DC 002DE61C  C0 22 E9 38 */	lfs f1, lbl_8051CC98@sda21(r2)
/* 802E16E0 002DE620  4E 80 00 20 */	blr 

.global throwupItemInDeathProcedure__Q34Game11BigTreasure3ObjFv
throwupItemInDeathProcedure__Q34Game11BigTreasure3ObjFv:
/* 802E16E4 002DE624  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game11BigTreasure3ObjFv
getEnemyTypeID__Q34Game11BigTreasure3ObjFv:
/* 802E16E8 002DE628  38 60 00 49 */	li r3, 0x49
/* 802E16EC 002DE62C  4E 80 00 20 */	blr 

.global __dt__Q34Game11BigTreasure14ProperAnimatorFv
__dt__Q34Game11BigTreasure14ProperAnimatorFv:
/* 802E16F0 002DE630  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E16F4 002DE634  7C 08 02 A6 */	mflr r0
/* 802E16F8 002DE638  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E16FC 002DE63C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E1700 002DE640  7C 7F 1B 79 */	or. r31, r3, r3
/* 802E1704 002DE644  41 82 00 40 */	beq .L_802E1744
/* 802E1708 002DE648  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure14ProperAnimator@ha
/* 802E170C 002DE64C  38 03 38 AC */	addi r0, r3, __vt__Q34Game11BigTreasure14ProperAnimator@l
/* 802E1710 002DE650  90 1F 00 00 */	stw r0, 0(r31)
/* 802E1714 002DE654  41 82 00 20 */	beq .L_802E1734
/* 802E1718 002DE658  3C 60 80 4B */	lis r3, __vt__Q24Game22EnemyBlendAnimatorBase@ha
/* 802E171C 002DE65C  38 03 F8 24 */	addi r0, r3, __vt__Q24Game22EnemyBlendAnimatorBase@l
/* 802E1720 002DE660  90 1F 00 00 */	stw r0, 0(r31)
/* 802E1724 002DE664  41 82 00 10 */	beq .L_802E1734
/* 802E1728 002DE668  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802E172C 002DE66C  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802E1730 002DE670  90 1F 00 00 */	stw r0, 0(r31)
.L_802E1734:
/* 802E1734 002DE674  7C 80 07 35 */	extsh. r0, r4
/* 802E1738 002DE678  40 81 00 0C */	ble .L_802E1744
/* 802E173C 002DE67C  7F E3 FB 78 */	mr r3, r31
/* 802E1740 002DE680  4B D4 29 75 */	bl __dl__FPv
.L_802E1744:
/* 802E1744 002DE684  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E1748 002DE688  7F E3 FB 78 */	mr r3, r31
/* 802E174C 002DE68C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E1750 002DE690  7C 08 03 A6 */	mtlr r0
/* 802E1754 002DE694  38 21 00 10 */	addi r1, r1, 0x10
/* 802E1758 002DE698  4E 80 00 20 */	blr 

.global __sinit_BigTreasure_cpp
__sinit_BigTreasure_cpp:
/* 802E175C 002DE69C  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802E1760 002DE6A0  38 00 FF FF */	li r0, -1
/* 802E1764 002DE6A4  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802E1768 002DE6A8  3C 60 80 4D */	lis r3, govNAN___Q24Game5P2JST@ha
/* 802E176C 002DE6AC  90 0D 97 60 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 802E1770 002DE6B0  D4 03 32 98 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 802E1774 002DE6B4  D0 0D 97 64 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 802E1778 002DE6B8  D0 03 00 04 */	stfs f0, 4(r3)
/* 802E177C 002DE6BC  D0 03 00 08 */	stfs f0, 8(r3)
/* 802E1780 002DE6C0  4E 80 00 20 */	blr 

.global "@1412@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
"@1412@12@viewOnPelletKilled__Q24Game9EnemyBaseFv":
/* 802E1784 002DE6C4  39 60 00 0C */	li r11, 0xc
/* 802E1788 002DE6C8  7D 63 58 2E */	lwzx r11, r3, r11
/* 802E178C 002DE6CC  7C 63 5A 14 */	add r3, r3, r11
/* 802E1790 002DE6D0  38 63 FA 7C */	addi r3, r3, -1412
/* 802E1794 002DE6D4  4B E2 51 88 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv

.global "@1412@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
"@1412@12@viewStartCarryMotion__Q24Game9EnemyBaseFv":
/* 802E1798 002DE6D8  39 60 00 0C */	li r11, 0xc
/* 802E179C 002DE6DC  7D 63 58 2E */	lwzx r11, r3, r11
/* 802E17A0 002DE6E0  7C 63 5A 14 */	add r3, r3, r11
/* 802E17A4 002DE6E4  38 63 FA 7C */	addi r3, r3, -1412
/* 802E17A8 002DE6E8  4B E2 4F 00 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv

.global "@1412@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
"@1412@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv":
/* 802E17AC 002DE6EC  39 60 00 0C */	li r11, 0xc
/* 802E17B0 002DE6F0  7D 63 58 2E */	lwzx r11, r3, r11
/* 802E17B4 002DE6F4  7C 63 5A 14 */	add r3, r3, r11
/* 802E17B8 002DE6F8  38 63 FA 7C */	addi r3, r3, -1412
/* 802E17BC 002DE6FC  4B E2 4F 0C */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv

.global "@1412@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
"@1412@12@view_finish_carrymotion__Q24Game9EnemyBaseFv":
/* 802E17C0 002DE700  39 60 00 0C */	li r11, 0xc
/* 802E17C4 002DE704  7D 63 58 2E */	lwzx r11, r3, r11
/* 802E17C8 002DE708  7C 63 5A 14 */	add r3, r3, r11
/* 802E17CC 002DE70C  38 63 FA 7C */	addi r3, r3, -1412
/* 802E17D0 002DE710  4B E2 52 A8 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv

.global "@1412@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
"@1412@12@view_start_carrymotion__Q24Game9EnemyBaseFv":
/* 802E17D4 002DE714  39 60 00 0C */	li r11, 0xc
/* 802E17D8 002DE718  7D 63 58 2E */	lwzx r11, r3, r11
/* 802E17DC 002DE71C  7C 63 5A 14 */	add r3, r3, r11
/* 802E17E0 002DE720  38 63 FA 7C */	addi r3, r3, -1412
/* 802E17E4 002DE724  4B E2 52 68 */	b view_start_carrymotion__Q24Game9EnemyBaseFv

.global "@1412@12@viewGetShape__Q24Game9EnemyBaseFv"
"@1412@12@viewGetShape__Q24Game9EnemyBaseFv":
/* 802E17E8 002DE728  39 60 00 0C */	li r11, 0xc
/* 802E17EC 002DE72C  7D 63 58 2E */	lwzx r11, r3, r11
/* 802E17F0 002DE730  7C 63 5A 14 */	add r3, r3, r11
/* 802E17F4 002DE734  38 63 FA 7C */	addi r3, r3, -1412
/* 802E17F8 002DE738  4B E2 4E A8 */	b viewGetShape__Q24Game9EnemyBaseFv

.global "@4@__dt__Q23efx14TOootaStartOtaFv"
"@4@__dt__Q23efx14TOootaStartOtaFv":
/* 802E17FC 002DE73C  38 63 FF FC */	addi r3, r3, -4
/* 802E1800 002DE740  4B FF FE 38 */	b __dt__Q23efx14TOootaStartOtaFv

.global "@4@__dt__Q23efx14TOootaStartLegFv"
"@4@__dt__Q23efx14TOootaStartLegFv":
/* 802E1804 002DE744  38 63 FF FC */	addi r3, r3, -4
/* 802E1808 002DE748  4B FF FD 94 */	b __dt__Q23efx14TOootaStartLegFv

.global "@4@__dt__Q23efx15TOootaChangeLegFv"
"@4@__dt__Q23efx15TOootaChangeLegFv":
/* 802E180C 002DE74C  38 63 FF FC */	addi r3, r3, -4
/* 802E1810 002DE750  4B FF FC F0 */	b __dt__Q23efx15TOootaChangeLegFv

.global "@4@__dt__Q23efx15TOootaStartBodyFv"
"@4@__dt__Q23efx15TOootaStartBodyFv":
/* 802E1814 002DE754  38 63 FF FC */	addi r3, r3, -4
/* 802E1818 002DE758  4B FF FC 4C */	b __dt__Q23efx15TOootaStartBodyFv

.global "@4@__dt__Q23efx13TOootaDeadAwaFv"
"@4@__dt__Q23efx13TOootaDeadAwaFv":
/* 802E181C 002DE75C  38 63 FF FC */	addi r3, r3, -4
/* 802E1820 002DE760  4B FF FB A8 */	b __dt__Q23efx13TOootaDeadAwaFv

.global "@4@__dt__Q23efx16TOootaChangeBodyFv"
"@4@__dt__Q23efx16TOootaChangeBodyFv":
/* 802E1824 002DE764  38 63 FF FC */	addi r3, r3, -4
/* 802E1828 002DE768  4B FF FB 04 */	b __dt__Q23efx16TOootaChangeBodyFv

.global "@4@__dt__Q23efx14TOootaParticleFv"
"@4@__dt__Q23efx14TOootaParticleFv":
/* 802E182C 002DE76C  38 63 FF FC */	addi r3, r3, -4
/* 802E1830 002DE770  4B FF FA 60 */	b __dt__Q23efx14TOootaParticleFv
