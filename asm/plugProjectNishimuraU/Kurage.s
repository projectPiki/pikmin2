.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80489DA8:
	.4byte 0x00000000
	.4byte 0x41F00000
	.4byte 0x42820000
	.4byte 0x42A00000
	.4byte 0x42BE0000
	.4byte 0x42D80000
	.4byte 0x42F00000
lbl_80489DC4:
	.4byte 0x00000000
	.4byte 0xC1A00000
	.4byte 0x41700000
	.4byte 0xC1F00000
	.4byte 0x00000000
	.4byte 0xC1C80000
	.4byte 0x00000000
lbl_80489DE0:
	.4byte 0x00000000
	.4byte 0x41200000
	.4byte 0x41700000
	.4byte 0x41A00000
	.4byte 0x41F00000
	.4byte 0x42200000
	.4byte 0x42700000
lbl_80489DFC:
	.4byte 0x00000000
	.4byte 0xC2480000
	.4byte 0x42480000
	.4byte 0xC2480000
	.4byte 0x41A00000
	.4byte 0xC1A00000
	.4byte 0x00000000
lbl_80489E18:
	.4byte 0x42000000
	.4byte 0x42200000
	.4byte 0x42500000
	.4byte 0x428C0000
	.4byte 0x42A00000
lbl_80489E2C:
	.4byte 0x00000000
	.4byte 0xC2340000
	.4byte 0xC2700000
	.4byte 0xC1200000
	.4byte 0xC1200000
lbl_80489E40:
	.4byte 0x40E00000
	.4byte 0x41880000
	.4byte 0x41D80000
	.4byte 0x42140000
	.4byte 0x423C0000
	.4byte 0x42640000
	.4byte 0x42860000
	.4byte 0x429A0000
lbl_80489E60:
	.4byte 0xC1A00000
	.4byte 0xC1700000
	.4byte 0xC20C0000
	.4byte 0xC1C80000
	.4byte 0xC2200000
	.4byte 0xC20C0000
	.4byte 0xC2820000
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23efx14TNewkurageBomb
__vt__Q23efx14TNewkurageBomb:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.global __vt__Q23efx17TNewkurageDeadrun
__vt__Q23efx17TNewkurageDeadrun:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx17TNewkurageDeadrunFv"
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
	.4byte __dt__Q23efx17TNewkurageDeadrunFv
.global __vt__Q23efx13TNewkurageSui
__vt__Q23efx13TNewkurageSui:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "fade__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "startDemoDrawOff__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "endDemoDrawOn__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
.global __vt__Q23efx14TNewkurageKira
__vt__Q23efx14TNewkurageKira:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TNewkurageKiraFv"
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
	.4byte __dt__Q23efx14TNewkurageKiraFv
.global __vt__Q23efx14TNewkurageHire
__vt__Q23efx14TNewkurageHire:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
.global __vt__Q23efx13TNewkurageEye
__vt__Q23efx13TNewkurageEye:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx13TNewkurageEyeFv"
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
	.4byte __dt__Q23efx13TNewkurageEyeFv
.global __vt__Q34Game6Kurage3Obj
__vt__Q34Game6Kurage3Obj:
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
	.4byte onInit__Q34Game6Kurage3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game6Kurage3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game6Kurage3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game6Kurage3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game6Kurage3ObjFv
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
	.4byte getShadowParam__Q34Game6Kurage3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game6Kurage3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game6Kurage3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game6Kurage3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game6Kurage3ObjFR8Graphics
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
	.4byte getEnemyTypeID__Q34Game6Kurage3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game6Kurage3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte doStartStoneState__Q34Game6Kurage3ObjFv
	.4byte doFinishStoneState__Q34Game6Kurage3ObjFv
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
	.4byte doStartWaitingBirthTypeDrop__Q34Game6Kurage3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game6Kurage3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game6Kurage3ObjFv
	.4byte doStartMovie__Q34Game6Kurage3ObjFv
	.4byte doEndMovie__Q34Game6Kurage3ObjFv
	.4byte setFSM__Q34Game6Kurage3ObjFPQ34Game6Kurage3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@764@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@764@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@764@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@764@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@764@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@764@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
	.4byte 0

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051C0C0
lbl_8051C0C0:
	.4byte 0x00000000
.global lbl_8051C0C4
lbl_8051C0C4:
	.4byte 0x40600000
.global lbl_8051C0C8
lbl_8051C0C8:
	.4byte 0x6B6F7368
	.4byte 0x69310000
.global lbl_8051C0D0
lbl_8051C0D0:
	.4byte 0x41C80000
.global lbl_8051C0D4
lbl_8051C0D4:
	.4byte 0x40A00000
.global lbl_8051C0D8
lbl_8051C0D8:
	.float 1.0
.global lbl_8051C0DC
lbl_8051C0DC:
	.4byte 0x42480000
.global lbl_8051C0E0
lbl_8051C0E0:
	.4byte 0x41700000
.global lbl_8051C0E4
lbl_8051C0E4:
	.4byte 0x47000000
.global lbl_8051C0E8
lbl_8051C0E8:
	.4byte 0x40490FDB
.global lbl_8051C0EC
lbl_8051C0EC:
	.4byte 0x3FC90FDB
.global lbl_8051C0F0
lbl_8051C0F0:
	.4byte 0x43A2F983
.global lbl_8051C0F4
lbl_8051C0F4:
	.4byte 0xC3A2F983
.global lbl_8051C0F8
lbl_8051C0F8:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051C100
lbl_8051C100:
	.4byte 0x40C90FDB
.global lbl_8051C104
lbl_8051C104:
	.4byte 0x41F00000
.global lbl_8051C108
lbl_8051C108:
	.4byte 0x3BB60B61
.global lbl_8051C10C
lbl_8051C10C:
	.4byte 0x4C74756E
	.4byte 0x6F320000
.global lbl_8051C114
lbl_8051C114:
	.4byte 0x5274756E
	.4byte 0x6F320000
.global lbl_8051C11C
lbl_8051C11C:
	.4byte 0x6E796F72
	.4byte 0x6F000000
.global lbl_8051C124
lbl_8051C124:
	.4byte 0x63656E74
	.4byte 0x65720000
.global lbl_8051C12C
lbl_8051C12C:
	.4byte 0x3F266666

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game6Kurage3ObjFv
__ct__Q34Game6Kurage3ObjFv:
/* 802AD6F0 002AA630  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AD6F4 002AA634  7C 08 02 A6 */	mflr r0
/* 802AD6F8 002AA638  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AD6FC 002AA63C  7C 80 07 35 */	extsh. r0, r4
/* 802AD700 002AA640  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AD704 002AA644  7C 7F 1B 78 */	mr r31, r3
/* 802AD708 002AA648  93 C1 00 08 */	stw r30, 8(r1)
/* 802AD70C 002AA64C  41 82 00 24 */	beq .L_802AD730
/* 802AD710 002AA650  38 1F 02 FC */	addi r0, r31, 0x2fc
/* 802AD714 002AA654  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802AD718 002AA658  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802AD71C 002AA65C  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802AD720 002AA660  38 00 00 00 */	li r0, 0
/* 802AD724 002AA664  90 7F 02 FC */	stw r3, 0x2fc(r31)
/* 802AD728 002AA668  90 1F 03 00 */	stw r0, 0x300(r31)
/* 802AD72C 002AA66C  90 1F 03 04 */	stw r0, 0x304(r31)
.L_802AD730:
/* 802AD730 002AA670  7F E3 FB 78 */	mr r3, r31
/* 802AD734 002AA674  38 80 00 00 */	li r4, 0
/* 802AD738 002AA678  4B E5 3C 69 */	bl __ct__Q24Game9EnemyBaseFv
/* 802AD73C 002AA67C  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage3Obj@ha
/* 802AD740 002AA680  38 1F 02 FC */	addi r0, r31, 0x2fc
/* 802AD744 002AA684  38 A3 E3 28 */	addi r5, r3, __vt__Q34Game6Kurage3Obj@l
/* 802AD748 002AA688  38 60 00 2C */	li r3, 0x2c
/* 802AD74C 002AA68C  90 BF 00 00 */	stw r5, 0(r31)
/* 802AD750 002AA690  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802AD754 002AA694  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 802AD758 002AA698  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802AD75C 002AA69C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802AD760 002AA6A0  90 A4 00 00 */	stw r5, 0(r4)
/* 802AD764 002AA6A4  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802AD768 002AA6A8  7C 04 00 50 */	subf r0, r4, r0
/* 802AD76C 002AA6AC  90 04 00 0C */	stw r0, 0xc(r4)
/* 802AD770 002AA6B0  4B D7 67 35 */	bl __nw__FUl
/* 802AD774 002AA6B4  7C 7E 1B 79 */	or. r30, r3, r3
/* 802AD778 002AA6B8  41 82 00 44 */	beq .L_802AD7BC
/* 802AD77C 002AA6BC  4B E7 A1 F9 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802AD780 002AA6C0  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage14ProperAnimator@ha
/* 802AD784 002AA6C4  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802AD788 002AA6C8  38 03 E0 E0 */	addi r0, r3, __vt__Q34Game6Kurage14ProperAnimator@l
/* 802AD78C 002AA6CC  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802AD790 002AA6D0  90 1E 00 00 */	stw r0, 0(r30)
/* 802AD794 002AA6D4  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802AD798 002AA6D8  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802AD79C 002AA6DC  38 00 00 00 */	li r0, 0
/* 802AD7A0 002AA6E0  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802AD7A4 002AA6E4  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802AD7A8 002AA6E8  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802AD7AC 002AA6EC  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802AD7B0 002AA6F0  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802AD7B4 002AA6F4  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802AD7B8 002AA6F8  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802AD7BC:
/* 802AD7BC 002AA6FC  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802AD7C0 002AA700  38 60 00 1C */	li r3, 0x1c
/* 802AD7C4 002AA704  4B D7 66 E1 */	bl __nw__FUl
/* 802AD7C8 002AA708  7C 64 1B 79 */	or. r4, r3, r3
/* 802AD7CC 002AA70C  41 82 00 24 */	beq .L_802AD7F0
/* 802AD7D0 002AA710  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802AD7D4 002AA714  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage3FSM@ha
/* 802AD7D8 002AA718  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802AD7DC 002AA71C  38 A0 FF FF */	li r5, -1
/* 802AD7E0 002AA720  90 04 00 00 */	stw r0, 0(r4)
/* 802AD7E4 002AA724  38 03 E0 B8 */	addi r0, r3, __vt__Q34Game6Kurage3FSM@l
/* 802AD7E8 002AA728  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802AD7EC 002AA72C  90 04 00 00 */	stw r0, 0(r4)
.L_802AD7F0:
/* 802AD7F0 002AA730  81 9F 00 00 */	lwz r12, 0(r31)
/* 802AD7F4 002AA734  7F E3 FB 78 */	mr r3, r31
/* 802AD7F8 002AA738  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802AD7FC 002AA73C  7D 89 03 A6 */	mtctr r12
/* 802AD800 002AA740  4E 80 04 21 */	bctrl 
/* 802AD804 002AA744  7F E3 FB 78 */	mr r3, r31
/* 802AD808 002AA748  48 00 1A E5 */	bl createEffect__Q34Game6Kurage3ObjFv
/* 802AD80C 002AA74C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AD810 002AA750  7F E3 FB 78 */	mr r3, r31
/* 802AD814 002AA754  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AD818 002AA758  83 C1 00 08 */	lwz r30, 8(r1)
/* 802AD81C 002AA75C  7C 08 03 A6 */	mtlr r0
/* 802AD820 002AA760  38 21 00 10 */	addi r1, r1, 0x10
/* 802AD824 002AA764  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game6Kurage3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game6Kurage3ObjFPQ24Game21EnemyInitialParamBase:
/* 802AD828 002AA768  4E 80 00 20 */	blr 

.global onInit__Q34Game6Kurage3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game6Kurage3ObjFPQ24Game15CreatureInitArg:
/* 802AD82C 002AA76C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AD830 002AA770  7C 08 02 A6 */	mflr r0
/* 802AD834 002AA774  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AD838 002AA778  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AD83C 002AA77C  7C 7F 1B 78 */	mr r31, r3
/* 802AD840 002AA780  4B E5 42 19 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802AD844 002AA784  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 802AD848 002AA788  38 80 FF FF */	li r4, -1
/* 802AD84C 002AA78C  C0 22 DD 60 */	lfs f1, lbl_8051C0C0@sda21(r2)
/* 802AD850 002AA790  38 00 00 00 */	li r0, 0
/* 802AD854 002AA794  54 63 06 6E */	rlwinm r3, r3, 0, 0x19, 0x17
/* 802AD858 002AA798  C0 02 DD 64 */	lfs f0, lbl_8051C0C4@sda21(r2)
/* 802AD85C 002AA79C  90 7F 01 E0 */	stw r3, 0x1e0(r31)
/* 802AD860 002AA7A0  7F E3 FB 78 */	mr r3, r31
/* 802AD864 002AA7A4  80 BF 01 E0 */	lwz r5, 0x1e0(r31)
/* 802AD868 002AA7A8  60 A5 00 04 */	ori r5, r5, 4
/* 802AD86C 002AA7AC  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802AD870 002AA7B0  80 BF 01 E0 */	lwz r5, 0x1e0(r31)
/* 802AD874 002AA7B4  54 A5 06 2C */	rlwinm r5, r5, 0, 0x18, 0x16
/* 802AD878 002AA7B8  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802AD87C 002AA7BC  90 9F 02 C0 */	stw r4, 0x2c0(r31)
/* 802AD880 002AA7C0  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 802AD884 002AA7C4  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 802AD888 002AA7C8  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802AD88C 002AA7CC  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 802AD890 002AA7D0  98 1F 02 DC */	stb r0, 0x2dc(r31)
/* 802AD894 002AA7D4  48 00 1D 0D */	bl setupEffect__Q34Game6Kurage3ObjFv
/* 802AD898 002AA7D8  7F E3 FB 78 */	mr r3, r31
/* 802AD89C 002AA7DC  48 00 1D 91 */	bl startEyeHireBodyEffect__Q34Game6Kurage3ObjFv
/* 802AD8A0 002AA7E0  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802AD8A4 002AA7E4  7F E4 FB 78 */	mr r4, r31
/* 802AD8A8 002AA7E8  38 A0 00 01 */	li r5, 1
/* 802AD8AC 002AA7EC  38 C0 00 00 */	li r6, 0
/* 802AD8B0 002AA7F0  81 83 00 00 */	lwz r12, 0(r3)
/* 802AD8B4 002AA7F4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802AD8B8 002AA7F8  7D 89 03 A6 */	mtctr r12
/* 802AD8BC 002AA7FC  4E 80 04 21 */	bctrl 
/* 802AD8C0 002AA800  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AD8C4 002AA804  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AD8C8 002AA808  7C 08 03 A6 */	mtlr r0
/* 802AD8CC 002AA80C  38 21 00 10 */	addi r1, r1, 0x10
/* 802AD8D0 002AA810  4E 80 00 20 */	blr 

.global onKill__Q34Game6Kurage3ObjFPQ24Game15CreatureKillArg
onKill__Q34Game6Kurage3ObjFPQ24Game15CreatureKillArg:
/* 802AD8D4 002AA814  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AD8D8 002AA818  7C 08 02 A6 */	mflr r0
/* 802AD8DC 002AA81C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AD8E0 002AA820  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AD8E4 002AA824  7C 9F 23 78 */	mr r31, r4
/* 802AD8E8 002AA828  93 C1 00 08 */	stw r30, 8(r1)
/* 802AD8EC 002AA82C  7C 7E 1B 78 */	mr r30, r3
/* 802AD8F0 002AA830  48 00 1D C5 */	bl finishEyeBodyEffect__Q34Game6Kurage3ObjFv
/* 802AD8F4 002AA834  7F C3 F3 78 */	mr r3, r30
/* 802AD8F8 002AA838  48 00 1E 5D */	bl finishHireEffect__Q34Game6Kurage3ObjFv
/* 802AD8FC 002AA83C  7F C3 F3 78 */	mr r3, r30
/* 802AD900 002AA840  48 00 1F 21 */	bl finishSuckEffect__Q34Game6Kurage3ObjFv
/* 802AD904 002AA844  7F C3 F3 78 */	mr r3, r30
/* 802AD908 002AA848  7F E4 FB 78 */	mr r4, r31
/* 802AD90C 002AA84C  4B E5 45 DD */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 802AD910 002AA850  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AD914 002AA854  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AD918 002AA858  83 C1 00 08 */	lwz r30, 8(r1)
/* 802AD91C 002AA85C  7C 08 03 A6 */	mtlr r0
/* 802AD920 002AA860  38 21 00 10 */	addi r1, r1, 0x10
/* 802AD924 002AA864  4E 80 00 20 */	blr 

.global doUpdate__Q34Game6Kurage3ObjFv
doUpdate__Q34Game6Kurage3ObjFv:
/* 802AD928 002AA868  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AD92C 002AA86C  7C 08 02 A6 */	mflr r0
/* 802AD930 002AA870  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AD934 002AA874  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AD938 002AA878  7C 7F 1B 78 */	mr r31, r3
/* 802AD93C 002AA87C  7F E4 FB 78 */	mr r4, r31
/* 802AD940 002AA880  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802AD944 002AA884  81 83 00 00 */	lwz r12, 0(r3)
/* 802AD948 002AA888  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802AD94C 002AA88C  7D 89 03 A6 */	mtctr r12
/* 802AD950 002AA890  4E 80 04 21 */	bctrl 
/* 802AD954 002AA894  7F E3 FB 78 */	mr r3, r31
/* 802AD958 002AA898  48 00 0D 09 */	bl updateFallTimer__Q34Game6Kurage3ObjFv
/* 802AD95C 002AA89C  7F E3 FB 78 */	mr r3, r31
/* 802AD960 002AA8A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802AD964 002AA8A4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802AD968 002AA8A8  7D 89 03 A6 */	mtctr r12
/* 802AD96C 002AA8AC  4E 80 04 21 */	bctrl 
/* 802AD970 002AA8B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AD974 002AA8B4  41 82 00 A0 */	beq .L_802ADA14
/* 802AD978 002AA8B8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802AD97C 002AA8BC  54 00 06 73 */	rlwinm. r0, r0, 0, 0x19, 0x19
/* 802AD980 002AA8C0  41 82 00 94 */	beq .L_802ADA14
/* 802AD984 002AA8C4  7F E3 FB 78 */	mr r3, r31
/* 802AD988 002AA8C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802AD98C 002AA8CC  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802AD990 002AA8D0  7D 89 03 A6 */	mtctr r12
/* 802AD994 002AA8D4  4E 80 04 21 */	bctrl 
/* 802AD998 002AA8D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AD99C 002AA8DC  41 82 00 30 */	beq .L_802AD9CC
/* 802AD9A0 002AA8E0  7F E3 FB 78 */	mr r3, r31
/* 802AD9A4 002AA8E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802AD9A8 002AA8E8  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802AD9AC 002AA8EC  7D 89 03 A6 */	mtctr r12
/* 802AD9B0 002AA8F0  4E 80 04 21 */	bctrl 
/* 802AD9B4 002AA8F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802AD9B8 002AA8F8  38 80 50 C7 */	li r4, 0x50c7
/* 802AD9BC 002AA8FC  38 A0 00 00 */	li r5, 0
/* 802AD9C0 002AA900  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802AD9C4 002AA904  7D 89 03 A6 */	mtctr r12
/* 802AD9C8 002AA908  4E 80 04 21 */	bctrl 
.L_802AD9CC:
/* 802AD9CC 002AA90C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802AD9D0 002AA910  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 802AD9D4 002AA914  41 82 00 40 */	beq .L_802ADA14
/* 802AD9D8 002AA918  C0 22 DD 60 */	lfs f1, lbl_8051C0C0@sda21(r2)
/* 802AD9DC 002AA91C  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 802AD9E0 002AA920  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 802AD9E4 002AA924  40 82 00 30 */	bne .L_802ADA14
/* 802AD9E8 002AA928  7F E3 FB 78 */	mr r3, r31
/* 802AD9EC 002AA92C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802AD9F0 002AA930  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802AD9F4 002AA934  7D 89 03 A6 */	mtctr r12
/* 802AD9F8 002AA938  4E 80 04 21 */	bctrl 
/* 802AD9FC 002AA93C  81 83 00 00 */	lwz r12, 0(r3)
/* 802ADA00 002AA940  38 80 58 C8 */	li r4, 0x58c8
/* 802ADA04 002AA944  38 A0 00 00 */	li r5, 0
/* 802ADA08 002AA948  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802ADA0C 002AA94C  7D 89 03 A6 */	mtctr r12
/* 802ADA10 002AA950  4E 80 04 21 */	bctrl 
.L_802ADA14:
/* 802ADA14 002AA954  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ADA18 002AA958  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ADA1C 002AA95C  7C 08 03 A6 */	mtlr r0
/* 802ADA20 002AA960  38 21 00 10 */	addi r1, r1, 0x10
/* 802ADA24 002AA964  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game6Kurage3ObjFR8Graphics
doDirectDraw__Q34Game6Kurage3ObjFR8Graphics:
/* 802ADA28 002AA968  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game6Kurage3ObjFR8Graphics
doDebugDraw__Q34Game6Kurage3ObjFR8Graphics:
/* 802ADA2C 002AA96C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ADA30 002AA970  7C 08 02 A6 */	mflr r0
/* 802ADA34 002AA974  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ADA38 002AA978  4B E5 84 35 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802ADA3C 002AA97C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ADA40 002AA980  7C 08 03 A6 */	mtlr r0
/* 802ADA44 002AA984  38 21 00 10 */	addi r1, r1, 0x10
/* 802ADA48 002AA988  4E 80 00 20 */	blr 

.global setFSM__Q34Game6Kurage3ObjFPQ34Game6Kurage3FSM
setFSM__Q34Game6Kurage3ObjFPQ34Game6Kurage3FSM:
/* 802ADA4C 002AA98C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ADA50 002AA990  7C 08 02 A6 */	mflr r0
/* 802ADA54 002AA994  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ADA58 002AA998  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ADA5C 002AA99C  7C 7F 1B 78 */	mr r31, r3
/* 802ADA60 002AA9A0  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802ADA64 002AA9A4  7F E4 FB 78 */	mr r4, r31
/* 802ADA68 002AA9A8  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802ADA6C 002AA9AC  81 83 00 00 */	lwz r12, 0(r3)
/* 802ADA70 002AA9B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802ADA74 002AA9B4  7D 89 03 A6 */	mtctr r12
/* 802ADA78 002AA9B8  4E 80 04 21 */	bctrl 
/* 802ADA7C 002AA9BC  38 00 00 00 */	li r0, 0
/* 802ADA80 002AA9C0  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802ADA84 002AA9C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ADA88 002AA9C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ADA8C 002AA9CC  7C 08 03 A6 */	mtlr r0
/* 802ADA90 002AA9D0  38 21 00 10 */	addi r1, r1, 0x10
/* 802ADA94 002AA9D4  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game6Kurage3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game6Kurage3ObjFRQ24Game11ShadowParam:
/* 802ADA98 002AA9D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802ADA9C 002AA9DC  7C 08 02 A6 */	mflr r0
/* 802ADAA0 002AA9E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802ADAA4 002AA9E4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802ADAA8 002AA9E8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802ADAAC 002AA9EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ADAB0 002AA9F0  93 C1 00 08 */	stw r30, 8(r1)
/* 802ADAB4 002AA9F4  7C 7E 1B 78 */	mr r30, r3
/* 802ADAB8 002AA9F8  7C 9F 23 78 */	mr r31, r4
/* 802ADABC 002AA9FC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802ADAC0 002AAA00  38 82 DD 68 */	addi r4, r2, lbl_8051C0C8@sda21
/* 802ADAC4 002AAA04  48 19 15 21 */	bl getJoint__Q28SysShape5ModelFPc
/* 802ADAC8 002AAA08  48 17 BD D9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802ADACC 002AAA0C  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802ADAD0 002AAA10  7F E4 FB 78 */	mr r4, r31
/* 802ADAD4 002AAA14  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802ADAD8 002AAA18  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802ADADC 002AAA1C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802ADAE0 002AAA20  D0 3F 00 04 */	stfs f1, 4(r31)
/* 802ADAE4 002AAA24  D0 5F 00 08 */	stfs f2, 8(r31)
/* 802ADAE8 002AAA28  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802ADAEC 002AAA2C  81 83 00 04 */	lwz r12, 4(r3)
/* 802ADAF0 002AAA30  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802ADAF4 002AAA34  7D 89 03 A6 */	mtctr r12
/* 802ADAF8 002AAA38  4E 80 04 21 */	bctrl 
/* 802ADAFC 002AAA3C  7F C3 F3 78 */	mr r3, r30
/* 802ADB00 002AAA40  FF E0 08 90 */	fmr f31, f1
/* 802ADB04 002AAA44  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ADB08 002AAA48  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802ADB0C 002AAA4C  7D 89 03 A6 */	mtctr r12
/* 802ADB10 002AAA50  4E 80 04 21 */	bctrl 
/* 802ADB14 002AAA54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802ADB18 002AAA58  41 82 00 14 */	beq .L_802ADB2C
/* 802ADB1C 002AAA5C  C0 02 DD 70 */	lfs f0, lbl_8051C0D0@sda21(r2)
/* 802ADB20 002AAA60  EC 00 F8 2A */	fadds f0, f0, f31
/* 802ADB24 002AAA64  D0 1F 00 04 */	stfs f0, 4(r31)
/* 802ADB28 002AAA68  48 00 00 10 */	b .L_802ADB38
.L_802ADB2C:
/* 802ADB2C 002AAA6C  C0 02 DD 74 */	lfs f0, lbl_8051C0D4@sda21(r2)
/* 802ADB30 002AAA70  EC 00 F8 2A */	fadds f0, f0, f31
/* 802ADB34 002AAA74  D0 1F 00 04 */	stfs f0, 4(r31)
.L_802ADB38:
/* 802ADB38 002AAA78  C0 22 DD 60 */	lfs f1, lbl_8051C0C0@sda21(r2)
/* 802ADB3C 002AAA7C  7F C3 F3 78 */	mr r3, r30
/* 802ADB40 002AAA80  C0 02 DD 78 */	lfs f0, lbl_8051C0D8@sda21(r2)
/* 802ADB44 002AAA84  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802ADB48 002AAA88  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802ADB4C 002AAA8C  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802ADB50 002AAA90  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ADB54 002AAA94  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802ADB58 002AAA98  7D 89 03 A6 */	mtctr r12
/* 802ADB5C 002AAA9C  4E 80 04 21 */	bctrl 
/* 802ADB60 002AAAA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802ADB64 002AAAA4  41 82 00 1C */	beq .L_802ADB80
/* 802ADB68 002AAAA8  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802ADB6C 002AAAAC  C0 22 DD 7C */	lfs f1, lbl_8051C0DC@sda21(r2)
/* 802ADB70 002AAAB0  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 802ADB74 002AAAB4  EC 01 00 2A */	fadds f0, f1, f0
/* 802ADB78 002AAAB8  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802ADB7C 002AAABC  48 00 00 0C */	b .L_802ADB88
.L_802ADB80:
/* 802ADB80 002AAAC0  C0 02 DD 7C */	lfs f0, lbl_8051C0DC@sda21(r2)
/* 802ADB84 002AAAC4  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802ADB88:
/* 802ADB88 002AAAC8  C0 02 DD 80 */	lfs f0, lbl_8051C0E0@sda21(r2)
/* 802ADB8C 002AAACC  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802ADB90 002AAAD0  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802ADB94 002AAAD4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802ADB98 002AAAD8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802ADB9C 002AAADC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ADBA0 002AAAE0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802ADBA4 002AAAE4  7C 08 03 A6 */	mtlr r0
/* 802ADBA8 002AAAE8  38 21 00 20 */	addi r1, r1, 0x20
/* 802ADBAC 002AAAEC  4E 80 00 20 */	blr 

.global damageCallBack__Q34Game6Kurage3ObjFPQ24Game8CreaturefP8CollPart
damageCallBack__Q34Game6Kurage3ObjFPQ24Game8CreaturefP8CollPart:
/* 802ADBB0 002AAAF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ADBB4 002AAAF4  7C 08 02 A6 */	mflr r0
/* 802ADBB8 002AAAF8  28 05 00 00 */	cmplwi r5, 0
/* 802ADBBC 002AAAFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ADBC0 002AAB00  41 82 00 14 */	beq .L_802ADBD4
/* 802ADBC4 002AAB04  C0 42 DD 78 */	lfs f2, lbl_8051C0D8@sda21(r2)
/* 802ADBC8 002AAB08  4B E5 84 65 */	bl addDamage__Q24Game9EnemyBaseFff
/* 802ADBCC 002AAB0C  38 60 00 01 */	li r3, 1
/* 802ADBD0 002AAB10  48 00 00 08 */	b .L_802ADBD8
.L_802ADBD4:
/* 802ADBD4 002AAB14  38 60 00 00 */	li r3, 0
.L_802ADBD8:
/* 802ADBD8 002AAB18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ADBDC 002AAB1C  7C 08 03 A6 */	mtlr r0
/* 802ADBE0 002AAB20  38 21 00 10 */	addi r1, r1, 0x10
/* 802ADBE4 002AAB24  4E 80 00 20 */	blr 

.global doStartStoneState__Q34Game6Kurage3ObjFv
doStartStoneState__Q34Game6Kurage3ObjFv:
/* 802ADBE8 002AAB28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ADBEC 002AAB2C  7C 08 02 A6 */	mflr r0
/* 802ADBF0 002AAB30  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ADBF4 002AAB34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ADBF8 002AAB38  7C 7F 1B 78 */	mr r31, r3
/* 802ADBFC 002AAB3C  4B E5 52 F9 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802ADC00 002AAB40  7F E3 FB 78 */	mr r3, r31
/* 802ADC04 002AAB44  48 00 1A B1 */	bl finishEyeBodyEffect__Q34Game6Kurage3ObjFv
/* 802ADC08 002AAB48  7F E3 FB 78 */	mr r3, r31
/* 802ADC0C 002AAB4C  48 00 1B 49 */	bl finishHireEffect__Q34Game6Kurage3ObjFv
/* 802ADC10 002AAB50  7F E3 FB 78 */	mr r3, r31
/* 802ADC14 002AAB54  48 00 1C 0D */	bl finishSuckEffect__Q34Game6Kurage3ObjFv
/* 802ADC18 002AAB58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ADC1C 002AAB5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ADC20 002AAB60  7C 08 03 A6 */	mtlr r0
/* 802ADC24 002AAB64  38 21 00 10 */	addi r1, r1, 0x10
/* 802ADC28 002AAB68  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game6Kurage3ObjFv
doFinishStoneState__Q34Game6Kurage3ObjFv:
/* 802ADC2C 002AAB6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ADC30 002AAB70  7C 08 02 A6 */	mflr r0
/* 802ADC34 002AAB74  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ADC38 002AAB78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ADC3C 002AAB7C  7C 7F 1B 78 */	mr r31, r3
/* 802ADC40 002AAB80  4B E5 52 C9 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802ADC44 002AAB84  7F E3 FB 78 */	mr r3, r31
/* 802ADC48 002AAB88  48 00 19 E5 */	bl startEyeHireBodyEffect__Q34Game6Kurage3ObjFv
/* 802ADC4C 002AAB8C  7F E3 FB 78 */	mr r3, r31
/* 802ADC50 002AAB90  4B E5 97 A5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802ADC54 002AAB94  2C 03 00 01 */	cmpwi r3, 1
/* 802ADC58 002AAB98  41 80 00 0C */	blt .L_802ADC64
/* 802ADC5C 002AAB9C  2C 03 00 05 */	cmpwi r3, 5
/* 802ADC60 002AABA0  40 81 00 14 */	ble .L_802ADC74
.L_802ADC64:
/* 802ADC64 002AABA4  2C 03 00 08 */	cmpwi r3, 8
/* 802ADC68 002AABA8  41 80 00 2C */	blt .L_802ADC94
/* 802ADC6C 002AABAC  2C 03 00 09 */	cmpwi r3, 9
/* 802ADC70 002AABB0  41 81 00 24 */	bgt .L_802ADC94
.L_802ADC74:
/* 802ADC74 002AABB4  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802ADC78 002AABB8  7F E4 FB 78 */	mr r4, r31
/* 802ADC7C 002AABBC  38 A0 00 08 */	li r5, 8
/* 802ADC80 002AABC0  38 C0 00 00 */	li r6, 0
/* 802ADC84 002AABC4  81 83 00 00 */	lwz r12, 0(r3)
/* 802ADC88 002AABC8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802ADC8C 002AABCC  7D 89 03 A6 */	mtctr r12
/* 802ADC90 002AABD0  4E 80 04 21 */	bctrl 
.L_802ADC94:
/* 802ADC94 002AABD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ADC98 002AABD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ADC9C 002AABDC  7C 08 03 A6 */	mtlr r0
/* 802ADCA0 002AABE0  38 21 00 10 */	addi r1, r1, 0x10
/* 802ADCA4 002AABE4  4E 80 00 20 */	blr 

.global doStartWaitingBirthTypeDrop__Q34Game6Kurage3ObjFv
doStartWaitingBirthTypeDrop__Q34Game6Kurage3ObjFv:
/* 802ADCA8 002AABE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ADCAC 002AABEC  7C 08 02 A6 */	mflr r0
/* 802ADCB0 002AABF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ADCB4 002AABF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ADCB8 002AABF8  7C 7F 1B 78 */	mr r31, r3
/* 802ADCBC 002AABFC  4B E5 9C DD */	bl doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 802ADCC0 002AAC00  7F E3 FB 78 */	mr r3, r31
/* 802ADCC4 002AAC04  48 00 1D 15 */	bl effectDrawOff__Q34Game6Kurage3ObjFv
/* 802ADCC8 002AAC08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ADCCC 002AAC0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ADCD0 002AAC10  7C 08 03 A6 */	mtlr r0
/* 802ADCD4 002AAC14  38 21 00 10 */	addi r1, r1, 0x10
/* 802ADCD8 002AAC18  4E 80 00 20 */	blr 

.global doFinishWaitingBirthTypeDrop__Q34Game6Kurage3ObjFv
doFinishWaitingBirthTypeDrop__Q34Game6Kurage3ObjFv:
/* 802ADCDC 002AAC1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ADCE0 002AAC20  7C 08 02 A6 */	mflr r0
/* 802ADCE4 002AAC24  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ADCE8 002AAC28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ADCEC 002AAC2C  7C 7F 1B 78 */	mr r31, r3
/* 802ADCF0 002AAC30  4B E5 9C D9 */	bl doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 802ADCF4 002AAC34  7F E3 FB 78 */	mr r3, r31
/* 802ADCF8 002AAC38  48 00 1C 41 */	bl effectDrawOn__Q34Game6Kurage3ObjFv
/* 802ADCFC 002AAC3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ADD00 002AAC40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ADD04 002AAC44  7C 08 03 A6 */	mtlr r0
/* 802ADD08 002AAC48  38 21 00 10 */	addi r1, r1, 0x10
/* 802ADD0C 002AAC4C  4E 80 00 20 */	blr 

.global doStartMovie__Q34Game6Kurage3ObjFv
doStartMovie__Q34Game6Kurage3ObjFv:
/* 802ADD10 002AAC50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ADD14 002AAC54  7C 08 02 A6 */	mflr r0
/* 802ADD18 002AAC58  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ADD1C 002AAC5C  48 00 1C BD */	bl effectDrawOff__Q34Game6Kurage3ObjFv
/* 802ADD20 002AAC60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ADD24 002AAC64  7C 08 03 A6 */	mtlr r0
/* 802ADD28 002AAC68  38 21 00 10 */	addi r1, r1, 0x10
/* 802ADD2C 002AAC6C  4E 80 00 20 */	blr 

.global doEndMovie__Q34Game6Kurage3ObjFv
doEndMovie__Q34Game6Kurage3ObjFv:
/* 802ADD30 002AAC70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ADD34 002AAC74  7C 08 02 A6 */	mflr r0
/* 802ADD38 002AAC78  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ADD3C 002AAC7C  48 00 1B FD */	bl effectDrawOn__Q34Game6Kurage3ObjFv
/* 802ADD40 002AAC80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ADD44 002AAC84  7C 08 03 A6 */	mtlr r0
/* 802ADD48 002AAC88  38 21 00 10 */	addi r1, r1, 0x10
/* 802ADD4C 002AAC8C  4E 80 00 20 */	blr 

.global setHeightVelocity__Q34Game6Kurage3ObjFff
setHeightVelocity__Q34Game6Kurage3ObjFff:
/* 802ADD50 002AAC90  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802ADD54 002AAC94  7C 08 02 A6 */	mflr r0
/* 802ADD58 002AAC98  90 01 00 34 */	stw r0, 0x34(r1)
/* 802ADD5C 002AAC9C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802ADD60 002AACA0  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802ADD64 002AACA4  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 802ADD68 002AACA8  F3 C1 00 18 */	psq_st f30, 24(r1), 0, qr0
/* 802ADD6C 002AACAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ADD70 002AACB0  7C 7F 1B 78 */	mr r31, r3
/* 802ADD74 002AACB4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802ADD78 002AACB8  FF C0 08 90 */	fmr f30, f1
/* 802ADD7C 002AACBC  38 9F 01 8C */	addi r4, r31, 0x18c
/* 802ADD80 002AACC0  81 83 00 04 */	lwz r12, 4(r3)
/* 802ADD84 002AACC4  FF E0 10 90 */	fmr f31, f2
/* 802ADD88 002AACC8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802ADD8C 002AACCC  7D 89 03 A6 */	mtctr r12
/* 802ADD90 002AACD0  4E 80 04 21 */	bctrl 
/* 802ADD94 002AACD4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802ADD98 002AACD8  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802ADD9C 002AACDC  C0 43 08 1C */	lfs f2, 0x81c(r3)
/* 802ADDA0 002AACE0  C0 63 08 44 */	lfs f3, 0x844(r3)
/* 802ADDA4 002AACE4  EC 5E 10 2A */	fadds f2, f30, f2
/* 802ADDA8 002AACE8  EC 7F 18 2A */	fadds f3, f31, f3
/* 802ADDAC 002AACEC  EC 41 10 2A */	fadds f2, f1, f2
/* 802ADDB0 002AACF0  EC 02 00 28 */	fsubs f0, f2, f0
/* 802ADDB4 002AACF4  EC 03 00 32 */	fmuls f0, f3, f0
/* 802ADDB8 002AACF8  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 802ADDBC 002AACFC  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802ADDC0 002AAD00  EC 20 08 28 */	fsubs f1, f0, f1
/* 802ADDC4 002AAD04  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802ADDC8 002AAD08  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802ADDCC 002AAD0C  E3 C1 00 18 */	psq_l f30, 24(r1), 0, qr0
/* 802ADDD0 002AAD10  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 802ADDD4 002AAD14  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802ADDD8 002AAD18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ADDDC 002AAD1C  7C 08 03 A6 */	mtlr r0
/* 802ADDE0 002AAD20  38 21 00 30 */	addi r1, r1, 0x30
/* 802ADDE4 002AAD24  4E 80 00 20 */	blr 

.global setRandTarget__Q34Game6Kurage3ObjFv
setRandTarget__Q34Game6Kurage3ObjFv:
/* 802ADDE8 002AAD28  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 802ADDEC 002AAD2C  7C 08 02 A6 */	mflr r0
/* 802ADDF0 002AAD30  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 802ADDF4 002AAD34  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 802ADDF8 002AAD38  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 802ADDFC 002AAD3C  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 802ADE00 002AAD40  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 802ADE04 002AAD44  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 802ADE08 002AAD48  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 802ADE0C 002AAD4C  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 802ADE10 002AAD50  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 802ADE14 002AAD54  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 802ADE18 002AAD58  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 802ADE1C 002AAD5C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802ADE20 002AAD60  7C 7F 1B 78 */	mr r31, r3
/* 802ADE24 002AAD64  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802ADE28 002AAD68  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 802ADE2C 002AAD6C  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802ADE30 002AAD70  EF 61 00 28 */	fsubs f27, f1, f0
/* 802ADE34 002AAD74  4B E1 B7 6D */	bl rand
/* 802ADE38 002AAD78  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802ADE3C 002AAD7C  3C 00 43 30 */	lis r0, 0x4330
/* 802ADE40 002AAD80  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802ADE44 002AAD84  7F E4 FB 78 */	mr r4, r31
/* 802ADE48 002AAD88  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802ADE4C 002AAD8C  38 61 00 08 */	addi r3, r1, 8
/* 802ADE50 002AAD90  90 01 00 18 */	stw r0, 0x18(r1)
/* 802ADE54 002AAD94  C8 22 DD 98 */	lfd f1, lbl_8051C0F8@sda21(r2)
/* 802ADE58 002AAD98  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 802ADE5C 002AAD9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802ADE60 002AADA0  EC 40 08 28 */	fsubs f2, f0, f1
/* 802ADE64 002AADA4  C0 22 DD 84 */	lfs f1, lbl_8051C0E4@sda21(r2)
/* 802ADE68 002AADA8  C0 05 03 84 */	lfs f0, 0x384(r5)
/* 802ADE6C 002AADAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802ADE70 002AADB0  EC 5B 00 B2 */	fmuls f2, f27, f2
/* 802ADE74 002AADB4  EC 22 08 24 */	fdivs f1, f2, f1
/* 802ADE78 002AADB8  EF 80 08 2A */	fadds f28, f0, f1
/* 802ADE7C 002AADBC  7D 89 03 A6 */	mtctr r12
/* 802ADE80 002AADC0  4E 80 04 21 */	bctrl 
/* 802ADE84 002AADC4  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 802ADE88 002AADC8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802ADE8C 002AADCC  C0 21 00 08 */	lfs f1, 8(r1)
/* 802ADE90 002AADD0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802ADE94 002AADD4  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 802ADE98 002AADD8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802ADE9C 002AADDC  EC 21 F8 28 */	fsubs f1, f1, f31
/* 802ADEA0 002AADE0  C3 DF 01 9C */	lfs f30, 0x19c(r31)
/* 802ADEA4 002AADE4  EC 40 E8 28 */	fsubs f2, f0, f29
/* 802ADEA8 002AADE8  4B D8 72 61 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802ADEAC 002AADEC  FF 60 08 90 */	fmr f27, f1
/* 802ADEB0 002AADF0  4B E1 B6 F1 */	bl rand
/* 802ADEB4 002AADF4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802ADEB8 002AADF8  3C 00 43 30 */	lis r0, 0x4330
/* 802ADEBC 002AADFC  90 61 00 24 */	stw r3, 0x24(r1)
/* 802ADEC0 002AAE00  C8 42 DD 98 */	lfd f2, lbl_8051C0F8@sda21(r2)
/* 802ADEC4 002AAE04  90 01 00 20 */	stw r0, 0x20(r1)
/* 802ADEC8 002AAE08  C0 62 DD 88 */	lfs f3, lbl_8051C0E8@sda21(r2)
/* 802ADECC 002AAE0C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 802ADED0 002AAE10  C0 22 DD 84 */	lfs f1, lbl_8051C0E4@sda21(r2)
/* 802ADED4 002AAE14  EC 80 10 28 */	fsubs f4, f0, f2
/* 802ADED8 002AAE18  C0 42 DD 8C */	lfs f2, lbl_8051C0EC@sda21(r2)
/* 802ADEDC 002AAE1C  C0 02 DD 60 */	lfs f0, lbl_8051C0C0@sda21(r2)
/* 802ADEE0 002AAE20  EC 63 01 32 */	fmuls f3, f3, f4
/* 802ADEE4 002AAE24  EC 23 08 24 */	fdivs f1, f3, f1
/* 802ADEE8 002AAE28  EC 3B 08 2A */	fadds f1, f27, f1
/* 802ADEEC 002AAE2C  EC 62 08 2A */	fadds f3, f2, f1
/* 802ADEF0 002AAE30  FC 20 18 90 */	fmr f1, f3
/* 802ADEF4 002AAE34  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802ADEF8 002AAE38  40 80 00 08 */	bge .L_802ADF00
/* 802ADEFC 002AAE3C  FC 20 18 50 */	fneg f1, f3
.L_802ADF00:
/* 802ADF00 002AAE40  C0 42 DD 90 */	lfs f2, lbl_8051C0F0@sda21(r2)
/* 802ADF04 002AAE44  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802ADF08 002AAE48  C0 02 DD 60 */	lfs f0, lbl_8051C0C0@sda21(r2)
/* 802ADF0C 002AAE4C  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802ADF10 002AAE50  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802ADF14 002AAE54  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802ADF18 002AAE58  FC 00 08 1E */	fctiwz f0, f1
/* 802ADF1C 002AAE5C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802ADF20 002AAE60  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802ADF24 002AAE64  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802ADF28 002AAE68  7C 64 02 14 */	add r3, r4, r0
/* 802ADF2C 002AAE6C  C0 03 00 04 */	lfs f0, 4(r3)
/* 802ADF30 002AAE70  EC 3C E8 3A */	fmadds f1, f28, f0, f29
/* 802ADF34 002AAE74  40 80 00 28 */	bge .L_802ADF5C
/* 802ADF38 002AAE78  C0 02 DD 94 */	lfs f0, lbl_8051C0F4@sda21(r2)
/* 802ADF3C 002AAE7C  EC 03 00 32 */	fmuls f0, f3, f0
/* 802ADF40 002AAE80  FC 00 00 1E */	fctiwz f0, f0
/* 802ADF44 002AAE84  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802ADF48 002AAE88  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802ADF4C 002AAE8C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802ADF50 002AAE90  7C 04 04 2E */	lfsx f0, r4, r0
/* 802ADF54 002AAE94  FC 00 00 50 */	fneg f0, f0
/* 802ADF58 002AAE98  48 00 00 1C */	b .L_802ADF74
.L_802ADF5C:
/* 802ADF5C 002AAE9C  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802ADF60 002AAEA0  FC 00 00 1E */	fctiwz f0, f0
/* 802ADF64 002AAEA4  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 802ADF68 002AAEA8  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 802ADF6C 002AAEAC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802ADF70 002AAEB0  7C 04 04 2E */	lfsx f0, r4, r0
.L_802ADF74:
/* 802ADF74 002AAEB4  EC 1C F8 3A */	fmadds f0, f28, f0, f31
/* 802ADF78 002AAEB8  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802ADF7C 002AAEBC  D3 DF 02 D4 */	stfs f30, 0x2d4(r31)
/* 802ADF80 002AAEC0  D0 3F 02 D8 */	stfs f1, 0x2d8(r31)
/* 802ADF84 002AAEC4  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 802ADF88 002AAEC8  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 802ADF8C 002AAECC  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 802ADF90 002AAED0  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 802ADF94 002AAED4  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 802ADF98 002AAED8  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 802ADF9C 002AAEDC  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 802ADFA0 002AAEE0  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 802ADFA4 002AAEE4  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 802ADFA8 002AAEE8  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 802ADFAC 002AAEEC  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 802ADFB0 002AAEF0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802ADFB4 002AAEF4  7C 08 03 A6 */	mtlr r0
/* 802ADFB8 002AAEF8  38 21 00 A0 */	addi r1, r1, 0xa0
/* 802ADFBC 002AAEFC  4E 80 00 20 */	blr 

.global getMovePitchOffset__Q34Game6Kurage3ObjFv
getMovePitchOffset__Q34Game6Kurage3ObjFv:
/* 802ADFC0 002AAF00  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802ADFC4 002AAF04  C0 62 DD 88 */	lfs f3, lbl_8051C0E8@sda21(r2)
/* 802ADFC8 002AAF08  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802ADFCC 002AAF0C  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 802ADFD0 002AAF10  C0 44 00 54 */	lfs f2, 0x54(r4)
/* 802ADFD4 002AAF14  C0 02 DD A0 */	lfs f0, lbl_8051C100@sda21(r2)
/* 802ADFD8 002AAF18  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 802ADFDC 002AAF1C  D0 23 02 C8 */	stfs f1, 0x2c8(r3)
/* 802ADFE0 002AAF20  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 802ADFE4 002AAF24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ADFE8 002AAF28  40 81 00 0C */	ble .L_802ADFF4
/* 802ADFEC 002AAF2C  EC 01 00 28 */	fsubs f0, f1, f0
/* 802ADFF0 002AAF30  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
.L_802ADFF4:
/* 802ADFF4 002AAF34  C0 43 02 C8 */	lfs f2, 0x2c8(r3)
/* 802ADFF8 002AAF38  C0 02 DD 60 */	lfs f0, lbl_8051C0C0@sda21(r2)
/* 802ADFFC 002AAF3C  C0 22 DD 7C */	lfs f1, lbl_8051C0DC@sda21(r2)
/* 802AE000 002AAF40  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802AE004 002AAF44  40 80 00 30 */	bge .L_802AE034
/* 802AE008 002AAF48  C0 02 DD 94 */	lfs f0, lbl_8051C0F4@sda21(r2)
/* 802AE00C 002AAF4C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802AE010 002AAF50  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802AE014 002AAF54  EC 02 00 32 */	fmuls f0, f2, f0
/* 802AE018 002AAF58  FC 00 00 1E */	fctiwz f0, f0
/* 802AE01C 002AAF5C  D8 01 00 08 */	stfd f0, 8(r1)
/* 802AE020 002AAF60  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802AE024 002AAF64  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802AE028 002AAF68  7C 03 04 2E */	lfsx f0, r3, r0
/* 802AE02C 002AAF6C  FC 00 00 50 */	fneg f0, f0
/* 802AE030 002AAF70  48 00 00 28 */	b .L_802AE058
.L_802AE034:
/* 802AE034 002AAF74  C0 02 DD 90 */	lfs f0, lbl_8051C0F0@sda21(r2)
/* 802AE038 002AAF78  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802AE03C 002AAF7C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802AE040 002AAF80  EC 02 00 32 */	fmuls f0, f2, f0
/* 802AE044 002AAF84  FC 00 00 1E */	fctiwz f0, f0
/* 802AE048 002AAF88  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 802AE04C 002AAF8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AE050 002AAF90  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802AE054 002AAF94  7C 03 04 2E */	lfsx f0, r3, r0
.L_802AE058:
/* 802AE058 002AAF98  EC 21 00 32 */	fmuls f1, f1, f0
/* 802AE05C 002AAF9C  38 21 00 20 */	addi r1, r1, 0x20
/* 802AE060 002AAFA0  4E 80 00 20 */	blr 

.global getAttackPitchOffset__Q34Game6Kurage3ObjFv
getAttackPitchOffset__Q34Game6Kurage3ObjFv:
/* 802AE064 002AAFA4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802AE068 002AAFA8  7C 08 02 A6 */	mflr r0
/* 802AE06C 002AAFAC  3C 80 80 49 */	lis r4, lbl_80489DC4@ha
/* 802AE070 002AAFB0  3C A0 80 49 */	lis r5, lbl_80489DA8@ha
/* 802AE074 002AAFB4  90 01 00 64 */	stw r0, 0x64(r1)
/* 802AE078 002AAFB8  39 44 9D C4 */	addi r10, r4, lbl_80489DC4@l
/* 802AE07C 002AAFBC  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 802AE080 002AAFC0  87 65 9D A8 */	lwzu r27, lbl_80489DA8@l(r5)
/* 802AE084 002AAFC4  81 2A 00 00 */	lwz r9, 0(r10)
/* 802AE088 002AAFC8  83 85 00 04 */	lwz r28, 4(r5)
/* 802AE08C 002AAFCC  83 A5 00 08 */	lwz r29, 8(r5)
/* 802AE090 002AAFD0  83 C5 00 0C */	lwz r30, 0xc(r5)
/* 802AE094 002AAFD4  83 E5 00 10 */	lwz r31, 0x10(r5)
/* 802AE098 002AAFD8  81 85 00 14 */	lwz r12, 0x14(r5)
/* 802AE09C 002AAFDC  81 65 00 18 */	lwz r11, 0x18(r5)
/* 802AE0A0 002AAFE0  81 0A 00 04 */	lwz r8, 4(r10)
/* 802AE0A4 002AAFE4  80 EA 00 08 */	lwz r7, 8(r10)
/* 802AE0A8 002AAFE8  80 CA 00 0C */	lwz r6, 0xc(r10)
/* 802AE0AC 002AAFEC  80 AA 00 10 */	lwz r5, 0x10(r10)
/* 802AE0B0 002AAFF0  80 8A 00 14 */	lwz r4, 0x14(r10)
/* 802AE0B4 002AAFF4  80 0A 00 18 */	lwz r0, 0x18(r10)
/* 802AE0B8 002AAFF8  93 61 00 24 */	stw r27, 0x24(r1)
/* 802AE0BC 002AAFFC  93 81 00 28 */	stw r28, 0x28(r1)
/* 802AE0C0 002AB000  93 A1 00 2C */	stw r29, 0x2c(r1)
/* 802AE0C4 002AB004  93 C1 00 30 */	stw r30, 0x30(r1)
/* 802AE0C8 002AB008  93 E1 00 34 */	stw r31, 0x34(r1)
/* 802AE0CC 002AB00C  91 81 00 38 */	stw r12, 0x38(r1)
/* 802AE0D0 002AB010  91 61 00 3C */	stw r11, 0x3c(r1)
/* 802AE0D4 002AB014  91 21 00 08 */	stw r9, 8(r1)
/* 802AE0D8 002AB018  91 01 00 0C */	stw r8, 0xc(r1)
/* 802AE0DC 002AB01C  90 E1 00 10 */	stw r7, 0x10(r1)
/* 802AE0E0 002AB020  90 C1 00 14 */	stw r6, 0x14(r1)
/* 802AE0E4 002AB024  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802AE0E8 002AB028  90 81 00 1C */	stw r4, 0x1c(r1)
/* 802AE0EC 002AB02C  90 01 00 20 */	stw r0, 0x20(r1)
/* 802AE0F0 002AB030  4B E5 71 7D */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802AE0F4 002AB034  38 A1 00 24 */	addi r5, r1, 0x24
/* 802AE0F8 002AB038  38 C1 00 08 */	addi r6, r1, 8
/* 802AE0FC 002AB03C  38 00 00 02 */	li r0, 2
/* 802AE100 002AB040  C0 02 DD 60 */	lfs f0, lbl_8051C0C0@sda21(r2)
/* 802AE104 002AB044  7C A4 2B 78 */	mr r4, r5
/* 802AE108 002AB048  7C C3 33 78 */	mr r3, r6
/* 802AE10C 002AB04C  C0 62 DD 78 */	lfs f3, lbl_8051C0D8@sda21(r2)
/* 802AE110 002AB050  38 E0 00 00 */	li r7, 0
/* 802AE114 002AB054  7C 09 03 A6 */	mtctr r0
.L_802AE118:
/* 802AE118 002AB058  C0 45 00 00 */	lfs f2, 0(r5)
/* 802AE11C 002AB05C  38 07 00 01 */	addi r0, r7, 1
/* 802AE120 002AB060  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802AE124 002AB064  4C 41 13 82 */	cror 2, 1, 2
/* 802AE128 002AB068  40 82 00 34 */	bne .L_802AE15C
/* 802AE12C 002AB06C  54 00 10 3A */	slwi r0, r0, 2
/* 802AE130 002AB070  7C 84 04 2E */	lfsx f4, r4, r0
/* 802AE134 002AB074  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802AE138 002AB078  40 80 00 24 */	bge .L_802AE15C
/* 802AE13C 002AB07C  EC A1 10 28 */	fsubs f5, f1, f2
/* 802AE140 002AB080  C0 06 00 00 */	lfs f0, 0(r6)
/* 802AE144 002AB084  EC 44 10 28 */	fsubs f2, f4, f2
/* 802AE148 002AB088  7C 83 04 2E */	lfsx f4, r3, r0
/* 802AE14C 002AB08C  EC A5 10 24 */	fdivs f5, f5, f2
/* 802AE150 002AB090  EC 43 28 28 */	fsubs f2, f3, f5
/* 802AE154 002AB094  EC 02 00 32 */	fmuls f0, f2, f0
/* 802AE158 002AB098  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802AE15C:
/* 802AE15C 002AB09C  C0 45 00 04 */	lfs f2, 4(r5)
/* 802AE160 002AB0A0  38 07 00 02 */	addi r0, r7, 2
/* 802AE164 002AB0A4  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802AE168 002AB0A8  4C 41 13 82 */	cror 2, 1, 2
/* 802AE16C 002AB0AC  40 82 00 34 */	bne .L_802AE1A0
/* 802AE170 002AB0B0  54 00 10 3A */	slwi r0, r0, 2
/* 802AE174 002AB0B4  7C 84 04 2E */	lfsx f4, r4, r0
/* 802AE178 002AB0B8  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802AE17C 002AB0BC  40 80 00 24 */	bge .L_802AE1A0
/* 802AE180 002AB0C0  EC A1 10 28 */	fsubs f5, f1, f2
/* 802AE184 002AB0C4  C0 06 00 04 */	lfs f0, 4(r6)
/* 802AE188 002AB0C8  EC 44 10 28 */	fsubs f2, f4, f2
/* 802AE18C 002AB0CC  7C 83 04 2E */	lfsx f4, r3, r0
/* 802AE190 002AB0D0  EC A5 10 24 */	fdivs f5, f5, f2
/* 802AE194 002AB0D4  EC 43 28 28 */	fsubs f2, f3, f5
/* 802AE198 002AB0D8  EC 02 00 32 */	fmuls f0, f2, f0
/* 802AE19C 002AB0DC  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802AE1A0:
/* 802AE1A0 002AB0E0  C0 45 00 08 */	lfs f2, 8(r5)
/* 802AE1A4 002AB0E4  38 07 00 03 */	addi r0, r7, 3
/* 802AE1A8 002AB0E8  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802AE1AC 002AB0EC  4C 41 13 82 */	cror 2, 1, 2
/* 802AE1B0 002AB0F0  40 82 00 34 */	bne .L_802AE1E4
/* 802AE1B4 002AB0F4  54 00 10 3A */	slwi r0, r0, 2
/* 802AE1B8 002AB0F8  7C 84 04 2E */	lfsx f4, r4, r0
/* 802AE1BC 002AB0FC  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802AE1C0 002AB100  40 80 00 24 */	bge .L_802AE1E4
/* 802AE1C4 002AB104  EC A1 10 28 */	fsubs f5, f1, f2
/* 802AE1C8 002AB108  C0 06 00 08 */	lfs f0, 8(r6)
/* 802AE1CC 002AB10C  EC 44 10 28 */	fsubs f2, f4, f2
/* 802AE1D0 002AB110  7C 83 04 2E */	lfsx f4, r3, r0
/* 802AE1D4 002AB114  EC A5 10 24 */	fdivs f5, f5, f2
/* 802AE1D8 002AB118  EC 43 28 28 */	fsubs f2, f3, f5
/* 802AE1DC 002AB11C  EC 02 00 32 */	fmuls f0, f2, f0
/* 802AE1E0 002AB120  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802AE1E4:
/* 802AE1E4 002AB124  38 A5 00 0C */	addi r5, r5, 0xc
/* 802AE1E8 002AB128  38 C6 00 0C */	addi r6, r6, 0xc
/* 802AE1EC 002AB12C  38 E7 00 03 */	addi r7, r7, 3
/* 802AE1F0 002AB130  42 00 FF 28 */	bdnz .L_802AE118
/* 802AE1F4 002AB134  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 802AE1F8 002AB138  FC 20 00 90 */	fmr f1, f0
/* 802AE1FC 002AB13C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802AE200 002AB140  7C 08 03 A6 */	mtlr r0
/* 802AE204 002AB144  38 21 00 60 */	addi r1, r1, 0x60
/* 802AE208 002AB148  4E 80 00 20 */	blr 

.global getFlickPitchOffset__Q34Game6Kurage3ObjFv
getFlickPitchOffset__Q34Game6Kurage3ObjFv:
/* 802AE20C 002AB14C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802AE210 002AB150  7C 08 02 A6 */	mflr r0
/* 802AE214 002AB154  3C 80 80 49 */	lis r4, lbl_80489DFC@ha
/* 802AE218 002AB158  3C A0 80 49 */	lis r5, lbl_80489DE0@ha
/* 802AE21C 002AB15C  90 01 00 64 */	stw r0, 0x64(r1)
/* 802AE220 002AB160  39 44 9D FC */	addi r10, r4, lbl_80489DFC@l
/* 802AE224 002AB164  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 802AE228 002AB168  87 65 9D E0 */	lwzu r27, lbl_80489DE0@l(r5)
/* 802AE22C 002AB16C  81 2A 00 00 */	lwz r9, 0(r10)
/* 802AE230 002AB170  83 85 00 04 */	lwz r28, 4(r5)
/* 802AE234 002AB174  83 A5 00 08 */	lwz r29, 8(r5)
/* 802AE238 002AB178  83 C5 00 0C */	lwz r30, 0xc(r5)
/* 802AE23C 002AB17C  83 E5 00 10 */	lwz r31, 0x10(r5)
/* 802AE240 002AB180  81 85 00 14 */	lwz r12, 0x14(r5)
/* 802AE244 002AB184  81 65 00 18 */	lwz r11, 0x18(r5)
/* 802AE248 002AB188  81 0A 00 04 */	lwz r8, 4(r10)
/* 802AE24C 002AB18C  80 EA 00 08 */	lwz r7, 8(r10)
/* 802AE250 002AB190  80 CA 00 0C */	lwz r6, 0xc(r10)
/* 802AE254 002AB194  80 AA 00 10 */	lwz r5, 0x10(r10)
/* 802AE258 002AB198  80 8A 00 14 */	lwz r4, 0x14(r10)
/* 802AE25C 002AB19C  80 0A 00 18 */	lwz r0, 0x18(r10)
/* 802AE260 002AB1A0  93 61 00 24 */	stw r27, 0x24(r1)
/* 802AE264 002AB1A4  93 81 00 28 */	stw r28, 0x28(r1)
/* 802AE268 002AB1A8  93 A1 00 2C */	stw r29, 0x2c(r1)
/* 802AE26C 002AB1AC  93 C1 00 30 */	stw r30, 0x30(r1)
/* 802AE270 002AB1B0  93 E1 00 34 */	stw r31, 0x34(r1)
/* 802AE274 002AB1B4  91 81 00 38 */	stw r12, 0x38(r1)
/* 802AE278 002AB1B8  91 61 00 3C */	stw r11, 0x3c(r1)
/* 802AE27C 002AB1BC  91 21 00 08 */	stw r9, 8(r1)
/* 802AE280 002AB1C0  91 01 00 0C */	stw r8, 0xc(r1)
/* 802AE284 002AB1C4  90 E1 00 10 */	stw r7, 0x10(r1)
/* 802AE288 002AB1C8  90 C1 00 14 */	stw r6, 0x14(r1)
/* 802AE28C 002AB1CC  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802AE290 002AB1D0  90 81 00 1C */	stw r4, 0x1c(r1)
/* 802AE294 002AB1D4  90 01 00 20 */	stw r0, 0x20(r1)
/* 802AE298 002AB1D8  4B E5 6F D5 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802AE29C 002AB1DC  38 A1 00 24 */	addi r5, r1, 0x24
/* 802AE2A0 002AB1E0  38 C1 00 08 */	addi r6, r1, 8
/* 802AE2A4 002AB1E4  38 00 00 02 */	li r0, 2
/* 802AE2A8 002AB1E8  C0 02 DD 60 */	lfs f0, lbl_8051C0C0@sda21(r2)
/* 802AE2AC 002AB1EC  7C A4 2B 78 */	mr r4, r5
/* 802AE2B0 002AB1F0  7C C3 33 78 */	mr r3, r6
/* 802AE2B4 002AB1F4  C0 62 DD 78 */	lfs f3, lbl_8051C0D8@sda21(r2)
/* 802AE2B8 002AB1F8  38 E0 00 00 */	li r7, 0
/* 802AE2BC 002AB1FC  7C 09 03 A6 */	mtctr r0
.L_802AE2C0:
/* 802AE2C0 002AB200  C0 45 00 00 */	lfs f2, 0(r5)
/* 802AE2C4 002AB204  38 07 00 01 */	addi r0, r7, 1
/* 802AE2C8 002AB208  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802AE2CC 002AB20C  4C 41 13 82 */	cror 2, 1, 2
/* 802AE2D0 002AB210  40 82 00 34 */	bne .L_802AE304
/* 802AE2D4 002AB214  54 00 10 3A */	slwi r0, r0, 2
/* 802AE2D8 002AB218  7C 84 04 2E */	lfsx f4, r4, r0
/* 802AE2DC 002AB21C  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802AE2E0 002AB220  40 80 00 24 */	bge .L_802AE304
/* 802AE2E4 002AB224  EC A1 10 28 */	fsubs f5, f1, f2
/* 802AE2E8 002AB228  C0 06 00 00 */	lfs f0, 0(r6)
/* 802AE2EC 002AB22C  EC 44 10 28 */	fsubs f2, f4, f2
/* 802AE2F0 002AB230  7C 83 04 2E */	lfsx f4, r3, r0
/* 802AE2F4 002AB234  EC A5 10 24 */	fdivs f5, f5, f2
/* 802AE2F8 002AB238  EC 43 28 28 */	fsubs f2, f3, f5
/* 802AE2FC 002AB23C  EC 02 00 32 */	fmuls f0, f2, f0
/* 802AE300 002AB240  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802AE304:
/* 802AE304 002AB244  C0 45 00 04 */	lfs f2, 4(r5)
/* 802AE308 002AB248  38 07 00 02 */	addi r0, r7, 2
/* 802AE30C 002AB24C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802AE310 002AB250  4C 41 13 82 */	cror 2, 1, 2
/* 802AE314 002AB254  40 82 00 34 */	bne .L_802AE348
/* 802AE318 002AB258  54 00 10 3A */	slwi r0, r0, 2
/* 802AE31C 002AB25C  7C 84 04 2E */	lfsx f4, r4, r0
/* 802AE320 002AB260  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802AE324 002AB264  40 80 00 24 */	bge .L_802AE348
/* 802AE328 002AB268  EC A1 10 28 */	fsubs f5, f1, f2
/* 802AE32C 002AB26C  C0 06 00 04 */	lfs f0, 4(r6)
/* 802AE330 002AB270  EC 44 10 28 */	fsubs f2, f4, f2
/* 802AE334 002AB274  7C 83 04 2E */	lfsx f4, r3, r0
/* 802AE338 002AB278  EC A5 10 24 */	fdivs f5, f5, f2
/* 802AE33C 002AB27C  EC 43 28 28 */	fsubs f2, f3, f5
/* 802AE340 002AB280  EC 02 00 32 */	fmuls f0, f2, f0
/* 802AE344 002AB284  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802AE348:
/* 802AE348 002AB288  C0 45 00 08 */	lfs f2, 8(r5)
/* 802AE34C 002AB28C  38 07 00 03 */	addi r0, r7, 3
/* 802AE350 002AB290  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802AE354 002AB294  4C 41 13 82 */	cror 2, 1, 2
/* 802AE358 002AB298  40 82 00 34 */	bne .L_802AE38C
/* 802AE35C 002AB29C  54 00 10 3A */	slwi r0, r0, 2
/* 802AE360 002AB2A0  7C 84 04 2E */	lfsx f4, r4, r0
/* 802AE364 002AB2A4  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802AE368 002AB2A8  40 80 00 24 */	bge .L_802AE38C
/* 802AE36C 002AB2AC  EC A1 10 28 */	fsubs f5, f1, f2
/* 802AE370 002AB2B0  C0 06 00 08 */	lfs f0, 8(r6)
/* 802AE374 002AB2B4  EC 44 10 28 */	fsubs f2, f4, f2
/* 802AE378 002AB2B8  7C 83 04 2E */	lfsx f4, r3, r0
/* 802AE37C 002AB2BC  EC A5 10 24 */	fdivs f5, f5, f2
/* 802AE380 002AB2C0  EC 43 28 28 */	fsubs f2, f3, f5
/* 802AE384 002AB2C4  EC 02 00 32 */	fmuls f0, f2, f0
/* 802AE388 002AB2C8  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802AE38C:
/* 802AE38C 002AB2CC  38 A5 00 0C */	addi r5, r5, 0xc
/* 802AE390 002AB2D0  38 C6 00 0C */	addi r6, r6, 0xc
/* 802AE394 002AB2D4  38 E7 00 03 */	addi r7, r7, 3
/* 802AE398 002AB2D8  42 00 FF 28 */	bdnz .L_802AE2C0
/* 802AE39C 002AB2DC  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 802AE3A0 002AB2E0  FC 20 00 90 */	fmr f1, f0
/* 802AE3A4 002AB2E4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802AE3A8 002AB2E8  7C 08 03 A6 */	mtlr r0
/* 802AE3AC 002AB2EC  38 21 00 60 */	addi r1, r1, 0x60
/* 802AE3B0 002AB2F0  4E 80 00 20 */	blr 

.global getTakeOffPitchOffset__Q34Game6Kurage3ObjFv
getTakeOffPitchOffset__Q34Game6Kurage3ObjFv:
/* 802AE3B4 002AB2F4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802AE3B8 002AB2F8  7C 08 02 A6 */	mflr r0
/* 802AE3BC 002AB2FC  3C 80 80 49 */	lis r4, lbl_80489E2C@ha
/* 802AE3C0 002AB300  3C A0 80 49 */	lis r5, lbl_80489E18@ha
/* 802AE3C4 002AB304  90 01 00 44 */	stw r0, 0x44(r1)
/* 802AE3C8 002AB308  39 04 9E 2C */	addi r8, r4, lbl_80489E2C@l
/* 802AE3CC 002AB30C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802AE3D0 002AB310  87 E5 9E 18 */	lwzu r31, lbl_80489E18@l(r5)
/* 802AE3D4 002AB314  80 E8 00 00 */	lwz r7, 0(r8)
/* 802AE3D8 002AB318  81 85 00 04 */	lwz r12, 4(r5)
/* 802AE3DC 002AB31C  81 65 00 08 */	lwz r11, 8(r5)
/* 802AE3E0 002AB320  81 45 00 0C */	lwz r10, 0xc(r5)
/* 802AE3E4 002AB324  81 25 00 10 */	lwz r9, 0x10(r5)
/* 802AE3E8 002AB328  80 C8 00 04 */	lwz r6, 4(r8)
/* 802AE3EC 002AB32C  80 A8 00 08 */	lwz r5, 8(r8)
/* 802AE3F0 002AB330  80 88 00 0C */	lwz r4, 0xc(r8)
/* 802AE3F4 002AB334  80 08 00 10 */	lwz r0, 0x10(r8)
/* 802AE3F8 002AB338  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802AE3FC 002AB33C  91 81 00 20 */	stw r12, 0x20(r1)
/* 802AE400 002AB340  91 61 00 24 */	stw r11, 0x24(r1)
/* 802AE404 002AB344  91 41 00 28 */	stw r10, 0x28(r1)
/* 802AE408 002AB348  91 21 00 2C */	stw r9, 0x2c(r1)
/* 802AE40C 002AB34C  90 E1 00 08 */	stw r7, 8(r1)
/* 802AE410 002AB350  90 C1 00 0C */	stw r6, 0xc(r1)
/* 802AE414 002AB354  90 A1 00 10 */	stw r5, 0x10(r1)
/* 802AE418 002AB358  90 81 00 14 */	stw r4, 0x14(r1)
/* 802AE41C 002AB35C  90 01 00 18 */	stw r0, 0x18(r1)
/* 802AE420 002AB360  4B E5 6E 4D */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802AE424 002AB364  38 A1 00 1C */	addi r5, r1, 0x1c
/* 802AE428 002AB368  38 C1 00 08 */	addi r6, r1, 8
/* 802AE42C 002AB36C  38 00 00 02 */	li r0, 2
/* 802AE430 002AB370  C0 02 DD 60 */	lfs f0, lbl_8051C0C0@sda21(r2)
/* 802AE434 002AB374  7C A4 2B 78 */	mr r4, r5
/* 802AE438 002AB378  7C C3 33 78 */	mr r3, r6
/* 802AE43C 002AB37C  C0 62 DD 78 */	lfs f3, lbl_8051C0D8@sda21(r2)
/* 802AE440 002AB380  38 E0 00 00 */	li r7, 0
/* 802AE444 002AB384  7C 09 03 A6 */	mtctr r0
.L_802AE448:
/* 802AE448 002AB388  C0 45 00 00 */	lfs f2, 0(r5)
/* 802AE44C 002AB38C  38 07 00 01 */	addi r0, r7, 1
/* 802AE450 002AB390  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802AE454 002AB394  4C 41 13 82 */	cror 2, 1, 2
/* 802AE458 002AB398  40 82 00 34 */	bne .L_802AE48C
/* 802AE45C 002AB39C  54 00 10 3A */	slwi r0, r0, 2
/* 802AE460 002AB3A0  7C 84 04 2E */	lfsx f4, r4, r0
/* 802AE464 002AB3A4  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802AE468 002AB3A8  40 80 00 24 */	bge .L_802AE48C
/* 802AE46C 002AB3AC  EC A1 10 28 */	fsubs f5, f1, f2
/* 802AE470 002AB3B0  C0 06 00 00 */	lfs f0, 0(r6)
/* 802AE474 002AB3B4  EC 44 10 28 */	fsubs f2, f4, f2
/* 802AE478 002AB3B8  7C 83 04 2E */	lfsx f4, r3, r0
/* 802AE47C 002AB3BC  EC A5 10 24 */	fdivs f5, f5, f2
/* 802AE480 002AB3C0  EC 43 28 28 */	fsubs f2, f3, f5
/* 802AE484 002AB3C4  EC 02 00 32 */	fmuls f0, f2, f0
/* 802AE488 002AB3C8  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802AE48C:
/* 802AE48C 002AB3CC  C0 45 00 04 */	lfs f2, 4(r5)
/* 802AE490 002AB3D0  38 07 00 02 */	addi r0, r7, 2
/* 802AE494 002AB3D4  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802AE498 002AB3D8  4C 41 13 82 */	cror 2, 1, 2
/* 802AE49C 002AB3DC  40 82 00 34 */	bne .L_802AE4D0
/* 802AE4A0 002AB3E0  54 00 10 3A */	slwi r0, r0, 2
/* 802AE4A4 002AB3E4  7C 84 04 2E */	lfsx f4, r4, r0
/* 802AE4A8 002AB3E8  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802AE4AC 002AB3EC  40 80 00 24 */	bge .L_802AE4D0
/* 802AE4B0 002AB3F0  EC A1 10 28 */	fsubs f5, f1, f2
/* 802AE4B4 002AB3F4  C0 06 00 04 */	lfs f0, 4(r6)
/* 802AE4B8 002AB3F8  EC 44 10 28 */	fsubs f2, f4, f2
/* 802AE4BC 002AB3FC  7C 83 04 2E */	lfsx f4, r3, r0
/* 802AE4C0 002AB400  EC A5 10 24 */	fdivs f5, f5, f2
/* 802AE4C4 002AB404  EC 43 28 28 */	fsubs f2, f3, f5
/* 802AE4C8 002AB408  EC 02 00 32 */	fmuls f0, f2, f0
/* 802AE4CC 002AB40C  EC 05 01 3A */	fmadds f0, f5, f4, f0
.L_802AE4D0:
/* 802AE4D0 002AB410  38 A5 00 08 */	addi r5, r5, 8
/* 802AE4D4 002AB414  38 C6 00 08 */	addi r6, r6, 8
/* 802AE4D8 002AB418  38 E7 00 02 */	addi r7, r7, 2
/* 802AE4DC 002AB41C  42 00 FF 6C */	bdnz .L_802AE448
/* 802AE4E0 002AB420  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802AE4E4 002AB424  FC 20 00 90 */	fmr f1, f0
/* 802AE4E8 002AB428  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802AE4EC 002AB42C  7C 08 03 A6 */	mtlr r0
/* 802AE4F0 002AB430  38 21 00 40 */	addi r1, r1, 0x40
/* 802AE4F4 002AB434  4E 80 00 20 */	blr 

.global getFallPitchOffset__Q34Game6Kurage3ObjFf
getFallPitchOffset__Q34Game6Kurage3ObjFf:
/* 802AE4F8 002AB438  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802AE4FC 002AB43C  3C 80 80 49 */	lis r4, lbl_80489E40@ha
/* 802AE500 002AB440  3C 60 80 49 */	lis r3, lbl_80489E60@ha
/* 802AE504 002AB444  C0 02 DD A4 */	lfs f0, lbl_8051C104@sda21(r2)
/* 802AE508 002AB448  BE A1 00 54 */	stmw r21, 0x54(r1)
/* 802AE50C 002AB44C  38 C4 9E 40 */	addi r6, r4, lbl_80489E40@l
/* 802AE510 002AB450  38 A3 9E 60 */	addi r5, r3, lbl_80489E60@l
/* 802AE514 002AB454  3A E1 00 28 */	addi r23, r1, 0x28
/* 802AE518 002AB458  3A C1 00 08 */	addi r22, r1, 8
/* 802AE51C 002AB45C  EC C0 00 72 */	fmuls f6, f0, f1
/* 802AE520 002AB460  38 00 00 02 */	li r0, 2
/* 802AE524 002AB464  7E E4 BB 78 */	mr r4, r23
/* 802AE528 002AB468  7E C3 B3 78 */	mr r3, r22
/* 802AE52C 002AB46C  3A A0 00 00 */	li r21, 0
/* 802AE530 002AB470  C0 22 DD 60 */	lfs f1, lbl_8051C0C0@sda21(r2)
/* 802AE534 002AB474  C0 42 DD 78 */	lfs f2, lbl_8051C0D8@sda21(r2)
/* 802AE538 002AB478  83 06 00 00 */	lwz r24, 0(r6)
/* 802AE53C 002AB47C  83 26 00 04 */	lwz r25, 4(r6)
/* 802AE540 002AB480  83 46 00 08 */	lwz r26, 8(r6)
/* 802AE544 002AB484  83 66 00 0C */	lwz r27, 0xc(r6)
/* 802AE548 002AB488  83 86 00 10 */	lwz r28, 0x10(r6)
/* 802AE54C 002AB48C  83 A6 00 14 */	lwz r29, 0x14(r6)
/* 802AE550 002AB490  83 C6 00 18 */	lwz r30, 0x18(r6)
/* 802AE554 002AB494  83 E6 00 1C */	lwz r31, 0x1c(r6)
/* 802AE558 002AB498  81 85 00 00 */	lwz r12, 0(r5)
/* 802AE55C 002AB49C  81 65 00 04 */	lwz r11, 4(r5)
/* 802AE560 002AB4A0  81 45 00 08 */	lwz r10, 8(r5)
/* 802AE564 002AB4A4  81 25 00 0C */	lwz r9, 0xc(r5)
/* 802AE568 002AB4A8  81 05 00 10 */	lwz r8, 0x10(r5)
/* 802AE56C 002AB4AC  80 E5 00 14 */	lwz r7, 0x14(r5)
/* 802AE570 002AB4B0  80 C5 00 18 */	lwz r6, 0x18(r5)
/* 802AE574 002AB4B4  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 802AE578 002AB4B8  93 01 00 28 */	stw r24, 0x28(r1)
/* 802AE57C 002AB4BC  93 21 00 2C */	stw r25, 0x2c(r1)
/* 802AE580 002AB4C0  93 41 00 30 */	stw r26, 0x30(r1)
/* 802AE584 002AB4C4  93 61 00 34 */	stw r27, 0x34(r1)
/* 802AE588 002AB4C8  93 81 00 38 */	stw r28, 0x38(r1)
/* 802AE58C 002AB4CC  93 A1 00 3C */	stw r29, 0x3c(r1)
/* 802AE590 002AB4D0  93 C1 00 40 */	stw r30, 0x40(r1)
/* 802AE594 002AB4D4  93 E1 00 44 */	stw r31, 0x44(r1)
/* 802AE598 002AB4D8  91 81 00 08 */	stw r12, 8(r1)
/* 802AE59C 002AB4DC  91 61 00 0C */	stw r11, 0xc(r1)
/* 802AE5A0 002AB4E0  91 41 00 10 */	stw r10, 0x10(r1)
/* 802AE5A4 002AB4E4  91 21 00 14 */	stw r9, 0x14(r1)
/* 802AE5A8 002AB4E8  91 01 00 18 */	stw r8, 0x18(r1)
/* 802AE5AC 002AB4EC  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 802AE5B0 002AB4F0  90 C1 00 20 */	stw r6, 0x20(r1)
/* 802AE5B4 002AB4F4  90 A1 00 24 */	stw r5, 0x24(r1)
/* 802AE5B8 002AB4F8  7C 09 03 A6 */	mtctr r0
.L_802AE5BC:
/* 802AE5BC 002AB4FC  C0 77 00 00 */	lfs f3, 0(r23)
/* 802AE5C0 002AB500  38 15 00 01 */	addi r0, r21, 1
/* 802AE5C4 002AB504  FC 06 18 40 */	fcmpo cr0, f6, f3
/* 802AE5C8 002AB508  4C 41 13 82 */	cror 2, 1, 2
/* 802AE5CC 002AB50C  40 82 00 34 */	bne .L_802AE600
/* 802AE5D0 002AB510  54 00 10 3A */	slwi r0, r0, 2
/* 802AE5D4 002AB514  7C A4 04 2E */	lfsx f5, r4, r0
/* 802AE5D8 002AB518  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 802AE5DC 002AB51C  40 80 00 24 */	bge .L_802AE600
/* 802AE5E0 002AB520  EC 86 18 28 */	fsubs f4, f6, f3
/* 802AE5E4 002AB524  C0 16 00 00 */	lfs f0, 0(r22)
/* 802AE5E8 002AB528  EC 25 18 28 */	fsubs f1, f5, f3
/* 802AE5EC 002AB52C  7C 63 04 2E */	lfsx f3, r3, r0
/* 802AE5F0 002AB530  EC 84 08 24 */	fdivs f4, f4, f1
/* 802AE5F4 002AB534  EC 22 20 28 */	fsubs f1, f2, f4
/* 802AE5F8 002AB538  EC 01 00 32 */	fmuls f0, f1, f0
/* 802AE5FC 002AB53C  EC 24 00 FA */	fmadds f1, f4, f3, f0
.L_802AE600:
/* 802AE600 002AB540  C0 77 00 04 */	lfs f3, 4(r23)
/* 802AE604 002AB544  38 15 00 02 */	addi r0, r21, 2
/* 802AE608 002AB548  FC 06 18 40 */	fcmpo cr0, f6, f3
/* 802AE60C 002AB54C  4C 41 13 82 */	cror 2, 1, 2
/* 802AE610 002AB550  40 82 00 34 */	bne .L_802AE644
/* 802AE614 002AB554  54 00 10 3A */	slwi r0, r0, 2
/* 802AE618 002AB558  7C A4 04 2E */	lfsx f5, r4, r0
/* 802AE61C 002AB55C  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 802AE620 002AB560  40 80 00 24 */	bge .L_802AE644
/* 802AE624 002AB564  EC 86 18 28 */	fsubs f4, f6, f3
/* 802AE628 002AB568  C0 16 00 04 */	lfs f0, 4(r22)
/* 802AE62C 002AB56C  EC 25 18 28 */	fsubs f1, f5, f3
/* 802AE630 002AB570  7C 63 04 2E */	lfsx f3, r3, r0
/* 802AE634 002AB574  EC 84 08 24 */	fdivs f4, f4, f1
/* 802AE638 002AB578  EC 22 20 28 */	fsubs f1, f2, f4
/* 802AE63C 002AB57C  EC 01 00 32 */	fmuls f0, f1, f0
/* 802AE640 002AB580  EC 24 00 FA */	fmadds f1, f4, f3, f0
.L_802AE644:
/* 802AE644 002AB584  3A F7 00 08 */	addi r23, r23, 8
/* 802AE648 002AB588  3A D6 00 08 */	addi r22, r22, 8
/* 802AE64C 002AB58C  3A B5 00 02 */	addi r21, r21, 2
/* 802AE650 002AB590  42 00 FF 6C */	bdnz .L_802AE5BC
/* 802AE654 002AB594  BA A1 00 54 */	lmw r21, 0x54(r1)
/* 802AE658 002AB598  38 21 00 80 */	addi r1, r1, 0x80
/* 802AE65C 002AB59C  4E 80 00 20 */	blr 

.global updateFallTimer__Q34Game6Kurage3ObjFv
updateFallTimer__Q34Game6Kurage3ObjFv:
/* 802AE660 002AB5A0  80 03 01 F4 */	lwz r0, 0x1f4(r3)
/* 802AE664 002AB5A4  2C 00 00 00 */	cmpwi r0, 0
/* 802AE668 002AB5A8  41 82 00 1C */	beq .L_802AE684
/* 802AE66C 002AB5AC  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802AE670 002AB5B0  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 802AE674 002AB5B4  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 802AE678 002AB5B8  EC 01 00 2A */	fadds f0, f1, f0
/* 802AE67C 002AB5BC  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 802AE680 002AB5C0  4E 80 00 20 */	blr 
.L_802AE684:
/* 802AE684 002AB5C4  C0 02 DD 60 */	lfs f0, lbl_8051C0C0@sda21(r2)
/* 802AE688 002AB5C8  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 802AE68C 002AB5CC  4E 80 00 20 */	blr 

.global getFlyingNextState__Q34Game6Kurage3ObjFv
getFlyingNextState__Q34Game6Kurage3ObjFv:
/* 802AE690 002AB5D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AE694 002AB5D4  7C 08 02 A6 */	mflr r0
/* 802AE698 002AB5D8  C0 02 DD 60 */	lfs f0, lbl_8051C0C0@sda21(r2)
/* 802AE69C 002AB5DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AE6A0 002AB5E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AE6A4 002AB5E4  7C 7F 1B 78 */	mr r31, r3
/* 802AE6A8 002AB5E8  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 802AE6AC 002AB5EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802AE6B0 002AB5F0  4C 40 13 82 */	cror 2, 0, 2
/* 802AE6B4 002AB5F4  40 82 00 0C */	bne .L_802AE6C0
/* 802AE6B8 002AB5F8  38 60 00 00 */	li r3, 0
/* 802AE6BC 002AB5FC  48 00 00 64 */	b .L_802AE720
.L_802AE6C0:
/* 802AE6C0 002AB600  38 80 00 03 */	li r4, 3
/* 802AE6C4 002AB604  4B E6 6A F1 */	bl getStickPikminColorNum__Q24Game9EnemyFuncFPQ24Game8Creaturei
/* 802AE6C8 002AB608  2C 03 00 00 */	cmpwi r3, 0
/* 802AE6CC 002AB60C  40 81 00 0C */	ble .L_802AE6D8
/* 802AE6D0 002AB610  38 60 00 05 */	li r3, 5
/* 802AE6D4 002AB614  48 00 00 4C */	b .L_802AE720
.L_802AE6D8:
/* 802AE6D8 002AB618  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802AE6DC 002AB61C  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802AE6E0 002AB620  C0 04 08 E4 */	lfs f0, 0x8e4(r4)
/* 802AE6E4 002AB624  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802AE6E8 002AB628  41 81 00 14 */	bgt .L_802AE6FC
/* 802AE6EC 002AB62C  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 802AE6F0 002AB630  80 04 09 0C */	lwz r0, 0x90c(r4)
/* 802AE6F4 002AB634  7C 03 00 00 */	cmpw r3, r0
/* 802AE6F8 002AB638  41 80 00 24 */	blt .L_802AE71C
.L_802AE6FC:
/* 802AE6FC 002AB63C  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 802AE700 002AB640  80 04 09 0C */	lwz r0, 0x90c(r4)
/* 802AE704 002AB644  7C 03 00 00 */	cmpw r3, r0
/* 802AE708 002AB648  40 80 00 0C */	bge .L_802AE714
/* 802AE70C 002AB64C  38 60 00 09 */	li r3, 9
/* 802AE710 002AB650  48 00 00 10 */	b .L_802AE720
.L_802AE714:
/* 802AE714 002AB654  38 60 00 05 */	li r3, 5
/* 802AE718 002AB658  48 00 00 08 */	b .L_802AE720
.L_802AE71C:
/* 802AE71C 002AB65C  38 60 FF FF */	li r3, -1
.L_802AE720:
/* 802AE720 002AB660  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AE724 002AB664  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AE728 002AB668  7C 08 03 A6 */	mtlr r0
/* 802AE72C 002AB66C  38 21 00 10 */	addi r1, r1, 0x10
/* 802AE730 002AB670  4E 80 00 20 */	blr 

.global getSearchedTarget__Q34Game6Kurage3ObjFf
getSearchedTarget__Q34Game6Kurage3ObjFf:
/* 802AE734 002AB674  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 802AE738 002AB678  7C 08 02 A6 */	mflr r0
/* 802AE73C 002AB67C  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 802AE740 002AB680  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 802AE744 002AB684  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 802AE748 002AB688  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 802AE74C 002AB68C  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 802AE750 002AB690  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 802AE754 002AB694  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 802AE758 002AB698  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 802AE75C 002AB69C  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 802AE760 002AB6A0  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 802AE764 002AB6A4  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 802AE768 002AB6A8  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 802AE76C 002AB6AC  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 802AE770 002AB6B0  DB 21 00 70 */	stfd f25, 0x70(r1)
/* 802AE774 002AB6B4  F3 21 00 78 */	psq_st f25, 120(r1), 0, qr0
/* 802AE778 002AB6B8  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 802AE77C 002AB6BC  93 C1 00 68 */	stw r30, 0x68(r1)
/* 802AE780 002AB6C0  93 A1 00 64 */	stw r29, 0x64(r1)
/* 802AE784 002AB6C4  7C 7E 1B 78 */	mr r30, r3
/* 802AE788 002AB6C8  3B E0 00 00 */	li r31, 0
/* 802AE78C 002AB6CC  C0 43 01 94 */	lfs f2, 0x194(r3)
/* 802AE790 002AB6D0  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 802AE794 002AB6D4  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802AE798 002AB6D8  EC 82 00 28 */	fsubs f4, f2, f0
/* 802AE79C 002AB6DC  C0 63 01 8C */	lfs f3, 0x18c(r3)
/* 802AE7A0 002AB6E0  C0 43 01 98 */	lfs f2, 0x198(r3)
/* 802AE7A4 002AB6E4  C0 04 03 5C */	lfs f0, 0x35c(r4)
/* 802AE7A8 002AB6E8  EC 63 10 28 */	fsubs f3, f3, f2
/* 802AE7AC 002AB6EC  EC 44 01 32 */	fmuls f2, f4, f4
/* 802AE7B0 002AB6F0  EC 00 00 32 */	fmuls f0, f0, f0
/* 802AE7B4 002AB6F4  EC 43 10 FA */	fmadds f2, f3, f3, f2
/* 802AE7B8 002AB6F8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802AE7BC 002AB6FC  40 80 03 68 */	bge .L_802AEB24
/* 802AE7C0 002AB700  C3 DE 01 90 */	lfs f30, 0x190(r30)
/* 802AE7C4 002AB704  3C 60 80 4B */	lis r3, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802AE7C8 002AB708  C0 42 DD A8 */	lfs f2, lbl_8051C108@sda21(r2)
/* 802AE7CC 002AB70C  38 00 00 00 */	li r0, 0
/* 802AE7D0 002AB710  C0 04 04 24 */	lfs f0, 0x424(r4)
/* 802AE7D4 002AB714  EC BE 08 28 */	fsubs f5, f30, f1
/* 802AE7D8 002AB718  C0 82 DD 7C */	lfs f4, lbl_8051C0DC@sda21(r2)
/* 802AE7DC 002AB71C  28 00 00 00 */	cmplwi r0, 0
/* 802AE7E0 002AB720  C0 24 03 D4 */	lfs f1, 0x3d4(r4)
/* 802AE7E4 002AB724  EC 42 00 32 */	fmuls f2, f2, f0
/* 802AE7E8 002AB728  C0 04 05 64 */	lfs f0, 0x564(r4)
/* 802AE7EC 002AB72C  C0 62 DD 88 */	lfs f3, lbl_8051C0E8@sda21(r2)
/* 802AE7F0 002AB730  38 83 BC 9C */	addi r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802AE7F4 002AB734  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802AE7F8 002AB738  EF A5 20 28 */	fsubs f29, f5, f4
/* 802AE7FC 002AB73C  EF 83 00 B2 */	fmuls f28, f3, f2
/* 802AE800 002AB740  90 81 00 44 */	stw r4, 0x44(r1)
/* 802AE804 002AB744  EF 61 00 72 */	fmuls f27, f1, f1
/* 802AE808 002AB748  EF 40 00 32 */	fmuls f26, f0, f0
/* 802AE80C 002AB74C  90 01 00 50 */	stw r0, 0x50(r1)
/* 802AE810 002AB750  90 01 00 48 */	stw r0, 0x48(r1)
/* 802AE814 002AB754  90 61 00 4C */	stw r3, 0x4c(r1)
/* 802AE818 002AB758  40 82 00 1C */	bne .L_802AE834
/* 802AE81C 002AB75C  81 83 00 00 */	lwz r12, 0(r3)
/* 802AE820 002AB760  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802AE824 002AB764  7D 89 03 A6 */	mtctr r12
/* 802AE828 002AB768  4E 80 04 21 */	bctrl 
/* 802AE82C 002AB76C  90 61 00 48 */	stw r3, 0x48(r1)
/* 802AE830 002AB770  48 00 02 D4 */	b .L_802AEB04
.L_802AE834:
/* 802AE834 002AB774  81 83 00 00 */	lwz r12, 0(r3)
/* 802AE838 002AB778  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802AE83C 002AB77C  7D 89 03 A6 */	mtctr r12
/* 802AE840 002AB780  4E 80 04 21 */	bctrl 
/* 802AE844 002AB784  90 61 00 48 */	stw r3, 0x48(r1)
/* 802AE848 002AB788  48 00 00 58 */	b .L_802AE8A0
.L_802AE84C:
/* 802AE84C 002AB78C  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802AE850 002AB790  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802AE854 002AB794  81 83 00 00 */	lwz r12, 0(r3)
/* 802AE858 002AB798  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802AE85C 002AB79C  7D 89 03 A6 */	mtctr r12
/* 802AE860 002AB7A0  4E 80 04 21 */	bctrl 
/* 802AE864 002AB7A4  7C 64 1B 78 */	mr r4, r3
/* 802AE868 002AB7A8  80 61 00 50 */	lwz r3, 0x50(r1)
/* 802AE86C 002AB7AC  81 83 00 00 */	lwz r12, 0(r3)
/* 802AE870 002AB7B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AE874 002AB7B4  7D 89 03 A6 */	mtctr r12
/* 802AE878 002AB7B8  4E 80 04 21 */	bctrl 
/* 802AE87C 002AB7BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AE880 002AB7C0  40 82 02 84 */	bne .L_802AEB04
/* 802AE884 002AB7C4  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802AE888 002AB7C8  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802AE88C 002AB7CC  81 83 00 00 */	lwz r12, 0(r3)
/* 802AE890 002AB7D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AE894 002AB7D4  7D 89 03 A6 */	mtctr r12
/* 802AE898 002AB7D8  4E 80 04 21 */	bctrl 
/* 802AE89C 002AB7DC  90 61 00 48 */	stw r3, 0x48(r1)
.L_802AE8A0:
/* 802AE8A0 002AB7E0  81 81 00 44 */	lwz r12, 0x44(r1)
/* 802AE8A4 002AB7E4  38 61 00 44 */	addi r3, r1, 0x44
/* 802AE8A8 002AB7E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802AE8AC 002AB7EC  7D 89 03 A6 */	mtctr r12
/* 802AE8B0 002AB7F0  4E 80 04 21 */	bctrl 
/* 802AE8B4 002AB7F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AE8B8 002AB7F8  41 82 FF 94 */	beq .L_802AE84C
/* 802AE8BC 002AB7FC  48 00 02 48 */	b .L_802AEB04
.L_802AE8C0:
/* 802AE8C0 002AB800  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802AE8C4 002AB804  81 83 00 00 */	lwz r12, 0(r3)
/* 802AE8C8 002AB808  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802AE8CC 002AB80C  7D 89 03 A6 */	mtctr r12
/* 802AE8D0 002AB810  4E 80 04 21 */	bctrl 
/* 802AE8D4 002AB814  81 83 00 00 */	lwz r12, 0(r3)
/* 802AE8D8 002AB818  7C 7D 1B 78 */	mr r29, r3
/* 802AE8DC 002AB81C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802AE8E0 002AB820  7D 89 03 A6 */	mtctr r12
/* 802AE8E4 002AB824  4E 80 04 21 */	bctrl 
/* 802AE8E8 002AB828  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AE8EC 002AB82C  41 82 01 5C */	beq .L_802AEA48
/* 802AE8F0 002AB830  7F A3 EB 78 */	mr r3, r29
/* 802AE8F4 002AB834  81 9D 00 00 */	lwz r12, 0(r29)
/* 802AE8F8 002AB838  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802AE8FC 002AB83C  7D 89 03 A6 */	mtctr r12
/* 802AE900 002AB840  4E 80 04 21 */	bctrl 
/* 802AE904 002AB844  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AE908 002AB848  41 82 01 40 */	beq .L_802AEA48
/* 802AE90C 002AB84C  80 1D 00 F4 */	lwz r0, 0xf4(r29)
/* 802AE910 002AB850  7C 00 F0 40 */	cmplw r0, r30
/* 802AE914 002AB854  41 82 01 34 */	beq .L_802AEA48
/* 802AE918 002AB858  7F A4 EB 78 */	mr r4, r29
/* 802AE91C 002AB85C  38 61 00 38 */	addi r3, r1, 0x38
/* 802AE920 002AB860  81 9D 00 00 */	lwz r12, 0(r29)
/* 802AE924 002AB864  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AE928 002AB868  7D 89 03 A6 */	mtctr r12
/* 802AE92C 002AB86C  4E 80 04 21 */	bctrl 
/* 802AE930 002AB870  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 802AE934 002AB874  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 802AE938 002AB878  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 802AE93C 002AB87C  C0 61 00 40 */	lfs f3, 0x40(r1)
/* 802AE940 002AB880  40 81 01 08 */	ble .L_802AEA48
/* 802AE944 002AB884  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 802AE948 002AB888  40 80 01 00 */	bge .L_802AEA48
/* 802AE94C 002AB88C  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802AE950 002AB890  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 802AE954 002AB894  EC 00 18 28 */	fsubs f0, f0, f3
/* 802AE958 002AB898  EC 21 10 28 */	fsubs f1, f1, f2
/* 802AE95C 002AB89C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802AE960 002AB8A0  EF E1 00 7A */	fmadds f31, f1, f1, f0
/* 802AE964 002AB8A4  FC 1F D0 40 */	fcmpo cr0, f31, f26
/* 802AE968 002AB8A8  40 80 00 0C */	bge .L_802AE974
/* 802AE96C 002AB8AC  7F A3 EB 78 */	mr r3, r29
/* 802AE970 002AB8B0  48 00 01 B8 */	b .L_802AEB28
.L_802AE974:
/* 802AE974 002AB8B4  FC 1F D8 40 */	fcmpo cr0, f31, f27
/* 802AE978 002AB8B8  40 80 00 D0 */	bge .L_802AEA48
/* 802AE97C 002AB8BC  7F A4 EB 78 */	mr r4, r29
/* 802AE980 002AB8C0  38 61 00 20 */	addi r3, r1, 0x20
/* 802AE984 002AB8C4  81 9D 00 00 */	lwz r12, 0(r29)
/* 802AE988 002AB8C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AE98C 002AB8CC  7D 89 03 A6 */	mtctr r12
/* 802AE990 002AB8D0  4E 80 04 21 */	bctrl 
/* 802AE994 002AB8D4  7F C4 F3 78 */	mr r4, r30
/* 802AE998 002AB8D8  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802AE99C 002AB8DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802AE9A0 002AB8E0  38 61 00 2C */	addi r3, r1, 0x2c
/* 802AE9A4 002AB8E4  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802AE9A8 002AB8E8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802AE9AC 002AB8EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AE9B0 002AB8F0  D0 41 00 08 */	stfs f2, 8(r1)
/* 802AE9B4 002AB8F4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802AE9B8 002AB8F8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802AE9BC 002AB8FC  7D 89 03 A6 */	mtctr r12
/* 802AE9C0 002AB900  4E 80 04 21 */	bctrl 
/* 802AE9C4 002AB904  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 802AE9C8 002AB908  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802AE9CC 002AB90C  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 802AE9D0 002AB910  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802AE9D4 002AB914  C0 21 00 08 */	lfs f1, 8(r1)
/* 802AE9D8 002AB918  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802AE9DC 002AB91C  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802AE9E0 002AB920  EC 21 28 28 */	fsubs f1, f1, f5
/* 802AE9E4 002AB924  EC 40 18 28 */	fsubs f2, f0, f3
/* 802AE9E8 002AB928  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 802AE9EC 002AB92C  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 802AE9F0 002AB930  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802AE9F4 002AB934  4B D8 67 15 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802AE9F8 002AB938  48 16 31 D9 */	bl roundAng__Ff
/* 802AE9FC 002AB93C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802AEA00 002AB940  FF 20 08 90 */	fmr f25, f1
/* 802AEA04 002AB944  7F C3 F3 78 */	mr r3, r30
/* 802AEA08 002AB948  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802AEA0C 002AB94C  7D 89 03 A6 */	mtctr r12
/* 802AEA10 002AB950  4E 80 04 21 */	bctrl 
/* 802AEA14 002AB954  FC 40 08 90 */	fmr f2, f1
/* 802AEA18 002AB958  FC 20 C8 90 */	fmr f1, f25
/* 802AEA1C 002AB95C  48 16 31 E1 */	bl angDist__Fff
/* 802AEA20 002AB960  C0 02 DD 60 */	lfs f0, lbl_8051C0C0@sda21(r2)
/* 802AEA24 002AB964  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802AEA28 002AB968  40 81 00 08 */	ble .L_802AEA30
/* 802AEA2C 002AB96C  48 00 00 08 */	b .L_802AEA34
.L_802AEA30:
/* 802AEA30 002AB970  FC 20 08 50 */	fneg f1, f1
.L_802AEA34:
/* 802AEA34 002AB974  FC 01 E0 40 */	fcmpo cr0, f1, f28
/* 802AEA38 002AB978  4C 40 13 82 */	cror 2, 0, 2
/* 802AEA3C 002AB97C  40 82 00 0C */	bne .L_802AEA48
/* 802AEA40 002AB980  7F BF EB 78 */	mr r31, r29
/* 802AEA44 002AB984  FF 60 F8 90 */	fmr f27, f31
.L_802AEA48:
/* 802AEA48 002AB988  80 01 00 50 */	lwz r0, 0x50(r1)
/* 802AEA4C 002AB98C  28 00 00 00 */	cmplwi r0, 0
/* 802AEA50 002AB990  40 82 00 24 */	bne .L_802AEA74
/* 802AEA54 002AB994  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802AEA58 002AB998  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802AEA5C 002AB99C  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEA60 002AB9A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AEA64 002AB9A4  7D 89 03 A6 */	mtctr r12
/* 802AEA68 002AB9A8  4E 80 04 21 */	bctrl 
/* 802AEA6C 002AB9AC  90 61 00 48 */	stw r3, 0x48(r1)
/* 802AEA70 002AB9B0  48 00 00 94 */	b .L_802AEB04
.L_802AEA74:
/* 802AEA74 002AB9B4  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802AEA78 002AB9B8  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802AEA7C 002AB9BC  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEA80 002AB9C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AEA84 002AB9C4  7D 89 03 A6 */	mtctr r12
/* 802AEA88 002AB9C8  4E 80 04 21 */	bctrl 
/* 802AEA8C 002AB9CC  90 61 00 48 */	stw r3, 0x48(r1)
/* 802AEA90 002AB9D0  48 00 00 58 */	b .L_802AEAE8
.L_802AEA94:
/* 802AEA94 002AB9D4  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802AEA98 002AB9D8  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802AEA9C 002AB9DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEAA0 002AB9E0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802AEAA4 002AB9E4  7D 89 03 A6 */	mtctr r12
/* 802AEAA8 002AB9E8  4E 80 04 21 */	bctrl 
/* 802AEAAC 002AB9EC  7C 64 1B 78 */	mr r4, r3
/* 802AEAB0 002AB9F0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 802AEAB4 002AB9F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEAB8 002AB9F8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AEABC 002AB9FC  7D 89 03 A6 */	mtctr r12
/* 802AEAC0 002ABA00  4E 80 04 21 */	bctrl 
/* 802AEAC4 002ABA04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AEAC8 002ABA08  40 82 00 3C */	bne .L_802AEB04
/* 802AEACC 002ABA0C  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802AEAD0 002ABA10  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802AEAD4 002ABA14  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEAD8 002ABA18  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AEADC 002ABA1C  7D 89 03 A6 */	mtctr r12
/* 802AEAE0 002ABA20  4E 80 04 21 */	bctrl 
/* 802AEAE4 002ABA24  90 61 00 48 */	stw r3, 0x48(r1)
.L_802AEAE8:
/* 802AEAE8 002ABA28  81 81 00 44 */	lwz r12, 0x44(r1)
/* 802AEAEC 002ABA2C  38 61 00 44 */	addi r3, r1, 0x44
/* 802AEAF0 002ABA30  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802AEAF4 002ABA34  7D 89 03 A6 */	mtctr r12
/* 802AEAF8 002ABA38  4E 80 04 21 */	bctrl 
/* 802AEAFC 002ABA3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AEB00 002ABA40  41 82 FF 94 */	beq .L_802AEA94
.L_802AEB04:
/* 802AEB04 002ABA44  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802AEB08 002ABA48  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEB0C 002ABA4C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AEB10 002ABA50  7D 89 03 A6 */	mtctr r12
/* 802AEB14 002ABA54  4E 80 04 21 */	bctrl 
/* 802AEB18 002ABA58  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802AEB1C 002ABA5C  7C 04 18 40 */	cmplw r4, r3
/* 802AEB20 002ABA60  40 82 FD A0 */	bne .L_802AE8C0
.L_802AEB24:
/* 802AEB24 002ABA64  7F E3 FB 78 */	mr r3, r31
.L_802AEB28:
/* 802AEB28 002ABA68  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 802AEB2C 002ABA6C  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 802AEB30 002ABA70  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 802AEB34 002ABA74  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 802AEB38 002ABA78  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 802AEB3C 002ABA7C  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 802AEB40 002ABA80  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 802AEB44 002ABA84  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 802AEB48 002ABA88  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 802AEB4C 002ABA8C  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 802AEB50 002ABA90  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 802AEB54 002ABA94  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 802AEB58 002ABA98  E3 21 00 78 */	psq_l f25, 120(r1), 0, qr0
/* 802AEB5C 002ABA9C  CB 21 00 70 */	lfd f25, 0x70(r1)
/* 802AEB60 002ABAA0  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 802AEB64 002ABAA4  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 802AEB68 002ABAA8  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 802AEB6C 002ABAAC  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 802AEB70 002ABAB0  7C 08 03 A6 */	mtlr r0
/* 802AEB74 002ABAB4  38 21 00 E0 */	addi r1, r1, 0xe0
/* 802AEB78 002ABAB8  4E 80 00 20 */	blr 

.global isSuck__Q34Game6Kurage3ObjFfPQ24Game8Creature
isSuck__Q34Game6Kurage3ObjFfPQ24Game8Creature:
/* 802AEB7C 002ABABC  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 802AEB80 002ABAC0  7C 08 02 A6 */	mflr r0
/* 802AEB84 002ABAC4  90 01 00 74 */	stw r0, 0x74(r1)
/* 802AEB88 002ABAC8  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 802AEB8C 002ABACC  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 802AEB90 002ABAD0  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 802AEB94 002ABAD4  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 802AEB98 002ABAD8  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 802AEB9C 002ABADC  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 802AEBA0 002ABAE0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802AEBA4 002ABAE4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802AEBA8 002ABAE8  7C 7F 1B 78 */	mr r31, r3
/* 802AEBAC 002ABAEC  C0 42 DD 7C */	lfs f2, lbl_8051C0DC@sda21(r2)
/* 802AEBB0 002ABAF0  C3 C3 01 90 */	lfs f30, 0x190(r3)
/* 802AEBB4 002ABAF4  28 04 00 00 */	cmplwi r4, 0
/* 802AEBB8 002ABAF8  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802AEBBC 002ABAFC  EC 3E 08 28 */	fsubs f1, f30, f1
/* 802AEBC0 002ABB00  C0 03 05 64 */	lfs f0, 0x564(r3)
/* 802AEBC4 002ABB04  EF A1 10 28 */	fsubs f29, f1, f2
/* 802AEBC8 002ABB08  EF E0 00 32 */	fmuls f31, f0, f0
/* 802AEBCC 002ABB0C  41 82 00 5C */	beq .L_802AEC28
/* 802AEBD0 002ABB10  81 84 00 00 */	lwz r12, 0(r4)
/* 802AEBD4 002ABB14  38 61 00 14 */	addi r3, r1, 0x14
/* 802AEBD8 002ABB18  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AEBDC 002ABB1C  7D 89 03 A6 */	mtctr r12
/* 802AEBE0 002ABB20  4E 80 04 21 */	bctrl 
/* 802AEBE4 002ABB24  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 802AEBE8 002ABB28  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802AEBEC 002ABB2C  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 802AEBF0 002ABB30  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 802AEBF4 002ABB34  40 81 02 90 */	ble .L_802AEE84
/* 802AEBF8 002ABB38  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 802AEBFC 002ABB3C  40 80 02 88 */	bge .L_802AEE84
/* 802AEC00 002ABB40  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 802AEC04 002ABB44  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 802AEC08 002ABB48  EC 00 18 28 */	fsubs f0, f0, f3
/* 802AEC0C 002ABB4C  EC 21 10 28 */	fsubs f1, f1, f2
/* 802AEC10 002ABB50  EC 00 00 32 */	fmuls f0, f0, f0
/* 802AEC14 002ABB54  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802AEC18 002ABB58  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802AEC1C 002ABB5C  40 80 02 68 */	bge .L_802AEE84
/* 802AEC20 002ABB60  38 60 00 01 */	li r3, 1
/* 802AEC24 002ABB64  48 00 02 64 */	b .L_802AEE88
.L_802AEC28:
/* 802AEC28 002ABB68  38 00 00 00 */	li r0, 0
/* 802AEC2C 002ABB6C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802AEC30 002ABB70  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802AEC34 002ABB74  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802AEC38 002ABB78  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802AEC3C 002ABB7C  28 00 00 00 */	cmplwi r0, 0
/* 802AEC40 002ABB80  90 81 00 20 */	stw r4, 0x20(r1)
/* 802AEC44 002ABB84  90 01 00 24 */	stw r0, 0x24(r1)
/* 802AEC48 002ABB88  90 61 00 28 */	stw r3, 0x28(r1)
/* 802AEC4C 002ABB8C  40 82 00 1C */	bne .L_802AEC68
/* 802AEC50 002ABB90  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEC54 002ABB94  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802AEC58 002ABB98  7D 89 03 A6 */	mtctr r12
/* 802AEC5C 002ABB9C  4E 80 04 21 */	bctrl 
/* 802AEC60 002ABBA0  90 61 00 24 */	stw r3, 0x24(r1)
/* 802AEC64 002ABBA4  48 00 02 00 */	b .L_802AEE64
.L_802AEC68:
/* 802AEC68 002ABBA8  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEC6C 002ABBAC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802AEC70 002ABBB0  7D 89 03 A6 */	mtctr r12
/* 802AEC74 002ABBB4  4E 80 04 21 */	bctrl 
/* 802AEC78 002ABBB8  90 61 00 24 */	stw r3, 0x24(r1)
/* 802AEC7C 002ABBBC  48 00 00 58 */	b .L_802AECD4
.L_802AEC80:
/* 802AEC80 002ABBC0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802AEC84 002ABBC4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802AEC88 002ABBC8  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEC8C 002ABBCC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802AEC90 002ABBD0  7D 89 03 A6 */	mtctr r12
/* 802AEC94 002ABBD4  4E 80 04 21 */	bctrl 
/* 802AEC98 002ABBD8  7C 64 1B 78 */	mr r4, r3
/* 802AEC9C 002ABBDC  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 802AECA0 002ABBE0  81 83 00 00 */	lwz r12, 0(r3)
/* 802AECA4 002ABBE4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AECA8 002ABBE8  7D 89 03 A6 */	mtctr r12
/* 802AECAC 002ABBEC  4E 80 04 21 */	bctrl 
/* 802AECB0 002ABBF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AECB4 002ABBF4  40 82 01 B0 */	bne .L_802AEE64
/* 802AECB8 002ABBF8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802AECBC 002ABBFC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802AECC0 002ABC00  81 83 00 00 */	lwz r12, 0(r3)
/* 802AECC4 002ABC04  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AECC8 002ABC08  7D 89 03 A6 */	mtctr r12
/* 802AECCC 002ABC0C  4E 80 04 21 */	bctrl 
/* 802AECD0 002ABC10  90 61 00 24 */	stw r3, 0x24(r1)
.L_802AECD4:
/* 802AECD4 002ABC14  81 81 00 20 */	lwz r12, 0x20(r1)
/* 802AECD8 002ABC18  38 61 00 20 */	addi r3, r1, 0x20
/* 802AECDC 002ABC1C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802AECE0 002ABC20  7D 89 03 A6 */	mtctr r12
/* 802AECE4 002ABC24  4E 80 04 21 */	bctrl 
/* 802AECE8 002ABC28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AECEC 002ABC2C  41 82 FF 94 */	beq .L_802AEC80
/* 802AECF0 002ABC30  48 00 01 74 */	b .L_802AEE64
.L_802AECF4:
/* 802AECF4 002ABC34  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802AECF8 002ABC38  81 83 00 00 */	lwz r12, 0(r3)
/* 802AECFC 002ABC3C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802AED00 002ABC40  7D 89 03 A6 */	mtctr r12
/* 802AED04 002ABC44  4E 80 04 21 */	bctrl 
/* 802AED08 002ABC48  81 83 00 00 */	lwz r12, 0(r3)
/* 802AED0C 002ABC4C  7C 7E 1B 78 */	mr r30, r3
/* 802AED10 002ABC50  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802AED14 002ABC54  7D 89 03 A6 */	mtctr r12
/* 802AED18 002ABC58  4E 80 04 21 */	bctrl 
/* 802AED1C 002ABC5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AED20 002ABC60  41 82 00 88 */	beq .L_802AEDA8
/* 802AED24 002ABC64  7F C3 F3 78 */	mr r3, r30
/* 802AED28 002ABC68  81 9E 00 00 */	lwz r12, 0(r30)
/* 802AED2C 002ABC6C  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802AED30 002ABC70  7D 89 03 A6 */	mtctr r12
/* 802AED34 002ABC74  4E 80 04 21 */	bctrl 
/* 802AED38 002ABC78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AED3C 002ABC7C  41 82 00 6C */	beq .L_802AEDA8
/* 802AED40 002ABC80  80 1E 00 F4 */	lwz r0, 0xf4(r30)
/* 802AED44 002ABC84  7C 00 F8 40 */	cmplw r0, r31
/* 802AED48 002ABC88  41 82 00 60 */	beq .L_802AEDA8
/* 802AED4C 002ABC8C  7F C4 F3 78 */	mr r4, r30
/* 802AED50 002ABC90  38 61 00 08 */	addi r3, r1, 8
/* 802AED54 002ABC94  81 9E 00 00 */	lwz r12, 0(r30)
/* 802AED58 002ABC98  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AED5C 002ABC9C  7D 89 03 A6 */	mtctr r12
/* 802AED60 002ABCA0  4E 80 04 21 */	bctrl 
/* 802AED64 002ABCA4  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802AED68 002ABCA8  C0 41 00 08 */	lfs f2, 8(r1)
/* 802AED6C 002ABCAC  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 802AED70 002ABCB0  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 802AED74 002ABCB4  40 81 00 34 */	ble .L_802AEDA8
/* 802AED78 002ABCB8  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 802AED7C 002ABCBC  40 80 00 2C */	bge .L_802AEDA8
/* 802AED80 002ABCC0  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 802AED84 002ABCC4  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 802AED88 002ABCC8  EC 00 18 28 */	fsubs f0, f0, f3
/* 802AED8C 002ABCCC  EC 21 10 28 */	fsubs f1, f1, f2
/* 802AED90 002ABCD0  EC 00 00 32 */	fmuls f0, f0, f0
/* 802AED94 002ABCD4  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802AED98 002ABCD8  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802AED9C 002ABCDC  40 80 00 0C */	bge .L_802AEDA8
/* 802AEDA0 002ABCE0  38 60 00 01 */	li r3, 1
/* 802AEDA4 002ABCE4  48 00 00 E4 */	b .L_802AEE88
.L_802AEDA8:
/* 802AEDA8 002ABCE8  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802AEDAC 002ABCEC  28 00 00 00 */	cmplwi r0, 0
/* 802AEDB0 002ABCF0  40 82 00 24 */	bne .L_802AEDD4
/* 802AEDB4 002ABCF4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802AEDB8 002ABCF8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802AEDBC 002ABCFC  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEDC0 002ABD00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AEDC4 002ABD04  7D 89 03 A6 */	mtctr r12
/* 802AEDC8 002ABD08  4E 80 04 21 */	bctrl 
/* 802AEDCC 002ABD0C  90 61 00 24 */	stw r3, 0x24(r1)
/* 802AEDD0 002ABD10  48 00 00 94 */	b .L_802AEE64
.L_802AEDD4:
/* 802AEDD4 002ABD14  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802AEDD8 002ABD18  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802AEDDC 002ABD1C  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEDE0 002ABD20  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AEDE4 002ABD24  7D 89 03 A6 */	mtctr r12
/* 802AEDE8 002ABD28  4E 80 04 21 */	bctrl 
/* 802AEDEC 002ABD2C  90 61 00 24 */	stw r3, 0x24(r1)
/* 802AEDF0 002ABD30  48 00 00 58 */	b .L_802AEE48
.L_802AEDF4:
/* 802AEDF4 002ABD34  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802AEDF8 002ABD38  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802AEDFC 002ABD3C  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEE00 002ABD40  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802AEE04 002ABD44  7D 89 03 A6 */	mtctr r12
/* 802AEE08 002ABD48  4E 80 04 21 */	bctrl 
/* 802AEE0C 002ABD4C  7C 64 1B 78 */	mr r4, r3
/* 802AEE10 002ABD50  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 802AEE14 002ABD54  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEE18 002ABD58  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AEE1C 002ABD5C  7D 89 03 A6 */	mtctr r12
/* 802AEE20 002ABD60  4E 80 04 21 */	bctrl 
/* 802AEE24 002ABD64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AEE28 002ABD68  40 82 00 3C */	bne .L_802AEE64
/* 802AEE2C 002ABD6C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802AEE30 002ABD70  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802AEE34 002ABD74  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEE38 002ABD78  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AEE3C 002ABD7C  7D 89 03 A6 */	mtctr r12
/* 802AEE40 002ABD80  4E 80 04 21 */	bctrl 
/* 802AEE44 002ABD84  90 61 00 24 */	stw r3, 0x24(r1)
.L_802AEE48:
/* 802AEE48 002ABD88  81 81 00 20 */	lwz r12, 0x20(r1)
/* 802AEE4C 002ABD8C  38 61 00 20 */	addi r3, r1, 0x20
/* 802AEE50 002ABD90  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802AEE54 002ABD94  7D 89 03 A6 */	mtctr r12
/* 802AEE58 002ABD98  4E 80 04 21 */	bctrl 
/* 802AEE5C 002ABD9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AEE60 002ABDA0  41 82 FF 94 */	beq .L_802AEDF4
.L_802AEE64:
/* 802AEE64 002ABDA4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802AEE68 002ABDA8  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEE6C 002ABDAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AEE70 002ABDB0  7D 89 03 A6 */	mtctr r12
/* 802AEE74 002ABDB4  4E 80 04 21 */	bctrl 
/* 802AEE78 002ABDB8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802AEE7C 002ABDBC  7C 04 18 40 */	cmplw r4, r3
/* 802AEE80 002ABDC0  40 82 FE 74 */	bne .L_802AECF4
.L_802AEE84:
/* 802AEE84 002ABDC4  38 60 00 00 */	li r3, 0
.L_802AEE88:
/* 802AEE88 002ABDC8  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 802AEE8C 002ABDCC  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 802AEE90 002ABDD0  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 802AEE94 002ABDD4  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 802AEE98 002ABDD8  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 802AEE9C 002ABDDC  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 802AEEA0 002ABDE0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802AEEA4 002ABDE4  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802AEEA8 002ABDE8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802AEEAC 002ABDEC  7C 08 03 A6 */	mtlr r0
/* 802AEEB0 002ABDF0  38 21 00 70 */	addi r1, r1, 0x70
/* 802AEEB4 002ABDF4  4E 80 00 20 */	blr 

.global suckPikmin__Q34Game6Kurage3ObjFf
suckPikmin__Q34Game6Kurage3ObjFf:
/* 802AEEB8 002ABDF8  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 802AEEBC 002ABDFC  7C 08 02 A6 */	mflr r0
/* 802AEEC0 002ABE00  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 802AEEC4 002ABE04  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 802AEEC8 002ABE08  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 802AEECC 002ABE0C  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 802AEED0 002ABE10  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 802AEED4 002ABE14  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 802AEED8 002ABE18  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 802AEEDC 002ABE1C  DB 81 00 80 */	stfd f28, 0x80(r1)
/* 802AEEE0 002ABE20  F3 81 00 88 */	psq_st f28, 136(r1), 0, qr0
/* 802AEEE4 002ABE24  DB 61 00 70 */	stfd f27, 0x70(r1)
/* 802AEEE8 002ABE28  F3 61 00 78 */	psq_st f27, 120(r1), 0, qr0
/* 802AEEEC 002ABE2C  DB 41 00 60 */	stfd f26, 0x60(r1)
/* 802AEEF0 002ABE30  F3 41 00 68 */	psq_st f26, 104(r1), 0, qr0
/* 802AEEF4 002ABE34  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802AEEF8 002ABE38  93 C1 00 58 */	stw r30, 0x58(r1)
/* 802AEEFC 002ABE3C  93 A1 00 54 */	stw r29, 0x54(r1)
/* 802AEF00 002ABE40  93 81 00 50 */	stw r28, 0x50(r1)
/* 802AEF04 002ABE44  7C 7E 1B 78 */	mr r30, r3
/* 802AEF08 002ABE48  3C 60 73 75 */	lis r3, 0x7375636B@ha
/* 802AEF0C 002ABE4C  C3 9E 01 90 */	lfs f28, 0x190(r30)
/* 802AEF10 002ABE50  38 83 63 6B */	addi r4, r3, 0x7375636B@l
/* 802AEF14 002ABE54  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802AEF18 002ABE58  EC 5C 08 28 */	fsubs f2, f28, f1
/* 802AEF1C 002ABE5C  C0 22 DD 7C */	lfs f1, lbl_8051C0DC@sda21(r2)
/* 802AEF20 002ABE60  C0 03 05 B4 */	lfs f0, 0x5b4(r3)
/* 802AEF24 002ABE64  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 802AEF28 002ABE68  EF 62 08 28 */	fsubs f27, f2, f1
/* 802AEF2C 002ABE6C  EF 40 00 32 */	fmuls f26, f0, f0
/* 802AEF30 002ABE70  4B E8 6F 15 */	bl getCollPart__8CollTreeFUl
/* 802AEF34 002ABE74  7C 7F 1B 78 */	mr r31, r3
/* 802AEF38 002ABE78  3C 60 80 4B */	lis r3, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802AEF3C 002ABE7C  38 00 00 00 */	li r0, 0
/* 802AEF40 002ABE80  C3 FF 00 4C */	lfs f31, 0x4c(r31)
/* 802AEF44 002ABE84  C3 DF 00 50 */	lfs f30, 0x50(r31)
/* 802AEF48 002ABE88  28 00 00 00 */	cmplwi r0, 0
/* 802AEF4C 002ABE8C  C3 BF 00 54 */	lfs f29, 0x54(r31)
/* 802AEF50 002ABE90  38 83 BC 9C */	addi r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802AEF54 002ABE94  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802AEF58 002ABE98  90 81 00 14 */	stw r4, 0x14(r1)
/* 802AEF5C 002ABE9C  90 01 00 20 */	stw r0, 0x20(r1)
/* 802AEF60 002ABEA0  90 01 00 18 */	stw r0, 0x18(r1)
/* 802AEF64 002ABEA4  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802AEF68 002ABEA8  40 82 00 1C */	bne .L_802AEF84
/* 802AEF6C 002ABEAC  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEF70 002ABEB0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802AEF74 002ABEB4  7D 89 03 A6 */	mtctr r12
/* 802AEF78 002ABEB8  4E 80 04 21 */	bctrl 
/* 802AEF7C 002ABEBC  90 61 00 18 */	stw r3, 0x18(r1)
/* 802AEF80 002ABEC0  48 00 02 E0 */	b .L_802AF260
.L_802AEF84:
/* 802AEF84 002ABEC4  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEF88 002ABEC8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802AEF8C 002ABECC  7D 89 03 A6 */	mtctr r12
/* 802AEF90 002ABED0  4E 80 04 21 */	bctrl 
/* 802AEF94 002ABED4  90 61 00 18 */	stw r3, 0x18(r1)
/* 802AEF98 002ABED8  48 00 00 58 */	b .L_802AEFF0
.L_802AEF9C:
/* 802AEF9C 002ABEDC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802AEFA0 002ABEE0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802AEFA4 002ABEE4  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEFA8 002ABEE8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802AEFAC 002ABEEC  7D 89 03 A6 */	mtctr r12
/* 802AEFB0 002ABEF0  4E 80 04 21 */	bctrl 
/* 802AEFB4 002ABEF4  7C 64 1B 78 */	mr r4, r3
/* 802AEFB8 002ABEF8  80 61 00 20 */	lwz r3, 0x20(r1)
/* 802AEFBC 002ABEFC  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEFC0 002ABF00  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AEFC4 002ABF04  7D 89 03 A6 */	mtctr r12
/* 802AEFC8 002ABF08  4E 80 04 21 */	bctrl 
/* 802AEFCC 002ABF0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AEFD0 002ABF10  40 82 02 90 */	bne .L_802AF260
/* 802AEFD4 002ABF14  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802AEFD8 002ABF18  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802AEFDC 002ABF1C  81 83 00 00 */	lwz r12, 0(r3)
/* 802AEFE0 002ABF20  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AEFE4 002ABF24  7D 89 03 A6 */	mtctr r12
/* 802AEFE8 002ABF28  4E 80 04 21 */	bctrl 
/* 802AEFEC 002ABF2C  90 61 00 18 */	stw r3, 0x18(r1)
.L_802AEFF0:
/* 802AEFF0 002ABF30  81 81 00 14 */	lwz r12, 0x14(r1)
/* 802AEFF4 002ABF34  38 61 00 14 */	addi r3, r1, 0x14
/* 802AEFF8 002ABF38  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802AEFFC 002ABF3C  7D 89 03 A6 */	mtctr r12
/* 802AF000 002ABF40  4E 80 04 21 */	bctrl 
/* 802AF004 002ABF44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AF008 002ABF48  41 82 FF 94 */	beq .L_802AEF9C
/* 802AF00C 002ABF4C  48 00 02 54 */	b .L_802AF260
.L_802AF010:
/* 802AF010 002ABF50  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802AF014 002ABF54  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF018 002ABF58  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802AF01C 002ABF5C  7D 89 03 A6 */	mtctr r12
/* 802AF020 002ABF60  4E 80 04 21 */	bctrl 
/* 802AF024 002ABF64  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF028 002ABF68  7C 7D 1B 78 */	mr r29, r3
/* 802AF02C 002ABF6C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802AF030 002ABF70  7D 89 03 A6 */	mtctr r12
/* 802AF034 002ABF74  4E 80 04 21 */	bctrl 
/* 802AF038 002ABF78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AF03C 002ABF7C  41 82 01 68 */	beq .L_802AF1A4
/* 802AF040 002ABF80  7F A3 EB 78 */	mr r3, r29
/* 802AF044 002ABF84  81 9D 00 00 */	lwz r12, 0(r29)
/* 802AF048 002ABF88  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802AF04C 002ABF8C  7D 89 03 A6 */	mtctr r12
/* 802AF050 002ABF90  4E 80 04 21 */	bctrl 
/* 802AF054 002ABF94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AF058 002ABF98  41 82 01 4C */	beq .L_802AF1A4
/* 802AF05C 002ABF9C  80 1D 00 F4 */	lwz r0, 0xf4(r29)
/* 802AF060 002ABFA0  7C 00 F0 40 */	cmplw r0, r30
/* 802AF064 002ABFA4  41 82 01 40 */	beq .L_802AF1A4
/* 802AF068 002ABFA8  83 9E 00 C0 */	lwz r28, 0xc0(r30)
/* 802AF06C 002ABFAC  80 7E 02 E0 */	lwz r3, 0x2e0(r30)
/* 802AF070 002ABFB0  80 1C 09 34 */	lwz r0, 0x934(r28)
/* 802AF074 002ABFB4  7C 03 00 00 */	cmpw r3, r0
/* 802AF078 002ABFB8  40 80 01 2C */	bge .L_802AF1A4
/* 802AF07C 002ABFBC  4B E1 A5 25 */	bl rand
/* 802AF080 002ABFC0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802AF084 002ABFC4  3C 00 43 30 */	lis r0, 0x4330
/* 802AF088 002ABFC8  90 61 00 44 */	stw r3, 0x44(r1)
/* 802AF08C 002ABFCC  C8 62 DD 98 */	lfd f3, lbl_8051C0F8@sda21(r2)
/* 802AF090 002ABFD0  90 01 00 40 */	stw r0, 0x40(r1)
/* 802AF094 002ABFD4  C0 42 DD 78 */	lfs f2, lbl_8051C0D8@sda21(r2)
/* 802AF098 002ABFD8  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 802AF09C 002ABFDC  C0 22 DD 84 */	lfs f1, lbl_8051C0E4@sda21(r2)
/* 802AF0A0 002ABFE0  EC 60 18 28 */	fsubs f3, f0, f3
/* 802AF0A4 002ABFE4  C0 1C 08 BC */	lfs f0, 0x8bc(r28)
/* 802AF0A8 002ABFE8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802AF0AC 002ABFEC  EC 22 08 24 */	fdivs f1, f2, f1
/* 802AF0B0 002ABFF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802AF0B4 002ABFF4  40 80 00 F0 */	bge .L_802AF1A4
/* 802AF0B8 002ABFF8  7F A4 EB 78 */	mr r4, r29
/* 802AF0BC 002ABFFC  38 61 00 08 */	addi r3, r1, 8
/* 802AF0C0 002AC000  81 9D 00 00 */	lwz r12, 0(r29)
/* 802AF0C4 002AC004  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AF0C8 002AC008  7D 89 03 A6 */	mtctr r12
/* 802AF0CC 002AC00C  4E 80 04 21 */	bctrl 
/* 802AF0D0 002AC010  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 802AF0D4 002AC014  C0 41 00 08 */	lfs f2, 8(r1)
/* 802AF0D8 002AC018  FC 03 D8 40 */	fcmpo cr0, f3, f27
/* 802AF0DC 002AC01C  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 802AF0E0 002AC020  40 81 00 C4 */	ble .L_802AF1A4
/* 802AF0E4 002AC024  FC 03 E0 40 */	fcmpo cr0, f3, f28
/* 802AF0E8 002AC028  40 80 00 BC */	bge .L_802AF1A4
/* 802AF0EC 002AC02C  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802AF0F0 002AC030  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 802AF0F4 002AC034  EC 00 20 28 */	fsubs f0, f0, f4
/* 802AF0F8 002AC038  EC 21 10 28 */	fsubs f1, f1, f2
/* 802AF0FC 002AC03C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802AF100 002AC040  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802AF104 002AC044  FC 00 D0 40 */	fcmpo cr0, f0, f26
/* 802AF108 002AC048  40 80 00 9C */	bge .L_802AF1A4
/* 802AF10C 002AC04C  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802AF110 002AC050  EC 5F 10 28 */	fsubs f2, f31, f2
/* 802AF114 002AC054  38 83 A3 00 */	addi r4, r3, __vt__Q24Game11Interaction@l
/* 802AF118 002AC058  EC 3E 18 28 */	fsubs f1, f30, f3
/* 802AF11C 002AC05C  EC 1D 20 28 */	fsubs f0, f29, f4
/* 802AF120 002AC060  3C 60 80 4B */	lis r3, __vt__Q24Game20InteractSuikomi_Test@ha
/* 802AF124 002AC064  38 00 00 00 */	li r0, 0
/* 802AF128 002AC068  90 81 00 24 */	stw r4, 0x24(r1)
/* 802AF12C 002AC06C  38 A3 48 9C */	addi r5, r3, __vt__Q24Game20InteractSuikomi_Test@l
/* 802AF130 002AC070  7F A3 EB 78 */	mr r3, r29
/* 802AF134 002AC074  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802AF138 002AC078  38 81 00 24 */	addi r4, r1, 0x24
/* 802AF13C 002AC07C  90 A1 00 24 */	stw r5, 0x24(r1)
/* 802AF140 002AC080  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802AF144 002AC084  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802AF148 002AC088  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802AF14C 002AC08C  90 01 00 38 */	stw r0, 0x38(r1)
/* 802AF150 002AC090  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802AF154 002AC094  81 9D 00 00 */	lwz r12, 0(r29)
/* 802AF158 002AC098  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802AF15C 002AC09C  7D 89 03 A6 */	mtctr r12
/* 802AF160 002AC0A0  4E 80 04 21 */	bctrl 
/* 802AF164 002AC0A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AF168 002AC0A8  41 82 00 3C */	beq .L_802AF1A4
/* 802AF16C 002AC0AC  80 9E 02 E0 */	lwz r4, 0x2e0(r30)
/* 802AF170 002AC0B0  7F C3 F3 78 */	mr r3, r30
/* 802AF174 002AC0B4  38 04 00 01 */	addi r0, r4, 1
/* 802AF178 002AC0B8  90 1E 02 E0 */	stw r0, 0x2e0(r30)
/* 802AF17C 002AC0BC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802AF180 002AC0C0  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802AF184 002AC0C4  7D 89 03 A6 */	mtctr r12
/* 802AF188 002AC0C8  4E 80 04 21 */	bctrl 
/* 802AF18C 002AC0CC  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF190 002AC0D0  38 80 28 2A */	li r4, 0x282a
/* 802AF194 002AC0D4  38 A0 00 00 */	li r5, 0
/* 802AF198 002AC0D8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802AF19C 002AC0DC  7D 89 03 A6 */	mtctr r12
/* 802AF1A0 002AC0E0  4E 80 04 21 */	bctrl 
.L_802AF1A4:
/* 802AF1A4 002AC0E4  80 01 00 20 */	lwz r0, 0x20(r1)
/* 802AF1A8 002AC0E8  28 00 00 00 */	cmplwi r0, 0
/* 802AF1AC 002AC0EC  40 82 00 24 */	bne .L_802AF1D0
/* 802AF1B0 002AC0F0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802AF1B4 002AC0F4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802AF1B8 002AC0F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF1BC 002AC0FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AF1C0 002AC100  7D 89 03 A6 */	mtctr r12
/* 802AF1C4 002AC104  4E 80 04 21 */	bctrl 
/* 802AF1C8 002AC108  90 61 00 18 */	stw r3, 0x18(r1)
/* 802AF1CC 002AC10C  48 00 00 94 */	b .L_802AF260
.L_802AF1D0:
/* 802AF1D0 002AC110  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802AF1D4 002AC114  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802AF1D8 002AC118  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF1DC 002AC11C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AF1E0 002AC120  7D 89 03 A6 */	mtctr r12
/* 802AF1E4 002AC124  4E 80 04 21 */	bctrl 
/* 802AF1E8 002AC128  90 61 00 18 */	stw r3, 0x18(r1)
/* 802AF1EC 002AC12C  48 00 00 58 */	b .L_802AF244
.L_802AF1F0:
/* 802AF1F0 002AC130  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802AF1F4 002AC134  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802AF1F8 002AC138  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF1FC 002AC13C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802AF200 002AC140  7D 89 03 A6 */	mtctr r12
/* 802AF204 002AC144  4E 80 04 21 */	bctrl 
/* 802AF208 002AC148  7C 64 1B 78 */	mr r4, r3
/* 802AF20C 002AC14C  80 61 00 20 */	lwz r3, 0x20(r1)
/* 802AF210 002AC150  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF214 002AC154  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AF218 002AC158  7D 89 03 A6 */	mtctr r12
/* 802AF21C 002AC15C  4E 80 04 21 */	bctrl 
/* 802AF220 002AC160  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AF224 002AC164  40 82 00 3C */	bne .L_802AF260
/* 802AF228 002AC168  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802AF22C 002AC16C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802AF230 002AC170  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF234 002AC174  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AF238 002AC178  7D 89 03 A6 */	mtctr r12
/* 802AF23C 002AC17C  4E 80 04 21 */	bctrl 
/* 802AF240 002AC180  90 61 00 18 */	stw r3, 0x18(r1)
.L_802AF244:
/* 802AF244 002AC184  81 81 00 14 */	lwz r12, 0x14(r1)
/* 802AF248 002AC188  38 61 00 14 */	addi r3, r1, 0x14
/* 802AF24C 002AC18C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802AF250 002AC190  7D 89 03 A6 */	mtctr r12
/* 802AF254 002AC194  4E 80 04 21 */	bctrl 
/* 802AF258 002AC198  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AF25C 002AC19C  41 82 FF 94 */	beq .L_802AF1F0
.L_802AF260:
/* 802AF260 002AC1A0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802AF264 002AC1A4  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF268 002AC1A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AF26C 002AC1AC  7D 89 03 A6 */	mtctr r12
/* 802AF270 002AC1B0  4E 80 04 21 */	bctrl 
/* 802AF274 002AC1B4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802AF278 002AC1B8  7C 04 18 40 */	cmplw r4, r3
/* 802AF27C 002AC1BC  40 82 FD 94 */	bne .L_802AF010
/* 802AF280 002AC1C0  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802AF284 002AC1C4  80 BE 02 E0 */	lwz r5, 0x2e0(r30)
/* 802AF288 002AC1C8  80 03 09 34 */	lwz r0, 0x934(r3)
/* 802AF28C 002AC1CC  7C A4 FE 70 */	srawi r4, r5, 0x1f
/* 802AF290 002AC1D0  54 03 0F FE */	srwi r3, r0, 0x1f
/* 802AF294 002AC1D4  7C 00 28 10 */	subfc r0, r0, r5
/* 802AF298 002AC1D8  7C 64 19 14 */	adde r3, r4, r3
/* 802AF29C 002AC1DC  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 802AF2A0 002AC1E0  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 802AF2A4 002AC1E4  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 802AF2A8 002AC1E8  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 802AF2AC 002AC1EC  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 802AF2B0 002AC1F0  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 802AF2B4 002AC1F4  E3 81 00 88 */	psq_l f28, 136(r1), 0, qr0
/* 802AF2B8 002AC1F8  CB 81 00 80 */	lfd f28, 0x80(r1)
/* 802AF2BC 002AC1FC  E3 61 00 78 */	psq_l f27, 120(r1), 0, qr0
/* 802AF2C0 002AC200  CB 61 00 70 */	lfd f27, 0x70(r1)
/* 802AF2C4 002AC204  E3 41 00 68 */	psq_l f26, 104(r1), 0, qr0
/* 802AF2C8 002AC208  CB 41 00 60 */	lfd f26, 0x60(r1)
/* 802AF2CC 002AC20C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802AF2D0 002AC210  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802AF2D4 002AC214  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 802AF2D8 002AC218  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 802AF2DC 002AC21C  83 81 00 50 */	lwz r28, 0x50(r1)
/* 802AF2E0 002AC220  7C 08 03 A6 */	mtlr r0
/* 802AF2E4 002AC224  38 21 00 C0 */	addi r1, r1, 0xc0
/* 802AF2E8 002AC228  4E 80 00 20 */	blr 

.global createEffect__Q34Game6Kurage3ObjFv
createEffect__Q34Game6Kurage3ObjFv:
/* 802AF2EC 002AC22C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AF2F0 002AC230  7C 08 02 A6 */	mflr r0
/* 802AF2F4 002AC234  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AF2F8 002AC238  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AF2FC 002AC23C  7C 7F 1B 78 */	mr r31, r3
/* 802AF300 002AC240  38 60 00 14 */	li r3, 0x14
/* 802AF304 002AC244  93 C1 00 08 */	stw r30, 8(r1)
/* 802AF308 002AC248  4B D7 4B 9D */	bl __nw__FUl
/* 802AF30C 002AC24C  28 03 00 00 */	cmplwi r3, 0
/* 802AF310 002AC250  41 82 00 78 */	beq .L_802AF388
/* 802AF314 002AC254  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802AF318 002AC258  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802AF31C 002AC25C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802AF320 002AC260  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802AF324 002AC264  90 03 00 00 */	stw r0, 0(r3)
/* 802AF328 002AC268  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802AF32C 002AC26C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802AF330 002AC270  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 802AF334 002AC274  90 03 00 04 */	stw r0, 4(r3)
/* 802AF338 002AC278  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 802AF33C 002AC27C  3C 80 80 4D */	lis r4, __vt__Q23efx13TNewkurageEye@ha
/* 802AF340 002AC280  38 05 00 14 */	addi r0, r5, 0x14
/* 802AF344 002AC284  90 A3 00 00 */	stw r5, 0(r3)
/* 802AF348 002AC288  38 84 E2 DC */	addi r4, r4, __vt__Q23efx13TNewkurageEye@l
/* 802AF34C 002AC28C  39 20 00 00 */	li r9, 0
/* 802AF350 002AC290  39 00 02 B2 */	li r8, 0x2b2
/* 802AF354 002AC294  90 03 00 04 */	stw r0, 4(r3)
/* 802AF358 002AC298  38 C7 00 14 */	addi r6, r7, 0x14
/* 802AF35C 002AC29C  38 A0 00 E5 */	li r5, 0xe5
/* 802AF360 002AC2A0  38 04 00 14 */	addi r0, r4, 0x14
/* 802AF364 002AC2A4  91 23 00 08 */	stw r9, 8(r3)
/* 802AF368 002AC2A8  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802AF36C 002AC2AC  99 23 00 0E */	stb r9, 0xe(r3)
/* 802AF370 002AC2B0  90 E3 00 00 */	stw r7, 0(r3)
/* 802AF374 002AC2B4  90 C3 00 04 */	stw r6, 4(r3)
/* 802AF378 002AC2B8  91 23 00 10 */	stw r9, 0x10(r3)
/* 802AF37C 002AC2BC  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802AF380 002AC2C0  90 83 00 00 */	stw r4, 0(r3)
/* 802AF384 002AC2C4  90 03 00 04 */	stw r0, 4(r3)
.L_802AF388:
/* 802AF388 002AC2C8  90 7F 02 E4 */	stw r3, 0x2e4(r31)
/* 802AF38C 002AC2CC  38 60 00 14 */	li r3, 0x14
/* 802AF390 002AC2D0  4B D7 4B 15 */	bl __nw__FUl
/* 802AF394 002AC2D4  28 03 00 00 */	cmplwi r3, 0
/* 802AF398 002AC2D8  41 82 00 78 */	beq .L_802AF410
/* 802AF39C 002AC2DC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802AF3A0 002AC2E0  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802AF3A4 002AC2E4  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802AF3A8 002AC2E8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802AF3AC 002AC2EC  90 03 00 00 */	stw r0, 0(r3)
/* 802AF3B0 002AC2F0  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802AF3B4 002AC2F4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802AF3B8 002AC2F8  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 802AF3BC 002AC2FC  90 03 00 04 */	stw r0, 4(r3)
/* 802AF3C0 002AC300  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 802AF3C4 002AC304  3C 80 80 4D */	lis r4, __vt__Q23efx13TNewkurageEye@ha
/* 802AF3C8 002AC308  38 05 00 14 */	addi r0, r5, 0x14
/* 802AF3CC 002AC30C  90 A3 00 00 */	stw r5, 0(r3)
/* 802AF3D0 002AC310  38 84 E2 DC */	addi r4, r4, __vt__Q23efx13TNewkurageEye@l
/* 802AF3D4 002AC314  39 20 00 00 */	li r9, 0
/* 802AF3D8 002AC318  39 00 02 B2 */	li r8, 0x2b2
/* 802AF3DC 002AC31C  90 03 00 04 */	stw r0, 4(r3)
/* 802AF3E0 002AC320  38 C7 00 14 */	addi r6, r7, 0x14
/* 802AF3E4 002AC324  38 A0 00 E5 */	li r5, 0xe5
/* 802AF3E8 002AC328  38 04 00 14 */	addi r0, r4, 0x14
/* 802AF3EC 002AC32C  91 23 00 08 */	stw r9, 8(r3)
/* 802AF3F0 002AC330  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802AF3F4 002AC334  99 23 00 0E */	stb r9, 0xe(r3)
/* 802AF3F8 002AC338  90 E3 00 00 */	stw r7, 0(r3)
/* 802AF3FC 002AC33C  90 C3 00 04 */	stw r6, 4(r3)
/* 802AF400 002AC340  91 23 00 10 */	stw r9, 0x10(r3)
/* 802AF404 002AC344  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802AF408 002AC348  90 83 00 00 */	stw r4, 0(r3)
/* 802AF40C 002AC34C  90 03 00 04 */	stw r0, 4(r3)
.L_802AF410:
/* 802AF410 002AC350  90 7F 02 E8 */	stw r3, 0x2e8(r31)
/* 802AF414 002AC354  38 60 00 40 */	li r3, 0x40
/* 802AF418 002AC358  4B D7 4A 8D */	bl __nw__FUl
/* 802AF41C 002AC35C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802AF420 002AC360  41 82 00 24 */	beq .L_802AF444
/* 802AF424 002AC364  38 80 00 00 */	li r4, 0
/* 802AF428 002AC368  38 A0 00 E7 */	li r5, 0xe7
/* 802AF42C 002AC36C  38 C0 00 E8 */	li r6, 0xe8
/* 802AF430 002AC370  38 E0 00 E9 */	li r7, 0xe9
/* 802AF434 002AC374  48 10 11 79 */	bl __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs
/* 802AF438 002AC378  3C 60 80 4D */	lis r3, __vt__Q23efx14TNewkurageHire@ha
/* 802AF43C 002AC37C  38 03 E2 C0 */	addi r0, r3, __vt__Q23efx14TNewkurageHire@l
/* 802AF440 002AC380  90 1E 00 00 */	stw r0, 0(r30)
.L_802AF444:
/* 802AF444 002AC384  93 DF 02 EC */	stw r30, 0x2ec(r31)
/* 802AF448 002AC388  38 60 00 14 */	li r3, 0x14
/* 802AF44C 002AC38C  4B D7 4A 59 */	bl __nw__FUl
/* 802AF450 002AC390  28 03 00 00 */	cmplwi r3, 0
/* 802AF454 002AC394  41 82 00 7C */	beq .L_802AF4D0
/* 802AF458 002AC398  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802AF45C 002AC39C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802AF460 002AC3A0  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802AF464 002AC3A4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802AF468 002AC3A8  90 03 00 00 */	stw r0, 0(r3)
/* 802AF46C 002AC3AC  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802AF470 002AC3B0  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802AF474 002AC3B4  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 802AF478 002AC3B8  90 03 00 04 */	stw r0, 4(r3)
/* 802AF47C 002AC3BC  39 04 69 40 */	addi r8, r4, __vt__Q23efx9TChasePos@l
/* 802AF480 002AC3C0  3C 80 80 4D */	lis r4, __vt__Q23efx14TNewkurageKira@ha
/* 802AF484 002AC3C4  38 05 00 14 */	addi r0, r5, 0x14
/* 802AF488 002AC3C8  90 A3 00 00 */	stw r5, 0(r3)
/* 802AF48C 002AC3CC  38 84 E2 74 */	addi r4, r4, __vt__Q23efx14TNewkurageKira@l
/* 802AF490 002AC3D0  39 40 00 00 */	li r10, 0
/* 802AF494 002AC3D4  39 20 02 B2 */	li r9, 0x2b2
/* 802AF498 002AC3D8  90 03 00 04 */	stw r0, 4(r3)
/* 802AF49C 002AC3DC  38 E8 00 14 */	addi r7, r8, 0x14
/* 802AF4A0 002AC3E0  38 DF 01 8C */	addi r6, r31, 0x18c
/* 802AF4A4 002AC3E4  38 A0 00 EA */	li r5, 0xea
/* 802AF4A8 002AC3E8  91 43 00 08 */	stw r10, 8(r3)
/* 802AF4AC 002AC3EC  38 04 00 14 */	addi r0, r4, 0x14
/* 802AF4B0 002AC3F0  B1 23 00 0C */	sth r9, 0xc(r3)
/* 802AF4B4 002AC3F4  99 43 00 0E */	stb r10, 0xe(r3)
/* 802AF4B8 002AC3F8  91 03 00 00 */	stw r8, 0(r3)
/* 802AF4BC 002AC3FC  90 E3 00 04 */	stw r7, 4(r3)
/* 802AF4C0 002AC400  90 C3 00 10 */	stw r6, 0x10(r3)
/* 802AF4C4 002AC404  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802AF4C8 002AC408  90 83 00 00 */	stw r4, 0(r3)
/* 802AF4CC 002AC40C  90 03 00 04 */	stw r0, 4(r3)
.L_802AF4D0:
/* 802AF4D0 002AC410  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 802AF4D4 002AC414  38 60 00 24 */	li r3, 0x24
/* 802AF4D8 002AC418  4B D7 49 CD */	bl __nw__FUl
/* 802AF4DC 002AC41C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802AF4E0 002AC420  41 82 00 1C */	beq .L_802AF4FC
/* 802AF4E4 002AC424  38 80 00 EB */	li r4, 0xeb
/* 802AF4E8 002AC428  38 A0 00 EC */	li r5, 0xec
/* 802AF4EC 002AC42C  48 10 0B 25 */	bl __ct__Q23efx9TForever2FUsUs
/* 802AF4F0 002AC430  3C 60 80 4D */	lis r3, __vt__Q23efx13TNewkurageSui@ha
/* 802AF4F4 002AC434  38 03 E2 58 */	addi r0, r3, __vt__Q23efx13TNewkurageSui@l
/* 802AF4F8 002AC438  90 1E 00 00 */	stw r0, 0(r30)
.L_802AF4FC:
/* 802AF4FC 002AC43C  93 DF 02 F4 */	stw r30, 0x2f4(r31)
/* 802AF500 002AC440  38 60 00 14 */	li r3, 0x14
/* 802AF504 002AC444  4B D7 49 A1 */	bl __nw__FUl
/* 802AF508 002AC448  28 03 00 00 */	cmplwi r3, 0
/* 802AF50C 002AC44C  41 82 00 78 */	beq .L_802AF584
/* 802AF510 002AC450  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802AF514 002AC454  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802AF518 002AC458  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802AF51C 002AC45C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802AF520 002AC460  90 03 00 00 */	stw r0, 0(r3)
/* 802AF524 002AC464  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802AF528 002AC468  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802AF52C 002AC46C  3C 80 80 4E */	lis r4, __vt__Q23efx10TChaseMtxT@ha
/* 802AF530 002AC470  90 03 00 04 */	stw r0, 4(r3)
/* 802AF534 002AC474  38 E4 68 5C */	addi r7, r4, __vt__Q23efx10TChaseMtxT@l
/* 802AF538 002AC478  3C 80 80 4D */	lis r4, __vt__Q23efx17TNewkurageDeadrun@ha
/* 802AF53C 002AC47C  38 05 00 14 */	addi r0, r5, 0x14
/* 802AF540 002AC480  90 A3 00 00 */	stw r5, 0(r3)
/* 802AF544 002AC484  38 84 E2 0C */	addi r4, r4, __vt__Q23efx17TNewkurageDeadrun@l
/* 802AF548 002AC488  39 20 00 00 */	li r9, 0
/* 802AF54C 002AC48C  39 00 02 B2 */	li r8, 0x2b2
/* 802AF550 002AC490  90 03 00 04 */	stw r0, 4(r3)
/* 802AF554 002AC494  38 C7 00 14 */	addi r6, r7, 0x14
/* 802AF558 002AC498  38 A0 00 E4 */	li r5, 0xe4
/* 802AF55C 002AC49C  38 04 00 14 */	addi r0, r4, 0x14
/* 802AF560 002AC4A0  91 23 00 08 */	stw r9, 8(r3)
/* 802AF564 002AC4A4  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802AF568 002AC4A8  99 23 00 0E */	stb r9, 0xe(r3)
/* 802AF56C 002AC4AC  90 E3 00 00 */	stw r7, 0(r3)
/* 802AF570 002AC4B0  90 C3 00 04 */	stw r6, 4(r3)
/* 802AF574 002AC4B4  91 23 00 10 */	stw r9, 0x10(r3)
/* 802AF578 002AC4B8  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802AF57C 002AC4BC  90 83 00 00 */	stw r4, 0(r3)
/* 802AF580 002AC4C0  90 03 00 04 */	stw r0, 4(r3)
.L_802AF584:
/* 802AF584 002AC4C4  90 7F 02 F8 */	stw r3, 0x2f8(r31)
/* 802AF588 002AC4C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AF58C 002AC4CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AF590 002AC4D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802AF594 002AC4D4  7C 08 03 A6 */	mtlr r0
/* 802AF598 002AC4D8  38 21 00 10 */	addi r1, r1, 0x10
/* 802AF59C 002AC4DC  4E 80 00 20 */	blr 

.global setupEffect__Q34Game6Kurage3ObjFv
setupEffect__Q34Game6Kurage3ObjFv:
/* 802AF5A0 002AC4E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AF5A4 002AC4E4  7C 08 02 A6 */	mflr r0
/* 802AF5A8 002AC4E8  38 82 DD AC */	addi r4, r2, lbl_8051C10C@sda21
/* 802AF5AC 002AC4EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AF5B0 002AC4F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AF5B4 002AC4F4  7C 7F 1B 78 */	mr r31, r3
/* 802AF5B8 002AC4F8  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802AF5BC 002AC4FC  48 18 FA 29 */	bl getJoint__Q28SysShape5ModelFPc
/* 802AF5C0 002AC500  48 17 A2 E1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802AF5C4 002AC504  80 BF 02 E4 */	lwz r5, 0x2e4(r31)
/* 802AF5C8 002AC508  38 82 DD B4 */	addi r4, r2, lbl_8051C114@sda21
/* 802AF5CC 002AC50C  90 65 00 10 */	stw r3, 0x10(r5)
/* 802AF5D0 002AC510  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802AF5D4 002AC514  48 18 FA 11 */	bl getJoint__Q28SysShape5ModelFPc
/* 802AF5D8 002AC518  48 17 A2 C9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802AF5DC 002AC51C  80 BF 02 E8 */	lwz r5, 0x2e8(r31)
/* 802AF5E0 002AC520  38 82 DD BC */	addi r4, r2, lbl_8051C11C@sda21
/* 802AF5E4 002AC524  90 65 00 10 */	stw r3, 0x10(r5)
/* 802AF5E8 002AC528  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802AF5EC 002AC52C  48 18 F9 F9 */	bl getJoint__Q28SysShape5ModelFPc
/* 802AF5F0 002AC530  48 17 A2 B1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802AF5F4 002AC534  7C 64 1B 78 */	mr r4, r3
/* 802AF5F8 002AC538  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 802AF5FC 002AC53C  48 10 10 51 */	bl setMtxptr__Q23efx10TChaseMtx3FPA4_f
/* 802AF600 002AC540  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802AF604 002AC544  38 82 DD C4 */	addi r4, r2, lbl_8051C124@sda21
/* 802AF608 002AC548  48 18 F9 DD */	bl getJoint__Q28SysShape5ModelFPc
/* 802AF60C 002AC54C  48 17 A2 95 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802AF610 002AC550  80 9F 02 F8 */	lwz r4, 0x2f8(r31)
/* 802AF614 002AC554  90 64 00 10 */	stw r3, 0x10(r4)
/* 802AF618 002AC558  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AF61C 002AC55C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AF620 002AC560  7C 08 03 A6 */	mtlr r0
/* 802AF624 002AC564  38 21 00 10 */	addi r1, r1, 0x10
/* 802AF628 002AC568  4E 80 00 20 */	blr 

.global startEyeHireBodyEffect__Q34Game6Kurage3ObjFv
startEyeHireBodyEffect__Q34Game6Kurage3ObjFv:
/* 802AF62C 002AC56C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AF630 002AC570  7C 08 02 A6 */	mflr r0
/* 802AF634 002AC574  38 80 00 00 */	li r4, 0
/* 802AF638 002AC578  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AF63C 002AC57C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AF640 002AC580  7C 7F 1B 78 */	mr r31, r3
/* 802AF644 002AC584  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802AF648 002AC588  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF64C 002AC58C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AF650 002AC590  7D 89 03 A6 */	mtctr r12
/* 802AF654 002AC594  4E 80 04 21 */	bctrl 
/* 802AF658 002AC598  80 7F 02 E8 */	lwz r3, 0x2e8(r31)
/* 802AF65C 002AC59C  38 80 00 00 */	li r4, 0
/* 802AF660 002AC5A0  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF664 002AC5A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AF668 002AC5A8  7D 89 03 A6 */	mtctr r12
/* 802AF66C 002AC5AC  4E 80 04 21 */	bctrl 
/* 802AF670 002AC5B0  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 802AF674 002AC5B4  38 80 00 00 */	li r4, 0
/* 802AF678 002AC5B8  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF67C 002AC5BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AF680 002AC5C0  7D 89 03 A6 */	mtctr r12
/* 802AF684 002AC5C4  4E 80 04 21 */	bctrl 
/* 802AF688 002AC5C8  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 802AF68C 002AC5CC  38 80 00 00 */	li r4, 0
/* 802AF690 002AC5D0  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF694 002AC5D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AF698 002AC5D8  7D 89 03 A6 */	mtctr r12
/* 802AF69C 002AC5DC  4E 80 04 21 */	bctrl 
/* 802AF6A0 002AC5E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AF6A4 002AC5E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AF6A8 002AC5E8  7C 08 03 A6 */	mtlr r0
/* 802AF6AC 002AC5EC  38 21 00 10 */	addi r1, r1, 0x10
/* 802AF6B0 002AC5F0  4E 80 00 20 */	blr 

.global finishEyeBodyEffect__Q34Game6Kurage3ObjFv
finishEyeBodyEffect__Q34Game6Kurage3ObjFv:
/* 802AF6B4 002AC5F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AF6B8 002AC5F8  7C 08 02 A6 */	mflr r0
/* 802AF6BC 002AC5FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AF6C0 002AC600  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AF6C4 002AC604  7C 7F 1B 78 */	mr r31, r3
/* 802AF6C8 002AC608  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802AF6CC 002AC60C  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF6D0 002AC610  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802AF6D4 002AC614  7D 89 03 A6 */	mtctr r12
/* 802AF6D8 002AC618  4E 80 04 21 */	bctrl 
/* 802AF6DC 002AC61C  80 7F 02 E8 */	lwz r3, 0x2e8(r31)
/* 802AF6E0 002AC620  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF6E4 002AC624  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802AF6E8 002AC628  7D 89 03 A6 */	mtctr r12
/* 802AF6EC 002AC62C  4E 80 04 21 */	bctrl 
/* 802AF6F0 002AC630  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 802AF6F4 002AC634  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF6F8 002AC638  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802AF6FC 002AC63C  7D 89 03 A6 */	mtctr r12
/* 802AF700 002AC640  4E 80 04 21 */	bctrl 
/* 802AF704 002AC644  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802AF708 002AC648  38 80 00 00 */	li r4, 0
/* 802AF70C 002AC64C  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF710 002AC650  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AF714 002AC654  7D 89 03 A6 */	mtctr r12
/* 802AF718 002AC658  4E 80 04 21 */	bctrl 
/* 802AF71C 002AC65C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AF720 002AC660  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AF724 002AC664  7C 08 03 A6 */	mtlr r0
/* 802AF728 002AC668  38 21 00 10 */	addi r1, r1, 0x10
/* 802AF72C 002AC66C  4E 80 00 20 */	blr 

.global setHireEffectLife__Q34Game6Kurage3ObjFs
setHireEffectLife__Q34Game6Kurage3ObjFs:
/* 802AF730 002AC670  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AF734 002AC674  7C 08 02 A6 */	mflr r0
/* 802AF738 002AC678  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AF73C 002AC67C  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 802AF740 002AC680  48 10 42 9D */	bl setLifeTime__Q23efx14TNewkurageHireFs
/* 802AF744 002AC684  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AF748 002AC688  7C 08 03 A6 */	mtlr r0
/* 802AF74C 002AC68C  38 21 00 10 */	addi r1, r1, 0x10
/* 802AF750 002AC690  4E 80 00 20 */	blr 

.global finishHireEffect__Q34Game6Kurage3ObjFv
finishHireEffect__Q34Game6Kurage3ObjFv:
/* 802AF754 002AC694  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AF758 002AC698  7C 08 02 A6 */	mflr r0
/* 802AF75C 002AC69C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AF760 002AC6A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AF764 002AC6A4  7C 7F 1B 78 */	mr r31, r3
/* 802AF768 002AC6A8  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 802AF76C 002AC6AC  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF770 002AC6B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802AF774 002AC6B4  7D 89 03 A6 */	mtctr r12
/* 802AF778 002AC6B8  4E 80 04 21 */	bctrl 
/* 802AF77C 002AC6BC  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802AF780 002AC6C0  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF784 002AC6C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802AF788 002AC6C8  7D 89 03 A6 */	mtctr r12
/* 802AF78C 002AC6CC  4E 80 04 21 */	bctrl 
/* 802AF790 002AC6D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AF794 002AC6D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AF798 002AC6D8  7C 08 03 A6 */	mtlr r0
/* 802AF79C 002AC6DC  38 21 00 10 */	addi r1, r1, 0x10
/* 802AF7A0 002AC6E0  4E 80 00 20 */	blr 

.global "startSuckEffect__Q34Game6Kurage3ObjFR10Vector3<f>"
"startSuckEffect__Q34Game6Kurage3ObjFR10Vector3<f>":
/* 802AF7A4 002AC6E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802AF7A8 002AC6E8  7C 08 02 A6 */	mflr r0
/* 802AF7AC 002AC6EC  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 802AF7B0 002AC6F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802AF7B4 002AC6F4  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 802AF7B8 002AC6F8  90 01 00 08 */	stw r0, 8(r1)
/* 802AF7BC 002AC6FC  C0 04 00 00 */	lfs f0, 0(r4)
/* 802AF7C0 002AC700  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802AF7C4 002AC704  C0 04 00 04 */	lfs f0, 4(r4)
/* 802AF7C8 002AC708  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802AF7CC 002AC70C  C0 04 00 08 */	lfs f0, 8(r4)
/* 802AF7D0 002AC710  38 81 00 08 */	addi r4, r1, 8
/* 802AF7D4 002AC714  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802AF7D8 002AC718  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802AF7DC 002AC71C  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF7E0 002AC720  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AF7E4 002AC724  7D 89 03 A6 */	mtctr r12
/* 802AF7E8 002AC728  4E 80 04 21 */	bctrl 
/* 802AF7EC 002AC72C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802AF7F0 002AC730  7C 08 03 A6 */	mtlr r0
/* 802AF7F4 002AC734  38 21 00 20 */	addi r1, r1, 0x20
/* 802AF7F8 002AC738  4E 80 00 20 */	blr 

.global "updateSuckEffect__Q34Game6Kurage3ObjFR10Vector3<f>"
"updateSuckEffect__Q34Game6Kurage3ObjFR10Vector3<f>":
/* 802AF7FC 002AC73C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AF800 002AC740  7C 08 02 A6 */	mflr r0
/* 802AF804 002AC744  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AF808 002AC748  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802AF80C 002AC74C  48 10 41 91 */	bl "setGlobalTranslation__Q23efx13TNewkurageSuiFR10Vector3<f>"
/* 802AF810 002AC750  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AF814 002AC754  7C 08 03 A6 */	mtlr r0
/* 802AF818 002AC758  38 21 00 10 */	addi r1, r1, 0x10
/* 802AF81C 002AC75C  4E 80 00 20 */	blr 

.global finishSuckEffect__Q34Game6Kurage3ObjFv
finishSuckEffect__Q34Game6Kurage3ObjFv:
/* 802AF820 002AC760  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AF824 002AC764  7C 08 02 A6 */	mflr r0
/* 802AF828 002AC768  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AF82C 002AC76C  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802AF830 002AC770  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF834 002AC774  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802AF838 002AC778  7D 89 03 A6 */	mtctr r12
/* 802AF83C 002AC77C  4E 80 04 21 */	bctrl 
/* 802AF840 002AC780  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AF844 002AC784  7C 08 03 A6 */	mtlr r0
/* 802AF848 002AC788  38 21 00 10 */	addi r1, r1, 0x10
/* 802AF84C 002AC78C  4E 80 00 20 */	blr 

.global createBodyBombEffect__Q34Game6Kurage3ObjFv
createBodyBombEffect__Q34Game6Kurage3ObjFv:
/* 802AF850 002AC790  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802AF854 002AC794  7C 08 02 A6 */	mflr r0
/* 802AF858 002AC798  38 82 DD C4 */	addi r4, r2, lbl_8051C124@sda21
/* 802AF85C 002AC79C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802AF860 002AC7A0  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802AF864 002AC7A4  48 18 F7 81 */	bl getJoint__Q28SysShape5ModelFPc
/* 802AF868 002AC7A8  48 17 A0 39 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802AF86C 002AC7AC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802AF870 002AC7B0  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802AF874 002AC7B4  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802AF878 002AC7B8  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802AF87C 002AC7BC  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802AF880 002AC7C0  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 802AF884 002AC7C4  38 A3 6A 64 */	addi r5, r3, __vt__Q23efx8TSimple2@l
/* 802AF888 002AC7C8  38 C0 00 00 */	li r6, 0
/* 802AF88C 002AC7CC  90 01 00 18 */	stw r0, 0x18(r1)
/* 802AF890 002AC7D0  3C 80 80 4D */	lis r4, __vt__Q23efx14TNewkurageBomb@ha
/* 802AF894 002AC7D4  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 802AF898 002AC7D8  39 00 00 E2 */	li r8, 0xe2
/* 802AF89C 002AC7DC  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 802AF8A0 002AC7E0  38 E0 00 E3 */	li r7, 0xe3
/* 802AF8A4 002AC7E4  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802AF8A8 002AC7E8  38 A4 E1 F8 */	addi r5, r4, __vt__Q23efx14TNewkurageBomb@l
/* 802AF8AC 002AC7EC  38 61 00 18 */	addi r3, r1, 0x18
/* 802AF8B0 002AC7F0  38 81 00 08 */	addi r4, r1, 8
/* 802AF8B4 002AC7F4  B1 01 00 1C */	sth r8, 0x1c(r1)
/* 802AF8B8 002AC7F8  B0 E1 00 1E */	sth r7, 0x1e(r1)
/* 802AF8BC 002AC7FC  90 C1 00 20 */	stw r6, 0x20(r1)
/* 802AF8C0 002AC800  90 C1 00 24 */	stw r6, 0x24(r1)
/* 802AF8C4 002AC804  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802AF8C8 002AC808  90 01 00 08 */	stw r0, 8(r1)
/* 802AF8CC 002AC80C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802AF8D0 002AC810  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 802AF8D4 002AC814  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802AF8D8 002AC818  48 0F F7 3D */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 802AF8DC 002AC81C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802AF8E0 002AC820  7C 08 03 A6 */	mtlr r0
/* 802AF8E4 002AC824  38 21 00 30 */	addi r1, r1, 0x30
/* 802AF8E8 002AC828  4E 80 00 20 */	blr 

.global createDownEffect__Q34Game6Kurage3ObjFv
createDownEffect__Q34Game6Kurage3ObjFv:
/* 802AF8EC 002AC82C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AF8F0 002AC830  7C 08 02 A6 */	mflr r0
/* 802AF8F4 002AC834  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AF8F8 002AC838  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AF8FC 002AC83C  7C 7F 1B 78 */	mr r31, r3
/* 802AF900 002AC840  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF904 002AC844  81 8C 02 EC */	lwz r12, 0x2ec(r12)
/* 802AF908 002AC848  7D 89 03 A6 */	mtctr r12
/* 802AF90C 002AC84C  4E 80 04 21 */	bctrl 
/* 802AF910 002AC850  7F E3 FB 78 */	mr r3, r31
/* 802AF914 002AC854  38 9F 01 8C */	addi r4, r31, 0x18c
/* 802AF918 002AC858  4B E5 42 39 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 802AF91C 002AC85C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AF920 002AC860  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AF924 002AC864  7C 08 03 A6 */	mtlr r0
/* 802AF928 002AC868  38 21 00 10 */	addi r1, r1, 0x10
/* 802AF92C 002AC86C  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q34Game6Kurage3ObjFv
getDownSmokeScale__Q34Game6Kurage3ObjFv:
/* 802AF930 002AC870  C0 22 DD CC */	lfs f1, lbl_8051C12C@sda21(r2)
/* 802AF934 002AC874  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game6Kurage3ObjFv
effectDrawOn__Q34Game6Kurage3ObjFv:
/* 802AF938 002AC878  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AF93C 002AC87C  7C 08 02 A6 */	mflr r0
/* 802AF940 002AC880  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AF944 002AC884  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AF948 002AC888  7C 7F 1B 78 */	mr r31, r3
/* 802AF94C 002AC88C  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802AF950 002AC890  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF954 002AC894  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802AF958 002AC898  7D 89 03 A6 */	mtctr r12
/* 802AF95C 002AC89C  4E 80 04 21 */	bctrl 
/* 802AF960 002AC8A0  80 7F 02 E8 */	lwz r3, 0x2e8(r31)
/* 802AF964 002AC8A4  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF968 002AC8A8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802AF96C 002AC8AC  7D 89 03 A6 */	mtctr r12
/* 802AF970 002AC8B0  4E 80 04 21 */	bctrl 
/* 802AF974 002AC8B4  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 802AF978 002AC8B8  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF97C 002AC8BC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802AF980 002AC8C0  7D 89 03 A6 */	mtctr r12
/* 802AF984 002AC8C4  4E 80 04 21 */	bctrl 
/* 802AF988 002AC8C8  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 802AF98C 002AC8CC  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF990 002AC8D0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802AF994 002AC8D4  7D 89 03 A6 */	mtctr r12
/* 802AF998 002AC8D8  4E 80 04 21 */	bctrl 
/* 802AF99C 002AC8DC  80 7F 02 F4 */	lwz r3, 0x2f4(r31)
/* 802AF9A0 002AC8E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF9A4 002AC8E4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802AF9A8 002AC8E8  7D 89 03 A6 */	mtctr r12
/* 802AF9AC 002AC8EC  4E 80 04 21 */	bctrl 
/* 802AF9B0 002AC8F0  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802AF9B4 002AC8F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF9B8 002AC8F8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802AF9BC 002AC8FC  7D 89 03 A6 */	mtctr r12
/* 802AF9C0 002AC900  4E 80 04 21 */	bctrl 
/* 802AF9C4 002AC904  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AF9C8 002AC908  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AF9CC 002AC90C  7C 08 03 A6 */	mtlr r0
/* 802AF9D0 002AC910  38 21 00 10 */	addi r1, r1, 0x10
/* 802AF9D4 002AC914  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game6Kurage3ObjFv
effectDrawOff__Q34Game6Kurage3ObjFv:
/* 802AF9D8 002AC918  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AF9DC 002AC91C  7C 08 02 A6 */	mflr r0
/* 802AF9E0 002AC920  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AF9E4 002AC924  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AF9E8 002AC928  7C 7F 1B 78 */	mr r31, r3
/* 802AF9EC 002AC92C  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802AF9F0 002AC930  81 83 00 00 */	lwz r12, 0(r3)
/* 802AF9F4 002AC934  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802AF9F8 002AC938  7D 89 03 A6 */	mtctr r12
/* 802AF9FC 002AC93C  4E 80 04 21 */	bctrl 
/* 802AFA00 002AC940  80 7F 02 E8 */	lwz r3, 0x2e8(r31)
/* 802AFA04 002AC944  81 83 00 00 */	lwz r12, 0(r3)
/* 802AFA08 002AC948  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802AFA0C 002AC94C  7D 89 03 A6 */	mtctr r12
/* 802AFA10 002AC950  4E 80 04 21 */	bctrl 
/* 802AFA14 002AC954  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 802AFA18 002AC958  81 83 00 00 */	lwz r12, 0(r3)
/* 802AFA1C 002AC95C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AFA20 002AC960  7D 89 03 A6 */	mtctr r12
/* 802AFA24 002AC964  4E 80 04 21 */	bctrl 
/* 802AFA28 002AC968  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 802AFA2C 002AC96C  81 83 00 00 */	lwz r12, 0(r3)
/* 802AFA30 002AC970  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802AFA34 002AC974  7D 89 03 A6 */	mtctr r12
/* 802AFA38 002AC978  4E 80 04 21 */	bctrl 
/* 802AFA3C 002AC97C  80 7F 02 F4 */	lwz r3, 0x2f4(r31)
/* 802AFA40 002AC980  81 83 00 00 */	lwz r12, 0(r3)
/* 802AFA44 002AC984  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802AFA48 002AC988  7D 89 03 A6 */	mtctr r12
/* 802AFA4C 002AC98C  4E 80 04 21 */	bctrl 
/* 802AFA50 002AC990  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802AFA54 002AC994  81 83 00 00 */	lwz r12, 0(r3)
/* 802AFA58 002AC998  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802AFA5C 002AC99C  7D 89 03 A6 */	mtctr r12
/* 802AFA60 002AC9A0  4E 80 04 21 */	bctrl 
/* 802AFA64 002AC9A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AFA68 002AC9A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AFA6C 002AC9AC  7C 08 03 A6 */	mtlr r0
/* 802AFA70 002AC9B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802AFA74 002AC9B4  4E 80 00 20 */	blr 

.global __dt__Q23efx17TNewkurageDeadrunFv
__dt__Q23efx17TNewkurageDeadrunFv:
/* 802AFA78 002AC9B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AFA7C 002AC9BC  7C 08 02 A6 */	mflr r0
/* 802AFA80 002AC9C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AFA84 002AC9C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AFA88 002AC9C8  7C 9F 23 78 */	mr r31, r4
/* 802AFA8C 002AC9CC  93 C1 00 08 */	stw r30, 8(r1)
/* 802AFA90 002AC9D0  7C 7E 1B 79 */	or. r30, r3, r3
/* 802AFA94 002AC9D4  41 82 00 64 */	beq .L_802AFAF8
/* 802AFA98 002AC9D8  3C 60 80 4D */	lis r3, __vt__Q23efx17TNewkurageDeadrun@ha
/* 802AFA9C 002AC9DC  38 63 E2 0C */	addi r3, r3, __vt__Q23efx17TNewkurageDeadrun@l
/* 802AFAA0 002AC9E0  90 7E 00 00 */	stw r3, 0(r30)
/* 802AFAA4 002AC9E4  38 03 00 14 */	addi r0, r3, 0x14
/* 802AFAA8 002AC9E8  90 1E 00 04 */	stw r0, 4(r30)
/* 802AFAAC 002AC9EC  41 82 00 3C */	beq .L_802AFAE8
/* 802AFAB0 002AC9F0  3C 60 80 4E */	lis r3, __vt__Q23efx10TChaseMtxT@ha
/* 802AFAB4 002AC9F4  38 63 68 5C */	addi r3, r3, __vt__Q23efx10TChaseMtxT@l
/* 802AFAB8 002AC9F8  90 7E 00 00 */	stw r3, 0(r30)
/* 802AFABC 002AC9FC  38 03 00 14 */	addi r0, r3, 0x14
/* 802AFAC0 002ACA00  90 1E 00 04 */	stw r0, 4(r30)
/* 802AFAC4 002ACA04  41 82 00 24 */	beq .L_802AFAE8
/* 802AFAC8 002ACA08  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802AFACC 002ACA0C  38 7E 00 04 */	addi r3, r30, 4
/* 802AFAD0 002ACA10  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802AFAD4 002ACA14  38 80 00 00 */	li r4, 0
/* 802AFAD8 002ACA18  90 BE 00 00 */	stw r5, 0(r30)
/* 802AFADC 002ACA1C  38 05 00 14 */	addi r0, r5, 0x14
/* 802AFAE0 002ACA20  90 1E 00 04 */	stw r0, 4(r30)
/* 802AFAE4 002ACA24  4B DE 01 B9 */	bl __dt__18JPAEmitterCallBackFv
.L_802AFAE8:
/* 802AFAE8 002ACA28  7F E0 07 35 */	extsh. r0, r31
/* 802AFAEC 002ACA2C  40 81 00 0C */	ble .L_802AFAF8
/* 802AFAF0 002ACA30  7F C3 F3 78 */	mr r3, r30
/* 802AFAF4 002ACA34  4B D7 45 C1 */	bl __dl__FPv
.L_802AFAF8:
/* 802AFAF8 002ACA38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AFAFC 002ACA3C  7F C3 F3 78 */	mr r3, r30
/* 802AFB00 002ACA40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AFB04 002ACA44  83 C1 00 08 */	lwz r30, 8(r1)
/* 802AFB08 002ACA48  7C 08 03 A6 */	mtlr r0
/* 802AFB0C 002ACA4C  38 21 00 10 */	addi r1, r1, 0x10
/* 802AFB10 002ACA50  4E 80 00 20 */	blr 

.global __dt__Q23efx14TNewkurageKiraFv
__dt__Q23efx14TNewkurageKiraFv:
/* 802AFB14 002ACA54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AFB18 002ACA58  7C 08 02 A6 */	mflr r0
/* 802AFB1C 002ACA5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AFB20 002ACA60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AFB24 002ACA64  7C 9F 23 78 */	mr r31, r4
/* 802AFB28 002ACA68  93 C1 00 08 */	stw r30, 8(r1)
/* 802AFB2C 002ACA6C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802AFB30 002ACA70  41 82 00 64 */	beq .L_802AFB94
/* 802AFB34 002ACA74  3C 60 80 4D */	lis r3, __vt__Q23efx14TNewkurageKira@ha
/* 802AFB38 002ACA78  38 63 E2 74 */	addi r3, r3, __vt__Q23efx14TNewkurageKira@l
/* 802AFB3C 002ACA7C  90 7E 00 00 */	stw r3, 0(r30)
/* 802AFB40 002ACA80  38 03 00 14 */	addi r0, r3, 0x14
/* 802AFB44 002ACA84  90 1E 00 04 */	stw r0, 4(r30)
/* 802AFB48 002ACA88  41 82 00 3C */	beq .L_802AFB84
/* 802AFB4C 002ACA8C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 802AFB50 002ACA90  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 802AFB54 002ACA94  90 7E 00 00 */	stw r3, 0(r30)
/* 802AFB58 002ACA98  38 03 00 14 */	addi r0, r3, 0x14
/* 802AFB5C 002ACA9C  90 1E 00 04 */	stw r0, 4(r30)
/* 802AFB60 002ACAA0  41 82 00 24 */	beq .L_802AFB84
/* 802AFB64 002ACAA4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802AFB68 002ACAA8  38 7E 00 04 */	addi r3, r30, 4
/* 802AFB6C 002ACAAC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802AFB70 002ACAB0  38 80 00 00 */	li r4, 0
/* 802AFB74 002ACAB4  90 BE 00 00 */	stw r5, 0(r30)
/* 802AFB78 002ACAB8  38 05 00 14 */	addi r0, r5, 0x14
/* 802AFB7C 002ACABC  90 1E 00 04 */	stw r0, 4(r30)
/* 802AFB80 002ACAC0  4B DE 01 1D */	bl __dt__18JPAEmitterCallBackFv
.L_802AFB84:
/* 802AFB84 002ACAC4  7F E0 07 35 */	extsh. r0, r31
/* 802AFB88 002ACAC8  40 81 00 0C */	ble .L_802AFB94
/* 802AFB8C 002ACACC  7F C3 F3 78 */	mr r3, r30
/* 802AFB90 002ACAD0  4B D7 45 25 */	bl __dl__FPv
.L_802AFB94:
/* 802AFB94 002ACAD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AFB98 002ACAD8  7F C3 F3 78 */	mr r3, r30
/* 802AFB9C 002ACADC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AFBA0 002ACAE0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802AFBA4 002ACAE4  7C 08 03 A6 */	mtlr r0
/* 802AFBA8 002ACAE8  38 21 00 10 */	addi r1, r1, 0x10
/* 802AFBAC 002ACAEC  4E 80 00 20 */	blr 

.global __dt__Q23efx13TNewkurageEyeFv
__dt__Q23efx13TNewkurageEyeFv:
/* 802AFBB0 002ACAF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AFBB4 002ACAF4  7C 08 02 A6 */	mflr r0
/* 802AFBB8 002ACAF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AFBBC 002ACAFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AFBC0 002ACB00  7C 9F 23 78 */	mr r31, r4
/* 802AFBC4 002ACB04  93 C1 00 08 */	stw r30, 8(r1)
/* 802AFBC8 002ACB08  7C 7E 1B 79 */	or. r30, r3, r3
/* 802AFBCC 002ACB0C  41 82 00 64 */	beq .L_802AFC30
/* 802AFBD0 002ACB10  3C 60 80 4D */	lis r3, __vt__Q23efx13TNewkurageEye@ha
/* 802AFBD4 002ACB14  38 63 E2 DC */	addi r3, r3, __vt__Q23efx13TNewkurageEye@l
/* 802AFBD8 002ACB18  90 7E 00 00 */	stw r3, 0(r30)
/* 802AFBDC 002ACB1C  38 03 00 14 */	addi r0, r3, 0x14
/* 802AFBE0 002ACB20  90 1E 00 04 */	stw r0, 4(r30)
/* 802AFBE4 002ACB24  41 82 00 3C */	beq .L_802AFC20
/* 802AFBE8 002ACB28  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802AFBEC 002ACB2C  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802AFBF0 002ACB30  90 7E 00 00 */	stw r3, 0(r30)
/* 802AFBF4 002ACB34  38 03 00 14 */	addi r0, r3, 0x14
/* 802AFBF8 002ACB38  90 1E 00 04 */	stw r0, 4(r30)
/* 802AFBFC 002ACB3C  41 82 00 24 */	beq .L_802AFC20
/* 802AFC00 002ACB40  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802AFC04 002ACB44  38 7E 00 04 */	addi r3, r30, 4
/* 802AFC08 002ACB48  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802AFC0C 002ACB4C  38 80 00 00 */	li r4, 0
/* 802AFC10 002ACB50  90 BE 00 00 */	stw r5, 0(r30)
/* 802AFC14 002ACB54  38 05 00 14 */	addi r0, r5, 0x14
/* 802AFC18 002ACB58  90 1E 00 04 */	stw r0, 4(r30)
/* 802AFC1C 002ACB5C  4B DE 00 81 */	bl __dt__18JPAEmitterCallBackFv
.L_802AFC20:
/* 802AFC20 002ACB60  7F E0 07 35 */	extsh. r0, r31
/* 802AFC24 002ACB64  40 81 00 0C */	ble .L_802AFC30
/* 802AFC28 002ACB68  7F C3 F3 78 */	mr r3, r30
/* 802AFC2C 002ACB6C  4B D7 44 89 */	bl __dl__FPv
.L_802AFC30:
/* 802AFC30 002ACB70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AFC34 002ACB74  7F C3 F3 78 */	mr r3, r30
/* 802AFC38 002ACB78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AFC3C 002ACB7C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802AFC40 002ACB80  7C 08 03 A6 */	mtlr r0
/* 802AFC44 002ACB84  38 21 00 10 */	addi r1, r1, 0x10
/* 802AFC48 002ACB88  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game6Kurage3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game6Kurage3ObjFPQ24Game8WaterBox:
/* 802AFC4C 002ACB8C  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game6Kurage3ObjFv
outWaterCallback__Q34Game6Kurage3ObjFv:
/* 802AFC50 002ACB90  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game6Kurage3ObjFv
getEnemyTypeID__Q34Game6Kurage3ObjFv:
/* 802AFC54 002ACB94  38 60 00 39 */	li r3, 0x39
/* 802AFC58 002ACB98  4E 80 00 20 */	blr 

.global "@4@__dt__Q23efx13TNewkurageEyeFv"
"@4@__dt__Q23efx13TNewkurageEyeFv":
/* 802AFC5C 002ACB9C  38 63 FF FC */	addi r3, r3, -4
/* 802AFC60 002ACBA0  4B FF FF 50 */	b __dt__Q23efx13TNewkurageEyeFv

.global "@4@__dt__Q23efx14TNewkurageKiraFv"
"@4@__dt__Q23efx14TNewkurageKiraFv":
/* 802AFC64 002ACBA4  38 63 FF FC */	addi r3, r3, -4
/* 802AFC68 002ACBA8  4B FF FE AC */	b __dt__Q23efx14TNewkurageKiraFv

.global "@4@__dt__Q23efx17TNewkurageDeadrunFv"
"@4@__dt__Q23efx17TNewkurageDeadrunFv":
/* 802AFC6C 002ACBAC  38 63 FF FC */	addi r3, r3, -4
/* 802AFC70 002ACBB0  4B FF FE 08 */	b __dt__Q23efx17TNewkurageDeadrunFv
