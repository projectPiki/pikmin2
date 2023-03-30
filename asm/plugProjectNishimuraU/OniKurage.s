.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_OniKurage_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8048C0C0, local
	.float 0.0
	.float 30.0
	.float 65.0
	.float 80.0
	.float 95.0
	.float 108.0
	.float 120.0
.endobj lbl_8048C0C0
.obj lbl_8048C0DC, local
	.float 0.0
	.float -30.0
	.float 30.0
	.float -50.0
	.float 0.0
	.float -40.0
	.float 0.0
.endobj lbl_8048C0DC
.obj lbl_8048C0F8, local
	.float 0.0
	.float 10.0
	.float 15.0
	.float 20.0
	.float 30.0
	.float 40.0
	.float 60.0
.endobj lbl_8048C0F8
.obj lbl_8048C114, local
	.float 0.0
	.float -80.0
	.float 80.0
	.float -100.0
	.float 30.0
	.float -50.0
	.float 0.0
.endobj lbl_8048C114
.obj lbl_8048C130, local
	.float 32.0
	.float 40.0
	.float 52.0
	.float 70.0
	.float 80.0
.endobj lbl_8048C130
.obj lbl_8048C144, local
	.float 0.0
	.float -50.0
	.float -60.0
	.float -10.0
	.float -10.0
.endobj lbl_8048C144
.obj lbl_8048C158, local
	.float 7.0
	.float 17.0
	.float 27.0
	.float 37.0
	.float 47.0
	.float 57.0
	.float 67.0
	.float 77.0
.endobj lbl_8048C158
.obj lbl_8048C178, local
	.float -25.0
	.float -15.0
	.float -40.0
	.float -30.0
	.float -45.0
	.float -35.0
	.float -70.0
	.float 0.0
.endobj lbl_8048C178

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q23efx11TKurageBomb, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx11TKurageBomb
.obj __vt__Q23efx14TKurageDeadrun, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TKurageDeadrunFv"
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
	.4byte __dt__Q23efx14TKurageDeadrunFv
.endobj __vt__Q23efx14TKurageDeadrun
.obj __vt__Q23efx11TKurageGepu, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx11TKurageGepuFv"
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
	.4byte __dt__Q23efx11TKurageGepuFv
.endobj __vt__Q23efx11TKurageGepu
.obj __vt__Q23efx10TKurageSui, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "fade__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "startDemoDrawOff__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "endDemoDrawOn__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
.endobj __vt__Q23efx10TKurageSui
.obj __vt__Q23efx11TKurageKira, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx11TKurageKiraFv"
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
	.4byte __dt__Q23efx11TKurageKiraFv
.endobj __vt__Q23efx11TKurageKira
.obj __vt__Q23efx11TKurageHire, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
.endobj __vt__Q23efx11TKurageHire
.obj __vt__Q23efx10TKurageEye, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx10TKurageEyeFv"
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
	.4byte __dt__Q23efx10TKurageEyeFv
.endobj __vt__Q23efx10TKurageEye
.obj __vt__Q34Game9OniKurage3Obj, global
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
	.4byte onInit__Q34Game9OniKurage3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game9OniKurage3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game9OniKurage3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game9OniKurage3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game9OniKurage3ObjFv
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
	.4byte getShadowParam__Q34Game9OniKurage3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game9OniKurage3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game9OniKurage3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game9OniKurage3ObjFv
	.4byte doUpdateCommon__Q34Game9OniKurage3ObjFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game9OniKurage3ObjFR8Graphics
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
	.4byte initMouthSlots__Q34Game9OniKurage3ObjFv
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
	.4byte getEnemyTypeID__Q34Game9OniKurage3ObjFv
	.4byte getMouthSlots__Q34Game9OniKurage3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game9OniKurage3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte doStartStoneState__Q34Game9OniKurage3ObjFv
	.4byte doFinishStoneState__Q34Game9OniKurage3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
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
	.4byte doStartWaitingBirthTypeDrop__Q34Game9OniKurage3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game9OniKurage3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game9OniKurage3ObjFv
	.4byte doStartMovie__Q34Game9OniKurage3ObjFv
	.4byte doEndMovie__Q34Game9OniKurage3ObjFv
	.4byte setFSM__Q34Game9OniKurage3ObjFPQ34Game9OniKurage3FSM
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
.endobj __vt__Q34Game9OniKurage3Obj

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
.obj "cDefaultKamuJointOffset__Q34Game9OniKurage23@unnamed@OniKurage_cpp@", local
	.float 7.5
	.float -7.5
.endobj "cDefaultKamuJointOffset__Q34Game9OniKurage23@unnamed@OniKurage_cpp@"
.obj "cFlickKamuJointOffset__Q34Game9OniKurage23@unnamed@OniKurage_cpp@", local
	.float 10.0
	.float -10.0
.endobj "cFlickKamuJointOffset__Q34Game9OniKurage23@unnamed@OniKurage_cpp@"
.obj lbl_8051C9A0, local
	.float 0.0
.endobj lbl_8051C9A0
.obj lbl_8051C9A4, local
	.float 3.5
.endobj lbl_8051C9A4
.balign 4
.obj lbl_8051C9A8, local
	.asciz "koshi1"
.endobj lbl_8051C9A8
.balign 4
.obj lbl_8051C9B0, local
	.float 25.0
.endobj lbl_8051C9B0
.obj lbl_8051C9B4, local
	.float 5.0
.endobj lbl_8051C9B4
.obj lbl_8051C9B8, local
	.float 1.0
.endobj lbl_8051C9B8
.obj lbl_8051C9BC, local
	.float 100.0
.endobj lbl_8051C9BC
.obj lbl_8051C9C0, local
	.float 50.0
.endobj lbl_8051C9C0
.balign 4
.obj lbl_8051C9C4, local
	.asciz "Proom"
.endobj lbl_8051C9C4
.balign 4
.obj lbl_8051C9CC, local
	.float 32768.0
.endobj lbl_8051C9CC
.obj lbl_8051C9D0, local # pi
	.float 3.1415927
.endobj lbl_8051C9D0
.obj lbl_8051C9D4, local # pi/2
	.float 1.5707964
.endobj lbl_8051C9D4
.obj lbl_8051C9D8, local
	.float 325.9493
.endobj lbl_8051C9D8
.obj lbl_8051C9DC, local
	.float -325.9493
.endobj lbl_8051C9DC
.balign 8
.obj lbl_8051C9E0, local
	.8byte 0x4330000080000000
.endobj lbl_8051C9E0
.obj lbl_8051C9E8, local # tau
	.float 6.2831855
.endobj lbl_8051C9E8
.obj lbl_8051C9EC, local
	.float 20.0
.endobj lbl_8051C9EC
.obj lbl_8051C9F0, local
	.float 30.0
.endobj lbl_8051C9F0
.obj lbl_8051C9F4, local
	.float 0.0055555557
.endobj lbl_8051C9F4
.obj lbl_8051C9F8, local
	.float 0.8
.endobj lbl_8051C9F8
.obj lbl_8051C9FC, local
	.float 0.2
.endobj lbl_8051C9FC
.obj lbl_8051CA00, local
	.float -20.0
.endobj lbl_8051CA00
.obj lbl_8051CA04, local
	.float 7.5
.endobj lbl_8051CA04
.obj lbl_8051CA08, local
	.float -50.0
.endobj lbl_8051CA08
.obj lbl_8051CA0C, local
	.float -75.0
.endobj lbl_8051CA0C
.obj lbl_8051CA10, local
	.float 10.0
.endobj lbl_8051CA10
.obj lbl_8051CA14, local
	.float -1000.0
.endobj lbl_8051CA14
.balign 4
.obj lbl_8051CA18, local
	.asciz "Ltuno2"
.endobj lbl_8051CA18
.balign 4
.obj lbl_8051CA20, local
	.asciz "Rtuno2"
.endobj lbl_8051CA20
.balign 4
.obj lbl_8051CA28, local
	.asciz "nyoro"
.endobj lbl_8051CA28
.balign 4
.obj lbl_8051CA30, local
	.asciz "center"
.endobj lbl_8051CA30
.balign 4
.obj lbl_8051CA38, local
	.float 0.85
.endobj lbl_8051CA38

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game9OniKurage3ObjFv, global
/* 802D3F84 002D0EC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D3F88 002D0EC8  7C 08 02 A6 */	mflr r0
/* 802D3F8C 002D0ECC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D3F90 002D0ED0  7C 80 07 35 */	extsh. r0, r4
/* 802D3F94 002D0ED4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D3F98 002D0ED8  7C 7F 1B 78 */	mr r31, r3
/* 802D3F9C 002D0EDC  93 C1 00 08 */	stw r30, 8(r1)
/* 802D3FA0 002D0EE0  41 82 00 24 */	beq .L_802D3FC4
/* 802D3FA4 002D0EE4  38 1F 03 10 */	addi r0, r31, 0x310
/* 802D3FA8 002D0EE8  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802D3FAC 002D0EEC  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802D3FB0 002D0EF0  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802D3FB4 002D0EF4  38 00 00 00 */	li r0, 0
/* 802D3FB8 002D0EF8  90 7F 03 10 */	stw r3, 0x310(r31)
/* 802D3FBC 002D0EFC  90 1F 03 14 */	stw r0, 0x314(r31)
/* 802D3FC0 002D0F00  90 1F 03 18 */	stw r0, 0x318(r31)
.L_802D3FC4:
/* 802D3FC4 002D0F04  7F E3 FB 78 */	mr r3, r31
/* 802D3FC8 002D0F08  38 80 00 00 */	li r4, 0
/* 802D3FCC 002D0F0C  4B E2 D3 D5 */	bl __ct__Q24Game9EnemyBaseFv
/* 802D3FD0 002D0F10  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage3Obj@ha
/* 802D3FD4 002D0F14  38 1F 03 10 */	addi r0, r31, 0x310
/* 802D3FD8 002D0F18  38 A3 2C 60 */	addi r5, r3, __vt__Q34Game9OniKurage3Obj@l
/* 802D3FDC 002D0F1C  38 7F 02 E4 */	addi r3, r31, 0x2e4
/* 802D3FE0 002D0F20  90 BF 00 00 */	stw r5, 0(r31)
/* 802D3FE4 002D0F24  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802D3FE8 002D0F28  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 802D3FEC 002D0F2C  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802D3FF0 002D0F30  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802D3FF4 002D0F34  90 A4 00 00 */	stw r5, 0(r4)
/* 802D3FF8 002D0F38  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802D3FFC 002D0F3C  7C 04 00 50 */	subf r0, r4, r0
/* 802D4000 002D0F40  90 04 00 0C */	stw r0, 0xc(r4)
/* 802D4004 002D0F44  4B E6 45 45 */	bl __ct__10MouthSlotsFv
/* 802D4008 002D0F48  38 60 00 2C */	li r3, 0x2c
/* 802D400C 002D0F4C  4B D4 FE 99 */	bl __nw__FUl
/* 802D4010 002D0F50  7C 7E 1B 79 */	or. r30, r3, r3
/* 802D4014 002D0F54  41 82 00 44 */	beq .L_802D4058
/* 802D4018 002D0F58  4B E5 39 5D */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802D401C 002D0F5C  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage14ProperAnimator@ha
/* 802D4020 002D0F60  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802D4024 002D0F64  38 03 29 C0 */	addi r0, r3, __vt__Q34Game9OniKurage14ProperAnimator@l
/* 802D4028 002D0F68  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802D402C 002D0F6C  90 1E 00 00 */	stw r0, 0(r30)
/* 802D4030 002D0F70  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802D4034 002D0F74  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802D4038 002D0F78  38 00 00 00 */	li r0, 0
/* 802D403C 002D0F7C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802D4040 002D0F80  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802D4044 002D0F84  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802D4048 002D0F88  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802D404C 002D0F8C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802D4050 002D0F90  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802D4054 002D0F94  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802D4058:
/* 802D4058 002D0F98  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802D405C 002D0F9C  38 60 00 1C */	li r3, 0x1c
/* 802D4060 002D0FA0  4B D4 FE 45 */	bl __nw__FUl
/* 802D4064 002D0FA4  7C 64 1B 79 */	or. r4, r3, r3
/* 802D4068 002D0FA8  41 82 00 24 */	beq .L_802D408C
/* 802D406C 002D0FAC  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802D4070 002D0FB0  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage3FSM@ha
/* 802D4074 002D0FB4  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802D4078 002D0FB8  38 A0 FF FF */	li r5, -1
/* 802D407C 002D0FBC  90 04 00 00 */	stw r0, 0(r4)
/* 802D4080 002D0FC0  38 03 29 9C */	addi r0, r3, __vt__Q34Game9OniKurage3FSM@l
/* 802D4084 002D0FC4  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802D4088 002D0FC8  90 04 00 00 */	stw r0, 0(r4)
.L_802D408C:
/* 802D408C 002D0FCC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D4090 002D0FD0  7F E3 FB 78 */	mr r3, r31
/* 802D4094 002D0FD4  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802D4098 002D0FD8  7D 89 03 A6 */	mtctr r12
/* 802D409C 002D0FDC  4E 80 04 21 */	bctrl 
/* 802D40A0 002D0FE0  7F E3 FB 78 */	mr r3, r31
/* 802D40A4 002D0FE4  48 00 26 E5 */	bl createEffect__Q34Game9OniKurage3ObjFv
/* 802D40A8 002D0FE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D40AC 002D0FEC  7F E3 FB 78 */	mr r3, r31
/* 802D40B0 002D0FF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D40B4 002D0FF4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D40B8 002D0FF8  7C 08 03 A6 */	mtlr r0
/* 802D40BC 002D0FFC  38 21 00 10 */	addi r1, r1, 0x10
/* 802D40C0 002D1000  4E 80 00 20 */	blr 
.endfn __ct__Q34Game9OniKurage3ObjFv

.fn setInitialSetting__Q34Game9OniKurage3ObjFPQ24Game21EnemyInitialParamBase, global
/* 802D40C4 002D1004  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game9OniKurage3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game9OniKurage3ObjFPQ24Game15CreatureInitArg, global
/* 802D40C8 002D1008  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D40CC 002D100C  7C 08 02 A6 */	mflr r0
/* 802D40D0 002D1010  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D40D4 002D1014  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D40D8 002D1018  7C 7F 1B 78 */	mr r31, r3
/* 802D40DC 002D101C  4B E2 D9 7D */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802D40E0 002D1020  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 802D40E4 002D1024  38 80 FF FF */	li r4, -1
/* 802D40E8 002D1028  C0 22 E6 40 */	lfs f1, lbl_8051C9A0@sda21(r2)
/* 802D40EC 002D102C  38 00 00 00 */	li r0, 0
/* 802D40F0 002D1030  54 63 06 6E */	rlwinm r3, r3, 0, 0x19, 0x17
/* 802D40F4 002D1034  C0 02 E6 44 */	lfs f0, lbl_8051C9A4@sda21(r2)
/* 802D40F8 002D1038  90 7F 01 E0 */	stw r3, 0x1e0(r31)
/* 802D40FC 002D103C  7F E3 FB 78 */	mr r3, r31
/* 802D4100 002D1040  80 BF 01 E0 */	lwz r5, 0x1e0(r31)
/* 802D4104 002D1044  60 A5 00 04 */	ori r5, r5, 4
/* 802D4108 002D1048  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802D410C 002D104C  80 BF 01 E0 */	lwz r5, 0x1e0(r31)
/* 802D4110 002D1050  54 A5 06 2C */	rlwinm r5, r5, 0, 0x18, 0x16
/* 802D4114 002D1054  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802D4118 002D1058  90 9F 02 C0 */	stw r4, 0x2c0(r31)
/* 802D411C 002D105C  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 802D4120 002D1060  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 802D4124 002D1064  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802D4128 002D1068  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 802D412C 002D106C  98 1F 02 DC */	stb r0, 0x2dc(r31)
/* 802D4130 002D1070  90 1F 02 F0 */	stw r0, 0x2f0(r31)
/* 802D4134 002D1074  90 1F 02 EC */	stw r0, 0x2ec(r31)
/* 802D4138 002D1078  48 00 29 91 */	bl setupEffect__Q34Game9OniKurage3ObjFv
/* 802D413C 002D107C  7F E3 FB 78 */	mr r3, r31
/* 802D4140 002D1080  48 00 2A 15 */	bl startEyeHireBodyEffect__Q34Game9OniKurage3ObjFv
/* 802D4144 002D1084  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802D4148 002D1088  7F E4 FB 78 */	mr r4, r31
/* 802D414C 002D108C  38 A0 00 01 */	li r5, 1
/* 802D4150 002D1090  38 C0 00 00 */	li r6, 0
/* 802D4154 002D1094  81 83 00 00 */	lwz r12, 0(r3)
/* 802D4158 002D1098  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802D415C 002D109C  7D 89 03 A6 */	mtctr r12
/* 802D4160 002D10A0  4E 80 04 21 */	bctrl 
/* 802D4164 002D10A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D4168 002D10A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D416C 002D10AC  7C 08 03 A6 */	mtlr r0
/* 802D4170 002D10B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D4174 002D10B4  4E 80 00 20 */	blr 
.endfn onInit__Q34Game9OniKurage3ObjFPQ24Game15CreatureInitArg

.fn onKill__Q34Game9OniKurage3ObjFPQ24Game15CreatureKillArg, global
/* 802D4178 002D10B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D417C 002D10BC  7C 08 02 A6 */	mflr r0
/* 802D4180 002D10C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D4184 002D10C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D4188 002D10C8  7C 9F 23 78 */	mr r31, r4
/* 802D418C 002D10CC  93 C1 00 08 */	stw r30, 8(r1)
/* 802D4190 002D10D0  7C 7E 1B 78 */	mr r30, r3
/* 802D4194 002D10D4  48 00 2A 49 */	bl finishEyeBodyEffect__Q34Game9OniKurage3ObjFv
/* 802D4198 002D10D8  7F C3 F3 78 */	mr r3, r30
/* 802D419C 002D10DC  48 00 2A E1 */	bl finishHireEffect__Q34Game9OniKurage3ObjFv
/* 802D41A0 002D10E0  7F C3 F3 78 */	mr r3, r30
/* 802D41A4 002D10E4  48 00 2B A5 */	bl finishSuckEffect__Q34Game9OniKurage3ObjFv
/* 802D41A8 002D10E8  7F C3 F3 78 */	mr r3, r30
/* 802D41AC 002D10EC  7F E4 FB 78 */	mr r4, r31
/* 802D41B0 002D10F0  4B E2 DD 39 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 802D41B4 002D10F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D41B8 002D10F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D41BC 002D10FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D41C0 002D1100  7C 08 03 A6 */	mtlr r0
/* 802D41C4 002D1104  38 21 00 10 */	addi r1, r1, 0x10
/* 802D41C8 002D1108  4E 80 00 20 */	blr 
.endfn onKill__Q34Game9OniKurage3ObjFPQ24Game15CreatureKillArg

.fn doUpdate__Q34Game9OniKurage3ObjFv, global
/* 802D41CC 002D110C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D41D0 002D1110  7C 08 02 A6 */	mflr r0
/* 802D41D4 002D1114  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D41D8 002D1118  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D41DC 002D111C  7C 7F 1B 78 */	mr r31, r3
/* 802D41E0 002D1120  7F E4 FB 78 */	mr r4, r31
/* 802D41E4 002D1124  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802D41E8 002D1128  81 83 00 00 */	lwz r12, 0(r3)
/* 802D41EC 002D112C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D41F0 002D1130  7D 89 03 A6 */	mtctr r12
/* 802D41F4 002D1134  4E 80 04 21 */	bctrl 
/* 802D41F8 002D1138  38 7F 02 E4 */	addi r3, r31, 0x2e4
/* 802D41FC 002D113C  4B E6 44 31 */	bl update__10MouthSlotsFv
/* 802D4200 002D1140  7F E3 FB 78 */	mr r3, r31
/* 802D4204 002D1144  48 00 0E 35 */	bl updateFallTimer__Q34Game9OniKurage3ObjFv
/* 802D4208 002D1148  7F E3 FB 78 */	mr r3, r31
/* 802D420C 002D114C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D4210 002D1150  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802D4214 002D1154  7D 89 03 A6 */	mtctr r12
/* 802D4218 002D1158  4E 80 04 21 */	bctrl 
/* 802D421C 002D115C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D4220 002D1160  41 82 00 A0 */	beq .L_802D42C0
/* 802D4224 002D1164  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802D4228 002D1168  54 00 06 73 */	rlwinm. r0, r0, 0, 0x19, 0x19
/* 802D422C 002D116C  41 82 00 94 */	beq .L_802D42C0
/* 802D4230 002D1170  7F E3 FB 78 */	mr r3, r31
/* 802D4234 002D1174  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D4238 002D1178  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802D423C 002D117C  7D 89 03 A6 */	mtctr r12
/* 802D4240 002D1180  4E 80 04 21 */	bctrl 
/* 802D4244 002D1184  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D4248 002D1188  41 82 00 30 */	beq .L_802D4278
/* 802D424C 002D118C  7F E3 FB 78 */	mr r3, r31
/* 802D4250 002D1190  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D4254 002D1194  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802D4258 002D1198  7D 89 03 A6 */	mtctr r12
/* 802D425C 002D119C  4E 80 04 21 */	bctrl 
/* 802D4260 002D11A0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D4264 002D11A4  38 80 51 0B */	li r4, 0x510b
/* 802D4268 002D11A8  38 A0 00 00 */	li r5, 0
/* 802D426C 002D11AC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802D4270 002D11B0  7D 89 03 A6 */	mtctr r12
/* 802D4274 002D11B4  4E 80 04 21 */	bctrl 
.L_802D4278:
/* 802D4278 002D11B8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802D427C 002D11BC  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 802D4280 002D11C0  41 82 00 40 */	beq .L_802D42C0
/* 802D4284 002D11C4  C0 22 E6 40 */	lfs f1, lbl_8051C9A0@sda21(r2)
/* 802D4288 002D11C8  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 802D428C 002D11CC  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 802D4290 002D11D0  40 82 00 30 */	bne .L_802D42C0
/* 802D4294 002D11D4  7F E3 FB 78 */	mr r3, r31
/* 802D4298 002D11D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D429C 002D11DC  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802D42A0 002D11E0  7D 89 03 A6 */	mtctr r12
/* 802D42A4 002D11E4  4E 80 04 21 */	bctrl 
/* 802D42A8 002D11E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D42AC 002D11EC  38 80 59 0C */	li r4, 0x590c
/* 802D42B0 002D11F0  38 A0 00 00 */	li r5, 0
/* 802D42B4 002D11F4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802D42B8 002D11F8  7D 89 03 A6 */	mtctr r12
/* 802D42BC 002D11FC  4E 80 04 21 */	bctrl 
.L_802D42C0:
/* 802D42C0 002D1200  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D42C4 002D1204  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D42C8 002D1208  7C 08 03 A6 */	mtlr r0
/* 802D42CC 002D120C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D42D0 002D1210  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game9OniKurage3ObjFv

.fn doUpdateCommon__Q34Game9OniKurage3ObjFv, global
/* 802D42D4 002D1214  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D42D8 002D1218  7C 08 02 A6 */	mflr r0
/* 802D42DC 002D121C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D42E0 002D1220  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D42E4 002D1224  7C 7F 1B 78 */	mr r31, r3
/* 802D42E8 002D1228  4B E2 EC 2D */	bl doUpdateCommon__Q24Game9EnemyBaseFv
/* 802D42EC 002D122C  7F E3 FB 78 */	mr r3, r31
/* 802D42F0 002D1230  48 00 23 69 */	bl escapeCheckNavi__Q34Game9OniKurage3ObjFv
/* 802D42F4 002D1234  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D42F8 002D1238  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D42FC 002D123C  7C 08 03 A6 */	mtlr r0
/* 802D4300 002D1240  38 21 00 10 */	addi r1, r1, 0x10
/* 802D4304 002D1244  4E 80 00 20 */	blr 
.endfn doUpdateCommon__Q34Game9OniKurage3ObjFv

.fn doDirectDraw__Q34Game9OniKurage3ObjFR8Graphics, global
/* 802D4308 002D1248  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game9OniKurage3ObjFR8Graphics

.fn doDebugDraw__Q34Game9OniKurage3ObjFR8Graphics, global
/* 802D430C 002D124C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D4310 002D1250  7C 08 02 A6 */	mflr r0
/* 802D4314 002D1254  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D4318 002D1258  4B E3 1B 55 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802D431C 002D125C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D4320 002D1260  7C 08 03 A6 */	mtlr r0
/* 802D4324 002D1264  38 21 00 10 */	addi r1, r1, 0x10
/* 802D4328 002D1268  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game9OniKurage3ObjFR8Graphics

.fn setFSM__Q34Game9OniKurage3ObjFPQ34Game9OniKurage3FSM, global
/* 802D432C 002D126C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D4330 002D1270  7C 08 02 A6 */	mflr r0
/* 802D4334 002D1274  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D4338 002D1278  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D433C 002D127C  7C 7F 1B 78 */	mr r31, r3
/* 802D4340 002D1280  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802D4344 002D1284  7F E4 FB 78 */	mr r4, r31
/* 802D4348 002D1288  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802D434C 002D128C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D4350 002D1290  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D4354 002D1294  7D 89 03 A6 */	mtctr r12
/* 802D4358 002D1298  4E 80 04 21 */	bctrl 
/* 802D435C 002D129C  38 00 00 00 */	li r0, 0
/* 802D4360 002D12A0  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802D4364 002D12A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D4368 002D12A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D436C 002D12AC  7C 08 03 A6 */	mtlr r0
/* 802D4370 002D12B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D4374 002D12B4  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game9OniKurage3ObjFPQ34Game9OniKurage3FSM

.fn getShadowParam__Q34Game9OniKurage3ObjFRQ24Game11ShadowParam, global
/* 802D4378 002D12B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D437C 002D12BC  7C 08 02 A6 */	mflr r0
/* 802D4380 002D12C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D4384 002D12C4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802D4388 002D12C8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802D438C 002D12CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D4390 002D12D0  93 C1 00 08 */	stw r30, 8(r1)
/* 802D4394 002D12D4  7C 7E 1B 78 */	mr r30, r3
/* 802D4398 002D12D8  7C 9F 23 78 */	mr r31, r4
/* 802D439C 002D12DC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802D43A0 002D12E0  38 82 E6 48 */	addi r4, r2, lbl_8051C9A8@sda21
/* 802D43A4 002D12E4  48 16 AC 41 */	bl getJoint__Q28SysShape5ModelFPc
/* 802D43A8 002D12E8  48 15 54 F9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802D43AC 002D12EC  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802D43B0 002D12F0  7F E4 FB 78 */	mr r4, r31
/* 802D43B4 002D12F4  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802D43B8 002D12F8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802D43BC 002D12FC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802D43C0 002D1300  D0 3F 00 04 */	stfs f1, 4(r31)
/* 802D43C4 002D1304  D0 5F 00 08 */	stfs f2, 8(r31)
/* 802D43C8 002D1308  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802D43CC 002D130C  81 83 00 04 */	lwz r12, 4(r3)
/* 802D43D0 002D1310  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802D43D4 002D1314  7D 89 03 A6 */	mtctr r12
/* 802D43D8 002D1318  4E 80 04 21 */	bctrl 
/* 802D43DC 002D131C  7F C3 F3 78 */	mr r3, r30
/* 802D43E0 002D1320  FF E0 08 90 */	fmr f31, f1
/* 802D43E4 002D1324  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D43E8 002D1328  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802D43EC 002D132C  7D 89 03 A6 */	mtctr r12
/* 802D43F0 002D1330  4E 80 04 21 */	bctrl 
/* 802D43F4 002D1334  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D43F8 002D1338  41 82 00 14 */	beq .L_802D440C
/* 802D43FC 002D133C  C0 02 E6 50 */	lfs f0, lbl_8051C9B0@sda21(r2)
/* 802D4400 002D1340  EC 00 F8 2A */	fadds f0, f0, f31
/* 802D4404 002D1344  D0 1F 00 04 */	stfs f0, 4(r31)
/* 802D4408 002D1348  48 00 00 10 */	b .L_802D4418
.L_802D440C:
/* 802D440C 002D134C  C0 02 E6 54 */	lfs f0, lbl_8051C9B4@sda21(r2)
/* 802D4410 002D1350  EC 00 F8 2A */	fadds f0, f0, f31
/* 802D4414 002D1354  D0 1F 00 04 */	stfs f0, 4(r31)
.L_802D4418:
/* 802D4418 002D1358  C0 22 E6 40 */	lfs f1, lbl_8051C9A0@sda21(r2)
/* 802D441C 002D135C  7F C3 F3 78 */	mr r3, r30
/* 802D4420 002D1360  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D4424 002D1364  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802D4428 002D1368  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802D442C 002D136C  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802D4430 002D1370  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D4434 002D1374  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802D4438 002D1378  7D 89 03 A6 */	mtctr r12
/* 802D443C 002D137C  4E 80 04 21 */	bctrl 
/* 802D4440 002D1380  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D4444 002D1384  41 82 00 10 */	beq .L_802D4454
/* 802D4448 002D1388  C0 02 E6 5C */	lfs f0, lbl_8051C9BC@sda21(r2)
/* 802D444C 002D138C  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802D4450 002D1390  48 00 00 0C */	b .L_802D445C
.L_802D4454:
/* 802D4454 002D1394  C0 02 E6 60 */	lfs f0, lbl_8051C9C0@sda21(r2)
/* 802D4458 002D1398  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802D445C:
/* 802D445C 002D139C  C0 02 E6 50 */	lfs f0, lbl_8051C9B0@sda21(r2)
/* 802D4460 002D13A0  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802D4464 002D13A4  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802D4468 002D13A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D446C 002D13AC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802D4470 002D13B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D4474 002D13B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D4478 002D13B8  7C 08 03 A6 */	mtlr r0
/* 802D447C 002D13BC  38 21 00 20 */	addi r1, r1, 0x20
/* 802D4480 002D13C0  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game9OniKurage3ObjFRQ24Game11ShadowParam

.fn damageCallBack__Q34Game9OniKurage3ObjFPQ24Game8CreaturefP8CollPart, global
/* 802D4484 002D13C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D4488 002D13C8  7C 08 02 A6 */	mflr r0
/* 802D448C 002D13CC  28 05 00 00 */	cmplwi r5, 0
/* 802D4490 002D13D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D4494 002D13D4  41 82 00 14 */	beq .L_802D44A8
/* 802D4498 002D13D8  C0 42 E6 58 */	lfs f2, lbl_8051C9B8@sda21(r2)
/* 802D449C 002D13DC  4B E3 1B 91 */	bl addDamage__Q24Game9EnemyBaseFff
/* 802D44A0 002D13E0  38 60 00 01 */	li r3, 1
/* 802D44A4 002D13E4  48 00 00 08 */	b .L_802D44AC
.L_802D44A8:
/* 802D44A8 002D13E8  38 60 00 00 */	li r3, 0
.L_802D44AC:
/* 802D44AC 002D13EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D44B0 002D13F0  7C 08 03 A6 */	mtlr r0
/* 802D44B4 002D13F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D44B8 002D13F8  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game9OniKurage3ObjFPQ24Game8CreaturefP8CollPart

.fn doStartStoneState__Q34Game9OniKurage3ObjFv, global
/* 802D44BC 002D13FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D44C0 002D1400  7C 08 02 A6 */	mflr r0
/* 802D44C4 002D1404  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D44C8 002D1408  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D44CC 002D140C  7C 7F 1B 78 */	mr r31, r3
/* 802D44D0 002D1410  4B E2 EA 25 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802D44D4 002D1414  7F E3 FB 78 */	mr r3, r31
/* 802D44D8 002D1418  48 00 27 05 */	bl finishEyeBodyEffect__Q34Game9OniKurage3ObjFv
/* 802D44DC 002D141C  7F E3 FB 78 */	mr r3, r31
/* 802D44E0 002D1420  48 00 27 9D */	bl finishHireEffect__Q34Game9OniKurage3ObjFv
/* 802D44E4 002D1424  7F E3 FB 78 */	mr r3, r31
/* 802D44E8 002D1428  48 00 28 61 */	bl finishSuckEffect__Q34Game9OniKurage3ObjFv
/* 802D44EC 002D142C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D44F0 002D1430  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D44F4 002D1434  7C 08 03 A6 */	mtlr r0
/* 802D44F8 002D1438  38 21 00 10 */	addi r1, r1, 0x10
/* 802D44FC 002D143C  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game9OniKurage3ObjFv

.fn doFinishStoneState__Q34Game9OniKurage3ObjFv, global
/* 802D4500 002D1440  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D4504 002D1444  7C 08 02 A6 */	mflr r0
/* 802D4508 002D1448  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D450C 002D144C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D4510 002D1450  7C 7F 1B 78 */	mr r31, r3
/* 802D4514 002D1454  4B E2 E9 F5 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802D4518 002D1458  7F E3 FB 78 */	mr r3, r31
/* 802D451C 002D145C  48 00 26 39 */	bl startEyeHireBodyEffect__Q34Game9OniKurage3ObjFv
/* 802D4520 002D1460  7F E3 FB 78 */	mr r3, r31
/* 802D4524 002D1464  4B E3 2E D1 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802D4528 002D1468  2C 03 00 01 */	cmpwi r3, 1
/* 802D452C 002D146C  41 80 00 0C */	blt .L_802D4538
/* 802D4530 002D1470  2C 03 00 06 */	cmpwi r3, 6
/* 802D4534 002D1474  40 81 00 14 */	ble .L_802D4548
.L_802D4538:
/* 802D4538 002D1478  2C 03 00 09 */	cmpwi r3, 9
/* 802D453C 002D147C  41 80 00 68 */	blt .L_802D45A4
/* 802D4540 002D1480  2C 03 00 0A */	cmpwi r3, 0xa
/* 802D4544 002D1484  41 81 00 60 */	bgt .L_802D45A4
.L_802D4548:
/* 802D4548 002D1488  80 1F 02 EC */	lwz r0, 0x2ec(r31)
/* 802D454C 002D148C  28 00 00 00 */	cmplwi r0, 0
/* 802D4550 002D1490  40 82 00 10 */	bne .L_802D4560
/* 802D4554 002D1494  80 1F 02 F0 */	lwz r0, 0x2f0(r31)
/* 802D4558 002D1498  28 00 00 00 */	cmplwi r0, 0
/* 802D455C 002D149C  41 82 00 28 */	beq .L_802D4584
.L_802D4560:
/* 802D4560 002D14A0  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802D4564 002D14A4  7F E4 FB 78 */	mr r4, r31
/* 802D4568 002D14A8  38 A0 00 0B */	li r5, 0xb
/* 802D456C 002D14AC  38 C0 00 00 */	li r6, 0
/* 802D4570 002D14B0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D4574 002D14B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D4578 002D14B8  7D 89 03 A6 */	mtctr r12
/* 802D457C 002D14BC  4E 80 04 21 */	bctrl 
/* 802D4580 002D14C0  48 00 00 24 */	b .L_802D45A4
.L_802D4584:
/* 802D4584 002D14C4  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802D4588 002D14C8  7F E4 FB 78 */	mr r4, r31
/* 802D458C 002D14CC  38 A0 00 09 */	li r5, 9
/* 802D4590 002D14D0  38 C0 00 00 */	li r6, 0
/* 802D4594 002D14D4  81 83 00 00 */	lwz r12, 0(r3)
/* 802D4598 002D14D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D459C 002D14DC  7D 89 03 A6 */	mtctr r12
/* 802D45A0 002D14E0  4E 80 04 21 */	bctrl 
.L_802D45A4:
/* 802D45A4 002D14E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D45A8 002D14E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D45AC 002D14EC  7C 08 03 A6 */	mtlr r0
/* 802D45B0 002D14F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D45B4 002D14F4  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game9OniKurage3ObjFv

.fn doStartWaitingBirthTypeDrop__Q34Game9OniKurage3ObjFv, global
/* 802D45B8 002D14F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D45BC 002D14FC  7C 08 02 A6 */	mflr r0
/* 802D45C0 002D1500  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D45C4 002D1504  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D45C8 002D1508  7C 7F 1B 78 */	mr r31, r3
/* 802D45CC 002D150C  4B E3 33 CD */	bl doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 802D45D0 002D1510  7F E3 FB 78 */	mr r3, r31
/* 802D45D4 002D1514  48 00 29 75 */	bl effectDrawOff__Q34Game9OniKurage3ObjFv
/* 802D45D8 002D1518  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D45DC 002D151C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D45E0 002D1520  7C 08 03 A6 */	mtlr r0
/* 802D45E4 002D1524  38 21 00 10 */	addi r1, r1, 0x10
/* 802D45E8 002D1528  4E 80 00 20 */	blr 
.endfn doStartWaitingBirthTypeDrop__Q34Game9OniKurage3ObjFv

.fn doFinishWaitingBirthTypeDrop__Q34Game9OniKurage3ObjFv, global
/* 802D45EC 002D152C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D45F0 002D1530  7C 08 02 A6 */	mflr r0
/* 802D45F4 002D1534  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D45F8 002D1538  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D45FC 002D153C  7C 7F 1B 78 */	mr r31, r3
/* 802D4600 002D1540  4B E3 33 C9 */	bl doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 802D4604 002D1544  7F E3 FB 78 */	mr r3, r31
/* 802D4608 002D1548  48 00 28 8D */	bl effectDrawOn__Q34Game9OniKurage3ObjFv
/* 802D460C 002D154C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D4610 002D1550  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D4614 002D1554  7C 08 03 A6 */	mtlr r0
/* 802D4618 002D1558  38 21 00 10 */	addi r1, r1, 0x10
/* 802D461C 002D155C  4E 80 00 20 */	blr 
.endfn doFinishWaitingBirthTypeDrop__Q34Game9OniKurage3ObjFv

.fn doStartMovie__Q34Game9OniKurage3ObjFv, global
/* 802D4620 002D1560  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D4624 002D1564  7C 08 02 A6 */	mflr r0
/* 802D4628 002D1568  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D462C 002D156C  48 00 29 1D */	bl effectDrawOff__Q34Game9OniKurage3ObjFv
/* 802D4630 002D1570  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D4634 002D1574  7C 08 03 A6 */	mtlr r0
/* 802D4638 002D1578  38 21 00 10 */	addi r1, r1, 0x10
/* 802D463C 002D157C  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game9OniKurage3ObjFv

.fn doEndMovie__Q34Game9OniKurage3ObjFv, global
/* 802D4640 002D1580  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D4644 002D1584  7C 08 02 A6 */	mflr r0
/* 802D4648 002D1588  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D464C 002D158C  48 00 28 49 */	bl effectDrawOn__Q34Game9OniKurage3ObjFv
/* 802D4650 002D1590  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D4654 002D1594  7C 08 03 A6 */	mtlr r0
/* 802D4658 002D1598  38 21 00 10 */	addi r1, r1, 0x10
/* 802D465C 002D159C  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game9OniKurage3ObjFv

.fn initMouthSlots__Q34Game9OniKurage3ObjFv, global
/* 802D4660 002D15A0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D4664 002D15A4  7C 08 02 A6 */	mflr r0
/* 802D4668 002D15A8  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D466C 002D15AC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802D4670 002D15B0  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802D4674 002D15B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D4678 002D15B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802D467C 002D15BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802D4680 002D15C0  93 81 00 10 */	stw r28, 0x10(r1)
/* 802D4684 002D15C4  7C 7C 1B 78 */	mr r28, r3
/* 802D4688 002D15C8  38 80 00 02 */	li r4, 2
/* 802D468C 002D15CC  38 7C 02 E4 */	addi r3, r28, 0x2e4
/* 802D4690 002D15D0  4B E6 3E C9 */	bl alloc__10MouthSlotsFi
/* 802D4694 002D15D4  80 BC 01 74 */	lwz r5, 0x174(r28)
/* 802D4698 002D15D8  38 7C 02 E4 */	addi r3, r28, 0x2e4
/* 802D469C 002D15DC  38 80 00 00 */	li r4, 0
/* 802D46A0 002D15E0  38 C2 E6 64 */	addi r6, r2, lbl_8051C9C4@sda21
/* 802D46A4 002D15E4  4B E6 3F ED */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802D46A8 002D15E8  80 BC 01 74 */	lwz r5, 0x174(r28)
/* 802D46AC 002D15EC  38 7C 02 E4 */	addi r3, r28, 0x2e4
/* 802D46B0 002D15F0  38 80 00 01 */	li r4, 1
/* 802D46B4 002D15F4  38 C2 E6 64 */	addi r6, r2, lbl_8051C9C4@sda21
/* 802D46B8 002D15F8  4B E6 3F D9 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802D46BC 002D15FC  C3 E2 E6 58 */	lfs f31, lbl_8051C9B8@sda21(r2)
/* 802D46C0 002D1600  3B A0 00 00 */	li r29, 0
/* 802D46C4 002D1604  3B C2 E6 30 */	addi r30, r2, "cDefaultKamuJointOffset__Q34Game9OniKurage23@unnamed@OniKurage_cpp@"@sda21
/* 802D46C8 002D1608  3B E0 00 01 */	li r31, 1
/* 802D46CC 002D160C  48 00 00 28 */	b .L_802D46F4
.L_802D46D0:
/* 802D46D0 002D1610  7F A4 EB 78 */	mr r4, r29
/* 802D46D4 002D1614  38 7C 02 E4 */	addi r3, r28, 0x2e4
/* 802D46D8 002D1618  4B E6 40 A1 */	bl getSlot__10MouthSlotsFi
/* 802D46DC 002D161C  9B E3 00 6C */	stb r31, 0x6c(r3)
/* 802D46E0 002D1620  3B BD 00 01 */	addi r29, r29, 1
/* 802D46E4 002D1624  C0 1E 00 00 */	lfs f0, 0(r30)
/* 802D46E8 002D1628  3B DE 00 04 */	addi r30, r30, 4
/* 802D46EC 002D162C  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 802D46F0 002D1630  D0 03 00 20 */	stfs f0, 0x20(r3)
.L_802D46F4:
/* 802D46F4 002D1634  80 1C 02 E4 */	lwz r0, 0x2e4(r28)
/* 802D46F8 002D1638  7C 1D 00 00 */	cmpw r29, r0
/* 802D46FC 002D163C  41 80 FF D4 */	blt .L_802D46D0
/* 802D4700 002D1640  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802D4704 002D1644  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D4708 002D1648  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802D470C 002D164C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D4710 002D1650  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802D4714 002D1654  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802D4718 002D1658  83 81 00 10 */	lwz r28, 0x10(r1)
/* 802D471C 002D165C  7C 08 03 A6 */	mtlr r0
/* 802D4720 002D1660  38 21 00 30 */	addi r1, r1, 0x30
/* 802D4724 002D1664  4E 80 00 20 */	blr 
.endfn initMouthSlots__Q34Game9OniKurage3ObjFv

.fn setHeightVelocity__Q34Game9OniKurage3ObjFff, global
/* 802D4728 002D1668  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D472C 002D166C  7C 08 02 A6 */	mflr r0
/* 802D4730 002D1670  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D4734 002D1674  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802D4738 002D1678  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802D473C 002D167C  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 802D4740 002D1680  F3 C1 00 18 */	psq_st f30, 24(r1), 0, qr0
/* 802D4744 002D1684  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D4748 002D1688  7C 7F 1B 78 */	mr r31, r3
/* 802D474C 002D168C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802D4750 002D1690  FF C0 08 90 */	fmr f30, f1
/* 802D4754 002D1694  38 9F 01 8C */	addi r4, r31, 0x18c
/* 802D4758 002D1698  81 83 00 04 */	lwz r12, 4(r3)
/* 802D475C 002D169C  FF E0 10 90 */	fmr f31, f2
/* 802D4760 002D16A0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802D4764 002D16A4  7D 89 03 A6 */	mtctr r12
/* 802D4768 002D16A8  4E 80 04 21 */	bctrl 
/* 802D476C 002D16AC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802D4770 002D16B0  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802D4774 002D16B4  C0 43 08 1C */	lfs f2, 0x81c(r3)
/* 802D4778 002D16B8  C0 63 08 44 */	lfs f3, 0x844(r3)
/* 802D477C 002D16BC  EC 5E 10 2A */	fadds f2, f30, f2
/* 802D4780 002D16C0  EC 7F 18 2A */	fadds f3, f31, f3
/* 802D4784 002D16C4  EC 41 10 2A */	fadds f2, f1, f2
/* 802D4788 002D16C8  EC 02 00 28 */	fsubs f0, f2, f0
/* 802D478C 002D16CC  EC 03 00 32 */	fmuls f0, f3, f0
/* 802D4790 002D16D0  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 802D4794 002D16D4  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802D4798 002D16D8  EC 20 08 28 */	fsubs f1, f0, f1
/* 802D479C 002D16DC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802D47A0 002D16E0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802D47A4 002D16E4  E3 C1 00 18 */	psq_l f30, 24(r1), 0, qr0
/* 802D47A8 002D16E8  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 802D47AC 002D16EC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D47B0 002D16F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D47B4 002D16F4  7C 08 03 A6 */	mtlr r0
/* 802D47B8 002D16F8  38 21 00 30 */	addi r1, r1, 0x30
/* 802D47BC 002D16FC  4E 80 00 20 */	blr 
.endfn setHeightVelocity__Q34Game9OniKurage3ObjFff

.fn setRandTarget__Q34Game9OniKurage3ObjFv, global
/* 802D47C0 002D1700  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 802D47C4 002D1704  7C 08 02 A6 */	mflr r0
/* 802D47C8 002D1708  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 802D47CC 002D170C  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 802D47D0 002D1710  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 802D47D4 002D1714  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 802D47D8 002D1718  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 802D47DC 002D171C  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 802D47E0 002D1720  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 802D47E4 002D1724  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 802D47E8 002D1728  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 802D47EC 002D172C  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 802D47F0 002D1730  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 802D47F4 002D1734  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802D47F8 002D1738  7C 7F 1B 78 */	mr r31, r3
/* 802D47FC 002D173C  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802D4800 002D1740  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 802D4804 002D1744  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802D4808 002D1748  EF 61 00 28 */	fsubs f27, f1, f0
/* 802D480C 002D174C  4B DF 4D 95 */	bl rand
/* 802D4810 002D1750  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802D4814 002D1754  3C 00 43 30 */	lis r0, 0x4330
/* 802D4818 002D1758  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802D481C 002D175C  7F E4 FB 78 */	mr r4, r31
/* 802D4820 002D1760  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D4824 002D1764  38 61 00 08 */	addi r3, r1, 8
/* 802D4828 002D1768  90 01 00 18 */	stw r0, 0x18(r1)
/* 802D482C 002D176C  C8 22 E6 80 */	lfd f1, lbl_8051C9E0@sda21(r2)
/* 802D4830 002D1770  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 802D4834 002D1774  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D4838 002D1778  EC 40 08 28 */	fsubs f2, f0, f1
/* 802D483C 002D177C  C0 22 E6 6C */	lfs f1, lbl_8051C9CC@sda21(r2)
/* 802D4840 002D1780  C0 05 03 84 */	lfs f0, 0x384(r5)
/* 802D4844 002D1784  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D4848 002D1788  EC 5B 00 B2 */	fmuls f2, f27, f2
/* 802D484C 002D178C  EC 22 08 24 */	fdivs f1, f2, f1
/* 802D4850 002D1790  EF 80 08 2A */	fadds f28, f0, f1
/* 802D4854 002D1794  7D 89 03 A6 */	mtctr r12
/* 802D4858 002D1798  4E 80 04 21 */	bctrl 
/* 802D485C 002D179C  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 802D4860 002D17A0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802D4864 002D17A4  C0 21 00 08 */	lfs f1, 8(r1)
/* 802D4868 002D17A8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802D486C 002D17AC  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 802D4870 002D17B0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802D4874 002D17B4  EC 21 F8 28 */	fsubs f1, f1, f31
/* 802D4878 002D17B8  C3 DF 01 9C */	lfs f30, 0x19c(r31)
/* 802D487C 002D17BC  EC 40 E8 28 */	fsubs f2, f0, f29
/* 802D4880 002D17C0  4B D6 08 89 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802D4884 002D17C4  FF 60 08 90 */	fmr f27, f1
/* 802D4888 002D17C8  4B DF 4D 19 */	bl rand
/* 802D488C 002D17CC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802D4890 002D17D0  3C 00 43 30 */	lis r0, 0x4330
/* 802D4894 002D17D4  90 61 00 24 */	stw r3, 0x24(r1)
/* 802D4898 002D17D8  C8 42 E6 80 */	lfd f2, lbl_8051C9E0@sda21(r2)
/* 802D489C 002D17DC  90 01 00 20 */	stw r0, 0x20(r1)
/* 802D48A0 002D17E0  C0 62 E6 70 */	lfs f3, lbl_8051C9D0@sda21(r2)
/* 802D48A4 002D17E4  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 802D48A8 002D17E8  C0 22 E6 6C */	lfs f1, lbl_8051C9CC@sda21(r2)
/* 802D48AC 002D17EC  EC 80 10 28 */	fsubs f4, f0, f2
/* 802D48B0 002D17F0  C0 42 E6 74 */	lfs f2, lbl_8051C9D4@sda21(r2)
/* 802D48B4 002D17F4  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D48B8 002D17F8  EC 63 01 32 */	fmuls f3, f3, f4
/* 802D48BC 002D17FC  EC 23 08 24 */	fdivs f1, f3, f1
/* 802D48C0 002D1800  EC 3B 08 2A */	fadds f1, f27, f1
/* 802D48C4 002D1804  EC 62 08 2A */	fadds f3, f2, f1
/* 802D48C8 002D1808  FC 20 18 90 */	fmr f1, f3
/* 802D48CC 002D180C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802D48D0 002D1810  40 80 00 08 */	bge .L_802D48D8
/* 802D48D4 002D1814  FC 20 18 50 */	fneg f1, f3
.L_802D48D8:
/* 802D48D8 002D1818  C0 42 E6 78 */	lfs f2, lbl_8051C9D8@sda21(r2)
/* 802D48DC 002D181C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802D48E0 002D1820  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D48E4 002D1824  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802D48E8 002D1828  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802D48EC 002D182C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802D48F0 002D1830  FC 00 08 1E */	fctiwz f0, f1
/* 802D48F4 002D1834  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802D48F8 002D1838  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802D48FC 002D183C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802D4900 002D1840  7C 64 02 14 */	add r3, r4, r0
/* 802D4904 002D1844  C0 03 00 04 */	lfs f0, 4(r3)
/* 802D4908 002D1848  EC 3C E8 3A */	fmadds f1, f28, f0, f29
/* 802D490C 002D184C  40 80 00 28 */	bge .L_802D4934
/* 802D4910 002D1850  C0 02 E6 7C */	lfs f0, lbl_8051C9DC@sda21(r2)
/* 802D4914 002D1854  EC 03 00 32 */	fmuls f0, f3, f0
/* 802D4918 002D1858  FC 00 00 1E */	fctiwz f0, f0
/* 802D491C 002D185C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802D4920 002D1860  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D4924 002D1864  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802D4928 002D1868  7C 04 04 2E */	lfsx f0, r4, r0
/* 802D492C 002D186C  FC 00 00 50 */	fneg f0, f0
/* 802D4930 002D1870  48 00 00 1C */	b .L_802D494C
.L_802D4934:
/* 802D4934 002D1874  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802D4938 002D1878  FC 00 00 1E */	fctiwz f0, f0
/* 802D493C 002D187C  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 802D4940 002D1880  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 802D4944 002D1884  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802D4948 002D1888  7C 04 04 2E */	lfsx f0, r4, r0
.L_802D494C:
/* 802D494C 002D188C  EC 1C F8 3A */	fmadds f0, f28, f0, f31
/* 802D4950 002D1890  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802D4954 002D1894  D3 DF 02 D4 */	stfs f30, 0x2d4(r31)
/* 802D4958 002D1898  D0 3F 02 D8 */	stfs f1, 0x2d8(r31)
/* 802D495C 002D189C  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 802D4960 002D18A0  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 802D4964 002D18A4  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 802D4968 002D18A8  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 802D496C 002D18AC  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 802D4970 002D18B0  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 802D4974 002D18B4  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 802D4978 002D18B8  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 802D497C 002D18BC  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 802D4980 002D18C0  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 802D4984 002D18C4  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 802D4988 002D18C8  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802D498C 002D18CC  7C 08 03 A6 */	mtlr r0
/* 802D4990 002D18D0  38 21 00 A0 */	addi r1, r1, 0xa0
/* 802D4994 002D18D4  4E 80 00 20 */	blr 
.endfn setRandTarget__Q34Game9OniKurage3ObjFv

.fn getMovePitchOffset__Q34Game9OniKurage3ObjFv, global
/* 802D4998 002D18D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D499C 002D18DC  C0 62 E6 70 */	lfs f3, lbl_8051C9D0@sda21(r2)
/* 802D49A0 002D18E0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802D49A4 002D18E4  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 802D49A8 002D18E8  C0 44 00 54 */	lfs f2, 0x54(r4)
/* 802D49AC 002D18EC  C0 02 E6 88 */	lfs f0, lbl_8051C9E8@sda21(r2)
/* 802D49B0 002D18F0  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 802D49B4 002D18F4  D0 23 02 C8 */	stfs f1, 0x2c8(r3)
/* 802D49B8 002D18F8  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 802D49BC 002D18FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D49C0 002D1900  40 81 00 0C */	ble .L_802D49CC
/* 802D49C4 002D1904  EC 01 00 28 */	fsubs f0, f1, f0
/* 802D49C8 002D1908  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
.L_802D49CC:
/* 802D49CC 002D190C  C0 43 02 C8 */	lfs f2, 0x2c8(r3)
/* 802D49D0 002D1910  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D49D4 002D1914  C0 22 E6 8C */	lfs f1, lbl_8051C9EC@sda21(r2)
/* 802D49D8 002D1918  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802D49DC 002D191C  40 80 00 30 */	bge .L_802D4A0C
/* 802D49E0 002D1920  C0 02 E6 7C */	lfs f0, lbl_8051C9DC@sda21(r2)
/* 802D49E4 002D1924  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802D49E8 002D1928  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802D49EC 002D192C  EC 02 00 32 */	fmuls f0, f2, f0
/* 802D49F0 002D1930  FC 00 00 1E */	fctiwz f0, f0
/* 802D49F4 002D1934  D8 01 00 08 */	stfd f0, 8(r1)
/* 802D49F8 002D1938  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802D49FC 002D193C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802D4A00 002D1940  7C 03 04 2E */	lfsx f0, r3, r0
/* 802D4A04 002D1944  FC 00 00 50 */	fneg f0, f0
/* 802D4A08 002D1948  48 00 00 28 */	b .L_802D4A30
.L_802D4A0C:
/* 802D4A0C 002D194C  C0 02 E6 78 */	lfs f0, lbl_8051C9D8@sda21(r2)
/* 802D4A10 002D1950  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802D4A14 002D1954  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802D4A18 002D1958  EC 02 00 32 */	fmuls f0, f2, f0
/* 802D4A1C 002D195C  FC 00 00 1E */	fctiwz f0, f0
/* 802D4A20 002D1960  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 802D4A24 002D1964  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D4A28 002D1968  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802D4A2C 002D196C  7C 03 04 2E */	lfsx f0, r3, r0
.L_802D4A30:
/* 802D4A30 002D1970  EC 21 00 32 */	fmuls f1, f1, f0
/* 802D4A34 002D1974  38 21 00 20 */	addi r1, r1, 0x20
/* 802D4A38 002D1978  4E 80 00 20 */	blr 
.endfn getMovePitchOffset__Q34Game9OniKurage3ObjFv

.fn getAttackPitchOffset__Q34Game9OniKurage3ObjFv, global
/* 802D4A3C 002D197C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802D4A40 002D1980  7C 08 02 A6 */	mflr r0
/* 802D4A44 002D1984  3C 80 80 49 */	lis r4, lbl_8048C0DC@ha
/* 802D4A48 002D1988  3C A0 80 49 */	lis r5, lbl_8048C0C0@ha
/* 802D4A4C 002D198C  90 01 00 64 */	stw r0, 0x64(r1)
/* 802D4A50 002D1990  39 44 C0 DC */	addi r10, r4, lbl_8048C0DC@l
/* 802D4A54 002D1994  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 802D4A58 002D1998  87 65 C0 C0 */	lwzu r27, lbl_8048C0C0@l(r5)
/* 802D4A5C 002D199C  81 2A 00 00 */	lwz r9, 0(r10)
/* 802D4A60 002D19A0  83 85 00 04 */	lwz r28, 4(r5)
/* 802D4A64 002D19A4  83 A5 00 08 */	lwz r29, 8(r5)
/* 802D4A68 002D19A8  83 C5 00 0C */	lwz r30, 0xc(r5)
/* 802D4A6C 002D19AC  83 E5 00 10 */	lwz r31, 0x10(r5)
/* 802D4A70 002D19B0  81 85 00 14 */	lwz r12, 0x14(r5)
/* 802D4A74 002D19B4  81 65 00 18 */	lwz r11, 0x18(r5)
/* 802D4A78 002D19B8  81 0A 00 04 */	lwz r8, 4(r10)
/* 802D4A7C 002D19BC  80 EA 00 08 */	lwz r7, 8(r10)
/* 802D4A80 002D19C0  80 CA 00 0C */	lwz r6, 0xc(r10)
/* 802D4A84 002D19C4  80 AA 00 10 */	lwz r5, 0x10(r10)
/* 802D4A88 002D19C8  80 8A 00 14 */	lwz r4, 0x14(r10)
/* 802D4A8C 002D19CC  80 0A 00 18 */	lwz r0, 0x18(r10)
/* 802D4A90 002D19D0  93 61 00 24 */	stw r27, 0x24(r1)
/* 802D4A94 002D19D4  93 81 00 28 */	stw r28, 0x28(r1)
/* 802D4A98 002D19D8  93 A1 00 2C */	stw r29, 0x2c(r1)
/* 802D4A9C 002D19DC  93 C1 00 30 */	stw r30, 0x30(r1)
/* 802D4AA0 002D19E0  93 E1 00 34 */	stw r31, 0x34(r1)
/* 802D4AA4 002D19E4  91 81 00 38 */	stw r12, 0x38(r1)
/* 802D4AA8 002D19E8  91 61 00 3C */	stw r11, 0x3c(r1)
/* 802D4AAC 002D19EC  91 21 00 08 */	stw r9, 8(r1)
/* 802D4AB0 002D19F0  91 01 00 0C */	stw r8, 0xc(r1)
/* 802D4AB4 002D19F4  90 E1 00 10 */	stw r7, 0x10(r1)
/* 802D4AB8 002D19F8  90 C1 00 14 */	stw r6, 0x14(r1)
/* 802D4ABC 002D19FC  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802D4AC0 002D1A00  90 81 00 1C */	stw r4, 0x1c(r1)
/* 802D4AC4 002D1A04  90 01 00 20 */	stw r0, 0x20(r1)
/* 802D4AC8 002D1A08  4B E3 07 A5 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802D4ACC 002D1A0C  38 A1 00 24 */	addi r5, r1, 0x24
/* 802D4AD0 002D1A10  38 C1 00 08 */	addi r6, r1, 8
/* 802D4AD4 002D1A14  38 00 00 02 */	li r0, 2
/* 802D4AD8 002D1A18  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D4ADC 002D1A1C  7C A4 2B 78 */	mr r4, r5
/* 802D4AE0 002D1A20  7C C3 33 78 */	mr r3, r6
/* 802D4AE4 002D1A24  C0 62 E6 58 */	lfs f3, lbl_8051C9B8@sda21(r2)
/* 802D4AE8 002D1A28  38 E0 00 00 */	li r7, 0
/* 802D4AEC 002D1A2C  7C 09 03 A6 */	mtctr r0
.L_802D4AF0:
/* 802D4AF0 002D1A30  C0 45 00 00 */	lfs f2, 0(r5)
/* 802D4AF4 002D1A34  38 07 00 01 */	addi r0, r7, 1
/* 802D4AF8 002D1A38  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802D4AFC 002D1A3C  4C 41 13 82 */	cror 2, 1, 2
/* 802D4B00 002D1A40  40 82 00 34 */	bne .L_802D4B34
/* 802D4B04 002D1A44  54 00 10 3A */	slwi r0, r0, 2
/* 802D4B08 002D1A48  7C 84 04 2E */	lfsx f4, r4, r0
/* 802D4B0C 002D1A4C  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802D4B10 002D1A50  40 80 00 24 */	bge .L_802D4B34
/* 802D4B14 002D1A54  EC A1 10 28 */	fsubs f5, f1, f2
/* 802D4B18 002D1A58  C0 06 00 00 */	lfs f0, 0(r6)
/* 802D4B1C 002D1A5C  EC 44 10 28 */	fsubs f2, f4, f2
/* 802D4B20 002D1A60  7C 83 04 2E */	lfsx f4, r3, r0
/* 802D4B24 002D1A64  EC A5 10 24 */	fdivs f5, f5, f2
/* 802D4B28 002D1A68  EC 43 28 28 */	fsubs f2, f3, f5
/* 802D4B2C 002D1A6C  EC 02 00 32 */	fmuls f0, f2, f0
/* 802D4B30 002D1A70  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802D4B34:
/* 802D4B34 002D1A74  C0 45 00 04 */	lfs f2, 4(r5)
/* 802D4B38 002D1A78  38 07 00 02 */	addi r0, r7, 2
/* 802D4B3C 002D1A7C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802D4B40 002D1A80  4C 41 13 82 */	cror 2, 1, 2
/* 802D4B44 002D1A84  40 82 00 34 */	bne .L_802D4B78
/* 802D4B48 002D1A88  54 00 10 3A */	slwi r0, r0, 2
/* 802D4B4C 002D1A8C  7C 84 04 2E */	lfsx f4, r4, r0
/* 802D4B50 002D1A90  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802D4B54 002D1A94  40 80 00 24 */	bge .L_802D4B78
/* 802D4B58 002D1A98  EC A1 10 28 */	fsubs f5, f1, f2
/* 802D4B5C 002D1A9C  C0 06 00 04 */	lfs f0, 4(r6)
/* 802D4B60 002D1AA0  EC 44 10 28 */	fsubs f2, f4, f2
/* 802D4B64 002D1AA4  7C 83 04 2E */	lfsx f4, r3, r0
/* 802D4B68 002D1AA8  EC A5 10 24 */	fdivs f5, f5, f2
/* 802D4B6C 002D1AAC  EC 43 28 28 */	fsubs f2, f3, f5
/* 802D4B70 002D1AB0  EC 02 00 32 */	fmuls f0, f2, f0
/* 802D4B74 002D1AB4  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802D4B78:
/* 802D4B78 002D1AB8  C0 45 00 08 */	lfs f2, 8(r5)
/* 802D4B7C 002D1ABC  38 07 00 03 */	addi r0, r7, 3
/* 802D4B80 002D1AC0  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802D4B84 002D1AC4  4C 41 13 82 */	cror 2, 1, 2
/* 802D4B88 002D1AC8  40 82 00 34 */	bne .L_802D4BBC
/* 802D4B8C 002D1ACC  54 00 10 3A */	slwi r0, r0, 2
/* 802D4B90 002D1AD0  7C 84 04 2E */	lfsx f4, r4, r0
/* 802D4B94 002D1AD4  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802D4B98 002D1AD8  40 80 00 24 */	bge .L_802D4BBC
/* 802D4B9C 002D1ADC  EC A1 10 28 */	fsubs f5, f1, f2
/* 802D4BA0 002D1AE0  C0 06 00 08 */	lfs f0, 8(r6)
/* 802D4BA4 002D1AE4  EC 44 10 28 */	fsubs f2, f4, f2
/* 802D4BA8 002D1AE8  7C 83 04 2E */	lfsx f4, r3, r0
/* 802D4BAC 002D1AEC  EC A5 10 24 */	fdivs f5, f5, f2
/* 802D4BB0 002D1AF0  EC 43 28 28 */	fsubs f2, f3, f5
/* 802D4BB4 002D1AF4  EC 02 00 32 */	fmuls f0, f2, f0
/* 802D4BB8 002D1AF8  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802D4BBC:
/* 802D4BBC 002D1AFC  38 A5 00 0C */	addi r5, r5, 0xc
/* 802D4BC0 002D1B00  38 C6 00 0C */	addi r6, r6, 0xc
/* 802D4BC4 002D1B04  38 E7 00 03 */	addi r7, r7, 3
/* 802D4BC8 002D1B08  42 00 FF 28 */	bdnz .L_802D4AF0
/* 802D4BCC 002D1B0C  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 802D4BD0 002D1B10  FC 20 00 90 */	fmr f1, f0
/* 802D4BD4 002D1B14  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802D4BD8 002D1B18  7C 08 03 A6 */	mtlr r0
/* 802D4BDC 002D1B1C  38 21 00 60 */	addi r1, r1, 0x60
/* 802D4BE0 002D1B20  4E 80 00 20 */	blr 
.endfn getAttackPitchOffset__Q34Game9OniKurage3ObjFv

.fn getFlickPitchOffset__Q34Game9OniKurage3ObjFv, global
/* 802D4BE4 002D1B24  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802D4BE8 002D1B28  7C 08 02 A6 */	mflr r0
/* 802D4BEC 002D1B2C  3C 80 80 49 */	lis r4, lbl_8048C114@ha
/* 802D4BF0 002D1B30  3C A0 80 49 */	lis r5, lbl_8048C0F8@ha
/* 802D4BF4 002D1B34  90 01 00 64 */	stw r0, 0x64(r1)
/* 802D4BF8 002D1B38  39 44 C1 14 */	addi r10, r4, lbl_8048C114@l
/* 802D4BFC 002D1B3C  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 802D4C00 002D1B40  87 65 C0 F8 */	lwzu r27, lbl_8048C0F8@l(r5)
/* 802D4C04 002D1B44  81 2A 00 00 */	lwz r9, 0(r10)
/* 802D4C08 002D1B48  83 85 00 04 */	lwz r28, 4(r5)
/* 802D4C0C 002D1B4C  83 A5 00 08 */	lwz r29, 8(r5)
/* 802D4C10 002D1B50  83 C5 00 0C */	lwz r30, 0xc(r5)
/* 802D4C14 002D1B54  83 E5 00 10 */	lwz r31, 0x10(r5)
/* 802D4C18 002D1B58  81 85 00 14 */	lwz r12, 0x14(r5)
/* 802D4C1C 002D1B5C  81 65 00 18 */	lwz r11, 0x18(r5)
/* 802D4C20 002D1B60  81 0A 00 04 */	lwz r8, 4(r10)
/* 802D4C24 002D1B64  80 EA 00 08 */	lwz r7, 8(r10)
/* 802D4C28 002D1B68  80 CA 00 0C */	lwz r6, 0xc(r10)
/* 802D4C2C 002D1B6C  80 AA 00 10 */	lwz r5, 0x10(r10)
/* 802D4C30 002D1B70  80 8A 00 14 */	lwz r4, 0x14(r10)
/* 802D4C34 002D1B74  80 0A 00 18 */	lwz r0, 0x18(r10)
/* 802D4C38 002D1B78  93 61 00 24 */	stw r27, 0x24(r1)
/* 802D4C3C 002D1B7C  93 81 00 28 */	stw r28, 0x28(r1)
/* 802D4C40 002D1B80  93 A1 00 2C */	stw r29, 0x2c(r1)
/* 802D4C44 002D1B84  93 C1 00 30 */	stw r30, 0x30(r1)
/* 802D4C48 002D1B88  93 E1 00 34 */	stw r31, 0x34(r1)
/* 802D4C4C 002D1B8C  91 81 00 38 */	stw r12, 0x38(r1)
/* 802D4C50 002D1B90  91 61 00 3C */	stw r11, 0x3c(r1)
/* 802D4C54 002D1B94  91 21 00 08 */	stw r9, 8(r1)
/* 802D4C58 002D1B98  91 01 00 0C */	stw r8, 0xc(r1)
/* 802D4C5C 002D1B9C  90 E1 00 10 */	stw r7, 0x10(r1)
/* 802D4C60 002D1BA0  90 C1 00 14 */	stw r6, 0x14(r1)
/* 802D4C64 002D1BA4  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802D4C68 002D1BA8  90 81 00 1C */	stw r4, 0x1c(r1)
/* 802D4C6C 002D1BAC  90 01 00 20 */	stw r0, 0x20(r1)
/* 802D4C70 002D1BB0  4B E3 05 FD */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802D4C74 002D1BB4  38 A1 00 24 */	addi r5, r1, 0x24
/* 802D4C78 002D1BB8  38 C1 00 08 */	addi r6, r1, 8
/* 802D4C7C 002D1BBC  38 00 00 02 */	li r0, 2
/* 802D4C80 002D1BC0  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D4C84 002D1BC4  7C A4 2B 78 */	mr r4, r5
/* 802D4C88 002D1BC8  7C C3 33 78 */	mr r3, r6
/* 802D4C8C 002D1BCC  C0 62 E6 58 */	lfs f3, lbl_8051C9B8@sda21(r2)
/* 802D4C90 002D1BD0  38 E0 00 00 */	li r7, 0
/* 802D4C94 002D1BD4  7C 09 03 A6 */	mtctr r0
.L_802D4C98:
/* 802D4C98 002D1BD8  C0 45 00 00 */	lfs f2, 0(r5)
/* 802D4C9C 002D1BDC  38 07 00 01 */	addi r0, r7, 1
/* 802D4CA0 002D1BE0  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802D4CA4 002D1BE4  4C 41 13 82 */	cror 2, 1, 2
/* 802D4CA8 002D1BE8  40 82 00 34 */	bne .L_802D4CDC
/* 802D4CAC 002D1BEC  54 00 10 3A */	slwi r0, r0, 2
/* 802D4CB0 002D1BF0  7C 84 04 2E */	lfsx f4, r4, r0
/* 802D4CB4 002D1BF4  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802D4CB8 002D1BF8  40 80 00 24 */	bge .L_802D4CDC
/* 802D4CBC 002D1BFC  EC A1 10 28 */	fsubs f5, f1, f2
/* 802D4CC0 002D1C00  C0 06 00 00 */	lfs f0, 0(r6)
/* 802D4CC4 002D1C04  EC 44 10 28 */	fsubs f2, f4, f2
/* 802D4CC8 002D1C08  7C 83 04 2E */	lfsx f4, r3, r0
/* 802D4CCC 002D1C0C  EC A5 10 24 */	fdivs f5, f5, f2
/* 802D4CD0 002D1C10  EC 43 28 28 */	fsubs f2, f3, f5
/* 802D4CD4 002D1C14  EC 02 00 32 */	fmuls f0, f2, f0
/* 802D4CD8 002D1C18  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802D4CDC:
/* 802D4CDC 002D1C1C  C0 45 00 04 */	lfs f2, 4(r5)
/* 802D4CE0 002D1C20  38 07 00 02 */	addi r0, r7, 2
/* 802D4CE4 002D1C24  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802D4CE8 002D1C28  4C 41 13 82 */	cror 2, 1, 2
/* 802D4CEC 002D1C2C  40 82 00 34 */	bne .L_802D4D20
/* 802D4CF0 002D1C30  54 00 10 3A */	slwi r0, r0, 2
/* 802D4CF4 002D1C34  7C 84 04 2E */	lfsx f4, r4, r0
/* 802D4CF8 002D1C38  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802D4CFC 002D1C3C  40 80 00 24 */	bge .L_802D4D20
/* 802D4D00 002D1C40  EC A1 10 28 */	fsubs f5, f1, f2
/* 802D4D04 002D1C44  C0 06 00 04 */	lfs f0, 4(r6)
/* 802D4D08 002D1C48  EC 44 10 28 */	fsubs f2, f4, f2
/* 802D4D0C 002D1C4C  7C 83 04 2E */	lfsx f4, r3, r0
/* 802D4D10 002D1C50  EC A5 10 24 */	fdivs f5, f5, f2
/* 802D4D14 002D1C54  EC 43 28 28 */	fsubs f2, f3, f5
/* 802D4D18 002D1C58  EC 02 00 32 */	fmuls f0, f2, f0
/* 802D4D1C 002D1C5C  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802D4D20:
/* 802D4D20 002D1C60  C0 45 00 08 */	lfs f2, 8(r5)
/* 802D4D24 002D1C64  38 07 00 03 */	addi r0, r7, 3
/* 802D4D28 002D1C68  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802D4D2C 002D1C6C  4C 41 13 82 */	cror 2, 1, 2
/* 802D4D30 002D1C70  40 82 00 34 */	bne .L_802D4D64
/* 802D4D34 002D1C74  54 00 10 3A */	slwi r0, r0, 2
/* 802D4D38 002D1C78  7C 84 04 2E */	lfsx f4, r4, r0
/* 802D4D3C 002D1C7C  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802D4D40 002D1C80  40 80 00 24 */	bge .L_802D4D64
/* 802D4D44 002D1C84  EC A1 10 28 */	fsubs f5, f1, f2
/* 802D4D48 002D1C88  C0 06 00 08 */	lfs f0, 8(r6)
/* 802D4D4C 002D1C8C  EC 44 10 28 */	fsubs f2, f4, f2
/* 802D4D50 002D1C90  7C 83 04 2E */	lfsx f4, r3, r0
/* 802D4D54 002D1C94  EC A5 10 24 */	fdivs f5, f5, f2
/* 802D4D58 002D1C98  EC 43 28 28 */	fsubs f2, f3, f5
/* 802D4D5C 002D1C9C  EC 02 00 32 */	fmuls f0, f2, f0
/* 802D4D60 002D1CA0  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802D4D64:
/* 802D4D64 002D1CA4  38 A5 00 0C */	addi r5, r5, 0xc
/* 802D4D68 002D1CA8  38 C6 00 0C */	addi r6, r6, 0xc
/* 802D4D6C 002D1CAC  38 E7 00 03 */	addi r7, r7, 3
/* 802D4D70 002D1CB0  42 00 FF 28 */	bdnz .L_802D4C98
/* 802D4D74 002D1CB4  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 802D4D78 002D1CB8  FC 20 00 90 */	fmr f1, f0
/* 802D4D7C 002D1CBC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802D4D80 002D1CC0  7C 08 03 A6 */	mtlr r0
/* 802D4D84 002D1CC4  38 21 00 60 */	addi r1, r1, 0x60
/* 802D4D88 002D1CC8  4E 80 00 20 */	blr 
.endfn getFlickPitchOffset__Q34Game9OniKurage3ObjFv

.fn getTakeOffPitchOffset__Q34Game9OniKurage3ObjFv, global
/* 802D4D8C 002D1CCC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802D4D90 002D1CD0  7C 08 02 A6 */	mflr r0
/* 802D4D94 002D1CD4  3C 80 80 49 */	lis r4, lbl_8048C144@ha
/* 802D4D98 002D1CD8  3C A0 80 49 */	lis r5, lbl_8048C130@ha
/* 802D4D9C 002D1CDC  90 01 00 44 */	stw r0, 0x44(r1)
/* 802D4DA0 002D1CE0  39 04 C1 44 */	addi r8, r4, lbl_8048C144@l
/* 802D4DA4 002D1CE4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802D4DA8 002D1CE8  87 E5 C1 30 */	lwzu r31, lbl_8048C130@l(r5)
/* 802D4DAC 002D1CEC  80 E8 00 00 */	lwz r7, 0(r8)
/* 802D4DB0 002D1CF0  81 85 00 04 */	lwz r12, 4(r5)
/* 802D4DB4 002D1CF4  81 65 00 08 */	lwz r11, 8(r5)
/* 802D4DB8 002D1CF8  81 45 00 0C */	lwz r10, 0xc(r5)
/* 802D4DBC 002D1CFC  81 25 00 10 */	lwz r9, 0x10(r5)
/* 802D4DC0 002D1D00  80 C8 00 04 */	lwz r6, 4(r8)
/* 802D4DC4 002D1D04  80 A8 00 08 */	lwz r5, 8(r8)
/* 802D4DC8 002D1D08  80 88 00 0C */	lwz r4, 0xc(r8)
/* 802D4DCC 002D1D0C  80 08 00 10 */	lwz r0, 0x10(r8)
/* 802D4DD0 002D1D10  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D4DD4 002D1D14  91 81 00 20 */	stw r12, 0x20(r1)
/* 802D4DD8 002D1D18  91 61 00 24 */	stw r11, 0x24(r1)
/* 802D4DDC 002D1D1C  91 41 00 28 */	stw r10, 0x28(r1)
/* 802D4DE0 002D1D20  91 21 00 2C */	stw r9, 0x2c(r1)
/* 802D4DE4 002D1D24  90 E1 00 08 */	stw r7, 8(r1)
/* 802D4DE8 002D1D28  90 C1 00 0C */	stw r6, 0xc(r1)
/* 802D4DEC 002D1D2C  90 A1 00 10 */	stw r5, 0x10(r1)
/* 802D4DF0 002D1D30  90 81 00 14 */	stw r4, 0x14(r1)
/* 802D4DF4 002D1D34  90 01 00 18 */	stw r0, 0x18(r1)
/* 802D4DF8 002D1D38  4B E3 04 75 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802D4DFC 002D1D3C  38 A1 00 1C */	addi r5, r1, 0x1c
/* 802D4E00 002D1D40  38 C1 00 08 */	addi r6, r1, 8
/* 802D4E04 002D1D44  38 00 00 02 */	li r0, 2
/* 802D4E08 002D1D48  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D4E0C 002D1D4C  7C A4 2B 78 */	mr r4, r5
/* 802D4E10 002D1D50  7C C3 33 78 */	mr r3, r6
/* 802D4E14 002D1D54  C0 62 E6 58 */	lfs f3, lbl_8051C9B8@sda21(r2)
/* 802D4E18 002D1D58  38 E0 00 00 */	li r7, 0
/* 802D4E1C 002D1D5C  7C 09 03 A6 */	mtctr r0
.L_802D4E20:
/* 802D4E20 002D1D60  C0 45 00 00 */	lfs f2, 0(r5)
/* 802D4E24 002D1D64  38 07 00 01 */	addi r0, r7, 1
/* 802D4E28 002D1D68  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802D4E2C 002D1D6C  4C 41 13 82 */	cror 2, 1, 2
/* 802D4E30 002D1D70  40 82 00 34 */	bne .L_802D4E64
/* 802D4E34 002D1D74  54 00 10 3A */	slwi r0, r0, 2
/* 802D4E38 002D1D78  7C 84 04 2E */	lfsx f4, r4, r0
/* 802D4E3C 002D1D7C  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802D4E40 002D1D80  40 80 00 24 */	bge .L_802D4E64
/* 802D4E44 002D1D84  EC A1 10 28 */	fsubs f5, f1, f2
/* 802D4E48 002D1D88  C0 06 00 00 */	lfs f0, 0(r6)
/* 802D4E4C 002D1D8C  EC 44 10 28 */	fsubs f2, f4, f2
/* 802D4E50 002D1D90  7C 83 04 2E */	lfsx f4, r3, r0
/* 802D4E54 002D1D94  EC A5 10 24 */	fdivs f5, f5, f2
/* 802D4E58 002D1D98  EC 43 28 28 */	fsubs f2, f3, f5
/* 802D4E5C 002D1D9C  EC 02 00 32 */	fmuls f0, f2, f0
/* 802D4E60 002D1DA0  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802D4E64:
/* 802D4E64 002D1DA4  C0 45 00 04 */	lfs f2, 4(r5)
/* 802D4E68 002D1DA8  38 07 00 02 */	addi r0, r7, 2
/* 802D4E6C 002D1DAC  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802D4E70 002D1DB0  4C 41 13 82 */	cror 2, 1, 2
/* 802D4E74 002D1DB4  40 82 00 34 */	bne .L_802D4EA8
/* 802D4E78 002D1DB8  54 00 10 3A */	slwi r0, r0, 2
/* 802D4E7C 002D1DBC  7C 84 04 2E */	lfsx f4, r4, r0
/* 802D4E80 002D1DC0  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802D4E84 002D1DC4  40 80 00 24 */	bge .L_802D4EA8
/* 802D4E88 002D1DC8  EC A1 10 28 */	fsubs f5, f1, f2
/* 802D4E8C 002D1DCC  C0 06 00 04 */	lfs f0, 4(r6)
/* 802D4E90 002D1DD0  EC 44 10 28 */	fsubs f2, f4, f2
/* 802D4E94 002D1DD4  7C 83 04 2E */	lfsx f4, r3, r0
/* 802D4E98 002D1DD8  EC A5 10 24 */	fdivs f5, f5, f2
/* 802D4E9C 002D1DDC  EC 43 28 28 */	fsubs f2, f3, f5
/* 802D4EA0 002D1DE0  EC 02 00 32 */	fmuls f0, f2, f0
/* 802D4EA4 002D1DE4  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802D4EA8:
/* 802D4EA8 002D1DE8  38 A5 00 08 */	addi r5, r5, 8
/* 802D4EAC 002D1DEC  38 C6 00 08 */	addi r6, r6, 8
/* 802D4EB0 002D1DF0  38 E7 00 02 */	addi r7, r7, 2
/* 802D4EB4 002D1DF4  42 00 FF 6C */	bdnz .L_802D4E20
/* 802D4EB8 002D1DF8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802D4EBC 002D1DFC  FC 20 00 90 */	fmr f1, f0
/* 802D4EC0 002D1E00  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802D4EC4 002D1E04  7C 08 03 A6 */	mtlr r0
/* 802D4EC8 002D1E08  38 21 00 40 */	addi r1, r1, 0x40
/* 802D4ECC 002D1E0C  4E 80 00 20 */	blr 
.endfn getTakeOffPitchOffset__Q34Game9OniKurage3ObjFv

.fn getFallPitchOffset__Q34Game9OniKurage3ObjFf, global
/* 802D4ED0 002D1E10  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802D4ED4 002D1E14  3C 80 80 49 */	lis r4, lbl_8048C158@ha
/* 802D4ED8 002D1E18  3C 60 80 49 */	lis r3, lbl_8048C178@ha
/* 802D4EDC 002D1E1C  C0 02 E6 90 */	lfs f0, lbl_8051C9F0@sda21(r2)
/* 802D4EE0 002D1E20  BE A1 00 54 */	stmw r21, 0x54(r1)
/* 802D4EE4 002D1E24  38 C4 C1 58 */	addi r6, r4, lbl_8048C158@l
/* 802D4EE8 002D1E28  38 A3 C1 78 */	addi r5, r3, lbl_8048C178@l
/* 802D4EEC 002D1E2C  3A E1 00 28 */	addi r23, r1, 0x28
/* 802D4EF0 002D1E30  3A C1 00 08 */	addi r22, r1, 8
/* 802D4EF4 002D1E34  EC C0 00 72 */	fmuls f6, f0, f1
/* 802D4EF8 002D1E38  38 00 00 02 */	li r0, 2
/* 802D4EFC 002D1E3C  7E E4 BB 78 */	mr r4, r23
/* 802D4F00 002D1E40  7E C3 B3 78 */	mr r3, r22
/* 802D4F04 002D1E44  3A A0 00 00 */	li r21, 0
/* 802D4F08 002D1E48  C0 22 E6 40 */	lfs f1, lbl_8051C9A0@sda21(r2)
/* 802D4F0C 002D1E4C  C0 42 E6 58 */	lfs f2, lbl_8051C9B8@sda21(r2)
/* 802D4F10 002D1E50  83 06 00 00 */	lwz r24, 0(r6)
/* 802D4F14 002D1E54  83 26 00 04 */	lwz r25, 4(r6)
/* 802D4F18 002D1E58  83 46 00 08 */	lwz r26, 8(r6)
/* 802D4F1C 002D1E5C  83 66 00 0C */	lwz r27, 0xc(r6)
/* 802D4F20 002D1E60  83 86 00 10 */	lwz r28, 0x10(r6)
/* 802D4F24 002D1E64  83 A6 00 14 */	lwz r29, 0x14(r6)
/* 802D4F28 002D1E68  83 C6 00 18 */	lwz r30, 0x18(r6)
/* 802D4F2C 002D1E6C  83 E6 00 1C */	lwz r31, 0x1c(r6)
/* 802D4F30 002D1E70  81 85 00 00 */	lwz r12, 0(r5)
/* 802D4F34 002D1E74  81 65 00 04 */	lwz r11, 4(r5)
/* 802D4F38 002D1E78  81 45 00 08 */	lwz r10, 8(r5)
/* 802D4F3C 002D1E7C  81 25 00 0C */	lwz r9, 0xc(r5)
/* 802D4F40 002D1E80  81 05 00 10 */	lwz r8, 0x10(r5)
/* 802D4F44 002D1E84  80 E5 00 14 */	lwz r7, 0x14(r5)
/* 802D4F48 002D1E88  80 C5 00 18 */	lwz r6, 0x18(r5)
/* 802D4F4C 002D1E8C  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 802D4F50 002D1E90  93 01 00 28 */	stw r24, 0x28(r1)
/* 802D4F54 002D1E94  93 21 00 2C */	stw r25, 0x2c(r1)
/* 802D4F58 002D1E98  93 41 00 30 */	stw r26, 0x30(r1)
/* 802D4F5C 002D1E9C  93 61 00 34 */	stw r27, 0x34(r1)
/* 802D4F60 002D1EA0  93 81 00 38 */	stw r28, 0x38(r1)
/* 802D4F64 002D1EA4  93 A1 00 3C */	stw r29, 0x3c(r1)
/* 802D4F68 002D1EA8  93 C1 00 40 */	stw r30, 0x40(r1)
/* 802D4F6C 002D1EAC  93 E1 00 44 */	stw r31, 0x44(r1)
/* 802D4F70 002D1EB0  91 81 00 08 */	stw r12, 8(r1)
/* 802D4F74 002D1EB4  91 61 00 0C */	stw r11, 0xc(r1)
/* 802D4F78 002D1EB8  91 41 00 10 */	stw r10, 0x10(r1)
/* 802D4F7C 002D1EBC  91 21 00 14 */	stw r9, 0x14(r1)
/* 802D4F80 002D1EC0  91 01 00 18 */	stw r8, 0x18(r1)
/* 802D4F84 002D1EC4  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 802D4F88 002D1EC8  90 C1 00 20 */	stw r6, 0x20(r1)
/* 802D4F8C 002D1ECC  90 A1 00 24 */	stw r5, 0x24(r1)
/* 802D4F90 002D1ED0  7C 09 03 A6 */	mtctr r0
.L_802D4F94:
/* 802D4F94 002D1ED4  C0 77 00 00 */	lfs f3, 0(r23)
/* 802D4F98 002D1ED8  38 15 00 01 */	addi r0, r21, 1
/* 802D4F9C 002D1EDC  FC 06 18 40 */	fcmpo cr0, f6, f3
/* 802D4FA0 002D1EE0  4C 41 13 82 */	cror 2, 1, 2
/* 802D4FA4 002D1EE4  40 82 00 34 */	bne .L_802D4FD8
/* 802D4FA8 002D1EE8  54 00 10 3A */	slwi r0, r0, 2
/* 802D4FAC 002D1EEC  7C A4 04 2E */	lfsx f5, r4, r0
/* 802D4FB0 002D1EF0  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 802D4FB4 002D1EF4  40 80 00 24 */	bge .L_802D4FD8
/* 802D4FB8 002D1EF8  EC 86 18 28 */	fsubs f4, f6, f3
/* 802D4FBC 002D1EFC  C0 16 00 00 */	lfs f0, 0(r22)
/* 802D4FC0 002D1F00  EC 25 18 28 */	fsubs f1, f5, f3
/* 802D4FC4 002D1F04  7C 63 04 2E */	lfsx f3, r3, r0
/* 802D4FC8 002D1F08  EC 84 08 24 */	fdivs f4, f4, f1
/* 802D4FCC 002D1F0C  EC 22 20 28 */	fsubs f1, f2, f4
/* 802D4FD0 002D1F10  EC 01 00 32 */	fmuls f0, f1, f0
/* 802D4FD4 002D1F14  EC 24 00 FA */	fmadds f1, f4, f3, f0
.L_802D4FD8:
/* 802D4FD8 002D1F18  C0 77 00 04 */	lfs f3, 4(r23)
/* 802D4FDC 002D1F1C  38 15 00 02 */	addi r0, r21, 2
/* 802D4FE0 002D1F20  FC 06 18 40 */	fcmpo cr0, f6, f3
/* 802D4FE4 002D1F24  4C 41 13 82 */	cror 2, 1, 2
/* 802D4FE8 002D1F28  40 82 00 34 */	bne .L_802D501C
/* 802D4FEC 002D1F2C  54 00 10 3A */	slwi r0, r0, 2
/* 802D4FF0 002D1F30  7C A4 04 2E */	lfsx f5, r4, r0
/* 802D4FF4 002D1F34  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 802D4FF8 002D1F38  40 80 00 24 */	bge .L_802D501C
/* 802D4FFC 002D1F3C  EC 86 18 28 */	fsubs f4, f6, f3
/* 802D5000 002D1F40  C0 16 00 04 */	lfs f0, 4(r22)
/* 802D5004 002D1F44  EC 25 18 28 */	fsubs f1, f5, f3
/* 802D5008 002D1F48  7C 63 04 2E */	lfsx f3, r3, r0
/* 802D500C 002D1F4C  EC 84 08 24 */	fdivs f4, f4, f1
/* 802D5010 002D1F50  EC 22 20 28 */	fsubs f1, f2, f4
/* 802D5014 002D1F54  EC 01 00 32 */	fmuls f0, f1, f0
/* 802D5018 002D1F58  EC 24 00 FA */	fmadds f1, f4, f3, f0
.L_802D501C:
/* 802D501C 002D1F5C  3A F7 00 08 */	addi r23, r23, 8
/* 802D5020 002D1F60  3A D6 00 08 */	addi r22, r22, 8
/* 802D5024 002D1F64  3A B5 00 02 */	addi r21, r21, 2
/* 802D5028 002D1F68  42 00 FF 6C */	bdnz .L_802D4F94
/* 802D502C 002D1F6C  BA A1 00 54 */	lmw r21, 0x54(r1)
/* 802D5030 002D1F70  38 21 00 80 */	addi r1, r1, 0x80
/* 802D5034 002D1F74  4E 80 00 20 */	blr 
.endfn getFallPitchOffset__Q34Game9OniKurage3ObjFf

.fn updateFallTimer__Q34Game9OniKurage3ObjFv, global
/* 802D5038 002D1F78  80 03 01 F4 */	lwz r0, 0x1f4(r3)
/* 802D503C 002D1F7C  2C 00 00 00 */	cmpwi r0, 0
/* 802D5040 002D1F80  41 82 00 1C */	beq .L_802D505C
/* 802D5044 002D1F84  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802D5048 002D1F88  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 802D504C 002D1F8C  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 802D5050 002D1F90  EC 01 00 2A */	fadds f0, f1, f0
/* 802D5054 002D1F94  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 802D5058 002D1F98  4E 80 00 20 */	blr 
.L_802D505C:
/* 802D505C 002D1F9C  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D5060 002D1FA0  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 802D5064 002D1FA4  4E 80 00 20 */	blr 
.endfn updateFallTimer__Q34Game9OniKurage3ObjFv

.fn getFlyingNextState__Q34Game9OniKurage3ObjFv, global
/* 802D5068 002D1FA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D506C 002D1FAC  7C 08 02 A6 */	mflr r0
/* 802D5070 002D1FB0  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D5074 002D1FB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D5078 002D1FB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D507C 002D1FBC  7C 7F 1B 78 */	mr r31, r3
/* 802D5080 002D1FC0  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 802D5084 002D1FC4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D5088 002D1FC8  4C 40 13 82 */	cror 2, 0, 2
/* 802D508C 002D1FCC  40 82 00 0C */	bne .L_802D5098
/* 802D5090 002D1FD0  38 60 00 00 */	li r3, 0
/* 802D5094 002D1FD4  48 00 00 64 */	b .L_802D50F8
.L_802D5098:
/* 802D5098 002D1FD8  38 80 00 03 */	li r4, 3
/* 802D509C 002D1FDC  4B E4 01 19 */	bl getStickPikminColorNum__Q24Game9EnemyFuncFPQ24Game8Creaturei
/* 802D50A0 002D1FE0  2C 03 00 00 */	cmpwi r3, 0
/* 802D50A4 002D1FE4  40 81 00 0C */	ble .L_802D50B0
/* 802D50A8 002D1FE8  38 60 00 05 */	li r3, 5
/* 802D50AC 002D1FEC  48 00 00 4C */	b .L_802D50F8
.L_802D50B0:
/* 802D50B0 002D1FF0  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802D50B4 002D1FF4  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802D50B8 002D1FF8  C0 04 08 E4 */	lfs f0, 0x8e4(r4)
/* 802D50BC 002D1FFC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D50C0 002D2000  41 81 00 14 */	bgt .L_802D50D4
/* 802D50C4 002D2004  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 802D50C8 002D2008  80 04 09 0C */	lwz r0, 0x90c(r4)
/* 802D50CC 002D200C  7C 03 00 00 */	cmpw r3, r0
/* 802D50D0 002D2010  41 80 00 24 */	blt .L_802D50F4
.L_802D50D4:
/* 802D50D4 002D2014  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 802D50D8 002D2018  80 04 09 0C */	lwz r0, 0x90c(r4)
/* 802D50DC 002D201C  7C 03 00 00 */	cmpw r3, r0
/* 802D50E0 002D2020  40 80 00 0C */	bge .L_802D50EC
/* 802D50E4 002D2024  38 60 00 0A */	li r3, 0xa
/* 802D50E8 002D2028  48 00 00 10 */	b .L_802D50F8
.L_802D50EC:
/* 802D50EC 002D202C  38 60 00 05 */	li r3, 5
/* 802D50F0 002D2030  48 00 00 08 */	b .L_802D50F8
.L_802D50F4:
/* 802D50F4 002D2034  38 60 FF FF */	li r3, -1
.L_802D50F8:
/* 802D50F8 002D2038  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D50FC 002D203C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D5100 002D2040  7C 08 03 A6 */	mtlr r0
/* 802D5104 002D2044  38 21 00 10 */	addi r1, r1, 0x10
/* 802D5108 002D2048  4E 80 00 20 */	blr 
.endfn getFlyingNextState__Q34Game9OniKurage3ObjFv

.fn getSearchedTarget__Q34Game9OniKurage3ObjFf, global
/* 802D510C 002D204C  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 802D5110 002D2050  7C 08 02 A6 */	mflr r0
/* 802D5114 002D2054  90 01 01 44 */	stw r0, 0x144(r1)
/* 802D5118 002D2058  DB E1 01 30 */	stfd f31, 0x130(r1)
/* 802D511C 002D205C  F3 E1 01 38 */	psq_st f31, 312(r1), 0, qr0
/* 802D5120 002D2060  DB C1 01 20 */	stfd f30, 0x120(r1)
/* 802D5124 002D2064  F3 C1 01 28 */	psq_st f30, 296(r1), 0, qr0
/* 802D5128 002D2068  DB A1 01 10 */	stfd f29, 0x110(r1)
/* 802D512C 002D206C  F3 A1 01 18 */	psq_st f29, 280(r1), 0, qr0
/* 802D5130 002D2070  DB 81 01 00 */	stfd f28, 0x100(r1)
/* 802D5134 002D2074  F3 81 01 08 */	psq_st f28, 264(r1), 0, qr0
/* 802D5138 002D2078  DB 61 00 F0 */	stfd f27, 0xf0(r1)
/* 802D513C 002D207C  F3 61 00 F8 */	psq_st f27, 248(r1), 0, qr0
/* 802D5140 002D2080  DB 41 00 E0 */	stfd f26, 0xe0(r1)
/* 802D5144 002D2084  F3 41 00 E8 */	psq_st f26, 232(r1), 0, qr0
/* 802D5148 002D2088  DB 21 00 D0 */	stfd f25, 0xd0(r1)
/* 802D514C 002D208C  F3 21 00 D8 */	psq_st f25, 216(r1), 0, qr0
/* 802D5150 002D2090  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 802D5154 002D2094  93 C1 00 C8 */	stw r30, 0xc8(r1)
/* 802D5158 002D2098  93 A1 00 C4 */	stw r29, 0xc4(r1)
/* 802D515C 002D209C  93 81 00 C0 */	stw r28, 0xc0(r1)
/* 802D5160 002D20A0  7C 7C 1B 78 */	mr r28, r3
/* 802D5164 002D20A4  3B E0 00 00 */	li r31, 0
/* 802D5168 002D20A8  C0 43 01 94 */	lfs f2, 0x194(r3)
/* 802D516C 002D20AC  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 802D5170 002D20B0  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802D5174 002D20B4  EC 62 00 28 */	fsubs f3, f2, f0
/* 802D5178 002D20B8  C0 A3 01 8C */	lfs f5, 0x18c(r3)
/* 802D517C 002D20BC  C0 43 01 98 */	lfs f2, 0x198(r3)
/* 802D5180 002D20C0  C0 05 03 5C */	lfs f0, 0x35c(r5)
/* 802D5184 002D20C4  EC 85 10 28 */	fsubs f4, f5, f2
/* 802D5188 002D20C8  EC 43 00 F2 */	fmuls f2, f3, f3
/* 802D518C 002D20CC  EC 00 00 32 */	fmuls f0, f0, f0
/* 802D5190 002D20D0  EC 44 11 3A */	fmadds f2, f4, f4, f2
/* 802D5194 002D20D4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802D5198 002D20D8  40 80 02 58 */	bge .L_802D53F0
/* 802D519C 002D20DC  C3 DC 01 90 */	lfs f30, 0x190(r28)
/* 802D51A0 002D20E0  38 61 00 54 */	addi r3, r1, 0x54
/* 802D51A4 002D20E4  C0 C5 03 D4 */	lfs f6, 0x3d4(r5)
/* 802D51A8 002D20E8  38 81 00 44 */	addi r4, r1, 0x44
/* 802D51AC 002D20EC  C0 05 05 64 */	lfs f0, 0x564(r5)
/* 802D51B0 002D20F0  EC 9E 08 28 */	fsubs f4, f30, f1
/* 802D51B4 002D20F4  C0 25 04 24 */	lfs f1, 0x424(r5)
/* 802D51B8 002D20F8  EF 66 01 B2 */	fmuls f27, f6, f6
/* 802D51BC 002D20FC  C0 42 E6 94 */	lfs f2, lbl_8051C9F4@sda21(r2)
/* 802D51C0 002D2100  EF 40 00 32 */	fmuls f26, f0, f0
/* 802D51C4 002D2104  D0 A1 00 44 */	stfs f5, 0x44(r1)
/* 802D51C8 002D2108  EC 22 00 72 */	fmuls f1, f2, f1
/* 802D51CC 002D210C  C0 62 E6 60 */	lfs f3, lbl_8051C9C0@sda21(r2)
/* 802D51D0 002D2110  C0 1C 01 90 */	lfs f0, 0x190(r28)
/* 802D51D4 002D2114  C0 42 E6 70 */	lfs f2, lbl_8051C9D0@sda21(r2)
/* 802D51D8 002D2118  EF A4 18 28 */	fsubs f29, f4, f3
/* 802D51DC 002D211C  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 802D51E0 002D2120  EF 82 00 72 */	fmuls f28, f2, f1
/* 802D51E4 002D2124  C0 1C 01 94 */	lfs f0, 0x194(r28)
/* 802D51E8 002D2128  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 802D51EC 002D212C  D0 C1 00 50 */	stfs f6, 0x50(r1)
/* 802D51F0 002D2130  4B F5 91 B1 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 802D51F4 002D2134  38 00 00 01 */	li r0, 1
/* 802D51F8 002D2138  38 61 00 74 */	addi r3, r1, 0x74
/* 802D51FC 002D213C  98 01 00 70 */	stb r0, 0x70(r1)
/* 802D5200 002D2140  38 81 00 54 */	addi r4, r1, 0x54
/* 802D5204 002D2144  4B F5 91 DD */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 802D5208 002D2148  38 61 00 74 */	addi r3, r1, 0x74
/* 802D520C 002D214C  4B F5 92 51 */	bl first__Q24Game12CellIteratorFv
/* 802D5210 002D2150  48 00 01 D0 */	b .L_802D53E0
.L_802D5214:
/* 802D5214 002D2154  38 61 00 74 */	addi r3, r1, 0x74
/* 802D5218 002D2158  4B F5 93 2D */	bl __ml__Q24Game12CellIteratorFv
/* 802D521C 002D215C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5220 002D2160  7C 7E 1B 78 */	mr r30, r3
/* 802D5224 002D2164  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802D5228 002D2168  7D 89 03 A6 */	mtctr r12
/* 802D522C 002D216C  4E 80 04 21 */	bctrl 
/* 802D5230 002D2170  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5234 002D2174  41 82 01 A4 */	beq .L_802D53D8
/* 802D5238 002D2178  80 1E 00 F4 */	lwz r0, 0xf4(r30)
/* 802D523C 002D217C  7C 00 E0 40 */	cmplw r0, r28
/* 802D5240 002D2180  41 82 01 98 */	beq .L_802D53D8
/* 802D5244 002D2184  7F C3 F3 78 */	mr r3, r30
/* 802D5248 002D2188  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D524C 002D218C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D5250 002D2190  7D 89 03 A6 */	mtctr r12
/* 802D5254 002D2194  4E 80 04 21 */	bctrl 
/* 802D5258 002D2198  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D525C 002D219C  7C 7D 1B 78 */	mr r29, r3
/* 802D5260 002D21A0  40 82 00 40 */	bne .L_802D52A0
/* 802D5264 002D21A4  7F C3 F3 78 */	mr r3, r30
/* 802D5268 002D21A8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D526C 002D21AC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802D5270 002D21B0  7D 89 03 A6 */	mtctr r12
/* 802D5274 002D21B4  4E 80 04 21 */	bctrl 
/* 802D5278 002D21B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D527C 002D21BC  41 82 00 24 */	beq .L_802D52A0
/* 802D5280 002D21C0  7F C3 F3 78 */	mr r3, r30
/* 802D5284 002D21C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D5288 002D21C8  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802D528C 002D21CC  7D 89 03 A6 */	mtctr r12
/* 802D5290 002D21D0  4E 80 04 21 */	bctrl 
/* 802D5294 002D21D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5298 002D21D8  41 82 00 08 */	beq .L_802D52A0
/* 802D529C 002D21DC  3B A0 00 01 */	li r29, 1
.L_802D52A0:
/* 802D52A0 002D21E0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 802D52A4 002D21E4  41 82 01 34 */	beq .L_802D53D8
/* 802D52A8 002D21E8  7F C4 F3 78 */	mr r4, r30
/* 802D52AC 002D21EC  38 61 00 38 */	addi r3, r1, 0x38
/* 802D52B0 002D21F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D52B4 002D21F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D52B8 002D21F8  7D 89 03 A6 */	mtctr r12
/* 802D52BC 002D21FC  4E 80 04 21 */	bctrl 
/* 802D52C0 002D2200  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 802D52C4 002D2204  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 802D52C8 002D2208  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 802D52CC 002D220C  C0 61 00 40 */	lfs f3, 0x40(r1)
/* 802D52D0 002D2210  40 81 01 08 */	ble .L_802D53D8
/* 802D52D4 002D2214  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 802D52D8 002D2218  40 80 01 00 */	bge .L_802D53D8
/* 802D52DC 002D221C  C0 1C 01 94 */	lfs f0, 0x194(r28)
/* 802D52E0 002D2220  C0 3C 01 8C */	lfs f1, 0x18c(r28)
/* 802D52E4 002D2224  EC 00 18 28 */	fsubs f0, f0, f3
/* 802D52E8 002D2228  EC 21 10 28 */	fsubs f1, f1, f2
/* 802D52EC 002D222C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802D52F0 002D2230  EF E1 00 7A */	fmadds f31, f1, f1, f0
/* 802D52F4 002D2234  FC 1F D0 40 */	fcmpo cr0, f31, f26
/* 802D52F8 002D2238  40 80 00 0C */	bge .L_802D5304
/* 802D52FC 002D223C  7F C3 F3 78 */	mr r3, r30
/* 802D5300 002D2240  48 00 00 F4 */	b .L_802D53F4
.L_802D5304:
/* 802D5304 002D2244  FC 1F D8 40 */	fcmpo cr0, f31, f27
/* 802D5308 002D2248  40 80 00 D0 */	bge .L_802D53D8
/* 802D530C 002D224C  7F C4 F3 78 */	mr r4, r30
/* 802D5310 002D2250  38 61 00 20 */	addi r3, r1, 0x20
/* 802D5314 002D2254  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D5318 002D2258  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D531C 002D225C  7D 89 03 A6 */	mtctr r12
/* 802D5320 002D2260  4E 80 04 21 */	bctrl 
/* 802D5324 002D2264  7F 84 E3 78 */	mr r4, r28
/* 802D5328 002D2268  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802D532C 002D226C  81 9C 00 00 */	lwz r12, 0(r28)
/* 802D5330 002D2270  38 61 00 2C */	addi r3, r1, 0x2c
/* 802D5334 002D2274  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802D5338 002D2278  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802D533C 002D227C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D5340 002D2280  D0 41 00 08 */	stfs f2, 8(r1)
/* 802D5344 002D2284  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802D5348 002D2288  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802D534C 002D228C  7D 89 03 A6 */	mtctr r12
/* 802D5350 002D2290  4E 80 04 21 */	bctrl 
/* 802D5354 002D2294  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 802D5358 002D2298  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802D535C 002D229C  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 802D5360 002D22A0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802D5364 002D22A4  C0 21 00 08 */	lfs f1, 8(r1)
/* 802D5368 002D22A8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802D536C 002D22AC  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802D5370 002D22B0  EC 21 28 28 */	fsubs f1, f1, f5
/* 802D5374 002D22B4  EC 40 18 28 */	fsubs f2, f0, f3
/* 802D5378 002D22B8  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 802D537C 002D22BC  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 802D5380 002D22C0  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802D5384 002D22C4  4B D5 FD 85 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802D5388 002D22C8  48 13 C8 49 */	bl roundAng__Ff
/* 802D538C 002D22CC  81 9C 00 00 */	lwz r12, 0(r28)
/* 802D5390 002D22D0  FF 20 08 90 */	fmr f25, f1
/* 802D5394 002D22D4  7F 83 E3 78 */	mr r3, r28
/* 802D5398 002D22D8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802D539C 002D22DC  7D 89 03 A6 */	mtctr r12
/* 802D53A0 002D22E0  4E 80 04 21 */	bctrl 
/* 802D53A4 002D22E4  FC 40 08 90 */	fmr f2, f1
/* 802D53A8 002D22E8  FC 20 C8 90 */	fmr f1, f25
/* 802D53AC 002D22EC  48 13 C8 51 */	bl angDist__Fff
/* 802D53B0 002D22F0  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D53B4 002D22F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D53B8 002D22F8  40 81 00 08 */	ble .L_802D53C0
/* 802D53BC 002D22FC  48 00 00 08 */	b .L_802D53C4
.L_802D53C0:
/* 802D53C0 002D2300  FC 20 08 50 */	fneg f1, f1
.L_802D53C4:
/* 802D53C4 002D2304  FC 01 E0 40 */	fcmpo cr0, f1, f28
/* 802D53C8 002D2308  4C 40 13 82 */	cror 2, 0, 2
/* 802D53CC 002D230C  40 82 00 0C */	bne .L_802D53D8
/* 802D53D0 002D2310  7F DF F3 78 */	mr r31, r30
/* 802D53D4 002D2314  FF 60 F8 90 */	fmr f27, f31
.L_802D53D8:
/* 802D53D8 002D2318  38 61 00 74 */	addi r3, r1, 0x74
/* 802D53DC 002D231C  4B F5 91 25 */	bl next__Q24Game12CellIteratorFv
.L_802D53E0:
/* 802D53E0 002D2320  38 61 00 74 */	addi r3, r1, 0x74
/* 802D53E4 002D2324  4B F5 91 51 */	bl isDone__Q24Game12CellIteratorFv
/* 802D53E8 002D2328  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D53EC 002D232C  41 82 FE 28 */	beq .L_802D5214
.L_802D53F0:
/* 802D53F0 002D2330  7F E3 FB 78 */	mr r3, r31
.L_802D53F4:
/* 802D53F4 002D2334  E3 E1 01 38 */	psq_l f31, 312(r1), 0, qr0
/* 802D53F8 002D2338  CB E1 01 30 */	lfd f31, 0x130(r1)
/* 802D53FC 002D233C  E3 C1 01 28 */	psq_l f30, 296(r1), 0, qr0
/* 802D5400 002D2340  CB C1 01 20 */	lfd f30, 0x120(r1)
/* 802D5404 002D2344  E3 A1 01 18 */	psq_l f29, 280(r1), 0, qr0
/* 802D5408 002D2348  CB A1 01 10 */	lfd f29, 0x110(r1)
/* 802D540C 002D234C  E3 81 01 08 */	psq_l f28, 264(r1), 0, qr0
/* 802D5410 002D2350  CB 81 01 00 */	lfd f28, 0x100(r1)
/* 802D5414 002D2354  E3 61 00 F8 */	psq_l f27, 248(r1), 0, qr0
/* 802D5418 002D2358  CB 61 00 F0 */	lfd f27, 0xf0(r1)
/* 802D541C 002D235C  E3 41 00 E8 */	psq_l f26, 232(r1), 0, qr0
/* 802D5420 002D2360  CB 41 00 E0 */	lfd f26, 0xe0(r1)
/* 802D5424 002D2364  E3 21 00 D8 */	psq_l f25, 216(r1), 0, qr0
/* 802D5428 002D2368  CB 21 00 D0 */	lfd f25, 0xd0(r1)
/* 802D542C 002D236C  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 802D5430 002D2370  83 C1 00 C8 */	lwz r30, 0xc8(r1)
/* 802D5434 002D2374  83 A1 00 C4 */	lwz r29, 0xc4(r1)
/* 802D5438 002D2378  80 01 01 44 */	lwz r0, 0x144(r1)
/* 802D543C 002D237C  83 81 00 C0 */	lwz r28, 0xc0(r1)
/* 802D5440 002D2380  7C 08 03 A6 */	mtlr r0
/* 802D5444 002D2384  38 21 01 40 */	addi r1, r1, 0x140
/* 802D5448 002D2388  4E 80 00 20 */	blr 
.endfn getSearchedTarget__Q34Game9OniKurage3ObjFf

.fn isSuck__Q34Game9OniKurage3ObjFfPQ24Game8Creature, global
/* 802D544C 002D238C  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 802D5450 002D2390  7C 08 02 A6 */	mflr r0
/* 802D5454 002D2394  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 802D5458 002D2398  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 802D545C 002D239C  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 802D5460 002D23A0  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 802D5464 002D23A4  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 802D5468 002D23A8  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 802D546C 002D23AC  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 802D5470 002D23B0  93 E1 00 AC */	stw r31, 0xac(r1)
/* 802D5474 002D23B4  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 802D5478 002D23B8  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 802D547C 002D23BC  7C 7D 1B 78 */	mr r29, r3
/* 802D5480 002D23C0  C0 02 E6 60 */	lfs f0, lbl_8051C9C0@sda21(r2)
/* 802D5484 002D23C4  C3 E3 01 90 */	lfs f31, 0x190(r3)
/* 802D5488 002D23C8  28 04 00 00 */	cmplwi r4, 0
/* 802D548C 002D23CC  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802D5490 002D23D0  EC 3F 08 28 */	fsubs f1, f31, f1
/* 802D5494 002D23D4  C0 43 05 64 */	lfs f2, 0x564(r3)
/* 802D5498 002D23D8  EF A1 00 28 */	fsubs f29, f1, f0
/* 802D549C 002D23DC  EF C2 00 B2 */	fmuls f30, f2, f2
/* 802D54A0 002D23E0  41 82 00 5C */	beq .L_802D54FC
/* 802D54A4 002D23E4  81 84 00 00 */	lwz r12, 0(r4)
/* 802D54A8 002D23E8  38 61 00 14 */	addi r3, r1, 0x14
/* 802D54AC 002D23EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D54B0 002D23F0  7D 89 03 A6 */	mtctr r12
/* 802D54B4 002D23F4  4E 80 04 21 */	bctrl 
/* 802D54B8 002D23F8  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 802D54BC 002D23FC  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802D54C0 002D2400  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 802D54C4 002D2404  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 802D54C8 002D2408  40 81 01 84 */	ble .L_802D564C
/* 802D54CC 002D240C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802D54D0 002D2410  40 80 01 7C */	bge .L_802D564C
/* 802D54D4 002D2414  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 802D54D8 002D2418  C0 3D 01 8C */	lfs f1, 0x18c(r29)
/* 802D54DC 002D241C  EC 00 18 28 */	fsubs f0, f0, f3
/* 802D54E0 002D2420  EC 21 10 28 */	fsubs f1, f1, f2
/* 802D54E4 002D2424  EC 00 00 32 */	fmuls f0, f0, f0
/* 802D54E8 002D2428  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802D54EC 002D242C  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 802D54F0 002D2430  40 80 01 5C */	bge .L_802D564C
/* 802D54F4 002D2434  38 60 00 01 */	li r3, 1
/* 802D54F8 002D2438  48 00 01 58 */	b .L_802D5650
.L_802D54FC:
/* 802D54FC 002D243C  C0 1D 01 8C */	lfs f0, 0x18c(r29)
/* 802D5500 002D2440  38 61 00 30 */	addi r3, r1, 0x30
/* 802D5504 002D2444  38 81 00 20 */	addi r4, r1, 0x20
/* 802D5508 002D2448  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802D550C 002D244C  C0 1D 01 90 */	lfs f0, 0x190(r29)
/* 802D5510 002D2450  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802D5514 002D2454  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 802D5518 002D2458  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802D551C 002D245C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802D5520 002D2460  4B F5 8E 81 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 802D5524 002D2464  38 00 00 01 */	li r0, 1
/* 802D5528 002D2468  38 61 00 50 */	addi r3, r1, 0x50
/* 802D552C 002D246C  98 01 00 4C */	stb r0, 0x4c(r1)
/* 802D5530 002D2470  38 81 00 30 */	addi r4, r1, 0x30
/* 802D5534 002D2474  4B F5 8E AD */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 802D5538 002D2478  38 61 00 50 */	addi r3, r1, 0x50
/* 802D553C 002D247C  4B F5 8F 21 */	bl first__Q24Game12CellIteratorFv
/* 802D5540 002D2480  48 00 00 FC */	b .L_802D563C
.L_802D5544:
/* 802D5544 002D2484  38 61 00 50 */	addi r3, r1, 0x50
/* 802D5548 002D2488  4B F5 8F FD */	bl __ml__Q24Game12CellIteratorFv
/* 802D554C 002D248C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5550 002D2490  7C 7F 1B 78 */	mr r31, r3
/* 802D5554 002D2494  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802D5558 002D2498  7D 89 03 A6 */	mtctr r12
/* 802D555C 002D249C  4E 80 04 21 */	bctrl 
/* 802D5560 002D24A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5564 002D24A4  41 82 00 D0 */	beq .L_802D5634
/* 802D5568 002D24A8  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 802D556C 002D24AC  7C 00 E8 40 */	cmplw r0, r29
/* 802D5570 002D24B0  41 82 00 C4 */	beq .L_802D5634
/* 802D5574 002D24B4  7F E3 FB 78 */	mr r3, r31
/* 802D5578 002D24B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D557C 002D24BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D5580 002D24C0  7D 89 03 A6 */	mtctr r12
/* 802D5584 002D24C4  4E 80 04 21 */	bctrl 
/* 802D5588 002D24C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D558C 002D24CC  7C 7E 1B 78 */	mr r30, r3
/* 802D5590 002D24D0  40 82 00 40 */	bne .L_802D55D0
/* 802D5594 002D24D4  7F E3 FB 78 */	mr r3, r31
/* 802D5598 002D24D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D559C 002D24DC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802D55A0 002D24E0  7D 89 03 A6 */	mtctr r12
/* 802D55A4 002D24E4  4E 80 04 21 */	bctrl 
/* 802D55A8 002D24E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D55AC 002D24EC  41 82 00 24 */	beq .L_802D55D0
/* 802D55B0 002D24F0  7F E3 FB 78 */	mr r3, r31
/* 802D55B4 002D24F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D55B8 002D24F8  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802D55BC 002D24FC  7D 89 03 A6 */	mtctr r12
/* 802D55C0 002D2500  4E 80 04 21 */	bctrl 
/* 802D55C4 002D2504  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D55C8 002D2508  41 82 00 08 */	beq .L_802D55D0
/* 802D55CC 002D250C  3B C0 00 01 */	li r30, 1
.L_802D55D0:
/* 802D55D0 002D2510  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 802D55D4 002D2514  41 82 00 60 */	beq .L_802D5634
/* 802D55D8 002D2518  7F E4 FB 78 */	mr r4, r31
/* 802D55DC 002D251C  38 61 00 08 */	addi r3, r1, 8
/* 802D55E0 002D2520  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D55E4 002D2524  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D55E8 002D2528  7D 89 03 A6 */	mtctr r12
/* 802D55EC 002D252C  4E 80 04 21 */	bctrl 
/* 802D55F0 002D2530  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802D55F4 002D2534  C0 41 00 08 */	lfs f2, 8(r1)
/* 802D55F8 002D2538  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 802D55FC 002D253C  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 802D5600 002D2540  40 81 00 34 */	ble .L_802D5634
/* 802D5604 002D2544  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802D5608 002D2548  40 80 00 2C */	bge .L_802D5634
/* 802D560C 002D254C  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 802D5610 002D2550  C0 3D 01 8C */	lfs f1, 0x18c(r29)
/* 802D5614 002D2554  EC 00 18 28 */	fsubs f0, f0, f3
/* 802D5618 002D2558  EC 21 10 28 */	fsubs f1, f1, f2
/* 802D561C 002D255C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802D5620 002D2560  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802D5624 002D2564  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 802D5628 002D2568  40 80 00 0C */	bge .L_802D5634
/* 802D562C 002D256C  38 60 00 01 */	li r3, 1
/* 802D5630 002D2570  48 00 00 20 */	b .L_802D5650
.L_802D5634:
/* 802D5634 002D2574  38 61 00 50 */	addi r3, r1, 0x50
/* 802D5638 002D2578  4B F5 8E C9 */	bl next__Q24Game12CellIteratorFv
.L_802D563C:
/* 802D563C 002D257C  38 61 00 50 */	addi r3, r1, 0x50
/* 802D5640 002D2580  4B F5 8E F5 */	bl isDone__Q24Game12CellIteratorFv
/* 802D5644 002D2584  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5648 002D2588  41 82 FE FC */	beq .L_802D5544
.L_802D564C:
/* 802D564C 002D258C  38 60 00 00 */	li r3, 0
.L_802D5650:
/* 802D5650 002D2590  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 802D5654 002D2594  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 802D5658 002D2598  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 802D565C 002D259C  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 802D5660 002D25A0  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 802D5664 002D25A4  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 802D5668 002D25A8  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 802D566C 002D25AC  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 802D5670 002D25B0  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 802D5674 002D25B4  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 802D5678 002D25B8  7C 08 03 A6 */	mtlr r0
/* 802D567C 002D25BC  38 21 00 E0 */	addi r1, r1, 0xe0
/* 802D5680 002D25C0  4E 80 00 20 */	blr 
.endfn isSuck__Q34Game9OniKurage3ObjFfPQ24Game8Creature

.fn suckPikmin__Q34Game9OniKurage3ObjFf, global
/* 802D5684 002D25C4  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 802D5688 002D25C8  7C 08 02 A6 */	mflr r0
/* 802D568C 002D25CC  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 802D5690 002D25D0  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 802D5694 002D25D4  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 802D5698 002D25D8  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 802D569C 002D25DC  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 802D56A0 002D25E0  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 802D56A4 002D25E4  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 802D56A8 002D25E8  DB 81 00 80 */	stfd f28, 0x80(r1)
/* 802D56AC 002D25EC  F3 81 00 88 */	psq_st f28, 136(r1), 0, qr0
/* 802D56B0 002D25F0  DB 61 00 70 */	stfd f27, 0x70(r1)
/* 802D56B4 002D25F4  F3 61 00 78 */	psq_st f27, 120(r1), 0, qr0
/* 802D56B8 002D25F8  DB 41 00 60 */	stfd f26, 0x60(r1)
/* 802D56BC 002D25FC  F3 41 00 68 */	psq_st f26, 104(r1), 0, qr0
/* 802D56C0 002D2600  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802D56C4 002D2604  93 C1 00 58 */	stw r30, 0x58(r1)
/* 802D56C8 002D2608  93 A1 00 54 */	stw r29, 0x54(r1)
/* 802D56CC 002D260C  93 81 00 50 */	stw r28, 0x50(r1)
/* 802D56D0 002D2610  7C 7E 1B 78 */	mr r30, r3
/* 802D56D4 002D2614  3C 60 73 75 */	lis r3, 0x7375636B@ha
/* 802D56D8 002D2618  C3 9E 01 90 */	lfs f28, 0x190(r30)
/* 802D56DC 002D261C  38 83 63 6B */	addi r4, r3, 0x7375636B@l
/* 802D56E0 002D2620  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802D56E4 002D2624  EC 5C 08 28 */	fsubs f2, f28, f1
/* 802D56E8 002D2628  C0 22 E6 60 */	lfs f1, lbl_8051C9C0@sda21(r2)
/* 802D56EC 002D262C  C0 03 05 B4 */	lfs f0, 0x5b4(r3)
/* 802D56F0 002D2630  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 802D56F4 002D2634  EF 62 08 28 */	fsubs f27, f2, f1
/* 802D56F8 002D2638  EF 40 00 32 */	fmuls f26, f0, f0
/* 802D56FC 002D263C  4B E6 07 49 */	bl getCollPart__8CollTreeFUl
/* 802D5700 002D2640  7C 7F 1B 78 */	mr r31, r3
/* 802D5704 002D2644  3C 60 80 4B */	lis r3, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802D5708 002D2648  38 00 00 00 */	li r0, 0
/* 802D570C 002D264C  C3 FF 00 4C */	lfs f31, 0x4c(r31)
/* 802D5710 002D2650  C3 DF 00 50 */	lfs f30, 0x50(r31)
/* 802D5714 002D2654  28 00 00 00 */	cmplwi r0, 0
/* 802D5718 002D2658  C3 BF 00 54 */	lfs f29, 0x54(r31)
/* 802D571C 002D265C  38 83 BC 9C */	addi r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802D5720 002D2660  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802D5724 002D2664  90 81 00 14 */	stw r4, 0x14(r1)
/* 802D5728 002D2668  90 01 00 20 */	stw r0, 0x20(r1)
/* 802D572C 002D266C  90 01 00 18 */	stw r0, 0x18(r1)
/* 802D5730 002D2670  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802D5734 002D2674  40 82 00 1C */	bne .L_802D5750
/* 802D5738 002D2678  81 83 00 00 */	lwz r12, 0(r3)
/* 802D573C 002D267C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802D5740 002D2680  7D 89 03 A6 */	mtctr r12
/* 802D5744 002D2684  4E 80 04 21 */	bctrl 
/* 802D5748 002D2688  90 61 00 18 */	stw r3, 0x18(r1)
/* 802D574C 002D268C  48 00 02 E0 */	b .L_802D5A2C
.L_802D5750:
/* 802D5750 002D2690  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5754 002D2694  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802D5758 002D2698  7D 89 03 A6 */	mtctr r12
/* 802D575C 002D269C  4E 80 04 21 */	bctrl 
/* 802D5760 002D26A0  90 61 00 18 */	stw r3, 0x18(r1)
/* 802D5764 002D26A4  48 00 00 58 */	b .L_802D57BC
.L_802D5768:
/* 802D5768 002D26A8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D576C 002D26AC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D5770 002D26B0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5774 002D26B4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802D5778 002D26B8  7D 89 03 A6 */	mtctr r12
/* 802D577C 002D26BC  4E 80 04 21 */	bctrl 
/* 802D5780 002D26C0  7C 64 1B 78 */	mr r4, r3
/* 802D5784 002D26C4  80 61 00 20 */	lwz r3, 0x20(r1)
/* 802D5788 002D26C8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D578C 002D26CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D5790 002D26D0  7D 89 03 A6 */	mtctr r12
/* 802D5794 002D26D4  4E 80 04 21 */	bctrl 
/* 802D5798 002D26D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D579C 002D26DC  40 82 02 90 */	bne .L_802D5A2C
/* 802D57A0 002D26E0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D57A4 002D26E4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D57A8 002D26E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D57AC 002D26EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D57B0 002D26F0  7D 89 03 A6 */	mtctr r12
/* 802D57B4 002D26F4  4E 80 04 21 */	bctrl 
/* 802D57B8 002D26F8  90 61 00 18 */	stw r3, 0x18(r1)
.L_802D57BC:
/* 802D57BC 002D26FC  81 81 00 14 */	lwz r12, 0x14(r1)
/* 802D57C0 002D2700  38 61 00 14 */	addi r3, r1, 0x14
/* 802D57C4 002D2704  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D57C8 002D2708  7D 89 03 A6 */	mtctr r12
/* 802D57CC 002D270C  4E 80 04 21 */	bctrl 
/* 802D57D0 002D2710  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D57D4 002D2714  41 82 FF 94 */	beq .L_802D5768
/* 802D57D8 002D2718  48 00 02 54 */	b .L_802D5A2C
.L_802D57DC:
/* 802D57DC 002D271C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D57E0 002D2720  81 83 00 00 */	lwz r12, 0(r3)
/* 802D57E4 002D2724  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802D57E8 002D2728  7D 89 03 A6 */	mtctr r12
/* 802D57EC 002D272C  4E 80 04 21 */	bctrl 
/* 802D57F0 002D2730  81 83 00 00 */	lwz r12, 0(r3)
/* 802D57F4 002D2734  7C 7D 1B 78 */	mr r29, r3
/* 802D57F8 002D2738  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802D57FC 002D273C  7D 89 03 A6 */	mtctr r12
/* 802D5800 002D2740  4E 80 04 21 */	bctrl 
/* 802D5804 002D2744  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5808 002D2748  41 82 01 68 */	beq .L_802D5970
/* 802D580C 002D274C  7F A3 EB 78 */	mr r3, r29
/* 802D5810 002D2750  81 9D 00 00 */	lwz r12, 0(r29)
/* 802D5814 002D2754  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802D5818 002D2758  7D 89 03 A6 */	mtctr r12
/* 802D581C 002D275C  4E 80 04 21 */	bctrl 
/* 802D5820 002D2760  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5824 002D2764  41 82 01 4C */	beq .L_802D5970
/* 802D5828 002D2768  80 1D 00 F4 */	lwz r0, 0xf4(r29)
/* 802D582C 002D276C  7C 00 F0 40 */	cmplw r0, r30
/* 802D5830 002D2770  41 82 01 40 */	beq .L_802D5970
/* 802D5834 002D2774  83 9E 00 C0 */	lwz r28, 0xc0(r30)
/* 802D5838 002D2778  80 7E 02 E0 */	lwz r3, 0x2e0(r30)
/* 802D583C 002D277C  80 1C 09 34 */	lwz r0, 0x934(r28)
/* 802D5840 002D2780  7C 03 00 00 */	cmpw r3, r0
/* 802D5844 002D2784  40 80 01 2C */	bge .L_802D5970
/* 802D5848 002D2788  4B DF 3D 59 */	bl rand
/* 802D584C 002D278C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802D5850 002D2790  3C 00 43 30 */	lis r0, 0x4330
/* 802D5854 002D2794  90 61 00 44 */	stw r3, 0x44(r1)
/* 802D5858 002D2798  C8 62 E6 80 */	lfd f3, lbl_8051C9E0@sda21(r2)
/* 802D585C 002D279C  90 01 00 40 */	stw r0, 0x40(r1)
/* 802D5860 002D27A0  C0 42 E6 58 */	lfs f2, lbl_8051C9B8@sda21(r2)
/* 802D5864 002D27A4  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 802D5868 002D27A8  C0 22 E6 6C */	lfs f1, lbl_8051C9CC@sda21(r2)
/* 802D586C 002D27AC  EC 60 18 28 */	fsubs f3, f0, f3
/* 802D5870 002D27B0  C0 1C 08 BC */	lfs f0, 0x8bc(r28)
/* 802D5874 002D27B4  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802D5878 002D27B8  EC 22 08 24 */	fdivs f1, f2, f1
/* 802D587C 002D27BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D5880 002D27C0  40 80 00 F0 */	bge .L_802D5970
/* 802D5884 002D27C4  7F A4 EB 78 */	mr r4, r29
/* 802D5888 002D27C8  38 61 00 08 */	addi r3, r1, 8
/* 802D588C 002D27CC  81 9D 00 00 */	lwz r12, 0(r29)
/* 802D5890 002D27D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D5894 002D27D4  7D 89 03 A6 */	mtctr r12
/* 802D5898 002D27D8  4E 80 04 21 */	bctrl 
/* 802D589C 002D27DC  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 802D58A0 002D27E0  C0 41 00 08 */	lfs f2, 8(r1)
/* 802D58A4 002D27E4  FC 03 D8 40 */	fcmpo cr0, f3, f27
/* 802D58A8 002D27E8  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 802D58AC 002D27EC  40 81 00 C4 */	ble .L_802D5970
/* 802D58B0 002D27F0  FC 03 E0 40 */	fcmpo cr0, f3, f28
/* 802D58B4 002D27F4  40 80 00 BC */	bge .L_802D5970
/* 802D58B8 002D27F8  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802D58BC 002D27FC  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 802D58C0 002D2800  EC 00 20 28 */	fsubs f0, f0, f4
/* 802D58C4 002D2804  EC 21 10 28 */	fsubs f1, f1, f2
/* 802D58C8 002D2808  EC 00 00 32 */	fmuls f0, f0, f0
/* 802D58CC 002D280C  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802D58D0 002D2810  FC 00 D0 40 */	fcmpo cr0, f0, f26
/* 802D58D4 002D2814  40 80 00 9C */	bge .L_802D5970
/* 802D58D8 002D2818  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802D58DC 002D281C  EC 5F 10 28 */	fsubs f2, f31, f2
/* 802D58E0 002D2820  38 83 A3 00 */	addi r4, r3, __vt__Q24Game11Interaction@l
/* 802D58E4 002D2824  EC 3E 18 28 */	fsubs f1, f30, f3
/* 802D58E8 002D2828  EC 1D 20 28 */	fsubs f0, f29, f4
/* 802D58EC 002D282C  3C 60 80 4B */	lis r3, __vt__Q24Game20InteractSuikomi_Test@ha
/* 802D58F0 002D2830  38 00 00 00 */	li r0, 0
/* 802D58F4 002D2834  90 81 00 24 */	stw r4, 0x24(r1)
/* 802D58F8 002D2838  38 A3 48 9C */	addi r5, r3, __vt__Q24Game20InteractSuikomi_Test@l
/* 802D58FC 002D283C  7F A3 EB 78 */	mr r3, r29
/* 802D5900 002D2840  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802D5904 002D2844  38 81 00 24 */	addi r4, r1, 0x24
/* 802D5908 002D2848  90 A1 00 24 */	stw r5, 0x24(r1)
/* 802D590C 002D284C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802D5910 002D2850  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802D5914 002D2854  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802D5918 002D2858  90 01 00 38 */	stw r0, 0x38(r1)
/* 802D591C 002D285C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802D5920 002D2860  81 9D 00 00 */	lwz r12, 0(r29)
/* 802D5924 002D2864  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802D5928 002D2868  7D 89 03 A6 */	mtctr r12
/* 802D592C 002D286C  4E 80 04 21 */	bctrl 
/* 802D5930 002D2870  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5934 002D2874  41 82 00 3C */	beq .L_802D5970
/* 802D5938 002D2878  80 9E 02 E0 */	lwz r4, 0x2e0(r30)
/* 802D593C 002D287C  7F C3 F3 78 */	mr r3, r30
/* 802D5940 002D2880  38 04 00 01 */	addi r0, r4, 1
/* 802D5944 002D2884  90 1E 02 E0 */	stw r0, 0x2e0(r30)
/* 802D5948 002D2888  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D594C 002D288C  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802D5950 002D2890  7D 89 03 A6 */	mtctr r12
/* 802D5954 002D2894  4E 80 04 21 */	bctrl 
/* 802D5958 002D2898  81 83 00 00 */	lwz r12, 0(r3)
/* 802D595C 002D289C  38 80 28 2A */	li r4, 0x282a
/* 802D5960 002D28A0  38 A0 00 00 */	li r5, 0
/* 802D5964 002D28A4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802D5968 002D28A8  7D 89 03 A6 */	mtctr r12
/* 802D596C 002D28AC  4E 80 04 21 */	bctrl 
.L_802D5970:
/* 802D5970 002D28B0  80 01 00 20 */	lwz r0, 0x20(r1)
/* 802D5974 002D28B4  28 00 00 00 */	cmplwi r0, 0
/* 802D5978 002D28B8  40 82 00 24 */	bne .L_802D599C
/* 802D597C 002D28BC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D5980 002D28C0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D5984 002D28C4  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5988 002D28C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D598C 002D28CC  7D 89 03 A6 */	mtctr r12
/* 802D5990 002D28D0  4E 80 04 21 */	bctrl 
/* 802D5994 002D28D4  90 61 00 18 */	stw r3, 0x18(r1)
/* 802D5998 002D28D8  48 00 00 94 */	b .L_802D5A2C
.L_802D599C:
/* 802D599C 002D28DC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D59A0 002D28E0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D59A4 002D28E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802D59A8 002D28E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D59AC 002D28EC  7D 89 03 A6 */	mtctr r12
/* 802D59B0 002D28F0  4E 80 04 21 */	bctrl 
/* 802D59B4 002D28F4  90 61 00 18 */	stw r3, 0x18(r1)
/* 802D59B8 002D28F8  48 00 00 58 */	b .L_802D5A10
.L_802D59BC:
/* 802D59BC 002D28FC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D59C0 002D2900  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D59C4 002D2904  81 83 00 00 */	lwz r12, 0(r3)
/* 802D59C8 002D2908  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802D59CC 002D290C  7D 89 03 A6 */	mtctr r12
/* 802D59D0 002D2910  4E 80 04 21 */	bctrl 
/* 802D59D4 002D2914  7C 64 1B 78 */	mr r4, r3
/* 802D59D8 002D2918  80 61 00 20 */	lwz r3, 0x20(r1)
/* 802D59DC 002D291C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D59E0 002D2920  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D59E4 002D2924  7D 89 03 A6 */	mtctr r12
/* 802D59E8 002D2928  4E 80 04 21 */	bctrl 
/* 802D59EC 002D292C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D59F0 002D2930  40 82 00 3C */	bne .L_802D5A2C
/* 802D59F4 002D2934  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D59F8 002D2938  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D59FC 002D293C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5A00 002D2940  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D5A04 002D2944  7D 89 03 A6 */	mtctr r12
/* 802D5A08 002D2948  4E 80 04 21 */	bctrl 
/* 802D5A0C 002D294C  90 61 00 18 */	stw r3, 0x18(r1)
.L_802D5A10:
/* 802D5A10 002D2950  81 81 00 14 */	lwz r12, 0x14(r1)
/* 802D5A14 002D2954  38 61 00 14 */	addi r3, r1, 0x14
/* 802D5A18 002D2958  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D5A1C 002D295C  7D 89 03 A6 */	mtctr r12
/* 802D5A20 002D2960  4E 80 04 21 */	bctrl 
/* 802D5A24 002D2964  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5A28 002D2968  41 82 FF 94 */	beq .L_802D59BC
.L_802D5A2C:
/* 802D5A2C 002D296C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D5A30 002D2970  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5A34 002D2974  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D5A38 002D2978  7D 89 03 A6 */	mtctr r12
/* 802D5A3C 002D297C  4E 80 04 21 */	bctrl 
/* 802D5A40 002D2980  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D5A44 002D2984  7C 04 18 40 */	cmplw r4, r3
/* 802D5A48 002D2988  40 82 FD 94 */	bne .L_802D57DC
/* 802D5A4C 002D298C  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802D5A50 002D2990  80 BE 02 E0 */	lwz r5, 0x2e0(r30)
/* 802D5A54 002D2994  80 03 09 34 */	lwz r0, 0x934(r3)
/* 802D5A58 002D2998  7C A4 FE 70 */	srawi r4, r5, 0x1f
/* 802D5A5C 002D299C  54 03 0F FE */	srwi r3, r0, 0x1f
/* 802D5A60 002D29A0  7C 00 28 10 */	subfc r0, r0, r5
/* 802D5A64 002D29A4  7C 64 19 14 */	adde r3, r4, r3
/* 802D5A68 002D29A8  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 802D5A6C 002D29AC  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 802D5A70 002D29B0  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 802D5A74 002D29B4  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 802D5A78 002D29B8  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 802D5A7C 002D29BC  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 802D5A80 002D29C0  E3 81 00 88 */	psq_l f28, 136(r1), 0, qr0
/* 802D5A84 002D29C4  CB 81 00 80 */	lfd f28, 0x80(r1)
/* 802D5A88 002D29C8  E3 61 00 78 */	psq_l f27, 120(r1), 0, qr0
/* 802D5A8C 002D29CC  CB 61 00 70 */	lfd f27, 0x70(r1)
/* 802D5A90 002D29D0  E3 41 00 68 */	psq_l f26, 104(r1), 0, qr0
/* 802D5A94 002D29D4  CB 41 00 60 */	lfd f26, 0x60(r1)
/* 802D5A98 002D29D8  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802D5A9C 002D29DC  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802D5AA0 002D29E0  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 802D5AA4 002D29E4  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 802D5AA8 002D29E8  83 81 00 50 */	lwz r28, 0x50(r1)
/* 802D5AAC 002D29EC  7C 08 03 A6 */	mtlr r0
/* 802D5AB0 002D29F0  38 21 00 C0 */	addi r1, r1, 0xc0
/* 802D5AB4 002D29F4  4E 80 00 20 */	blr 
.endfn suckPikmin__Q34Game9OniKurage3ObjFf

.fn suckNavi__Q34Game9OniKurage3ObjFf, global
/* 802D5AB8 002D29F8  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 802D5ABC 002D29FC  7C 08 02 A6 */	mflr r0
/* 802D5AC0 002D2A00  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 802D5AC4 002D2A04  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 802D5AC8 002D2A08  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 802D5ACC 002D2A0C  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 802D5AD0 002D2A10  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 802D5AD4 002D2A14  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 802D5AD8 002D2A18  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 802D5ADC 002D2A1C  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 802D5AE0 002D2A20  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 802D5AE4 002D2A24  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 802D5AE8 002D2A28  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 802D5AEC 002D2A2C  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 802D5AF0 002D2A30  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 802D5AF4 002D2A34  DB 21 00 70 */	stfd f25, 0x70(r1)
/* 802D5AF8 002D2A38  F3 21 00 78 */	psq_st f25, 120(r1), 0, qr0
/* 802D5AFC 002D2A3C  DB 01 00 60 */	stfd f24, 0x60(r1)
/* 802D5B00 002D2A40  F3 01 00 68 */	psq_st f24, 104(r1), 0, qr0
/* 802D5B04 002D2A44  DA E1 00 50 */	stfd f23, 0x50(r1)
/* 802D5B08 002D2A48  F2 E1 00 58 */	psq_st f23, 88(r1), 0, qr0
/* 802D5B0C 002D2A4C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802D5B10 002D2A50  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802D5B14 002D2A54  93 A1 00 44 */	stw r29, 0x44(r1)
/* 802D5B18 002D2A58  93 81 00 40 */	stw r28, 0x40(r1)
/* 802D5B1C 002D2A5C  7C 7E 1B 78 */	mr r30, r3
/* 802D5B20 002D2A60  3C 60 73 75 */	lis r3, 0x7375636B@ha
/* 802D5B24 002D2A64  C3 FE 01 90 */	lfs f31, 0x190(r30)
/* 802D5B28 002D2A68  38 83 63 6B */	addi r4, r3, 0x7375636B@l
/* 802D5B2C 002D2A6C  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802D5B30 002D2A70  EC 5F 08 28 */	fsubs f2, f31, f1
/* 802D5B34 002D2A74  C0 22 E6 60 */	lfs f1, lbl_8051C9C0@sda21(r2)
/* 802D5B38 002D2A78  C0 03 05 B4 */	lfs f0, 0x5b4(r3)
/* 802D5B3C 002D2A7C  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 802D5B40 002D2A80  EF C2 08 28 */	fsubs f30, f2, f1
/* 802D5B44 002D2A84  EF A0 00 32 */	fmuls f29, f0, f0
/* 802D5B48 002D2A88  4B E6 02 FD */	bl getCollPart__8CollTreeFUl
/* 802D5B4C 002D2A8C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 802D5B50 002D2A90  38 00 00 00 */	li r0, 0
/* 802D5B54 002D2A94  C3 83 00 4C */	lfs f28, 0x4c(r3)
/* 802D5B58 002D2A98  28 00 00 00 */	cmplwi r0, 0
/* 802D5B5C 002D2A9C  C3 63 00 50 */	lfs f27, 0x50(r3)
/* 802D5B60 002D2AA0  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 802D5B64 002D2AA4  C3 43 00 54 */	lfs f26, 0x54(r3)
/* 802D5B68 002D2AA8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802D5B6C 002D2AAC  90 81 00 14 */	stw r4, 0x14(r1)
/* 802D5B70 002D2AB0  90 01 00 20 */	stw r0, 0x20(r1)
/* 802D5B74 002D2AB4  90 01 00 18 */	stw r0, 0x18(r1)
/* 802D5B78 002D2AB8  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802D5B7C 002D2ABC  40 82 00 1C */	bne .L_802D5B98
/* 802D5B80 002D2AC0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5B84 002D2AC4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802D5B88 002D2AC8  7D 89 03 A6 */	mtctr r12
/* 802D5B8C 002D2ACC  4E 80 04 21 */	bctrl 
/* 802D5B90 002D2AD0  90 61 00 18 */	stw r3, 0x18(r1)
/* 802D5B94 002D2AD4  48 00 03 E8 */	b .L_802D5F7C
.L_802D5B98:
/* 802D5B98 002D2AD8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5B9C 002D2ADC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802D5BA0 002D2AE0  7D 89 03 A6 */	mtctr r12
/* 802D5BA4 002D2AE4  4E 80 04 21 */	bctrl 
/* 802D5BA8 002D2AE8  90 61 00 18 */	stw r3, 0x18(r1)
/* 802D5BAC 002D2AEC  48 00 00 58 */	b .L_802D5C04
.L_802D5BB0:
/* 802D5BB0 002D2AF0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D5BB4 002D2AF4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D5BB8 002D2AF8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5BBC 002D2AFC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802D5BC0 002D2B00  7D 89 03 A6 */	mtctr r12
/* 802D5BC4 002D2B04  4E 80 04 21 */	bctrl 
/* 802D5BC8 002D2B08  7C 64 1B 78 */	mr r4, r3
/* 802D5BCC 002D2B0C  80 61 00 20 */	lwz r3, 0x20(r1)
/* 802D5BD0 002D2B10  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5BD4 002D2B14  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D5BD8 002D2B18  7D 89 03 A6 */	mtctr r12
/* 802D5BDC 002D2B1C  4E 80 04 21 */	bctrl 
/* 802D5BE0 002D2B20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5BE4 002D2B24  40 82 03 98 */	bne .L_802D5F7C
/* 802D5BE8 002D2B28  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D5BEC 002D2B2C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D5BF0 002D2B30  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5BF4 002D2B34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D5BF8 002D2B38  7D 89 03 A6 */	mtctr r12
/* 802D5BFC 002D2B3C  4E 80 04 21 */	bctrl 
/* 802D5C00 002D2B40  90 61 00 18 */	stw r3, 0x18(r1)
.L_802D5C04:
/* 802D5C04 002D2B44  81 81 00 14 */	lwz r12, 0x14(r1)
/* 802D5C08 002D2B48  38 61 00 14 */	addi r3, r1, 0x14
/* 802D5C0C 002D2B4C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D5C10 002D2B50  7D 89 03 A6 */	mtctr r12
/* 802D5C14 002D2B54  4E 80 04 21 */	bctrl 
/* 802D5C18 002D2B58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5C1C 002D2B5C  41 82 FF 94 */	beq .L_802D5BB0
/* 802D5C20 002D2B60  48 00 03 5C */	b .L_802D5F7C
.L_802D5C24:
/* 802D5C24 002D2B64  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D5C28 002D2B68  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5C2C 002D2B6C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802D5C30 002D2B70  7D 89 03 A6 */	mtctr r12
/* 802D5C34 002D2B74  4E 80 04 21 */	bctrl 
/* 802D5C38 002D2B78  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5C3C 002D2B7C  7C 7F 1B 78 */	mr r31, r3
/* 802D5C40 002D2B80  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802D5C44 002D2B84  7D 89 03 A6 */	mtctr r12
/* 802D5C48 002D2B88  4E 80 04 21 */	bctrl 
/* 802D5C4C 002D2B8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5C50 002D2B90  41 82 02 70 */	beq .L_802D5EC0
/* 802D5C54 002D2B94  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 802D5C58 002D2B98  7C 00 F0 40 */	cmplw r0, r30
/* 802D5C5C 002D2B9C  41 82 02 64 */	beq .L_802D5EC0
/* 802D5C60 002D2BA0  7F E4 FB 78 */	mr r4, r31
/* 802D5C64 002D2BA4  38 61 00 08 */	addi r3, r1, 8
/* 802D5C68 002D2BA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D5C6C 002D2BAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D5C70 002D2BB0  7D 89 03 A6 */	mtctr r12
/* 802D5C74 002D2BB4  4E 80 04 21 */	bctrl 
/* 802D5C78 002D2BB8  C3 01 00 0C */	lfs f24, 0xc(r1)
/* 802D5C7C 002D2BBC  C3 21 00 08 */	lfs f25, 8(r1)
/* 802D5C80 002D2BC0  FC 18 F0 40 */	fcmpo cr0, f24, f30
/* 802D5C84 002D2BC4  C2 E1 00 10 */	lfs f23, 0x10(r1)
/* 802D5C88 002D2BC8  40 81 02 38 */	ble .L_802D5EC0
/* 802D5C8C 002D2BCC  FC 18 F8 40 */	fcmpo cr0, f24, f31
/* 802D5C90 002D2BD0  40 80 02 30 */	bge .L_802D5EC0
/* 802D5C94 002D2BD4  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802D5C98 002D2BD8  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 802D5C9C 002D2BDC  EC 00 B8 28 */	fsubs f0, f0, f23
/* 802D5CA0 002D2BE0  EC 21 C8 28 */	fsubs f1, f1, f25
/* 802D5CA4 002D2BE4  EC 00 00 32 */	fmuls f0, f0, f0
/* 802D5CA8 002D2BE8  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802D5CAC 002D2BEC  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 802D5CB0 002D2BF0  40 80 02 10 */	bge .L_802D5EC0
/* 802D5CB4 002D2BF4  3B 80 00 00 */	li r28, 0
/* 802D5CB8 002D2BF8  48 00 01 FC */	b .L_802D5EB4
.L_802D5CBC:
/* 802D5CBC 002D2BFC  7F 84 E3 78 */	mr r4, r28
/* 802D5CC0 002D2C00  38 7E 02 E4 */	addi r3, r30, 0x2e4
/* 802D5CC4 002D2C04  4B E6 2A B5 */	bl getSlot__10MouthSlotsFi
/* 802D5CC8 002D2C08  7C 7D 1B 78 */	mr r29, r3
/* 802D5CCC 002D2C0C  80 03 00 64 */	lwz r0, 0x64(r3)
/* 802D5CD0 002D2C10  28 00 00 00 */	cmplwi r0, 0
/* 802D5CD4 002D2C14  40 82 01 DC */	bne .L_802D5EB0
/* 802D5CD8 002D2C18  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802D5CDC 002D2C1C  38 82 E6 64 */	addi r4, r2, lbl_8051C9C4@sda21
/* 802D5CE0 002D2C20  48 16 93 05 */	bl getJoint__Q28SysShape5ModelFPc
/* 802D5CE4 002D2C24  48 15 3B BD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802D5CE8 002D2C28  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 802D5CEC 002D2C2C  C0 43 00 20 */	lfs f2, 0x20(r3)
/* 802D5CF0 002D2C30  EC 81 00 72 */	fmuls f4, f1, f1
/* 802D5CF4 002D2C34  C0 03 00 00 */	lfs f0, 0(r3)
/* 802D5CF8 002D2C38  EC E2 00 B2 */	fmuls f7, f2, f2
/* 802D5CFC 002D2C3C  C1 22 E6 40 */	lfs f9, lbl_8051C9A0@sda21(r2)
/* 802D5D00 002D2C40  C0 63 00 04 */	lfs f3, 4(r3)
/* 802D5D04 002D2C44  EC C0 20 3A */	fmadds f6, f0, f0, f4
/* 802D5D08 002D2C48  C0 83 00 14 */	lfs f4, 0x14(r3)
/* 802D5D0C 002D2C4C  C0 A3 00 24 */	lfs f5, 0x24(r3)
/* 802D5D10 002D2C50  ED 47 30 2A */	fadds f10, f7, f6
/* 802D5D14 002D2C54  C0 C3 00 08 */	lfs f6, 8(r3)
/* 802D5D18 002D2C58  C0 E3 00 18 */	lfs f7, 0x18(r3)
/* 802D5D1C 002D2C5C  C1 03 00 28 */	lfs f8, 0x28(r3)
/* 802D5D20 002D2C60  FC 0A 48 40 */	fcmpo cr0, f10, f9
/* 802D5D24 002D2C64  40 81 00 14 */	ble .L_802D5D38
/* 802D5D28 002D2C68  40 81 00 14 */	ble .L_802D5D3C
/* 802D5D2C 002D2C6C  FD 20 50 34 */	frsqrte f9, f10
/* 802D5D30 002D2C70  ED 49 02 B2 */	fmuls f10, f9, f10
/* 802D5D34 002D2C74  48 00 00 08 */	b .L_802D5D3C
.L_802D5D38:
/* 802D5D38 002D2C78  FD 40 48 90 */	fmr f10, f9
.L_802D5D3C:
/* 802D5D3C 002D2C7C  C1 22 E6 40 */	lfs f9, lbl_8051C9A0@sda21(r2)
/* 802D5D40 002D2C80  FC 0A 48 40 */	fcmpo cr0, f10, f9
/* 802D5D44 002D2C84  40 81 00 18 */	ble .L_802D5D5C
/* 802D5D48 002D2C88  C1 22 E6 58 */	lfs f9, lbl_8051C9B8@sda21(r2)
/* 802D5D4C 002D2C8C  ED 29 50 24 */	fdivs f9, f9, f10
/* 802D5D50 002D2C90  EC 00 02 72 */	fmuls f0, f0, f9
/* 802D5D54 002D2C94  EC 21 02 72 */	fmuls f1, f1, f9
/* 802D5D58 002D2C98  EC 42 02 72 */	fmuls f2, f2, f9
.L_802D5D5C:
/* 802D5D5C 002D2C9C  ED 44 01 32 */	fmuls f10, f4, f4
/* 802D5D60 002D2CA0  C1 22 E6 40 */	lfs f9, lbl_8051C9A0@sda21(r2)
/* 802D5D64 002D2CA4  ED 65 01 72 */	fmuls f11, f5, f5
/* 802D5D68 002D2CA8  ED 43 50 FA */	fmadds f10, f3, f3, f10
/* 802D5D6C 002D2CAC  ED 4B 50 2A */	fadds f10, f11, f10
/* 802D5D70 002D2CB0  FC 0A 48 40 */	fcmpo cr0, f10, f9
/* 802D5D74 002D2CB4  40 81 00 14 */	ble .L_802D5D88
/* 802D5D78 002D2CB8  40 81 00 14 */	ble .L_802D5D8C
/* 802D5D7C 002D2CBC  FD 20 50 34 */	frsqrte f9, f10
/* 802D5D80 002D2CC0  ED 49 02 B2 */	fmuls f10, f9, f10
/* 802D5D84 002D2CC4  48 00 00 08 */	b .L_802D5D8C
.L_802D5D88:
/* 802D5D88 002D2CC8  FD 40 48 90 */	fmr f10, f9
.L_802D5D8C:
/* 802D5D8C 002D2CCC  C1 22 E6 40 */	lfs f9, lbl_8051C9A0@sda21(r2)
/* 802D5D90 002D2CD0  FC 0A 48 40 */	fcmpo cr0, f10, f9
/* 802D5D94 002D2CD4  40 81 00 18 */	ble .L_802D5DAC
/* 802D5D98 002D2CD8  C1 22 E6 58 */	lfs f9, lbl_8051C9B8@sda21(r2)
/* 802D5D9C 002D2CDC  ED 29 50 24 */	fdivs f9, f9, f10
/* 802D5DA0 002D2CE0  EC 63 02 72 */	fmuls f3, f3, f9
/* 802D5DA4 002D2CE4  EC 84 02 72 */	fmuls f4, f4, f9
/* 802D5DA8 002D2CE8  EC A5 02 72 */	fmuls f5, f5, f9
.L_802D5DAC:
/* 802D5DAC 002D2CEC  ED 47 01 F2 */	fmuls f10, f7, f7
/* 802D5DB0 002D2CF0  C1 22 E6 40 */	lfs f9, lbl_8051C9A0@sda21(r2)
/* 802D5DB4 002D2CF4  ED 68 02 32 */	fmuls f11, f8, f8
/* 802D5DB8 002D2CF8  ED 46 51 BA */	fmadds f10, f6, f6, f10
/* 802D5DBC 002D2CFC  ED 4B 50 2A */	fadds f10, f11, f10
/* 802D5DC0 002D2D00  FC 0A 48 40 */	fcmpo cr0, f10, f9
/* 802D5DC4 002D2D04  40 81 00 14 */	ble .L_802D5DD8
/* 802D5DC8 002D2D08  40 81 00 14 */	ble .L_802D5DDC
/* 802D5DCC 002D2D0C  FD 20 50 34 */	frsqrte f9, f10
/* 802D5DD0 002D2D10  ED 49 02 B2 */	fmuls f10, f9, f10
/* 802D5DD4 002D2D14  48 00 00 08 */	b .L_802D5DDC
.L_802D5DD8:
/* 802D5DD8 002D2D18  FD 40 48 90 */	fmr f10, f9
.L_802D5DDC:
/* 802D5DDC 002D2D1C  C1 22 E6 40 */	lfs f9, lbl_8051C9A0@sda21(r2)
/* 802D5DE0 002D2D20  FC 0A 48 40 */	fcmpo cr0, f10, f9
/* 802D5DE4 002D2D24  40 81 00 18 */	ble .L_802D5DFC
/* 802D5DE8 002D2D28  C1 22 E6 58 */	lfs f9, lbl_8051C9B8@sda21(r2)
/* 802D5DEC 002D2D2C  ED 29 50 24 */	fdivs f9, f9, f10
/* 802D5DF0 002D2D30  EC C6 02 72 */	fmuls f6, f6, f9
/* 802D5DF4 002D2D34  EC E7 02 72 */	fmuls f7, f7, f9
/* 802D5DF8 002D2D38  ED 08 02 72 */	fmuls f8, f8, f9
.L_802D5DFC:
/* 802D5DFC 002D2D3C  ED 78 D8 28 */	fsubs f11, f24, f27
/* 802D5E00 002D2D40  3C C0 80 4B */	lis r6, __vt__Q24Game11Interaction@ha
/* 802D5E04 002D2D44  3C A0 80 4B */	lis r5, __vt__Q24Game14InteractAttack@ha
/* 802D5E08 002D2D48  3C 80 80 4B */	lis r4, __vt__Q24Game15InteractSwallow@ha
/* 802D5E0C 002D2D4C  3C 60 80 4C */	lis r3, __vt__Q24Game13InteractSarai@ha
/* 802D5E10 002D2D50  ED 59 E0 28 */	fsubs f10, f25, f28
/* 802D5E14 002D2D54  EC 21 02 F2 */	fmuls f1, f1, f11
/* 802D5E18 002D2D58  39 06 A3 00 */	addi r8, r6, __vt__Q24Game11Interaction@l
/* 802D5E1C 002D2D5C  EC 84 02 F2 */	fmuls f4, f4, f11
/* 802D5E20 002D2D60  38 E5 4D E0 */	addi r7, r5, __vt__Q24Game14InteractAttack@l
/* 802D5E24 002D2D64  ED 97 D0 28 */	fsubs f12, f23, f26
/* 802D5E28 002D2D68  38 C4 4D BC */	addi r6, r4, __vt__Q24Game15InteractSwallow@l
/* 802D5E2C 002D2D6C  ED 20 0A BA */	fmadds f9, f0, f10, f1
/* 802D5E30 002D2D70  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D5E34 002D2D74  EC 27 02 F2 */	fmuls f1, f7, f11
/* 802D5E38 002D2D78  38 03 86 44 */	addi r0, r3, __vt__Q24Game13InteractSarai@l
/* 802D5E3C 002D2D7C  EC 63 22 BA */	fmadds f3, f3, f10, f4
/* 802D5E40 002D2D80  38 A0 00 00 */	li r5, 0
/* 802D5E44 002D2D84  EC 82 4B 3A */	fmadds f4, f2, f12, f9
/* 802D5E48 002D2D88  7F E3 FB 78 */	mr r3, r31
/* 802D5E4C 002D2D8C  EC 26 0A BA */	fmadds f1, f6, f10, f1
/* 802D5E50 002D2D90  38 81 00 24 */	addi r4, r1, 0x24
/* 802D5E54 002D2D94  EC 45 1B 3A */	fmadds f2, f5, f12, f3
/* 802D5E58 002D2D98  D0 9D 00 20 */	stfs f4, 0x20(r29)
/* 802D5E5C 002D2D9C  EC 28 0B 3A */	fmadds f1, f8, f12, f1
/* 802D5E60 002D2DA0  D0 5D 00 24 */	stfs f2, 0x24(r29)
/* 802D5E64 002D2DA4  D0 3D 00 28 */	stfs f1, 0x28(r29)
/* 802D5E68 002D2DA8  91 01 00 24 */	stw r8, 0x24(r1)
/* 802D5E6C 002D2DAC  90 E1 00 24 */	stw r7, 0x24(r1)
/* 802D5E70 002D2DB0  90 C1 00 24 */	stw r6, 0x24(r1)
/* 802D5E74 002D2DB4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802D5E78 002D2DB8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802D5E7C 002D2DBC  93 A1 00 30 */	stw r29, 0x30(r1)
/* 802D5E80 002D2DC0  90 A1 00 34 */	stw r5, 0x34(r1)
/* 802D5E84 002D2DC4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D5E88 002D2DC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D5E8C 002D2DCC  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802D5E90 002D2DD0  7D 89 03 A6 */	mtctr r12
/* 802D5E94 002D2DD4  4E 80 04 21 */	bctrl 
/* 802D5E98 002D2DD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5E9C 002D2DDC  41 82 00 24 */	beq .L_802D5EC0
/* 802D5EA0 002D2DE0  57 83 10 3A */	slwi r3, r28, 2
/* 802D5EA4 002D2DE4  38 03 02 EC */	addi r0, r3, 0x2ec
/* 802D5EA8 002D2DE8  7F FE 01 2E */	stwx r31, r30, r0
/* 802D5EAC 002D2DEC  48 00 00 14 */	b .L_802D5EC0
.L_802D5EB0:
/* 802D5EB0 002D2DF0  3B 9C 00 01 */	addi r28, r28, 1
.L_802D5EB4:
/* 802D5EB4 002D2DF4  80 1E 02 E4 */	lwz r0, 0x2e4(r30)
/* 802D5EB8 002D2DF8  7C 1C 00 00 */	cmpw r28, r0
/* 802D5EBC 002D2DFC  41 80 FE 00 */	blt .L_802D5CBC
.L_802D5EC0:
/* 802D5EC0 002D2E00  80 01 00 20 */	lwz r0, 0x20(r1)
/* 802D5EC4 002D2E04  28 00 00 00 */	cmplwi r0, 0
/* 802D5EC8 002D2E08  40 82 00 24 */	bne .L_802D5EEC
/* 802D5ECC 002D2E0C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D5ED0 002D2E10  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D5ED4 002D2E14  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5ED8 002D2E18  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D5EDC 002D2E1C  7D 89 03 A6 */	mtctr r12
/* 802D5EE0 002D2E20  4E 80 04 21 */	bctrl 
/* 802D5EE4 002D2E24  90 61 00 18 */	stw r3, 0x18(r1)
/* 802D5EE8 002D2E28  48 00 00 94 */	b .L_802D5F7C
.L_802D5EEC:
/* 802D5EEC 002D2E2C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D5EF0 002D2E30  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D5EF4 002D2E34  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5EF8 002D2E38  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D5EFC 002D2E3C  7D 89 03 A6 */	mtctr r12
/* 802D5F00 002D2E40  4E 80 04 21 */	bctrl 
/* 802D5F04 002D2E44  90 61 00 18 */	stw r3, 0x18(r1)
/* 802D5F08 002D2E48  48 00 00 58 */	b .L_802D5F60
.L_802D5F0C:
/* 802D5F0C 002D2E4C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D5F10 002D2E50  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D5F14 002D2E54  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5F18 002D2E58  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802D5F1C 002D2E5C  7D 89 03 A6 */	mtctr r12
/* 802D5F20 002D2E60  4E 80 04 21 */	bctrl 
/* 802D5F24 002D2E64  7C 64 1B 78 */	mr r4, r3
/* 802D5F28 002D2E68  80 61 00 20 */	lwz r3, 0x20(r1)
/* 802D5F2C 002D2E6C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5F30 002D2E70  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D5F34 002D2E74  7D 89 03 A6 */	mtctr r12
/* 802D5F38 002D2E78  4E 80 04 21 */	bctrl 
/* 802D5F3C 002D2E7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5F40 002D2E80  40 82 00 3C */	bne .L_802D5F7C
/* 802D5F44 002D2E84  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D5F48 002D2E88  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D5F4C 002D2E8C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5F50 002D2E90  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D5F54 002D2E94  7D 89 03 A6 */	mtctr r12
/* 802D5F58 002D2E98  4E 80 04 21 */	bctrl 
/* 802D5F5C 002D2E9C  90 61 00 18 */	stw r3, 0x18(r1)
.L_802D5F60:
/* 802D5F60 002D2EA0  81 81 00 14 */	lwz r12, 0x14(r1)
/* 802D5F64 002D2EA4  38 61 00 14 */	addi r3, r1, 0x14
/* 802D5F68 002D2EA8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D5F6C 002D2EAC  7D 89 03 A6 */	mtctr r12
/* 802D5F70 002D2EB0  4E 80 04 21 */	bctrl 
/* 802D5F74 002D2EB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D5F78 002D2EB8  41 82 FF 94 */	beq .L_802D5F0C
.L_802D5F7C:
/* 802D5F7C 002D2EBC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802D5F80 002D2EC0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D5F84 002D2EC4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D5F88 002D2EC8  7D 89 03 A6 */	mtctr r12
/* 802D5F8C 002D2ECC  4E 80 04 21 */	bctrl 
/* 802D5F90 002D2ED0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802D5F94 002D2ED4  7C 04 18 40 */	cmplw r4, r3
/* 802D5F98 002D2ED8  40 82 FC 8C */	bne .L_802D5C24
/* 802D5F9C 002D2EDC  80 1E 02 EC */	lwz r0, 0x2ec(r30)
/* 802D5FA0 002D2EE0  28 00 00 00 */	cmplwi r0, 0
/* 802D5FA4 002D2EE4  40 82 00 10 */	bne .L_802D5FB4
/* 802D5FA8 002D2EE8  80 1E 02 F0 */	lwz r0, 0x2f0(r30)
/* 802D5FAC 002D2EEC  28 00 00 00 */	cmplwi r0, 0
/* 802D5FB0 002D2EF0  41 82 00 0C */	beq .L_802D5FBC
.L_802D5FB4:
/* 802D5FB4 002D2EF4  38 60 00 01 */	li r3, 1
/* 802D5FB8 002D2EF8  48 00 00 08 */	b .L_802D5FC0
.L_802D5FBC:
/* 802D5FBC 002D2EFC  38 60 00 00 */	li r3, 0
.L_802D5FC0:
/* 802D5FC0 002D2F00  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 802D5FC4 002D2F04  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 802D5FC8 002D2F08  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 802D5FCC 002D2F0C  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 802D5FD0 002D2F10  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 802D5FD4 002D2F14  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 802D5FD8 002D2F18  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 802D5FDC 002D2F1C  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 802D5FE0 002D2F20  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 802D5FE4 002D2F24  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 802D5FE8 002D2F28  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 802D5FEC 002D2F2C  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 802D5FF0 002D2F30  E3 21 00 78 */	psq_l f25, 120(r1), 0, qr0
/* 802D5FF4 002D2F34  CB 21 00 70 */	lfd f25, 0x70(r1)
/* 802D5FF8 002D2F38  E3 01 00 68 */	psq_l f24, 104(r1), 0, qr0
/* 802D5FFC 002D2F3C  CB 01 00 60 */	lfd f24, 0x60(r1)
/* 802D6000 002D2F40  E2 E1 00 58 */	psq_l f23, 88(r1), 0, qr0
/* 802D6004 002D2F44  CA E1 00 50 */	lfd f23, 0x50(r1)
/* 802D6008 002D2F48  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802D600C 002D2F4C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802D6010 002D2F50  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 802D6014 002D2F54  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 802D6018 002D2F58  83 81 00 40 */	lwz r28, 0x40(r1)
/* 802D601C 002D2F5C  7C 08 03 A6 */	mtlr r0
/* 802D6020 002D2F60  38 21 00 E0 */	addi r1, r1, 0xe0
/* 802D6024 002D2F64  4E 80 00 20 */	blr 
.endfn suckNavi__Q34Game9OniKurage3ObjFf

.fn updateCollPartOffset__Q34Game9OniKurage3ObjFv, global
/* 802D6028 002D2F68  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D602C 002D2F6C  7C 08 02 A6 */	mflr r0
/* 802D6030 002D2F70  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D6034 002D2F74  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802D6038 002D2F78  3B E2 E6 30 */	addi r31, r2, "cDefaultKamuJointOffset__Q34Game9OniKurage23@unnamed@OniKurage_cpp@"@sda21
/* 802D603C 002D2F7C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802D6040 002D2F80  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802D6044 002D2F84  3B A0 00 00 */	li r29, 0
/* 802D6048 002D2F88  93 81 00 20 */	stw r28, 0x20(r1)
/* 802D604C 002D2F8C  7C 7C 1B 78 */	mr r28, r3
/* 802D6050 002D2F90  7F 9E E3 78 */	mr r30, r28
/* 802D6054 002D2F94  48 00 02 14 */	b .L_802D6268
.L_802D6058:
/* 802D6058 002D2F98  7F A4 EB 78 */	mr r4, r29
/* 802D605C 002D2F9C  38 7C 02 E4 */	addi r3, r28, 0x2e4
/* 802D6060 002D2FA0  4B E6 27 19 */	bl getSlot__10MouthSlotsFi
/* 802D6064 002D2FA4  80 03 00 64 */	lwz r0, 0x64(r3)
/* 802D6068 002D2FA8  28 00 00 00 */	cmplwi r0, 0
/* 802D606C 002D2FAC  41 82 01 F0 */	beq .L_802D625C
/* 802D6070 002D2FB0  C0 A3 00 20 */	lfs f5, 0x20(r3)
/* 802D6074 002D2FB4  C0 9F 00 00 */	lfs f4, 0(r31)
/* 802D6078 002D2FB8  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D607C 002D2FBC  EC 25 20 28 */	fsubs f1, f5, f4
/* 802D6080 002D2FC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D6084 002D2FC4  40 81 00 08 */	ble .L_802D608C
/* 802D6088 002D2FC8  48 00 00 08 */	b .L_802D6090
.L_802D608C:
/* 802D608C 002D2FCC  FC 20 08 50 */	fneg f1, f1
.L_802D6090:
/* 802D6090 002D2FD0  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D6094 002D2FD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D6098 002D2FD8  41 81 00 54 */	bgt .L_802D60EC
/* 802D609C 002D2FDC  C0 42 E6 8C */	lfs f2, lbl_8051C9EC@sda21(r2)
/* 802D60A0 002D2FE0  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 802D60A4 002D2FE4  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D60A8 002D2FE8  EC 22 08 2A */	fadds f1, f2, f1
/* 802D60AC 002D2FEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D60B0 002D2FF0  40 81 00 08 */	ble .L_802D60B8
/* 802D60B4 002D2FF4  48 00 00 08 */	b .L_802D60BC
.L_802D60B8:
/* 802D60B8 002D2FF8  FC 20 08 50 */	fneg f1, f1
.L_802D60BC:
/* 802D60BC 002D2FFC  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D60C0 002D3000  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D60C4 002D3004  41 81 00 28 */	bgt .L_802D60EC
/* 802D60C8 002D3008  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 802D60CC 002D300C  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D60D0 002D3010  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D60D4 002D3014  40 81 00 08 */	ble .L_802D60DC
/* 802D60D8 002D3018  48 00 00 08 */	b .L_802D60E0
.L_802D60DC:
/* 802D60DC 002D301C  FC 20 08 50 */	fneg f1, f1
.L_802D60E0:
/* 802D60E0 002D3020  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D60E4 002D3024  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D60E8 002D3028  40 81 01 74 */	ble .L_802D625C
.L_802D60EC:
/* 802D60EC 002D302C  C0 02 E6 9C */	lfs f0, lbl_8051C9FC@sda21(r2)
/* 802D60F0 002D3030  C0 62 E6 98 */	lfs f3, lbl_8051C9F8@sda21(r2)
/* 802D60F4 002D3034  EC 40 01 32 */	fmuls f2, f0, f4
/* 802D60F8 002D3038  C0 22 E6 A0 */	lfs f1, lbl_8051CA00@sda21(r2)
/* 802D60FC 002D303C  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D6100 002D3040  EC 45 10 FA */	fmadds f2, f5, f3, f2
/* 802D6104 002D3044  D0 43 00 20 */	stfs f2, 0x20(r3)
/* 802D6108 002D3048  C0 63 00 24 */	lfs f3, 0x24(r3)
/* 802D610C 002D304C  EC 43 08 28 */	fsubs f2, f3, f1
/* 802D6110 002D3050  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802D6114 002D3054  40 81 00 08 */	ble .L_802D611C
/* 802D6118 002D3058  48 00 00 08 */	b .L_802D6120
.L_802D611C:
/* 802D611C 002D305C  FC 40 10 50 */	fneg f2, f2
.L_802D6120:
/* 802D6120 002D3060  C0 22 E6 A4 */	lfs f1, lbl_8051CA04@sda21(r2)
/* 802D6124 002D3064  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802D6128 002D3068  40 80 00 0C */	bge .L_802D6134
/* 802D612C 002D306C  C0 02 E6 A0 */	lfs f0, lbl_8051CA00@sda21(r2)
/* 802D6130 002D3070  48 00 00 1C */	b .L_802D614C
.L_802D6134:
/* 802D6134 002D3074  C0 02 E6 A0 */	lfs f0, lbl_8051CA00@sda21(r2)
/* 802D6138 002D3078  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802D613C 002D307C  40 80 00 0C */	bge .L_802D6148
/* 802D6140 002D3080  EC 03 08 2A */	fadds f0, f3, f1
/* 802D6144 002D3084  48 00 00 08 */	b .L_802D614C
.L_802D6148:
/* 802D6148 002D3088  EC 03 08 28 */	fsubs f0, f3, f1
.L_802D614C:
/* 802D614C 002D308C  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 802D6150 002D3090  C0 02 E6 98 */	lfs f0, lbl_8051C9F8@sda21(r2)
/* 802D6154 002D3094  C0 43 00 28 */	lfs f2, 0x28(r3)
/* 802D6158 002D3098  C0 3F 00 00 */	lfs f1, 0(r31)
/* 802D615C 002D309C  EC 42 00 32 */	fmuls f2, f2, f0
/* 802D6160 002D30A0  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D6164 002D30A4  D0 43 00 28 */	stfs f2, 0x28(r3)
/* 802D6168 002D30A8  C0 43 00 20 */	lfs f2, 0x20(r3)
/* 802D616C 002D30AC  EC 22 08 28 */	fsubs f1, f2, f1
/* 802D6170 002D30B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D6174 002D30B4  40 81 00 08 */	ble .L_802D617C
/* 802D6178 002D30B8  48 00 00 08 */	b .L_802D6180
.L_802D617C:
/* 802D617C 002D30BC  FC 20 08 50 */	fneg f1, f1
.L_802D6180:
/* 802D6180 002D30C0  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D6184 002D30C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D6188 002D30C8  40 80 00 D4 */	bge .L_802D625C
/* 802D618C 002D30CC  C0 42 E6 8C */	lfs f2, lbl_8051C9EC@sda21(r2)
/* 802D6190 002D30D0  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 802D6194 002D30D4  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D6198 002D30D8  EC 22 08 2A */	fadds f1, f2, f1
/* 802D619C 002D30DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D61A0 002D30E0  40 81 00 08 */	ble .L_802D61A8
/* 802D61A4 002D30E4  48 00 00 08 */	b .L_802D61AC
.L_802D61A8:
/* 802D61A8 002D30E8  FC 20 08 50 */	fneg f1, f1
.L_802D61AC:
/* 802D61AC 002D30EC  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D61B0 002D30F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D61B4 002D30F4  40 80 00 A8 */	bge .L_802D625C
/* 802D61B8 002D30F8  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 802D61BC 002D30FC  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D61C0 002D3100  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D61C4 002D3104  40 81 00 08 */	ble .L_802D61CC
/* 802D61C8 002D3108  48 00 00 08 */	b .L_802D61D0
.L_802D61CC:
/* 802D61CC 002D310C  FC 20 08 50 */	fneg f1, f1
.L_802D61D0:
/* 802D61D0 002D3110  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D61D4 002D3114  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D61D8 002D3118  40 80 00 84 */	bge .L_802D625C
/* 802D61DC 002D311C  80 7E 02 EC */	lwz r3, 0x2ec(r30)
/* 802D61E0 002D3120  28 03 00 00 */	cmplwi r3, 0
/* 802D61E4 002D3124  41 82 00 20 */	beq .L_802D6204
/* 802D61E8 002D3128  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 802D61EC 002D312C  38 80 08 15 */	li r4, 0x815
/* 802D61F0 002D3130  38 A0 00 00 */	li r5, 0
/* 802D61F4 002D3134  81 83 00 28 */	lwz r12, 0x28(r3)
/* 802D61F8 002D3138  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 802D61FC 002D313C  7D 89 03 A6 */	mtctr r12
/* 802D6200 002D3140  4E 80 04 21 */	bctrl 
.L_802D6204:
/* 802D6204 002D3144  7F 84 E3 78 */	mr r4, r28
/* 802D6208 002D3148  38 61 00 08 */	addi r3, r1, 8
/* 802D620C 002D314C  81 9C 00 00 */	lwz r12, 0(r28)
/* 802D6210 002D3150  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D6214 002D3154  7D 89 03 A6 */	mtctr r12
/* 802D6218 002D3158  4E 80 04 21 */	bctrl 
/* 802D621C 002D315C  C0 41 00 08 */	lfs f2, 8(r1)
/* 802D6220 002D3160  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D6224 002D3164  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802D6228 002D3168  38 80 00 02 */	li r4, 2
/* 802D622C 002D316C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802D6230 002D3170  38 C0 00 02 */	li r6, 2
/* 802D6234 002D3174  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802D6238 002D3178  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802D623C 002D317C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802D6240 002D3180  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802D6244 002D3184  4B F7 BF F9 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802D6248 002D3188  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802D624C 002D318C  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D6250 002D3190  38 80 00 0A */	li r4, 0xa
/* 802D6254 002D3194  38 C0 00 02 */	li r6, 2
/* 802D6258 002D3198  4B F7 D5 29 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
.L_802D625C:
/* 802D625C 002D319C  3B FF 00 04 */	addi r31, r31, 4
/* 802D6260 002D31A0  3B DE 00 04 */	addi r30, r30, 4
/* 802D6264 002D31A4  3B BD 00 01 */	addi r29, r29, 1
.L_802D6268:
/* 802D6268 002D31A8  80 1C 02 E4 */	lwz r0, 0x2e4(r28)
/* 802D626C 002D31AC  7C 1D 00 00 */	cmpw r29, r0
/* 802D6270 002D31B0  41 80 FD E8 */	blt .L_802D6058
/* 802D6274 002D31B4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D6278 002D31B8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802D627C 002D31BC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802D6280 002D31C0  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802D6284 002D31C4  83 81 00 20 */	lwz r28, 0x20(r1)
/* 802D6288 002D31C8  7C 08 03 A6 */	mtlr r0
/* 802D628C 002D31CC  38 21 00 30 */	addi r1, r1, 0x30
/* 802D6290 002D31D0  4E 80 00 20 */	blr 
.endfn updateCollPartOffset__Q34Game9OniKurage3ObjFv

.fn isFinishNaviSuck__Q34Game9OniKurage3ObjFv, global
/* 802D6294 002D31D4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D6298 002D31D8  7C 08 02 A6 */	mflr r0
/* 802D629C 002D31DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D62A0 002D31E0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D62A4 002D31E4  3B E2 E6 30 */	addi r31, r2, "cDefaultKamuJointOffset__Q34Game9OniKurage23@unnamed@OniKurage_cpp@"@sda21
/* 802D62A8 002D31E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802D62AC 002D31EC  3B C0 00 01 */	li r30, 1
/* 802D62B0 002D31F0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802D62B4 002D31F4  3B A0 00 00 */	li r29, 0
/* 802D62B8 002D31F8  93 81 00 10 */	stw r28, 0x10(r1)
/* 802D62BC 002D31FC  7C 7C 1B 78 */	mr r28, r3
/* 802D62C0 002D3200  48 00 00 A4 */	b .L_802D6364
.L_802D62C4:
/* 802D62C4 002D3204  7F A4 EB 78 */	mr r4, r29
/* 802D62C8 002D3208  38 7C 02 E4 */	addi r3, r28, 0x2e4
/* 802D62CC 002D320C  4B E6 24 AD */	bl getSlot__10MouthSlotsFi
/* 802D62D0 002D3210  80 03 00 64 */	lwz r0, 0x64(r3)
/* 802D62D4 002D3214  28 00 00 00 */	cmplwi r0, 0
/* 802D62D8 002D3218  41 82 00 84 */	beq .L_802D635C
/* 802D62DC 002D321C  C0 43 00 20 */	lfs f2, 0x20(r3)
/* 802D62E0 002D3220  C0 3F 00 00 */	lfs f1, 0(r31)
/* 802D62E4 002D3224  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D62E8 002D3228  EC 22 08 28 */	fsubs f1, f2, f1
/* 802D62EC 002D322C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D62F0 002D3230  40 81 00 08 */	ble .L_802D62F8
/* 802D62F4 002D3234  48 00 00 08 */	b .L_802D62FC
.L_802D62F8:
/* 802D62F8 002D3238  FC 20 08 50 */	fneg f1, f1
.L_802D62FC:
/* 802D62FC 002D323C  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D6300 002D3240  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D6304 002D3244  41 81 00 54 */	bgt .L_802D6358
/* 802D6308 002D3248  C0 42 E6 8C */	lfs f2, lbl_8051C9EC@sda21(r2)
/* 802D630C 002D324C  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 802D6310 002D3250  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D6314 002D3254  EC 22 08 2A */	fadds f1, f2, f1
/* 802D6318 002D3258  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D631C 002D325C  40 81 00 08 */	ble .L_802D6324
/* 802D6320 002D3260  48 00 00 08 */	b .L_802D6328
.L_802D6324:
/* 802D6324 002D3264  FC 20 08 50 */	fneg f1, f1
.L_802D6328:
/* 802D6328 002D3268  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D632C 002D326C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D6330 002D3270  41 81 00 28 */	bgt .L_802D6358
/* 802D6334 002D3274  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 802D6338 002D3278  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D633C 002D327C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D6340 002D3280  40 81 00 08 */	ble .L_802D6348
/* 802D6344 002D3284  48 00 00 08 */	b .L_802D634C
.L_802D6348:
/* 802D6348 002D3288  FC 20 08 50 */	fneg f1, f1
.L_802D634C:
/* 802D634C 002D328C  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D6350 002D3290  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D6354 002D3294  40 81 00 08 */	ble .L_802D635C
.L_802D6358:
/* 802D6358 002D3298  3B C0 00 00 */	li r30, 0
.L_802D635C:
/* 802D635C 002D329C  3B FF 00 04 */	addi r31, r31, 4
/* 802D6360 002D32A0  3B BD 00 01 */	addi r29, r29, 1
.L_802D6364:
/* 802D6364 002D32A4  80 1C 02 E4 */	lwz r0, 0x2e4(r28)
/* 802D6368 002D32A8  7C 1D 00 00 */	cmpw r29, r0
/* 802D636C 002D32AC  41 80 FF 58 */	blt .L_802D62C4
/* 802D6370 002D32B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D6374 002D32B4  7F C3 F3 78 */	mr r3, r30
/* 802D6378 002D32B8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D637C 002D32BC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802D6380 002D32C0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802D6384 002D32C4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 802D6388 002D32C8  7C 08 03 A6 */	mtlr r0
/* 802D638C 002D32CC  38 21 00 20 */	addi r1, r1, 0x20
/* 802D6390 002D32D0  4E 80 00 20 */	blr 
.endfn isFinishNaviSuck__Q34Game9OniKurage3ObjFv

.fn isNaviSucked__Q34Game9OniKurage3ObjFv, global
/* 802D6394 002D32D4  80 03 02 EC */	lwz r0, 0x2ec(r3)
/* 802D6398 002D32D8  28 00 00 00 */	cmplwi r0, 0
/* 802D639C 002D32DC  40 82 00 10 */	bne .L_802D63AC
/* 802D63A0 002D32E0  80 03 02 F0 */	lwz r0, 0x2f0(r3)
/* 802D63A4 002D32E4  28 00 00 00 */	cmplwi r0, 0
/* 802D63A8 002D32E8  41 82 00 0C */	beq .L_802D63B4
.L_802D63AC:
/* 802D63AC 002D32EC  38 60 00 01 */	li r3, 1
/* 802D63B0 002D32F0  4E 80 00 20 */	blr 
.L_802D63B4:
/* 802D63B4 002D32F4  38 60 00 00 */	li r3, 0
/* 802D63B8 002D32F8  4E 80 00 20 */	blr 
.endfn isNaviSucked__Q34Game9OniKurage3ObjFv

.fn flickStickNavi__Q34Game9OniKurage3ObjFb, global
/* 802D63BC 002D32FC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802D63C0 002D3300  7C 08 02 A6 */	mflr r0
/* 802D63C4 002D3304  90 01 00 64 */	stw r0, 0x64(r1)
/* 802D63C8 002D3308  BF 41 00 48 */	stmw r26, 0x48(r1)
/* 802D63CC 002D330C  7C 7B 1B 78 */	mr r27, r3
/* 802D63D0 002D3310  7C 9C 23 78 */	mr r28, r4
/* 802D63D4 002D3314  3B A0 00 00 */	li r29, 0
/* 802D63D8 002D3318  3B E2 E6 38 */	addi r31, r2, "cFlickKamuJointOffset__Q34Game9OniKurage23@unnamed@OniKurage_cpp@"@sda21
/* 802D63DC 002D331C  3B C2 E6 30 */	addi r30, r2, "cDefaultKamuJointOffset__Q34Game9OniKurage23@unnamed@OniKurage_cpp@"@sda21
/* 802D63E0 002D3320  48 00 02 58 */	b .L_802D6638
.L_802D63E4:
/* 802D63E4 002D3324  7F A4 EB 78 */	mr r4, r29
/* 802D63E8 002D3328  38 7B 02 E4 */	addi r3, r27, 0x2e4
/* 802D63EC 002D332C  4B E6 23 8D */	bl getSlot__10MouthSlotsFi
/* 802D63F0 002D3330  80 03 00 64 */	lwz r0, 0x64(r3)
/* 802D63F4 002D3334  28 00 00 00 */	cmplwi r0, 0
/* 802D63F8 002D3338  41 82 02 34 */	beq .L_802D662C
/* 802D63FC 002D333C  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 802D6400 002D3340  C0 7F 00 00 */	lfs f3, 0(r31)
/* 802D6404 002D3344  C0 82 E6 A8 */	lfs f4, lbl_8051CA08@sda21(r2)
/* 802D6408 002D3348  41 82 00 0C */	beq .L_802D6414
/* 802D640C 002D334C  C0 7E 00 00 */	lfs f3, 0(r30)
/* 802D6410 002D3350  C0 82 E6 AC */	lfs f4, lbl_8051CA0C@sda21(r2)
.L_802D6414:
/* 802D6414 002D3354  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 802D6418 002D3358  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D641C 002D335C  EC 41 18 28 */	fsubs f2, f1, f3
/* 802D6420 002D3360  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802D6424 002D3364  40 81 00 08 */	ble .L_802D642C
/* 802D6428 002D3368  48 00 00 08 */	b .L_802D6430
.L_802D642C:
/* 802D642C 002D336C  FC 40 10 50 */	fneg f2, f2
.L_802D6430:
/* 802D6430 002D3370  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D6434 002D3374  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802D6438 002D3378  40 80 00 0C */	bge .L_802D6444
/* 802D643C 002D337C  FC 00 18 90 */	fmr f0, f3
/* 802D6440 002D3380  48 00 00 18 */	b .L_802D6458
.L_802D6444:
/* 802D6444 002D3384  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 802D6448 002D3388  40 80 00 0C */	bge .L_802D6454
/* 802D644C 002D338C  EC 01 00 2A */	fadds f0, f1, f0
/* 802D6450 002D3390  48 00 00 08 */	b .L_802D6458
.L_802D6454:
/* 802D6454 002D3394  EC 01 00 28 */	fsubs f0, f1, f0
.L_802D6458:
/* 802D6458 002D3398  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 802D645C 002D339C  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D6460 002D33A0  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 802D6464 002D33A4  EC 41 20 28 */	fsubs f2, f1, f4
/* 802D6468 002D33A8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802D646C 002D33AC  40 81 00 08 */	ble .L_802D6474
/* 802D6470 002D33B0  48 00 00 08 */	b .L_802D6478
.L_802D6474:
/* 802D6474 002D33B4  FC 40 10 50 */	fneg f2, f2
.L_802D6478:
/* 802D6478 002D33B8  C0 02 E6 B0 */	lfs f0, lbl_8051CA10@sda21(r2)
/* 802D647C 002D33BC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802D6480 002D33C0  40 80 00 0C */	bge .L_802D648C
/* 802D6484 002D33C4  FC 00 20 90 */	fmr f0, f4
/* 802D6488 002D33C8  48 00 00 18 */	b .L_802D64A0
.L_802D648C:
/* 802D648C 002D33CC  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802D6490 002D33D0  40 80 00 0C */	bge .L_802D649C
/* 802D6494 002D33D4  EC 01 00 2A */	fadds f0, f1, f0
/* 802D6498 002D33D8  48 00 00 08 */	b .L_802D64A0
.L_802D649C:
/* 802D649C 002D33DC  EC 01 00 28 */	fsubs f0, f1, f0
.L_802D64A0:
/* 802D64A0 002D33E0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 802D64A4 002D33E4  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D64A8 002D33E8  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 802D64AC 002D33EC  EC 21 18 28 */	fsubs f1, f1, f3
/* 802D64B0 002D33F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D64B4 002D33F4  40 81 00 08 */	ble .L_802D64BC
/* 802D64B8 002D33F8  48 00 00 08 */	b .L_802D64C0
.L_802D64BC:
/* 802D64BC 002D33FC  FC 20 08 50 */	fneg f1, f1
.L_802D64C0:
/* 802D64C0 002D3400  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D64C4 002D3404  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D64C8 002D3408  40 80 01 64 */	bge .L_802D662C
/* 802D64CC 002D340C  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 802D64D0 002D3410  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D64D4 002D3414  EC 21 20 28 */	fsubs f1, f1, f4
/* 802D64D8 002D3418  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D64DC 002D341C  40 81 00 08 */	ble .L_802D64E4
/* 802D64E0 002D3420  48 00 00 08 */	b .L_802D64E8
.L_802D64E4:
/* 802D64E4 002D3424  FC 20 08 50 */	fneg f1, f1
.L_802D64E8:
/* 802D64E8 002D3428  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D64EC 002D342C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D64F0 002D3430  40 80 01 3C */	bge .L_802D662C
/* 802D64F4 002D3434  83 43 00 64 */	lwz r26, 0x64(r3)
/* 802D64F8 002D3438  28 1A 00 00 */	cmplwi r26, 0
/* 802D64FC 002D343C  41 82 01 30 */	beq .L_802D662C
/* 802D6500 002D3440  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802D6504 002D3444  C0 22 E6 40 */	lfs f1, lbl_8051C9A0@sda21(r2)
/* 802D6508 002D3448  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802D650C 002D344C  C0 02 E6 B4 */	lfs f0, lbl_8051CA14@sda21(r2)
/* 802D6510 002D3450  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractFlick@ha
/* 802D6514 002D3454  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802D6518 002D3458  38 03 4E 04 */	addi r0, r3, __vt__Q24Game13InteractFlick@l
/* 802D651C 002D345C  7F 43 D3 78 */	mr r3, r26
/* 802D6520 002D3460  93 61 00 30 */	stw r27, 0x30(r1)
/* 802D6524 002D3464  38 81 00 2C */	addi r4, r1, 0x2c
/* 802D6528 002D3468  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802D652C 002D346C  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 802D6530 002D3470  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 802D6534 002D3474  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 802D6538 002D3478  81 9A 00 00 */	lwz r12, 0(r26)
/* 802D653C 002D347C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802D6540 002D3480  7D 89 03 A6 */	mtctr r12
/* 802D6544 002D3484  4E 80 04 21 */	bctrl 
/* 802D6548 002D3488  7F 44 D3 78 */	mr r4, r26
/* 802D654C 002D348C  38 61 00 08 */	addi r3, r1, 8
/* 802D6550 002D3490  81 9A 00 00 */	lwz r12, 0(r26)
/* 802D6554 002D3494  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D6558 002D3498  7D 89 03 A6 */	mtctr r12
/* 802D655C 002D349C  4E 80 04 21 */	bctrl 
/* 802D6560 002D34A0  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 802D6564 002D34A4  C0 1B 01 94 */	lfs f0, 0x194(r27)
/* 802D6568 002D34A8  C0 21 00 08 */	lfs f1, 8(r1)
/* 802D656C 002D34AC  EC 82 00 28 */	fsubs f4, f2, f0
/* 802D6570 002D34B0  C0 1B 01 8C */	lfs f0, 0x18c(r27)
/* 802D6574 002D34B4  C0 62 E6 40 */	lfs f3, lbl_8051C9A0@sda21(r2)
/* 802D6578 002D34B8  EC 41 00 28 */	fsubs f2, f1, f0
/* 802D657C 002D34BC  EC 24 01 32 */	fmuls f1, f4, f4
/* 802D6580 002D34C0  EC 02 18 BA */	fmadds f0, f2, f2, f3
/* 802D6584 002D34C4  EC 21 00 2A */	fadds f1, f1, f0
/* 802D6588 002D34C8  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 802D658C 002D34CC  40 81 00 14 */	ble .L_802D65A0
/* 802D6590 002D34D0  40 81 00 14 */	ble .L_802D65A4
/* 802D6594 002D34D4  FC 00 08 34 */	frsqrte f0, f1
/* 802D6598 002D34D8  EC 20 00 72 */	fmuls f1, f0, f1
/* 802D659C 002D34DC  48 00 00 08 */	b .L_802D65A4
.L_802D65A0:
/* 802D65A0 002D34E0  FC 20 18 90 */	fmr f1, f3
.L_802D65A4:
/* 802D65A4 002D34E4  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D65A8 002D34E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D65AC 002D34EC  40 81 00 18 */	ble .L_802D65C4
/* 802D65B0 002D34F0  C0 02 E6 58 */	lfs f0, lbl_8051C9B8@sda21(r2)
/* 802D65B4 002D34F4  EC 00 08 24 */	fdivs f0, f0, f1
/* 802D65B8 002D34F8  EC 42 00 32 */	fmuls f2, f2, f0
/* 802D65BC 002D34FC  EC 63 00 32 */	fmuls f3, f3, f0
/* 802D65C0 002D3500  EC 84 00 32 */	fmuls f4, f4, f0
.L_802D65C4:
/* 802D65C4 002D3504  80 BB 00 C0 */	lwz r5, 0xc0(r27)
/* 802D65C8 002D3508  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802D65CC 002D350C  C0 02 E6 60 */	lfs f0, lbl_8051C9C0@sda21(r2)
/* 802D65D0 002D3510  3C 80 80 4B */	lis r4, __vt__Q24Game12InteractWind@ha
/* 802D65D4 002D3514  C0 25 06 04 */	lfs f1, 0x604(r5)
/* 802D65D8 002D3518  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802D65DC 002D351C  EC 42 00 32 */	fmuls f2, f2, f0
/* 802D65E0 002D3520  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractBomb@ha
/* 802D65E4 002D3524  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D65E8 002D3528  EC 63 00 32 */	fmuls f3, f3, f0
/* 802D65EC 002D352C  EC 84 00 32 */	fmuls f4, f4, f0
/* 802D65F0 002D3530  38 04 49 74 */	addi r0, r4, __vt__Q24Game12InteractWind@l
/* 802D65F4 002D3534  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D65F8 002D3538  38 03 49 2C */	addi r0, r3, __vt__Q24Game12InteractBomb@l
/* 802D65FC 002D353C  7F 43 D3 78 */	mr r3, r26
/* 802D6600 002D3540  38 81 00 14 */	addi r4, r1, 0x14
/* 802D6604 002D3544  93 61 00 18 */	stw r27, 0x18(r1)
/* 802D6608 002D3548  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802D660C 002D354C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802D6610 002D3550  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 802D6614 002D3554  D0 81 00 28 */	stfs f4, 0x28(r1)
/* 802D6618 002D3558  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D661C 002D355C  81 9A 00 00 */	lwz r12, 0(r26)
/* 802D6620 002D3560  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802D6624 002D3564  7D 89 03 A6 */	mtctr r12
/* 802D6628 002D3568  4E 80 04 21 */	bctrl 
.L_802D662C:
/* 802D662C 002D356C  3B FF 00 04 */	addi r31, r31, 4
/* 802D6630 002D3570  3B DE 00 04 */	addi r30, r30, 4
/* 802D6634 002D3574  3B BD 00 01 */	addi r29, r29, 1
.L_802D6638:
/* 802D6638 002D3578  80 1B 02 E4 */	lwz r0, 0x2e4(r27)
/* 802D663C 002D357C  7C 1D 00 00 */	cmpw r29, r0
/* 802D6640 002D3580  41 80 FD A4 */	blt .L_802D63E4
/* 802D6644 002D3584  BB 41 00 48 */	lmw r26, 0x48(r1)
/* 802D6648 002D3588  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802D664C 002D358C  7C 08 03 A6 */	mtlr r0
/* 802D6650 002D3590  38 21 00 60 */	addi r1, r1, 0x60
/* 802D6654 002D3594  4E 80 00 20 */	blr 
.endfn flickStickNavi__Q34Game9OniKurage3ObjFb

.fn escapeCheckNavi__Q34Game9OniKurage3ObjFv, global
/* 802D6658 002D3598  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D665C 002D359C  7C 08 02 A6 */	mflr r0
/* 802D6660 002D35A0  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D6664 002D35A4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802D6668 002D35A8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802D666C 002D35AC  3B C0 00 00 */	li r30, 0
/* 802D6670 002D35B0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802D6674 002D35B4  7C 7D 1B 78 */	mr r29, r3
/* 802D6678 002D35B8  7F BF EB 78 */	mr r31, r29
/* 802D667C 002D35BC  48 00 00 E4 */	b .L_802D6760
.L_802D6680:
/* 802D6680 002D35C0  7F C4 F3 78 */	mr r4, r30
/* 802D6684 002D35C4  38 7D 02 E4 */	addi r3, r29, 0x2e4
/* 802D6688 002D35C8  4B E6 20 F1 */	bl getSlot__10MouthSlotsFi
/* 802D668C 002D35CC  80 63 00 64 */	lwz r3, 0x64(r3)
/* 802D6690 002D35D0  28 03 00 00 */	cmplwi r3, 0
/* 802D6694 002D35D4  41 82 00 18 */	beq .L_802D66AC
/* 802D6698 002D35D8  80 1F 02 EC */	lwz r0, 0x2ec(r31)
/* 802D669C 002D35DC  28 00 00 00 */	cmplwi r0, 0
/* 802D66A0 002D35E0  40 82 00 B8 */	bne .L_802D6758
/* 802D66A4 002D35E4  90 7F 02 EC */	stw r3, 0x2ec(r31)
/* 802D66A8 002D35E8  48 00 00 B0 */	b .L_802D6758
.L_802D66AC:
/* 802D66AC 002D35EC  80 1F 02 EC */	lwz r0, 0x2ec(r31)
/* 802D66B0 002D35F0  28 00 00 00 */	cmplwi r0, 0
/* 802D66B4 002D35F4  41 82 00 A4 */	beq .L_802D6758
/* 802D66B8 002D35F8  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 802D66BC 002D35FC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802D66C0 002D3600  41 82 00 10 */	beq .L_802D66D0
/* 802D66C4 002D3604  C0 02 E6 40 */	lfs f0, lbl_8051C9A0@sda21(r2)
/* 802D66C8 002D3608  D0 1D 02 00 */	stfs f0, 0x200(r29)
/* 802D66CC 002D360C  48 00 00 84 */	b .L_802D6750
.L_802D66D0:
/* 802D66D0 002D3610  7F A3 EB 78 */	mr r3, r29
/* 802D66D4 002D3614  48 00 06 A5 */	bl createFlickNaviEffect__Q34Game9OniKurage3ObjFv
/* 802D66D8 002D3618  7F A4 EB 78 */	mr r4, r29
/* 802D66DC 002D361C  38 61 00 08 */	addi r3, r1, 8
/* 802D66E0 002D3620  81 9D 00 00 */	lwz r12, 0(r29)
/* 802D66E4 002D3624  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D66E8 002D3628  7D 89 03 A6 */	mtctr r12
/* 802D66EC 002D362C  4E 80 04 21 */	bctrl 
/* 802D66F0 002D3630  C0 41 00 08 */	lfs f2, 8(r1)
/* 802D66F4 002D3634  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D66F8 002D3638  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802D66FC 002D363C  38 80 00 00 */	li r4, 0
/* 802D6700 002D3640  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802D6704 002D3644  38 C0 00 02 */	li r6, 2
/* 802D6708 002D3648  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802D670C 002D364C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802D6710 002D3650  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802D6714 002D3654  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802D6718 002D3658  4B F7 BB 25 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802D671C 002D365C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802D6720 002D3660  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D6724 002D3664  38 80 00 0A */	li r4, 0xa
/* 802D6728 002D3668  38 C0 00 02 */	li r6, 2
/* 802D672C 002D366C  4B F7 D0 55 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802D6730 002D3670  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 802D6734 002D3674  38 80 08 16 */	li r4, 0x816
/* 802D6738 002D3678  38 A0 00 00 */	li r5, 0
/* 802D673C 002D367C  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 802D6740 002D3680  81 83 00 28 */	lwz r12, 0x28(r3)
/* 802D6744 002D3684  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 802D6748 002D3688  7D 89 03 A6 */	mtctr r12
/* 802D674C 002D368C  4E 80 04 21 */	bctrl 
.L_802D6750:
/* 802D6750 002D3690  38 00 00 00 */	li r0, 0
/* 802D6754 002D3694  90 1F 02 EC */	stw r0, 0x2ec(r31)
.L_802D6758:
/* 802D6758 002D3698  3B FF 00 04 */	addi r31, r31, 4
/* 802D675C 002D369C  3B DE 00 01 */	addi r30, r30, 1
.L_802D6760:
/* 802D6760 002D36A0  80 1D 02 E4 */	lwz r0, 0x2e4(r29)
/* 802D6764 002D36A4  7C 1E 00 00 */	cmpw r30, r0
/* 802D6768 002D36A8  41 80 FF 18 */	blt .L_802D6680
/* 802D676C 002D36AC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D6770 002D36B0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802D6774 002D36B4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802D6778 002D36B8  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802D677C 002D36BC  7C 08 03 A6 */	mtlr r0
/* 802D6780 002D36C0  38 21 00 30 */	addi r1, r1, 0x30
/* 802D6784 002D36C4  4E 80 00 20 */	blr 
.endfn escapeCheckNavi__Q34Game9OniKurage3ObjFv

.fn createEffect__Q34Game9OniKurage3ObjFv, global
/* 802D6788 002D36C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D678C 002D36CC  7C 08 02 A6 */	mflr r0
/* 802D6790 002D36D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D6794 002D36D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D6798 002D36D8  7C 7F 1B 78 */	mr r31, r3
/* 802D679C 002D36DC  38 60 00 14 */	li r3, 0x14
/* 802D67A0 002D36E0  93 C1 00 08 */	stw r30, 8(r1)
/* 802D67A4 002D36E4  4B D4 D7 01 */	bl __nw__FUl
/* 802D67A8 002D36E8  28 03 00 00 */	cmplwi r3, 0
/* 802D67AC 002D36EC  41 82 00 78 */	beq .L_802D6824
/* 802D67B0 002D36F0  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802D67B4 002D36F4  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802D67B8 002D36F8  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802D67BC 002D36FC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802D67C0 002D3700  90 03 00 00 */	stw r0, 0(r3)
/* 802D67C4 002D3704  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802D67C8 002D3708  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802D67CC 002D370C  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 802D67D0 002D3710  90 03 00 04 */	stw r0, 4(r3)
/* 802D67D4 002D3714  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 802D67D8 002D3718  3C 80 80 4D */	lis r4, __vt__Q23efx10TKurageEye@ha
/* 802D67DC 002D371C  38 05 00 14 */	addi r0, r5, 0x14
/* 802D67E0 002D3720  90 A3 00 00 */	stw r5, 0(r3)
/* 802D67E4 002D3724  38 84 2C 14 */	addi r4, r4, __vt__Q23efx10TKurageEye@l
/* 802D67E8 002D3728  39 20 00 00 */	li r9, 0
/* 802D67EC 002D372C  39 00 02 B2 */	li r8, 0x2b2
/* 802D67F0 002D3730  90 03 00 04 */	stw r0, 4(r3)
/* 802D67F4 002D3734  38 C7 00 14 */	addi r6, r7, 0x14
/* 802D67F8 002D3738  38 A0 00 D5 */	li r5, 0xd5
/* 802D67FC 002D373C  38 04 00 14 */	addi r0, r4, 0x14
/* 802D6800 002D3740  91 23 00 08 */	stw r9, 8(r3)
/* 802D6804 002D3744  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802D6808 002D3748  99 23 00 0E */	stb r9, 0xe(r3)
/* 802D680C 002D374C  90 E3 00 00 */	stw r7, 0(r3)
/* 802D6810 002D3750  90 C3 00 04 */	stw r6, 4(r3)
/* 802D6814 002D3754  91 23 00 10 */	stw r9, 0x10(r3)
/* 802D6818 002D3758  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802D681C 002D375C  90 83 00 00 */	stw r4, 0(r3)
/* 802D6820 002D3760  90 03 00 04 */	stw r0, 4(r3)
.L_802D6824:
/* 802D6824 002D3764  90 7F 02 F4 */	stw r3, 0x2f4(r31)
/* 802D6828 002D3768  38 60 00 14 */	li r3, 0x14
/* 802D682C 002D376C  4B D4 D6 79 */	bl __nw__FUl
/* 802D6830 002D3770  28 03 00 00 */	cmplwi r3, 0
/* 802D6834 002D3774  41 82 00 78 */	beq .L_802D68AC
/* 802D6838 002D3778  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802D683C 002D377C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802D6840 002D3780  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802D6844 002D3784  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802D6848 002D3788  90 03 00 00 */	stw r0, 0(r3)
/* 802D684C 002D378C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802D6850 002D3790  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802D6854 002D3794  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 802D6858 002D3798  90 03 00 04 */	stw r0, 4(r3)
/* 802D685C 002D379C  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 802D6860 002D37A0  3C 80 80 4D */	lis r4, __vt__Q23efx10TKurageEye@ha
/* 802D6864 002D37A4  38 05 00 14 */	addi r0, r5, 0x14
/* 802D6868 002D37A8  90 A3 00 00 */	stw r5, 0(r3)
/* 802D686C 002D37AC  38 84 2C 14 */	addi r4, r4, __vt__Q23efx10TKurageEye@l
/* 802D6870 002D37B0  39 20 00 00 */	li r9, 0
/* 802D6874 002D37B4  39 00 02 B2 */	li r8, 0x2b2
/* 802D6878 002D37B8  90 03 00 04 */	stw r0, 4(r3)
/* 802D687C 002D37BC  38 C7 00 14 */	addi r6, r7, 0x14
/* 802D6880 002D37C0  38 A0 00 D5 */	li r5, 0xd5
/* 802D6884 002D37C4  38 04 00 14 */	addi r0, r4, 0x14
/* 802D6888 002D37C8  91 23 00 08 */	stw r9, 8(r3)
/* 802D688C 002D37CC  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802D6890 002D37D0  99 23 00 0E */	stb r9, 0xe(r3)
/* 802D6894 002D37D4  90 E3 00 00 */	stw r7, 0(r3)
/* 802D6898 002D37D8  90 C3 00 04 */	stw r6, 4(r3)
/* 802D689C 002D37DC  91 23 00 10 */	stw r9, 0x10(r3)
/* 802D68A0 002D37E0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802D68A4 002D37E4  90 83 00 00 */	stw r4, 0(r3)
/* 802D68A8 002D37E8  90 03 00 04 */	stw r0, 4(r3)
.L_802D68AC:
/* 802D68AC 002D37EC  90 7F 02 F8 */	stw r3, 0x2f8(r31)
/* 802D68B0 002D37F0  38 60 00 40 */	li r3, 0x40
/* 802D68B4 002D37F4  4B D4 D5 F1 */	bl __nw__FUl
/* 802D68B8 002D37F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 802D68BC 002D37FC  41 82 00 24 */	beq .L_802D68E0
/* 802D68C0 002D3800  38 80 00 00 */	li r4, 0
/* 802D68C4 002D3804  38 A0 00 D8 */	li r5, 0xd8
/* 802D68C8 002D3808  38 C0 00 D9 */	li r6, 0xd9
/* 802D68CC 002D380C  38 E0 00 DA */	li r7, 0xda
/* 802D68D0 002D3810  48 0D 9C DD */	bl __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs
/* 802D68D4 002D3814  3C 60 80 4D */	lis r3, __vt__Q23efx11TKurageHire@ha
/* 802D68D8 002D3818  38 03 2B F8 */	addi r0, r3, __vt__Q23efx11TKurageHire@l
/* 802D68DC 002D381C  90 1E 00 00 */	stw r0, 0(r30)
.L_802D68E0:
/* 802D68E0 002D3820  93 DF 02 FC */	stw r30, 0x2fc(r31)
/* 802D68E4 002D3824  38 60 00 14 */	li r3, 0x14
/* 802D68E8 002D3828  4B D4 D5 BD */	bl __nw__FUl
/* 802D68EC 002D382C  28 03 00 00 */	cmplwi r3, 0
/* 802D68F0 002D3830  41 82 00 7C */	beq .L_802D696C
/* 802D68F4 002D3834  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802D68F8 002D3838  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802D68FC 002D383C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802D6900 002D3840  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802D6904 002D3844  90 03 00 00 */	stw r0, 0(r3)
/* 802D6908 002D3848  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802D690C 002D384C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802D6910 002D3850  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 802D6914 002D3854  90 03 00 04 */	stw r0, 4(r3)
/* 802D6918 002D3858  39 04 69 40 */	addi r8, r4, __vt__Q23efx9TChasePos@l
/* 802D691C 002D385C  3C 80 80 4D */	lis r4, __vt__Q23efx11TKurageKira@ha
/* 802D6920 002D3860  38 05 00 14 */	addi r0, r5, 0x14
/* 802D6924 002D3864  90 A3 00 00 */	stw r5, 0(r3)
/* 802D6928 002D3868  38 84 2B AC */	addi r4, r4, __vt__Q23efx11TKurageKira@l
/* 802D692C 002D386C  39 40 00 00 */	li r10, 0
/* 802D6930 002D3870  39 20 02 B2 */	li r9, 0x2b2
/* 802D6934 002D3874  90 03 00 04 */	stw r0, 4(r3)
/* 802D6938 002D3878  38 E8 00 14 */	addi r7, r8, 0x14
/* 802D693C 002D387C  38 DF 01 8C */	addi r6, r31, 0x18c
/* 802D6940 002D3880  38 A0 00 DB */	li r5, 0xdb
/* 802D6944 002D3884  91 43 00 08 */	stw r10, 8(r3)
/* 802D6948 002D3888  38 04 00 14 */	addi r0, r4, 0x14
/* 802D694C 002D388C  B1 23 00 0C */	sth r9, 0xc(r3)
/* 802D6950 002D3890  99 43 00 0E */	stb r10, 0xe(r3)
/* 802D6954 002D3894  91 03 00 00 */	stw r8, 0(r3)
/* 802D6958 002D3898  90 E3 00 04 */	stw r7, 4(r3)
/* 802D695C 002D389C  90 C3 00 10 */	stw r6, 0x10(r3)
/* 802D6960 002D38A0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802D6964 002D38A4  90 83 00 00 */	stw r4, 0(r3)
/* 802D6968 002D38A8  90 03 00 04 */	stw r0, 4(r3)
.L_802D696C:
/* 802D696C 002D38AC  90 7F 03 00 */	stw r3, 0x300(r31)
/* 802D6970 002D38B0  38 60 00 24 */	li r3, 0x24
/* 802D6974 002D38B4  4B D4 D5 31 */	bl __nw__FUl
/* 802D6978 002D38B8  7C 7E 1B 79 */	or. r30, r3, r3
/* 802D697C 002D38BC  41 82 00 1C */	beq .L_802D6998
/* 802D6980 002D38C0  38 80 00 DC */	li r4, 0xdc
/* 802D6984 002D38C4  38 A0 00 DD */	li r5, 0xdd
/* 802D6988 002D38C8  48 0D 96 89 */	bl __ct__Q23efx9TForever2FUsUs
/* 802D698C 002D38CC  3C 60 80 4D */	lis r3, __vt__Q23efx10TKurageSui@ha
/* 802D6990 002D38D0  38 03 2B 90 */	addi r0, r3, __vt__Q23efx10TKurageSui@l
/* 802D6994 002D38D4  90 1E 00 00 */	stw r0, 0(r30)
.L_802D6998:
/* 802D6998 002D38D8  93 DF 03 04 */	stw r30, 0x304(r31)
/* 802D699C 002D38DC  38 60 00 14 */	li r3, 0x14
/* 802D69A0 002D38E0  4B D4 D5 05 */	bl __nw__FUl
/* 802D69A4 002D38E4  28 03 00 00 */	cmplwi r3, 0
/* 802D69A8 002D38E8  41 82 00 7C */	beq .L_802D6A24
/* 802D69AC 002D38EC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802D69B0 002D38F0  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802D69B4 002D38F4  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802D69B8 002D38F8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802D69BC 002D38FC  90 03 00 00 */	stw r0, 0(r3)
/* 802D69C0 002D3900  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802D69C4 002D3904  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802D69C8 002D3908  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 802D69CC 002D390C  90 03 00 04 */	stw r0, 4(r3)
/* 802D69D0 002D3910  39 04 69 40 */	addi r8, r4, __vt__Q23efx9TChasePos@l
/* 802D69D4 002D3914  3C 80 80 4D */	lis r4, __vt__Q23efx11TKurageGepu@ha
/* 802D69D8 002D3918  38 05 00 14 */	addi r0, r5, 0x14
/* 802D69DC 002D391C  90 A3 00 00 */	stw r5, 0(r3)
/* 802D69E0 002D3920  38 84 2B 44 */	addi r4, r4, __vt__Q23efx11TKurageGepu@l
/* 802D69E4 002D3924  39 40 00 00 */	li r10, 0
/* 802D69E8 002D3928  39 20 02 B2 */	li r9, 0x2b2
/* 802D69EC 002D392C  90 03 00 04 */	stw r0, 4(r3)
/* 802D69F0 002D3930  38 E8 00 14 */	addi r7, r8, 0x14
/* 802D69F4 002D3934  38 DF 01 8C */	addi r6, r31, 0x18c
/* 802D69F8 002D3938  38 A0 00 D7 */	li r5, 0xd7
/* 802D69FC 002D393C  91 43 00 08 */	stw r10, 8(r3)
/* 802D6A00 002D3940  38 04 00 14 */	addi r0, r4, 0x14
/* 802D6A04 002D3944  B1 23 00 0C */	sth r9, 0xc(r3)
/* 802D6A08 002D3948  99 43 00 0E */	stb r10, 0xe(r3)
/* 802D6A0C 002D394C  91 03 00 00 */	stw r8, 0(r3)
/* 802D6A10 002D3950  90 E3 00 04 */	stw r7, 4(r3)
/* 802D6A14 002D3954  90 C3 00 10 */	stw r6, 0x10(r3)
/* 802D6A18 002D3958  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802D6A1C 002D395C  90 83 00 00 */	stw r4, 0(r3)
/* 802D6A20 002D3960  90 03 00 04 */	stw r0, 4(r3)
.L_802D6A24:
/* 802D6A24 002D3964  90 7F 03 08 */	stw r3, 0x308(r31)
/* 802D6A28 002D3968  38 60 00 14 */	li r3, 0x14
/* 802D6A2C 002D396C  4B D4 D4 79 */	bl __nw__FUl
/* 802D6A30 002D3970  28 03 00 00 */	cmplwi r3, 0
/* 802D6A34 002D3974  41 82 00 78 */	beq .L_802D6AAC
/* 802D6A38 002D3978  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802D6A3C 002D397C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802D6A40 002D3980  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802D6A44 002D3984  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802D6A48 002D3988  90 03 00 00 */	stw r0, 0(r3)
/* 802D6A4C 002D398C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802D6A50 002D3990  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802D6A54 002D3994  3C 80 80 4E */	lis r4, __vt__Q23efx10TChaseMtxT@ha
/* 802D6A58 002D3998  90 03 00 04 */	stw r0, 4(r3)
/* 802D6A5C 002D399C  38 E4 68 5C */	addi r7, r4, __vt__Q23efx10TChaseMtxT@l
/* 802D6A60 002D39A0  3C 80 80 4D */	lis r4, __vt__Q23efx14TKurageDeadrun@ha
/* 802D6A64 002D39A4  38 05 00 14 */	addi r0, r5, 0x14
/* 802D6A68 002D39A8  90 A3 00 00 */	stw r5, 0(r3)
/* 802D6A6C 002D39AC  38 84 2A F8 */	addi r4, r4, __vt__Q23efx14TKurageDeadrun@l
/* 802D6A70 002D39B0  39 20 00 00 */	li r9, 0
/* 802D6A74 002D39B4  39 00 02 B2 */	li r8, 0x2b2
/* 802D6A78 002D39B8  90 03 00 04 */	stw r0, 4(r3)
/* 802D6A7C 002D39BC  38 C7 00 14 */	addi r6, r7, 0x14
/* 802D6A80 002D39C0  38 A0 00 D4 */	li r5, 0xd4
/* 802D6A84 002D39C4  38 04 00 14 */	addi r0, r4, 0x14
/* 802D6A88 002D39C8  91 23 00 08 */	stw r9, 8(r3)
/* 802D6A8C 002D39CC  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802D6A90 002D39D0  99 23 00 0E */	stb r9, 0xe(r3)
/* 802D6A94 002D39D4  90 E3 00 00 */	stw r7, 0(r3)
/* 802D6A98 002D39D8  90 C3 00 04 */	stw r6, 4(r3)
/* 802D6A9C 002D39DC  91 23 00 10 */	stw r9, 0x10(r3)
/* 802D6AA0 002D39E0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802D6AA4 002D39E4  90 83 00 00 */	stw r4, 0(r3)
/* 802D6AA8 002D39E8  90 03 00 04 */	stw r0, 4(r3)
.L_802D6AAC:
/* 802D6AAC 002D39EC  90 7F 03 0C */	stw r3, 0x30c(r31)
/* 802D6AB0 002D39F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D6AB4 002D39F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D6AB8 002D39F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D6ABC 002D39FC  7C 08 03 A6 */	mtlr r0
/* 802D6AC0 002D3A00  38 21 00 10 */	addi r1, r1, 0x10
/* 802D6AC4 002D3A04  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game9OniKurage3ObjFv

.fn setupEffect__Q34Game9OniKurage3ObjFv, global
/* 802D6AC8 002D3A08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D6ACC 002D3A0C  7C 08 02 A6 */	mflr r0
/* 802D6AD0 002D3A10  38 82 E6 B8 */	addi r4, r2, lbl_8051CA18@sda21
/* 802D6AD4 002D3A14  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D6AD8 002D3A18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D6ADC 002D3A1C  7C 7F 1B 78 */	mr r31, r3
/* 802D6AE0 002D3A20  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802D6AE4 002D3A24  48 16 85 01 */	bl getJoint__Q28SysShape5ModelFPc
/* 802D6AE8 002D3A28  48 15 2D B9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802D6AEC 002D3A2C  80 BF 02 F4 */	lwz r5, 0x2f4(r31)
/* 802D6AF0 002D3A30  38 82 E6 C0 */	addi r4, r2, lbl_8051CA20@sda21
/* 802D6AF4 002D3A34  90 65 00 10 */	stw r3, 0x10(r5)
/* 802D6AF8 002D3A38  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802D6AFC 002D3A3C  48 16 84 E9 */	bl getJoint__Q28SysShape5ModelFPc
/* 802D6B00 002D3A40  48 15 2D A1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802D6B04 002D3A44  80 BF 02 F8 */	lwz r5, 0x2f8(r31)
/* 802D6B08 002D3A48  38 82 E6 C8 */	addi r4, r2, lbl_8051CA28@sda21
/* 802D6B0C 002D3A4C  90 65 00 10 */	stw r3, 0x10(r5)
/* 802D6B10 002D3A50  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802D6B14 002D3A54  48 16 84 D1 */	bl getJoint__Q28SysShape5ModelFPc
/* 802D6B18 002D3A58  48 15 2D 89 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802D6B1C 002D3A5C  7C 64 1B 78 */	mr r4, r3
/* 802D6B20 002D3A60  80 7F 02 FC */	lwz r3, 0x2fc(r31)
/* 802D6B24 002D3A64  48 0D 9B 29 */	bl setMtxptr__Q23efx10TChaseMtx3FPA4_f
/* 802D6B28 002D3A68  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802D6B2C 002D3A6C  38 82 E6 D0 */	addi r4, r2, lbl_8051CA30@sda21
/* 802D6B30 002D3A70  48 16 84 B5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802D6B34 002D3A74  48 15 2D 6D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802D6B38 002D3A78  80 9F 03 0C */	lwz r4, 0x30c(r31)
/* 802D6B3C 002D3A7C  90 64 00 10 */	stw r3, 0x10(r4)
/* 802D6B40 002D3A80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D6B44 002D3A84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D6B48 002D3A88  7C 08 03 A6 */	mtlr r0
/* 802D6B4C 002D3A8C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D6B50 002D3A90  4E 80 00 20 */	blr 
.endfn setupEffect__Q34Game9OniKurage3ObjFv

.fn startEyeHireBodyEffect__Q34Game9OniKurage3ObjFv, global
/* 802D6B54 002D3A94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D6B58 002D3A98  7C 08 02 A6 */	mflr r0
/* 802D6B5C 002D3A9C  38 80 00 00 */	li r4, 0
/* 802D6B60 002D3AA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D6B64 002D3AA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D6B68 002D3AA8  7C 7F 1B 78 */	mr r31, r3
/* 802D6B6C 002D3AAC  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802D6B70 002D3AB0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6B74 002D3AB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D6B78 002D3AB8  7D 89 03 A6 */	mtctr r12
/* 802D6B7C 002D3ABC  4E 80 04 21 */	bctrl 
/* 802D6B80 002D3AC0  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802D6B84 002D3AC4  38 80 00 00 */	li r4, 0
/* 802D6B88 002D3AC8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6B8C 002D3ACC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D6B90 002D3AD0  7D 89 03 A6 */	mtctr r12
/* 802D6B94 002D3AD4  4E 80 04 21 */	bctrl 
/* 802D6B98 002D3AD8  80 7F 02 FC */	lwz r3, 0x2fc(r31)
/* 802D6B9C 002D3ADC  38 80 00 00 */	li r4, 0
/* 802D6BA0 002D3AE0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6BA4 002D3AE4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D6BA8 002D3AE8  7D 89 03 A6 */	mtctr r12
/* 802D6BAC 002D3AEC  4E 80 04 21 */	bctrl 
/* 802D6BB0 002D3AF0  80 7F 03 00 */	lwz r3, 0x300(r31)
/* 802D6BB4 002D3AF4  38 80 00 00 */	li r4, 0
/* 802D6BB8 002D3AF8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6BBC 002D3AFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D6BC0 002D3B00  7D 89 03 A6 */	mtctr r12
/* 802D6BC4 002D3B04  4E 80 04 21 */	bctrl 
/* 802D6BC8 002D3B08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D6BCC 002D3B0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D6BD0 002D3B10  7C 08 03 A6 */	mtlr r0
/* 802D6BD4 002D3B14  38 21 00 10 */	addi r1, r1, 0x10
/* 802D6BD8 002D3B18  4E 80 00 20 */	blr 
.endfn startEyeHireBodyEffect__Q34Game9OniKurage3ObjFv

.fn finishEyeBodyEffect__Q34Game9OniKurage3ObjFv, global
/* 802D6BDC 002D3B1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D6BE0 002D3B20  7C 08 02 A6 */	mflr r0
/* 802D6BE4 002D3B24  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D6BE8 002D3B28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D6BEC 002D3B2C  7C 7F 1B 78 */	mr r31, r3
/* 802D6BF0 002D3B30  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802D6BF4 002D3B34  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6BF8 002D3B38  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D6BFC 002D3B3C  7D 89 03 A6 */	mtctr r12
/* 802D6C00 002D3B40  4E 80 04 21 */	bctrl 
/* 802D6C04 002D3B44  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802D6C08 002D3B48  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6C0C 002D3B4C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D6C10 002D3B50  7D 89 03 A6 */	mtctr r12
/* 802D6C14 002D3B54  4E 80 04 21 */	bctrl 
/* 802D6C18 002D3B58  80 7F 03 00 */	lwz r3, 0x300(r31)
/* 802D6C1C 002D3B5C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6C20 002D3B60  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D6C24 002D3B64  7D 89 03 A6 */	mtctr r12
/* 802D6C28 002D3B68  4E 80 04 21 */	bctrl 
/* 802D6C2C 002D3B6C  80 7F 03 0C */	lwz r3, 0x30c(r31)
/* 802D6C30 002D3B70  38 80 00 00 */	li r4, 0
/* 802D6C34 002D3B74  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6C38 002D3B78  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D6C3C 002D3B7C  7D 89 03 A6 */	mtctr r12
/* 802D6C40 002D3B80  4E 80 04 21 */	bctrl 
/* 802D6C44 002D3B84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D6C48 002D3B88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D6C4C 002D3B8C  7C 08 03 A6 */	mtlr r0
/* 802D6C50 002D3B90  38 21 00 10 */	addi r1, r1, 0x10
/* 802D6C54 002D3B94  4E 80 00 20 */	blr 
.endfn finishEyeBodyEffect__Q34Game9OniKurage3ObjFv

.fn setHireEffectLife__Q34Game9OniKurage3ObjFs, global
/* 802D6C58 002D3B98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D6C5C 002D3B9C  7C 08 02 A6 */	mflr r0
/* 802D6C60 002D3BA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D6C64 002D3BA4  80 63 02 FC */	lwz r3, 0x2fc(r3)
/* 802D6C68 002D3BA8  48 0D CD E9 */	bl setLifeTime__Q23efx11TKurageHireFs
/* 802D6C6C 002D3BAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D6C70 002D3BB0  7C 08 03 A6 */	mtlr r0
/* 802D6C74 002D3BB4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D6C78 002D3BB8  4E 80 00 20 */	blr 
.endfn setHireEffectLife__Q34Game9OniKurage3ObjFs

.fn finishHireEffect__Q34Game9OniKurage3ObjFv, global
/* 802D6C7C 002D3BBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D6C80 002D3BC0  7C 08 02 A6 */	mflr r0
/* 802D6C84 002D3BC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D6C88 002D3BC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D6C8C 002D3BCC  7C 7F 1B 78 */	mr r31, r3
/* 802D6C90 002D3BD0  80 63 02 FC */	lwz r3, 0x2fc(r3)
/* 802D6C94 002D3BD4  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6C98 002D3BD8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D6C9C 002D3BDC  7D 89 03 A6 */	mtctr r12
/* 802D6CA0 002D3BE0  4E 80 04 21 */	bctrl 
/* 802D6CA4 002D3BE4  80 7F 03 0C */	lwz r3, 0x30c(r31)
/* 802D6CA8 002D3BE8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6CAC 002D3BEC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D6CB0 002D3BF0  7D 89 03 A6 */	mtctr r12
/* 802D6CB4 002D3BF4  4E 80 04 21 */	bctrl 
/* 802D6CB8 002D3BF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D6CBC 002D3BFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D6CC0 002D3C00  7C 08 03 A6 */	mtlr r0
/* 802D6CC4 002D3C04  38 21 00 10 */	addi r1, r1, 0x10
/* 802D6CC8 002D3C08  4E 80 00 20 */	blr 
.endfn finishHireEffect__Q34Game9OniKurage3ObjFv

.fn "startSuckEffect__Q34Game9OniKurage3ObjFR10Vector3<f>", global
/* 802D6CCC 002D3C0C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D6CD0 002D3C10  7C 08 02 A6 */	mflr r0
/* 802D6CD4 002D3C14  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 802D6CD8 002D3C18  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D6CDC 002D3C1C  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 802D6CE0 002D3C20  90 01 00 08 */	stw r0, 8(r1)
/* 802D6CE4 002D3C24  C0 04 00 00 */	lfs f0, 0(r4)
/* 802D6CE8 002D3C28  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802D6CEC 002D3C2C  C0 04 00 04 */	lfs f0, 4(r4)
/* 802D6CF0 002D3C30  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802D6CF4 002D3C34  C0 04 00 08 */	lfs f0, 8(r4)
/* 802D6CF8 002D3C38  38 81 00 08 */	addi r4, r1, 8
/* 802D6CFC 002D3C3C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802D6D00 002D3C40  80 63 03 04 */	lwz r3, 0x304(r3)
/* 802D6D04 002D3C44  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6D08 002D3C48  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D6D0C 002D3C4C  7D 89 03 A6 */	mtctr r12
/* 802D6D10 002D3C50  4E 80 04 21 */	bctrl 
/* 802D6D14 002D3C54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D6D18 002D3C58  7C 08 03 A6 */	mtlr r0
/* 802D6D1C 002D3C5C  38 21 00 20 */	addi r1, r1, 0x20
/* 802D6D20 002D3C60  4E 80 00 20 */	blr 
.endfn "startSuckEffect__Q34Game9OniKurage3ObjFR10Vector3<f>"

.fn "updateSuckEffect__Q34Game9OniKurage3ObjFR10Vector3<f>", global
/* 802D6D24 002D3C64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D6D28 002D3C68  7C 08 02 A6 */	mflr r0
/* 802D6D2C 002D3C6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D6D30 002D3C70  80 63 03 04 */	lwz r3, 0x304(r3)
/* 802D6D34 002D3C74  48 0D CC DD */	bl "setGlobalTranslation__Q23efx10TKurageSuiFR10Vector3<f>"
/* 802D6D38 002D3C78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D6D3C 002D3C7C  7C 08 03 A6 */	mtlr r0
/* 802D6D40 002D3C80  38 21 00 10 */	addi r1, r1, 0x10
/* 802D6D44 002D3C84  4E 80 00 20 */	blr 
.endfn "updateSuckEffect__Q34Game9OniKurage3ObjFR10Vector3<f>"

.fn finishSuckEffect__Q34Game9OniKurage3ObjFv, global
/* 802D6D48 002D3C88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D6D4C 002D3C8C  7C 08 02 A6 */	mflr r0
/* 802D6D50 002D3C90  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D6D54 002D3C94  80 63 03 04 */	lwz r3, 0x304(r3)
/* 802D6D58 002D3C98  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6D5C 002D3C9C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802D6D60 002D3CA0  7D 89 03 A6 */	mtctr r12
/* 802D6D64 002D3CA4  4E 80 04 21 */	bctrl 
/* 802D6D68 002D3CA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D6D6C 002D3CAC  7C 08 03 A6 */	mtlr r0
/* 802D6D70 002D3CB0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D6D74 002D3CB4  4E 80 00 20 */	blr 
.endfn finishSuckEffect__Q34Game9OniKurage3ObjFv

.fn createFlickNaviEffect__Q34Game9OniKurage3ObjFv, global
/* 802D6D78 002D3CB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D6D7C 002D3CBC  7C 08 02 A6 */	mflr r0
/* 802D6D80 002D3CC0  38 80 00 00 */	li r4, 0
/* 802D6D84 002D3CC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D6D88 002D3CC8  80 63 03 08 */	lwz r3, 0x308(r3)
/* 802D6D8C 002D3CCC  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6D90 002D3CD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D6D94 002D3CD4  7D 89 03 A6 */	mtctr r12
/* 802D6D98 002D3CD8  4E 80 04 21 */	bctrl 
/* 802D6D9C 002D3CDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D6DA0 002D3CE0  7C 08 03 A6 */	mtlr r0
/* 802D6DA4 002D3CE4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D6DA8 002D3CE8  4E 80 00 20 */	blr 
.endfn createFlickNaviEffect__Q34Game9OniKurage3ObjFv

.fn createBodyBombEffect__Q34Game9OniKurage3ObjFv, global
/* 802D6DAC 002D3CEC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D6DB0 002D3CF0  7C 08 02 A6 */	mflr r0
/* 802D6DB4 002D3CF4  38 82 E6 D0 */	addi r4, r2, lbl_8051CA30@sda21
/* 802D6DB8 002D3CF8  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D6DBC 002D3CFC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802D6DC0 002D3D00  48 16 82 25 */	bl getJoint__Q28SysShape5ModelFPc
/* 802D6DC4 002D3D04  48 15 2A DD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802D6DC8 002D3D08  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802D6DCC 002D3D0C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802D6DD0 002D3D10  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802D6DD4 002D3D14  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802D6DD8 002D3D18  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802D6DDC 002D3D1C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 802D6DE0 002D3D20  38 A3 6A 64 */	addi r5, r3, __vt__Q23efx8TSimple2@l
/* 802D6DE4 002D3D24  38 C0 00 00 */	li r6, 0
/* 802D6DE8 002D3D28  90 01 00 18 */	stw r0, 0x18(r1)
/* 802D6DEC 002D3D2C  3C 80 80 4D */	lis r4, __vt__Q23efx11TKurageBomb@ha
/* 802D6DF0 002D3D30  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 802D6DF4 002D3D34  39 00 00 D2 */	li r8, 0xd2
/* 802D6DF8 002D3D38  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 802D6DFC 002D3D3C  38 E0 00 D3 */	li r7, 0xd3
/* 802D6E00 002D3D40  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802D6E04 002D3D44  38 A4 2A E4 */	addi r5, r4, __vt__Q23efx11TKurageBomb@l
/* 802D6E08 002D3D48  38 61 00 18 */	addi r3, r1, 0x18
/* 802D6E0C 002D3D4C  38 81 00 08 */	addi r4, r1, 8
/* 802D6E10 002D3D50  B1 01 00 1C */	sth r8, 0x1c(r1)
/* 802D6E14 002D3D54  B0 E1 00 1E */	sth r7, 0x1e(r1)
/* 802D6E18 002D3D58  90 C1 00 20 */	stw r6, 0x20(r1)
/* 802D6E1C 002D3D5C  90 C1 00 24 */	stw r6, 0x24(r1)
/* 802D6E20 002D3D60  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802D6E24 002D3D64  90 01 00 08 */	stw r0, 8(r1)
/* 802D6E28 002D3D68  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802D6E2C 002D3D6C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 802D6E30 002D3D70  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802D6E34 002D3D74  48 0D 81 E1 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 802D6E38 002D3D78  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D6E3C 002D3D7C  7C 08 03 A6 */	mtlr r0
/* 802D6E40 002D3D80  38 21 00 30 */	addi r1, r1, 0x30
/* 802D6E44 002D3D84  4E 80 00 20 */	blr 
.endfn createBodyBombEffect__Q34Game9OniKurage3ObjFv

.fn createDownEffect__Q34Game9OniKurage3ObjFv, global
/* 802D6E48 002D3D88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D6E4C 002D3D8C  7C 08 02 A6 */	mflr r0
/* 802D6E50 002D3D90  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D6E54 002D3D94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D6E58 002D3D98  7C 7F 1B 78 */	mr r31, r3
/* 802D6E5C 002D3D9C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6E60 002D3DA0  81 8C 02 EC */	lwz r12, 0x2ec(r12)
/* 802D6E64 002D3DA4  7D 89 03 A6 */	mtctr r12
/* 802D6E68 002D3DA8  4E 80 04 21 */	bctrl 
/* 802D6E6C 002D3DAC  7F E3 FB 78 */	mr r3, r31
/* 802D6E70 002D3DB0  38 9F 01 8C */	addi r4, r31, 0x18c
/* 802D6E74 002D3DB4  4B E2 CC DD */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 802D6E78 002D3DB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D6E7C 002D3DBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D6E80 002D3DC0  7C 08 03 A6 */	mtlr r0
/* 802D6E84 002D3DC4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D6E88 002D3DC8  4E 80 00 20 */	blr 
.endfn createDownEffect__Q34Game9OniKurage3ObjFv

.fn getDownSmokeScale__Q34Game9OniKurage3ObjFv, weak
/* 802D6E8C 002D3DCC  C0 22 E6 D8 */	lfs f1, lbl_8051CA38@sda21(r2)
/* 802D6E90 002D3DD0  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game9OniKurage3ObjFv

.fn effectDrawOn__Q34Game9OniKurage3ObjFv, global
/* 802D6E94 002D3DD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D6E98 002D3DD8  7C 08 02 A6 */	mflr r0
/* 802D6E9C 002D3DDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D6EA0 002D3DE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D6EA4 002D3DE4  7C 7F 1B 78 */	mr r31, r3
/* 802D6EA8 002D3DE8  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802D6EAC 002D3DEC  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6EB0 002D3DF0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802D6EB4 002D3DF4  7D 89 03 A6 */	mtctr r12
/* 802D6EB8 002D3DF8  4E 80 04 21 */	bctrl 
/* 802D6EBC 002D3DFC  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802D6EC0 002D3E00  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6EC4 002D3E04  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802D6EC8 002D3E08  7D 89 03 A6 */	mtctr r12
/* 802D6ECC 002D3E0C  4E 80 04 21 */	bctrl 
/* 802D6ED0 002D3E10  80 7F 02 FC */	lwz r3, 0x2fc(r31)
/* 802D6ED4 002D3E14  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6ED8 002D3E18  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802D6EDC 002D3E1C  7D 89 03 A6 */	mtctr r12
/* 802D6EE0 002D3E20  4E 80 04 21 */	bctrl 
/* 802D6EE4 002D3E24  80 7F 03 00 */	lwz r3, 0x300(r31)
/* 802D6EE8 002D3E28  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6EEC 002D3E2C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802D6EF0 002D3E30  7D 89 03 A6 */	mtctr r12
/* 802D6EF4 002D3E34  4E 80 04 21 */	bctrl 
/* 802D6EF8 002D3E38  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 802D6EFC 002D3E3C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6F00 002D3E40  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802D6F04 002D3E44  7D 89 03 A6 */	mtctr r12
/* 802D6F08 002D3E48  4E 80 04 21 */	bctrl 
/* 802D6F0C 002D3E4C  80 7F 03 08 */	lwz r3, 0x308(r31)
/* 802D6F10 002D3E50  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6F14 002D3E54  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802D6F18 002D3E58  7D 89 03 A6 */	mtctr r12
/* 802D6F1C 002D3E5C  4E 80 04 21 */	bctrl 
/* 802D6F20 002D3E60  80 7F 03 0C */	lwz r3, 0x30c(r31)
/* 802D6F24 002D3E64  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6F28 002D3E68  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802D6F2C 002D3E6C  7D 89 03 A6 */	mtctr r12
/* 802D6F30 002D3E70  4E 80 04 21 */	bctrl 
/* 802D6F34 002D3E74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D6F38 002D3E78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D6F3C 002D3E7C  7C 08 03 A6 */	mtlr r0
/* 802D6F40 002D3E80  38 21 00 10 */	addi r1, r1, 0x10
/* 802D6F44 002D3E84  4E 80 00 20 */	blr 
.endfn effectDrawOn__Q34Game9OniKurage3ObjFv

.fn effectDrawOff__Q34Game9OniKurage3ObjFv, global
/* 802D6F48 002D3E88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D6F4C 002D3E8C  7C 08 02 A6 */	mflr r0
/* 802D6F50 002D3E90  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D6F54 002D3E94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D6F58 002D3E98  7C 7F 1B 78 */	mr r31, r3
/* 802D6F5C 002D3E9C  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802D6F60 002D3EA0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6F64 002D3EA4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802D6F68 002D3EA8  7D 89 03 A6 */	mtctr r12
/* 802D6F6C 002D3EAC  4E 80 04 21 */	bctrl 
/* 802D6F70 002D3EB0  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802D6F74 002D3EB4  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6F78 002D3EB8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802D6F7C 002D3EBC  7D 89 03 A6 */	mtctr r12
/* 802D6F80 002D3EC0  4E 80 04 21 */	bctrl 
/* 802D6F84 002D3EC4  80 7F 02 FC */	lwz r3, 0x2fc(r31)
/* 802D6F88 002D3EC8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6F8C 002D3ECC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D6F90 002D3ED0  7D 89 03 A6 */	mtctr r12
/* 802D6F94 002D3ED4  4E 80 04 21 */	bctrl 
/* 802D6F98 002D3ED8  80 7F 03 00 */	lwz r3, 0x300(r31)
/* 802D6F9C 002D3EDC  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6FA0 002D3EE0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802D6FA4 002D3EE4  7D 89 03 A6 */	mtctr r12
/* 802D6FA8 002D3EE8  4E 80 04 21 */	bctrl 
/* 802D6FAC 002D3EEC  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 802D6FB0 002D3EF0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6FB4 002D3EF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D6FB8 002D3EF8  7D 89 03 A6 */	mtctr r12
/* 802D6FBC 002D3EFC  4E 80 04 21 */	bctrl 
/* 802D6FC0 002D3F00  80 7F 03 08 */	lwz r3, 0x308(r31)
/* 802D6FC4 002D3F04  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6FC8 002D3F08  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802D6FCC 002D3F0C  7D 89 03 A6 */	mtctr r12
/* 802D6FD0 002D3F10  4E 80 04 21 */	bctrl 
/* 802D6FD4 002D3F14  80 7F 03 0C */	lwz r3, 0x30c(r31)
/* 802D6FD8 002D3F18  81 83 00 00 */	lwz r12, 0(r3)
/* 802D6FDC 002D3F1C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802D6FE0 002D3F20  7D 89 03 A6 */	mtctr r12
/* 802D6FE4 002D3F24  4E 80 04 21 */	bctrl 
/* 802D6FE8 002D3F28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D6FEC 002D3F2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D6FF0 002D3F30  7C 08 03 A6 */	mtlr r0
/* 802D6FF4 002D3F34  38 21 00 10 */	addi r1, r1, 0x10
/* 802D6FF8 002D3F38  4E 80 00 20 */	blr 
.endfn effectDrawOff__Q34Game9OniKurage3ObjFv

.fn __dt__Q23efx14TKurageDeadrunFv, weak
/* 802D6FFC 002D3F3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D7000 002D3F40  7C 08 02 A6 */	mflr r0
/* 802D7004 002D3F44  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D7008 002D3F48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D700C 002D3F4C  7C 9F 23 78 */	mr r31, r4
/* 802D7010 002D3F50  93 C1 00 08 */	stw r30, 8(r1)
/* 802D7014 002D3F54  7C 7E 1B 79 */	or. r30, r3, r3
/* 802D7018 002D3F58  41 82 00 64 */	beq .L_802D707C
/* 802D701C 002D3F5C  3C 60 80 4D */	lis r3, __vt__Q23efx14TKurageDeadrun@ha
/* 802D7020 002D3F60  38 63 2A F8 */	addi r3, r3, __vt__Q23efx14TKurageDeadrun@l
/* 802D7024 002D3F64  90 7E 00 00 */	stw r3, 0(r30)
/* 802D7028 002D3F68  38 03 00 14 */	addi r0, r3, 0x14
/* 802D702C 002D3F6C  90 1E 00 04 */	stw r0, 4(r30)
/* 802D7030 002D3F70  41 82 00 3C */	beq .L_802D706C
/* 802D7034 002D3F74  3C 60 80 4E */	lis r3, __vt__Q23efx10TChaseMtxT@ha
/* 802D7038 002D3F78  38 63 68 5C */	addi r3, r3, __vt__Q23efx10TChaseMtxT@l
/* 802D703C 002D3F7C  90 7E 00 00 */	stw r3, 0(r30)
/* 802D7040 002D3F80  38 03 00 14 */	addi r0, r3, 0x14
/* 802D7044 002D3F84  90 1E 00 04 */	stw r0, 4(r30)
/* 802D7048 002D3F88  41 82 00 24 */	beq .L_802D706C
/* 802D704C 002D3F8C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802D7050 002D3F90  38 7E 00 04 */	addi r3, r30, 4
/* 802D7054 002D3F94  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802D7058 002D3F98  38 80 00 00 */	li r4, 0
/* 802D705C 002D3F9C  90 BE 00 00 */	stw r5, 0(r30)
/* 802D7060 002D3FA0  38 05 00 14 */	addi r0, r5, 0x14
/* 802D7064 002D3FA4  90 1E 00 04 */	stw r0, 4(r30)
/* 802D7068 002D3FA8  4B DB 8C 35 */	bl __dt__18JPAEmitterCallBackFv
.L_802D706C:
/* 802D706C 002D3FAC  7F E0 07 35 */	extsh. r0, r31
/* 802D7070 002D3FB0  40 81 00 0C */	ble .L_802D707C
/* 802D7074 002D3FB4  7F C3 F3 78 */	mr r3, r30
/* 802D7078 002D3FB8  4B D4 D0 3D */	bl __dl__FPv
.L_802D707C:
/* 802D707C 002D3FBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D7080 002D3FC0  7F C3 F3 78 */	mr r3, r30
/* 802D7084 002D3FC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D7088 002D3FC8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D708C 002D3FCC  7C 08 03 A6 */	mtlr r0
/* 802D7090 002D3FD0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D7094 002D3FD4  4E 80 00 20 */	blr 
.endfn __dt__Q23efx14TKurageDeadrunFv

.fn __dt__Q23efx11TKurageGepuFv, weak
/* 802D7098 002D3FD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D709C 002D3FDC  7C 08 02 A6 */	mflr r0
/* 802D70A0 002D3FE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D70A4 002D3FE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D70A8 002D3FE8  7C 9F 23 78 */	mr r31, r4
/* 802D70AC 002D3FEC  93 C1 00 08 */	stw r30, 8(r1)
/* 802D70B0 002D3FF0  7C 7E 1B 79 */	or. r30, r3, r3
/* 802D70B4 002D3FF4  41 82 00 64 */	beq .L_802D7118
/* 802D70B8 002D3FF8  3C 60 80 4D */	lis r3, __vt__Q23efx11TKurageGepu@ha
/* 802D70BC 002D3FFC  38 63 2B 44 */	addi r3, r3, __vt__Q23efx11TKurageGepu@l
/* 802D70C0 002D4000  90 7E 00 00 */	stw r3, 0(r30)
/* 802D70C4 002D4004  38 03 00 14 */	addi r0, r3, 0x14
/* 802D70C8 002D4008  90 1E 00 04 */	stw r0, 4(r30)
/* 802D70CC 002D400C  41 82 00 3C */	beq .L_802D7108
/* 802D70D0 002D4010  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 802D70D4 002D4014  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 802D70D8 002D4018  90 7E 00 00 */	stw r3, 0(r30)
/* 802D70DC 002D401C  38 03 00 14 */	addi r0, r3, 0x14
/* 802D70E0 002D4020  90 1E 00 04 */	stw r0, 4(r30)
/* 802D70E4 002D4024  41 82 00 24 */	beq .L_802D7108
/* 802D70E8 002D4028  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802D70EC 002D402C  38 7E 00 04 */	addi r3, r30, 4
/* 802D70F0 002D4030  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802D70F4 002D4034  38 80 00 00 */	li r4, 0
/* 802D70F8 002D4038  90 BE 00 00 */	stw r5, 0(r30)
/* 802D70FC 002D403C  38 05 00 14 */	addi r0, r5, 0x14
/* 802D7100 002D4040  90 1E 00 04 */	stw r0, 4(r30)
/* 802D7104 002D4044  4B DB 8B 99 */	bl __dt__18JPAEmitterCallBackFv
.L_802D7108:
/* 802D7108 002D4048  7F E0 07 35 */	extsh. r0, r31
/* 802D710C 002D404C  40 81 00 0C */	ble .L_802D7118
/* 802D7110 002D4050  7F C3 F3 78 */	mr r3, r30
/* 802D7114 002D4054  4B D4 CF A1 */	bl __dl__FPv
.L_802D7118:
/* 802D7118 002D4058  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D711C 002D405C  7F C3 F3 78 */	mr r3, r30
/* 802D7120 002D4060  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D7124 002D4064  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D7128 002D4068  7C 08 03 A6 */	mtlr r0
/* 802D712C 002D406C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D7130 002D4070  4E 80 00 20 */	blr 
.endfn __dt__Q23efx11TKurageGepuFv

.fn __dt__Q23efx11TKurageKiraFv, weak
/* 802D7134 002D4074  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D7138 002D4078  7C 08 02 A6 */	mflr r0
/* 802D713C 002D407C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D7140 002D4080  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D7144 002D4084  7C 9F 23 78 */	mr r31, r4
/* 802D7148 002D4088  93 C1 00 08 */	stw r30, 8(r1)
/* 802D714C 002D408C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802D7150 002D4090  41 82 00 64 */	beq .L_802D71B4
/* 802D7154 002D4094  3C 60 80 4D */	lis r3, __vt__Q23efx11TKurageKira@ha
/* 802D7158 002D4098  38 63 2B AC */	addi r3, r3, __vt__Q23efx11TKurageKira@l
/* 802D715C 002D409C  90 7E 00 00 */	stw r3, 0(r30)
/* 802D7160 002D40A0  38 03 00 14 */	addi r0, r3, 0x14
/* 802D7164 002D40A4  90 1E 00 04 */	stw r0, 4(r30)
/* 802D7168 002D40A8  41 82 00 3C */	beq .L_802D71A4
/* 802D716C 002D40AC  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 802D7170 002D40B0  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 802D7174 002D40B4  90 7E 00 00 */	stw r3, 0(r30)
/* 802D7178 002D40B8  38 03 00 14 */	addi r0, r3, 0x14
/* 802D717C 002D40BC  90 1E 00 04 */	stw r0, 4(r30)
/* 802D7180 002D40C0  41 82 00 24 */	beq .L_802D71A4
/* 802D7184 002D40C4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802D7188 002D40C8  38 7E 00 04 */	addi r3, r30, 4
/* 802D718C 002D40CC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802D7190 002D40D0  38 80 00 00 */	li r4, 0
/* 802D7194 002D40D4  90 BE 00 00 */	stw r5, 0(r30)
/* 802D7198 002D40D8  38 05 00 14 */	addi r0, r5, 0x14
/* 802D719C 002D40DC  90 1E 00 04 */	stw r0, 4(r30)
/* 802D71A0 002D40E0  4B DB 8A FD */	bl __dt__18JPAEmitterCallBackFv
.L_802D71A4:
/* 802D71A4 002D40E4  7F E0 07 35 */	extsh. r0, r31
/* 802D71A8 002D40E8  40 81 00 0C */	ble .L_802D71B4
/* 802D71AC 002D40EC  7F C3 F3 78 */	mr r3, r30
/* 802D71B0 002D40F0  4B D4 CF 05 */	bl __dl__FPv
.L_802D71B4:
/* 802D71B4 002D40F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D71B8 002D40F8  7F C3 F3 78 */	mr r3, r30
/* 802D71BC 002D40FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D71C0 002D4100  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D71C4 002D4104  7C 08 03 A6 */	mtlr r0
/* 802D71C8 002D4108  38 21 00 10 */	addi r1, r1, 0x10
/* 802D71CC 002D410C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx11TKurageKiraFv

.fn __dt__Q23efx10TKurageEyeFv, weak
/* 802D71D0 002D4110  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D71D4 002D4114  7C 08 02 A6 */	mflr r0
/* 802D71D8 002D4118  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D71DC 002D411C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D71E0 002D4120  7C 9F 23 78 */	mr r31, r4
/* 802D71E4 002D4124  93 C1 00 08 */	stw r30, 8(r1)
/* 802D71E8 002D4128  7C 7E 1B 79 */	or. r30, r3, r3
/* 802D71EC 002D412C  41 82 00 64 */	beq .L_802D7250
/* 802D71F0 002D4130  3C 60 80 4D */	lis r3, __vt__Q23efx10TKurageEye@ha
/* 802D71F4 002D4134  38 63 2C 14 */	addi r3, r3, __vt__Q23efx10TKurageEye@l
/* 802D71F8 002D4138  90 7E 00 00 */	stw r3, 0(r30)
/* 802D71FC 002D413C  38 03 00 14 */	addi r0, r3, 0x14
/* 802D7200 002D4140  90 1E 00 04 */	stw r0, 4(r30)
/* 802D7204 002D4144  41 82 00 3C */	beq .L_802D7240
/* 802D7208 002D4148  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802D720C 002D414C  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802D7210 002D4150  90 7E 00 00 */	stw r3, 0(r30)
/* 802D7214 002D4154  38 03 00 14 */	addi r0, r3, 0x14
/* 802D7218 002D4158  90 1E 00 04 */	stw r0, 4(r30)
/* 802D721C 002D415C  41 82 00 24 */	beq .L_802D7240
/* 802D7220 002D4160  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802D7224 002D4164  38 7E 00 04 */	addi r3, r30, 4
/* 802D7228 002D4168  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802D722C 002D416C  38 80 00 00 */	li r4, 0
/* 802D7230 002D4170  90 BE 00 00 */	stw r5, 0(r30)
/* 802D7234 002D4174  38 05 00 14 */	addi r0, r5, 0x14
/* 802D7238 002D4178  90 1E 00 04 */	stw r0, 4(r30)
/* 802D723C 002D417C  4B DB 8A 61 */	bl __dt__18JPAEmitterCallBackFv
.L_802D7240:
/* 802D7240 002D4180  7F E0 07 35 */	extsh. r0, r31
/* 802D7244 002D4184  40 81 00 0C */	ble .L_802D7250
/* 802D7248 002D4188  7F C3 F3 78 */	mr r3, r30
/* 802D724C 002D418C  4B D4 CE 69 */	bl __dl__FPv
.L_802D7250:
/* 802D7250 002D4190  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D7254 002D4194  7F C3 F3 78 */	mr r3, r30
/* 802D7258 002D4198  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D725C 002D419C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D7260 002D41A0  7C 08 03 A6 */	mtlr r0
/* 802D7264 002D41A4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D7268 002D41A8  4E 80 00 20 */	blr 
.endfn __dt__Q23efx10TKurageEyeFv

.fn inWaterCallback__Q34Game9OniKurage3ObjFPQ24Game8WaterBox, weak
/* 802D726C 002D41AC  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q34Game9OniKurage3ObjFPQ24Game8WaterBox

.fn outWaterCallback__Q34Game9OniKurage3ObjFv, weak
/* 802D7270 002D41B0  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q34Game9OniKurage3ObjFv

.fn getMouthSlots__Q34Game9OniKurage3ObjFv, weak
/* 802D7274 002D41B4  38 63 02 E4 */	addi r3, r3, 0x2e4
/* 802D7278 002D41B8  4E 80 00 20 */	blr 
.endfn getMouthSlots__Q34Game9OniKurage3ObjFv

.fn getEnemyTypeID__Q34Game9OniKurage3ObjFv, weak
/* 802D727C 002D41BC  38 60 00 48 */	li r3, 0x48
/* 802D7280 002D41C0  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game9OniKurage3ObjFv

.fn __sinit_OniKurage_cpp, local
/* 802D7284 002D41C4  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802D7288 002D41C8  38 00 FF FF */	li r0, -1
/* 802D728C 002D41CC  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802D7290 002D41D0  3C 60 80 4D */	lis r3, govNAN___Q24Game5P2JST@ha
/* 802D7294 002D41D4  90 0D 97 50 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 802D7298 002D41D8  D4 03 2A D8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 802D729C 002D41DC  D0 0D 97 54 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 802D72A0 002D41E0  D0 03 00 04 */	stfs f0, 4(r3)
/* 802D72A4 002D41E4  D0 03 00 08 */	stfs f0, 8(r3)
/* 802D72A8 002D41E8  4E 80 00 20 */	blr 
.endfn __sinit_OniKurage_cpp

.fn "@4@__dt__Q23efx10TKurageEyeFv", weak
/* 802D72AC 002D41EC  38 63 FF FC */	addi r3, r3, -4
/* 802D72B0 002D41F0  4B FF FF 20 */	b __dt__Q23efx10TKurageEyeFv
.endfn "@4@__dt__Q23efx10TKurageEyeFv"

.fn "@4@__dt__Q23efx11TKurageKiraFv", weak
/* 802D72B4 002D41F4  38 63 FF FC */	addi r3, r3, -4
/* 802D72B8 002D41F8  4B FF FE 7C */	b __dt__Q23efx11TKurageKiraFv
.endfn "@4@__dt__Q23efx11TKurageKiraFv"

.fn "@4@__dt__Q23efx11TKurageGepuFv", weak
/* 802D72BC 002D41FC  38 63 FF FC */	addi r3, r3, -4
/* 802D72C0 002D4200  4B FF FD D8 */	b __dt__Q23efx11TKurageGepuFv
.endfn "@4@__dt__Q23efx11TKurageGepuFv"

.fn "@4@__dt__Q23efx14TKurageDeadrunFv", weak
/* 802D72C4 002D4204  38 63 FF FC */	addi r3, r3, -4
/* 802D72C8 002D4208  4B FF FD 34 */	b __dt__Q23efx14TKurageDeadrunFv
.endfn "@4@__dt__Q23efx14TKurageDeadrunFv"
