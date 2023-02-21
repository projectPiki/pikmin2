.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_kingChappy_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_804915D0, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_804915D0
.balign 4
.obj lbl_804915DC, local
	.asciz "kingChappy"
.endobj lbl_804915DC
.balign 4
.obj lbl_804915E8, local
	.asciz "kingChappy.cpp"
.endobj lbl_804915E8
.balign 4
.obj lbl_804915F8, local
	.asciz "P2Assert"
.endobj lbl_804915F8
.balign 4
.obj lbl_80491604, local
	.asciz "PSMainSide_ObjSound.h"
.endobj lbl_80491604
.balign 4
.obj lbl_8049161C, local
	.4byte lbl_8051E6E4
	.4byte lbl_8051E6EC
	.4byte lbl_8051E6F4
	.4byte lbl_8051E6FC
	.4byte lbl_8051E704
	.4byte lbl_8051E70C
	.4byte lbl_8051E714
	.4byte lbl_8051E71C
	.4byte lbl_8051E724
.endobj lbl_8049161C
.balign 4
.obj lbl_80491640, local
	.asciz "ArgEnemyType"
.endobj lbl_80491640
.balign 4
.obj lbl_80491650, local
	.asciz "ArgScale"
.endobj lbl_80491650
.balign 4
.obj lbl_8049165C, local
	.asciz "ArgKchYodare"
.endobj lbl_8049165C

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj lbl_804E1D34, local
	.4byte .L_803617F8
	.4byte .L_80361844
	.4byte .L_803618A0
	.4byte .L_803618C8
	.4byte .L_803618F0
	.4byte .L_803619B8
	.4byte .L_803619E0
	.4byte .L_80361A2C
	.4byte .L_80361A9C
.endobj lbl_804E1D34
.obj lbl_804E1D58, local
	.4byte .L_80361C00
	.4byte .L_80361C18
	.4byte .L_80361C44
	.4byte .L_80361C5C
	.4byte .L_80361CF8
	.4byte .L_80361C74
	.4byte .L_80361C8C
	.4byte .L_80361CA4
	.4byte .L_80361CD0
.endobj lbl_804E1D58
.obj __vt__Q23efx12ArgKchYodare, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx12ArgKchYodareFv
.endobj __vt__Q23efx12ArgKchYodare
.obj __vt__Q23efx10TKchYodare, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx22TKchYodareBaseChaseMtxFPQ23efx3Arg
	.4byte forceKill__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte fade__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx10TKchYodareFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte endDemoDrawOn__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte __dt__Q23efx10TKchYodareFv
.endobj __vt__Q23efx10TKchYodare
.obj __vt__Q23efx16TKchAttackYodare, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx22TKchYodareBaseChaseMtxFPQ23efx3Arg
	.4byte forceKill__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte fade__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx16TKchAttackYodareFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte endDemoDrawOn__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte __dt__Q23efx16TKchAttackYodareFv
.endobj __vt__Q23efx16TKchAttackYodare
.obj __vt__Q23efx14TKchDeadYodare, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx22TKchYodareBaseChaseMtxFPQ23efx3Arg
	.4byte forceKill__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte fade__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TKchDeadYodareFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte endDemoDrawOn__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte __dt__Q23efx14TKchDeadYodareFv
.endobj __vt__Q23efx14TKchDeadYodare
.obj __vt__Q23efx16TKchYodareHitWat, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx17TOneEmitterSimpleFPQ23efx3Arg
	.4byte forceKill__Q23efx17TOneEmitterSimpleFv
	.4byte fade__Q23efx17TOneEmitterSimpleFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx16TKchYodareHitWatFv"
	.4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte "@4@executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx17TOneEmitterSimpleFv
	.4byte endDemoDrawOn__Q23efx17TOneEmitterSimpleFv
	.4byte __dt__Q23efx16TKchYodareHitWatFv
.endobj __vt__Q23efx16TKchYodareHitWat
.obj __vt__Q23efx15TKchYodareHitGr, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx17TOneEmitterSimpleFPQ23efx3Arg
	.4byte forceKill__Q23efx17TOneEmitterSimpleFv
	.4byte fade__Q23efx17TOneEmitterSimpleFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx15TKchYodareHitGrFv"
	.4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte "@4@executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx17TOneEmitterSimpleFv
	.4byte endDemoDrawOn__Q23efx17TOneEmitterSimpleFv
	.4byte __dt__Q23efx15TKchYodareHitGrFv
.endobj __vt__Q23efx15TKchYodareHitGr
.obj __vt__Q23efx12TKchDeadHana, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
.endobj __vt__Q23efx12TKchDeadHana
.obj __vt__Q23efx13TKchSmokeHana, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx13TKchSmokeHanaFv"
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
	.4byte __dt__Q23efx13TKchSmokeHanaFv
.endobj __vt__Q23efx13TKchSmokeHana
.obj __vt__Q23efx10TKchCryInd, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx10TKchCryIndFv"
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
	.4byte __dt__Q23efx10TKchCryIndFv
.endobj __vt__Q23efx10TKchCryInd
.obj __vt__Q23efx9TKchCryAB, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
.endobj __vt__Q23efx9TKchCryAB
.obj __vt__Q23efx11TKchDiveWat, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "fade__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "startDemoDrawOff__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "endDemoDrawOn__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
.endobj __vt__Q23efx11TKchDiveWat
.obj __vt__Q23efx12TKchDiveSand, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "fade__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "startDemoDrawOff__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "endDemoDrawOn__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
.endobj __vt__Q23efx12TKchDiveSand
.obj __vt__Q34Game10KingChappy14ProperAnimator, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game10KingChappy14ProperAnimatorFv
	.4byte setAnimMgr__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFv
	.4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFi
	.4byte animate__Q24Game22EnemyBlendAnimatorBaseFf
	.4byte animate__Q24Game22EnemyBlendAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game22EnemyBlendAnimatorBaseFv
.endobj __vt__Q34Game10KingChappy14ProperAnimator
.obj __vt__Q34Game10KingChappy3Obj, global
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
	.4byte onInit__Q34Game10KingChappy3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game10KingChappy3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q34Game10KingChappy3ObjFf
	.4byte doDirectDraw__Q34Game10KingChappy3ObjFR8Graphics
	.4byte getBodyRadius__Q34Game10KingChappy3ObjFv
	.4byte getCellRadius__Q34Game10KingChappy3ObjFv
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
	.4byte inWaterCallback__Q34Game10KingChappy3ObjFPQ24Game8WaterBox
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
	.4byte isUnderground__Q34Game10KingChappy3ObjFv
	.4byte isLivingThing__Q24Game8CreatureFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
	.4byte collisionCallback__Q34Game10KingChappy3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game10KingChappy3ObjFRQ24Game11ShadowParam
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
	.4byte "applyImpulse__Q34Game10KingChappy3ObjFR10Vector3<f>R10Vector3<f>"
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
	.4byte __dt__Q34Game10KingChappy3ObjFv
	.4byte "birth__Q34Game10KingChappy3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game10KingChappy3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game10KingChappy3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q34Game10KingChappy3ObjFv
	.4byte doAnimationCullingOff__Q34Game10KingChappy3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game10KingChappy3ObjFR8Graphics
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
	.4byte setParameters__Q34Game10KingChappy3ObjFv
	.4byte initMouthSlots__Q34Game10KingChappy3ObjFv
	.4byte initWalkSmokeEffect__Q34Game10KingChappy3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game10KingChappy3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q34Game10KingChappy3ObjFv
	.4byte createEfxHamon__Q34Game10KingChappy3ObjFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game10KingChappy3ObjFv
	.4byte getMouthSlots__Q34Game10KingChappy3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game10KingChappy3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game10KingChappy3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q34Game10KingChappy3ObjFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q34Game10KingChappy3ObjFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game10KingChappy3ObjFv
	.4byte doFinishStoneState__Q34Game10KingChappy3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game10KingChappy3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q34Game10KingChappy3ObjFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game10KingChappy3ObjFv
	.4byte doStartMovie__Q34Game10KingChappy3ObjFv
	.4byte doEndMovie__Q34Game10KingChappy3ObjFv
	.4byte setFSM__Q34Game10KingChappy3ObjFPQ34Game10KingChappy3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@920@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@920@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@920@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@920@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@920@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@920@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game10KingChappy3Obj

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj curK__Q24Game10KingChappy, global
	.skip 0x4
.endobj curK__Q24Game10KingChappy

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051E668, local
	.float 60.0
.endobj lbl_8051E668
.balign 4
.obj lbl_8051E66C, local
	.asciz "kuti"
.endobj lbl_8051E66C
.balign 4
.obj lbl_8051E674, local
	.asciz "kosijnt"
.endobj lbl_8051E674
.balign 4
.obj lbl_8051E67C, local
	.asciz "bero6"
.endobj lbl_8051E67C
.balign 4
.obj lbl_8051E684, local
	.asciz "bero5"
.endobj lbl_8051E684
.balign 4
.obj lbl_8051E68C, local
	.float 0.0
.endobj lbl_8051E68C
.balign 4
.obj lbl_8051E690, local
	.asciz "asiL"
.endobj lbl_8051E690
.balign 4
.obj lbl_8051E698, local
	.asciz "asiR"
.endobj lbl_8051E698
.balign 4
.obj lbl_8051E6A0, local
	.asciz "hana"
.endobj lbl_8051E6A0
.balign 4
.obj lbl_8051E6A8, local
	.float 500.0
.endobj lbl_8051E6A8
.obj lbl_8051E6AC, local
	.float 10.0
.endobj lbl_8051E6AC
.obj lbl_8051E6B0, local
	.float -325.9493
.endobj lbl_8051E6B0
.obj lbl_8051E6B4, local
	.float 325.9493
.endobj lbl_8051E6B4
.obj lbl_8051E6B8, local
	.float 1.0
.endobj lbl_8051E6B8
.obj lbl_8051E6BC, local
	.float 20.0
.endobj lbl_8051E6BC
.obj lbl_8051E6C0, local
	.float 100.0
.endobj lbl_8051E6C0
.obj lbl_8051E6C4, local
	.float 45.0
.endobj lbl_8051E6C4
.obj lbl_8051E6C8, local
	.float 0.1
.endobj lbl_8051E6C8
.obj lbl_8051E6CC, local
	.float 5.0
.endobj lbl_8051E6CC
.obj lbl_8051E6D0, local
	.float 1600.0
.endobj lbl_8051E6D0
.obj lbl_8051E6D4, local
	.float 0.2
.endobj lbl_8051E6D4
.obj lbl_8051E6D8, local
	.float 0.25
.endobj lbl_8051E6D8
.obj lbl_8051E6DC, local
	.float 2.0
.endobj lbl_8051E6DC
.obj lbl_8051E6E0, local
	.float -1000.0
.endobj lbl_8051E6E0
.balign 4
.obj lbl_8051E6E4, local
	.asciz "kamu1"
.endobj lbl_8051E6E4
.balign 4
.obj lbl_8051E6EC, local
	.asciz "kamu2"
.endobj lbl_8051E6EC
.balign 4
.obj lbl_8051E6F4, local
	.asciz "kamu3"
.endobj lbl_8051E6F4
.balign 4
.obj lbl_8051E6FC, local
	.asciz "kamu4"
.endobj lbl_8051E6FC
.balign 4
.obj lbl_8051E704, local
	.asciz "kamu5"
.endobj lbl_8051E704
.balign 4
.obj lbl_8051E70C, local
	.asciz "kamu6"
.endobj lbl_8051E70C
.balign 4
.obj lbl_8051E714, local
	.asciz "kamu7"
.endobj lbl_8051E714
.balign 4
.obj lbl_8051E71C, local
	.asciz "kamu8"
.endobj lbl_8051E71C
.balign 4
.obj lbl_8051E724, local
	.asciz "kamu9"
.endobj lbl_8051E724
.balign 4
.obj lbl_8051E72C, local
	.float 25.0
.endobj lbl_8051E72C
.obj lbl_8051E730, local
	.float 32768.0
.endobj lbl_8051E730
.obj lbl_8051E734, local
	.float 0.3
.endobj lbl_8051E734
.obj lbl_8051E738, local # tau
	.float 6.2831855
.endobj lbl_8051E738
.balign 8
.obj lbl_8051E740, local
	.8byte 0x4330000080000000
.endobj lbl_8051E740
.obj lbl_8051E748, local
	.float 0.8
.endobj lbl_8051E748
.obj lbl_8051E74C, local # pi
	.float 3.1415927
.endobj lbl_8051E74C
.obj lbl_8051E750, local
	.float 0.0055555557
.endobj lbl_8051E750
.obj lbl_8051E754, local
	.float 50.0
.endobj lbl_8051E754
.obj lbl_8051E758, local
	.float 900.0
.endobj lbl_8051E758
.obj lbl_8051E75C, local
	.float 0.5
.endobj lbl_8051E75C
.obj lbl_8051E760, local
	.float 30.0
.endobj lbl_8051E760
.obj lbl_8051E764, local
	.float 0.7
.endobj lbl_8051E764
.balign 4
.obj lbl_8051E768, local
	.asciz "eye3R"
.endobj lbl_8051E768
.balign 4
.obj lbl_8051E770, local
	.asciz "eye3L"
.endobj lbl_8051E770
.balign 4
.obj lbl_8051E778, local
	.float 1.6
.endobj lbl_8051E778
.obj lbl_8051E77C, local
	.float 1.3
.endobj lbl_8051E77C

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn lFootCallBack__Q24Game10KingChappyFP8J3DJointi, local
/* 8035CCE8 00359C28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035CCEC 00359C2C  7C 08 02 A6 */	mflr r0
/* 8035CCF0 00359C30  2C 04 00 00 */	cmpwi r4, 0
/* 8035CCF4 00359C34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035CCF8 00359C38  40 82 00 14 */	bne .L_8035CD0C
/* 8035CCFC 00359C3C  80 6D 98 D0 */	lwz r3, curK__Q24Game10KingChappy@sda21(r13)
/* 8035CD00 00359C40  28 03 00 00 */	cmplwi r3, 0
/* 8035CD04 00359C44  41 82 00 08 */	beq .L_8035CD0C
/* 8035CD08 00359C48  48 00 46 91 */	bl leftFootMtxCalc__Q34Game10KingChappy3ObjFv
.L_8035CD0C:
/* 8035CD0C 00359C4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035CD10 00359C50  38 60 00 01 */	li r3, 1
/* 8035CD14 00359C54  7C 08 03 A6 */	mtlr r0
/* 8035CD18 00359C58  38 21 00 10 */	addi r1, r1, 0x10
/* 8035CD1C 00359C5C  4E 80 00 20 */	blr 
.endfn lFootCallBack__Q24Game10KingChappyFP8J3DJointi

.fn rFootCallBack__Q24Game10KingChappyFP8J3DJointi, local
/* 8035CD20 00359C60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035CD24 00359C64  7C 08 02 A6 */	mflr r0
/* 8035CD28 00359C68  2C 04 00 00 */	cmpwi r4, 0
/* 8035CD2C 00359C6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035CD30 00359C70  40 82 00 14 */	bne .L_8035CD44
/* 8035CD34 00359C74  80 6D 98 D0 */	lwz r3, curK__Q24Game10KingChappy@sda21(r13)
/* 8035CD38 00359C78  28 03 00 00 */	cmplwi r3, 0
/* 8035CD3C 00359C7C  41 82 00 08 */	beq .L_8035CD44
/* 8035CD40 00359C80  48 00 46 9D */	bl rightFootMtxCalc__Q34Game10KingChappy3ObjFv
.L_8035CD44:
/* 8035CD44 00359C84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035CD48 00359C88  38 60 00 01 */	li r3, 1
/* 8035CD4C 00359C8C  7C 08 03 A6 */	mtlr r0
/* 8035CD50 00359C90  38 21 00 10 */	addi r1, r1, 0x10
/* 8035CD54 00359C94  4E 80 00 20 */	blr 
.endfn rFootCallBack__Q24Game10KingChappyFP8J3DJointi

.fn setParameters__Q34Game10KingChappy3ObjFv, global
/* 8035CD58 00359C98  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8035CD5C 00359C9C  7C 08 02 A6 */	mflr r0
/* 8035CD60 00359CA0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8035CD64 00359CA4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8035CD68 00359CA8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8035CD6C 00359CAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035CD70 00359CB0  7C 7F 1B 78 */	mr r31, r3
/* 8035CD74 00359CB4  4B DA 5E 65 */	bl setParameters__Q24Game9EnemyBaseFv
/* 8035CD78 00359CB8  88 1F 03 94 */	lbz r0, 0x394(r31)
/* 8035CD7C 00359CBC  28 00 00 00 */	cmplwi r0, 0
/* 8035CD80 00359CC0  40 82 00 14 */	bne .L_8035CD94
/* 8035CD84 00359CC4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8035CD88 00359CC8  88 03 0B CC */	lbz r0, 0xbcc(r3)
/* 8035CD8C 00359CCC  28 00 00 00 */	cmplwi r0, 0
/* 8035CD90 00359CD0  41 82 00 50 */	beq .L_8035CDE0
.L_8035CD94:
/* 8035CD94 00359CD4  38 00 00 01 */	li r0, 1
/* 8035CD98 00359CD8  98 1F 03 94 */	stb r0, 0x394(r31)
/* 8035CD9C 00359CDC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8035CDA0 00359CE0  C3 E3 0A 4C */	lfs f31, 0xa4c(r3)
/* 8035CDA4 00359CE4  D3 FF 01 F8 */	stfs f31, 0x1f8(r31)
/* 8035CDA8 00359CE8  FC 20 F8 90 */	fmr f1, f31
/* 8035CDAC 00359CEC  D3 FF 01 68 */	stfs f31, 0x168(r31)
/* 8035CDB0 00359CF0  D3 FF 01 6C */	stfs f31, 0x16c(r31)
/* 8035CDB4 00359CF4  D3 FF 01 70 */	stfs f31, 0x170(r31)
/* 8035CDB8 00359CF8  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8035CDBC 00359CFC  80 63 00 00 */	lwz r3, 0(r3)
/* 8035CDC0 00359D00  4B DD B0 4D */	bl setScale__8CollPartFf
/* 8035CDC4 00359D04  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8035CDC8 00359D08  C0 02 03 08 */	lfs f0, lbl_8051E668@sda21(r2)
/* 8035CDCC 00359D0C  C0 23 02 1C */	lfs f1, 0x21c(r3)
/* 8035CDD0 00359D10  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8035CDD4 00359D14  D0 3F 02 7C */	stfs f1, 0x27c(r31)
/* 8035CDD8 00359D18  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8035CDDC 00359D1C  D0 03 01 A4 */	stfs f0, 0x1a4(r3)
.L_8035CDE0:
/* 8035CDE0 00359D20  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8035CDE4 00359D24  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8035CDE8 00359D28  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8035CDEC 00359D2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035CDF0 00359D30  7C 08 03 A6 */	mtlr r0
/* 8035CDF4 00359D34  38 21 00 20 */	addi r1, r1, 0x20
/* 8035CDF8 00359D38  4E 80 00 20 */	blr 
.endfn setParameters__Q34Game10KingChappy3ObjFv

.fn "birth__Q34Game10KingChappy3ObjFR10Vector3<f>f", global
/* 8035CDFC 00359D3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035CE00 00359D40  7C 08 02 A6 */	mflr r0
/* 8035CE04 00359D44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035CE08 00359D48  4B DA 5B F9 */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 8035CE0C 00359D4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035CE10 00359D50  7C 08 03 A6 */	mtlr r0
/* 8035CE14 00359D54  38 21 00 10 */	addi r1, r1, 0x10
/* 8035CE18 00359D58  4E 80 00 20 */	blr 
.endfn "birth__Q34Game10KingChappy3ObjFR10Vector3<f>f"

.fn onInit__Q34Game10KingChappy3ObjFPQ24Game15CreatureInitArg, global
/* 8035CE1C 00359D5C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8035CE20 00359D60  7C 08 02 A6 */	mflr r0
/* 8035CE24 00359D64  90 01 00 34 */	stw r0, 0x34(r1)
/* 8035CE28 00359D68  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8035CE2C 00359D6C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8035CE30 00359D70  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8035CE34 00359D74  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8035CE38 00359D78  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8035CE3C 00359D7C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8035CE40 00359D80  3C A0 80 49 */	lis r5, lbl_804915D0@ha
/* 8035CE44 00359D84  7C 7E 1B 78 */	mr r30, r3
/* 8035CE48 00359D88  3B E5 15 D0 */	addi r31, r5, lbl_804915D0@l
/* 8035CE4C 00359D8C  4B DA 4C 0D */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8035CE50 00359D90  7F C3 F3 78 */	mr r3, r30
/* 8035CE54 00359D94  81 9E 00 00 */	lwz r12, 0(r30)
/* 8035CE58 00359D98  81 8C 02 54 */	lwz r12, 0x254(r12)
/* 8035CE5C 00359D9C  7D 89 03 A6 */	mtctr r12
/* 8035CE60 00359DA0  4E 80 04 21 */	bctrl 
/* 8035CE64 00359DA4  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8035CE68 00359DA8  38 82 03 0C */	addi r4, r2, lbl_8051E66C@sda21
/* 8035CE6C 00359DAC  48 0E 21 79 */	bl getJoint__Q28SysShape5ModelFPc
/* 8035CE70 00359DB0  90 7E 02 D0 */	stw r3, 0x2d0(r30)
/* 8035CE74 00359DB4  80 1E 02 D0 */	lwz r0, 0x2d0(r30)
/* 8035CE78 00359DB8  28 00 00 00 */	cmplwi r0, 0
/* 8035CE7C 00359DBC  40 82 00 18 */	bne .L_8035CE94
/* 8035CE80 00359DC0  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035CE84 00359DC4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8035CE88 00359DC8  38 80 00 5A */	li r4, 0x5a
/* 8035CE8C 00359DCC  4C C6 31 82 */	crclr 6
/* 8035CE90 00359DD0  4B CC D7 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035CE94:
/* 8035CE94 00359DD4  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8035CE98 00359DD8  38 82 03 14 */	addi r4, r2, lbl_8051E674@sda21
/* 8035CE9C 00359DDC  48 0E 21 49 */	bl getJoint__Q28SysShape5ModelFPc
/* 8035CEA0 00359DE0  90 7E 02 D4 */	stw r3, 0x2d4(r30)
/* 8035CEA4 00359DE4  80 1E 02 D4 */	lwz r0, 0x2d4(r30)
/* 8035CEA8 00359DE8  28 00 00 00 */	cmplwi r0, 0
/* 8035CEAC 00359DEC  40 82 00 18 */	bne .L_8035CEC4
/* 8035CEB0 00359DF0  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035CEB4 00359DF4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8035CEB8 00359DF8  38 80 00 5D */	li r4, 0x5d
/* 8035CEBC 00359DFC  4C C6 31 82 */	crclr 6
/* 8035CEC0 00359E00  4B CC D7 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035CEC4:
/* 8035CEC4 00359E04  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8035CEC8 00359E08  38 82 03 1C */	addi r4, r2, lbl_8051E67C@sda21
/* 8035CECC 00359E0C  48 0E 21 19 */	bl getJoint__Q28SysShape5ModelFPc
/* 8035CED0 00359E10  90 7E 02 D8 */	stw r3, 0x2d8(r30)
/* 8035CED4 00359E14  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 8035CED8 00359E18  28 00 00 00 */	cmplwi r0, 0
/* 8035CEDC 00359E1C  40 82 00 18 */	bne .L_8035CEF4
/* 8035CEE0 00359E20  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035CEE4 00359E24  38 BF 00 28 */	addi r5, r31, 0x28
/* 8035CEE8 00359E28  38 80 00 60 */	li r4, 0x60
/* 8035CEEC 00359E2C  4C C6 31 82 */	crclr 6
/* 8035CEF0 00359E30  4B CC D7 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035CEF4:
/* 8035CEF4 00359E34  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8035CEF8 00359E38  38 82 03 24 */	addi r4, r2, lbl_8051E684@sda21
/* 8035CEFC 00359E3C  48 0E 20 E9 */	bl getJoint__Q28SysShape5ModelFPc
/* 8035CF00 00359E40  90 7E 02 DC */	stw r3, 0x2dc(r30)
/* 8035CF04 00359E44  80 1E 02 DC */	lwz r0, 0x2dc(r30)
/* 8035CF08 00359E48  28 00 00 00 */	cmplwi r0, 0
/* 8035CF0C 00359E4C  40 82 00 18 */	bne .L_8035CF24
/* 8035CF10 00359E50  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035CF14 00359E54  38 BF 00 28 */	addi r5, r31, 0x28
/* 8035CF18 00359E58  38 80 00 63 */	li r4, 0x63
/* 8035CF1C 00359E5C  4C C6 31 82 */	crclr 6
/* 8035CF20 00359E60  4B CC D7 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035CF24:
/* 8035CF24 00359E64  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8035CF28 00359E68  38 82 03 0C */	addi r4, r2, lbl_8051E66C@sda21
/* 8035CF2C 00359E6C  48 0E 20 B9 */	bl getJoint__Q28SysShape5ModelFPc
/* 8035CF30 00359E70  90 7E 02 E0 */	stw r3, 0x2e0(r30)
/* 8035CF34 00359E74  80 1E 02 E0 */	lwz r0, 0x2e0(r30)
/* 8035CF38 00359E78  28 00 00 00 */	cmplwi r0, 0
/* 8035CF3C 00359E7C  40 82 00 18 */	bne .L_8035CF54
/* 8035CF40 00359E80  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035CF44 00359E84  38 BF 00 28 */	addi r5, r31, 0x28
/* 8035CF48 00359E88  38 80 00 66 */	li r4, 0x66
/* 8035CF4C 00359E8C  4C C6 31 82 */	crclr 6
/* 8035CF50 00359E90  4B CC D6 F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035CF54:
/* 8035CF54 00359E94  80 7E 03 4C */	lwz r3, 0x34c(r30)
/* 8035CF58 00359E98  7F C4 F3 78 */	mr r4, r30
/* 8035CF5C 00359E9C  38 A0 00 09 */	li r5, 9
/* 8035CF60 00359EA0  38 C0 00 00 */	li r6, 0
/* 8035CF64 00359EA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8035CF68 00359EA8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8035CF6C 00359EAC  7D 89 03 A6 */	mtctr r12
/* 8035CF70 00359EB0  4E 80 04 21 */	bctrl 
/* 8035CF74 00359EB4  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 8035CF78 00359EB8  38 60 00 01 */	li r3, 1
/* 8035CF7C 00359EBC  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035CF80 00359EC0  38 00 00 00 */	li r0, 0
/* 8035CF84 00359EC4  D0 3E 01 98 */	stfs f1, 0x198(r30)
/* 8035CF88 00359EC8  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 8035CF8C 00359ECC  D0 3E 01 9C */	stfs f1, 0x19c(r30)
/* 8035CF90 00359ED0  C0 3E 01 94 */	lfs f1, 0x194(r30)
/* 8035CF94 00359ED4  D0 3E 01 A0 */	stfs f1, 0x1a0(r30)
/* 8035CF98 00359ED8  C0 3E 01 98 */	lfs f1, 0x198(r30)
/* 8035CF9C 00359EDC  D0 3E 02 BC */	stfs f1, 0x2bc(r30)
/* 8035CFA0 00359EE0  C0 3E 01 9C */	lfs f1, 0x19c(r30)
/* 8035CFA4 00359EE4  D0 3E 02 C0 */	stfs f1, 0x2c0(r30)
/* 8035CFA8 00359EE8  C0 3E 01 A0 */	lfs f1, 0x1a0(r30)
/* 8035CFAC 00359EEC  D0 3E 02 C4 */	stfs f1, 0x2c4(r30)
/* 8035CFB0 00359EF0  D0 1E 01 9C */	stfs f0, 0x19c(r30)
/* 8035CFB4 00359EF4  98 7E 02 EC */	stb r3, 0x2ec(r30)
/* 8035CFB8 00359EF8  90 1E 02 F0 */	stw r0, 0x2f0(r30)
/* 8035CFBC 00359EFC  C0 1E 01 98 */	lfs f0, 0x198(r30)
/* 8035CFC0 00359F00  D0 1E 02 F4 */	stfs f0, 0x2f4(r30)
/* 8035CFC4 00359F04  C0 1E 01 9C */	lfs f0, 0x19c(r30)
/* 8035CFC8 00359F08  D0 1E 02 F8 */	stfs f0, 0x2f8(r30)
/* 8035CFCC 00359F0C  C0 1E 01 A0 */	lfs f0, 0x1a0(r30)
/* 8035CFD0 00359F10  D0 1E 02 FC */	stfs f0, 0x2fc(r30)
/* 8035CFD4 00359F14  90 1E 03 0C */	stw r0, 0x30c(r30)
/* 8035CFD8 00359F18  98 1E 03 38 */	stb r0, 0x338(r30)
/* 8035CFDC 00359F1C  80 1E 01 74 */	lwz r0, 0x174(r30)
/* 8035CFE0 00359F20  28 00 00 00 */	cmplwi r0, 0
/* 8035CFE4 00359F24  40 82 00 18 */	bne .L_8035CFFC
/* 8035CFE8 00359F28  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035CFEC 00359F2C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8035CFF0 00359F30  38 80 00 79 */	li r4, 0x79
/* 8035CFF4 00359F34  4C C6 31 82 */	crclr 6
/* 8035CFF8 00359F38  4B CC D6 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035CFFC:
/* 8035CFFC 00359F3C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8035D000 00359F40  38 82 03 30 */	addi r4, r2, lbl_8051E690@sda21
/* 8035D004 00359F44  80 A3 00 08 */	lwz r5, 8(r3)
/* 8035D008 00359F48  83 85 00 04 */	lwz r28, 4(r5)
/* 8035D00C 00359F4C  48 0E 1F A9 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 8035D010 00359F50  B0 7E 03 10 */	sth r3, 0x310(r30)
/* 8035D014 00359F54  A0 1E 03 10 */	lhz r0, 0x310(r30)
/* 8035D018 00359F58  80 7C 00 28 */	lwz r3, 0x28(r28)
/* 8035D01C 00359F5C  54 00 10 3A */	slwi r0, r0, 2
/* 8035D020 00359F60  7F A3 00 2E */	lwzx r29, r3, r0
/* 8035D024 00359F64  28 1D 00 00 */	cmplwi r29, 0
/* 8035D028 00359F68  40 82 00 18 */	bne .L_8035D040
/* 8035D02C 00359F6C  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035D030 00359F70  38 BF 00 28 */	addi r5, r31, 0x28
/* 8035D034 00359F74  38 80 00 7F */	li r4, 0x7f
/* 8035D038 00359F78  4C C6 31 82 */	crclr 6
/* 8035D03C 00359F7C  4B CC D6 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035D040:
/* 8035D040 00359F80  3C 60 80 36 */	lis r3, lFootCallBack__Q24Game10KingChappyFP8J3DJointi@ha
/* 8035D044 00359F84  38 82 03 38 */	addi r4, r2, lbl_8051E698@sda21
/* 8035D048 00359F88  38 03 CC E8 */	addi r0, r3, lFootCallBack__Q24Game10KingChappyFP8J3DJointi@l
/* 8035D04C 00359F8C  90 1D 00 04 */	stw r0, 4(r29)
/* 8035D050 00359F90  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8035D054 00359F94  48 0E 1F 61 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 8035D058 00359F98  B0 7E 03 24 */	sth r3, 0x324(r30)
/* 8035D05C 00359F9C  A0 1E 03 24 */	lhz r0, 0x324(r30)
/* 8035D060 00359FA0  80 7C 00 28 */	lwz r3, 0x28(r28)
/* 8035D064 00359FA4  54 00 10 3A */	slwi r0, r0, 2
/* 8035D068 00359FA8  7F 83 00 2E */	lwzx r28, r3, r0
/* 8035D06C 00359FAC  28 1C 00 00 */	cmplwi r28, 0
/* 8035D070 00359FB0  40 82 00 18 */	bne .L_8035D088
/* 8035D074 00359FB4  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035D078 00359FB8  38 BF 00 28 */	addi r5, r31, 0x28
/* 8035D07C 00359FBC  38 80 00 84 */	li r4, 0x84
/* 8035D080 00359FC0  4C C6 31 82 */	crclr 6
/* 8035D084 00359FC4  4B CC D5 BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035D088:
/* 8035D088 00359FC8  3C 60 80 36 */	lis r3, rFootCallBack__Q24Game10KingChappyFP8J3DJointi@ha
/* 8035D08C 00359FCC  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035D090 00359FD0  38 03 CD 20 */	addi r0, r3, rFootCallBack__Q24Game10KingChappyFP8J3DJointi@l
/* 8035D094 00359FD4  90 1C 00 04 */	stw r0, 4(r28)
/* 8035D098 00359FD8  D0 1E 03 20 */	stfs f0, 0x320(r30)
/* 8035D09C 00359FDC  D0 1E 03 34 */	stfs f0, 0x334(r30)
/* 8035D0A0 00359FE0  80 7E 02 E0 */	lwz r3, 0x2e0(r30)
/* 8035D0A4 00359FE4  48 0C C7 FD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8035D0A8 00359FE8  80 9E 03 50 */	lwz r4, 0x350(r30)
/* 8035D0AC 00359FEC  90 64 00 10 */	stw r3, 0x10(r4)
/* 8035D0B0 00359FF0  80 7E 02 E0 */	lwz r3, 0x2e0(r30)
/* 8035D0B4 00359FF4  48 0C C7 ED */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8035D0B8 00359FF8  80 BE 03 60 */	lwz r5, 0x360(r30)
/* 8035D0BC 00359FFC  38 82 03 40 */	addi r4, r2, lbl_8051E6A0@sda21
/* 8035D0C0 0035A000  90 65 00 10 */	stw r3, 0x10(r5)
/* 8035D0C4 0035A004  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8035D0C8 0035A008  48 0E 1F 1D */	bl getJoint__Q28SysShape5ModelFPc
/* 8035D0CC 0035A00C  48 0C C7 D5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8035D0D0 0035A010  80 BE 03 64 */	lwz r5, 0x364(r30)
/* 8035D0D4 0035A014  38 82 03 24 */	addi r4, r2, lbl_8051E684@sda21
/* 8035D0D8 0035A018  90 65 00 10 */	stw r3, 0x10(r5)
/* 8035D0DC 0035A01C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8035D0E0 0035A020  48 0E 1F 05 */	bl getJoint__Q28SysShape5ModelFPc
/* 8035D0E4 0035A024  48 0C C7 BD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8035D0E8 0035A028  80 BE 03 68 */	lwz r5, 0x368(r30)
/* 8035D0EC 0035A02C  38 82 03 0C */	addi r4, r2, lbl_8051E66C@sda21
/* 8035D0F0 0035A030  90 65 00 10 */	stw r3, 0x10(r5)
/* 8035D0F4 0035A034  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8035D0F8 0035A038  48 0E 1E ED */	bl getJoint__Q28SysShape5ModelFPc
/* 8035D0FC 0035A03C  48 0C C7 A5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8035D100 0035A040  80 BE 03 6C */	lwz r5, 0x36c(r30)
/* 8035D104 0035A044  38 82 03 40 */	addi r4, r2, lbl_8051E6A0@sda21
/* 8035D108 0035A048  90 65 00 10 */	stw r3, 0x10(r5)
/* 8035D10C 0035A04C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8035D110 0035A050  48 0E 1E D5 */	bl getJoint__Q28SysShape5ModelFPc
/* 8035D114 0035A054  48 0C C7 8D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8035D118 0035A058  7C 64 1B 78 */	mr r4, r3
/* 8035D11C 0035A05C  80 7E 03 70 */	lwz r3, 0x370(r30)
/* 8035D120 0035A060  48 05 34 81 */	bl setMtxptr__Q23efx10TChaseMtx2FPA4_f
/* 8035D124 0035A064  83 9E 02 8C */	lwz r28, 0x28c(r30)
/* 8035D128 0035A068  3B A0 00 00 */	li r29, 0
/* 8035D12C 0035A06C  7F 83 E3 78 */	mr r3, r28
/* 8035D130 0035A070  81 9C 00 28 */	lwz r12, 0x28(r28)
/* 8035D134 0035A074  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035D138 0035A078  7D 89 03 A6 */	mtctr r12
/* 8035D13C 0035A07C  4E 80 04 21 */	bctrl 
/* 8035D140 0035A080  2C 03 00 05 */	cmpwi r3, 5
/* 8035D144 0035A084  41 82 00 3C */	beq .L_8035D180
/* 8035D148 0035A088  7F 83 E3 78 */	mr r3, r28
/* 8035D14C 0035A08C  81 9C 00 28 */	lwz r12, 0x28(r28)
/* 8035D150 0035A090  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035D154 0035A094  7D 89 03 A6 */	mtctr r12
/* 8035D158 0035A098  4E 80 04 21 */	bctrl 
/* 8035D15C 0035A09C  2C 03 00 06 */	cmpwi r3, 6
/* 8035D160 0035A0A0  41 82 00 20 */	beq .L_8035D180
/* 8035D164 0035A0A4  7F 83 E3 78 */	mr r3, r28
/* 8035D168 0035A0A8  81 9C 00 28 */	lwz r12, 0x28(r28)
/* 8035D16C 0035A0AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035D170 0035A0B0  7D 89 03 A6 */	mtctr r12
/* 8035D174 0035A0B4  4E 80 04 21 */	bctrl 
/* 8035D178 0035A0B8  2C 03 00 07 */	cmpwi r3, 7
/* 8035D17C 0035A0BC  40 82 00 08 */	bne .L_8035D184
.L_8035D180:
/* 8035D180 0035A0C0  3B A0 00 01 */	li r29, 1
.L_8035D184:
/* 8035D184 0035A0C4  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8035D188 0035A0C8  40 82 00 18 */	bne .L_8035D1A0
/* 8035D18C 0035A0CC  38 7F 00 34 */	addi r3, r31, 0x34
/* 8035D190 0035A0D0  38 BF 00 28 */	addi r5, r31, 0x28
/* 8035D194 0035A0D4  38 80 04 54 */	li r4, 0x454
/* 8035D198 0035A0D8  4C C6 31 82 */	crclr 6
/* 8035D19C 0035A0DC  4B CC D4 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035D1A0:
/* 8035D1A0 0035A0E0  7F 83 E3 78 */	mr r3, r28
/* 8035D1A4 0035A0E4  38 80 00 00 */	li r4, 0
/* 8035D1A8 0035A0E8  48 10 28 49 */	bl setAppearFlag__Q23PSM9EnemyBossFb
/* 8035D1AC 0035A0EC  38 00 00 00 */	li r0, 0
/* 8035D1B0 0035A0F0  98 1E 03 94 */	stb r0, 0x394(r30)
/* 8035D1B4 0035A0F4  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8035D1B8 0035A0F8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8035D1BC 0035A0FC  88 03 0B CC */	lbz r0, 0xbcc(r3)
/* 8035D1C0 0035A100  80 64 00 58 */	lwz r3, 0x58(r4)
/* 8035D1C4 0035A104  28 00 00 00 */	cmplwi r0, 0
/* 8035D1C8 0035A108  40 82 00 28 */	bne .L_8035D1F0
/* 8035D1CC 0035A10C  28 03 00 00 */	cmplwi r3, 0
/* 8035D1D0 0035A110  41 82 00 6C */	beq .L_8035D23C
/* 8035D1D4 0035A114  81 83 00 00 */	lwz r12, 0(r3)
/* 8035D1D8 0035A118  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 8035D1DC 0035A11C  7D 89 03 A6 */	mtctr r12
/* 8035D1E0 0035A120  4E 80 04 21 */	bctrl 
/* 8035D1E4 0035A124  3C 03 99 A1 */	subis r0, r3, 0x665f
/* 8035D1E8 0035A128  28 00 30 33 */	cmplwi r0, 0x3033
/* 8035D1EC 0035A12C  40 82 00 50 */	bne .L_8035D23C
.L_8035D1F0:
/* 8035D1F0 0035A130  38 00 00 01 */	li r0, 1
/* 8035D1F4 0035A134  98 1E 03 94 */	stb r0, 0x394(r30)
/* 8035D1F8 0035A138  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8035D1FC 0035A13C  C0 03 0A 74 */	lfs f0, 0xa74(r3)
/* 8035D200 0035A140  D0 1E 02 00 */	stfs f0, 0x200(r30)
/* 8035D204 0035A144  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8035D208 0035A148  C3 E3 0A 4C */	lfs f31, 0xa4c(r3)
/* 8035D20C 0035A14C  D3 FE 01 F8 */	stfs f31, 0x1f8(r30)
/* 8035D210 0035A150  FC 20 F8 90 */	fmr f1, f31
/* 8035D214 0035A154  D3 FE 01 68 */	stfs f31, 0x168(r30)
/* 8035D218 0035A158  D3 FE 01 6C */	stfs f31, 0x16c(r30)
/* 8035D21C 0035A15C  D3 FE 01 70 */	stfs f31, 0x170(r30)
/* 8035D220 0035A160  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8035D224 0035A164  80 63 00 00 */	lwz r3, 0(r3)
/* 8035D228 0035A168  4B DD AB E5 */	bl setScale__8CollPartFf
/* 8035D22C 0035A16C  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8035D230 0035A170  C0 03 02 1C */	lfs f0, 0x21c(r3)
/* 8035D234 0035A174  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8035D238 0035A178  D0 1E 02 7C */	stfs f0, 0x27c(r30)
.L_8035D23C:
/* 8035D23C 0035A17C  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8035D240 0035A180  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8035D244 0035A184  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8035D248 0035A188  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8035D24C 0035A18C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8035D250 0035A190  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8035D254 0035A194  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8035D258 0035A198  7C 08 03 A6 */	mtlr r0
/* 8035D25C 0035A19C  38 21 00 30 */	addi r1, r1, 0x30
/* 8035D260 0035A1A0  4E 80 00 20 */	blr 
.endfn onInit__Q34Game10KingChappy3ObjFPQ24Game15CreatureInitArg

.fn __ct__Q34Game10KingChappy3ObjFv, global
/* 8035D264 0035A1A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8035D268 0035A1A8  7C 08 02 A6 */	mflr r0
/* 8035D26C 0035A1AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8035D270 0035A1B0  7C 80 07 35 */	extsh. r0, r4
/* 8035D274 0035A1B4  BF 41 00 08 */	stmw r26, 8(r1)
/* 8035D278 0035A1B8  7C 7F 1B 78 */	mr r31, r3
/* 8035D27C 0035A1BC  41 82 00 24 */	beq .L_8035D2A0
/* 8035D280 0035A1C0  38 1F 03 98 */	addi r0, r31, 0x398
/* 8035D284 0035A1C4  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8035D288 0035A1C8  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8035D28C 0035A1CC  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8035D290 0035A1D0  38 00 00 00 */	li r0, 0
/* 8035D294 0035A1D4  90 7F 03 98 */	stw r3, 0x398(r31)
/* 8035D298 0035A1D8  90 1F 03 9C */	stw r0, 0x39c(r31)
/* 8035D29C 0035A1DC  90 1F 03 A0 */	stw r0, 0x3a0(r31)
.L_8035D2A0:
/* 8035D2A0 0035A1E0  7F E3 FB 78 */	mr r3, r31
/* 8035D2A4 0035A1E4  38 80 00 00 */	li r4, 0
/* 8035D2A8 0035A1E8  4B DA 40 F9 */	bl __ct__Q24Game9EnemyBaseFv
/* 8035D2AC 0035A1EC  3C 60 80 4E */	lis r3, __vt__Q34Game10KingChappy3Obj@ha
/* 8035D2B0 0035A1F0  38 1F 03 98 */	addi r0, r31, 0x398
/* 8035D2B4 0035A1F4  38 A3 20 1C */	addi r5, r3, __vt__Q34Game10KingChappy3Obj@l
/* 8035D2B8 0035A1F8  38 7F 02 C8 */	addi r3, r31, 0x2c8
/* 8035D2BC 0035A1FC  90 BF 00 00 */	stw r5, 0(r31)
/* 8035D2C0 0035A200  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8035D2C4 0035A204  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 8035D2C8 0035A208  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8035D2CC 0035A20C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8035D2D0 0035A210  90 A4 00 00 */	stw r5, 0(r4)
/* 8035D2D4 0035A214  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8035D2D8 0035A218  7C 04 00 50 */	subf r0, r4, r0
/* 8035D2DC 0035A21C  90 04 00 0C */	stw r0, 0xc(r4)
/* 8035D2E0 0035A220  4B DD B2 69 */	bl __ct__10MouthSlotsFv
/* 8035D2E4 0035A224  38 80 00 00 */	li r4, 0
/* 8035D2E8 0035A228  38 00 00 01 */	li r0, 1
/* 8035D2EC 0035A22C  90 9F 02 D0 */	stw r4, 0x2d0(r31)
/* 8035D2F0 0035A230  38 7F 03 44 */	addi r3, r31, 0x344
/* 8035D2F4 0035A234  90 9F 02 D4 */	stw r4, 0x2d4(r31)
/* 8035D2F8 0035A238  90 9F 02 D8 */	stw r4, 0x2d8(r31)
/* 8035D2FC 0035A23C  90 9F 02 DC */	stw r4, 0x2dc(r31)
/* 8035D300 0035A240  98 9F 02 E4 */	stb r4, 0x2e4(r31)
/* 8035D304 0035A244  98 1F 02 EC */	stb r0, 0x2ec(r31)
/* 8035D308 0035A248  90 9F 02 F0 */	stw r4, 0x2f0(r31)
/* 8035D30C 0035A24C  90 9F 03 0C */	stw r4, 0x30c(r31)
/* 8035D310 0035A250  B0 9F 03 10 */	sth r4, 0x310(r31)
/* 8035D314 0035A254  B0 9F 03 24 */	sth r4, 0x324(r31)
/* 8035D318 0035A258  90 9F 03 40 */	stw r4, 0x340(r31)
/* 8035D31C 0035A25C  4B DC D0 39 */	bl __ct__Q34Game15WalkSmokeEffect3MgrFv
/* 8035D320 0035A260  38 00 00 00 */	li r0, 0
/* 8035D324 0035A264  38 60 00 7C */	li r3, 0x7c
/* 8035D328 0035A268  90 1F 03 4C */	stw r0, 0x34c(r31)
/* 8035D32C 0035A26C  90 1F 03 50 */	stw r0, 0x350(r31)
/* 8035D330 0035A270  90 1F 03 54 */	stw r0, 0x354(r31)
/* 8035D334 0035A274  90 1F 03 58 */	stw r0, 0x358(r31)
/* 8035D338 0035A278  90 1F 03 5C */	stw r0, 0x35c(r31)
/* 8035D33C 0035A27C  90 1F 03 60 */	stw r0, 0x360(r31)
/* 8035D340 0035A280  90 1F 03 64 */	stw r0, 0x364(r31)
/* 8035D344 0035A284  90 1F 03 68 */	stw r0, 0x368(r31)
/* 8035D348 0035A288  90 1F 03 6C */	stw r0, 0x36c(r31)
/* 8035D34C 0035A28C  90 1F 03 70 */	stw r0, 0x370(r31)
/* 8035D350 0035A290  90 1F 03 74 */	stw r0, 0x374(r31)
/* 8035D354 0035A294  90 1F 03 78 */	stw r0, 0x378(r31)
/* 8035D358 0035A298  98 1F 03 94 */	stb r0, 0x394(r31)
/* 8035D35C 0035A29C  4B CC 6B 49 */	bl __nw__FUl
/* 8035D360 0035A2A0  7C 7C 1B 79 */	or. r28, r3, r3
/* 8035D364 0035A2A4  41 82 00 44 */	beq .L_8035D3A8
/* 8035D368 0035A2A8  4B DD 0D 81 */	bl __ct__Q24Game22EnemyBlendAnimatorBaseFv
/* 8035D36C 0035A2AC  3C 60 80 4E */	lis r3, __vt__Q34Game10KingChappy14ProperAnimator@ha
/* 8035D370 0035A2B0  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8035D374 0035A2B4  38 03 1F F4 */	addi r0, r3, __vt__Q34Game10KingChappy14ProperAnimator@l
/* 8035D378 0035A2B8  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8035D37C 0035A2BC  90 1C 00 00 */	stw r0, 0(r28)
/* 8035D380 0035A2C0  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8035D384 0035A2C4  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8035D388 0035A2C8  38 00 00 00 */	li r0, 0
/* 8035D38C 0035A2CC  90 9C 00 60 */	stw r4, 0x60(r28)
/* 8035D390 0035A2D0  90 7C 00 60 */	stw r3, 0x60(r28)
/* 8035D394 0035A2D4  98 1C 00 78 */	stb r0, 0x78(r28)
/* 8035D398 0035A2D8  90 1C 00 6C */	stw r0, 0x6c(r28)
/* 8035D39C 0035A2DC  90 1C 00 64 */	stw r0, 0x64(r28)
/* 8035D3A0 0035A2E0  98 1C 00 78 */	stb r0, 0x78(r28)
/* 8035D3A4 0035A2E4  90 1C 00 70 */	stw r0, 0x70(r28)
.L_8035D3A8:
/* 8035D3A8 0035A2E8  93 9F 01 84 */	stw r28, 0x184(r31)
/* 8035D3AC 0035A2EC  38 60 00 1C */	li r3, 0x1c
/* 8035D3B0 0035A2F0  4B CC 6A F5 */	bl __nw__FUl
/* 8035D3B4 0035A2F4  7C 64 1B 79 */	or. r4, r3, r3
/* 8035D3B8 0035A2F8  41 82 00 24 */	beq .L_8035D3DC
/* 8035D3BC 0035A2FC  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8035D3C0 0035A300  3C 60 80 4E */	lis r3, __vt__Q34Game10KingChappy3FSM@ha
/* 8035D3C4 0035A304  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8035D3C8 0035A308  38 A0 FF FF */	li r5, -1
/* 8035D3CC 0035A30C  90 04 00 00 */	stw r0, 0(r4)
/* 8035D3D0 0035A310  38 03 1C 10 */	addi r0, r3, __vt__Q34Game10KingChappy3FSM@l
/* 8035D3D4 0035A314  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8035D3D8 0035A318  90 04 00 00 */	stw r0, 0(r4)
.L_8035D3DC:
/* 8035D3DC 0035A31C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035D3E0 0035A320  7F E3 FB 78 */	mr r3, r31
/* 8035D3E4 0035A324  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8035D3E8 0035A328  7D 89 03 A6 */	mtctr r12
/* 8035D3EC 0035A32C  4E 80 04 21 */	bctrl 
/* 8035D3F0 0035A330  38 00 00 00 */	li r0, 0
/* 8035D3F4 0035A334  38 60 00 54 */	li r3, 0x54
/* 8035D3F8 0035A338  90 0D 98 D0 */	stw r0, curK__Q24Game10KingChappy@sda21(r13)
/* 8035D3FC 0035A33C  4B CC 6A A9 */	bl __nw__FUl
/* 8035D400 0035A340  7C 60 1B 79 */	or. r0, r3, r3
/* 8035D404 0035A344  41 82 00 10 */	beq .L_8035D414
/* 8035D408 0035A348  38 80 00 00 */	li r4, 0
/* 8035D40C 0035A34C  48 00 0A F1 */	bl __ct__Q23efx10TKchYodareFPA4_f
/* 8035D410 0035A350  7C 60 1B 78 */	mr r0, r3
.L_8035D414:
/* 8035D414 0035A354  90 1F 03 50 */	stw r0, 0x350(r31)
/* 8035D418 0035A358  38 60 00 4C */	li r3, 0x4c
/* 8035D41C 0035A35C  4B CC 6A 89 */	bl __nw__FUl
/* 8035D420 0035A360  7C 7C 1B 79 */	or. r28, r3, r3
/* 8035D424 0035A364  41 82 00 28 */	beq .L_8035D44C
/* 8035D428 0035A368  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8035D42C 0035A36C  38 BF 01 FC */	addi r5, r31, 0x1fc
/* 8035D430 0035A370  38 C0 02 21 */	li r6, 0x221
/* 8035D434 0035A374  38 E0 02 22 */	li r7, 0x222
/* 8035D438 0035A378  39 00 02 23 */	li r8, 0x223
/* 8035D43C 0035A37C  48 05 36 89 */	bl "__ct__Q23efx14TChasePosYRot3FP10Vector3<f>PfUsUsUs"
/* 8035D440 0035A380  3C 60 80 4E */	lis r3, __vt__Q23efx12TKchDiveSand@ha
/* 8035D444 0035A384  38 03 1F D8 */	addi r0, r3, __vt__Q23efx12TKchDiveSand@l
/* 8035D448 0035A388  90 1C 00 00 */	stw r0, 0(r28)
.L_8035D44C:
/* 8035D44C 0035A38C  93 9F 03 54 */	stw r28, 0x354(r31)
/* 8035D450 0035A390  38 60 00 4C */	li r3, 0x4c
/* 8035D454 0035A394  4B CC 6A 51 */	bl __nw__FUl
/* 8035D458 0035A398  7C 7C 1B 79 */	or. r28, r3, r3
/* 8035D45C 0035A39C  41 82 00 28 */	beq .L_8035D484
/* 8035D460 0035A3A0  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8035D464 0035A3A4  38 BF 01 FC */	addi r5, r31, 0x1fc
/* 8035D468 0035A3A8  38 C0 02 24 */	li r6, 0x224
/* 8035D46C 0035A3AC  38 E0 02 25 */	li r7, 0x225
/* 8035D470 0035A3B0  39 00 02 26 */	li r8, 0x226
/* 8035D474 0035A3B4  48 05 36 51 */	bl "__ct__Q23efx14TChasePosYRot3FP10Vector3<f>PfUsUsUs"
/* 8035D478 0035A3B8  3C 60 80 4E */	lis r3, __vt__Q23efx11TKchDiveWat@ha
/* 8035D47C 0035A3BC  38 03 1F BC */	addi r0, r3, __vt__Q23efx11TKchDiveWat@l
/* 8035D480 0035A3C0  90 1C 00 00 */	stw r0, 0(r28)
.L_8035D484:
/* 8035D484 0035A3C4  93 9F 03 58 */	stw r28, 0x358(r31)
/* 8035D488 0035A3C8  38 60 00 2C */	li r3, 0x2c
/* 8035D48C 0035A3CC  4B CC 6A 19 */	bl __nw__FUl
/* 8035D490 0035A3D0  7C 7C 1B 79 */	or. r28, r3, r3
/* 8035D494 0035A3D4  41 82 00 20 */	beq .L_8035D4B4
/* 8035D498 0035A3D8  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8035D49C 0035A3DC  38 A0 02 17 */	li r5, 0x217
/* 8035D4A0 0035A3E0  38 C0 02 18 */	li r6, 0x218
/* 8035D4A4 0035A3E4  48 05 2D 9D */	bl "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs"
/* 8035D4A8 0035A3E8  3C 60 80 4E */	lis r3, __vt__Q23efx9TKchCryAB@ha
/* 8035D4AC 0035A3EC  38 03 1F A0 */	addi r0, r3, __vt__Q23efx9TKchCryAB@l
/* 8035D4B0 0035A3F0  90 1C 00 00 */	stw r0, 0(r28)
.L_8035D4B4:
/* 8035D4B4 0035A3F4  93 9F 03 5C */	stw r28, 0x35c(r31)
/* 8035D4B8 0035A3F8  38 60 00 14 */	li r3, 0x14
/* 8035D4BC 0035A3FC  4B CC 69 E9 */	bl __nw__FUl
/* 8035D4C0 0035A400  28 03 00 00 */	cmplwi r3, 0
/* 8035D4C4 0035A404  41 82 00 78 */	beq .L_8035D53C
/* 8035D4C8 0035A408  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8035D4CC 0035A40C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8035D4D0 0035A410  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8035D4D4 0035A414  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8035D4D8 0035A418  90 03 00 00 */	stw r0, 0(r3)
/* 8035D4DC 0035A41C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8035D4E0 0035A420  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8035D4E4 0035A424  3C 80 80 4E */	lis r4, __vt__Q23efx10TChaseMtxT@ha
/* 8035D4E8 0035A428  90 03 00 04 */	stw r0, 4(r3)
/* 8035D4EC 0035A42C  38 E4 68 5C */	addi r7, r4, __vt__Q23efx10TChaseMtxT@l
/* 8035D4F0 0035A430  3C 80 80 4E */	lis r4, __vt__Q23efx10TKchCryInd@ha
/* 8035D4F4 0035A434  38 05 00 14 */	addi r0, r5, 0x14
/* 8035D4F8 0035A438  90 A3 00 00 */	stw r5, 0(r3)
/* 8035D4FC 0035A43C  38 84 1F 54 */	addi r4, r4, __vt__Q23efx10TKchCryInd@l
/* 8035D500 0035A440  39 20 00 00 */	li r9, 0
/* 8035D504 0035A444  39 00 02 B2 */	li r8, 0x2b2
/* 8035D508 0035A448  90 03 00 04 */	stw r0, 4(r3)
/* 8035D50C 0035A44C  38 C7 00 14 */	addi r6, r7, 0x14
/* 8035D510 0035A450  38 A0 02 19 */	li r5, 0x219
/* 8035D514 0035A454  38 04 00 14 */	addi r0, r4, 0x14
/* 8035D518 0035A458  91 23 00 08 */	stw r9, 8(r3)
/* 8035D51C 0035A45C  B1 03 00 0C */	sth r8, 0xc(r3)
/* 8035D520 0035A460  99 23 00 0E */	stb r9, 0xe(r3)
/* 8035D524 0035A464  90 E3 00 00 */	stw r7, 0(r3)
/* 8035D528 0035A468  90 C3 00 04 */	stw r6, 4(r3)
/* 8035D52C 0035A46C  91 23 00 10 */	stw r9, 0x10(r3)
/* 8035D530 0035A470  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8035D534 0035A474  90 83 00 00 */	stw r4, 0(r3)
/* 8035D538 0035A478  90 03 00 04 */	stw r0, 4(r3)
.L_8035D53C:
/* 8035D53C 0035A47C  90 7F 03 60 */	stw r3, 0x360(r31)
/* 8035D540 0035A480  38 60 00 14 */	li r3, 0x14
/* 8035D544 0035A484  4B CC 69 61 */	bl __nw__FUl
/* 8035D548 0035A488  28 03 00 00 */	cmplwi r3, 0
/* 8035D54C 0035A48C  41 82 00 78 */	beq .L_8035D5C4
/* 8035D550 0035A490  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8035D554 0035A494  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8035D558 0035A498  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8035D55C 0035A49C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8035D560 0035A4A0  90 03 00 00 */	stw r0, 0(r3)
/* 8035D564 0035A4A4  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8035D568 0035A4A8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8035D56C 0035A4AC  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 8035D570 0035A4B0  90 03 00 04 */	stw r0, 4(r3)
/* 8035D574 0035A4B4  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 8035D578 0035A4B8  3C 80 80 4E */	lis r4, __vt__Q23efx13TKchSmokeHana@ha
/* 8035D57C 0035A4BC  38 05 00 14 */	addi r0, r5, 0x14
/* 8035D580 0035A4C0  90 A3 00 00 */	stw r5, 0(r3)
/* 8035D584 0035A4C4  38 84 1F 08 */	addi r4, r4, __vt__Q23efx13TKchSmokeHana@l
/* 8035D588 0035A4C8  39 20 00 00 */	li r9, 0
/* 8035D58C 0035A4CC  39 00 02 B2 */	li r8, 0x2b2
/* 8035D590 0035A4D0  90 03 00 04 */	stw r0, 4(r3)
/* 8035D594 0035A4D4  38 C7 00 14 */	addi r6, r7, 0x14
/* 8035D598 0035A4D8  38 A0 02 2A */	li r5, 0x22a
/* 8035D59C 0035A4DC  38 04 00 14 */	addi r0, r4, 0x14
/* 8035D5A0 0035A4E0  91 23 00 08 */	stw r9, 8(r3)
/* 8035D5A4 0035A4E4  B1 03 00 0C */	sth r8, 0xc(r3)
/* 8035D5A8 0035A4E8  99 23 00 0E */	stb r9, 0xe(r3)
/* 8035D5AC 0035A4EC  90 E3 00 00 */	stw r7, 0(r3)
/* 8035D5B0 0035A4F0  90 C3 00 04 */	stw r6, 4(r3)
/* 8035D5B4 0035A4F4  91 23 00 10 */	stw r9, 0x10(r3)
/* 8035D5B8 0035A4F8  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8035D5BC 0035A4FC  90 83 00 00 */	stw r4, 0(r3)
/* 8035D5C0 0035A500  90 03 00 04 */	stw r0, 4(r3)
.L_8035D5C4:
/* 8035D5C4 0035A504  90 7F 03 64 */	stw r3, 0x364(r31)
/* 8035D5C8 0035A508  38 60 00 54 */	li r3, 0x54
/* 8035D5CC 0035A50C  4B CC 68 D9 */	bl __nw__FUl
/* 8035D5D0 0035A510  7C 60 1B 79 */	or. r0, r3, r3
/* 8035D5D4 0035A514  41 82 00 10 */	beq .L_8035D5E4
/* 8035D5D8 0035A518  38 80 00 00 */	li r4, 0
/* 8035D5DC 0035A51C  48 00 07 49 */	bl __ct__Q23efx16TKchAttackYodareFPA4_f
/* 8035D5E0 0035A520  7C 60 1B 78 */	mr r0, r3
.L_8035D5E4:
/* 8035D5E4 0035A524  90 1F 03 68 */	stw r0, 0x368(r31)
/* 8035D5E8 0035A528  38 60 00 54 */	li r3, 0x54
/* 8035D5EC 0035A52C  4B CC 68 B9 */	bl __nw__FUl
/* 8035D5F0 0035A530  7C 60 1B 79 */	or. r0, r3, r3
/* 8035D5F4 0035A534  41 82 00 10 */	beq .L_8035D604
/* 8035D5F8 0035A538  38 80 00 00 */	li r4, 0
/* 8035D5FC 0035A53C  48 00 02 15 */	bl __ct__Q23efx14TKchDeadYodareFPA4_f
/* 8035D600 0035A540  7C 60 1B 78 */	mr r0, r3
.L_8035D604:
/* 8035D604 0035A544  90 1F 03 6C */	stw r0, 0x36c(r31)
/* 8035D608 0035A548  38 60 00 2C */	li r3, 0x2c
/* 8035D60C 0035A54C  4B CC 68 99 */	bl __nw__FUl
/* 8035D610 0035A550  7C 7C 1B 79 */	or. r28, r3, r3
/* 8035D614 0035A554  41 82 00 20 */	beq .L_8035D634
/* 8035D618 0035A558  38 80 00 00 */	li r4, 0
/* 8035D61C 0035A55C  38 A0 02 1E */	li r5, 0x21e
/* 8035D620 0035A560  38 C0 02 1F */	li r6, 0x21f
/* 8035D624 0035A564  48 05 2E 79 */	bl __ct__Q23efx10TChaseMtx2FPA4_fUsUs
/* 8035D628 0035A568  3C 60 80 4E */	lis r3, __vt__Q23efx12TKchDeadHana@ha
/* 8035D62C 0035A56C  38 03 1E EC */	addi r0, r3, __vt__Q23efx12TKchDeadHana@l
/* 8035D630 0035A570  90 1C 00 00 */	stw r0, 0(r28)
.L_8035D634:
/* 8035D634 0035A574  93 9F 03 70 */	stw r28, 0x370(r31)
/* 8035D638 0035A578  38 60 00 2C */	li r3, 0x2c
/* 8035D63C 0035A57C  4B CC 68 69 */	bl __nw__FUl
/* 8035D640 0035A580  28 03 00 00 */	cmplwi r3, 0
/* 8035D644 0035A584  41 82 00 D0 */	beq .L_8035D714
/* 8035D648 0035A588  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 8035D64C 0035A58C  3C 80 80 4F */	lis r4, __vt__Q23efx19TEnemyHamonChasePos@ha
/* 8035D650 0035A590  3B C5 A7 F8 */	addi r30, r5, __vt__Q23efx5TBase@l
/* 8035D654 0035A594  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 8035D658 0035A598  93 C3 00 00 */	stw r30, 0(r3)
/* 8035D65C 0035A59C  38 04 84 C4 */	addi r0, r4, __vt__Q23efx19TEnemyHamonChasePos@l
/* 8035D660 0035A5A0  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 8035D664 0035A5A4  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 8035D668 0035A5A8  90 03 00 00 */	stw r0, 0(r3)
/* 8035D66C 0035A5AC  3B 85 69 8C */	addi r28, r5, __vt__Q23efx5TSync@l
/* 8035D670 0035A5B0  39 44 69 40 */	addi r10, r4, __vt__Q23efx9TChasePos@l
/* 8035D674 0035A5B4  3C 80 80 4F */	lis r4, __vt__Q23efx12TEnemyHamonM@ha
/* 8035D678 0035A5B8  93 C3 00 04 */	stw r30, 4(r3)
/* 8035D67C 0035A5BC  3B A6 E2 7C */	addi r29, r6, __vt__18JPAEmitterCallBack@l
/* 8035D680 0035A5C0  38 E4 85 24 */	addi r7, r4, __vt__Q23efx12TEnemyHamonM@l
/* 8035D684 0035A5C4  3C 80 80 4F */	lis r4, __vt__Q23efx15TEnemyHamonMInd@ha
/* 8035D688 0035A5C8  93 A3 00 08 */	stw r29, 8(r3)
/* 8035D68C 0035A5CC  38 84 84 D8 */	addi r4, r4, __vt__Q23efx15TEnemyHamonMInd@l
/* 8035D690 0035A5D0  3B 7C 00 14 */	addi r27, r28, 0x14
/* 8035D694 0035A5D4  39 80 00 00 */	li r12, 0
/* 8035D698 0035A5D8  93 83 00 04 */	stw r28, 4(r3)
/* 8035D69C 0035A5DC  39 60 02 B2 */	li r11, 0x2b2
/* 8035D6A0 0035A5E0  3B 4A 00 14 */	addi r26, r10, 0x14
/* 8035D6A4 0035A5E4  39 3F 03 7C */	addi r9, r31, 0x37c
/* 8035D6A8 0035A5E8  93 63 00 08 */	stw r27, 8(r3)
/* 8035D6AC 0035A5EC  39 00 00 57 */	li r8, 0x57
/* 8035D6B0 0035A5F0  38 C7 00 14 */	addi r6, r7, 0x14
/* 8035D6B4 0035A5F4  38 A0 00 58 */	li r5, 0x58
/* 8035D6B8 0035A5F8  91 83 00 0C */	stw r12, 0xc(r3)
/* 8035D6BC 0035A5FC  38 04 00 14 */	addi r0, r4, 0x14
/* 8035D6C0 0035A600  B1 63 00 10 */	sth r11, 0x10(r3)
/* 8035D6C4 0035A604  99 83 00 12 */	stb r12, 0x12(r3)
/* 8035D6C8 0035A608  91 43 00 04 */	stw r10, 4(r3)
/* 8035D6CC 0035A60C  93 43 00 08 */	stw r26, 8(r3)
/* 8035D6D0 0035A610  91 23 00 14 */	stw r9, 0x14(r3)
/* 8035D6D4 0035A614  B1 03 00 10 */	sth r8, 0x10(r3)
/* 8035D6D8 0035A618  90 E3 00 04 */	stw r7, 4(r3)
/* 8035D6DC 0035A61C  90 C3 00 08 */	stw r6, 8(r3)
/* 8035D6E0 0035A620  93 C3 00 18 */	stw r30, 0x18(r3)
/* 8035D6E4 0035A624  93 A3 00 1C */	stw r29, 0x1c(r3)
/* 8035D6E8 0035A628  93 83 00 18 */	stw r28, 0x18(r3)
/* 8035D6EC 0035A62C  93 63 00 1C */	stw r27, 0x1c(r3)
/* 8035D6F0 0035A630  91 83 00 20 */	stw r12, 0x20(r3)
/* 8035D6F4 0035A634  B1 63 00 24 */	sth r11, 0x24(r3)
/* 8035D6F8 0035A638  99 83 00 26 */	stb r12, 0x26(r3)
/* 8035D6FC 0035A63C  91 43 00 18 */	stw r10, 0x18(r3)
/* 8035D700 0035A640  93 43 00 1C */	stw r26, 0x1c(r3)
/* 8035D704 0035A644  91 23 00 28 */	stw r9, 0x28(r3)
/* 8035D708 0035A648  B0 A3 00 24 */	sth r5, 0x24(r3)
/* 8035D70C 0035A64C  90 83 00 18 */	stw r4, 0x18(r3)
/* 8035D710 0035A650  90 03 00 1C */	stw r0, 0x1c(r3)
.L_8035D714:
/* 8035D714 0035A654  90 7F 03 74 */	stw r3, 0x374(r31)
/* 8035D718 0035A658  38 60 00 2C */	li r3, 0x2c
/* 8035D71C 0035A65C  4B CC 67 89 */	bl __nw__FUl
/* 8035D720 0035A660  28 03 00 00 */	cmplwi r3, 0
/* 8035D724 0035A664  41 82 00 D0 */	beq .L_8035D7F4
/* 8035D728 0035A668  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 8035D72C 0035A66C  3C 80 80 4F */	lis r4, __vt__Q23efx19TEnemyHamonChasePos@ha
/* 8035D730 0035A670  3B 85 A7 F8 */	addi r28, r5, __vt__Q23efx5TBase@l
/* 8035D734 0035A674  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 8035D738 0035A678  93 83 00 00 */	stw r28, 0(r3)
/* 8035D73C 0035A67C  38 04 84 C4 */	addi r0, r4, __vt__Q23efx19TEnemyHamonChasePos@l
/* 8035D740 0035A680  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 8035D744 0035A684  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 8035D748 0035A688  90 03 00 00 */	stw r0, 0(r3)
/* 8035D74C 0035A68C  3B C5 69 8C */	addi r30, r5, __vt__Q23efx5TSync@l
/* 8035D750 0035A690  39 44 69 40 */	addi r10, r4, __vt__Q23efx9TChasePos@l
/* 8035D754 0035A694  3C 80 80 4F */	lis r4, __vt__Q23efx12TEnemyHamonM@ha
/* 8035D758 0035A698  93 83 00 04 */	stw r28, 4(r3)
/* 8035D75C 0035A69C  3B A6 E2 7C */	addi r29, r6, __vt__18JPAEmitterCallBack@l
/* 8035D760 0035A6A0  38 E4 85 24 */	addi r7, r4, __vt__Q23efx12TEnemyHamonM@l
/* 8035D764 0035A6A4  3C 80 80 4F */	lis r4, __vt__Q23efx15TEnemyHamonMInd@ha
/* 8035D768 0035A6A8  93 A3 00 08 */	stw r29, 8(r3)
/* 8035D76C 0035A6AC  38 84 84 D8 */	addi r4, r4, __vt__Q23efx15TEnemyHamonMInd@l
/* 8035D770 0035A6B0  3B 5E 00 14 */	addi r26, r30, 0x14
/* 8035D774 0035A6B4  39 80 00 00 */	li r12, 0
/* 8035D778 0035A6B8  93 C3 00 04 */	stw r30, 4(r3)
/* 8035D77C 0035A6BC  39 60 02 B2 */	li r11, 0x2b2
/* 8035D780 0035A6C0  3B 6A 00 14 */	addi r27, r10, 0x14
/* 8035D784 0035A6C4  39 3F 03 88 */	addi r9, r31, 0x388
/* 8035D788 0035A6C8  93 43 00 08 */	stw r26, 8(r3)
/* 8035D78C 0035A6CC  39 00 00 57 */	li r8, 0x57
/* 8035D790 0035A6D0  38 C7 00 14 */	addi r6, r7, 0x14
/* 8035D794 0035A6D4  38 A0 00 58 */	li r5, 0x58
/* 8035D798 0035A6D8  91 83 00 0C */	stw r12, 0xc(r3)
/* 8035D79C 0035A6DC  38 04 00 14 */	addi r0, r4, 0x14
/* 8035D7A0 0035A6E0  B1 63 00 10 */	sth r11, 0x10(r3)
/* 8035D7A4 0035A6E4  99 83 00 12 */	stb r12, 0x12(r3)
/* 8035D7A8 0035A6E8  91 43 00 04 */	stw r10, 4(r3)
/* 8035D7AC 0035A6EC  93 63 00 08 */	stw r27, 8(r3)
/* 8035D7B0 0035A6F0  91 23 00 14 */	stw r9, 0x14(r3)
/* 8035D7B4 0035A6F4  B1 03 00 10 */	sth r8, 0x10(r3)
/* 8035D7B8 0035A6F8  90 E3 00 04 */	stw r7, 4(r3)
/* 8035D7BC 0035A6FC  90 C3 00 08 */	stw r6, 8(r3)
/* 8035D7C0 0035A700  93 83 00 18 */	stw r28, 0x18(r3)
/* 8035D7C4 0035A704  93 A3 00 1C */	stw r29, 0x1c(r3)
/* 8035D7C8 0035A708  93 C3 00 18 */	stw r30, 0x18(r3)
/* 8035D7CC 0035A70C  93 43 00 1C */	stw r26, 0x1c(r3)
/* 8035D7D0 0035A710  91 83 00 20 */	stw r12, 0x20(r3)
/* 8035D7D4 0035A714  B1 63 00 24 */	sth r11, 0x24(r3)
/* 8035D7D8 0035A718  99 83 00 26 */	stb r12, 0x26(r3)
/* 8035D7DC 0035A71C  91 43 00 18 */	stw r10, 0x18(r3)
/* 8035D7E0 0035A720  93 63 00 1C */	stw r27, 0x1c(r3)
/* 8035D7E4 0035A724  91 23 00 28 */	stw r9, 0x28(r3)
/* 8035D7E8 0035A728  B0 A3 00 24 */	sth r5, 0x24(r3)
/* 8035D7EC 0035A72C  90 83 00 18 */	stw r4, 0x18(r3)
/* 8035D7F0 0035A730  90 03 00 1C */	stw r0, 0x1c(r3)
.L_8035D7F4:
/* 8035D7F4 0035A734  90 7F 03 78 */	stw r3, 0x378(r31)
/* 8035D7F8 0035A738  7F E3 FB 78 */	mr r3, r31
/* 8035D7FC 0035A73C  BB 41 00 08 */	lmw r26, 8(r1)
/* 8035D800 0035A740  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8035D804 0035A744  7C 08 03 A6 */	mtlr r0
/* 8035D808 0035A748  38 21 00 20 */	addi r1, r1, 0x20
/* 8035D80C 0035A74C  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy3ObjFv

.fn __ct__Q23efx14TKchDeadYodareFPA4_f, weak
/* 8035D810 0035A750  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8035D814 0035A754  7C 08 02 A6 */	mflr r0
/* 8035D818 0035A758  3C E0 80 4A */	lis r7, __vt__19JPAParticleCallBack@ha
/* 8035D81C 0035A75C  3C C0 80 4F */	lis r6, __vt__Q23efx27TParticleCallBack_KchYodare@ha
/* 8035D820 0035A760  90 01 00 24 */	stw r0, 0x24(r1)
/* 8035D824 0035A764  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 8035D828 0035A768  39 40 02 20 */	li r10, 0x220
/* 8035D82C 0035A76C  38 E7 33 58 */	addi r7, r7, __vt__19JPAParticleCallBack@l
/* 8035D830 0035A770  BF 41 00 08 */	stmw r26, 8(r1)
/* 8035D834 0035A774  7C 7E 1B 78 */	mr r30, r3
/* 8035D838 0035A778  3B 45 A7 F8 */	addi r26, r5, __vt__Q23efx5TBase@l
/* 8035D83C 0035A77C  3C 60 80 4A */	lis r3, __vt__18JPAEmitterCallBack@ha
/* 8035D840 0035A780  3B 63 E2 7C */	addi r27, r3, __vt__18JPAEmitterCallBack@l
/* 8035D844 0035A784  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 8035D848 0035A788  38 A5 69 8C */	addi r5, r5, __vt__Q23efx5TSync@l
/* 8035D84C 0035A78C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 8035D850 0035A790  39 83 68 A8 */	addi r12, r3, __vt__Q23efx9TChaseMtx@l
/* 8035D854 0035A794  3B 80 00 00 */	li r28, 0
/* 8035D858 0035A798  3C 60 80 4F */	lis r3, __vt__Q23efx22TKchYodareBaseChaseMtx@ha
/* 8035D85C 0035A79C  38 05 00 14 */	addi r0, r5, 0x14
/* 8035D860 0035A7A0  39 23 A0 54 */	addi r9, r3, __vt__Q23efx22TKchYodareBaseChaseMtx@l
/* 8035D864 0035A7A4  39 6C 00 14 */	addi r11, r12, 0x14
/* 8035D868 0035A7A8  39 09 00 14 */	addi r8, r9, 0x14
/* 8035D86C 0035A7AC  38 C6 A0 A0 */	addi r6, r6, __vt__Q23efx27TParticleCallBack_KchYodare@l
/* 8035D870 0035A7B0  93 5E 00 00 */	stw r26, 0(r30)
/* 8035D874 0035A7B4  3C 60 80 4E */	lis r3, __vt__Q23efx17TOneEmitterSimple@ha
/* 8035D878 0035A7B8  3B BE 00 18 */	addi r29, r30, 0x18
/* 8035D87C 0035A7BC  93 7E 00 04 */	stw r27, 4(r30)
/* 8035D880 0035A7C0  90 BE 00 00 */	stw r5, 0(r30)
/* 8035D884 0035A7C4  38 A3 6A 8C */	addi r5, r3, __vt__Q23efx17TOneEmitterSimple@l
/* 8035D888 0035A7C8  3B E5 00 14 */	addi r31, r5, 0x14
/* 8035D88C 0035A7CC  38 60 02 2C */	li r3, 0x22c
/* 8035D890 0035A7D0  90 1E 00 04 */	stw r0, 4(r30)
/* 8035D894 0035A7D4  38 00 02 B2 */	li r0, 0x2b2
/* 8035D898 0035A7D8  93 9E 00 08 */	stw r28, 8(r30)
/* 8035D89C 0035A7DC  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 8035D8A0 0035A7E0  38 00 00 0A */	li r0, 0xa
/* 8035D8A4 0035A7E4  9B 9E 00 0E */	stb r28, 0xe(r30)
/* 8035D8A8 0035A7E8  91 9E 00 00 */	stw r12, 0(r30)
/* 8035D8AC 0035A7EC  91 7E 00 04 */	stw r11, 4(r30)
/* 8035D8B0 0035A7F0  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8035D8B4 0035A7F4  B1 5E 00 0C */	sth r10, 0xc(r30)
/* 8035D8B8 0035A7F8  91 3E 00 00 */	stw r9, 0(r30)
/* 8035D8BC 0035A7FC  91 1E 00 04 */	stw r8, 4(r30)
/* 8035D8C0 0035A800  90 FE 00 14 */	stw r7, 0x14(r30)
/* 8035D8C4 0035A804  90 DE 00 14 */	stw r6, 0x14(r30)
/* 8035D8C8 0035A808  93 5E 00 18 */	stw r26, 0x18(r30)
/* 8035D8CC 0035A80C  93 7E 00 1C */	stw r27, 0x1c(r30)
/* 8035D8D0 0035A810  90 BE 00 18 */	stw r5, 0x18(r30)
/* 8035D8D4 0035A814  93 FE 00 1C */	stw r31, 0x1c(r30)
/* 8035D8D8 0035A818  93 9E 00 20 */	stw r28, 0x20(r30)
/* 8035D8DC 0035A81C  B0 7E 00 24 */	sth r3, 0x24(r30)
/* 8035D8E0 0035A820  93 9E 00 2C */	stw r28, 0x2c(r30)
/* 8035D8E4 0035A824  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8035D8E8 0035A828  83 5E 00 30 */	lwz r26, 0x30(r30)
/* 8035D8EC 0035A82C  1C 7A 00 0C */	mulli r3, r26, 0xc
/* 8035D8F0 0035A830  38 63 00 10 */	addi r3, r3, 0x10
/* 8035D8F4 0035A834  4B CC 66 B9 */	bl __nwa__FUl
/* 8035D8F8 0035A838  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 8035D8FC 0035A83C  7F 47 D3 78 */	mr r7, r26
/* 8035D900 0035A840  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 8035D904 0035A844  38 A0 00 00 */	li r5, 0
/* 8035D908 0035A848  38 C0 00 0C */	li r6, 0xc
/* 8035D90C 0035A84C  4B D6 40 E5 */	bl __construct_new_array
/* 8035D910 0035A850  3C 80 80 4E */	lis r4, __vt__Q23efx15TKchYodareHitGr@ha
/* 8035D914 0035A854  90 7D 00 10 */	stw r3, 0x10(r29)
/* 8035D918 0035A858  38 84 1E AC */	addi r4, r4, __vt__Q23efx15TKchYodareHitGr@l
/* 8035D91C 0035A85C  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8035D920 0035A860  90 9D 00 00 */	stw r4, 0(r29)
/* 8035D924 0035A864  38 04 00 14 */	addi r0, r4, 0x14
/* 8035D928 0035A868  3B 9E 00 34 */	addi r28, r30, 0x34
/* 8035D92C 0035A86C  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 8035D930 0035A870  90 1D 00 04 */	stw r0, 4(r29)
/* 8035D934 0035A874  38 A3 A7 F8 */	addi r5, r3, __vt__Q23efx5TBase@l
/* 8035D938 0035A878  3C 60 80 4E */	lis r3, __vt__Q23efx17TOneEmitterSimple@ha
/* 8035D93C 0035A87C  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 8035D940 0035A880  90 BE 00 34 */	stw r5, 0x34(r30)
/* 8035D944 0035A884  38 A3 6A 8C */	addi r5, r3, __vt__Q23efx17TOneEmitterSimple@l
/* 8035D948 0035A888  38 80 00 00 */	li r4, 0
/* 8035D94C 0035A88C  38 60 02 2D */	li r3, 0x22d
/* 8035D950 0035A890  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8035D954 0035A894  38 00 00 0A */	li r0, 0xa
/* 8035D958 0035A898  7F 9B E3 78 */	mr r27, r28
/* 8035D95C 0035A89C  90 BE 00 34 */	stw r5, 0x34(r30)
/* 8035D960 0035A8A0  93 FE 00 38 */	stw r31, 0x38(r30)
/* 8035D964 0035A8A4  90 9E 00 3C */	stw r4, 0x3c(r30)
/* 8035D968 0035A8A8  B0 7E 00 40 */	sth r3, 0x40(r30)
/* 8035D96C 0035A8AC  90 9E 00 48 */	stw r4, 0x48(r30)
/* 8035D970 0035A8B0  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 8035D974 0035A8B4  83 5E 00 4C */	lwz r26, 0x4c(r30)
/* 8035D978 0035A8B8  1C 7A 00 0C */	mulli r3, r26, 0xc
/* 8035D97C 0035A8BC  38 63 00 10 */	addi r3, r3, 0x10
/* 8035D980 0035A8C0  4B CC 66 2D */	bl __nwa__FUl
/* 8035D984 0035A8C4  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 8035D988 0035A8C8  7F 47 D3 78 */	mr r7, r26
/* 8035D98C 0035A8CC  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 8035D990 0035A8D0  38 A0 00 00 */	li r5, 0
/* 8035D994 0035A8D4  38 C0 00 0C */	li r6, 0xc
/* 8035D998 0035A8D8  4B D6 40 59 */	bl __construct_new_array
/* 8035D99C 0035A8DC  90 7B 00 10 */	stw r3, 0x10(r27)
/* 8035D9A0 0035A8E0  3C 60 80 4E */	lis r3, __vt__Q23efx16TKchYodareHitWat@ha
/* 8035D9A4 0035A8E4  38 83 1E 6C */	addi r4, r3, __vt__Q23efx16TKchYodareHitWat@l
/* 8035D9A8 0035A8E8  3C 60 80 4E */	lis r3, __vt__Q23efx14TKchDeadYodare@ha
/* 8035D9AC 0035A8EC  90 9C 00 00 */	stw r4, 0(r28)
/* 8035D9B0 0035A8F0  38 04 00 14 */	addi r0, r4, 0x14
/* 8035D9B4 0035A8F4  38 83 1E 20 */	addi r4, r3, __vt__Q23efx14TKchDeadYodare@l
/* 8035D9B8 0035A8F8  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035D9BC 0035A8FC  90 1C 00 04 */	stw r0, 4(r28)
/* 8035D9C0 0035A900  38 04 00 14 */	addi r0, r4, 0x14
/* 8035D9C4 0035A904  7F C3 F3 78 */	mr r3, r30
/* 8035D9C8 0035A908  D0 1E 00 50 */	stfs f0, 0x50(r30)
/* 8035D9CC 0035A90C  90 9E 00 00 */	stw r4, 0(r30)
/* 8035D9D0 0035A910  90 1E 00 04 */	stw r0, 4(r30)
/* 8035D9D4 0035A914  BB 41 00 08 */	lmw r26, 8(r1)
/* 8035D9D8 0035A918  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8035D9DC 0035A91C  7C 08 03 A6 */	mtlr r0
/* 8035D9E0 0035A920  38 21 00 20 */	addi r1, r1, 0x20
/* 8035D9E4 0035A924  4E 80 00 20 */	blr 
.endfn __ct__Q23efx14TKchDeadYodareFPA4_f

.fn __dt__Q23efx22TKchYodareBaseChaseMtxFv, weak
/* 8035D9E8 0035A928  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035D9EC 0035A92C  7C 08 02 A6 */	mflr r0
/* 8035D9F0 0035A930  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035D9F4 0035A934  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035D9F8 0035A938  7C 9F 23 78 */	mr r31, r4
/* 8035D9FC 0035A93C  93 C1 00 08 */	stw r30, 8(r1)
/* 8035DA00 0035A940  7C 7E 1B 79 */	or. r30, r3, r3
/* 8035DA04 0035A944  41 82 01 10 */	beq .L_8035DB14
/* 8035DA08 0035A948  3C 60 80 4F */	lis r3, __vt__Q23efx22TKchYodareBaseChaseMtx@ha
/* 8035DA0C 0035A94C  34 1E 00 14 */	addic. r0, r30, 0x14
/* 8035DA10 0035A950  38 63 A0 54 */	addi r3, r3, __vt__Q23efx22TKchYodareBaseChaseMtx@l
/* 8035DA14 0035A954  90 7E 00 00 */	stw r3, 0(r30)
/* 8035DA18 0035A958  38 03 00 14 */	addi r0, r3, 0x14
/* 8035DA1C 0035A95C  90 1E 00 04 */	stw r0, 4(r30)
/* 8035DA20 0035A960  41 82 00 A4 */	beq .L_8035DAC4
/* 8035DA24 0035A964  3C 60 80 4F */	lis r3, __vt__Q23efx27TParticleCallBack_KchYodare@ha
/* 8035DA28 0035A968  34 9E 00 34 */	addic. r4, r30, 0x34
/* 8035DA2C 0035A96C  38 03 A0 A0 */	addi r0, r3, __vt__Q23efx27TParticleCallBack_KchYodare@l
/* 8035DA30 0035A970  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8035DA34 0035A974  41 82 00 40 */	beq .L_8035DA74
/* 8035DA38 0035A978  3C 60 80 4E */	lis r3, __vt__Q23efx16TKchYodareHitWat@ha
/* 8035DA3C 0035A97C  28 04 00 00 */	cmplwi r4, 0
/* 8035DA40 0035A980  38 63 1E 6C */	addi r3, r3, __vt__Q23efx16TKchYodareHitWat@l
/* 8035DA44 0035A984  90 7E 00 34 */	stw r3, 0x34(r30)
/* 8035DA48 0035A988  38 03 00 14 */	addi r0, r3, 0x14
/* 8035DA4C 0035A98C  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8035DA50 0035A990  41 82 00 24 */	beq .L_8035DA74
/* 8035DA54 0035A994  3C 80 80 4E */	lis r4, __vt__Q23efx17TOneEmitterSimple@ha
/* 8035DA58 0035A998  38 7E 00 38 */	addi r3, r30, 0x38
/* 8035DA5C 0035A99C  38 A4 6A 8C */	addi r5, r4, __vt__Q23efx17TOneEmitterSimple@l
/* 8035DA60 0035A9A0  38 80 00 00 */	li r4, 0
/* 8035DA64 0035A9A4  90 BE 00 34 */	stw r5, 0x34(r30)
/* 8035DA68 0035A9A8  38 05 00 14 */	addi r0, r5, 0x14
/* 8035DA6C 0035A9AC  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8035DA70 0035A9B0  4B D3 22 2D */	bl __dt__18JPAEmitterCallBackFv
.L_8035DA74:
/* 8035DA74 0035A9B4  34 1E 00 18 */	addic. r0, r30, 0x18
/* 8035DA78 0035A9B8  41 82 00 40 */	beq .L_8035DAB8
/* 8035DA7C 0035A9BC  3C 60 80 4E */	lis r3, __vt__Q23efx15TKchYodareHitGr@ha
/* 8035DA80 0035A9C0  28 00 00 00 */	cmplwi r0, 0
/* 8035DA84 0035A9C4  38 63 1E AC */	addi r3, r3, __vt__Q23efx15TKchYodareHitGr@l
/* 8035DA88 0035A9C8  90 7E 00 18 */	stw r3, 0x18(r30)
/* 8035DA8C 0035A9CC  38 03 00 14 */	addi r0, r3, 0x14
/* 8035DA90 0035A9D0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8035DA94 0035A9D4  41 82 00 24 */	beq .L_8035DAB8
/* 8035DA98 0035A9D8  3C 80 80 4E */	lis r4, __vt__Q23efx17TOneEmitterSimple@ha
/* 8035DA9C 0035A9DC  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8035DAA0 0035A9E0  38 A4 6A 8C */	addi r5, r4, __vt__Q23efx17TOneEmitterSimple@l
/* 8035DAA4 0035A9E4  38 80 00 00 */	li r4, 0
/* 8035DAA8 0035A9E8  90 BE 00 18 */	stw r5, 0x18(r30)
/* 8035DAAC 0035A9EC  38 05 00 14 */	addi r0, r5, 0x14
/* 8035DAB0 0035A9F0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8035DAB4 0035A9F4  4B D3 21 E9 */	bl __dt__18JPAEmitterCallBackFv
.L_8035DAB8:
/* 8035DAB8 0035A9F8  38 7E 00 14 */	addi r3, r30, 0x14
/* 8035DABC 0035A9FC  38 80 00 00 */	li r4, 0
/* 8035DAC0 0035AA00  4B D3 65 69 */	bl __dt__19JPAParticleCallBackFv
.L_8035DAC4:
/* 8035DAC4 0035AA04  28 1E 00 00 */	cmplwi r30, 0
/* 8035DAC8 0035AA08  41 82 00 3C */	beq .L_8035DB04
/* 8035DACC 0035AA0C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 8035DAD0 0035AA10  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 8035DAD4 0035AA14  90 7E 00 00 */	stw r3, 0(r30)
/* 8035DAD8 0035AA18  38 03 00 14 */	addi r0, r3, 0x14
/* 8035DADC 0035AA1C  90 1E 00 04 */	stw r0, 4(r30)
/* 8035DAE0 0035AA20  41 82 00 24 */	beq .L_8035DB04
/* 8035DAE4 0035AA24  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8035DAE8 0035AA28  38 7E 00 04 */	addi r3, r30, 4
/* 8035DAEC 0035AA2C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8035DAF0 0035AA30  38 80 00 00 */	li r4, 0
/* 8035DAF4 0035AA34  90 BE 00 00 */	stw r5, 0(r30)
/* 8035DAF8 0035AA38  38 05 00 14 */	addi r0, r5, 0x14
/* 8035DAFC 0035AA3C  90 1E 00 04 */	stw r0, 4(r30)
/* 8035DB00 0035AA40  4B D3 21 9D */	bl __dt__18JPAEmitterCallBackFv
.L_8035DB04:
/* 8035DB04 0035AA44  7F E0 07 35 */	extsh. r0, r31
/* 8035DB08 0035AA48  40 81 00 0C */	ble .L_8035DB14
/* 8035DB0C 0035AA4C  7F C3 F3 78 */	mr r3, r30
/* 8035DB10 0035AA50  4B CC 65 A5 */	bl __dl__FPv
.L_8035DB14:
/* 8035DB14 0035AA54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035DB18 0035AA58  7F C3 F3 78 */	mr r3, r30
/* 8035DB1C 0035AA5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035DB20 0035AA60  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035DB24 0035AA64  7C 08 03 A6 */	mtlr r0
/* 8035DB28 0035AA68  38 21 00 10 */	addi r1, r1, 0x10
/* 8035DB2C 0035AA6C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx22TKchYodareBaseChaseMtxFv

.fn __dt__Q23efx27TParticleCallBack_KchYodareFv, weak
/* 8035DB30 0035AA70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035DB34 0035AA74  7C 08 02 A6 */	mflr r0
/* 8035DB38 0035AA78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035DB3C 0035AA7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035DB40 0035AA80  7C 9F 23 78 */	mr r31, r4
/* 8035DB44 0035AA84  93 C1 00 08 */	stw r30, 8(r1)
/* 8035DB48 0035AA88  7C 7E 1B 79 */	or. r30, r3, r3
/* 8035DB4C 0035AA8C  41 82 00 B4 */	beq .L_8035DC00
/* 8035DB50 0035AA90  3C 60 80 4F */	lis r3, __vt__Q23efx27TParticleCallBack_KchYodare@ha
/* 8035DB54 0035AA94  34 1E 00 20 */	addic. r0, r30, 0x20
/* 8035DB58 0035AA98  38 03 A0 A0 */	addi r0, r3, __vt__Q23efx27TParticleCallBack_KchYodare@l
/* 8035DB5C 0035AA9C  90 1E 00 00 */	stw r0, 0(r30)
/* 8035DB60 0035AAA0  41 82 00 40 */	beq .L_8035DBA0
/* 8035DB64 0035AAA4  3C 60 80 4E */	lis r3, __vt__Q23efx16TKchYodareHitWat@ha
/* 8035DB68 0035AAA8  34 1E 00 20 */	addic. r0, r30, 0x20
/* 8035DB6C 0035AAAC  38 63 1E 6C */	addi r3, r3, __vt__Q23efx16TKchYodareHitWat@l
/* 8035DB70 0035AAB0  90 7E 00 20 */	stw r3, 0x20(r30)
/* 8035DB74 0035AAB4  38 03 00 14 */	addi r0, r3, 0x14
/* 8035DB78 0035AAB8  90 1E 00 24 */	stw r0, 0x24(r30)
/* 8035DB7C 0035AABC  41 82 00 24 */	beq .L_8035DBA0
/* 8035DB80 0035AAC0  3C 80 80 4E */	lis r4, __vt__Q23efx17TOneEmitterSimple@ha
/* 8035DB84 0035AAC4  38 7E 00 24 */	addi r3, r30, 0x24
/* 8035DB88 0035AAC8  38 A4 6A 8C */	addi r5, r4, __vt__Q23efx17TOneEmitterSimple@l
/* 8035DB8C 0035AACC  38 80 00 00 */	li r4, 0
/* 8035DB90 0035AAD0  90 BE 00 20 */	stw r5, 0x20(r30)
/* 8035DB94 0035AAD4  38 05 00 14 */	addi r0, r5, 0x14
/* 8035DB98 0035AAD8  90 1E 00 24 */	stw r0, 0x24(r30)
/* 8035DB9C 0035AADC  4B D3 21 01 */	bl __dt__18JPAEmitterCallBackFv
.L_8035DBA0:
/* 8035DBA0 0035AAE0  34 1E 00 04 */	addic. r0, r30, 4
/* 8035DBA4 0035AAE4  41 82 00 40 */	beq .L_8035DBE4
/* 8035DBA8 0035AAE8  3C 60 80 4E */	lis r3, __vt__Q23efx15TKchYodareHitGr@ha
/* 8035DBAC 0035AAEC  34 1E 00 04 */	addic. r0, r30, 4
/* 8035DBB0 0035AAF0  38 63 1E AC */	addi r3, r3, __vt__Q23efx15TKchYodareHitGr@l
/* 8035DBB4 0035AAF4  90 7E 00 04 */	stw r3, 4(r30)
/* 8035DBB8 0035AAF8  38 03 00 14 */	addi r0, r3, 0x14
/* 8035DBBC 0035AAFC  90 1E 00 08 */	stw r0, 8(r30)
/* 8035DBC0 0035AB00  41 82 00 24 */	beq .L_8035DBE4
/* 8035DBC4 0035AB04  3C 80 80 4E */	lis r4, __vt__Q23efx17TOneEmitterSimple@ha
/* 8035DBC8 0035AB08  38 7E 00 08 */	addi r3, r30, 8
/* 8035DBCC 0035AB0C  38 A4 6A 8C */	addi r5, r4, __vt__Q23efx17TOneEmitterSimple@l
/* 8035DBD0 0035AB10  38 80 00 00 */	li r4, 0
/* 8035DBD4 0035AB14  90 BE 00 04 */	stw r5, 4(r30)
/* 8035DBD8 0035AB18  38 05 00 14 */	addi r0, r5, 0x14
/* 8035DBDC 0035AB1C  90 1E 00 08 */	stw r0, 8(r30)
/* 8035DBE0 0035AB20  4B D3 20 BD */	bl __dt__18JPAEmitterCallBackFv
.L_8035DBE4:
/* 8035DBE4 0035AB24  7F C3 F3 78 */	mr r3, r30
/* 8035DBE8 0035AB28  38 80 00 00 */	li r4, 0
/* 8035DBEC 0035AB2C  4B D3 64 3D */	bl __dt__19JPAParticleCallBackFv
/* 8035DBF0 0035AB30  7F E0 07 35 */	extsh. r0, r31
/* 8035DBF4 0035AB34  40 81 00 0C */	ble .L_8035DC00
/* 8035DBF8 0035AB38  7F C3 F3 78 */	mr r3, r30
/* 8035DBFC 0035AB3C  4B CC 64 B9 */	bl __dl__FPv
.L_8035DC00:
/* 8035DC00 0035AB40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035DC04 0035AB44  7F C3 F3 78 */	mr r3, r30
/* 8035DC08 0035AB48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035DC0C 0035AB4C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035DC10 0035AB50  7C 08 03 A6 */	mtlr r0
/* 8035DC14 0035AB54  38 21 00 10 */	addi r1, r1, 0x10
/* 8035DC18 0035AB58  4E 80 00 20 */	blr 
.endfn __dt__Q23efx27TParticleCallBack_KchYodareFv

.fn __dt__Q23efx16TKchYodareHitWatFv, weak
/* 8035DC1C 0035AB5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035DC20 0035AB60  7C 08 02 A6 */	mflr r0
/* 8035DC24 0035AB64  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035DC28 0035AB68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035DC2C 0035AB6C  7C 9F 23 78 */	mr r31, r4
/* 8035DC30 0035AB70  93 C1 00 08 */	stw r30, 8(r1)
/* 8035DC34 0035AB74  7C 7E 1B 79 */	or. r30, r3, r3
/* 8035DC38 0035AB78  41 82 00 4C */	beq .L_8035DC84
/* 8035DC3C 0035AB7C  3C 60 80 4E */	lis r3, __vt__Q23efx16TKchYodareHitWat@ha
/* 8035DC40 0035AB80  38 63 1E 6C */	addi r3, r3, __vt__Q23efx16TKchYodareHitWat@l
/* 8035DC44 0035AB84  90 7E 00 00 */	stw r3, 0(r30)
/* 8035DC48 0035AB88  38 03 00 14 */	addi r0, r3, 0x14
/* 8035DC4C 0035AB8C  90 1E 00 04 */	stw r0, 4(r30)
/* 8035DC50 0035AB90  41 82 00 24 */	beq .L_8035DC74
/* 8035DC54 0035AB94  3C 80 80 4E */	lis r4, __vt__Q23efx17TOneEmitterSimple@ha
/* 8035DC58 0035AB98  38 7E 00 04 */	addi r3, r30, 4
/* 8035DC5C 0035AB9C  38 A4 6A 8C */	addi r5, r4, __vt__Q23efx17TOneEmitterSimple@l
/* 8035DC60 0035ABA0  38 80 00 00 */	li r4, 0
/* 8035DC64 0035ABA4  90 BE 00 00 */	stw r5, 0(r30)
/* 8035DC68 0035ABA8  38 05 00 14 */	addi r0, r5, 0x14
/* 8035DC6C 0035ABAC  90 1E 00 04 */	stw r0, 4(r30)
/* 8035DC70 0035ABB0  4B D3 20 2D */	bl __dt__18JPAEmitterCallBackFv
.L_8035DC74:
/* 8035DC74 0035ABB4  7F E0 07 35 */	extsh. r0, r31
/* 8035DC78 0035ABB8  40 81 00 0C */	ble .L_8035DC84
/* 8035DC7C 0035ABBC  7F C3 F3 78 */	mr r3, r30
/* 8035DC80 0035ABC0  4B CC 64 35 */	bl __dl__FPv
.L_8035DC84:
/* 8035DC84 0035ABC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035DC88 0035ABC8  7F C3 F3 78 */	mr r3, r30
/* 8035DC8C 0035ABCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035DC90 0035ABD0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035DC94 0035ABD4  7C 08 03 A6 */	mtlr r0
/* 8035DC98 0035ABD8  38 21 00 10 */	addi r1, r1, 0x10
/* 8035DC9C 0035ABDC  4E 80 00 20 */	blr 
.endfn __dt__Q23efx16TKchYodareHitWatFv

.fn __dt__Q23efx15TKchYodareHitGrFv, weak
/* 8035DCA0 0035ABE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035DCA4 0035ABE4  7C 08 02 A6 */	mflr r0
/* 8035DCA8 0035ABE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035DCAC 0035ABEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035DCB0 0035ABF0  7C 9F 23 78 */	mr r31, r4
/* 8035DCB4 0035ABF4  93 C1 00 08 */	stw r30, 8(r1)
/* 8035DCB8 0035ABF8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8035DCBC 0035ABFC  41 82 00 4C */	beq .L_8035DD08
/* 8035DCC0 0035AC00  3C 60 80 4E */	lis r3, __vt__Q23efx15TKchYodareHitGr@ha
/* 8035DCC4 0035AC04  38 63 1E AC */	addi r3, r3, __vt__Q23efx15TKchYodareHitGr@l
/* 8035DCC8 0035AC08  90 7E 00 00 */	stw r3, 0(r30)
/* 8035DCCC 0035AC0C  38 03 00 14 */	addi r0, r3, 0x14
/* 8035DCD0 0035AC10  90 1E 00 04 */	stw r0, 4(r30)
/* 8035DCD4 0035AC14  41 82 00 24 */	beq .L_8035DCF8
/* 8035DCD8 0035AC18  3C 80 80 4E */	lis r4, __vt__Q23efx17TOneEmitterSimple@ha
/* 8035DCDC 0035AC1C  38 7E 00 04 */	addi r3, r30, 4
/* 8035DCE0 0035AC20  38 A4 6A 8C */	addi r5, r4, __vt__Q23efx17TOneEmitterSimple@l
/* 8035DCE4 0035AC24  38 80 00 00 */	li r4, 0
/* 8035DCE8 0035AC28  90 BE 00 00 */	stw r5, 0(r30)
/* 8035DCEC 0035AC2C  38 05 00 14 */	addi r0, r5, 0x14
/* 8035DCF0 0035AC30  90 1E 00 04 */	stw r0, 4(r30)
/* 8035DCF4 0035AC34  4B D3 1F A9 */	bl __dt__18JPAEmitterCallBackFv
.L_8035DCF8:
/* 8035DCF8 0035AC38  7F E0 07 35 */	extsh. r0, r31
/* 8035DCFC 0035AC3C  40 81 00 0C */	ble .L_8035DD08
/* 8035DD00 0035AC40  7F C3 F3 78 */	mr r3, r30
/* 8035DD04 0035AC44  4B CC 63 B1 */	bl __dl__FPv
.L_8035DD08:
/* 8035DD08 0035AC48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035DD0C 0035AC4C  7F C3 F3 78 */	mr r3, r30
/* 8035DD10 0035AC50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035DD14 0035AC54  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035DD18 0035AC58  7C 08 03 A6 */	mtlr r0
/* 8035DD1C 0035AC5C  38 21 00 10 */	addi r1, r1, 0x10
/* 8035DD20 0035AC60  4E 80 00 20 */	blr 
.endfn __dt__Q23efx15TKchYodareHitGrFv

.fn __ct__Q23efx16TKchAttackYodareFPA4_f, weak
/* 8035DD24 0035AC64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8035DD28 0035AC68  7C 08 02 A6 */	mflr r0
/* 8035DD2C 0035AC6C  3C E0 80 4A */	lis r7, __vt__19JPAParticleCallBack@ha
/* 8035DD30 0035AC70  3C C0 80 4F */	lis r6, __vt__Q23efx27TParticleCallBack_KchYodare@ha
/* 8035DD34 0035AC74  90 01 00 24 */	stw r0, 0x24(r1)
/* 8035DD38 0035AC78  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 8035DD3C 0035AC7C  39 40 02 16 */	li r10, 0x216
/* 8035DD40 0035AC80  38 E7 33 58 */	addi r7, r7, __vt__19JPAParticleCallBack@l
/* 8035DD44 0035AC84  BF 41 00 08 */	stmw r26, 8(r1)
/* 8035DD48 0035AC88  7C 7E 1B 78 */	mr r30, r3
/* 8035DD4C 0035AC8C  3B 45 A7 F8 */	addi r26, r5, __vt__Q23efx5TBase@l
/* 8035DD50 0035AC90  3C 60 80 4A */	lis r3, __vt__18JPAEmitterCallBack@ha
/* 8035DD54 0035AC94  3B 63 E2 7C */	addi r27, r3, __vt__18JPAEmitterCallBack@l
/* 8035DD58 0035AC98  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 8035DD5C 0035AC9C  38 A5 69 8C */	addi r5, r5, __vt__Q23efx5TSync@l
/* 8035DD60 0035ACA0  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 8035DD64 0035ACA4  39 83 68 A8 */	addi r12, r3, __vt__Q23efx9TChaseMtx@l
/* 8035DD68 0035ACA8  3B 80 00 00 */	li r28, 0
/* 8035DD6C 0035ACAC  3C 60 80 4F */	lis r3, __vt__Q23efx22TKchYodareBaseChaseMtx@ha
/* 8035DD70 0035ACB0  38 05 00 14 */	addi r0, r5, 0x14
/* 8035DD74 0035ACB4  39 23 A0 54 */	addi r9, r3, __vt__Q23efx22TKchYodareBaseChaseMtx@l
/* 8035DD78 0035ACB8  39 6C 00 14 */	addi r11, r12, 0x14
/* 8035DD7C 0035ACBC  39 09 00 14 */	addi r8, r9, 0x14
/* 8035DD80 0035ACC0  38 C6 A0 A0 */	addi r6, r6, __vt__Q23efx27TParticleCallBack_KchYodare@l
/* 8035DD84 0035ACC4  93 5E 00 00 */	stw r26, 0(r30)
/* 8035DD88 0035ACC8  3C 60 80 4E */	lis r3, __vt__Q23efx17TOneEmitterSimple@ha
/* 8035DD8C 0035ACCC  3B BE 00 18 */	addi r29, r30, 0x18
/* 8035DD90 0035ACD0  93 7E 00 04 */	stw r27, 4(r30)
/* 8035DD94 0035ACD4  90 BE 00 00 */	stw r5, 0(r30)
/* 8035DD98 0035ACD8  38 A3 6A 8C */	addi r5, r3, __vt__Q23efx17TOneEmitterSimple@l
/* 8035DD9C 0035ACDC  3B E5 00 14 */	addi r31, r5, 0x14
/* 8035DDA0 0035ACE0  38 60 02 2C */	li r3, 0x22c
/* 8035DDA4 0035ACE4  90 1E 00 04 */	stw r0, 4(r30)
/* 8035DDA8 0035ACE8  38 00 02 B2 */	li r0, 0x2b2
/* 8035DDAC 0035ACEC  93 9E 00 08 */	stw r28, 8(r30)
/* 8035DDB0 0035ACF0  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 8035DDB4 0035ACF4  38 00 00 0A */	li r0, 0xa
/* 8035DDB8 0035ACF8  9B 9E 00 0E */	stb r28, 0xe(r30)
/* 8035DDBC 0035ACFC  91 9E 00 00 */	stw r12, 0(r30)
/* 8035DDC0 0035AD00  91 7E 00 04 */	stw r11, 4(r30)
/* 8035DDC4 0035AD04  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8035DDC8 0035AD08  B1 5E 00 0C */	sth r10, 0xc(r30)
/* 8035DDCC 0035AD0C  91 3E 00 00 */	stw r9, 0(r30)
/* 8035DDD0 0035AD10  91 1E 00 04 */	stw r8, 4(r30)
/* 8035DDD4 0035AD14  90 FE 00 14 */	stw r7, 0x14(r30)
/* 8035DDD8 0035AD18  90 DE 00 14 */	stw r6, 0x14(r30)
/* 8035DDDC 0035AD1C  93 5E 00 18 */	stw r26, 0x18(r30)
/* 8035DDE0 0035AD20  93 7E 00 1C */	stw r27, 0x1c(r30)
/* 8035DDE4 0035AD24  90 BE 00 18 */	stw r5, 0x18(r30)
/* 8035DDE8 0035AD28  93 FE 00 1C */	stw r31, 0x1c(r30)
/* 8035DDEC 0035AD2C  93 9E 00 20 */	stw r28, 0x20(r30)
/* 8035DDF0 0035AD30  B0 7E 00 24 */	sth r3, 0x24(r30)
/* 8035DDF4 0035AD34  93 9E 00 2C */	stw r28, 0x2c(r30)
/* 8035DDF8 0035AD38  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8035DDFC 0035AD3C  83 5E 00 30 */	lwz r26, 0x30(r30)
/* 8035DE00 0035AD40  1C 7A 00 0C */	mulli r3, r26, 0xc
/* 8035DE04 0035AD44  38 63 00 10 */	addi r3, r3, 0x10
/* 8035DE08 0035AD48  4B CC 61 A5 */	bl __nwa__FUl
/* 8035DE0C 0035AD4C  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 8035DE10 0035AD50  7F 47 D3 78 */	mr r7, r26
/* 8035DE14 0035AD54  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 8035DE18 0035AD58  38 A0 00 00 */	li r5, 0
/* 8035DE1C 0035AD5C  38 C0 00 0C */	li r6, 0xc
/* 8035DE20 0035AD60  4B D6 3B D1 */	bl __construct_new_array
/* 8035DE24 0035AD64  3C 80 80 4E */	lis r4, __vt__Q23efx15TKchYodareHitGr@ha
/* 8035DE28 0035AD68  90 7D 00 10 */	stw r3, 0x10(r29)
/* 8035DE2C 0035AD6C  38 84 1E AC */	addi r4, r4, __vt__Q23efx15TKchYodareHitGr@l
/* 8035DE30 0035AD70  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8035DE34 0035AD74  90 9D 00 00 */	stw r4, 0(r29)
/* 8035DE38 0035AD78  38 04 00 14 */	addi r0, r4, 0x14
/* 8035DE3C 0035AD7C  3B 9E 00 34 */	addi r28, r30, 0x34
/* 8035DE40 0035AD80  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 8035DE44 0035AD84  90 1D 00 04 */	stw r0, 4(r29)
/* 8035DE48 0035AD88  38 A3 A7 F8 */	addi r5, r3, __vt__Q23efx5TBase@l
/* 8035DE4C 0035AD8C  3C 60 80 4E */	lis r3, __vt__Q23efx17TOneEmitterSimple@ha
/* 8035DE50 0035AD90  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 8035DE54 0035AD94  90 BE 00 34 */	stw r5, 0x34(r30)
/* 8035DE58 0035AD98  38 A3 6A 8C */	addi r5, r3, __vt__Q23efx17TOneEmitterSimple@l
/* 8035DE5C 0035AD9C  38 80 00 00 */	li r4, 0
/* 8035DE60 0035ADA0  38 60 02 2D */	li r3, 0x22d
/* 8035DE64 0035ADA4  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8035DE68 0035ADA8  38 00 00 0A */	li r0, 0xa
/* 8035DE6C 0035ADAC  7F 9B E3 78 */	mr r27, r28
/* 8035DE70 0035ADB0  90 BE 00 34 */	stw r5, 0x34(r30)
/* 8035DE74 0035ADB4  93 FE 00 38 */	stw r31, 0x38(r30)
/* 8035DE78 0035ADB8  90 9E 00 3C */	stw r4, 0x3c(r30)
/* 8035DE7C 0035ADBC  B0 7E 00 40 */	sth r3, 0x40(r30)
/* 8035DE80 0035ADC0  90 9E 00 48 */	stw r4, 0x48(r30)
/* 8035DE84 0035ADC4  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 8035DE88 0035ADC8  83 5E 00 4C */	lwz r26, 0x4c(r30)
/* 8035DE8C 0035ADCC  1C 7A 00 0C */	mulli r3, r26, 0xc
/* 8035DE90 0035ADD0  38 63 00 10 */	addi r3, r3, 0x10
/* 8035DE94 0035ADD4  4B CC 61 19 */	bl __nwa__FUl
/* 8035DE98 0035ADD8  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 8035DE9C 0035ADDC  7F 47 D3 78 */	mr r7, r26
/* 8035DEA0 0035ADE0  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 8035DEA4 0035ADE4  38 A0 00 00 */	li r5, 0
/* 8035DEA8 0035ADE8  38 C0 00 0C */	li r6, 0xc
/* 8035DEAC 0035ADEC  4B D6 3B 45 */	bl __construct_new_array
/* 8035DEB0 0035ADF0  90 7B 00 10 */	stw r3, 0x10(r27)
/* 8035DEB4 0035ADF4  3C 60 80 4E */	lis r3, __vt__Q23efx16TKchYodareHitWat@ha
/* 8035DEB8 0035ADF8  38 83 1E 6C */	addi r4, r3, __vt__Q23efx16TKchYodareHitWat@l
/* 8035DEBC 0035ADFC  3C 60 80 4E */	lis r3, __vt__Q23efx16TKchAttackYodare@ha
/* 8035DEC0 0035AE00  90 9C 00 00 */	stw r4, 0(r28)
/* 8035DEC4 0035AE04  38 04 00 14 */	addi r0, r4, 0x14
/* 8035DEC8 0035AE08  38 83 1D D4 */	addi r4, r3, __vt__Q23efx16TKchAttackYodare@l
/* 8035DECC 0035AE0C  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035DED0 0035AE10  90 1C 00 04 */	stw r0, 4(r28)
/* 8035DED4 0035AE14  38 04 00 14 */	addi r0, r4, 0x14
/* 8035DED8 0035AE18  7F C3 F3 78 */	mr r3, r30
/* 8035DEDC 0035AE1C  D0 1E 00 50 */	stfs f0, 0x50(r30)
/* 8035DEE0 0035AE20  90 9E 00 00 */	stw r4, 0(r30)
/* 8035DEE4 0035AE24  90 1E 00 04 */	stw r0, 4(r30)
/* 8035DEE8 0035AE28  BB 41 00 08 */	lmw r26, 8(r1)
/* 8035DEEC 0035AE2C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8035DEF0 0035AE30  7C 08 03 A6 */	mtlr r0
/* 8035DEF4 0035AE34  38 21 00 20 */	addi r1, r1, 0x20
/* 8035DEF8 0035AE38  4E 80 00 20 */	blr 
.endfn __ct__Q23efx16TKchAttackYodareFPA4_f

.fn __ct__Q23efx10TKchYodareFPA4_f, weak
/* 8035DEFC 0035AE3C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8035DF00 0035AE40  7C 08 02 A6 */	mflr r0
/* 8035DF04 0035AE44  3C E0 80 4A */	lis r7, __vt__19JPAParticleCallBack@ha
/* 8035DF08 0035AE48  3C C0 80 4F */	lis r6, __vt__Q23efx27TParticleCallBack_KchYodare@ha
/* 8035DF0C 0035AE4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8035DF10 0035AE50  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 8035DF14 0035AE54  39 40 02 2B */	li r10, 0x22b
/* 8035DF18 0035AE58  38 E7 33 58 */	addi r7, r7, __vt__19JPAParticleCallBack@l
/* 8035DF1C 0035AE5C  BF 41 00 08 */	stmw r26, 8(r1)
/* 8035DF20 0035AE60  7C 7E 1B 78 */	mr r30, r3
/* 8035DF24 0035AE64  3B 45 A7 F8 */	addi r26, r5, __vt__Q23efx5TBase@l
/* 8035DF28 0035AE68  3C 60 80 4A */	lis r3, __vt__18JPAEmitterCallBack@ha
/* 8035DF2C 0035AE6C  3B 63 E2 7C */	addi r27, r3, __vt__18JPAEmitterCallBack@l
/* 8035DF30 0035AE70  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 8035DF34 0035AE74  38 A5 69 8C */	addi r5, r5, __vt__Q23efx5TSync@l
/* 8035DF38 0035AE78  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 8035DF3C 0035AE7C  39 83 68 A8 */	addi r12, r3, __vt__Q23efx9TChaseMtx@l
/* 8035DF40 0035AE80  3B 80 00 00 */	li r28, 0
/* 8035DF44 0035AE84  3C 60 80 4F */	lis r3, __vt__Q23efx22TKchYodareBaseChaseMtx@ha
/* 8035DF48 0035AE88  38 05 00 14 */	addi r0, r5, 0x14
/* 8035DF4C 0035AE8C  39 23 A0 54 */	addi r9, r3, __vt__Q23efx22TKchYodareBaseChaseMtx@l
/* 8035DF50 0035AE90  39 6C 00 14 */	addi r11, r12, 0x14
/* 8035DF54 0035AE94  39 09 00 14 */	addi r8, r9, 0x14
/* 8035DF58 0035AE98  38 C6 A0 A0 */	addi r6, r6, __vt__Q23efx27TParticleCallBack_KchYodare@l
/* 8035DF5C 0035AE9C  93 5E 00 00 */	stw r26, 0(r30)
/* 8035DF60 0035AEA0  3C 60 80 4E */	lis r3, __vt__Q23efx17TOneEmitterSimple@ha
/* 8035DF64 0035AEA4  3B BE 00 18 */	addi r29, r30, 0x18
/* 8035DF68 0035AEA8  93 7E 00 04 */	stw r27, 4(r30)
/* 8035DF6C 0035AEAC  90 BE 00 00 */	stw r5, 0(r30)
/* 8035DF70 0035AEB0  38 A3 6A 8C */	addi r5, r3, __vt__Q23efx17TOneEmitterSimple@l
/* 8035DF74 0035AEB4  3B E5 00 14 */	addi r31, r5, 0x14
/* 8035DF78 0035AEB8  38 60 02 2C */	li r3, 0x22c
/* 8035DF7C 0035AEBC  90 1E 00 04 */	stw r0, 4(r30)
/* 8035DF80 0035AEC0  38 00 02 B2 */	li r0, 0x2b2
/* 8035DF84 0035AEC4  93 9E 00 08 */	stw r28, 8(r30)
/* 8035DF88 0035AEC8  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 8035DF8C 0035AECC  38 00 00 0A */	li r0, 0xa
/* 8035DF90 0035AED0  9B 9E 00 0E */	stb r28, 0xe(r30)
/* 8035DF94 0035AED4  91 9E 00 00 */	stw r12, 0(r30)
/* 8035DF98 0035AED8  91 7E 00 04 */	stw r11, 4(r30)
/* 8035DF9C 0035AEDC  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8035DFA0 0035AEE0  B1 5E 00 0C */	sth r10, 0xc(r30)
/* 8035DFA4 0035AEE4  91 3E 00 00 */	stw r9, 0(r30)
/* 8035DFA8 0035AEE8  91 1E 00 04 */	stw r8, 4(r30)
/* 8035DFAC 0035AEEC  90 FE 00 14 */	stw r7, 0x14(r30)
/* 8035DFB0 0035AEF0  90 DE 00 14 */	stw r6, 0x14(r30)
/* 8035DFB4 0035AEF4  93 5E 00 18 */	stw r26, 0x18(r30)
/* 8035DFB8 0035AEF8  93 7E 00 1C */	stw r27, 0x1c(r30)
/* 8035DFBC 0035AEFC  90 BE 00 18 */	stw r5, 0x18(r30)
/* 8035DFC0 0035AF00  93 FE 00 1C */	stw r31, 0x1c(r30)
/* 8035DFC4 0035AF04  93 9E 00 20 */	stw r28, 0x20(r30)
/* 8035DFC8 0035AF08  B0 7E 00 24 */	sth r3, 0x24(r30)
/* 8035DFCC 0035AF0C  93 9E 00 2C */	stw r28, 0x2c(r30)
/* 8035DFD0 0035AF10  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8035DFD4 0035AF14  83 5E 00 30 */	lwz r26, 0x30(r30)
/* 8035DFD8 0035AF18  1C 7A 00 0C */	mulli r3, r26, 0xc
/* 8035DFDC 0035AF1C  38 63 00 10 */	addi r3, r3, 0x10
/* 8035DFE0 0035AF20  4B CC 5F CD */	bl __nwa__FUl
/* 8035DFE4 0035AF24  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 8035DFE8 0035AF28  7F 47 D3 78 */	mr r7, r26
/* 8035DFEC 0035AF2C  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 8035DFF0 0035AF30  38 A0 00 00 */	li r5, 0
/* 8035DFF4 0035AF34  38 C0 00 0C */	li r6, 0xc
/* 8035DFF8 0035AF38  4B D6 39 F9 */	bl __construct_new_array
/* 8035DFFC 0035AF3C  3C 80 80 4E */	lis r4, __vt__Q23efx15TKchYodareHitGr@ha
/* 8035E000 0035AF40  90 7D 00 10 */	stw r3, 0x10(r29)
/* 8035E004 0035AF44  38 84 1E AC */	addi r4, r4, __vt__Q23efx15TKchYodareHitGr@l
/* 8035E008 0035AF48  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8035E00C 0035AF4C  90 9D 00 00 */	stw r4, 0(r29)
/* 8035E010 0035AF50  38 04 00 14 */	addi r0, r4, 0x14
/* 8035E014 0035AF54  3B 9E 00 34 */	addi r28, r30, 0x34
/* 8035E018 0035AF58  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 8035E01C 0035AF5C  90 1D 00 04 */	stw r0, 4(r29)
/* 8035E020 0035AF60  38 A3 A7 F8 */	addi r5, r3, __vt__Q23efx5TBase@l
/* 8035E024 0035AF64  3C 60 80 4E */	lis r3, __vt__Q23efx17TOneEmitterSimple@ha
/* 8035E028 0035AF68  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 8035E02C 0035AF6C  90 BE 00 34 */	stw r5, 0x34(r30)
/* 8035E030 0035AF70  38 A3 6A 8C */	addi r5, r3, __vt__Q23efx17TOneEmitterSimple@l
/* 8035E034 0035AF74  38 80 00 00 */	li r4, 0
/* 8035E038 0035AF78  38 60 02 2D */	li r3, 0x22d
/* 8035E03C 0035AF7C  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8035E040 0035AF80  38 00 00 0A */	li r0, 0xa
/* 8035E044 0035AF84  7F 9B E3 78 */	mr r27, r28
/* 8035E048 0035AF88  90 BE 00 34 */	stw r5, 0x34(r30)
/* 8035E04C 0035AF8C  93 FE 00 38 */	stw r31, 0x38(r30)
/* 8035E050 0035AF90  90 9E 00 3C */	stw r4, 0x3c(r30)
/* 8035E054 0035AF94  B0 7E 00 40 */	sth r3, 0x40(r30)
/* 8035E058 0035AF98  90 9E 00 48 */	stw r4, 0x48(r30)
/* 8035E05C 0035AF9C  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 8035E060 0035AFA0  83 5E 00 4C */	lwz r26, 0x4c(r30)
/* 8035E064 0035AFA4  1C 7A 00 0C */	mulli r3, r26, 0xc
/* 8035E068 0035AFA8  38 63 00 10 */	addi r3, r3, 0x10
/* 8035E06C 0035AFAC  4B CC 5F 41 */	bl __nwa__FUl
/* 8035E070 0035AFB0  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 8035E074 0035AFB4  7F 47 D3 78 */	mr r7, r26
/* 8035E078 0035AFB8  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 8035E07C 0035AFBC  38 A0 00 00 */	li r5, 0
/* 8035E080 0035AFC0  38 C0 00 0C */	li r6, 0xc
/* 8035E084 0035AFC4  4B D6 39 6D */	bl __construct_new_array
/* 8035E088 0035AFC8  90 7B 00 10 */	stw r3, 0x10(r27)
/* 8035E08C 0035AFCC  3C 60 80 4E */	lis r3, __vt__Q23efx16TKchYodareHitWat@ha
/* 8035E090 0035AFD0  38 83 1E 6C */	addi r4, r3, __vt__Q23efx16TKchYodareHitWat@l
/* 8035E094 0035AFD4  3C 60 80 4E */	lis r3, __vt__Q23efx10TKchYodare@ha
/* 8035E098 0035AFD8  90 9C 00 00 */	stw r4, 0(r28)
/* 8035E09C 0035AFDC  38 04 00 14 */	addi r0, r4, 0x14
/* 8035E0A0 0035AFE0  38 83 1D 88 */	addi r4, r3, __vt__Q23efx10TKchYodare@l
/* 8035E0A4 0035AFE4  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035E0A8 0035AFE8  90 1C 00 04 */	stw r0, 4(r28)
/* 8035E0AC 0035AFEC  38 04 00 14 */	addi r0, r4, 0x14
/* 8035E0B0 0035AFF0  7F C3 F3 78 */	mr r3, r30
/* 8035E0B4 0035AFF4  D0 1E 00 50 */	stfs f0, 0x50(r30)
/* 8035E0B8 0035AFF8  90 9E 00 00 */	stw r4, 0(r30)
/* 8035E0BC 0035AFFC  90 1E 00 04 */	stw r0, 4(r30)
/* 8035E0C0 0035B000  BB 41 00 08 */	lmw r26, 8(r1)
/* 8035E0C4 0035B004  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8035E0C8 0035B008  7C 08 03 A6 */	mtlr r0
/* 8035E0CC 0035B00C  38 21 00 20 */	addi r1, r1, 0x20
/* 8035E0D0 0035B010  4E 80 00 20 */	blr 
.endfn __ct__Q23efx10TKchYodareFPA4_f

.fn setFSM__Q34Game10KingChappy3ObjFPQ34Game10KingChappy3FSM, weak
/* 8035E0D4 0035B014  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035E0D8 0035B018  7C 08 02 A6 */	mflr r0
/* 8035E0DC 0035B01C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035E0E0 0035B020  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035E0E4 0035B024  7C 7F 1B 78 */	mr r31, r3
/* 8035E0E8 0035B028  90 83 03 4C */	stw r4, 0x34c(r3)
/* 8035E0EC 0035B02C  7F E4 FB 78 */	mr r4, r31
/* 8035E0F0 0035B030  80 63 03 4C */	lwz r3, 0x34c(r3)
/* 8035E0F4 0035B034  81 83 00 00 */	lwz r12, 0(r3)
/* 8035E0F8 0035B038  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035E0FC 0035B03C  7D 89 03 A6 */	mtctr r12
/* 8035E100 0035B040  4E 80 04 21 */	bctrl 
/* 8035E104 0035B044  38 00 00 00 */	li r0, 0
/* 8035E108 0035B048  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8035E10C 0035B04C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035E110 0035B050  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035E114 0035B054  7C 08 03 A6 */	mtlr r0
/* 8035E118 0035B058  38 21 00 10 */	addi r1, r1, 0x10
/* 8035E11C 0035B05C  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game10KingChappy3ObjFPQ34Game10KingChappy3FSM

.fn doUpdate__Q34Game10KingChappy3ObjFv, global
/* 8035E120 0035B060  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8035E124 0035B064  7C 08 02 A6 */	mflr r0
/* 8035E128 0035B068  90 01 00 44 */	stw r0, 0x44(r1)
/* 8035E12C 0035B06C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8035E130 0035B070  7C 7F 1B 78 */	mr r31, r3
/* 8035E134 0035B074  80 03 03 40 */	lwz r0, 0x340(r3)
/* 8035E138 0035B078  28 00 00 00 */	cmplwi r0, 0
/* 8035E13C 0035B07C  40 82 00 64 */	bne .L_8035E1A0
/* 8035E140 0035B080  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8035E144 0035B084  C0 02 03 48 */	lfs f0, lbl_8051E6A8@sda21(r2)
/* 8035E148 0035B088  D0 21 00 08 */	stfs f1, 8(r1)
/* 8035E14C 0035B08C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8035E150 0035B090  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8035E154 0035B094  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8035E158 0035B098  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8035E15C 0035B09C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8035E160 0035B0A0  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8035E164 0035B0A4  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8035E168 0035B0A8  28 00 00 00 */	cmplwi r0, 0
/* 8035E16C 0035B0AC  40 82 00 20 */	bne .L_8035E18C
/* 8035E170 0035B0B0  3C 60 80 49 */	lis r3, lbl_804915E8@ha
/* 8035E174 0035B0B4  3C A0 80 49 */	lis r5, lbl_804915F8@ha
/* 8035E178 0035B0B8  38 63 15 E8 */	addi r3, r3, lbl_804915E8@l
/* 8035E17C 0035B0BC  38 80 00 EB */	li r4, 0xeb
/* 8035E180 0035B0C0  38 A5 15 F8 */	addi r5, r5, lbl_804915F8@l
/* 8035E184 0035B0C4  4C C6 31 82 */	crclr 6
/* 8035E188 0035B0C8  4B CC C4 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035E18C:
/* 8035E18C 0035B0CC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8035E190 0035B0D0  38 81 00 08 */	addi r4, r1, 8
/* 8035E194 0035B0D4  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8035E198 0035B0D8  4B E5 18 E9 */	bl findWater2d__Q24Game6SeaMgrFRQ23Sys6Sphere
/* 8035E19C 0035B0DC  90 7F 03 40 */	stw r3, 0x340(r31)
.L_8035E1A0:
/* 8035E1A0 0035B0E0  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8035E1A4 0035B0E4  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035E1A8 0035B0E8  D0 3F 03 00 */	stfs f1, 0x300(r31)
/* 8035E1AC 0035B0EC  C0 62 03 4C */	lfs f3, lbl_8051E6AC@sda21(r2)
/* 8035E1B0 0035B0F0  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8035E1B4 0035B0F4  D0 3F 03 04 */	stfs f1, 0x304(r31)
/* 8035E1B8 0035B0F8  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8035E1BC 0035B0FC  D0 3F 03 08 */	stfs f1, 0x308(r31)
/* 8035E1C0 0035B100  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 8035E1C4 0035B104  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035E1C8 0035B108  40 80 00 30 */	bge .L_8035E1F8
/* 8035E1CC 0035B10C  C0 02 03 50 */	lfs f0, lbl_8051E6B0@sda21(r2)
/* 8035E1D0 0035B110  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8035E1D4 0035B114  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8035E1D8 0035B118  EC 01 00 32 */	fmuls f0, f1, f0
/* 8035E1DC 0035B11C  FC 00 00 1E */	fctiwz f0, f0
/* 8035E1E0 0035B120  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8035E1E4 0035B124  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8035E1E8 0035B128  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8035E1EC 0035B12C  7C 03 04 2E */	lfsx f0, r3, r0
/* 8035E1F0 0035B130  FC 40 00 50 */	fneg f2, f0
/* 8035E1F4 0035B134  48 00 00 28 */	b .L_8035E21C
.L_8035E1F8:
/* 8035E1F8 0035B138  C0 02 03 54 */	lfs f0, lbl_8051E6B4@sda21(r2)
/* 8035E1FC 0035B13C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8035E200 0035B140  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8035E204 0035B144  EC 01 00 32 */	fmuls f0, f1, f0
/* 8035E208 0035B148  FC 00 00 1E */	fctiwz f0, f0
/* 8035E20C 0035B14C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8035E210 0035B150  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8035E214 0035B154  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8035E218 0035B158  7C 43 04 2E */	lfsx f2, r3, r0
.L_8035E21C:
/* 8035E21C 0035B15C  C0 3F 03 00 */	lfs f1, 0x300(r31)
/* 8035E220 0035B160  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035E224 0035B164  EC 23 08 BC */	fnmsubs f1, f3, f2, f1
/* 8035E228 0035B168  D0 3F 03 00 */	stfs f1, 0x300(r31)
/* 8035E22C 0035B16C  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 8035E230 0035B170  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035E234 0035B174  40 80 00 08 */	bge .L_8035E23C
/* 8035E238 0035B178  FC 20 08 50 */	fneg f1, f1
.L_8035E23C:
/* 8035E23C 0035B17C  C0 02 03 54 */	lfs f0, lbl_8051E6B4@sda21(r2)
/* 8035E240 0035B180  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8035E244 0035B184  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8035E248 0035B188  C0 42 03 4C */	lfs f2, lbl_8051E6AC@sda21(r2)
/* 8035E24C 0035B18C  EC 21 00 32 */	fmuls f1, f1, f0
/* 8035E250 0035B190  C0 1F 03 08 */	lfs f0, 0x308(r31)
/* 8035E254 0035B194  FC 20 08 1E */	fctiwz f1, f1
/* 8035E258 0035B198  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 8035E25C 0035B19C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8035E260 0035B1A0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8035E264 0035B1A4  7C 63 02 14 */	add r3, r3, r0
/* 8035E268 0035B1A8  C0 23 00 04 */	lfs f1, 4(r3)
/* 8035E26C 0035B1AC  EC 02 00 7C */	fnmsubs f0, f2, f1, f0
/* 8035E270 0035B1B0  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 8035E274 0035B1B4  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 8035E278 0035B1B8  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 8035E27C 0035B1BC  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 8035E280 0035B1C0  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 8035E284 0035B1C4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8035E288 0035B1C8  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 8035E28C 0035B1CC  80 63 00 00 */	lwz r3, 0(r3)
/* 8035E290 0035B1D0  4B DD 9B 7D */	bl setScale__8CollPartFf
/* 8035E294 0035B1D4  80 7F 03 4C */	lwz r3, 0x34c(r31)
/* 8035E298 0035B1D8  7F E4 FB 78 */	mr r4, r31
/* 8035E29C 0035B1DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8035E2A0 0035B1E0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035E2A4 0035B1E4  7D 89 03 A6 */	mtctr r12
/* 8035E2A8 0035B1E8  4E 80 04 21 */	bctrl 
/* 8035E2AC 0035B1EC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8035E2B0 0035B1F0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8035E2B4 0035B1F4  7C 08 03 A6 */	mtlr r0
/* 8035E2B8 0035B1F8  38 21 00 40 */	addi r1, r1, 0x40
/* 8035E2BC 0035B1FC  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game10KingChappy3ObjFv

.fn doDirectDraw__Q34Game10KingChappy3ObjFR8Graphics, global
/* 8035E2C0 0035B200  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game10KingChappy3ObjFR8Graphics

.fn doDebugDraw__Q34Game10KingChappy3ObjFR8Graphics, global
/* 8035E2C4 0035B204  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035E2C8 0035B208  7C 08 02 A6 */	mflr r0
/* 8035E2CC 0035B20C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035E2D0 0035B210  4B DA 7B 9D */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 8035E2D4 0035B214  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035E2D8 0035B218  7C 08 03 A6 */	mtlr r0
/* 8035E2DC 0035B21C  38 21 00 10 */	addi r1, r1, 0x10
/* 8035E2E0 0035B220  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game10KingChappy3ObjFR8Graphics

.fn doAnimationUpdateAnimator__Q34Game10KingChappy3ObjFv, global
/* 8035E2E4 0035B224  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8035E2E8 0035B228  7C 08 02 A6 */	mflr r0
/* 8035E2EC 0035B22C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8035E2F0 0035B230  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8035E2F4 0035B234  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8035E2F8 0035B238  7C 7E 1B 78 */	mr r30, r3
/* 8035E2FC 0035B23C  83 E3 01 84 */	lwz r31, 0x184(r3)
/* 8035E300 0035B240  88 1F 00 58 */	lbz r0, 0x58(r31)
/* 8035E304 0035B244  28 00 00 00 */	cmplwi r0, 0
/* 8035E308 0035B248  41 82 00 78 */	beq .L_8035E380
/* 8035E30C 0035B24C  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8035E310 0035B250  3C 80 80 4B */	lis r4, __vt__Q28SysShape13BlendFunction@ha
/* 8035E314 0035B254  3C 60 80 4B */	lis r3, __vt__Q28SysShape14BlendLinearFun@ha
/* 8035E318 0035B258  C0 02 9C 38 */	lfs f0, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 8035E31C 0035B25C  C0 45 00 54 */	lfs f2, 0x54(r5)
/* 8035E320 0035B260  38 84 AD 94 */	addi r4, r4, __vt__Q28SysShape13BlendFunction@l
/* 8035E324 0035B264  38 03 F8 18 */	addi r0, r3, __vt__Q28SysShape14BlendLinearFun@l
/* 8035E328 0035B268  C0 22 03 08 */	lfs f1, lbl_8051E668@sda21(r2)
/* 8035E32C 0035B26C  90 81 00 08 */	stw r4, 8(r1)
/* 8035E330 0035B270  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8035E334 0035B274  7F E3 FB 78 */	mr r3, r31
/* 8035E338 0035B278  38 81 00 08 */	addi r4, r1, 8
/* 8035E33C 0035B27C  90 01 00 08 */	stw r0, 8(r1)
/* 8035E340 0035B280  FC 60 10 90 */	fmr f3, f2
/* 8035E344 0035B284  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 8035E348 0035B288  EC 21 00 32 */	fmuls f1, f1, f0
/* 8035E34C 0035B28C  4B DC FE E1 */	bl animate__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape13BlendFunctionfff
/* 8035E350 0035B290  38 7F 00 10 */	addi r3, r31, 0x10
/* 8035E354 0035B294  83 FE 01 74 */	lwz r31, 0x174(r30)
/* 8035E358 0035B298  81 83 00 00 */	lwz r12, 0(r3)
/* 8035E35C 0035B29C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035E360 0035B2A0  7D 89 03 A6 */	mtctr r12
/* 8035E364 0035B2A4  4E 80 04 21 */	bctrl 
/* 8035E368 0035B2A8  80 9F 00 08 */	lwz r4, 8(r31)
/* 8035E36C 0035B2AC  80 84 00 04 */	lwz r4, 4(r4)
/* 8035E370 0035B2B0  80 84 00 28 */	lwz r4, 0x28(r4)
/* 8035E374 0035B2B4  80 84 00 00 */	lwz r4, 0(r4)
/* 8035E378 0035B2B8  90 64 00 54 */	stw r3, 0x54(r4)
/* 8035E37C 0035B2BC  48 00 00 08 */	b .L_8035E384
.L_8035E380:
/* 8035E380 0035B2C0  4B DA 4C 79 */	bl doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
.L_8035E384:
/* 8035E384 0035B2C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8035E388 0035B2C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8035E38C 0035B2CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8035E390 0035B2D0  7C 08 03 A6 */	mtlr r0
/* 8035E394 0035B2D4  38 21 00 20 */	addi r1, r1, 0x20
/* 8035E398 0035B2D8  4E 80 00 20 */	blr 
.endfn doAnimationUpdateAnimator__Q34Game10KingChappy3ObjFv

.fn onKill__Q34Game10KingChappy3ObjFPQ24Game15CreatureKillArg, global
/* 8035E39C 0035B2DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035E3A0 0035B2E0  7C 08 02 A6 */	mflr r0
/* 8035E3A4 0035B2E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035E3A8 0035B2E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035E3AC 0035B2EC  7C 7F 1B 78 */	mr r31, r3
/* 8035E3B0 0035B2F0  4B DA 3B 39 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 8035E3B4 0035B2F4  7F E3 FB 78 */	mr r3, r31
/* 8035E3B8 0035B2F8  48 00 32 71 */	bl fadeAllEffect__Q34Game10KingChappy3ObjFv
/* 8035E3BC 0035B2FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035E3C0 0035B300  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035E3C4 0035B304  7C 08 03 A6 */	mtlr r0
/* 8035E3C8 0035B308  38 21 00 10 */	addi r1, r1, 0x10
/* 8035E3CC 0035B30C  4E 80 00 20 */	blr 
.endfn onKill__Q34Game10KingChappy3ObjFPQ24Game15CreatureKillArg

.fn doAnimationCullingOff__Q34Game10KingChappy3ObjFv, global
/* 8035E3D0 0035B310  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8035E3D4 0035B314  7C 08 02 A6 */	mflr r0
/* 8035E3D8 0035B318  90 01 00 94 */	stw r0, 0x94(r1)
/* 8035E3DC 0035B31C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8035E3E0 0035B320  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8035E3E4 0035B324  BF 61 00 6C */	stmw r27, 0x6c(r1)
/* 8035E3E8 0035B328  7C 7F 1B 78 */	mr r31, r3
/* 8035E3EC 0035B32C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8035E3F0 0035B330  88 04 0B CA */	lbz r0, 0xbca(r4)
/* 8035E3F4 0035B334  28 00 00 00 */	cmplwi r0, 0
/* 8035E3F8 0035B338  41 82 00 30 */	beq .L_8035E428
/* 8035E3FC 0035B33C  4B DA 8F F9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8035E400 0035B340  2C 03 00 00 */	cmpwi r3, 0
/* 8035E404 0035B344  41 82 00 20 */	beq .L_8035E424
/* 8035E408 0035B348  C0 22 03 2C */	lfs f1, lbl_8051E68C@sda21(r2)
/* 8035E40C 0035B34C  C0 1F 03 20 */	lfs f0, 0x320(r31)
/* 8035E410 0035B350  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8035E414 0035B354  40 82 00 10 */	bne .L_8035E424
/* 8035E418 0035B358  C0 1F 03 34 */	lfs f0, 0x334(r31)
/* 8035E41C 0035B35C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8035E420 0035B360  41 82 00 08 */	beq .L_8035E428
.L_8035E424:
/* 8035E424 0035B364  93 ED 98 D0 */	stw r31, curK__Q24Game10KingChappy@sda21(r13)
.L_8035E428:
/* 8035E428 0035B368  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8035E42C 0035B36C  88 03 0B C8 */	lbz r0, 0xbc8(r3)
/* 8035E430 0035B370  28 00 00 00 */	cmplwi r0, 0
/* 8035E434 0035B374  41 82 00 2C */	beq .L_8035E460
/* 8035E438 0035B378  38 00 00 00 */	li r0, 0
/* 8035E43C 0035B37C  7F E4 FB 78 */	mr r4, r31
/* 8035E440 0035B380  98 03 0B C8 */	stb r0, 0xbc8(r3)
/* 8035E444 0035B384  38 A0 00 08 */	li r5, 8
/* 8035E448 0035B388  38 C0 00 00 */	li r6, 0
/* 8035E44C 0035B38C  80 7F 03 4C */	lwz r3, 0x34c(r31)
/* 8035E450 0035B390  81 83 00 00 */	lwz r12, 0(r3)
/* 8035E454 0035B394  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035E458 0035B398  7D 89 03 A6 */	mtctr r12
/* 8035E45C 0035B39C  4E 80 04 21 */	bctrl 
.L_8035E460:
/* 8035E460 0035B3A0  80 9F 01 88 */	lwz r4, 0x188(r31)
/* 8035E464 0035B3A4  38 00 00 00 */	li r0, 0
/* 8035E468 0035B3A8  7F E3 FB 78 */	mr r3, r31
/* 8035E46C 0035B3AC  98 04 00 24 */	stb r0, 0x24(r4)
/* 8035E470 0035B3B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035E474 0035B3B4  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 8035E478 0035B3B8  7D 89 03 A6 */	mtctr r12
/* 8035E47C 0035B3BC  4E 80 04 21 */	bctrl 
/* 8035E480 0035B3C0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 8035E484 0035B3C4  80 03 00 04 */	lwz r0, 4(r3)
/* 8035E488 0035B3C8  28 00 00 00 */	cmplwi r0, 0
/* 8035E48C 0035B3CC  41 82 00 7C */	beq .L_8035E508
/* 8035E490 0035B3D0  38 9F 01 38 */	addi r4, r31, 0x138
/* 8035E494 0035B3D4  4B E0 79 0D */	bl viewMakeMatrix__Q24Game10PelletViewFR7Matrixf
/* 8035E498 0035B3D8  C0 3F 01 68 */	lfs f1, 0x168(r31)
/* 8035E49C 0035B3DC  38 61 00 38 */	addi r3, r1, 0x38
/* 8035E4A0 0035B3E0  C0 5F 01 6C */	lfs f2, 0x16c(r31)
/* 8035E4A4 0035B3E4  C0 7F 01 70 */	lfs f3, 0x170(r31)
/* 8035E4A8 0035B3E8  4B D8 C3 2D */	bl PSMTXScale
/* 8035E4AC 0035B3EC  38 7F 01 38 */	addi r3, r31, 0x138
/* 8035E4B0 0035B3F0  38 81 00 38 */	addi r4, r1, 0x38
/* 8035E4B4 0035B3F4  7C 65 1B 78 */	mr r5, r3
/* 8035E4B8 0035B3F8  4B D8 BE 49 */	bl PSMTXConcat
/* 8035E4BC 0035B3FC  C0 1F 01 44 */	lfs f0, 0x144(r31)
/* 8035E4C0 0035B400  7F E3 FB 78 */	mr r3, r31
/* 8035E4C4 0035B404  38 81 00 2C */	addi r4, r1, 0x2c
/* 8035E4C8 0035B408  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8035E4CC 0035B40C  C0 1F 01 54 */	lfs f0, 0x154(r31)
/* 8035E4D0 0035B410  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8035E4D4 0035B414  C0 1F 01 64 */	lfs f0, 0x164(r31)
/* 8035E4D8 0035B418  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8035E4DC 0035B41C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035E4E0 0035B420  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8035E4E4 0035B424  7D 89 03 A6 */	mtctr r12
/* 8035E4E8 0035B428  4E 80 04 21 */	bctrl 
/* 8035E4EC 0035B42C  7F E3 FB 78 */	mr r3, r31
/* 8035E4F0 0035B430  38 81 00 2C */	addi r4, r1, 0x2c
/* 8035E4F4 0035B434  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035E4F8 0035B438  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8035E4FC 0035B43C  7D 89 03 A6 */	mtctr r12
/* 8035E500 0035B440  4E 80 04 21 */	bctrl 
/* 8035E504 0035B444  48 00 00 18 */	b .L_8035E51C
.L_8035E508:
/* 8035E508 0035B448  38 7F 01 38 */	addi r3, r31, 0x138
/* 8035E50C 0035B44C  38 9F 01 68 */	addi r4, r31, 0x168
/* 8035E510 0035B450  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 8035E514 0035B454  38 DF 01 8C */	addi r6, r31, 0x18c
/* 8035E518 0035B458  48 0C 9D C1 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
.L_8035E51C:
/* 8035E51C 0035B45C  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 8035E520 0035B460  38 7F 01 38 */	addi r3, r31, 0x138
/* 8035E524 0035B464  80 84 00 08 */	lwz r4, 8(r4)
/* 8035E528 0035B468  38 84 00 24 */	addi r4, r4, 0x24
/* 8035E52C 0035B46C  4B D8 BD A1 */	bl PSMTXCopy
/* 8035E530 0035B470  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8035E534 0035B474  80 63 00 08 */	lwz r3, 8(r3)
/* 8035E538 0035B478  81 83 00 00 */	lwz r12, 0(r3)
/* 8035E53C 0035B47C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035E540 0035B480  7D 89 03 A6 */	mtctr r12
/* 8035E544 0035B484  4E 80 04 21 */	bctrl 
/* 8035E548 0035B488  3B 60 00 00 */	li r27, 0
/* 8035E54C 0035B48C  3B 80 00 00 */	li r28, 0
/* 8035E550 0035B490  48 00 03 04 */	b .L_8035E854
.L_8035E554:
/* 8035E554 0035B494  7F 64 DB 78 */	mr r4, r27
/* 8035E558 0035B498  38 7F 02 C8 */	addi r3, r31, 0x2c8
/* 8035E55C 0035B49C  4B DD A2 1D */	bl getSlot__10MouthSlotsFi
/* 8035E560 0035B4A0  83 A3 00 64 */	lwz r29, 0x64(r3)
/* 8035E564 0035B4A4  28 1D 00 00 */	cmplwi r29, 0
/* 8035E568 0035B4A8  41 82 02 E4 */	beq .L_8035E84C
/* 8035E56C 0035B4AC  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 8035E570 0035B4B0  80 7F 03 3C */	lwz r3, 0x33c(r31)
/* 8035E574 0035B4B4  80 84 00 08 */	lwz r4, 8(r4)
/* 8035E578 0035B4B8  7C 03 E2 2E */	lhzx r0, r3, r28
/* 8035E57C 0035B4BC  80 64 00 84 */	lwz r3, 0x84(r4)
/* 8035E580 0035B4C0  1C 00 00 30 */	mulli r0, r0, 0x30
/* 8035E584 0035B4C4  C0 22 03 2C */	lfs f1, lbl_8051E68C@sda21(r2)
/* 8035E588 0035B4C8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8035E58C 0035B4CC  7F C3 02 14 */	add r30, r3, r0
/* 8035E590 0035B4D0  C0 7E 00 20 */	lfs f3, 0x20(r30)
/* 8035E594 0035B4D4  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 8035E598 0035B4D8  C0 1E 00 00 */	lfs f0, 0(r30)
/* 8035E59C 0035B4DC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8035E5A0 0035B4E0  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8035E5A4 0035B4E4  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 8035E5A8 0035B4E8  C0 5E 00 14 */	lfs f2, 0x14(r30)
/* 8035E5AC 0035B4EC  C0 7E 00 04 */	lfs f3, 4(r30)
/* 8035E5B0 0035B4F0  C0 9E 00 24 */	lfs f4, 0x24(r30)
/* 8035E5B4 0035B4F4  EC C2 00 B2 */	fmuls f6, f2, f2
/* 8035E5B8 0035B4F8  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8035E5BC 0035B4FC  EC E4 01 32 */	fmuls f7, f4, f4
/* 8035E5C0 0035B500  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8035E5C4 0035B504  EC 00 30 2A */	fadds f0, f0, f6
/* 8035E5C8 0035B508  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8035E5CC 0035B50C  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 8035E5D0 0035B510  EC 07 00 2A */	fadds f0, f7, f0
/* 8035E5D4 0035B514  C0 BE 00 28 */	lfs f5, 0x28(r30)
/* 8035E5D8 0035B518  C0 9E 00 18 */	lfs f4, 0x18(r30)
/* 8035E5DC 0035B51C  C0 5E 00 08 */	lfs f2, 8(r30)
/* 8035E5E0 0035B520  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8035E5E4 0035B524  D0 41 00 08 */	stfs f2, 8(r1)
/* 8035E5E8 0035B528  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 8035E5EC 0035B52C  D0 A1 00 10 */	stfs f5, 0x10(r1)
/* 8035E5F0 0035B530  40 81 00 20 */	ble .L_8035E610
/* 8035E5F4 0035B534  EC 03 30 FA */	fmadds f0, f3, f3, f6
/* 8035E5F8 0035B538  EC 87 00 2A */	fadds f4, f7, f0
/* 8035E5FC 0035B53C  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 8035E600 0035B540  40 81 00 14 */	ble .L_8035E614
/* 8035E604 0035B544  FC 00 20 34 */	frsqrte f0, f4
/* 8035E608 0035B548  EC 80 01 32 */	fmuls f4, f0, f4
/* 8035E60C 0035B54C  48 00 00 08 */	b .L_8035E614
.L_8035E610:
/* 8035E610 0035B550  FC 80 08 90 */	fmr f4, f1
.L_8035E614:
/* 8035E614 0035B554  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035E618 0035B558  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8035E61C 0035B55C  40 81 00 34 */	ble .L_8035E650
/* 8035E620 0035B560  C0 02 03 58 */	lfs f0, lbl_8051E6B8@sda21(r2)
/* 8035E624 0035B564  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8035E628 0035B568  EC 60 20 24 */	fdivs f3, f0, f4
/* 8035E62C 0035B56C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8035E630 0035B570  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8035E634 0035B574  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8035E638 0035B578  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8035E63C 0035B57C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8035E640 0035B580  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8035E644 0035B584  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8035E648 0035B588  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8035E64C 0035B58C  48 00 00 08 */	b .L_8035E654
.L_8035E650:
/* 8035E650 0035B590  FC 80 00 90 */	fmr f4, f0
.L_8035E654:
/* 8035E654 0035B594  C0 02 03 58 */	lfs f0, lbl_8051E6B8@sda21(r2)
/* 8035E658 0035B598  FF E0 20 90 */	fmr f31, f4
/* 8035E65C 0035B59C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8035E660 0035B5A0  40 81 00 08 */	ble .L_8035E668
/* 8035E664 0035B5A4  FF E0 00 90 */	fmr f31, f0
.L_8035E668:
/* 8035E668 0035B5A8  7F A3 EB 78 */	mr r3, r29
/* 8035E66C 0035B5AC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8035E670 0035B5B0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8035E674 0035B5B4  7D 89 03 A6 */	mtctr r12
/* 8035E678 0035B5B8  4E 80 04 21 */	bctrl 
/* 8035E67C 0035B5BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035E680 0035B5C0  41 82 00 38 */	beq .L_8035E6B8
/* 8035E684 0035B5C4  88 1F 03 38 */	lbz r0, 0x338(r31)
/* 8035E688 0035B5C8  28 00 00 00 */	cmplwi r0, 0
/* 8035E68C 0035B5CC  41 82 01 C0 */	beq .L_8035E84C
/* 8035E690 0035B5D0  7F A3 EB 78 */	mr r3, r29
/* 8035E694 0035B5D4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8035E698 0035B5D8  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8035E69C 0035B5DC  7D 89 03 A6 */	mtctr r12
/* 8035E6A0 0035B5E0  4E 80 04 21 */	bctrl 
/* 8035E6A4 0035B5E4  2C 03 00 24 */	cmpwi r3, 0x24
/* 8035E6A8 0035B5E8  40 82 01 A4 */	bne .L_8035E84C
/* 8035E6AC 0035B5EC  38 00 00 01 */	li r0, 1
/* 8035E6B0 0035B5F0  98 1D 02 BD */	stb r0, 0x2bd(r29)
/* 8035E6B4 0035B5F4  48 00 01 98 */	b .L_8035E84C
.L_8035E6B8:
/* 8035E6B8 0035B5F8  38 61 00 14 */	addi r3, r1, 0x14
/* 8035E6BC 0035B5FC  38 81 00 08 */	addi r4, r1, 8
/* 8035E6C0 0035B600  38 A1 00 20 */	addi r5, r1, 0x20
/* 8035E6C4 0035B604  4B D8 C8 C1 */	bl PSVECCrossProduct
/* 8035E6C8 0035B608  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8035E6CC 0035B60C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8035E6D0 0035B610  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8035E6D4 0035B614  C0 61 00 28 */	lfs f3, 0x28(r1)
/* 8035E6D8 0035B618  EC 81 00 72 */	fmuls f4, f1, f1
/* 8035E6DC 0035B61C  C0 22 03 2C */	lfs f1, lbl_8051E68C@sda21(r2)
/* 8035E6E0 0035B620  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8035E6E4 0035B624  EC 00 20 2A */	fadds f0, f0, f4
/* 8035E6E8 0035B628  EC 03 00 2A */	fadds f0, f3, f0
/* 8035E6EC 0035B62C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8035E6F0 0035B630  40 81 00 20 */	ble .L_8035E710
/* 8035E6F4 0035B634  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 8035E6F8 0035B638  EC 63 00 2A */	fadds f3, f3, f0
/* 8035E6FC 0035B63C  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8035E700 0035B640  40 81 00 14 */	ble .L_8035E714
/* 8035E704 0035B644  FC 00 18 34 */	frsqrte f0, f3
/* 8035E708 0035B648  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8035E70C 0035B64C  48 00 00 08 */	b .L_8035E714
.L_8035E710:
/* 8035E710 0035B650  FC 60 08 90 */	fmr f3, f1
.L_8035E714:
/* 8035E714 0035B654  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035E718 0035B658  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8035E71C 0035B65C  40 81 00 30 */	ble .L_8035E74C
/* 8035E720 0035B660  C0 02 03 58 */	lfs f0, lbl_8051E6B8@sda21(r2)
/* 8035E724 0035B664  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8035E728 0035B668  EC 60 18 24 */	fdivs f3, f0, f3
/* 8035E72C 0035B66C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8035E730 0035B670  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8035E734 0035B674  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8035E738 0035B678  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8035E73C 0035B67C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8035E740 0035B680  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8035E744 0035B684  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8035E748 0035B688  D0 01 00 28 */	stfs f0, 0x28(r1)
.L_8035E74C:
/* 8035E74C 0035B68C  38 61 00 20 */	addi r3, r1, 0x20
/* 8035E750 0035B690  38 81 00 14 */	addi r4, r1, 0x14
/* 8035E754 0035B694  38 A1 00 08 */	addi r5, r1, 8
/* 8035E758 0035B698  4B D8 C8 2D */	bl PSVECCrossProduct
/* 8035E75C 0035B69C  C0 41 00 08 */	lfs f2, 8(r1)
/* 8035E760 0035B6A0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8035E764 0035B6A4  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8035E768 0035B6A8  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8035E76C 0035B6AC  EC 81 00 72 */	fmuls f4, f1, f1
/* 8035E770 0035B6B0  C0 22 03 2C */	lfs f1, lbl_8051E68C@sda21(r2)
/* 8035E774 0035B6B4  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8035E778 0035B6B8  EC 00 20 2A */	fadds f0, f0, f4
/* 8035E77C 0035B6BC  EC 03 00 2A */	fadds f0, f3, f0
/* 8035E780 0035B6C0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8035E784 0035B6C4  40 81 00 20 */	ble .L_8035E7A4
/* 8035E788 0035B6C8  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 8035E78C 0035B6CC  EC 63 00 2A */	fadds f3, f3, f0
/* 8035E790 0035B6D0  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8035E794 0035B6D4  40 81 00 14 */	ble .L_8035E7A8
/* 8035E798 0035B6D8  FC 00 18 34 */	frsqrte f0, f3
/* 8035E79C 0035B6DC  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8035E7A0 0035B6E0  48 00 00 08 */	b .L_8035E7A8
.L_8035E7A4:
/* 8035E7A4 0035B6E4  FC 60 08 90 */	fmr f3, f1
.L_8035E7A8:
/* 8035E7A8 0035B6E8  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035E7AC 0035B6EC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8035E7B0 0035B6F0  40 81 00 30 */	ble .L_8035E7E0
/* 8035E7B4 0035B6F4  C0 02 03 58 */	lfs f0, lbl_8051E6B8@sda21(r2)
/* 8035E7B8 0035B6F8  C0 41 00 08 */	lfs f2, 8(r1)
/* 8035E7BC 0035B6FC  EC 60 18 24 */	fdivs f3, f0, f3
/* 8035E7C0 0035B700  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8035E7C4 0035B704  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8035E7C8 0035B708  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8035E7CC 0035B70C  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8035E7D0 0035B710  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8035E7D4 0035B714  D0 41 00 08 */	stfs f2, 8(r1)
/* 8035E7D8 0035B718  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8035E7DC 0035B71C  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_8035E7E0:
/* 8035E7E0 0035B720  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8035E7E4 0035B724  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8035E7E8 0035B728  D0 1E 00 00 */	stfs f0, 0(r30)
/* 8035E7EC 0035B72C  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8035E7F0 0035B730  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8035E7F4 0035B734  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8035E7F8 0035B738  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8035E7FC 0035B73C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8035E800 0035B740  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8035E804 0035B744  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8035E808 0035B748  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8035E80C 0035B74C  D0 1E 00 04 */	stfs f0, 4(r30)
/* 8035E810 0035B750  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8035E814 0035B754  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8035E818 0035B758  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8035E81C 0035B75C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8035E820 0035B760  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8035E824 0035B764  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 8035E828 0035B768  C0 01 00 08 */	lfs f0, 8(r1)
/* 8035E82C 0035B76C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8035E830 0035B770  D0 1E 00 08 */	stfs f0, 8(r30)
/* 8035E834 0035B774  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8035E838 0035B778  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8035E83C 0035B77C  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 8035E840 0035B780  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8035E844 0035B784  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8035E848 0035B788  D0 1E 00 28 */	stfs f0, 0x28(r30)
.L_8035E84C:
/* 8035E84C 0035B78C  3B 9C 00 02 */	addi r28, r28, 2
/* 8035E850 0035B790  3B 7B 00 01 */	addi r27, r27, 1
.L_8035E854:
/* 8035E854 0035B794  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 8035E858 0035B798  7C 1B 00 00 */	cmpw r27, r0
/* 8035E85C 0035B79C  41 80 FC F8 */	blt .L_8035E554
/* 8035E860 0035B7A0  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8035E864 0035B7A4  4B DD 72 39 */	bl update__8CollTreeFv
/* 8035E868 0035B7A8  83 BF 02 8C */	lwz r29, 0x28c(r31)
/* 8035E86C 0035B7AC  3B C0 00 00 */	li r30, 0
/* 8035E870 0035B7B0  7F A3 EB 78 */	mr r3, r29
/* 8035E874 0035B7B4  81 9D 00 28 */	lwz r12, 0x28(r29)
/* 8035E878 0035B7B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035E87C 0035B7BC  7D 89 03 A6 */	mtctr r12
/* 8035E880 0035B7C0  4E 80 04 21 */	bctrl 
/* 8035E884 0035B7C4  2C 03 00 05 */	cmpwi r3, 5
/* 8035E888 0035B7C8  41 82 00 3C */	beq .L_8035E8C4
/* 8035E88C 0035B7CC  7F A3 EB 78 */	mr r3, r29
/* 8035E890 0035B7D0  81 9D 00 28 */	lwz r12, 0x28(r29)
/* 8035E894 0035B7D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035E898 0035B7D8  7D 89 03 A6 */	mtctr r12
/* 8035E89C 0035B7DC  4E 80 04 21 */	bctrl 
/* 8035E8A0 0035B7E0  2C 03 00 06 */	cmpwi r3, 6
/* 8035E8A4 0035B7E4  41 82 00 20 */	beq .L_8035E8C4
/* 8035E8A8 0035B7E8  7F A3 EB 78 */	mr r3, r29
/* 8035E8AC 0035B7EC  81 9D 00 28 */	lwz r12, 0x28(r29)
/* 8035E8B0 0035B7F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035E8B4 0035B7F4  7D 89 03 A6 */	mtctr r12
/* 8035E8B8 0035B7F8  4E 80 04 21 */	bctrl 
/* 8035E8BC 0035B7FC  2C 03 00 07 */	cmpwi r3, 7
/* 8035E8C0 0035B800  40 82 00 08 */	bne .L_8035E8C8
.L_8035E8C4:
/* 8035E8C4 0035B804  3B C0 00 01 */	li r30, 1
.L_8035E8C8:
/* 8035E8C8 0035B808  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8035E8CC 0035B80C  40 82 00 20 */	bne .L_8035E8EC
/* 8035E8D0 0035B810  3C 60 80 49 */	lis r3, lbl_80491604@ha
/* 8035E8D4 0035B814  3C A0 80 49 */	lis r5, lbl_804915F8@ha
/* 8035E8D8 0035B818  38 63 16 04 */	addi r3, r3, lbl_80491604@l
/* 8035E8DC 0035B81C  38 80 04 54 */	li r4, 0x454
/* 8035E8E0 0035B820  38 A5 15 F8 */	addi r5, r5, lbl_804915F8@l
/* 8035E8E4 0035B824  4C C6 31 82 */	crclr 6
/* 8035E8E8 0035B828  4B CC BD 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035E8EC:
/* 8035E8EC 0035B82C  28 1D 00 00 */	cmplwi r29, 0
/* 8035E8F0 0035B830  41 82 00 44 */	beq .L_8035E934
/* 8035E8F4 0035B834  80 1F 00 F0 */	lwz r0, 0xf0(r31)
/* 8035E8F8 0035B838  28 00 00 00 */	cmplwi r0, 0
/* 8035E8FC 0035B83C  41 82 00 20 */	beq .L_8035E91C
/* 8035E900 0035B840  7F A3 EB 78 */	mr r3, r29
/* 8035E904 0035B844  38 80 00 01 */	li r4, 1
/* 8035E908 0035B848  81 9D 00 28 */	lwz r12, 0x28(r29)
/* 8035E90C 0035B84C  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 8035E910 0035B850  7D 89 03 A6 */	mtctr r12
/* 8035E914 0035B854  4E 80 04 21 */	bctrl 
/* 8035E918 0035B858  48 00 00 1C */	b .L_8035E934
.L_8035E91C:
/* 8035E91C 0035B85C  7F A3 EB 78 */	mr r3, r29
/* 8035E920 0035B860  38 80 00 01 */	li r4, 1
/* 8035E924 0035B864  81 9D 00 28 */	lwz r12, 0x28(r29)
/* 8035E928 0035B868  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 8035E92C 0035B86C  7D 89 03 A6 */	mtctr r12
/* 8035E930 0035B870  4E 80 04 21 */	bctrl 
.L_8035E934:
/* 8035E934 0035B874  38 00 00 00 */	li r0, 0
/* 8035E938 0035B878  90 0D 98 D0 */	stw r0, curK__Q24Game10KingChappy@sda21(r13)
/* 8035E93C 0035B87C  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 8035E940 0035B880  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8035E944 0035B884  BB 61 00 6C */	lmw r27, 0x6c(r1)
/* 8035E948 0035B888  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8035E94C 0035B88C  7C 08 03 A6 */	mtlr r0
/* 8035E950 0035B890  38 21 00 90 */	addi r1, r1, 0x90
/* 8035E954 0035B894  4E 80 00 20 */	blr 
.endfn doAnimationCullingOff__Q34Game10KingChappy3ObjFv

.fn doSimulation__Q34Game10KingChappy3ObjFf, global
/* 8035E958 0035B898  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035E95C 0035B89C  7C 08 02 A6 */	mflr r0
/* 8035E960 0035B8A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035E964 0035B8A4  80 83 02 F0 */	lwz r4, 0x2f0(r3)
/* 8035E968 0035B8A8  38 04 FF FF */	addi r0, r4, -1
/* 8035E96C 0035B8AC  90 03 02 F0 */	stw r0, 0x2f0(r3)
/* 8035E970 0035B8B0  80 03 02 F0 */	lwz r0, 0x2f0(r3)
/* 8035E974 0035B8B4  2C 00 00 00 */	cmpwi r0, 0
/* 8035E978 0035B8B8  40 80 00 0C */	bge .L_8035E984
/* 8035E97C 0035B8BC  38 00 00 00 */	li r0, 0
/* 8035E980 0035B8C0  90 03 02 F0 */	stw r0, 0x2f0(r3)
.L_8035E984:
/* 8035E984 0035B8C4  4B DA 60 D5 */	bl doSimulation__Q24Game9EnemyBaseFf
/* 8035E988 0035B8C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035E98C 0035B8CC  7C 08 03 A6 */	mtlr r0
/* 8035E990 0035B8D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8035E994 0035B8D4  4E 80 00 20 */	blr 
.endfn doSimulation__Q34Game10KingChappy3ObjFf

.fn getShadowParam__Q34Game10KingChappy3ObjFRQ24Game11ShadowParam, global
/* 8035E998 0035B8D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035E99C 0035B8DC  7C 08 02 A6 */	mflr r0
/* 8035E9A0 0035B8E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035E9A4 0035B8E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035E9A8 0035B8E8  7C 9F 23 78 */	mr r31, r4
/* 8035E9AC 0035B8EC  93 C1 00 08 */	stw r30, 8(r1)
/* 8035E9B0 0035B8F0  7C 7E 1B 78 */	mr r30, r3
/* 8035E9B4 0035B8F4  80 63 02 D4 */	lwz r3, 0x2d4(r3)
/* 8035E9B8 0035B8F8  48 0C AE E9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8035E9BC 0035B8FC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8035E9C0 0035B900  C0 82 03 5C */	lfs f4, lbl_8051E6BC@sda21(r2)
/* 8035E9C4 0035B904  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8035E9C8 0035B908  C0 62 03 2C */	lfs f3, lbl_8051E68C@sda21(r2)
/* 8035E9CC 0035B90C  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8035E9D0 0035B910  C0 02 03 58 */	lfs f0, lbl_8051E6B8@sda21(r2)
/* 8035E9D4 0035B914  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8035E9D8 0035B918  C0 42 03 60 */	lfs f2, lbl_8051E6C0@sda21(r2)
/* 8035E9DC 0035B91C  C0 A3 00 2C */	lfs f5, 0x2c(r3)
/* 8035E9E0 0035B920  C0 22 03 64 */	lfs f1, lbl_8051E6C4@sda21(r2)
/* 8035E9E4 0035B924  D0 BF 00 08 */	stfs f5, 8(r31)
/* 8035E9E8 0035B928  C0 BF 00 04 */	lfs f5, 4(r31)
/* 8035E9EC 0035B92C  EC 85 20 28 */	fsubs f4, f5, f4
/* 8035E9F0 0035B930  D0 9F 00 04 */	stfs f4, 4(r31)
/* 8035E9F4 0035B934  D0 7F 00 0C */	stfs f3, 0xc(r31)
/* 8035E9F8 0035B938  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8035E9FC 0035B93C  D0 7F 00 14 */	stfs f3, 0x14(r31)
/* 8035EA00 0035B940  C0 1E 01 F8 */	lfs f0, 0x1f8(r30)
/* 8035EA04 0035B944  EC 02 00 32 */	fmuls f0, f2, f0
/* 8035EA08 0035B948  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 8035EA0C 0035B94C  C0 1E 01 F8 */	lfs f0, 0x1f8(r30)
/* 8035EA10 0035B950  EC 01 00 32 */	fmuls f0, f1, f0
/* 8035EA14 0035B954  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8035EA18 0035B958  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035EA1C 0035B95C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035EA20 0035B960  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035EA24 0035B964  7C 08 03 A6 */	mtlr r0
/* 8035EA28 0035B968  38 21 00 10 */	addi r1, r1, 0x10
/* 8035EA2C 0035B96C  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game10KingChappy3ObjFRQ24Game11ShadowParam

.fn damageCallBack__Q34Game10KingChappy3ObjFPQ24Game8CreaturefP8CollPart, global
/* 8035EA30 0035B970  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8035EA34 0035B974  7C 08 02 A6 */	mflr r0
/* 8035EA38 0035B978  90 01 00 34 */	stw r0, 0x34(r1)
/* 8035EA3C 0035B97C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8035EA40 0035B980  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8035EA44 0035B984  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8035EA48 0035B988  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8035EA4C 0035B98C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8035EA50 0035B990  FF E0 08 90 */	fmr f31, f1
/* 8035EA54 0035B994  7C 7E 1B 78 */	mr r30, r3
/* 8035EA58 0035B998  7C 9F 23 78 */	mr r31, r4
/* 8035EA5C 0035B99C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8035EA60 0035B9A0  41 82 00 1C */	beq .L_8035EA7C
/* 8035EA64 0035B9A4  C0 02 03 68 */	lfs f0, lbl_8051E6C8@sda21(r2)
/* 8035EA68 0035B9A8  C0 42 03 58 */	lfs f2, lbl_8051E6B8@sda21(r2)
/* 8035EA6C 0035B9AC  EC 20 07 F2 */	fmuls f1, f0, f31
/* 8035EA70 0035B9B0  4B DA 75 BD */	bl addDamage__Q24Game9EnemyBaseFff
/* 8035EA74 0035B9B4  38 60 00 01 */	li r3, 1
/* 8035EA78 0035B9B8  48 00 00 F0 */	b .L_8035EB68
.L_8035EA7C:
/* 8035EA7C 0035B9BC  28 05 00 00 */	cmplwi r5, 0
/* 8035EA80 0035B9C0  41 82 00 48 */	beq .L_8035EAC8
/* 8035EA84 0035B9C4  7F E3 FB 78 */	mr r3, r31
/* 8035EA88 0035B9C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035EA8C 0035B9CC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8035EA90 0035B9D0  7D 89 03 A6 */	mtctr r12
/* 8035EA94 0035B9D4  4E 80 04 21 */	bctrl 
/* 8035EA98 0035B9D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035EA9C 0035B9DC  41 82 00 C8 */	beq .L_8035EB64
/* 8035EAA0 0035B9E0  7F E3 FB 78 */	mr r3, r31
/* 8035EAA4 0035B9E4  4B E4 0A D1 */	bl isStickTo__Q24Game8CreatureFv
/* 8035EAA8 0035B9E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035EAAC 0035B9EC  41 82 00 B8 */	beq .L_8035EB64
/* 8035EAB0 0035B9F0  FC 20 F8 90 */	fmr f1, f31
/* 8035EAB4 0035B9F4  C0 42 03 58 */	lfs f2, lbl_8051E6B8@sda21(r2)
/* 8035EAB8 0035B9F8  7F C3 F3 78 */	mr r3, r30
/* 8035EABC 0035B9FC  4B DA 75 71 */	bl addDamage__Q24Game9EnemyBaseFff
/* 8035EAC0 0035BA00  38 60 00 01 */	li r3, 1
/* 8035EAC4 0035BA04  48 00 00 A4 */	b .L_8035EB68
.L_8035EAC8:
/* 8035EAC8 0035BA08  7F E3 FB 78 */	mr r3, r31
/* 8035EACC 0035BA0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035EAD0 0035BA10  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8035EAD4 0035BA14  7D 89 03 A6 */	mtctr r12
/* 8035EAD8 0035BA18  4E 80 04 21 */	bctrl 
/* 8035EADC 0035BA1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035EAE0 0035BA20  41 82 00 84 */	beq .L_8035EB64
/* 8035EAE4 0035BA24  7F E4 FB 78 */	mr r4, r31
/* 8035EAE8 0035BA28  38 61 00 08 */	addi r3, r1, 8
/* 8035EAEC 0035BA2C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035EAF0 0035BA30  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035EAF4 0035BA34  7D 89 03 A6 */	mtctr r12
/* 8035EAF8 0035BA38  4E 80 04 21 */	bctrl 
/* 8035EAFC 0035BA3C  C0 22 03 6C */	lfs f1, lbl_8051E6CC@sda21(r2)
/* 8035EB00 0035BA40  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8035EB04 0035BA44  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8035EB08 0035BA48  EC 01 00 2A */	fadds f0, f1, f0
/* 8035EB0C 0035BA4C  C0 61 00 08 */	lfs f3, 8(r1)
/* 8035EB10 0035BA50  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 8035EB14 0035BA54  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8035EB18 0035BA58  40 80 00 44 */	bge .L_8035EB5C
/* 8035EB1C 0035BA5C  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 8035EB20 0035BA60  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 8035EB24 0035BA64  EC 44 00 28 */	fsubs f2, f4, f0
/* 8035EB28 0035BA68  C0 02 03 70 */	lfs f0, lbl_8051E6D0@sda21(r2)
/* 8035EB2C 0035BA6C  EC 63 08 28 */	fsubs f3, f3, f1
/* 8035EB30 0035BA70  EC 22 00 B2 */	fmuls f1, f2, f2
/* 8035EB34 0035BA74  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8035EB38 0035BA78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035EB3C 0035BA7C  40 80 00 28 */	bge .L_8035EB64
/* 8035EB40 0035BA80  C0 02 03 74 */	lfs f0, lbl_8051E6D4@sda21(r2)
/* 8035EB44 0035BA84  7F C3 F3 78 */	mr r3, r30
/* 8035EB48 0035BA88  C0 42 03 58 */	lfs f2, lbl_8051E6B8@sda21(r2)
/* 8035EB4C 0035BA8C  EC 20 07 F2 */	fmuls f1, f0, f31
/* 8035EB50 0035BA90  4B DA 74 DD */	bl addDamage__Q24Game9EnemyBaseFff
/* 8035EB54 0035BA94  38 60 00 01 */	li r3, 1
/* 8035EB58 0035BA98  48 00 00 10 */	b .L_8035EB68
.L_8035EB5C:
/* 8035EB5C 0035BA9C  38 60 00 00 */	li r3, 0
/* 8035EB60 0035BAA0  48 00 00 08 */	b .L_8035EB68
.L_8035EB64:
/* 8035EB64 0035BAA4  38 60 00 00 */	li r3, 0
.L_8035EB68:
/* 8035EB68 0035BAA8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8035EB6C 0035BAAC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8035EB70 0035BAB0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8035EB74 0035BAB4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8035EB78 0035BAB8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8035EB7C 0035BABC  7C 08 03 A6 */	mtlr r0
/* 8035EB80 0035BAC0  38 21 00 30 */	addi r1, r1, 0x30
/* 8035EB84 0035BAC4  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game10KingChappy3ObjFPQ24Game8CreaturefP8CollPart

.fn collisionCallback__Q34Game10KingChappy3ObjFRQ24Game9CollEvent, global
/* 8035EB88 0035BAC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035EB8C 0035BACC  7C 08 02 A6 */	mflr r0
/* 8035EB90 0035BAD0  3C 60 6B 75 */	lis r3, 0x6B757469@ha
/* 8035EB94 0035BAD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035EB98 0035BAD8  80 A4 00 08 */	lwz r5, 8(r4)
/* 8035EB9C 0035BADC  38 83 74 69 */	addi r4, r3, 0x6B757469@l
/* 8035EBA0 0035BAE0  38 65 00 30 */	addi r3, r5, 0x30
/* 8035EBA4 0035BAE4  48 0B 48 91 */	bl __eq__4ID32FUl
/* 8035EBA8 0035BAE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035EBAC 0035BAEC  7C 08 03 A6 */	mtlr r0
/* 8035EBB0 0035BAF0  38 21 00 10 */	addi r1, r1, 0x10
/* 8035EBB4 0035BAF4  4E 80 00 20 */	blr 
.endfn collisionCallback__Q34Game10KingChappy3ObjFRQ24Game9CollEvent

.fn wallCallback__Q34Game10KingChappy3ObjFRCQ24Game8MoveInfo, global
/* 8035EBB8 0035BAF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035EBBC 0035BAFC  7C 08 02 A6 */	mflr r0
/* 8035EBC0 0035BB00  38 80 00 78 */	li r4, 0x78
/* 8035EBC4 0035BB04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035EBC8 0035BB08  38 00 00 00 */	li r0, 0
/* 8035EBCC 0035BB0C  90 83 02 F0 */	stw r4, 0x2f0(r3)
/* 8035EBD0 0035BB10  90 03 02 30 */	stw r0, 0x230(r3)
/* 8035EBD4 0035BB14  48 00 0C 25 */	bl setNextGoal__Q34Game10KingChappy3ObjFv
/* 8035EBD8 0035BB18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035EBDC 0035BB1C  7C 08 03 A6 */	mtlr r0
/* 8035EBE0 0035BB20  38 21 00 10 */	addi r1, r1, 0x10
/* 8035EBE4 0035BB24  4E 80 00 20 */	blr 
.endfn wallCallback__Q34Game10KingChappy3ObjFRCQ24Game8MoveInfo

.fn "bombCallBack__Q34Game10KingChappy3ObjFPQ24Game8CreatureR10Vector3<f>f", global
/* 8035EBE8 0035BB28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035EBEC 0035BB2C  7C 08 02 A6 */	mflr r0
/* 8035EBF0 0035BB30  C0 02 03 78 */	lfs f0, lbl_8051E6D8@sda21(r2)
/* 8035EBF4 0035BB34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035EBF8 0035BB38  EC 20 00 72 */	fmuls f1, f0, f1
/* 8035EBFC 0035BB3C  4B DA 79 CD */	bl "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
/* 8035EC00 0035BB40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035EC04 0035BB44  7C 08 03 A6 */	mtlr r0
/* 8035EC08 0035BB48  38 21 00 10 */	addi r1, r1, 0x10
/* 8035EC0C 0035BB4C  4E 80 00 20 */	blr 
.endfn "bombCallBack__Q34Game10KingChappy3ObjFPQ24Game8CreatureR10Vector3<f>f"

.fn inWaterCallback__Q34Game10KingChappy3ObjFPQ24Game8WaterBox, global
/* 8035EC10 0035BB50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035EC14 0035BB54  7C 08 02 A6 */	mflr r0
/* 8035EC18 0035BB58  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035EC1C 0035BB5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035EC20 0035BB60  7C 9F 23 78 */	mr r31, r4
/* 8035EC24 0035BB64  93 C1 00 08 */	stw r30, 8(r1)
/* 8035EC28 0035BB68  7C 7E 1B 78 */	mr r30, r3
/* 8035EC2C 0035BB6C  4B DA 87 C9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8035EC30 0035BB70  2C 03 00 09 */	cmpwi r3, 9
/* 8035EC34 0035BB74  41 82 00 10 */	beq .L_8035EC44
/* 8035EC38 0035BB78  7F C3 F3 78 */	mr r3, r30
/* 8035EC3C 0035BB7C  7F E4 FB 78 */	mr r4, r31
/* 8035EC40 0035BB80  4B DA 52 55 */	bl inWaterCallback__Q24Game9EnemyBaseFPQ24Game8WaterBox
.L_8035EC44:
/* 8035EC44 0035BB84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035EC48 0035BB88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035EC4C 0035BB8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035EC50 0035BB90  7C 08 03 A6 */	mtlr r0
/* 8035EC54 0035BB94  38 21 00 10 */	addi r1, r1, 0x10
/* 8035EC58 0035BB98  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q34Game10KingChappy3ObjFPQ24Game8WaterBox

.fn startCarcassMotion__Q34Game10KingChappy3ObjFv, global
/* 8035EC5C 0035BB9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035EC60 0035BBA0  7C 08 02 A6 */	mflr r0
/* 8035EC64 0035BBA4  38 80 00 0D */	li r4, 0xd
/* 8035EC68 0035BBA8  38 A0 00 00 */	li r5, 0
/* 8035EC6C 0035BBAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035EC70 0035BBB0  4B DA 63 95 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8035EC74 0035BBB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035EC78 0035BBB8  7C 08 03 A6 */	mtlr r0
/* 8035EC7C 0035BBBC  38 21 00 10 */	addi r1, r1, 0x10
/* 8035EC80 0035BBC0  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game10KingChappy3ObjFv

.fn initWalkSmokeEffect__Q34Game10KingChappy3ObjFv, global
/* 8035EC84 0035BBC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035EC88 0035BBC8  7C 08 02 A6 */	mflr r0
/* 8035EC8C 0035BBCC  38 80 00 02 */	li r4, 2
/* 8035EC90 0035BBD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035EC94 0035BBD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035EC98 0035BBD8  7C 7F 1B 78 */	mr r31, r3
/* 8035EC9C 0035BBDC  38 7F 03 44 */	addi r3, r31, 0x344
/* 8035ECA0 0035BBE0  4B DC B6 C5 */	bl alloc__Q34Game15WalkSmokeEffect3MgrFi
/* 8035ECA4 0035BBE4  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 8035ECA8 0035BBE8  38 7F 03 44 */	addi r3, r31, 0x344
/* 8035ECAC 0035BBEC  C0 22 03 7C */	lfs f1, lbl_8051E6DC@sda21(r2)
/* 8035ECB0 0035BBF0  38 80 00 00 */	li r4, 0
/* 8035ECB4 0035BBF4  38 C2 03 38 */	addi r6, r2, lbl_8051E698@sda21
/* 8035ECB8 0035BBF8  4B DC B9 29 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 8035ECBC 0035BBFC  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 8035ECC0 0035BC00  38 7F 03 44 */	addi r3, r31, 0x344
/* 8035ECC4 0035BC04  C0 22 03 7C */	lfs f1, lbl_8051E6DC@sda21(r2)
/* 8035ECC8 0035BC08  38 80 00 01 */	li r4, 1
/* 8035ECCC 0035BC0C  38 C2 03 30 */	addi r6, r2, lbl_8051E690@sda21
/* 8035ECD0 0035BC10  4B DC B9 11 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 8035ECD4 0035BC14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035ECD8 0035BC18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035ECDC 0035BC1C  7C 08 03 A6 */	mtlr r0
/* 8035ECE0 0035BC20  38 21 00 10 */	addi r1, r1, 0x10
/* 8035ECE4 0035BC24  4E 80 00 20 */	blr 
.endfn initWalkSmokeEffect__Q34Game10KingChappy3ObjFv

.fn getWalkSmokeEffectMgr__Q34Game10KingChappy3ObjFv, global
/* 8035ECE8 0035BC28  38 63 03 44 */	addi r3, r3, 0x344
/* 8035ECEC 0035BC2C  4E 80 00 20 */	blr 
.endfn getWalkSmokeEffectMgr__Q34Game10KingChappy3ObjFv

.fn doStartStoneState__Q34Game10KingChappy3ObjFv, global
/* 8035ECF0 0035BC30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035ECF4 0035BC34  7C 08 02 A6 */	mflr r0
/* 8035ECF8 0035BC38  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035ECFC 0035BC3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035ED00 0035BC40  7C 7F 1B 78 */	mr r31, r3
/* 8035ED04 0035BC44  4B DA 41 F1 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 8035ED08 0035BC48  3C 80 62 61 */	lis r4, 0x6261636B@ha
/* 8035ED0C 0035BC4C  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8035ED10 0035BC50  38 84 63 6B */	addi r4, r4, 0x6261636B@l
/* 8035ED14 0035BC54  4B DD 71 31 */	bl getCollPart__8CollTreeFUl
/* 8035ED18 0035BC58  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 8035ED1C 0035BC5C  38 63 00 3C */	addi r3, r3, 0x3c
/* 8035ED20 0035BC60  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 8035ED24 0035BC64  48 0B 46 E1 */	bl __as__4ID32FUl
/* 8035ED28 0035BC68  3C 80 6B 65 */	lis r4, 0x6B657475@ha
/* 8035ED2C 0035BC6C  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8035ED30 0035BC70  38 84 74 75 */	addi r4, r4, 0x6B657475@l
/* 8035ED34 0035BC74  4B DD 71 11 */	bl getCollPart__8CollTreeFUl
/* 8035ED38 0035BC78  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 8035ED3C 0035BC7C  38 63 00 3C */	addi r3, r3, 0x3c
/* 8035ED40 0035BC80  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 8035ED44 0035BC84  48 0B 46 C1 */	bl __as__4ID32FUl
/* 8035ED48 0035BC88  7F E3 FB 78 */	mr r3, r31
/* 8035ED4C 0035BC8C  48 00 28 DD */	bl fadeAllEffect__Q34Game10KingChappy3ObjFv
/* 8035ED50 0035BC90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035ED54 0035BC94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035ED58 0035BC98  7C 08 03 A6 */	mtlr r0
/* 8035ED5C 0035BC9C  38 21 00 10 */	addi r1, r1, 0x10
/* 8035ED60 0035BCA0  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game10KingChappy3ObjFv

.fn doFinishStoneState__Q34Game10KingChappy3ObjFv, global
/* 8035ED64 0035BCA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035ED68 0035BCA8  7C 08 02 A6 */	mflr r0
/* 8035ED6C 0035BCAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035ED70 0035BCB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035ED74 0035BCB4  7C 7F 1B 78 */	mr r31, r3
/* 8035ED78 0035BCB8  4B DA 41 91 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 8035ED7C 0035BCBC  3C 80 62 61 */	lis r4, 0x6261636B@ha
/* 8035ED80 0035BCC0  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8035ED84 0035BCC4  38 84 63 6B */	addi r4, r4, 0x6261636B@l
/* 8035ED88 0035BCC8  4B DD 70 BD */	bl getCollPart__8CollTreeFUl
/* 8035ED8C 0035BCCC  3C 80 5F 74 */	lis r4, 0x5F745F5F@ha
/* 8035ED90 0035BCD0  38 63 00 3C */	addi r3, r3, 0x3c
/* 8035ED94 0035BCD4  38 84 5F 5F */	addi r4, r4, 0x5F745F5F@l
/* 8035ED98 0035BCD8  48 0B 46 6D */	bl __as__4ID32FUl
/* 8035ED9C 0035BCDC  3C 80 6B 65 */	lis r4, 0x6B657475@ha
/* 8035EDA0 0035BCE0  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8035EDA4 0035BCE4  38 84 74 75 */	addi r4, r4, 0x6B657475@l
/* 8035EDA8 0035BCE8  4B DD 70 9D */	bl getCollPart__8CollTreeFUl
/* 8035EDAC 0035BCEC  3C 80 5F 74 */	lis r4, 0x5F745F5F@ha
/* 8035EDB0 0035BCF0  38 63 00 3C */	addi r3, r3, 0x3c
/* 8035EDB4 0035BCF4  38 84 5F 5F */	addi r4, r4, 0x5F745F5F@l
/* 8035EDB8 0035BCF8  48 0B 46 4D */	bl __as__4ID32FUl
/* 8035EDBC 0035BCFC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8035EDC0 0035BD00  7F E3 FB 78 */	mr r3, r31
/* 8035EDC4 0035BD04  C0 82 03 80 */	lfs f4, lbl_8051E6E0@sda21(r2)
/* 8035EDC8 0035BD08  38 80 00 00 */	li r4, 0
/* 8035EDCC 0035BD0C  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 8035EDD0 0035BD10  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 8035EDD4 0035BD14  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 8035EDD8 0035BD18  4B DB 43 45 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 8035EDDC 0035BD1C  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035EDE0 0035BD20  7F E3 FB 78 */	mr r3, r31
/* 8035EDE4 0035BD24  38 80 00 00 */	li r4, 0
/* 8035EDE8 0035BD28  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 8035EDEC 0035BD2C  48 00 29 6D */	bl createEffect__Q34Game10KingChappy3ObjFi
/* 8035EDF0 0035BD30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035EDF4 0035BD34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035EDF8 0035BD38  7C 08 03 A6 */	mtlr r0
/* 8035EDFC 0035BD3C  38 21 00 10 */	addi r1, r1, 0x10
/* 8035EE00 0035BD40  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game10KingChappy3ObjFv

.fn doStartMovie__Q34Game10KingChappy3ObjFv, global
/* 8035EE04 0035BD44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035EE08 0035BD48  7C 08 02 A6 */	mflr r0
/* 8035EE0C 0035BD4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035EE10 0035BD50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035EE14 0035BD54  93 C1 00 08 */	stw r30, 8(r1)
/* 8035EE18 0035BD58  7C 7E 1B 78 */	mr r30, r3
/* 8035EE1C 0035BD5C  80 63 03 50 */	lwz r3, 0x350(r3)
/* 8035EE20 0035BD60  81 83 00 00 */	lwz r12, 0(r3)
/* 8035EE24 0035BD64  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8035EE28 0035BD68  7D 89 03 A6 */	mtctr r12
/* 8035EE2C 0035BD6C  4E 80 04 21 */	bctrl 
/* 8035EE30 0035BD70  80 7E 03 54 */	lwz r3, 0x354(r30)
/* 8035EE34 0035BD74  81 83 00 00 */	lwz r12, 0(r3)
/* 8035EE38 0035BD78  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035EE3C 0035BD7C  7D 89 03 A6 */	mtctr r12
/* 8035EE40 0035BD80  4E 80 04 21 */	bctrl 
/* 8035EE44 0035BD84  80 7E 03 58 */	lwz r3, 0x358(r30)
/* 8035EE48 0035BD88  81 83 00 00 */	lwz r12, 0(r3)
/* 8035EE4C 0035BD8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035EE50 0035BD90  7D 89 03 A6 */	mtctr r12
/* 8035EE54 0035BD94  4E 80 04 21 */	bctrl 
/* 8035EE58 0035BD98  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 8035EE5C 0035BD9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035EE60 0035BDA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035EE64 0035BDA4  7D 89 03 A6 */	mtctr r12
/* 8035EE68 0035BDA8  4E 80 04 21 */	bctrl 
/* 8035EE6C 0035BDAC  80 7E 03 60 */	lwz r3, 0x360(r30)
/* 8035EE70 0035BDB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8035EE74 0035BDB4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8035EE78 0035BDB8  7D 89 03 A6 */	mtctr r12
/* 8035EE7C 0035BDBC  4E 80 04 21 */	bctrl 
/* 8035EE80 0035BDC0  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 8035EE84 0035BDC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8035EE88 0035BDC8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8035EE8C 0035BDCC  7D 89 03 A6 */	mtctr r12
/* 8035EE90 0035BDD0  4E 80 04 21 */	bctrl 
/* 8035EE94 0035BDD4  80 7E 03 68 */	lwz r3, 0x368(r30)
/* 8035EE98 0035BDD8  81 83 00 00 */	lwz r12, 0(r3)
/* 8035EE9C 0035BDDC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8035EEA0 0035BDE0  7D 89 03 A6 */	mtctr r12
/* 8035EEA4 0035BDE4  4E 80 04 21 */	bctrl 
/* 8035EEA8 0035BDE8  80 7E 03 6C */	lwz r3, 0x36c(r30)
/* 8035EEAC 0035BDEC  81 83 00 00 */	lwz r12, 0(r3)
/* 8035EEB0 0035BDF0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8035EEB4 0035BDF4  7D 89 03 A6 */	mtctr r12
/* 8035EEB8 0035BDF8  4E 80 04 21 */	bctrl 
/* 8035EEBC 0035BDFC  80 7E 03 70 */	lwz r3, 0x370(r30)
/* 8035EEC0 0035BE00  81 83 00 00 */	lwz r12, 0(r3)
/* 8035EEC4 0035BE04  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035EEC8 0035BE08  7D 89 03 A6 */	mtctr r12
/* 8035EECC 0035BE0C  4E 80 04 21 */	bctrl 
/* 8035EED0 0035BE10  83 FE 03 74 */	lwz r31, 0x374(r30)
/* 8035EED4 0035BE14  38 7F 00 04 */	addi r3, r31, 4
/* 8035EED8 0035BE18  81 9F 00 04 */	lwz r12, 4(r31)
/* 8035EEDC 0035BE1C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8035EEE0 0035BE20  7D 89 03 A6 */	mtctr r12
/* 8035EEE4 0035BE24  4E 80 04 21 */	bctrl 
/* 8035EEE8 0035BE28  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035EEEC 0035BE2C  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 8035EEF0 0035BE30  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8035EEF4 0035BE34  7D 89 03 A6 */	mtctr r12
/* 8035EEF8 0035BE38  4E 80 04 21 */	bctrl 
/* 8035EEFC 0035BE3C  83 FE 03 78 */	lwz r31, 0x378(r30)
/* 8035EF00 0035BE40  38 7F 00 04 */	addi r3, r31, 4
/* 8035EF04 0035BE44  81 9F 00 04 */	lwz r12, 4(r31)
/* 8035EF08 0035BE48  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8035EF0C 0035BE4C  7D 89 03 A6 */	mtctr r12
/* 8035EF10 0035BE50  4E 80 04 21 */	bctrl 
/* 8035EF14 0035BE54  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035EF18 0035BE58  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 8035EF1C 0035BE5C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8035EF20 0035BE60  7D 89 03 A6 */	mtctr r12
/* 8035EF24 0035BE64  4E 80 04 21 */	bctrl 
/* 8035EF28 0035BE68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035EF2C 0035BE6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035EF30 0035BE70  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035EF34 0035BE74  7C 08 03 A6 */	mtlr r0
/* 8035EF38 0035BE78  38 21 00 10 */	addi r1, r1, 0x10
/* 8035EF3C 0035BE7C  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game10KingChappy3ObjFv

.fn startDemoDrawOff__Q23efx22TKchYodareBaseChaseMtxFv, weak
/* 8035EF40 0035BE80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035EF44 0035BE84  7C 08 02 A6 */	mflr r0
/* 8035EF48 0035BE88  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035EF4C 0035BE8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035EF50 0035BE90  7C 7F 1B 78 */	mr r31, r3
/* 8035EF54 0035BE94  88 03 00 0E */	lbz r0, 0xe(r3)
/* 8035EF58 0035BE98  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035EF5C 0035BE9C  60 00 00 01 */	ori r0, r0, 1
/* 8035EF60 0035BEA0  98 1F 00 0E */	stb r0, 0xe(r31)
/* 8035EF64 0035BEA4  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 8035EF68 0035BEA8  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8035EF6C 0035BEAC  7D 89 03 A6 */	mtctr r12
/* 8035EF70 0035BEB0  4E 80 04 21 */	bctrl 
/* 8035EF74 0035BEB4  38 7F 00 34 */	addi r3, r31, 0x34
/* 8035EF78 0035BEB8  81 9F 00 34 */	lwz r12, 0x34(r31)
/* 8035EF7C 0035BEBC  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8035EF80 0035BEC0  7D 89 03 A6 */	mtctr r12
/* 8035EF84 0035BEC4  4E 80 04 21 */	bctrl 
/* 8035EF88 0035BEC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035EF8C 0035BECC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035EF90 0035BED0  7C 08 03 A6 */	mtlr r0
/* 8035EF94 0035BED4  38 21 00 10 */	addi r1, r1, 0x10
/* 8035EF98 0035BED8  4E 80 00 20 */	blr 
.endfn startDemoDrawOff__Q23efx22TKchYodareBaseChaseMtxFv

.fn doEndMovie__Q34Game10KingChappy3ObjFv, global
/* 8035EF9C 0035BEDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035EFA0 0035BEE0  7C 08 02 A6 */	mflr r0
/* 8035EFA4 0035BEE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035EFA8 0035BEE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035EFAC 0035BEEC  93 C1 00 08 */	stw r30, 8(r1)
/* 8035EFB0 0035BEF0  7C 7E 1B 78 */	mr r30, r3
/* 8035EFB4 0035BEF4  80 63 03 50 */	lwz r3, 0x350(r3)
/* 8035EFB8 0035BEF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8035EFBC 0035BEFC  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8035EFC0 0035BF00  7D 89 03 A6 */	mtctr r12
/* 8035EFC4 0035BF04  4E 80 04 21 */	bctrl 
/* 8035EFC8 0035BF08  80 7E 03 54 */	lwz r3, 0x354(r30)
/* 8035EFCC 0035BF0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035EFD0 0035BF10  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035EFD4 0035BF14  7D 89 03 A6 */	mtctr r12
/* 8035EFD8 0035BF18  4E 80 04 21 */	bctrl 
/* 8035EFDC 0035BF1C  80 7E 03 58 */	lwz r3, 0x358(r30)
/* 8035EFE0 0035BF20  81 83 00 00 */	lwz r12, 0(r3)
/* 8035EFE4 0035BF24  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035EFE8 0035BF28  7D 89 03 A6 */	mtctr r12
/* 8035EFEC 0035BF2C  4E 80 04 21 */	bctrl 
/* 8035EFF0 0035BF30  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 8035EFF4 0035BF34  81 83 00 00 */	lwz r12, 0(r3)
/* 8035EFF8 0035BF38  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035EFFC 0035BF3C  7D 89 03 A6 */	mtctr r12
/* 8035F000 0035BF40  4E 80 04 21 */	bctrl 
/* 8035F004 0035BF44  80 7E 03 60 */	lwz r3, 0x360(r30)
/* 8035F008 0035BF48  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F00C 0035BF4C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8035F010 0035BF50  7D 89 03 A6 */	mtctr r12
/* 8035F014 0035BF54  4E 80 04 21 */	bctrl 
/* 8035F018 0035BF58  80 7E 03 64 */	lwz r3, 0x364(r30)
/* 8035F01C 0035BF5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F020 0035BF60  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8035F024 0035BF64  7D 89 03 A6 */	mtctr r12
/* 8035F028 0035BF68  4E 80 04 21 */	bctrl 
/* 8035F02C 0035BF6C  80 7E 03 68 */	lwz r3, 0x368(r30)
/* 8035F030 0035BF70  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F034 0035BF74  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8035F038 0035BF78  7D 89 03 A6 */	mtctr r12
/* 8035F03C 0035BF7C  4E 80 04 21 */	bctrl 
/* 8035F040 0035BF80  80 7E 03 6C */	lwz r3, 0x36c(r30)
/* 8035F044 0035BF84  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F048 0035BF88  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8035F04C 0035BF8C  7D 89 03 A6 */	mtctr r12
/* 8035F050 0035BF90  4E 80 04 21 */	bctrl 
/* 8035F054 0035BF94  80 7E 03 70 */	lwz r3, 0x370(r30)
/* 8035F058 0035BF98  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F05C 0035BF9C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035F060 0035BFA0  7D 89 03 A6 */	mtctr r12
/* 8035F064 0035BFA4  4E 80 04 21 */	bctrl 
/* 8035F068 0035BFA8  83 FE 03 74 */	lwz r31, 0x374(r30)
/* 8035F06C 0035BFAC  38 7F 00 04 */	addi r3, r31, 4
/* 8035F070 0035BFB0  81 9F 00 04 */	lwz r12, 4(r31)
/* 8035F074 0035BFB4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8035F078 0035BFB8  7D 89 03 A6 */	mtctr r12
/* 8035F07C 0035BFBC  4E 80 04 21 */	bctrl 
/* 8035F080 0035BFC0  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035F084 0035BFC4  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 8035F088 0035BFC8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8035F08C 0035BFCC  7D 89 03 A6 */	mtctr r12
/* 8035F090 0035BFD0  4E 80 04 21 */	bctrl 
/* 8035F094 0035BFD4  83 FE 03 78 */	lwz r31, 0x378(r30)
/* 8035F098 0035BFD8  38 7F 00 04 */	addi r3, r31, 4
/* 8035F09C 0035BFDC  81 9F 00 04 */	lwz r12, 4(r31)
/* 8035F0A0 0035BFE0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8035F0A4 0035BFE4  7D 89 03 A6 */	mtctr r12
/* 8035F0A8 0035BFE8  4E 80 04 21 */	bctrl 
/* 8035F0AC 0035BFEC  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035F0B0 0035BFF0  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 8035F0B4 0035BFF4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8035F0B8 0035BFF8  7D 89 03 A6 */	mtctr r12
/* 8035F0BC 0035BFFC  4E 80 04 21 */	bctrl 
/* 8035F0C0 0035C000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035F0C4 0035C004  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035F0C8 0035C008  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035F0CC 0035C00C  7C 08 03 A6 */	mtlr r0
/* 8035F0D0 0035C010  38 21 00 10 */	addi r1, r1, 0x10
/* 8035F0D4 0035C014  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game10KingChappy3ObjFv

.fn endDemoDrawOn__Q23efx22TKchYodareBaseChaseMtxFv, weak
/* 8035F0D8 0035C018  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035F0DC 0035C01C  7C 08 02 A6 */	mflr r0
/* 8035F0E0 0035C020  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035F0E4 0035C024  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035F0E8 0035C028  7C 7F 1B 78 */	mr r31, r3
/* 8035F0EC 0035C02C  88 03 00 0E */	lbz r0, 0xe(r3)
/* 8035F0F0 0035C030  38 7F 00 18 */	addi r3, r31, 0x18
/* 8035F0F4 0035C034  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 8035F0F8 0035C038  98 1F 00 0E */	stb r0, 0xe(r31)
/* 8035F0FC 0035C03C  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 8035F100 0035C040  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8035F104 0035C044  7D 89 03 A6 */	mtctr r12
/* 8035F108 0035C048  4E 80 04 21 */	bctrl 
/* 8035F10C 0035C04C  38 7F 00 34 */	addi r3, r31, 0x34
/* 8035F110 0035C050  81 9F 00 34 */	lwz r12, 0x34(r31)
/* 8035F114 0035C054  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8035F118 0035C058  7D 89 03 A6 */	mtctr r12
/* 8035F11C 0035C05C  4E 80 04 21 */	bctrl 
/* 8035F120 0035C060  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035F124 0035C064  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035F128 0035C068  7C 08 03 A6 */	mtlr r0
/* 8035F12C 0035C06C  38 21 00 10 */	addi r1, r1, 0x10
/* 8035F130 0035C070  4E 80 00 20 */	blr 
.endfn endDemoDrawOn__Q23efx22TKchYodareBaseChaseMtxFv

.fn initMouthSlots__Q34Game10KingChappy3ObjFv, global
/* 8035F134 0035C074  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8035F138 0035C078  7C 08 02 A6 */	mflr r0
/* 8035F13C 0035C07C  90 01 00 64 */	stw r0, 0x64(r1)
/* 8035F140 0035C080  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8035F144 0035C084  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8035F148 0035C088  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8035F14C 0035C08C  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8035F150 0035C090  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8035F154 0035C094  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8035F158 0035C098  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8035F15C 0035C09C  93 81 00 30 */	stw r28, 0x30(r1)
/* 8035F160 0035C0A0  3C 80 80 49 */	lis r4, lbl_8049161C@ha
/* 8035F164 0035C0A4  7C 7C 1B 78 */	mr r28, r3
/* 8035F168 0035C0A8  3B E4 16 1C */	addi r31, r4, lbl_8049161C@l
/* 8035F16C 0035C0AC  38 80 00 09 */	li r4, 9
/* 8035F170 0035C0B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035F174 0035C0B4  38 7C 02 C8 */	addi r3, r28, 0x2c8
/* 8035F178 0035C0B8  81 7F 00 04 */	lwz r11, 4(r31)
/* 8035F17C 0035C0BC  81 5F 00 08 */	lwz r10, 8(r31)
/* 8035F180 0035C0C0  81 3F 00 0C */	lwz r9, 0xc(r31)
/* 8035F184 0035C0C4  81 1F 00 10 */	lwz r8, 0x10(r31)
/* 8035F188 0035C0C8  80 FF 00 14 */	lwz r7, 0x14(r31)
/* 8035F18C 0035C0CC  80 DF 00 18 */	lwz r6, 0x18(r31)
/* 8035F190 0035C0D0  80 BF 00 1C */	lwz r5, 0x1c(r31)
/* 8035F194 0035C0D4  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 8035F198 0035C0D8  91 81 00 08 */	stw r12, 8(r1)
/* 8035F19C 0035C0DC  91 61 00 0C */	stw r11, 0xc(r1)
/* 8035F1A0 0035C0E0  91 41 00 10 */	stw r10, 0x10(r1)
/* 8035F1A4 0035C0E4  91 21 00 14 */	stw r9, 0x14(r1)
/* 8035F1A8 0035C0E8  91 01 00 18 */	stw r8, 0x18(r1)
/* 8035F1AC 0035C0EC  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 8035F1B0 0035C0F0  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8035F1B4 0035C0F4  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8035F1B8 0035C0F8  90 01 00 28 */	stw r0, 0x28(r1)
/* 8035F1BC 0035C0FC  4B DD 93 9D */	bl alloc__10MouthSlotsFi
/* 8035F1C0 0035C100  38 60 00 12 */	li r3, 0x12
/* 8035F1C4 0035C104  4B CC 4D E9 */	bl __nwa__FUl
/* 8035F1C8 0035C108  90 7C 03 3C */	stw r3, 0x33c(r28)
/* 8035F1CC 0035C10C  3B E1 00 08 */	addi r31, r1, 8
/* 8035F1D0 0035C110  C3 C2 03 CC */	lfs f30, lbl_8051E72C@sda21(r2)
/* 8035F1D4 0035C114  3B A0 00 00 */	li r29, 0
/* 8035F1D8 0035C118  3B C0 00 00 */	li r30, 0
/* 8035F1DC 0035C11C  48 00 00 50 */	b .L_8035F22C
.L_8035F1E0:
/* 8035F1E0 0035C120  80 BC 01 74 */	lwz r5, 0x174(r28)
/* 8035F1E4 0035C124  7F A4 EB 78 */	mr r4, r29
/* 8035F1E8 0035C128  80 DF 00 00 */	lwz r6, 0(r31)
/* 8035F1EC 0035C12C  38 7C 02 C8 */	addi r3, r28, 0x2c8
/* 8035F1F0 0035C130  4B DD 94 A1 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 8035F1F4 0035C134  C0 1C 01 F8 */	lfs f0, 0x1f8(r28)
/* 8035F1F8 0035C138  7F A4 EB 78 */	mr r4, r29
/* 8035F1FC 0035C13C  38 7C 02 C8 */	addi r3, r28, 0x2c8
/* 8035F200 0035C140  EF FE 00 32 */	fmuls f31, f30, f0
/* 8035F204 0035C144  4B DD 95 75 */	bl getSlot__10MouthSlotsFi
/* 8035F208 0035C148  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 8035F20C 0035C14C  80 9F 00 00 */	lwz r4, 0(r31)
/* 8035F210 0035C150  80 7C 01 74 */	lwz r3, 0x174(r28)
/* 8035F214 0035C154  48 0D FD A1 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 8035F218 0035C158  80 9C 03 3C */	lwz r4, 0x33c(r28)
/* 8035F21C 0035C15C  3B FF 00 04 */	addi r31, r31, 4
/* 8035F220 0035C160  3B BD 00 01 */	addi r29, r29, 1
/* 8035F224 0035C164  7C 64 F3 2E */	sthx r3, r4, r30
/* 8035F228 0035C168  3B DE 00 02 */	addi r30, r30, 2
.L_8035F22C:
/* 8035F22C 0035C16C  80 1C 02 C8 */	lwz r0, 0x2c8(r28)
/* 8035F230 0035C170  7C 1D 00 00 */	cmpw r29, r0
/* 8035F234 0035C174  41 80 FF AC */	blt .L_8035F1E0
/* 8035F238 0035C178  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8035F23C 0035C17C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8035F240 0035C180  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8035F244 0035C184  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8035F248 0035C188  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8035F24C 0035C18C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8035F250 0035C190  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8035F254 0035C194  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8035F258 0035C198  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8035F25C 0035C19C  7C 08 03 A6 */	mtlr r0
/* 8035F260 0035C1A0  38 21 00 60 */	addi r1, r1, 0x60
/* 8035F264 0035C1A4  4E 80 00 20 */	blr 
.endfn initMouthSlots__Q34Game10KingChappy3ObjFv

.fn eatBomb__Q34Game10KingChappy3ObjFv, global
/* 8035F268 0035C1A8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8035F26C 0035C1AC  7C 08 02 A6 */	mflr r0
/* 8035F270 0035C1B0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8035F274 0035C1B4  BF 01 00 20 */	stmw r24, 0x20(r1)
/* 8035F278 0035C1B8  7C 78 1B 78 */	mr r24, r3
/* 8035F27C 0035C1BC  3B C0 00 00 */	li r30, 0
/* 8035F280 0035C1C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F284 0035C1C4  81 8C 02 5C */	lwz r12, 0x25c(r12)
/* 8035F288 0035C1C8  7D 89 03 A6 */	mtctr r12
/* 8035F28C 0035C1CC  4E 80 04 21 */	bctrl 
/* 8035F290 0035C1D0  7C 60 1B 78 */	mr r0, r3
/* 8035F294 0035C1D4  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8035F298 0035C1D8  7C 1D 03 78 */	mr r29, r0
/* 8035F29C 0035C1DC  38 80 00 24 */	li r4, 0x24
/* 8035F2A0 0035C1E0  4B DA EA 05 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 8035F2A4 0035C1E4  7C 7C 1B 79 */	or. r28, r3, r3
/* 8035F2A8 0035C1E8  41 82 01 4C */	beq .L_8035F3F4
/* 8035F2AC 0035C1EC  3B 60 00 00 */	li r27, 0
/* 8035F2B0 0035C1F0  48 00 01 28 */	b .L_8035F3D8
.L_8035F2B4:
/* 8035F2B4 0035C1F4  7F 83 E3 78 */	mr r3, r28
/* 8035F2B8 0035C1F8  7F 64 DB 78 */	mr r4, r27
/* 8035F2BC 0035C1FC  81 9C 00 00 */	lwz r12, 0(r28)
/* 8035F2C0 0035C200  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8035F2C4 0035C204  7D 89 03 A6 */	mtctr r12
/* 8035F2C8 0035C208  4E 80 04 21 */	bctrl 
/* 8035F2CC 0035C20C  7C 7F 1B 78 */	mr r31, r3
/* 8035F2D0 0035C210  4B FE BE 89 */	bl canEat__Q34Game4Bomb3ObjFv
/* 8035F2D4 0035C214  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035F2D8 0035C218  41 82 00 FC */	beq .L_8035F3D4
/* 8035F2DC 0035C21C  7F E3 FB 78 */	mr r3, r31
/* 8035F2E0 0035C220  4B E4 02 A9 */	bl isStickToMouth__Q24Game8CreatureFv
/* 8035F2E4 0035C224  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035F2E8 0035C228  40 82 00 EC */	bne .L_8035F3D4
/* 8035F2EC 0035C22C  3B 40 00 00 */	li r26, 0
/* 8035F2F0 0035C230  48 00 00 D8 */	b .L_8035F3C8
.L_8035F2F4:
/* 8035F2F4 0035C234  7F A3 EB 78 */	mr r3, r29
/* 8035F2F8 0035C238  7F 44 D3 78 */	mr r4, r26
/* 8035F2FC 0035C23C  4B DD 94 7D */	bl getSlot__10MouthSlotsFi
/* 8035F300 0035C240  80 03 00 64 */	lwz r0, 0x64(r3)
/* 8035F304 0035C244  7C 79 1B 78 */	mr r25, r3
/* 8035F308 0035C248  28 00 00 00 */	cmplwi r0, 0
/* 8035F30C 0035C24C  40 82 00 B8 */	bne .L_8035F3C4
/* 8035F310 0035C250  38 81 00 14 */	addi r4, r1, 0x14
/* 8035F314 0035C254  4B DD 91 B5 */	bl "getPosition__13MouthCollPartFR10Vector3<f>"
/* 8035F318 0035C258  7F E4 FB 78 */	mr r4, r31
/* 8035F31C 0035C25C  38 61 00 08 */	addi r3, r1, 8
/* 8035F320 0035C260  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035F324 0035C264  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035F328 0035C268  7D 89 03 A6 */	mtctr r12
/* 8035F32C 0035C26C  4E 80 04 21 */	bctrl 
/* 8035F330 0035C270  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8035F334 0035C274  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8035F338 0035C278  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 8035F33C 0035C27C  EC 81 00 28 */	fsubs f4, f1, f0
/* 8035F340 0035C280  C0 41 00 08 */	lfs f2, 8(r1)
/* 8035F344 0035C284  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8035F348 0035C288  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8035F34C 0035C28C  EC 63 10 28 */	fsubs f3, f3, f2
/* 8035F350 0035C290  EC 84 01 32 */	fmuls f4, f4, f4
/* 8035F354 0035C294  EC 41 00 28 */	fsubs f2, f1, f0
/* 8035F358 0035C298  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035F35C 0035C29C  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 8035F360 0035C2A0  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8035F364 0035C2A4  EC 22 08 2A */	fadds f1, f2, f1
/* 8035F368 0035C2A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035F36C 0035C2AC  40 81 00 14 */	ble .L_8035F380
/* 8035F370 0035C2B0  40 81 00 14 */	ble .L_8035F384
/* 8035F374 0035C2B4  FC 00 08 34 */	frsqrte f0, f1
/* 8035F378 0035C2B8  EC 20 00 72 */	fmuls f1, f0, f1
/* 8035F37C 0035C2BC  48 00 00 08 */	b .L_8035F384
.L_8035F380:
/* 8035F380 0035C2C0  FC 20 00 90 */	fmr f1, f0
.L_8035F384:
/* 8035F384 0035C2C4  C0 19 00 1C */	lfs f0, 0x1c(r25)
/* 8035F388 0035C2C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035F38C 0035C2CC  40 80 00 38 */	bge .L_8035F3C4
/* 8035F390 0035C2D0  7F E3 FB 78 */	mr r3, r31
/* 8035F394 0035C2D4  7F 04 C3 78 */	mr r4, r24
/* 8035F398 0035C2D8  7F 25 CB 78 */	mr r5, r25
/* 8035F39C 0035C2DC  4B E3 FC CD */	bl startStickMouth__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
/* 8035F3A0 0035C2E0  80 7F 02 D4 */	lwz r3, 0x2d4(r31)
/* 8035F3A4 0035C2E4  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F3A8 0035C2E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035F3AC 0035C2EC  7D 89 03 A6 */	mtctr r12
/* 8035F3B0 0035C2F0  4E 80 04 21 */	bctrl 
/* 8035F3B4 0035C2F4  7F E3 FB 78 */	mr r3, r31
/* 8035F3B8 0035C2F8  4B DA 7F 29 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 8035F3BC 0035C2FC  3B DE 00 01 */	addi r30, r30, 1
/* 8035F3C0 0035C300  48 00 00 14 */	b .L_8035F3D4
.L_8035F3C4:
/* 8035F3C4 0035C304  3B 5A 00 01 */	addi r26, r26, 1
.L_8035F3C8:
/* 8035F3C8 0035C308  80 1D 00 00 */	lwz r0, 0(r29)
/* 8035F3CC 0035C30C  7C 1A 00 00 */	cmpw r26, r0
/* 8035F3D0 0035C310  41 80 FF 24 */	blt .L_8035F2F4
.L_8035F3D4:
/* 8035F3D4 0035C314  3B 7B 00 01 */	addi r27, r27, 1
.L_8035F3D8:
/* 8035F3D8 0035C318  7F 83 E3 78 */	mr r3, r28
/* 8035F3DC 0035C31C  81 9C 00 00 */	lwz r12, 0(r28)
/* 8035F3E0 0035C320  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 8035F3E4 0035C324  7D 89 03 A6 */	mtctr r12
/* 8035F3E8 0035C328  4E 80 04 21 */	bctrl 
/* 8035F3EC 0035C32C  7C 1B 18 00 */	cmpw r27, r3
/* 8035F3F0 0035C330  41 80 FE C4 */	blt .L_8035F2B4
.L_8035F3F4:
/* 8035F3F4 0035C334  7F C3 F3 78 */	mr r3, r30
/* 8035F3F8 0035C338  BB 01 00 20 */	lmw r24, 0x20(r1)
/* 8035F3FC 0035C33C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8035F400 0035C340  7C 08 03 A6 */	mtlr r0
/* 8035F404 0035C344  38 21 00 40 */	addi r1, r1, 0x40
/* 8035F408 0035C348  4E 80 00 20 */	blr 
.endfn eatBomb__Q34Game10KingChappy3ObjFv

.fn getMouthSlots__Q34Game10KingChappy3ObjFv, weak
/* 8035F40C 0035C34C  38 63 02 C8 */	addi r3, r3, 0x2c8
/* 8035F410 0035C350  4E 80 00 20 */	blr 
.endfn getMouthSlots__Q34Game10KingChappy3ObjFv

.fn getPikminInMouth__Q34Game10KingChappy3ObjFb, global
/* 8035F414 0035C354  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8035F418 0035C358  7C 08 02 A6 */	mflr r0
/* 8035F41C 0035C35C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8035F420 0035C360  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8035F424 0035C364  3B E0 00 00 */	li r31, 0
/* 8035F428 0035C368  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8035F42C 0035C36C  7C 9E 23 78 */	mr r30, r4
/* 8035F430 0035C370  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8035F434 0035C374  7C 7D 1B 78 */	mr r29, r3
/* 8035F438 0035C378  7F A4 EB 78 */	mr r4, r29
/* 8035F43C 0035C37C  38 61 00 24 */	addi r3, r1, 0x24
/* 8035F440 0035C380  93 81 00 40 */	stw r28, 0x40(r1)
/* 8035F444 0035C384  4B E4 08 19 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 8035F448 0035C388  38 00 00 00 */	li r0, 0
/* 8035F44C 0035C38C  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 8035F450 0035C390  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 8035F454 0035C394  38 61 00 24 */	addi r3, r1, 0x24
/* 8035F458 0035C398  28 00 00 00 */	cmplwi r0, 0
/* 8035F45C 0035C39C  90 81 00 14 */	stw r4, 0x14(r1)
/* 8035F460 0035C3A0  90 01 00 20 */	stw r0, 0x20(r1)
/* 8035F464 0035C3A4  90 01 00 18 */	stw r0, 0x18(r1)
/* 8035F468 0035C3A8  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8035F46C 0035C3AC  40 82 00 1C */	bne .L_8035F488
/* 8035F470 0035C3B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F474 0035C3B4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035F478 0035C3B8  7D 89 03 A6 */	mtctr r12
/* 8035F47C 0035C3BC  4E 80 04 21 */	bctrl 
/* 8035F480 0035C3C0  90 61 00 18 */	stw r3, 0x18(r1)
/* 8035F484 0035C3C4  48 00 02 08 */	b .L_8035F68C
.L_8035F488:
/* 8035F488 0035C3C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F48C 0035C3CC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035F490 0035C3D0  7D 89 03 A6 */	mtctr r12
/* 8035F494 0035C3D4  4E 80 04 21 */	bctrl 
/* 8035F498 0035C3D8  90 61 00 18 */	stw r3, 0x18(r1)
/* 8035F49C 0035C3DC  48 00 00 58 */	b .L_8035F4F4
.L_8035F4A0:
/* 8035F4A0 0035C3E0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8035F4A4 0035C3E4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8035F4A8 0035C3E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F4AC 0035C3EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035F4B0 0035C3F0  7D 89 03 A6 */	mtctr r12
/* 8035F4B4 0035C3F4  4E 80 04 21 */	bctrl 
/* 8035F4B8 0035C3F8  7C 64 1B 78 */	mr r4, r3
/* 8035F4BC 0035C3FC  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8035F4C0 0035C400  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F4C4 0035C404  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035F4C8 0035C408  7D 89 03 A6 */	mtctr r12
/* 8035F4CC 0035C40C  4E 80 04 21 */	bctrl 
/* 8035F4D0 0035C410  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035F4D4 0035C414  40 82 01 B8 */	bne .L_8035F68C
/* 8035F4D8 0035C418  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8035F4DC 0035C41C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8035F4E0 0035C420  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F4E4 0035C424  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035F4E8 0035C428  7D 89 03 A6 */	mtctr r12
/* 8035F4EC 0035C42C  4E 80 04 21 */	bctrl 
/* 8035F4F0 0035C430  90 61 00 18 */	stw r3, 0x18(r1)
.L_8035F4F4:
/* 8035F4F4 0035C434  81 81 00 14 */	lwz r12, 0x14(r1)
/* 8035F4F8 0035C438  38 61 00 14 */	addi r3, r1, 0x14
/* 8035F4FC 0035C43C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035F500 0035C440  7D 89 03 A6 */	mtctr r12
/* 8035F504 0035C444  4E 80 04 21 */	bctrl 
/* 8035F508 0035C448  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035F50C 0035C44C  41 82 FF 94 */	beq .L_8035F4A0
/* 8035F510 0035C450  48 00 01 7C */	b .L_8035F68C
.L_8035F514:
/* 8035F514 0035C454  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8035F518 0035C458  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F51C 0035C45C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035F520 0035C460  7D 89 03 A6 */	mtctr r12
/* 8035F524 0035C464  4E 80 04 21 */	bctrl 
/* 8035F528 0035C468  7C 7C 1B 78 */	mr r28, r3
/* 8035F52C 0035C46C  4B E4 00 5D */	bl isStickToMouth__Q24Game8CreatureFv
/* 8035F530 0035C470  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035F534 0035C474  41 82 00 9C */	beq .L_8035F5D0
/* 8035F538 0035C478  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8035F53C 0035C47C  41 82 00 90 */	beq .L_8035F5CC
/* 8035F540 0035C480  7F 83 E3 78 */	mr r3, r28
/* 8035F544 0035C484  81 9C 00 00 */	lwz r12, 0(r28)
/* 8035F548 0035C488  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035F54C 0035C48C  7D 89 03 A6 */	mtctr r12
/* 8035F550 0035C490  4E 80 04 21 */	bctrl 
/* 8035F554 0035C494  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035F558 0035C498  41 82 00 44 */	beq .L_8035F59C
/* 8035F55C 0035C49C  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 8035F560 0035C4A0  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractKill@ha
/* 8035F564 0035C4A4  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 8035F568 0035C4A8  38 00 00 00 */	li r0, 0
/* 8035F56C 0035C4AC  90 81 00 08 */	stw r4, 8(r1)
/* 8035F570 0035C4B0  38 A3 4D 98 */	addi r5, r3, __vt__Q24Game12InteractKill@l
/* 8035F574 0035C4B4  7F 83 E3 78 */	mr r3, r28
/* 8035F578 0035C4B8  38 81 00 08 */	addi r4, r1, 8
/* 8035F57C 0035C4BC  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8035F580 0035C4C0  90 A1 00 08 */	stw r5, 8(r1)
/* 8035F584 0035C4C4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8035F588 0035C4C8  81 9C 00 00 */	lwz r12, 0(r28)
/* 8035F58C 0035C4CC  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8035F590 0035C4D0  7D 89 03 A6 */	mtctr r12
/* 8035F594 0035C4D4  4E 80 04 21 */	bctrl 
/* 8035F598 0035C4D8  48 00 00 38 */	b .L_8035F5D0
.L_8035F59C:
/* 8035F59C 0035C4DC  7F 83 E3 78 */	mr r3, r28
/* 8035F5A0 0035C4E0  81 9C 00 00 */	lwz r12, 0(r28)
/* 8035F5A4 0035C4E4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8035F5A8 0035C4E8  7D 89 03 A6 */	mtctr r12
/* 8035F5AC 0035C4EC  4E 80 04 21 */	bctrl 
/* 8035F5B0 0035C4F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035F5B4 0035C4F4  41 82 00 1C */	beq .L_8035F5D0
/* 8035F5B8 0035C4F8  7F 83 E3 78 */	mr r3, r28
/* 8035F5BC 0035C4FC  38 80 00 00 */	li r4, 0
/* 8035F5C0 0035C500  4B DD BB 31 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 8035F5C4 0035C504  3B FF 00 01 */	addi r31, r31, 1
/* 8035F5C8 0035C508  48 00 00 08 */	b .L_8035F5D0
.L_8035F5CC:
/* 8035F5CC 0035C50C  3B FF 00 01 */	addi r31, r31, 1
.L_8035F5D0:
/* 8035F5D0 0035C510  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8035F5D4 0035C514  28 00 00 00 */	cmplwi r0, 0
/* 8035F5D8 0035C518  40 82 00 24 */	bne .L_8035F5FC
/* 8035F5DC 0035C51C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8035F5E0 0035C520  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8035F5E4 0035C524  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F5E8 0035C528  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035F5EC 0035C52C  7D 89 03 A6 */	mtctr r12
/* 8035F5F0 0035C530  4E 80 04 21 */	bctrl 
/* 8035F5F4 0035C534  90 61 00 18 */	stw r3, 0x18(r1)
/* 8035F5F8 0035C538  48 00 00 94 */	b .L_8035F68C
.L_8035F5FC:
/* 8035F5FC 0035C53C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8035F600 0035C540  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8035F604 0035C544  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F608 0035C548  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035F60C 0035C54C  7D 89 03 A6 */	mtctr r12
/* 8035F610 0035C550  4E 80 04 21 */	bctrl 
/* 8035F614 0035C554  90 61 00 18 */	stw r3, 0x18(r1)
/* 8035F618 0035C558  48 00 00 58 */	b .L_8035F670
.L_8035F61C:
/* 8035F61C 0035C55C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8035F620 0035C560  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8035F624 0035C564  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F628 0035C568  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035F62C 0035C56C  7D 89 03 A6 */	mtctr r12
/* 8035F630 0035C570  4E 80 04 21 */	bctrl 
/* 8035F634 0035C574  7C 64 1B 78 */	mr r4, r3
/* 8035F638 0035C578  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8035F63C 0035C57C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F640 0035C580  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035F644 0035C584  7D 89 03 A6 */	mtctr r12
/* 8035F648 0035C588  4E 80 04 21 */	bctrl 
/* 8035F64C 0035C58C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035F650 0035C590  40 82 00 3C */	bne .L_8035F68C
/* 8035F654 0035C594  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8035F658 0035C598  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8035F65C 0035C59C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F660 0035C5A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035F664 0035C5A4  7D 89 03 A6 */	mtctr r12
/* 8035F668 0035C5A8  4E 80 04 21 */	bctrl 
/* 8035F66C 0035C5AC  90 61 00 18 */	stw r3, 0x18(r1)
.L_8035F670:
/* 8035F670 0035C5B0  81 81 00 14 */	lwz r12, 0x14(r1)
/* 8035F674 0035C5B4  38 61 00 14 */	addi r3, r1, 0x14
/* 8035F678 0035C5B8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035F67C 0035C5BC  7D 89 03 A6 */	mtctr r12
/* 8035F680 0035C5C0  4E 80 04 21 */	bctrl 
/* 8035F684 0035C5C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035F688 0035C5C8  41 82 FF 94 */	beq .L_8035F61C
.L_8035F68C:
/* 8035F68C 0035C5CC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8035F690 0035C5D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8035F694 0035C5D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035F698 0035C5D8  7D 89 03 A6 */	mtctr r12
/* 8035F69C 0035C5DC  4E 80 04 21 */	bctrl 
/* 8035F6A0 0035C5E0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8035F6A4 0035C5E4  7C 04 18 40 */	cmplw r4, r3
/* 8035F6A8 0035C5E8  40 82 FE 6C */	bne .L_8035F514
/* 8035F6AC 0035C5EC  38 61 00 24 */	addi r3, r1, 0x24
/* 8035F6B0 0035C5F0  38 80 FF FF */	li r4, -1
/* 8035F6B4 0035C5F4  4B E4 06 B1 */	bl __dt__Q24Game8StickersFv
/* 8035F6B8 0035C5F8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8035F6BC 0035C5FC  7F E3 FB 78 */	mr r3, r31
/* 8035F6C0 0035C600  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8035F6C4 0035C604  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8035F6C8 0035C608  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8035F6CC 0035C60C  83 81 00 40 */	lwz r28, 0x40(r1)
/* 8035F6D0 0035C610  7C 08 03 A6 */	mtlr r0
/* 8035F6D4 0035C614  38 21 00 50 */	addi r1, r1, 0x50
/* 8035F6D8 0035C618  4E 80 00 20 */	blr 
.endfn getPikminInMouth__Q34Game10KingChappy3ObjFb

.fn "getTonguePosVel__Q34Game10KingChappy3ObjFR10Vector3<f>R10Vector3<f>", global
/* 8035F6DC 0035C61C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8035F6E0 0035C620  7C 08 02 A6 */	mflr r0
/* 8035F6E4 0035C624  90 01 00 24 */	stw r0, 0x24(r1)
/* 8035F6E8 0035C628  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8035F6EC 0035C62C  7C BF 2B 78 */	mr r31, r5
/* 8035F6F0 0035C630  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8035F6F4 0035C634  7C 9E 23 78 */	mr r30, r4
/* 8035F6F8 0035C638  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8035F6FC 0035C63C  7C 7D 1B 78 */	mr r29, r3
/* 8035F700 0035C640  80 63 02 D8 */	lwz r3, 0x2d8(r3)
/* 8035F704 0035C644  48 0C A1 9D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8035F708 0035C648  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8035F70C 0035C64C  D0 1E 00 00 */	stfs f0, 0(r30)
/* 8035F710 0035C650  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 8035F714 0035C654  D0 1E 00 04 */	stfs f0, 4(r30)
/* 8035F718 0035C658  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 8035F71C 0035C65C  D0 1E 00 08 */	stfs f0, 8(r30)
/* 8035F720 0035C660  80 7D 02 DC */	lwz r3, 0x2dc(r29)
/* 8035F724 0035C664  48 0C A1 7D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8035F728 0035C668  C0 3E 00 00 */	lfs f1, 0(r30)
/* 8035F72C 0035C66C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8035F730 0035C670  C0 7E 00 04 */	lfs f3, 4(r30)
/* 8035F734 0035C674  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 8035F738 0035C678  EC 01 00 28 */	fsubs f0, f1, f0
/* 8035F73C 0035C67C  C0 BE 00 08 */	lfs f5, 8(r30)
/* 8035F740 0035C680  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 8035F744 0035C684  EC 43 10 28 */	fsubs f2, f3, f2
/* 8035F748 0035C688  C0 22 03 2C */	lfs f1, lbl_8051E68C@sda21(r2)
/* 8035F74C 0035C68C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8035F750 0035C690  EC 05 20 28 */	fsubs f0, f5, f4
/* 8035F754 0035C694  D0 5F 00 04 */	stfs f2, 4(r31)
/* 8035F758 0035C698  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8035F75C 0035C69C  C0 7F 00 00 */	lfs f3, 0(r31)
/* 8035F760 0035C6A0  C0 5F 00 04 */	lfs f2, 4(r31)
/* 8035F764 0035C6A4  C0 9F 00 08 */	lfs f4, 8(r31)
/* 8035F768 0035C6A8  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8035F76C 0035C6AC  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8035F770 0035C6B0  EC 84 01 32 */	fmuls f4, f4, f4
/* 8035F774 0035C6B4  EC 00 10 2A */	fadds f0, f0, f2
/* 8035F778 0035C6B8  EC 04 00 2A */	fadds f0, f4, f0
/* 8035F77C 0035C6BC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8035F780 0035C6C0  40 81 00 20 */	ble .L_8035F7A0
/* 8035F784 0035C6C4  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 8035F788 0035C6C8  EC 44 00 2A */	fadds f2, f4, f0
/* 8035F78C 0035C6CC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8035F790 0035C6D0  40 81 00 14 */	ble .L_8035F7A4
/* 8035F794 0035C6D4  FC 00 10 34 */	frsqrte f0, f2
/* 8035F798 0035C6D8  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8035F79C 0035C6DC  48 00 00 08 */	b .L_8035F7A4
.L_8035F7A0:
/* 8035F7A0 0035C6E0  FC 40 08 90 */	fmr f2, f1
.L_8035F7A4:
/* 8035F7A4 0035C6E4  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035F7A8 0035C6E8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8035F7AC 0035C6EC  40 81 00 30 */	ble .L_8035F7DC
/* 8035F7B0 0035C6F0  C0 22 03 58 */	lfs f1, lbl_8051E6B8@sda21(r2)
/* 8035F7B4 0035C6F4  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8035F7B8 0035C6F8  EC 21 10 24 */	fdivs f1, f1, f2
/* 8035F7BC 0035C6FC  EC 00 00 72 */	fmuls f0, f0, f1
/* 8035F7C0 0035C700  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8035F7C4 0035C704  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8035F7C8 0035C708  EC 00 00 72 */	fmuls f0, f0, f1
/* 8035F7CC 0035C70C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8035F7D0 0035C710  C0 1F 00 08 */	lfs f0, 8(r31)
/* 8035F7D4 0035C714  EC 00 00 72 */	fmuls f0, f0, f1
/* 8035F7D8 0035C718  D0 1F 00 08 */	stfs f0, 8(r31)
.L_8035F7DC:
/* 8035F7DC 0035C71C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8035F7E0 0035C720  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8035F7E4 0035C724  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8035F7E8 0035C728  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8035F7EC 0035C72C  7C 08 03 A6 */	mtlr r0
/* 8035F7F0 0035C730  38 21 00 20 */	addi r1, r1, 0x20
/* 8035F7F4 0035C734  4E 80 00 20 */	blr 
.endfn "getTonguePosVel__Q34Game10KingChappy3ObjFR10Vector3<f>R10Vector3<f>"

.fn setNextGoal__Q34Game10KingChappy3ObjFv, global
/* 8035F7F8 0035C738  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8035F7FC 0035C73C  7C 08 02 A6 */	mflr r0
/* 8035F800 0035C740  90 01 00 64 */	stw r0, 0x64(r1)
/* 8035F804 0035C744  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8035F808 0035C748  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8035F80C 0035C74C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8035F810 0035C750  7C 7F 1B 78 */	mr r31, r3
/* 8035F814 0035C754  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 8035F818 0035C758  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 8035F81C 0035C75C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8035F820 0035C760  EC 21 00 28 */	fsubs f1, f1, f0
/* 8035F824 0035C764  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8035F828 0035C768  C0 63 01 98 */	lfs f3, 0x198(r3)
/* 8035F82C 0035C76C  C3 E4 03 5C */	lfs f31, 0x35c(r4)
/* 8035F830 0035C770  EC 40 18 28 */	fsubs f2, f0, f3
/* 8035F834 0035C774  EC 21 00 72 */	fmuls f1, f1, f1
/* 8035F838 0035C778  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 8035F83C 0035C77C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8035F840 0035C780  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035F844 0035C784  40 81 00 24 */	ble .L_8035F868
/* 8035F848 0035C788  D0 7F 02 BC */	stfs f3, 0x2bc(r31)
/* 8035F84C 0035C78C  38 80 00 01 */	li r4, 1
/* 8035F850 0035C790  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8035F854 0035C794  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 8035F858 0035C798  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8035F85C 0035C79C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8035F860 0035C7A0  48 00 18 3D */	bl checkTurn__Q34Game10KingChappy3ObjFb
/* 8035F864 0035C7A4  48 00 01 68 */	b .L_8035F9CC
.L_8035F868:
/* 8035F868 0035C7A8  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 8035F86C 0035C7AC  28 04 00 00 */	cmplwi r4, 0
/* 8035F870 0035C7B0  41 82 00 34 */	beq .L_8035F8A4
/* 8035F874 0035C7B4  81 84 00 00 */	lwz r12, 0(r4)
/* 8035F878 0035C7B8  38 61 00 08 */	addi r3, r1, 8
/* 8035F87C 0035C7BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035F880 0035C7C0  7D 89 03 A6 */	mtctr r12
/* 8035F884 0035C7C4  4E 80 04 21 */	bctrl 
/* 8035F888 0035C7C8  C0 01 00 08 */	lfs f0, 8(r1)
/* 8035F88C 0035C7CC  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 8035F890 0035C7D0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8035F894 0035C7D4  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 8035F898 0035C7D8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8035F89C 0035C7DC  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8035F8A0 0035C7E0  48 00 01 2C */	b .L_8035F9CC
.L_8035F8A4:
/* 8035F8A4 0035C7E4  4B D6 9C FD */	bl rand
/* 8035F8A8 0035C7E8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8035F8AC 0035C7EC  3C 00 43 30 */	lis r0, 0x4330
/* 8035F8B0 0035C7F0  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8035F8B4 0035C7F4  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8035F8B8 0035C7F8  90 01 00 18 */	stw r0, 0x18(r1)
/* 8035F8BC 0035C7FC  C8 62 03 E0 */	lfd f3, lbl_8051E740@sda21(r2)
/* 8035F8C0 0035C800  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 8035F8C4 0035C804  C0 42 03 D0 */	lfs f2, lbl_8051E730@sda21(r2)
/* 8035F8C8 0035C808  EC 61 18 28 */	fsubs f3, f1, f3
/* 8035F8CC 0035C80C  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 8035F8D0 0035C810  C0 22 03 D4 */	lfs f1, lbl_8051E734@sda21(r2)
/* 8035F8D4 0035C814  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8035F8D8 0035C818  EC 43 10 24 */	fdivs f2, f3, f2
/* 8035F8DC 0035C81C  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 8035F8E0 0035C820  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8035F8E4 0035C824  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8035F8E8 0035C828  EC 01 10 2A */	fadds f0, f1, f2
/* 8035F8EC 0035C82C  EF FF 00 32 */	fmuls f31, f31, f0
/* 8035F8F0 0035C830  4B D6 9C B1 */	bl rand
/* 8035F8F4 0035C834  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8035F8F8 0035C838  3C 00 43 30 */	lis r0, 0x4330
/* 8035F8FC 0035C83C  90 61 00 24 */	stw r3, 0x24(r1)
/* 8035F900 0035C840  C8 62 03 E0 */	lfd f3, lbl_8051E740@sda21(r2)
/* 8035F904 0035C844  90 01 00 20 */	stw r0, 0x20(r1)
/* 8035F908 0035C848  C0 42 03 D0 */	lfs f2, lbl_8051E730@sda21(r2)
/* 8035F90C 0035C84C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8035F910 0035C850  C0 22 03 D8 */	lfs f1, lbl_8051E738@sda21(r2)
/* 8035F914 0035C854  EC 60 18 28 */	fsubs f3, f0, f3
/* 8035F918 0035C858  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035F91C 0035C85C  EC 43 10 24 */	fdivs f2, f3, f2
/* 8035F920 0035C860  EC 61 00 B2 */	fmuls f3, f1, f2
/* 8035F924 0035C864  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8035F928 0035C868  40 80 00 30 */	bge .L_8035F958
/* 8035F92C 0035C86C  C0 02 03 50 */	lfs f0, lbl_8051E6B0@sda21(r2)
/* 8035F930 0035C870  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8035F934 0035C874  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8035F938 0035C878  EC 03 00 32 */	fmuls f0, f3, f0
/* 8035F93C 0035C87C  FC 00 00 1E */	fctiwz f0, f0
/* 8035F940 0035C880  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8035F944 0035C884  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8035F948 0035C888  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8035F94C 0035C88C  7C 03 04 2E */	lfsx f0, r3, r0
/* 8035F950 0035C890  FC 40 00 50 */	fneg f2, f0
/* 8035F954 0035C894  48 00 00 28 */	b .L_8035F97C
.L_8035F958:
/* 8035F958 0035C898  C0 02 03 54 */	lfs f0, lbl_8051E6B4@sda21(r2)
/* 8035F95C 0035C89C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8035F960 0035C8A0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8035F964 0035C8A4  EC 03 00 32 */	fmuls f0, f3, f0
/* 8035F968 0035C8A8  FC 00 00 1E */	fctiwz f0, f0
/* 8035F96C 0035C8AC  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8035F970 0035C8B0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8035F974 0035C8B4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8035F978 0035C8B8  7C 43 04 2E */	lfsx f2, r3, r0
.L_8035F97C:
/* 8035F97C 0035C8BC  C0 3F 02 BC */	lfs f1, 0x2bc(r31)
/* 8035F980 0035C8C0  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035F984 0035C8C4  EC 3F 08 BA */	fmadds f1, f31, f2, f1
/* 8035F988 0035C8C8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8035F98C 0035C8CC  D0 3F 02 BC */	stfs f1, 0x2bc(r31)
/* 8035F990 0035C8D0  40 80 00 08 */	bge .L_8035F998
/* 8035F994 0035C8D4  FC 60 18 50 */	fneg f3, f3
.L_8035F998:
/* 8035F998 0035C8D8  C0 22 03 54 */	lfs f1, lbl_8051E6B4@sda21(r2)
/* 8035F99C 0035C8DC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8035F9A0 0035C8E0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8035F9A4 0035C8E4  C0 1F 02 C4 */	lfs f0, 0x2c4(r31)
/* 8035F9A8 0035C8E8  EC 23 00 72 */	fmuls f1, f3, f1
/* 8035F9AC 0035C8EC  FC 20 08 1E */	fctiwz f1, f1
/* 8035F9B0 0035C8F0  D8 21 00 38 */	stfd f1, 0x38(r1)
/* 8035F9B4 0035C8F4  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8035F9B8 0035C8F8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8035F9BC 0035C8FC  7C 63 02 14 */	add r3, r3, r0
/* 8035F9C0 0035C900  C0 23 00 04 */	lfs f1, 4(r3)
/* 8035F9C4 0035C904  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 8035F9C8 0035C908  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
.L_8035F9CC:
/* 8035F9CC 0035C90C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8035F9D0 0035C910  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8035F9D4 0035C914  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8035F9D8 0035C918  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8035F9DC 0035C91C  7C 08 03 A6 */	mtlr r0
/* 8035F9E0 0035C920  38 21 00 60 */	addi r1, r1, 0x60
/* 8035F9E4 0035C924  4E 80 00 20 */	blr 
.endfn setNextGoal__Q34Game10KingChappy3ObjFv

.fn searchTarget__Q34Game10KingChappy3ObjFv, global
/* 8035F9E8 0035C928  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 8035F9EC 0035C92C  7C 08 02 A6 */	mflr r0
/* 8035F9F0 0035C930  90 01 01 04 */	stw r0, 0x104(r1)
/* 8035F9F4 0035C934  DB E1 00 F0 */	stfd f31, 0xf0(r1)
/* 8035F9F8 0035C938  F3 E1 00 F8 */	psq_st f31, 248(r1), 0, qr0
/* 8035F9FC 0035C93C  DB C1 00 E0 */	stfd f30, 0xe0(r1)
/* 8035FA00 0035C940  F3 C1 00 E8 */	psq_st f30, 232(r1), 0, qr0
/* 8035FA04 0035C944  DB A1 00 D0 */	stfd f29, 0xd0(r1)
/* 8035FA08 0035C948  F3 A1 00 D8 */	psq_st f29, 216(r1), 0, qr0
/* 8035FA0C 0035C94C  DB 81 00 C0 */	stfd f28, 0xc0(r1)
/* 8035FA10 0035C950  F3 81 00 C8 */	psq_st f28, 200(r1), 0, qr0
/* 8035FA14 0035C954  DB 61 00 B0 */	stfd f27, 0xb0(r1)
/* 8035FA18 0035C958  F3 61 00 B8 */	psq_st f27, 184(r1), 0, qr0
/* 8035FA1C 0035C95C  DB 41 00 A0 */	stfd f26, 0xa0(r1)
/* 8035FA20 0035C960  F3 41 00 A8 */	psq_st f26, 168(r1), 0, qr0
/* 8035FA24 0035C964  DB 21 00 90 */	stfd f25, 0x90(r1)
/* 8035FA28 0035C968  F3 21 00 98 */	psq_st f25, 152(r1), 0, qr0
/* 8035FA2C 0035C96C  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8035FA30 0035C970  93 C1 00 88 */	stw r30, 0x88(r1)
/* 8035FA34 0035C974  93 A1 00 84 */	stw r29, 0x84(r1)
/* 8035FA38 0035C978  7C 7F 1B 78 */	mr r31, r3
/* 8035FA3C 0035C97C  38 00 00 00 */	li r0, 0
/* 8035FA40 0035C980  90 03 02 30 */	stw r0, 0x230(r3)
/* 8035FA44 0035C984  80 03 02 F0 */	lwz r0, 0x2f0(r3)
/* 8035FA48 0035C988  2C 00 00 00 */	cmpwi r0, 0
/* 8035FA4C 0035C98C  41 81 04 48 */	bgt .L_8035FE94
/* 8035FA50 0035C990  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8035FA54 0035C994  88 04 0B C9 */	lbz r0, 0xbc9(r4)
/* 8035FA58 0035C998  28 00 00 00 */	cmplwi r0, 0
/* 8035FA5C 0035C99C  40 82 04 38 */	bne .L_8035FE94
/* 8035FA60 0035C9A0  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 8035FA64 0035C9A4  C0 1F 02 BC */	lfs f0, 0x2bc(r31)
/* 8035FA68 0035C9A8  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8035FA6C 0035C9AC  40 82 00 28 */	bne .L_8035FA94
/* 8035FA70 0035C9B0  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 8035FA74 0035C9B4  C0 1F 02 C4 */	lfs f0, 0x2c4(r31)
/* 8035FA78 0035C9B8  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8035FA7C 0035C9BC  40 82 00 18 */	bne .L_8035FA94
/* 8035FA80 0035C9C0  C0 22 03 E8 */	lfs f1, lbl_8051E748@sda21(r2)
/* 8035FA84 0035C9C4  48 00 04 65 */	bl isOutOfTerritory__Q34Game10KingChappy3ObjFf
/* 8035FA88 0035C9C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035FA8C 0035C9CC  41 82 00 08 */	beq .L_8035FA94
/* 8035FA90 0035C9D0  48 00 04 04 */	b .L_8035FE94
.L_8035FA94:
/* 8035FA94 0035C9D4  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 8035FA98 0035C9D8  7F E3 FB 78 */	mr r3, r31
/* 8035FA9C 0035C9DC  C0 62 03 F0 */	lfs f3, lbl_8051E750@sda21(r2)
/* 8035FAA0 0035C9E0  38 81 00 08 */	addi r4, r1, 8
/* 8035FAA4 0035C9E4  C0 26 04 4C */	lfs f1, 0x44c(r6)
/* 8035FAA8 0035C9E8  38 A0 00 00 */	li r5, 0
/* 8035FAAC 0035C9EC  C0 46 04 9C */	lfs f2, 0x49c(r6)
/* 8035FAB0 0035C9F0  EC 01 00 72 */	fmuls f0, f1, f1
/* 8035FAB4 0035C9F4  C0 82 03 EC */	lfs f4, lbl_8051E74C@sda21(r2)
/* 8035FAB8 0035C9F8  D0 21 00 08 */	stfs f1, 8(r1)
/* 8035FABC 0035C9FC  EC 23 00 B2 */	fmuls f1, f3, f2
/* 8035FAC0 0035CA00  D0 01 00 08 */	stfs f0, 8(r1)
/* 8035FAC4 0035CA04  EF E4 00 72 */	fmuls f31, f4, f1
/* 8035FAC8 0035CA08  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 8035FACC 0035CA0C  C0 26 04 9C */	lfs f1, 0x49c(r6)
/* 8035FAD0 0035CA10  C0 46 04 4C */	lfs f2, 0x44c(r6)
/* 8035FAD4 0035CA14  4B DB 2C 21 */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
/* 8035FAD8 0035CA18  90 7F 02 30 */	stw r3, 0x230(r31)
/* 8035FADC 0035CA1C  3C 60 80 4B */	lis r3, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 8035FAE0 0035CA20  38 00 00 00 */	li r0, 0
/* 8035FAE4 0035CA24  C0 02 03 F4 */	lfs f0, lbl_8051E754@sda21(r2)
/* 8035FAE8 0035CA28  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8035FAEC 0035CA2C  28 00 00 00 */	cmplwi r0, 0
/* 8035FAF0 0035CA30  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8035FAF4 0035CA34  38 83 BC 9C */	addi r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
/* 8035FAF8 0035CA38  C0 45 08 E4 */	lfs f2, 0x8e4(r5)
/* 8035FAFC 0035CA3C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8035FB00 0035CA40  EF 81 00 28 */	fsubs f28, f1, f0
/* 8035FB04 0035CA44  EF C2 00 B2 */	fmuls f30, f2, f2
/* 8035FB08 0035CA48  90 81 00 6C */	stw r4, 0x6c(r1)
/* 8035FB0C 0035CA4C  EF A0 08 2A */	fadds f29, f0, f1
/* 8035FB10 0035CA50  90 01 00 78 */	stw r0, 0x78(r1)
/* 8035FB14 0035CA54  90 01 00 70 */	stw r0, 0x70(r1)
/* 8035FB18 0035CA58  90 61 00 74 */	stw r3, 0x74(r1)
/* 8035FB1C 0035CA5C  40 82 00 1C */	bne .L_8035FB38
/* 8035FB20 0035CA60  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FB24 0035CA64  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035FB28 0035CA68  7D 89 03 A6 */	mtctr r12
/* 8035FB2C 0035CA6C  4E 80 04 21 */	bctrl 
/* 8035FB30 0035CA70  90 61 00 70 */	stw r3, 0x70(r1)
/* 8035FB34 0035CA74  48 00 03 08 */	b .L_8035FE3C
.L_8035FB38:
/* 8035FB38 0035CA78  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FB3C 0035CA7C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035FB40 0035CA80  7D 89 03 A6 */	mtctr r12
/* 8035FB44 0035CA84  4E 80 04 21 */	bctrl 
/* 8035FB48 0035CA88  90 61 00 70 */	stw r3, 0x70(r1)
/* 8035FB4C 0035CA8C  48 00 00 58 */	b .L_8035FBA4
.L_8035FB50:
/* 8035FB50 0035CA90  80 61 00 74 */	lwz r3, 0x74(r1)
/* 8035FB54 0035CA94  80 81 00 70 */	lwz r4, 0x70(r1)
/* 8035FB58 0035CA98  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FB5C 0035CA9C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035FB60 0035CAA0  7D 89 03 A6 */	mtctr r12
/* 8035FB64 0035CAA4  4E 80 04 21 */	bctrl 
/* 8035FB68 0035CAA8  7C 64 1B 78 */	mr r4, r3
/* 8035FB6C 0035CAAC  80 61 00 78 */	lwz r3, 0x78(r1)
/* 8035FB70 0035CAB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FB74 0035CAB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035FB78 0035CAB8  7D 89 03 A6 */	mtctr r12
/* 8035FB7C 0035CABC  4E 80 04 21 */	bctrl 
/* 8035FB80 0035CAC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035FB84 0035CAC4  40 82 02 B8 */	bne .L_8035FE3C
/* 8035FB88 0035CAC8  80 61 00 74 */	lwz r3, 0x74(r1)
/* 8035FB8C 0035CACC  80 81 00 70 */	lwz r4, 0x70(r1)
/* 8035FB90 0035CAD0  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FB94 0035CAD4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035FB98 0035CAD8  7D 89 03 A6 */	mtctr r12
/* 8035FB9C 0035CADC  4E 80 04 21 */	bctrl 
/* 8035FBA0 0035CAE0  90 61 00 70 */	stw r3, 0x70(r1)
.L_8035FBA4:
/* 8035FBA4 0035CAE4  81 81 00 6C */	lwz r12, 0x6c(r1)
/* 8035FBA8 0035CAE8  38 61 00 6C */	addi r3, r1, 0x6c
/* 8035FBAC 0035CAEC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035FBB0 0035CAF0  7D 89 03 A6 */	mtctr r12
/* 8035FBB4 0035CAF4  4E 80 04 21 */	bctrl 
/* 8035FBB8 0035CAF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035FBBC 0035CAFC  41 82 FF 94 */	beq .L_8035FB50
/* 8035FBC0 0035CB00  48 00 02 7C */	b .L_8035FE3C
.L_8035FBC4:
/* 8035FBC4 0035CB04  80 61 00 74 */	lwz r3, 0x74(r1)
/* 8035FBC8 0035CB08  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FBCC 0035CB0C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035FBD0 0035CB10  7D 89 03 A6 */	mtctr r12
/* 8035FBD4 0035CB14  4E 80 04 21 */	bctrl 
/* 8035FBD8 0035CB18  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FBDC 0035CB1C  7C 7D 1B 78 */	mr r29, r3
/* 8035FBE0 0035CB20  3B C0 00 00 */	li r30, 0
/* 8035FBE4 0035CB24  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 8035FBE8 0035CB28  7D 89 03 A6 */	mtctr r12
/* 8035FBEC 0035CB2C  4E 80 04 21 */	bctrl 
/* 8035FBF0 0035CB30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035FBF4 0035CB34  41 82 00 34 */	beq .L_8035FC28
/* 8035FBF8 0035CB38  7F A3 EB 78 */	mr r3, r29
/* 8035FBFC 0035CB3C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8035FC00 0035CB40  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8035FC04 0035CB44  7D 89 03 A6 */	mtctr r12
/* 8035FC08 0035CB48  4E 80 04 21 */	bctrl 
/* 8035FC0C 0035CB4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035FC10 0035CB50  41 82 00 18 */	beq .L_8035FC28
/* 8035FC14 0035CB54  7F A3 EB 78 */	mr r3, r29
/* 8035FC18 0035CB58  4B E3 F9 71 */	bl isStickToMouth__Q24Game8CreatureFv
/* 8035FC1C 0035CB5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035FC20 0035CB60  40 82 00 08 */	bne .L_8035FC28
/* 8035FC24 0035CB64  3B C0 00 01 */	li r30, 1
.L_8035FC28:
/* 8035FC28 0035CB68  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8035FC2C 0035CB6C  41 82 01 54 */	beq .L_8035FD80
/* 8035FC30 0035CB70  7F A4 EB 78 */	mr r4, r29
/* 8035FC34 0035CB74  38 61 00 60 */	addi r3, r1, 0x60
/* 8035FC38 0035CB78  81 9D 00 00 */	lwz r12, 0(r29)
/* 8035FC3C 0035CB7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035FC40 0035CB80  7D 89 03 A6 */	mtctr r12
/* 8035FC44 0035CB84  4E 80 04 21 */	bctrl 
/* 8035FC48 0035CB88  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 8035FC4C 0035CB8C  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 8035FC50 0035CB90  41 80 01 30 */	blt .L_8035FD80
/* 8035FC54 0035CB94  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 8035FC58 0035CB98  41 81 01 28 */	bgt .L_8035FD80
/* 8035FC5C 0035CB9C  7F A4 EB 78 */	mr r4, r29
/* 8035FC60 0035CBA0  38 61 00 24 */	addi r3, r1, 0x24
/* 8035FC64 0035CBA4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8035FC68 0035CBA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035FC6C 0035CBAC  7D 89 03 A6 */	mtctr r12
/* 8035FC70 0035CBB0  4E 80 04 21 */	bctrl 
/* 8035FC74 0035CBB4  7F E4 FB 78 */	mr r4, r31
/* 8035FC78 0035CBB8  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8035FC7C 0035CBBC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035FC80 0035CBC0  38 61 00 30 */	addi r3, r1, 0x30
/* 8035FC84 0035CBC4  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8035FC88 0035CBC8  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8035FC8C 0035CBCC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035FC90 0035CBD0  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8035FC94 0035CBD4  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8035FC98 0035CBD8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8035FC9C 0035CBDC  7D 89 03 A6 */	mtctr r12
/* 8035FCA0 0035CBE0  4E 80 04 21 */	bctrl 
/* 8035FCA4 0035CBE4  C0 A1 00 30 */	lfs f5, 0x30(r1)
/* 8035FCA8 0035CBE8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8035FCAC 0035CBEC  C0 61 00 38 */	lfs f3, 0x38(r1)
/* 8035FCB0 0035CBF0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8035FCB4 0035CBF4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8035FCB8 0035CBF8  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8035FCBC 0035CBFC  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 8035FCC0 0035CC00  EC 21 28 28 */	fsubs f1, f1, f5
/* 8035FCC4 0035CC04  EC 40 18 28 */	fsubs f2, f0, f3
/* 8035FCC8 0035CC08  D0 A1 00 18 */	stfs f5, 0x18(r1)
/* 8035FCCC 0035CC0C  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 8035FCD0 0035CC10  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8035FCD4 0035CC14  4B CD 54 35 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8035FCD8 0035CC18  48 0B 1E F9 */	bl roundAng__Ff
/* 8035FCDC 0035CC1C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035FCE0 0035CC20  FF 20 08 90 */	fmr f25, f1
/* 8035FCE4 0035CC24  7F E3 FB 78 */	mr r3, r31
/* 8035FCE8 0035CC28  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8035FCEC 0035CC2C  7D 89 03 A6 */	mtctr r12
/* 8035FCF0 0035CC30  4E 80 04 21 */	bctrl 
/* 8035FCF4 0035CC34  FC 40 08 90 */	fmr f2, f1
/* 8035FCF8 0035CC38  FC 20 C8 90 */	fmr f1, f25
/* 8035FCFC 0035CC3C  48 0B 1F 01 */	bl angDist__Fff
/* 8035FD00 0035CC40  FC 00 0A 10 */	fabs f0, f1
/* 8035FD04 0035CC44  FC 00 00 18 */	frsp f0, f0
/* 8035FD08 0035CC48  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8035FD0C 0035CC4C  4C 40 13 82 */	cror 2, 0, 2
/* 8035FD10 0035CC50  40 82 00 70 */	bne .L_8035FD80
/* 8035FD14 0035CC54  7F A4 EB 78 */	mr r4, r29
/* 8035FD18 0035CC58  38 61 00 48 */	addi r3, r1, 0x48
/* 8035FD1C 0035CC5C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8035FD20 0035CC60  C3 3F 01 94 */	lfs f25, 0x194(r31)
/* 8035FD24 0035CC64  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035FD28 0035CC68  C3 5F 01 8C */	lfs f26, 0x18c(r31)
/* 8035FD2C 0035CC6C  7D 89 03 A6 */	mtctr r12
/* 8035FD30 0035CC70  4E 80 04 21 */	bctrl 
/* 8035FD34 0035CC74  7F A4 EB 78 */	mr r4, r29
/* 8035FD38 0035CC78  38 61 00 54 */	addi r3, r1, 0x54
/* 8035FD3C 0035CC7C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8035FD40 0035CC80  C3 61 00 50 */	lfs f27, 0x50(r1)
/* 8035FD44 0035CC84  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035FD48 0035CC88  7D 89 03 A6 */	mtctr r12
/* 8035FD4C 0035CC8C  4E 80 04 21 */	bctrl 
/* 8035FD50 0035CC90  EC 3B C8 28 */	fsubs f1, f27, f25
/* 8035FD54 0035CC94  C0 41 00 54 */	lfs f2, 0x54(r1)
/* 8035FD58 0035CC98  C0 01 00 08 */	lfs f0, 8(r1)
/* 8035FD5C 0035CC9C  EC 42 D0 28 */	fsubs f2, f2, f26
/* 8035FD60 0035CCA0  EC 21 00 72 */	fmuls f1, f1, f1
/* 8035FD64 0035CCA4  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8035FD68 0035CCA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035FD6C 0035CCAC  40 80 00 14 */	bge .L_8035FD80
/* 8035FD70 0035CCB0  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 8035FD74 0035CCB4  40 81 00 0C */	ble .L_8035FD80
/* 8035FD78 0035CCB8  93 BF 02 30 */	stw r29, 0x230(r31)
/* 8035FD7C 0035CCBC  D0 21 00 08 */	stfs f1, 8(r1)
.L_8035FD80:
/* 8035FD80 0035CCC0  80 01 00 78 */	lwz r0, 0x78(r1)
/* 8035FD84 0035CCC4  28 00 00 00 */	cmplwi r0, 0
/* 8035FD88 0035CCC8  40 82 00 24 */	bne .L_8035FDAC
/* 8035FD8C 0035CCCC  80 61 00 74 */	lwz r3, 0x74(r1)
/* 8035FD90 0035CCD0  80 81 00 70 */	lwz r4, 0x70(r1)
/* 8035FD94 0035CCD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FD98 0035CCD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035FD9C 0035CCDC  7D 89 03 A6 */	mtctr r12
/* 8035FDA0 0035CCE0  4E 80 04 21 */	bctrl 
/* 8035FDA4 0035CCE4  90 61 00 70 */	stw r3, 0x70(r1)
/* 8035FDA8 0035CCE8  48 00 00 94 */	b .L_8035FE3C
.L_8035FDAC:
/* 8035FDAC 0035CCEC  80 61 00 74 */	lwz r3, 0x74(r1)
/* 8035FDB0 0035CCF0  80 81 00 70 */	lwz r4, 0x70(r1)
/* 8035FDB4 0035CCF4  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FDB8 0035CCF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035FDBC 0035CCFC  7D 89 03 A6 */	mtctr r12
/* 8035FDC0 0035CD00  4E 80 04 21 */	bctrl 
/* 8035FDC4 0035CD04  90 61 00 70 */	stw r3, 0x70(r1)
/* 8035FDC8 0035CD08  48 00 00 58 */	b .L_8035FE20
.L_8035FDCC:
/* 8035FDCC 0035CD0C  80 61 00 74 */	lwz r3, 0x74(r1)
/* 8035FDD0 0035CD10  80 81 00 70 */	lwz r4, 0x70(r1)
/* 8035FDD4 0035CD14  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FDD8 0035CD18  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035FDDC 0035CD1C  7D 89 03 A6 */	mtctr r12
/* 8035FDE0 0035CD20  4E 80 04 21 */	bctrl 
/* 8035FDE4 0035CD24  7C 64 1B 78 */	mr r4, r3
/* 8035FDE8 0035CD28  80 61 00 78 */	lwz r3, 0x78(r1)
/* 8035FDEC 0035CD2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FDF0 0035CD30  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035FDF4 0035CD34  7D 89 03 A6 */	mtctr r12
/* 8035FDF8 0035CD38  4E 80 04 21 */	bctrl 
/* 8035FDFC 0035CD3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035FE00 0035CD40  40 82 00 3C */	bne .L_8035FE3C
/* 8035FE04 0035CD44  80 61 00 74 */	lwz r3, 0x74(r1)
/* 8035FE08 0035CD48  80 81 00 70 */	lwz r4, 0x70(r1)
/* 8035FE0C 0035CD4C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FE10 0035CD50  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035FE14 0035CD54  7D 89 03 A6 */	mtctr r12
/* 8035FE18 0035CD58  4E 80 04 21 */	bctrl 
/* 8035FE1C 0035CD5C  90 61 00 70 */	stw r3, 0x70(r1)
.L_8035FE20:
/* 8035FE20 0035CD60  81 81 00 6C */	lwz r12, 0x6c(r1)
/* 8035FE24 0035CD64  38 61 00 6C */	addi r3, r1, 0x6c
/* 8035FE28 0035CD68  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035FE2C 0035CD6C  7D 89 03 A6 */	mtctr r12
/* 8035FE30 0035CD70  4E 80 04 21 */	bctrl 
/* 8035FE34 0035CD74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035FE38 0035CD78  41 82 FF 94 */	beq .L_8035FDCC
.L_8035FE3C:
/* 8035FE3C 0035CD7C  80 61 00 74 */	lwz r3, 0x74(r1)
/* 8035FE40 0035CD80  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FE44 0035CD84  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035FE48 0035CD88  7D 89 03 A6 */	mtctr r12
/* 8035FE4C 0035CD8C  4E 80 04 21 */	bctrl 
/* 8035FE50 0035CD90  80 81 00 70 */	lwz r4, 0x70(r1)
/* 8035FE54 0035CD94  7C 04 18 40 */	cmplw r4, r3
/* 8035FE58 0035CD98  40 82 FD 6C */	bne .L_8035FBC4
/* 8035FE5C 0035CD9C  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 8035FE60 0035CDA0  28 04 00 00 */	cmplwi r4, 0
/* 8035FE64 0035CDA4  41 82 00 30 */	beq .L_8035FE94
/* 8035FE68 0035CDA8  81 84 00 00 */	lwz r12, 0(r4)
/* 8035FE6C 0035CDAC  38 61 00 3C */	addi r3, r1, 0x3c
/* 8035FE70 0035CDB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035FE74 0035CDB4  7D 89 03 A6 */	mtctr r12
/* 8035FE78 0035CDB8  4E 80 04 21 */	bctrl 
/* 8035FE7C 0035CDBC  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 8035FE80 0035CDC0  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 8035FE84 0035CDC4  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8035FE88 0035CDC8  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 8035FE8C 0035CDCC  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 8035FE90 0035CDD0  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
.L_8035FE94:
/* 8035FE94 0035CDD4  E3 E1 00 F8 */	psq_l f31, 248(r1), 0, qr0
/* 8035FE98 0035CDD8  CB E1 00 F0 */	lfd f31, 0xf0(r1)
/* 8035FE9C 0035CDDC  E3 C1 00 E8 */	psq_l f30, 232(r1), 0, qr0
/* 8035FEA0 0035CDE0  CB C1 00 E0 */	lfd f30, 0xe0(r1)
/* 8035FEA4 0035CDE4  E3 A1 00 D8 */	psq_l f29, 216(r1), 0, qr0
/* 8035FEA8 0035CDE8  CB A1 00 D0 */	lfd f29, 0xd0(r1)
/* 8035FEAC 0035CDEC  E3 81 00 C8 */	psq_l f28, 200(r1), 0, qr0
/* 8035FEB0 0035CDF0  CB 81 00 C0 */	lfd f28, 0xc0(r1)
/* 8035FEB4 0035CDF4  E3 61 00 B8 */	psq_l f27, 184(r1), 0, qr0
/* 8035FEB8 0035CDF8  CB 61 00 B0 */	lfd f27, 0xb0(r1)
/* 8035FEBC 0035CDFC  E3 41 00 A8 */	psq_l f26, 168(r1), 0, qr0
/* 8035FEC0 0035CE00  CB 41 00 A0 */	lfd f26, 0xa0(r1)
/* 8035FEC4 0035CE04  E3 21 00 98 */	psq_l f25, 152(r1), 0, qr0
/* 8035FEC8 0035CE08  CB 21 00 90 */	lfd f25, 0x90(r1)
/* 8035FECC 0035CE0C  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 8035FED0 0035CE10  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8035FED4 0035CE14  80 01 01 04 */	lwz r0, 0x104(r1)
/* 8035FED8 0035CE18  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 8035FEDC 0035CE1C  7C 08 03 A6 */	mtlr r0
/* 8035FEE0 0035CE20  38 21 01 00 */	addi r1, r1, 0x100
/* 8035FEE4 0035CE24  4E 80 00 20 */	blr 
.endfn searchTarget__Q34Game10KingChappy3ObjFv

.fn isOutOfTerritory__Q34Game10KingChappy3ObjFf, global
/* 8035FEE8 0035CE28  C0 43 01 A0 */	lfs f2, 0x1a0(r3)
/* 8035FEEC 0035CE2C  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 8035FEF0 0035CE30  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8035FEF4 0035CE34  EC 82 00 28 */	fsubs f4, f2, f0
/* 8035FEF8 0035CE38  C0 43 01 98 */	lfs f2, 0x198(r3)
/* 8035FEFC 0035CE3C  C0 64 03 5C */	lfs f3, 0x35c(r4)
/* 8035FF00 0035CE40  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8035FF04 0035CE44  EC 61 00 F2 */	fmuls f3, f1, f3
/* 8035FF08 0035CE48  EC 42 00 28 */	fsubs f2, f2, f0
/* 8035FF0C 0035CE4C  EC 24 01 32 */	fmuls f1, f4, f4
/* 8035FF10 0035CE50  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8035FF14 0035CE54  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8035FF18 0035CE58  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035FF1C 0035CE5C  7C 00 00 26 */	mfcr r0
/* 8035FF20 0035CE60  54 03 17 FE */	rlwinm r3, r0, 2, 0x1f, 0x1f
/* 8035FF24 0035CE64  4E 80 00 20 */	blr 
.endfn isOutOfTerritory__Q34Game10KingChappy3ObjFf

.fn forceTransit__Q34Game10KingChappy3ObjFi, global
/* 8035FF28 0035CE68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035FF2C 0035CE6C  7C 08 02 A6 */	mflr r0
/* 8035FF30 0035CE70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035FF34 0035CE74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035FF38 0035CE78  7C 9F 23 78 */	mr r31, r4
/* 8035FF3C 0035CE7C  93 C1 00 08 */	stw r30, 8(r1)
/* 8035FF40 0035CE80  7C 7E 1B 78 */	mr r30, r3
/* 8035FF44 0035CE84  4B DA 74 B1 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8035FF48 0035CE88  2C 1F 00 0A */	cmpwi r31, 0xa
/* 8035FF4C 0035CE8C  41 82 00 14 */	beq .L_8035FF60
/* 8035FF50 0035CE90  40 80 00 90 */	bge .L_8035FFE0
/* 8035FF54 0035CE94  2C 1F 00 04 */	cmpwi r31, 4
/* 8035FF58 0035CE98  41 82 00 3C */	beq .L_8035FF94
/* 8035FF5C 0035CE9C  48 00 00 84 */	b .L_8035FFE0
.L_8035FF60:
/* 8035FF60 0035CEA0  2C 03 00 09 */	cmpwi r3, 9
/* 8035FF64 0035CEA4  40 82 00 28 */	bne .L_8035FF8C
/* 8035FF68 0035CEA8  80 7E 03 4C */	lwz r3, 0x34c(r30)
/* 8035FF6C 0035CEAC  7F C4 F3 78 */	mr r4, r30
/* 8035FF70 0035CEB0  7F E5 FB 78 */	mr r5, r31
/* 8035FF74 0035CEB4  38 C0 00 00 */	li r6, 0
/* 8035FF78 0035CEB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FF7C 0035CEBC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035FF80 0035CEC0  7D 89 03 A6 */	mtctr r12
/* 8035FF84 0035CEC4  4E 80 04 21 */	bctrl 
/* 8035FF88 0035CEC8  48 00 00 60 */	b .L_8035FFE8
.L_8035FF8C:
/* 8035FF8C 0035CECC  38 60 00 00 */	li r3, 0
/* 8035FF90 0035CED0  48 00 00 5C */	b .L_8035FFEC
.L_8035FF94:
/* 8035FF94 0035CED4  2C 03 00 00 */	cmpwi r3, 0
/* 8035FF98 0035CED8  40 82 00 40 */	bne .L_8035FFD8
/* 8035FF9C 0035CEDC  C0 3E 02 0C */	lfs f1, 0x20c(r30)
/* 8035FFA0 0035CEE0  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 8035FFA4 0035CEE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035FFA8 0035CEE8  40 81 00 30 */	ble .L_8035FFD8
/* 8035FFAC 0035CEEC  38 00 00 01 */	li r0, 1
/* 8035FFB0 0035CEF0  7F C4 F3 78 */	mr r4, r30
/* 8035FFB4 0035CEF4  98 1E 02 E4 */	stb r0, 0x2e4(r30)
/* 8035FFB8 0035CEF8  7F E5 FB 78 */	mr r5, r31
/* 8035FFBC 0035CEFC  38 C0 00 00 */	li r6, 0
/* 8035FFC0 0035CF00  80 7E 03 4C */	lwz r3, 0x34c(r30)
/* 8035FFC4 0035CF04  81 83 00 00 */	lwz r12, 0(r3)
/* 8035FFC8 0035CF08  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035FFCC 0035CF0C  7D 89 03 A6 */	mtctr r12
/* 8035FFD0 0035CF10  4E 80 04 21 */	bctrl 
/* 8035FFD4 0035CF14  48 00 00 14 */	b .L_8035FFE8
.L_8035FFD8:
/* 8035FFD8 0035CF18  38 60 00 00 */	li r3, 0
/* 8035FFDC 0035CF1C  48 00 00 10 */	b .L_8035FFEC
.L_8035FFE0:
/* 8035FFE0 0035CF20  38 60 00 00 */	li r3, 0
/* 8035FFE4 0035CF24  48 00 00 08 */	b .L_8035FFEC
.L_8035FFE8:
/* 8035FFE8 0035CF28  38 60 00 01 */	li r3, 1
.L_8035FFEC:
/* 8035FFEC 0035CF2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035FFF0 0035CF30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035FFF4 0035CF34  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035FFF8 0035CF38  7C 08 03 A6 */	mtlr r0
/* 8035FFFC 0035CF3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80360000 0035CF40  4E 80 00 20 */	blr 
.endfn forceTransit__Q34Game10KingChappy3ObjFi

.fn requestTransit__Q34Game10KingChappy3ObjFi, global
/* 80360004 0035CF44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80360008 0035CF48  7C 08 02 A6 */	mflr r0
/* 8036000C 0035CF4C  7C 66 1B 78 */	mr r6, r3
/* 80360010 0035CF50  7C 85 23 78 */	mr r5, r4
/* 80360014 0035CF54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80360018 0035CF58  7C C4 33 78 */	mr r4, r6
/* 8036001C 0035CF5C  80 63 01 80 */	lwz r3, 0x180(r3)
/* 80360020 0035CF60  4B FF C9 A1 */	bl requestState__Q34Game10KingChappy3MgrFPQ34Game10KingChappy3Obji
/* 80360024 0035CF64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80360028 0035CF68  7C 08 03 A6 */	mtlr r0
/* 8036002C 0035CF6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80360030 0035CF70  4E 80 00 20 */	blr 
.endfn requestTransit__Q34Game10KingChappy3ObjFi

.fn walkFunc__Q34Game10KingChappy3ObjFv, global
/* 80360034 0035CF74  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80360038 0035CF78  7C 08 02 A6 */	mflr r0
/* 8036003C 0035CF7C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80360040 0035CF80  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80360044 0035CF84  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80360048 0035CF88  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8036004C 0035CF8C  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 80360050 0035CF90  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 80360054 0035CF94  F3 A1 00 18 */	psq_st f29, 24(r1), 0, qr0
/* 80360058 0035CF98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036005C 0035CF9C  7C 7F 1B 78 */	mr r31, r3
/* 80360060 0035CFA0  88 03 03 94 */	lbz r0, 0x394(r3)
/* 80360064 0035CFA4  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80360068 0035CFA8  28 00 00 00 */	cmplwi r0, 0
/* 8036006C 0035CFAC  C3 E3 02 E4 */	lfs f31, 0x2e4(r3)
/* 80360070 0035CFB0  C3 C3 03 34 */	lfs f30, 0x334(r3)
/* 80360074 0035CFB4  C3 A3 03 0C */	lfs f29, 0x30c(r3)
/* 80360078 0035CFB8  41 82 00 10 */	beq .L_80360088
/* 8036007C 0035CFBC  C3 E3 0A 9C */	lfs f31, 0xa9c(r3)
/* 80360080 0035CFC0  C3 C3 0A EC */	lfs f30, 0xaec(r3)
/* 80360084 0035CFC4  C3 A3 0A C4 */	lfs f29, 0xac4(r3)
.L_80360088:
/* 80360088 0035CFC8  7F E3 FB 78 */	mr r3, r31
/* 8036008C 0035CFCC  4B FF F9 5D */	bl searchTarget__Q34Game10KingChappy3ObjFv
/* 80360090 0035CFD0  FC 20 F8 90 */	fmr f1, f31
/* 80360094 0035CFD4  7F E3 FB 78 */	mr r3, r31
/* 80360098 0035CFD8  FC 40 E8 90 */	fmr f2, f29
/* 8036009C 0035CFDC  38 9F 02 BC */	addi r4, r31, 0x2bc
/* 803600A0 0035CFE0  FC 60 F0 90 */	fmr f3, f30
/* 803600A4 0035CFE4  4B DB 55 39 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 803600A8 0035CFE8  80 7F 03 0C */	lwz r3, 0x30c(r31)
/* 803600AC 0035CFEC  38 03 00 01 */	addi r0, r3, 1
/* 803600B0 0035CFF0  90 1F 03 0C */	stw r0, 0x30c(r31)
/* 803600B4 0035CFF4  80 1F 03 0C */	lwz r0, 0x30c(r31)
/* 803600B8 0035CFF8  2C 00 00 78 */	cmpwi r0, 0x78
/* 803600BC 0035CFFC  40 81 00 78 */	ble .L_80360134
/* 803600C0 0035D000  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 803600C4 0035D004  C0 1F 02 FC */	lfs f0, 0x2fc(r31)
/* 803600C8 0035D008  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 803600CC 0035D00C  EC 61 00 28 */	fsubs f3, f1, f0
/* 803600D0 0035D010  C0 3F 02 F4 */	lfs f1, 0x2f4(r31)
/* 803600D4 0035D014  C0 02 03 F8 */	lfs f0, lbl_8051E758@sda21(r2)
/* 803600D8 0035D018  EC 42 08 28 */	fsubs f2, f2, f1
/* 803600DC 0035D01C  EC 23 00 F2 */	fmuls f1, f3, f3
/* 803600E0 0035D020  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 803600E4 0035D024  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803600E8 0035D028  40 80 00 2C */	bge .L_80360114
/* 803600EC 0035D02C  38 60 00 78 */	li r3, 0x78
/* 803600F0 0035D030  38 00 00 00 */	li r0, 0
/* 803600F4 0035D034  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 803600F8 0035D038  90 1F 02 30 */	stw r0, 0x230(r31)
/* 803600FC 0035D03C  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80360100 0035D040  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 80360104 0035D044  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 80360108 0035D048  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 8036010C 0035D04C  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 80360110 0035D050  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
.L_80360114:
/* 80360114 0035D054  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 80360118 0035D058  38 00 00 00 */	li r0, 0
/* 8036011C 0035D05C  D0 1F 02 F4 */	stfs f0, 0x2f4(r31)
/* 80360120 0035D060  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 80360124 0035D064  D0 1F 02 F8 */	stfs f0, 0x2f8(r31)
/* 80360128 0035D068  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8036012C 0035D06C  D0 1F 02 FC */	stfs f0, 0x2fc(r31)
/* 80360130 0035D070  90 1F 03 0C */	stw r0, 0x30c(r31)
.L_80360134:
/* 80360134 0035D074  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80360138 0035D078  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8036013C 0035D07C  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 80360140 0035D080  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80360144 0035D084  E3 A1 00 18 */	psq_l f29, 24(r1), 0, qr0
/* 80360148 0035D088  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 8036014C 0035D08C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80360150 0035D090  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80360154 0035D094  7C 08 03 A6 */	mtlr r0
/* 80360158 0035D098  38 21 00 40 */	addi r1, r1, 0x40
/* 8036015C 0035D09C  4E 80 00 20 */	blr 
.endfn walkFunc__Q34Game10KingChappy3ObjFv

.fn turnFunc__Q34Game10KingChappy3ObjFf, global
/* 80360160 0035D0A0  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80360164 0035D0A4  7C 08 02 A6 */	mflr r0
/* 80360168 0035D0A8  90 01 00 94 */	stw r0, 0x94(r1)
/* 8036016C 0035D0AC  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80360170 0035D0B0  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80360174 0035D0B4  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80360178 0035D0B8  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8036017C 0035D0BC  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80360180 0035D0C0  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 80360184 0035D0C4  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 80360188 0035D0C8  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 8036018C 0035D0CC  DB 61 00 40 */	stfd f27, 0x40(r1)
/* 80360190 0035D0D0  F3 61 00 48 */	psq_st f27, 72(r1), 0, qr0
/* 80360194 0035D0D4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80360198 0035D0D8  7C 7F 1B 78 */	mr r31, r3
/* 8036019C 0035D0DC  FF 60 08 90 */	fmr f27, f1
/* 803601A0 0035D0E0  80 83 02 30 */	lwz r4, 0x230(r3)
/* 803601A4 0035D0E4  C3 C3 02 BC */	lfs f30, 0x2bc(r3)
/* 803601A8 0035D0E8  28 04 00 00 */	cmplwi r4, 0
/* 803601AC 0035D0EC  C3 E3 02 C4 */	lfs f31, 0x2c4(r3)
/* 803601B0 0035D0F0  41 82 00 20 */	beq .L_803601D0
/* 803601B4 0035D0F4  81 84 00 00 */	lwz r12, 0(r4)
/* 803601B8 0035D0F8  38 61 00 20 */	addi r3, r1, 0x20
/* 803601BC 0035D0FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803601C0 0035D100  7D 89 03 A6 */	mtctr r12
/* 803601C4 0035D104  4E 80 04 21 */	bctrl 
/* 803601C8 0035D108  C3 C1 00 20 */	lfs f30, 0x20(r1)
/* 803601CC 0035D10C  C3 E1 00 28 */	lfs f31, 0x28(r1)
.L_803601D0:
/* 803601D0 0035D110  88 1F 03 94 */	lbz r0, 0x394(r31)
/* 803601D4 0035D114  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803601D8 0035D118  28 00 00 00 */	cmplwi r0, 0
/* 803601DC 0035D11C  C3 A3 03 34 */	lfs f29, 0x334(r3)
/* 803601E0 0035D120  C3 83 03 0C */	lfs f28, 0x30c(r3)
/* 803601E4 0035D124  41 82 00 0C */	beq .L_803601F0
/* 803601E8 0035D128  C3 A3 0A EC */	lfs f29, 0xaec(r3)
/* 803601EC 0035D12C  C3 83 0A C4 */	lfs f28, 0xac4(r3)
.L_803601F0:
/* 803601F0 0035D130  7F E4 FB 78 */	mr r4, r31
/* 803601F4 0035D134  38 61 00 14 */	addi r3, r1, 0x14
/* 803601F8 0035D138  81 9F 00 00 */	lwz r12, 0(r31)
/* 803601FC 0035D13C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360200 0035D140  7D 89 03 A6 */	mtctr r12
/* 80360204 0035D144  4E 80 04 21 */	bctrl 
/* 80360208 0035D148  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 8036020C 0035D14C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80360210 0035D150  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80360214 0035D154  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80360218 0035D158  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 8036021C 0035D15C  EC 3E 20 28 */	fsubs f1, f30, f4
/* 80360220 0035D160  EC 5F 00 28 */	fsubs f2, f31, f0
/* 80360224 0035D164  D0 81 00 08 */	stfs f4, 8(r1)
/* 80360228 0035D168  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 8036022C 0035D16C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80360230 0035D170  4B CD 4E D9 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80360234 0035D174  48 0B 19 9D */	bl roundAng__Ff
/* 80360238 0035D178  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036023C 0035D17C  FF E0 08 90 */	fmr f31, f1
/* 80360240 0035D180  7F E3 FB 78 */	mr r3, r31
/* 80360244 0035D184  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80360248 0035D188  7D 89 03 A6 */	mtctr r12
/* 8036024C 0035D18C  4E 80 04 21 */	bctrl 
/* 80360250 0035D190  FC 40 08 90 */	fmr f2, f1
/* 80360254 0035D194  FC 20 F8 90 */	fmr f1, f31
/* 80360258 0035D198  48 0B 19 A5 */	bl angDist__Fff
/* 8036025C 0035D19C  EC 9D 06 F2 */	fmuls f4, f29, f27
/* 80360260 0035D1A0  C0 02 03 F0 */	lfs f0, lbl_8051E750@sda21(r2)
/* 80360264 0035D1A4  EC 7C 06 F2 */	fmuls f3, f28, f27
/* 80360268 0035D1A8  C0 42 03 EC */	lfs f2, lbl_8051E74C@sda21(r2)
/* 8036026C 0035D1AC  FF C0 08 90 */	fmr f30, f1
/* 80360270 0035D1B0  EC 00 01 32 */	fmuls f0, f0, f4
/* 80360274 0035D1B4  EF FE 00 F2 */	fmuls f31, f30, f3
/* 80360278 0035D1B8  EC 22 00 32 */	fmuls f1, f2, f0
/* 8036027C 0035D1BC  FC 00 FA 10 */	fabs f0, f31
/* 80360280 0035D1C0  FC 00 00 18 */	frsp f0, f0
/* 80360284 0035D1C4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80360288 0035D1C8  40 81 00 1C */	ble .L_803602A4
/* 8036028C 0035D1CC  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 80360290 0035D1D0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80360294 0035D1D4  40 81 00 0C */	ble .L_803602A0
/* 80360298 0035D1D8  FF E0 08 90 */	fmr f31, f1
/* 8036029C 0035D1DC  48 00 00 08 */	b .L_803602A4
.L_803602A0:
/* 803602A0 0035D1E0  FF E0 08 50 */	fneg f31, f1
.L_803602A4:
/* 803602A4 0035D1E4  7F E3 FB 78 */	mr r3, r31
/* 803602A8 0035D1E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 803602AC 0035D1EC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803602B0 0035D1F0  7D 89 03 A6 */	mtctr r12
/* 803602B4 0035D1F4  4E 80 04 21 */	bctrl 
/* 803602B8 0035D1F8  EC 3F 08 2A */	fadds f1, f31, f1
/* 803602BC 0035D1FC  48 0B 19 15 */	bl roundAng__Ff
/* 803602C0 0035D200  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 803602C4 0035D204  FC 20 F0 90 */	fmr f1, f30
/* 803602C8 0035D208  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 803602CC 0035D20C  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 803602D0 0035D210  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 803602D4 0035D214  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 803602D8 0035D218  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 803602DC 0035D21C  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 803602E0 0035D220  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 803602E4 0035D224  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 803602E8 0035D228  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 803602EC 0035D22C  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 803602F0 0035D230  E3 61 00 48 */	psq_l f27, 72(r1), 0, qr0
/* 803602F4 0035D234  CB 61 00 40 */	lfd f27, 0x40(r1)
/* 803602F8 0035D238  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803602FC 0035D23C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80360300 0035D240  7C 08 03 A6 */	mtlr r0
/* 80360304 0035D244  38 21 00 90 */	addi r1, r1, 0x90
/* 80360308 0035D248  4E 80 00 20 */	blr 
.endfn turnFunc__Q34Game10KingChappy3ObjFf

.fn isReachToGoal__Q34Game10KingChappy3ObjFf, global
/* 8036030C 0035D24C  EC 01 00 72 */	fmuls f0, f1, f1
/* 80360310 0035D250  C0 43 01 94 */	lfs f2, 0x194(r3)
/* 80360314 0035D254  C0 23 02 C4 */	lfs f1, 0x2c4(r3)
/* 80360318 0035D258  C0 63 01 8C */	lfs f3, 0x18c(r3)
/* 8036031C 0035D25C  EC 42 08 28 */	fsubs f2, f2, f1
/* 80360320 0035D260  C0 23 02 BC */	lfs f1, 0x2bc(r3)
/* 80360324 0035D264  EC 63 08 28 */	fsubs f3, f3, f1
/* 80360328 0035D268  EC 22 00 B2 */	fmuls f1, f2, f2
/* 8036032C 0035D26C  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 80360330 0035D270  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80360334 0035D274  7C 00 00 26 */	mfcr r0
/* 80360338 0035D278  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8036033C 0035D27C  4E 80 00 20 */	blr 
.endfn isReachToGoal__Q34Game10KingChappy3ObjFf

.fn checkAttack__Q34Game10KingChappy3ObjFb, global
/* 80360340 0035D280  94 21 FD C0 */	stwu r1, -0x240(r1)
/* 80360344 0035D284  7C 08 02 A6 */	mflr r0
/* 80360348 0035D288  90 01 02 44 */	stw r0, 0x244(r1)
/* 8036034C 0035D28C  DB E1 02 30 */	stfd f31, 0x230(r1)
/* 80360350 0035D290  F3 E1 02 38 */	psq_st f31, 568(r1), 0, qr0
/* 80360354 0035D294  DB C1 02 20 */	stfd f30, 0x220(r1)
/* 80360358 0035D298  F3 C1 02 28 */	psq_st f30, 552(r1), 0, qr0
/* 8036035C 0035D29C  DB A1 02 10 */	stfd f29, 0x210(r1)
/* 80360360 0035D2A0  F3 A1 02 18 */	psq_st f29, 536(r1), 0, qr0
/* 80360364 0035D2A4  DB 81 02 00 */	stfd f28, 0x200(r1)
/* 80360368 0035D2A8  F3 81 02 08 */	psq_st f28, 520(r1), 0, qr0
/* 8036036C 0035D2AC  DB 61 01 F0 */	stfd f27, 0x1f0(r1)
/* 80360370 0035D2B0  F3 61 01 F8 */	psq_st f27, 504(r1), 0, qr0
/* 80360374 0035D2B4  DB 41 01 E0 */	stfd f26, 0x1e0(r1)
/* 80360378 0035D2B8  F3 41 01 E8 */	psq_st f26, 488(r1), 0, qr0
/* 8036037C 0035D2BC  DB 21 01 D0 */	stfd f25, 0x1d0(r1)
/* 80360380 0035D2C0  F3 21 01 D8 */	psq_st f25, 472(r1), 0, qr0
/* 80360384 0035D2C4  DB 01 01 C0 */	stfd f24, 0x1c0(r1)
/* 80360388 0035D2C8  F3 01 01 C8 */	psq_st f24, 456(r1), 0, qr0
/* 8036038C 0035D2CC  DA E1 01 B0 */	stfd f23, 0x1b0(r1)
/* 80360390 0035D2D0  F2 E1 01 B8 */	psq_st f23, 440(r1), 0, qr0
/* 80360394 0035D2D4  DA C1 01 A0 */	stfd f22, 0x1a0(r1)
/* 80360398 0035D2D8  F2 C1 01 A8 */	psq_st f22, 424(r1), 0, qr0
/* 8036039C 0035D2DC  BF 41 01 88 */	stmw r26, 0x188(r1)
/* 803603A0 0035D2E0  7C 7E 1B 78 */	mr r30, r3
/* 803603A4 0035D2E4  7C 9F 23 78 */	mr r31, r4
/* 803603A8 0035D2E8  4B DA 70 4D */	bl getStateID__Q24Game9EnemyBaseFv
/* 803603AC 0035D2EC  2C 03 00 02 */	cmpwi r3, 2
/* 803603B0 0035D2F0  41 82 07 70 */	beq .L_80360B20
/* 803603B4 0035D2F4  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803603B8 0035D2F8  41 82 00 38 */	beq .L_803603F0
/* 803603BC 0035D2FC  83 9E 01 84 */	lwz r28, 0x184(r30)
/* 803603C0 0035D300  28 1C 00 00 */	cmplwi r28, 0
/* 803603C4 0035D304  40 82 00 20 */	bne .L_803603E4
/* 803603C8 0035D308  3C 60 80 49 */	lis r3, lbl_804915E8@ha
/* 803603CC 0035D30C  3C A0 80 49 */	lis r5, lbl_804915F8@ha
/* 803603D0 0035D310  38 63 15 E8 */	addi r3, r3, lbl_804915E8@l
/* 803603D4 0035D314  38 80 04 4A */	li r4, 0x44a
/* 803603D8 0035D318  38 A5 15 F8 */	addi r5, r5, lbl_804915F8@l
/* 803603DC 0035D31C  4C C6 31 82 */	crclr 6
/* 803603E0 0035D320  4B CC A2 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803603E4:
/* 803603E4 0035D324  88 1C 00 58 */	lbz r0, 0x58(r28)
/* 803603E8 0035D328  28 00 00 00 */	cmplwi r0, 0
/* 803603EC 0035D32C  40 82 07 34 */	bne .L_80360B20
.L_803603F0:
/* 803603F0 0035D330  88 1E 03 94 */	lbz r0, 0x394(r30)
/* 803603F4 0035D334  28 00 00 00 */	cmplwi r0, 0
/* 803603F8 0035D338  41 82 00 14 */	beq .L_8036040C
/* 803603FC 0035D33C  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80360400 0035D340  C3 63 0B 3C */	lfs f27, 0xb3c(r3)
/* 80360404 0035D344  C3 43 0B 14 */	lfs f26, 0xb14(r3)
/* 80360408 0035D348  48 00 00 10 */	b .L_80360418
.L_8036040C:
/* 8036040C 0035D34C  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80360410 0035D350  C3 63 05 64 */	lfs f27, 0x564(r3)
/* 80360414 0035D354  C3 43 05 8C */	lfs f26, 0x58c(r3)
.L_80360418:
/* 80360418 0035D358  80 7E 02 30 */	lwz r3, 0x230(r30)
/* 8036041C 0035D35C  28 03 00 00 */	cmplwi r3, 0
/* 80360420 0035D360  41 82 04 58 */	beq .L_80360878
/* 80360424 0035D364  81 83 00 00 */	lwz r12, 0(r3)
/* 80360428 0035D368  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8036042C 0035D36C  7D 89 03 A6 */	mtctr r12
/* 80360430 0035D370  4E 80 04 21 */	bctrl 
/* 80360434 0035D374  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80360438 0035D378  41 82 04 40 */	beq .L_80360878
/* 8036043C 0035D37C  83 BE 02 30 */	lwz r29, 0x230(r30)
/* 80360440 0035D380  38 61 01 10 */	addi r3, r1, 0x110
/* 80360444 0035D384  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 80360448 0035D388  7F A4 EB 78 */	mr r4, r29
/* 8036044C 0035D38C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80360450 0035D390  C3 85 04 24 */	lfs f28, 0x424(r5)
/* 80360454 0035D394  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360458 0035D398  C3 A5 03 FC */	lfs f29, 0x3fc(r5)
/* 8036045C 0035D39C  C3 C5 03 D4 */	lfs f30, 0x3d4(r5)
/* 80360460 0035D3A0  C3 E5 03 AC */	lfs f31, 0x3ac(r5)
/* 80360464 0035D3A4  7D 89 03 A6 */	mtctr r12
/* 80360468 0035D3A8  4E 80 04 21 */	bctrl 
/* 8036046C 0035D3AC  7F C4 F3 78 */	mr r4, r30
/* 80360470 0035D3B0  C0 41 01 10 */	lfs f2, 0x110(r1)
/* 80360474 0035D3B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80360478 0035D3B8  38 61 01 1C */	addi r3, r1, 0x11c
/* 8036047C 0035D3BC  C0 21 01 14 */	lfs f1, 0x114(r1)
/* 80360480 0035D3C0  C0 01 01 18 */	lfs f0, 0x118(r1)
/* 80360484 0035D3C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360488 0035D3C8  D0 41 00 F8 */	stfs f2, 0xf8(r1)
/* 8036048C 0035D3CC  D0 21 00 FC */	stfs f1, 0xfc(r1)
/* 80360490 0035D3D0  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 80360494 0035D3D4  7D 89 03 A6 */	mtctr r12
/* 80360498 0035D3D8  4E 80 04 21 */	bctrl 
/* 8036049C 0035D3DC  C0 A1 01 1C */	lfs f5, 0x11c(r1)
/* 803604A0 0035D3E0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 803604A4 0035D3E4  C0 61 01 24 */	lfs f3, 0x124(r1)
/* 803604A8 0035D3E8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 803604AC 0035D3EC  C0 21 00 F8 */	lfs f1, 0xf8(r1)
/* 803604B0 0035D3F0  C0 01 01 00 */	lfs f0, 0x100(r1)
/* 803604B4 0035D3F4  C0 81 01 20 */	lfs f4, 0x120(r1)
/* 803604B8 0035D3F8  EC 21 28 28 */	fsubs f1, f1, f5
/* 803604BC 0035D3FC  EC 40 18 28 */	fsubs f2, f0, f3
/* 803604C0 0035D400  D0 A1 01 04 */	stfs f5, 0x104(r1)
/* 803604C4 0035D404  D0 81 01 08 */	stfs f4, 0x108(r1)
/* 803604C8 0035D408  D0 61 01 0C */	stfs f3, 0x10c(r1)
/* 803604CC 0035D40C  4B CD 4C 3D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 803604D0 0035D410  48 0B 17 01 */	bl roundAng__Ff
/* 803604D4 0035D414  81 9E 00 00 */	lwz r12, 0(r30)
/* 803604D8 0035D418  FE C0 08 90 */	fmr f22, f1
/* 803604DC 0035D41C  7F C3 F3 78 */	mr r3, r30
/* 803604E0 0035D420  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803604E4 0035D424  7D 89 03 A6 */	mtctr r12
/* 803604E8 0035D428  4E 80 04 21 */	bctrl 
/* 803604EC 0035D42C  FC 40 08 90 */	fmr f2, f1
/* 803604F0 0035D430  FC 20 B0 90 */	fmr f1, f22
/* 803604F4 0035D434  48 0B 17 09 */	bl angDist__Fff
/* 803604F8 0035D438  7F C4 F3 78 */	mr r4, r30
/* 803604FC 0035D43C  FF 00 08 90 */	fmr f24, f1
/* 80360500 0035D440  81 9E 00 00 */	lwz r12, 0(r30)
/* 80360504 0035D444  38 61 01 34 */	addi r3, r1, 0x134
/* 80360508 0035D448  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036050C 0035D44C  7D 89 03 A6 */	mtctr r12
/* 80360510 0035D450  4E 80 04 21 */	bctrl 
/* 80360514 0035D454  7F A4 EB 78 */	mr r4, r29
/* 80360518 0035D458  38 61 01 28 */	addi r3, r1, 0x128
/* 8036051C 0035D45C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80360520 0035D460  C3 21 01 34 */	lfs f25, 0x134(r1)
/* 80360524 0035D464  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360528 0035D468  7D 89 03 A6 */	mtctr r12
/* 8036052C 0035D46C  4E 80 04 21 */	bctrl 
/* 80360530 0035D470  7F C4 F3 78 */	mr r4, r30
/* 80360534 0035D474  C0 01 01 28 */	lfs f0, 0x128(r1)
/* 80360538 0035D478  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036053C 0035D47C  38 61 01 4C */	addi r3, r1, 0x14c
/* 80360540 0035D480  EE C0 C8 28 */	fsubs f22, f0, f25
/* 80360544 0035D484  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360548 0035D488  7D 89 03 A6 */	mtctr r12
/* 8036054C 0035D48C  4E 80 04 21 */	bctrl 
/* 80360550 0035D490  7F A4 EB 78 */	mr r4, r29
/* 80360554 0035D494  38 61 01 40 */	addi r3, r1, 0x140
/* 80360558 0035D498  81 9D 00 00 */	lwz r12, 0(r29)
/* 8036055C 0035D49C  C3 21 01 50 */	lfs f25, 0x150(r1)
/* 80360560 0035D4A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360564 0035D4A4  7D 89 03 A6 */	mtctr r12
/* 80360568 0035D4A8  4E 80 04 21 */	bctrl 
/* 8036056C 0035D4AC  7F C4 F3 78 */	mr r4, r30
/* 80360570 0035D4B0  C0 01 01 44 */	lfs f0, 0x144(r1)
/* 80360574 0035D4B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80360578 0035D4B8  38 61 01 64 */	addi r3, r1, 0x164
/* 8036057C 0035D4BC  EE E0 C8 28 */	fsubs f23, f0, f25
/* 80360580 0035D4C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360584 0035D4C4  7D 89 03 A6 */	mtctr r12
/* 80360588 0035D4C8  4E 80 04 21 */	bctrl 
/* 8036058C 0035D4CC  7F A4 EB 78 */	mr r4, r29
/* 80360590 0035D4D0  38 61 01 58 */	addi r3, r1, 0x158
/* 80360594 0035D4D4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80360598 0035D4D8  C3 21 01 6C */	lfs f25, 0x16c(r1)
/* 8036059C 0035D4DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803605A0 0035D4E0  7D 89 03 A6 */	mtctr r12
/* 803605A4 0035D4E4  4E 80 04 21 */	bctrl 
/* 803605A8 0035D4E8  C0 01 01 60 */	lfs f0, 0x160(r1)
/* 803605AC 0035D4EC  EC 3F 07 F2 */	fmuls f1, f31, f31
/* 803605B0 0035D4F0  EC 5E 07 B2 */	fmuls f2, f30, f30
/* 803605B4 0035D4F4  38 60 00 01 */	li r3, 1
/* 803605B8 0035D4F8  EC 00 C8 28 */	fsubs f0, f0, f25
/* 803605BC 0035D4FC  38 80 00 00 */	li r4, 0
/* 803605C0 0035D500  EC 00 00 32 */	fmuls f0, f0, f0
/* 803605C4 0035D504  EC 16 05 BA */	fmadds f0, f22, f22, f0
/* 803605C8 0035D508  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803605CC 0035D50C  40 81 00 30 */	ble .L_803605FC
/* 803605D0 0035D510  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 803605D4 0035D514  7C 80 23 78 */	mr r0, r4
/* 803605D8 0035D518  40 81 00 18 */	ble .L_803605F0
/* 803605DC 0035D51C  FC 00 BA 10 */	fabs f0, f23
/* 803605E0 0035D520  FC 00 00 18 */	frsp f0, f0
/* 803605E4 0035D524  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 803605E8 0035D528  40 80 00 08 */	bge .L_803605F0
/* 803605EC 0035D52C  7C 60 1B 78 */	mr r0, r3
.L_803605F0:
/* 803605F0 0035D530  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803605F4 0035D534  41 82 00 08 */	beq .L_803605FC
/* 803605F8 0035D538  38 80 00 01 */	li r4, 1
.L_803605FC:
/* 803605FC 0035D53C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80360600 0035D540  40 82 00 34 */	bne .L_80360634
/* 80360604 0035D544  C0 02 03 F0 */	lfs f0, lbl_8051E750@sda21(r2)
/* 80360608 0035D548  FC 40 C2 10 */	fabs f2, f24
/* 8036060C 0035D54C  C0 22 03 EC */	lfs f1, lbl_8051E74C@sda21(r2)
/* 80360610 0035D550  EC 00 07 32 */	fmuls f0, f0, f28
/* 80360614 0035D554  FC 40 10 18 */	frsp f2, f2
/* 80360618 0035D558  EC 01 00 32 */	fmuls f0, f1, f0
/* 8036061C 0035D55C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80360620 0035D560  4C 40 13 82 */	cror 2, 0, 2
/* 80360624 0035D564  7C 00 00 26 */	mfcr r0
/* 80360628 0035D568  54 00 1F FF */	rlwinm. r0, r0, 3, 0x1f, 0x1f
/* 8036062C 0035D56C  41 82 00 08 */	beq .L_80360634
/* 80360630 0035D570  38 60 00 00 */	li r3, 0
.L_80360634:
/* 80360634 0035D574  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80360638 0035D578  41 82 00 10 */	beq .L_80360648
/* 8036063C 0035D57C  38 00 00 00 */	li r0, 0
/* 80360640 0035D580  90 1E 02 30 */	stw r0, 0x230(r30)
/* 80360644 0035D584  48 00 02 34 */	b .L_80360878
.L_80360648:
/* 80360648 0035D588  83 BE 02 30 */	lwz r29, 0x230(r30)
/* 8036064C 0035D58C  38 61 00 E0 */	addi r3, r1, 0xe0
/* 80360650 0035D590  7F A4 EB 78 */	mr r4, r29
/* 80360654 0035D594  81 9D 00 00 */	lwz r12, 0(r29)
/* 80360658 0035D598  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036065C 0035D59C  7D 89 03 A6 */	mtctr r12
/* 80360660 0035D5A0  4E 80 04 21 */	bctrl 
/* 80360664 0035D5A4  7F C4 F3 78 */	mr r4, r30
/* 80360668 0035D5A8  C0 41 00 E0 */	lfs f2, 0xe0(r1)
/* 8036066C 0035D5AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80360670 0035D5B0  38 61 00 EC */	addi r3, r1, 0xec
/* 80360674 0035D5B4  C0 21 00 E4 */	lfs f1, 0xe4(r1)
/* 80360678 0035D5B8  C0 01 00 E8 */	lfs f0, 0xe8(r1)
/* 8036067C 0035D5BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360680 0035D5C0  D0 41 00 C8 */	stfs f2, 0xc8(r1)
/* 80360684 0035D5C4  D0 21 00 CC */	stfs f1, 0xcc(r1)
/* 80360688 0035D5C8  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 8036068C 0035D5CC  7D 89 03 A6 */	mtctr r12
/* 80360690 0035D5D0  4E 80 04 21 */	bctrl 
/* 80360694 0035D5D4  C0 A1 00 EC */	lfs f5, 0xec(r1)
/* 80360698 0035D5D8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8036069C 0035D5DC  C0 61 00 F4 */	lfs f3, 0xf4(r1)
/* 803606A0 0035D5E0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 803606A4 0035D5E4  C0 21 00 C8 */	lfs f1, 0xc8(r1)
/* 803606A8 0035D5E8  C0 01 00 D0 */	lfs f0, 0xd0(r1)
/* 803606AC 0035D5EC  C0 81 00 F0 */	lfs f4, 0xf0(r1)
/* 803606B0 0035D5F0  EC 21 28 28 */	fsubs f1, f1, f5
/* 803606B4 0035D5F4  EC 40 18 28 */	fsubs f2, f0, f3
/* 803606B8 0035D5F8  D0 A1 00 D4 */	stfs f5, 0xd4(r1)
/* 803606BC 0035D5FC  D0 81 00 D8 */	stfs f4, 0xd8(r1)
/* 803606C0 0035D600  D0 61 00 DC */	stfs f3, 0xdc(r1)
/* 803606C4 0035D604  4B CD 4A 45 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 803606C8 0035D608  48 0B 15 09 */	bl roundAng__Ff
/* 803606CC 0035D60C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803606D0 0035D610  FE C0 08 90 */	fmr f22, f1
/* 803606D4 0035D614  7F C3 F3 78 */	mr r3, r30
/* 803606D8 0035D618  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803606DC 0035D61C  7D 89 03 A6 */	mtctr r12
/* 803606E0 0035D620  4E 80 04 21 */	bctrl 
/* 803606E4 0035D624  FC 40 08 90 */	fmr f2, f1
/* 803606E8 0035D628  FC 20 B0 90 */	fmr f1, f22
/* 803606EC 0035D62C  48 0B 15 11 */	bl angDist__Fff
/* 803606F0 0035D630  7F C4 F3 78 */	mr r4, r30
/* 803606F4 0035D634  FF A0 08 90 */	fmr f29, f1
/* 803606F8 0035D638  81 9E 00 00 */	lwz r12, 0(r30)
/* 803606FC 0035D63C  38 61 00 8C */	addi r3, r1, 0x8c
/* 80360700 0035D640  3B 80 00 00 */	li r28, 0
/* 80360704 0035D644  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360708 0035D648  7D 89 03 A6 */	mtctr r12
/* 8036070C 0035D64C  4E 80 04 21 */	bctrl 
/* 80360710 0035D650  7F A4 EB 78 */	mr r4, r29
/* 80360714 0035D654  38 61 00 80 */	addi r3, r1, 0x80
/* 80360718 0035D658  81 9D 00 00 */	lwz r12, 0(r29)
/* 8036071C 0035D65C  C3 81 00 8C */	lfs f28, 0x8c(r1)
/* 80360720 0035D660  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360724 0035D664  7D 89 03 A6 */	mtctr r12
/* 80360728 0035D668  4E 80 04 21 */	bctrl 
/* 8036072C 0035D66C  7F C4 F3 78 */	mr r4, r30
/* 80360730 0035D670  C0 01 00 80 */	lfs f0, 0x80(r1)
/* 80360734 0035D674  81 9E 00 00 */	lwz r12, 0(r30)
/* 80360738 0035D678  38 61 00 A4 */	addi r3, r1, 0xa4
/* 8036073C 0035D67C  EE E0 E0 28 */	fsubs f23, f0, f28
/* 80360740 0035D680  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360744 0035D684  7D 89 03 A6 */	mtctr r12
/* 80360748 0035D688  4E 80 04 21 */	bctrl 
/* 8036074C 0035D68C  7F A4 EB 78 */	mr r4, r29
/* 80360750 0035D690  38 61 00 98 */	addi r3, r1, 0x98
/* 80360754 0035D694  81 9D 00 00 */	lwz r12, 0(r29)
/* 80360758 0035D698  C3 81 00 A8 */	lfs f28, 0xa8(r1)
/* 8036075C 0035D69C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360760 0035D6A0  7D 89 03 A6 */	mtctr r12
/* 80360764 0035D6A4  4E 80 04 21 */	bctrl 
/* 80360768 0035D6A8  7F C4 F3 78 */	mr r4, r30
/* 8036076C 0035D6AC  C0 01 00 9C */	lfs f0, 0x9c(r1)
/* 80360770 0035D6B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80360774 0035D6B4  38 61 00 BC */	addi r3, r1, 0xbc
/* 80360778 0035D6B8  EE C0 E0 28 */	fsubs f22, f0, f28
/* 8036077C 0035D6BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360780 0035D6C0  7D 89 03 A6 */	mtctr r12
/* 80360784 0035D6C4  4E 80 04 21 */	bctrl 
/* 80360788 0035D6C8  7F A4 EB 78 */	mr r4, r29
/* 8036078C 0035D6CC  38 61 00 B0 */	addi r3, r1, 0xb0
/* 80360790 0035D6D0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80360794 0035D6D4  C3 81 00 C4 */	lfs f28, 0xc4(r1)
/* 80360798 0035D6D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036079C 0035D6DC  7D 89 03 A6 */	mtctr r12
/* 803607A0 0035D6E0  4E 80 04 21 */	bctrl 
/* 803607A4 0035D6E4  EC 36 05 B2 */	fmuls f1, f22, f22
/* 803607A8 0035D6E8  C0 41 00 B8 */	lfs f2, 0xb8(r1)
/* 803607AC 0035D6EC  EC 1B 06 F2 */	fmuls f0, f27, f27
/* 803607B0 0035D6F0  EC 42 E0 28 */	fsubs f2, f2, f28
/* 803607B4 0035D6F4  EC 37 0D FA */	fmadds f1, f23, f23, f1
/* 803607B8 0035D6F8  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 803607BC 0035D6FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803607C0 0035D700  40 80 00 2C */	bge .L_803607EC
/* 803607C4 0035D704  C0 02 03 F0 */	lfs f0, lbl_8051E750@sda21(r2)
/* 803607C8 0035D708  FC 40 EA 10 */	fabs f2, f29
/* 803607CC 0035D70C  C0 22 03 EC */	lfs f1, lbl_8051E74C@sda21(r2)
/* 803607D0 0035D710  EC 00 06 B2 */	fmuls f0, f0, f26
/* 803607D4 0035D714  FC 40 10 18 */	frsp f2, f2
/* 803607D8 0035D718  EC 01 00 32 */	fmuls f0, f1, f0
/* 803607DC 0035D71C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803607E0 0035D720  4C 40 13 82 */	cror 2, 0, 2
/* 803607E4 0035D724  40 82 00 08 */	bne .L_803607EC
/* 803607E8 0035D728  3B 80 00 01 */	li r28, 1
.L_803607EC:
/* 803607EC 0035D72C  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 803607F0 0035D730  41 82 00 88 */	beq .L_80360878
/* 803607F4 0035D734  80 9E 02 30 */	lwz r4, 0x230(r30)
/* 803607F8 0035D738  38 61 01 7C */	addi r3, r1, 0x17c
/* 803607FC 0035D73C  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 80360800 0035D740  81 84 00 00 */	lwz r12, 0(r4)
/* 80360804 0035D744  C2 C5 08 E4 */	lfs f22, 0x8e4(r5)
/* 80360808 0035D748  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036080C 0035D74C  7D 89 03 A6 */	mtctr r12
/* 80360810 0035D750  4E 80 04 21 */	bctrl 
/* 80360814 0035D754  C0 5E 01 94 */	lfs f2, 0x194(r30)
/* 80360818 0035D758  EC 16 05 B2 */	fmuls f0, f22, f22
/* 8036081C 0035D75C  C0 21 01 84 */	lfs f1, 0x184(r1)
/* 80360820 0035D760  C0 7E 01 8C */	lfs f3, 0x18c(r30)
/* 80360824 0035D764  EC 42 08 28 */	fsubs f2, f2, f1
/* 80360828 0035D768  C0 21 01 7C */	lfs f1, 0x17c(r1)
/* 8036082C 0035D76C  EC 63 08 28 */	fsubs f3, f3, f1
/* 80360830 0035D770  EC 22 00 B2 */	fmuls f1, f2, f2
/* 80360834 0035D774  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 80360838 0035D778  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036083C 0035D77C  40 81 00 34 */	ble .L_80360870
/* 80360840 0035D780  9B FE 02 E4 */	stb r31, 0x2e4(r30)
/* 80360844 0035D784  7F C4 F3 78 */	mr r4, r30
/* 80360848 0035D788  38 A0 00 01 */	li r5, 1
/* 8036084C 0035D78C  38 C0 00 00 */	li r6, 0
/* 80360850 0035D790  80 7E 03 4C */	lwz r3, 0x34c(r30)
/* 80360854 0035D794  81 83 00 00 */	lwz r12, 0(r3)
/* 80360858 0035D798  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036085C 0035D79C  7D 89 03 A6 */	mtctr r12
/* 80360860 0035D7A0  4E 80 04 21 */	bctrl 
/* 80360864 0035D7A4  38 00 00 00 */	li r0, 0
/* 80360868 0035D7A8  90 1E 02 30 */	stw r0, 0x230(r30)
/* 8036086C 0035D7AC  48 00 00 0C */	b .L_80360878
.L_80360870:
/* 80360870 0035D7B0  38 00 00 00 */	li r0, 0
/* 80360874 0035D7B4  90 1E 02 30 */	stw r0, 0x230(r30)
.L_80360878:
/* 80360878 0035D7B8  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036087C 0035D7BC  88 03 0B CB */	lbz r0, 0xbcb(r3)
/* 80360880 0035D7C0  28 00 00 00 */	cmplwi r0, 0
/* 80360884 0035D7C4  41 82 02 9C */	beq .L_80360B20
/* 80360888 0035D7C8  88 1E 00 D8 */	lbz r0, 0xd8(r30)
/* 8036088C 0035D7CC  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80360890 0035D7D0  40 82 00 08 */	bne .L_80360898
/* 80360894 0035D7D4  48 00 02 8C */	b .L_80360B20
.L_80360898:
/* 80360898 0035D7D8  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8036089C 0035D7DC  38 80 00 24 */	li r4, 0x24
/* 803608A0 0035D7E0  4B DA D4 05 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 803608A4 0035D7E4  7C 7B 1B 79 */	or. r27, r3, r3
/* 803608A8 0035D7E8  41 82 02 78 */	beq .L_80360B20
/* 803608AC 0035D7EC  C0 02 03 F0 */	lfs f0, lbl_8051E750@sda21(r2)
/* 803608B0 0035D7F0  EF 9B 06 F2 */	fmuls f28, f27, f27
/* 803608B4 0035D7F4  C0 22 03 EC */	lfs f1, lbl_8051E74C@sda21(r2)
/* 803608B8 0035D7F8  3B 40 00 00 */	li r26, 0
/* 803608BC 0035D7FC  EC 00 06 B2 */	fmuls f0, f0, f26
/* 803608C0 0035D800  EF A1 00 32 */	fmuls f29, f1, f0
/* 803608C4 0035D804  48 00 02 40 */	b .L_80360B04
.L_803608C8:
/* 803608C8 0035D808  7F 63 DB 78 */	mr r3, r27
/* 803608CC 0035D80C  7F 44 D3 78 */	mr r4, r26
/* 803608D0 0035D810  81 9B 00 00 */	lwz r12, 0(r27)
/* 803608D4 0035D814  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 803608D8 0035D818  7D 89 03 A6 */	mtctr r12
/* 803608DC 0035D81C  4E 80 04 21 */	bctrl 
/* 803608E0 0035D820  7C 7C 1B 79 */	or. r28, r3, r3
/* 803608E4 0035D824  41 82 02 1C */	beq .L_80360B00
/* 803608E8 0035D828  4B FE A8 71 */	bl canEat__Q34Game4Bomb3ObjFv
/* 803608EC 0035D82C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803608F0 0035D830  41 82 02 10 */	beq .L_80360B00
/* 803608F4 0035D834  7F 84 E3 78 */	mr r4, r28
/* 803608F8 0035D838  38 61 00 68 */	addi r3, r1, 0x68
/* 803608FC 0035D83C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80360900 0035D840  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360904 0035D844  7D 89 03 A6 */	mtctr r12
/* 80360908 0035D848  4E 80 04 21 */	bctrl 
/* 8036090C 0035D84C  7F C4 F3 78 */	mr r4, r30
/* 80360910 0035D850  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 80360914 0035D854  81 9E 00 00 */	lwz r12, 0(r30)
/* 80360918 0035D858  38 61 00 74 */	addi r3, r1, 0x74
/* 8036091C 0035D85C  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 80360920 0035D860  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80360924 0035D864  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360928 0035D868  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 8036092C 0035D86C  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80360930 0035D870  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80360934 0035D874  7D 89 03 A6 */	mtctr r12
/* 80360938 0035D878  4E 80 04 21 */	bctrl 
/* 8036093C 0035D87C  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 80360940 0035D880  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80360944 0035D884  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 80360948 0035D888  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8036094C 0035D88C  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 80360950 0035D890  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80360954 0035D894  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 80360958 0035D898  EC 21 28 28 */	fsubs f1, f1, f5
/* 8036095C 0035D89C  EC 40 18 28 */	fsubs f2, f0, f3
/* 80360960 0035D8A0  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 80360964 0035D8A4  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 80360968 0035D8A8  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 8036096C 0035D8AC  4B CD 47 9D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80360970 0035D8B0  48 0B 12 61 */	bl roundAng__Ff
/* 80360974 0035D8B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80360978 0035D8B8  FE C0 08 90 */	fmr f22, f1
/* 8036097C 0035D8BC  7F C3 F3 78 */	mr r3, r30
/* 80360980 0035D8C0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80360984 0035D8C4  7D 89 03 A6 */	mtctr r12
/* 80360988 0035D8C8  4E 80 04 21 */	bctrl 
/* 8036098C 0035D8CC  FC 40 08 90 */	fmr f2, f1
/* 80360990 0035D8D0  FC 20 B0 90 */	fmr f1, f22
/* 80360994 0035D8D4  48 0B 12 69 */	bl angDist__Fff
/* 80360998 0035D8D8  7F C4 F3 78 */	mr r4, r30
/* 8036099C 0035D8DC  FF 60 08 90 */	fmr f27, f1
/* 803609A0 0035D8E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803609A4 0035D8E4  38 61 00 14 */	addi r3, r1, 0x14
/* 803609A8 0035D8E8  3B A0 00 00 */	li r29, 0
/* 803609AC 0035D8EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803609B0 0035D8F0  7D 89 03 A6 */	mtctr r12
/* 803609B4 0035D8F4  4E 80 04 21 */	bctrl 
/* 803609B8 0035D8F8  7F 84 E3 78 */	mr r4, r28
/* 803609BC 0035D8FC  38 61 00 08 */	addi r3, r1, 8
/* 803609C0 0035D900  81 9C 00 00 */	lwz r12, 0(r28)
/* 803609C4 0035D904  C3 41 00 14 */	lfs f26, 0x14(r1)
/* 803609C8 0035D908  81 8C 00 08 */	lwz r12, 8(r12)
/* 803609CC 0035D90C  7D 89 03 A6 */	mtctr r12
/* 803609D0 0035D910  4E 80 04 21 */	bctrl 
/* 803609D4 0035D914  7F C4 F3 78 */	mr r4, r30
/* 803609D8 0035D918  C0 01 00 08 */	lfs f0, 8(r1)
/* 803609DC 0035D91C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803609E0 0035D920  38 61 00 2C */	addi r3, r1, 0x2c
/* 803609E4 0035D924  EE E0 D0 28 */	fsubs f23, f0, f26
/* 803609E8 0035D928  81 8C 00 08 */	lwz r12, 8(r12)
/* 803609EC 0035D92C  7D 89 03 A6 */	mtctr r12
/* 803609F0 0035D930  4E 80 04 21 */	bctrl 
/* 803609F4 0035D934  7F 84 E3 78 */	mr r4, r28
/* 803609F8 0035D938  38 61 00 20 */	addi r3, r1, 0x20
/* 803609FC 0035D93C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80360A00 0035D940  C3 41 00 30 */	lfs f26, 0x30(r1)
/* 80360A04 0035D944  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360A08 0035D948  7D 89 03 A6 */	mtctr r12
/* 80360A0C 0035D94C  4E 80 04 21 */	bctrl 
/* 80360A10 0035D950  7F C4 F3 78 */	mr r4, r30
/* 80360A14 0035D954  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80360A18 0035D958  81 9E 00 00 */	lwz r12, 0(r30)
/* 80360A1C 0035D95C  38 61 00 44 */	addi r3, r1, 0x44
/* 80360A20 0035D960  EE C0 D0 28 */	fsubs f22, f0, f26
/* 80360A24 0035D964  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360A28 0035D968  7D 89 03 A6 */	mtctr r12
/* 80360A2C 0035D96C  4E 80 04 21 */	bctrl 
/* 80360A30 0035D970  7F 84 E3 78 */	mr r4, r28
/* 80360A34 0035D974  38 61 00 38 */	addi r3, r1, 0x38
/* 80360A38 0035D978  81 9C 00 00 */	lwz r12, 0(r28)
/* 80360A3C 0035D97C  C3 41 00 4C */	lfs f26, 0x4c(r1)
/* 80360A40 0035D980  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360A44 0035D984  7D 89 03 A6 */	mtctr r12
/* 80360A48 0035D988  4E 80 04 21 */	bctrl 
/* 80360A4C 0035D98C  EC 16 05 B2 */	fmuls f0, f22, f22
/* 80360A50 0035D990  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 80360A54 0035D994  EC 21 D0 28 */	fsubs f1, f1, f26
/* 80360A58 0035D998  EC 17 05 FA */	fmadds f0, f23, f23, f0
/* 80360A5C 0035D99C  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 80360A60 0035D9A0  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80360A64 0035D9A4  40 80 00 1C */	bge .L_80360A80
/* 80360A68 0035D9A8  FC 00 DA 10 */	fabs f0, f27
/* 80360A6C 0035D9AC  FC 00 00 18 */	frsp f0, f0
/* 80360A70 0035D9B0  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 80360A74 0035D9B4  4C 40 13 82 */	cror 2, 0, 2
/* 80360A78 0035D9B8  40 82 00 08 */	bne .L_80360A80
/* 80360A7C 0035D9BC  3B A0 00 01 */	li r29, 1
.L_80360A80:
/* 80360A80 0035D9C0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80360A84 0035D9C4  41 82 00 7C */	beq .L_80360B00
/* 80360A88 0035D9C8  7F 84 E3 78 */	mr r4, r28
/* 80360A8C 0035D9CC  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 80360A90 0035D9D0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80360A94 0035D9D4  38 61 01 70 */	addi r3, r1, 0x170
/* 80360A98 0035D9D8  C2 C5 08 E4 */	lfs f22, 0x8e4(r5)
/* 80360A9C 0035D9DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360AA0 0035D9E0  7D 89 03 A6 */	mtctr r12
/* 80360AA4 0035D9E4  4E 80 04 21 */	bctrl 
/* 80360AA8 0035D9E8  C0 5E 01 94 */	lfs f2, 0x194(r30)
/* 80360AAC 0035D9EC  EC 16 05 B2 */	fmuls f0, f22, f22
/* 80360AB0 0035D9F0  C0 21 01 78 */	lfs f1, 0x178(r1)
/* 80360AB4 0035D9F4  C0 7E 01 8C */	lfs f3, 0x18c(r30)
/* 80360AB8 0035D9F8  EC 42 08 28 */	fsubs f2, f2, f1
/* 80360ABC 0035D9FC  C0 21 01 70 */	lfs f1, 0x170(r1)
/* 80360AC0 0035DA00  EC 63 08 28 */	fsubs f3, f3, f1
/* 80360AC4 0035DA04  EC 22 00 B2 */	fmuls f1, f2, f2
/* 80360AC8 0035DA08  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 80360ACC 0035DA0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80360AD0 0035DA10  40 81 00 30 */	ble .L_80360B00
/* 80360AD4 0035DA14  9B FE 02 E4 */	stb r31, 0x2e4(r30)
/* 80360AD8 0035DA18  7F C4 F3 78 */	mr r4, r30
/* 80360ADC 0035DA1C  38 A0 00 01 */	li r5, 1
/* 80360AE0 0035DA20  38 C0 00 00 */	li r6, 0
/* 80360AE4 0035DA24  80 7E 03 4C */	lwz r3, 0x34c(r30)
/* 80360AE8 0035DA28  81 83 00 00 */	lwz r12, 0(r3)
/* 80360AEC 0035DA2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80360AF0 0035DA30  7D 89 03 A6 */	mtctr r12
/* 80360AF4 0035DA34  4E 80 04 21 */	bctrl 
/* 80360AF8 0035DA38  38 00 00 00 */	li r0, 0
/* 80360AFC 0035DA3C  90 1E 02 30 */	stw r0, 0x230(r30)
.L_80360B00:
/* 80360B00 0035DA40  3B 5A 00 01 */	addi r26, r26, 1
.L_80360B04:
/* 80360B04 0035DA44  7F 63 DB 78 */	mr r3, r27
/* 80360B08 0035DA48  81 9B 00 00 */	lwz r12, 0(r27)
/* 80360B0C 0035DA4C  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80360B10 0035DA50  7D 89 03 A6 */	mtctr r12
/* 80360B14 0035DA54  4E 80 04 21 */	bctrl 
/* 80360B18 0035DA58  7C 1A 18 00 */	cmpw r26, r3
/* 80360B1C 0035DA5C  41 80 FD AC */	blt .L_803608C8
.L_80360B20:
/* 80360B20 0035DA60  E3 E1 02 38 */	psq_l f31, 568(r1), 0, qr0
/* 80360B24 0035DA64  CB E1 02 30 */	lfd f31, 0x230(r1)
/* 80360B28 0035DA68  E3 C1 02 28 */	psq_l f30, 552(r1), 0, qr0
/* 80360B2C 0035DA6C  CB C1 02 20 */	lfd f30, 0x220(r1)
/* 80360B30 0035DA70  E3 A1 02 18 */	psq_l f29, 536(r1), 0, qr0
/* 80360B34 0035DA74  CB A1 02 10 */	lfd f29, 0x210(r1)
/* 80360B38 0035DA78  E3 81 02 08 */	psq_l f28, 520(r1), 0, qr0
/* 80360B3C 0035DA7C  CB 81 02 00 */	lfd f28, 0x200(r1)
/* 80360B40 0035DA80  E3 61 01 F8 */	psq_l f27, 504(r1), 0, qr0
/* 80360B44 0035DA84  CB 61 01 F0 */	lfd f27, 0x1f0(r1)
/* 80360B48 0035DA88  E3 41 01 E8 */	psq_l f26, 488(r1), 0, qr0
/* 80360B4C 0035DA8C  CB 41 01 E0 */	lfd f26, 0x1e0(r1)
/* 80360B50 0035DA90  E3 21 01 D8 */	psq_l f25, 472(r1), 0, qr0
/* 80360B54 0035DA94  CB 21 01 D0 */	lfd f25, 0x1d0(r1)
/* 80360B58 0035DA98  E3 01 01 C8 */	psq_l f24, 456(r1), 0, qr0
/* 80360B5C 0035DA9C  CB 01 01 C0 */	lfd f24, 0x1c0(r1)
/* 80360B60 0035DAA0  E2 E1 01 B8 */	psq_l f23, 440(r1), 0, qr0
/* 80360B64 0035DAA4  CA E1 01 B0 */	lfd f23, 0x1b0(r1)
/* 80360B68 0035DAA8  E2 C1 01 A8 */	psq_l f22, 424(r1), 0, qr0
/* 80360B6C 0035DAAC  CA C1 01 A0 */	lfd f22, 0x1a0(r1)
/* 80360B70 0035DAB0  BB 41 01 88 */	lmw r26, 0x188(r1)
/* 80360B74 0035DAB4  80 01 02 44 */	lwz r0, 0x244(r1)
/* 80360B78 0035DAB8  7C 08 03 A6 */	mtlr r0
/* 80360B7C 0035DABC  38 21 02 40 */	addi r1, r1, 0x240
/* 80360B80 0035DAC0  4E 80 00 20 */	blr 
.endfn checkAttack__Q34Game10KingChappy3ObjFb

.fn checkFlick__Q34Game10KingChappy3ObjFb, global
/* 80360B84 0035DAC4  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 80360B88 0035DAC8  7C 08 02 A6 */	mflr r0
/* 80360B8C 0035DACC  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80360B90 0035DAD0  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 80360B94 0035DAD4  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 80360B98 0035DAD8  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 80360B9C 0035DADC  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 80360BA0 0035DAE0  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 80360BA4 0035DAE4  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 80360BA8 0035DAE8  DB 81 00 80 */	stfd f28, 0x80(r1)
/* 80360BAC 0035DAEC  F3 81 00 88 */	psq_st f28, 136(r1), 0, qr0
/* 80360BB0 0035DAF0  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80360BB4 0035DAF4  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80360BB8 0035DAF8  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80360BBC 0035DAFC  7C 7E 1B 78 */	mr r30, r3
/* 80360BC0 0035DB00  7C 9F 23 78 */	mr r31, r4
/* 80360BC4 0035DB04  4B DA 68 31 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80360BC8 0035DB08  2C 03 00 02 */	cmpwi r3, 2
/* 80360BCC 0035DB0C  41 82 03 A8 */	beq .L_80360F74
/* 80360BD0 0035DB10  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80360BD4 0035DB14  41 82 00 14 */	beq .L_80360BE8
/* 80360BD8 0035DB18  80 7E 01 84 */	lwz r3, 0x184(r30)
/* 80360BDC 0035DB1C  88 03 00 58 */	lbz r0, 0x58(r3)
/* 80360BE0 0035DB20  28 00 00 00 */	cmplwi r0, 0
/* 80360BE4 0035DB24  40 82 03 90 */	bne .L_80360F74
.L_80360BE8:
/* 80360BE8 0035DB28  38 00 00 00 */	li r0, 0
/* 80360BEC 0035DB2C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80360BF0 0035DB30  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 80360BF4 0035DB34  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80360BF8 0035DB38  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 80360BFC 0035DB3C  28 00 00 00 */	cmplwi r0, 0
/* 80360C00 0035DB40  90 81 00 50 */	stw r4, 0x50(r1)
/* 80360C04 0035DB44  90 01 00 54 */	stw r0, 0x54(r1)
/* 80360C08 0035DB48  90 61 00 58 */	stw r3, 0x58(r1)
/* 80360C0C 0035DB4C  40 82 00 1C */	bne .L_80360C28
/* 80360C10 0035DB50  81 83 00 00 */	lwz r12, 0(r3)
/* 80360C14 0035DB54  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80360C18 0035DB58  7D 89 03 A6 */	mtctr r12
/* 80360C1C 0035DB5C  4E 80 04 21 */	bctrl 
/* 80360C20 0035DB60  90 61 00 54 */	stw r3, 0x54(r1)
/* 80360C24 0035DB64  48 00 02 60 */	b .L_80360E84
.L_80360C28:
/* 80360C28 0035DB68  81 83 00 00 */	lwz r12, 0(r3)
/* 80360C2C 0035DB6C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80360C30 0035DB70  7D 89 03 A6 */	mtctr r12
/* 80360C34 0035DB74  4E 80 04 21 */	bctrl 
/* 80360C38 0035DB78  90 61 00 54 */	stw r3, 0x54(r1)
/* 80360C3C 0035DB7C  48 00 00 58 */	b .L_80360C94
.L_80360C40:
/* 80360C40 0035DB80  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80360C44 0035DB84  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80360C48 0035DB88  81 83 00 00 */	lwz r12, 0(r3)
/* 80360C4C 0035DB8C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80360C50 0035DB90  7D 89 03 A6 */	mtctr r12
/* 80360C54 0035DB94  4E 80 04 21 */	bctrl 
/* 80360C58 0035DB98  7C 64 1B 78 */	mr r4, r3
/* 80360C5C 0035DB9C  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 80360C60 0035DBA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80360C64 0035DBA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360C68 0035DBA8  7D 89 03 A6 */	mtctr r12
/* 80360C6C 0035DBAC  4E 80 04 21 */	bctrl 
/* 80360C70 0035DBB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80360C74 0035DBB4  40 82 02 10 */	bne .L_80360E84
/* 80360C78 0035DBB8  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80360C7C 0035DBBC  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80360C80 0035DBC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80360C84 0035DBC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80360C88 0035DBC8  7D 89 03 A6 */	mtctr r12
/* 80360C8C 0035DBCC  4E 80 04 21 */	bctrl 
/* 80360C90 0035DBD0  90 61 00 54 */	stw r3, 0x54(r1)
.L_80360C94:
/* 80360C94 0035DBD4  81 81 00 50 */	lwz r12, 0x50(r1)
/* 80360C98 0035DBD8  38 61 00 50 */	addi r3, r1, 0x50
/* 80360C9C 0035DBDC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80360CA0 0035DBE0  7D 89 03 A6 */	mtctr r12
/* 80360CA4 0035DBE4  4E 80 04 21 */	bctrl 
/* 80360CA8 0035DBE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80360CAC 0035DBEC  41 82 FF 94 */	beq .L_80360C40
/* 80360CB0 0035DBF0  48 00 01 D4 */	b .L_80360E84
.L_80360CB4:
/* 80360CB4 0035DBF4  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80360CB8 0035DBF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80360CBC 0035DBFC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80360CC0 0035DC00  7D 89 03 A6 */	mtctr r12
/* 80360CC4 0035DC04  4E 80 04 21 */	bctrl 
/* 80360CC8 0035DC08  81 83 00 00 */	lwz r12, 0(r3)
/* 80360CCC 0035DC0C  7C 7D 1B 78 */	mr r29, r3
/* 80360CD0 0035DC10  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80360CD4 0035DC14  7D 89 03 A6 */	mtctr r12
/* 80360CD8 0035DC18  4E 80 04 21 */	bctrl 
/* 80360CDC 0035DC1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80360CE0 0035DC20  41 82 00 E8 */	beq .L_80360DC8
/* 80360CE4 0035DC24  7F A4 EB 78 */	mr r4, r29
/* 80360CE8 0035DC28  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 80360CEC 0035DC2C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80360CF0 0035DC30  38 61 00 14 */	addi r3, r1, 0x14
/* 80360CF4 0035DC34  C3 85 08 E4 */	lfs f28, 0x8e4(r5)
/* 80360CF8 0035DC38  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360CFC 0035DC3C  7D 89 03 A6 */	mtctr r12
/* 80360D00 0035DC40  4E 80 04 21 */	bctrl 
/* 80360D04 0035DC44  7F C4 F3 78 */	mr r4, r30
/* 80360D08 0035DC48  38 61 00 08 */	addi r3, r1, 8
/* 80360D0C 0035DC4C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80360D10 0035DC50  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 80360D14 0035DC54  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360D18 0035DC58  7D 89 03 A6 */	mtctr r12
/* 80360D1C 0035DC5C  4E 80 04 21 */	bctrl 
/* 80360D20 0035DC60  7F A4 EB 78 */	mr r4, r29
/* 80360D24 0035DC64  C0 01 00 08 */	lfs f0, 8(r1)
/* 80360D28 0035DC68  81 9D 00 00 */	lwz r12, 0(r29)
/* 80360D2C 0035DC6C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80360D30 0035DC70  EF A0 F8 28 */	fsubs f29, f0, f31
/* 80360D34 0035DC74  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360D38 0035DC78  7D 89 03 A6 */	mtctr r12
/* 80360D3C 0035DC7C  4E 80 04 21 */	bctrl 
/* 80360D40 0035DC80  7F C4 F3 78 */	mr r4, r30
/* 80360D44 0035DC84  38 61 00 20 */	addi r3, r1, 0x20
/* 80360D48 0035DC88  81 9E 00 00 */	lwz r12, 0(r30)
/* 80360D4C 0035DC8C  C3 E1 00 30 */	lfs f31, 0x30(r1)
/* 80360D50 0035DC90  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360D54 0035DC94  7D 89 03 A6 */	mtctr r12
/* 80360D58 0035DC98  4E 80 04 21 */	bctrl 
/* 80360D5C 0035DC9C  7F A4 EB 78 */	mr r4, r29
/* 80360D60 0035DCA0  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80360D64 0035DCA4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80360D68 0035DCA8  38 61 00 44 */	addi r3, r1, 0x44
/* 80360D6C 0035DCAC  EF C0 F8 28 */	fsubs f30, f0, f31
/* 80360D70 0035DCB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360D74 0035DCB4  7D 89 03 A6 */	mtctr r12
/* 80360D78 0035DCB8  4E 80 04 21 */	bctrl 
/* 80360D7C 0035DCBC  7F C4 F3 78 */	mr r4, r30
/* 80360D80 0035DCC0  38 61 00 38 */	addi r3, r1, 0x38
/* 80360D84 0035DCC4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80360D88 0035DCC8  C3 E1 00 4C */	lfs f31, 0x4c(r1)
/* 80360D8C 0035DCCC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360D90 0035DCD0  7D 89 03 A6 */	mtctr r12
/* 80360D94 0035DCD4  4E 80 04 21 */	bctrl 
/* 80360D98 0035DCD8  EC 3E 07 B2 */	fmuls f1, f30, f30
/* 80360D9C 0035DCDC  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80360DA0 0035DCE0  EC 1C 07 32 */	fmuls f0, f28, f28
/* 80360DA4 0035DCE4  EC 42 F8 28 */	fsubs f2, f2, f31
/* 80360DA8 0035DCE8  EC 3D 0F 7A */	fmadds f1, f29, f29, f1
/* 80360DAC 0035DCEC  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80360DB0 0035DCF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80360DB4 0035DCF4  40 80 00 14 */	bge .L_80360DC8
/* 80360DB8 0035DCF8  C0 3E 02 0C */	lfs f1, 0x20c(r30)
/* 80360DBC 0035DCFC  C0 02 03 68 */	lfs f0, lbl_8051E6C8@sda21(r2)
/* 80360DC0 0035DD00  EC 01 00 2A */	fadds f0, f1, f0
/* 80360DC4 0035DD04  D0 1E 02 0C */	stfs f0, 0x20c(r30)
.L_80360DC8:
/* 80360DC8 0035DD08  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 80360DCC 0035DD0C  28 00 00 00 */	cmplwi r0, 0
/* 80360DD0 0035DD10  40 82 00 24 */	bne .L_80360DF4
/* 80360DD4 0035DD14  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80360DD8 0035DD18  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80360DDC 0035DD1C  81 83 00 00 */	lwz r12, 0(r3)
/* 80360DE0 0035DD20  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80360DE4 0035DD24  7D 89 03 A6 */	mtctr r12
/* 80360DE8 0035DD28  4E 80 04 21 */	bctrl 
/* 80360DEC 0035DD2C  90 61 00 54 */	stw r3, 0x54(r1)
/* 80360DF0 0035DD30  48 00 00 94 */	b .L_80360E84
.L_80360DF4:
/* 80360DF4 0035DD34  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80360DF8 0035DD38  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80360DFC 0035DD3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80360E00 0035DD40  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80360E04 0035DD44  7D 89 03 A6 */	mtctr r12
/* 80360E08 0035DD48  4E 80 04 21 */	bctrl 
/* 80360E0C 0035DD4C  90 61 00 54 */	stw r3, 0x54(r1)
/* 80360E10 0035DD50  48 00 00 58 */	b .L_80360E68
.L_80360E14:
/* 80360E14 0035DD54  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80360E18 0035DD58  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80360E1C 0035DD5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80360E20 0035DD60  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80360E24 0035DD64  7D 89 03 A6 */	mtctr r12
/* 80360E28 0035DD68  4E 80 04 21 */	bctrl 
/* 80360E2C 0035DD6C  7C 64 1B 78 */	mr r4, r3
/* 80360E30 0035DD70  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 80360E34 0035DD74  81 83 00 00 */	lwz r12, 0(r3)
/* 80360E38 0035DD78  81 8C 00 08 */	lwz r12, 8(r12)
/* 80360E3C 0035DD7C  7D 89 03 A6 */	mtctr r12
/* 80360E40 0035DD80  4E 80 04 21 */	bctrl 
/* 80360E44 0035DD84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80360E48 0035DD88  40 82 00 3C */	bne .L_80360E84
/* 80360E4C 0035DD8C  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80360E50 0035DD90  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80360E54 0035DD94  81 83 00 00 */	lwz r12, 0(r3)
/* 80360E58 0035DD98  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80360E5C 0035DD9C  7D 89 03 A6 */	mtctr r12
/* 80360E60 0035DDA0  4E 80 04 21 */	bctrl 
/* 80360E64 0035DDA4  90 61 00 54 */	stw r3, 0x54(r1)
.L_80360E68:
/* 80360E68 0035DDA8  81 81 00 50 */	lwz r12, 0x50(r1)
/* 80360E6C 0035DDAC  38 61 00 50 */	addi r3, r1, 0x50
/* 80360E70 0035DDB0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80360E74 0035DDB4  7D 89 03 A6 */	mtctr r12
/* 80360E78 0035DDB8  4E 80 04 21 */	bctrl 
/* 80360E7C 0035DDBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80360E80 0035DDC0  41 82 FF 94 */	beq .L_80360E14
.L_80360E84:
/* 80360E84 0035DDC4  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80360E88 0035DDC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80360E8C 0035DDCC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80360E90 0035DDD0  7D 89 03 A6 */	mtctr r12
/* 80360E94 0035DDD4  4E 80 04 21 */	bctrl 
/* 80360E98 0035DDD8  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80360E9C 0035DDDC  7C 04 18 40 */	cmplw r4, r3
/* 80360EA0 0035DDE0  40 82 FE 14 */	bne .L_80360CB4
/* 80360EA4 0035DDE4  7F C3 F3 78 */	mr r3, r30
/* 80360EA8 0035DDE8  38 80 00 00 */	li r4, 0
/* 80360EAC 0035DDEC  4B DB 37 AD */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80360EB0 0035DDF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80360EB4 0035DDF4  41 82 00 C0 */	beq .L_80360F74
/* 80360EB8 0035DDF8  9B FE 02 E4 */	stb r31, 0x2e4(r30)
/* 80360EBC 0035DDFC  C0 22 03 FC */	lfs f1, lbl_8051E75C@sda21(r2)
/* 80360EC0 0035DE00  83 BE 00 C0 */	lwz r29, 0xc0(r30)
/* 80360EC4 0035DE04  C0 5E 02 00 */	lfs f2, 0x200(r30)
/* 80360EC8 0035DE08  C0 1D 01 04 */	lfs f0, 0x104(r29)
/* 80360ECC 0035DE0C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80360ED0 0035DE10  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80360ED4 0035DE14  40 80 00 80 */	bge .L_80360F54
/* 80360ED8 0035DE18  4B D6 86 C9 */	bl rand
/* 80360EDC 0035DE1C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80360EE0 0035DE20  3C 00 43 30 */	lis r0, 0x4330
/* 80360EE4 0035DE24  90 61 00 64 */	stw r3, 0x64(r1)
/* 80360EE8 0035DE28  C8 62 03 E0 */	lfd f3, lbl_8051E740@sda21(r2)
/* 80360EEC 0035DE2C  90 01 00 60 */	stw r0, 0x60(r1)
/* 80360EF0 0035DE30  C0 22 03 D0 */	lfs f1, lbl_8051E730@sda21(r2)
/* 80360EF4 0035DE34  C8 41 00 60 */	lfd f2, 0x60(r1)
/* 80360EF8 0035DE38  C0 1D 09 FC */	lfs f0, 0x9fc(r29)
/* 80360EFC 0035DE3C  EC 42 18 28 */	fsubs f2, f2, f3
/* 80360F00 0035DE40  EC 22 08 24 */	fdivs f1, f2, f1
/* 80360F04 0035DE44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80360F08 0035DE48  40 80 00 28 */	bge .L_80360F30
/* 80360F0C 0035DE4C  80 7E 03 4C */	lwz r3, 0x34c(r30)
/* 80360F10 0035DE50  7F C4 F3 78 */	mr r4, r30
/* 80360F14 0035DE54  38 A0 00 04 */	li r5, 4
/* 80360F18 0035DE58  38 C0 00 00 */	li r6, 0
/* 80360F1C 0035DE5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80360F20 0035DE60  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80360F24 0035DE64  7D 89 03 A6 */	mtctr r12
/* 80360F28 0035DE68  4E 80 04 21 */	bctrl 
/* 80360F2C 0035DE6C  48 00 00 48 */	b .L_80360F74
.L_80360F30:
/* 80360F30 0035DE70  80 7E 03 4C */	lwz r3, 0x34c(r30)
/* 80360F34 0035DE74  7F C4 F3 78 */	mr r4, r30
/* 80360F38 0035DE78  38 A0 00 03 */	li r5, 3
/* 80360F3C 0035DE7C  38 C0 00 00 */	li r6, 0
/* 80360F40 0035DE80  81 83 00 00 */	lwz r12, 0(r3)
/* 80360F44 0035DE84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80360F48 0035DE88  7D 89 03 A6 */	mtctr r12
/* 80360F4C 0035DE8C  4E 80 04 21 */	bctrl 
/* 80360F50 0035DE90  48 00 00 24 */	b .L_80360F74
.L_80360F54:
/* 80360F54 0035DE94  80 7E 03 4C */	lwz r3, 0x34c(r30)
/* 80360F58 0035DE98  7F C4 F3 78 */	mr r4, r30
/* 80360F5C 0035DE9C  38 A0 00 03 */	li r5, 3
/* 80360F60 0035DEA0  38 C0 00 00 */	li r6, 0
/* 80360F64 0035DEA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80360F68 0035DEA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80360F6C 0035DEAC  7D 89 03 A6 */	mtctr r12
/* 80360F70 0035DEB0  4E 80 04 21 */	bctrl 
.L_80360F74:
/* 80360F74 0035DEB4  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 80360F78 0035DEB8  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 80360F7C 0035DEBC  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 80360F80 0035DEC0  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 80360F84 0035DEC4  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 80360F88 0035DEC8  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 80360F8C 0035DECC  E3 81 00 88 */	psq_l f28, 136(r1), 0, qr0
/* 80360F90 0035DED0  CB 81 00 80 */	lfd f28, 0x80(r1)
/* 80360F94 0035DED4  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80360F98 0035DED8  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80360F9C 0035DEDC  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 80360FA0 0035DEE0  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80360FA4 0035DEE4  7C 08 03 A6 */	mtlr r0
/* 80360FA8 0035DEE8  38 21 00 C0 */	addi r1, r1, 0xc0
/* 80360FAC 0035DEEC  4E 80 00 20 */	blr 
.endfn checkFlick__Q34Game10KingChappy3ObjFb

.fn checkDead__Q34Game10KingChappy3ObjFb, global
/* 80360FB0 0035DEF0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80360FB4 0035DEF4  7C 08 02 A6 */	mflr r0
/* 80360FB8 0035DEF8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80360FBC 0035DEFC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80360FC0 0035DF00  7C 9F 23 78 */	mr r31, r4
/* 80360FC4 0035DF04  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80360FC8 0035DF08  7C 7E 1B 78 */	mr r30, r3
/* 80360FCC 0035DF0C  4B DA 64 29 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80360FD0 0035DF10  2C 03 00 02 */	cmpwi r3, 2
/* 80360FD4 0035DF14  41 82 00 B0 */	beq .L_80361084
/* 80360FD8 0035DF18  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80360FDC 0035DF1C  41 82 00 14 */	beq .L_80360FF0
/* 80360FE0 0035DF20  80 7E 01 84 */	lwz r3, 0x184(r30)
/* 80360FE4 0035DF24  88 03 00 58 */	lbz r0, 0x58(r3)
/* 80360FE8 0035DF28  28 00 00 00 */	cmplwi r0, 0
/* 80360FEC 0035DF2C  40 82 00 98 */	bne .L_80361084
.L_80360FF0:
/* 80360FF0 0035DF30  C0 3E 02 00 */	lfs f1, 0x200(r30)
/* 80360FF4 0035DF34  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 80360FF8 0035DF38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80360FFC 0035DF3C  4C 40 13 82 */	cror 2, 0, 2
/* 80361000 0035DF40  40 82 00 84 */	bne .L_80361084
/* 80361004 0035DF44  9B FE 02 E4 */	stb r31, 0x2e4(r30)
/* 80361008 0035DF48  83 FE 00 C0 */	lwz r31, 0xc0(r30)
/* 8036100C 0035DF4C  4B D6 85 95 */	bl rand
/* 80361010 0035DF50  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80361014 0035DF54  3C 00 43 30 */	lis r0, 0x4330
/* 80361018 0035DF58  90 61 00 0C */	stw r3, 0xc(r1)
/* 8036101C 0035DF5C  C8 62 03 E0 */	lfd f3, lbl_8051E740@sda21(r2)
/* 80361020 0035DF60  90 01 00 08 */	stw r0, 8(r1)
/* 80361024 0035DF64  C0 22 03 D0 */	lfs f1, lbl_8051E730@sda21(r2)
/* 80361028 0035DF68  C8 41 00 08 */	lfd f2, 8(r1)
/* 8036102C 0035DF6C  C0 1F 09 D4 */	lfs f0, 0x9d4(r31)
/* 80361030 0035DF70  EC 42 18 28 */	fsubs f2, f2, f3
/* 80361034 0035DF74  EC 22 08 24 */	fdivs f1, f2, f1
/* 80361038 0035DF78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036103C 0035DF7C  40 80 00 28 */	bge .L_80361064
/* 80361040 0035DF80  80 7E 03 4C */	lwz r3, 0x34c(r30)
/* 80361044 0035DF84  7F C4 F3 78 */	mr r4, r30
/* 80361048 0035DF88  38 A0 00 04 */	li r5, 4
/* 8036104C 0035DF8C  38 C0 00 00 */	li r6, 0
/* 80361050 0035DF90  81 83 00 00 */	lwz r12, 0(r3)
/* 80361054 0035DF94  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80361058 0035DF98  7D 89 03 A6 */	mtctr r12
/* 8036105C 0035DF9C  4E 80 04 21 */	bctrl 
/* 80361060 0035DFA0  48 00 00 24 */	b .L_80361084
.L_80361064:
/* 80361064 0035DFA4  80 7E 03 4C */	lwz r3, 0x34c(r30)
/* 80361068 0035DFA8  7F C4 F3 78 */	mr r4, r30
/* 8036106C 0035DFAC  38 A0 00 02 */	li r5, 2
/* 80361070 0035DFB0  38 C0 00 00 */	li r6, 0
/* 80361074 0035DFB4  81 83 00 00 */	lwz r12, 0(r3)
/* 80361078 0035DFB8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036107C 0035DFBC  7D 89 03 A6 */	mtctr r12
/* 80361080 0035DFC0  4E 80 04 21 */	bctrl 
.L_80361084:
/* 80361084 0035DFC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80361088 0035DFC8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8036108C 0035DFCC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80361090 0035DFD0  7C 08 03 A6 */	mtlr r0
/* 80361094 0035DFD4  38 21 00 20 */	addi r1, r1, 0x20
/* 80361098 0035DFD8  4E 80 00 20 */	blr 
.endfn checkDead__Q34Game10KingChappy3ObjFb

.fn checkTurn__Q34Game10KingChappy3ObjFb, global
/* 8036109C 0035DFDC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803610A0 0035DFE0  7C 08 02 A6 */	mflr r0
/* 803610A4 0035DFE4  90 01 00 44 */	stw r0, 0x44(r1)
/* 803610A8 0035DFE8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 803610AC 0035DFEC  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 803610B0 0035DFF0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803610B4 0035DFF4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803610B8 0035DFF8  7C 7E 1B 78 */	mr r30, r3
/* 803610BC 0035DFFC  7C 9F 23 78 */	mr r31, r4
/* 803610C0 0035E000  4B DA 63 35 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803610C4 0035E004  2C 03 00 02 */	cmpwi r3, 2
/* 803610C8 0035E008  41 82 00 DC */	beq .L_803611A4
/* 803610CC 0035E00C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803610D0 0035E010  41 82 00 14 */	beq .L_803610E4
/* 803610D4 0035E014  80 7E 01 84 */	lwz r3, 0x184(r30)
/* 803610D8 0035E018  88 03 00 58 */	lbz r0, 0x58(r3)
/* 803610DC 0035E01C  28 00 00 00 */	cmplwi r0, 0
/* 803610E0 0035E020  40 82 00 C4 */	bne .L_803611A4
.L_803610E4:
/* 803610E4 0035E024  7F C4 F3 78 */	mr r4, r30
/* 803610E8 0035E028  38 61 00 14 */	addi r3, r1, 0x14
/* 803610EC 0035E02C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803610F0 0035E030  81 8C 00 08 */	lwz r12, 8(r12)
/* 803610F4 0035E034  7D 89 03 A6 */	mtctr r12
/* 803610F8 0035E038  4E 80 04 21 */	bctrl 
/* 803610FC 0035E03C  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 80361100 0035E040  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80361104 0035E044  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 80361108 0035E048  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8036110C 0035E04C  C0 3E 02 BC */	lfs f1, 0x2bc(r30)
/* 80361110 0035E050  C0 1E 02 C4 */	lfs f0, 0x2c4(r30)
/* 80361114 0035E054  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 80361118 0035E058  EC 21 28 28 */	fsubs f1, f1, f5
/* 8036111C 0035E05C  EC 40 18 28 */	fsubs f2, f0, f3
/* 80361120 0035E060  D0 A1 00 08 */	stfs f5, 8(r1)
/* 80361124 0035E064  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 80361128 0035E068  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8036112C 0035E06C  4B CD 3F DD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80361130 0035E070  48 0B 0A A1 */	bl roundAng__Ff
/* 80361134 0035E074  81 9E 00 00 */	lwz r12, 0(r30)
/* 80361138 0035E078  FF E0 08 90 */	fmr f31, f1
/* 8036113C 0035E07C  7F C3 F3 78 */	mr r3, r30
/* 80361140 0035E080  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80361144 0035E084  7D 89 03 A6 */	mtctr r12
/* 80361148 0035E088  4E 80 04 21 */	bctrl 
/* 8036114C 0035E08C  FC 40 08 90 */	fmr f2, f1
/* 80361150 0035E090  FC 20 F8 90 */	fmr f1, f31
/* 80361154 0035E094  48 0B 0A A9 */	bl angDist__Fff
/* 80361158 0035E098  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036115C 0035E09C  FC 60 0A 10 */	fabs f3, f1
/* 80361160 0035E0A0  C0 22 03 F0 */	lfs f1, lbl_8051E750@sda21(r2)
/* 80361164 0035E0A4  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 80361168 0035E0A8  C0 42 03 EC */	lfs f2, lbl_8051E74C@sda21(r2)
/* 8036116C 0035E0AC  FC 60 18 18 */	frsp f3, f3
/* 80361170 0035E0B0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80361174 0035E0B4  EC 02 00 32 */	fmuls f0, f2, f0
/* 80361178 0035E0B8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8036117C 0035E0BC  40 81 00 28 */	ble .L_803611A4
/* 80361180 0035E0C0  9B FE 02 E4 */	stb r31, 0x2e4(r30)
/* 80361184 0035E0C4  7F C4 F3 78 */	mr r4, r30
/* 80361188 0035E0C8  38 A0 00 06 */	li r5, 6
/* 8036118C 0035E0CC  38 C0 00 00 */	li r6, 0
/* 80361190 0035E0D0  80 7E 03 4C */	lwz r3, 0x34c(r30)
/* 80361194 0035E0D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80361198 0035E0D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036119C 0035E0DC  7D 89 03 A6 */	mtctr r12
/* 803611A0 0035E0E0  4E 80 04 21 */	bctrl 
.L_803611A4:
/* 803611A4 0035E0E4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 803611A8 0035E0E8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803611AC 0035E0EC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 803611B0 0035E0F0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803611B4 0035E0F4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803611B8 0035E0F8  7C 08 03 A6 */	mtlr r0
/* 803611BC 0035E0FC  38 21 00 40 */	addi r1, r1, 0x40
/* 803611C0 0035E100  4E 80 00 20 */	blr 
.endfn checkTurn__Q34Game10KingChappy3ObjFb

.fn startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener, global
/* 803611C4 0035E104  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803611C8 0035E108  7C 08 02 A6 */	mflr r0
/* 803611CC 0035E10C  90 01 00 44 */	stw r0, 0x44(r1)
/* 803611D0 0035E110  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 803611D4 0035E114  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 803611D8 0035E118  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 803611DC 0035E11C  7C BC 2B 79 */	or. r28, r5, r5
/* 803611E0 0035E120  7C 7F 1B 78 */	mr r31, r3
/* 803611E4 0035E124  7C 9B 23 78 */	mr r27, r4
/* 803611E8 0035E128  40 82 00 14 */	bne .L_803611FC
/* 803611EC 0035E12C  28 1F 00 00 */	cmplwi r31, 0
/* 803611F0 0035E130  41 82 00 08 */	beq .L_803611F8
/* 803611F4 0035E134  38 63 01 78 */	addi r3, r3, 0x178
.L_803611F8:
/* 803611F8 0035E138  7C 7C 1B 78 */	mr r28, r3
.L_803611FC:
/* 803611FC 0035E13C  88 1F 02 E4 */	lbz r0, 0x2e4(r31)
/* 80361200 0035E140  3B C0 00 00 */	li r30, 0
/* 80361204 0035E144  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80361208 0035E148  28 00 00 00 */	cmplwi r0, 0
/* 8036120C 0035E14C  41 82 00 B8 */	beq .L_803612C4
/* 80361210 0035E150  88 03 00 58 */	lbz r0, 0x58(r3)
/* 80361214 0035E154  28 00 00 00 */	cmplwi r0, 0
/* 80361218 0035E158  40 82 00 AC */	bne .L_803612C4
/* 8036121C 0035E15C  81 83 00 00 */	lwz r12, 0(r3)
/* 80361220 0035E160  38 80 00 00 */	li r4, 0
/* 80361224 0035E164  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80361228 0035E168  7D 89 03 A6 */	mtctr r12
/* 8036122C 0035E16C  4E 80 04 21 */	bctrl 
/* 80361230 0035E170  80 83 00 0C */	lwz r4, 0xc(r3)
/* 80361234 0035E174  7C 7D 1B 78 */	mr r29, r3
/* 80361238 0035E178  28 04 00 00 */	cmplwi r4, 0
/* 8036123C 0035E17C  41 82 00 2C */	beq .L_80361268
/* 80361240 0035E180  80 64 00 18 */	lwz r3, 0x18(r4)
/* 80361244 0035E184  3C 00 43 30 */	lis r0, 0x4330
/* 80361248 0035E188  90 01 00 08 */	stw r0, 8(r1)
/* 8036124C 0035E18C  A8 03 00 06 */	lha r0, 6(r3)
/* 80361250 0035E190  C8 22 03 E0 */	lfd f1, lbl_8051E740@sda21(r2)
/* 80361254 0035E194  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80361258 0035E198  90 01 00 0C */	stw r0, 0xc(r1)
/* 8036125C 0035E19C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80361260 0035E1A0  EC 20 08 28 */	fsubs f1, f0, f1
/* 80361264 0035E1A4  48 00 00 08 */	b .L_8036126C
.L_80361268:
/* 80361268 0035E1A8  C0 22 03 2C */	lfs f1, lbl_8051E68C@sda21(r2)
.L_8036126C:
/* 8036126C 0035E1AC  C0 02 03 58 */	lfs f0, lbl_8051E6B8@sda21(r2)
/* 80361270 0035E1B0  C3 FD 00 08 */	lfs f31, 8(r29)
/* 80361274 0035E1B4  EC 01 00 28 */	fsubs f0, f1, f0
/* 80361278 0035E1B8  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8036127C 0035E1BC  40 81 00 48 */	ble .L_803612C4
/* 80361280 0035E1C0  28 04 00 00 */	cmplwi r4, 0
/* 80361284 0035E1C4  41 82 00 0C */	beq .L_80361290
/* 80361288 0035E1C8  A8 84 00 20 */	lha r4, 0x20(r4)
/* 8036128C 0035E1CC  48 00 00 08 */	b .L_80361294
.L_80361290:
/* 80361290 0035E1D0  38 80 FF FF */	li r4, -1
.L_80361294:
/* 80361294 0035E1D4  7C 1B 20 00 */	cmpw r27, r4
/* 80361298 0035E1D8  41 82 00 2C */	beq .L_803612C4
/* 8036129C 0035E1DC  C0 22 04 00 */	lfs f1, lbl_8051E760@sda21(r2)
/* 803612A0 0035E1E0  7F E3 FB 78 */	mr r3, r31
/* 803612A4 0035E1E4  7F 65 DB 78 */	mr r5, r27
/* 803612A8 0035E1E8  38 CD 92 40 */	addi r6, r13, sBlendLinearFun__Q24Game22EnemyBlendAnimatorBase@sda21
/* 803612AC 0035E1EC  38 E0 00 00 */	li r7, 0
/* 803612B0 0035E1F0  4B DA 3B 09 */	bl startBlend__Q24Game9EnemyBaseFiiPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener
/* 803612B4 0035E1F4  FC 20 F8 90 */	fmr f1, f31
/* 803612B8 0035E1F8  7F A3 EB 78 */	mr r3, r29
/* 803612BC 0035E1FC  48 0C 7B 05 */	bl setCurrFrame__Q28SysShape8AnimatorFf
/* 803612C0 0035E200  3B C0 00 01 */	li r30, 1
.L_803612C4:
/* 803612C4 0035E204  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803612C8 0035E208  40 82 00 14 */	bne .L_803612DC
/* 803612CC 0035E20C  7F E3 FB 78 */	mr r3, r31
/* 803612D0 0035E210  7F 64 DB 78 */	mr r4, r27
/* 803612D4 0035E214  7F 85 E3 78 */	mr r5, r28
/* 803612D8 0035E218  4B DA 3D 2D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_803612DC:
/* 803612DC 0035E21C  38 00 00 00 */	li r0, 0
/* 803612E0 0035E220  98 1F 02 E4 */	stb r0, 0x2e4(r31)
/* 803612E4 0035E224  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 803612E8 0035E228  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 803612EC 0035E22C  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 803612F0 0035E230  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803612F4 0035E234  7C 08 03 A6 */	mtlr r0
/* 803612F8 0035E238  38 21 00 40 */	addi r1, r1, 0x40
/* 803612FC 0035E23C  4E 80 00 20 */	blr 
.endfn startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener

.fn endBlendAnimation__Q34Game10KingChappy3ObjFv, global
/* 80361300 0035E240  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80361304 0035E244  7C 08 02 A6 */	mflr r0
/* 80361308 0035E248  90 01 00 24 */	stw r0, 0x24(r1)
/* 8036130C 0035E24C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80361310 0035E250  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80361314 0035E254  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80361318 0035E258  93 C1 00 08 */	stw r30, 8(r1)
/* 8036131C 0035E25C  7C 7E 1B 78 */	mr r30, r3
/* 80361320 0035E260  38 80 00 01 */	li r4, 1
/* 80361324 0035E264  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80361328 0035E268  81 83 00 00 */	lwz r12, 0(r3)
/* 8036132C 0035E26C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80361330 0035E270  7D 89 03 A6 */	mtctr r12
/* 80361334 0035E274  4E 80 04 21 */	bctrl 
/* 80361338 0035E278  80 83 00 0C */	lwz r4, 0xc(r3)
/* 8036133C 0035E27C  28 04 00 00 */	cmplwi r4, 0
/* 80361340 0035E280  41 82 00 0C */	beq .L_8036134C
/* 80361344 0035E284  AB E4 00 20 */	lha r31, 0x20(r4)
/* 80361348 0035E288  48 00 00 08 */	b .L_80361350
.L_8036134C:
/* 8036134C 0035E28C  3B E0 FF FF */	li r31, -1
.L_80361350:
/* 80361350 0035E290  C3 E3 00 08 */	lfs f31, 8(r3)
/* 80361354 0035E294  7F C3 F3 78 */	mr r3, r30
/* 80361358 0035E298  4B DA 3C 51 */	bl endBlend__Q24Game9EnemyBaseFv
/* 8036135C 0035E29C  7F C3 F3 78 */	mr r3, r30
/* 80361360 0035E2A0  7F E4 FB 78 */	mr r4, r31
/* 80361364 0035E2A4  38 A0 00 00 */	li r5, 0
/* 80361368 0035E2A8  4B DA 3C 9D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8036136C 0035E2AC  FC 20 F8 90 */	fmr f1, f31
/* 80361370 0035E2B0  7F C3 F3 78 */	mr r3, r30
/* 80361374 0035E2B4  4B DA 3E B5 */	bl setMotionFrame__Q24Game9EnemyBaseFf
/* 80361378 0035E2B8  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8036137C 0035E2BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80361380 0035E2C0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80361384 0035E2C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80361388 0035E2C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8036138C 0035E2CC  7C 08 03 A6 */	mtlr r0
/* 80361390 0035E2D0  38 21 00 20 */	addi r1, r1, 0x20
/* 80361394 0035E2D4  4E 80 00 20 */	blr 
.endfn endBlendAnimation__Q34Game10KingChappy3ObjFv

.fn leftFootMtxCalc__Q34Game10KingChappy3ObjFv, global
/* 80361398 0035E2D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036139C 0035E2DC  7C 08 02 A6 */	mflr r0
/* 803613A0 0035E2E0  38 A3 03 14 */	addi r5, r3, 0x314
/* 803613A4 0035E2E4  38 C3 03 20 */	addi r6, r3, 0x320
/* 803613A8 0035E2E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803613AC 0035E2EC  80 83 01 74 */	lwz r4, 0x174(r3)
/* 803613B0 0035E2F0  A0 03 03 10 */	lhz r0, 0x310(r3)
/* 803613B4 0035E2F4  80 84 00 08 */	lwz r4, 8(r4)
/* 803613B8 0035E2F8  1C 00 00 30 */	mulli r0, r0, 0x30
/* 803613BC 0035E2FC  80 84 00 84 */	lwz r4, 0x84(r4)
/* 803613C0 0035E300  80 84 00 0C */	lwz r4, 0xc(r4)
/* 803613C4 0035E304  7C 84 02 14 */	add r4, r4, r0
/* 803613C8 0035E308  48 00 00 59 */	bl "footMtxCalc__Q34Game10KingChappy3ObjFPA4_fP10Vector3<f>Pf"
/* 803613CC 0035E30C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803613D0 0035E310  7C 08 03 A6 */	mtlr r0
/* 803613D4 0035E314  38 21 00 10 */	addi r1, r1, 0x10
/* 803613D8 0035E318  4E 80 00 20 */	blr 
.endfn leftFootMtxCalc__Q34Game10KingChappy3ObjFv

.fn rightFootMtxCalc__Q34Game10KingChappy3ObjFv, global
/* 803613DC 0035E31C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803613E0 0035E320  7C 08 02 A6 */	mflr r0
/* 803613E4 0035E324  38 A3 03 28 */	addi r5, r3, 0x328
/* 803613E8 0035E328  38 C3 03 34 */	addi r6, r3, 0x334
/* 803613EC 0035E32C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803613F0 0035E330  80 83 01 74 */	lwz r4, 0x174(r3)
/* 803613F4 0035E334  A0 03 03 24 */	lhz r0, 0x324(r3)
/* 803613F8 0035E338  80 84 00 08 */	lwz r4, 8(r4)
/* 803613FC 0035E33C  1C 00 00 30 */	mulli r0, r0, 0x30
/* 80361400 0035E340  80 84 00 84 */	lwz r4, 0x84(r4)
/* 80361404 0035E344  80 84 00 0C */	lwz r4, 0xc(r4)
/* 80361408 0035E348  7C 84 02 14 */	add r4, r4, r0
/* 8036140C 0035E34C  48 00 00 15 */	bl "footMtxCalc__Q34Game10KingChappy3ObjFPA4_fP10Vector3<f>Pf"
/* 80361410 0035E350  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80361414 0035E354  7C 08 03 A6 */	mtlr r0
/* 80361418 0035E358  38 21 00 10 */	addi r1, r1, 0x10
/* 8036141C 0035E35C  4E 80 00 20 */	blr 
.endfn rightFootMtxCalc__Q34Game10KingChappy3ObjFv

.fn "footMtxCalc__Q34Game10KingChappy3ObjFPA4_fP10Vector3<f>Pf", global
/* 80361420 0035E360  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80361424 0035E364  7C 08 02 A6 */	mflr r0
/* 80361428 0035E368  90 01 00 24 */	stw r0, 0x24(r1)
/* 8036142C 0035E36C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80361430 0035E370  7C DF 33 78 */	mr r31, r6
/* 80361434 0035E374  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80361438 0035E378  7C BE 2B 78 */	mr r30, r5
/* 8036143C 0035E37C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80361440 0035E380  7C 9D 23 78 */	mr r29, r4
/* 80361444 0035E384  93 81 00 10 */	stw r28, 0x10(r1)
/* 80361448 0035E388  7C 7C 1B 78 */	mr r28, r3
/* 8036144C 0035E38C  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80361450 0035E390  C0 3C 01 90 */	lfs f1, 0x190(r28)
/* 80361454 0035E394  C0 03 0B D0 */	lfs f0, 0xbd0(r3)
/* 80361458 0035E398  C0 44 00 1C */	lfs f2, 0x1c(r4)
/* 8036145C 0035E39C  EC 01 00 2A */	fadds f0, f1, f0
/* 80361460 0035E3A0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80361464 0035E3A4  40 81 00 90 */	ble .L_803614F4
/* 80361468 0035E3A8  C0 5F 00 00 */	lfs f2, 0(r31)
/* 8036146C 0035E3AC  C0 02 03 78 */	lfs f0, lbl_8051E6D8@sda21(r2)
/* 80361470 0035E3B0  C0 22 03 58 */	lfs f1, lbl_8051E6B8@sda21(r2)
/* 80361474 0035E3B4  EC 02 00 2A */	fadds f0, f2, f0
/* 80361478 0035E3B8  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8036147C 0035E3BC  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80361480 0035E3C0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80361484 0035E3C4  EC 61 10 28 */	fsubs f3, f1, f2
/* 80361488 0035E3C8  40 80 00 4C */	bge .L_803614D4
/* 8036148C 0035E3CC  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80361490 0035E3D0  C0 3D 00 0C */	lfs f1, 0xc(r29)
/* 80361494 0035E3D4  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80361498 0035E3D8  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8036149C 0035E3DC  D0 1D 00 0C */	stfs f0, 0xc(r29)
/* 803614A0 0035E3E0  C0 1E 00 04 */	lfs f0, 4(r30)
/* 803614A4 0035E3E4  C0 5F 00 00 */	lfs f2, 0(r31)
/* 803614A8 0035E3E8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803614AC 0035E3EC  C0 3D 00 1C */	lfs f1, 0x1c(r29)
/* 803614B0 0035E3F0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 803614B4 0035E3F4  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 803614B8 0035E3F8  C0 1E 00 08 */	lfs f0, 8(r30)
/* 803614BC 0035E3FC  C0 5F 00 00 */	lfs f2, 0(r31)
/* 803614C0 0035E400  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803614C4 0035E404  C0 3D 00 2C */	lfs f1, 0x2c(r29)
/* 803614C8 0035E408  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 803614CC 0035E40C  D0 1D 00 2C */	stfs f0, 0x2c(r29)
/* 803614D0 0035E410  48 00 00 C0 */	b .L_80361590
.L_803614D4:
/* 803614D4 0035E414  C0 7D 00 2C */	lfs f3, 0x2c(r29)
/* 803614D8 0035E418  C0 5D 00 1C */	lfs f2, 0x1c(r29)
/* 803614DC 0035E41C  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 803614E0 0035E420  D0 1E 00 00 */	stfs f0, 0(r30)
/* 803614E4 0035E424  D0 5E 00 04 */	stfs f2, 4(r30)
/* 803614E8 0035E428  D0 7E 00 08 */	stfs f3, 8(r30)
/* 803614EC 0035E42C  D0 3F 00 00 */	stfs f1, 0(r31)
/* 803614F0 0035E430  48 00 00 A0 */	b .L_80361590
.L_803614F4:
/* 803614F4 0035E434  C0 5F 00 00 */	lfs f2, 0(r31)
/* 803614F8 0035E438  C0 22 04 04 */	lfs f1, lbl_8051E764@sda21(r2)
/* 803614FC 0035E43C  C0 02 03 68 */	lfs f0, lbl_8051E6C8@sda21(r2)
/* 80361500 0035E440  EC 22 00 72 */	fmuls f1, f2, f1
/* 80361504 0035E444  D0 3F 00 00 */	stfs f1, 0(r31)
/* 80361508 0035E448  C0 3F 00 00 */	lfs f1, 0(r31)
/* 8036150C 0035E44C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80361510 0035E450  40 80 00 3C */	bge .L_8036154C
/* 80361514 0035E454  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 80361518 0035E458  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8036151C 0035E45C  41 82 00 28 */	beq .L_80361544
/* 80361520 0035E460  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80361524 0035E464  38 80 00 06 */	li r4, 6
/* 80361528 0035E468  38 C0 00 02 */	li r6, 2
/* 8036152C 0035E46C  4B EF 0D 11 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80361530 0035E470  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80361534 0035E474  7F C5 F3 78 */	mr r5, r30
/* 80361538 0035E478  38 80 00 0B */	li r4, 0xb
/* 8036153C 0035E47C  38 C0 00 02 */	li r6, 2
/* 80361540 0035E480  4B EF 22 41 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
.L_80361544:
/* 80361544 0035E484  C0 02 03 2C */	lfs f0, lbl_8051E68C@sda21(r2)
/* 80361548 0035E488  D0 1F 00 00 */	stfs f0, 0(r31)
.L_8036154C:
/* 8036154C 0035E48C  C0 22 03 58 */	lfs f1, lbl_8051E6B8@sda21(r2)
/* 80361550 0035E490  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80361554 0035E494  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 80361558 0035E498  EC 61 10 28 */	fsubs f3, f1, f2
/* 8036155C 0035E49C  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80361560 0035E4A0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80361564 0035E4A4  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80361568 0035E4A8  D0 1D 00 0C */	stfs f0, 0xc(r29)
/* 8036156C 0035E4AC  C0 1C 01 90 */	lfs f0, 0x190(r28)
/* 80361570 0035E4B0  D0 1E 00 04 */	stfs f0, 4(r30)
/* 80361574 0035E4B4  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 80361578 0035E4B8  C0 1D 00 2C */	lfs f0, 0x2c(r29)
/* 8036157C 0035E4BC  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80361580 0035E4C0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80361584 0035E4C4  C0 3E 00 08 */	lfs f1, 8(r30)
/* 80361588 0035E4C8  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8036158C 0035E4CC  D0 1D 00 2C */	stfs f0, 0x2c(r29)
.L_80361590:
/* 80361590 0035E4D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80361594 0035E4D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80361598 0035E4D8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8036159C 0035E4DC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803615A0 0035E4E0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803615A4 0035E4E4  7C 08 03 A6 */	mtlr r0
/* 803615A8 0035E4E8  38 21 00 20 */	addi r1, r1, 0x20
/* 803615AC 0035E4EC  4E 80 00 20 */	blr 
.endfn "footMtxCalc__Q34Game10KingChappy3ObjFPA4_fP10Vector3<f>Pf"

.fn resetFootPos__Q34Game10KingChappy3ObjFv, global
/* 803615B0 0035E4F0  80 83 01 74 */	lwz r4, 0x174(r3)
/* 803615B4 0035E4F4  A0 03 03 10 */	lhz r0, 0x310(r3)
/* 803615B8 0035E4F8  80 84 00 08 */	lwz r4, 8(r4)
/* 803615BC 0035E4FC  1C 00 00 30 */	mulli r0, r0, 0x30
/* 803615C0 0035E500  C0 22 03 2C */	lfs f1, lbl_8051E68C@sda21(r2)
/* 803615C4 0035E504  80 84 00 84 */	lwz r4, 0x84(r4)
/* 803615C8 0035E508  80 84 00 0C */	lwz r4, 0xc(r4)
/* 803615CC 0035E50C  7C 84 02 14 */	add r4, r4, r0
/* 803615D0 0035E510  C0 64 00 2C */	lfs f3, 0x2c(r4)
/* 803615D4 0035E514  C0 44 00 1C */	lfs f2, 0x1c(r4)
/* 803615D8 0035E518  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 803615DC 0035E51C  D0 03 03 14 */	stfs f0, 0x314(r3)
/* 803615E0 0035E520  D0 43 03 18 */	stfs f2, 0x318(r3)
/* 803615E4 0035E524  D0 63 03 1C */	stfs f3, 0x31c(r3)
/* 803615E8 0035E528  D0 23 03 20 */	stfs f1, 0x320(r3)
/* 803615EC 0035E52C  80 83 01 74 */	lwz r4, 0x174(r3)
/* 803615F0 0035E530  A0 03 03 24 */	lhz r0, 0x324(r3)
/* 803615F4 0035E534  80 84 00 08 */	lwz r4, 8(r4)
/* 803615F8 0035E538  1C 00 00 30 */	mulli r0, r0, 0x30
/* 803615FC 0035E53C  80 84 00 84 */	lwz r4, 0x84(r4)
/* 80361600 0035E540  80 84 00 0C */	lwz r4, 0xc(r4)
/* 80361604 0035E544  7C 84 02 14 */	add r4, r4, r0
/* 80361608 0035E548  C0 64 00 2C */	lfs f3, 0x2c(r4)
/* 8036160C 0035E54C  C0 44 00 1C */	lfs f2, 0x1c(r4)
/* 80361610 0035E550  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80361614 0035E554  D0 03 03 28 */	stfs f0, 0x328(r3)
/* 80361618 0035E558  D0 43 03 2C */	stfs f2, 0x32c(r3)
/* 8036161C 0035E55C  D0 63 03 30 */	stfs f3, 0x330(r3)
/* 80361620 0035E560  D0 23 03 34 */	stfs f1, 0x334(r3)
/* 80361624 0035E564  4E 80 00 20 */	blr 
.endfn resetFootPos__Q34Game10KingChappy3ObjFv

.fn fadeAllEffect__Q34Game10KingChappy3ObjFv, global
/* 80361628 0035E568  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036162C 0035E56C  7C 08 02 A6 */	mflr r0
/* 80361630 0035E570  90 01 00 14 */	stw r0, 0x14(r1)
/* 80361634 0035E574  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80361638 0035E578  7C 7F 1B 78 */	mr r31, r3
/* 8036163C 0035E57C  80 63 03 50 */	lwz r3, 0x350(r3)
/* 80361640 0035E580  81 83 00 00 */	lwz r12, 0(r3)
/* 80361644 0035E584  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361648 0035E588  7D 89 03 A6 */	mtctr r12
/* 8036164C 0035E58C  4E 80 04 21 */	bctrl 
/* 80361650 0035E590  80 7F 03 58 */	lwz r3, 0x358(r31)
/* 80361654 0035E594  81 83 00 00 */	lwz r12, 0(r3)
/* 80361658 0035E598  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8036165C 0035E59C  7D 89 03 A6 */	mtctr r12
/* 80361660 0035E5A0  4E 80 04 21 */	bctrl 
/* 80361664 0035E5A4  80 7F 03 54 */	lwz r3, 0x354(r31)
/* 80361668 0035E5A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8036166C 0035E5AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361670 0035E5B0  7D 89 03 A6 */	mtctr r12
/* 80361674 0035E5B4  4E 80 04 21 */	bctrl 
/* 80361678 0035E5B8  80 7F 03 5C */	lwz r3, 0x35c(r31)
/* 8036167C 0035E5BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80361680 0035E5C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361684 0035E5C4  7D 89 03 A6 */	mtctr r12
/* 80361688 0035E5C8  4E 80 04 21 */	bctrl 
/* 8036168C 0035E5CC  80 7F 03 60 */	lwz r3, 0x360(r31)
/* 80361690 0035E5D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80361694 0035E5D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361698 0035E5D8  7D 89 03 A6 */	mtctr r12
/* 8036169C 0035E5DC  4E 80 04 21 */	bctrl 
/* 803616A0 0035E5E0  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803616A4 0035E5E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803616A8 0035E5E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803616AC 0035E5EC  7D 89 03 A6 */	mtctr r12
/* 803616B0 0035E5F0  4E 80 04 21 */	bctrl 
/* 803616B4 0035E5F4  80 7F 03 68 */	lwz r3, 0x368(r31)
/* 803616B8 0035E5F8  81 83 00 00 */	lwz r12, 0(r3)
/* 803616BC 0035E5FC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803616C0 0035E600  7D 89 03 A6 */	mtctr r12
/* 803616C4 0035E604  4E 80 04 21 */	bctrl 
/* 803616C8 0035E608  80 7F 03 6C */	lwz r3, 0x36c(r31)
/* 803616CC 0035E60C  81 83 00 00 */	lwz r12, 0(r3)
/* 803616D0 0035E610  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803616D4 0035E614  7D 89 03 A6 */	mtctr r12
/* 803616D8 0035E618  4E 80 04 21 */	bctrl 
/* 803616DC 0035E61C  80 7F 03 70 */	lwz r3, 0x370(r31)
/* 803616E0 0035E620  81 83 00 00 */	lwz r12, 0(r3)
/* 803616E4 0035E624  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803616E8 0035E628  7D 89 03 A6 */	mtctr r12
/* 803616EC 0035E62C  4E 80 04 21 */	bctrl 
/* 803616F0 0035E630  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803616F4 0035E634  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803616F8 0035E638  7C 08 03 A6 */	mtlr r0
/* 803616FC 0035E63C  38 21 00 10 */	addi r1, r1, 0x10
/* 80361700 0035E640  4E 80 00 20 */	blr 
.endfn fadeAllEffect__Q34Game10KingChappy3ObjFv

.fn fade__Q23efx22TKchYodareBaseChaseMtxFv, weak
/* 80361704 0035E644  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80361708 0035E648  7C 08 02 A6 */	mflr r0
/* 8036170C 0035E64C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80361710 0035E650  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80361714 0035E654  7C 7F 1B 78 */	mr r31, r3
/* 80361718 0035E658  48 04 E1 E9 */	bl fade__Q23efx5TSyncFv
/* 8036171C 0035E65C  38 7F 00 18 */	addi r3, r31, 0x18
/* 80361720 0035E660  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 80361724 0035E664  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361728 0035E668  7D 89 03 A6 */	mtctr r12
/* 8036172C 0035E66C  4E 80 04 21 */	bctrl 
/* 80361730 0035E670  38 7F 00 34 */	addi r3, r31, 0x34
/* 80361734 0035E674  81 9F 00 34 */	lwz r12, 0x34(r31)
/* 80361738 0035E678  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8036173C 0035E67C  7D 89 03 A6 */	mtctr r12
/* 80361740 0035E680  4E 80 04 21 */	bctrl 
/* 80361744 0035E684  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80361748 0035E688  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036174C 0035E68C  7C 08 03 A6 */	mtlr r0
/* 80361750 0035E690  38 21 00 10 */	addi r1, r1, 0x10
/* 80361754 0035E694  4E 80 00 20 */	blr 
.endfn fade__Q23efx22TKchYodareBaseChaseMtxFv

.fn createEffect__Q34Game10KingChappy3ObjFi, global
/* 80361758 0035E698  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8036175C 0035E69C  7C 08 02 A6 */	mflr r0
/* 80361760 0035E6A0  3C C0 80 4B */	lis r6, __vt__Q23efx3Arg@ha
/* 80361764 0035E6A4  3C A0 80 4E */	lis r5, __vt__Q23efx12ArgKchYodare@ha
/* 80361768 0035E6A8  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8036176C 0035E6AC  39 06 A7 EC */	addi r8, r6, __vt__Q23efx3Arg@l
/* 80361770 0035E6B0  38 05 1D 7C */	addi r0, r5, __vt__Q23efx12ArgKchYodare@l
/* 80361774 0035E6B4  C0 02 03 80 */	lfs f0, lbl_8051E6E0@sda21(r2)
/* 80361778 0035E6B8  93 E1 00 AC */	stw r31, 0xac(r1)
/* 8036177C 0035E6BC  28 04 00 08 */	cmplwi r4, 8
/* 80361780 0035E6C0  7C 7F 1B 78 */	mr r31, r3
/* 80361784 0035E6C4  91 01 00 2C */	stw r8, 0x2c(r1)
/* 80361788 0035E6C8  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 8036178C 0035E6CC  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80361790 0035E6D0  C0 23 01 90 */	lfs f1, 0x190(r3)
/* 80361794 0035E6D4  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 80361798 0035E6D8  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 8036179C 0035E6DC  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 803617A0 0035E6E0  80 E3 01 8C */	lwz r7, 0x18c(r3)
/* 803617A4 0035E6E4  80 C3 01 90 */	lwz r6, 0x190(r3)
/* 803617A8 0035E6E8  80 A3 01 94 */	lwz r5, 0x194(r3)
/* 803617AC 0035E6EC  90 E1 00 20 */	stw r7, 0x20(r1)
/* 803617B0 0035E6F0  90 C1 00 24 */	stw r6, 0x24(r1)
/* 803617B4 0035E6F4  C0 61 00 20 */	lfs f3, 0x20(r1)
/* 803617B8 0035E6F8  90 A1 00 28 */	stw r5, 0x28(r1)
/* 803617BC 0035E6FC  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 803617C0 0035E700  91 01 00 88 */	stw r8, 0x88(r1)
/* 803617C4 0035E704  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 803617C8 0035E708  D0 61 00 8C */	stfs f3, 0x8c(r1)
/* 803617CC 0035E70C  D0 41 00 90 */	stfs f2, 0x90(r1)
/* 803617D0 0035E710  D0 21 00 94 */	stfs f1, 0x94(r1)
/* 803617D4 0035E714  90 01 00 88 */	stw r0, 0x88(r1)
/* 803617D8 0035E718  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 803617DC 0035E71C  41 81 03 DC */	bgt .L_80361BB8
/* 803617E0 0035E720  3C 60 80 4E */	lis r3, lbl_804E1D34@ha
/* 803617E4 0035E724  54 80 10 3A */	slwi r0, r4, 2
/* 803617E8 0035E728  38 63 1D 34 */	addi r3, r3, lbl_804E1D34@l
/* 803617EC 0035E72C  7C 03 00 2E */	lwzx r0, r3, r0
/* 803617F0 0035E730  7C 09 03 A6 */	mtctr r0
/* 803617F4 0035E734  4E 80 04 20 */	bctr 
.L_803617F8:
/* 803617F8 0035E738  80 7F 03 40 */	lwz r3, 0x340(r31)
/* 803617FC 0035E73C  28 03 00 00 */	cmplwi r3, 0
/* 80361800 0035E740  41 82 00 1C */	beq .L_8036181C
/* 80361804 0035E744  81 83 00 00 */	lwz r12, 0(r3)
/* 80361808 0035E748  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036180C 0035E74C  7D 89 03 A6 */	mtctr r12
/* 80361810 0035E750  4E 80 04 21 */	bctrl 
/* 80361814 0035E754  C0 03 00 00 */	lfs f0, 0(r3)
/* 80361818 0035E758  D0 01 00 98 */	stfs f0, 0x98(r1)
.L_8036181C:
/* 8036181C 0035E75C  80 7F 03 50 */	lwz r3, 0x350(r31)
/* 80361820 0035E760  38 81 00 88 */	addi r4, r1, 0x88
/* 80361824 0035E764  81 83 00 00 */	lwz r12, 0(r3)
/* 80361828 0035E768  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036182C 0035E76C  7D 89 03 A6 */	mtctr r12
/* 80361830 0035E770  4E 80 04 21 */	bctrl 
/* 80361834 0035E774  80 7F 03 50 */	lwz r3, 0x350(r31)
/* 80361838 0035E778  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 8036183C 0035E77C  48 08 AB 7D */	bl setGlobalScale__Q23efx22TKchYodareBaseChaseMtxFf
/* 80361840 0035E780  48 00 03 78 */	b .L_80361BB8
.L_80361844:
/* 80361844 0035E784  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 80361848 0035E788  28 00 00 00 */	cmplwi r0, 0
/* 8036184C 0035E78C  41 82 00 2C */	beq .L_80361878
/* 80361850 0035E790  80 7F 03 58 */	lwz r3, 0x358(r31)
/* 80361854 0035E794  38 81 00 2C */	addi r4, r1, 0x2c
/* 80361858 0035E798  81 83 00 00 */	lwz r12, 0(r3)
/* 8036185C 0035E79C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80361860 0035E7A0  7D 89 03 A6 */	mtctr r12
/* 80361864 0035E7A4  4E 80 04 21 */	bctrl 
/* 80361868 0035E7A8  80 7F 03 58 */	lwz r3, 0x358(r31)
/* 8036186C 0035E7AC  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 80361870 0035E7B0  48 08 A6 11 */	bl setGlobalScale__Q23efx11TKchDiveWatFf
/* 80361874 0035E7B4  48 00 03 44 */	b .L_80361BB8
.L_80361878:
/* 80361878 0035E7B8  80 7F 03 54 */	lwz r3, 0x354(r31)
/* 8036187C 0035E7BC  38 81 00 2C */	addi r4, r1, 0x2c
/* 80361880 0035E7C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80361884 0035E7C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80361888 0035E7C8  7D 89 03 A6 */	mtctr r12
/* 8036188C 0035E7CC  4E 80 04 21 */	bctrl 
/* 80361890 0035E7D0  80 7F 03 54 */	lwz r3, 0x354(r31)
/* 80361894 0035E7D4  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 80361898 0035E7D8  48 08 A5 A9 */	bl setGlobalScale__Q23efx12TKchDiveSandFf
/* 8036189C 0035E7DC  48 00 03 1C */	b .L_80361BB8
.L_803618A0:
/* 803618A0 0035E7E0  80 7F 03 5C */	lwz r3, 0x35c(r31)
/* 803618A4 0035E7E4  38 81 00 2C */	addi r4, r1, 0x2c
/* 803618A8 0035E7E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803618AC 0035E7EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803618B0 0035E7F0  7D 89 03 A6 */	mtctr r12
/* 803618B4 0035E7F4  4E 80 04 21 */	bctrl 
/* 803618B8 0035E7F8  80 7F 03 5C */	lwz r3, 0x35c(r31)
/* 803618BC 0035E7FC  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 803618C0 0035E800  48 08 A6 01 */	bl setGlobalScale__Q23efx9TKchCryABFf
/* 803618C4 0035E804  48 00 02 F4 */	b .L_80361BB8
.L_803618C8:
/* 803618C8 0035E808  80 7F 03 60 */	lwz r3, 0x360(r31)
/* 803618CC 0035E80C  38 81 00 2C */	addi r4, r1, 0x2c
/* 803618D0 0035E810  81 83 00 00 */	lwz r12, 0(r3)
/* 803618D4 0035E814  81 8C 00 08 */	lwz r12, 8(r12)
/* 803618D8 0035E818  7D 89 03 A6 */	mtctr r12
/* 803618DC 0035E81C  4E 80 04 21 */	bctrl 
/* 803618E0 0035E820  80 7F 03 60 */	lwz r3, 0x360(r31)
/* 803618E4 0035E824  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 803618E8 0035E828  48 08 A6 05 */	bl setGlobalScale__Q23efx10TKchCryIndFf
/* 803618EC 0035E82C  48 00 02 CC */	b .L_80361BB8
.L_803618F0:
/* 803618F0 0035E830  C0 7F 01 F8 */	lfs f3, 0x1f8(r31)
/* 803618F4 0035E834  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 803618F8 0035E838  90 E1 00 14 */	stw r7, 0x14(r1)
/* 803618FC 0035E83C  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 80361900 0035E840  90 C1 00 18 */	stw r6, 0x18(r1)
/* 80361904 0035E844  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80361908 0035E848  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8036190C 0035E84C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80361910 0035E850  91 01 00 74 */	stw r8, 0x74(r1)
/* 80361914 0035E854  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80361918 0035E858  D0 41 00 78 */	stfs f2, 0x78(r1)
/* 8036191C 0035E85C  D0 21 00 7C */	stfs f1, 0x7c(r1)
/* 80361920 0035E860  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 80361924 0035E864  90 01 00 74 */	stw r0, 0x74(r1)
/* 80361928 0035E868  D0 61 00 84 */	stfs f3, 0x84(r1)
/* 8036192C 0035E86C  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 80361930 0035E870  48 0C 7F 71 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80361934 0035E874  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80361938 0035E878  38 C0 00 00 */	li r6, 0
/* 8036193C 0035E87C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80361940 0035E880  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple4@ha
/* 80361944 0035E884  90 01 00 54 */	stw r0, 0x54(r1)
/* 80361948 0035E888  38 04 6A 3C */	addi r0, r4, __vt__Q23efx8TSimple4@l
/* 8036194C 0035E88C  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx4@ha
/* 80361950 0035E890  3C 80 80 4F */	lis r4, __vt__Q23efx10TKchDamage@ha
/* 80361954 0035E894  90 01 00 54 */	stw r0, 0x54(r1)
/* 80361958 0035E898  38 05 69 D8 */	addi r0, r5, __vt__Q23efx11TSimpleMtx4@l
/* 8036195C 0035E89C  39 20 02 1A */	li r9, 0x21a
/* 80361960 0035E8A0  39 00 02 1B */	li r8, 0x21b
/* 80361964 0035E8A4  90 01 00 54 */	stw r0, 0x54(r1)
/* 80361968 0035E8A8  38 04 A0 CC */	addi r0, r4, __vt__Q23efx10TKchDamage@l
/* 8036196C 0035E8AC  38 E0 02 1C */	li r7, 0x21c
/* 80361970 0035E8B0  38 A0 02 1D */	li r5, 0x21d
/* 80361974 0035E8B4  90 61 00 70 */	stw r3, 0x70(r1)
/* 80361978 0035E8B8  38 61 00 54 */	addi r3, r1, 0x54
/* 8036197C 0035E8BC  38 81 00 74 */	addi r4, r1, 0x74
/* 80361980 0035E8C0  B1 21 00 58 */	sth r9, 0x58(r1)
/* 80361984 0035E8C4  B1 01 00 5A */	sth r8, 0x5a(r1)
/* 80361988 0035E8C8  B0 E1 00 5C */	sth r7, 0x5c(r1)
/* 8036198C 0035E8CC  B0 A1 00 5E */	sth r5, 0x5e(r1)
/* 80361990 0035E8D0  90 C1 00 60 */	stw r6, 0x60(r1)
/* 80361994 0035E8D4  90 C1 00 64 */	stw r6, 0x64(r1)
/* 80361998 0035E8D8  90 C1 00 68 */	stw r6, 0x68(r1)
/* 8036199C 0035E8DC  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 803619A0 0035E8E0  90 01 00 54 */	stw r0, 0x54(r1)
/* 803619A4 0035E8E4  48 08 A5 61 */	bl create__Q23efx10TKchDamageFPQ23efx3Arg
/* 803619A8 0035E8E8  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 803619AC 0035E8EC  48 0C 7E F5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803619B0 0035E8F0  90 61 00 70 */	stw r3, 0x70(r1)
/* 803619B4 0035E8F4  48 00 02 04 */	b .L_80361BB8
.L_803619B8:
/* 803619B8 0035E8F8  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803619BC 0035E8FC  38 81 00 2C */	addi r4, r1, 0x2c
/* 803619C0 0035E900  81 83 00 00 */	lwz r12, 0(r3)
/* 803619C4 0035E904  81 8C 00 08 */	lwz r12, 8(r12)
/* 803619C8 0035E908  7D 89 03 A6 */	mtctr r12
/* 803619CC 0035E90C  4E 80 04 21 */	bctrl 
/* 803619D0 0035E910  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 803619D4 0035E914  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 803619D8 0035E918  48 08 A6 45 */	bl setGlobalScale__Q23efx13TKchSmokeHanaFf
/* 803619DC 0035E91C  48 00 01 DC */	b .L_80361BB8
.L_803619E0:
/* 803619E0 0035E920  80 7F 03 40 */	lwz r3, 0x340(r31)
/* 803619E4 0035E924  28 03 00 00 */	cmplwi r3, 0
/* 803619E8 0035E928  41 82 00 1C */	beq .L_80361A04
/* 803619EC 0035E92C  81 83 00 00 */	lwz r12, 0(r3)
/* 803619F0 0035E930  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803619F4 0035E934  7D 89 03 A6 */	mtctr r12
/* 803619F8 0035E938  4E 80 04 21 */	bctrl 
/* 803619FC 0035E93C  C0 03 00 00 */	lfs f0, 0(r3)
/* 80361A00 0035E940  D0 01 00 98 */	stfs f0, 0x98(r1)
.L_80361A04:
/* 80361A04 0035E944  80 7F 03 68 */	lwz r3, 0x368(r31)
/* 80361A08 0035E948  38 81 00 88 */	addi r4, r1, 0x88
/* 80361A0C 0035E94C  81 83 00 00 */	lwz r12, 0(r3)
/* 80361A10 0035E950  81 8C 00 08 */	lwz r12, 8(r12)
/* 80361A14 0035E954  7D 89 03 A6 */	mtctr r12
/* 80361A18 0035E958  4E 80 04 21 */	bctrl 
/* 80361A1C 0035E95C  80 7F 03 68 */	lwz r3, 0x368(r31)
/* 80361A20 0035E960  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 80361A24 0035E964  48 08 A9 95 */	bl setGlobalScale__Q23efx22TKchYodareBaseChaseMtxFf
/* 80361A28 0035E968  48 00 01 90 */	b .L_80361BB8
.L_80361A2C:
/* 80361A2C 0035E96C  80 7F 03 40 */	lwz r3, 0x340(r31)
/* 80361A30 0035E970  28 03 00 00 */	cmplwi r3, 0
/* 80361A34 0035E974  41 82 00 1C */	beq .L_80361A50
/* 80361A38 0035E978  81 83 00 00 */	lwz r12, 0(r3)
/* 80361A3C 0035E97C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80361A40 0035E980  7D 89 03 A6 */	mtctr r12
/* 80361A44 0035E984  4E 80 04 21 */	bctrl 
/* 80361A48 0035E988  C0 03 00 00 */	lfs f0, 0(r3)
/* 80361A4C 0035E98C  D0 01 00 98 */	stfs f0, 0x98(r1)
.L_80361A50:
/* 80361A50 0035E990  80 7F 03 6C */	lwz r3, 0x36c(r31)
/* 80361A54 0035E994  38 81 00 88 */	addi r4, r1, 0x88
/* 80361A58 0035E998  81 83 00 00 */	lwz r12, 0(r3)
/* 80361A5C 0035E99C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80361A60 0035E9A0  7D 89 03 A6 */	mtctr r12
/* 80361A64 0035E9A4  4E 80 04 21 */	bctrl 
/* 80361A68 0035E9A8  80 7F 03 6C */	lwz r3, 0x36c(r31)
/* 80361A6C 0035E9AC  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 80361A70 0035E9B0  48 08 A9 49 */	bl setGlobalScale__Q23efx22TKchYodareBaseChaseMtxFf
/* 80361A74 0035E9B4  80 7F 03 70 */	lwz r3, 0x370(r31)
/* 80361A78 0035E9B8  38 81 00 2C */	addi r4, r1, 0x2c
/* 80361A7C 0035E9BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80361A80 0035E9C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80361A84 0035E9C4  7D 89 03 A6 */	mtctr r12
/* 80361A88 0035E9C8  4E 80 04 21 */	bctrl 
/* 80361A8C 0035E9CC  80 7F 03 70 */	lwz r3, 0x370(r31)
/* 80361A90 0035E9D0  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 80361A94 0035E9D4  48 08 A6 71 */	bl setGlobalScale__Q23efx12TKchDeadHanaFf
/* 80361A98 0035E9D8  48 00 01 20 */	b .L_80361BB8
.L_80361A9C:
/* 80361A9C 0035E9DC  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 80361AA0 0035E9E0  28 00 00 00 */	cmplwi r0, 0
/* 80361AA4 0035E9E4  41 82 01 14 */	beq .L_80361BB8
/* 80361AA8 0035E9E8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80361AAC 0035E9EC  38 82 04 08 */	addi r4, r2, lbl_8051E768@sda21
/* 80361AB0 0035E9F0  48 0D D5 35 */	bl getJoint__Q28SysShape5ModelFPc
/* 80361AB4 0035E9F4  48 0C 7D ED */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80361AB8 0035E9F8  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 80361ABC 0035E9FC  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80361AC0 0035EA00  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80361AC4 0035EA04  D0 1F 03 7C */	stfs f0, 0x37c(r31)
/* 80361AC8 0035EA08  D0 3F 03 80 */	stfs f1, 0x380(r31)
/* 80361ACC 0035EA0C  D0 5F 03 84 */	stfs f2, 0x384(r31)
/* 80361AD0 0035EA10  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 80361AD4 0035EA14  81 83 00 00 */	lwz r12, 0(r3)
/* 80361AD8 0035EA18  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80361ADC 0035EA1C  7D 89 03 A6 */	mtctr r12
/* 80361AE0 0035EA20  4E 80 04 21 */	bctrl 
/* 80361AE4 0035EA24  C0 23 00 00 */	lfs f1, 0(r3)
/* 80361AE8 0035EA28  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80361AEC 0035EA2C  3C 60 80 4B */	lis r3, __vt__Q23efx12ArgEnemyType@ha
/* 80361AF0 0035EA30  C0 02 03 58 */	lfs f0, lbl_8051E6B8@sda21(r2)
/* 80361AF4 0035EA34  D0 3F 03 80 */	stfs f1, 0x380(r31)
/* 80361AF8 0035EA38  38 A4 A7 EC */	addi r5, r4, __vt__Q23efx3Arg@l
/* 80361AFC 0035EA3C  38 63 A7 E0 */	addi r3, r3, __vt__Q23efx12ArgEnemyType@l
/* 80361B00 0035EA40  38 00 00 1B */	li r0, 0x1b
/* 80361B04 0035EA44  81 1F 03 7C */	lwz r8, 0x37c(r31)
/* 80361B08 0035EA48  38 81 00 3C */	addi r4, r1, 0x3c
/* 80361B0C 0035EA4C  80 FF 03 80 */	lwz r7, 0x380(r31)
/* 80361B10 0035EA50  80 DF 03 84 */	lwz r6, 0x384(r31)
/* 80361B14 0035EA54  91 01 00 08 */	stw r8, 8(r1)
/* 80361B18 0035EA58  90 E1 00 0C */	stw r7, 0xc(r1)
/* 80361B1C 0035EA5C  C0 61 00 08 */	lfs f3, 8(r1)
/* 80361B20 0035EA60  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80361B24 0035EA64  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80361B28 0035EA68  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 80361B2C 0035EA6C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80361B30 0035EA70  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 80361B34 0035EA74  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 80361B38 0035EA78  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80361B3C 0035EA7C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80361B40 0035EA80  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80361B44 0035EA84  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 80361B48 0035EA88  80 7F 03 74 */	lwz r3, 0x374(r31)
/* 80361B4C 0035EA8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80361B50 0035EA90  81 8C 00 08 */	lwz r12, 8(r12)
/* 80361B54 0035EA94  7D 89 03 A6 */	mtctr r12
/* 80361B58 0035EA98  4E 80 04 21 */	bctrl 
/* 80361B5C 0035EA9C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80361B60 0035EAA0  38 82 04 10 */	addi r4, r2, lbl_8051E770@sda21
/* 80361B64 0035EAA4  48 0D D4 81 */	bl getJoint__Q28SysShape5ModelFPc
/* 80361B68 0035EAA8  48 0C 7D 39 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80361B6C 0035EAAC  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 80361B70 0035EAB0  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80361B74 0035EAB4  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80361B78 0035EAB8  D0 1F 03 88 */	stfs f0, 0x388(r31)
/* 80361B7C 0035EABC  D0 3F 03 8C */	stfs f1, 0x38c(r31)
/* 80361B80 0035EAC0  D0 5F 03 90 */	stfs f2, 0x390(r31)
/* 80361B84 0035EAC4  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 80361B88 0035EAC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80361B8C 0035EACC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80361B90 0035EAD0  7D 89 03 A6 */	mtctr r12
/* 80361B94 0035EAD4  4E 80 04 21 */	bctrl 
/* 80361B98 0035EAD8  C0 03 00 00 */	lfs f0, 0(r3)
/* 80361B9C 0035EADC  38 81 00 3C */	addi r4, r1, 0x3c
/* 80361BA0 0035EAE0  D0 1F 03 8C */	stfs f0, 0x38c(r31)
/* 80361BA4 0035EAE4  80 7F 03 78 */	lwz r3, 0x378(r31)
/* 80361BA8 0035EAE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80361BAC 0035EAEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80361BB0 0035EAF0  7D 89 03 A6 */	mtctr r12
/* 80361BB4 0035EAF4  4E 80 04 21 */	bctrl 
.L_80361BB8:
/* 80361BB8 0035EAF8  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80361BBC 0035EAFC  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80361BC0 0035EB00  7C 08 03 A6 */	mtlr r0
/* 80361BC4 0035EB04  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80361BC8 0035EB08  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game10KingChappy3ObjFi

.fn fadeEffect__Q34Game10KingChappy3ObjFi, global
/* 80361BCC 0035EB0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80361BD0 0035EB10  7C 08 02 A6 */	mflr r0
/* 80361BD4 0035EB14  28 04 00 08 */	cmplwi r4, 8
/* 80361BD8 0035EB18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80361BDC 0035EB1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80361BE0 0035EB20  7C 7F 1B 78 */	mr r31, r3
/* 80361BE4 0035EB24  41 81 01 14 */	bgt .L_80361CF8
/* 80361BE8 0035EB28  3C 60 80 4E */	lis r3, lbl_804E1D58@ha
/* 80361BEC 0035EB2C  54 80 10 3A */	slwi r0, r4, 2
/* 80361BF0 0035EB30  38 63 1D 58 */	addi r3, r3, lbl_804E1D58@l
/* 80361BF4 0035EB34  7C 03 00 2E */	lwzx r0, r3, r0
/* 80361BF8 0035EB38  7C 09 03 A6 */	mtctr r0
/* 80361BFC 0035EB3C  4E 80 04 20 */	bctr 
.L_80361C00:
/* 80361C00 0035EB40  80 7F 03 50 */	lwz r3, 0x350(r31)
/* 80361C04 0035EB44  81 83 00 00 */	lwz r12, 0(r3)
/* 80361C08 0035EB48  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361C0C 0035EB4C  7D 89 03 A6 */	mtctr r12
/* 80361C10 0035EB50  4E 80 04 21 */	bctrl 
/* 80361C14 0035EB54  48 00 00 E4 */	b .L_80361CF8
.L_80361C18:
/* 80361C18 0035EB58  80 7F 03 58 */	lwz r3, 0x358(r31)
/* 80361C1C 0035EB5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80361C20 0035EB60  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361C24 0035EB64  7D 89 03 A6 */	mtctr r12
/* 80361C28 0035EB68  4E 80 04 21 */	bctrl 
/* 80361C2C 0035EB6C  80 7F 03 54 */	lwz r3, 0x354(r31)
/* 80361C30 0035EB70  81 83 00 00 */	lwz r12, 0(r3)
/* 80361C34 0035EB74  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361C38 0035EB78  7D 89 03 A6 */	mtctr r12
/* 80361C3C 0035EB7C  4E 80 04 21 */	bctrl 
/* 80361C40 0035EB80  48 00 00 B8 */	b .L_80361CF8
.L_80361C44:
/* 80361C44 0035EB84  80 7F 03 5C */	lwz r3, 0x35c(r31)
/* 80361C48 0035EB88  81 83 00 00 */	lwz r12, 0(r3)
/* 80361C4C 0035EB8C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361C50 0035EB90  7D 89 03 A6 */	mtctr r12
/* 80361C54 0035EB94  4E 80 04 21 */	bctrl 
/* 80361C58 0035EB98  48 00 00 A0 */	b .L_80361CF8
.L_80361C5C:
/* 80361C5C 0035EB9C  80 7F 03 60 */	lwz r3, 0x360(r31)
/* 80361C60 0035EBA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80361C64 0035EBA4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361C68 0035EBA8  7D 89 03 A6 */	mtctr r12
/* 80361C6C 0035EBAC  4E 80 04 21 */	bctrl 
/* 80361C70 0035EBB0  48 00 00 88 */	b .L_80361CF8
.L_80361C74:
/* 80361C74 0035EBB4  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 80361C78 0035EBB8  81 83 00 00 */	lwz r12, 0(r3)
/* 80361C7C 0035EBBC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361C80 0035EBC0  7D 89 03 A6 */	mtctr r12
/* 80361C84 0035EBC4  4E 80 04 21 */	bctrl 
/* 80361C88 0035EBC8  48 00 00 70 */	b .L_80361CF8
.L_80361C8C:
/* 80361C8C 0035EBCC  80 7F 03 68 */	lwz r3, 0x368(r31)
/* 80361C90 0035EBD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80361C94 0035EBD4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361C98 0035EBD8  7D 89 03 A6 */	mtctr r12
/* 80361C9C 0035EBDC  4E 80 04 21 */	bctrl 
/* 80361CA0 0035EBE0  48 00 00 58 */	b .L_80361CF8
.L_80361CA4:
/* 80361CA4 0035EBE4  80 7F 03 6C */	lwz r3, 0x36c(r31)
/* 80361CA8 0035EBE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80361CAC 0035EBEC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361CB0 0035EBF0  7D 89 03 A6 */	mtctr r12
/* 80361CB4 0035EBF4  4E 80 04 21 */	bctrl 
/* 80361CB8 0035EBF8  80 7F 03 70 */	lwz r3, 0x370(r31)
/* 80361CBC 0035EBFC  81 83 00 00 */	lwz r12, 0(r3)
/* 80361CC0 0035EC00  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361CC4 0035EC04  7D 89 03 A6 */	mtctr r12
/* 80361CC8 0035EC08  4E 80 04 21 */	bctrl 
/* 80361CCC 0035EC0C  48 00 00 2C */	b .L_80361CF8
.L_80361CD0:
/* 80361CD0 0035EC10  80 7F 03 74 */	lwz r3, 0x374(r31)
/* 80361CD4 0035EC14  81 83 00 00 */	lwz r12, 0(r3)
/* 80361CD8 0035EC18  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361CDC 0035EC1C  7D 89 03 A6 */	mtctr r12
/* 80361CE0 0035EC20  4E 80 04 21 */	bctrl 
/* 80361CE4 0035EC24  80 7F 03 78 */	lwz r3, 0x378(r31)
/* 80361CE8 0035EC28  81 83 00 00 */	lwz r12, 0(r3)
/* 80361CEC 0035EC2C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80361CF0 0035EC30  7D 89 03 A6 */	mtctr r12
/* 80361CF4 0035EC34  4E 80 04 21 */	bctrl 
.L_80361CF8:
/* 80361CF8 0035EC38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80361CFC 0035EC3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80361D00 0035EC40  7C 08 03 A6 */	mtlr r0
/* 80361D04 0035EC44  38 21 00 10 */	addi r1, r1, 0x10
/* 80361D08 0035EC48  4E 80 00 20 */	blr 
.endfn fadeEffect__Q34Game10KingChappy3ObjFi

.fn createBounceEffect__Q34Game10KingChappy3ObjFv, global
/* 80361D0C 0035EC4C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80361D10 0035EC50  7C 08 02 A6 */	mflr r0
/* 80361D14 0035EC54  90 01 00 44 */	stw r0, 0x44(r1)
/* 80361D18 0035EC58  80 03 02 80 */	lwz r0, 0x280(r3)
/* 80361D1C 0035EC5C  28 00 00 00 */	cmplwi r0, 0
/* 80361D20 0035EC60  41 82 00 14 */	beq .L_80361D34
/* 80361D24 0035EC64  C0 22 04 18 */	lfs f1, lbl_8051E778@sda21(r2)
/* 80361D28 0035EC68  38 83 01 8C */	addi r4, r3, 0x18c
/* 80361D2C 0035EC6C  4B DA 1C CD */	bl "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 80361D30 0035EC70  48 00 00 94 */	b .L_80361DC4
.L_80361D34:
/* 80361D34 0035EC74  81 03 01 8C */	lwz r8, 0x18c(r3)
/* 80361D38 0035EC78  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80361D3C 0035EC7C  80 C3 01 90 */	lwz r6, 0x190(r3)
/* 80361D40 0035EC80  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80361D44 0035EC84  80 E3 01 94 */	lwz r7, 0x194(r3)
/* 80361D48 0035EC88  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 80361D4C 0035EC8C  C0 63 01 F8 */	lfs f3, 0x1f8(r3)
/* 80361D50 0035EC90  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 80361D54 0035EC94  91 01 00 08 */	stw r8, 8(r1)
/* 80361D58 0035EC98  39 25 A7 EC */	addi r9, r5, __vt__Q23efx3Arg@l
/* 80361D5C 0035EC9C  3D 00 80 4B */	lis r8, __vt__Q23efx8ArgScale@ha
/* 80361D60 0035ECA0  3C 60 80 4F */	lis r3, __vt__Q23efx13TKchDownsmoke@ha
/* 80361D64 0035ECA4  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80361D68 0035ECA8  38 C0 02 27 */	li r6, 0x227
/* 80361D6C 0035ECAC  C0 41 00 08 */	lfs f2, 8(r1)
/* 80361D70 0035ECB0  38 A0 00 00 */	li r5, 0
/* 80361D74 0035ECB4  90 E1 00 10 */	stw r7, 0x10(r1)
/* 80361D78 0035ECB8  38 E4 6A 78 */	addi r7, r4, __vt__Q23efx8TSimple1@l
/* 80361D7C 0035ECBC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80361D80 0035ECC0  39 08 A2 DC */	addi r8, r8, __vt__Q23efx8ArgScale@l
/* 80361D84 0035ECC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80361D88 0035ECC8  38 03 A0 B8 */	addi r0, r3, __vt__Q23efx13TKchDownsmoke@l
/* 80361D8C 0035ECCC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80361D90 0035ECD0  38 61 00 14 */	addi r3, r1, 0x14
/* 80361D94 0035ECD4  91 21 00 20 */	stw r9, 0x20(r1)
/* 80361D98 0035ECD8  38 81 00 20 */	addi r4, r1, 0x20
/* 80361D9C 0035ECDC  90 E1 00 14 */	stw r7, 0x14(r1)
/* 80361DA0 0035ECE0  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80361DA4 0035ECE4  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80361DA8 0035ECE8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80361DAC 0035ECEC  91 01 00 20 */	stw r8, 0x20(r1)
/* 80361DB0 0035ECF0  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 80361DB4 0035ECF4  B0 C1 00 18 */	sth r6, 0x18(r1)
/* 80361DB8 0035ECF8  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 80361DBC 0035ECFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80361DC0 0035ED00  48 08 A2 75 */	bl create__Q23efx13TKchDownsmokeFPQ23efx3Arg
.L_80361DC4:
/* 80361DC4 0035ED04  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80361DC8 0035ED08  7C 08 03 A6 */	mtlr r0
/* 80361DCC 0035ED0C  38 21 00 40 */	addi r1, r1, 0x40
/* 80361DD0 0035ED10  4E 80 00 20 */	blr 
.endfn createBounceEffect__Q34Game10KingChappy3ObjFv

.fn getName__Q23efx12ArgKchYodareFv, weak
/* 80361DD4 0035ED14  3C 60 80 49 */	lis r3, lbl_8049165C@ha
/* 80361DD8 0035ED18  38 63 16 5C */	addi r3, r3, lbl_8049165C@l
/* 80361DDC 0035ED1C  4E 80 00 20 */	blr 
.endfn getName__Q23efx12ArgKchYodareFv

.fn __dt__Q23efx10TKchYodareFv, weak
/* 80361DE0 0035ED20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80361DE4 0035ED24  7C 08 02 A6 */	mflr r0
/* 80361DE8 0035ED28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80361DEC 0035ED2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80361DF0 0035ED30  7C 9F 23 78 */	mr r31, r4
/* 80361DF4 0035ED34  93 C1 00 08 */	stw r30, 8(r1)
/* 80361DF8 0035ED38  7C 7E 1B 79 */	or. r30, r3, r3
/* 80361DFC 0035ED3C  41 82 01 28 */	beq .L_80361F24
/* 80361E00 0035ED40  3C 60 80 4E */	lis r3, __vt__Q23efx10TKchYodare@ha
/* 80361E04 0035ED44  38 63 1D 88 */	addi r3, r3, __vt__Q23efx10TKchYodare@l
/* 80361E08 0035ED48  90 7E 00 00 */	stw r3, 0(r30)
/* 80361E0C 0035ED4C  38 03 00 14 */	addi r0, r3, 0x14
/* 80361E10 0035ED50  90 1E 00 04 */	stw r0, 4(r30)
/* 80361E14 0035ED54  41 82 01 00 */	beq .L_80361F14
/* 80361E18 0035ED58  3C 60 80 4F */	lis r3, __vt__Q23efx22TKchYodareBaseChaseMtx@ha
/* 80361E1C 0035ED5C  34 1E 00 14 */	addic. r0, r30, 0x14
/* 80361E20 0035ED60  38 63 A0 54 */	addi r3, r3, __vt__Q23efx22TKchYodareBaseChaseMtx@l
/* 80361E24 0035ED64  90 7E 00 00 */	stw r3, 0(r30)
/* 80361E28 0035ED68  38 03 00 14 */	addi r0, r3, 0x14
/* 80361E2C 0035ED6C  90 1E 00 04 */	stw r0, 4(r30)
/* 80361E30 0035ED70  41 82 00 A4 */	beq .L_80361ED4
/* 80361E34 0035ED74  3C 60 80 4F */	lis r3, __vt__Q23efx27TParticleCallBack_KchYodare@ha
/* 80361E38 0035ED78  34 9E 00 34 */	addic. r4, r30, 0x34
/* 80361E3C 0035ED7C  38 03 A0 A0 */	addi r0, r3, __vt__Q23efx27TParticleCallBack_KchYodare@l
/* 80361E40 0035ED80  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80361E44 0035ED84  41 82 00 40 */	beq .L_80361E84
/* 80361E48 0035ED88  3C 60 80 4E */	lis r3, __vt__Q23efx16TKchYodareHitWat@ha
/* 80361E4C 0035ED8C  28 04 00 00 */	cmplwi r4, 0
/* 80361E50 0035ED90  38 63 1E 6C */	addi r3, r3, __vt__Q23efx16TKchYodareHitWat@l
/* 80361E54 0035ED94  90 7E 00 34 */	stw r3, 0x34(r30)
/* 80361E58 0035ED98  38 03 00 14 */	addi r0, r3, 0x14
/* 80361E5C 0035ED9C  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80361E60 0035EDA0  41 82 00 24 */	beq .L_80361E84
/* 80361E64 0035EDA4  3C 80 80 4E */	lis r4, __vt__Q23efx17TOneEmitterSimple@ha
/* 80361E68 0035EDA8  38 7E 00 38 */	addi r3, r30, 0x38
/* 80361E6C 0035EDAC  38 A4 6A 8C */	addi r5, r4, __vt__Q23efx17TOneEmitterSimple@l
/* 80361E70 0035EDB0  38 80 00 00 */	li r4, 0
/* 80361E74 0035EDB4  90 BE 00 34 */	stw r5, 0x34(r30)
/* 80361E78 0035EDB8  38 05 00 14 */	addi r0, r5, 0x14
/* 80361E7C 0035EDBC  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80361E80 0035EDC0  4B D2 DE 1D */	bl __dt__18JPAEmitterCallBackFv
.L_80361E84:
/* 80361E84 0035EDC4  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80361E88 0035EDC8  41 82 00 40 */	beq .L_80361EC8
/* 80361E8C 0035EDCC  3C 60 80 4E */	lis r3, __vt__Q23efx15TKchYodareHitGr@ha
/* 80361E90 0035EDD0  28 00 00 00 */	cmplwi r0, 0
/* 80361E94 0035EDD4  38 63 1E AC */	addi r3, r3, __vt__Q23efx15TKchYodareHitGr@l
/* 80361E98 0035EDD8  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80361E9C 0035EDDC  38 03 00 14 */	addi r0, r3, 0x14
/* 80361EA0 0035EDE0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80361EA4 0035EDE4  41 82 00 24 */	beq .L_80361EC8
/* 80361EA8 0035EDE8  3C 80 80 4E */	lis r4, __vt__Q23efx17TOneEmitterSimple@ha
/* 80361EAC 0035EDEC  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80361EB0 0035EDF0  38 A4 6A 8C */	addi r5, r4, __vt__Q23efx17TOneEmitterSimple@l
/* 80361EB4 0035EDF4  38 80 00 00 */	li r4, 0
/* 80361EB8 0035EDF8  90 BE 00 18 */	stw r5, 0x18(r30)
/* 80361EBC 0035EDFC  38 05 00 14 */	addi r0, r5, 0x14
/* 80361EC0 0035EE00  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80361EC4 0035EE04  4B D2 DD D9 */	bl __dt__18JPAEmitterCallBackFv
.L_80361EC8:
/* 80361EC8 0035EE08  38 7E 00 14 */	addi r3, r30, 0x14
/* 80361ECC 0035EE0C  38 80 00 00 */	li r4, 0
/* 80361ED0 0035EE10  4B D3 21 59 */	bl __dt__19JPAParticleCallBackFv
.L_80361ED4:
/* 80361ED4 0035EE14  28 1E 00 00 */	cmplwi r30, 0
/* 80361ED8 0035EE18  41 82 00 3C */	beq .L_80361F14
/* 80361EDC 0035EE1C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 80361EE0 0035EE20  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 80361EE4 0035EE24  90 7E 00 00 */	stw r3, 0(r30)
/* 80361EE8 0035EE28  38 03 00 14 */	addi r0, r3, 0x14
/* 80361EEC 0035EE2C  90 1E 00 04 */	stw r0, 4(r30)
/* 80361EF0 0035EE30  41 82 00 24 */	beq .L_80361F14
/* 80361EF4 0035EE34  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80361EF8 0035EE38  38 7E 00 04 */	addi r3, r30, 4
/* 80361EFC 0035EE3C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80361F00 0035EE40  38 80 00 00 */	li r4, 0
/* 80361F04 0035EE44  90 BE 00 00 */	stw r5, 0(r30)
/* 80361F08 0035EE48  38 05 00 14 */	addi r0, r5, 0x14
/* 80361F0C 0035EE4C  90 1E 00 04 */	stw r0, 4(r30)
/* 80361F10 0035EE50  4B D2 DD 8D */	bl __dt__18JPAEmitterCallBackFv
.L_80361F14:
/* 80361F14 0035EE54  7F E0 07 35 */	extsh. r0, r31
/* 80361F18 0035EE58  40 81 00 0C */	ble .L_80361F24
/* 80361F1C 0035EE5C  7F C3 F3 78 */	mr r3, r30
/* 80361F20 0035EE60  4B CC 21 95 */	bl __dl__FPv
.L_80361F24:
/* 80361F24 0035EE64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80361F28 0035EE68  7F C3 F3 78 */	mr r3, r30
/* 80361F2C 0035EE6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80361F30 0035EE70  83 C1 00 08 */	lwz r30, 8(r1)
/* 80361F34 0035EE74  7C 08 03 A6 */	mtlr r0
/* 80361F38 0035EE78  38 21 00 10 */	addi r1, r1, 0x10
/* 80361F3C 0035EE7C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx10TKchYodareFv

.fn forceKill__Q23efx22TKchYodareBaseChaseMtxFv, weak
/* 80361F40 0035EE80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80361F44 0035EE84  7C 08 02 A6 */	mflr r0
/* 80361F48 0035EE88  90 01 00 14 */	stw r0, 0x14(r1)
/* 80361F4C 0035EE8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80361F50 0035EE90  7C 7F 1B 78 */	mr r31, r3
/* 80361F54 0035EE94  48 04 D9 71 */	bl forceKill__Q23efx5TSyncFv
/* 80361F58 0035EE98  38 7F 00 18 */	addi r3, r31, 0x18
/* 80361F5C 0035EE9C  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 80361F60 0035EEA0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80361F64 0035EEA4  7D 89 03 A6 */	mtctr r12
/* 80361F68 0035EEA8  4E 80 04 21 */	bctrl 
/* 80361F6C 0035EEAC  38 7F 00 34 */	addi r3, r31, 0x34
/* 80361F70 0035EEB0  81 9F 00 34 */	lwz r12, 0x34(r31)
/* 80361F74 0035EEB4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80361F78 0035EEB8  7D 89 03 A6 */	mtctr r12
/* 80361F7C 0035EEBC  4E 80 04 21 */	bctrl 
/* 80361F80 0035EEC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80361F84 0035EEC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80361F88 0035EEC8  7C 08 03 A6 */	mtlr r0
/* 80361F8C 0035EECC  38 21 00 10 */	addi r1, r1, 0x10
/* 80361F90 0035EED0  4E 80 00 20 */	blr 
.endfn forceKill__Q23efx22TKchYodareBaseChaseMtxFv

.fn __dt__Q23efx16TKchAttackYodareFv, weak
/* 80361F94 0035EED4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80361F98 0035EED8  7C 08 02 A6 */	mflr r0
/* 80361F9C 0035EEDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80361FA0 0035EEE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80361FA4 0035EEE4  7C 9F 23 78 */	mr r31, r4
/* 80361FA8 0035EEE8  93 C1 00 08 */	stw r30, 8(r1)
/* 80361FAC 0035EEEC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80361FB0 0035EEF0  41 82 01 28 */	beq .L_803620D8
/* 80361FB4 0035EEF4  3C 60 80 4E */	lis r3, __vt__Q23efx16TKchAttackYodare@ha
/* 80361FB8 0035EEF8  38 63 1D D4 */	addi r3, r3, __vt__Q23efx16TKchAttackYodare@l
/* 80361FBC 0035EEFC  90 7E 00 00 */	stw r3, 0(r30)
/* 80361FC0 0035EF00  38 03 00 14 */	addi r0, r3, 0x14
/* 80361FC4 0035EF04  90 1E 00 04 */	stw r0, 4(r30)
/* 80361FC8 0035EF08  41 82 01 00 */	beq .L_803620C8
/* 80361FCC 0035EF0C  3C 60 80 4F */	lis r3, __vt__Q23efx22TKchYodareBaseChaseMtx@ha
/* 80361FD0 0035EF10  34 1E 00 14 */	addic. r0, r30, 0x14
/* 80361FD4 0035EF14  38 63 A0 54 */	addi r3, r3, __vt__Q23efx22TKchYodareBaseChaseMtx@l
/* 80361FD8 0035EF18  90 7E 00 00 */	stw r3, 0(r30)
/* 80361FDC 0035EF1C  38 03 00 14 */	addi r0, r3, 0x14
/* 80361FE0 0035EF20  90 1E 00 04 */	stw r0, 4(r30)
/* 80361FE4 0035EF24  41 82 00 A4 */	beq .L_80362088
/* 80361FE8 0035EF28  3C 60 80 4F */	lis r3, __vt__Q23efx27TParticleCallBack_KchYodare@ha
/* 80361FEC 0035EF2C  34 9E 00 34 */	addic. r4, r30, 0x34
/* 80361FF0 0035EF30  38 03 A0 A0 */	addi r0, r3, __vt__Q23efx27TParticleCallBack_KchYodare@l
/* 80361FF4 0035EF34  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80361FF8 0035EF38  41 82 00 40 */	beq .L_80362038
/* 80361FFC 0035EF3C  3C 60 80 4E */	lis r3, __vt__Q23efx16TKchYodareHitWat@ha
/* 80362000 0035EF40  28 04 00 00 */	cmplwi r4, 0
/* 80362004 0035EF44  38 63 1E 6C */	addi r3, r3, __vt__Q23efx16TKchYodareHitWat@l
/* 80362008 0035EF48  90 7E 00 34 */	stw r3, 0x34(r30)
/* 8036200C 0035EF4C  38 03 00 14 */	addi r0, r3, 0x14
/* 80362010 0035EF50  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80362014 0035EF54  41 82 00 24 */	beq .L_80362038
/* 80362018 0035EF58  3C 80 80 4E */	lis r4, __vt__Q23efx17TOneEmitterSimple@ha
/* 8036201C 0035EF5C  38 7E 00 38 */	addi r3, r30, 0x38
/* 80362020 0035EF60  38 A4 6A 8C */	addi r5, r4, __vt__Q23efx17TOneEmitterSimple@l
/* 80362024 0035EF64  38 80 00 00 */	li r4, 0
/* 80362028 0035EF68  90 BE 00 34 */	stw r5, 0x34(r30)
/* 8036202C 0035EF6C  38 05 00 14 */	addi r0, r5, 0x14
/* 80362030 0035EF70  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80362034 0035EF74  4B D2 DC 69 */	bl __dt__18JPAEmitterCallBackFv
.L_80362038:
/* 80362038 0035EF78  34 1E 00 18 */	addic. r0, r30, 0x18
/* 8036203C 0035EF7C  41 82 00 40 */	beq .L_8036207C
/* 80362040 0035EF80  3C 60 80 4E */	lis r3, __vt__Q23efx15TKchYodareHitGr@ha
/* 80362044 0035EF84  28 00 00 00 */	cmplwi r0, 0
/* 80362048 0035EF88  38 63 1E AC */	addi r3, r3, __vt__Q23efx15TKchYodareHitGr@l
/* 8036204C 0035EF8C  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80362050 0035EF90  38 03 00 14 */	addi r0, r3, 0x14
/* 80362054 0035EF94  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80362058 0035EF98  41 82 00 24 */	beq .L_8036207C
/* 8036205C 0035EF9C  3C 80 80 4E */	lis r4, __vt__Q23efx17TOneEmitterSimple@ha
/* 80362060 0035EFA0  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80362064 0035EFA4  38 A4 6A 8C */	addi r5, r4, __vt__Q23efx17TOneEmitterSimple@l
/* 80362068 0035EFA8  38 80 00 00 */	li r4, 0
/* 8036206C 0035EFAC  90 BE 00 18 */	stw r5, 0x18(r30)
/* 80362070 0035EFB0  38 05 00 14 */	addi r0, r5, 0x14
/* 80362074 0035EFB4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80362078 0035EFB8  4B D2 DC 25 */	bl __dt__18JPAEmitterCallBackFv
.L_8036207C:
/* 8036207C 0035EFBC  38 7E 00 14 */	addi r3, r30, 0x14
/* 80362080 0035EFC0  38 80 00 00 */	li r4, 0
/* 80362084 0035EFC4  4B D3 1F A5 */	bl __dt__19JPAParticleCallBackFv
.L_80362088:
/* 80362088 0035EFC8  28 1E 00 00 */	cmplwi r30, 0
/* 8036208C 0035EFCC  41 82 00 3C */	beq .L_803620C8
/* 80362090 0035EFD0  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 80362094 0035EFD4  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 80362098 0035EFD8  90 7E 00 00 */	stw r3, 0(r30)
/* 8036209C 0035EFDC  38 03 00 14 */	addi r0, r3, 0x14
/* 803620A0 0035EFE0  90 1E 00 04 */	stw r0, 4(r30)
/* 803620A4 0035EFE4  41 82 00 24 */	beq .L_803620C8
/* 803620A8 0035EFE8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803620AC 0035EFEC  38 7E 00 04 */	addi r3, r30, 4
/* 803620B0 0035EFF0  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803620B4 0035EFF4  38 80 00 00 */	li r4, 0
/* 803620B8 0035EFF8  90 BE 00 00 */	stw r5, 0(r30)
/* 803620BC 0035EFFC  38 05 00 14 */	addi r0, r5, 0x14
/* 803620C0 0035F000  90 1E 00 04 */	stw r0, 4(r30)
/* 803620C4 0035F004  4B D2 DB D9 */	bl __dt__18JPAEmitterCallBackFv
.L_803620C8:
/* 803620C8 0035F008  7F E0 07 35 */	extsh. r0, r31
/* 803620CC 0035F00C  40 81 00 0C */	ble .L_803620D8
/* 803620D0 0035F010  7F C3 F3 78 */	mr r3, r30
/* 803620D4 0035F014  4B CC 1F E1 */	bl __dl__FPv
.L_803620D8:
/* 803620D8 0035F018  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803620DC 0035F01C  7F C3 F3 78 */	mr r3, r30
/* 803620E0 0035F020  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803620E4 0035F024  83 C1 00 08 */	lwz r30, 8(r1)
/* 803620E8 0035F028  7C 08 03 A6 */	mtlr r0
/* 803620EC 0035F02C  38 21 00 10 */	addi r1, r1, 0x10
/* 803620F0 0035F030  4E 80 00 20 */	blr 
.endfn __dt__Q23efx16TKchAttackYodareFv

.fn __dt__Q23efx14TKchDeadYodareFv, weak
/* 803620F4 0035F034  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803620F8 0035F038  7C 08 02 A6 */	mflr r0
/* 803620FC 0035F03C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80362100 0035F040  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80362104 0035F044  7C 9F 23 78 */	mr r31, r4
/* 80362108 0035F048  93 C1 00 08 */	stw r30, 8(r1)
/* 8036210C 0035F04C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80362110 0035F050  41 82 01 28 */	beq .L_80362238
/* 80362114 0035F054  3C 60 80 4E */	lis r3, __vt__Q23efx14TKchDeadYodare@ha
/* 80362118 0035F058  38 63 1E 20 */	addi r3, r3, __vt__Q23efx14TKchDeadYodare@l
/* 8036211C 0035F05C  90 7E 00 00 */	stw r3, 0(r30)
/* 80362120 0035F060  38 03 00 14 */	addi r0, r3, 0x14
/* 80362124 0035F064  90 1E 00 04 */	stw r0, 4(r30)
/* 80362128 0035F068  41 82 01 00 */	beq .L_80362228
/* 8036212C 0035F06C  3C 60 80 4F */	lis r3, __vt__Q23efx22TKchYodareBaseChaseMtx@ha
/* 80362130 0035F070  34 1E 00 14 */	addic. r0, r30, 0x14
/* 80362134 0035F074  38 63 A0 54 */	addi r3, r3, __vt__Q23efx22TKchYodareBaseChaseMtx@l
/* 80362138 0035F078  90 7E 00 00 */	stw r3, 0(r30)
/* 8036213C 0035F07C  38 03 00 14 */	addi r0, r3, 0x14
/* 80362140 0035F080  90 1E 00 04 */	stw r0, 4(r30)
/* 80362144 0035F084  41 82 00 A4 */	beq .L_803621E8
/* 80362148 0035F088  3C 60 80 4F */	lis r3, __vt__Q23efx27TParticleCallBack_KchYodare@ha
/* 8036214C 0035F08C  34 9E 00 34 */	addic. r4, r30, 0x34
/* 80362150 0035F090  38 03 A0 A0 */	addi r0, r3, __vt__Q23efx27TParticleCallBack_KchYodare@l
/* 80362154 0035F094  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80362158 0035F098  41 82 00 40 */	beq .L_80362198
/* 8036215C 0035F09C  3C 60 80 4E */	lis r3, __vt__Q23efx16TKchYodareHitWat@ha
/* 80362160 0035F0A0  28 04 00 00 */	cmplwi r4, 0
/* 80362164 0035F0A4  38 63 1E 6C */	addi r3, r3, __vt__Q23efx16TKchYodareHitWat@l
/* 80362168 0035F0A8  90 7E 00 34 */	stw r3, 0x34(r30)
/* 8036216C 0035F0AC  38 03 00 14 */	addi r0, r3, 0x14
/* 80362170 0035F0B0  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80362174 0035F0B4  41 82 00 24 */	beq .L_80362198
/* 80362178 0035F0B8  3C 80 80 4E */	lis r4, __vt__Q23efx17TOneEmitterSimple@ha
/* 8036217C 0035F0BC  38 7E 00 38 */	addi r3, r30, 0x38
/* 80362180 0035F0C0  38 A4 6A 8C */	addi r5, r4, __vt__Q23efx17TOneEmitterSimple@l
/* 80362184 0035F0C4  38 80 00 00 */	li r4, 0
/* 80362188 0035F0C8  90 BE 00 34 */	stw r5, 0x34(r30)
/* 8036218C 0035F0CC  38 05 00 14 */	addi r0, r5, 0x14
/* 80362190 0035F0D0  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80362194 0035F0D4  4B D2 DB 09 */	bl __dt__18JPAEmitterCallBackFv
.L_80362198:
/* 80362198 0035F0D8  34 1E 00 18 */	addic. r0, r30, 0x18
/* 8036219C 0035F0DC  41 82 00 40 */	beq .L_803621DC
/* 803621A0 0035F0E0  3C 60 80 4E */	lis r3, __vt__Q23efx15TKchYodareHitGr@ha
/* 803621A4 0035F0E4  28 00 00 00 */	cmplwi r0, 0
/* 803621A8 0035F0E8  38 63 1E AC */	addi r3, r3, __vt__Q23efx15TKchYodareHitGr@l
/* 803621AC 0035F0EC  90 7E 00 18 */	stw r3, 0x18(r30)
/* 803621B0 0035F0F0  38 03 00 14 */	addi r0, r3, 0x14
/* 803621B4 0035F0F4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 803621B8 0035F0F8  41 82 00 24 */	beq .L_803621DC
/* 803621BC 0035F0FC  3C 80 80 4E */	lis r4, __vt__Q23efx17TOneEmitterSimple@ha
/* 803621C0 0035F100  38 7E 00 1C */	addi r3, r30, 0x1c
/* 803621C4 0035F104  38 A4 6A 8C */	addi r5, r4, __vt__Q23efx17TOneEmitterSimple@l
/* 803621C8 0035F108  38 80 00 00 */	li r4, 0
/* 803621CC 0035F10C  90 BE 00 18 */	stw r5, 0x18(r30)
/* 803621D0 0035F110  38 05 00 14 */	addi r0, r5, 0x14
/* 803621D4 0035F114  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 803621D8 0035F118  4B D2 DA C5 */	bl __dt__18JPAEmitterCallBackFv
.L_803621DC:
/* 803621DC 0035F11C  38 7E 00 14 */	addi r3, r30, 0x14
/* 803621E0 0035F120  38 80 00 00 */	li r4, 0
/* 803621E4 0035F124  4B D3 1E 45 */	bl __dt__19JPAParticleCallBackFv
.L_803621E8:
/* 803621E8 0035F128  28 1E 00 00 */	cmplwi r30, 0
/* 803621EC 0035F12C  41 82 00 3C */	beq .L_80362228
/* 803621F0 0035F130  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 803621F4 0035F134  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 803621F8 0035F138  90 7E 00 00 */	stw r3, 0(r30)
/* 803621FC 0035F13C  38 03 00 14 */	addi r0, r3, 0x14
/* 80362200 0035F140  90 1E 00 04 */	stw r0, 4(r30)
/* 80362204 0035F144  41 82 00 24 */	beq .L_80362228
/* 80362208 0035F148  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8036220C 0035F14C  38 7E 00 04 */	addi r3, r30, 4
/* 80362210 0035F150  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80362214 0035F154  38 80 00 00 */	li r4, 0
/* 80362218 0035F158  90 BE 00 00 */	stw r5, 0(r30)
/* 8036221C 0035F15C  38 05 00 14 */	addi r0, r5, 0x14
/* 80362220 0035F160  90 1E 00 04 */	stw r0, 4(r30)
/* 80362224 0035F164  4B D2 DA 79 */	bl __dt__18JPAEmitterCallBackFv
.L_80362228:
/* 80362228 0035F168  7F E0 07 35 */	extsh. r0, r31
/* 8036222C 0035F16C  40 81 00 0C */	ble .L_80362238
/* 80362230 0035F170  7F C3 F3 78 */	mr r3, r30
/* 80362234 0035F174  4B CC 1E 81 */	bl __dl__FPv
.L_80362238:
/* 80362238 0035F178  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036223C 0035F17C  7F C3 F3 78 */	mr r3, r30
/* 80362240 0035F180  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80362244 0035F184  83 C1 00 08 */	lwz r30, 8(r1)
/* 80362248 0035F188  7C 08 03 A6 */	mtlr r0
/* 8036224C 0035F18C  38 21 00 10 */	addi r1, r1, 0x10
/* 80362250 0035F190  4E 80 00 20 */	blr 
.endfn __dt__Q23efx14TKchDeadYodareFv

.fn __dt__Q23efx13TKchSmokeHanaFv, weak
/* 80362254 0035F194  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80362258 0035F198  7C 08 02 A6 */	mflr r0
/* 8036225C 0035F19C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80362260 0035F1A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80362264 0035F1A4  7C 9F 23 78 */	mr r31, r4
/* 80362268 0035F1A8  93 C1 00 08 */	stw r30, 8(r1)
/* 8036226C 0035F1AC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80362270 0035F1B0  41 82 00 64 */	beq .L_803622D4
/* 80362274 0035F1B4  3C 60 80 4E */	lis r3, __vt__Q23efx13TKchSmokeHana@ha
/* 80362278 0035F1B8  38 63 1F 08 */	addi r3, r3, __vt__Q23efx13TKchSmokeHana@l
/* 8036227C 0035F1BC  90 7E 00 00 */	stw r3, 0(r30)
/* 80362280 0035F1C0  38 03 00 14 */	addi r0, r3, 0x14
/* 80362284 0035F1C4  90 1E 00 04 */	stw r0, 4(r30)
/* 80362288 0035F1C8  41 82 00 3C */	beq .L_803622C4
/* 8036228C 0035F1CC  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 80362290 0035F1D0  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 80362294 0035F1D4  90 7E 00 00 */	stw r3, 0(r30)
/* 80362298 0035F1D8  38 03 00 14 */	addi r0, r3, 0x14
/* 8036229C 0035F1DC  90 1E 00 04 */	stw r0, 4(r30)
/* 803622A0 0035F1E0  41 82 00 24 */	beq .L_803622C4
/* 803622A4 0035F1E4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803622A8 0035F1E8  38 7E 00 04 */	addi r3, r30, 4
/* 803622AC 0035F1EC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803622B0 0035F1F0  38 80 00 00 */	li r4, 0
/* 803622B4 0035F1F4  90 BE 00 00 */	stw r5, 0(r30)
/* 803622B8 0035F1F8  38 05 00 14 */	addi r0, r5, 0x14
/* 803622BC 0035F1FC  90 1E 00 04 */	stw r0, 4(r30)
/* 803622C0 0035F200  4B D2 D9 DD */	bl __dt__18JPAEmitterCallBackFv
.L_803622C4:
/* 803622C4 0035F204  7F E0 07 35 */	extsh. r0, r31
/* 803622C8 0035F208  40 81 00 0C */	ble .L_803622D4
/* 803622CC 0035F20C  7F C3 F3 78 */	mr r3, r30
/* 803622D0 0035F210  4B CC 1D E5 */	bl __dl__FPv
.L_803622D4:
/* 803622D4 0035F214  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803622D8 0035F218  7F C3 F3 78 */	mr r3, r30
/* 803622DC 0035F21C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803622E0 0035F220  83 C1 00 08 */	lwz r30, 8(r1)
/* 803622E4 0035F224  7C 08 03 A6 */	mtlr r0
/* 803622E8 0035F228  38 21 00 10 */	addi r1, r1, 0x10
/* 803622EC 0035F22C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx13TKchSmokeHanaFv

.fn __dt__Q23efx10TKchCryIndFv, weak
/* 803622F0 0035F230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803622F4 0035F234  7C 08 02 A6 */	mflr r0
/* 803622F8 0035F238  90 01 00 14 */	stw r0, 0x14(r1)
/* 803622FC 0035F23C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80362300 0035F240  7C 9F 23 78 */	mr r31, r4
/* 80362304 0035F244  93 C1 00 08 */	stw r30, 8(r1)
/* 80362308 0035F248  7C 7E 1B 79 */	or. r30, r3, r3
/* 8036230C 0035F24C  41 82 00 64 */	beq .L_80362370
/* 80362310 0035F250  3C 60 80 4E */	lis r3, __vt__Q23efx10TKchCryInd@ha
/* 80362314 0035F254  38 63 1F 54 */	addi r3, r3, __vt__Q23efx10TKchCryInd@l
/* 80362318 0035F258  90 7E 00 00 */	stw r3, 0(r30)
/* 8036231C 0035F25C  38 03 00 14 */	addi r0, r3, 0x14
/* 80362320 0035F260  90 1E 00 04 */	stw r0, 4(r30)
/* 80362324 0035F264  41 82 00 3C */	beq .L_80362360
/* 80362328 0035F268  3C 60 80 4E */	lis r3, __vt__Q23efx10TChaseMtxT@ha
/* 8036232C 0035F26C  38 63 68 5C */	addi r3, r3, __vt__Q23efx10TChaseMtxT@l
/* 80362330 0035F270  90 7E 00 00 */	stw r3, 0(r30)
/* 80362334 0035F274  38 03 00 14 */	addi r0, r3, 0x14
/* 80362338 0035F278  90 1E 00 04 */	stw r0, 4(r30)
/* 8036233C 0035F27C  41 82 00 24 */	beq .L_80362360
/* 80362340 0035F280  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80362344 0035F284  38 7E 00 04 */	addi r3, r30, 4
/* 80362348 0035F288  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8036234C 0035F28C  38 80 00 00 */	li r4, 0
/* 80362350 0035F290  90 BE 00 00 */	stw r5, 0(r30)
/* 80362354 0035F294  38 05 00 14 */	addi r0, r5, 0x14
/* 80362358 0035F298  90 1E 00 04 */	stw r0, 4(r30)
/* 8036235C 0035F29C  4B D2 D9 41 */	bl __dt__18JPAEmitterCallBackFv
.L_80362360:
/* 80362360 0035F2A0  7F E0 07 35 */	extsh. r0, r31
/* 80362364 0035F2A4  40 81 00 0C */	ble .L_80362370
/* 80362368 0035F2A8  7F C3 F3 78 */	mr r3, r30
/* 8036236C 0035F2AC  4B CC 1D 49 */	bl __dl__FPv
.L_80362370:
/* 80362370 0035F2B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80362374 0035F2B4  7F C3 F3 78 */	mr r3, r30
/* 80362378 0035F2B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036237C 0035F2BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80362380 0035F2C0  7C 08 03 A6 */	mtlr r0
/* 80362384 0035F2C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80362388 0035F2C8  4E 80 00 20 */	blr 
.endfn __dt__Q23efx10TKchCryIndFv

.fn __dt__Q34Game10KingChappy14ProperAnimatorFv, weak
/* 8036238C 0035F2CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80362390 0035F2D0  7C 08 02 A6 */	mflr r0
/* 80362394 0035F2D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80362398 0035F2D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036239C 0035F2DC  7C 7F 1B 79 */	or. r31, r3, r3
/* 803623A0 0035F2E0  41 82 00 40 */	beq .L_803623E0
/* 803623A4 0035F2E4  3C 60 80 4E */	lis r3, __vt__Q34Game10KingChappy14ProperAnimator@ha
/* 803623A8 0035F2E8  38 03 1F F4 */	addi r0, r3, __vt__Q34Game10KingChappy14ProperAnimator@l
/* 803623AC 0035F2EC  90 1F 00 00 */	stw r0, 0(r31)
/* 803623B0 0035F2F0  41 82 00 20 */	beq .L_803623D0
/* 803623B4 0035F2F4  3C 60 80 4B */	lis r3, __vt__Q24Game22EnemyBlendAnimatorBase@ha
/* 803623B8 0035F2F8  38 03 F8 24 */	addi r0, r3, __vt__Q24Game22EnemyBlendAnimatorBase@l
/* 803623BC 0035F2FC  90 1F 00 00 */	stw r0, 0(r31)
/* 803623C0 0035F300  41 82 00 10 */	beq .L_803623D0
/* 803623C4 0035F304  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 803623C8 0035F308  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 803623CC 0035F30C  90 1F 00 00 */	stw r0, 0(r31)
.L_803623D0:
/* 803623D0 0035F310  7C 80 07 35 */	extsh. r0, r4
/* 803623D4 0035F314  40 81 00 0C */	ble .L_803623E0
/* 803623D8 0035F318  7F E3 FB 78 */	mr r3, r31
/* 803623DC 0035F31C  4B CC 1C D9 */	bl __dl__FPv
.L_803623E0:
/* 803623E0 0035F320  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803623E4 0035F324  7F E3 FB 78 */	mr r3, r31
/* 803623E8 0035F328  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803623EC 0035F32C  7C 08 03 A6 */	mtlr r0
/* 803623F0 0035F330  38 21 00 10 */	addi r1, r1, 0x10
/* 803623F4 0035F334  4E 80 00 20 */	blr 
.endfn __dt__Q34Game10KingChappy14ProperAnimatorFv

.fn setInitialSetting__Q34Game10KingChappy3ObjFPQ24Game21EnemyInitialParamBase, weak
/* 803623F8 0035F338  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game10KingChappy3ObjFPQ24Game21EnemyInitialParamBase

.fn "applyImpulse__Q34Game10KingChappy3ObjFR10Vector3<f>R10Vector3<f>", weak
/* 803623FC 0035F33C  4E 80 00 20 */	blr 
.endfn "applyImpulse__Q34Game10KingChappy3ObjFR10Vector3<f>R10Vector3<f>"

.fn createEfxHamon__Q34Game10KingChappy3ObjFv, weak
/* 80362400 0035F340  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80362404 0035F344  7C 08 02 A6 */	mflr r0
/* 80362408 0035F348  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036240C 0035F34C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80362410 0035F350  7C 7F 1B 78 */	mr r31, r3
/* 80362414 0035F354  4B DA 4F E1 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80362418 0035F358  2C 03 00 09 */	cmpwi r3, 9
/* 8036241C 0035F35C  41 82 00 0C */	beq .L_80362428
/* 80362420 0035F360  7F E3 FB 78 */	mr r3, r31
/* 80362424 0035F364  4B D9 F4 E1 */	bl createEfxHamon__Q24Game9EnemyBaseFv
.L_80362428:
/* 80362428 0035F368  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036242C 0035F36C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80362430 0035F370  7C 08 03 A6 */	mtlr r0
/* 80362434 0035F374  38 21 00 10 */	addi r1, r1, 0x10
/* 80362438 0035F378  4E 80 00 20 */	blr 
.endfn createEfxHamon__Q34Game10KingChappy3ObjFv

.fn updateEfxHamon__Q34Game10KingChappy3ObjFv, weak
/* 8036243C 0035F37C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80362440 0035F380  7C 08 02 A6 */	mflr r0
/* 80362444 0035F384  90 01 00 14 */	stw r0, 0x14(r1)
/* 80362448 0035F388  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036244C 0035F38C  7C 7F 1B 78 */	mr r31, r3
/* 80362450 0035F390  4B DA 4F A5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80362454 0035F394  2C 03 00 09 */	cmpwi r3, 9
/* 80362458 0035F398  40 82 00 1C */	bne .L_80362474
/* 8036245C 0035F39C  7F E3 FB 78 */	mr r3, r31
/* 80362460 0035F3A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80362464 0035F3A4  81 8C 02 54 */	lwz r12, 0x254(r12)
/* 80362468 0035F3A8  7D 89 03 A6 */	mtctr r12
/* 8036246C 0035F3AC  4E 80 04 21 */	bctrl 
/* 80362470 0035F3B0  48 00 00 0C */	b .L_8036247C
.L_80362474:
/* 80362474 0035F3B4  7F E3 FB 78 */	mr r3, r31
/* 80362478 0035F3B8  4B D9 F4 5D */	bl updateEfxHamon__Q24Game9EnemyBaseFv
.L_8036247C:
/* 8036247C 0035F3BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80362480 0035F3C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80362484 0035F3C4  7C 08 03 A6 */	mtlr r0
/* 80362488 0035F3C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8036248C 0035F3CC  4E 80 00 20 */	blr 
.endfn updateEfxHamon__Q34Game10KingChappy3ObjFv

.fn isUnderground__Q34Game10KingChappy3ObjFv, weak
/* 80362490 0035F3D0  80 83 01 E0 */	lwz r4, 0x1e0(r3)
/* 80362494 0035F3D4  38 60 00 00 */	li r3, 0
/* 80362498 0035F3D8  54 80 05 6B */	rlwinm. r0, r4, 0, 0x15, 0x15
/* 8036249C 0035F3DC  40 82 00 0C */	bne .L_803624A8
/* 803624A0 0035F3E0  54 80 03 5B */	rlwinm. r0, r4, 0, 0xd, 0xd
/* 803624A4 0035F3E4  4D 82 00 20 */	beqlr 
.L_803624A8:
/* 803624A8 0035F3E8  38 60 00 01 */	li r3, 1
/* 803624AC 0035F3EC  4E 80 00 20 */	blr 
.endfn isUnderground__Q34Game10KingChappy3ObjFv

.fn getCellRadius__Q34Game10KingChappy3ObjFv, weak
/* 803624B0 0035F3F0  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 803624B4 0035F3F4  C0 23 01 F8 */	lfs f1, 0x1f8(r3)
/* 803624B8 0035F3F8  C0 04 01 CC */	lfs f0, 0x1cc(r4)
/* 803624BC 0035F3FC  EC 21 00 32 */	fmuls f1, f1, f0
/* 803624C0 0035F400  4E 80 00 20 */	blr 
.endfn getCellRadius__Q34Game10KingChappy3ObjFv

.fn getBodyRadius__Q34Game10KingChappy3ObjFv, weak
/* 803624C4 0035F404  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 803624C8 0035F408  C0 23 01 F8 */	lfs f1, 0x1f8(r3)
/* 803624CC 0035F40C  C0 04 01 F4 */	lfs f0, 0x1f4(r4)
/* 803624D0 0035F410  EC 21 00 32 */	fmuls f1, f1, f0
/* 803624D4 0035F414  4E 80 00 20 */	blr 
.endfn getBodyRadius__Q34Game10KingChappy3ObjFv

.fn pressCallBack__Q34Game10KingChappy3ObjFPQ24Game8CreaturefP8CollPart, weak
/* 803624D8 0035F418  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803624DC 0035F41C  7C 08 02 A6 */	mflr r0
/* 803624E0 0035F420  90 01 00 14 */	stw r0, 0x14(r1)
/* 803624E4 0035F424  81 83 00 00 */	lwz r12, 0(r3)
/* 803624E8 0035F428  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 803624EC 0035F42C  7D 89 03 A6 */	mtctr r12
/* 803624F0 0035F430  4E 80 04 21 */	bctrl 
/* 803624F4 0035F434  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803624F8 0035F438  38 60 00 00 */	li r3, 0
/* 803624FC 0035F43C  7C 08 03 A6 */	mtlr r0
/* 80362500 0035F440  38 21 00 10 */	addi r1, r1, 0x10
/* 80362504 0035F444  4E 80 00 20 */	blr 
.endfn pressCallBack__Q34Game10KingChappy3ObjFPQ24Game8CreaturefP8CollPart

.fn eatWhitePikminCallBack__Q34Game10KingChappy3ObjFPQ24Game8Creaturef, weak
/* 80362508 0035F448  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036250C 0035F44C  7C 08 02 A6 */	mflr r0
/* 80362510 0035F450  90 01 00 14 */	stw r0, 0x14(r1)
/* 80362514 0035F454  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 80362518 0035F458  C0 25 0A 24 */	lfs f1, 0xa24(r5)
/* 8036251C 0035F45C  4B DA 4F B5 */	bl eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
/* 80362520 0035F460  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80362524 0035F464  7C 08 03 A6 */	mtlr r0
/* 80362528 0035F468  38 21 00 10 */	addi r1, r1, 0x10
/* 8036252C 0035F46C  4E 80 00 20 */	blr 
.endfn eatWhitePikminCallBack__Q34Game10KingChappy3ObjFPQ24Game8Creaturef

.fn getEnemyTypeID__Q34Game10KingChappy3ObjFv, weak
/* 80362530 0035F470  38 60 00 35 */	li r3, 0x35
/* 80362534 0035F474  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game10KingChappy3ObjFv

.fn getDownSmokeScale__Q34Game10KingChappy3ObjFv, weak
/* 80362538 0035F478  C0 22 04 1C */	lfs f1, lbl_8051E77C@sda21(r2)
/* 8036253C 0035F47C  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game10KingChappy3ObjFv

.fn __sinit_kingChappy_cpp, local
/* 80362540 0035F480  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80362544 0035F484  38 00 FF FF */	li r0, -1
/* 80362548 0035F488  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8036254C 0035F48C  3C 60 80 4E */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80362550 0035F490  90 0D 98 C8 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80362554 0035F494  D4 03 1D 28 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80362558 0035F498  D0 0D 98 CC */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8036255C 0035F49C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80362560 0035F4A0  D0 03 00 08 */	stfs f0, 8(r3)
/* 80362564 0035F4A4  4E 80 00 20 */	blr 
.endfn __sinit_kingChappy_cpp

.fn "@920@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 80362568 0035F4A8  39 60 00 0C */	li r11, 0xc
/* 8036256C 0035F4AC  7D 63 58 2E */	lwzx r11, r3, r11
/* 80362570 0035F4B0  7C 63 5A 14 */	add r3, r3, r11
/* 80362574 0035F4B4  38 63 FC 68 */	addi r3, r3, -920
/* 80362578 0035F4B8  4B DA 43 A4 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@920@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@920@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 8036257C 0035F4BC  39 60 00 0C */	li r11, 0xc
/* 80362580 0035F4C0  7D 63 58 2E */	lwzx r11, r3, r11
/* 80362584 0035F4C4  7C 63 5A 14 */	add r3, r3, r11
/* 80362588 0035F4C8  38 63 FC 68 */	addi r3, r3, -920
/* 8036258C 0035F4CC  4B DA 41 1C */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@920@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@920@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 80362590 0035F4D0  39 60 00 0C */	li r11, 0xc
/* 80362594 0035F4D4  7D 63 58 2E */	lwzx r11, r3, r11
/* 80362598 0035F4D8  7C 63 5A 14 */	add r3, r3, r11
/* 8036259C 0035F4DC  38 63 FC 68 */	addi r3, r3, -920
/* 803625A0 0035F4E0  4B DA 41 28 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@920@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@920@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 803625A4 0035F4E4  39 60 00 0C */	li r11, 0xc
/* 803625A8 0035F4E8  7D 63 58 2E */	lwzx r11, r3, r11
/* 803625AC 0035F4EC  7C 63 5A 14 */	add r3, r3, r11
/* 803625B0 0035F4F0  38 63 FC 68 */	addi r3, r3, -920
/* 803625B4 0035F4F4  4B DA 44 C4 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@920@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@920@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 803625B8 0035F4F8  39 60 00 0C */	li r11, 0xc
/* 803625BC 0035F4FC  7D 63 58 2E */	lwzx r11, r3, r11
/* 803625C0 0035F500  7C 63 5A 14 */	add r3, r3, r11
/* 803625C4 0035F504  38 63 FC 68 */	addi r3, r3, -920
/* 803625C8 0035F508  4B DA 44 84 */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@920@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@920@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 803625CC 0035F50C  39 60 00 0C */	li r11, 0xc
/* 803625D0 0035F510  7D 63 58 2E */	lwzx r11, r3, r11
/* 803625D4 0035F514  7C 63 5A 14 */	add r3, r3, r11
/* 803625D8 0035F518  38 63 FC 68 */	addi r3, r3, -920
/* 803625DC 0035F51C  4B DA 40 C4 */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@920@12@viewGetShape__Q24Game9EnemyBaseFv"

.fn "@4@__dt__Q23efx10TKchCryIndFv", weak
/* 803625E0 0035F520  38 63 FF FC */	addi r3, r3, -4
/* 803625E4 0035F524  4B FF FD 0C */	b __dt__Q23efx10TKchCryIndFv
.endfn "@4@__dt__Q23efx10TKchCryIndFv"

.fn "@4@__dt__Q23efx13TKchSmokeHanaFv", weak
/* 803625E8 0035F528  38 63 FF FC */	addi r3, r3, -4
/* 803625EC 0035F52C  4B FF FC 68 */	b __dt__Q23efx13TKchSmokeHanaFv
.endfn "@4@__dt__Q23efx13TKchSmokeHanaFv"

.fn "@4@__dt__Q23efx15TKchYodareHitGrFv", weak
/* 803625F0 0035F530  38 63 FF FC */	addi r3, r3, -4
/* 803625F4 0035F534  4B FF B6 AC */	b __dt__Q23efx15TKchYodareHitGrFv
.endfn "@4@__dt__Q23efx15TKchYodareHitGrFv"

.fn "@4@__dt__Q23efx16TKchYodareHitWatFv", weak
/* 803625F8 0035F538  38 63 FF FC */	addi r3, r3, -4
/* 803625FC 0035F53C  4B FF B6 20 */	b __dt__Q23efx16TKchYodareHitWatFv
.endfn "@4@__dt__Q23efx16TKchYodareHitWatFv"

.fn "@4@__dt__Q23efx14TKchDeadYodareFv", weak
/* 80362600 0035F540  38 63 FF FC */	addi r3, r3, -4
/* 80362604 0035F544  4B FF FA F0 */	b __dt__Q23efx14TKchDeadYodareFv
.endfn "@4@__dt__Q23efx14TKchDeadYodareFv"

.fn "@4@__dt__Q23efx16TKchAttackYodareFv", weak
/* 80362608 0035F548  38 63 FF FC */	addi r3, r3, -4
/* 8036260C 0035F54C  4B FF F9 88 */	b __dt__Q23efx16TKchAttackYodareFv
.endfn "@4@__dt__Q23efx16TKchAttackYodareFv"

.fn "@4@__dt__Q23efx10TKchYodareFv", weak
/* 80362610 0035F550  38 63 FF FC */	addi r3, r3, -4
/* 80362614 0035F554  4B FF F7 CC */	b __dt__Q23efx10TKchYodareFv
.endfn "@4@__dt__Q23efx10TKchYodareFv"
