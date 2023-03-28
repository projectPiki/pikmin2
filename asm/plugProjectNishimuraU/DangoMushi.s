.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8048D7E0, local
	.asciz "world_root"
.endobj lbl_8048D7E0
.balign 4
.obj lbl_8048D7EC, local
	.asciz "PSMainSide_ObjSound.h"
.endobj lbl_8048D7EC
.balign 4
.obj lbl_8048D804, local
	.asciz "P2Assert"
.endobj lbl_8048D804

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx9TDangoFly, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple3FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.endobj __vt__Q23efx9TDangoFly
.obj __vt__Q23efx12TDangoDamage, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx12TDangoDamage
.obj __vt__Q23efx10TDangoDead, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx10TDangoDead
.obj __vt__Q23efx15TDangoDeadSmoke, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx15TDangoDeadSmoke
.obj __vt__Q23efx9TDangoRun, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
.endobj __vt__Q23efx9TDangoRun
.obj __vt__Q23efx13TDangoAttack2, weak
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
.endobj __vt__Q23efx13TDangoAttack2
.obj __vt__Q23efx15TDangoWallBreak, weak
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
.endobj __vt__Q23efx15TDangoWallBreak
.obj __vt__Q34Game10DangoMushi3Obj, global
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
	.4byte setInitialSetting__Q34Game10DangoMushi3ObjFPQ24Game21EnemyInitialParamBase
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
	.4byte damageCallBack__Q34Game10DangoMushi3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q34Game10DangoMushi3ObjFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game10DangoMushi3ObjFv
	.4byte doFinishStoneState__Q34Game10DangoMushi3ObjFv
	.4byte getDamageCoeStoneState__Q34Game10DangoMushi3ObjFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game10DangoMushi3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q34Game10DangoMushi3ObjFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game10DangoMushi3ObjFv
	.4byte doStartMovie__Q34Game10DangoMushi3ObjFv
	.4byte doEndMovie__Q34Game10DangoMushi3ObjFv
	.4byte setFSM__Q34Game10DangoMushi3ObjFPQ34Game10DangoMushi3FSM
	.4byte 0
	.4byte 0
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
.endobj __vt__Q34Game10DangoMushi3Obj
.obj __vt__Q34Game10DangoMushi14ProperAnimator, weak
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
.endobj __vt__Q34Game10DangoMushi14ProperAnimator

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051D3A8, local
	.float 0.0
.endobj lbl_8051D3A8
.obj lbl_8051D3AC, local
	.float 60.0
.endobj lbl_8051D3AC
.obj lbl_8051D3B0, local
	.float 30.0
.endobj lbl_8051D3B0
.obj lbl_8051D3B4, local
	.float 10.0
.endobj lbl_8051D3B4
.obj lbl_8051D3B8, local
	.float 1.0
.endobj lbl_8051D3B8
.obj lbl_8051D3BC, local
	.float 100.0
.endobj lbl_8051D3BC
.obj lbl_8051D3C0, local
	.float 50.0
.endobj lbl_8051D3C0
.obj lbl_8051D3C4, local
	.float 45.0
.endobj lbl_8051D3C4
.obj lbl_8051D3C8, local
	.float -0.5
.endobj lbl_8051D3C8
.obj lbl_8051D3CC, local
	.float -1000.0
.endobj lbl_8051D3CC
.balign 4
.obj lbl_8051D3D0, local
	.asciz "hand_L"
.endobj lbl_8051D3D0
.balign 4
.obj lbl_8051D3D8, local
	.float 7.5
.endobj lbl_8051D3D8
.obj lbl_8051D3DC, local
	.float 0.6
.endobj lbl_8051D3DC
.obj lbl_8051D3E0, local
	.float 32768.0
.endobj lbl_8051D3E0
.obj lbl_8051D3E4, local # pi
	.float 3.1415927
.endobj lbl_8051D3E4
.obj lbl_8051D3E8, local # pi/2
	.float 1.5707964
.endobj lbl_8051D3E8
.obj lbl_8051D3EC, local
	.float 325.9493
.endobj lbl_8051D3EC
.obj lbl_8051D3F0, local
	.float -325.9493
.endobj lbl_8051D3F0
.balign 8
.obj lbl_8051D3F8, local
	.8byte 0x4330000080000000
.endobj lbl_8051D3F8
.obj lbl_8051D400, local
	.float 625.0
.endobj lbl_8051D400
.obj lbl_8051D404, local
	.float 180.0
.endobj lbl_8051D404
.obj lbl_8051D408, local
	.float 0.0055555557
.endobj lbl_8051D408
.obj lbl_8051D40C, local
	.float 5.0
.endobj lbl_8051D40C
.obj lbl_8051D410, local
	.float 3.0
.endobj lbl_8051D410
.balign 4
.obj lbl_8051D414, local # enemy id
	.4byte 0x00000013
	.4byte 0x00000025
.endobj lbl_8051D414
.obj lbl_8051D41C, local
	.4byte 0x0000000A
	.4byte 0x00000001
.endobj lbl_8051D41C
.obj lbl_8051D424, local
	.float 0.5
.endobj lbl_8051D424
.obj lbl_8051D428, local
	.float 0.25
.endobj lbl_8051D428
.obj lbl_8051D42C, local
	.float 15.0
.endobj lbl_8051D42C
.obj lbl_8051D430, local
	.float 2.0943952
.endobj lbl_8051D430
.obj lbl_8051D434, local
	.float 70.0
.endobj lbl_8051D434
.obj lbl_8051D438, local
	.float 1.0471976
.endobj lbl_8051D438
.obj lbl_8051D43C, local
	.float 140.0
.endobj lbl_8051D43C
.obj lbl_8051D440, local
	.float 0.1
.endobj lbl_8051D440
.obj lbl_8051D444, local
	.float 0.5235988
.endobj lbl_8051D444
.obj lbl_8051D448, local
	.float 220.0
.endobj lbl_8051D448
.obj lbl_8051D44C, local # tau
	.float 6.2831855
.endobj lbl_8051D44C
.obj lbl_8051D450, local
	.float 1000.0
.endobj lbl_8051D450
.obj lbl_8051D454, local
	.float 500.0
.endobj lbl_8051D454
.balign 4
.obj lbl_8051D458, local
	.ascii "bod0"
	.ascii "bod1"
.endobj lbl_8051D458
.balign 4
.obj lbl_8051D460, local
	.float 150.0
.endobj lbl_8051D460
.obj lbl_8051D464, local
	.float 300.0
.endobj lbl_8051D464
.obj lbl_8051D468, local
	.float 120.0
.endobj lbl_8051D468
.obj lbl_8051D46C, local
	.float 250.0
.endobj lbl_8051D46C
.obj lbl_8051D470, local
	.float -15.0
	.float 70.0
.endobj lbl_8051D470
.obj lbl_8051D478, local
	.float -20.0
	.float -40.0
.endobj lbl_8051D478
.obj lbl_8051D480, local
	.float 15.0
	.float 15.0
.endobj lbl_8051D480
.balign 4
.obj lbl_8051D488, local
	.asciz "hand_R"
.endobj lbl_8051D488
.balign 4
.obj lbl_8051D490, local
	.float 128000.0
.endobj lbl_8051D490
.obj lbl_8051D494, local
	.float -128000.0
.endobj lbl_8051D494
.balign 4
.obj lbl_8051D498, local
	.asciz "arm_R02"
.endobj lbl_8051D498
.balign 4
.obj lbl_8051D4A0, local
	.asciz "stomach"
.endobj lbl_8051D4A0
.balign 4
.obj lbl_8051D4A8, local
	.float 1.3
.endobj lbl_8051D4A8
.obj lbl_8051D4AC, local
	.float 42.5
.endobj lbl_8051D4AC
.obj lbl_8051D4B0, local
	.float -12.5
.endobj lbl_8051D4B0
.obj lbl_8051D4B4, local
	.float 25.0
.endobj lbl_8051D4B4
.obj lbl_8051D4B8, local
	.float 0.68
.endobj lbl_8051D4B8
.obj lbl_8051D4BC, local
	.float 0.2
.endobj lbl_8051D4BC

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game10DangoMushi3ObjFv, global
/* 802FC3BC 002F92FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FC3C0 002F9300  7C 08 02 A6 */	mflr r0
/* 802FC3C4 002F9304  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FC3C8 002F9308  7C 80 07 35 */	extsh. r0, r4
/* 802FC3CC 002F930C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FC3D0 002F9310  7C 7F 1B 78 */	mr r31, r3
/* 802FC3D4 002F9314  93 C1 00 08 */	stw r30, 8(r1)
/* 802FC3D8 002F9318  41 82 00 24 */	beq .L_802FC3FC
/* 802FC3DC 002F931C  38 1F 03 00 */	addi r0, r31, 0x300
/* 802FC3E0 002F9320  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802FC3E4 002F9324  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802FC3E8 002F9328  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802FC3EC 002F932C  38 00 00 00 */	li r0, 0
/* 802FC3F0 002F9330  90 7F 03 00 */	stw r3, 0x300(r31)
/* 802FC3F4 002F9334  90 1F 03 04 */	stw r0, 0x304(r31)
/* 802FC3F8 002F9338  90 1F 03 08 */	stw r0, 0x308(r31)
.L_802FC3FC:
/* 802FC3FC 002F933C  7F E3 FB 78 */	mr r3, r31
/* 802FC400 002F9340  38 80 00 00 */	li r4, 0
/* 802FC404 002F9344  4B E0 4F 9D */	bl __ct__Q24Game9EnemyBaseFv
/* 802FC408 002F9348  3C 60 80 4D */	lis r3, __vt__Q34Game10DangoMushi3Obj@ha
/* 802FC40C 002F934C  38 1F 03 00 */	addi r0, r31, 0x300
/* 802FC410 002F9350  38 A3 61 EC */	addi r5, r3, __vt__Q34Game10DangoMushi3Obj@l
/* 802FC414 002F9354  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 802FC418 002F9358  90 BF 00 00 */	stw r5, 0(r31)
/* 802FC41C 002F935C  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802FC420 002F9360  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 802FC424 002F9364  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802FC428 002F9368  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802FC42C 002F936C  90 A4 00 00 */	stw r5, 0(r4)
/* 802FC430 002F9370  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802FC434 002F9374  7C 04 00 50 */	subf r0, r4, r0
/* 802FC438 002F9378  90 04 00 0C */	stw r0, 0xc(r4)
/* 802FC43C 002F937C  4B E2 DF 19 */	bl __ct__Q34Game15WalkSmokeEffect3MgrFv
/* 802FC440 002F9380  38 60 00 60 */	li r3, 0x60
/* 802FC444 002F9384  4B D2 7A 61 */	bl __nw__FUl
/* 802FC448 002F9388  7C 7E 1B 79 */	or. r30, r3, r3
/* 802FC44C 002F938C  41 82 00 14 */	beq .L_802FC460
/* 802FC450 002F9390  4B E3 1C 99 */	bl __ct__Q24Game22EnemyBlendAnimatorBaseFv
/* 802FC454 002F9394  3C 60 80 4D */	lis r3, __vt__Q34Game10DangoMushi14ProperAnimator@ha
/* 802FC458 002F9398  38 03 65 18 */	addi r0, r3, __vt__Q34Game10DangoMushi14ProperAnimator@l
/* 802FC45C 002F939C  90 1E 00 00 */	stw r0, 0(r30)
.L_802FC460:
/* 802FC460 002F93A0  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802FC464 002F93A4  38 60 00 1C */	li r3, 0x1c
/* 802FC468 002F93A8  4B D2 7A 3D */	bl __nw__FUl
/* 802FC46C 002F93AC  7C 64 1B 79 */	or. r4, r3, r3
/* 802FC470 002F93B0  41 82 00 24 */	beq .L_802FC494
/* 802FC474 002F93B4  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802FC478 002F93B8  3C 60 80 4D */	lis r3, __vt__Q34Game10DangoMushi3FSM@ha
/* 802FC47C 002F93BC  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802FC480 002F93C0  38 A0 FF FF */	li r5, -1
/* 802FC484 002F93C4  90 04 00 00 */	stw r0, 0(r4)
/* 802FC488 002F93C8  38 03 5F D4 */	addi r0, r3, __vt__Q34Game10DangoMushi3FSM@l
/* 802FC48C 002F93CC  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802FC490 002F93D0  90 04 00 00 */	stw r0, 0(r4)
.L_802FC494:
/* 802FC494 002F93D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FC498 002F93D8  7F E3 FB 78 */	mr r3, r31
/* 802FC49C 002F93DC  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802FC4A0 002F93E0  7D 89 03 A6 */	mtctr r12
/* 802FC4A4 002F93E4  4E 80 04 21 */	bctrl 
/* 802FC4A8 002F93E8  7F E3 FB 78 */	mr r3, r31
/* 802FC4AC 002F93EC  48 00 28 1D */	bl createEffect__Q34Game10DangoMushi3ObjFv
/* 802FC4B0 002F93F0  38 60 00 0C */	li r3, 0xc
/* 802FC4B4 002F93F4  4B D2 79 F1 */	bl __nw__FUl
/* 802FC4B8 002F93F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 802FC4BC 002F93FC  41 82 00 14 */	beq .L_802FC4D0
/* 802FC4C0 002F9400  48 13 7E 95 */	bl __ct__Q23Sys15MatBaseAnimatorFv
/* 802FC4C4 002F9404  3C 60 80 4F */	lis r3, __vt__Q23Sys15MatLoopAnimator@ha
/* 802FC4C8 002F9408  38 03 C4 8C */	addi r0, r3, __vt__Q23Sys15MatLoopAnimator@l
/* 802FC4CC 002F940C  90 1E 00 00 */	stw r0, 0(r30)
.L_802FC4D0:
/* 802FC4D0 002F9410  93 DF 02 F0 */	stw r30, 0x2f0(r31)
/* 802FC4D4 002F9414  7F E3 FB 78 */	mr r3, r31
/* 802FC4D8 002F9418  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FC4DC 002F941C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FC4E0 002F9420  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FC4E4 002F9424  7C 08 03 A6 */	mtlr r0
/* 802FC4E8 002F9428  38 21 00 10 */	addi r1, r1, 0x10
/* 802FC4EC 002F942C  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10DangoMushi3ObjFv

.fn setInitialSetting__Q34Game10DangoMushi3ObjFPQ24Game21EnemyInitialParamBase, global
/* 802FC4F0 002F9430  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game10DangoMushi3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game10DangoMushi3ObjFPQ24Game15CreatureInitArg, global
/* 802FC4F4 002F9434  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FC4F8 002F9438  7C 08 02 A6 */	mflr r0
/* 802FC4FC 002F943C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FC500 002F9440  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FC504 002F9444  7C 7F 1B 78 */	mr r31, r3
/* 802FC508 002F9448  4B E0 55 51 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802FC50C 002F944C  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 802FC510 002F9450  38 80 00 00 */	li r4, 0
/* 802FC514 002F9454  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FC518 002F9458  38 00 FF FF */	li r0, -1
/* 802FC51C 002F945C  60 65 00 01 */	ori r5, r3, 1
/* 802FC520 002F9460  7F E3 FB 78 */	mr r3, r31
/* 802FC524 002F9464  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802FC528 002F9468  80 BF 01 E0 */	lwz r5, 0x1e0(r31)
/* 802FC52C 002F946C  54 A5 06 B0 */	rlwinm r5, r5, 0, 0x1a, 0x18
/* 802FC530 002F9470  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802FC534 002F9474  98 9F 02 C0 */	stb r4, 0x2c0(r31)
/* 802FC538 002F9478  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802FC53C 002F947C  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 802FC540 002F9480  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 802FC544 002F9484  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802FC548 002F9488  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802FC54C 002F948C  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802FC550 002F9490  48 00 15 15 */	bl setupCollision__Q34Game10DangoMushi3ObjFv
/* 802FC554 002F9494  7F E3 FB 78 */	mr r3, r31
/* 802FC558 002F9498  38 80 00 00 */	li r4, 0
/* 802FC55C 002F949C  48 00 15 41 */	bl setBodyCollision__Q34Game10DangoMushi3ObjFb
/* 802FC560 002F94A0  38 00 00 00 */	li r0, 0
/* 802FC564 002F94A4  7F E3 FB 78 */	mr r3, r31
/* 802FC568 002F94A8  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 802FC56C 002F94AC  38 80 00 00 */	li r4, 0
/* 802FC570 002F94B0  48 00 1C 75 */	bl resetMapCollisionSize__Q34Game10DangoMushi3ObjFb
/* 802FC574 002F94B4  38 00 00 00 */	li r0, 0
/* 802FC578 002F94B8  7F E3 FB 78 */	mr r3, r31
/* 802FC57C 002F94BC  98 1F 02 C3 */	stb r0, 0x2c3(r31)
/* 802FC580 002F94C0  48 00 25 D1 */	bl resetBossAppearBGM__Q34Game10DangoMushi3ObjFv
/* 802FC584 002F94C4  7F E3 FB 78 */	mr r3, r31
/* 802FC588 002F94C8  48 00 28 B1 */	bl setupEffect__Q34Game10DangoMushi3ObjFv
/* 802FC58C 002F94CC  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802FC590 002F94D0  7F E4 FB 78 */	mr r4, r31
/* 802FC594 002F94D4  4B F4 57 5D */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802FC598 002F94D8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802FC59C 002F94DC  28 03 00 00 */	cmplwi r3, 0
/* 802FC5A0 002F94E0  41 82 00 34 */	beq .L_802FC5D4
/* 802FC5A4 002F94E4  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802FC5A8 002F94E8  2C 00 00 04 */	cmpwi r0, 4
/* 802FC5AC 002F94EC  40 82 00 28 */	bne .L_802FC5D4
/* 802FC5B0 002F94F0  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802FC5B4 002F94F4  7F E4 FB 78 */	mr r4, r31
/* 802FC5B8 002F94F8  38 A0 00 02 */	li r5, 2
/* 802FC5BC 002F94FC  38 C0 00 00 */	li r6, 0
/* 802FC5C0 002F9500  81 83 00 00 */	lwz r12, 0(r3)
/* 802FC5C4 002F9504  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802FC5C8 002F9508  7D 89 03 A6 */	mtctr r12
/* 802FC5CC 002F950C  4E 80 04 21 */	bctrl 
/* 802FC5D0 002F9510  48 00 00 24 */	b .L_802FC5F4
.L_802FC5D4:
/* 802FC5D4 002F9514  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802FC5D8 002F9518  7F E4 FB 78 */	mr r4, r31
/* 802FC5DC 002F951C  38 A0 00 01 */	li r5, 1
/* 802FC5E0 002F9520  38 C0 00 00 */	li r6, 0
/* 802FC5E4 002F9524  81 83 00 00 */	lwz r12, 0(r3)
/* 802FC5E8 002F9528  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802FC5EC 002F952C  7D 89 03 A6 */	mtctr r12
/* 802FC5F0 002F9530  4E 80 04 21 */	bctrl 
.L_802FC5F4:
/* 802FC5F4 002F9534  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 802FC5F8 002F9538  80 9F 01 80 */	lwz r4, 0x180(r31)
/* 802FC5FC 002F953C  81 83 00 00 */	lwz r12, 0(r3)
/* 802FC600 002F9540  80 84 00 44 */	lwz r4, 0x44(r4)
/* 802FC604 002F9544  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FC608 002F9548  7D 89 03 A6 */	mtctr r12
/* 802FC60C 002F954C  4E 80 04 21 */	bctrl 
/* 802FC610 002F9550  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FC614 002F9554  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FC618 002F9558  7C 08 03 A6 */	mtlr r0
/* 802FC61C 002F955C  38 21 00 10 */	addi r1, r1, 0x10
/* 802FC620 002F9560  4E 80 00 20 */	blr 
.endfn onInit__Q34Game10DangoMushi3ObjFPQ24Game15CreatureInitArg

.fn onKill__Q34Game10DangoMushi3ObjFPQ24Game15CreatureKillArg, global
/* 802FC624 002F9564  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FC628 002F9568  7C 08 02 A6 */	mflr r0
/* 802FC62C 002F956C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FC630 002F9570  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FC634 002F9574  7C 9F 23 78 */	mr r31, r4
/* 802FC638 002F9578  93 C1 00 08 */	stw r30, 8(r1)
/* 802FC63C 002F957C  7C 7E 1B 78 */	mr r30, r3
/* 802FC640 002F9580  48 00 2C 05 */	bl finishRollingMoveEffect__Q34Game10DangoMushi3ObjFv
/* 802FC644 002F9584  7F C3 F3 78 */	mr r3, r30
/* 802FC648 002F9588  7F E4 FB 78 */	mr r4, r31
/* 802FC64C 002F958C  4B E0 58 9D */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 802FC650 002F9590  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FC654 002F9594  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FC658 002F9598  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FC65C 002F959C  7C 08 03 A6 */	mtlr r0
/* 802FC660 002F95A0  38 21 00 10 */	addi r1, r1, 0x10
/* 802FC664 002F95A4  4E 80 00 20 */	blr 
.endfn onKill__Q34Game10DangoMushi3ObjFPQ24Game15CreatureKillArg

.fn doUpdate__Q34Game10DangoMushi3ObjFv, global
/* 802FC668 002F95A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FC66C 002F95AC  7C 08 02 A6 */	mflr r0
/* 802FC670 002F95B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FC674 002F95B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FC678 002F95B8  7C 7F 1B 78 */	mr r31, r3
/* 802FC67C 002F95BC  7F E4 FB 78 */	mr r4, r31
/* 802FC680 002F95C0  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802FC684 002F95C4  81 83 00 00 */	lwz r12, 0(r3)
/* 802FC688 002F95C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802FC68C 002F95CC  7D 89 03 A6 */	mtctr r12
/* 802FC690 002F95D0  4E 80 04 21 */	bctrl 
/* 802FC694 002F95D4  7F E3 FB 78 */	mr r3, r31
/* 802FC698 002F95D8  48 00 1B 79 */	bl updateMapCollisionSize__Q34Game10DangoMushi3ObjFv
/* 802FC69C 002F95DC  7F E3 FB 78 */	mr r3, r31
/* 802FC6A0 002F95E0  48 00 2C 21 */	bl createMoveHandEffect__Q34Game10DangoMushi3ObjFv
/* 802FC6A4 002F95E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FC6A8 002F95E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FC6AC 002F95EC  7C 08 03 A6 */	mtlr r0
/* 802FC6B0 002F95F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802FC6B4 002F95F4  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game10DangoMushi3ObjFv

.fn doUpdateCommon__Q34Game10DangoMushi3ObjFv, global
/* 802FC6B8 002F95F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FC6BC 002F95FC  7C 08 02 A6 */	mflr r0
/* 802FC6C0 002F9600  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FC6C4 002F9604  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FC6C8 002F9608  7C 7F 1B 78 */	mr r31, r3
/* 802FC6CC 002F960C  C0 03 01 C8 */	lfs f0, 0x1c8(r3)
/* 802FC6D0 002F9610  D0 03 02 DC */	stfs f0, 0x2dc(r3)
/* 802FC6D4 002F9614  C0 03 01 D0 */	lfs f0, 0x1d0(r3)
/* 802FC6D8 002F9618  D0 03 02 E4 */	stfs f0, 0x2e4(r3)
/* 802FC6DC 002F961C  4B E0 68 39 */	bl doUpdateCommon__Q24Game9EnemyBaseFv
/* 802FC6E0 002F9620  7F E3 FB 78 */	mr r3, r31
/* 802FC6E4 002F9624  48 00 23 71 */	bl updateBossBGM__Q34Game10DangoMushi3ObjFv
/* 802FC6E8 002F9628  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FC6EC 002F962C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FC6F0 002F9630  7C 08 03 A6 */	mtlr r0
/* 802FC6F4 002F9634  38 21 00 10 */	addi r1, r1, 0x10
/* 802FC6F8 002F9638  4E 80 00 20 */	blr 
.endfn doUpdateCommon__Q34Game10DangoMushi3ObjFv

.fn doAnimationUpdateAnimator__Q34Game10DangoMushi3ObjFv, global
/* 802FC6FC 002F963C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802FC700 002F9640  7C 08 02 A6 */	mflr r0
/* 802FC704 002F9644  3C A0 80 4B */	lis r5, __vt__Q28SysShape13BlendFunction@ha
/* 802FC708 002F9648  3C 80 80 4B */	lis r4, __vt__Q28SysShape14BlendLinearFun@ha
/* 802FC70C 002F964C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802FC710 002F9650  38 05 AD 94 */	addi r0, r5, __vt__Q28SysShape13BlendFunction@l
/* 802FC714 002F9654  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 802FC718 002F9658  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802FC71C 002F965C  7C 7F 1B 78 */	mr r31, r3
/* 802FC720 002F9660  C0 02 F0 4C */	lfs f0, lbl_8051D3AC@sda21(r2)
/* 802FC724 002F9664  90 01 00 08 */	stw r0, 8(r1)
/* 802FC728 002F9668  38 04 F8 18 */	addi r0, r4, __vt__Q28SysShape14BlendLinearFun@l
/* 802FC72C 002F966C  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 802FC730 002F9670  38 81 00 08 */	addi r4, r1, 8
/* 802FC734 002F9674  90 01 00 08 */	stw r0, 8(r1)
/* 802FC738 002F9678  C0 65 00 54 */	lfs f3, 0x54(r5)
/* 802FC73C 002F967C  80 63 01 84 */	lwz r3, 0x184(r3)
/* 802FC740 002F9680  EC 41 00 F2 */	fmuls f2, f1, f3
/* 802FC744 002F9684  EC 20 00 F2 */	fmuls f1, f0, f3
/* 802FC748 002F9688  FC 60 10 90 */	fmr f3, f2
/* 802FC74C 002F968C  4B E3 1A E1 */	bl animate__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape13BlendFunctionfff
/* 802FC750 002F9690  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 802FC754 002F9694  85 83 00 10 */	lwzu r12, 0x10(r3)
/* 802FC758 002F9698  83 FF 01 74 */	lwz r31, 0x174(r31)
/* 802FC75C 002F969C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FC760 002F96A0  7D 89 03 A6 */	mtctr r12
/* 802FC764 002F96A4  4E 80 04 21 */	bctrl 
/* 802FC768 002F96A8  80 9F 00 08 */	lwz r4, 8(r31)
/* 802FC76C 002F96AC  80 84 00 04 */	lwz r4, 4(r4)
/* 802FC770 002F96B0  80 84 00 28 */	lwz r4, 0x28(r4)
/* 802FC774 002F96B4  80 84 00 00 */	lwz r4, 0(r4)
/* 802FC778 002F96B8  90 64 00 54 */	stw r3, 0x54(r4)
/* 802FC77C 002F96BC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802FC780 002F96C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FC784 002F96C4  7C 08 03 A6 */	mtlr r0
/* 802FC788 002F96C8  38 21 00 20 */	addi r1, r1, 0x20
/* 802FC78C 002F96CC  4E 80 00 20 */	blr 
.endfn doAnimationUpdateAnimator__Q34Game10DangoMushi3ObjFv

.fn changeMaterial__Q34Game10DangoMushi3ObjFv, global
/* 802FC790 002F96D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802FC794 002F96D4  7C 08 02 A6 */	mflr r0
/* 802FC798 002F96D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802FC79C 002F96DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802FC7A0 002F96E0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802FC7A4 002F96E4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802FC7A8 002F96E8  93 81 00 10 */	stw r28, 0x10(r1)
/* 802FC7AC 002F96EC  7C 7C 1B 78 */	mr r28, r3
/* 802FC7B0 002F96F0  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802FC7B4 002F96F4  83 A3 00 08 */	lwz r29, 8(r3)
/* 802FC7B8 002F96F8  81 9D 00 00 */	lwz r12, 0(r29)
/* 802FC7BC 002F96FC  7F A3 EB 78 */	mr r3, r29
/* 802FC7C0 002F9700  83 DD 00 04 */	lwz r30, 4(r29)
/* 802FC7C4 002F9704  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802FC7C8 002F9708  7D 89 03 A6 */	mtctr r12
/* 802FC7CC 002F970C  4E 80 04 21 */	bctrl 
/* 802FC7D0 002F9710  80 7C 02 F0 */	lwz r3, 0x2f0(r28)
/* 802FC7D4 002F9714  C0 22 F0 50 */	lfs f1, lbl_8051D3B0@sda21(r2)
/* 802FC7D8 002F9718  48 13 7D 75 */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 802FC7DC 002F971C  3C 60 80 51 */	lis r3, j3dSys@ha
/* 802FC7E0 002F9720  3B 80 00 00 */	li r28, 0
/* 802FC7E4 002F9724  3B E3 F2 30 */	addi r31, r3, j3dSys@l
/* 802FC7E8 002F9728  48 00 00 3C */	b .L_802FC824
.L_802FC7EC:
/* 802FC7EC 002F972C  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 802FC7F0 002F9730  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 802FC7F4 002F9734  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 802FC7F8 002F9738  7C 84 1A 14 */	add r4, r4, r3
/* 802FC7FC 002F973C  90 9F 00 3C */	stw r4, 0x3c(r31)
/* 802FC800 002F9740  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 802FC804 002F9744  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 802FC808 002F9748  7C 63 00 2E */	lwzx r3, r3, r0
/* 802FC80C 002F974C  80 84 00 34 */	lwz r4, 0x34(r4)
/* 802FC810 002F9750  81 83 00 00 */	lwz r12, 0(r3)
/* 802FC814 002F9754  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802FC818 002F9758  7D 89 03 A6 */	mtctr r12
/* 802FC81C 002F975C  4E 80 04 21 */	bctrl 
/* 802FC820 002F9760  3B 9C 00 01 */	addi r28, r28, 1
.L_802FC824:
/* 802FC824 002F9764  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 802FC828 002F9768  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 802FC82C 002F976C  7C 03 00 40 */	cmplw r3, r0
/* 802FC830 002F9770  41 80 FF BC */	blt .L_802FC7EC
/* 802FC834 002F9774  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FC838 002F9778  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802FC83C 002F977C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802FC840 002F9780  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802FC844 002F9784  83 81 00 10 */	lwz r28, 0x10(r1)
/* 802FC848 002F9788  7C 08 03 A6 */	mtlr r0
/* 802FC84C 002F978C  38 21 00 20 */	addi r1, r1, 0x20
/* 802FC850 002F9790  4E 80 00 20 */	blr 
.endfn changeMaterial__Q34Game10DangoMushi3ObjFv

.fn doDirectDraw__Q34Game10DangoMushi3ObjFR8Graphics, global
/* 802FC854 002F9794  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game10DangoMushi3ObjFR8Graphics

.fn doDebugDraw__Q34Game10DangoMushi3ObjFR8Graphics, global
/* 802FC858 002F9798  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FC85C 002F979C  7C 08 02 A6 */	mflr r0
/* 802FC860 002F97A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FC864 002F97A4  4B E0 96 09 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802FC868 002F97A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FC86C 002F97AC  7C 08 03 A6 */	mtlr r0
/* 802FC870 002F97B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802FC874 002F97B4  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game10DangoMushi3ObjFR8Graphics

.fn setFSM__Q34Game10DangoMushi3ObjFPQ34Game10DangoMushi3FSM, global
/* 802FC878 002F97B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FC87C 002F97BC  7C 08 02 A6 */	mflr r0
/* 802FC880 002F97C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FC884 002F97C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FC888 002F97C8  7C 7F 1B 78 */	mr r31, r3
/* 802FC88C 002F97CC  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802FC890 002F97D0  7F E4 FB 78 */	mr r4, r31
/* 802FC894 002F97D4  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802FC898 002F97D8  81 83 00 00 */	lwz r12, 0(r3)
/* 802FC89C 002F97DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FC8A0 002F97E0  7D 89 03 A6 */	mtctr r12
/* 802FC8A4 002F97E4  4E 80 04 21 */	bctrl 
/* 802FC8A8 002F97E8  38 00 00 00 */	li r0, 0
/* 802FC8AC 002F97EC  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802FC8B0 002F97F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FC8B4 002F97F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FC8B8 002F97F8  7C 08 03 A6 */	mtlr r0
/* 802FC8BC 002F97FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802FC8C0 002F9800  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game10DangoMushi3ObjFPQ34Game10DangoMushi3FSM

.fn getShadowParam__Q34Game10DangoMushi3ObjFRQ24Game11ShadowParam, global
/* 802FC8C4 002F9804  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FC8C8 002F9808  7C 08 02 A6 */	mflr r0
/* 802FC8CC 002F980C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FC8D0 002F9810  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FC8D4 002F9814  7C 9F 23 78 */	mr r31, r4
/* 802FC8D8 002F9818  93 C1 00 08 */	stw r30, 8(r1)
/* 802FC8DC 002F981C  7C 7E 1B 78 */	mr r30, r3
/* 802FC8E0 002F9820  3C 60 80 49 */	lis r3, lbl_8048D7E0@ha
/* 802FC8E4 002F9824  38 03 D7 E0 */	addi r0, r3, lbl_8048D7E0@l
/* 802FC8E8 002F9828  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802FC8EC 002F982C  7C 04 03 78 */	mr r4, r0
/* 802FC8F0 002F9830  48 14 26 F5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802FC8F4 002F9834  48 12 CF AD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802FC8F8 002F9838  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 802FC8FC 002F983C  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 802FC900 002F9840  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802FC904 002F9844  C0 62 F0 54 */	lfs f3, lbl_8051D3B4@sda21(r2)
/* 802FC908 002F9848  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802FC90C 002F984C  C0 22 F0 48 */	lfs f1, lbl_8051D3A8@sda21(r2)
/* 802FC910 002F9850  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802FC914 002F9854  C0 02 F0 58 */	lfs f0, lbl_8051D3B8@sda21(r2)
/* 802FC918 002F9858  D0 9F 00 08 */	stfs f4, 8(r31)
/* 802FC91C 002F985C  C0 5E 01 90 */	lfs f2, 0x190(r30)
/* 802FC920 002F9860  EC 43 10 2A */	fadds f2, f3, f2
/* 802FC924 002F9864  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802FC928 002F9868  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802FC92C 002F986C  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802FC930 002F9870  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802FC934 002F9874  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 802FC938 002F9878  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802FC93C 002F987C  41 82 00 10 */	beq .L_802FC94C
/* 802FC940 002F9880  C0 02 F0 5C */	lfs f0, lbl_8051D3BC@sda21(r2)
/* 802FC944 002F9884  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802FC948 002F9888  48 00 00 0C */	b .L_802FC954
.L_802FC94C:
/* 802FC94C 002F988C  C0 02 F0 60 */	lfs f0, lbl_8051D3C0@sda21(r2)
/* 802FC950 002F9890  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802FC954:
/* 802FC954 002F9894  C0 22 F0 64 */	lfs f1, lbl_8051D3C4@sda21(r2)
/* 802FC958 002F9898  C0 1E 02 C8 */	lfs f0, 0x2c8(r30)
/* 802FC95C 002F989C  EC 01 00 32 */	fmuls f0, f1, f0
/* 802FC960 002F98A0  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802FC964 002F98A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FC968 002F98A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FC96C 002F98AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FC970 002F98B0  7C 08 03 A6 */	mtlr r0
/* 802FC974 002F98B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802FC978 002F98B8  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game10DangoMushi3ObjFRQ24Game11ShadowParam

.fn needShadow__Q34Game10DangoMushi3ObjFv, global
/* 802FC97C 002F98BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FC980 002F98C0  7C 08 02 A6 */	mflr r0
/* 802FC984 002F98C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FC988 002F98C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FC98C 002F98CC  7C 7F 1B 78 */	mr r31, r3
/* 802FC990 002F98D0  4B E0 AA 81 */	bl needShadow__Q24Game9EnemyBaseFv
/* 802FC994 002F98D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FC998 002F98D8  41 82 00 0C */	beq .L_802FC9A4
/* 802FC99C 002F98DC  38 60 00 01 */	li r3, 1
/* 802FC9A0 002F98E0  48 00 00 38 */	b .L_802FC9D8
.L_802FC9A4:
/* 802FC9A4 002F98E4  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802FC9A8 002F98E8  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FC9AC 002F98EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FC9B0 002F98F0  40 81 00 24 */	ble .L_802FC9D4
/* 802FC9B4 002F98F4  7F E3 FB 78 */	mr r3, r31
/* 802FC9B8 002F98F8  4B E0 AA 3D */	bl getStateID__Q24Game9EnemyBaseFv
/* 802FC9BC 002F98FC  2C 03 00 01 */	cmpwi r3, 1
/* 802FC9C0 002F9900  41 82 00 0C */	beq .L_802FC9CC
/* 802FC9C4 002F9904  2C 03 00 02 */	cmpwi r3, 2
/* 802FC9C8 002F9908  40 82 00 0C */	bne .L_802FC9D4
.L_802FC9CC:
/* 802FC9CC 002F990C  38 60 00 01 */	li r3, 1
/* 802FC9D0 002F9910  48 00 00 08 */	b .L_802FC9D8
.L_802FC9D4:
/* 802FC9D4 002F9914  38 60 00 00 */	li r3, 0
.L_802FC9D8:
/* 802FC9D8 002F9918  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FC9DC 002F991C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FC9E0 002F9920  7C 08 03 A6 */	mtlr r0
/* 802FC9E4 002F9924  38 21 00 10 */	addi r1, r1, 0x10
/* 802FC9E8 002F9928  4E 80 00 20 */	blr 
.endfn needShadow__Q34Game10DangoMushi3ObjFv

.fn damageCallBack__Q34Game10DangoMushi3ObjFPQ24Game8CreaturefP8CollPart, global
/* 802FC9EC 002F992C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802FC9F0 002F9930  7C 08 02 A6 */	mflr r0
/* 802FC9F4 002F9934  90 01 00 24 */	stw r0, 0x24(r1)
/* 802FC9F8 002F9938  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802FC9FC 002F993C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802FCA00 002F9940  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FCA04 002F9944  93 C1 00 08 */	stw r30, 8(r1)
/* 802FCA08 002F9948  FF E0 08 90 */	fmr f31, f1
/* 802FCA0C 002F994C  28 04 00 00 */	cmplwi r4, 0
/* 802FCA10 002F9950  7C 7E 1B 78 */	mr r30, r3
/* 802FCA14 002F9954  7C BF 2B 78 */	mr r31, r5
/* 802FCA18 002F9958  41 82 00 9C */	beq .L_802FCAB4
/* 802FCA1C 002F995C  7C 83 23 78 */	mr r3, r4
/* 802FCA20 002F9960  81 84 00 00 */	lwz r12, 0(r4)
/* 802FCA24 002F9964  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802FCA28 002F9968  7D 89 03 A6 */	mtctr r12
/* 802FCA2C 002F996C  4E 80 04 21 */	bctrl 
/* 802FCA30 002F9970  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FCA34 002F9974  41 82 00 80 */	beq .L_802FCAB4
/* 802FCA38 002F9978  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 802FCA3C 002F997C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802FCA40 002F9980  41 82 00 1C */	beq .L_802FCA5C
/* 802FCA44 002F9984  FC 20 F8 90 */	fmr f1, f31
/* 802FCA48 002F9988  C0 42 F0 58 */	lfs f2, lbl_8051D3B8@sda21(r2)
/* 802FCA4C 002F998C  7F C3 F3 78 */	mr r3, r30
/* 802FCA50 002F9990  4B E0 95 DD */	bl addDamage__Q24Game9EnemyBaseFff
/* 802FCA54 002F9994  38 60 00 01 */	li r3, 1
/* 802FCA58 002F9998  48 00 00 60 */	b .L_802FCAB8
.L_802FCA5C:
/* 802FCA5C 002F999C  28 1F 00 00 */	cmplwi r31, 0
/* 802FCA60 002F99A0  41 82 00 54 */	beq .L_802FCAB4
/* 802FCA64 002F99A4  3C 80 62 6F */	lis r4, 0x626F6430@ha
/* 802FCA68 002F99A8  38 7F 00 30 */	addi r3, r31, 0x30
/* 802FCA6C 002F99AC  38 84 64 30 */	addi r4, r4, 0x626F6430@l
/* 802FCA70 002F99B0  48 11 69 C5 */	bl __eq__4ID32FUl
/* 802FCA74 002F99B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FCA78 002F99B8  40 82 00 1C */	bne .L_802FCA94
/* 802FCA7C 002F99BC  3C 80 62 6F */	lis r4, 0x626F6431@ha
/* 802FCA80 002F99C0  38 7F 00 30 */	addi r3, r31, 0x30
/* 802FCA84 002F99C4  38 84 64 31 */	addi r4, r4, 0x626F6431@l
/* 802FCA88 002F99C8  48 11 69 AD */	bl __eq__4ID32FUl
/* 802FCA8C 002F99CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FCA90 002F99D0  41 82 00 24 */	beq .L_802FCAB4
.L_802FCA94:
/* 802FCA94 002F99D4  7F C3 F3 78 */	mr r3, r30
/* 802FCA98 002F99D8  48 00 26 31 */	bl createBodyDamageEffect__Q34Game10DangoMushi3ObjFv
/* 802FCA9C 002F99DC  FC 20 F8 90 */	fmr f1, f31
/* 802FCAA0 002F99E0  C0 42 F0 58 */	lfs f2, lbl_8051D3B8@sda21(r2)
/* 802FCAA4 002F99E4  7F C3 F3 78 */	mr r3, r30
/* 802FCAA8 002F99E8  4B E0 95 85 */	bl addDamage__Q24Game9EnemyBaseFff
/* 802FCAAC 002F99EC  38 60 00 01 */	li r3, 1
/* 802FCAB0 002F99F0  48 00 00 08 */	b .L_802FCAB8
.L_802FCAB4:
/* 802FCAB4 002F99F4  38 60 00 00 */	li r3, 0
.L_802FCAB8:
/* 802FCAB8 002F99F8  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802FCABC 002F99FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FCAC0 002F9A00  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802FCAC4 002F9A04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FCAC8 002F9A08  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FCACC 002F9A0C  7C 08 03 A6 */	mtlr r0
/* 802FCAD0 002F9A10  38 21 00 20 */	addi r1, r1, 0x20
/* 802FCAD4 002F9A14  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game10DangoMushi3ObjFPQ24Game8CreaturefP8CollPart

.fn earthquakeCallBack__Q34Game10DangoMushi3ObjFPQ24Game8Creaturef, global
/* 802FCAD8 002F9A18  38 60 00 00 */	li r3, 0
/* 802FCADC 002F9A1C  4E 80 00 20 */	blr 
.endfn earthquakeCallBack__Q34Game10DangoMushi3ObjFPQ24Game8Creaturef

.fn collisionCallback__Q34Game10DangoMushi3ObjFRQ24Game9CollEvent, global
/* 802FCAE0 002F9A20  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802FCAE4 002F9A24  7C 08 02 A6 */	mflr r0
/* 802FCAE8 002F9A28  90 01 00 24 */	stw r0, 0x24(r1)
/* 802FCAEC 002F9A2C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802FCAF0 002F9A30  7C 9F 23 78 */	mr r31, r4
/* 802FCAF4 002F9A34  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802FCAF8 002F9A38  7C 7E 1B 78 */	mr r30, r3
/* 802FCAFC 002F9A3C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802FCB00 002F9A40  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802FCB04 002F9A44  40 82 00 B0 */	bne .L_802FCBB4
/* 802FCB08 002F9A48  80 7F 00 00 */	lwz r3, 0(r31)
/* 802FCB0C 002F9A4C  28 03 00 00 */	cmplwi r3, 0
/* 802FCB10 002F9A50  41 82 00 A4 */	beq .L_802FCBB4
/* 802FCB14 002F9A54  88 1E 02 C0 */	lbz r0, 0x2c0(r30)
/* 802FCB18 002F9A58  28 00 00 00 */	cmplwi r0, 0
/* 802FCB1C 002F9A5C  41 82 00 58 */	beq .L_802FCB74
/* 802FCB20 002F9A60  80 03 00 C8 */	lwz r0, 0xc8(r3)
/* 802FCB24 002F9A64  28 00 00 00 */	cmplwi r0, 0
/* 802FCB28 002F9A68  41 82 00 4C */	beq .L_802FCB74
/* 802FCB2C 002F9A6C  80 DE 00 C0 */	lwz r6, 0xc0(r30)
/* 802FCB30 002F9A70  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 802FCB34 002F9A74  3C 80 80 4B */	lis r4, __vt__Q24Game13InteractPress@ha
/* 802FCB38 002F9A78  38 00 00 00 */	li r0, 0
/* 802FCB3C 002F9A7C  C0 06 06 04 */	lfs f0, 0x604(r6)
/* 802FCB40 002F9A80  38 C5 A3 00 */	addi r6, r5, __vt__Q24Game11Interaction@l
/* 802FCB44 002F9A84  38 A4 B3 20 */	addi r5, r4, __vt__Q24Game13InteractPress@l
/* 802FCB48 002F9A88  38 81 00 08 */	addi r4, r1, 8
/* 802FCB4C 002F9A8C  90 C1 00 08 */	stw r6, 8(r1)
/* 802FCB50 002F9A90  93 C1 00 0C */	stw r30, 0xc(r1)
/* 802FCB54 002F9A94  90 A1 00 08 */	stw r5, 8(r1)
/* 802FCB58 002F9A98  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802FCB5C 002F9A9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FCB60 002F9AA0  81 83 00 00 */	lwz r12, 0(r3)
/* 802FCB64 002F9AA4  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802FCB68 002F9AA8  7D 89 03 A6 */	mtctr r12
/* 802FCB6C 002F9AAC  4E 80 04 21 */	bctrl 
/* 802FCB70 002F9AB0  48 00 00 44 */	b .L_802FCBB4
.L_802FCB74:
/* 802FCB74 002F9AB4  88 1E 02 C1 */	lbz r0, 0x2c1(r30)
/* 802FCB78 002F9AB8  28 00 00 00 */	cmplwi r0, 0
/* 802FCB7C 002F9ABC  41 82 00 38 */	beq .L_802FCBB4
/* 802FCB80 002F9AC0  80 7F 00 08 */	lwz r3, 8(r31)
/* 802FCB84 002F9AC4  28 03 00 00 */	cmplwi r3, 0
/* 802FCB88 002F9AC8  41 82 00 2C */	beq .L_802FCBB4
/* 802FCB8C 002F9ACC  3C 80 68 61 */	lis r4, 0x6861522A@ha
/* 802FCB90 002F9AD0  38 63 00 30 */	addi r3, r3, 0x30
/* 802FCB94 002F9AD4  38 84 52 2A */	addi r4, r4, 0x6861522A@l
/* 802FCB98 002F9AD8  38 A0 00 2A */	li r5, 0x2a
/* 802FCB9C 002F9ADC  48 11 67 61 */	bl match__4ID32FUlc
/* 802FCBA0 002F9AE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FCBA4 002F9AE4  41 82 00 10 */	beq .L_802FCBB4
/* 802FCBA8 002F9AE8  80 9F 00 00 */	lwz r4, 0(r31)
/* 802FCBAC 002F9AEC  7F C3 F3 78 */	mr r3, r30
/* 802FCBB0 002F9AF0  48 00 13 31 */	bl flickHandCollision__Q34Game10DangoMushi3ObjFPQ24Game8Creature
.L_802FCBB4:
/* 802FCBB4 002F9AF4  7F C3 F3 78 */	mr r3, r30
/* 802FCBB8 002F9AF8  7F E4 FB 78 */	mr r4, r31
/* 802FCBBC 002F9AFC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FCBC0 002F9B00  81 8C 02 40 */	lwz r12, 0x240(r12)
/* 802FCBC4 002F9B04  7D 89 03 A6 */	mtctr r12
/* 802FCBC8 002F9B08  4E 80 04 21 */	bctrl 
/* 802FCBCC 002F9B0C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FCBD0 002F9B10  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802FCBD4 002F9B14  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802FCBD8 002F9B18  7C 08 03 A6 */	mtlr r0
/* 802FCBDC 002F9B1C  38 21 00 20 */	addi r1, r1, 0x20
/* 802FCBE0 002F9B20  4E 80 00 20 */	blr 
.endfn collisionCallback__Q34Game10DangoMushi3ObjFRQ24Game9CollEvent

.fn wallCallback__Q34Game10DangoMushi3ObjFRCQ24Game8MoveInfo, global
/* 802FCBE4 002F9B24  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802FCBE8 002F9B28  7C 08 02 A6 */	mflr r0
/* 802FCBEC 002F9B2C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802FCBF0 002F9B30  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802FCBF4 002F9B34  7C 7F 1B 78 */	mr r31, r3
/* 802FCBF8 002F9B38  88 03 02 C0 */	lbz r0, 0x2c0(r3)
/* 802FCBFC 002F9B3C  28 00 00 00 */	cmplwi r0, 0
/* 802FCC00 002F9B40  41 82 00 DC */	beq .L_802FCCDC
/* 802FCC04 002F9B44  C0 7F 02 E0 */	lfs f3, 0x2e0(r31)
/* 802FCC08 002F9B48  C0 BF 02 E4 */	lfs f5, 0x2e4(r31)
/* 802FCC0C 002F9B4C  EC 23 00 F2 */	fmuls f1, f3, f3
/* 802FCC10 002F9B50  C0 9F 02 DC */	lfs f4, 0x2dc(r31)
/* 802FCC14 002F9B54  EC 45 01 72 */	fmuls f2, f5, f5
/* 802FCC18 002F9B58  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FCC1C 002F9B5C  EC 24 09 3A */	fmadds f1, f4, f4, f1
/* 802FCC20 002F9B60  EC 22 08 2A */	fadds f1, f2, f1
/* 802FCC24 002F9B64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FCC28 002F9B68  40 81 00 14 */	ble .L_802FCC3C
/* 802FCC2C 002F9B6C  40 81 00 14 */	ble .L_802FCC40
/* 802FCC30 002F9B70  FC 00 08 34 */	frsqrte f0, f1
/* 802FCC34 002F9B74  EC 20 00 72 */	fmuls f1, f0, f1
/* 802FCC38 002F9B78  48 00 00 08 */	b .L_802FCC40
.L_802FCC3C:
/* 802FCC3C 002F9B7C  FC 20 00 90 */	fmr f1, f0
.L_802FCC40:
/* 802FCC40 002F9B80  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FCC44 002F9B84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FCC48 002F9B88  40 81 00 1C */	ble .L_802FCC64
/* 802FCC4C 002F9B8C  C0 02 F0 58 */	lfs f0, lbl_8051D3B8@sda21(r2)
/* 802FCC50 002F9B90  EC 00 08 24 */	fdivs f0, f0, f1
/* 802FCC54 002F9B94  EC 84 00 32 */	fmuls f4, f4, f0
/* 802FCC58 002F9B98  EC 63 00 32 */	fmuls f3, f3, f0
/* 802FCC5C 002F9B9C  EC A5 00 32 */	fmuls f5, f5, f0
/* 802FCC60 002F9BA0  48 00 00 08 */	b .L_802FCC68
.L_802FCC64:
/* 802FCC64 002F9BA4  FC 20 00 90 */	fmr f1, f0
.L_802FCC68:
/* 802FCC68 002F9BA8  C0 02 F0 5C */	lfs f0, lbl_8051D3BC@sda21(r2)
/* 802FCC6C 002F9BAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FCC70 002F9BB0  40 81 00 6C */	ble .L_802FCCDC
/* 802FCC74 002F9BB4  C0 04 00 60 */	lfs f0, 0x60(r4)
/* 802FCC78 002F9BB8  C0 44 00 5C */	lfs f2, 0x5c(r4)
/* 802FCC7C 002F9BBC  EC 23 00 32 */	fmuls f1, f3, f0
/* 802FCC80 002F9BC0  C0 64 00 64 */	lfs f3, 0x64(r4)
/* 802FCC84 002F9BC4  C0 02 F0 68 */	lfs f0, lbl_8051D3C8@sda21(r2)
/* 802FCC88 002F9BC8  EC 24 08 BA */	fmadds f1, f4, f2, f1
/* 802FCC8C 002F9BCC  EC 25 08 FA */	fmadds f1, f5, f3, f1
/* 802FCC90 002F9BD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FCC94 002F9BD4  40 80 00 48 */	bge .L_802FCCDC
/* 802FCC98 002F9BD8  80 C4 00 5C */	lwz r6, 0x5c(r4)
/* 802FCC9C 002F9BDC  7F E3 FB 78 */	mr r3, r31
/* 802FCCA0 002F9BE0  80 A4 00 60 */	lwz r5, 0x60(r4)
/* 802FCCA4 002F9BE4  80 04 00 64 */	lwz r0, 0x64(r4)
/* 802FCCA8 002F9BE8  38 81 00 08 */	addi r4, r1, 8
/* 802FCCAC 002F9BEC  90 C1 00 08 */	stw r6, 8(r1)
/* 802FCCB0 002F9BF0  90 A1 00 0C */	stw r5, 0xc(r1)
/* 802FCCB4 002F9BF4  90 01 00 10 */	stw r0, 0x10(r1)
/* 802FCCB8 002F9BF8  48 00 24 8D */	bl "createBodyWallCrashEffect__Q34Game10DangoMushi3ObjF10Vector3<f>"
/* 802FCCBC 002F9BFC  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802FCCC0 002F9C00  7F E4 FB 78 */	mr r4, r31
/* 802FCCC4 002F9C04  38 A0 00 06 */	li r5, 6
/* 802FCCC8 002F9C08  38 C0 00 00 */	li r6, 0
/* 802FCCCC 002F9C0C  81 83 00 00 */	lwz r12, 0(r3)
/* 802FCCD0 002F9C10  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802FCCD4 002F9C14  7D 89 03 A6 */	mtctr r12
/* 802FCCD8 002F9C18  4E 80 04 21 */	bctrl 
.L_802FCCDC:
/* 802FCCDC 002F9C1C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FCCE0 002F9C20  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802FCCE4 002F9C24  7C 08 03 A6 */	mtlr r0
/* 802FCCE8 002F9C28  38 21 00 20 */	addi r1, r1, 0x20
/* 802FCCEC 002F9C2C  4E 80 00 20 */	blr 
.endfn wallCallback__Q34Game10DangoMushi3ObjFRCQ24Game8MoveInfo

.fn doStartStoneState__Q34Game10DangoMushi3ObjFv, global
/* 802FCCF0 002F9C30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FCCF4 002F9C34  7C 08 02 A6 */	mflr r0
/* 802FCCF8 002F9C38  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FCCFC 002F9C3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FCD00 002F9C40  7C 7F 1B 78 */	mr r31, r3
/* 802FCD04 002F9C44  4B E0 61 F1 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802FCD08 002F9C48  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802FCD0C 002F9C4C  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 802FCD10 002F9C50  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802FCD14 002F9C54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FCD18 002F9C58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FCD1C 002F9C5C  7C 08 03 A6 */	mtlr r0
/* 802FCD20 002F9C60  38 21 00 10 */	addi r1, r1, 0x10
/* 802FCD24 002F9C64  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game10DangoMushi3ObjFv

.fn doFinishStoneState__Q34Game10DangoMushi3ObjFv, global
/* 802FCD28 002F9C68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FCD2C 002F9C6C  7C 08 02 A6 */	mflr r0
/* 802FCD30 002F9C70  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FCD34 002F9C74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FCD38 002F9C78  7C 7F 1B 78 */	mr r31, r3
/* 802FCD3C 002F9C7C  4B E0 61 CD */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802FCD40 002F9C80  C0 22 F0 58 */	lfs f1, lbl_8051D3B8@sda21(r2)
/* 802FCD44 002F9C84  7F E3 FB 78 */	mr r3, r31
/* 802FCD48 002F9C88  C0 42 F0 54 */	lfs f2, lbl_8051D3B4@sda21(r2)
/* 802FCD4C 002F9C8C  38 80 00 00 */	li r4, 0
/* 802FCD50 002F9C90  C0 62 F0 48 */	lfs f3, lbl_8051D3A8@sda21(r2)
/* 802FCD54 002F9C94  C0 82 F0 6C */	lfs f4, lbl_8051D3CC@sda21(r2)
/* 802FCD58 002F9C98  4B E1 63 C5 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802FCD5C 002F9C9C  7F E3 FB 78 */	mr r3, r31
/* 802FCD60 002F9CA0  4B E0 A6 95 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802FCD64 002F9CA4  2C 03 00 06 */	cmpwi r3, 6
/* 802FCD68 002F9CA8  40 82 00 14 */	bne .L_802FCD7C
/* 802FCD6C 002F9CAC  7F E3 FB 78 */	mr r3, r31
/* 802FCD70 002F9CB0  48 00 14 1D */	bl isNoDamageCollision__Q34Game10DangoMushi3ObjFv
/* 802FCD74 002F9CB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FCD78 002F9CB8  41 82 00 10 */	beq .L_802FCD88
.L_802FCD7C:
/* 802FCD7C 002F9CBC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802FCD80 002F9CC0  60 00 00 01 */	ori r0, r0, 1
/* 802FCD84 002F9CC4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_802FCD88:
/* 802FCD88 002F9CC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FCD8C 002F9CCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FCD90 002F9CD0  7C 08 03 A6 */	mtlr r0
/* 802FCD94 002F9CD4  38 21 00 10 */	addi r1, r1, 0x10
/* 802FCD98 002F9CD8  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game10DangoMushi3ObjFv

.fn startCarcassMotion__Q34Game10DangoMushi3ObjFv, global
/* 802FCD9C 002F9CDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FCDA0 002F9CE0  7C 08 02 A6 */	mflr r0
/* 802FCDA4 002F9CE4  38 80 00 08 */	li r4, 8
/* 802FCDA8 002F9CE8  38 A0 00 00 */	li r5, 0
/* 802FCDAC 002F9CEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FCDB0 002F9CF0  4B E0 82 55 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802FCDB4 002F9CF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FCDB8 002F9CF8  7C 08 03 A6 */	mtlr r0
/* 802FCDBC 002F9CFC  38 21 00 10 */	addi r1, r1, 0x10
/* 802FCDC0 002F9D00  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game10DangoMushi3ObjFv

.fn doStartMovie__Q34Game10DangoMushi3ObjFv, global
/* 802FCDC4 002F9D04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FCDC8 002F9D08  7C 08 02 A6 */	mflr r0
/* 802FCDCC 002F9D0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FCDD0 002F9D10  48 00 27 D5 */	bl effectDrawOff__Q34Game10DangoMushi3ObjFv
/* 802FCDD4 002F9D14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FCDD8 002F9D18  7C 08 03 A6 */	mtlr r0
/* 802FCDDC 002F9D1C  38 21 00 10 */	addi r1, r1, 0x10
/* 802FCDE0 002F9D20  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game10DangoMushi3ObjFv

.fn doEndMovie__Q34Game10DangoMushi3ObjFv, global
/* 802FCDE4 002F9D24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FCDE8 002F9D28  7C 08 02 A6 */	mflr r0
/* 802FCDEC 002F9D2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FCDF0 002F9D30  48 00 27 51 */	bl effectDrawOn__Q34Game10DangoMushi3ObjFv
/* 802FCDF4 002F9D34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FCDF8 002F9D38  7C 08 03 A6 */	mtlr r0
/* 802FCDFC 002F9D3C  38 21 00 10 */	addi r1, r1, 0x10
/* 802FCE00 002F9D40  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game10DangoMushi3ObjFv

.fn initWalkSmokeEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FCE04 002F9D44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FCE08 002F9D48  7C 08 02 A6 */	mflr r0
/* 802FCE0C 002F9D4C  38 80 00 01 */	li r4, 1
/* 802FCE10 002F9D50  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FCE14 002F9D54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FCE18 002F9D58  7C 7F 1B 78 */	mr r31, r3
/* 802FCE1C 002F9D5C  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 802FCE20 002F9D60  4B E2 D5 45 */	bl alloc__Q34Game15WalkSmokeEffect3MgrFi
/* 802FCE24 002F9D64  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 802FCE28 002F9D68  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 802FCE2C 002F9D6C  C0 22 F0 78 */	lfs f1, lbl_8051D3D8@sda21(r2)
/* 802FCE30 002F9D70  38 80 00 00 */	li r4, 0
/* 802FCE34 002F9D74  38 C2 F0 70 */	addi r6, r2, lbl_8051D3D0@sda21
/* 802FCE38 002F9D78  4B E2 D7 A9 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 802FCE3C 002F9D7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FCE40 002F9D80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FCE44 002F9D84  7C 08 03 A6 */	mtlr r0
/* 802FCE48 002F9D88  38 21 00 10 */	addi r1, r1, 0x10
/* 802FCE4C 002F9D8C  4E 80 00 20 */	blr 
.endfn initWalkSmokeEffect__Q34Game10DangoMushi3ObjFv

.fn getWalkSmokeEffectMgr__Q34Game10DangoMushi3ObjFv, global
/* 802FCE50 002F9D90  38 63 02 E8 */	addi r3, r3, 0x2e8
/* 802FCE54 002F9D94  4E 80 00 20 */	blr 
.endfn getWalkSmokeEffectMgr__Q34Game10DangoMushi3ObjFv

.fn "getCommonEffectPos__Q34Game10DangoMushi3ObjFR10Vector3<f>", global
/* 802FCE58 002F9D98  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802FCE5C 002F9D9C  C0 22 F0 50 */	lfs f1, lbl_8051D3B0@sda21(r2)
/* 802FCE60 002F9DA0  D0 04 00 00 */	stfs f0, 0(r4)
/* 802FCE64 002F9DA4  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802FCE68 002F9DA8  EC 01 00 2A */	fadds f0, f1, f0
/* 802FCE6C 002F9DAC  D0 04 00 04 */	stfs f0, 4(r4)
/* 802FCE70 002F9DB0  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 802FCE74 002F9DB4  D0 04 00 08 */	stfs f0, 8(r4)
/* 802FCE78 002F9DB8  4E 80 00 20 */	blr 
.endfn "getCommonEffectPos__Q34Game10DangoMushi3ObjFR10Vector3<f>"

.fn addShadowScale__Q34Game10DangoMushi3ObjFv, global
/* 802FCE7C 002F9DBC  C0 63 02 C8 */	lfs f3, 0x2c8(r3)
/* 802FCE80 002F9DC0  C0 42 F0 58 */	lfs f2, lbl_8051D3B8@sda21(r2)
/* 802FCE84 002F9DC4  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 802FCE88 002F9DC8  40 80 00 34 */	bge .L_802FCEBC
/* 802FCE8C 002F9DCC  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802FCE90 002F9DD0  C0 22 F0 7C */	lfs f1, lbl_8051D3DC@sda21(r2)
/* 802FCE94 002F9DD4  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 802FCE98 002F9DD8  EC 01 18 3A */	fmadds f0, f1, f0, f3
/* 802FCE9C 002F9DDC  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 802FCEA0 002F9DE0  C0 03 02 C8 */	lfs f0, 0x2c8(r3)
/* 802FCEA4 002F9DE4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802FCEA8 002F9DE8  4C 41 13 82 */	cror 2, 1, 2
/* 802FCEAC 002F9DEC  40 82 00 18 */	bne .L_802FCEC4
/* 802FCEB0 002F9DF0  D0 43 02 C8 */	stfs f2, 0x2c8(r3)
/* 802FCEB4 002F9DF4  38 60 00 01 */	li r3, 1
/* 802FCEB8 002F9DF8  4E 80 00 20 */	blr 
.L_802FCEBC:
/* 802FCEBC 002F9DFC  38 60 00 01 */	li r3, 1
/* 802FCEC0 002F9E00  4E 80 00 20 */	blr 
.L_802FCEC4:
/* 802FCEC4 002F9E04  38 60 00 00 */	li r3, 0
/* 802FCEC8 002F9E08  4E 80 00 20 */	blr 
.endfn addShadowScale__Q34Game10DangoMushi3ObjFv

.fn setRandTarget__Q34Game10DangoMushi3ObjFv, global
/* 802FCECC 002F9E0C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802FCED0 002F9E10  7C 08 02 A6 */	mflr r0
/* 802FCED4 002F9E14  90 01 00 64 */	stw r0, 0x64(r1)
/* 802FCED8 002F9E18  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 802FCEDC 002F9E1C  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 802FCEE0 002F9E20  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 802FCEE4 002F9E24  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 802FCEE8 002F9E28  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802FCEEC 002F9E2C  7C 7F 1B 78 */	mr r31, r3
/* 802FCEF0 002F9E30  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802FCEF4 002F9E34  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 802FCEF8 002F9E38  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802FCEFC 002F9E3C  EF C1 00 28 */	fsubs f30, f1, f0
/* 802FCF00 002F9E40  4B DC C6 A1 */	bl rand
/* 802FCF04 002F9E44  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802FCF08 002F9E48  3C 00 43 30 */	lis r0, 0x4330
/* 802FCF0C 002F9E4C  90 61 00 0C */	stw r3, 0xc(r1)
/* 802FCF10 002F9E50  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802FCF14 002F9E54  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802FCF18 002F9E58  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802FCF1C 002F9E5C  90 01 00 08 */	stw r0, 8(r1)
/* 802FCF20 002F9E60  C8 22 F0 98 */	lfd f1, lbl_8051D3F8@sda21(r2)
/* 802FCF24 002F9E64  C8 01 00 08 */	lfd f0, 8(r1)
/* 802FCF28 002F9E68  C0 A2 F0 80 */	lfs f5, lbl_8051D3E0@sda21(r2)
/* 802FCF2C 002F9E6C  EC 00 08 28 */	fsubs f0, f0, f1
/* 802FCF30 002F9E70  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 802FCF34 002F9E74  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 802FCF38 002F9E78  C0 84 03 84 */	lfs f4, 0x384(r4)
/* 802FCF3C 002F9E7C  EC DE 00 32 */	fmuls f6, f30, f0
/* 802FCF40 002F9E80  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 802FCF44 002F9E84  EC 23 08 28 */	fsubs f1, f3, f1
/* 802FCF48 002F9E88  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802FCF4C 002F9E8C  EC 66 28 24 */	fdivs f3, f6, f5
/* 802FCF50 002F9E90  EF E4 18 2A */	fadds f31, f4, f3
/* 802FCF54 002F9E94  EC 42 00 28 */	fsubs f2, f2, f0
/* 802FCF58 002F9E98  4B D3 81 B1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802FCF5C 002F9E9C  FF C0 08 90 */	fmr f30, f1
/* 802FCF60 002F9EA0  4B DC C6 41 */	bl rand
/* 802FCF64 002F9EA4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802FCF68 002F9EA8  3C 00 43 30 */	lis r0, 0x4330
/* 802FCF6C 002F9EAC  90 61 00 14 */	stw r3, 0x14(r1)
/* 802FCF70 002F9EB0  C8 42 F0 98 */	lfd f2, lbl_8051D3F8@sda21(r2)
/* 802FCF74 002F9EB4  90 01 00 10 */	stw r0, 0x10(r1)
/* 802FCF78 002F9EB8  C0 62 F0 84 */	lfs f3, lbl_8051D3E4@sda21(r2)
/* 802FCF7C 002F9EBC  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802FCF80 002F9EC0  C0 22 F0 80 */	lfs f1, lbl_8051D3E0@sda21(r2)
/* 802FCF84 002F9EC4  EC 80 10 28 */	fsubs f4, f0, f2
/* 802FCF88 002F9EC8  C0 42 F0 88 */	lfs f2, lbl_8051D3E8@sda21(r2)
/* 802FCF8C 002F9ECC  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FCF90 002F9ED0  EC 63 01 32 */	fmuls f3, f3, f4
/* 802FCF94 002F9ED4  EC 23 08 24 */	fdivs f1, f3, f1
/* 802FCF98 002F9ED8  EC 3E 08 2A */	fadds f1, f30, f1
/* 802FCF9C 002F9EDC  EC A2 08 2A */	fadds f5, f2, f1
/* 802FCFA0 002F9EE0  FC 20 28 90 */	fmr f1, f5
/* 802FCFA4 002F9EE4  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802FCFA8 002F9EE8  40 80 00 08 */	bge .L_802FCFB0
/* 802FCFAC 002F9EEC  FC 20 28 50 */	fneg f1, f5
.L_802FCFB0:
/* 802FCFB0 002F9EF0  C0 62 F0 8C */	lfs f3, lbl_8051D3EC@sda21(r2)
/* 802FCFB4 002F9EF4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802FCFB8 002F9EF8  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FCFBC 002F9EFC  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802FCFC0 002F9F00  EC 41 00 F2 */	fmuls f2, f1, f3
/* 802FCFC4 002F9F04  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 802FCFC8 002F9F08  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802FCFCC 002F9F0C  C0 9F 01 9C */	lfs f4, 0x19c(r31)
/* 802FCFD0 002F9F10  FC 00 10 1E */	fctiwz f0, f2
/* 802FCFD4 002F9F14  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802FCFD8 002F9F18  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802FCFDC 002F9F1C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802FCFE0 002F9F20  7C 64 02 14 */	add r3, r4, r0
/* 802FCFE4 002F9F24  C0 03 00 04 */	lfs f0, 4(r3)
/* 802FCFE8 002F9F28  EC 5F 08 3A */	fmadds f2, f31, f0, f1
/* 802FCFEC 002F9F2C  40 80 00 28 */	bge .L_802FD014
/* 802FCFF0 002F9F30  C0 02 F0 90 */	lfs f0, lbl_8051D3F0@sda21(r2)
/* 802FCFF4 002F9F34  EC 05 00 32 */	fmuls f0, f5, f0
/* 802FCFF8 002F9F38  FC 00 00 1E */	fctiwz f0, f0
/* 802FCFFC 002F9F3C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802FD000 002F9F40  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FD004 002F9F44  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802FD008 002F9F48  7C 04 04 2E */	lfsx f0, r4, r0
/* 802FD00C 002F9F4C  FC 20 00 50 */	fneg f1, f0
/* 802FD010 002F9F50  48 00 00 1C */	b .L_802FD02C
.L_802FD014:
/* 802FD014 002F9F54  EC 05 00 F2 */	fmuls f0, f5, f3
/* 802FD018 002F9F58  FC 00 00 1E */	fctiwz f0, f0
/* 802FD01C 002F9F5C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802FD020 002F9F60  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802FD024 002F9F64  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802FD028 002F9F68  7C 24 04 2E */	lfsx f1, r4, r0
.L_802FD02C:
/* 802FD02C 002F9F6C  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 802FD030 002F9F70  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 802FD034 002F9F74  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802FD038 002F9F78  D0 9F 02 D4 */	stfs f4, 0x2d4(r31)
/* 802FD03C 002F9F7C  D0 5F 02 D8 */	stfs f2, 0x2d8(r31)
/* 802FD040 002F9F80  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 802FD044 002F9F84  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 802FD048 002F9F88  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 802FD04C 002F9F8C  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 802FD050 002F9F90  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802FD054 002F9F94  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802FD058 002F9F98  7C 08 03 A6 */	mtlr r0
/* 802FD05C 002F9F9C  38 21 00 60 */	addi r1, r1, 0x60
/* 802FD060 002F9FA0  4E 80 00 20 */	blr 
.endfn setRandTarget__Q34Game10DangoMushi3ObjFv

.fn isReachedTarget__Q34Game10DangoMushi3ObjFv, global
/* 802FD064 002F9FA4  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802FD068 002F9FA8  C0 03 02 D8 */	lfs f0, 0x2d8(r3)
/* 802FD06C 002F9FAC  C0 43 01 8C */	lfs f2, 0x18c(r3)
/* 802FD070 002F9FB0  EC 61 00 28 */	fsubs f3, f1, f0
/* 802FD074 002F9FB4  C0 23 02 D0 */	lfs f1, 0x2d0(r3)
/* 802FD078 002F9FB8  C0 02 F0 A0 */	lfs f0, lbl_8051D400@sda21(r2)
/* 802FD07C 002F9FBC  EC 42 08 28 */	fsubs f2, f2, f1
/* 802FD080 002F9FC0  EC 23 00 F2 */	fmuls f1, f3, f3
/* 802FD084 002F9FC4  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802FD088 002F9FC8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FD08C 002F9FCC  7C 00 00 26 */	mfcr r0
/* 802FD090 002F9FD0  54 03 0F FE */	srwi r3, r0, 0x1f
/* 802FD094 002F9FD4  4E 80 00 20 */	blr 
.endfn isReachedTarget__Q34Game10DangoMushi3ObjFv

.fn getSearchedTarget__Q34Game10DangoMushi3ObjFv, global
/* 802FD098 002F9FD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FD09C 002F9FDC  7C 08 02 A6 */	mflr r0
/* 802FD0A0 002F9FE0  38 80 00 00 */	li r4, 0
/* 802FD0A4 002F9FE4  38 A0 00 00 */	li r5, 0
/* 802FD0A8 002F9FE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FD0AC 002F9FEC  38 C0 00 00 */	li r6, 0
/* 802FD0B0 002F9FF0  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 802FD0B4 002F9FF4  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 802FD0B8 002F9FF8  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 802FD0BC 002F9FFC  4B E1 5F 95 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 802FD0C0 002FA000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FD0C4 002FA004  7C 08 03 A6 */	mtlr r0
/* 802FD0C8 002FA008  38 21 00 10 */	addi r1, r1, 0x10
/* 802FD0CC 002FA00C  4E 80 00 20 */	blr 
.endfn getSearchedTarget__Q34Game10DangoMushi3ObjFv

.fn rollingMove__Q34Game10DangoMushi3ObjFv, global
/* 802FD0D0 002FA010  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802FD0D4 002FA014  7C 08 02 A6 */	mflr r0
/* 802FD0D8 002FA018  90 01 00 84 */	stw r0, 0x84(r1)
/* 802FD0DC 002FA01C  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 802FD0E0 002FA020  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802FD0E4 002FA024  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 802FD0E8 002FA028  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 802FD0EC 002FA02C  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 802FD0F0 002FA030  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 802FD0F4 002FA034  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 802FD0F8 002FA038  F3 81 00 48 */	psq_st f28, 72(r1), 0, qr0
/* 802FD0FC 002FA03C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802FD100 002FA040  7C 7F 1B 78 */	mr r31, r3
/* 802FD104 002FA044  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802FD108 002FA048  4B E5 DB 19 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 802FD10C 002FA04C  28 03 00 00 */	cmplwi r3, 0
/* 802FD110 002FA050  40 82 00 24 */	bne .L_802FD134
/* 802FD114 002FA054  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802FD118 002FA058  7F E3 FB 78 */	mr r3, r31
/* 802FD11C 002FA05C  C0 22 F0 A4 */	lfs f1, lbl_8051D404@sda21(r2)
/* 802FD120 002FA060  38 80 00 00 */	li r4, 0
/* 802FD124 002FA064  C0 45 03 D4 */	lfs f2, 0x3d4(r5)
/* 802FD128 002FA068  38 A0 00 00 */	li r5, 0
/* 802FD12C 002FA06C  38 C0 00 00 */	li r6, 0
/* 802FD130 002FA070  4B E1 5F 21 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
.L_802FD134:
/* 802FD134 002FA074  28 03 00 00 */	cmplwi r3, 0
/* 802FD138 002FA078  41 82 00 28 */	beq .L_802FD160
/* 802FD13C 002FA07C  7C 64 1B 78 */	mr r4, r3
/* 802FD140 002FA080  38 61 00 2C */	addi r3, r1, 0x2c
/* 802FD144 002FA084  81 84 00 00 */	lwz r12, 0(r4)
/* 802FD148 002FA088  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FD14C 002FA08C  7D 89 03 A6 */	mtctr r12
/* 802FD150 002FA090  4E 80 04 21 */	bctrl 
/* 802FD154 002FA094  C3 A1 00 2C */	lfs f29, 0x2c(r1)
/* 802FD158 002FA098  C3 81 00 34 */	lfs f28, 0x34(r1)
/* 802FD15C 002FA09C  48 00 00 1C */	b .L_802FD178
.L_802FD160:
/* 802FD160 002FA0A0  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 802FD164 002FA0A4  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 802FD168 002FA0A8  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 802FD16C 002FA0AC  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 802FD170 002FA0B0  EF A3 10 2A */	fadds f29, f3, f2
/* 802FD174 002FA0B4  EF 81 00 2A */	fadds f28, f1, f0
.L_802FD178:
/* 802FD178 002FA0B8  7F E4 FB 78 */	mr r4, r31
/* 802FD17C 002FA0BC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802FD180 002FA0C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FD184 002FA0C4  38 61 00 14 */	addi r3, r1, 0x14
/* 802FD188 002FA0C8  C3 C5 08 6C */	lfs f30, 0x86c(r5)
/* 802FD18C 002FA0CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FD190 002FA0D0  C3 E5 08 44 */	lfs f31, 0x844(r5)
/* 802FD194 002FA0D4  7D 89 03 A6 */	mtctr r12
/* 802FD198 002FA0D8  4E 80 04 21 */	bctrl 
/* 802FD19C 002FA0DC  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 802FD1A0 002FA0E0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802FD1A4 002FA0E4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802FD1A8 002FA0E8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802FD1AC 002FA0EC  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 802FD1B0 002FA0F0  EC 3D 20 28 */	fsubs f1, f29, f4
/* 802FD1B4 002FA0F4  EC 5C 00 28 */	fsubs f2, f28, f0
/* 802FD1B8 002FA0F8  D0 81 00 08 */	stfs f4, 8(r1)
/* 802FD1BC 002FA0FC  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 802FD1C0 002FA100  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802FD1C4 002FA104  4B D3 7F 45 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802FD1C8 002FA108  48 11 4A 09 */	bl roundAng__Ff
/* 802FD1CC 002FA10C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FD1D0 002FA110  FF A0 08 90 */	fmr f29, f1
/* 802FD1D4 002FA114  7F E3 FB 78 */	mr r3, r31
/* 802FD1D8 002FA118  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FD1DC 002FA11C  7D 89 03 A6 */	mtctr r12
/* 802FD1E0 002FA120  4E 80 04 21 */	bctrl 
/* 802FD1E4 002FA124  FC 40 08 90 */	fmr f2, f1
/* 802FD1E8 002FA128  FC 20 E8 90 */	fmr f1, f29
/* 802FD1EC 002FA12C  48 11 4A 11 */	bl angDist__Fff
/* 802FD1F0 002FA130  EF E1 07 F2 */	fmuls f31, f1, f31
/* 802FD1F4 002FA134  C0 02 F0 A8 */	lfs f0, lbl_8051D408@sda21(r2)
/* 802FD1F8 002FA138  C0 22 F0 84 */	lfs f1, lbl_8051D3E4@sda21(r2)
/* 802FD1FC 002FA13C  EC 00 07 B2 */	fmuls f0, f0, f30
/* 802FD200 002FA140  FC 40 FA 10 */	fabs f2, f31
/* 802FD204 002FA144  EC 21 00 32 */	fmuls f1, f1, f0
/* 802FD208 002FA148  FC 00 10 18 */	frsp f0, f2
/* 802FD20C 002FA14C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802FD210 002FA150  40 81 00 1C */	ble .L_802FD22C
/* 802FD214 002FA154  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FD218 002FA158  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802FD21C 002FA15C  40 81 00 0C */	ble .L_802FD228
/* 802FD220 002FA160  FF E0 08 90 */	fmr f31, f1
/* 802FD224 002FA164  48 00 00 08 */	b .L_802FD22C
.L_802FD228:
/* 802FD228 002FA168  FF E0 08 50 */	fneg f31, f1
.L_802FD22C:
/* 802FD22C 002FA16C  7F E3 FB 78 */	mr r3, r31
/* 802FD230 002FA170  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FD234 002FA174  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FD238 002FA178  7D 89 03 A6 */	mtctr r12
/* 802FD23C 002FA17C  4E 80 04 21 */	bctrl 
/* 802FD240 002FA180  EC 3F 08 2A */	fadds f1, f31, f1
/* 802FD244 002FA184  48 11 49 8D */	bl roundAng__Ff
/* 802FD248 002FA188  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802FD24C 002FA18C  7F E3 FB 78 */	mr r3, r31
/* 802FD250 002FA190  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802FD254 002FA194  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802FD258 002FA198  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FD25C 002FA19C  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802FD260 002FA1A0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FD264 002FA1A4  C3 C4 08 1C */	lfs f30, 0x81c(r4)
/* 802FD268 002FA1A8  7D 89 03 A6 */	mtctr r12
/* 802FD26C 002FA1AC  4E 80 04 21 */	bctrl 
/* 802FD270 002FA1B0  4B DD 25 AD */	bl sin
/* 802FD274 002FA1B4  7F E3 FB 78 */	mr r3, r31
/* 802FD278 002FA1B8  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 802FD27C 002FA1BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FD280 002FA1C0  FF A0 08 18 */	frsp f29, f1
/* 802FD284 002FA1C4  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 802FD288 002FA1C8  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 802FD28C 002FA1CC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FD290 002FA1D0  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802FD294 002FA1D4  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 802FD298 002FA1D8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802FD29C 002FA1DC  7D 89 03 A6 */	mtctr r12
/* 802FD2A0 002FA1E0  4E 80 04 21 */	bctrl 
/* 802FD2A4 002FA1E4  4B DD 20 11 */	bl cos
/* 802FD2A8 002FA1E8  EC 1E 07 72 */	fmuls f0, f30, f29
/* 802FD2AC 002FA1EC  FC 20 08 18 */	frsp f1, f1
/* 802FD2B0 002FA1F0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802FD2B4 002FA1F4  EC 1E 00 72 */	fmuls f0, f30, f1
/* 802FD2B8 002FA1F8  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 802FD2BC 002FA1FC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802FD2C0 002FA200  80 1F 02 88 */	lwz r0, 0x288(r31)
/* 802FD2C4 002FA204  28 00 00 00 */	cmplwi r0, 0
/* 802FD2C8 002FA208  41 82 00 7C */	beq .L_802FD344
/* 802FD2CC 002FA20C  C0 5F 01 D0 */	lfs f2, 0x1d0(r31)
/* 802FD2D0 002FA210  C0 1F 01 C8 */	lfs f0, 0x1c8(r31)
/* 802FD2D4 002FA214  C0 22 F0 48 */	lfs f1, lbl_8051D3A8@sda21(r2)
/* 802FD2D8 002FA218  EC 42 00 B2 */	fmuls f2, f2, f2
/* 802FD2DC 002FA21C  EC 00 08 3A */	fmadds f0, f0, f0, f1
/* 802FD2E0 002FA220  EC 42 00 2A */	fadds f2, f2, f0
/* 802FD2E4 002FA224  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802FD2E8 002FA228  40 81 00 14 */	ble .L_802FD2FC
/* 802FD2EC 002FA22C  40 81 00 14 */	ble .L_802FD300
/* 802FD2F0 002FA230  FC 00 10 34 */	frsqrte f0, f2
/* 802FD2F4 002FA234  EC 40 00 B2 */	fmuls f2, f0, f2
/* 802FD2F8 002FA238  48 00 00 08 */	b .L_802FD300
.L_802FD2FC:
/* 802FD2FC 002FA23C  FC 40 08 90 */	fmr f2, f1
.L_802FD300:
/* 802FD300 002FA240  C0 02 F0 5C */	lfs f0, lbl_8051D3BC@sda21(r2)
/* 802FD304 002FA244  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802FD308 002FA248  40 80 00 20 */	bge .L_802FD328
/* 802FD30C 002FA24C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802FD310 002FA250  C0 42 F0 AC */	lfs f2, lbl_8051D40C@sda21(r2)
/* 802FD314 002FA254  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 802FD318 002FA258  C0 1F 02 C4 */	lfs f0, 0x2c4(r31)
/* 802FD31C 002FA25C  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 802FD320 002FA260  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802FD324 002FA264  48 00 00 34 */	b .L_802FD358
.L_802FD328:
/* 802FD328 002FA268  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802FD32C 002FA26C  C0 42 F0 B0 */	lfs f2, lbl_8051D410@sda21(r2)
/* 802FD330 002FA270  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 802FD334 002FA274  C0 1F 02 C4 */	lfs f0, 0x2c4(r31)
/* 802FD338 002FA278  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 802FD33C 002FA27C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802FD340 002FA280  48 00 00 18 */	b .L_802FD358
.L_802FD344:
/* 802FD344 002FA284  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802FD348 002FA288  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802FD34C 002FA28C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802FD350 002FA290  EC 01 00 2A */	fadds f0, f1, f0
/* 802FD354 002FA294  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
.L_802FD358:
/* 802FD358 002FA298  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 802FD35C 002FA29C  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 802FD360 002FA2A0  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 802FD364 002FA2A4  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 802FD368 002FA2A8  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 802FD36C 002FA2AC  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 802FD370 002FA2B0  E3 81 00 48 */	psq_l f28, 72(r1), 0, qr0
/* 802FD374 002FA2B4  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 802FD378 002FA2B8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802FD37C 002FA2BC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802FD380 002FA2C0  7C 08 03 A6 */	mtlr r0
/* 802FD384 002FA2C4  38 21 00 80 */	addi r1, r1, 0x80
/* 802FD388 002FA2C8  4E 80 00 20 */	blr 
.endfn rollingMove__Q34Game10DangoMushi3ObjFv

.fn createCrashEnemy__Q34Game10DangoMushi3ObjFv, global
/* 802FD38C 002FA2CC  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 802FD390 002FA2D0  7C 08 02 A6 */	mflr r0
/* 802FD394 002FA2D4  90 01 01 64 */	stw r0, 0x164(r1)
/* 802FD398 002FA2D8  DB E1 01 50 */	stfd f31, 0x150(r1)
/* 802FD39C 002FA2DC  F3 E1 01 58 */	psq_st f31, 344(r1), 0, qr0
/* 802FD3A0 002FA2E0  DB C1 01 40 */	stfd f30, 0x140(r1)
/* 802FD3A4 002FA2E4  F3 C1 01 48 */	psq_st f30, 328(r1), 0, qr0
/* 802FD3A8 002FA2E8  DB A1 01 30 */	stfd f29, 0x130(r1)
/* 802FD3AC 002FA2EC  F3 A1 01 38 */	psq_st f29, 312(r1), 0, qr0
/* 802FD3B0 002FA2F0  DB 81 01 20 */	stfd f28, 0x120(r1)
/* 802FD3B4 002FA2F4  F3 81 01 28 */	psq_st f28, 296(r1), 0, qr0
/* 802FD3B8 002FA2F8  DB 61 01 10 */	stfd f27, 0x110(r1)
/* 802FD3BC 002FA2FC  F3 61 01 18 */	psq_st f27, 280(r1), 0, qr0
/* 802FD3C0 002FA300  DB 41 01 00 */	stfd f26, 0x100(r1)
/* 802FD3C4 002FA304  F3 41 01 08 */	psq_st f26, 264(r1), 0, qr0
/* 802FD3C8 002FA308  DB 21 00 F0 */	stfd f25, 0xf0(r1)
/* 802FD3CC 002FA30C  F3 21 00 F8 */	psq_st f25, 248(r1), 0, qr0
/* 802FD3D0 002FA310  DB 01 00 E0 */	stfd f24, 0xe0(r1)
/* 802FD3D4 002FA314  F3 01 00 E8 */	psq_st f24, 232(r1), 0, qr0
/* 802FD3D8 002FA318  DA E1 00 D0 */	stfd f23, 0xd0(r1)
/* 802FD3DC 002FA31C  F2 E1 00 D8 */	psq_st f23, 216(r1), 0, qr0
/* 802FD3E0 002FA320  DA C1 00 C0 */	stfd f22, 0xc0(r1)
/* 802FD3E4 002FA324  F2 C1 00 C8 */	psq_st f22, 200(r1), 0, qr0
/* 802FD3E8 002FA328  DA A1 00 B0 */	stfd f21, 0xb0(r1)
/* 802FD3EC 002FA32C  F2 A1 00 B8 */	psq_st f21, 184(r1), 0, qr0
/* 802FD3F0 002FA330  DA 81 00 A0 */	stfd f20, 0xa0(r1)
/* 802FD3F4 002FA334  F2 81 00 A8 */	psq_st f20, 168(r1), 0, qr0
/* 802FD3F8 002FA338  BE E1 00 7C */	stmw r23, 0x7c(r1)
/* 802FD3FC 002FA33C  80 C2 F0 B4 */	lwz r6, lbl_8051D414@sda21(r2)
/* 802FD400 002FA340  7C 79 1B 78 */	mr r25, r3
/* 802FD404 002FA344  80 A2 F0 B8 */	lwz r5, (lbl_8051D414+4)@sda21(r2)
/* 802FD408 002FA348  80 82 F0 BC */	lwz r4, lbl_8051D41C@sda21(r2)
/* 802FD40C 002FA34C  80 02 F0 C0 */	lwz r0, (lbl_8051D41C+4)@sda21(r2)
/* 802FD410 002FA350  90 C1 00 10 */	stw r6, 0x10(r1)
/* 802FD414 002FA354  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802FD418 002FA358  90 81 00 08 */	stw r4, 8(r1)
/* 802FD41C 002FA35C  90 01 00 0C */	stw r0, 0xc(r1)
/* 802FD420 002FA360  48 00 04 55 */	bl getFallEggNum__Q34Game10DangoMushi3ObjFv
/* 802FD424 002FA364  90 61 00 0C */	stw r3, 0xc(r1)
/* 802FD428 002FA368  3B C1 00 10 */	addi r30, r1, 0x10
/* 802FD42C 002FA36C  3B A1 00 08 */	addi r29, r1, 8
/* 802FD430 002FA370  3B 80 00 00 */	li r28, 0
.L_802FD434:
/* 802FD434 002FA374  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802FD438 002FA378  80 9E 00 00 */	lwz r4, 0(r30)
/* 802FD43C 002FA37C  4B E1 08 69 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 802FD440 002FA380  7C 7B 1B 79 */	or. r27, r3, r3
/* 802FD444 002FA384  41 82 03 A8 */	beq .L_802FD7EC
/* 802FD448 002FA388  7F 24 CB 78 */	mr r4, r25
/* 802FD44C 002FA38C  7F 85 E3 78 */	mr r5, r28
/* 802FD450 002FA390  38 61 00 18 */	addi r3, r1, 0x18
/* 802FD454 002FA394  48 00 05 0D */	bl getFallPosition__Q34Game10DangoMushi3ObjFi
/* 802FD458 002FA398  C3 81 00 18 */	lfs f28, 0x18(r1)
/* 802FD45C 002FA39C  C3 61 00 1C */	lfs f27, 0x1c(r1)
/* 802FD460 002FA3A0  C3 41 00 20 */	lfs f26, 0x20(r1)
/* 802FD464 002FA3A4  4B DC C1 3D */	bl rand
/* 802FD468 002FA3A8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802FD46C 002FA3AC  3C 00 43 30 */	lis r0, 0x4330
/* 802FD470 002FA3B0  90 61 00 5C */	stw r3, 0x5c(r1)
/* 802FD474 002FA3B4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802FD478 002FA3B8  C2 E2 F0 48 */	lfs f23, lbl_8051D3A8@sda21(r2)
/* 802FD47C 002FA3BC  3A E3 71 A0 */	addi r23, r3, sincosTable___5JMath@l
/* 802FD480 002FA3C0  90 01 00 58 */	stw r0, 0x58(r1)
/* 802FD484 002FA3C4  3B 40 00 00 */	li r26, 0
/* 802FD488 002FA3C8  C8 22 F0 98 */	lfd f1, lbl_8051D3F8@sda21(r2)
/* 802FD48C 002FA3CC  FF E0 B8 90 */	fmr f31, f23
/* 802FD490 002FA3D0  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 802FD494 002FA3D4  FE 80 B8 90 */	fmr f20, f23
/* 802FD498 002FA3D8  C0 62 F0 84 */	lfs f3, lbl_8051D3E4@sda21(r2)
/* 802FD49C 002FA3DC  EC 80 08 28 */	fsubs f4, f0, f1
/* 802FD4A0 002FA3E0  C0 42 F0 80 */	lfs f2, lbl_8051D3E0@sda21(r2)
/* 802FD4A4 002FA3E4  C0 22 F0 C4 */	lfs f1, lbl_8051D424@sda21(r2)
/* 802FD4A8 002FA3E8  C0 02 F0 C8 */	lfs f0, lbl_8051D428@sda21(r2)
/* 802FD4AC 002FA3EC  EC 63 01 32 */	fmuls f3, f3, f4
/* 802FD4B0 002FA3F0  83 FD 00 00 */	lwz r31, 0(r29)
/* 802FD4B4 002FA3F4  C3 C2 F0 EC */	lfs f30, lbl_8051D44C@sda21(r2)
/* 802FD4B8 002FA3F8  C2 A2 F0 8C */	lfs f21, lbl_8051D3EC@sda21(r2)
/* 802FD4BC 002FA3FC  EF A3 10 24 */	fdivs f29, f3, f2
/* 802FD4C0 002FA400  EF 21 E8 2A */	fadds f25, f1, f29
/* 802FD4C4 002FA404  EF 00 E8 2A */	fadds f24, f0, f29
/* 802FD4C8 002FA408  48 00 03 1C */	b .L_802FD7E4
.L_802FD4CC:
/* 802FD4CC 002FA40C  2C 1A 00 00 */	cmpwi r26, 0
/* 802FD4D0 002FA410  40 82 00 3C */	bne .L_802FD50C
/* 802FD4D4 002FA414  4B DC C0 CD */	bl rand
/* 802FD4D8 002FA418  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802FD4DC 002FA41C  3C 00 43 30 */	lis r0, 0x4330
/* 802FD4E0 002FA420  90 61 00 5C */	stw r3, 0x5c(r1)
/* 802FD4E4 002FA424  C8 62 F0 98 */	lfd f3, lbl_8051D3F8@sda21(r2)
/* 802FD4E8 002FA428  90 01 00 58 */	stw r0, 0x58(r1)
/* 802FD4EC 002FA42C  C0 22 F0 CC */	lfs f1, lbl_8051D42C@sda21(r2)
/* 802FD4F0 002FA430  C8 41 00 58 */	lfd f2, 0x58(r1)
/* 802FD4F4 002FA434  C0 02 F0 80 */	lfs f0, lbl_8051D3E0@sda21(r2)
/* 802FD4F8 002FA438  EC 42 18 28 */	fsubs f2, f2, f3
/* 802FD4FC 002FA43C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802FD500 002FA440  EC 01 00 24 */	fdivs f0, f1, f0
/* 802FD504 002FA444  FE C0 00 90 */	fmr f22, f0
/* 802FD508 002FA448  48 00 01 B4 */	b .L_802FD6BC
.L_802FD50C:
/* 802FD50C 002FA44C  2C 1A 00 04 */	cmpwi r26, 4
/* 802FD510 002FA450  40 80 00 90 */	bge .L_802FD5A0
/* 802FD514 002FA454  4B DC C0 8D */	bl rand
/* 802FD518 002FA458  3C 80 43 30 */	lis r4, 0x4330
/* 802FD51C 002FA45C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802FD520 002FA460  90 01 00 5C */	stw r0, 0x5c(r1)
/* 802FD524 002FA464  6F 40 80 00 */	xoris r0, r26, 0x8000
/* 802FD528 002FA468  C8 82 F0 98 */	lfd f4, lbl_8051D3F8@sda21(r2)
/* 802FD52C 002FA46C  90 81 00 58 */	stw r4, 0x58(r1)
/* 802FD530 002FA470  C0 02 F0 58 */	lfs f0, lbl_8051D3B8@sda21(r2)
/* 802FD534 002FA474  C8 41 00 58 */	lfd f2, 0x58(r1)
/* 802FD538 002FA478  C0 22 F0 80 */	lfs f1, lbl_8051D3E0@sda21(r2)
/* 802FD53C 002FA47C  EC 62 20 28 */	fsubs f3, f2, f4
/* 802FD540 002FA480  90 01 00 64 */	stw r0, 0x64(r1)
/* 802FD544 002FA484  C0 42 F0 D0 */	lfs f2, lbl_8051D430@sda21(r2)
/* 802FD548 002FA488  90 81 00 60 */	stw r4, 0x60(r1)
/* 802FD54C 002FA48C  EC 60 00 F2 */	fmuls f3, f0, f3
/* 802FD550 002FA490  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 802FD554 002FA494  EC 63 08 24 */	fdivs f3, f3, f1
/* 802FD558 002FA498  EC 20 20 28 */	fsubs f1, f0, f4
/* 802FD55C 002FA49C  EC 1D 18 2A */	fadds f0, f29, f3
/* 802FD560 002FA4A0  EE E2 00 7A */	fmadds f23, f2, f1, f0
/* 802FD564 002FA4A4  4B DC C0 3D */	bl rand
/* 802FD568 002FA4A8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802FD56C 002FA4AC  3C 00 43 30 */	lis r0, 0x4330
/* 802FD570 002FA4B0  90 61 00 6C */	stw r3, 0x6c(r1)
/* 802FD574 002FA4B4  C8 62 F0 98 */	lfd f3, lbl_8051D3F8@sda21(r2)
/* 802FD578 002FA4B8  90 01 00 68 */	stw r0, 0x68(r1)
/* 802FD57C 002FA4BC  C0 42 F0 CC */	lfs f2, lbl_8051D42C@sda21(r2)
/* 802FD580 002FA4C0  C8 01 00 68 */	lfd f0, 0x68(r1)
/* 802FD584 002FA4C4  C0 22 F0 80 */	lfs f1, lbl_8051D3E0@sda21(r2)
/* 802FD588 002FA4C8  EC 60 18 28 */	fsubs f3, f0, f3
/* 802FD58C 002FA4CC  C0 02 F0 D4 */	lfs f0, lbl_8051D434@sda21(r2)
/* 802FD590 002FA4D0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802FD594 002FA4D4  EC 22 08 24 */	fdivs f1, f2, f1
/* 802FD598 002FA4D8  EE C0 08 2A */	fadds f22, f0, f1
/* 802FD59C 002FA4DC  48 00 01 20 */	b .L_802FD6BC
.L_802FD5A0:
/* 802FD5A0 002FA4E0  2C 1A 00 0A */	cmpwi r26, 0xa
/* 802FD5A4 002FA4E4  40 80 00 90 */	bge .L_802FD634
/* 802FD5A8 002FA4E8  4B DC BF F9 */	bl rand
/* 802FD5AC 002FA4EC  3C 80 43 30 */	lis r4, 0x4330
/* 802FD5B0 002FA4F0  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802FD5B4 002FA4F4  90 01 00 6C */	stw r0, 0x6c(r1)
/* 802FD5B8 002FA4F8  6F 40 80 00 */	xoris r0, r26, 0x8000
/* 802FD5BC 002FA4FC  C8 82 F0 98 */	lfd f4, lbl_8051D3F8@sda21(r2)
/* 802FD5C0 002FA500  90 81 00 68 */	stw r4, 0x68(r1)
/* 802FD5C4 002FA504  C0 02 F0 C4 */	lfs f0, lbl_8051D424@sda21(r2)
/* 802FD5C8 002FA508  C8 41 00 68 */	lfd f2, 0x68(r1)
/* 802FD5CC 002FA50C  C0 22 F0 80 */	lfs f1, lbl_8051D3E0@sda21(r2)
/* 802FD5D0 002FA510  EC 62 20 28 */	fsubs f3, f2, f4
/* 802FD5D4 002FA514  90 01 00 64 */	stw r0, 0x64(r1)
/* 802FD5D8 002FA518  C0 42 F0 D8 */	lfs f2, lbl_8051D438@sda21(r2)
/* 802FD5DC 002FA51C  90 81 00 60 */	stw r4, 0x60(r1)
/* 802FD5E0 002FA520  EC 60 00 F2 */	fmuls f3, f0, f3
/* 802FD5E4 002FA524  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 802FD5E8 002FA528  EC 63 08 24 */	fdivs f3, f3, f1
/* 802FD5EC 002FA52C  EC 20 20 28 */	fsubs f1, f0, f4
/* 802FD5F0 002FA530  EC 19 18 2A */	fadds f0, f25, f3
/* 802FD5F4 002FA534  EE E2 00 7A */	fmadds f23, f2, f1, f0
/* 802FD5F8 002FA538  4B DC BF A9 */	bl rand
/* 802FD5FC 002FA53C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802FD600 002FA540  3C 00 43 30 */	lis r0, 0x4330
/* 802FD604 002FA544  90 61 00 5C */	stw r3, 0x5c(r1)
/* 802FD608 002FA548  C8 62 F0 98 */	lfd f3, lbl_8051D3F8@sda21(r2)
/* 802FD60C 002FA54C  90 01 00 58 */	stw r0, 0x58(r1)
/* 802FD610 002FA550  C0 42 F0 CC */	lfs f2, lbl_8051D42C@sda21(r2)
/* 802FD614 002FA554  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 802FD618 002FA558  C0 22 F0 80 */	lfs f1, lbl_8051D3E0@sda21(r2)
/* 802FD61C 002FA55C  EC 60 18 28 */	fsubs f3, f0, f3
/* 802FD620 002FA560  C0 02 F0 DC */	lfs f0, lbl_8051D43C@sda21(r2)
/* 802FD624 002FA564  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802FD628 002FA568  EC 22 08 24 */	fdivs f1, f2, f1
/* 802FD62C 002FA56C  EE C0 08 2A */	fadds f22, f0, f1
/* 802FD630 002FA570  48 00 00 8C */	b .L_802FD6BC
.L_802FD634:
/* 802FD634 002FA574  4B DC BF 6D */	bl rand
/* 802FD638 002FA578  3C 80 43 30 */	lis r4, 0x4330
/* 802FD63C 002FA57C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802FD640 002FA580  90 01 00 6C */	stw r0, 0x6c(r1)
/* 802FD644 002FA584  6F 40 80 00 */	xoris r0, r26, 0x8000
/* 802FD648 002FA588  C8 82 F0 98 */	lfd f4, lbl_8051D3F8@sda21(r2)
/* 802FD64C 002FA58C  90 81 00 68 */	stw r4, 0x68(r1)
/* 802FD650 002FA590  C0 02 F0 E0 */	lfs f0, lbl_8051D440@sda21(r2)
/* 802FD654 002FA594  C8 41 00 68 */	lfd f2, 0x68(r1)
/* 802FD658 002FA598  C0 22 F0 80 */	lfs f1, lbl_8051D3E0@sda21(r2)
/* 802FD65C 002FA59C  EC 62 20 28 */	fsubs f3, f2, f4
/* 802FD660 002FA5A0  90 01 00 64 */	stw r0, 0x64(r1)
/* 802FD664 002FA5A4  C0 42 F0 E4 */	lfs f2, lbl_8051D444@sda21(r2)
/* 802FD668 002FA5A8  90 81 00 60 */	stw r4, 0x60(r1)
/* 802FD66C 002FA5AC  EC 60 00 F2 */	fmuls f3, f0, f3
/* 802FD670 002FA5B0  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 802FD674 002FA5B4  EC 63 08 24 */	fdivs f3, f3, f1
/* 802FD678 002FA5B8  EC 20 20 28 */	fsubs f1, f0, f4
/* 802FD67C 002FA5BC  EC 18 18 2A */	fadds f0, f24, f3
/* 802FD680 002FA5C0  EE E2 00 7A */	fmadds f23, f2, f1, f0
/* 802FD684 002FA5C4  4B DC BF 1D */	bl rand
/* 802FD688 002FA5C8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802FD68C 002FA5CC  3C 00 43 30 */	lis r0, 0x4330
/* 802FD690 002FA5D0  90 61 00 5C */	stw r3, 0x5c(r1)
/* 802FD694 002FA5D4  C8 62 F0 98 */	lfd f3, lbl_8051D3F8@sda21(r2)
/* 802FD698 002FA5D8  90 01 00 58 */	stw r0, 0x58(r1)
/* 802FD69C 002FA5DC  C0 42 F0 CC */	lfs f2, lbl_8051D42C@sda21(r2)
/* 802FD6A0 002FA5E0  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 802FD6A4 002FA5E4  C0 22 F0 80 */	lfs f1, lbl_8051D3E0@sda21(r2)
/* 802FD6A8 002FA5E8  EC 60 18 28 */	fsubs f3, f0, f3
/* 802FD6AC 002FA5EC  C0 02 F0 E8 */	lfs f0, lbl_8051D448@sda21(r2)
/* 802FD6B0 002FA5F0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802FD6B4 002FA5F4  EC 22 08 24 */	fdivs f1, f2, f1
/* 802FD6B8 002FA5F8  EE C0 08 2A */	fadds f22, f0, f1
.L_802FD6BC:
/* 802FD6BC 002FA5FC  FC 17 F0 40 */	fcmpo cr0, f23, f30
/* 802FD6C0 002FA600  40 81 00 08 */	ble .L_802FD6C8
/* 802FD6C4 002FA604  EE F7 F0 28 */	fsubs f23, f23, f30
.L_802FD6C8:
/* 802FD6C8 002FA608  38 61 00 24 */	addi r3, r1, 0x24
/* 802FD6CC 002FA60C  4B E3 15 59 */	bl __ct__Q24Game13EnemyBirthArgFv
/* 802FD6D0 002FA610  80 1E 00 00 */	lwz r0, 0(r30)
/* 802FD6D4 002FA614  FC 17 F8 40 */	fcmpo cr0, f23, f31
/* 802FD6D8 002FA618  90 01 00 4C */	stw r0, 0x4c(r1)
/* 802FD6DC 002FA61C  C0 19 01 FC */	lfs f0, 0x1fc(r25)
/* 802FD6E0 002FA620  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802FD6E4 002FA624  40 80 00 30 */	bge .L_802FD714
/* 802FD6E8 002FA628  C0 02 F0 90 */	lfs f0, lbl_8051D3F0@sda21(r2)
/* 802FD6EC 002FA62C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802FD6F0 002FA630  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802FD6F4 002FA634  EC 17 00 32 */	fmuls f0, f23, f0
/* 802FD6F8 002FA638  FC 00 00 1E */	fctiwz f0, f0
/* 802FD6FC 002FA63C  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 802FD700 002FA640  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 802FD704 002FA644  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802FD708 002FA648  7C 03 04 2E */	lfsx f0, r3, r0
/* 802FD70C 002FA64C  FC 00 00 50 */	fneg f0, f0
/* 802FD710 002FA650  48 00 00 28 */	b .L_802FD738
.L_802FD714:
/* 802FD714 002FA654  C0 02 F0 8C */	lfs f0, lbl_8051D3EC@sda21(r2)
/* 802FD718 002FA658  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802FD71C 002FA65C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802FD720 002FA660  EC 17 00 32 */	fmuls f0, f23, f0
/* 802FD724 002FA664  FC 00 00 1E */	fctiwz f0, f0
/* 802FD728 002FA668  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 802FD72C 002FA66C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802FD730 002FA670  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802FD734 002FA674  7C 03 04 2E */	lfsx f0, r3, r0
.L_802FD738:
/* 802FD738 002FA678  EC 16 E0 3A */	fmadds f0, f22, f0, f28
/* 802FD73C 002FA67C  D3 61 00 28 */	stfs f27, 0x28(r1)
/* 802FD740 002FA680  FC 20 B8 90 */	fmr f1, f23
/* 802FD744 002FA684  FC 17 A0 40 */	fcmpo cr0, f23, f20
/* 802FD748 002FA688  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802FD74C 002FA68C  40 80 00 08 */	bge .L_802FD754
/* 802FD750 002FA690  FC 20 B8 50 */	fneg f1, f23
.L_802FD754:
/* 802FD754 002FA694  EC 01 05 72 */	fmuls f0, f1, f21
/* 802FD758 002FA698  80 1E 00 00 */	lwz r0, 0(r30)
/* 802FD75C 002FA69C  2C 00 00 25 */	cmpwi r0, 0x25
/* 802FD760 002FA6A0  FC 00 00 1E */	fctiwz f0, f0
/* 802FD764 002FA6A4  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 802FD768 002FA6A8  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 802FD76C 002FA6AC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802FD770 002FA6B0  7C 77 02 14 */	add r3, r23, r0
/* 802FD774 002FA6B4  C0 03 00 04 */	lfs f0, 4(r3)
/* 802FD778 002FA6B8  EC 16 D0 3A */	fmadds f0, f22, f0, f26
/* 802FD77C 002FA6BC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802FD780 002FA6C0  40 82 00 10 */	bne .L_802FD790
/* 802FD784 002FA6C4  38 00 00 01 */	li r0, 1
/* 802FD788 002FA6C8  98 01 00 34 */	stb r0, 0x34(r1)
/* 802FD78C 002FA6CC  48 00 00 0C */	b .L_802FD798
.L_802FD790:
/* 802FD790 002FA6D0  C0 02 F0 50 */	lfs f0, lbl_8051D3B0@sda21(r2)
/* 802FD794 002FA6D4  D0 01 00 50 */	stfs f0, 0x50(r1)
.L_802FD798:
/* 802FD798 002FA6D8  7F 63 DB 78 */	mr r3, r27
/* 802FD79C 002FA6DC  38 81 00 24 */	addi r4, r1, 0x24
/* 802FD7A0 002FA6E0  81 9B 00 00 */	lwz r12, 0(r27)
/* 802FD7A4 002FA6E4  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 802FD7A8 002FA6E8  7D 89 03 A6 */	mtctr r12
/* 802FD7AC 002FA6EC  4E 80 04 21 */	bctrl 
/* 802FD7B0 002FA6F0  7C 78 1B 79 */	or. r24, r3, r3
/* 802FD7B4 002FA6F4  41 82 00 2C */	beq .L_802FD7E0
/* 802FD7B8 002FA6F8  38 80 00 00 */	li r4, 0
/* 802FD7BC 002FA6FC  4B E3 D8 0D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 802FD7C0 002FA700  80 18 01 E0 */	lwz r0, 0x1e0(r24)
/* 802FD7C4 002FA704  C0 02 F0 F0 */	lfs f0, lbl_8051D450@sda21(r2)
/* 802FD7C8 002FA708  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802FD7CC 002FA70C  90 18 01 E0 */	stw r0, 0x1e0(r24)
/* 802FD7D0 002FA710  80 78 00 C0 */	lwz r3, 0xc0(r24)
/* 802FD7D4 002FA714  D0 03 03 AC */	stfs f0, 0x3ac(r3)
/* 802FD7D8 002FA718  80 78 00 C0 */	lwz r3, 0xc0(r24)
/* 802FD7DC 002FA71C  D0 03 03 D4 */	stfs f0, 0x3d4(r3)
.L_802FD7E0:
/* 802FD7E0 002FA720  3B 5A 00 01 */	addi r26, r26, 1
.L_802FD7E4:
/* 802FD7E4 002FA724  7C 1A F8 00 */	cmpw r26, r31
/* 802FD7E8 002FA728  41 80 FC E4 */	blt .L_802FD4CC
.L_802FD7EC:
/* 802FD7EC 002FA72C  3B 9C 00 01 */	addi r28, r28, 1
/* 802FD7F0 002FA730  3B BD 00 04 */	addi r29, r29, 4
/* 802FD7F4 002FA734  2C 1C 00 02 */	cmpwi r28, 2
/* 802FD7F8 002FA738  3B DE 00 04 */	addi r30, r30, 4
/* 802FD7FC 002FA73C  41 80 FC 38 */	blt .L_802FD434
/* 802FD800 002FA740  E3 E1 01 58 */	psq_l f31, 344(r1), 0, qr0
/* 802FD804 002FA744  CB E1 01 50 */	lfd f31, 0x150(r1)
/* 802FD808 002FA748  E3 C1 01 48 */	psq_l f30, 328(r1), 0, qr0
/* 802FD80C 002FA74C  CB C1 01 40 */	lfd f30, 0x140(r1)
/* 802FD810 002FA750  E3 A1 01 38 */	psq_l f29, 312(r1), 0, qr0
/* 802FD814 002FA754  CB A1 01 30 */	lfd f29, 0x130(r1)
/* 802FD818 002FA758  E3 81 01 28 */	psq_l f28, 296(r1), 0, qr0
/* 802FD81C 002FA75C  CB 81 01 20 */	lfd f28, 0x120(r1)
/* 802FD820 002FA760  E3 61 01 18 */	psq_l f27, 280(r1), 0, qr0
/* 802FD824 002FA764  CB 61 01 10 */	lfd f27, 0x110(r1)
/* 802FD828 002FA768  E3 41 01 08 */	psq_l f26, 264(r1), 0, qr0
/* 802FD82C 002FA76C  CB 41 01 00 */	lfd f26, 0x100(r1)
/* 802FD830 002FA770  E3 21 00 F8 */	psq_l f25, 248(r1), 0, qr0
/* 802FD834 002FA774  CB 21 00 F0 */	lfd f25, 0xf0(r1)
/* 802FD838 002FA778  E3 01 00 E8 */	psq_l f24, 232(r1), 0, qr0
/* 802FD83C 002FA77C  CB 01 00 E0 */	lfd f24, 0xe0(r1)
/* 802FD840 002FA780  E2 E1 00 D8 */	psq_l f23, 216(r1), 0, qr0
/* 802FD844 002FA784  CA E1 00 D0 */	lfd f23, 0xd0(r1)
/* 802FD848 002FA788  E2 C1 00 C8 */	psq_l f22, 200(r1), 0, qr0
/* 802FD84C 002FA78C  CA C1 00 C0 */	lfd f22, 0xc0(r1)
/* 802FD850 002FA790  E2 A1 00 B8 */	psq_l f21, 184(r1), 0, qr0
/* 802FD854 002FA794  CA A1 00 B0 */	lfd f21, 0xb0(r1)
/* 802FD858 002FA798  E2 81 00 A8 */	psq_l f20, 168(r1), 0, qr0
/* 802FD85C 002FA79C  CA 81 00 A0 */	lfd f20, 0xa0(r1)
/* 802FD860 002FA7A0  BA E1 00 7C */	lmw r23, 0x7c(r1)
/* 802FD864 002FA7A4  80 01 01 64 */	lwz r0, 0x164(r1)
/* 802FD868 002FA7A8  7C 08 03 A6 */	mtlr r0
/* 802FD86C 002FA7AC  38 21 01 60 */	addi r1, r1, 0x160
/* 802FD870 002FA7B0  4E 80 00 20 */	blr 
.endfn createCrashEnemy__Q34Game10DangoMushi3ObjFv

.fn getFallEggNum__Q34Game10DangoMushi3ObjFv, global
/* 802FD874 002FA7B4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802FD878 002FA7B8  7C 08 02 A6 */	mflr r0
/* 802FD87C 002FA7BC  90 01 00 44 */	stw r0, 0x44(r1)
/* 802FD880 002FA7C0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802FD884 002FA7C4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802FD888 002FA7C8  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 802FD88C 002FA7CC  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 802FD890 002FA7D0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802FD894 002FA7D4  3C 00 43 30 */	lis r0, 0x4330
/* 802FD898 002FA7D8  90 01 00 08 */	stw r0, 8(r1)
/* 802FD89C 002FA7DC  80 03 00 20 */	lwz r0, 0x20(r3)
/* 802FD8A0 002FA7E0  C8 22 F0 98 */	lfd f1, lbl_8051D3F8@sda21(r2)
/* 802FD8A4 002FA7E4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802FD8A8 002FA7E8  C3 C2 F0 48 */	lfs f30, lbl_8051D3A8@sda21(r2)
/* 802FD8AC 002FA7EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 802FD8B0 002FA7F0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802FD8B4 002FA7F4  C8 01 00 08 */	lfd f0, 8(r1)
/* 802FD8B8 002FA7F8  EF E0 08 28 */	fsubs f31, f0, f1
/* 802FD8BC 002FA7FC  4B E5 D3 65 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 802FD8C0 002FA800  28 03 00 00 */	cmplwi r3, 0
/* 802FD8C4 002FA804  41 82 00 28 */	beq .L_802FD8EC
/* 802FD8C8 002FA808  80 63 02 54 */	lwz r3, 0x254(r3)
/* 802FD8CC 002FA80C  3C 00 43 30 */	lis r0, 0x4330
/* 802FD8D0 002FA810  90 01 00 10 */	stw r0, 0x10(r1)
/* 802FD8D4 002FA814  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 802FD8D8 002FA818  C8 22 F0 98 */	lfd f1, lbl_8051D3F8@sda21(r2)
/* 802FD8DC 002FA81C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802FD8E0 002FA820  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FD8E4 002FA824  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802FD8E8 002FA828  EF C0 08 28 */	fsubs f30, f0, f1
.L_802FD8EC:
/* 802FD8EC 002FA82C  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FD8F0 002FA830  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802FD8F4 002FA834  40 81 00 48 */	ble .L_802FD93C
/* 802FD8F8 002FA838  4B DC BC A9 */	bl rand
/* 802FD8FC 002FA83C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802FD900 002FA840  3C 00 43 30 */	lis r0, 0x4330
/* 802FD904 002FA844  90 61 00 14 */	stw r3, 0x14(r1)
/* 802FD908 002FA848  EC 1E F8 24 */	fdivs f0, f30, f31
/* 802FD90C 002FA84C  C8 82 F0 98 */	lfd f4, lbl_8051D3F8@sda21(r2)
/* 802FD910 002FA850  90 01 00 10 */	stw r0, 0x10(r1)
/* 802FD914 002FA854  C0 42 F0 58 */	lfs f2, lbl_8051D3B8@sda21(r2)
/* 802FD918 002FA858  C8 61 00 10 */	lfd f3, 0x10(r1)
/* 802FD91C 002FA85C  C0 22 F0 80 */	lfs f1, lbl_8051D3E0@sda21(r2)
/* 802FD920 002FA860  EC 63 20 28 */	fsubs f3, f3, f4
/* 802FD924 002FA864  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802FD928 002FA868  EC 22 08 24 */	fdivs f1, f2, f1
/* 802FD92C 002FA86C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FD930 002FA870  40 80 00 0C */	bge .L_802FD93C
/* 802FD934 002FA874  38 60 00 01 */	li r3, 1
/* 802FD938 002FA878  48 00 00 08 */	b .L_802FD940
.L_802FD93C:
/* 802FD93C 002FA87C  38 60 00 00 */	li r3, 0
.L_802FD940:
/* 802FD940 002FA880  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802FD944 002FA884  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802FD948 002FA888  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 802FD94C 002FA88C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802FD950 002FA890  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 802FD954 002FA894  7C 08 03 A6 */	mtlr r0
/* 802FD958 002FA898  38 21 00 40 */	addi r1, r1, 0x40
/* 802FD95C 002FA89C  4E 80 00 20 */	blr 
.endfn getFallEggNum__Q34Game10DangoMushi3ObjFv

.fn getFallPosition__Q34Game10DangoMushi3ObjFi, global
/* 802FD960 002FA8A0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802FD964 002FA8A4  7C 08 02 A6 */	mflr r0
/* 802FD968 002FA8A8  90 01 00 64 */	stw r0, 0x64(r1)
/* 802FD96C 002FA8AC  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 802FD970 002FA8B0  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 802FD974 002FA8B4  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 802FD978 002FA8B8  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 802FD97C 002FA8BC  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 802FD980 002FA8C0  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 802FD984 002FA8C4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802FD988 002FA8C8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802FD98C 002FA8CC  7C 9F 23 78 */	mr r31, r4
/* 802FD990 002FA8D0  2C 05 00 00 */	cmpwi r5, 0
/* 802FD994 002FA8D4  C3 E4 01 98 */	lfs f31, 0x198(r4)
/* 802FD998 002FA8D8  7C 7E 1B 78 */	mr r30, r3
/* 802FD99C 002FA8DC  C3 C4 01 9C */	lfs f30, 0x19c(r4)
/* 802FD9A0 002FA8E0  C3 A4 01 A0 */	lfs f29, 0x1a0(r4)
/* 802FD9A4 002FA8E4  40 82 00 84 */	bne .L_802FDA28
/* 802FD9A8 002FA8E8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802FD9AC 002FA8EC  4B E5 D2 75 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 802FD9B0 002FA8F0  28 03 00 00 */	cmplwi r3, 0
/* 802FD9B4 002FA8F4  41 82 00 2C */	beq .L_802FD9E0
/* 802FD9B8 002FA8F8  7C 64 1B 78 */	mr r4, r3
/* 802FD9BC 002FA8FC  38 61 00 14 */	addi r3, r1, 0x14
/* 802FD9C0 002FA900  81 84 00 00 */	lwz r12, 0(r4)
/* 802FD9C4 002FA904  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FD9C8 002FA908  7D 89 03 A6 */	mtctr r12
/* 802FD9CC 002FA90C  4E 80 04 21 */	bctrl 
/* 802FD9D0 002FA910  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 802FD9D4 002FA914  C3 C1 00 18 */	lfs f30, 0x18(r1)
/* 802FD9D8 002FA918  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 802FD9DC 002FA91C  48 00 00 4C */	b .L_802FDA28
.L_802FD9E0:
/* 802FD9E0 002FA920  C0 22 F0 A4 */	lfs f1, lbl_8051D404@sda21(r2)
/* 802FD9E4 002FA924  7F E3 FB 78 */	mr r3, r31
/* 802FD9E8 002FA928  C0 42 F0 F4 */	lfs f2, lbl_8051D454@sda21(r2)
/* 802FD9EC 002FA92C  38 80 00 00 */	li r4, 0
/* 802FD9F0 002FA930  38 A0 00 00 */	li r5, 0
/* 802FD9F4 002FA934  38 C0 00 00 */	li r6, 0
/* 802FD9F8 002FA938  4B E1 56 59 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 802FD9FC 002FA93C  28 03 00 00 */	cmplwi r3, 0
/* 802FDA00 002FA940  41 82 00 28 */	beq .L_802FDA28
/* 802FDA04 002FA944  7C 64 1B 78 */	mr r4, r3
/* 802FDA08 002FA948  38 61 00 08 */	addi r3, r1, 8
/* 802FDA0C 002FA94C  81 84 00 00 */	lwz r12, 0(r4)
/* 802FDA10 002FA950  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FDA14 002FA954  7D 89 03 A6 */	mtctr r12
/* 802FDA18 002FA958  4E 80 04 21 */	bctrl 
/* 802FDA1C 002FA95C  C3 E1 00 08 */	lfs f31, 8(r1)
/* 802FDA20 002FA960  C3 C1 00 0C */	lfs f30, 0xc(r1)
/* 802FDA24 002FA964  C3 A1 00 10 */	lfs f29, 0x10(r1)
.L_802FDA28:
/* 802FDA28 002FA968  D3 FE 00 00 */	stfs f31, 0(r30)
/* 802FDA2C 002FA96C  D3 DE 00 04 */	stfs f30, 4(r30)
/* 802FDA30 002FA970  D3 BE 00 08 */	stfs f29, 8(r30)
/* 802FDA34 002FA974  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 802FDA38 002FA978  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 802FDA3C 002FA97C  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 802FDA40 002FA980  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 802FDA44 002FA984  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 802FDA48 002FA988  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 802FDA4C 002FA98C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802FDA50 002FA990  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802FDA54 002FA994  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802FDA58 002FA998  7C 08 03 A6 */	mtlr r0
/* 802FDA5C 002FA99C  38 21 00 60 */	addi r1, r1, 0x60
/* 802FDA60 002FA9A0  4E 80 00 20 */	blr 
.endfn getFallPosition__Q34Game10DangoMushi3ObjFi

.fn setupCollision__Q34Game10DangoMushi3ObjFv, global
/* 802FDA64 002FA9A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FDA68 002FA9A8  7C 08 02 A6 */	mflr r0
/* 802FDA6C 002FA9AC  3C 80 68 61 */	lis r4, 0x68615230@ha
/* 802FDA70 002FA9B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FDA74 002FA9B4  38 84 52 30 */	addi r4, r4, 0x68615230@l
/* 802FDA78 002FA9B8  80 63 01 14 */	lwz r3, 0x114(r3)
/* 802FDA7C 002FA9BC  4B E3 83 C9 */	bl getCollPart__8CollTreeFUl
/* 802FDA80 002FA9C0  28 03 00 00 */	cmplwi r3, 0
/* 802FDA84 002FA9C4  41 82 00 08 */	beq .L_802FDA8C
/* 802FDA88 002FA9C8  4B E3 99 15 */	bl makeTubeTree__8CollPartFv
.L_802FDA8C:
/* 802FDA8C 002FA9CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FDA90 002FA9D0  7C 08 03 A6 */	mtlr r0
/* 802FDA94 002FA9D4  38 21 00 10 */	addi r1, r1, 0x10
/* 802FDA98 002FA9D8  4E 80 00 20 */	blr 
.endfn setupCollision__Q34Game10DangoMushi3ObjFv

.fn setBodyCollision__Q34Game10DangoMushi3ObjFb, global
/* 802FDA9C 002FA9DC  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 802FDAA0 002FA9E0  7C 08 02 A6 */	mflr r0
/* 802FDAA4 002FA9E4  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 802FDAA8 002FA9E8  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 802FDAAC 002FA9EC  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 802FDAB0 002FA9F0  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 802FDAB4 002FA9F4  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 802FDAB8 002FA9F8  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 802FDABC 002FA9FC  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 802FDAC0 002FAA00  BF 21 00 84 */	stmw r25, 0x84(r1)
/* 802FDAC4 002FAA04  80 A2 F0 F8 */	lwz r5, lbl_8051D458@sda21(r2)
/* 802FDAC8 002FAA08  7C 99 23 78 */	mr r25, r4
/* 802FDACC 002FAA0C  80 02 F0 FC */	lwz r0, (lbl_8051D458+4)@sda21(r2)
/* 802FDAD0 002FAA10  7C 7F 1B 78 */	mr r31, r3
/* 802FDAD4 002FAA14  90 A1 00 08 */	stw r5, 8(r1)
/* 802FDAD8 002FAA18  3B 61 00 08 */	addi r27, r1, 8
/* 802FDADC 002FAA1C  54 9C 06 3E */	clrlwi r28, r4, 0x18
/* 802FDAE0 002FAA20  3B 40 00 00 */	li r26, 0
/* 802FDAE4 002FAA24  90 01 00 0C */	stw r0, 0xc(r1)
/* 802FDAE8 002FAA28  3F A0 5F 74 */	lis r29, 0x5f74
/* 802FDAEC 002FAA2C  3F C0 73 74 */	lis r30, 0x7374
.L_802FDAF0:
/* 802FDAF0 002FAA30  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 802FDAF4 002FAA34  80 9B 00 00 */	lwz r4, 0(r27)
/* 802FDAF8 002FAA38  4B E3 83 4D */	bl getCollPart__8CollTreeFUl
/* 802FDAFC 002FAA3C  28 03 00 00 */	cmplwi r3, 0
/* 802FDB00 002FAA40  41 82 00 1C */	beq .L_802FDB1C
/* 802FDB04 002FAA44  28 1C 00 00 */	cmplwi r28, 0
/* 802FDB08 002FAA48  41 82 00 14 */	beq .L_802FDB1C
/* 802FDB0C 002FAA4C  38 63 00 3C */	addi r3, r3, 0x3c
/* 802FDB10 002FAA50  38 9D 5F 5F */	addi r4, r29, 0x5f5f
/* 802FDB14 002FAA54  48 11 58 F1 */	bl __as__4ID32FUl
/* 802FDB18 002FAA58  48 00 00 10 */	b .L_802FDB28
.L_802FDB1C:
/* 802FDB1C 002FAA5C  38 63 00 3C */	addi r3, r3, 0x3c
/* 802FDB20 002FAA60  38 9E 5F 5F */	addi r4, r30, 0x5f5f
/* 802FDB24 002FAA64  48 11 58 E1 */	bl __as__4ID32FUl
.L_802FDB28:
/* 802FDB28 002FAA68  3B 5A 00 01 */	addi r26, r26, 1
/* 802FDB2C 002FAA6C  3B 7B 00 04 */	addi r27, r27, 4
/* 802FDB30 002FAA70  2C 1A 00 02 */	cmpwi r26, 2
/* 802FDB34 002FAA74  41 80 FF BC */	blt .L_802FDAF0
/* 802FDB38 002FAA78  57 20 06 3F */	clrlwi. r0, r25, 0x18
/* 802FDB3C 002FAA7C  41 82 03 78 */	beq .L_802FDEB4
/* 802FDB40 002FAA80  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 802FDB44 002FAA84  2C 00 00 00 */	cmpwi r0, 0
/* 802FDB48 002FAA88  41 82 03 6C */	beq .L_802FDEB4
/* 802FDB4C 002FAA8C  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 802FDB50 002FAA90  C0 22 F0 48 */	lfs f1, lbl_8051D3A8@sda21(r2)
/* 802FDB54 002FAA94  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802FDB58 002FAA98  4C 40 13 82 */	cror 2, 0, 2
/* 802FDB5C 002FAA9C  41 82 03 58 */	beq .L_802FDEB4
/* 802FDB60 002FAAA0  C0 7F 01 FC */	lfs f3, 0x1fc(r31)
/* 802FDB64 002FAAA4  C0 02 F0 84 */	lfs f0, lbl_8051D3E4@sda21(r2)
/* 802FDB68 002FAAA8  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 802FDB6C 002FAAAC  C0 42 F1 00 */	lfs f2, lbl_8051D460@sda21(r2)
/* 802FDB70 002FAAB0  EF E0 18 2A */	fadds f31, f0, f3
/* 802FDB74 002FAAB4  40 80 00 30 */	bge .L_802FDBA4
/* 802FDB78 002FAAB8  C0 02 F0 90 */	lfs f0, lbl_8051D3F0@sda21(r2)
/* 802FDB7C 002FAABC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802FDB80 002FAAC0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802FDB84 002FAAC4  EC 03 00 32 */	fmuls f0, f3, f0
/* 802FDB88 002FAAC8  FC 00 00 1E */	fctiwz f0, f0
/* 802FDB8C 002FAACC  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 802FDB90 002FAAD0  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 802FDB94 002FAAD4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802FDB98 002FAAD8  7C 03 04 2E */	lfsx f0, r3, r0
/* 802FDB9C 002FAADC  FC 20 00 50 */	fneg f1, f0
/* 802FDBA0 002FAAE0  48 00 00 28 */	b .L_802FDBC8
.L_802FDBA4:
/* 802FDBA4 002FAAE4  C0 02 F0 8C */	lfs f0, lbl_8051D3EC@sda21(r2)
/* 802FDBA8 002FAAE8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802FDBAC 002FAAEC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802FDBB0 002FAAF0  EC 03 00 32 */	fmuls f0, f3, f0
/* 802FDBB4 002FAAF4  FC 00 00 1E */	fctiwz f0, f0
/* 802FDBB8 002FAAF8  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 802FDBBC 002FAAFC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802FDBC0 002FAB00  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802FDBC4 002FAB04  7C 23 04 2E */	lfsx f1, r3, r0
.L_802FDBC8:
/* 802FDBC8 002FAB08  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FDBCC 002FAB0C  EF C2 00 72 */	fmuls f30, f2, f1
/* 802FDBD0 002FAB10  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802FDBD4 002FAB14  40 80 00 08 */	bge .L_802FDBDC
/* 802FDBD8 002FAB18  FC 60 18 50 */	fneg f3, f3
.L_802FDBDC:
/* 802FDBDC 002FAB1C  C0 02 F0 8C */	lfs f0, lbl_8051D3EC@sda21(r2)
/* 802FDBE0 002FAB20  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802FDBE4 002FAB24  38 A3 71 A0 */	addi r5, r3, sincosTable___5JMath@l
/* 802FDBE8 002FAB28  C0 22 F1 00 */	lfs f1, lbl_8051D460@sda21(r2)
/* 802FDBEC 002FAB2C  EC 03 00 32 */	fmuls f0, f3, f0
/* 802FDBF0 002FAB30  7F E4 FB 78 */	mr r4, r31
/* 802FDBF4 002FAB34  38 61 00 4C */	addi r3, r1, 0x4c
/* 802FDBF8 002FAB38  FC 00 00 1E */	fctiwz f0, f0
/* 802FDBFC 002FAB3C  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 802FDC00 002FAB40  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 802FDC04 002FAB44  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802FDC08 002FAB48  7C A5 02 14 */	add r5, r5, r0
/* 802FDC0C 002FAB4C  C0 05 00 04 */	lfs f0, 4(r5)
/* 802FDC10 002FAB50  EF A1 00 32 */	fmuls f29, f1, f0
/* 802FDC14 002FAB54  4B EA 20 49 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 802FDC18 002FAB58  38 00 00 00 */	li r0, 0
/* 802FDC1C 002FAB5C  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 802FDC20 002FAB60  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 802FDC24 002FAB64  38 61 00 4C */	addi r3, r1, 0x4c
/* 802FDC28 002FAB68  28 00 00 00 */	cmplwi r0, 0
/* 802FDC2C 002FAB6C  90 81 00 10 */	stw r4, 0x10(r1)
/* 802FDC30 002FAB70  90 01 00 1C */	stw r0, 0x1c(r1)
/* 802FDC34 002FAB74  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FDC38 002FAB78  90 61 00 18 */	stw r3, 0x18(r1)
/* 802FDC3C 002FAB7C  40 82 00 1C */	bne .L_802FDC58
/* 802FDC40 002FAB80  81 83 00 00 */	lwz r12, 0(r3)
/* 802FDC44 002FAB84  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802FDC48 002FAB88  7D 89 03 A6 */	mtctr r12
/* 802FDC4C 002FAB8C  4E 80 04 21 */	bctrl 
/* 802FDC50 002FAB90  90 61 00 14 */	stw r3, 0x14(r1)
/* 802FDC54 002FAB94  48 00 02 34 */	b .L_802FDE88
.L_802FDC58:
/* 802FDC58 002FAB98  81 83 00 00 */	lwz r12, 0(r3)
/* 802FDC5C 002FAB9C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802FDC60 002FABA0  7D 89 03 A6 */	mtctr r12
/* 802FDC64 002FABA4  4E 80 04 21 */	bctrl 
/* 802FDC68 002FABA8  90 61 00 14 */	stw r3, 0x14(r1)
/* 802FDC6C 002FABAC  48 00 00 58 */	b .L_802FDCC4
.L_802FDC70:
/* 802FDC70 002FABB0  80 61 00 18 */	lwz r3, 0x18(r1)
/* 802FDC74 002FABB4  80 81 00 14 */	lwz r4, 0x14(r1)
/* 802FDC78 002FABB8  81 83 00 00 */	lwz r12, 0(r3)
/* 802FDC7C 002FABBC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802FDC80 002FABC0  7D 89 03 A6 */	mtctr r12
/* 802FDC84 002FABC4  4E 80 04 21 */	bctrl 
/* 802FDC88 002FABC8  7C 64 1B 78 */	mr r4, r3
/* 802FDC8C 002FABCC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802FDC90 002FABD0  81 83 00 00 */	lwz r12, 0(r3)
/* 802FDC94 002FABD4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FDC98 002FABD8  7D 89 03 A6 */	mtctr r12
/* 802FDC9C 002FABDC  4E 80 04 21 */	bctrl 
/* 802FDCA0 002FABE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FDCA4 002FABE4  40 82 01 E4 */	bne .L_802FDE88
/* 802FDCA8 002FABE8  80 61 00 18 */	lwz r3, 0x18(r1)
/* 802FDCAC 002FABEC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 802FDCB0 002FABF0  81 83 00 00 */	lwz r12, 0(r3)
/* 802FDCB4 002FABF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802FDCB8 002FABF8  7D 89 03 A6 */	mtctr r12
/* 802FDCBC 002FABFC  4E 80 04 21 */	bctrl 
/* 802FDCC0 002FAC00  90 61 00 14 */	stw r3, 0x14(r1)
.L_802FDCC4:
/* 802FDCC4 002FAC04  81 81 00 10 */	lwz r12, 0x10(r1)
/* 802FDCC8 002FAC08  38 61 00 10 */	addi r3, r1, 0x10
/* 802FDCCC 002FAC0C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802FDCD0 002FAC10  7D 89 03 A6 */	mtctr r12
/* 802FDCD4 002FAC14  4E 80 04 21 */	bctrl 
/* 802FDCD8 002FAC18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FDCDC 002FAC1C  41 82 FF 94 */	beq .L_802FDC70
/* 802FDCE0 002FAC20  48 00 01 A8 */	b .L_802FDE88
.L_802FDCE4:
/* 802FDCE4 002FAC24  80 61 00 18 */	lwz r3, 0x18(r1)
/* 802FDCE8 002FAC28  81 83 00 00 */	lwz r12, 0(r3)
/* 802FDCEC 002FAC2C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802FDCF0 002FAC30  7D 89 03 A6 */	mtctr r12
/* 802FDCF4 002FAC34  4E 80 04 21 */	bctrl 
/* 802FDCF8 002FAC38  81 83 00 00 */	lwz r12, 0(r3)
/* 802FDCFC 002FAC3C  7C 7C 1B 78 */	mr r28, r3
/* 802FDD00 002FAC40  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802FDD04 002FAC44  7D 89 03 A6 */	mtctr r12
/* 802FDD08 002FAC48  4E 80 04 21 */	bctrl 
/* 802FDD0C 002FAC4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FDD10 002FAC50  41 82 00 BC */	beq .L_802FDDCC
/* 802FDD14 002FAC54  88 1C 02 B8 */	lbz r0, 0x2b8(r28)
/* 802FDD18 002FAC58  2C 00 00 03 */	cmpwi r0, 3
/* 802FDD1C 002FAC5C  40 82 00 54 */	bne .L_802FDD70
/* 802FDD20 002FAC60  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 802FDD24 002FAC64  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 802FDD28 002FAC68  3C 80 80 4B */	lis r4, __vt__Q24Game13InteractFlick@ha
/* 802FDD2C 002FAC6C  7F 83 E3 78 */	mr r3, r28
/* 802FDD30 002FAC70  C0 26 04 EC */	lfs f1, 0x4ec(r6)
/* 802FDD34 002FAC74  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 802FDD38 002FAC78  C0 06 04 C4 */	lfs f0, 0x4c4(r6)
/* 802FDD3C 002FAC7C  38 04 4E 04 */	addi r0, r4, __vt__Q24Game13InteractFlick@l
/* 802FDD40 002FAC80  38 81 00 38 */	addi r4, r1, 0x38
/* 802FDD44 002FAC84  90 A1 00 38 */	stw r5, 0x38(r1)
/* 802FDD48 002FAC88  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802FDD4C 002FAC8C  90 01 00 38 */	stw r0, 0x38(r1)
/* 802FDD50 002FAC90  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802FDD54 002FAC94  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 802FDD58 002FAC98  D3 E1 00 48 */	stfs f31, 0x48(r1)
/* 802FDD5C 002FAC9C  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FDD60 002FACA0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802FDD64 002FACA4  7D 89 03 A6 */	mtctr r12
/* 802FDD68 002FACA8  4E 80 04 21 */	bctrl 
/* 802FDD6C 002FACAC  48 00 00 60 */	b .L_802FDDCC
.L_802FDD70:
/* 802FDD70 002FACB0  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 802FDD74 002FACB4  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 802FDD78 002FACB8  3C 80 80 4B */	lis r4, __vt__Q24Game12InteractWind@ha
/* 802FDD7C 002FACBC  3C 60 80 4B */	lis r3, __vt__Q24Game20InteractHanaChirashi@ha
/* 802FDD80 002FACC0  C0 26 06 04 */	lfs f1, 0x604(r6)
/* 802FDD84 002FACC4  38 05 A3 00 */	addi r0, r5, __vt__Q24Game11Interaction@l
/* 802FDD88 002FACC8  C0 02 F1 00 */	lfs f0, lbl_8051D460@sda21(r2)
/* 802FDD8C 002FACCC  38 A4 49 74 */	addi r5, r4, __vt__Q24Game12InteractWind@l
/* 802FDD90 002FACD0  90 01 00 20 */	stw r0, 0x20(r1)
/* 802FDD94 002FACD4  38 03 49 50 */	addi r0, r3, __vt__Q24Game20InteractHanaChirashi@l
/* 802FDD98 002FACD8  7F 83 E3 78 */	mr r3, r28
/* 802FDD9C 002FACDC  38 81 00 20 */	addi r4, r1, 0x20
/* 802FDDA0 002FACE0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 802FDDA4 002FACE4  93 E1 00 24 */	stw r31, 0x24(r1)
/* 802FDDA8 002FACE8  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 802FDDAC 002FACEC  D3 C1 00 2C */	stfs f30, 0x2c(r1)
/* 802FDDB0 002FACF0  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802FDDB4 002FACF4  D3 A1 00 34 */	stfs f29, 0x34(r1)
/* 802FDDB8 002FACF8  90 01 00 20 */	stw r0, 0x20(r1)
/* 802FDDBC 002FACFC  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FDDC0 002FAD00  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802FDDC4 002FAD04  7D 89 03 A6 */	mtctr r12
/* 802FDDC8 002FAD08  4E 80 04 21 */	bctrl 
.L_802FDDCC:
/* 802FDDCC 002FAD0C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802FDDD0 002FAD10  28 00 00 00 */	cmplwi r0, 0
/* 802FDDD4 002FAD14  40 82 00 24 */	bne .L_802FDDF8
/* 802FDDD8 002FAD18  80 61 00 18 */	lwz r3, 0x18(r1)
/* 802FDDDC 002FAD1C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 802FDDE0 002FAD20  81 83 00 00 */	lwz r12, 0(r3)
/* 802FDDE4 002FAD24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802FDDE8 002FAD28  7D 89 03 A6 */	mtctr r12
/* 802FDDEC 002FAD2C  4E 80 04 21 */	bctrl 
/* 802FDDF0 002FAD30  90 61 00 14 */	stw r3, 0x14(r1)
/* 802FDDF4 002FAD34  48 00 00 94 */	b .L_802FDE88
.L_802FDDF8:
/* 802FDDF8 002FAD38  80 61 00 18 */	lwz r3, 0x18(r1)
/* 802FDDFC 002FAD3C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 802FDE00 002FAD40  81 83 00 00 */	lwz r12, 0(r3)
/* 802FDE04 002FAD44  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802FDE08 002FAD48  7D 89 03 A6 */	mtctr r12
/* 802FDE0C 002FAD4C  4E 80 04 21 */	bctrl 
/* 802FDE10 002FAD50  90 61 00 14 */	stw r3, 0x14(r1)
/* 802FDE14 002FAD54  48 00 00 58 */	b .L_802FDE6C
.L_802FDE18:
/* 802FDE18 002FAD58  80 61 00 18 */	lwz r3, 0x18(r1)
/* 802FDE1C 002FAD5C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 802FDE20 002FAD60  81 83 00 00 */	lwz r12, 0(r3)
/* 802FDE24 002FAD64  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802FDE28 002FAD68  7D 89 03 A6 */	mtctr r12
/* 802FDE2C 002FAD6C  4E 80 04 21 */	bctrl 
/* 802FDE30 002FAD70  7C 64 1B 78 */	mr r4, r3
/* 802FDE34 002FAD74  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802FDE38 002FAD78  81 83 00 00 */	lwz r12, 0(r3)
/* 802FDE3C 002FAD7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FDE40 002FAD80  7D 89 03 A6 */	mtctr r12
/* 802FDE44 002FAD84  4E 80 04 21 */	bctrl 
/* 802FDE48 002FAD88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FDE4C 002FAD8C  40 82 00 3C */	bne .L_802FDE88
/* 802FDE50 002FAD90  80 61 00 18 */	lwz r3, 0x18(r1)
/* 802FDE54 002FAD94  80 81 00 14 */	lwz r4, 0x14(r1)
/* 802FDE58 002FAD98  81 83 00 00 */	lwz r12, 0(r3)
/* 802FDE5C 002FAD9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802FDE60 002FADA0  7D 89 03 A6 */	mtctr r12
/* 802FDE64 002FADA4  4E 80 04 21 */	bctrl 
/* 802FDE68 002FADA8  90 61 00 14 */	stw r3, 0x14(r1)
.L_802FDE6C:
/* 802FDE6C 002FADAC  81 81 00 10 */	lwz r12, 0x10(r1)
/* 802FDE70 002FADB0  38 61 00 10 */	addi r3, r1, 0x10
/* 802FDE74 002FADB4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802FDE78 002FADB8  7D 89 03 A6 */	mtctr r12
/* 802FDE7C 002FADBC  4E 80 04 21 */	bctrl 
/* 802FDE80 002FADC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FDE84 002FADC4  41 82 FF 94 */	beq .L_802FDE18
.L_802FDE88:
/* 802FDE88 002FADC8  80 61 00 18 */	lwz r3, 0x18(r1)
/* 802FDE8C 002FADCC  81 83 00 00 */	lwz r12, 0(r3)
/* 802FDE90 002FADD0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FDE94 002FADD4  7D 89 03 A6 */	mtctr r12
/* 802FDE98 002FADD8  4E 80 04 21 */	bctrl 
/* 802FDE9C 002FADDC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 802FDEA0 002FADE0  7C 04 18 40 */	cmplw r4, r3
/* 802FDEA4 002FADE4  40 82 FE 40 */	bne .L_802FDCE4
/* 802FDEA8 002FADE8  38 61 00 4C */	addi r3, r1, 0x4c
/* 802FDEAC 002FADEC  38 80 FF FF */	li r4, -1
/* 802FDEB0 002FADF0  4B EA 1E B5 */	bl __dt__Q24Game8StickersFv
.L_802FDEB4:
/* 802FDEB4 002FADF4  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 802FDEB8 002FADF8  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 802FDEBC 002FADFC  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 802FDEC0 002FAE00  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 802FDEC4 002FAE04  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 802FDEC8 002FAE08  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 802FDECC 002FAE0C  BB 21 00 84 */	lmw r25, 0x84(r1)
/* 802FDED0 002FAE10  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 802FDED4 002FAE14  7C 08 03 A6 */	mtlr r0
/* 802FDED8 002FAE18  38 21 00 D0 */	addi r1, r1, 0xd0
/* 802FDEDC 002FAE1C  4E 80 00 20 */	blr 
.endfn setBodyCollision__Q34Game10DangoMushi3ObjFb

.fn flickHandCollision__Q34Game10DangoMushi3ObjFPQ24Game8Creature, global
/* 802FDEE0 002FAE20  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802FDEE4 002FAE24  7C 08 02 A6 */	mflr r0
/* 802FDEE8 002FAE28  90 01 00 84 */	stw r0, 0x84(r1)
/* 802FDEEC 002FAE2C  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 802FDEF0 002FAE30  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802FDEF4 002FAE34  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 802FDEF8 002FAE38  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 802FDEFC 002FAE3C  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802FDF00 002FAE40  93 C1 00 58 */	stw r30, 0x58(r1)
/* 802FDF04 002FAE44  81 84 00 00 */	lwz r12, 0(r4)
/* 802FDF08 002FAE48  7C 7E 1B 78 */	mr r30, r3
/* 802FDF0C 002FAE4C  7C 9F 23 78 */	mr r31, r4
/* 802FDF10 002FAE50  38 61 00 08 */	addi r3, r1, 8
/* 802FDF14 002FAE54  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FDF18 002FAE58  7D 89 03 A6 */	mtctr r12
/* 802FDF1C 002FAE5C  4E 80 04 21 */	bctrl 
/* 802FDF20 002FAE60  7F E3 FB 78 */	mr r3, r31
/* 802FDF24 002FAE64  C3 E1 00 08 */	lfs f31, 8(r1)
/* 802FDF28 002FAE68  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FDF2C 002FAE6C  C3 C1 00 10 */	lfs f30, 0x10(r1)
/* 802FDF30 002FAE70  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FDF34 002FAE74  7D 89 03 A6 */	mtctr r12
/* 802FDF38 002FAE78  4E 80 04 21 */	bctrl 
/* 802FDF3C 002FAE7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FDF40 002FAE80  41 82 00 CC */	beq .L_802FE00C
/* 802FDF44 002FAE84  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 802FDF48 002FAE88  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802FDF4C 002FAE8C  EF FF 08 28 */	fsubs f31, f31, f1
/* 802FDF50 002FAE90  C0 22 F0 48 */	lfs f1, lbl_8051D3A8@sda21(r2)
/* 802FDF54 002FAE94  EF DE 00 28 */	fsubs f30, f30, f0
/* 802FDF58 002FAE98  EC 1F 0F FA */	fmadds f0, f31, f31, f1
/* 802FDF5C 002FAE9C  EC 5E 07 B2 */	fmuls f2, f30, f30
/* 802FDF60 002FAEA0  EC 42 00 2A */	fadds f2, f2, f0
/* 802FDF64 002FAEA4  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802FDF68 002FAEA8  40 81 00 14 */	ble .L_802FDF7C
/* 802FDF6C 002FAEAC  40 81 00 14 */	ble .L_802FDF80
/* 802FDF70 002FAEB0  FC 00 10 34 */	frsqrte f0, f2
/* 802FDF74 002FAEB4  EC 40 00 B2 */	fmuls f2, f0, f2
/* 802FDF78 002FAEB8  48 00 00 08 */	b .L_802FDF80
.L_802FDF7C:
/* 802FDF7C 002FAEBC  FC 40 08 90 */	fmr f2, f1
.L_802FDF80:
/* 802FDF80 002FAEC0  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FDF84 002FAEC4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802FDF88 002FAEC8  40 81 00 14 */	ble .L_802FDF9C
/* 802FDF8C 002FAECC  C0 02 F0 58 */	lfs f0, lbl_8051D3B8@sda21(r2)
/* 802FDF90 002FAED0  EC 00 10 24 */	fdivs f0, f0, f2
/* 802FDF94 002FAED4  EF FF 00 32 */	fmuls f31, f31, f0
/* 802FDF98 002FAED8  EF DE 00 32 */	fmuls f30, f30, f0
.L_802FDF9C:
/* 802FDF9C 002FAEDC  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 802FDFA0 002FAEE0  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 802FDFA4 002FAEE4  C0 02 F1 04 */	lfs f0, lbl_8051D464@sda21(r2)
/* 802FDFA8 002FAEE8  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractWind@ha
/* 802FDFAC 002FAEEC  C0 25 06 04 */	lfs f1, 0x604(r5)
/* 802FDFB0 002FAEF0  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 802FDFB4 002FAEF4  C0 42 F0 58 */	lfs f2, lbl_8051D3B8@sda21(r2)
/* 802FDFB8 002FAEF8  EF FF 00 32 */	fmuls f31, f31, f0
/* 802FDFBC 002FAEFC  90 01 00 40 */	stw r0, 0x40(r1)
/* 802FDFC0 002FAF00  EF DE 00 32 */	fmuls f30, f30, f0
/* 802FDFC4 002FAF04  EC 42 00 32 */	fmuls f2, f2, f0
/* 802FDFC8 002FAF08  38 03 49 74 */	addi r0, r3, __vt__Q24Game12InteractWind@l
/* 802FDFCC 002FAF0C  3C 60 80 4B */	lis r3, __vt__Q24Game20InteractHanaChirashi@ha
/* 802FDFD0 002FAF10  90 01 00 40 */	stw r0, 0x40(r1)
/* 802FDFD4 002FAF14  38 03 49 50 */	addi r0, r3, __vt__Q24Game20InteractHanaChirashi@l
/* 802FDFD8 002FAF18  7F E3 FB 78 */	mr r3, r31
/* 802FDFDC 002FAF1C  93 C1 00 44 */	stw r30, 0x44(r1)
/* 802FDFE0 002FAF20  38 81 00 40 */	addi r4, r1, 0x40
/* 802FDFE4 002FAF24  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 802FDFE8 002FAF28  D3 E1 00 4C */	stfs f31, 0x4c(r1)
/* 802FDFEC 002FAF2C  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 802FDFF0 002FAF30  D3 C1 00 54 */	stfs f30, 0x54(r1)
/* 802FDFF4 002FAF34  90 01 00 40 */	stw r0, 0x40(r1)
/* 802FDFF8 002FAF38  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FDFFC 002FAF3C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802FE000 002FAF40  7D 89 03 A6 */	mtctr r12
/* 802FE004 002FAF44  4E 80 04 21 */	bctrl 
/* 802FE008 002FAF48  48 00 01 5C */	b .L_802FE164
.L_802FE00C:
/* 802FE00C 002FAF4C  7F E3 FB 78 */	mr r3, r31
/* 802FE010 002FAF50  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FE014 002FAF54  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802FE018 002FAF58  7D 89 03 A6 */	mtctr r12
/* 802FE01C 002FAF5C  4E 80 04 21 */	bctrl 
/* 802FE020 002FAF60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FE024 002FAF64  41 82 01 40 */	beq .L_802FE164
/* 802FE028 002FAF68  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 802FE02C 002FAF6C  2C 00 00 03 */	cmpwi r0, 3
/* 802FE030 002FAF70  40 82 00 70 */	bne .L_802FE0A0
/* 802FE034 002FAF74  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 802FE038 002FAF78  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802FE03C 002FAF7C  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802FE040 002FAF80  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802FE044 002FAF84  EC 21 F8 28 */	fsubs f1, f1, f31
/* 802FE048 002FAF88  EC 40 F0 28 */	fsubs f2, f0, f30
/* 802FE04C 002FAF8C  4B D3 70 BD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802FE050 002FAF90  80 DE 00 C0 */	lwz r6, 0xc0(r30)
/* 802FE054 002FAF94  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 802FE058 002FAF98  3C 80 80 4B */	lis r4, __vt__Q24Game13InteractFlick@ha
/* 802FE05C 002FAF9C  7F E3 FB 78 */	mr r3, r31
/* 802FE060 002FAFA0  C0 46 04 EC */	lfs f2, 0x4ec(r6)
/* 802FE064 002FAFA4  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 802FE068 002FAFA8  C0 06 04 C4 */	lfs f0, 0x4c4(r6)
/* 802FE06C 002FAFAC  38 04 4E 04 */	addi r0, r4, __vt__Q24Game13InteractFlick@l
/* 802FE070 002FAFB0  38 81 00 2C */	addi r4, r1, 0x2c
/* 802FE074 002FAFB4  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 802FE078 002FAFB8  93 C1 00 30 */	stw r30, 0x30(r1)
/* 802FE07C 002FAFBC  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802FE080 002FAFC0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802FE084 002FAFC4  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802FE088 002FAFC8  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802FE08C 002FAFCC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FE090 002FAFD0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802FE094 002FAFD4  7D 89 03 A6 */	mtctr r12
/* 802FE098 002FAFD8  4E 80 04 21 */	bctrl 
/* 802FE09C 002FAFDC  48 00 00 C8 */	b .L_802FE164
.L_802FE0A0:
/* 802FE0A0 002FAFE0  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 802FE0A4 002FAFE4  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802FE0A8 002FAFE8  EF FF 08 28 */	fsubs f31, f31, f1
/* 802FE0AC 002FAFEC  C0 22 F0 48 */	lfs f1, lbl_8051D3A8@sda21(r2)
/* 802FE0B0 002FAFF0  EF DE 00 28 */	fsubs f30, f30, f0
/* 802FE0B4 002FAFF4  EC 1F 0F FA */	fmadds f0, f31, f31, f1
/* 802FE0B8 002FAFF8  EC 5E 07 B2 */	fmuls f2, f30, f30
/* 802FE0BC 002FAFFC  EC 42 00 2A */	fadds f2, f2, f0
/* 802FE0C0 002FB000  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802FE0C4 002FB004  40 81 00 14 */	ble .L_802FE0D8
/* 802FE0C8 002FB008  40 81 00 14 */	ble .L_802FE0DC
/* 802FE0CC 002FB00C  FC 00 10 34 */	frsqrte f0, f2
/* 802FE0D0 002FB010  EC 40 00 B2 */	fmuls f2, f0, f2
/* 802FE0D4 002FB014  48 00 00 08 */	b .L_802FE0DC
.L_802FE0D8:
/* 802FE0D8 002FB018  FC 40 08 90 */	fmr f2, f1
.L_802FE0DC:
/* 802FE0DC 002FB01C  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FE0E0 002FB020  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802FE0E4 002FB024  40 81 00 14 */	ble .L_802FE0F8
/* 802FE0E8 002FB028  C0 02 F0 58 */	lfs f0, lbl_8051D3B8@sda21(r2)
/* 802FE0EC 002FB02C  EC 00 10 24 */	fdivs f0, f0, f2
/* 802FE0F0 002FB030  EF FF 00 32 */	fmuls f31, f31, f0
/* 802FE0F4 002FB034  EF DE 00 32 */	fmuls f30, f30, f0
.L_802FE0F8:
/* 802FE0F8 002FB038  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 802FE0FC 002FB03C  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 802FE100 002FB040  C0 02 F1 04 */	lfs f0, lbl_8051D464@sda21(r2)
/* 802FE104 002FB044  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractWind@ha
/* 802FE108 002FB048  C0 25 06 04 */	lfs f1, 0x604(r5)
/* 802FE10C 002FB04C  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 802FE110 002FB050  C0 42 F0 58 */	lfs f2, lbl_8051D3B8@sda21(r2)
/* 802FE114 002FB054  EF FF 00 32 */	fmuls f31, f31, f0
/* 802FE118 002FB058  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FE11C 002FB05C  EF DE 00 32 */	fmuls f30, f30, f0
/* 802FE120 002FB060  EC 42 00 32 */	fmuls f2, f2, f0
/* 802FE124 002FB064  38 03 49 74 */	addi r0, r3, __vt__Q24Game12InteractWind@l
/* 802FE128 002FB068  3C 60 80 4B */	lis r3, __vt__Q24Game20InteractHanaChirashi@ha
/* 802FE12C 002FB06C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FE130 002FB070  38 03 49 50 */	addi r0, r3, __vt__Q24Game20InteractHanaChirashi@l
/* 802FE134 002FB074  7F E3 FB 78 */	mr r3, r31
/* 802FE138 002FB078  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802FE13C 002FB07C  38 81 00 14 */	addi r4, r1, 0x14
/* 802FE140 002FB080  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802FE144 002FB084  D3 E1 00 20 */	stfs f31, 0x20(r1)
/* 802FE148 002FB088  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 802FE14C 002FB08C  D3 C1 00 28 */	stfs f30, 0x28(r1)
/* 802FE150 002FB090  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FE154 002FB094  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FE158 002FB098  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802FE15C 002FB09C  7D 89 03 A6 */	mtctr r12
/* 802FE160 002FB0A0  4E 80 04 21 */	bctrl 
.L_802FE164:
/* 802FE164 002FB0A4  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 802FE168 002FB0A8  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 802FE16C 002FB0AC  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 802FE170 002FB0B0  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 802FE174 002FB0B4  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802FE178 002FB0B8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802FE17C 002FB0BC  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802FE180 002FB0C0  7C 08 03 A6 */	mtlr r0
/* 802FE184 002FB0C4  38 21 00 80 */	addi r1, r1, 0x80
/* 802FE188 002FB0C8  4E 80 00 20 */	blr 
.endfn flickHandCollision__Q34Game10DangoMushi3ObjFPQ24Game8Creature

.fn isNoDamageCollision__Q34Game10DangoMushi3ObjFv, global
/* 802FE18C 002FB0CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FE190 002FB0D0  7C 08 02 A6 */	mflr r0
/* 802FE194 002FB0D4  3C 80 62 6F */	lis r4, 0x626F6430@ha
/* 802FE198 002FB0D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FE19C 002FB0DC  38 84 64 30 */	addi r4, r4, 0x626F6430@l
/* 802FE1A0 002FB0E0  80 63 01 14 */	lwz r3, 0x114(r3)
/* 802FE1A4 002FB0E4  4B E3 7C A1 */	bl getCollPart__8CollTreeFUl
/* 802FE1A8 002FB0E8  28 03 00 00 */	cmplwi r3, 0
/* 802FE1AC 002FB0EC  41 82 00 24 */	beq .L_802FE1D0
/* 802FE1B0 002FB0F0  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 802FE1B4 002FB0F4  38 63 00 3C */	addi r3, r3, 0x3c
/* 802FE1B8 002FB0F8  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 802FE1BC 002FB0FC  48 11 52 79 */	bl __eq__4ID32FUl
/* 802FE1C0 002FB100  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FE1C4 002FB104  41 82 00 0C */	beq .L_802FE1D0
/* 802FE1C8 002FB108  38 60 00 00 */	li r3, 0
/* 802FE1CC 002FB10C  48 00 00 08 */	b .L_802FE1D4
.L_802FE1D0:
/* 802FE1D0 002FB110  38 60 00 01 */	li r3, 1
.L_802FE1D4:
/* 802FE1D4 002FB114  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FE1D8 002FB118  7C 08 03 A6 */	mtlr r0
/* 802FE1DC 002FB11C  38 21 00 10 */	addi r1, r1, 0x10
/* 802FE1E0 002FB120  4E 80 00 20 */	blr 
.endfn isNoDamageCollision__Q34Game10DangoMushi3ObjFv

.fn resetMapCollisionSize__Q34Game10DangoMushi3ObjFb, global
/* 802FE1E4 002FB124  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802FE1E8 002FB128  98 83 02 C2 */	stb r4, 0x2c2(r3)
/* 802FE1EC 002FB12C  41 82 00 14 */	beq .L_802FE200
/* 802FE1F0 002FB130  C0 02 F0 4C */	lfs f0, lbl_8051D3AC@sda21(r2)
/* 802FE1F4 002FB134  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802FE1F8 002FB138  D0 03 01 A4 */	stfs f0, 0x1a4(r3)
/* 802FE1FC 002FB13C  4E 80 00 20 */	blr 
.L_802FE200:
/* 802FE200 002FB140  C0 02 F1 08 */	lfs f0, lbl_8051D468@sda21(r2)
/* 802FE204 002FB144  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802FE208 002FB148  D0 03 01 A4 */	stfs f0, 0x1a4(r3)
/* 802FE20C 002FB14C  4E 80 00 20 */	blr 
.endfn resetMapCollisionSize__Q34Game10DangoMushi3ObjFb

.fn updateMapCollisionSize__Q34Game10DangoMushi3ObjFv, global
/* 802FE210 002FB150  88 03 02 C2 */	lbz r0, 0x2c2(r3)
/* 802FE214 002FB154  28 00 00 00 */	cmplwi r0, 0
/* 802FE218 002FB158  41 82 00 44 */	beq .L_802FE25C
/* 802FE21C 002FB15C  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802FE220 002FB160  C0 42 F0 4C */	lfs f2, lbl_8051D3AC@sda21(r2)
/* 802FE224 002FB164  C0 65 01 A4 */	lfs f3, 0x1a4(r5)
/* 802FE228 002FB168  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 802FE22C 002FB16C  4C 81 00 20 */	blelr 
/* 802FE230 002FB170  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802FE234 002FB174  C0 22 F1 0C */	lfs f1, lbl_8051D46C@sda21(r2)
/* 802FE238 002FB178  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 802FE23C 002FB17C  EC 01 18 3C */	fnmsubs f0, f1, f0, f3
/* 802FE240 002FB180  D0 05 01 A4 */	stfs f0, 0x1a4(r5)
/* 802FE244 002FB184  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802FE248 002FB188  C0 03 01 A4 */	lfs f0, 0x1a4(r3)
/* 802FE24C 002FB18C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802FE250 002FB190  4C 80 00 20 */	bgelr 
/* 802FE254 002FB194  D0 43 01 A4 */	stfs f2, 0x1a4(r3)
/* 802FE258 002FB198  4E 80 00 20 */	blr 
.L_802FE25C:
/* 802FE25C 002FB19C  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802FE260 002FB1A0  C0 42 F1 08 */	lfs f2, lbl_8051D468@sda21(r2)
/* 802FE264 002FB1A4  C0 65 01 A4 */	lfs f3, 0x1a4(r5)
/* 802FE268 002FB1A8  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 802FE26C 002FB1AC  4C 80 00 20 */	bgelr 
/* 802FE270 002FB1B0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802FE274 002FB1B4  C0 22 F1 0C */	lfs f1, lbl_8051D46C@sda21(r2)
/* 802FE278 002FB1B8  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 802FE27C 002FB1BC  EC 01 18 3A */	fmadds f0, f1, f0, f3
/* 802FE280 002FB1C0  D0 05 01 A4 */	stfs f0, 0x1a4(r5)
/* 802FE284 002FB1C4  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802FE288 002FB1C8  C0 03 01 A4 */	lfs f0, 0x1a4(r3)
/* 802FE28C 002FB1CC  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802FE290 002FB1D0  4C 81 00 20 */	blelr 
/* 802FE294 002FB1D4  D0 43 01 A4 */	stfs f2, 0x1a4(r3)
/* 802FE298 002FB1D8  4E 80 00 20 */	blr 
.endfn updateMapCollisionSize__Q34Game10DangoMushi3ObjFv

.fn flickHandCollision__Q34Game10DangoMushi3ObjFv, global
/* 802FE29C 002FB1DC  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 802FE2A0 002FB1E0  7C 08 02 A6 */	mflr r0
/* 802FE2A4 002FB1E4  90 01 01 64 */	stw r0, 0x164(r1)
/* 802FE2A8 002FB1E8  DB E1 01 50 */	stfd f31, 0x150(r1)
/* 802FE2AC 002FB1EC  F3 E1 01 58 */	psq_st f31, 344(r1), 0, qr0
/* 802FE2B0 002FB1F0  DB C1 01 40 */	stfd f30, 0x140(r1)
/* 802FE2B4 002FB1F4  F3 C1 01 48 */	psq_st f30, 328(r1), 0, qr0
/* 802FE2B8 002FB1F8  DB A1 01 30 */	stfd f29, 0x130(r1)
/* 802FE2BC 002FB1FC  F3 A1 01 38 */	psq_st f29, 312(r1), 0, qr0
/* 802FE2C0 002FB200  DB 81 01 20 */	stfd f28, 0x120(r1)
/* 802FE2C4 002FB204  F3 81 01 28 */	psq_st f28, 296(r1), 0, qr0
/* 802FE2C8 002FB208  DB 61 01 10 */	stfd f27, 0x110(r1)
/* 802FE2CC 002FB20C  F3 61 01 18 */	psq_st f27, 280(r1), 0, qr0
/* 802FE2D0 002FB210  DB 41 01 00 */	stfd f26, 0x100(r1)
/* 802FE2D4 002FB214  F3 41 01 08 */	psq_st f26, 264(r1), 0, qr0
/* 802FE2D8 002FB218  DB 21 00 F0 */	stfd f25, 0xf0(r1)
/* 802FE2DC 002FB21C  F3 21 00 F8 */	psq_st f25, 248(r1), 0, qr0
/* 802FE2E0 002FB220  DB 01 00 E0 */	stfd f24, 0xe0(r1)
/* 802FE2E4 002FB224  F3 01 00 E8 */	psq_st f24, 232(r1), 0, qr0
/* 802FE2E8 002FB228  DA E1 00 D0 */	stfd f23, 0xd0(r1)
/* 802FE2EC 002FB22C  F2 E1 00 D8 */	psq_st f23, 216(r1), 0, qr0
/* 802FE2F0 002FB230  DA C1 00 C0 */	stfd f22, 0xc0(r1)
/* 802FE2F4 002FB234  F2 C1 00 C8 */	psq_st f22, 200(r1), 0, qr0
/* 802FE2F8 002FB238  DA A1 00 B0 */	stfd f21, 0xb0(r1)
/* 802FE2FC 002FB23C  F2 A1 00 B8 */	psq_st f21, 184(r1), 0, qr0
/* 802FE300 002FB240  DA 81 00 A0 */	stfd f20, 0xa0(r1)
/* 802FE304 002FB244  F2 81 00 A8 */	psq_st f20, 168(r1), 0, qr0
/* 802FE308 002FB248  DA 61 00 90 */	stfd f19, 0x90(r1)
/* 802FE30C 002FB24C  F2 61 00 98 */	psq_st f19, 152(r1), 0, qr0
/* 802FE310 002FB250  DA 41 00 80 */	stfd f18, 0x80(r1)
/* 802FE314 002FB254  F2 41 00 88 */	psq_st f18, 136(r1), 0, qr0
/* 802FE318 002FB258  DA 21 00 70 */	stfd f17, 0x70(r1)
/* 802FE31C 002FB25C  F2 21 00 78 */	psq_st f17, 120(r1), 0, qr0
/* 802FE320 002FB260  DA 01 00 60 */	stfd f16, 0x60(r1)
/* 802FE324 002FB264  F2 01 00 68 */	psq_st f16, 104(r1), 0, qr0
/* 802FE328 002FB268  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802FE32C 002FB26C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 802FE330 002FB270  93 A1 00 54 */	stw r29, 0x54(r1)
/* 802FE334 002FB274  93 81 00 50 */	stw r28, 0x50(r1)
/* 802FE338 002FB278  88 03 02 C1 */	lbz r0, 0x2c1(r3)
/* 802FE33C 002FB27C  28 00 00 00 */	cmplwi r0, 0
/* 802FE340 002FB280  41 82 02 64 */	beq .L_802FE5A4
/* 802FE344 002FB284  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802FE348 002FB288  38 82 F1 28 */	addi r4, r2, lbl_8051D488@sda21
/* 802FE34C 002FB28C  48 14 0C 99 */	bl getJoint__Q28SysShape5ModelFPc
/* 802FE350 002FB290  48 12 B5 51 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802FE354 002FB294  C3 C3 00 10 */	lfs f30, 0x10(r3)
/* 802FE358 002FB298  C3 A3 00 20 */	lfs f29, 0x20(r3)
/* 802FE35C 002FB29C  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 802FE360 002FB2A0  C3 E3 00 00 */	lfs f31, 0(r3)
/* 802FE364 002FB2A4  81 02 F1 10 */	lwz r8, lbl_8051D470@sda21(r2)
/* 802FE368 002FB2A8  EC 3D 07 72 */	fmuls f1, f29, f29
/* 802FE36C 002FB2AC  80 E2 F1 14 */	lwz r7, (lbl_8051D470+4)@sda21(r2)
/* 802FE370 002FB2B0  EC 1F 07 FA */	fmadds f0, f31, f31, f0
/* 802FE374 002FB2B4  80 C2 F1 18 */	lwz r6, lbl_8051D478@sda21(r2)
/* 802FE378 002FB2B8  80 A2 F1 1C */	lwz r5, (lbl_8051D478+4)@sda21(r2)
/* 802FE37C 002FB2BC  EC 21 00 2A */	fadds f1, f1, f0
/* 802FE380 002FB2C0  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FE384 002FB2C4  80 82 F1 20 */	lwz r4, lbl_8051D480@sda21(r2)
/* 802FE388 002FB2C8  80 02 F1 24 */	lwz r0, (lbl_8051D480+4)@sda21(r2)
/* 802FE38C 002FB2CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FE390 002FB2D0  91 01 00 18 */	stw r8, 0x18(r1)
/* 802FE394 002FB2D4  C3 83 00 04 */	lfs f28, 4(r3)
/* 802FE398 002FB2D8  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 802FE39C 002FB2DC  C3 63 00 14 */	lfs f27, 0x14(r3)
/* 802FE3A0 002FB2E0  90 C1 00 10 */	stw r6, 0x10(r1)
/* 802FE3A4 002FB2E4  C3 43 00 24 */	lfs f26, 0x24(r3)
/* 802FE3A8 002FB2E8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802FE3AC 002FB2EC  C3 23 00 08 */	lfs f25, 8(r3)
/* 802FE3B0 002FB2F0  90 81 00 08 */	stw r4, 8(r1)
/* 802FE3B4 002FB2F4  C3 03 00 18 */	lfs f24, 0x18(r3)
/* 802FE3B8 002FB2F8  90 01 00 0C */	stw r0, 0xc(r1)
/* 802FE3BC 002FB2FC  C2 E3 00 28 */	lfs f23, 0x28(r3)
/* 802FE3C0 002FB300  C2 C3 00 0C */	lfs f22, 0xc(r3)
/* 802FE3C4 002FB304  C2 A3 00 1C */	lfs f21, 0x1c(r3)
/* 802FE3C8 002FB308  C2 83 00 2C */	lfs f20, 0x2c(r3)
/* 802FE3CC 002FB30C  40 81 00 14 */	ble .L_802FE3E0
/* 802FE3D0 002FB310  40 81 00 14 */	ble .L_802FE3E4
/* 802FE3D4 002FB314  FC 00 08 34 */	frsqrte f0, f1
/* 802FE3D8 002FB318  EC 20 00 72 */	fmuls f1, f0, f1
/* 802FE3DC 002FB31C  48 00 00 08 */	b .L_802FE3E4
.L_802FE3E0:
/* 802FE3E0 002FB320  FC 20 00 90 */	fmr f1, f0
.L_802FE3E4:
/* 802FE3E4 002FB324  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FE3E8 002FB328  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FE3EC 002FB32C  40 81 00 18 */	ble .L_802FE404
/* 802FE3F0 002FB330  C0 02 F0 58 */	lfs f0, lbl_8051D3B8@sda21(r2)
/* 802FE3F4 002FB334  EC 00 08 24 */	fdivs f0, f0, f1
/* 802FE3F8 002FB338  EF FF 00 32 */	fmuls f31, f31, f0
/* 802FE3FC 002FB33C  EF DE 00 32 */	fmuls f30, f30, f0
/* 802FE400 002FB340  EF BD 00 32 */	fmuls f29, f29, f0
.L_802FE404:
/* 802FE404 002FB344  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 802FE408 002FB348  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FE40C 002FB34C  EC 5A 06 B2 */	fmuls f2, f26, f26
/* 802FE410 002FB350  EC 3C 0F 3A */	fmadds f1, f28, f28, f1
/* 802FE414 002FB354  EC 22 08 2A */	fadds f1, f2, f1
/* 802FE418 002FB358  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FE41C 002FB35C  40 81 00 14 */	ble .L_802FE430
/* 802FE420 002FB360  40 81 00 14 */	ble .L_802FE434
/* 802FE424 002FB364  FC 00 08 34 */	frsqrte f0, f1
/* 802FE428 002FB368  EC 20 00 72 */	fmuls f1, f0, f1
/* 802FE42C 002FB36C  48 00 00 08 */	b .L_802FE434
.L_802FE430:
/* 802FE430 002FB370  FC 20 00 90 */	fmr f1, f0
.L_802FE434:
/* 802FE434 002FB374  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FE438 002FB378  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FE43C 002FB37C  40 81 00 18 */	ble .L_802FE454
/* 802FE440 002FB380  C0 02 F0 58 */	lfs f0, lbl_8051D3B8@sda21(r2)
/* 802FE444 002FB384  EC 00 08 24 */	fdivs f0, f0, f1
/* 802FE448 002FB388  EF 9C 00 32 */	fmuls f28, f28, f0
/* 802FE44C 002FB38C  EF 7B 00 32 */	fmuls f27, f27, f0
/* 802FE450 002FB390  EF 5A 00 32 */	fmuls f26, f26, f0
.L_802FE454:
/* 802FE454 002FB394  EC 38 06 32 */	fmuls f1, f24, f24
/* 802FE458 002FB398  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FE45C 002FB39C  EC 57 05 F2 */	fmuls f2, f23, f23
/* 802FE460 002FB3A0  EC 39 0E 7A */	fmadds f1, f25, f25, f1
/* 802FE464 002FB3A4  EC 22 08 2A */	fadds f1, f2, f1
/* 802FE468 002FB3A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FE46C 002FB3AC  40 81 00 14 */	ble .L_802FE480
/* 802FE470 002FB3B0  40 81 00 14 */	ble .L_802FE484
/* 802FE474 002FB3B4  FC 00 08 34 */	frsqrte f0, f1
/* 802FE478 002FB3B8  EC 20 00 72 */	fmuls f1, f0, f1
/* 802FE47C 002FB3BC  48 00 00 08 */	b .L_802FE484
.L_802FE480:
/* 802FE480 002FB3C0  FC 20 00 90 */	fmr f1, f0
.L_802FE484:
/* 802FE484 002FB3C4  C0 02 F0 48 */	lfs f0, lbl_8051D3A8@sda21(r2)
/* 802FE488 002FB3C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FE48C 002FB3CC  40 81 00 18 */	ble .L_802FE4A4
/* 802FE490 002FB3D0  C0 02 F0 58 */	lfs f0, lbl_8051D3B8@sda21(r2)
/* 802FE494 002FB3D4  EC 00 08 24 */	fdivs f0, f0, f1
/* 802FE498 002FB3D8  EF 39 00 32 */	fmuls f25, f25, f0
/* 802FE49C 002FB3DC  EF 18 00 32 */	fmuls f24, f24, f0
/* 802FE4A0 002FB3E0  EE F7 00 32 */	fmuls f23, f23, f0
.L_802FE4A4:
/* 802FE4A4 002FB3E4  C2 02 F1 30 */	lfs f16, lbl_8051D490@sda21(r2)
/* 802FE4A8 002FB3E8  3B E1 00 18 */	addi r31, r1, 0x18
/* 802FE4AC 002FB3EC  C2 22 F1 34 */	lfs f17, lbl_8051D494@sda21(r2)
/* 802FE4B0 002FB3F0  3B C1 00 10 */	addi r30, r1, 0x10
/* 802FE4B4 002FB3F4  C2 42 F0 48 */	lfs f18, lbl_8051D3A8@sda21(r2)
/* 802FE4B8 002FB3F8  3B A1 00 08 */	addi r29, r1, 8
/* 802FE4BC 002FB3FC  C2 62 F0 58 */	lfs f19, lbl_8051D3B8@sda21(r2)
/* 802FE4C0 002FB400  3B 80 00 00 */	li r28, 0
.L_802FE4C4:
/* 802FE4C4 002FB404  C0 1F 00 00 */	lfs f0, 0(r31)
/* 802FE4C8 002FB408  38 A0 00 00 */	li r5, 0
/* 802FE4CC 002FB40C  C0 3E 00 00 */	lfs f1, 0(r30)
/* 802FE4D0 002FB410  38 00 00 01 */	li r0, 1
/* 802FE4D4 002FB414  EC 7F 00 32 */	fmuls f3, f31, f0
/* 802FE4D8 002FB418  C0 5D 00 00 */	lfs f2, 0(r29)
/* 802FE4DC 002FB41C  EC 9E 00 32 */	fmuls f4, f30, f0
/* 802FE4E0 002FB420  98 01 00 2C */	stb r0, 0x2c(r1)
/* 802FE4E4 002FB424  EC 1D 00 32 */	fmuls f0, f29, f0
/* 802FE4E8 002FB428  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802FE4EC 002FB42C  EC BC 00 72 */	fmuls f5, f28, f1
/* 802FE4F0 002FB430  90 A1 00 34 */	stw r5, 0x34(r1)
/* 802FE4F4 002FB434  EE D6 18 2A */	fadds f22, f22, f3
/* 802FE4F8 002FB438  38 81 00 20 */	addi r4, r1, 0x20
/* 802FE4FC 002FB43C  EC 7B 00 72 */	fmuls f3, f27, f1
/* 802FE500 002FB440  D2 01 00 38 */	stfs f16, 0x38(r1)
/* 802FE504 002FB444  EE B5 20 2A */	fadds f21, f21, f4
/* 802FE508 002FB448  D2 21 00 3C */	stfs f17, 0x3c(r1)
/* 802FE50C 002FB44C  EC 3A 00 72 */	fmuls f1, f26, f1
/* 802FE510 002FB450  EE 94 00 2A */	fadds f20, f20, f0
/* 802FE514 002FB454  90 A1 00 30 */	stw r5, 0x30(r1)
/* 802FE518 002FB458  EC 19 00 B2 */	fmuls f0, f25, f2
/* 802FE51C 002FB45C  EE D6 28 2A */	fadds f22, f22, f5
/* 802FE520 002FB460  D2 41 00 40 */	stfs f18, 0x40(r1)
/* 802FE524 002FB464  EC 98 00 B2 */	fmuls f4, f24, f2
/* 802FE528 002FB468  EE B5 18 2A */	fadds f21, f21, f3
/* 802FE52C 002FB46C  D2 61 00 44 */	stfs f19, 0x44(r1)
/* 802FE530 002FB470  EE D6 00 2A */	fadds f22, f22, f0
/* 802FE534 002FB474  EC 17 00 B2 */	fmuls f0, f23, f2
/* 802FE538 002FB478  D2 41 00 48 */	stfs f18, 0x48(r1)
/* 802FE53C 002FB47C  EE 94 08 2A */	fadds f20, f20, f1
/* 802FE540 002FB480  EE B5 20 2A */	fadds f21, f21, f4
/* 802FE544 002FB484  98 A1 00 2D */	stb r5, 0x2d(r1)
/* 802FE548 002FB488  EE 94 00 2A */	fadds f20, f20, f0
/* 802FE54C 002FB48C  D2 C1 00 20 */	stfs f22, 0x20(r1)
/* 802FE550 002FB490  D2 A1 00 24 */	stfs f21, 0x24(r1)
/* 802FE554 002FB494  D2 81 00 28 */	stfs f20, 0x28(r1)
/* 802FE558 002FB498  98 A1 00 2C */	stb r5, 0x2c(r1)
/* 802FE55C 002FB49C  81 83 00 04 */	lwz r12, 4(r3)
/* 802FE560 002FB4A0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 802FE564 002FB4A4  7D 89 03 A6 */	mtctr r12
/* 802FE568 002FB4A8  4E 80 04 21 */	bctrl 
/* 802FE56C 002FB4AC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802FE570 002FB4B0  28 00 00 00 */	cmplwi r0, 0
/* 802FE574 002FB4B4  41 82 00 10 */	beq .L_802FE584
/* 802FE578 002FB4B8  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 802FE57C 002FB4BC  FC 00 A8 40 */	fcmpo cr0, f0, f21
/* 802FE580 002FB4C0  40 81 00 0C */	ble .L_802FE58C
.L_802FE584:
/* 802FE584 002FB4C4  38 60 00 01 */	li r3, 1
/* 802FE588 002FB4C8  48 00 00 20 */	b .L_802FE5A8
.L_802FE58C:
/* 802FE58C 002FB4CC  3B 9C 00 01 */	addi r28, r28, 1
/* 802FE590 002FB4D0  3B DE 00 04 */	addi r30, r30, 4
/* 802FE594 002FB4D4  2C 1C 00 02 */	cmpwi r28, 2
/* 802FE598 002FB4D8  3B BD 00 04 */	addi r29, r29, 4
/* 802FE59C 002FB4DC  3B FF 00 04 */	addi r31, r31, 4
/* 802FE5A0 002FB4E0  41 80 FF 24 */	blt .L_802FE4C4
.L_802FE5A4:
/* 802FE5A4 002FB4E4  38 60 00 00 */	li r3, 0
.L_802FE5A8:
/* 802FE5A8 002FB4E8  E3 E1 01 58 */	psq_l f31, 344(r1), 0, qr0
/* 802FE5AC 002FB4EC  CB E1 01 50 */	lfd f31, 0x150(r1)
/* 802FE5B0 002FB4F0  E3 C1 01 48 */	psq_l f30, 328(r1), 0, qr0
/* 802FE5B4 002FB4F4  CB C1 01 40 */	lfd f30, 0x140(r1)
/* 802FE5B8 002FB4F8  E3 A1 01 38 */	psq_l f29, 312(r1), 0, qr0
/* 802FE5BC 002FB4FC  CB A1 01 30 */	lfd f29, 0x130(r1)
/* 802FE5C0 002FB500  E3 81 01 28 */	psq_l f28, 296(r1), 0, qr0
/* 802FE5C4 002FB504  CB 81 01 20 */	lfd f28, 0x120(r1)
/* 802FE5C8 002FB508  E3 61 01 18 */	psq_l f27, 280(r1), 0, qr0
/* 802FE5CC 002FB50C  CB 61 01 10 */	lfd f27, 0x110(r1)
/* 802FE5D0 002FB510  E3 41 01 08 */	psq_l f26, 264(r1), 0, qr0
/* 802FE5D4 002FB514  CB 41 01 00 */	lfd f26, 0x100(r1)
/* 802FE5D8 002FB518  E3 21 00 F8 */	psq_l f25, 248(r1), 0, qr0
/* 802FE5DC 002FB51C  CB 21 00 F0 */	lfd f25, 0xf0(r1)
/* 802FE5E0 002FB520  E3 01 00 E8 */	psq_l f24, 232(r1), 0, qr0
/* 802FE5E4 002FB524  CB 01 00 E0 */	lfd f24, 0xe0(r1)
/* 802FE5E8 002FB528  E2 E1 00 D8 */	psq_l f23, 216(r1), 0, qr0
/* 802FE5EC 002FB52C  CA E1 00 D0 */	lfd f23, 0xd0(r1)
/* 802FE5F0 002FB530  E2 C1 00 C8 */	psq_l f22, 200(r1), 0, qr0
/* 802FE5F4 002FB534  CA C1 00 C0 */	lfd f22, 0xc0(r1)
/* 802FE5F8 002FB538  E2 A1 00 B8 */	psq_l f21, 184(r1), 0, qr0
/* 802FE5FC 002FB53C  CA A1 00 B0 */	lfd f21, 0xb0(r1)
/* 802FE600 002FB540  E2 81 00 A8 */	psq_l f20, 168(r1), 0, qr0
/* 802FE604 002FB544  CA 81 00 A0 */	lfd f20, 0xa0(r1)
/* 802FE608 002FB548  E2 61 00 98 */	psq_l f19, 152(r1), 0, qr0
/* 802FE60C 002FB54C  CA 61 00 90 */	lfd f19, 0x90(r1)
/* 802FE610 002FB550  E2 41 00 88 */	psq_l f18, 136(r1), 0, qr0
/* 802FE614 002FB554  CA 41 00 80 */	lfd f18, 0x80(r1)
/* 802FE618 002FB558  E2 21 00 78 */	psq_l f17, 120(r1), 0, qr0
/* 802FE61C 002FB55C  CA 21 00 70 */	lfd f17, 0x70(r1)
/* 802FE620 002FB560  E2 01 00 68 */	psq_l f16, 104(r1), 0, qr0
/* 802FE624 002FB564  CA 01 00 60 */	lfd f16, 0x60(r1)
/* 802FE628 002FB568  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802FE62C 002FB56C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802FE630 002FB570  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 802FE634 002FB574  80 01 01 64 */	lwz r0, 0x164(r1)
/* 802FE638 002FB578  83 81 00 50 */	lwz r28, 0x50(r1)
/* 802FE63C 002FB57C  7C 08 03 A6 */	mtlr r0
/* 802FE640 002FB580  38 21 01 60 */	addi r1, r1, 0x160
/* 802FE644 002FB584  4E 80 00 20 */	blr 
.endfn flickHandCollision__Q34Game10DangoMushi3ObjFv

.fn startBlendAnimation__Q34Game10DangoMushi3ObjFib, global
/* 802FE648 002FB588  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802FE64C 002FB58C  7C 08 02 A6 */	mflr r0
/* 802FE650 002FB590  90 01 00 34 */	stw r0, 0x34(r1)
/* 802FE654 002FB594  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802FE658 002FB598  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802FE65C 002FB59C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802FE660 002FB5A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802FE664 002FB5A4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802FE668 002FB5A8  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 802FE66C 002FB5AC  7C 7D 1B 78 */	mr r29, r3
/* 802FE670 002FB5B0  7C 9E 23 78 */	mr r30, r4
/* 802FE674 002FB5B4  41 82 00 C4 */	beq .L_802FE738
/* 802FE678 002FB5B8  80 7D 01 84 */	lwz r3, 0x184(r29)
/* 802FE67C 002FB5BC  38 80 00 00 */	li r4, 0
/* 802FE680 002FB5C0  81 83 00 00 */	lwz r12, 0(r3)
/* 802FE684 002FB5C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802FE688 002FB5C8  7D 89 03 A6 */	mtctr r12
/* 802FE68C 002FB5CC  4E 80 04 21 */	bctrl 
/* 802FE690 002FB5D0  80 83 00 0C */	lwz r4, 0xc(r3)
/* 802FE694 002FB5D4  7C 7F 1B 78 */	mr r31, r3
/* 802FE698 002FB5D8  28 04 00 00 */	cmplwi r4, 0
/* 802FE69C 002FB5DC  41 82 00 2C */	beq .L_802FE6C8
/* 802FE6A0 002FB5E0  80 64 00 18 */	lwz r3, 0x18(r4)
/* 802FE6A4 002FB5E4  3C 00 43 30 */	lis r0, 0x4330
/* 802FE6A8 002FB5E8  90 01 00 08 */	stw r0, 8(r1)
/* 802FE6AC 002FB5EC  A8 03 00 06 */	lha r0, 6(r3)
/* 802FE6B0 002FB5F0  C8 22 F0 98 */	lfd f1, lbl_8051D3F8@sda21(r2)
/* 802FE6B4 002FB5F4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802FE6B8 002FB5F8  90 01 00 0C */	stw r0, 0xc(r1)
/* 802FE6BC 002FB5FC  C8 01 00 08 */	lfd f0, 8(r1)
/* 802FE6C0 002FB600  EC 20 08 28 */	fsubs f1, f0, f1
/* 802FE6C4 002FB604  48 00 00 08 */	b .L_802FE6CC
.L_802FE6C8:
/* 802FE6C8 002FB608  C0 22 F0 48 */	lfs f1, lbl_8051D3A8@sda21(r2)
.L_802FE6CC:
/* 802FE6CC 002FB60C  C0 02 F0 58 */	lfs f0, lbl_8051D3B8@sda21(r2)
/* 802FE6D0 002FB610  C3 FF 00 08 */	lfs f31, 8(r31)
/* 802FE6D4 002FB614  EC 01 00 28 */	fsubs f0, f1, f0
/* 802FE6D8 002FB618  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802FE6DC 002FB61C  40 81 00 48 */	ble .L_802FE724
/* 802FE6E0 002FB620  28 04 00 00 */	cmplwi r4, 0
/* 802FE6E4 002FB624  41 82 00 0C */	beq .L_802FE6F0
/* 802FE6E8 002FB628  A8 84 00 20 */	lha r4, 0x20(r4)
/* 802FE6EC 002FB62C  48 00 00 08 */	b .L_802FE6F4
.L_802FE6F0:
/* 802FE6F0 002FB630  38 80 FF FF */	li r4, -1
.L_802FE6F4:
/* 802FE6F4 002FB634  7C 1E 20 00 */	cmpw r30, r4
/* 802FE6F8 002FB638  41 82 00 48 */	beq .L_802FE740
/* 802FE6FC 002FB63C  C0 22 F0 50 */	lfs f1, lbl_8051D3B0@sda21(r2)
/* 802FE700 002FB640  7F A3 EB 78 */	mr r3, r29
/* 802FE704 002FB644  7F C5 F3 78 */	mr r5, r30
/* 802FE708 002FB648  38 CD 92 40 */	addi r6, r13, sBlendLinearFun__Q24Game22EnemyBlendAnimatorBase@sda21
/* 802FE70C 002FB64C  38 E0 00 00 */	li r7, 0
/* 802FE710 002FB650  4B E0 66 A9 */	bl startBlend__Q24Game9EnemyBaseFiiPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener
/* 802FE714 002FB654  FC 20 F8 90 */	fmr f1, f31
/* 802FE718 002FB658  7F E3 FB 78 */	mr r3, r31
/* 802FE71C 002FB65C  48 12 A6 A5 */	bl setCurrFrame__Q28SysShape8AnimatorFf
/* 802FE720 002FB660  48 00 00 20 */	b .L_802FE740
.L_802FE724:
/* 802FE724 002FB664  7F A3 EB 78 */	mr r3, r29
/* 802FE728 002FB668  7F C4 F3 78 */	mr r4, r30
/* 802FE72C 002FB66C  38 A0 00 00 */	li r5, 0
/* 802FE730 002FB670  4B E0 68 D5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802FE734 002FB674  48 00 00 0C */	b .L_802FE740
.L_802FE738:
/* 802FE738 002FB678  38 A0 00 00 */	li r5, 0
/* 802FE73C 002FB67C  4B E0 68 C9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_802FE740:
/* 802FE740 002FB680  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802FE744 002FB684  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802FE748 002FB688  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802FE74C 002FB68C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802FE750 002FB690  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802FE754 002FB694  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802FE758 002FB698  7C 08 03 A6 */	mtlr r0
/* 802FE75C 002FB69C  38 21 00 30 */	addi r1, r1, 0x30
/* 802FE760 002FB6A0  4E 80 00 20 */	blr 
.endfn startBlendAnimation__Q34Game10DangoMushi3ObjFib

.fn endBlendAnimation__Q34Game10DangoMushi3ObjFv, global
/* 802FE764 002FB6A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802FE768 002FB6A8  7C 08 02 A6 */	mflr r0
/* 802FE76C 002FB6AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802FE770 002FB6B0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802FE774 002FB6B4  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802FE778 002FB6B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FE77C 002FB6BC  93 C1 00 08 */	stw r30, 8(r1)
/* 802FE780 002FB6C0  7C 7E 1B 78 */	mr r30, r3
/* 802FE784 002FB6C4  38 80 00 01 */	li r4, 1
/* 802FE788 002FB6C8  80 63 01 84 */	lwz r3, 0x184(r3)
/* 802FE78C 002FB6CC  81 83 00 00 */	lwz r12, 0(r3)
/* 802FE790 002FB6D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802FE794 002FB6D4  7D 89 03 A6 */	mtctr r12
/* 802FE798 002FB6D8  4E 80 04 21 */	bctrl 
/* 802FE79C 002FB6DC  80 83 00 0C */	lwz r4, 0xc(r3)
/* 802FE7A0 002FB6E0  28 04 00 00 */	cmplwi r4, 0
/* 802FE7A4 002FB6E4  41 82 00 0C */	beq .L_802FE7B0
/* 802FE7A8 002FB6E8  AB E4 00 20 */	lha r31, 0x20(r4)
/* 802FE7AC 002FB6EC  48 00 00 08 */	b .L_802FE7B4
.L_802FE7B0:
/* 802FE7B0 002FB6F0  3B E0 FF FF */	li r31, -1
.L_802FE7B4:
/* 802FE7B4 002FB6F4  C3 E3 00 08 */	lfs f31, 8(r3)
/* 802FE7B8 002FB6F8  7F C3 F3 78 */	mr r3, r30
/* 802FE7BC 002FB6FC  4B E0 67 ED */	bl endBlend__Q24Game9EnemyBaseFv
/* 802FE7C0 002FB700  7F C3 F3 78 */	mr r3, r30
/* 802FE7C4 002FB704  7F E4 FB 78 */	mr r4, r31
/* 802FE7C8 002FB708  38 A0 00 00 */	li r5, 0
/* 802FE7CC 002FB70C  4B E0 68 39 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802FE7D0 002FB710  FC 20 F8 90 */	fmr f1, f31
/* 802FE7D4 002FB714  7F C3 F3 78 */	mr r3, r30
/* 802FE7D8 002FB718  4B E0 6A 51 */	bl setMotionFrame__Q24Game9EnemyBaseFf
/* 802FE7DC 002FB71C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802FE7E0 002FB720  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FE7E4 002FB724  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802FE7E8 002FB728  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FE7EC 002FB72C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FE7F0 002FB730  7C 08 03 A6 */	mtlr r0
/* 802FE7F4 002FB734  38 21 00 20 */	addi r1, r1, 0x20
/* 802FE7F8 002FB738  4E 80 00 20 */	blr 
.endfn endBlendAnimation__Q34Game10DangoMushi3ObjFv

.fn startBossFlickBGM__Q34Game10DangoMushi3ObjFv, global
/* 802FE7FC 002FB73C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FE800 002FB740  7C 08 02 A6 */	mflr r0
/* 802FE804 002FB744  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FE808 002FB748  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FE80C 002FB74C  3B E0 00 00 */	li r31, 0
/* 802FE810 002FB750  93 C1 00 08 */	stw r30, 8(r1)
/* 802FE814 002FB754  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802FE818 002FB758  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FE81C 002FB75C  7F C3 F3 78 */	mr r3, r30
/* 802FE820 002FB760  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FE824 002FB764  7D 89 03 A6 */	mtctr r12
/* 802FE828 002FB768  4E 80 04 21 */	bctrl 
/* 802FE82C 002FB76C  2C 03 00 05 */	cmpwi r3, 5
/* 802FE830 002FB770  41 82 00 3C */	beq .L_802FE86C
/* 802FE834 002FB774  7F C3 F3 78 */	mr r3, r30
/* 802FE838 002FB778  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FE83C 002FB77C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FE840 002FB780  7D 89 03 A6 */	mtctr r12
/* 802FE844 002FB784  4E 80 04 21 */	bctrl 
/* 802FE848 002FB788  2C 03 00 06 */	cmpwi r3, 6
/* 802FE84C 002FB78C  41 82 00 20 */	beq .L_802FE86C
/* 802FE850 002FB790  7F C3 F3 78 */	mr r3, r30
/* 802FE854 002FB794  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FE858 002FB798  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FE85C 002FB79C  7D 89 03 A6 */	mtctr r12
/* 802FE860 002FB7A0  4E 80 04 21 */	bctrl 
/* 802FE864 002FB7A4  2C 03 00 07 */	cmpwi r3, 7
/* 802FE868 002FB7A8  40 82 00 08 */	bne .L_802FE870
.L_802FE86C:
/* 802FE86C 002FB7AC  3B E0 00 01 */	li r31, 1
.L_802FE870:
/* 802FE870 002FB7B0  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802FE874 002FB7B4  40 82 00 20 */	bne .L_802FE894
/* 802FE878 002FB7B8  3C 60 80 49 */	lis r3, lbl_8048D7EC@ha
/* 802FE87C 002FB7BC  3C A0 80 49 */	lis r5, lbl_8048D804@ha
/* 802FE880 002FB7C0  38 63 D7 EC */	addi r3, r3, lbl_8048D7EC@l
/* 802FE884 002FB7C4  38 80 04 54 */	li r4, 0x454
/* 802FE888 002FB7C8  38 A5 D8 04 */	addi r5, r5, lbl_8048D804@l
/* 802FE88C 002FB7CC  4C C6 31 82 */	crclr 6
/* 802FE890 002FB7D0  4B D2 BD B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802FE894:
/* 802FE894 002FB7D4  7F C3 F3 78 */	mr r3, r30
/* 802FE898 002FB7D8  38 80 00 04 */	li r4, 4
/* 802FE89C 002FB7DC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FE8A0 002FB7E0  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802FE8A4 002FB7E4  7D 89 03 A6 */	mtctr r12
/* 802FE8A8 002FB7E8  4E 80 04 21 */	bctrl 
/* 802FE8AC 002FB7EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FE8B0 002FB7F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FE8B4 002FB7F4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FE8B8 002FB7F8  7C 08 03 A6 */	mtlr r0
/* 802FE8BC 002FB7FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802FE8C0 002FB800  4E 80 00 20 */	blr 
.endfn startBossFlickBGM__Q34Game10DangoMushi3ObjFv

.fn startBossAttackLoopBGM__Q34Game10DangoMushi3ObjFv, global
/* 802FE8C4 002FB804  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FE8C8 002FB808  7C 08 02 A6 */	mflr r0
/* 802FE8CC 002FB80C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FE8D0 002FB810  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FE8D4 002FB814  3B E0 00 00 */	li r31, 0
/* 802FE8D8 002FB818  93 C1 00 08 */	stw r30, 8(r1)
/* 802FE8DC 002FB81C  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802FE8E0 002FB820  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FE8E4 002FB824  7F C3 F3 78 */	mr r3, r30
/* 802FE8E8 002FB828  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FE8EC 002FB82C  7D 89 03 A6 */	mtctr r12
/* 802FE8F0 002FB830  4E 80 04 21 */	bctrl 
/* 802FE8F4 002FB834  2C 03 00 05 */	cmpwi r3, 5
/* 802FE8F8 002FB838  41 82 00 3C */	beq .L_802FE934
/* 802FE8FC 002FB83C  7F C3 F3 78 */	mr r3, r30
/* 802FE900 002FB840  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FE904 002FB844  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FE908 002FB848  7D 89 03 A6 */	mtctr r12
/* 802FE90C 002FB84C  4E 80 04 21 */	bctrl 
/* 802FE910 002FB850  2C 03 00 06 */	cmpwi r3, 6
/* 802FE914 002FB854  41 82 00 20 */	beq .L_802FE934
/* 802FE918 002FB858  7F C3 F3 78 */	mr r3, r30
/* 802FE91C 002FB85C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FE920 002FB860  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FE924 002FB864  7D 89 03 A6 */	mtctr r12
/* 802FE928 002FB868  4E 80 04 21 */	bctrl 
/* 802FE92C 002FB86C  2C 03 00 07 */	cmpwi r3, 7
/* 802FE930 002FB870  40 82 00 08 */	bne .L_802FE938
.L_802FE934:
/* 802FE934 002FB874  3B E0 00 01 */	li r31, 1
.L_802FE938:
/* 802FE938 002FB878  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802FE93C 002FB87C  40 82 00 20 */	bne .L_802FE95C
/* 802FE940 002FB880  3C 60 80 49 */	lis r3, lbl_8048D7EC@ha
/* 802FE944 002FB884  3C A0 80 49 */	lis r5, lbl_8048D804@ha
/* 802FE948 002FB888  38 63 D7 EC */	addi r3, r3, lbl_8048D7EC@l
/* 802FE94C 002FB88C  38 80 04 54 */	li r4, 0x454
/* 802FE950 002FB890  38 A5 D8 04 */	addi r5, r5, lbl_8048D804@l
/* 802FE954 002FB894  4C C6 31 82 */	crclr 6
/* 802FE958 002FB898  4B D2 BC E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802FE95C:
/* 802FE95C 002FB89C  7F C3 F3 78 */	mr r3, r30
/* 802FE960 002FB8A0  38 80 00 08 */	li r4, 8
/* 802FE964 002FB8A4  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FE968 002FB8A8  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802FE96C 002FB8AC  7D 89 03 A6 */	mtctr r12
/* 802FE970 002FB8B0  4E 80 04 21 */	bctrl 
/* 802FE974 002FB8B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FE978 002FB8B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FE97C 002FB8BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FE980 002FB8C0  7C 08 03 A6 */	mtlr r0
/* 802FE984 002FB8C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802FE988 002FB8C8  4E 80 00 20 */	blr 
.endfn startBossAttackLoopBGM__Q34Game10DangoMushi3ObjFv

.fn finishBossAttackLoopBGM__Q34Game10DangoMushi3ObjFv, global
/* 802FE98C 002FB8CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FE990 002FB8D0  7C 08 02 A6 */	mflr r0
/* 802FE994 002FB8D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FE998 002FB8D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FE99C 002FB8DC  3B E0 00 00 */	li r31, 0
/* 802FE9A0 002FB8E0  93 C1 00 08 */	stw r30, 8(r1)
/* 802FE9A4 002FB8E4  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802FE9A8 002FB8E8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FE9AC 002FB8EC  7F C3 F3 78 */	mr r3, r30
/* 802FE9B0 002FB8F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FE9B4 002FB8F4  7D 89 03 A6 */	mtctr r12
/* 802FE9B8 002FB8F8  4E 80 04 21 */	bctrl 
/* 802FE9BC 002FB8FC  2C 03 00 05 */	cmpwi r3, 5
/* 802FE9C0 002FB900  41 82 00 3C */	beq .L_802FE9FC
/* 802FE9C4 002FB904  7F C3 F3 78 */	mr r3, r30
/* 802FE9C8 002FB908  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FE9CC 002FB90C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FE9D0 002FB910  7D 89 03 A6 */	mtctr r12
/* 802FE9D4 002FB914  4E 80 04 21 */	bctrl 
/* 802FE9D8 002FB918  2C 03 00 06 */	cmpwi r3, 6
/* 802FE9DC 002FB91C  41 82 00 20 */	beq .L_802FE9FC
/* 802FE9E0 002FB920  7F C3 F3 78 */	mr r3, r30
/* 802FE9E4 002FB924  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FE9E8 002FB928  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FE9EC 002FB92C  7D 89 03 A6 */	mtctr r12
/* 802FE9F0 002FB930  4E 80 04 21 */	bctrl 
/* 802FE9F4 002FB934  2C 03 00 07 */	cmpwi r3, 7
/* 802FE9F8 002FB938  40 82 00 08 */	bne .L_802FEA00
.L_802FE9FC:
/* 802FE9FC 002FB93C  3B E0 00 01 */	li r31, 1
.L_802FEA00:
/* 802FEA00 002FB940  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802FEA04 002FB944  40 82 00 20 */	bne .L_802FEA24
/* 802FEA08 002FB948  3C 60 80 49 */	lis r3, lbl_8048D7EC@ha
/* 802FEA0C 002FB94C  3C A0 80 49 */	lis r5, lbl_8048D804@ha
/* 802FEA10 002FB950  38 63 D7 EC */	addi r3, r3, lbl_8048D7EC@l
/* 802FEA14 002FB954  38 80 04 54 */	li r4, 0x454
/* 802FEA18 002FB958  38 A5 D8 04 */	addi r5, r5, lbl_8048D804@l
/* 802FEA1C 002FB95C  4C C6 31 82 */	crclr 6
/* 802FEA20 002FB960  4B D2 BC 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802FEA24:
/* 802FEA24 002FB964  7F C3 F3 78 */	mr r3, r30
/* 802FEA28 002FB968  38 80 00 01 */	li r4, 1
/* 802FEA2C 002FB96C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FEA30 002FB970  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802FEA34 002FB974  7D 89 03 A6 */	mtctr r12
/* 802FEA38 002FB978  4E 80 04 21 */	bctrl 
/* 802FEA3C 002FB97C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FEA40 002FB980  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FEA44 002FB984  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FEA48 002FB988  7C 08 03 A6 */	mtlr r0
/* 802FEA4C 002FB98C  38 21 00 10 */	addi r1, r1, 0x10
/* 802FEA50 002FB990  4E 80 00 20 */	blr 
.endfn finishBossAttackLoopBGM__Q34Game10DangoMushi3ObjFv

.fn updateBossBGM__Q34Game10DangoMushi3ObjFv, global
/* 802FEA54 002FB994  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802FEA58 002FB998  7C 08 02 A6 */	mflr r0
/* 802FEA5C 002FB99C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802FEA60 002FB9A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802FEA64 002FB9A4  3B E0 00 00 */	li r31, 0
/* 802FEA68 002FB9A8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802FEA6C 002FB9AC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802FEA70 002FB9B0  7C 7D 1B 78 */	mr r29, r3
/* 802FEA74 002FB9B4  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802FEA78 002FB9B8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FEA7C 002FB9BC  7F C3 F3 78 */	mr r3, r30
/* 802FEA80 002FB9C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FEA84 002FB9C4  7D 89 03 A6 */	mtctr r12
/* 802FEA88 002FB9C8  4E 80 04 21 */	bctrl 
/* 802FEA8C 002FB9CC  2C 03 00 05 */	cmpwi r3, 5
/* 802FEA90 002FB9D0  41 82 00 3C */	beq .L_802FEACC
/* 802FEA94 002FB9D4  7F C3 F3 78 */	mr r3, r30
/* 802FEA98 002FB9D8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FEA9C 002FB9DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FEAA0 002FB9E0  7D 89 03 A6 */	mtctr r12
/* 802FEAA4 002FB9E4  4E 80 04 21 */	bctrl 
/* 802FEAA8 002FB9E8  2C 03 00 06 */	cmpwi r3, 6
/* 802FEAAC 002FB9EC  41 82 00 20 */	beq .L_802FEACC
/* 802FEAB0 002FB9F0  7F C3 F3 78 */	mr r3, r30
/* 802FEAB4 002FB9F4  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FEAB8 002FB9F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FEABC 002FB9FC  7D 89 03 A6 */	mtctr r12
/* 802FEAC0 002FBA00  4E 80 04 21 */	bctrl 
/* 802FEAC4 002FBA04  2C 03 00 07 */	cmpwi r3, 7
/* 802FEAC8 002FBA08  40 82 00 08 */	bne .L_802FEAD0
.L_802FEACC:
/* 802FEACC 002FBA0C  3B E0 00 01 */	li r31, 1
.L_802FEAD0:
/* 802FEAD0 002FBA10  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802FEAD4 002FBA14  40 82 00 20 */	bne .L_802FEAF4
/* 802FEAD8 002FBA18  3C 60 80 49 */	lis r3, lbl_8048D7EC@ha
/* 802FEADC 002FBA1C  3C A0 80 49 */	lis r5, lbl_8048D804@ha
/* 802FEAE0 002FBA20  38 63 D7 EC */	addi r3, r3, lbl_8048D7EC@l
/* 802FEAE4 002FBA24  38 80 04 54 */	li r4, 0x454
/* 802FEAE8 002FBA28  38 A5 D8 04 */	addi r5, r5, lbl_8048D804@l
/* 802FEAEC 002FBA2C  4C C6 31 82 */	crclr 6
/* 802FEAF0 002FBA30  4B D2 BB 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802FEAF4:
/* 802FEAF4 002FBA34  80 1D 01 F4 */	lwz r0, 0x1f4(r29)
/* 802FEAF8 002FBA38  2C 00 00 00 */	cmpwi r0, 0
/* 802FEAFC 002FBA3C  41 82 00 20 */	beq .L_802FEB1C
/* 802FEB00 002FBA40  7F C3 F3 78 */	mr r3, r30
/* 802FEB04 002FBA44  38 80 00 01 */	li r4, 1
/* 802FEB08 002FBA48  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FEB0C 002FBA4C  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 802FEB10 002FBA50  7D 89 03 A6 */	mtctr r12
/* 802FEB14 002FBA54  4E 80 04 21 */	bctrl 
/* 802FEB18 002FBA58  48 00 00 1C */	b .L_802FEB34
.L_802FEB1C:
/* 802FEB1C 002FBA5C  7F C3 F3 78 */	mr r3, r30
/* 802FEB20 002FBA60  38 80 00 00 */	li r4, 0
/* 802FEB24 002FBA64  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FEB28 002FBA68  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 802FEB2C 002FBA6C  7D 89 03 A6 */	mtctr r12
/* 802FEB30 002FBA70  4E 80 04 21 */	bctrl 
.L_802FEB34:
/* 802FEB34 002FBA74  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FEB38 002FBA78  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802FEB3C 002FBA7C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802FEB40 002FBA80  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802FEB44 002FBA84  7C 08 03 A6 */	mtlr r0
/* 802FEB48 002FBA88  38 21 00 20 */	addi r1, r1, 0x20
/* 802FEB4C 002FBA8C  4E 80 00 20 */	blr 
.endfn updateBossBGM__Q34Game10DangoMushi3ObjFv

.fn resetBossAppearBGM__Q34Game10DangoMushi3ObjFv, global
/* 802FEB50 002FBA90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FEB54 002FBA94  7C 08 02 A6 */	mflr r0
/* 802FEB58 002FBA98  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FEB5C 002FBA9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FEB60 002FBAA0  3B E0 00 00 */	li r31, 0
/* 802FEB64 002FBAA4  93 C1 00 08 */	stw r30, 8(r1)
/* 802FEB68 002FBAA8  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802FEB6C 002FBAAC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FEB70 002FBAB0  7F C3 F3 78 */	mr r3, r30
/* 802FEB74 002FBAB4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FEB78 002FBAB8  7D 89 03 A6 */	mtctr r12
/* 802FEB7C 002FBABC  4E 80 04 21 */	bctrl 
/* 802FEB80 002FBAC0  2C 03 00 05 */	cmpwi r3, 5
/* 802FEB84 002FBAC4  41 82 00 3C */	beq .L_802FEBC0
/* 802FEB88 002FBAC8  7F C3 F3 78 */	mr r3, r30
/* 802FEB8C 002FBACC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FEB90 002FBAD0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FEB94 002FBAD4  7D 89 03 A6 */	mtctr r12
/* 802FEB98 002FBAD8  4E 80 04 21 */	bctrl 
/* 802FEB9C 002FBADC  2C 03 00 06 */	cmpwi r3, 6
/* 802FEBA0 002FBAE0  41 82 00 20 */	beq .L_802FEBC0
/* 802FEBA4 002FBAE4  7F C3 F3 78 */	mr r3, r30
/* 802FEBA8 002FBAE8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FEBAC 002FBAEC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FEBB0 002FBAF0  7D 89 03 A6 */	mtctr r12
/* 802FEBB4 002FBAF4  4E 80 04 21 */	bctrl 
/* 802FEBB8 002FBAF8  2C 03 00 07 */	cmpwi r3, 7
/* 802FEBBC 002FBAFC  40 82 00 08 */	bne .L_802FEBC4
.L_802FEBC0:
/* 802FEBC0 002FBB00  3B E0 00 01 */	li r31, 1
.L_802FEBC4:
/* 802FEBC4 002FBB04  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802FEBC8 002FBB08  40 82 00 20 */	bne .L_802FEBE8
/* 802FEBCC 002FBB0C  3C 60 80 49 */	lis r3, lbl_8048D7EC@ha
/* 802FEBD0 002FBB10  3C A0 80 49 */	lis r5, lbl_8048D804@ha
/* 802FEBD4 002FBB14  38 63 D7 EC */	addi r3, r3, lbl_8048D7EC@l
/* 802FEBD8 002FBB18  38 80 04 54 */	li r4, 0x454
/* 802FEBDC 002FBB1C  38 A5 D8 04 */	addi r5, r5, lbl_8048D804@l
/* 802FEBE0 002FBB20  4C C6 31 82 */	crclr 6
/* 802FEBE4 002FBB24  4B D2 BA 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802FEBE8:
/* 802FEBE8 002FBB28  7F C3 F3 78 */	mr r3, r30
/* 802FEBEC 002FBB2C  38 80 00 00 */	li r4, 0
/* 802FEBF0 002FBB30  48 16 0E 01 */	bl setAppearFlag__Q23PSM9EnemyBossFb
/* 802FEBF4 002FBB34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FEBF8 002FBB38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FEBFC 002FBB3C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FEC00 002FBB40  7C 08 03 A6 */	mtlr r0
/* 802FEC04 002FBB44  38 21 00 10 */	addi r1, r1, 0x10
/* 802FEC08 002FBB48  4E 80 00 20 */	blr 
.endfn resetBossAppearBGM__Q34Game10DangoMushi3ObjFv

.fn setBossAppearBGM__Q34Game10DangoMushi3ObjFv, global
/* 802FEC0C 002FBB4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FEC10 002FBB50  7C 08 02 A6 */	mflr r0
/* 802FEC14 002FBB54  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FEC18 002FBB58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FEC1C 002FBB5C  3B E0 00 00 */	li r31, 0
/* 802FEC20 002FBB60  93 C1 00 08 */	stw r30, 8(r1)
/* 802FEC24 002FBB64  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802FEC28 002FBB68  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FEC2C 002FBB6C  7F C3 F3 78 */	mr r3, r30
/* 802FEC30 002FBB70  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FEC34 002FBB74  7D 89 03 A6 */	mtctr r12
/* 802FEC38 002FBB78  4E 80 04 21 */	bctrl 
/* 802FEC3C 002FBB7C  2C 03 00 05 */	cmpwi r3, 5
/* 802FEC40 002FBB80  41 82 00 3C */	beq .L_802FEC7C
/* 802FEC44 002FBB84  7F C3 F3 78 */	mr r3, r30
/* 802FEC48 002FBB88  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FEC4C 002FBB8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FEC50 002FBB90  7D 89 03 A6 */	mtctr r12
/* 802FEC54 002FBB94  4E 80 04 21 */	bctrl 
/* 802FEC58 002FBB98  2C 03 00 06 */	cmpwi r3, 6
/* 802FEC5C 002FBB9C  41 82 00 20 */	beq .L_802FEC7C
/* 802FEC60 002FBBA0  7F C3 F3 78 */	mr r3, r30
/* 802FEC64 002FBBA4  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802FEC68 002FBBA8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FEC6C 002FBBAC  7D 89 03 A6 */	mtctr r12
/* 802FEC70 002FBBB0  4E 80 04 21 */	bctrl 
/* 802FEC74 002FBBB4  2C 03 00 07 */	cmpwi r3, 7
/* 802FEC78 002FBBB8  40 82 00 08 */	bne .L_802FEC80
.L_802FEC7C:
/* 802FEC7C 002FBBBC  3B E0 00 01 */	li r31, 1
.L_802FEC80:
/* 802FEC80 002FBBC0  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802FEC84 002FBBC4  40 82 00 20 */	bne .L_802FECA4
/* 802FEC88 002FBBC8  3C 60 80 49 */	lis r3, lbl_8048D7EC@ha
/* 802FEC8C 002FBBCC  3C A0 80 49 */	lis r5, lbl_8048D804@ha
/* 802FEC90 002FBBD0  38 63 D7 EC */	addi r3, r3, lbl_8048D7EC@l
/* 802FEC94 002FBBD4  38 80 04 54 */	li r4, 0x454
/* 802FEC98 002FBBD8  38 A5 D8 04 */	addi r5, r5, lbl_8048D804@l
/* 802FEC9C 002FBBDC  4C C6 31 82 */	crclr 6
/* 802FECA0 002FBBE0  4B D2 B9 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802FECA4:
/* 802FECA4 002FBBE4  7F C3 F3 78 */	mr r3, r30
/* 802FECA8 002FBBE8  38 80 00 01 */	li r4, 1
/* 802FECAC 002FBBEC  48 16 0D 45 */	bl setAppearFlag__Q23PSM9EnemyBossFb
/* 802FECB0 002FBBF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FECB4 002FBBF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FECB8 002FBBF8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FECBC 002FBBFC  7C 08 03 A6 */	mtlr r0
/* 802FECC0 002FBC00  38 21 00 10 */	addi r1, r1, 0x10
/* 802FECC4 002FBC04  4E 80 00 20 */	blr 
.endfn setBossAppearBGM__Q34Game10DangoMushi3ObjFv

.fn createEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FECC8 002FBC08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FECCC 002FBC0C  7C 08 02 A6 */	mflr r0
/* 802FECD0 002FBC10  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FECD4 002FBC14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FECD8 002FBC18  7C 7F 1B 78 */	mr r31, r3
/* 802FECDC 002FBC1C  38 60 00 14 */	li r3, 0x14
/* 802FECE0 002FBC20  93 C1 00 08 */	stw r30, 8(r1)
/* 802FECE4 002FBC24  4B D2 51 C1 */	bl __nw__FUl
/* 802FECE8 002FBC28  28 03 00 00 */	cmplwi r3, 0
/* 802FECEC 002FBC2C  41 82 00 78 */	beq .L_802FED64
/* 802FECF0 002FBC30  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802FECF4 002FBC34  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802FECF8 002FBC38  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802FECFC 002FBC3C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802FED00 002FBC40  90 03 00 00 */	stw r0, 0(r3)
/* 802FED04 002FBC44  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802FED08 002FBC48  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802FED0C 002FBC4C  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 802FED10 002FBC50  90 03 00 04 */	stw r0, 4(r3)
/* 802FED14 002FBC54  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 802FED18 002FBC58  3C 80 80 4D */	lis r4, __vt__Q23efx15TDangoWallBreak@ha
/* 802FED1C 002FBC5C  38 05 00 14 */	addi r0, r5, 0x14
/* 802FED20 002FBC60  90 A3 00 00 */	stw r5, 0(r3)
/* 802FED24 002FBC64  38 84 61 A0 */	addi r4, r4, __vt__Q23efx15TDangoWallBreak@l
/* 802FED28 002FBC68  39 20 00 00 */	li r9, 0
/* 802FED2C 002FBC6C  39 00 02 B2 */	li r8, 0x2b2
/* 802FED30 002FBC70  90 03 00 04 */	stw r0, 4(r3)
/* 802FED34 002FBC74  38 C7 00 14 */	addi r6, r7, 0x14
/* 802FED38 002FBC78  38 A0 02 AD */	li r5, 0x2ad
/* 802FED3C 002FBC7C  38 04 00 14 */	addi r0, r4, 0x14
/* 802FED40 002FBC80  91 23 00 08 */	stw r9, 8(r3)
/* 802FED44 002FBC84  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802FED48 002FBC88  99 23 00 0E */	stb r9, 0xe(r3)
/* 802FED4C 002FBC8C  90 E3 00 00 */	stw r7, 0(r3)
/* 802FED50 002FBC90  90 C3 00 04 */	stw r6, 4(r3)
/* 802FED54 002FBC94  91 23 00 10 */	stw r9, 0x10(r3)
/* 802FED58 002FBC98  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802FED5C 002FBC9C  90 83 00 00 */	stw r4, 0(r3)
/* 802FED60 002FBCA0  90 03 00 04 */	stw r0, 4(r3)
.L_802FED64:
/* 802FED64 002FBCA4  90 7F 02 F4 */	stw r3, 0x2f4(r31)
/* 802FED68 002FBCA8  38 60 00 14 */	li r3, 0x14
/* 802FED6C 002FBCAC  4B D2 51 39 */	bl __nw__FUl
/* 802FED70 002FBCB0  28 03 00 00 */	cmplwi r3, 0
/* 802FED74 002FBCB4  41 82 00 78 */	beq .L_802FEDEC
/* 802FED78 002FBCB8  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802FED7C 002FBCBC  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802FED80 002FBCC0  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802FED84 002FBCC4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802FED88 002FBCC8  90 03 00 00 */	stw r0, 0(r3)
/* 802FED8C 002FBCCC  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802FED90 002FBCD0  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802FED94 002FBCD4  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 802FED98 002FBCD8  90 03 00 04 */	stw r0, 4(r3)
/* 802FED9C 002FBCDC  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 802FEDA0 002FBCE0  3C 80 80 4D */	lis r4, __vt__Q23efx13TDangoAttack2@ha
/* 802FEDA4 002FBCE4  38 05 00 14 */	addi r0, r5, 0x14
/* 802FEDA8 002FBCE8  90 A3 00 00 */	stw r5, 0(r3)
/* 802FEDAC 002FBCEC  38 84 61 54 */	addi r4, r4, __vt__Q23efx13TDangoAttack2@l
/* 802FEDB0 002FBCF0  39 20 00 00 */	li r9, 0
/* 802FEDB4 002FBCF4  39 00 02 B2 */	li r8, 0x2b2
/* 802FEDB8 002FBCF8  90 03 00 04 */	stw r0, 4(r3)
/* 802FEDBC 002FBCFC  38 C7 00 14 */	addi r6, r7, 0x14
/* 802FEDC0 002FBD00  38 A0 02 A2 */	li r5, 0x2a2
/* 802FEDC4 002FBD04  38 04 00 14 */	addi r0, r4, 0x14
/* 802FEDC8 002FBD08  91 23 00 08 */	stw r9, 8(r3)
/* 802FEDCC 002FBD0C  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802FEDD0 002FBD10  99 23 00 0E */	stb r9, 0xe(r3)
/* 802FEDD4 002FBD14  90 E3 00 00 */	stw r7, 0(r3)
/* 802FEDD8 002FBD18  90 C3 00 04 */	stw r6, 4(r3)
/* 802FEDDC 002FBD1C  91 23 00 10 */	stw r9, 0x10(r3)
/* 802FEDE0 002FBD20  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802FEDE4 002FBD24  90 83 00 00 */	stw r4, 0(r3)
/* 802FEDE8 002FBD28  90 03 00 04 */	stw r0, 4(r3)
.L_802FEDEC:
/* 802FEDEC 002FBD2C  90 7F 02 F8 */	stw r3, 0x2f8(r31)
/* 802FEDF0 002FBD30  38 60 00 2C */	li r3, 0x2c
/* 802FEDF4 002FBD34  4B D2 50 B1 */	bl __nw__FUl
/* 802FEDF8 002FBD38  7C 7E 1B 79 */	or. r30, r3, r3
/* 802FEDFC 002FBD3C  41 82 00 20 */	beq .L_802FEE1C
/* 802FEE00 002FBD40  38 80 00 00 */	li r4, 0
/* 802FEE04 002FBD44  38 A0 02 A9 */	li r5, 0x2a9
/* 802FEE08 002FBD48  38 C0 02 AA */	li r6, 0x2aa
/* 802FEE0C 002FBD4C  48 0B 14 35 */	bl "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs"
/* 802FEE10 002FBD50  3C 60 80 4D */	lis r3, __vt__Q23efx9TDangoRun@ha
/* 802FEE14 002FBD54  38 03 61 38 */	addi r0, r3, __vt__Q23efx9TDangoRun@l
/* 802FEE18 002FBD58  90 1E 00 00 */	stw r0, 0(r30)
.L_802FEE1C:
/* 802FEE1C 002FBD5C  93 DF 02 FC */	stw r30, 0x2fc(r31)
/* 802FEE20 002FBD60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FEE24 002FBD64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FEE28 002FBD68  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FEE2C 002FBD6C  7C 08 03 A6 */	mtlr r0
/* 802FEE30 002FBD70  38 21 00 10 */	addi r1, r1, 0x10
/* 802FEE34 002FBD74  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game10DangoMushi3ObjFv

.fn setupEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FEE38 002FBD78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FEE3C 002FBD7C  7C 08 02 A6 */	mflr r0
/* 802FEE40 002FBD80  38 82 F1 28 */	addi r4, r2, lbl_8051D488@sda21
/* 802FEE44 002FBD84  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FEE48 002FBD88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FEE4C 002FBD8C  7C 7F 1B 78 */	mr r31, r3
/* 802FEE50 002FBD90  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802FEE54 002FBD94  48 14 01 91 */	bl getJoint__Q28SysShape5ModelFPc
/* 802FEE58 002FBD98  48 12 AA 49 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802FEE5C 002FBD9C  80 BF 02 F4 */	lwz r5, 0x2f4(r31)
/* 802FEE60 002FBDA0  38 82 F1 38 */	addi r4, r2, lbl_8051D498@sda21
/* 802FEE64 002FBDA4  90 65 00 10 */	stw r3, 0x10(r5)
/* 802FEE68 002FBDA8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802FEE6C 002FBDAC  48 14 01 79 */	bl getJoint__Q28SysShape5ModelFPc
/* 802FEE70 002FBDB0  48 12 AA 31 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802FEE74 002FBDB4  80 BF 02 F8 */	lwz r5, 0x2f8(r31)
/* 802FEE78 002FBDB8  38 9F 01 8C */	addi r4, r31, 0x18c
/* 802FEE7C 002FBDBC  90 65 00 10 */	stw r3, 0x10(r5)
/* 802FEE80 002FBDC0  80 7F 02 FC */	lwz r3, 0x2fc(r31)
/* 802FEE84 002FBDC4  48 0B 14 C1 */	bl "setPosptr__Q23efx10TChasePos2FP10Vector3<f>"
/* 802FEE88 002FBDC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FEE8C 002FBDCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FEE90 002FBDD0  7C 08 03 A6 */	mtlr r0
/* 802FEE94 002FBDD4  38 21 00 10 */	addi r1, r1, 0x10
/* 802FEE98 002FBDD8  4E 80 00 20 */	blr 
.endfn setupEffect__Q34Game10DangoMushi3ObjFv

.fn createDeadSmokeEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FEE9C 002FBDDC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802FEEA0 002FBDE0  7C 08 02 A6 */	mflr r0
/* 802FEEA4 002FBDE4  38 82 F1 40 */	addi r4, r2, lbl_8051D4A0@sda21
/* 802FEEA8 002FBDE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802FEEAC 002FBDEC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802FEEB0 002FBDF0  48 14 01 35 */	bl getJoint__Q28SysShape5ModelFPc
/* 802FEEB4 002FBDF4  48 12 A9 ED */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802FEEB8 002FBDF8  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802FEEBC 002FBDFC  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 802FEEC0 002FBE00  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802FEEC4 002FBE04  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx1@ha
/* 802FEEC8 002FBE08  90 01 00 08 */	stw r0, 8(r1)
/* 802FEECC 002FBE0C  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 802FEED0 002FBE10  3C 80 80 4D */	lis r4, __vt__Q23efx15TDangoDeadSmoke@ha
/* 802FEED4 002FBE14  38 E0 02 A8 */	li r7, 0x2a8
/* 802FEED8 002FBE18  90 01 00 08 */	stw r0, 8(r1)
/* 802FEEDC 002FBE1C  38 A5 6A 14 */	addi r5, r5, __vt__Q23efx11TSimpleMtx1@l
/* 802FEEE0 002FBE20  38 C0 00 00 */	li r6, 0
/* 802FEEE4 002FBE24  38 04 61 24 */	addi r0, r4, __vt__Q23efx15TDangoDeadSmoke@l
/* 802FEEE8 002FBE28  90 A1 00 08 */	stw r5, 8(r1)
/* 802FEEEC 002FBE2C  38 80 00 00 */	li r4, 0
/* 802FEEF0 002FBE30  90 61 00 14 */	stw r3, 0x14(r1)
/* 802FEEF4 002FBE34  38 61 00 08 */	addi r3, r1, 8
/* 802FEEF8 002FBE38  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 802FEEFC 002FBE3C  90 C1 00 10 */	stw r6, 0x10(r1)
/* 802FEF00 002FBE40  90 01 00 08 */	stw r0, 8(r1)
/* 802FEF04 002FBE44  48 0B 03 B1 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 802FEF08 002FBE48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FEF0C 002FBE4C  7C 08 03 A6 */	mtlr r0
/* 802FEF10 002FBE50  38 21 00 20 */	addi r1, r1, 0x20
/* 802FEF14 002FBE54  4E 80 00 20 */	blr 
.endfn createDeadSmokeEffect__Q34Game10DangoMushi3ObjFv

.fn createDeadBombEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FEF18 002FBE58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802FEF1C 002FBE5C  7C 08 02 A6 */	mflr r0
/* 802FEF20 002FBE60  38 82 F1 40 */	addi r4, r2, lbl_8051D4A0@sda21
/* 802FEF24 002FBE64  90 01 00 24 */	stw r0, 0x24(r1)
/* 802FEF28 002FBE68  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802FEF2C 002FBE6C  48 14 00 B9 */	bl getJoint__Q28SysShape5ModelFPc
/* 802FEF30 002FBE70  48 12 A9 71 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802FEF34 002FBE74  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802FEF38 002FBE78  38 C0 00 00 */	li r6, 0
/* 802FEF3C 002FBE7C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802FEF40 002FBE80  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 802FEF44 002FBE84  90 01 00 08 */	stw r0, 8(r1)
/* 802FEF48 002FBE88  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 802FEF4C 002FBE8C  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 802FEF50 002FBE90  3C 80 80 4D */	lis r4, __vt__Q23efx10TDangoDead@ha
/* 802FEF54 002FBE94  90 01 00 08 */	stw r0, 8(r1)
/* 802FEF58 002FBE98  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 802FEF5C 002FBE9C  38 E0 02 A6 */	li r7, 0x2a6
/* 802FEF60 002FBEA0  38 A0 02 A7 */	li r5, 0x2a7
/* 802FEF64 002FBEA4  90 01 00 08 */	stw r0, 8(r1)
/* 802FEF68 002FBEA8  38 04 61 10 */	addi r0, r4, __vt__Q23efx10TDangoDead@l
/* 802FEF6C 002FBEAC  38 80 00 00 */	li r4, 0
/* 802FEF70 002FBEB0  90 61 00 18 */	stw r3, 0x18(r1)
/* 802FEF74 002FBEB4  38 61 00 08 */	addi r3, r1, 8
/* 802FEF78 002FBEB8  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 802FEF7C 002FBEBC  B0 A1 00 0E */	sth r5, 0xe(r1)
/* 802FEF80 002FBEC0  90 C1 00 10 */	stw r6, 0x10(r1)
/* 802FEF84 002FBEC4  90 C1 00 14 */	stw r6, 0x14(r1)
/* 802FEF88 002FBEC8  90 01 00 08 */	stw r0, 8(r1)
/* 802FEF8C 002FBECC  48 0B 04 0D */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 802FEF90 002FBED0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FEF94 002FBED4  7C 08 03 A6 */	mtlr r0
/* 802FEF98 002FBED8  38 21 00 20 */	addi r1, r1, 0x20
/* 802FEF9C 002FBEDC  4E 80 00 20 */	blr 
.endfn createDeadBombEffect__Q34Game10DangoMushi3ObjFv

.fn createBodyTurnEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FEFA0 002FBEE0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802FEFA4 002FBEE4  7C 08 02 A6 */	mflr r0
/* 802FEFA8 002FBEE8  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802FEFAC 002FBEEC  39 00 00 00 */	li r8, 0
/* 802FEFB0 002FBEF0  90 01 00 34 */	stw r0, 0x34(r1)
/* 802FEFB4 002FBEF4  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802FEFB8 002FBEF8  38 A0 02 AB */	li r5, 0x2ab
/* 802FEFBC 002FBEFC  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 802FEFC0 002FBF00  90 01 00 08 */	stw r0, 8(r1)
/* 802FEFC4 002FBF04  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 802FEFC8 002FBF08  3C 80 80 4F */	lis r4, __vt__Q23efx10TDangoTurn@ha
/* 802FEFCC 002FBF0C  90 01 00 08 */	stw r0, 8(r1)
/* 802FEFD0 002FBF10  38 E4 A1 60 */	addi r7, r4, __vt__Q23efx10TDangoTurn@l
/* 802FEFD4 002FBF14  38 00 02 AC */	li r0, 0x2ac
/* 802FEFD8 002FBF18  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802FEFDC 002FBF1C  B0 A1 00 0C */	sth r5, 0xc(r1)
/* 802FEFE0 002FBF20  38 C4 A7 EC */	addi r6, r4, __vt__Q23efx3Arg@l
/* 802FEFE4 002FBF24  3C A0 80 4B */	lis r5, __vt__Q23efx7ArgRotY@ha
/* 802FEFE8 002FBF28  38 81 00 18 */	addi r4, r1, 0x18
/* 802FEFEC 002FBF2C  B0 01 00 0E */	sth r0, 0xe(r1)
/* 802FEFF0 002FBF30  38 05 69 60 */	addi r0, r5, __vt__Q23efx7ArgRotY@l
/* 802FEFF4 002FBF34  91 01 00 10 */	stw r8, 0x10(r1)
/* 802FEFF8 002FBF38  91 01 00 14 */	stw r8, 0x14(r1)
/* 802FEFFC 002FBF3C  90 E1 00 08 */	stw r7, 8(r1)
/* 802FF000 002FBF40  C0 23 01 FC */	lfs f1, 0x1fc(r3)
/* 802FF004 002FBF44  90 C1 00 18 */	stw r6, 0x18(r1)
/* 802FF008 002FBF48  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802FF00C 002FBF4C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802FF010 002FBF50  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802FF014 002FBF54  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802FF018 002FBF58  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 802FF01C 002FBF5C  38 61 00 08 */	addi r3, r1, 8
/* 802FF020 002FBF60  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802FF024 002FBF64  90 01 00 18 */	stw r0, 0x18(r1)
/* 802FF028 002FBF68  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 802FF02C 002FBF6C  48 0E C4 DD */	bl create__Q23efx10TDangoTurnFPQ23efx3Arg
/* 802FF030 002FBF70  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802FF034 002FBF74  7C 08 03 A6 */	mtlr r0
/* 802FF038 002FBF78  38 21 00 30 */	addi r1, r1, 0x30
/* 802FF03C 002FBF7C  4E 80 00 20 */	blr 
.endfn createBodyTurnEffect__Q34Game10DangoMushi3ObjFv

.fn createWallBreakEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FF040 002FBF80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FF044 002FBF84  7C 08 02 A6 */	mflr r0
/* 802FF048 002FBF88  38 80 00 00 */	li r4, 0
/* 802FF04C 002FBF8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FF050 002FBF90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FF054 002FBF94  7C 7F 1B 78 */	mr r31, r3
/* 802FF058 002FBF98  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802FF05C 002FBF9C  81 83 00 00 */	lwz r12, 0(r3)
/* 802FF060 002FBFA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FF064 002FBFA4  7D 89 03 A6 */	mtctr r12
/* 802FF068 002FBFA8  4E 80 04 21 */	bctrl 
/* 802FF06C 002FBFAC  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802FF070 002FBFB0  81 83 00 00 */	lwz r12, 0(r3)
/* 802FF074 002FBFB4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802FF078 002FBFB8  7D 89 03 A6 */	mtctr r12
/* 802FF07C 002FBFBC  4E 80 04 21 */	bctrl 
/* 802FF080 002FBFC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FF084 002FBFC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FF088 002FBFC8  7C 08 03 A6 */	mtlr r0
/* 802FF08C 002FBFCC  38 21 00 10 */	addi r1, r1, 0x10
/* 802FF090 002FBFD0  4E 80 00 20 */	blr 
.endfn createWallBreakEffect__Q34Game10DangoMushi3ObjFv

.fn createFlickAttackEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FF094 002FBFD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FF098 002FBFD8  7C 08 02 A6 */	mflr r0
/* 802FF09C 002FBFDC  38 80 00 00 */	li r4, 0
/* 802FF0A0 002FBFE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FF0A4 002FBFE4  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802FF0A8 002FBFE8  81 83 00 00 */	lwz r12, 0(r3)
/* 802FF0AC 002FBFEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FF0B0 002FBFF0  7D 89 03 A6 */	mtctr r12
/* 802FF0B4 002FBFF4  4E 80 04 21 */	bctrl 
/* 802FF0B8 002FBFF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FF0BC 002FBFFC  7C 08 03 A6 */	mtlr r0
/* 802FF0C0 002FC000  38 21 00 10 */	addi r1, r1, 0x10
/* 802FF0C4 002FC004  4E 80 00 20 */	blr 
.endfn createFlickAttackEffect__Q34Game10DangoMushi3ObjFv

.fn createBodyDamageEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FF0C8 002FC008  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802FF0CC 002FC00C  7C 08 02 A6 */	mflr r0
/* 802FF0D0 002FC010  38 82 F1 40 */	addi r4, r2, lbl_8051D4A0@sda21
/* 802FF0D4 002FC014  90 01 00 24 */	stw r0, 0x24(r1)
/* 802FF0D8 002FC018  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802FF0DC 002FC01C  48 13 FF 09 */	bl getJoint__Q28SysShape5ModelFPc
/* 802FF0E0 002FC020  48 12 A7 C1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802FF0E4 002FC024  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802FF0E8 002FC028  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 802FF0EC 002FC02C  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802FF0F0 002FC030  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx1@ha
/* 802FF0F4 002FC034  90 01 00 08 */	stw r0, 8(r1)
/* 802FF0F8 002FC038  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 802FF0FC 002FC03C  3C 80 80 4D */	lis r4, __vt__Q23efx12TDangoDamage@ha
/* 802FF100 002FC040  38 E0 02 A5 */	li r7, 0x2a5
/* 802FF104 002FC044  90 01 00 08 */	stw r0, 8(r1)
/* 802FF108 002FC048  38 A5 6A 14 */	addi r5, r5, __vt__Q23efx11TSimpleMtx1@l
/* 802FF10C 002FC04C  38 C0 00 00 */	li r6, 0
/* 802FF110 002FC050  38 04 60 FC */	addi r0, r4, __vt__Q23efx12TDangoDamage@l
/* 802FF114 002FC054  90 A1 00 08 */	stw r5, 8(r1)
/* 802FF118 002FC058  38 80 00 00 */	li r4, 0
/* 802FF11C 002FC05C  90 61 00 14 */	stw r3, 0x14(r1)
/* 802FF120 002FC060  38 61 00 08 */	addi r3, r1, 8
/* 802FF124 002FC064  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 802FF128 002FC068  90 C1 00 10 */	stw r6, 0x10(r1)
/* 802FF12C 002FC06C  90 01 00 08 */	stw r0, 8(r1)
/* 802FF130 002FC070  48 0B 01 85 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 802FF134 002FC074  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FF138 002FC078  7C 08 03 A6 */	mtlr r0
/* 802FF13C 002FC07C  38 21 00 20 */	addi r1, r1, 0x20
/* 802FF140 002FC080  4E 80 00 20 */	blr 
.endfn createBodyDamageEffect__Q34Game10DangoMushi3ObjFv

.fn "createBodyWallCrashEffect__Q34Game10DangoMushi3ObjF10Vector3<f>", global
/* 802FF144 002FC084  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802FF148 002FC088  7C 08 02 A6 */	mflr r0
/* 802FF14C 002FC08C  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 802FF150 002FC090  C0 24 00 00 */	lfs f1, 0(r4)
/* 802FF154 002FC094  90 01 00 44 */	stw r0, 0x44(r1)
/* 802FF158 002FC098  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 802FF15C 002FC09C  C0 02 F0 4C */	lfs f0, lbl_8051D3AC@sda21(r2)
/* 802FF160 002FC0A0  38 06 A7 F8 */	addi r0, r6, __vt__Q23efx5TBase@l
/* 802FF164 002FC0A4  C0 44 00 08 */	lfs f2, 8(r4)
/* 802FF168 002FC0A8  3C C0 80 4F */	lis r6, __vt__Q23efx11TDangoCrash@ha
/* 802FF16C 002FC0AC  EC 21 00 32 */	fmuls f1, f1, f0
/* 802FF170 002FC0B0  C0 63 01 8C */	lfs f3, 0x18c(r3)
/* 802FF174 002FC0B4  EC 42 00 32 */	fmuls f2, f2, f0
/* 802FF178 002FC0B8  C0 83 01 94 */	lfs f4, 0x194(r3)
/* 802FF17C 002FC0BC  C0 A3 01 90 */	lfs f5, 0x190(r3)
/* 802FF180 002FC0C0  38 A5 A7 EC */	addi r5, r5, __vt__Q23efx3Arg@l
/* 802FF184 002FC0C4  EC 63 08 28 */	fsubs f3, f3, f1
/* 802FF188 002FC0C8  38 E0 00 00 */	li r7, 0
/* 802FF18C 002FC0CC  EC 84 10 28 */	fsubs f4, f4, f2
/* 802FF190 002FC0D0  C0 44 00 00 */	lfs f2, 0(r4)
/* 802FF194 002FC0D4  C0 24 00 04 */	lfs f1, 4(r4)
/* 802FF198 002FC0D8  39 20 02 A3 */	li r9, 0x2a3
/* 802FF19C 002FC0DC  C0 04 00 08 */	lfs f0, 8(r4)
/* 802FF1A0 002FC0E0  39 00 02 A4 */	li r8, 0x2a4
/* 802FF1A4 002FC0E4  3D 40 80 4E */	lis r10, __vt__Q23efx8TSimple2@ha
/* 802FF1A8 002FC0E8  90 01 00 08 */	stw r0, 8(r1)
/* 802FF1AC 002FC0EC  38 0A 6A 64 */	addi r0, r10, __vt__Q23efx8TSimple2@l
/* 802FF1B0 002FC0F0  3C 60 80 4D */	lis r3, __vt__Q23efx6ArgDir@ha
/* 802FF1B4 002FC0F4  90 01 00 08 */	stw r0, 8(r1)
/* 802FF1B8 002FC0F8  38 C6 A1 74 */	addi r6, r6, __vt__Q23efx11TDangoCrash@l
/* 802FF1BC 002FC0FC  38 03 15 3C */	addi r0, r3, __vt__Q23efx6ArgDir@l
/* 802FF1C0 002FC100  38 61 00 08 */	addi r3, r1, 8
/* 802FF1C4 002FC104  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802FF1C8 002FC108  38 81 00 18 */	addi r4, r1, 0x18
/* 802FF1CC 002FC10C  B1 21 00 0C */	sth r9, 0xc(r1)
/* 802FF1D0 002FC110  B1 01 00 0E */	sth r8, 0xe(r1)
/* 802FF1D4 002FC114  90 E1 00 10 */	stw r7, 0x10(r1)
/* 802FF1D8 002FC118  90 E1 00 14 */	stw r7, 0x14(r1)
/* 802FF1DC 002FC11C  90 C1 00 08 */	stw r6, 8(r1)
/* 802FF1E0 002FC120  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802FF1E4 002FC124  D0 A1 00 20 */	stfs f5, 0x20(r1)
/* 802FF1E8 002FC128  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 802FF1EC 002FC12C  90 01 00 18 */	stw r0, 0x18(r1)
/* 802FF1F0 002FC130  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 802FF1F4 002FC134  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 802FF1F8 002FC138  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802FF1FC 002FC13C  48 0E C1 65 */	bl create__Q23efx11TDangoCrashFPQ23efx3Arg
/* 802FF200 002FC140  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802FF204 002FC144  7C 08 03 A6 */	mtlr r0
/* 802FF208 002FC148  38 21 00 40 */	addi r1, r1, 0x40
/* 802FF20C 002FC14C  4E 80 00 20 */	blr 
.endfn "createBodyWallCrashEffect__Q34Game10DangoMushi3ObjF10Vector3<f>"

.fn startRollingMoveEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FF210 002FC150  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FF214 002FC154  7C 08 02 A6 */	mflr r0
/* 802FF218 002FC158  38 80 00 00 */	li r4, 0
/* 802FF21C 002FC15C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FF220 002FC160  80 63 02 FC */	lwz r3, 0x2fc(r3)
/* 802FF224 002FC164  81 83 00 00 */	lwz r12, 0(r3)
/* 802FF228 002FC168  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FF22C 002FC16C  7D 89 03 A6 */	mtctr r12
/* 802FF230 002FC170  4E 80 04 21 */	bctrl 
/* 802FF234 002FC174  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FF238 002FC178  7C 08 03 A6 */	mtlr r0
/* 802FF23C 002FC17C  38 21 00 10 */	addi r1, r1, 0x10
/* 802FF240 002FC180  4E 80 00 20 */	blr 
.endfn startRollingMoveEffect__Q34Game10DangoMushi3ObjFv

.fn finishRollingMoveEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FF244 002FC184  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FF248 002FC188  7C 08 02 A6 */	mflr r0
/* 802FF24C 002FC18C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FF250 002FC190  80 63 02 FC */	lwz r3, 0x2fc(r3)
/* 802FF254 002FC194  81 83 00 00 */	lwz r12, 0(r3)
/* 802FF258 002FC198  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802FF25C 002FC19C  7D 89 03 A6 */	mtctr r12
/* 802FF260 002FC1A0  4E 80 04 21 */	bctrl 
/* 802FF264 002FC1A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FF268 002FC1A8  7C 08 03 A6 */	mtlr r0
/* 802FF26C 002FC1AC  38 21 00 10 */	addi r1, r1, 0x10
/* 802FF270 002FC1B0  4E 80 00 20 */	blr 
.endfn finishRollingMoveEffect__Q34Game10DangoMushi3ObjFv

.fn createEnemyBounceEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FF274 002FC1B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FF278 002FC1B8  7C 08 02 A6 */	mflr r0
/* 802FF27C 002FC1BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FF280 002FC1C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FF284 002FC1C4  7C 7F 1B 78 */	mr r31, r3
/* 802FF288 002FC1C8  81 83 00 00 */	lwz r12, 0(r3)
/* 802FF28C 002FC1CC  81 8C 02 EC */	lwz r12, 0x2ec(r12)
/* 802FF290 002FC1D0  7D 89 03 A6 */	mtctr r12
/* 802FF294 002FC1D4  4E 80 04 21 */	bctrl 
/* 802FF298 002FC1D8  7F E3 FB 78 */	mr r3, r31
/* 802FF29C 002FC1DC  38 9F 01 8C */	addi r4, r31, 0x18c
/* 802FF2A0 002FC1E0  4B E0 48 B1 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 802FF2A4 002FC1E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FF2A8 002FC1E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FF2AC 002FC1EC  7C 08 03 A6 */	mtlr r0
/* 802FF2B0 002FC1F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802FF2B4 002FC1F4  4E 80 00 20 */	blr 
.endfn createEnemyBounceEffect__Q34Game10DangoMushi3ObjFv

.fn getDownSmokeScale__Q34Game10DangoMushi3ObjFv, weak
/* 802FF2B8 002FC1F8  C0 22 F1 48 */	lfs f1, lbl_8051D4A8@sda21(r2)
/* 802FF2BC 002FC1FC  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game10DangoMushi3ObjFv

.fn createMoveHandEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FF2C0 002FC200  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802FF2C4 002FC204  7C 08 02 A6 */	mflr r0
/* 802FF2C8 002FC208  90 01 00 24 */	stw r0, 0x24(r1)
/* 802FF2CC 002FC20C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802FF2D0 002FC210  7C 7F 1B 78 */	mr r31, r3
/* 802FF2D4 002FC214  4B E0 81 21 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802FF2D8 002FC218  2C 03 00 04 */	cmpwi r3, 4
/* 802FF2DC 002FC21C  41 82 00 0C */	beq .L_802FF2E8
/* 802FF2E0 002FC220  2C 03 00 05 */	cmpwi r3, 5
/* 802FF2E4 002FC224  40 82 01 B0 */	bne .L_802FF494
.L_802FF2E8:
/* 802FF2E8 002FC228  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802FF2EC 002FC22C  38 82 F1 28 */	addi r4, r2, lbl_8051D488@sda21
/* 802FF2F0 002FC230  48 13 FC F5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802FF2F4 002FC234  48 12 A5 AD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802FF2F8 002FC238  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 802FF2FC 002FC23C  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 802FF300 002FC240  EC 80 00 32 */	fmuls f4, f0, f0
/* 802FF304 002FC244  C1 23 00 00 */	lfs f9, 0(r3)
/* 802FF308 002FC248  C0 43 00 04 */	lfs f2, 4(r3)
/* 802FF30C 002FC24C  EC E1 00 72 */	fmuls f7, f1, f1
/* 802FF310 002FC250  C0 63 00 14 */	lfs f3, 0x14(r3)
/* 802FF314 002FC254  EC A9 22 7A */	fmadds f5, f9, f9, f4
/* 802FF318 002FC258  C0 83 00 24 */	lfs f4, 0x24(r3)
/* 802FF31C 002FC25C  C0 C3 00 0C */	lfs f6, 0xc(r3)
/* 802FF320 002FC260  EC E7 28 2A */	fadds f7, f7, f5
/* 802FF324 002FC264  C0 A2 F0 48 */	lfs f5, lbl_8051D3A8@sda21(r2)
/* 802FF328 002FC268  D0 C1 00 08 */	stfs f6, 8(r1)
/* 802FF32C 002FC26C  C0 C3 00 1C */	lfs f6, 0x1c(r3)
/* 802FF330 002FC270  FC 07 28 40 */	fcmpo cr0, f7, f5
/* 802FF334 002FC274  D0 C1 00 0C */	stfs f6, 0xc(r1)
/* 802FF338 002FC278  C0 C3 00 2C */	lfs f6, 0x2c(r3)
/* 802FF33C 002FC27C  D0 C1 00 10 */	stfs f6, 0x10(r1)
/* 802FF340 002FC280  40 81 00 14 */	ble .L_802FF354
/* 802FF344 002FC284  40 81 00 14 */	ble .L_802FF358
/* 802FF348 002FC288  FC A0 38 34 */	frsqrte f5, f7
/* 802FF34C 002FC28C  EC E5 01 F2 */	fmuls f7, f5, f7
/* 802FF350 002FC290  48 00 00 08 */	b .L_802FF358
.L_802FF354:
/* 802FF354 002FC294  FC E0 28 90 */	fmr f7, f5
.L_802FF358:
/* 802FF358 002FC298  C0 A2 F0 48 */	lfs f5, lbl_8051D3A8@sda21(r2)
/* 802FF35C 002FC29C  FC 07 28 40 */	fcmpo cr0, f7, f5
/* 802FF360 002FC2A0  40 81 00 18 */	ble .L_802FF378
/* 802FF364 002FC2A4  C0 A2 F0 58 */	lfs f5, lbl_8051D3B8@sda21(r2)
/* 802FF368 002FC2A8  EC A5 38 24 */	fdivs f5, f5, f7
/* 802FF36C 002FC2AC  ED 29 01 72 */	fmuls f9, f9, f5
/* 802FF370 002FC2B0  EC 00 01 72 */	fmuls f0, f0, f5
/* 802FF374 002FC2B4  EC 21 01 72 */	fmuls f1, f1, f5
.L_802FF378:
/* 802FF378 002FC2B8  EC C3 00 F2 */	fmuls f6, f3, f3
/* 802FF37C 002FC2BC  C0 A2 F0 48 */	lfs f5, lbl_8051D3A8@sda21(r2)
/* 802FF380 002FC2C0  EC E4 01 32 */	fmuls f7, f4, f4
/* 802FF384 002FC2C4  EC C2 30 BA */	fmadds f6, f2, f2, f6
/* 802FF388 002FC2C8  EC C7 30 2A */	fadds f6, f7, f6
/* 802FF38C 002FC2CC  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 802FF390 002FC2D0  40 81 00 14 */	ble .L_802FF3A4
/* 802FF394 002FC2D4  40 81 00 14 */	ble .L_802FF3A8
/* 802FF398 002FC2D8  FC A0 30 34 */	frsqrte f5, f6
/* 802FF39C 002FC2DC  EC C5 01 B2 */	fmuls f6, f5, f6
/* 802FF3A0 002FC2E0  48 00 00 08 */	b .L_802FF3A8
.L_802FF3A4:
/* 802FF3A4 002FC2E4  FC C0 28 90 */	fmr f6, f5
.L_802FF3A8:
/* 802FF3A8 002FC2E8  C0 A2 F0 48 */	lfs f5, lbl_8051D3A8@sda21(r2)
/* 802FF3AC 002FC2EC  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 802FF3B0 002FC2F0  40 81 00 18 */	ble .L_802FF3C8
/* 802FF3B4 002FC2F4  C0 A2 F0 58 */	lfs f5, lbl_8051D3B8@sda21(r2)
/* 802FF3B8 002FC2F8  EC A5 30 24 */	fdivs f5, f5, f6
/* 802FF3BC 002FC2FC  EC 42 01 72 */	fmuls f2, f2, f5
/* 802FF3C0 002FC300  EC 63 01 72 */	fmuls f3, f3, f5
/* 802FF3C4 002FC304  EC 84 01 72 */	fmuls f4, f4, f5
.L_802FF3C8:
/* 802FF3C8 002FC308  C0 A2 F1 4C */	lfs f5, lbl_8051D4AC@sda21(r2)
/* 802FF3CC 002FC30C  38 81 00 08 */	addi r4, r1, 8
/* 802FF3D0 002FC310  C1 02 F1 50 */	lfs f8, lbl_8051D4B0@sda21(r2)
/* 802FF3D4 002FC314  ED 29 01 72 */	fmuls f9, f9, f5
/* 802FF3D8 002FC318  C0 E1 00 08 */	lfs f7, 8(r1)
/* 802FF3DC 002FC31C  EC 00 01 72 */	fmuls f0, f0, f5
/* 802FF3E0 002FC320  C0 C1 00 0C */	lfs f6, 0xc(r1)
/* 802FF3E4 002FC324  EC 21 01 72 */	fmuls f1, f1, f5
/* 802FF3E8 002FC328  C0 A1 00 10 */	lfs f5, 0x10(r1)
/* 802FF3EC 002FC32C  EC E7 48 2A */	fadds f7, f7, f9
/* 802FF3F0 002FC330  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802FF3F4 002FC334  EC 42 02 32 */	fmuls f2, f2, f8
/* 802FF3F8 002FC338  EC C6 00 2A */	fadds f6, f6, f0
/* 802FF3FC 002FC33C  EC 63 02 32 */	fmuls f3, f3, f8
/* 802FF400 002FC340  D0 E1 00 08 */	stfs f7, 8(r1)
/* 802FF404 002FC344  EC 05 08 2A */	fadds f0, f5, f1
/* 802FF408 002FC348  EC 84 02 32 */	fmuls f4, f4, f8
/* 802FF40C 002FC34C  D0 C1 00 0C */	stfs f6, 0xc(r1)
/* 802FF410 002FC350  EC 47 10 2A */	fadds f2, f7, f2
/* 802FF414 002FC354  EC 26 18 2A */	fadds f1, f6, f3
/* 802FF418 002FC358  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802FF41C 002FC35C  EC 00 20 2A */	fadds f0, f0, f4
/* 802FF420 002FC360  D0 41 00 08 */	stfs f2, 8(r1)
/* 802FF424 002FC364  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802FF428 002FC368  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802FF42C 002FC36C  81 83 00 04 */	lwz r12, 4(r3)
/* 802FF430 002FC370  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802FF434 002FC374  7D 89 03 A6 */	mtctr r12
/* 802FF438 002FC378  4E 80 04 21 */	bctrl 
/* 802FF43C 002FC37C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802FF440 002FC380  88 1F 02 C3 */	lbz r0, 0x2c3(r31)
/* 802FF444 002FC384  EC 20 08 28 */	fsubs f1, f0, f1
/* 802FF448 002FC388  28 00 00 00 */	cmplwi r0, 0
/* 802FF44C 002FC38C  41 82 00 1C */	beq .L_802FF468
/* 802FF450 002FC390  C0 02 F0 50 */	lfs f0, lbl_8051D3B0@sda21(r2)
/* 802FF454 002FC394  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FF458 002FC398  40 81 00 3C */	ble .L_802FF494
/* 802FF45C 002FC39C  38 00 00 00 */	li r0, 0
/* 802FF460 002FC3A0  98 1F 02 C3 */	stb r0, 0x2c3(r31)
/* 802FF464 002FC3A4  48 00 00 30 */	b .L_802FF494
.L_802FF468:
/* 802FF468 002FC3A8  C0 02 F1 54 */	lfs f0, lbl_8051D4B4@sda21(r2)
/* 802FF46C 002FC3AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FF470 002FC3B0  40 80 00 24 */	bge .L_802FF494
/* 802FF474 002FC3B4  38 00 00 01 */	li r0, 1
/* 802FF478 002FC3B8  C0 22 F1 58 */	lfs f1, lbl_8051D4B8@sda21(r2)
/* 802FF47C 002FC3BC  98 1F 02 C3 */	stb r0, 0x2c3(r31)
/* 802FF480 002FC3C0  7F E3 FB 78 */	mr r3, r31
/* 802FF484 002FC3C4  38 81 00 08 */	addi r4, r1, 8
/* 802FF488 002FC3C8  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802FF48C 002FC3CC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802FF490 002FC3D0  4B E0 46 C1 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
.L_802FF494:
/* 802FF494 002FC3D4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FF498 002FC3D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802FF49C 002FC3DC  7C 08 03 A6 */	mtlr r0
/* 802FF4A0 002FC3E0  38 21 00 20 */	addi r1, r1, 0x20
/* 802FF4A4 002FC3E4  4E 80 00 20 */	blr 
.endfn createMoveHandEffect__Q34Game10DangoMushi3ObjFv

.fn createAppearSmokeEffect__Q34Game10DangoMushi3ObjFv, global
/* 802FF4A8 002FC3E8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802FF4AC 002FC3EC  7C 08 02 A6 */	mflr r0
/* 802FF4B0 002FC3F0  3C A0 80 4D */	lis r5, __vt__Q23efx9TDangoFly@ha
/* 802FF4B4 002FC3F4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802FF4B8 002FC3F8  90 01 00 34 */	stw r0, 0x34(r1)
/* 802FF4BC 002FC3FC  38 C0 00 00 */	li r6, 0
/* 802FF4C0 002FC400  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802FF4C4 002FC404  39 00 02 B2 */	li r8, 0x2b2
/* 802FF4C8 002FC408  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple3@ha
/* 802FF4CC 002FC40C  90 01 00 18 */	stw r0, 0x18(r1)
/* 802FF4D0 002FC410  38 04 6A 50 */	addi r0, r4, __vt__Q23efx8TSimple3@l
/* 802FF4D4 002FC414  38 E0 02 B3 */	li r7, 0x2b3
/* 802FF4D8 002FC418  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802FF4DC 002FC41C  90 01 00 18 */	stw r0, 0x18(r1)
/* 802FF4E0 002FC420  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 802FF4E4 002FC424  38 A5 60 E8 */	addi r5, r5, __vt__Q23efx9TDangoFly@l
/* 802FF4E8 002FC428  38 80 02 B1 */	li r4, 0x2b1
/* 802FF4EC 002FC42C  B1 01 00 1E */	sth r8, 0x1e(r1)
/* 802FF4F0 002FC430  B0 81 00 1C */	sth r4, 0x1c(r1)
/* 802FF4F4 002FC434  38 81 00 08 */	addi r4, r1, 8
/* 802FF4F8 002FC438  B0 E1 00 20 */	sth r7, 0x20(r1)
/* 802FF4FC 002FC43C  90 C1 00 24 */	stw r6, 0x24(r1)
/* 802FF500 002FC440  90 C1 00 28 */	stw r6, 0x28(r1)
/* 802FF504 002FC444  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 802FF508 002FC448  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802FF50C 002FC44C  90 01 00 08 */	stw r0, 8(r1)
/* 802FF510 002FC450  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802FF514 002FC454  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802FF518 002FC458  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802FF51C 002FC45C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802FF520 002FC460  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 802FF524 002FC464  38 61 00 18 */	addi r3, r1, 0x18
/* 802FF528 002FC468  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802FF52C 002FC46C  48 0A FB 91 */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 802FF530 002FC470  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802FF534 002FC474  7C 08 03 A6 */	mtlr r0
/* 802FF538 002FC478  38 21 00 30 */	addi r1, r1, 0x30
/* 802FF53C 002FC47C  4E 80 00 20 */	blr 
.endfn createAppearSmokeEffect__Q34Game10DangoMushi3ObjFv

.fn effectDrawOn__Q34Game10DangoMushi3ObjFv, global
/* 802FF540 002FC480  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FF544 002FC484  7C 08 02 A6 */	mflr r0
/* 802FF548 002FC488  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FF54C 002FC48C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FF550 002FC490  7C 7F 1B 78 */	mr r31, r3
/* 802FF554 002FC494  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802FF558 002FC498  81 83 00 00 */	lwz r12, 0(r3)
/* 802FF55C 002FC49C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802FF560 002FC4A0  7D 89 03 A6 */	mtctr r12
/* 802FF564 002FC4A4  4E 80 04 21 */	bctrl 
/* 802FF568 002FC4A8  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802FF56C 002FC4AC  81 83 00 00 */	lwz r12, 0(r3)
/* 802FF570 002FC4B0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802FF574 002FC4B4  7D 89 03 A6 */	mtctr r12
/* 802FF578 002FC4B8  4E 80 04 21 */	bctrl 
/* 802FF57C 002FC4BC  80 7F 02 FC */	lwz r3, 0x2fc(r31)
/* 802FF580 002FC4C0  81 83 00 00 */	lwz r12, 0(r3)
/* 802FF584 002FC4C4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802FF588 002FC4C8  7D 89 03 A6 */	mtctr r12
/* 802FF58C 002FC4CC  4E 80 04 21 */	bctrl 
/* 802FF590 002FC4D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FF594 002FC4D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FF598 002FC4D8  7C 08 03 A6 */	mtlr r0
/* 802FF59C 002FC4DC  38 21 00 10 */	addi r1, r1, 0x10
/* 802FF5A0 002FC4E0  4E 80 00 20 */	blr 
.endfn effectDrawOn__Q34Game10DangoMushi3ObjFv

.fn effectDrawOff__Q34Game10DangoMushi3ObjFv, global
/* 802FF5A4 002FC4E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FF5A8 002FC4E8  7C 08 02 A6 */	mflr r0
/* 802FF5AC 002FC4EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FF5B0 002FC4F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FF5B4 002FC4F4  7C 7F 1B 78 */	mr r31, r3
/* 802FF5B8 002FC4F8  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802FF5BC 002FC4FC  81 83 00 00 */	lwz r12, 0(r3)
/* 802FF5C0 002FC500  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802FF5C4 002FC504  7D 89 03 A6 */	mtctr r12
/* 802FF5C8 002FC508  4E 80 04 21 */	bctrl 
/* 802FF5CC 002FC50C  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802FF5D0 002FC510  81 83 00 00 */	lwz r12, 0(r3)
/* 802FF5D4 002FC514  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802FF5D8 002FC518  7D 89 03 A6 */	mtctr r12
/* 802FF5DC 002FC51C  4E 80 04 21 */	bctrl 
/* 802FF5E0 002FC520  80 7F 02 FC */	lwz r3, 0x2fc(r31)
/* 802FF5E4 002FC524  81 83 00 00 */	lwz r12, 0(r3)
/* 802FF5E8 002FC528  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802FF5EC 002FC52C  7D 89 03 A6 */	mtctr r12
/* 802FF5F0 002FC530  4E 80 04 21 */	bctrl 
/* 802FF5F4 002FC534  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FF5F8 002FC538  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FF5FC 002FC53C  7C 08 03 A6 */	mtlr r0
/* 802FF600 002FC540  38 21 00 10 */	addi r1, r1, 0x10
/* 802FF604 002FC544  4E 80 00 20 */	blr 
.endfn effectDrawOff__Q34Game10DangoMushi3ObjFv

.fn __dt__Q23efx13TDangoAttack2Fv, weak
/* 802FF608 002FC548  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FF60C 002FC54C  7C 08 02 A6 */	mflr r0
/* 802FF610 002FC550  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FF614 002FC554  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FF618 002FC558  7C 9F 23 78 */	mr r31, r4
/* 802FF61C 002FC55C  93 C1 00 08 */	stw r30, 8(r1)
/* 802FF620 002FC560  7C 7E 1B 79 */	or. r30, r3, r3
/* 802FF624 002FC564  41 82 00 64 */	beq .L_802FF688
/* 802FF628 002FC568  3C 60 80 4D */	lis r3, __vt__Q23efx13TDangoAttack2@ha
/* 802FF62C 002FC56C  38 63 61 54 */	addi r3, r3, __vt__Q23efx13TDangoAttack2@l
/* 802FF630 002FC570  90 7E 00 00 */	stw r3, 0(r30)
/* 802FF634 002FC574  38 03 00 14 */	addi r0, r3, 0x14
/* 802FF638 002FC578  90 1E 00 04 */	stw r0, 4(r30)
/* 802FF63C 002FC57C  41 82 00 3C */	beq .L_802FF678
/* 802FF640 002FC580  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802FF644 002FC584  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802FF648 002FC588  90 7E 00 00 */	stw r3, 0(r30)
/* 802FF64C 002FC58C  38 03 00 14 */	addi r0, r3, 0x14
/* 802FF650 002FC590  90 1E 00 04 */	stw r0, 4(r30)
/* 802FF654 002FC594  41 82 00 24 */	beq .L_802FF678
/* 802FF658 002FC598  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802FF65C 002FC59C  38 7E 00 04 */	addi r3, r30, 4
/* 802FF660 002FC5A0  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802FF664 002FC5A4  38 80 00 00 */	li r4, 0
/* 802FF668 002FC5A8  90 BE 00 00 */	stw r5, 0(r30)
/* 802FF66C 002FC5AC  38 05 00 14 */	addi r0, r5, 0x14
/* 802FF670 002FC5B0  90 1E 00 04 */	stw r0, 4(r30)
/* 802FF674 002FC5B4  4B D9 06 29 */	bl __dt__18JPAEmitterCallBackFv
.L_802FF678:
/* 802FF678 002FC5B8  7F E0 07 35 */	extsh. r0, r31
/* 802FF67C 002FC5BC  40 81 00 0C */	ble .L_802FF688
/* 802FF680 002FC5C0  7F C3 F3 78 */	mr r3, r30
/* 802FF684 002FC5C4  4B D2 4A 31 */	bl __dl__FPv
.L_802FF688:
/* 802FF688 002FC5C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FF68C 002FC5CC  7F C3 F3 78 */	mr r3, r30
/* 802FF690 002FC5D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FF694 002FC5D4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FF698 002FC5D8  7C 08 03 A6 */	mtlr r0
/* 802FF69C 002FC5DC  38 21 00 10 */	addi r1, r1, 0x10
/* 802FF6A0 002FC5E0  4E 80 00 20 */	blr 
.endfn __dt__Q23efx13TDangoAttack2Fv

.fn __dt__Q23efx15TDangoWallBreakFv, weak
/* 802FF6A4 002FC5E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FF6A8 002FC5E8  7C 08 02 A6 */	mflr r0
/* 802FF6AC 002FC5EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FF6B0 002FC5F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FF6B4 002FC5F4  7C 9F 23 78 */	mr r31, r4
/* 802FF6B8 002FC5F8  93 C1 00 08 */	stw r30, 8(r1)
/* 802FF6BC 002FC5FC  7C 7E 1B 79 */	or. r30, r3, r3
/* 802FF6C0 002FC600  41 82 00 64 */	beq .L_802FF724
/* 802FF6C4 002FC604  3C 60 80 4D */	lis r3, __vt__Q23efx15TDangoWallBreak@ha
/* 802FF6C8 002FC608  38 63 61 A0 */	addi r3, r3, __vt__Q23efx15TDangoWallBreak@l
/* 802FF6CC 002FC60C  90 7E 00 00 */	stw r3, 0(r30)
/* 802FF6D0 002FC610  38 03 00 14 */	addi r0, r3, 0x14
/* 802FF6D4 002FC614  90 1E 00 04 */	stw r0, 4(r30)
/* 802FF6D8 002FC618  41 82 00 3C */	beq .L_802FF714
/* 802FF6DC 002FC61C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802FF6E0 002FC620  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802FF6E4 002FC624  90 7E 00 00 */	stw r3, 0(r30)
/* 802FF6E8 002FC628  38 03 00 14 */	addi r0, r3, 0x14
/* 802FF6EC 002FC62C  90 1E 00 04 */	stw r0, 4(r30)
/* 802FF6F0 002FC630  41 82 00 24 */	beq .L_802FF714
/* 802FF6F4 002FC634  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802FF6F8 002FC638  38 7E 00 04 */	addi r3, r30, 4
/* 802FF6FC 002FC63C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802FF700 002FC640  38 80 00 00 */	li r4, 0
/* 802FF704 002FC644  90 BE 00 00 */	stw r5, 0(r30)
/* 802FF708 002FC648  38 05 00 14 */	addi r0, r5, 0x14
/* 802FF70C 002FC64C  90 1E 00 04 */	stw r0, 4(r30)
/* 802FF710 002FC650  4B D9 05 8D */	bl __dt__18JPAEmitterCallBackFv
.L_802FF714:
/* 802FF714 002FC654  7F E0 07 35 */	extsh. r0, r31
/* 802FF718 002FC658  40 81 00 0C */	ble .L_802FF724
/* 802FF71C 002FC65C  7F C3 F3 78 */	mr r3, r30
/* 802FF720 002FC660  4B D2 49 95 */	bl __dl__FPv
.L_802FF724:
/* 802FF724 002FC664  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FF728 002FC668  7F C3 F3 78 */	mr r3, r30
/* 802FF72C 002FC66C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FF730 002FC670  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FF734 002FC674  7C 08 03 A6 */	mtlr r0
/* 802FF738 002FC678  38 21 00 10 */	addi r1, r1, 0x10
/* 802FF73C 002FC67C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx15TDangoWallBreakFv

.fn getDamageCoeStoneState__Q34Game10DangoMushi3ObjFv, weak
/* 802FF740 002FC680  C0 22 F1 5C */	lfs f1, lbl_8051D4BC@sda21(r2)
/* 802FF744 002FC684  4E 80 00 20 */	blr 
.endfn getDamageCoeStoneState__Q34Game10DangoMushi3ObjFv

.fn getEnemyTypeID__Q34Game10DangoMushi3ObjFv, weak
/* 802FF748 002FC688  38 60 00 5E */	li r3, 0x5e
/* 802FF74C 002FC68C  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game10DangoMushi3ObjFv

.fn __dt__Q34Game10DangoMushi14ProperAnimatorFv, weak
/* 802FF750 002FC690  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FF754 002FC694  7C 08 02 A6 */	mflr r0
/* 802FF758 002FC698  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FF75C 002FC69C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FF760 002FC6A0  7C 7F 1B 79 */	or. r31, r3, r3
/* 802FF764 002FC6A4  41 82 00 40 */	beq .L_802FF7A4
/* 802FF768 002FC6A8  3C 60 80 4D */	lis r3, __vt__Q34Game10DangoMushi14ProperAnimator@ha
/* 802FF76C 002FC6AC  38 03 65 18 */	addi r0, r3, __vt__Q34Game10DangoMushi14ProperAnimator@l
/* 802FF770 002FC6B0  90 1F 00 00 */	stw r0, 0(r31)
/* 802FF774 002FC6B4  41 82 00 20 */	beq .L_802FF794
/* 802FF778 002FC6B8  3C 60 80 4B */	lis r3, __vt__Q24Game22EnemyBlendAnimatorBase@ha
/* 802FF77C 002FC6BC  38 03 F8 24 */	addi r0, r3, __vt__Q24Game22EnemyBlendAnimatorBase@l
/* 802FF780 002FC6C0  90 1F 00 00 */	stw r0, 0(r31)
/* 802FF784 002FC6C4  41 82 00 10 */	beq .L_802FF794
/* 802FF788 002FC6C8  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802FF78C 002FC6CC  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802FF790 002FC6D0  90 1F 00 00 */	stw r0, 0(r31)
.L_802FF794:
/* 802FF794 002FC6D4  7C 80 07 35 */	extsh. r0, r4
/* 802FF798 002FC6D8  40 81 00 0C */	ble .L_802FF7A4
/* 802FF79C 002FC6DC  7F E3 FB 78 */	mr r3, r31
/* 802FF7A0 002FC6E0  4B D2 49 15 */	bl __dl__FPv
.L_802FF7A4:
/* 802FF7A4 002FC6E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FF7A8 002FC6E8  7F E3 FB 78 */	mr r3, r31
/* 802FF7AC 002FC6EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FF7B0 002FC6F0  7C 08 03 A6 */	mtlr r0
/* 802FF7B4 002FC6F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802FF7B8 002FC6F8  4E 80 00 20 */	blr 
.endfn __dt__Q34Game10DangoMushi14ProperAnimatorFv

.fn "@4@__dt__Q23efx15TDangoWallBreakFv", weak
/* 802FF7BC 002FC6FC  38 63 FF FC */	addi r3, r3, -4
/* 802FF7C0 002FC700  4B FF FE E4 */	b __dt__Q23efx15TDangoWallBreakFv
.endfn "@4@__dt__Q23efx15TDangoWallBreakFv"

.fn "@4@__dt__Q23efx13TDangoAttack2Fv", weak
/* 802FF7C4 002FC704  38 63 FF FC */	addi r3, r3, -4
/* 802FF7C8 002FC708  4B FF FE 40 */	b __dt__Q23efx13TDangoAttack2Fv
.endfn "@4@__dt__Q23efx13TDangoAttack2Fv"
