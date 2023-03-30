.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_SnakeCrow_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80488730, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80488730
.balign 4
.obj lbl_8048873C, local
	.asciz "246-SnakeCrow"
.endobj lbl_8048873C
.balign 4
.obj lbl_8048874C, local
	.asciz "kutijnt1"
.endobj lbl_8048874C
.balign 4
.obj lbl_80488758, local
	.asciz "kamujnt1"
.endobj lbl_80488758
.balign 4
.obj lbl_80488764, local
	.asciz "kamujnt2"
.endobj lbl_80488764
.balign 4
.obj lbl_80488770, local
	.asciz "kamujnt3"
.endobj lbl_80488770
.balign 4
.obj lbl_8048877C, local
	.float 40.0
	.float 120.0
	.float 190.0
	.float 90.0
	.float 90.0
.endobj lbl_8048877C
.obj lbl_80488790, local
	.float 0.0
	.float 0.0
	.float 0.0
	.float 80.0
	.float -80.0
.endobj lbl_80488790
.obj lbl_804887A4, local
	.float 80.0
	.float 160.0
	.float 220.0
	.float 130.0
	.float 130.0
.endobj lbl_804887A4
.obj lbl_804887B8, local
	.float 0.0
	.float 80.0
	.float 160.0
	.float 50.0
	.float 50.0
.endobj lbl_804887B8
.obj lbl_804887CC, local
	.float 30.0
	.float 30.0
	.float 30.0
	.float 110.0
	.float -50.0
.endobj lbl_804887CC
.obj lbl_804887E0, local
	.float -30.0
	.float -30.0
	.float -30.0
	.float 50.0
	.float -110.0
.endobj lbl_804887E0
.obj lbl_804887F4, local
	.float 40.0
	.float 40.0
	.float 40.0
	.float 40.0
	.float 40.0
.endobj lbl_804887F4
.obj lbl_80488808, local
	.float -40.0
	.float -40.0
	.float -40.0
	.float -40.0
	.float -40.0
.endobj lbl_80488808
.obj lbl_8048881C, local
	.float 80.0
	.float 160.0
	.float 220.0
	.float 130.0
	.float 130.0
.endobj lbl_8048881C
.obj lbl_80488830, local
	.float 0.0
	.float 80.0
	.float 160.0
	.float 50.0
	.float 50.0
.endobj lbl_80488830
.obj lbl_80488844, local
	.float 30.0
	.float 30.0
	.float 30.0
	.float 110.0
	.float -50.0
.endobj lbl_80488844
.obj lbl_80488858, local
	.float -30.0
	.float -30.0
	.float -30.0
	.float 50.0
	.float -110.0
.endobj lbl_80488858
.obj lbl_8048886C, local
	.float 40.0
	.float 40.0
	.float 40.0
	.float 40.0
	.float 40.0
.endobj lbl_8048886C
.obj lbl_80488880, local
	.float -40.0
	.float -40.0
	.float -40.0
	.float -40.0
	.float -40.0
.endobj lbl_80488880
.balign 4
.obj lbl_80488894, local
	.asciz "PSMainSide_ObjSound.h"
.endobj lbl_80488894
.balign 4
.obj lbl_804888AC, local
	.asciz "P2Assert"
.endobj lbl_804888AC
.balign 4
.obj lbl_804888B8, local
	.asciz "bodyjnt3"
.endobj lbl_804888B8

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q23efx19THebiDeadHane_ver01, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx19THebiDeadHane_ver01
.obj __vt__Q23efx22THebiAphd_appear2_late, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx14THebiAphd_baseFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.endobj __vt__Q23efx22THebiAphd_appear2_late
.obj __vt__Q23efx23THebiAphd_appear2_first, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx14THebiAphd_baseFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.endobj __vt__Q23efx23THebiAphd_appear2_first
.obj __vt__Q23efx17THebiAphd_appear1, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx14THebiAphd_baseFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.endobj __vt__Q23efx17THebiAphd_appear1
.obj "__vt__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>", weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
	.4byte "fade__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
	.4byte "startDemoDrawOff__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
	.4byte "endDemoDrawOn__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
.endobj "__vt__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>"
.obj __vt__Q23efx11TChaseMtxT4, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
	.4byte "fade__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
	.4byte "startDemoDrawOff__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
	.4byte "endDemoDrawOn__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
.endobj __vt__Q23efx11TChaseMtxT4
.obj __vt__Q23efx9THebiDead, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
	.4byte "fade__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
	.4byte "startDemoDrawOff__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
	.4byte "endDemoDrawOn__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
.endobj __vt__Q23efx9THebiDead
.obj __vt__Q23efx9THebiWait, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx9THebiWaitFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx8TForeverFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx9THebiWaitFv
.endobj __vt__Q23efx9THebiWait
.obj __vt__Q23efx8THebiRot, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx8THebiRotFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx8TForeverFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx8THebiRotFv
.endobj __vt__Q23efx8THebiRot
.obj __vt__Q34Game9SnakeCrow3Obj, global
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
	.4byte constructor__Q34Game9SnakeCrow3ObjFv
	.4byte onInit__Q34Game9SnakeCrow3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game9SnakeCrow3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game9SnakeCrow3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game9SnakeCrow3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game9SnakeCrow3ObjFv
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
	.4byte isUnderground__Q34Game9SnakeCrow3ObjFv
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
	.4byte getShadowParam__Q34Game9SnakeCrow3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game9SnakeCrow3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game9SnakeCrow3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game9SnakeCrow3ObjFv
	.4byte doUpdateCommon__Q34Game9SnakeCrow3ObjFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q34Game9SnakeCrow3ObjFv
	.4byte doAnimationCullingOff__Q34Game9SnakeCrow3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game9SnakeCrow3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q24Game9EnemyBaseFv
	.4byte "getCommonEffectPos__Q34Game9SnakeCrow3ObjFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
	.4byte setParameters__Q34Game9SnakeCrow3ObjFv
	.4byte initMouthSlots__Q34Game9SnakeCrow3ObjFv
	.4byte initWalkSmokeEffect__Q24Game9EnemyBaseFv
	.4byte getWalkSmokeEffectMgr__Q24Game9EnemyBaseFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q34Game9SnakeCrow3ObjFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game9SnakeCrow3ObjFv
	.4byte getMouthSlots__Q34Game9SnakeCrow3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q34Game9SnakeCrow3ObjFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q34Game9SnakeCrow3ObjFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game9SnakeCrow3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte doStartStoneState__Q34Game9SnakeCrow3ObjFv
	.4byte doFinishStoneState__Q34Game9SnakeCrow3ObjFv
	.4byte getDamageCoeStoneState__Q34Game9SnakeCrow3ObjFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game9SnakeCrow3ObjFv
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
	.4byte doStartMovie__Q34Game9SnakeCrow3ObjFv
	.4byte doEndMovie__Q34Game9SnakeCrow3ObjFv
	.4byte setFSM__Q34Game9SnakeCrow3ObjFPQ34Game9SnakeCrow3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@808@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@808@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@808@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@808@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@808@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@808@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game9SnakeCrow3Obj

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
.obj lbl_8051BA90, local
	.float 0.0
.endobj lbl_8051BA90
.obj lbl_8051BA94, local
	.float 2.5
.endobj lbl_8051BA94
.obj lbl_8051BA98, local
	.float 1.0
.endobj lbl_8051BA98
.obj lbl_8051BA9C, local
	.float 20.0
.endobj lbl_8051BA9C
.obj lbl_8051BAA0, local
	.float 17.5
.endobj lbl_8051BAA0
.obj lbl_8051BAA4, local
	.float 0.1
.endobj lbl_8051BAA4
.obj lbl_8051BAA8, local
	.float 10.0
.endobj lbl_8051BAA8
.obj lbl_8051BAAC, local
	.float -1000.0
.endobj lbl_8051BAAC
.obj lbl_8051BAB0, local
	.float 15.0
.endobj lbl_8051BAB0
.obj lbl_8051BAB4, local # tau
	.float 6.2831855
.endobj lbl_8051BAB4
.obj lbl_8051BAB8, local
	.float 32768.0
.endobj lbl_8051BAB8
.obj lbl_8051BABC, local
	.float 325.9493
.endobj lbl_8051BABC
.obj lbl_8051BAC0, local
	.float -325.9493
.endobj lbl_8051BAC0
.obj lbl_8051BAC4, local
	.float 120.0
.endobj lbl_8051BAC4
.obj lbl_8051BAC8, local # pi
	.float 3.1415927
.endobj lbl_8051BAC8
.obj lbl_8051BACC, local # pi/2
	.float 1.5707964
.endobj lbl_8051BACC
.balign 8
.obj lbl_8051BAD0, local
	.8byte 0x4330000080000000
.endobj lbl_8051BAD0
.obj lbl_8051BAD8, local
	.float 0.25
.endobj lbl_8051BAD8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game9SnakeCrow3ObjFv, global
/* 80293094 0028FFD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80293098 0028FFD8  7C 08 02 A6 */	mflr r0
/* 8029309C 0028FFDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802930A0 0028FFE0  7C 80 07 35 */	extsh. r0, r4
/* 802930A4 0028FFE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802930A8 0028FFE8  7C 7F 1B 78 */	mr r31, r3
/* 802930AC 0028FFEC  93 C1 00 08 */	stw r30, 8(r1)
/* 802930B0 0028FFF0  41 82 00 24 */	beq .L_802930D4
/* 802930B4 0028FFF4  38 1F 03 28 */	addi r0, r31, 0x328
/* 802930B8 0028FFF8  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802930BC 0028FFFC  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802930C0 00290000  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802930C4 00290004  38 00 00 00 */	li r0, 0
/* 802930C8 00290008  90 7F 03 28 */	stw r3, 0x328(r31)
/* 802930CC 0029000C  90 1F 03 2C */	stw r0, 0x32c(r31)
/* 802930D0 00290010  90 1F 03 30 */	stw r0, 0x330(r31)
.L_802930D4:
/* 802930D4 00290014  7F E3 FB 78 */	mr r3, r31
/* 802930D8 00290018  38 80 00 00 */	li r4, 0
/* 802930DC 0029001C  4B E6 E2 C5 */	bl __ct__Q24Game9EnemyBaseFv
/* 802930E0 00290020  3C 60 80 4D */	lis r3, __vt__Q34Game9SnakeCrow3Obj@ha
/* 802930E4 00290024  38 1F 03 28 */	addi r0, r31, 0x328
/* 802930E8 00290028  38 A3 B6 B8 */	addi r5, r3, __vt__Q34Game9SnakeCrow3Obj@l
/* 802930EC 0029002C  38 7F 02 CC */	addi r3, r31, 0x2cc
/* 802930F0 00290030  90 BF 00 00 */	stw r5, 0(r31)
/* 802930F4 00290034  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802930F8 00290038  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 802930FC 0029003C  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80293100 00290040  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80293104 00290044  90 A4 00 00 */	stw r5, 0(r4)
/* 80293108 00290048  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8029310C 0029004C  7C 04 00 50 */	subf r0, r4, r0
/* 80293110 00290050  90 04 00 0C */	stw r0, 0xc(r4)
/* 80293114 00290054  4B EA 54 35 */	bl __ct__10MouthSlotsFv
/* 80293118 00290058  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 8029311C 0029005C  38 7F 02 D8 */	addi r3, r31, 0x2d8
/* 80293120 00290060  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 80293124 00290064  38 A0 00 00 */	li r5, 0
/* 80293128 00290068  38 C0 00 0C */	li r6, 0xc
/* 8029312C 0029006C  38 E0 00 05 */	li r7, 5
/* 80293130 00290070  4B E2 E7 0D */	bl __construct_array
/* 80293134 00290074  38 60 00 2C */	li r3, 0x2c
/* 80293138 00290078  4B D9 0D 6D */	bl __nw__FUl
/* 8029313C 0029007C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80293140 00290080  41 82 00 44 */	beq .L_80293184
/* 80293144 00290084  4B E9 48 31 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80293148 00290088  3C 60 80 4D */	lis r3, __vt__Q34Game9SnakeCrow14ProperAnimator@ha
/* 8029314C 0029008C  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 80293150 00290090  38 03 B4 58 */	addi r0, r3, __vt__Q34Game9SnakeCrow14ProperAnimator@l
/* 80293154 00290094  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80293158 00290098  90 1E 00 00 */	stw r0, 0(r30)
/* 8029315C 0029009C  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 80293160 002900A0  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 80293164 002900A4  38 00 00 00 */	li r0, 0
/* 80293168 002900A8  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8029316C 002900AC  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80293170 002900B0  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80293174 002900B4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80293178 002900B8  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8029317C 002900BC  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80293180 002900C0  90 1E 00 20 */	stw r0, 0x20(r30)
.L_80293184:
/* 80293184 002900C4  93 DF 01 84 */	stw r30, 0x184(r31)
/* 80293188 002900C8  38 60 00 1C */	li r3, 0x1c
/* 8029318C 002900CC  4B D9 0D 19 */	bl __nw__FUl
/* 80293190 002900D0  7C 64 1B 79 */	or. r4, r3, r3
/* 80293194 002900D4  41 82 00 24 */	beq .L_802931B8
/* 80293198 002900D8  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8029319C 002900DC  3C 60 80 4D */	lis r3, __vt__Q34Game9SnakeCrow3FSM@ha
/* 802931A0 002900E0  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802931A4 002900E4  38 A0 FF FF */	li r5, -1
/* 802931A8 002900E8  90 04 00 00 */	stw r0, 0(r4)
/* 802931AC 002900EC  38 03 B4 30 */	addi r0, r3, __vt__Q34Game9SnakeCrow3FSM@l
/* 802931B0 002900F0  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802931B4 002900F4  90 04 00 00 */	stw r0, 0(r4)
.L_802931B8:
/* 802931B8 002900F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802931BC 002900FC  7F E3 FB 78 */	mr r3, r31
/* 802931C0 00290100  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802931C4 00290104  7D 89 03 A6 */	mtctr r12
/* 802931C8 00290108  4E 80 04 21 */	bctrl 
/* 802931CC 0029010C  7F E3 FB 78 */	mr r3, r31
/* 802931D0 00290110  48 00 1B 49 */	bl createJointCallBack__Q34Game9SnakeCrow3ObjFv
/* 802931D4 00290114  7F E3 FB 78 */	mr r3, r31
/* 802931D8 00290118  48 00 1D D1 */	bl createShadowSystem__Q34Game9SnakeCrow3ObjFv
/* 802931DC 0029011C  7F E3 FB 78 */	mr r3, r31
/* 802931E0 00290120  48 00 23 21 */	bl createEffect__Q34Game9SnakeCrow3ObjFv
/* 802931E4 00290124  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802931E8 00290128  7F E3 FB 78 */	mr r3, r31
/* 802931EC 0029012C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802931F0 00290130  83 C1 00 08 */	lwz r30, 8(r1)
/* 802931F4 00290134  7C 08 03 A6 */	mtlr r0
/* 802931F8 00290138  38 21 00 10 */	addi r1, r1, 0x10
/* 802931FC 0029013C  4E 80 00 20 */	blr 
.endfn __ct__Q34Game9SnakeCrow3ObjFv

.fn constructor__Q34Game9SnakeCrow3ObjFv, global
/* 80293200 00290140  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80293204 00290144  7C 08 02 A6 */	mflr r0
/* 80293208 00290148  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029320C 0029014C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80293210 00290150  7C 7F 1B 78 */	mr r31, r3
/* 80293214 00290154  4B E6 E5 75 */	bl constructor__Q24Game9EnemyBaseFv
/* 80293218 00290158  38 60 00 01 */	li r3, 1
/* 8029321C 0029015C  38 00 00 00 */	li r0, 0
/* 80293220 00290160  98 7F 02 C1 */	stb r3, 0x2c1(r31)
/* 80293224 00290164  7F E3 FB 78 */	mr r3, r31
/* 80293228 00290168  98 1F 02 C2 */	stb r0, 0x2c2(r31)
/* 8029322C 0029016C  48 00 21 39 */	bl resetBossAppearBGM__Q34Game9SnakeCrow3ObjFv
/* 80293230 00290170  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293234 00290174  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80293238 00290178  7C 08 03 A6 */	mtlr r0
/* 8029323C 0029017C  38 21 00 10 */	addi r1, r1, 0x10
/* 80293240 00290180  4E 80 00 20 */	blr 
.endfn constructor__Q34Game9SnakeCrow3ObjFv

.fn setInitialSetting__Q34Game9SnakeCrow3ObjFPQ24Game21EnemyInitialParamBase, global
/* 80293244 00290184  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game9SnakeCrow3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game9SnakeCrow3ObjFPQ24Game15CreatureInitArg, global
/* 80293248 00290188  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029324C 0029018C  7C 08 02 A6 */	mflr r0
/* 80293250 00290190  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293254 00290194  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80293258 00290198  7C 7F 1B 78 */	mr r31, r3
/* 8029325C 0029019C  4B E6 E7 FD */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 80293260 002901A0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80293264 002901A4  7F E3 FB 78 */	mr r3, r31
/* 80293268 002901A8  54 00 05 24 */	rlwinm r0, r0, 0, 0x14, 0x12
/* 8029326C 002901AC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80293270 002901B0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80293274 002901B4  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 80293278 002901B8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8029327C 002901BC  4B E7 45 01 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 80293280 002901C0  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 80293284 002901C4  7F E4 FB 78 */	mr r4, r31
/* 80293288 002901C8  4B FA EC 11 */	bl delNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 8029328C 002901CC  38 00 00 01 */	li r0, 1
/* 80293290 002901D0  C0 02 D7 30 */	lfs f0, lbl_8051BA90@sda21(r2)
/* 80293294 002901D4  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 80293298 002901D8  38 00 FF FF */	li r0, -1
/* 8029329C 002901DC  7F E3 FB 78 */	mr r3, r31
/* 802932A0 002901E0  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802932A4 002901E4  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802932A8 002901E8  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802932AC 002901EC  48 00 1A B5 */	bl setupJointCallBack__Q34Game9SnakeCrow3ObjFv
/* 802932B0 002901F0  7F E3 FB 78 */	mr r3, r31
/* 802932B4 002901F4  48 00 1C 7D */	bl setupCollision__Q34Game9SnakeCrow3ObjFv
/* 802932B8 002901F8  7F E3 FB 78 */	mr r3, r31
/* 802932BC 002901FC  48 00 1D 35 */	bl setupShadowSystem__Q34Game9SnakeCrow3ObjFv
/* 802932C0 00290200  7F E3 FB 78 */	mr r3, r31
/* 802932C4 00290204  48 00 23 9D */	bl setupEffect__Q34Game9SnakeCrow3ObjFv
/* 802932C8 00290208  38 60 00 01 */	li r3, 1
/* 802932CC 0029020C  38 00 00 00 */	li r0, 0
/* 802932D0 00290210  98 7F 02 C1 */	stb r3, 0x2c1(r31)
/* 802932D4 00290214  7F E3 FB 78 */	mr r3, r31
/* 802932D8 00290218  98 1F 02 C2 */	stb r0, 0x2c2(r31)
/* 802932DC 0029021C  48 00 20 89 */	bl resetBossAppearBGM__Q34Game9SnakeCrow3ObjFv
/* 802932E0 00290220  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802932E4 00290224  7F E4 FB 78 */	mr r4, r31
/* 802932E8 00290228  38 A0 00 01 */	li r5, 1
/* 802932EC 0029022C  38 C0 00 00 */	li r6, 0
/* 802932F0 00290230  81 83 00 00 */	lwz r12, 0(r3)
/* 802932F4 00290234  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802932F8 00290238  7D 89 03 A6 */	mtctr r12
/* 802932FC 0029023C  4E 80 04 21 */	bctrl 
/* 80293300 00290240  7F E3 FB 78 */	mr r3, r31
/* 80293304 00290244  81 9F 00 00 */	lwz r12, 0(r31)
/* 80293308 00290248  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 8029330C 0029024C  7D 89 03 A6 */	mtctr r12
/* 80293310 00290250  4E 80 04 21 */	bctrl 
/* 80293314 00290254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293318 00290258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029331C 0029025C  7C 08 03 A6 */	mtlr r0
/* 80293320 00290260  38 21 00 10 */	addi r1, r1, 0x10
/* 80293324 00290264  4E 80 00 20 */	blr 
.endfn onInit__Q34Game9SnakeCrow3ObjFPQ24Game15CreatureInitArg

.fn onKill__Q34Game9SnakeCrow3ObjFPQ24Game15CreatureKillArg, global
/* 80293328 00290268  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029332C 0029026C  7C 08 02 A6 */	mflr r0
/* 80293330 00290270  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293334 00290274  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80293338 00290278  7C 9F 23 78 */	mr r31, r4
/* 8029333C 0029027C  93 C1 00 08 */	stw r30, 8(r1)
/* 80293340 00290280  7C 7E 1B 78 */	mr r30, r3
/* 80293344 00290284  48 00 25 95 */	bl finishRotateEffect__Q34Game9SnakeCrow3ObjFv
/* 80293348 00290288  7F C3 F3 78 */	mr r3, r30
/* 8029334C 0029028C  48 00 26 15 */	bl finishWaitEffect__Q34Game9SnakeCrow3ObjFv
/* 80293350 00290290  7F C3 F3 78 */	mr r3, r30
/* 80293354 00290294  7F E4 FB 78 */	mr r4, r31
/* 80293358 00290298  4B E6 EB 91 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 8029335C 0029029C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293360 002902A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80293364 002902A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80293368 002902A8  7C 08 03 A6 */	mtlr r0
/* 8029336C 002902AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80293370 002902B0  4E 80 00 20 */	blr 
.endfn onKill__Q34Game9SnakeCrow3ObjFPQ24Game15CreatureKillArg

.fn setParameters__Q34Game9SnakeCrow3ObjFv, global
/* 80293374 002902B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80293378 002902B8  7C 08 02 A6 */	mflr r0
/* 8029337C 002902BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293380 002902C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80293384 002902C4  7C 7F 1B 78 */	mr r31, r3
/* 80293388 002902C8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8029338C 002902CC  28 04 00 00 */	cmplwi r4, 0
/* 80293390 002902D0  41 82 00 50 */	beq .L_802933E0
/* 80293394 002902D4  88 04 00 48 */	lbz r0, 0x48(r4)
/* 80293398 002902D8  28 00 00 00 */	cmplwi r0, 0
/* 8029339C 002902DC  41 82 00 44 */	beq .L_802933E0
/* 802933A0 002902E0  80 04 00 44 */	lwz r0, 0x44(r4)
/* 802933A4 002902E4  2C 00 00 00 */	cmpwi r0, 0
/* 802933A8 002902E8  40 82 00 38 */	bne .L_802933E0
/* 802933AC 002902EC  80 64 00 58 */	lwz r3, 0x58(r4)
/* 802933B0 002902F0  28 03 00 00 */	cmplwi r3, 0
/* 802933B4 002902F4  41 82 00 2C */	beq .L_802933E0
/* 802933B8 002902F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802933BC 002902FC  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 802933C0 00290300  7D 89 03 A6 */	mtctr r12
/* 802933C4 00290304  4E 80 04 21 */	bctrl 
/* 802933C8 00290308  3C 03 99 A1 */	addis r0, r3, 0x99a1
/* 802933CC 0029030C  28 00 30 32 */	cmplwi r0, 0x3032
/* 802933D0 00290310  40 82 00 10 */	bne .L_802933E0
/* 802933D4 00290314  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802933D8 00290318  C0 03 08 BC */	lfs f0, 0x8bc(r3)
/* 802933DC 0029031C  D0 03 01 04 */	stfs f0, 0x104(r3)
.L_802933E0:
/* 802933E0 00290320  7F E3 FB 78 */	mr r3, r31
/* 802933E4 00290324  4B E6 F7 F5 */	bl setParameters__Q24Game9EnemyBaseFv
/* 802933E8 00290328  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802933EC 0029032C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802933F0 00290330  7C 08 03 A6 */	mtlr r0
/* 802933F4 00290334  38 21 00 10 */	addi r1, r1, 0x10
/* 802933F8 00290338  4E 80 00 20 */	blr 
.endfn setParameters__Q34Game9SnakeCrow3ObjFv

.fn doUpdate__Q34Game9SnakeCrow3ObjFv, global
/* 802933FC 0029033C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80293400 00290340  7C 08 02 A6 */	mflr r0
/* 80293404 00290344  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293408 00290348  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029340C 0029034C  7C 7F 1B 78 */	mr r31, r3
/* 80293410 00290350  7F E4 FB 78 */	mr r4, r31
/* 80293414 00290354  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80293418 00290358  81 83 00 00 */	lwz r12, 0(r3)
/* 8029341C 0029035C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80293420 00290360  7D 89 03 A6 */	mtctr r12
/* 80293424 00290364  4E 80 04 21 */	bctrl 
/* 80293428 00290368  38 7F 02 CC */	addi r3, r31, 0x2cc
/* 8029342C 0029036C  4B EA 52 01 */	bl update__10MouthSlotsFv
/* 80293430 00290370  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293434 00290374  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80293438 00290378  7C 08 03 A6 */	mtlr r0
/* 8029343C 0029037C  38 21 00 10 */	addi r1, r1, 0x10
/* 80293440 00290380  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game9SnakeCrow3ObjFv

.fn doUpdateCommon__Q34Game9SnakeCrow3ObjFv, global
/* 80293444 00290384  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80293448 00290388  7C 08 02 A6 */	mflr r0
/* 8029344C 0029038C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293450 00290390  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80293454 00290394  7C 7F 1B 78 */	mr r31, r3
/* 80293458 00290398  4B E6 FA BD */	bl doUpdateCommon__Q24Game9EnemyBaseFv
/* 8029345C 0029039C  7F E3 FB 78 */	mr r3, r31
/* 80293460 002903A0  48 00 1E 09 */	bl updateBossBGM__Q34Game9SnakeCrow3ObjFv
/* 80293464 002903A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293468 002903A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029346C 002903AC  7C 08 03 A6 */	mtlr r0
/* 80293470 002903B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80293474 002903B4  4E 80 00 20 */	blr 
.endfn doUpdateCommon__Q34Game9SnakeCrow3ObjFv

.fn doAnimationUpdateAnimator__Q34Game9SnakeCrow3ObjFv, global
/* 80293478 002903B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029347C 002903BC  7C 08 02 A6 */	mflr r0
/* 80293480 002903C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293484 002903C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80293488 002903C8  7C 7F 1B 78 */	mr r31, r3
/* 8029348C 002903CC  4B E6 FB 6D */	bl doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
/* 80293490 002903D0  7F E3 FB 78 */	mr r3, r31
/* 80293494 002903D4  48 00 18 F1 */	bl doAnimationJointCallBack__Q34Game9SnakeCrow3ObjFv
/* 80293498 002903D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029349C 002903DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802934A0 002903E0  7C 08 03 A6 */	mtlr r0
/* 802934A4 002903E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802934A8 002903E8  4E 80 00 20 */	blr 
.endfn doAnimationUpdateAnimator__Q34Game9SnakeCrow3ObjFv

.fn doAnimationCullingOff__Q34Game9SnakeCrow3ObjFv, global
/* 802934AC 002903EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802934B0 002903F0  7C 08 02 A6 */	mflr r0
/* 802934B4 002903F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802934B8 002903F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802934BC 002903FC  7C 7F 1B 78 */	mr r31, r3
/* 802934C0 00290400  4B E6 FB C1 */	bl doAnimationCullingOff__Q24Game9EnemyBaseFv
/* 802934C4 00290404  7F E3 FB 78 */	mr r3, r31
/* 802934C8 00290408  48 00 1B 4D */	bl doAnimationShadowSystem__Q34Game9SnakeCrow3ObjFv
/* 802934CC 0029040C  7F E3 FB 78 */	mr r3, r31
/* 802934D0 00290410  48 00 18 D9 */	bl finishAnimationJointCallBack__Q34Game9SnakeCrow3ObjFv
/* 802934D4 00290414  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802934D8 00290418  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802934DC 0029041C  7C 08 03 A6 */	mtlr r0
/* 802934E0 00290420  38 21 00 10 */	addi r1, r1, 0x10
/* 802934E4 00290424  4E 80 00 20 */	blr 
.endfn doAnimationCullingOff__Q34Game9SnakeCrow3ObjFv

.fn doDirectDraw__Q34Game9SnakeCrow3ObjFR8Graphics, global
/* 802934E8 00290428  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game9SnakeCrow3ObjFR8Graphics

.fn doDebugDraw__Q34Game9SnakeCrow3ObjFR8Graphics, global
/* 802934EC 0029042C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802934F0 00290430  7C 08 02 A6 */	mflr r0
/* 802934F4 00290434  90 01 00 14 */	stw r0, 0x14(r1)
/* 802934F8 00290438  4B E7 29 75 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802934FC 0029043C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293500 00290440  7C 08 03 A6 */	mtlr r0
/* 80293504 00290444  38 21 00 10 */	addi r1, r1, 0x10
/* 80293508 00290448  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game9SnakeCrow3ObjFR8Graphics

.fn setFSM__Q34Game9SnakeCrow3ObjFPQ34Game9SnakeCrow3FSM, global
/* 8029350C 0029044C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80293510 00290450  7C 08 02 A6 */	mflr r0
/* 80293514 00290454  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293518 00290458  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029351C 0029045C  7C 7F 1B 78 */	mr r31, r3
/* 80293520 00290460  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 80293524 00290464  7F E4 FB 78 */	mr r4, r31
/* 80293528 00290468  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8029352C 0029046C  81 83 00 00 */	lwz r12, 0(r3)
/* 80293530 00290470  81 8C 00 08 */	lwz r12, 8(r12)
/* 80293534 00290474  7D 89 03 A6 */	mtctr r12
/* 80293538 00290478  4E 80 04 21 */	bctrl 
/* 8029353C 0029047C  38 00 00 00 */	li r0, 0
/* 80293540 00290480  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80293544 00290484  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293548 00290488  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029354C 0029048C  7C 08 03 A6 */	mtlr r0
/* 80293550 00290490  38 21 00 10 */	addi r1, r1, 0x10
/* 80293554 00290494  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game9SnakeCrow3ObjFPQ34Game9SnakeCrow3FSM

.fn getShadowParam__Q34Game9SnakeCrow3ObjFRQ24Game11ShadowParam, global
/* 80293558 00290498  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029355C 0029049C  7C 08 02 A6 */	mflr r0
/* 80293560 002904A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293564 002904A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80293568 002904A8  7C 9F 23 78 */	mr r31, r4
/* 8029356C 002904AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80293570 002904B0  7C 7E 1B 78 */	mr r30, r3
/* 80293574 002904B4  3C 60 80 49 */	lis r3, lbl_8048874C@ha
/* 80293578 002904B8  38 03 87 4C */	addi r0, r3, lbl_8048874C@l
/* 8029357C 002904BC  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 80293580 002904C0  7C 04 03 78 */	mr r4, r0
/* 80293584 002904C4  48 1A BA 61 */	bl getJoint__Q28SysShape5ModelFPc
/* 80293588 002904C8  48 19 63 19 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8029358C 002904CC  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 80293590 002904D0  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80293594 002904D4  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80293598 002904D8  C0 A2 D7 34 */	lfs f5, lbl_8051BA94@sda21(r2)
/* 8029359C 002904DC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802935A0 002904E0  C0 62 D7 30 */	lfs f3, lbl_8051BA90@sda21(r2)
/* 802935A4 002904E4  D0 3F 00 04 */	stfs f1, 4(r31)
/* 802935A8 002904E8  C0 42 D7 38 */	lfs f2, lbl_8051BA98@sda21(r2)
/* 802935AC 002904EC  D0 9F 00 08 */	stfs f4, 8(r31)
/* 802935B0 002904F0  C0 22 D7 3C */	lfs f1, lbl_8051BA9C@sda21(r2)
/* 802935B4 002904F4  C0 9E 01 90 */	lfs f4, 0x190(r30)
/* 802935B8 002904F8  C0 02 D7 40 */	lfs f0, lbl_8051BAA0@sda21(r2)
/* 802935BC 002904FC  EC 85 20 2A */	fadds f4, f5, f4
/* 802935C0 00290500  D0 9F 00 04 */	stfs f4, 4(r31)
/* 802935C4 00290504  D0 7F 00 0C */	stfs f3, 0xc(r31)
/* 802935C8 00290508  D0 5F 00 10 */	stfs f2, 0x10(r31)
/* 802935CC 0029050C  D0 7F 00 14 */	stfs f3, 0x14(r31)
/* 802935D0 00290510  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 802935D4 00290514  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802935D8 00290518  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802935DC 0029051C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802935E0 00290520  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802935E4 00290524  7C 08 03 A6 */	mtlr r0
/* 802935E8 00290528  38 21 00 10 */	addi r1, r1, 0x10
/* 802935EC 0029052C  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game9SnakeCrow3ObjFRQ24Game11ShadowParam

.fn damageCallBack__Q34Game9SnakeCrow3ObjFPQ24Game8CreaturefP8CollPart, global
/* 802935F0 00290530  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802935F4 00290534  7C 08 02 A6 */	mflr r0
/* 802935F8 00290538  90 01 00 24 */	stw r0, 0x24(r1)
/* 802935FC 0029053C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80293600 00290540  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80293604 00290544  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80293608 00290548  93 C1 00 08 */	stw r30, 8(r1)
/* 8029360C 0029054C  FF E0 08 90 */	fmr f31, f1
/* 80293610 00290550  28 04 00 00 */	cmplwi r4, 0
/* 80293614 00290554  7C 7E 1B 78 */	mr r30, r3
/* 80293618 00290558  7C BF 2B 78 */	mr r31, r5
/* 8029361C 0029055C  41 82 00 48 */	beq .L_80293664
/* 80293620 00290560  7C 83 23 78 */	mr r3, r4
/* 80293624 00290564  81 84 00 00 */	lwz r12, 0(r4)
/* 80293628 00290568  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8029362C 0029056C  7D 89 03 A6 */	mtctr r12
/* 80293630 00290570  4E 80 04 21 */	bctrl 
/* 80293634 00290574  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80293638 00290578  41 82 00 2C */	beq .L_80293664
/* 8029363C 0029057C  28 1F 00 00 */	cmplwi r31, 0
/* 80293640 00290580  40 82 00 0C */	bne .L_8029364C
/* 80293644 00290584  C0 02 D7 44 */	lfs f0, lbl_8051BAA4@sda21(r2)
/* 80293648 00290588  EF FF 00 32 */	fmuls f31, f31, f0
.L_8029364C:
/* 8029364C 0029058C  FC 20 F8 90 */	fmr f1, f31
/* 80293650 00290590  C0 42 D7 38 */	lfs f2, lbl_8051BA98@sda21(r2)
/* 80293654 00290594  7F C3 F3 78 */	mr r3, r30
/* 80293658 00290598  4B E7 29 D5 */	bl addDamage__Q24Game9EnemyBaseFff
/* 8029365C 0029059C  38 60 00 01 */	li r3, 1
/* 80293660 002905A0  48 00 00 08 */	b .L_80293668
.L_80293664:
/* 80293664 002905A4  38 60 00 00 */	li r3, 0
.L_80293668:
/* 80293668 002905A8  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8029366C 002905AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80293670 002905B0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80293674 002905B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80293678 002905B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029367C 002905BC  7C 08 03 A6 */	mtlr r0
/* 80293680 002905C0  38 21 00 20 */	addi r1, r1, 0x20
/* 80293684 002905C4  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game9SnakeCrow3ObjFPQ24Game8CreaturefP8CollPart

.fn doStartStoneState__Q34Game9SnakeCrow3ObjFv, global
/* 80293688 002905C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029368C 002905CC  7C 08 02 A6 */	mflr r0
/* 80293690 002905D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293694 002905D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80293698 002905D8  7C 7F 1B 78 */	mr r31, r3
/* 8029369C 002905DC  4B E6 F8 59 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802936A0 002905E0  7F E3 FB 78 */	mr r3, r31
/* 802936A4 002905E4  48 00 22 35 */	bl finishRotateEffect__Q34Game9SnakeCrow3ObjFv
/* 802936A8 002905E8  7F E3 FB 78 */	mr r3, r31
/* 802936AC 002905EC  48 00 22 B5 */	bl finishWaitEffect__Q34Game9SnakeCrow3ObjFv
/* 802936B0 002905F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802936B4 002905F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802936B8 002905F8  7C 08 03 A6 */	mtlr r0
/* 802936BC 002905FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802936C0 00290600  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game9SnakeCrow3ObjFv

.fn doFinishStoneState__Q34Game9SnakeCrow3ObjFv, global
/* 802936C4 00290604  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802936C8 00290608  7C 08 02 A6 */	mflr r0
/* 802936CC 0029060C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802936D0 00290610  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802936D4 00290614  7C 7F 1B 78 */	mr r31, r3
/* 802936D8 00290618  4B E6 F8 31 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802936DC 0029061C  C0 22 D7 38 */	lfs f1, lbl_8051BA98@sda21(r2)
/* 802936E0 00290620  7F E3 FB 78 */	mr r3, r31
/* 802936E4 00290624  C0 42 D7 48 */	lfs f2, lbl_8051BAA8@sda21(r2)
/* 802936E8 00290628  38 80 00 00 */	li r4, 0
/* 802936EC 0029062C  C0 62 D7 30 */	lfs f3, lbl_8051BA90@sda21(r2)
/* 802936F0 00290630  C0 82 D7 4C */	lfs f4, lbl_8051BAAC@sda21(r2)
/* 802936F4 00290634  4B E7 FA 29 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802936F8 00290638  7F E3 FB 78 */	mr r3, r31
/* 802936FC 0029063C  4B E7 3C F9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80293700 00290640  2C 03 00 05 */	cmpwi r3, 5
/* 80293704 00290644  41 80 00 0C */	blt .L_80293710
/* 80293708 00290648  7F E3 FB 78 */	mr r3, r31
/* 8029370C 0029064C  48 00 21 FD */	bl startWaitEffect__Q34Game9SnakeCrow3ObjFv
.L_80293710:
/* 80293710 00290650  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293714 00290654  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80293718 00290658  7C 08 03 A6 */	mtlr r0
/* 8029371C 0029065C  38 21 00 10 */	addi r1, r1, 0x10
/* 80293720 00290660  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game9SnakeCrow3ObjFv

.fn startCarcassMotion__Q34Game9SnakeCrow3ObjFv, global
/* 80293724 00290664  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80293728 00290668  7C 08 02 A6 */	mflr r0
/* 8029372C 0029066C  38 80 00 0C */	li r4, 0xc
/* 80293730 00290670  38 A0 00 00 */	li r5, 0
/* 80293734 00290674  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293738 00290678  4B E7 18 CD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8029373C 0029067C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293740 00290680  7C 08 03 A6 */	mtlr r0
/* 80293744 00290684  38 21 00 10 */	addi r1, r1, 0x10
/* 80293748 00290688  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game9SnakeCrow3ObjFv

.fn doStartMovie__Q34Game9SnakeCrow3ObjFv, global
/* 8029374C 0029068C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80293750 00290690  7C 08 02 A6 */	mflr r0
/* 80293754 00290694  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293758 00290698  48 00 24 11 */	bl effectDrawOff__Q34Game9SnakeCrow3ObjFv
/* 8029375C 0029069C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293760 002906A0  7C 08 03 A6 */	mtlr r0
/* 80293764 002906A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80293768 002906A8  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game9SnakeCrow3ObjFv

.fn doEndMovie__Q34Game9SnakeCrow3ObjFv, global
/* 8029376C 002906AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80293770 002906B0  7C 08 02 A6 */	mflr r0
/* 80293774 002906B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293778 002906B8  48 00 23 8D */	bl effectDrawOn__Q34Game9SnakeCrow3ObjFv
/* 8029377C 002906BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293780 002906C0  7C 08 03 A6 */	mtlr r0
/* 80293784 002906C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80293788 002906C8  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game9SnakeCrow3ObjFv

.fn initMouthSlots__Q34Game9SnakeCrow3ObjFv, global
/* 8029378C 002906CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80293790 002906D0  7C 08 02 A6 */	mflr r0
/* 80293794 002906D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80293798 002906D8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8029379C 002906DC  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802937A0 002906E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802937A4 002906E4  93 C1 00 08 */	stw r30, 8(r1)
/* 802937A8 002906E8  7C 7E 1B 78 */	mr r30, r3
/* 802937AC 002906EC  3C 60 80 49 */	lis r3, lbl_80488730@ha
/* 802937B0 002906F0  3B E3 87 30 */	addi r31, r3, lbl_80488730@l
/* 802937B4 002906F4  38 80 00 03 */	li r4, 3
/* 802937B8 002906F8  38 7E 02 CC */	addi r3, r30, 0x2cc
/* 802937BC 002906FC  4B EA 4D 9D */	bl alloc__10MouthSlotsFi
/* 802937C0 00290700  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 802937C4 00290704  38 7E 02 CC */	addi r3, r30, 0x2cc
/* 802937C8 00290708  38 DF 00 28 */	addi r6, r31, 0x28
/* 802937CC 0029070C  38 80 00 00 */	li r4, 0
/* 802937D0 00290710  4B EA 4E C1 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802937D4 00290714  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 802937D8 00290718  38 7E 02 CC */	addi r3, r30, 0x2cc
/* 802937DC 0029071C  38 DF 00 34 */	addi r6, r31, 0x34
/* 802937E0 00290720  38 80 00 01 */	li r4, 1
/* 802937E4 00290724  4B EA 4E AD */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802937E8 00290728  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 802937EC 0029072C  38 7E 02 CC */	addi r3, r30, 0x2cc
/* 802937F0 00290730  38 DF 00 40 */	addi r6, r31, 0x40
/* 802937F4 00290734  38 80 00 02 */	li r4, 2
/* 802937F8 00290738  4B EA 4E 99 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802937FC 0029073C  C3 E2 D7 50 */	lfs f31, lbl_8051BAB0@sda21(r2)
/* 80293800 00290740  3B E0 00 00 */	li r31, 0
/* 80293804 00290744  48 00 00 18 */	b .L_8029381C
.L_80293808:
/* 80293808 00290748  7F E4 FB 78 */	mr r4, r31
/* 8029380C 0029074C  38 7E 02 CC */	addi r3, r30, 0x2cc
/* 80293810 00290750  4B EA 4F 69 */	bl getSlot__10MouthSlotsFi
/* 80293814 00290754  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 80293818 00290758  3B FF 00 01 */	addi r31, r31, 1
.L_8029381C:
/* 8029381C 0029075C  80 1E 02 CC */	lwz r0, 0x2cc(r30)
/* 80293820 00290760  7C 1F 00 00 */	cmpw r31, r0
/* 80293824 00290764  41 80 FF E4 */	blt .L_80293808
/* 80293828 00290768  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8029382C 0029076C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80293830 00290770  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80293834 00290774  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80293838 00290778  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029383C 0029077C  7C 08 03 A6 */	mtlr r0
/* 80293840 00290780  38 21 00 20 */	addi r1, r1, 0x20
/* 80293844 00290784  4E 80 00 20 */	blr 
.endfn initMouthSlots__Q34Game9SnakeCrow3ObjFv

.fn "getThrowupItemPosition__Q34Game9SnakeCrow3ObjFP10Vector3<f>", global
/* 80293848 00290788  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029384C 0029078C  7C 08 02 A6 */	mflr r0
/* 80293850 00290790  3C A0 80 49 */	lis r5, lbl_8048874C@ha
/* 80293854 00290794  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293858 00290798  38 05 87 4C */	addi r0, r5, lbl_8048874C@l
/* 8029385C 0029079C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80293860 002907A0  7C 9F 23 78 */	mr r31, r4
/* 80293864 002907A4  7C 04 03 78 */	mr r4, r0
/* 80293868 002907A8  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8029386C 002907AC  48 1A B7 79 */	bl getJoint__Q28SysShape5ModelFPc
/* 80293870 002907B0  48 19 60 31 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80293874 002907B4  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 80293878 002907B8  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8029387C 002907BC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80293880 002907C0  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80293884 002907C4  D0 3F 00 04 */	stfs f1, 4(r31)
/* 80293888 002907C8  D0 5F 00 08 */	stfs f2, 8(r31)
/* 8029388C 002907CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80293890 002907D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293894 002907D4  7C 08 03 A6 */	mtlr r0
/* 80293898 002907D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8029389C 002907DC  4E 80 00 20 */	blr 
.endfn "getThrowupItemPosition__Q34Game9SnakeCrow3ObjFP10Vector3<f>"

.fn "getCommonEffectPos__Q34Game9SnakeCrow3ObjFR10Vector3<f>", global
/* 802938A0 002907E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802938A4 002907E4  7C 08 02 A6 */	mflr r0
/* 802938A8 002907E8  3C A0 80 49 */	lis r5, lbl_8048874C@ha
/* 802938AC 002907EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802938B0 002907F0  38 05 87 4C */	addi r0, r5, lbl_8048874C@l
/* 802938B4 002907F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802938B8 002907F8  7C 9F 23 78 */	mr r31, r4
/* 802938BC 002907FC  7C 04 03 78 */	mr r4, r0
/* 802938C0 00290800  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802938C4 00290804  48 1A B7 21 */	bl getJoint__Q28SysShape5ModelFPc
/* 802938C8 00290808  48 19 5F D9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802938CC 0029080C  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802938D0 00290810  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802938D4 00290814  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802938D8 00290818  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802938DC 0029081C  D0 3F 00 04 */	stfs f1, 4(r31)
/* 802938E0 00290820  D0 5F 00 08 */	stfs f2, 8(r31)
/* 802938E4 00290824  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802938E8 00290828  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802938EC 0029082C  7C 08 03 A6 */	mtlr r0
/* 802938F0 00290830  38 21 00 10 */	addi r1, r1, 0x10
/* 802938F4 00290834  4E 80 00 20 */	blr 
.endfn "getCommonEffectPos__Q34Game9SnakeCrow3ObjFR10Vector3<f>"

.fn appearNearByTarget__Q34Game9SnakeCrow3ObjFPQ24Game8Creature, global
/* 802938F8 00290838  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 802938FC 0029083C  7C 08 02 A6 */	mflr r0
/* 80293900 00290840  90 01 00 94 */	stw r0, 0x94(r1)
/* 80293904 00290844  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80293908 00290848  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8029390C 0029084C  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80293910 00290850  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 80293914 00290854  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80293918 00290858  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 8029391C 0029085C  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 80293920 00290860  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 80293924 00290864  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80293928 00290868  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8029392C 0029086C  81 84 00 00 */	lwz r12, 0(r4)
/* 80293930 00290870  7C 7F 1B 78 */	mr r31, r3
/* 80293934 00290874  38 61 00 08 */	addi r3, r1, 8
/* 80293938 00290878  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029393C 0029087C  7D 89 03 A6 */	mtctr r12
/* 80293940 00290880  4E 80 04 21 */	bctrl 
/* 80293944 00290884  C3 E1 00 08 */	lfs f31, 8(r1)
/* 80293948 00290888  C3 C1 00 0C */	lfs f30, 0xc(r1)
/* 8029394C 0029088C  C3 A1 00 10 */	lfs f29, 0x10(r1)
/* 80293950 00290890  4B E3 5C 51 */	bl rand
/* 80293954 00290894  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80293958 00290898  3C 00 43 30 */	lis r0, 0x4330
/* 8029395C 0029089C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80293960 002908A0  C8 62 D7 70 */	lfd f3, lbl_8051BAD0@sda21(r2)
/* 80293964 002908A4  90 01 00 20 */	stw r0, 0x20(r1)
/* 80293968 002908A8  C0 42 D7 54 */	lfs f2, lbl_8051BAB4@sda21(r2)
/* 8029396C 002908AC  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80293970 002908B0  C0 22 D7 58 */	lfs f1, lbl_8051BAB8@sda21(r2)
/* 80293974 002908B4  EC 60 18 28 */	fsubs f3, f0, f3
/* 80293978 002908B8  C0 02 D7 30 */	lfs f0, lbl_8051BA90@sda21(r2)
/* 8029397C 002908BC  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80293980 002908C0  EC 62 08 24 */	fdivs f3, f2, f1
/* 80293984 002908C4  FF 80 18 90 */	fmr f28, f3
/* 80293988 002908C8  FC 20 18 90 */	fmr f1, f3
/* 8029398C 002908CC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80293990 002908D0  40 80 00 08 */	bge .L_80293998
/* 80293994 002908D4  FC 20 18 50 */	fneg f1, f3
.L_80293998:
/* 80293998 002908D8  C0 42 D7 5C */	lfs f2, lbl_8051BABC@sda21(r2)
/* 8029399C 002908DC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802939A0 002908E0  C0 02 D7 30 */	lfs f0, lbl_8051BA90@sda21(r2)
/* 802939A4 002908E4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802939A8 002908E8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802939AC 002908EC  3B C3 00 04 */	addi r30, r3, 4
/* 802939B0 002908F0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802939B4 002908F4  FC 00 08 1E */	fctiwz f0, f1
/* 802939B8 002908F8  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802939BC 002908FC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802939C0 00290900  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802939C4 00290904  7C 1E 04 2E */	lfsx f0, r30, r0
/* 802939C8 00290908  FC A0 00 50 */	fneg f5, f0
/* 802939CC 0029090C  40 80 00 28 */	bge .L_802939F4
/* 802939D0 00290910  C0 02 D7 60 */	lfs f0, lbl_8051BAC0@sda21(r2)
/* 802939D4 00290914  EC 03 00 32 */	fmuls f0, f3, f0
/* 802939D8 00290918  FC 00 00 1E */	fctiwz f0, f0
/* 802939DC 0029091C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802939E0 00290920  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802939E4 00290924  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802939E8 00290928  7C 03 04 2E */	lfsx f0, r3, r0
/* 802939EC 0029092C  FC 00 00 50 */	fneg f0, f0
/* 802939F0 00290930  48 00 00 1C */	b .L_80293A0C
.L_802939F4:
/* 802939F4 00290934  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802939F8 00290938  FC 00 00 1E */	fctiwz f0, f0
/* 802939FC 0029093C  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 80293A00 00290940  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80293A04 00290944  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80293A08 00290948  7C 03 04 2E */	lfsx f0, r3, r0
.L_80293A0C:
/* 80293A0C 0029094C  FC 60 00 50 */	fneg f3, f0
/* 80293A10 00290950  C0 42 D7 30 */	lfs f2, lbl_8051BA90@sda21(r2)
/* 80293A14 00290954  C0 22 D7 64 */	lfs f1, lbl_8051BAC4@sda21(r2)
/* 80293A18 00290958  FC 00 28 18 */	frsp f0, f5
/* 80293A1C 0029095C  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80293A20 00290960  FC 80 18 18 */	frsp f4, f3
/* 80293A24 00290964  EC 42 00 72 */	fmuls f2, f2, f1
/* 80293A28 00290968  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 80293A2C 0029096C  EC 60 00 72 */	fmuls f3, f0, f1
/* 80293A30 00290970  EC 84 00 72 */	fmuls f4, f4, f1
/* 80293A34 00290974  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 80293A38 00290978  EC 22 F0 2A */	fadds f1, f2, f30
/* 80293A3C 0029097C  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80293A40 00290980  EC 03 E8 2A */	fadds f0, f3, f29
/* 80293A44 00290984  EC 44 F8 2A */	fadds f2, f4, f31
/* 80293A48 00290988  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 80293A4C 0029098C  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80293A50 00290990  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80293A54 00290994  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80293A58 00290998  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80293A5C 0029099C  C0 7F 01 A0 */	lfs f3, 0x1a0(r31)
/* 80293A60 002909A0  C0 9F 01 98 */	lfs f4, 0x198(r31)
/* 80293A64 002909A4  EC 23 00 28 */	fsubs f1, f3, f0
/* 80293A68 002909A8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80293A6C 002909AC  EC 44 10 28 */	fsubs f2, f4, f2
/* 80293A70 002909B0  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 80293A74 002909B4  EC 21 00 72 */	fmuls f1, f1, f1
/* 80293A78 002909B8  EC 00 00 32 */	fmuls f0, f0, f0
/* 80293A7C 002909BC  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80293A80 002909C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80293A84 002909C4  40 81 01 34 */	ble .L_80293BB8
/* 80293A88 002909C8  EC 3F 20 28 */	fsubs f1, f31, f4
/* 80293A8C 002909CC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80293A90 002909D0  EC 5D 18 28 */	fsubs f2, f29, f3
/* 80293A94 002909D4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80293A98 002909D8  4B DA 16 71 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80293A9C 002909DC  FF 80 08 90 */	fmr f28, f1
/* 80293AA0 002909E0  4B E3 5B 01 */	bl rand
/* 80293AA4 002909E4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80293AA8 002909E8  3C 00 43 30 */	lis r0, 0x4330
/* 80293AAC 002909EC  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80293AB0 002909F0  C8 22 D7 70 */	lfd f1, lbl_8051BAD0@sda21(r2)
/* 80293AB4 002909F4  90 01 00 38 */	stw r0, 0x38(r1)
/* 80293AB8 002909F8  C0 62 D7 68 */	lfs f3, lbl_8051BAC8@sda21(r2)
/* 80293ABC 002909FC  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 80293AC0 00290A00  C0 42 D7 58 */	lfs f2, lbl_8051BAB8@sda21(r2)
/* 80293AC4 00290A04  EC 80 08 28 */	fsubs f4, f0, f1
/* 80293AC8 00290A08  C0 22 D7 6C */	lfs f1, lbl_8051BACC@sda21(r2)
/* 80293ACC 00290A0C  C0 02 D7 30 */	lfs f0, lbl_8051BA90@sda21(r2)
/* 80293AD0 00290A10  EC 63 01 32 */	fmuls f3, f3, f4
/* 80293AD4 00290A14  EC 43 10 24 */	fdivs f2, f3, f2
/* 80293AD8 00290A18  EC 22 08 28 */	fsubs f1, f2, f1
/* 80293ADC 00290A1C  EF 9C 08 2A */	fadds f28, f28, f1
/* 80293AE0 00290A20  FC 20 E0 90 */	fmr f1, f28
/* 80293AE4 00290A24  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 80293AE8 00290A28  40 80 00 08 */	bge .L_80293AF0
/* 80293AEC 00290A2C  FC 20 E0 50 */	fneg f1, f28
.L_80293AF0:
/* 80293AF0 00290A30  C0 42 D7 5C */	lfs f2, lbl_8051BABC@sda21(r2)
/* 80293AF4 00290A34  C0 02 D7 30 */	lfs f0, lbl_8051BA90@sda21(r2)
/* 80293AF8 00290A38  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80293AFC 00290A3C  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 80293B00 00290A40  FC 00 08 1E */	fctiwz f0, f1
/* 80293B04 00290A44  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80293B08 00290A48  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80293B0C 00290A4C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80293B10 00290A50  7C 1E 04 2E */	lfsx f0, r30, r0
/* 80293B14 00290A54  FC A0 00 50 */	fneg f5, f0
/* 80293B18 00290A58  40 80 00 30 */	bge .L_80293B48
/* 80293B1C 00290A5C  C0 02 D7 60 */	lfs f0, lbl_8051BAC0@sda21(r2)
/* 80293B20 00290A60  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80293B24 00290A64  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80293B28 00290A68  EC 1C 00 32 */	fmuls f0, f28, f0
/* 80293B2C 00290A6C  FC 00 00 1E */	fctiwz f0, f0
/* 80293B30 00290A70  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80293B34 00290A74  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80293B38 00290A78  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80293B3C 00290A7C  7C 03 04 2E */	lfsx f0, r3, r0
/* 80293B40 00290A80  FC 00 00 50 */	fneg f0, f0
/* 80293B44 00290A84  48 00 00 24 */	b .L_80293B68
.L_80293B48:
/* 80293B48 00290A88  EC 1C 00 B2 */	fmuls f0, f28, f2
/* 80293B4C 00290A8C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80293B50 00290A90  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80293B54 00290A94  FC 00 00 1E */	fctiwz f0, f0
/* 80293B58 00290A98  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80293B5C 00290A9C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80293B60 00290AA0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80293B64 00290AA4  7C 03 04 2E */	lfsx f0, r3, r0
.L_80293B68:
/* 80293B68 00290AA8  FC 60 00 50 */	fneg f3, f0
/* 80293B6C 00290AAC  C0 42 D7 30 */	lfs f2, lbl_8051BA90@sda21(r2)
/* 80293B70 00290AB0  C0 22 D7 64 */	lfs f1, lbl_8051BAC4@sda21(r2)
/* 80293B74 00290AB4  FC 00 28 18 */	frsp f0, f5
/* 80293B78 00290AB8  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80293B7C 00290ABC  FC 80 18 18 */	frsp f4, f3
/* 80293B80 00290AC0  EC 42 00 72 */	fmuls f2, f2, f1
/* 80293B84 00290AC4  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 80293B88 00290AC8  EC 60 00 72 */	fmuls f3, f0, f1
/* 80293B8C 00290ACC  EC 84 00 72 */	fmuls f4, f4, f1
/* 80293B90 00290AD0  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 80293B94 00290AD4  EC 22 F0 2A */	fadds f1, f2, f30
/* 80293B98 00290AD8  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80293B9C 00290ADC  EC 03 E8 2A */	fadds f0, f3, f29
/* 80293BA0 00290AE0  EC 44 F8 2A */	fadds f2, f4, f31
/* 80293BA4 00290AE4  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 80293BA8 00290AE8  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80293BAC 00290AEC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80293BB0 00290AF0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80293BB4 00290AF4  D0 01 00 1C */	stfs f0, 0x1c(r1)
.L_80293BB8:
/* 80293BB8 00290AF8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80293BBC 00290AFC  38 81 00 14 */	addi r4, r1, 0x14
/* 80293BC0 00290B00  81 83 00 04 */	lwz r12, 4(r3)
/* 80293BC4 00290B04  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80293BC8 00290B08  7D 89 03 A6 */	mtctr r12
/* 80293BCC 00290B0C  4E 80 04 21 */	bctrl 
/* 80293BD0 00290B10  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80293BD4 00290B14  7F E3 FB 78 */	mr r3, r31
/* 80293BD8 00290B18  38 81 00 14 */	addi r4, r1, 0x14
/* 80293BDC 00290B1C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80293BE0 00290B20  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 80293BE4 00290B24  7D 89 03 A6 */	mtctr r12
/* 80293BE8 00290B28  4E 80 04 21 */	bctrl 
/* 80293BEC 00290B2C  D3 9F 01 FC */	stfs f28, 0x1fc(r31)
/* 80293BF0 00290B30  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80293BF4 00290B34  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80293BF8 00290B38  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80293BFC 00290B3C  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80293C00 00290B40  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80293C04 00290B44  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80293C08 00290B48  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 80293C0C 00290B4C  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80293C10 00290B50  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 80293C14 00290B54  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 80293C18 00290B58  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80293C1C 00290B5C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80293C20 00290B60  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80293C24 00290B64  7C 08 03 A6 */	mtlr r0
/* 80293C28 00290B68  38 21 00 90 */	addi r1, r1, 0x90
/* 80293C2C 00290B6C  4E 80 00 20 */	blr 
.endfn appearNearByTarget__Q34Game9SnakeCrow3ObjFPQ24Game8Creature

.fn setAttackPosition__Q34Game9SnakeCrow3ObjFv, global
/* 80293C30 00290B70  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80293C34 00290B74  7C 08 02 A6 */	mflr r0
/* 80293C38 00290B78  90 01 00 94 */	stw r0, 0x94(r1)
/* 80293C3C 00290B7C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80293C40 00290B80  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80293C44 00290B84  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80293C48 00290B88  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 80293C4C 00290B8C  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80293C50 00290B90  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 80293C54 00290B94  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 80293C58 00290B98  7C 7F 1B 78 */	mr r31, r3
/* 80293C5C 00290B9C  C0 02 D7 30 */	lfs f0, lbl_8051BA90@sda21(r2)
/* 80293C60 00290BA0  C0 63 01 FC */	lfs f3, 0x1fc(r3)
/* 80293C64 00290BA4  FC 20 18 90 */	fmr f1, f3
/* 80293C68 00290BA8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80293C6C 00290BAC  40 80 00 08 */	bge .L_80293C74
/* 80293C70 00290BB0  FC 20 18 50 */	fneg f1, f3
.L_80293C74:
/* 80293C74 00290BB4  C0 42 D7 5C */	lfs f2, lbl_8051BABC@sda21(r2)
/* 80293C78 00290BB8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80293C7C 00290BBC  C0 02 D7 30 */	lfs f0, lbl_8051BA90@sda21(r2)
/* 80293C80 00290BC0  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80293C84 00290BC4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80293C88 00290BC8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80293C8C 00290BCC  FC 00 08 1E */	fctiwz f0, f1
/* 80293C90 00290BD0  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80293C94 00290BD4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80293C98 00290BD8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80293C9C 00290BDC  7C 64 02 14 */	add r3, r4, r0
/* 80293CA0 00290BE0  C3 E3 00 04 */	lfs f31, 4(r3)
/* 80293CA4 00290BE4  40 80 00 28 */	bge .L_80293CCC
/* 80293CA8 00290BE8  C0 02 D7 60 */	lfs f0, lbl_8051BAC0@sda21(r2)
/* 80293CAC 00290BEC  EC 03 00 32 */	fmuls f0, f3, f0
/* 80293CB0 00290BF0  FC 00 00 1E */	fctiwz f0, f0
/* 80293CB4 00290BF4  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 80293CB8 00290BF8  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80293CBC 00290BFC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80293CC0 00290C00  7C 04 04 2E */	lfsx f0, r4, r0
/* 80293CC4 00290C04  FF C0 00 50 */	fneg f30, f0
/* 80293CC8 00290C08  48 00 00 1C */	b .L_80293CE4
.L_80293CCC:
/* 80293CCC 00290C0C  EC 03 00 B2 */	fmuls f0, f3, f2
/* 80293CD0 00290C10  FC 00 00 1E */	fctiwz f0, f0
/* 80293CD4 00290C14  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 80293CD8 00290C18  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80293CDC 00290C1C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80293CE0 00290C20  7F C4 04 2E */	lfsx f30, r4, r0
.L_80293CE4:
/* 80293CE4 00290C24  3C 80 80 49 */	lis r4, lbl_8048877C@ha
/* 80293CE8 00290C28  85 84 87 7C */	lwzu r12, lbl_8048877C@l(r4)
/* 80293CEC 00290C2C  3C 60 80 49 */	lis r3, lbl_80488790@ha
/* 80293CF0 00290C30  FF A0 F8 50 */	fneg f29, f31
/* 80293CF4 00290C34  38 E3 87 90 */	addi r7, r3, lbl_80488790@l
/* 80293CF8 00290C38  81 64 00 04 */	lwz r11, 4(r4)
/* 80293CFC 00290C3C  81 44 00 08 */	lwz r10, 8(r4)
/* 80293D00 00290C40  7F FC FB 78 */	mr r28, r31
/* 80293D04 00290C44  81 24 00 0C */	lwz r9, 0xc(r4)
/* 80293D08 00290C48  81 04 00 10 */	lwz r8, 0x10(r4)
/* 80293D0C 00290C4C  3B C1 00 1C */	addi r30, r1, 0x1c
/* 80293D10 00290C50  80 C7 00 00 */	lwz r6, 0(r7)
/* 80293D14 00290C54  3B A1 00 08 */	addi r29, r1, 8
/* 80293D18 00290C58  80 A7 00 04 */	lwz r5, 4(r7)
/* 80293D1C 00290C5C  3B 60 00 00 */	li r27, 0
/* 80293D20 00290C60  80 87 00 08 */	lwz r4, 8(r7)
/* 80293D24 00290C64  80 67 00 0C */	lwz r3, 0xc(r7)
/* 80293D28 00290C68  80 07 00 10 */	lwz r0, 0x10(r7)
/* 80293D2C 00290C6C  91 81 00 1C */	stw r12, 0x1c(r1)
/* 80293D30 00290C70  91 61 00 20 */	stw r11, 0x20(r1)
/* 80293D34 00290C74  91 41 00 24 */	stw r10, 0x24(r1)
/* 80293D38 00290C78  91 21 00 28 */	stw r9, 0x28(r1)
/* 80293D3C 00290C7C  91 01 00 2C */	stw r8, 0x2c(r1)
/* 80293D40 00290C80  90 C1 00 08 */	stw r6, 8(r1)
/* 80293D44 00290C84  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80293D48 00290C88  90 81 00 10 */	stw r4, 0x10(r1)
/* 80293D4C 00290C8C  90 61 00 14 */	stw r3, 0x14(r1)
/* 80293D50 00290C90  90 01 00 18 */	stw r0, 0x18(r1)
.L_80293D54:
/* 80293D54 00290C94  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 80293D58 00290C98  38 9C 02 D8 */	addi r4, r28, 0x2d8
/* 80293D5C 00290C9C  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80293D60 00290CA0  D0 1C 02 D8 */	stfs f0, 0x2d8(r28)
/* 80293D64 00290CA4  C0 5D 00 00 */	lfs f2, 0(r29)
/* 80293D68 00290CA8  EC 7E 00 72 */	fmuls f3, f30, f1
/* 80293D6C 00290CAC  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 80293D70 00290CB0  EC BF 00 72 */	fmuls f5, f31, f1
/* 80293D74 00290CB4  C0 82 D7 30 */	lfs f4, lbl_8051BA90@sda21(r2)
/* 80293D78 00290CB8  EC DD 00 B2 */	fmuls f6, f29, f2
/* 80293D7C 00290CBC  D0 1C 02 DC */	stfs f0, 0x2dc(r28)
/* 80293D80 00290CC0  FC E0 20 90 */	fmr f7, f4
/* 80293D84 00290CC4  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 80293D88 00290CC8  EC 84 00 72 */	fmuls f4, f4, f1
/* 80293D8C 00290CCC  EC 3E 00 B2 */	fmuls f1, f30, f2
/* 80293D90 00290CD0  D0 1C 02 E0 */	stfs f0, 0x2e0(r28)
/* 80293D94 00290CD4  EC E7 00 B2 */	fmuls f7, f7, f2
/* 80293D98 00290CD8  C0 1C 02 D8 */	lfs f0, 0x2d8(r28)
/* 80293D9C 00290CDC  EC 00 18 2A */	fadds f0, f0, f3
/* 80293DA0 00290CE0  D0 1C 02 D8 */	stfs f0, 0x2d8(r28)
/* 80293DA4 00290CE4  C0 1C 02 DC */	lfs f0, 0x2dc(r28)
/* 80293DA8 00290CE8  EC 00 20 2A */	fadds f0, f0, f4
/* 80293DAC 00290CEC  D0 1C 02 DC */	stfs f0, 0x2dc(r28)
/* 80293DB0 00290CF0  C0 1C 02 E0 */	lfs f0, 0x2e0(r28)
/* 80293DB4 00290CF4  EC 00 28 2A */	fadds f0, f0, f5
/* 80293DB8 00290CF8  D0 1C 02 E0 */	stfs f0, 0x2e0(r28)
/* 80293DBC 00290CFC  C0 1C 02 D8 */	lfs f0, 0x2d8(r28)
/* 80293DC0 00290D00  EC 00 30 2A */	fadds f0, f0, f6
/* 80293DC4 00290D04  D0 1C 02 D8 */	stfs f0, 0x2d8(r28)
/* 80293DC8 00290D08  C0 1C 02 DC */	lfs f0, 0x2dc(r28)
/* 80293DCC 00290D0C  EC 00 38 2A */	fadds f0, f0, f7
/* 80293DD0 00290D10  D0 1C 02 DC */	stfs f0, 0x2dc(r28)
/* 80293DD4 00290D14  C0 1C 02 E0 */	lfs f0, 0x2e0(r28)
/* 80293DD8 00290D18  EC 00 08 2A */	fadds f0, f0, f1
/* 80293DDC 00290D1C  D0 1C 02 E0 */	stfs f0, 0x2e0(r28)
/* 80293DE0 00290D20  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80293DE4 00290D24  81 83 00 04 */	lwz r12, 4(r3)
/* 80293DE8 00290D28  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80293DEC 00290D2C  7D 89 03 A6 */	mtctr r12
/* 80293DF0 00290D30  4E 80 04 21 */	bctrl 
/* 80293DF4 00290D34  3B 7B 00 01 */	addi r27, r27, 1
/* 80293DF8 00290D38  D0 3C 02 DC */	stfs f1, 0x2dc(r28)
/* 80293DFC 00290D3C  2C 1B 00 05 */	cmpwi r27, 5
/* 80293E00 00290D40  3B DE 00 04 */	addi r30, r30, 4
/* 80293E04 00290D44  3B BD 00 04 */	addi r29, r29, 4
/* 80293E08 00290D48  3B 9C 00 0C */	addi r28, r28, 0xc
/* 80293E0C 00290D4C  41 80 FF 48 */	blt .L_80293D54
/* 80293E10 00290D50  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80293E14 00290D54  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80293E18 00290D58  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80293E1C 00290D5C  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80293E20 00290D60  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 80293E24 00290D64  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80293E28 00290D68  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 80293E2C 00290D6C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80293E30 00290D70  7C 08 03 A6 */	mtlr r0
/* 80293E34 00290D74  38 21 00 90 */	addi r1, r1, 0x90
/* 80293E38 00290D78  4E 80 00 20 */	blr 
.endfn setAttackPosition__Q34Game9SnakeCrow3ObjFv

.fn getAttackPiki__Q34Game9SnakeCrow3ObjFi, global
/* 80293E3C 00290D7C  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 80293E40 00290D80  7C 08 02 A6 */	mflr r0
/* 80293E44 00290D84  90 01 01 64 */	stw r0, 0x164(r1)
/* 80293E48 00290D88  DB E1 01 50 */	stfd f31, 0x150(r1)
/* 80293E4C 00290D8C  F3 E1 01 58 */	psq_st f31, 344(r1), 0, qr0
/* 80293E50 00290D90  DB C1 01 40 */	stfd f30, 0x140(r1)
/* 80293E54 00290D94  F3 C1 01 48 */	psq_st f30, 328(r1), 0, qr0
/* 80293E58 00290D98  DB A1 01 30 */	stfd f29, 0x130(r1)
/* 80293E5C 00290D9C  F3 A1 01 38 */	psq_st f29, 312(r1), 0, qr0
/* 80293E60 00290DA0  DB 81 01 20 */	stfd f28, 0x120(r1)
/* 80293E64 00290DA4  F3 81 01 28 */	psq_st f28, 296(r1), 0, qr0
/* 80293E68 00290DA8  DB 61 01 10 */	stfd f27, 0x110(r1)
/* 80293E6C 00290DAC  F3 61 01 18 */	psq_st f27, 280(r1), 0, qr0
/* 80293E70 00290DB0  DB 41 01 00 */	stfd f26, 0x100(r1)
/* 80293E74 00290DB4  F3 41 01 08 */	psq_st f26, 264(r1), 0, qr0
/* 80293E78 00290DB8  BE 61 00 CC */	stmw r19, 0xcc(r1)
/* 80293E7C 00290DBC  2C 04 00 05 */	cmpwi r4, 5
/* 80293E80 00290DC0  3C A0 80 49 */	lis r5, lbl_80488730@ha
/* 80293E84 00290DC4  7C 7C 1B 78 */	mr r28, r3
/* 80293E88 00290DC8  3B C0 00 00 */	li r30, 0
/* 80293E8C 00290DCC  3B E5 87 30 */	addi r31, r5, lbl_80488730@l
/* 80293E90 00290DD0  3B A0 00 05 */	li r29, 5
/* 80293E94 00290DD4  40 80 00 0C */	bge .L_80293EA0
/* 80293E98 00290DD8  7C 9E 23 78 */	mr r30, r4
/* 80293E9C 00290DDC  3B A4 00 01 */	addi r29, r4, 1
.L_80293EA0:
/* 80293EA0 00290DE0  7F 84 E3 78 */	mr r4, r28
/* 80293EA4 00290DE4  38 61 00 14 */	addi r3, r1, 0x14
/* 80293EA8 00290DE8  81 9C 00 00 */	lwz r12, 0(r28)
/* 80293EAC 00290DEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80293EB0 00290DF0  7D 89 03 A6 */	mtctr r12
/* 80293EB4 00290DF4  4E 80 04 21 */	bctrl 
/* 80293EB8 00290DF8  C0 7C 01 FC */	lfs f3, 0x1fc(r28)
/* 80293EBC 00290DFC  C0 02 D7 30 */	lfs f0, lbl_8051BA90@sda21(r2)
/* 80293EC0 00290E00  FC 20 18 90 */	fmr f1, f3
/* 80293EC4 00290E04  C3 81 00 14 */	lfs f28, 0x14(r1)
/* 80293EC8 00290E08  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80293ECC 00290E0C  C3 61 00 18 */	lfs f27, 0x18(r1)
/* 80293ED0 00290E10  C3 41 00 1C */	lfs f26, 0x1c(r1)
/* 80293ED4 00290E14  40 80 00 08 */	bge .L_80293EDC
/* 80293ED8 00290E18  FC 20 18 50 */	fneg f1, f3
.L_80293EDC:
/* 80293EDC 00290E1C  C0 42 D7 5C */	lfs f2, lbl_8051BABC@sda21(r2)
/* 80293EE0 00290E20  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80293EE4 00290E24  C0 02 D7 30 */	lfs f0, lbl_8051BA90@sda21(r2)
/* 80293EE8 00290E28  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80293EEC 00290E2C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80293EF0 00290E30  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80293EF4 00290E34  FC 00 08 1E */	fctiwz f0, f1
/* 80293EF8 00290E38  D8 01 00 A8 */	stfd f0, 0xa8(r1)
/* 80293EFC 00290E3C  80 01 00 AC */	lwz r0, 0xac(r1)
/* 80293F00 00290E40  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80293F04 00290E44  7C 64 02 14 */	add r3, r4, r0
/* 80293F08 00290E48  C3 C3 00 04 */	lfs f30, 4(r3)
/* 80293F0C 00290E4C  40 80 00 28 */	bge .L_80293F34
/* 80293F10 00290E50  C0 02 D7 60 */	lfs f0, lbl_8051BAC0@sda21(r2)
/* 80293F14 00290E54  EC 03 00 32 */	fmuls f0, f3, f0
/* 80293F18 00290E58  FC 00 00 1E */	fctiwz f0, f0
/* 80293F1C 00290E5C  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 80293F20 00290E60  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80293F24 00290E64  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80293F28 00290E68  7C 04 04 2E */	lfsx f0, r4, r0
/* 80293F2C 00290E6C  FF A0 00 50 */	fneg f29, f0
/* 80293F30 00290E70  48 00 00 1C */	b .L_80293F4C
.L_80293F34:
/* 80293F34 00290E74  EC 03 00 B2 */	fmuls f0, f3, f2
/* 80293F38 00290E78  FC 00 00 1E */	fctiwz f0, f0
/* 80293F3C 00290E7C  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 80293F40 00290E80  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 80293F44 00290E84  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80293F48 00290E88  7F A4 04 2E */	lfsx f29, r4, r0
.L_80293F4C:
/* 80293F4C 00290E8C  80 1F 00 C4 */	lwz r0, 0xc4(r31)
/* 80293F50 00290E90  FF E0 F0 50 */	fneg f31, f30
/* 80293F54 00290E94  81 7F 00 C8 */	lwz r11, 0xc8(r31)
/* 80293F58 00290E98  81 5F 00 CC */	lwz r10, 0xcc(r31)
/* 80293F5C 00290E9C  81 3F 00 D0 */	lwz r9, 0xd0(r31)
/* 80293F60 00290EA0  81 1F 00 D4 */	lwz r8, 0xd4(r31)
/* 80293F64 00290EA4  80 FF 00 D8 */	lwz r7, 0xd8(r31)
/* 80293F68 00290EA8  80 DF 00 DC */	lwz r6, 0xdc(r31)
/* 80293F6C 00290EAC  80 BF 00 E0 */	lwz r5, 0xe0(r31)
/* 80293F70 00290EB0  80 9F 00 E4 */	lwz r4, 0xe4(r31)
/* 80293F74 00290EB4  80 7F 00 E8 */	lwz r3, 0xe8(r31)
/* 80293F78 00290EB8  C0 3C 02 DC */	lfs f1, 0x2dc(r28)
/* 80293F7C 00290EBC  C0 1C 02 E8 */	lfs f0, 0x2e8(r28)
/* 80293F80 00290EC0  C0 5C 02 F4 */	lfs f2, 0x2f4(r28)
/* 80293F84 00290EC4  ED 01 D8 28 */	fsubs f8, f1, f27
/* 80293F88 00290EC8  C0 3C 03 00 */	lfs f1, 0x300(r28)
/* 80293F8C 00290ECC  EC C0 D8 28 */	fsubs f6, f0, f27
/* 80293F90 00290ED0  C0 1C 03 0C */	lfs f0, 0x30c(r28)
/* 80293F94 00290ED4  ED 82 D8 28 */	fsubs f12, f2, f27
/* 80293F98 00290ED8  90 01 00 44 */	stw r0, 0x44(r1)
/* 80293F9C 00290EDC  80 1F 00 74 */	lwz r0, 0x74(r31)
/* 80293FA0 00290EE0  ED 61 D8 28 */	fsubs f11, f1, f27
/* 80293FA4 00290EE4  91 61 00 48 */	stw r11, 0x48(r1)
/* 80293FA8 00290EE8  ED 40 D8 28 */	fsubs f10, f0, f27
/* 80293FAC 00290EEC  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 80293FB0 00290EF0  91 41 00 4C */	stw r10, 0x4c(r1)
/* 80293FB4 00290EF4  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 80293FB8 00290EF8  ED 20 40 2A */	fadds f9, f0, f8
/* 80293FBC 00290EFC  91 21 00 50 */	stw r9, 0x50(r1)
/* 80293FC0 00290F00  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 80293FC4 00290F04  EC E1 30 2A */	fadds f7, f1, f6
/* 80293FC8 00290F08  91 01 00 54 */	stw r8, 0x54(r1)
/* 80293FCC 00290F0C  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 80293FD0 00290F10  EC A0 60 2A */	fadds f5, f0, f12
/* 80293FD4 00290F14  90 E1 00 30 */	stw r7, 0x30(r1)
/* 80293FD8 00290F18  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80293FDC 00290F1C  EC 61 58 2A */	fadds f3, f1, f11
/* 80293FE0 00290F20  90 C1 00 34 */	stw r6, 0x34(r1)
/* 80293FE4 00290F24  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 80293FE8 00290F28  EC 20 50 2A */	fadds f1, f0, f10
/* 80293FEC 00290F2C  90 A1 00 38 */	stw r5, 0x38(r1)
/* 80293FF0 00290F30  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 80293FF4 00290F34  ED 04 40 2A */	fadds f8, f4, f8
/* 80293FF8 00290F38  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80293FFC 00290F3C  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80294000 00290F40  EC C2 30 2A */	fadds f6, f2, f6
/* 80294004 00290F44  90 61 00 40 */	stw r3, 0x40(r1)
/* 80294008 00290F48  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 8029400C 00290F4C  EC 80 60 2A */	fadds f4, f0, f12
/* 80294010 00290F50  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80294014 00290F54  EC 42 58 2A */	fadds f2, f2, f11
/* 80294018 00290F58  82 7F 00 78 */	lwz r19, 0x78(r31)
/* 8029401C 00290F5C  EC 00 50 2A */	fadds f0, f0, f10
/* 80294020 00290F60  82 9F 00 7C */	lwz r20, 0x7c(r31)
/* 80294024 00290F64  82 BF 00 80 */	lwz r21, 0x80(r31)
/* 80294028 00290F68  82 DF 00 84 */	lwz r22, 0x84(r31)
/* 8029402C 00290F6C  82 FF 00 88 */	lwz r23, 0x88(r31)
/* 80294030 00290F70  83 1F 00 8C */	lwz r24, 0x8c(r31)
/* 80294034 00290F74  83 3F 00 90 */	lwz r25, 0x90(r31)
/* 80294038 00290F78  83 5F 00 94 */	lwz r26, 0x94(r31)
/* 8029403C 00290F7C  83 7F 00 98 */	lwz r27, 0x98(r31)
/* 80294040 00290F80  81 9F 00 9C */	lwz r12, 0x9c(r31)
/* 80294044 00290F84  81 7F 00 A0 */	lwz r11, 0xa0(r31)
/* 80294048 00290F88  81 5F 00 A4 */	lwz r10, 0xa4(r31)
/* 8029404C 00290F8C  81 3F 00 A8 */	lwz r9, 0xa8(r31)
/* 80294050 00290F90  81 1F 00 AC */	lwz r8, 0xac(r31)
/* 80294054 00290F94  80 FF 00 B0 */	lwz r7, 0xb0(r31)
/* 80294058 00290F98  80 DF 00 B4 */	lwz r6, 0xb4(r31)
/* 8029405C 00290F9C  80 BF 00 B8 */	lwz r5, 0xb8(r31)
/* 80294060 00290FA0  80 9F 00 BC */	lwz r4, 0xbc(r31)
/* 80294064 00290FA4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80294068 00290FA8  90 01 00 94 */	stw r0, 0x94(r1)
/* 8029406C 00290FAC  92 61 00 98 */	stw r19, 0x98(r1)
/* 80294070 00290FB0  92 81 00 9C */	stw r20, 0x9c(r1)
/* 80294074 00290FB4  92 A1 00 A0 */	stw r21, 0xa0(r1)
/* 80294078 00290FB8  92 C1 00 A4 */	stw r22, 0xa4(r1)
/* 8029407C 00290FBC  92 E1 00 80 */	stw r23, 0x80(r1)
/* 80294080 00290FC0  93 01 00 84 */	stw r24, 0x84(r1)
/* 80294084 00290FC4  93 21 00 88 */	stw r25, 0x88(r1)
/* 80294088 00290FC8  93 41 00 8C */	stw r26, 0x8c(r1)
/* 8029408C 00290FCC  93 61 00 90 */	stw r27, 0x90(r1)
/* 80294090 00290FD0  91 81 00 6C */	stw r12, 0x6c(r1)
/* 80294094 00290FD4  91 61 00 70 */	stw r11, 0x70(r1)
/* 80294098 00290FD8  91 41 00 74 */	stw r10, 0x74(r1)
/* 8029409C 00290FDC  91 21 00 78 */	stw r9, 0x78(r1)
/* 802940A0 00290FE0  91 01 00 7C */	stw r8, 0x7c(r1)
/* 802940A4 00290FE4  90 E1 00 58 */	stw r7, 0x58(r1)
/* 802940A8 00290FE8  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 802940AC 00290FEC  90 A1 00 60 */	stw r5, 0x60(r1)
/* 802940B0 00290FF0  90 81 00 64 */	stw r4, 0x64(r1)
/* 802940B4 00290FF4  90 61 00 68 */	stw r3, 0x68(r1)
/* 802940B8 00290FF8  D1 21 00 44 */	stfs f9, 0x44(r1)
/* 802940BC 00290FFC  D1 01 00 30 */	stfs f8, 0x30(r1)
/* 802940C0 00291000  D0 E1 00 48 */	stfs f7, 0x48(r1)
/* 802940C4 00291004  D0 C1 00 34 */	stfs f6, 0x34(r1)
/* 802940C8 00291008  D0 A1 00 4C */	stfs f5, 0x4c(r1)
/* 802940CC 0029100C  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 802940D0 00291010  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 802940D4 00291014  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 802940D8 00291018  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 802940DC 0029101C  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802940E0 00291020  38 00 00 00 */	li r0, 0
/* 802940E4 00291024  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802940E8 00291028  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802940EC 0029102C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802940F0 00291030  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802940F4 00291034  28 00 00 00 */	cmplwi r0, 0
/* 802940F8 00291038  90 81 00 20 */	stw r4, 0x20(r1)
/* 802940FC 0029103C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80294100 00291040  90 61 00 28 */	stw r3, 0x28(r1)
/* 80294104 00291044  40 82 00 1C */	bne .L_80294120
/* 80294108 00291048  81 83 00 00 */	lwz r12, 0(r3)
/* 8029410C 0029104C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80294110 00291050  7D 89 03 A6 */	mtctr r12
/* 80294114 00291054  4E 80 04 21 */	bctrl 
/* 80294118 00291058  90 61 00 24 */	stw r3, 0x24(r1)
/* 8029411C 0029105C  48 00 02 AC */	b .L_802943C8
.L_80294120:
/* 80294120 00291060  81 83 00 00 */	lwz r12, 0(r3)
/* 80294124 00291064  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80294128 00291068  7D 89 03 A6 */	mtctr r12
/* 8029412C 0029106C  4E 80 04 21 */	bctrl 
/* 80294130 00291070  90 61 00 24 */	stw r3, 0x24(r1)
/* 80294134 00291074  48 00 00 58 */	b .L_8029418C
.L_80294138:
/* 80294138 00291078  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8029413C 0029107C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80294140 00291080  81 83 00 00 */	lwz r12, 0(r3)
/* 80294144 00291084  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80294148 00291088  7D 89 03 A6 */	mtctr r12
/* 8029414C 0029108C  4E 80 04 21 */	bctrl 
/* 80294150 00291090  7C 64 1B 78 */	mr r4, r3
/* 80294154 00291094  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80294158 00291098  81 83 00 00 */	lwz r12, 0(r3)
/* 8029415C 0029109C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80294160 002910A0  7D 89 03 A6 */	mtctr r12
/* 80294164 002910A4  4E 80 04 21 */	bctrl 
/* 80294168 002910A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029416C 002910AC  40 82 02 5C */	bne .L_802943C8
/* 80294170 002910B0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80294174 002910B4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80294178 002910B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8029417C 002910BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80294180 002910C0  7D 89 03 A6 */	mtctr r12
/* 80294184 002910C4  4E 80 04 21 */	bctrl 
/* 80294188 002910C8  90 61 00 24 */	stw r3, 0x24(r1)
.L_8029418C:
/* 8029418C 002910CC  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80294190 002910D0  38 61 00 20 */	addi r3, r1, 0x20
/* 80294194 002910D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80294198 002910D8  7D 89 03 A6 */	mtctr r12
/* 8029419C 002910DC  4E 80 04 21 */	bctrl 
/* 802941A0 002910E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802941A4 002910E4  41 82 FF 94 */	beq .L_80294138
/* 802941A8 002910E8  48 00 02 20 */	b .L_802943C8
.L_802941AC:
/* 802941AC 002910EC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802941B0 002910F0  81 83 00 00 */	lwz r12, 0(r3)
/* 802941B4 002910F4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802941B8 002910F8  7D 89 03 A6 */	mtctr r12
/* 802941BC 002910FC  4E 80 04 21 */	bctrl 
/* 802941C0 00291100  81 83 00 00 */	lwz r12, 0(r3)
/* 802941C4 00291104  7C 73 1B 78 */	mr r19, r3
/* 802941C8 00291108  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802941CC 0029110C  7D 89 03 A6 */	mtctr r12
/* 802941D0 00291110  4E 80 04 21 */	bctrl 
/* 802941D4 00291114  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802941D8 00291118  41 82 01 34 */	beq .L_8029430C
/* 802941DC 0029111C  7E 63 9B 78 */	mr r3, r19
/* 802941E0 00291120  81 93 00 00 */	lwz r12, 0(r19)
/* 802941E4 00291124  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802941E8 00291128  7D 89 03 A6 */	mtctr r12
/* 802941EC 0029112C  4E 80 04 21 */	bctrl 
/* 802941F0 00291130  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802941F4 00291134  41 82 01 18 */	beq .L_8029430C
/* 802941F8 00291138  7E 63 9B 78 */	mr r3, r19
/* 802941FC 0029113C  4B F0 B3 8D */	bl isStickToMouth__Q24Game8CreatureFv
/* 80294200 00291140  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80294204 00291144  40 82 01 08 */	bne .L_8029430C
/* 80294208 00291148  7E 64 9B 78 */	mr r4, r19
/* 8029420C 0029114C  38 61 00 08 */	addi r3, r1, 8
/* 80294210 00291150  81 93 00 00 */	lwz r12, 0(r19)
/* 80294214 00291154  81 8C 00 08 */	lwz r12, 8(r12)
/* 80294218 00291158  7D 89 03 A6 */	mtctr r12
/* 8029421C 0029115C  4E 80 04 21 */	bctrl 
/* 80294220 00291160  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80294224 00291164  57 C9 10 3A */	slwi r9, r30, 2
/* 80294228 00291168  C0 21 00 08 */	lfs f1, 8(r1)
/* 8029422C 0029116C  38 61 00 94 */	addi r3, r1, 0x94
/* 80294230 00291170  EC 80 D8 28 */	fsubs f4, f0, f27
/* 80294234 00291174  C0 02 D7 30 */	lfs f0, lbl_8051BA90@sda21(r2)
/* 80294238 00291178  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8029423C 0029117C  38 81 00 80 */	addi r4, r1, 0x80
/* 80294240 00291180  38 A1 00 6C */	addi r5, r1, 0x6c
/* 80294244 00291184  38 C1 00 58 */	addi r6, r1, 0x58
/* 80294248 00291188  EC 61 E0 28 */	fsubs f3, f1, f28
/* 8029424C 0029118C  38 E1 00 44 */	addi r7, r1, 0x44
/* 80294250 00291190  EC 00 01 32 */	fmuls f0, f0, f4
/* 80294254 00291194  39 01 00 30 */	addi r8, r1, 0x30
/* 80294258 00291198  EC 42 D0 28 */	fsubs f2, f2, f26
/* 8029425C 0029119C  7C 1E E8 50 */	subf r0, r30, r29
/* 80294260 002911A0  EC 3D 00 FA */	fmadds f1, f29, f3, f0
/* 80294264 002911A4  7F CA F3 78 */	mr r10, r30
/* 80294268 002911A8  EC 1F 00 FA */	fmadds f0, f31, f3, f0
/* 8029426C 002911AC  7C 63 4A 14 */	add r3, r3, r9
/* 80294270 002911B0  7C 84 4A 14 */	add r4, r4, r9
/* 80294274 002911B4  7C A5 4A 14 */	add r5, r5, r9
/* 80294278 002911B8  EC 3E 08 BA */	fmadds f1, f30, f2, f1
/* 8029427C 002911BC  7C C6 4A 14 */	add r6, r6, r9
/* 80294280 002911C0  EC 5D 00 BA */	fmadds f2, f29, f2, f0
/* 80294284 002911C4  7C E7 4A 14 */	add r7, r7, r9
/* 80294288 002911C8  7D 08 4A 14 */	add r8, r8, r9
/* 8029428C 002911CC  7C 09 03 A6 */	mtctr r0
/* 80294290 002911D0  7C 1E E8 00 */	cmpw r30, r29
/* 80294294 002911D4  40 80 00 78 */	bge .L_8029430C
.L_80294298:
/* 80294298 002911D8  C0 03 00 00 */	lfs f0, 0(r3)
/* 8029429C 002911DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802942A0 002911E0  40 80 00 4C */	bge .L_802942EC
/* 802942A4 002911E4  C0 04 00 00 */	lfs f0, 0(r4)
/* 802942A8 002911E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802942AC 002911EC  40 81 00 40 */	ble .L_802942EC
/* 802942B0 002911F0  C0 05 00 00 */	lfs f0, 0(r5)
/* 802942B4 002911F4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802942B8 002911F8  40 80 00 34 */	bge .L_802942EC
/* 802942BC 002911FC  C0 06 00 00 */	lfs f0, 0(r6)
/* 802942C0 00291200  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802942C4 00291204  40 81 00 28 */	ble .L_802942EC
/* 802942C8 00291208  C0 07 00 00 */	lfs f0, 0(r7)
/* 802942CC 0029120C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802942D0 00291210  40 80 00 1C */	bge .L_802942EC
/* 802942D4 00291214  C0 08 00 00 */	lfs f0, 0(r8)
/* 802942D8 00291218  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802942DC 0029121C  40 81 00 10 */	ble .L_802942EC
/* 802942E0 00291220  91 5C 02 D4 */	stw r10, 0x2d4(r28)
/* 802942E4 00291224  7E 63 9B 78 */	mr r3, r19
/* 802942E8 00291228  48 00 01 04 */	b .L_802943EC
.L_802942EC:
/* 802942EC 0029122C  38 63 00 04 */	addi r3, r3, 4
/* 802942F0 00291230  38 84 00 04 */	addi r4, r4, 4
/* 802942F4 00291234  38 A5 00 04 */	addi r5, r5, 4
/* 802942F8 00291238  38 C6 00 04 */	addi r6, r6, 4
/* 802942FC 0029123C  38 E7 00 04 */	addi r7, r7, 4
/* 80294300 00291240  39 08 00 04 */	addi r8, r8, 4
/* 80294304 00291244  39 4A 00 01 */	addi r10, r10, 1
/* 80294308 00291248  42 00 FF 90 */	bdnz .L_80294298
.L_8029430C:
/* 8029430C 0029124C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80294310 00291250  28 00 00 00 */	cmplwi r0, 0
/* 80294314 00291254  40 82 00 24 */	bne .L_80294338
/* 80294318 00291258  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8029431C 0029125C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80294320 00291260  81 83 00 00 */	lwz r12, 0(r3)
/* 80294324 00291264  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80294328 00291268  7D 89 03 A6 */	mtctr r12
/* 8029432C 0029126C  4E 80 04 21 */	bctrl 
/* 80294330 00291270  90 61 00 24 */	stw r3, 0x24(r1)
/* 80294334 00291274  48 00 00 94 */	b .L_802943C8
.L_80294338:
/* 80294338 00291278  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8029433C 0029127C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80294340 00291280  81 83 00 00 */	lwz r12, 0(r3)
/* 80294344 00291284  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80294348 00291288  7D 89 03 A6 */	mtctr r12
/* 8029434C 0029128C  4E 80 04 21 */	bctrl 
/* 80294350 00291290  90 61 00 24 */	stw r3, 0x24(r1)
/* 80294354 00291294  48 00 00 58 */	b .L_802943AC
.L_80294358:
/* 80294358 00291298  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8029435C 0029129C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80294360 002912A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80294364 002912A4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80294368 002912A8  7D 89 03 A6 */	mtctr r12
/* 8029436C 002912AC  4E 80 04 21 */	bctrl 
/* 80294370 002912B0  7C 64 1B 78 */	mr r4, r3
/* 80294374 002912B4  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80294378 002912B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8029437C 002912BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80294380 002912C0  7D 89 03 A6 */	mtctr r12
/* 80294384 002912C4  4E 80 04 21 */	bctrl 
/* 80294388 002912C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029438C 002912CC  40 82 00 3C */	bne .L_802943C8
/* 80294390 002912D0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80294394 002912D4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80294398 002912D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8029439C 002912DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802943A0 002912E0  7D 89 03 A6 */	mtctr r12
/* 802943A4 002912E4  4E 80 04 21 */	bctrl 
/* 802943A8 002912E8  90 61 00 24 */	stw r3, 0x24(r1)
.L_802943AC:
/* 802943AC 002912EC  81 81 00 20 */	lwz r12, 0x20(r1)
/* 802943B0 002912F0  38 61 00 20 */	addi r3, r1, 0x20
/* 802943B4 002912F4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802943B8 002912F8  7D 89 03 A6 */	mtctr r12
/* 802943BC 002912FC  4E 80 04 21 */	bctrl 
/* 802943C0 00291300  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802943C4 00291304  41 82 FF 94 */	beq .L_80294358
.L_802943C8:
/* 802943C8 00291308  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802943CC 0029130C  81 83 00 00 */	lwz r12, 0(r3)
/* 802943D0 00291310  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802943D4 00291314  7D 89 03 A6 */	mtctr r12
/* 802943D8 00291318  4E 80 04 21 */	bctrl 
/* 802943DC 0029131C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802943E0 00291320  7C 04 18 40 */	cmplw r4, r3
/* 802943E4 00291324  40 82 FD C8 */	bne .L_802941AC
/* 802943E8 00291328  38 60 00 00 */	li r3, 0
.L_802943EC:
/* 802943EC 0029132C  E3 E1 01 58 */	psq_l f31, 344(r1), 0, qr0
/* 802943F0 00291330  CB E1 01 50 */	lfd f31, 0x150(r1)
/* 802943F4 00291334  E3 C1 01 48 */	psq_l f30, 328(r1), 0, qr0
/* 802943F8 00291338  CB C1 01 40 */	lfd f30, 0x140(r1)
/* 802943FC 0029133C  E3 A1 01 38 */	psq_l f29, 312(r1), 0, qr0
/* 80294400 00291340  CB A1 01 30 */	lfd f29, 0x130(r1)
/* 80294404 00291344  E3 81 01 28 */	psq_l f28, 296(r1), 0, qr0
/* 80294408 00291348  CB 81 01 20 */	lfd f28, 0x120(r1)
/* 8029440C 0029134C  E3 61 01 18 */	psq_l f27, 280(r1), 0, qr0
/* 80294410 00291350  CB 61 01 10 */	lfd f27, 0x110(r1)
/* 80294414 00291354  E3 41 01 08 */	psq_l f26, 264(r1), 0, qr0
/* 80294418 00291358  CB 41 01 00 */	lfd f26, 0x100(r1)
/* 8029441C 0029135C  BA 61 00 CC */	lmw r19, 0xcc(r1)
/* 80294420 00291360  80 01 01 64 */	lwz r0, 0x164(r1)
/* 80294424 00291364  7C 08 03 A6 */	mtlr r0
/* 80294428 00291368  38 21 01 60 */	addi r1, r1, 0x160
/* 8029442C 0029136C  4E 80 00 20 */	blr 
.endfn getAttackPiki__Q34Game9SnakeCrow3ObjFi

.fn getAttackNavi__Q34Game9SnakeCrow3ObjFi, global
/* 80294430 00291370  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 80294434 00291374  7C 08 02 A6 */	mflr r0
/* 80294438 00291378  90 01 01 64 */	stw r0, 0x164(r1)
/* 8029443C 0029137C  DB E1 01 50 */	stfd f31, 0x150(r1)
/* 80294440 00291380  F3 E1 01 58 */	psq_st f31, 344(r1), 0, qr0
/* 80294444 00291384  DB C1 01 40 */	stfd f30, 0x140(r1)
/* 80294448 00291388  F3 C1 01 48 */	psq_st f30, 328(r1), 0, qr0
/* 8029444C 0029138C  DB A1 01 30 */	stfd f29, 0x130(r1)
/* 80294450 00291390  F3 A1 01 38 */	psq_st f29, 312(r1), 0, qr0
/* 80294454 00291394  DB 81 01 20 */	stfd f28, 0x120(r1)
/* 80294458 00291398  F3 81 01 28 */	psq_st f28, 296(r1), 0, qr0
/* 8029445C 0029139C  DB 61 01 10 */	stfd f27, 0x110(r1)
/* 80294460 002913A0  F3 61 01 18 */	psq_st f27, 280(r1), 0, qr0
/* 80294464 002913A4  DB 41 01 00 */	stfd f26, 0x100(r1)
/* 80294468 002913A8  F3 41 01 08 */	psq_st f26, 264(r1), 0, qr0
/* 8029446C 002913AC  BE 61 00 CC */	stmw r19, 0xcc(r1)
/* 80294470 002913B0  2C 04 00 05 */	cmpwi r4, 5
/* 80294474 002913B4  3C A0 80 49 */	lis r5, lbl_80488730@ha
/* 80294478 002913B8  7C 7C 1B 78 */	mr r28, r3
/* 8029447C 002913BC  3B C0 00 00 */	li r30, 0
/* 80294480 002913C0  3B E5 87 30 */	addi r31, r5, lbl_80488730@l
/* 80294484 002913C4  3B A0 00 05 */	li r29, 5
/* 80294488 002913C8  40 80 00 0C */	bge .L_80294494
/* 8029448C 002913CC  7C 9E 23 78 */	mr r30, r4
/* 80294490 002913D0  3B A4 00 01 */	addi r29, r4, 1
.L_80294494:
/* 80294494 002913D4  7F 84 E3 78 */	mr r4, r28
/* 80294498 002913D8  38 61 00 14 */	addi r3, r1, 0x14
/* 8029449C 002913DC  81 9C 00 00 */	lwz r12, 0(r28)
/* 802944A0 002913E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802944A4 002913E4  7D 89 03 A6 */	mtctr r12
/* 802944A8 002913E8  4E 80 04 21 */	bctrl 
/* 802944AC 002913EC  C0 7C 01 FC */	lfs f3, 0x1fc(r28)
/* 802944B0 002913F0  C0 02 D7 30 */	lfs f0, lbl_8051BA90@sda21(r2)
/* 802944B4 002913F4  FC 20 18 90 */	fmr f1, f3
/* 802944B8 002913F8  C3 81 00 14 */	lfs f28, 0x14(r1)
/* 802944BC 002913FC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802944C0 00291400  C3 61 00 18 */	lfs f27, 0x18(r1)
/* 802944C4 00291404  C3 41 00 1C */	lfs f26, 0x1c(r1)
/* 802944C8 00291408  40 80 00 08 */	bge .L_802944D0
/* 802944CC 0029140C  FC 20 18 50 */	fneg f1, f3
.L_802944D0:
/* 802944D0 00291410  C0 42 D7 5C */	lfs f2, lbl_8051BABC@sda21(r2)
/* 802944D4 00291414  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802944D8 00291418  C0 02 D7 30 */	lfs f0, lbl_8051BA90@sda21(r2)
/* 802944DC 0029141C  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802944E0 00291420  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802944E4 00291424  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802944E8 00291428  FC 00 08 1E */	fctiwz f0, f1
/* 802944EC 0029142C  D8 01 00 A8 */	stfd f0, 0xa8(r1)
/* 802944F0 00291430  80 01 00 AC */	lwz r0, 0xac(r1)
/* 802944F4 00291434  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802944F8 00291438  7C 64 02 14 */	add r3, r4, r0
/* 802944FC 0029143C  C3 C3 00 04 */	lfs f30, 4(r3)
/* 80294500 00291440  40 80 00 28 */	bge .L_80294528
/* 80294504 00291444  C0 02 D7 60 */	lfs f0, lbl_8051BAC0@sda21(r2)
/* 80294508 00291448  EC 03 00 32 */	fmuls f0, f3, f0
/* 8029450C 0029144C  FC 00 00 1E */	fctiwz f0, f0
/* 80294510 00291450  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 80294514 00291454  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80294518 00291458  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8029451C 0029145C  7C 04 04 2E */	lfsx f0, r4, r0
/* 80294520 00291460  FF A0 00 50 */	fneg f29, f0
/* 80294524 00291464  48 00 00 1C */	b .L_80294540
.L_80294528:
/* 80294528 00291468  EC 03 00 B2 */	fmuls f0, f3, f2
/* 8029452C 0029146C  FC 00 00 1E */	fctiwz f0, f0
/* 80294530 00291470  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 80294534 00291474  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 80294538 00291478  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8029453C 0029147C  7F A4 04 2E */	lfsx f29, r4, r0
.L_80294540:
/* 80294540 00291480  80 1F 01 3C */	lwz r0, 0x13c(r31)
/* 80294544 00291484  FF E0 F0 50 */	fneg f31, f30
/* 80294548 00291488  81 7F 01 40 */	lwz r11, 0x140(r31)
/* 8029454C 0029148C  81 5F 01 44 */	lwz r10, 0x144(r31)
/* 80294550 00291490  81 3F 01 48 */	lwz r9, 0x148(r31)
/* 80294554 00291494  81 1F 01 4C */	lwz r8, 0x14c(r31)
/* 80294558 00291498  80 FF 01 50 */	lwz r7, 0x150(r31)
/* 8029455C 0029149C  80 DF 01 54 */	lwz r6, 0x154(r31)
/* 80294560 002914A0  80 BF 01 58 */	lwz r5, 0x158(r31)
/* 80294564 002914A4  80 9F 01 5C */	lwz r4, 0x15c(r31)
/* 80294568 002914A8  80 7F 01 60 */	lwz r3, 0x160(r31)
/* 8029456C 002914AC  C0 3C 02 DC */	lfs f1, 0x2dc(r28)
/* 80294570 002914B0  C0 1C 02 E8 */	lfs f0, 0x2e8(r28)
/* 80294574 002914B4  C0 5C 02 F4 */	lfs f2, 0x2f4(r28)
/* 80294578 002914B8  ED 01 D8 28 */	fsubs f8, f1, f27
/* 8029457C 002914BC  C0 3C 03 00 */	lfs f1, 0x300(r28)
/* 80294580 002914C0  EC C0 D8 28 */	fsubs f6, f0, f27
/* 80294584 002914C4  C0 1C 03 0C */	lfs f0, 0x30c(r28)
/* 80294588 002914C8  ED 82 D8 28 */	fsubs f12, f2, f27
/* 8029458C 002914CC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80294590 002914D0  80 1F 00 EC */	lwz r0, 0xec(r31)
/* 80294594 002914D4  ED 61 D8 28 */	fsubs f11, f1, f27
/* 80294598 002914D8  91 61 00 48 */	stw r11, 0x48(r1)
/* 8029459C 002914DC  ED 40 D8 28 */	fsubs f10, f0, f27
/* 802945A0 002914E0  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 802945A4 002914E4  91 41 00 4C */	stw r10, 0x4c(r1)
/* 802945A8 002914E8  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 802945AC 002914EC  ED 20 40 2A */	fadds f9, f0, f8
/* 802945B0 002914F0  91 21 00 50 */	stw r9, 0x50(r1)
/* 802945B4 002914F4  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 802945B8 002914F8  EC E1 30 2A */	fadds f7, f1, f6
/* 802945BC 002914FC  91 01 00 54 */	stw r8, 0x54(r1)
/* 802945C0 00291500  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 802945C4 00291504  EC A0 60 2A */	fadds f5, f0, f12
/* 802945C8 00291508  90 E1 00 30 */	stw r7, 0x30(r1)
/* 802945CC 0029150C  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 802945D0 00291510  EC 61 58 2A */	fadds f3, f1, f11
/* 802945D4 00291514  90 C1 00 34 */	stw r6, 0x34(r1)
/* 802945D8 00291518  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802945DC 0029151C  EC 20 50 2A */	fadds f1, f0, f10
/* 802945E0 00291520  90 A1 00 38 */	stw r5, 0x38(r1)
/* 802945E4 00291524  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 802945E8 00291528  ED 04 40 2A */	fadds f8, f4, f8
/* 802945EC 0029152C  90 81 00 3C */	stw r4, 0x3c(r1)
/* 802945F0 00291530  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 802945F4 00291534  EC C2 30 2A */	fadds f6, f2, f6
/* 802945F8 00291538  90 61 00 40 */	stw r3, 0x40(r1)
/* 802945FC 0029153C  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 80294600 00291540  EC 80 60 2A */	fadds f4, f0, f12
/* 80294604 00291544  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80294608 00291548  EC 42 58 2A */	fadds f2, f2, f11
/* 8029460C 0029154C  82 7F 00 F0 */	lwz r19, 0xf0(r31)
/* 80294610 00291550  EC 00 50 2A */	fadds f0, f0, f10
/* 80294614 00291554  82 9F 00 F4 */	lwz r20, 0xf4(r31)
/* 80294618 00291558  82 BF 00 F8 */	lwz r21, 0xf8(r31)
/* 8029461C 0029155C  82 DF 00 FC */	lwz r22, 0xfc(r31)
/* 80294620 00291560  82 FF 01 00 */	lwz r23, 0x100(r31)
/* 80294624 00291564  83 1F 01 04 */	lwz r24, 0x104(r31)
/* 80294628 00291568  83 3F 01 08 */	lwz r25, 0x108(r31)
/* 8029462C 0029156C  83 5F 01 0C */	lwz r26, 0x10c(r31)
/* 80294630 00291570  83 7F 01 10 */	lwz r27, 0x110(r31)
/* 80294634 00291574  81 9F 01 14 */	lwz r12, 0x114(r31)
/* 80294638 00291578  81 7F 01 18 */	lwz r11, 0x118(r31)
/* 8029463C 0029157C  81 5F 01 1C */	lwz r10, 0x11c(r31)
/* 80294640 00291580  81 3F 01 20 */	lwz r9, 0x120(r31)
/* 80294644 00291584  81 1F 01 24 */	lwz r8, 0x124(r31)
/* 80294648 00291588  80 FF 01 28 */	lwz r7, 0x128(r31)
/* 8029464C 0029158C  80 DF 01 2C */	lwz r6, 0x12c(r31)
/* 80294650 00291590  80 BF 01 30 */	lwz r5, 0x130(r31)
/* 80294654 00291594  80 9F 01 34 */	lwz r4, 0x134(r31)
/* 80294658 00291598  80 7F 01 38 */	lwz r3, 0x138(r31)
/* 8029465C 0029159C  90 01 00 94 */	stw r0, 0x94(r1)
/* 80294660 002915A0  92 61 00 98 */	stw r19, 0x98(r1)
/* 80294664 002915A4  92 81 00 9C */	stw r20, 0x9c(r1)
/* 80294668 002915A8  92 A1 00 A0 */	stw r21, 0xa0(r1)
/* 8029466C 002915AC  92 C1 00 A4 */	stw r22, 0xa4(r1)
/* 80294670 002915B0  92 E1 00 80 */	stw r23, 0x80(r1)
/* 80294674 002915B4  93 01 00 84 */	stw r24, 0x84(r1)
/* 80294678 002915B8  93 21 00 88 */	stw r25, 0x88(r1)
/* 8029467C 002915BC  93 41 00 8C */	stw r26, 0x8c(r1)
/* 80294680 002915C0  93 61 00 90 */	stw r27, 0x90(r1)
/* 80294684 002915C4  91 81 00 6C */	stw r12, 0x6c(r1)
/* 80294688 002915C8  91 61 00 70 */	stw r11, 0x70(r1)
/* 8029468C 002915CC  91 41 00 74 */	stw r10, 0x74(r1)
/* 80294690 002915D0  91 21 00 78 */	stw r9, 0x78(r1)
/* 80294694 002915D4  91 01 00 7C */	stw r8, 0x7c(r1)
/* 80294698 002915D8  90 E1 00 58 */	stw r7, 0x58(r1)
/* 8029469C 002915DC  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 802946A0 002915E0  90 A1 00 60 */	stw r5, 0x60(r1)
/* 802946A4 002915E4  90 81 00 64 */	stw r4, 0x64(r1)
/* 802946A8 002915E8  90 61 00 68 */	stw r3, 0x68(r1)
/* 802946AC 002915EC  D1 21 00 44 */	stfs f9, 0x44(r1)
/* 802946B0 002915F0  D1 01 00 30 */	stfs f8, 0x30(r1)
/* 802946B4 002915F4  D0 E1 00 48 */	stfs f7, 0x48(r1)
/* 802946B8 002915F8  D0 C1 00 34 */	stfs f6, 0x34(r1)
/* 802946BC 002915FC  D0 A1 00 4C */	stfs f5, 0x4c(r1)
/* 802946C0 00291600  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 802946C4 00291604  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 802946C8 00291608  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 802946CC 0029160C  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 802946D0 00291610  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802946D4 00291614  38 00 00 00 */	li r0, 0
/* 802946D8 00291618  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802946DC 0029161C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 802946E0 00291620  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802946E4 00291624  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 802946E8 00291628  28 00 00 00 */	cmplwi r0, 0
/* 802946EC 0029162C  90 81 00 20 */	stw r4, 0x20(r1)
/* 802946F0 00291630  90 01 00 24 */	stw r0, 0x24(r1)
/* 802946F4 00291634  90 61 00 28 */	stw r3, 0x28(r1)
/* 802946F8 00291638  40 82 00 1C */	bne .L_80294714
/* 802946FC 0029163C  81 83 00 00 */	lwz r12, 0(r3)
/* 80294700 00291640  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80294704 00291644  7D 89 03 A6 */	mtctr r12
/* 80294708 00291648  4E 80 04 21 */	bctrl 
/* 8029470C 0029164C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80294710 00291650  48 00 02 80 */	b .L_80294990
.L_80294714:
/* 80294714 00291654  81 83 00 00 */	lwz r12, 0(r3)
/* 80294718 00291658  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8029471C 0029165C  7D 89 03 A6 */	mtctr r12
/* 80294720 00291660  4E 80 04 21 */	bctrl 
/* 80294724 00291664  90 61 00 24 */	stw r3, 0x24(r1)
/* 80294728 00291668  48 00 00 58 */	b .L_80294780
.L_8029472C:
/* 8029472C 0029166C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80294730 00291670  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80294734 00291674  81 83 00 00 */	lwz r12, 0(r3)
/* 80294738 00291678  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8029473C 0029167C  7D 89 03 A6 */	mtctr r12
/* 80294740 00291680  4E 80 04 21 */	bctrl 
/* 80294744 00291684  7C 64 1B 78 */	mr r4, r3
/* 80294748 00291688  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8029474C 0029168C  81 83 00 00 */	lwz r12, 0(r3)
/* 80294750 00291690  81 8C 00 08 */	lwz r12, 8(r12)
/* 80294754 00291694  7D 89 03 A6 */	mtctr r12
/* 80294758 00291698  4E 80 04 21 */	bctrl 
/* 8029475C 0029169C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80294760 002916A0  40 82 02 30 */	bne .L_80294990
/* 80294764 002916A4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80294768 002916A8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8029476C 002916AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80294770 002916B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80294774 002916B4  7D 89 03 A6 */	mtctr r12
/* 80294778 002916B8  4E 80 04 21 */	bctrl 
/* 8029477C 002916BC  90 61 00 24 */	stw r3, 0x24(r1)
.L_80294780:
/* 80294780 002916C0  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80294784 002916C4  38 61 00 20 */	addi r3, r1, 0x20
/* 80294788 002916C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029478C 002916CC  7D 89 03 A6 */	mtctr r12
/* 80294790 002916D0  4E 80 04 21 */	bctrl 
/* 80294794 002916D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80294798 002916D8  41 82 FF 94 */	beq .L_8029472C
/* 8029479C 002916DC  48 00 01 F4 */	b .L_80294990
.L_802947A0:
/* 802947A0 002916E0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802947A4 002916E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802947A8 002916E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802947AC 002916EC  7D 89 03 A6 */	mtctr r12
/* 802947B0 002916F0  4E 80 04 21 */	bctrl 
/* 802947B4 002916F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802947B8 002916F8  7C 73 1B 78 */	mr r19, r3
/* 802947BC 002916FC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802947C0 00291700  7D 89 03 A6 */	mtctr r12
/* 802947C4 00291704  4E 80 04 21 */	bctrl 
/* 802947C8 00291708  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802947CC 0029170C  41 82 01 08 */	beq .L_802948D4
/* 802947D0 00291710  7E 64 9B 78 */	mr r4, r19
/* 802947D4 00291714  38 61 00 08 */	addi r3, r1, 8
/* 802947D8 00291718  81 93 00 00 */	lwz r12, 0(r19)
/* 802947DC 0029171C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802947E0 00291720  7D 89 03 A6 */	mtctr r12
/* 802947E4 00291724  4E 80 04 21 */	bctrl 
/* 802947E8 00291728  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802947EC 0029172C  57 C9 10 3A */	slwi r9, r30, 2
/* 802947F0 00291730  C0 21 00 08 */	lfs f1, 8(r1)
/* 802947F4 00291734  38 61 00 94 */	addi r3, r1, 0x94
/* 802947F8 00291738  EC 80 D8 28 */	fsubs f4, f0, f27
/* 802947FC 0029173C  C0 02 D7 30 */	lfs f0, lbl_8051BA90@sda21(r2)
/* 80294800 00291740  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80294804 00291744  38 81 00 80 */	addi r4, r1, 0x80
/* 80294808 00291748  38 A1 00 6C */	addi r5, r1, 0x6c
/* 8029480C 0029174C  38 C1 00 58 */	addi r6, r1, 0x58
/* 80294810 00291750  EC 61 E0 28 */	fsubs f3, f1, f28
/* 80294814 00291754  38 E1 00 44 */	addi r7, r1, 0x44
/* 80294818 00291758  EC 00 01 32 */	fmuls f0, f0, f4
/* 8029481C 0029175C  39 01 00 30 */	addi r8, r1, 0x30
/* 80294820 00291760  EC 42 D0 28 */	fsubs f2, f2, f26
/* 80294824 00291764  7C 1E E8 50 */	subf r0, r30, r29
/* 80294828 00291768  EC 3D 00 FA */	fmadds f1, f29, f3, f0
/* 8029482C 0029176C  7F CA F3 78 */	mr r10, r30
/* 80294830 00291770  EC 1F 00 FA */	fmadds f0, f31, f3, f0
/* 80294834 00291774  7C 63 4A 14 */	add r3, r3, r9
/* 80294838 00291778  7C 84 4A 14 */	add r4, r4, r9
/* 8029483C 0029177C  7C A5 4A 14 */	add r5, r5, r9
/* 80294840 00291780  EC 3E 08 BA */	fmadds f1, f30, f2, f1
/* 80294844 00291784  7C C6 4A 14 */	add r6, r6, r9
/* 80294848 00291788  EC 5D 00 BA */	fmadds f2, f29, f2, f0
/* 8029484C 0029178C  7C E7 4A 14 */	add r7, r7, r9
/* 80294850 00291790  7D 08 4A 14 */	add r8, r8, r9
/* 80294854 00291794  7C 09 03 A6 */	mtctr r0
/* 80294858 00291798  7C 1E E8 00 */	cmpw r30, r29
/* 8029485C 0029179C  40 80 00 78 */	bge .L_802948D4
.L_80294860:
/* 80294860 002917A0  C0 03 00 00 */	lfs f0, 0(r3)
/* 80294864 002917A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80294868 002917A8  40 80 00 4C */	bge .L_802948B4
/* 8029486C 002917AC  C0 04 00 00 */	lfs f0, 0(r4)
/* 80294870 002917B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80294874 002917B4  40 81 00 40 */	ble .L_802948B4
/* 80294878 002917B8  C0 05 00 00 */	lfs f0, 0(r5)
/* 8029487C 002917BC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80294880 002917C0  40 80 00 34 */	bge .L_802948B4
/* 80294884 002917C4  C0 06 00 00 */	lfs f0, 0(r6)
/* 80294888 002917C8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8029488C 002917CC  40 81 00 28 */	ble .L_802948B4
/* 80294890 002917D0  C0 07 00 00 */	lfs f0, 0(r7)
/* 80294894 002917D4  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80294898 002917D8  40 80 00 1C */	bge .L_802948B4
/* 8029489C 002917DC  C0 08 00 00 */	lfs f0, 0(r8)
/* 802948A0 002917E0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802948A4 002917E4  40 81 00 10 */	ble .L_802948B4
/* 802948A8 002917E8  91 5C 02 D4 */	stw r10, 0x2d4(r28)
/* 802948AC 002917EC  7E 63 9B 78 */	mr r3, r19
/* 802948B0 002917F0  48 00 01 04 */	b .L_802949B4
.L_802948B4:
/* 802948B4 002917F4  38 63 00 04 */	addi r3, r3, 4
/* 802948B8 002917F8  38 84 00 04 */	addi r4, r4, 4
/* 802948BC 002917FC  38 A5 00 04 */	addi r5, r5, 4
/* 802948C0 00291800  38 C6 00 04 */	addi r6, r6, 4
/* 802948C4 00291804  38 E7 00 04 */	addi r7, r7, 4
/* 802948C8 00291808  39 08 00 04 */	addi r8, r8, 4
/* 802948CC 0029180C  39 4A 00 01 */	addi r10, r10, 1
/* 802948D0 00291810  42 00 FF 90 */	bdnz .L_80294860
.L_802948D4:
/* 802948D4 00291814  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802948D8 00291818  28 00 00 00 */	cmplwi r0, 0
/* 802948DC 0029181C  40 82 00 24 */	bne .L_80294900
/* 802948E0 00291820  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802948E4 00291824  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802948E8 00291828  81 83 00 00 */	lwz r12, 0(r3)
/* 802948EC 0029182C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802948F0 00291830  7D 89 03 A6 */	mtctr r12
/* 802948F4 00291834  4E 80 04 21 */	bctrl 
/* 802948F8 00291838  90 61 00 24 */	stw r3, 0x24(r1)
/* 802948FC 0029183C  48 00 00 94 */	b .L_80294990
.L_80294900:
/* 80294900 00291840  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80294904 00291844  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80294908 00291848  81 83 00 00 */	lwz r12, 0(r3)
/* 8029490C 0029184C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80294910 00291850  7D 89 03 A6 */	mtctr r12
/* 80294914 00291854  4E 80 04 21 */	bctrl 
/* 80294918 00291858  90 61 00 24 */	stw r3, 0x24(r1)
/* 8029491C 0029185C  48 00 00 58 */	b .L_80294974
.L_80294920:
/* 80294920 00291860  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80294924 00291864  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80294928 00291868  81 83 00 00 */	lwz r12, 0(r3)
/* 8029492C 0029186C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80294930 00291870  7D 89 03 A6 */	mtctr r12
/* 80294934 00291874  4E 80 04 21 */	bctrl 
/* 80294938 00291878  7C 64 1B 78 */	mr r4, r3
/* 8029493C 0029187C  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80294940 00291880  81 83 00 00 */	lwz r12, 0(r3)
/* 80294944 00291884  81 8C 00 08 */	lwz r12, 8(r12)
/* 80294948 00291888  7D 89 03 A6 */	mtctr r12
/* 8029494C 0029188C  4E 80 04 21 */	bctrl 
/* 80294950 00291890  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80294954 00291894  40 82 00 3C */	bne .L_80294990
/* 80294958 00291898  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8029495C 0029189C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80294960 002918A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80294964 002918A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80294968 002918A8  7D 89 03 A6 */	mtctr r12
/* 8029496C 002918AC  4E 80 04 21 */	bctrl 
/* 80294970 002918B0  90 61 00 24 */	stw r3, 0x24(r1)
.L_80294974:
/* 80294974 002918B4  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80294978 002918B8  38 61 00 20 */	addi r3, r1, 0x20
/* 8029497C 002918BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80294980 002918C0  7D 89 03 A6 */	mtctr r12
/* 80294984 002918C4  4E 80 04 21 */	bctrl 
/* 80294988 002918C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029498C 002918CC  41 82 FF 94 */	beq .L_80294920
.L_80294990:
/* 80294990 002918D0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80294994 002918D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80294998 002918D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029499C 002918DC  7D 89 03 A6 */	mtctr r12
/* 802949A0 002918E0  4E 80 04 21 */	bctrl 
/* 802949A4 002918E4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802949A8 002918E8  7C 04 18 40 */	cmplw r4, r3
/* 802949AC 002918EC  40 82 FD F4 */	bne .L_802947A0
/* 802949B0 002918F0  38 60 00 00 */	li r3, 0
.L_802949B4:
/* 802949B4 002918F4  E3 E1 01 58 */	psq_l f31, 344(r1), 0, qr0
/* 802949B8 002918F8  CB E1 01 50 */	lfd f31, 0x150(r1)
/* 802949BC 002918FC  E3 C1 01 48 */	psq_l f30, 328(r1), 0, qr0
/* 802949C0 00291900  CB C1 01 40 */	lfd f30, 0x140(r1)
/* 802949C4 00291904  E3 A1 01 38 */	psq_l f29, 312(r1), 0, qr0
/* 802949C8 00291908  CB A1 01 30 */	lfd f29, 0x130(r1)
/* 802949CC 0029190C  E3 81 01 28 */	psq_l f28, 296(r1), 0, qr0
/* 802949D0 00291910  CB 81 01 20 */	lfd f28, 0x120(r1)
/* 802949D4 00291914  E3 61 01 18 */	psq_l f27, 280(r1), 0, qr0
/* 802949D8 00291918  CB 61 01 10 */	lfd f27, 0x110(r1)
/* 802949DC 0029191C  E3 41 01 08 */	psq_l f26, 264(r1), 0, qr0
/* 802949E0 00291920  CB 41 01 00 */	lfd f26, 0x100(r1)
/* 802949E4 00291924  BA 61 00 CC */	lmw r19, 0xcc(r1)
/* 802949E8 00291928  80 01 01 64 */	lwz r0, 0x164(r1)
/* 802949EC 0029192C  7C 08 03 A6 */	mtlr r0
/* 802949F0 00291930  38 21 01 60 */	addi r1, r1, 0x160
/* 802949F4 00291934  4E 80 00 20 */	blr 
.endfn getAttackNavi__Q34Game9SnakeCrow3ObjFi

.fn getSwallowSlot__Q34Game9SnakeCrow3ObjFv, global
/* 802949F8 00291938  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802949FC 0029193C  7C 08 02 A6 */	mflr r0
/* 80294A00 00291940  90 01 00 14 */	stw r0, 0x14(r1)
/* 80294A04 00291944  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80294A08 00291948  3B E0 00 00 */	li r31, 0
/* 80294A0C 0029194C  93 C1 00 08 */	stw r30, 8(r1)
/* 80294A10 00291950  7C 7E 1B 78 */	mr r30, r3
/* 80294A14 00291954  48 00 00 24 */	b .L_80294A38
.L_80294A18:
/* 80294A18 00291958  7F E4 FB 78 */	mr r4, r31
/* 80294A1C 0029195C  38 7E 02 CC */	addi r3, r30, 0x2cc
/* 80294A20 00291960  4B EA 3D 59 */	bl getSlot__10MouthSlotsFi
/* 80294A24 00291964  80 03 00 64 */	lwz r0, 0x64(r3)
/* 80294A28 00291968  28 00 00 00 */	cmplwi r0, 0
/* 80294A2C 0029196C  40 82 00 08 */	bne .L_80294A34
/* 80294A30 00291970  48 00 00 18 */	b .L_80294A48
.L_80294A34:
/* 80294A34 00291974  3B FF 00 01 */	addi r31, r31, 1
.L_80294A38:
/* 80294A38 00291978  80 1E 02 CC */	lwz r0, 0x2cc(r30)
/* 80294A3C 0029197C  7C 1F 00 00 */	cmpw r31, r0
/* 80294A40 00291980  41 80 FF D8 */	blt .L_80294A18
/* 80294A44 00291984  38 60 00 00 */	li r3, 0
.L_80294A48:
/* 80294A48 00291988  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80294A4C 0029198C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80294A50 00291990  83 C1 00 08 */	lwz r30, 8(r1)
/* 80294A54 00291994  7C 08 03 A6 */	mtlr r0
/* 80294A58 00291998  38 21 00 10 */	addi r1, r1, 0x10
/* 80294A5C 0029199C  4E 80 00 20 */	blr 
.endfn getSwallowSlot__Q34Game9SnakeCrow3ObjFv

.fn isSwallowPikmin__Q34Game9SnakeCrow3ObjFv, global
/* 80294A60 002919A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80294A64 002919A4  7C 08 02 A6 */	mflr r0
/* 80294A68 002919A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80294A6C 002919AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80294A70 002919B0  3B E0 00 00 */	li r31, 0
/* 80294A74 002919B4  93 C1 00 08 */	stw r30, 8(r1)
/* 80294A78 002919B8  7C 7E 1B 78 */	mr r30, r3
/* 80294A7C 002919BC  48 00 00 28 */	b .L_80294AA4
.L_80294A80:
/* 80294A80 002919C0  7F E4 FB 78 */	mr r4, r31
/* 80294A84 002919C4  38 7E 02 CC */	addi r3, r30, 0x2cc
/* 80294A88 002919C8  4B EA 3C F1 */	bl getSlot__10MouthSlotsFi
/* 80294A8C 002919CC  80 03 00 64 */	lwz r0, 0x64(r3)
/* 80294A90 002919D0  28 00 00 00 */	cmplwi r0, 0
/* 80294A94 002919D4  41 82 00 0C */	beq .L_80294AA0
/* 80294A98 002919D8  38 60 00 01 */	li r3, 1
/* 80294A9C 002919DC  48 00 00 18 */	b .L_80294AB4
.L_80294AA0:
/* 80294AA0 002919E0  3B FF 00 01 */	addi r31, r31, 1
.L_80294AA4:
/* 80294AA4 002919E4  80 1E 02 CC */	lwz r0, 0x2cc(r30)
/* 80294AA8 002919E8  7C 1F 00 00 */	cmpw r31, r0
/* 80294AAC 002919EC  41 80 FF D4 */	blt .L_80294A80
/* 80294AB0 002919F0  38 60 00 00 */	li r3, 0
.L_80294AB4:
/* 80294AB4 002919F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80294AB8 002919F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80294ABC 002919FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80294AC0 00291A00  7C 08 03 A6 */	mtlr r0
/* 80294AC4 00291A04  38 21 00 10 */	addi r1, r1, 0x10
/* 80294AC8 00291A08  4E 80 00 20 */	blr 
.endfn isSwallowPikmin__Q34Game9SnakeCrow3ObjFv

.fn getStickHeadPikmin__Q34Game9SnakeCrow3ObjFv, global
/* 80294ACC 00291A0C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80294AD0 00291A10  7C 08 02 A6 */	mflr r0
/* 80294AD4 00291A14  7C 64 1B 78 */	mr r4, r3
/* 80294AD8 00291A18  90 01 00 44 */	stw r0, 0x44(r1)
/* 80294ADC 00291A1C  38 61 00 18 */	addi r3, r1, 0x18
/* 80294AE0 00291A20  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80294AE4 00291A24  3B E0 00 00 */	li r31, 0
/* 80294AE8 00291A28  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80294AEC 00291A2C  4B F0 B1 71 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 80294AF0 00291A30  38 00 00 00 */	li r0, 0
/* 80294AF4 00291A34  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80294AF8 00291A38  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80294AFC 00291A3C  38 61 00 18 */	addi r3, r1, 0x18
/* 80294B00 00291A40  28 00 00 00 */	cmplwi r0, 0
/* 80294B04 00291A44  90 81 00 08 */	stw r4, 8(r1)
/* 80294B08 00291A48  90 01 00 14 */	stw r0, 0x14(r1)
/* 80294B0C 00291A4C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80294B10 00291A50  90 61 00 10 */	stw r3, 0x10(r1)
/* 80294B14 00291A54  40 82 00 1C */	bne .L_80294B30
/* 80294B18 00291A58  81 83 00 00 */	lwz r12, 0(r3)
/* 80294B1C 00291A5C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80294B20 00291A60  7D 89 03 A6 */	mtctr r12
/* 80294B24 00291A64  4E 80 04 21 */	bctrl 
/* 80294B28 00291A68  90 61 00 0C */	stw r3, 0xc(r1)
/* 80294B2C 00291A6C  48 00 01 A4 */	b .L_80294CD0
.L_80294B30:
/* 80294B30 00291A70  81 83 00 00 */	lwz r12, 0(r3)
/* 80294B34 00291A74  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80294B38 00291A78  7D 89 03 A6 */	mtctr r12
/* 80294B3C 00291A7C  4E 80 04 21 */	bctrl 
/* 80294B40 00291A80  90 61 00 0C */	stw r3, 0xc(r1)
/* 80294B44 00291A84  48 00 00 58 */	b .L_80294B9C
.L_80294B48:
/* 80294B48 00291A88  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80294B4C 00291A8C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80294B50 00291A90  81 83 00 00 */	lwz r12, 0(r3)
/* 80294B54 00291A94  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80294B58 00291A98  7D 89 03 A6 */	mtctr r12
/* 80294B5C 00291A9C  4E 80 04 21 */	bctrl 
/* 80294B60 00291AA0  7C 64 1B 78 */	mr r4, r3
/* 80294B64 00291AA4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80294B68 00291AA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80294B6C 00291AAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80294B70 00291AB0  7D 89 03 A6 */	mtctr r12
/* 80294B74 00291AB4  4E 80 04 21 */	bctrl 
/* 80294B78 00291AB8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80294B7C 00291ABC  40 82 01 54 */	bne .L_80294CD0
/* 80294B80 00291AC0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80294B84 00291AC4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80294B88 00291AC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80294B8C 00291ACC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80294B90 00291AD0  7D 89 03 A6 */	mtctr r12
/* 80294B94 00291AD4  4E 80 04 21 */	bctrl 
/* 80294B98 00291AD8  90 61 00 0C */	stw r3, 0xc(r1)
.L_80294B9C:
/* 80294B9C 00291ADC  81 81 00 08 */	lwz r12, 8(r1)
/* 80294BA0 00291AE0  38 61 00 08 */	addi r3, r1, 8
/* 80294BA4 00291AE4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80294BA8 00291AE8  7D 89 03 A6 */	mtctr r12
/* 80294BAC 00291AEC  4E 80 04 21 */	bctrl 
/* 80294BB0 00291AF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80294BB4 00291AF4  41 82 FF 94 */	beq .L_80294B48
/* 80294BB8 00291AF8  48 00 01 18 */	b .L_80294CD0
.L_80294BBC:
/* 80294BBC 00291AFC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80294BC0 00291B00  81 83 00 00 */	lwz r12, 0(r3)
/* 80294BC4 00291B04  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80294BC8 00291B08  7D 89 03 A6 */	mtctr r12
/* 80294BCC 00291B0C  4E 80 04 21 */	bctrl 
/* 80294BD0 00291B10  81 83 00 00 */	lwz r12, 0(r3)
/* 80294BD4 00291B14  7C 7E 1B 78 */	mr r30, r3
/* 80294BD8 00291B18  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80294BDC 00291B1C  7D 89 03 A6 */	mtctr r12
/* 80294BE0 00291B20  4E 80 04 21 */	bctrl 
/* 80294BE4 00291B24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80294BE8 00291B28  41 82 00 2C */	beq .L_80294C14
/* 80294BEC 00291B2C  80 7E 00 F8 */	lwz r3, 0xf8(r30)
/* 80294BF0 00291B30  28 03 00 00 */	cmplwi r3, 0
/* 80294BF4 00291B34  41 82 00 20 */	beq .L_80294C14
/* 80294BF8 00291B38  3C 80 68 65 */	lis r4, 0x68656164@ha
/* 80294BFC 00291B3C  38 63 00 30 */	addi r3, r3, 0x30
/* 80294C00 00291B40  38 84 61 64 */	addi r4, r4, 0x68656164@l
/* 80294C04 00291B44  48 17 E8 31 */	bl __eq__4ID32FUl
/* 80294C08 00291B48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80294C0C 00291B4C  41 82 00 08 */	beq .L_80294C14
/* 80294C10 00291B50  3B FF 00 01 */	addi r31, r31, 1
.L_80294C14:
/* 80294C14 00291B54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80294C18 00291B58  28 00 00 00 */	cmplwi r0, 0
/* 80294C1C 00291B5C  40 82 00 24 */	bne .L_80294C40
/* 80294C20 00291B60  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80294C24 00291B64  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80294C28 00291B68  81 83 00 00 */	lwz r12, 0(r3)
/* 80294C2C 00291B6C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80294C30 00291B70  7D 89 03 A6 */	mtctr r12
/* 80294C34 00291B74  4E 80 04 21 */	bctrl 
/* 80294C38 00291B78  90 61 00 0C */	stw r3, 0xc(r1)
/* 80294C3C 00291B7C  48 00 00 94 */	b .L_80294CD0
.L_80294C40:
/* 80294C40 00291B80  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80294C44 00291B84  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80294C48 00291B88  81 83 00 00 */	lwz r12, 0(r3)
/* 80294C4C 00291B8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80294C50 00291B90  7D 89 03 A6 */	mtctr r12
/* 80294C54 00291B94  4E 80 04 21 */	bctrl 
/* 80294C58 00291B98  90 61 00 0C */	stw r3, 0xc(r1)
/* 80294C5C 00291B9C  48 00 00 58 */	b .L_80294CB4
.L_80294C60:
/* 80294C60 00291BA0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80294C64 00291BA4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80294C68 00291BA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80294C6C 00291BAC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80294C70 00291BB0  7D 89 03 A6 */	mtctr r12
/* 80294C74 00291BB4  4E 80 04 21 */	bctrl 
/* 80294C78 00291BB8  7C 64 1B 78 */	mr r4, r3
/* 80294C7C 00291BBC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80294C80 00291BC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80294C84 00291BC4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80294C88 00291BC8  7D 89 03 A6 */	mtctr r12
/* 80294C8C 00291BCC  4E 80 04 21 */	bctrl 
/* 80294C90 00291BD0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80294C94 00291BD4  40 82 00 3C */	bne .L_80294CD0
/* 80294C98 00291BD8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80294C9C 00291BDC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80294CA0 00291BE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80294CA4 00291BE4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80294CA8 00291BE8  7D 89 03 A6 */	mtctr r12
/* 80294CAC 00291BEC  4E 80 04 21 */	bctrl 
/* 80294CB0 00291BF0  90 61 00 0C */	stw r3, 0xc(r1)
.L_80294CB4:
/* 80294CB4 00291BF4  81 81 00 08 */	lwz r12, 8(r1)
/* 80294CB8 00291BF8  38 61 00 08 */	addi r3, r1, 8
/* 80294CBC 00291BFC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80294CC0 00291C00  7D 89 03 A6 */	mtctr r12
/* 80294CC4 00291C04  4E 80 04 21 */	bctrl 
/* 80294CC8 00291C08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80294CCC 00291C0C  41 82 FF 94 */	beq .L_80294C60
.L_80294CD0:
/* 80294CD0 00291C10  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80294CD4 00291C14  81 83 00 00 */	lwz r12, 0(r3)
/* 80294CD8 00291C18  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80294CDC 00291C1C  7D 89 03 A6 */	mtctr r12
/* 80294CE0 00291C20  4E 80 04 21 */	bctrl 
/* 80294CE4 00291C24  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80294CE8 00291C28  7C 04 18 40 */	cmplw r4, r3
/* 80294CEC 00291C2C  40 82 FE D0 */	bne .L_80294BBC
/* 80294CF0 00291C30  38 61 00 18 */	addi r3, r1, 0x18
/* 80294CF4 00291C34  38 80 FF FF */	li r4, -1
/* 80294CF8 00291C38  4B F0 B0 6D */	bl __dt__Q24Game8StickersFv
/* 80294CFC 00291C3C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80294D00 00291C40  7F E3 FB 78 */	mr r3, r31
/* 80294D04 00291C44  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80294D08 00291C48  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80294D0C 00291C4C  7C 08 03 A6 */	mtlr r0
/* 80294D10 00291C50  38 21 00 40 */	addi r1, r1, 0x40
/* 80294D14 00291C54  4E 80 00 20 */	blr 
.endfn getStickHeadPikmin__Q34Game9SnakeCrow3ObjFv

.fn createJointCallBack__Q34Game9SnakeCrow3ObjFv, global
/* 80294D18 00291C58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80294D1C 00291C5C  7C 08 02 A6 */	mflr r0
/* 80294D20 00291C60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80294D24 00291C64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80294D28 00291C68  7C 7F 1B 78 */	mr r31, r3
/* 80294D2C 00291C6C  38 60 00 30 */	li r3, 0x30
/* 80294D30 00291C70  4B D8 F1 75 */	bl __nw__FUl
/* 80294D34 00291C74  7C 60 1B 79 */	or. r0, r3, r3
/* 80294D38 00291C78  41 82 00 10 */	beq .L_80294D48
/* 80294D3C 00291C7C  7F E4 FB 78 */	mr r4, r31
/* 80294D40 00291C80  48 03 C9 2D */	bl __ct__Q24Game13SnakeJointMgrFPQ24Game9EnemyBase
/* 80294D44 00291C84  7C 60 1B 78 */	mr r0, r3
.L_80294D48:
/* 80294D48 00291C88  90 1F 03 14 */	stw r0, 0x314(r31)
/* 80294D4C 00291C8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80294D50 00291C90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80294D54 00291C94  7C 08 03 A6 */	mtlr r0
/* 80294D58 00291C98  38 21 00 10 */	addi r1, r1, 0x10
/* 80294D5C 00291C9C  4E 80 00 20 */	blr 
.endfn createJointCallBack__Q34Game9SnakeCrow3ObjFv

.fn setupJointCallBack__Q34Game9SnakeCrow3ObjFv, global
/* 80294D60 00291CA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80294D64 00291CA4  7C 08 02 A6 */	mflr r0
/* 80294D68 00291CA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80294D6C 00291CAC  80 63 03 14 */	lwz r3, 0x314(r3)
/* 80294D70 00291CB0  48 03 C9 39 */	bl setupCallBackJoint__Q24Game13SnakeJointMgrFv
/* 80294D74 00291CB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80294D78 00291CB8  7C 08 03 A6 */	mtlr r0
/* 80294D7C 00291CBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80294D80 00291CC0  4E 80 00 20 */	blr 
.endfn setupJointCallBack__Q34Game9SnakeCrow3ObjFv

.fn doAnimationJointCallBack__Q34Game9SnakeCrow3ObjFv, global
/* 80294D84 00291CC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80294D88 00291CC8  7C 08 02 A6 */	mflr r0
/* 80294D8C 00291CCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80294D90 00291CD0  80 63 03 14 */	lwz r3, 0x314(r3)
/* 80294D94 00291CD4  48 03 CA 15 */	bl doAnimation__Q24Game13SnakeJointMgrFv
/* 80294D98 00291CD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80294D9C 00291CDC  7C 08 03 A6 */	mtlr r0
/* 80294DA0 00291CE0  38 21 00 10 */	addi r1, r1, 0x10
/* 80294DA4 00291CE4  4E 80 00 20 */	blr 
.endfn doAnimationJointCallBack__Q34Game9SnakeCrow3ObjFv

.fn finishAnimationJointCallBack__Q34Game9SnakeCrow3ObjFv, global
/* 80294DA8 00291CE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80294DAC 00291CEC  7C 08 02 A6 */	mflr r0
/* 80294DB0 00291CF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80294DB4 00291CF4  80 63 03 14 */	lwz r3, 0x314(r3)
/* 80294DB8 00291CF8  48 03 CA 71 */	bl finishAnimation__Q24Game13SnakeJointMgrFv
/* 80294DBC 00291CFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80294DC0 00291D00  7C 08 03 A6 */	mtlr r0
/* 80294DC4 00291D04  38 21 00 10 */	addi r1, r1, 0x10
/* 80294DC8 00291D08  4E 80 00 20 */	blr 
.endfn finishAnimationJointCallBack__Q34Game9SnakeCrow3ObjFv

.fn startJointCallBack__Q34Game9SnakeCrow3ObjFv, global
/* 80294DCC 00291D0C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80294DD0 00291D10  7C 08 02 A6 */	mflr r0
/* 80294DD4 00291D14  90 01 00 34 */	stw r0, 0x34(r1)
/* 80294DD8 00291D18  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80294DDC 00291D1C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80294DE0 00291D20  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80294DE4 00291D24  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80294DE8 00291D28  7C 7E 1B 78 */	mr r30, r3
/* 80294DEC 00291D2C  80 03 02 D4 */	lwz r0, 0x2d4(r3)
/* 80294DF0 00291D30  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80294DF4 00291D34  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80294DF8 00291D38  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 80294DFC 00291D3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80294E00 00291D40  7C 9E 02 14 */	add r4, r30, r0
/* 80294E04 00291D44  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80294E08 00291D48  C0 24 02 DC */	lfs f1, 0x2dc(r4)
/* 80294E0C 00291D4C  EF E1 00 28 */	fsubs f31, f1, f0
/* 80294E10 00291D50  7D 89 03 A6 */	mtctr r12
/* 80294E14 00291D54  4E 80 04 21 */	bctrl 
/* 80294E18 00291D58  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80294E1C 00291D5C  38 80 00 03 */	li r4, 3
/* 80294E20 00291D60  48 19 4B 35 */	bl getAnimKeyByType__Q28SysShape8AnimInfoFUl
/* 80294E24 00291D64  7C 7F 1B 78 */	mr r31, r3
/* 80294E28 00291D68  7F C3 F3 78 */	mr r3, r30
/* 80294E2C 00291D6C  4B E7 04 41 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 80294E30 00291D70  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 80294E34 00291D74  3C 00 43 30 */	lis r0, 0x4330
/* 80294E38 00291D78  FC 60 08 90 */	fmr f3, f1
/* 80294E3C 00291D7C  90 01 00 08 */	stw r0, 8(r1)
/* 80294E40 00291D80  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80294E44 00291D84  C8 42 D7 70 */	lfd f2, lbl_8051BAD0@sda21(r2)
/* 80294E48 00291D88  90 01 00 0C */	stw r0, 0xc(r1)
/* 80294E4C 00291D8C  FC 20 F8 90 */	fmr f1, f31
/* 80294E50 00291D90  C8 01 00 08 */	lfd f0, 8(r1)
/* 80294E54 00291D94  80 7E 03 14 */	lwz r3, 0x314(r30)
/* 80294E58 00291D98  EC 00 10 28 */	fsubs f0, f0, f2
/* 80294E5C 00291D9C  EC 40 18 28 */	fsubs f2, f0, f3
/* 80294E60 00291DA0  48 03 C9 01 */	bl startModify__Q24Game13SnakeJointMgrFff
/* 80294E64 00291DA4  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80294E68 00291DA8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80294E6C 00291DAC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80294E70 00291DB0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80294E74 00291DB4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80294E78 00291DB8  7C 08 03 A6 */	mtlr r0
/* 80294E7C 00291DBC  38 21 00 30 */	addi r1, r1, 0x30
/* 80294E80 00291DC0  4E 80 00 20 */	blr 
.endfn startJointCallBack__Q34Game9SnakeCrow3ObjFv

.fn returnJointCallBack__Q34Game9SnakeCrow3ObjFv, global
/* 80294E84 00291DC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80294E88 00291DC8  7C 08 02 A6 */	mflr r0
/* 80294E8C 00291DCC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80294E90 00291DD0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80294E94 00291DD4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80294E98 00291DD8  7C 7E 1B 78 */	mr r30, r3
/* 80294E9C 00291DDC  80 63 01 84 */	lwz r3, 0x184(r3)
/* 80294EA0 00291DE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80294EA4 00291DE4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80294EA8 00291DE8  7D 89 03 A6 */	mtctr r12
/* 80294EAC 00291DEC  4E 80 04 21 */	bctrl 
/* 80294EB0 00291DF0  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80294EB4 00291DF4  38 80 00 04 */	li r4, 4
/* 80294EB8 00291DF8  48 19 4A 9D */	bl getAnimKeyByType__Q28SysShape8AnimInfoFUl
/* 80294EBC 00291DFC  7C 7F 1B 78 */	mr r31, r3
/* 80294EC0 00291E00  7F C3 F3 78 */	mr r3, r30
/* 80294EC4 00291E04  4B E7 03 A9 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 80294EC8 00291E08  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 80294ECC 00291E0C  3C 00 43 30 */	lis r0, 0x4330
/* 80294ED0 00291E10  90 01 00 08 */	stw r0, 8(r1)
/* 80294ED4 00291E14  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80294ED8 00291E18  C8 42 D7 70 */	lfd f2, lbl_8051BAD0@sda21(r2)
/* 80294EDC 00291E1C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80294EE0 00291E20  80 7E 03 14 */	lwz r3, 0x314(r30)
/* 80294EE4 00291E24  C8 01 00 08 */	lfd f0, 8(r1)
/* 80294EE8 00291E28  EC 00 10 28 */	fsubs f0, f0, f2
/* 80294EEC 00291E2C  EC 20 08 28 */	fsubs f1, f0, f1
/* 80294EF0 00291E30  48 03 C8 91 */	bl returnModify__Q24Game13SnakeJointMgrFf
/* 80294EF4 00291E34  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80294EF8 00291E38  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80294EFC 00291E3C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80294F00 00291E40  7C 08 03 A6 */	mtlr r0
/* 80294F04 00291E44  38 21 00 20 */	addi r1, r1, 0x20
/* 80294F08 00291E48  4E 80 00 20 */	blr 
.endfn returnJointCallBack__Q34Game9SnakeCrow3ObjFv

.fn finishJointCallBack__Q34Game9SnakeCrow3ObjFv, global
/* 80294F0C 00291E4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80294F10 00291E50  7C 08 02 A6 */	mflr r0
/* 80294F14 00291E54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80294F18 00291E58  80 63 03 14 */	lwz r3, 0x314(r3)
/* 80294F1C 00291E5C  48 03 C8 81 */	bl finishModify__Q24Game13SnakeJointMgrFv
/* 80294F20 00291E60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80294F24 00291E64  7C 08 03 A6 */	mtlr r0
/* 80294F28 00291E68  38 21 00 10 */	addi r1, r1, 0x10
/* 80294F2C 00291E6C  4E 80 00 20 */	blr 
.endfn finishJointCallBack__Q34Game9SnakeCrow3ObjFv

.fn setupCollision__Q34Game9SnakeCrow3ObjFv, global
/* 80294F30 00291E70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80294F34 00291E74  7C 08 02 A6 */	mflr r0
/* 80294F38 00291E78  3C 80 62 6F */	lis r4, 0x626F6431@ha
/* 80294F3C 00291E7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80294F40 00291E80  38 84 64 31 */	addi r4, r4, 0x626F6431@l
/* 80294F44 00291E84  80 63 01 14 */	lwz r3, 0x114(r3)
/* 80294F48 00291E88  4B EA 0E FD */	bl getCollPart__8CollTreeFUl
/* 80294F4C 00291E8C  28 03 00 00 */	cmplwi r3, 0
/* 80294F50 00291E90  41 82 00 08 */	beq .L_80294F58
/* 80294F54 00291E94  4B EA 24 49 */	bl makeTubeTree__8CollPartFv
.L_80294F58:
/* 80294F58 00291E98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80294F5C 00291E9C  7C 08 03 A6 */	mtlr r0
/* 80294F60 00291EA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80294F64 00291EA4  4E 80 00 20 */	blr 
.endfn setupCollision__Q34Game9SnakeCrow3ObjFv

.fn lifeIncrement__Q34Game9SnakeCrow3ObjFv, global
/* 80294F68 00291EA8  C0 22 D7 30 */	lfs f1, lbl_8051BA90@sda21(r2)
/* 80294F6C 00291EAC  C0 02 D7 48 */	lfs f0, lbl_8051BAA8@sda21(r2)
/* 80294F70 00291EB0  D0 23 02 08 */	stfs f1, 0x208(r3)
/* 80294F74 00291EB4  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80294F78 00291EB8  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80294F7C 00291EBC  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 80294F80 00291EC0  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 80294F84 00291EC4  EC 01 00 2A */	fadds f0, f1, f0
/* 80294F88 00291EC8  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 80294F8C 00291ECC  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80294F90 00291ED0  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 80294F94 00291ED4  C0 04 01 04 */	lfs f0, 0x104(r4)
/* 80294F98 00291ED8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80294F9C 00291EDC  4C 81 00 20 */	blelr 
/* 80294FA0 00291EE0  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 80294FA4 00291EE4  4E 80 00 20 */	blr 
.endfn lifeIncrement__Q34Game9SnakeCrow3ObjFv

.fn createShadowSystem__Q34Game9SnakeCrow3ObjFv, global
/* 80294FA8 00291EE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80294FAC 00291EEC  7C 08 02 A6 */	mflr r0
/* 80294FB0 00291EF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80294FB4 00291EF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80294FB8 00291EF8  7C 7F 1B 78 */	mr r31, r3
/* 80294FBC 00291EFC  38 60 00 68 */	li r3, 0x68
/* 80294FC0 00291F00  4B D8 EE E5 */	bl __nw__FUl
/* 80294FC4 00291F04  7C 60 1B 79 */	or. r0, r3, r3
/* 80294FC8 00291F08  41 82 00 10 */	beq .L_80294FD8
/* 80294FCC 00291F0C  7F E4 FB 78 */	mr r4, r31
/* 80294FD0 00291F10  48 06 34 19 */	bl __ct__Q34Game9SnakeCrow18SnakeCrowShadowMgrFPQ34Game9SnakeCrow3Obj
/* 80294FD4 00291F14  7C 60 1B 78 */	mr r0, r3
.L_80294FD8:
/* 80294FD8 00291F18  90 1F 03 18 */	stw r0, 0x318(r31)
/* 80294FDC 00291F1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80294FE0 00291F20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80294FE4 00291F24  7C 08 03 A6 */	mtlr r0
/* 80294FE8 00291F28  38 21 00 10 */	addi r1, r1, 0x10
/* 80294FEC 00291F2C  4E 80 00 20 */	blr 
.endfn createShadowSystem__Q34Game9SnakeCrow3ObjFv

.fn setupShadowSystem__Q34Game9SnakeCrow3ObjFv, global
/* 80294FF0 00291F30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80294FF4 00291F34  7C 08 02 A6 */	mflr r0
/* 80294FF8 00291F38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80294FFC 00291F3C  80 63 03 18 */	lwz r3, 0x318(r3)
/* 80295000 00291F40  48 06 34 D5 */	bl init__Q34Game9SnakeCrow18SnakeCrowShadowMgrFv
/* 80295004 00291F44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80295008 00291F48  7C 08 03 A6 */	mtlr r0
/* 8029500C 00291F4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80295010 00291F50  4E 80 00 20 */	blr 
.endfn setupShadowSystem__Q34Game9SnakeCrow3ObjFv

.fn doAnimationShadowSystem__Q34Game9SnakeCrow3ObjFv, global
/* 80295014 00291F54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295018 00291F58  7C 08 02 A6 */	mflr r0
/* 8029501C 00291F5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80295020 00291F60  80 63 03 18 */	lwz r3, 0x318(r3)
/* 80295024 00291F64  48 06 36 4D */	bl update__Q34Game9SnakeCrow18SnakeCrowShadowMgrFv
/* 80295028 00291F68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029502C 00291F6C  7C 08 03 A6 */	mtlr r0
/* 80295030 00291F70  38 21 00 10 */	addi r1, r1, 0x10
/* 80295034 00291F74  4E 80 00 20 */	blr 
.endfn doAnimationShadowSystem__Q34Game9SnakeCrow3ObjFv

.fn startJointShadow__Q34Game9SnakeCrow3ObjFv, global
/* 80295038 00291F78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029503C 00291F7C  7C 08 02 A6 */	mflr r0
/* 80295040 00291F80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80295044 00291F84  80 63 03 18 */	lwz r3, 0x318(r3)
/* 80295048 00291F88  48 06 35 4D */	bl startJointShadow__Q34Game9SnakeCrow18SnakeCrowShadowMgrFv
/* 8029504C 00291F8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80295050 00291F90  7C 08 03 A6 */	mtlr r0
/* 80295054 00291F94  38 21 00 10 */	addi r1, r1, 0x10
/* 80295058 00291F98  4E 80 00 20 */	blr 
.endfn startJointShadow__Q34Game9SnakeCrow3ObjFv

.fn finishJointShadow__Q34Game9SnakeCrow3ObjFv, global
/* 8029505C 00291F9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295060 00291FA0  7C 08 02 A6 */	mflr r0
/* 80295064 00291FA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80295068 00291FA8  80 63 03 18 */	lwz r3, 0x318(r3)
/* 8029506C 00291FAC  48 06 35 A1 */	bl finishJointShadow__Q34Game9SnakeCrow18SnakeCrowShadowMgrFv
/* 80295070 00291FB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80295074 00291FB4  7C 08 03 A6 */	mtlr r0
/* 80295078 00291FB8  38 21 00 10 */	addi r1, r1, 0x10
/* 8029507C 00291FBC  4E 80 00 20 */	blr 
.endfn finishJointShadow__Q34Game9SnakeCrow3ObjFv

.fn deleteJointShadow__Q34Game9SnakeCrow3ObjFv, global
/* 80295080 00291FC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295084 00291FC4  7C 08 02 A6 */	mflr r0
/* 80295088 00291FC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029508C 00291FCC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80295090 00291FD0  7C 7F 1B 78 */	mr r31, r3
/* 80295094 00291FD4  7F E4 FB 78 */	mr r4, r31
/* 80295098 00291FD8  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8029509C 00291FDC  4B FA CC 99 */	bl addNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802950A0 00291FE0  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802950A4 00291FE4  7F E4 FB 78 */	mr r4, r31
/* 802950A8 00291FE8  4B FA CE 5D */	bl delJointShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802950AC 00291FEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802950B0 00291FF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802950B4 00291FF4  7C 08 03 A6 */	mtlr r0
/* 802950B8 00291FF8  38 21 00 10 */	addi r1, r1, 0x10
/* 802950BC 00291FFC  4E 80 00 20 */	blr 
.endfn deleteJointShadow__Q34Game9SnakeCrow3ObjFv

.fn startBossAttackBGM__Q34Game9SnakeCrow3ObjFv, global
/* 802950C0 00292000  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802950C4 00292004  7C 08 02 A6 */	mflr r0
/* 802950C8 00292008  90 01 00 14 */	stw r0, 0x14(r1)
/* 802950CC 0029200C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802950D0 00292010  93 C1 00 08 */	stw r30, 8(r1)
/* 802950D4 00292014  88 03 02 C1 */	lbz r0, 0x2c1(r3)
/* 802950D8 00292018  28 00 00 00 */	cmplwi r0, 0
/* 802950DC 0029201C  41 82 00 10 */	beq .L_802950EC
/* 802950E0 00292020  38 00 00 00 */	li r0, 0
/* 802950E4 00292024  98 03 02 C1 */	stb r0, 0x2c1(r3)
/* 802950E8 00292028  48 00 00 A0 */	b .L_80295188
.L_802950EC:
/* 802950EC 0029202C  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802950F0 00292030  3B E0 00 00 */	li r31, 0
/* 802950F4 00292034  7F C3 F3 78 */	mr r3, r30
/* 802950F8 00292038  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802950FC 0029203C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80295100 00292040  7D 89 03 A6 */	mtctr r12
/* 80295104 00292044  4E 80 04 21 */	bctrl 
/* 80295108 00292048  2C 03 00 05 */	cmpwi r3, 5
/* 8029510C 0029204C  41 82 00 3C */	beq .L_80295148
/* 80295110 00292050  7F C3 F3 78 */	mr r3, r30
/* 80295114 00292054  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80295118 00292058  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029511C 0029205C  7D 89 03 A6 */	mtctr r12
/* 80295120 00292060  4E 80 04 21 */	bctrl 
/* 80295124 00292064  2C 03 00 06 */	cmpwi r3, 6
/* 80295128 00292068  41 82 00 20 */	beq .L_80295148
/* 8029512C 0029206C  7F C3 F3 78 */	mr r3, r30
/* 80295130 00292070  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80295134 00292074  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80295138 00292078  7D 89 03 A6 */	mtctr r12
/* 8029513C 0029207C  4E 80 04 21 */	bctrl 
/* 80295140 00292080  2C 03 00 07 */	cmpwi r3, 7
/* 80295144 00292084  40 82 00 08 */	bne .L_8029514C
.L_80295148:
/* 80295148 00292088  3B E0 00 01 */	li r31, 1
.L_8029514C:
/* 8029514C 0029208C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80295150 00292090  40 82 00 20 */	bne .L_80295170
/* 80295154 00292094  3C 60 80 49 */	lis r3, lbl_80488894@ha
/* 80295158 00292098  3C A0 80 49 */	lis r5, lbl_804888AC@ha
/* 8029515C 0029209C  38 63 88 94 */	addi r3, r3, lbl_80488894@l
/* 80295160 002920A0  38 80 04 54 */	li r4, 0x454
/* 80295164 002920A4  38 A5 88 AC */	addi r5, r5, lbl_804888AC@l
/* 80295168 002920A8  4C C6 31 82 */	crclr 6
/* 8029516C 002920AC  4B D9 54 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80295170:
/* 80295170 002920B0  7F C3 F3 78 */	mr r3, r30
/* 80295174 002920B4  38 80 00 03 */	li r4, 3
/* 80295178 002920B8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8029517C 002920BC  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 80295180 002920C0  7D 89 03 A6 */	mtctr r12
/* 80295184 002920C4  4E 80 04 21 */	bctrl 
.L_80295188:
/* 80295188 002920C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029518C 002920CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80295190 002920D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80295194 002920D4  7C 08 03 A6 */	mtlr r0
/* 80295198 002920D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8029519C 002920DC  4E 80 00 20 */	blr 
.endfn startBossAttackBGM__Q34Game9SnakeCrow3ObjFv

.fn startBossFlickBGM__Q34Game9SnakeCrow3ObjFv, global
/* 802951A0 002920E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802951A4 002920E4  7C 08 02 A6 */	mflr r0
/* 802951A8 002920E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802951AC 002920EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802951B0 002920F0  3B E0 00 00 */	li r31, 0
/* 802951B4 002920F4  93 C1 00 08 */	stw r30, 8(r1)
/* 802951B8 002920F8  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802951BC 002920FC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802951C0 00292100  7F C3 F3 78 */	mr r3, r30
/* 802951C4 00292104  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802951C8 00292108  7D 89 03 A6 */	mtctr r12
/* 802951CC 0029210C  4E 80 04 21 */	bctrl 
/* 802951D0 00292110  2C 03 00 05 */	cmpwi r3, 5
/* 802951D4 00292114  41 82 00 3C */	beq .L_80295210
/* 802951D8 00292118  7F C3 F3 78 */	mr r3, r30
/* 802951DC 0029211C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802951E0 00292120  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802951E4 00292124  7D 89 03 A6 */	mtctr r12
/* 802951E8 00292128  4E 80 04 21 */	bctrl 
/* 802951EC 0029212C  2C 03 00 06 */	cmpwi r3, 6
/* 802951F0 00292130  41 82 00 20 */	beq .L_80295210
/* 802951F4 00292134  7F C3 F3 78 */	mr r3, r30
/* 802951F8 00292138  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802951FC 0029213C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80295200 00292140  7D 89 03 A6 */	mtctr r12
/* 80295204 00292144  4E 80 04 21 */	bctrl 
/* 80295208 00292148  2C 03 00 07 */	cmpwi r3, 7
/* 8029520C 0029214C  40 82 00 08 */	bne .L_80295214
.L_80295210:
/* 80295210 00292150  3B E0 00 01 */	li r31, 1
.L_80295214:
/* 80295214 00292154  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80295218 00292158  40 82 00 20 */	bne .L_80295238
/* 8029521C 0029215C  3C 60 80 49 */	lis r3, lbl_80488894@ha
/* 80295220 00292160  3C A0 80 49 */	lis r5, lbl_804888AC@ha
/* 80295224 00292164  38 63 88 94 */	addi r3, r3, lbl_80488894@l
/* 80295228 00292168  38 80 04 54 */	li r4, 0x454
/* 8029522C 0029216C  38 A5 88 AC */	addi r5, r5, lbl_804888AC@l
/* 80295230 00292170  4C C6 31 82 */	crclr 6
/* 80295234 00292174  4B D9 54 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80295238:
/* 80295238 00292178  7F C3 F3 78 */	mr r3, r30
/* 8029523C 0029217C  38 80 00 04 */	li r4, 4
/* 80295240 00292180  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80295244 00292184  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 80295248 00292188  7D 89 03 A6 */	mtctr r12
/* 8029524C 0029218C  4E 80 04 21 */	bctrl 
/* 80295250 00292190  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80295254 00292194  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80295258 00292198  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029525C 0029219C  7C 08 03 A6 */	mtlr r0
/* 80295260 002921A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80295264 002921A4  4E 80 00 20 */	blr 
.endfn startBossFlickBGM__Q34Game9SnakeCrow3ObjFv

.fn updateBossBGM__Q34Game9SnakeCrow3ObjFv, global
/* 80295268 002921A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8029526C 002921AC  7C 08 02 A6 */	mflr r0
/* 80295270 002921B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80295274 002921B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80295278 002921B8  3B E0 00 00 */	li r31, 0
/* 8029527C 002921BC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80295280 002921C0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80295284 002921C4  7C 7D 1B 78 */	mr r29, r3
/* 80295288 002921C8  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 8029528C 002921CC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80295290 002921D0  7F C3 F3 78 */	mr r3, r30
/* 80295294 002921D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80295298 002921D8  7D 89 03 A6 */	mtctr r12
/* 8029529C 002921DC  4E 80 04 21 */	bctrl 
/* 802952A0 002921E0  2C 03 00 05 */	cmpwi r3, 5
/* 802952A4 002921E4  41 82 00 3C */	beq .L_802952E0
/* 802952A8 002921E8  7F C3 F3 78 */	mr r3, r30
/* 802952AC 002921EC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802952B0 002921F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802952B4 002921F4  7D 89 03 A6 */	mtctr r12
/* 802952B8 002921F8  4E 80 04 21 */	bctrl 
/* 802952BC 002921FC  2C 03 00 06 */	cmpwi r3, 6
/* 802952C0 00292200  41 82 00 20 */	beq .L_802952E0
/* 802952C4 00292204  7F C3 F3 78 */	mr r3, r30
/* 802952C8 00292208  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802952CC 0029220C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802952D0 00292210  7D 89 03 A6 */	mtctr r12
/* 802952D4 00292214  4E 80 04 21 */	bctrl 
/* 802952D8 00292218  2C 03 00 07 */	cmpwi r3, 7
/* 802952DC 0029221C  40 82 00 08 */	bne .L_802952E4
.L_802952E0:
/* 802952E0 00292220  3B E0 00 01 */	li r31, 1
.L_802952E4:
/* 802952E4 00292224  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802952E8 00292228  40 82 00 20 */	bne .L_80295308
/* 802952EC 0029222C  3C 60 80 49 */	lis r3, lbl_80488894@ha
/* 802952F0 00292230  3C A0 80 49 */	lis r5, lbl_804888AC@ha
/* 802952F4 00292234  38 63 88 94 */	addi r3, r3, lbl_80488894@l
/* 802952F8 00292238  38 80 04 54 */	li r4, 0x454
/* 802952FC 0029223C  38 A5 88 AC */	addi r5, r5, lbl_804888AC@l
/* 80295300 00292240  4C C6 31 82 */	crclr 6
/* 80295304 00292244  4B D9 53 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80295308:
/* 80295308 00292248  80 1D 01 F4 */	lwz r0, 0x1f4(r29)
/* 8029530C 0029224C  2C 00 00 00 */	cmpwi r0, 0
/* 80295310 00292250  41 82 00 20 */	beq .L_80295330
/* 80295314 00292254  7F C3 F3 78 */	mr r3, r30
/* 80295318 00292258  38 80 00 01 */	li r4, 1
/* 8029531C 0029225C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80295320 00292260  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 80295324 00292264  7D 89 03 A6 */	mtctr r12
/* 80295328 00292268  4E 80 04 21 */	bctrl 
/* 8029532C 0029226C  48 00 00 1C */	b .L_80295348
.L_80295330:
/* 80295330 00292270  7F C3 F3 78 */	mr r3, r30
/* 80295334 00292274  38 80 00 00 */	li r4, 0
/* 80295338 00292278  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8029533C 0029227C  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 80295340 00292280  7D 89 03 A6 */	mtctr r12
/* 80295344 00292284  4E 80 04 21 */	bctrl 
.L_80295348:
/* 80295348 00292288  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8029534C 0029228C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80295350 00292290  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80295354 00292294  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80295358 00292298  7C 08 03 A6 */	mtlr r0
/* 8029535C 0029229C  38 21 00 20 */	addi r1, r1, 0x20
/* 80295360 002922A0  4E 80 00 20 */	blr 
.endfn updateBossBGM__Q34Game9SnakeCrow3ObjFv

.fn resetBossAppearBGM__Q34Game9SnakeCrow3ObjFv, global
/* 80295364 002922A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295368 002922A8  7C 08 02 A6 */	mflr r0
/* 8029536C 002922AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80295370 002922B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80295374 002922B4  93 C1 00 08 */	stw r30, 8(r1)
/* 80295378 002922B8  88 03 02 C2 */	lbz r0, 0x2c2(r3)
/* 8029537C 002922BC  28 00 00 00 */	cmplwi r0, 0
/* 80295380 002922C0  40 82 00 9C */	bne .L_8029541C
/* 80295384 002922C4  38 00 00 01 */	li r0, 1
/* 80295388 002922C8  3B E0 00 00 */	li r31, 0
/* 8029538C 002922CC  98 03 02 C2 */	stb r0, 0x2c2(r3)
/* 80295390 002922D0  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 80295394 002922D4  7F C3 F3 78 */	mr r3, r30
/* 80295398 002922D8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8029539C 002922DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802953A0 002922E0  7D 89 03 A6 */	mtctr r12
/* 802953A4 002922E4  4E 80 04 21 */	bctrl 
/* 802953A8 002922E8  2C 03 00 05 */	cmpwi r3, 5
/* 802953AC 002922EC  41 82 00 3C */	beq .L_802953E8
/* 802953B0 002922F0  7F C3 F3 78 */	mr r3, r30
/* 802953B4 002922F4  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802953B8 002922F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802953BC 002922FC  7D 89 03 A6 */	mtctr r12
/* 802953C0 00292300  4E 80 04 21 */	bctrl 
/* 802953C4 00292304  2C 03 00 06 */	cmpwi r3, 6
/* 802953C8 00292308  41 82 00 20 */	beq .L_802953E8
/* 802953CC 0029230C  7F C3 F3 78 */	mr r3, r30
/* 802953D0 00292310  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802953D4 00292314  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802953D8 00292318  7D 89 03 A6 */	mtctr r12
/* 802953DC 0029231C  4E 80 04 21 */	bctrl 
/* 802953E0 00292320  2C 03 00 07 */	cmpwi r3, 7
/* 802953E4 00292324  40 82 00 08 */	bne .L_802953EC
.L_802953E8:
/* 802953E8 00292328  3B E0 00 01 */	li r31, 1
.L_802953EC:
/* 802953EC 0029232C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802953F0 00292330  40 82 00 20 */	bne .L_80295410
/* 802953F4 00292334  3C 60 80 49 */	lis r3, lbl_80488894@ha
/* 802953F8 00292338  3C A0 80 49 */	lis r5, lbl_804888AC@ha
/* 802953FC 0029233C  38 63 88 94 */	addi r3, r3, lbl_80488894@l
/* 80295400 00292340  38 80 04 54 */	li r4, 0x454
/* 80295404 00292344  38 A5 88 AC */	addi r5, r5, lbl_804888AC@l
/* 80295408 00292348  4C C6 31 82 */	crclr 6
/* 8029540C 0029234C  4B D9 52 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80295410:
/* 80295410 00292350  7F C3 F3 78 */	mr r3, r30
/* 80295414 00292354  38 80 00 00 */	li r4, 0
/* 80295418 00292358  48 1C A5 D9 */	bl setAppearFlag__Q23PSM9EnemyBossFb
.L_8029541C:
/* 8029541C 0029235C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80295420 00292360  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80295424 00292364  83 C1 00 08 */	lwz r30, 8(r1)
/* 80295428 00292368  7C 08 03 A6 */	mtlr r0
/* 8029542C 0029236C  38 21 00 10 */	addi r1, r1, 0x10
/* 80295430 00292370  4E 80 00 20 */	blr 
.endfn resetBossAppearBGM__Q34Game9SnakeCrow3ObjFv

.fn setBossAppearBGM__Q34Game9SnakeCrow3ObjFv, global
/* 80295434 00292374  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295438 00292378  7C 08 02 A6 */	mflr r0
/* 8029543C 0029237C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80295440 00292380  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80295444 00292384  93 C1 00 08 */	stw r30, 8(r1)
/* 80295448 00292388  88 03 02 C2 */	lbz r0, 0x2c2(r3)
/* 8029544C 0029238C  28 00 00 00 */	cmplwi r0, 0
/* 80295450 00292390  41 82 00 98 */	beq .L_802954E8
/* 80295454 00292394  3B E0 00 00 */	li r31, 0
/* 80295458 00292398  9B E3 02 C2 */	stb r31, 0x2c2(r3)
/* 8029545C 0029239C  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 80295460 002923A0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80295464 002923A4  7F C3 F3 78 */	mr r3, r30
/* 80295468 002923A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029546C 002923AC  7D 89 03 A6 */	mtctr r12
/* 80295470 002923B0  4E 80 04 21 */	bctrl 
/* 80295474 002923B4  2C 03 00 05 */	cmpwi r3, 5
/* 80295478 002923B8  41 82 00 3C */	beq .L_802954B4
/* 8029547C 002923BC  7F C3 F3 78 */	mr r3, r30
/* 80295480 002923C0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80295484 002923C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80295488 002923C8  7D 89 03 A6 */	mtctr r12
/* 8029548C 002923CC  4E 80 04 21 */	bctrl 
/* 80295490 002923D0  2C 03 00 06 */	cmpwi r3, 6
/* 80295494 002923D4  41 82 00 20 */	beq .L_802954B4
/* 80295498 002923D8  7F C3 F3 78 */	mr r3, r30
/* 8029549C 002923DC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802954A0 002923E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802954A4 002923E4  7D 89 03 A6 */	mtctr r12
/* 802954A8 002923E8  4E 80 04 21 */	bctrl 
/* 802954AC 002923EC  2C 03 00 07 */	cmpwi r3, 7
/* 802954B0 002923F0  40 82 00 08 */	bne .L_802954B8
.L_802954B4:
/* 802954B4 002923F4  3B E0 00 01 */	li r31, 1
.L_802954B8:
/* 802954B8 002923F8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802954BC 002923FC  40 82 00 20 */	bne .L_802954DC
/* 802954C0 00292400  3C 60 80 49 */	lis r3, lbl_80488894@ha
/* 802954C4 00292404  3C A0 80 49 */	lis r5, lbl_804888AC@ha
/* 802954C8 00292408  38 63 88 94 */	addi r3, r3, lbl_80488894@l
/* 802954CC 0029240C  38 80 04 54 */	li r4, 0x454
/* 802954D0 00292410  38 A5 88 AC */	addi r5, r5, lbl_804888AC@l
/* 802954D4 00292414  4C C6 31 82 */	crclr 6
/* 802954D8 00292418  4B D9 51 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802954DC:
/* 802954DC 0029241C  7F C3 F3 78 */	mr r3, r30
/* 802954E0 00292420  38 80 00 01 */	li r4, 1
/* 802954E4 00292424  48 1C A5 0D */	bl setAppearFlag__Q23PSM9EnemyBossFb
.L_802954E8:
/* 802954E8 00292428  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802954EC 0029242C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802954F0 00292430  83 C1 00 08 */	lwz r30, 8(r1)
/* 802954F4 00292434  7C 08 03 A6 */	mtlr r0
/* 802954F8 00292438  38 21 00 10 */	addi r1, r1, 0x10
/* 802954FC 0029243C  4E 80 00 20 */	blr 
.endfn setBossAppearBGM__Q34Game9SnakeCrow3ObjFv

.fn createEffect__Q34Game9SnakeCrow3ObjFv, global
/* 80295500 00292440  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295504 00292444  7C 08 02 A6 */	mflr r0
/* 80295508 00292448  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029550C 0029244C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80295510 00292450  7C 7F 1B 78 */	mr r31, r3
/* 80295514 00292454  38 60 00 10 */	li r3, 0x10
/* 80295518 00292458  93 C1 00 08 */	stw r30, 8(r1)
/* 8029551C 0029245C  4B D8 E9 89 */	bl __nw__FUl
/* 80295520 00292460  28 03 00 00 */	cmplwi r3, 0
/* 80295524 00292464  41 82 00 6C */	beq .L_80295590
/* 80295528 00292468  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8029552C 0029246C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 80295530 00292470  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80295534 00292474  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80295538 00292478  90 03 00 00 */	stw r0, 0(r3)
/* 8029553C 0029247C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 80295540 00292480  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80295544 00292484  3C 80 80 4B */	lis r4, __vt__Q23efx8TForever@ha
/* 80295548 00292488  90 03 00 04 */	stw r0, 4(r3)
/* 8029554C 0029248C  38 C4 2C 24 */	addi r6, r4, __vt__Q23efx8TForever@l
/* 80295550 00292490  3C 80 80 4D */	lis r4, __vt__Q23efx8THebiRot@ha
/* 80295554 00292494  38 05 00 14 */	addi r0, r5, 0x14
/* 80295558 00292498  90 A3 00 00 */	stw r5, 0(r3)
/* 8029555C 0029249C  38 84 B6 6C */	addi r4, r4, __vt__Q23efx8THebiRot@l
/* 80295560 002924A0  39 00 00 00 */	li r8, 0
/* 80295564 002924A4  38 E0 00 A9 */	li r7, 0xa9
/* 80295568 002924A8  90 03 00 04 */	stw r0, 4(r3)
/* 8029556C 002924AC  38 A6 00 14 */	addi r5, r6, 0x14
/* 80295570 002924B0  38 04 00 14 */	addi r0, r4, 0x14
/* 80295574 002924B4  91 03 00 08 */	stw r8, 8(r3)
/* 80295578 002924B8  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 8029557C 002924BC  99 03 00 0E */	stb r8, 0xe(r3)
/* 80295580 002924C0  90 C3 00 00 */	stw r6, 0(r3)
/* 80295584 002924C4  90 A3 00 04 */	stw r5, 4(r3)
/* 80295588 002924C8  90 83 00 00 */	stw r4, 0(r3)
/* 8029558C 002924CC  90 03 00 04 */	stw r0, 4(r3)
.L_80295590:
/* 80295590 002924D0  90 7F 03 1C */	stw r3, 0x31c(r31)
/* 80295594 002924D4  38 60 00 10 */	li r3, 0x10
/* 80295598 002924D8  4B D8 E9 0D */	bl __nw__FUl
/* 8029559C 002924DC  28 03 00 00 */	cmplwi r3, 0
/* 802955A0 002924E0  41 82 00 6C */	beq .L_8029560C
/* 802955A4 002924E4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802955A8 002924E8  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802955AC 002924EC  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802955B0 002924F0  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802955B4 002924F4  90 03 00 00 */	stw r0, 0(r3)
/* 802955B8 002924F8  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802955BC 002924FC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802955C0 00292500  3C 80 80 4B */	lis r4, __vt__Q23efx8TForever@ha
/* 802955C4 00292504  90 03 00 04 */	stw r0, 4(r3)
/* 802955C8 00292508  38 C4 2C 24 */	addi r6, r4, __vt__Q23efx8TForever@l
/* 802955CC 0029250C  3C 80 80 4D */	lis r4, __vt__Q23efx9THebiWait@ha
/* 802955D0 00292510  38 05 00 14 */	addi r0, r5, 0x14
/* 802955D4 00292514  90 A3 00 00 */	stw r5, 0(r3)
/* 802955D8 00292518  38 84 B6 20 */	addi r4, r4, __vt__Q23efx9THebiWait@l
/* 802955DC 0029251C  39 00 00 00 */	li r8, 0
/* 802955E0 00292520  38 E0 00 AA */	li r7, 0xaa
/* 802955E4 00292524  90 03 00 04 */	stw r0, 4(r3)
/* 802955E8 00292528  38 A6 00 14 */	addi r5, r6, 0x14
/* 802955EC 0029252C  38 04 00 14 */	addi r0, r4, 0x14
/* 802955F0 00292530  91 03 00 08 */	stw r8, 8(r3)
/* 802955F4 00292534  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802955F8 00292538  99 03 00 0E */	stb r8, 0xe(r3)
/* 802955FC 0029253C  90 C3 00 00 */	stw r6, 0(r3)
/* 80295600 00292540  90 A3 00 04 */	stw r5, 4(r3)
/* 80295604 00292544  90 83 00 00 */	stw r4, 0(r3)
/* 80295608 00292548  90 03 00 04 */	stw r0, 4(r3)
.L_8029560C:
/* 8029560C 0029254C  90 7F 03 20 */	stw r3, 0x320(r31)
/* 80295610 00292550  38 60 00 54 */	li r3, 0x54
/* 80295614 00292554  4B D8 E8 91 */	bl __nw__FUl
/* 80295618 00292558  7C 7E 1B 79 */	or. r30, r3, r3
/* 8029561C 0029255C  41 82 00 28 */	beq .L_80295644
/* 80295620 00292560  38 80 00 00 */	li r4, 0
/* 80295624 00292564  38 A0 00 A4 */	li r5, 0xa4
/* 80295628 00292568  38 C0 00 A5 */	li r6, 0xa5
/* 8029562C 0029256C  38 E0 00 A6 */	li r7, 0xa6
/* 80295630 00292570  39 00 00 A7 */	li r8, 0xa7
/* 80295634 00292574  48 11 B2 D9 */	bl __ct__Q23efx11TChaseMtxT4FPA4_fUsUsUsUs
/* 80295638 00292578  3C 60 80 4D */	lis r3, __vt__Q23efx9THebiDead@ha
/* 8029563C 0029257C  38 03 B6 04 */	addi r0, r3, __vt__Q23efx9THebiDead@l
/* 80295640 00292580  90 1E 00 00 */	stw r0, 0(r30)
.L_80295644:
/* 80295644 00292584  93 DF 03 24 */	stw r30, 0x324(r31)
/* 80295648 00292588  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029564C 0029258C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80295650 00292590  83 C1 00 08 */	lwz r30, 8(r1)
/* 80295654 00292594  7C 08 03 A6 */	mtlr r0
/* 80295658 00292598  38 21 00 10 */	addi r1, r1, 0x10
/* 8029565C 0029259C  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game9SnakeCrow3ObjFv

.fn setupEffect__Q34Game9SnakeCrow3ObjFv, global
/* 80295660 002925A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295664 002925A4  7C 08 02 A6 */	mflr r0
/* 80295668 002925A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029566C 002925AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80295670 002925B0  7C 7F 1B 78 */	mr r31, r3
/* 80295674 002925B4  3C 60 80 49 */	lis r3, lbl_804888B8@ha
/* 80295678 002925B8  38 83 88 B8 */	addi r4, r3, lbl_804888B8@l
/* 8029567C 002925BC  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80295680 002925C0  48 1A 99 65 */	bl getJoint__Q28SysShape5ModelFPc
/* 80295684 002925C4  48 19 42 1D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80295688 002925C8  7C 60 1B 78 */	mr r0, r3
/* 8029568C 002925CC  80 7F 03 24 */	lwz r3, 0x324(r31)
/* 80295690 002925D0  7C 04 03 78 */	mr r4, r0
/* 80295694 002925D4  48 11 B3 25 */	bl setMtxptr__Q23efx11TChaseMtxT4FPA4_f
/* 80295698 002925D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029569C 002925DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802956A0 002925E0  7C 08 03 A6 */	mtlr r0
/* 802956A4 002925E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802956A8 002925E8  4E 80 00 20 */	blr 
.endfn setupEffect__Q34Game9SnakeCrow3ObjFv

.fn createAppearEffect__Q34Game9SnakeCrow3ObjFi, global
/* 802956AC 002925EC  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802956B0 002925F0  7C 08 02 A6 */	mflr r0
/* 802956B4 002925F4  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 802956B8 002925F8  2C 04 00 01 */	cmpwi r4, 1
/* 802956BC 002925FC  90 01 00 84 */	stw r0, 0x84(r1)
/* 802956C0 00292600  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 802956C4 00292604  90 01 00 08 */	stw r0, 8(r1)
/* 802956C8 00292608  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802956CC 0029260C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802956D0 00292610  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802956D4 00292614  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802956D8 00292618  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 802956DC 0029261C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802956E0 00292620  41 82 00 9C */	beq .L_8029577C
/* 802956E4 00292624  40 80 00 10 */	bge .L_802956F4
/* 802956E8 00292628  2C 04 00 00 */	cmpwi r4, 0
/* 802956EC 0029262C  40 80 00 14 */	bge .L_80295700
/* 802956F0 00292630  48 00 01 80 */	b .L_80295870
.L_802956F4:
/* 802956F4 00292634  2C 04 00 03 */	cmpwi r4, 3
/* 802956F8 00292638  40 80 01 78 */	bge .L_80295870
/* 802956FC 0029263C  48 00 00 FC */	b .L_802957F8
.L_80295700:
/* 80295700 00292640  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80295704 00292644  38 C0 00 00 */	li r6, 0
/* 80295708 00292648  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8029570C 0029264C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple4@ha
/* 80295710 00292650  90 01 00 58 */	stw r0, 0x58(r1)
/* 80295714 00292654  38 03 6A 3C */	addi r0, r3, __vt__Q23efx8TSimple4@l
/* 80295718 00292658  3C 80 80 4E */	lis r4, __vt__Q23efx14THebiAphd_base@ha
/* 8029571C 0029265C  3C 60 80 4D */	lis r3, __vt__Q23efx17THebiAphd_appear1@ha
/* 80295720 00292660  90 01 00 58 */	stw r0, 0x58(r1)
/* 80295724 00292664  38 04 6E 30 */	addi r0, r4, __vt__Q23efx14THebiAphd_base@l
/* 80295728 00292668  38 80 00 A0 */	li r4, 0xa0
/* 8029572C 0029266C  39 20 00 A1 */	li r9, 0xa1
/* 80295730 00292670  90 01 00 58 */	stw r0, 0x58(r1)
/* 80295734 00292674  38 03 B5 B8 */	addi r0, r3, __vt__Q23efx17THebiAphd_appear1@l
/* 80295738 00292678  39 00 00 A2 */	li r8, 0xa2
/* 8029573C 0029267C  38 E0 00 A3 */	li r7, 0xa3
/* 80295740 00292680  38 A0 00 28 */	li r5, 0x28
/* 80295744 00292684  B0 81 00 5C */	sth r4, 0x5c(r1)
/* 80295748 00292688  38 61 00 58 */	addi r3, r1, 0x58
/* 8029574C 0029268C  38 81 00 08 */	addi r4, r1, 8
/* 80295750 00292690  B1 21 00 5E */	sth r9, 0x5e(r1)
/* 80295754 00292694  B1 01 00 60 */	sth r8, 0x60(r1)
/* 80295758 00292698  B0 E1 00 62 */	sth r7, 0x62(r1)
/* 8029575C 0029269C  90 C1 00 64 */	stw r6, 0x64(r1)
/* 80295760 002926A0  90 C1 00 68 */	stw r6, 0x68(r1)
/* 80295764 002926A4  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 80295768 002926A8  90 C1 00 70 */	stw r6, 0x70(r1)
/* 8029576C 002926AC  90 A1 00 74 */	stw r5, 0x74(r1)
/* 80295770 002926B0  90 01 00 58 */	stw r0, 0x58(r1)
/* 80295774 002926B4  48 11 E3 35 */	bl create__Q23efx14THebiAphd_baseFPQ23efx3Arg
/* 80295778 002926B8  48 00 00 F8 */	b .L_80295870
.L_8029577C:
/* 8029577C 002926BC  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80295780 002926C0  38 C0 00 00 */	li r6, 0
/* 80295784 002926C4  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80295788 002926C8  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple4@ha
/* 8029578C 002926CC  90 01 00 38 */	stw r0, 0x38(r1)
/* 80295790 002926D0  38 03 6A 3C */	addi r0, r3, __vt__Q23efx8TSimple4@l
/* 80295794 002926D4  3C 80 80 4E */	lis r4, __vt__Q23efx14THebiAphd_base@ha
/* 80295798 002926D8  3C 60 80 4D */	lis r3, __vt__Q23efx23THebiAphd_appear2_first@ha
/* 8029579C 002926DC  90 01 00 38 */	stw r0, 0x38(r1)
/* 802957A0 002926E0  38 04 6E 30 */	addi r0, r4, __vt__Q23efx14THebiAphd_base@l
/* 802957A4 002926E4  38 80 00 A0 */	li r4, 0xa0
/* 802957A8 002926E8  39 20 00 A1 */	li r9, 0xa1
/* 802957AC 002926EC  90 01 00 38 */	stw r0, 0x38(r1)
/* 802957B0 002926F0  38 03 B5 A4 */	addi r0, r3, __vt__Q23efx23THebiAphd_appear2_first@l
/* 802957B4 002926F4  39 00 00 A2 */	li r8, 0xa2
/* 802957B8 002926F8  38 E0 00 A3 */	li r7, 0xa3
/* 802957BC 002926FC  38 A0 00 41 */	li r5, 0x41
/* 802957C0 00292700  B0 81 00 3C */	sth r4, 0x3c(r1)
/* 802957C4 00292704  38 61 00 38 */	addi r3, r1, 0x38
/* 802957C8 00292708  38 81 00 08 */	addi r4, r1, 8
/* 802957CC 0029270C  B1 21 00 3E */	sth r9, 0x3e(r1)
/* 802957D0 00292710  B1 01 00 40 */	sth r8, 0x40(r1)
/* 802957D4 00292714  B0 E1 00 42 */	sth r7, 0x42(r1)
/* 802957D8 00292718  90 C1 00 44 */	stw r6, 0x44(r1)
/* 802957DC 0029271C  90 C1 00 48 */	stw r6, 0x48(r1)
/* 802957E0 00292720  90 C1 00 4C */	stw r6, 0x4c(r1)
/* 802957E4 00292724  90 C1 00 50 */	stw r6, 0x50(r1)
/* 802957E8 00292728  90 A1 00 54 */	stw r5, 0x54(r1)
/* 802957EC 0029272C  90 01 00 38 */	stw r0, 0x38(r1)
/* 802957F0 00292730  48 11 E2 B9 */	bl create__Q23efx14THebiAphd_baseFPQ23efx3Arg
/* 802957F4 00292734  48 00 00 7C */	b .L_80295870
.L_802957F8:
/* 802957F8 00292738  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802957FC 0029273C  38 C0 00 00 */	li r6, 0
/* 80295800 00292740  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80295804 00292744  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple4@ha
/* 80295808 00292748  90 01 00 18 */	stw r0, 0x18(r1)
/* 8029580C 0029274C  38 03 6A 3C */	addi r0, r3, __vt__Q23efx8TSimple4@l
/* 80295810 00292750  3C 80 80 4E */	lis r4, __vt__Q23efx14THebiAphd_base@ha
/* 80295814 00292754  3C 60 80 4D */	lis r3, __vt__Q23efx22THebiAphd_appear2_late@ha
/* 80295818 00292758  90 01 00 18 */	stw r0, 0x18(r1)
/* 8029581C 0029275C  38 04 6E 30 */	addi r0, r4, __vt__Q23efx14THebiAphd_base@l
/* 80295820 00292760  38 80 00 A0 */	li r4, 0xa0
/* 80295824 00292764  39 20 00 A1 */	li r9, 0xa1
/* 80295828 00292768  90 01 00 18 */	stw r0, 0x18(r1)
/* 8029582C 0029276C  38 03 B5 90 */	addi r0, r3, __vt__Q23efx22THebiAphd_appear2_late@l
/* 80295830 00292770  39 00 00 A2 */	li r8, 0xa2
/* 80295834 00292774  38 E0 00 A3 */	li r7, 0xa3
/* 80295838 00292778  38 A0 00 23 */	li r5, 0x23
/* 8029583C 0029277C  B0 81 00 1C */	sth r4, 0x1c(r1)
/* 80295840 00292780  38 61 00 18 */	addi r3, r1, 0x18
/* 80295844 00292784  38 81 00 08 */	addi r4, r1, 8
/* 80295848 00292788  B1 21 00 1E */	sth r9, 0x1e(r1)
/* 8029584C 0029278C  B1 01 00 20 */	sth r8, 0x20(r1)
/* 80295850 00292790  B0 E1 00 22 */	sth r7, 0x22(r1)
/* 80295854 00292794  90 C1 00 24 */	stw r6, 0x24(r1)
/* 80295858 00292798  90 C1 00 28 */	stw r6, 0x28(r1)
/* 8029585C 0029279C  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 80295860 002927A0  90 C1 00 30 */	stw r6, 0x30(r1)
/* 80295864 002927A4  90 A1 00 34 */	stw r5, 0x34(r1)
/* 80295868 002927A8  90 01 00 18 */	stw r0, 0x18(r1)
/* 8029586C 002927AC  48 11 E2 3D */	bl create__Q23efx14THebiAphd_baseFPQ23efx3Arg
.L_80295870:
/* 80295870 002927B0  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80295874 002927B4  7C 08 03 A6 */	mtlr r0
/* 80295878 002927B8  38 21 00 80 */	addi r1, r1, 0x80
/* 8029587C 002927BC  4E 80 00 20 */	blr 
.endfn createAppearEffect__Q34Game9SnakeCrow3ObjFi

.fn startRotateEffect__Q34Game9SnakeCrow3ObjFv, global
/* 80295880 002927C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80295884 002927C4  7C 08 02 A6 */	mflr r0
/* 80295888 002927C8  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8029588C 002927CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80295890 002927D0  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 80295894 002927D4  38 81 00 08 */	addi r4, r1, 8
/* 80295898 002927D8  90 01 00 08 */	stw r0, 8(r1)
/* 8029589C 002927DC  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802958A0 002927E0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802958A4 002927E4  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802958A8 002927E8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802958AC 002927EC  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 802958B0 002927F0  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802958B4 002927F4  80 63 03 1C */	lwz r3, 0x31c(r3)
/* 802958B8 002927F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802958BC 002927FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802958C0 00292800  7D 89 03 A6 */	mtctr r12
/* 802958C4 00292804  4E 80 04 21 */	bctrl 
/* 802958C8 00292808  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802958CC 0029280C  7C 08 03 A6 */	mtlr r0
/* 802958D0 00292810  38 21 00 20 */	addi r1, r1, 0x20
/* 802958D4 00292814  4E 80 00 20 */	blr 
.endfn startRotateEffect__Q34Game9SnakeCrow3ObjFv

.fn finishRotateEffect__Q34Game9SnakeCrow3ObjFv, global
/* 802958D8 00292818  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802958DC 0029281C  7C 08 02 A6 */	mflr r0
/* 802958E0 00292820  90 01 00 14 */	stw r0, 0x14(r1)
/* 802958E4 00292824  80 63 03 1C */	lwz r3, 0x31c(r3)
/* 802958E8 00292828  81 83 00 00 */	lwz r12, 0(r3)
/* 802958EC 0029282C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802958F0 00292830  7D 89 03 A6 */	mtctr r12
/* 802958F4 00292834  4E 80 04 21 */	bctrl 
/* 802958F8 00292838  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802958FC 0029283C  7C 08 03 A6 */	mtlr r0
/* 80295900 00292840  38 21 00 10 */	addi r1, r1, 0x10
/* 80295904 00292844  4E 80 00 20 */	blr 
.endfn finishRotateEffect__Q34Game9SnakeCrow3ObjFv

.fn startWaitEffect__Q34Game9SnakeCrow3ObjFv, global
/* 80295908 00292848  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8029590C 0029284C  7C 08 02 A6 */	mflr r0
/* 80295910 00292850  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80295914 00292854  90 01 00 24 */	stw r0, 0x24(r1)
/* 80295918 00292858  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 8029591C 0029285C  38 81 00 08 */	addi r4, r1, 8
/* 80295920 00292860  90 01 00 08 */	stw r0, 8(r1)
/* 80295924 00292864  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 80295928 00292868  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8029592C 0029286C  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 80295930 00292870  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80295934 00292874  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 80295938 00292878  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8029593C 0029287C  80 63 03 20 */	lwz r3, 0x320(r3)
/* 80295940 00292880  81 83 00 00 */	lwz r12, 0(r3)
/* 80295944 00292884  81 8C 00 08 */	lwz r12, 8(r12)
/* 80295948 00292888  7D 89 03 A6 */	mtctr r12
/* 8029594C 0029288C  4E 80 04 21 */	bctrl 
/* 80295950 00292890  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80295954 00292894  7C 08 03 A6 */	mtlr r0
/* 80295958 00292898  38 21 00 20 */	addi r1, r1, 0x20
/* 8029595C 0029289C  4E 80 00 20 */	blr 
.endfn startWaitEffect__Q34Game9SnakeCrow3ObjFv

.fn finishWaitEffect__Q34Game9SnakeCrow3ObjFv, global
/* 80295960 002928A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295964 002928A4  7C 08 02 A6 */	mflr r0
/* 80295968 002928A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029596C 002928AC  80 63 03 20 */	lwz r3, 0x320(r3)
/* 80295970 002928B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80295974 002928B4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80295978 002928B8  7D 89 03 A6 */	mtctr r12
/* 8029597C 002928BC  4E 80 04 21 */	bctrl 
/* 80295980 002928C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80295984 002928C4  7C 08 03 A6 */	mtlr r0
/* 80295988 002928C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8029598C 002928CC  4E 80 00 20 */	blr 
.endfn finishWaitEffect__Q34Game9SnakeCrow3ObjFv

.fn createDeadStartEffect__Q34Game9SnakeCrow3ObjFv, global
/* 80295990 002928D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295994 002928D4  7C 08 02 A6 */	mflr r0
/* 80295998 002928D8  38 80 00 00 */	li r4, 0
/* 8029599C 002928DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802959A0 002928E0  80 63 03 24 */	lwz r3, 0x324(r3)
/* 802959A4 002928E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802959A8 002928E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802959AC 002928EC  7D 89 03 A6 */	mtctr r12
/* 802959B0 002928F0  4E 80 04 21 */	bctrl 
/* 802959B4 002928F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802959B8 002928F8  7C 08 03 A6 */	mtlr r0
/* 802959BC 002928FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802959C0 00292900  4E 80 00 20 */	blr 
.endfn createDeadStartEffect__Q34Game9SnakeCrow3ObjFv

.fn createDeadFinishEffect__Q34Game9SnakeCrow3ObjFv, global
/* 802959C4 00292904  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802959C8 00292908  7C 08 02 A6 */	mflr r0
/* 802959CC 0029290C  3C 80 80 49 */	lis r4, lbl_8048874C@ha
/* 802959D0 00292910  90 01 00 34 */	stw r0, 0x34(r1)
/* 802959D4 00292914  38 84 87 4C */	addi r4, r4, lbl_8048874C@l
/* 802959D8 00292918  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802959DC 0029291C  48 1A 96 09 */	bl getJoint__Q28SysShape5ModelFPc
/* 802959E0 00292920  48 19 3E C1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802959E4 00292924  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802959E8 00292928  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802959EC 0029292C  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802959F0 00292930  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 802959F4 00292934  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802959F8 00292938  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 802959FC 0029293C  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 80295A00 00292940  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 80295A04 00292944  90 81 00 08 */	stw r4, 8(r1)
/* 80295A08 00292948  3C 60 80 4D */	lis r3, __vt__Q23efx19THebiDeadHane_ver01@ha
/* 80295A0C 0029294C  38 85 A7 EC */	addi r4, r5, __vt__Q23efx3Arg@l
/* 80295A10 00292950  38 C0 00 A8 */	li r6, 0xa8
/* 80295A14 00292954  38 A0 00 00 */	li r5, 0
/* 80295A18 00292958  90 01 00 08 */	stw r0, 8(r1)
/* 80295A1C 0029295C  38 03 B5 7C */	addi r0, r3, __vt__Q23efx19THebiDeadHane_ver01@l
/* 80295A20 00292960  38 61 00 08 */	addi r3, r1, 8
/* 80295A24 00292964  90 81 00 14 */	stw r4, 0x14(r1)
/* 80295A28 00292968  38 81 00 14 */	addi r4, r1, 0x14
/* 80295A2C 0029296C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80295A30 00292970  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80295A34 00292974  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80295A38 00292978  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 80295A3C 0029297C  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80295A40 00292980  90 01 00 08 */	stw r0, 8(r1)
/* 80295A44 00292984  48 11 95 41 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 80295A48 00292988  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80295A4C 0029298C  7C 08 03 A6 */	mtlr r0
/* 80295A50 00292990  38 21 00 30 */	addi r1, r1, 0x30
/* 80295A54 00292994  4E 80 00 20 */	blr 
.endfn createDeadFinishEffect__Q34Game9SnakeCrow3ObjFv

.fn createDownHeadEffect__Q34Game9SnakeCrow3ObjFf, global
/* 80295A58 00292998  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80295A5C 0029299C  7C 08 02 A6 */	mflr r0
/* 80295A60 002929A0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80295A64 002929A4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80295A68 002929A8  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80295A6C 002929AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80295A70 002929B0  7C 7F 1B 78 */	mr r31, r3
/* 80295A74 002929B4  3C 60 80 49 */	lis r3, lbl_8048874C@ha
/* 80295A78 002929B8  38 83 87 4C */	addi r4, r3, lbl_8048874C@l
/* 80295A7C 002929BC  FF E0 08 90 */	fmr f31, f1
/* 80295A80 002929C0  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80295A84 002929C4  48 1A 95 61 */	bl getJoint__Q28SysShape5ModelFPc
/* 80295A88 002929C8  48 19 3E 19 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80295A8C 002929CC  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 80295A90 002929D0  FC 20 F8 90 */	fmr f1, f31
/* 80295A94 002929D4  C0 02 D7 50 */	lfs f0, lbl_8051BAB0@sda21(r2)
/* 80295A98 002929D8  38 81 00 08 */	addi r4, r1, 8
/* 80295A9C 002929DC  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 80295AA0 002929E0  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 80295AA4 002929E4  EC 03 00 28 */	fsubs f0, f3, f0
/* 80295AA8 002929E8  7F E3 FB 78 */	mr r3, r31
/* 80295AAC 002929EC  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 80295AB0 002929F0  D0 41 00 08 */	stfs f2, 8(r1)
/* 80295AB4 002929F4  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 80295AB8 002929F8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80295ABC 002929FC  4B E6 E0 95 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 80295AC0 00292A00  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80295AC4 00292A04  38 A1 00 08 */	addi r5, r1, 8
/* 80295AC8 00292A08  38 80 00 03 */	li r4, 3
/* 80295ACC 00292A0C  38 C0 00 02 */	li r6, 2
/* 80295AD0 00292A10  4B FB C7 6D */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80295AD4 00292A14  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80295AD8 00292A18  38 A1 00 08 */	addi r5, r1, 8
/* 80295ADC 00292A1C  38 80 00 08 */	li r4, 8
/* 80295AE0 00292A20  38 C0 00 02 */	li r6, 2
/* 80295AE4 00292A24  4B FB DC 9D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80295AE8 00292A28  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80295AEC 00292A2C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80295AF0 00292A30  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80295AF4 00292A34  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80295AF8 00292A38  7C 08 03 A6 */	mtlr r0
/* 80295AFC 00292A3C  38 21 00 30 */	addi r1, r1, 0x30
/* 80295B00 00292A40  4E 80 00 20 */	blr 
.endfn createDownHeadEffect__Q34Game9SnakeCrow3ObjFf

.fn effectDrawOn__Q34Game9SnakeCrow3ObjFv, global
/* 80295B04 00292A44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295B08 00292A48  7C 08 02 A6 */	mflr r0
/* 80295B0C 00292A4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80295B10 00292A50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80295B14 00292A54  7C 7F 1B 78 */	mr r31, r3
/* 80295B18 00292A58  80 63 03 1C */	lwz r3, 0x31c(r3)
/* 80295B1C 00292A5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80295B20 00292A60  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80295B24 00292A64  7D 89 03 A6 */	mtctr r12
/* 80295B28 00292A68  4E 80 04 21 */	bctrl 
/* 80295B2C 00292A6C  80 7F 03 20 */	lwz r3, 0x320(r31)
/* 80295B30 00292A70  81 83 00 00 */	lwz r12, 0(r3)
/* 80295B34 00292A74  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80295B38 00292A78  7D 89 03 A6 */	mtctr r12
/* 80295B3C 00292A7C  4E 80 04 21 */	bctrl 
/* 80295B40 00292A80  80 7F 03 24 */	lwz r3, 0x324(r31)
/* 80295B44 00292A84  81 83 00 00 */	lwz r12, 0(r3)
/* 80295B48 00292A88  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80295B4C 00292A8C  7D 89 03 A6 */	mtctr r12
/* 80295B50 00292A90  4E 80 04 21 */	bctrl 
/* 80295B54 00292A94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80295B58 00292A98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80295B5C 00292A9C  7C 08 03 A6 */	mtlr r0
/* 80295B60 00292AA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80295B64 00292AA4  4E 80 00 20 */	blr 
.endfn effectDrawOn__Q34Game9SnakeCrow3ObjFv

.fn effectDrawOff__Q34Game9SnakeCrow3ObjFv, global
/* 80295B68 00292AA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295B6C 00292AAC  7C 08 02 A6 */	mflr r0
/* 80295B70 00292AB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80295B74 00292AB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80295B78 00292AB8  7C 7F 1B 78 */	mr r31, r3
/* 80295B7C 00292ABC  80 63 03 1C */	lwz r3, 0x31c(r3)
/* 80295B80 00292AC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80295B84 00292AC4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80295B88 00292AC8  7D 89 03 A6 */	mtctr r12
/* 80295B8C 00292ACC  4E 80 04 21 */	bctrl 
/* 80295B90 00292AD0  80 7F 03 20 */	lwz r3, 0x320(r31)
/* 80295B94 00292AD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80295B98 00292AD8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80295B9C 00292ADC  7D 89 03 A6 */	mtctr r12
/* 80295BA0 00292AE0  4E 80 04 21 */	bctrl 
/* 80295BA4 00292AE4  80 7F 03 24 */	lwz r3, 0x324(r31)
/* 80295BA8 00292AE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80295BAC 00292AEC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80295BB0 00292AF0  7D 89 03 A6 */	mtctr r12
/* 80295BB4 00292AF4  4E 80 04 21 */	bctrl 
/* 80295BB8 00292AF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80295BBC 00292AFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80295BC0 00292B00  7C 08 03 A6 */	mtlr r0
/* 80295BC4 00292B04  38 21 00 10 */	addi r1, r1, 0x10
/* 80295BC8 00292B08  4E 80 00 20 */	blr 
.endfn effectDrawOff__Q34Game9SnakeCrow3ObjFv

.fn createEfxHamon__Q34Game9SnakeCrow3ObjFv, global
/* 80295BCC 00292B0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295BD0 00292B10  7C 08 02 A6 */	mflr r0
/* 80295BD4 00292B14  90 01 00 14 */	stw r0, 0x14(r1)
/* 80295BD8 00292B18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80295BDC 00292B1C  7C 7F 1B 78 */	mr r31, r3
/* 80295BE0 00292B20  81 83 00 00 */	lwz r12, 0(r3)
/* 80295BE4 00292B24  81 8C 00 D0 */	lwz r12, 0xd0(r12)
/* 80295BE8 00292B28  7D 89 03 A6 */	mtctr r12
/* 80295BEC 00292B2C  4E 80 04 21 */	bctrl 
/* 80295BF0 00292B30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80295BF4 00292B34  40 82 00 0C */	bne .L_80295C00
/* 80295BF8 00292B38  7F E3 FB 78 */	mr r3, r31
/* 80295BFC 00292B3C  4B E6 BD 09 */	bl createEfxHamon__Q24Game9EnemyBaseFv
.L_80295C00:
/* 80295C00 00292B40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80295C04 00292B44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80295C08 00292B48  7C 08 03 A6 */	mtlr r0
/* 80295C0C 00292B4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80295C10 00292B50  4E 80 00 20 */	blr 
.endfn createEfxHamon__Q34Game9SnakeCrow3ObjFv

.fn isUnderground__Q34Game9SnakeCrow3ObjFv, weak
/* 80295C14 00292B54  88 63 02 C0 */	lbz r3, 0x2c0(r3)
/* 80295C18 00292B58  4E 80 00 20 */	blr 
.endfn isUnderground__Q34Game9SnakeCrow3ObjFv

.fn __dt__Q23efx9THebiWaitFv, weak
/* 80295C1C 00292B5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295C20 00292B60  7C 08 02 A6 */	mflr r0
/* 80295C24 00292B64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80295C28 00292B68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80295C2C 00292B6C  7C 9F 23 78 */	mr r31, r4
/* 80295C30 00292B70  93 C1 00 08 */	stw r30, 8(r1)
/* 80295C34 00292B74  7C 7E 1B 79 */	or. r30, r3, r3
/* 80295C38 00292B78  41 82 00 64 */	beq .L_80295C9C
/* 80295C3C 00292B7C  3C 60 80 4D */	lis r3, __vt__Q23efx9THebiWait@ha
/* 80295C40 00292B80  38 63 B6 20 */	addi r3, r3, __vt__Q23efx9THebiWait@l
/* 80295C44 00292B84  90 7E 00 00 */	stw r3, 0(r30)
/* 80295C48 00292B88  38 03 00 14 */	addi r0, r3, 0x14
/* 80295C4C 00292B8C  90 1E 00 04 */	stw r0, 4(r30)
/* 80295C50 00292B90  41 82 00 3C */	beq .L_80295C8C
/* 80295C54 00292B94  3C 60 80 4B */	lis r3, __vt__Q23efx8TForever@ha
/* 80295C58 00292B98  38 63 2C 24 */	addi r3, r3, __vt__Q23efx8TForever@l
/* 80295C5C 00292B9C  90 7E 00 00 */	stw r3, 0(r30)
/* 80295C60 00292BA0  38 03 00 14 */	addi r0, r3, 0x14
/* 80295C64 00292BA4  90 1E 00 04 */	stw r0, 4(r30)
/* 80295C68 00292BA8  41 82 00 24 */	beq .L_80295C8C
/* 80295C6C 00292BAC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80295C70 00292BB0  38 7E 00 04 */	addi r3, r30, 4
/* 80295C74 00292BB4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80295C78 00292BB8  38 80 00 00 */	li r4, 0
/* 80295C7C 00292BBC  90 BE 00 00 */	stw r5, 0(r30)
/* 80295C80 00292BC0  38 05 00 14 */	addi r0, r5, 0x14
/* 80295C84 00292BC4  90 1E 00 04 */	stw r0, 4(r30)
/* 80295C88 00292BC8  4B DF A0 15 */	bl __dt__18JPAEmitterCallBackFv
.L_80295C8C:
/* 80295C8C 00292BCC  7F E0 07 35 */	extsh. r0, r31
/* 80295C90 00292BD0  40 81 00 0C */	ble .L_80295C9C
/* 80295C94 00292BD4  7F C3 F3 78 */	mr r3, r30
/* 80295C98 00292BD8  4B D8 E4 1D */	bl __dl__FPv
.L_80295C9C:
/* 80295C9C 00292BDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80295CA0 00292BE0  7F C3 F3 78 */	mr r3, r30
/* 80295CA4 00292BE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80295CA8 00292BE8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80295CAC 00292BEC  7C 08 03 A6 */	mtlr r0
/* 80295CB0 00292BF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80295CB4 00292BF4  4E 80 00 20 */	blr 
.endfn __dt__Q23efx9THebiWaitFv

.fn __dt__Q23efx8THebiRotFv, weak
/* 80295CB8 00292BF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295CBC 00292BFC  7C 08 02 A6 */	mflr r0
/* 80295CC0 00292C00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80295CC4 00292C04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80295CC8 00292C08  7C 9F 23 78 */	mr r31, r4
/* 80295CCC 00292C0C  93 C1 00 08 */	stw r30, 8(r1)
/* 80295CD0 00292C10  7C 7E 1B 79 */	or. r30, r3, r3
/* 80295CD4 00292C14  41 82 00 64 */	beq .L_80295D38
/* 80295CD8 00292C18  3C 60 80 4D */	lis r3, __vt__Q23efx8THebiRot@ha
/* 80295CDC 00292C1C  38 63 B6 6C */	addi r3, r3, __vt__Q23efx8THebiRot@l
/* 80295CE0 00292C20  90 7E 00 00 */	stw r3, 0(r30)
/* 80295CE4 00292C24  38 03 00 14 */	addi r0, r3, 0x14
/* 80295CE8 00292C28  90 1E 00 04 */	stw r0, 4(r30)
/* 80295CEC 00292C2C  41 82 00 3C */	beq .L_80295D28
/* 80295CF0 00292C30  3C 60 80 4B */	lis r3, __vt__Q23efx8TForever@ha
/* 80295CF4 00292C34  38 63 2C 24 */	addi r3, r3, __vt__Q23efx8TForever@l
/* 80295CF8 00292C38  90 7E 00 00 */	stw r3, 0(r30)
/* 80295CFC 00292C3C  38 03 00 14 */	addi r0, r3, 0x14
/* 80295D00 00292C40  90 1E 00 04 */	stw r0, 4(r30)
/* 80295D04 00292C44  41 82 00 24 */	beq .L_80295D28
/* 80295D08 00292C48  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80295D0C 00292C4C  38 7E 00 04 */	addi r3, r30, 4
/* 80295D10 00292C50  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80295D14 00292C54  38 80 00 00 */	li r4, 0
/* 80295D18 00292C58  90 BE 00 00 */	stw r5, 0(r30)
/* 80295D1C 00292C5C  38 05 00 14 */	addi r0, r5, 0x14
/* 80295D20 00292C60  90 1E 00 04 */	stw r0, 4(r30)
/* 80295D24 00292C64  4B DF 9F 79 */	bl __dt__18JPAEmitterCallBackFv
.L_80295D28:
/* 80295D28 00292C68  7F E0 07 35 */	extsh. r0, r31
/* 80295D2C 00292C6C  40 81 00 0C */	ble .L_80295D38
/* 80295D30 00292C70  7F C3 F3 78 */	mr r3, r30
/* 80295D34 00292C74  4B D8 E3 81 */	bl __dl__FPv
.L_80295D38:
/* 80295D38 00292C78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80295D3C 00292C7C  7F C3 F3 78 */	mr r3, r30
/* 80295D40 00292C80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80295D44 00292C84  83 C1 00 08 */	lwz r30, 8(r1)
/* 80295D48 00292C88  7C 08 03 A6 */	mtlr r0
/* 80295D4C 00292C8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80295D50 00292C90  4E 80 00 20 */	blr 
.endfn __dt__Q23efx8THebiRotFv

.fn inWaterCallback__Q34Game9SnakeCrow3ObjFPQ24Game8WaterBox, weak
/* 80295D54 00292C94  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q34Game9SnakeCrow3ObjFPQ24Game8WaterBox

.fn outWaterCallback__Q34Game9SnakeCrow3ObjFv, weak
/* 80295D58 00292C98  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q34Game9SnakeCrow3ObjFv

.fn getDamageCoeStoneState__Q34Game9SnakeCrow3ObjFv, weak
/* 80295D5C 00292C9C  C0 22 D7 78 */	lfs f1, lbl_8051BAD8@sda21(r2)
/* 80295D60 00292CA0  4E 80 00 20 */	blr 
.endfn getDamageCoeStoneState__Q34Game9SnakeCrow3ObjFv

.fn getMouthSlots__Q34Game9SnakeCrow3ObjFv, weak
/* 80295D64 00292CA4  38 63 02 CC */	addi r3, r3, 0x2cc
/* 80295D68 00292CA8  4E 80 00 20 */	blr 
.endfn getMouthSlots__Q34Game9SnakeCrow3ObjFv

.fn throwupItemInDeathProcedure__Q34Game9SnakeCrow3ObjFv, weak
/* 80295D6C 00292CAC  4E 80 00 20 */	blr 
.endfn throwupItemInDeathProcedure__Q34Game9SnakeCrow3ObjFv

.fn getEnemyTypeID__Q34Game9SnakeCrow3ObjFv, weak
/* 80295D70 00292CB0  38 60 00 22 */	li r3, 0x22
/* 80295D74 00292CB4  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game9SnakeCrow3ObjFv

.fn __sinit_SnakeCrow_cpp, local
/* 80295D78 00292CB8  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80295D7C 00292CBC  38 00 FF FF */	li r0, -1
/* 80295D80 00292CC0  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80295D84 00292CC4  3C 60 80 4D */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80295D88 00292CC8  90 0D 96 E0 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80295D8C 00292CCC  D4 03 B5 70 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80295D90 00292CD0  D0 0D 96 E4 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80295D94 00292CD4  D0 03 00 04 */	stfs f0, 4(r3)
/* 80295D98 00292CD8  D0 03 00 08 */	stfs f0, 8(r3)
/* 80295D9C 00292CDC  4E 80 00 20 */	blr 
.endfn __sinit_SnakeCrow_cpp

.fn "@808@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 80295DA0 00292CE0  39 60 00 0C */	li r11, 0xc
/* 80295DA4 00292CE4  7D 63 58 2E */	lwzx r11, r3, r11
/* 80295DA8 00292CE8  7C 63 5A 14 */	add r3, r3, r11
/* 80295DAC 00292CEC  38 63 FC D8 */	addi r3, r3, -808
/* 80295DB0 00292CF0  4B E7 0B 6C */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@808@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@808@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 80295DB4 00292CF4  39 60 00 0C */	li r11, 0xc
/* 80295DB8 00292CF8  7D 63 58 2E */	lwzx r11, r3, r11
/* 80295DBC 00292CFC  7C 63 5A 14 */	add r3, r3, r11
/* 80295DC0 00292D00  38 63 FC D8 */	addi r3, r3, -808
/* 80295DC4 00292D04  4B E7 08 E4 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@808@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@808@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 80295DC8 00292D08  39 60 00 0C */	li r11, 0xc
/* 80295DCC 00292D0C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80295DD0 00292D10  7C 63 5A 14 */	add r3, r3, r11
/* 80295DD4 00292D14  38 63 FC D8 */	addi r3, r3, -808
/* 80295DD8 00292D18  4B E7 08 F0 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@808@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@808@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 80295DDC 00292D1C  39 60 00 0C */	li r11, 0xc
/* 80295DE0 00292D20  7D 63 58 2E */	lwzx r11, r3, r11
/* 80295DE4 00292D24  7C 63 5A 14 */	add r3, r3, r11
/* 80295DE8 00292D28  38 63 FC D8 */	addi r3, r3, -808
/* 80295DEC 00292D2C  4B E7 0C 8C */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@808@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@808@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 80295DF0 00292D30  39 60 00 0C */	li r11, 0xc
/* 80295DF4 00292D34  7D 63 58 2E */	lwzx r11, r3, r11
/* 80295DF8 00292D38  7C 63 5A 14 */	add r3, r3, r11
/* 80295DFC 00292D3C  38 63 FC D8 */	addi r3, r3, -808
/* 80295E00 00292D40  4B E7 0C 4C */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@808@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@808@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 80295E04 00292D44  39 60 00 0C */	li r11, 0xc
/* 80295E08 00292D48  7D 63 58 2E */	lwzx r11, r3, r11
/* 80295E0C 00292D4C  7C 63 5A 14 */	add r3, r3, r11
/* 80295E10 00292D50  38 63 FC D8 */	addi r3, r3, -808
/* 80295E14 00292D54  4B E7 08 8C */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@808@12@viewGetShape__Q24Game9EnemyBaseFv"

.fn "@4@__dt__Q23efx8THebiRotFv", weak
/* 80295E18 00292D58  38 63 FF FC */	addi r3, r3, -4
/* 80295E1C 00292D5C  4B FF FE 9C */	b __dt__Q23efx8THebiRotFv
.endfn "@4@__dt__Q23efx8THebiRotFv"

.fn "@4@__dt__Q23efx9THebiWaitFv", weak
/* 80295E20 00292D60  38 63 FF FC */	addi r3, r3, -4
/* 80295E24 00292D64  4B FF FD F8 */	b __dt__Q23efx9THebiWaitFv
.endfn "@4@__dt__Q23efx9THebiWaitFv"
