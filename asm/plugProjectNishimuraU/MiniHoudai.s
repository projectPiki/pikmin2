.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx12TChibiDeadSe, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx12TChibiDeadSe
.obj __vt__Q23efx15TChibiDeadMouth, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx15TChibiDeadMouth
.obj __vt__Q23efx11TChibiShoot, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx3FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.endobj __vt__Q23efx11TChibiShoot
.obj __vt__Q23efx12TChibiSmokeL, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx12TChibiSmokeL
.obj __vt__Q23efx12TChibiSmokeS, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx12TChibiSmokeS
.obj __vt__Q23efx15TChibiDeadLight, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx15TChibiDeadLightFv"
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
	.4byte __dt__Q23efx15TChibiDeadLightFv
.endobj __vt__Q23efx15TChibiDeadLight
.obj __vt__Q23efx12TChibiCharge, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx12TChibiChargeFv"
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
	.4byte __dt__Q23efx12TChibiChargeFv
.endobj __vt__Q23efx12TChibiCharge
.obj __vt__Q34Game10MiniHoudai3Obj, global
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
	.4byte onInit__Q34Game10MiniHoudai3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game10MiniHoudai3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game10MiniHoudai3ObjFR8Graphics
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
	.4byte getShadowParam__Q34Game10MiniHoudai3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game10MiniHoudai3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game10MiniHoudai3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game10MiniHoudai3ObjFv
	.4byte doUpdateCommon__Q34Game10MiniHoudai3ObjFv
	.4byte doUpdateCarcass__Q34Game10MiniHoudai3ObjFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game10MiniHoudai3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game10MiniHoudai3ObjFR8Graphics
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
	.4byte initWalkSmokeEffect__Q34Game10MiniHoudai3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game10MiniHoudai3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game10MiniHoudai3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q34Game10MiniHoudai3ObjFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game10MiniHoudai3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte doStartStoneState__Q34Game10MiniHoudai3ObjFv
	.4byte doFinishStoneState__Q34Game10MiniHoudai3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q34Game10MiniHoudai3ObjFv
	.4byte doFinishEarthquakeFitState__Q34Game10MiniHoudai3ObjFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game10MiniHoudai3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q34Game10MiniHoudai3ObjFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q34Game10MiniHoudai3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game10MiniHoudai3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game10MiniHoudai3ObjFv
	.4byte doStartMovie__Q34Game10MiniHoudai3ObjFv
	.4byte doEndMovie__Q34Game10MiniHoudai3ObjFv
	.4byte setFSM__Q34Game10MiniHoudai3ObjFPQ34Game10MiniHoudai3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@776@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@776@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@776@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@776@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@776@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@776@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game10MiniHoudai3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051CF88, local
	.float 128.0
.endobj lbl_8051CF88
.obj lbl_8051CF8C, local
	.float 0.0
.endobj lbl_8051CF8C
.balign 4
.obj lbl_8051CF90, local
	.asciz "kosi"
.endobj lbl_8051CF90
.balign 4
.obj lbl_8051CF98, local
	.float 17.5
.endobj lbl_8051CF98
.obj lbl_8051CF9C, local
	.float 5.0
.endobj lbl_8051CF9C
.obj lbl_8051CFA0, local
	.float 1.0
.endobj lbl_8051CFA0
.obj lbl_8051CFA4, local
	.float 100.0
.endobj lbl_8051CFA4
.obj lbl_8051CFA8, local
	.float 75.0
.endobj lbl_8051CFA8
.obj lbl_8051CFAC, local
	.float 50.0
.endobj lbl_8051CFAC
.obj lbl_8051CFB0, local
	.float 30.0
.endobj lbl_8051CFB0
.obj lbl_8051CFB4, local
	.float 0.25
.endobj lbl_8051CFB4
.balign 4
.obj lbl_8051CFB8, local
	.asciz "handL"
.endobj lbl_8051CFB8
.balign 4
.obj lbl_8051CFC0, local
	.asciz "handR"
.endobj lbl_8051CFC0
.balign 4
.obj lbl_8051CFC8, local
	.float 10.0
.endobj lbl_8051CFC8
.obj lbl_8051CFCC, local
	.float 180.0
.endobj lbl_8051CFCC
.obj lbl_8051CFD0, local
	.float 32768.0
.endobj lbl_8051CFD0
.balign 8
.obj lbl_8051CFD8, local
	.8byte 0x4330000080000000
.endobj lbl_8051CFD8
.obj lbl_8051CFE0, local
	.float 325.9493
.endobj lbl_8051CFE0
.obj lbl_8051CFE4, local
	.float -325.9493
.endobj lbl_8051CFE4
.obj lbl_8051CFE8, local
	.float 0.5
.endobj lbl_8051CFE8
.obj lbl_8051CFEC, local
	.float 0.75
.endobj lbl_8051CFEC
.obj lbl_8051CFF0, local
	.float 200.0
.endobj lbl_8051CFF0
.obj lbl_8051CFF4, local
	.float 25.0
.endobj lbl_8051CFF4
.balign 4
.obj lbl_8051CFF8, local
	.asciz "kuti"
.endobj lbl_8051CFF8
.balign 4
.obj lbl_8051D000, local
	.asciz "head"
.endobj lbl_8051D000
.balign 4
.obj lbl_8051D008, local
	.asciz "sebire1"
.endobj lbl_8051D008
.balign 4
.obj lbl_8051D010, local
	.asciz "sebire2"
.endobj lbl_8051D010
.balign 4
.obj lbl_8051D018, local
	.float 0.9
.endobj lbl_8051D018

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game10MiniHoudai3ObjFv, global
/* 802EBFF8 002E8F38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EBFFC 002E8F3C  7C 08 02 A6 */	mflr r0
/* 802EC000 002E8F40  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC004 002E8F44  7C 80 07 35 */	extsh. r0, r4
/* 802EC008 002E8F48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EC00C 002E8F4C  7C 7F 1B 78 */	mr r31, r3
/* 802EC010 002E8F50  93 C1 00 08 */	stw r30, 8(r1)
/* 802EC014 002E8F54  41 82 00 24 */	beq .L_802EC038
/* 802EC018 002E8F58  38 1F 03 08 */	addi r0, r31, 0x308
/* 802EC01C 002E8F5C  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802EC020 002E8F60  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802EC024 002E8F64  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802EC028 002E8F68  38 00 00 00 */	li r0, 0
/* 802EC02C 002E8F6C  90 7F 03 08 */	stw r3, 0x308(r31)
/* 802EC030 002E8F70  90 1F 03 0C */	stw r0, 0x30c(r31)
/* 802EC034 002E8F74  90 1F 03 10 */	stw r0, 0x310(r31)
.L_802EC038:
/* 802EC038 002E8F78  7F E3 FB 78 */	mr r3, r31
/* 802EC03C 002E8F7C  38 80 00 00 */	li r4, 0
/* 802EC040 002E8F80  4B E1 53 61 */	bl __ct__Q24Game9EnemyBaseFv
/* 802EC044 002E8F84  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai3Obj@ha
/* 802EC048 002E8F88  38 1F 03 08 */	addi r0, r31, 0x308
/* 802EC04C 002E8F8C  38 A3 49 2C */	addi r5, r3, __vt__Q34Game10MiniHoudai3Obj@l
/* 802EC050 002E8F90  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802EC054 002E8F94  90 BF 00 00 */	stw r5, 0(r31)
/* 802EC058 002E8F98  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802EC05C 002E8F9C  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 802EC060 002E8FA0  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802EC064 002E8FA4  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802EC068 002E8FA8  90 A4 00 00 */	stw r5, 0(r4)
/* 802EC06C 002E8FAC  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802EC070 002E8FB0  7C 04 00 50 */	subf r0, r4, r0
/* 802EC074 002E8FB4  90 04 00 0C */	stw r0, 0xc(r4)
/* 802EC078 002E8FB8  4B E3 E2 DD */	bl __ct__Q34Game15WalkSmokeEffect3MgrFv
/* 802EC07C 002E8FBC  38 60 00 2C */	li r3, 0x2c
/* 802EC080 002E8FC0  4B D3 7E 25 */	bl __nw__FUl
/* 802EC084 002E8FC4  7C 7E 1B 79 */	or. r30, r3, r3
/* 802EC088 002E8FC8  41 82 00 44 */	beq .L_802EC0CC
/* 802EC08C 002E8FCC  4B E3 B8 E9 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802EC090 002E8FD0  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai14ProperAnimator@ha
/* 802EC094 002E8FD4  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802EC098 002E8FD8  38 03 47 28 */	addi r0, r3, __vt__Q34Game10MiniHoudai14ProperAnimator@l
/* 802EC09C 002E8FDC  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802EC0A0 002E8FE0  90 1E 00 00 */	stw r0, 0(r30)
/* 802EC0A4 002E8FE4  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802EC0A8 002E8FE8  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802EC0AC 002E8FEC  38 00 00 00 */	li r0, 0
/* 802EC0B0 002E8FF0  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802EC0B4 002E8FF4  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802EC0B8 002E8FF8  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802EC0BC 002E8FFC  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802EC0C0 002E9000  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802EC0C4 002E9004  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802EC0C8 002E9008  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802EC0CC:
/* 802EC0CC 002E900C  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802EC0D0 002E9010  38 60 00 1C */	li r3, 0x1c
/* 802EC0D4 002E9014  4B D3 7D D1 */	bl __nw__FUl
/* 802EC0D8 002E9018  7C 64 1B 79 */	or. r4, r3, r3
/* 802EC0DC 002E901C  41 82 00 24 */	beq .L_802EC100
/* 802EC0E0 002E9020  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802EC0E4 002E9024  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai3FSM@ha
/* 802EC0E8 002E9028  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802EC0EC 002E902C  38 A0 FF FF */	li r5, -1
/* 802EC0F0 002E9030  90 04 00 00 */	stw r0, 0(r4)
/* 802EC0F4 002E9034  38 03 47 04 */	addi r0, r3, __vt__Q34Game10MiniHoudai3FSM@l
/* 802EC0F8 002E9038  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802EC0FC 002E903C  90 04 00 00 */	stw r0, 0(r4)
.L_802EC100:
/* 802EC100 002E9040  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EC104 002E9044  7F E3 FB 78 */	mr r3, r31
/* 802EC108 002E9048  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802EC10C 002E904C  7D 89 03 A6 */	mtctr r12
/* 802EC110 002E9050  4E 80 04 21 */	bctrl 
/* 802EC114 002E9054  7F E3 FB 78 */	mr r3, r31
/* 802EC118 002E9058  48 00 11 01 */	bl createShotGun__Q34Game10MiniHoudai3ObjFv
/* 802EC11C 002E905C  7F E3 FB 78 */	mr r3, r31
/* 802EC120 002E9060  48 00 13 1D */	bl createEffect__Q34Game10MiniHoudai3ObjFv
/* 802EC124 002E9064  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC128 002E9068  7F E3 FB 78 */	mr r3, r31
/* 802EC12C 002E906C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EC130 002E9070  83 C1 00 08 */	lwz r30, 8(r1)
/* 802EC134 002E9074  7C 08 03 A6 */	mtlr r0
/* 802EC138 002E9078  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC13C 002E907C  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10MiniHoudai3ObjFv

.fn setInitialSetting__Q34Game10MiniHoudai3ObjFPQ24Game21EnemyInitialParamBase, global
/* 802EC140 002E9080  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game10MiniHoudai3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game10MiniHoudai3ObjFPQ24Game15CreatureInitArg, global
/* 802EC144 002E9084  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC148 002E9088  7C 08 02 A6 */	mflr r0
/* 802EC14C 002E908C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC150 002E9090  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EC154 002E9094  7C 7F 1B 78 */	mr r31, r3
/* 802EC158 002E9098  4B E1 59 01 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802EC15C 002E909C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802EC160 002E90A0  7F E3 FB 78 */	mr r3, r31
/* 802EC164 002E90A4  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 802EC168 002E90A8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802EC16C 002E90AC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802EC170 002E90B0  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802EC174 002E90B4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802EC178 002E90B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EC17C 002E90BC  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802EC180 002E90C0  7D 89 03 A6 */	mtctr r12
/* 802EC184 002E90C4  4E 80 04 21 */	bctrl 
/* 802EC188 002E90C8  2C 03 00 61 */	cmpwi r3, 0x61
/* 802EC18C 002E90CC  40 82 00 10 */	bne .L_802EC19C
/* 802EC190 002E90D0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802EC194 002E90D4  60 00 04 00 */	ori r0, r0, 0x400
/* 802EC198 002E90D8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_802EC19C:
/* 802EC19C 002E90DC  C0 22 EC 28 */	lfs f1, lbl_8051CF88@sda21(r2)
/* 802EC1A0 002E90E0  38 00 FF FF */	li r0, -1
/* 802EC1A4 002E90E4  C0 02 EC 2C */	lfs f0, lbl_8051CF8C@sda21(r2)
/* 802EC1A8 002E90E8  7F E3 FB 78 */	mr r3, r31
/* 802EC1AC 002E90EC  D0 3F 02 C8 */	stfs f1, 0x2c8(r31)
/* 802EC1B0 002E90F0  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802EC1B4 002E90F4  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802EC1B8 002E90F8  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EC1BC 002E90FC  48 00 07 C1 */	bl resetWayPoint__Q34Game10MiniHoudai3ObjFv
/* 802EC1C0 002E9100  7F E3 FB 78 */	mr r3, r31
/* 802EC1C4 002E9104  48 00 07 C9 */	bl setNearestWayPoint__Q34Game10MiniHoudai3ObjFv
/* 802EC1C8 002E9108  7F E3 FB 78 */	mr r3, r31
/* 802EC1CC 002E910C  48 00 10 95 */	bl setupShotGun__Q34Game10MiniHoudai3ObjFv
/* 802EC1D0 002E9110  7F E3 FB 78 */	mr r3, r31
/* 802EC1D4 002E9114  48 00 13 A1 */	bl setupEffect__Q34Game10MiniHoudai3ObjFv
/* 802EC1D8 002E9118  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802EC1DC 002E911C  7F E4 FB 78 */	mr r4, r31
/* 802EC1E0 002E9120  38 A0 00 07 */	li r5, 7
/* 802EC1E4 002E9124  38 C0 00 00 */	li r6, 0
/* 802EC1E8 002E9128  81 83 00 00 */	lwz r12, 0(r3)
/* 802EC1EC 002E912C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802EC1F0 002E9130  7D 89 03 A6 */	mtctr r12
/* 802EC1F4 002E9134  4E 80 04 21 */	bctrl 
/* 802EC1F8 002E9138  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC1FC 002E913C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EC200 002E9140  7C 08 03 A6 */	mtlr r0
/* 802EC204 002E9144  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC208 002E9148  4E 80 00 20 */	blr 
.endfn onInit__Q34Game10MiniHoudai3ObjFPQ24Game15CreatureInitArg

.fn onKill__Q34Game10MiniHoudai3ObjFPQ24Game15CreatureKillArg, global
/* 802EC20C 002E914C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC210 002E9150  7C 08 02 A6 */	mflr r0
/* 802EC214 002E9154  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC218 002E9158  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EC21C 002E915C  7C 9F 23 78 */	mr r31, r4
/* 802EC220 002E9160  93 C1 00 08 */	stw r30, 8(r1)
/* 802EC224 002E9164  7C 7E 1B 78 */	mr r30, r3
/* 802EC228 002E9168  48 00 15 85 */	bl finishChargeEffect__Q34Game10MiniHoudai3ObjFv
/* 802EC22C 002E916C  7F C3 F3 78 */	mr r3, r30
/* 802EC230 002E9170  48 00 11 E9 */	bl forceFinishShotGun__Q34Game10MiniHoudai3ObjFv
/* 802EC234 002E9174  7F C3 F3 78 */	mr r3, r30
/* 802EC238 002E9178  7F E4 FB 78 */	mr r4, r31
/* 802EC23C 002E917C  4B E1 5C AD */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 802EC240 002E9180  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC244 002E9184  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EC248 002E9188  83 C1 00 08 */	lwz r30, 8(r1)
/* 802EC24C 002E918C  7C 08 03 A6 */	mtlr r0
/* 802EC250 002E9190  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC254 002E9194  4E 80 00 20 */	blr 
.endfn onKill__Q34Game10MiniHoudai3ObjFPQ24Game15CreatureKillArg

.fn doUpdate__Q34Game10MiniHoudai3ObjFv, global
/* 802EC258 002E9198  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC25C 002E919C  7C 08 02 A6 */	mflr r0
/* 802EC260 002E91A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC264 002E91A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EC268 002E91A8  7C 7F 1B 78 */	mr r31, r3
/* 802EC26C 002E91AC  48 00 06 9D */	bl updateCaution__Q34Game10MiniHoudai3ObjFv
/* 802EC270 002E91B0  7F E3 FB 78 */	mr r3, r31
/* 802EC274 002E91B4  48 00 0A 95 */	bl updateTargetDistance__Q34Game10MiniHoudai3ObjFv
/* 802EC278 002E91B8  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802EC27C 002E91BC  7F E4 FB 78 */	mr r4, r31
/* 802EC280 002E91C0  81 83 00 00 */	lwz r12, 0(r3)
/* 802EC284 002E91C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802EC288 002E91C8  7D 89 03 A6 */	mtctr r12
/* 802EC28C 002E91CC  4E 80 04 21 */	bctrl 
/* 802EC290 002E91D0  7F E3 FB 78 */	mr r3, r31
/* 802EC294 002E91D4  48 00 10 39 */	bl doUpdateShotGun__Q34Game10MiniHoudai3ObjFv
/* 802EC298 002E91D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC29C 002E91DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EC2A0 002E91E0  7C 08 03 A6 */	mtlr r0
/* 802EC2A4 002E91E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC2A8 002E91E8  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game10MiniHoudai3ObjFv

.fn doUpdateCommon__Q34Game10MiniHoudai3ObjFv, global
/* 802EC2AC 002E91EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC2B0 002E91F0  7C 08 02 A6 */	mflr r0
/* 802EC2B4 002E91F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC2B8 002E91F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EC2BC 002E91FC  7C 7F 1B 78 */	mr r31, r3
/* 802EC2C0 002E9200  4B E1 6C 55 */	bl doUpdateCommon__Q24Game9EnemyBaseFv
/* 802EC2C4 002E9204  7F E3 FB 78 */	mr r3, r31
/* 802EC2C8 002E9208  48 00 10 29 */	bl doUpdateCommonShotGun__Q34Game10MiniHoudai3ObjFv
/* 802EC2CC 002E920C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC2D0 002E9210  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EC2D4 002E9214  7C 08 03 A6 */	mtlr r0
/* 802EC2D8 002E9218  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC2DC 002E921C  4E 80 00 20 */	blr 
.endfn doUpdateCommon__Q34Game10MiniHoudai3ObjFv

.fn doAnimationCullingOff__Q34Game10MiniHoudai3ObjFv, global
/* 802EC2E0 002E9220  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC2E4 002E9224  7C 08 02 A6 */	mflr r0
/* 802EC2E8 002E9228  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC2EC 002E922C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EC2F0 002E9230  7C 7F 1B 78 */	mr r31, r3
/* 802EC2F4 002E9234  48 00 0F B5 */	bl setShotGunCallBack__Q34Game10MiniHoudai3ObjFv
/* 802EC2F8 002E9238  7F E3 FB 78 */	mr r3, r31
/* 802EC2FC 002E923C  4B E1 6D 85 */	bl doAnimationCullingOff__Q24Game9EnemyBaseFv
/* 802EC300 002E9240  7F E3 FB 78 */	mr r3, r31
/* 802EC304 002E9244  48 00 0F 81 */	bl resetShotGunCallBack__Q34Game10MiniHoudai3ObjFv
/* 802EC308 002E9248  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC30C 002E924C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EC310 002E9250  7C 08 03 A6 */	mtlr r0
/* 802EC314 002E9254  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC318 002E9258  4E 80 00 20 */	blr 
.endfn doAnimationCullingOff__Q34Game10MiniHoudai3ObjFv

.fn doDirectDraw__Q34Game10MiniHoudai3ObjFR8Graphics, global
/* 802EC31C 002E925C  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game10MiniHoudai3ObjFR8Graphics

.fn doDebugDraw__Q34Game10MiniHoudai3ObjFR8Graphics, global
/* 802EC320 002E9260  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC324 002E9264  7C 08 02 A6 */	mflr r0
/* 802EC328 002E9268  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC32C 002E926C  4B E1 9B 41 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802EC330 002E9270  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC334 002E9274  7C 08 03 A6 */	mtlr r0
/* 802EC338 002E9278  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC33C 002E927C  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game10MiniHoudai3ObjFR8Graphics

.fn setFSM__Q34Game10MiniHoudai3ObjFPQ34Game10MiniHoudai3FSM, global
/* 802EC340 002E9280  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC344 002E9284  7C 08 02 A6 */	mflr r0
/* 802EC348 002E9288  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC34C 002E928C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EC350 002E9290  7C 7F 1B 78 */	mr r31, r3
/* 802EC354 002E9294  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802EC358 002E9298  7F E4 FB 78 */	mr r4, r31
/* 802EC35C 002E929C  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802EC360 002E92A0  81 83 00 00 */	lwz r12, 0(r3)
/* 802EC364 002E92A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EC368 002E92A8  7D 89 03 A6 */	mtctr r12
/* 802EC36C 002E92AC  4E 80 04 21 */	bctrl 
/* 802EC370 002E92B0  38 00 00 00 */	li r0, 0
/* 802EC374 002E92B4  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802EC378 002E92B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC37C 002E92BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EC380 002E92C0  7C 08 03 A6 */	mtlr r0
/* 802EC384 002E92C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC388 002E92C8  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game10MiniHoudai3ObjFPQ34Game10MiniHoudai3FSM

.fn getShadowParam__Q34Game10MiniHoudai3ObjFRQ24Game11ShadowParam, global
/* 802EC38C 002E92CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC390 002E92D0  7C 08 02 A6 */	mflr r0
/* 802EC394 002E92D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC398 002E92D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EC39C 002E92DC  7C 9F 23 78 */	mr r31, r4
/* 802EC3A0 002E92E0  38 82 EC 30 */	addi r4, r2, lbl_8051CF90@sda21
/* 802EC3A4 002E92E4  93 C1 00 08 */	stw r30, 8(r1)
/* 802EC3A8 002E92E8  7C 7E 1B 78 */	mr r30, r3
/* 802EC3AC 002E92EC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802EC3B0 002E92F0  48 15 2C 35 */	bl getJoint__Q28SysShape5ModelFPc
/* 802EC3B4 002E92F4  48 13 D4 ED */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802EC3B8 002E92F8  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 802EC3BC 002E92FC  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 802EC3C0 002E9300  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 802EC3C4 002E9304  C0 02 EC 38 */	lfs f0, lbl_8051CF98@sda21(r2)
/* 802EC3C8 002E9308  D0 3F 00 00 */	stfs f1, 0(r31)
/* 802EC3CC 002E930C  C0 42 EC 3C */	lfs f2, lbl_8051CF9C@sda21(r2)
/* 802EC3D0 002E9310  D0 7F 00 04 */	stfs f3, 4(r31)
/* 802EC3D4 002E9314  D0 9F 00 08 */	stfs f4, 8(r31)
/* 802EC3D8 002E9318  C0 3F 00 04 */	lfs f1, 4(r31)
/* 802EC3DC 002E931C  EC 01 00 28 */	fsubs f0, f1, f0
/* 802EC3E0 002E9320  D0 1F 00 04 */	stfs f0, 4(r31)
/* 802EC3E4 002E9324  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 802EC3E8 002E9328  C0 1F 00 04 */	lfs f0, 4(r31)
/* 802EC3EC 002E932C  EC 22 08 2A */	fadds f1, f2, f1
/* 802EC3F0 002E9330  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802EC3F4 002E9334  40 80 00 08 */	bge .L_802EC3FC
/* 802EC3F8 002E9338  D0 3F 00 04 */	stfs f1, 4(r31)
.L_802EC3FC:
/* 802EC3FC 002E933C  C0 22 EC 2C */	lfs f1, lbl_8051CF8C@sda21(r2)
/* 802EC400 002E9340  7F C3 F3 78 */	mr r3, r30
/* 802EC404 002E9344  C0 02 EC 40 */	lfs f0, lbl_8051CFA0@sda21(r2)
/* 802EC408 002E9348  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802EC40C 002E934C  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802EC410 002E9350  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802EC414 002E9354  4B E1 AF E1 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802EC418 002E9358  2C 03 00 01 */	cmpwi r3, 1
/* 802EC41C 002E935C  41 81 00 10 */	bgt .L_802EC42C
/* 802EC420 002E9360  C0 02 EC 44 */	lfs f0, lbl_8051CFA4@sda21(r2)
/* 802EC424 002E9364  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802EC428 002E9368  48 00 00 24 */	b .L_802EC44C
.L_802EC42C:
/* 802EC42C 002E936C  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 802EC430 002E9370  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802EC434 002E9374  41 82 00 10 */	beq .L_802EC444
/* 802EC438 002E9378  C0 02 EC 48 */	lfs f0, lbl_8051CFA8@sda21(r2)
/* 802EC43C 002E937C  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802EC440 002E9380  48 00 00 0C */	b .L_802EC44C
.L_802EC444:
/* 802EC444 002E9384  C0 02 EC 4C */	lfs f0, lbl_8051CFAC@sda21(r2)
/* 802EC448 002E9388  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802EC44C:
/* 802EC44C 002E938C  C0 02 EC 50 */	lfs f0, lbl_8051CFB0@sda21(r2)
/* 802EC450 002E9390  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802EC454 002E9394  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC458 002E9398  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EC45C 002E939C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802EC460 002E93A0  7C 08 03 A6 */	mtlr r0
/* 802EC464 002E93A4  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC468 002E93A8  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game10MiniHoudai3ObjFRQ24Game11ShadowParam

.fn damageCallBack__Q34Game10MiniHoudai3ObjFPQ24Game8CreaturefP8CollPart, global
/* 802EC46C 002E93AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC470 002E93B0  7C 08 02 A6 */	mflr r0
/* 802EC474 002E93B4  28 05 00 00 */	cmplwi r5, 0
/* 802EC478 002E93B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC47C 002E93BC  41 82 00 10 */	beq .L_802EC48C
/* 802EC480 002E93C0  C0 42 EC 40 */	lfs f2, lbl_8051CFA0@sda21(r2)
/* 802EC484 002E93C4  4B E1 9B A9 */	bl addDamage__Q24Game9EnemyBaseFff
/* 802EC488 002E93C8  48 00 00 14 */	b .L_802EC49C
.L_802EC48C:
/* 802EC48C 002E93CC  C0 02 EC 54 */	lfs f0, lbl_8051CFB4@sda21(r2)
/* 802EC490 002E93D0  C0 42 EC 40 */	lfs f2, lbl_8051CFA0@sda21(r2)
/* 802EC494 002E93D4  EC 21 00 32 */	fmuls f1, f1, f0
/* 802EC498 002E93D8  4B E1 9B 95 */	bl addDamage__Q24Game9EnemyBaseFff
.L_802EC49C:
/* 802EC49C 002E93DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC4A0 002E93E0  38 60 00 01 */	li r3, 1
/* 802EC4A4 002E93E4  7C 08 03 A6 */	mtlr r0
/* 802EC4A8 002E93E8  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC4AC 002E93EC  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game10MiniHoudai3ObjFPQ24Game8CreaturefP8CollPart

.fn doStartStoneState__Q34Game10MiniHoudai3ObjFv, global
/* 802EC4B0 002E93F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC4B4 002E93F4  7C 08 02 A6 */	mflr r0
/* 802EC4B8 002E93F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC4BC 002E93FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EC4C0 002E9400  7C 7F 1B 78 */	mr r31, r3
/* 802EC4C4 002E9404  4B E1 6A 31 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802EC4C8 002E9408  7F E3 FB 78 */	mr r3, r31
/* 802EC4CC 002E940C  48 00 12 E1 */	bl finishChargeEffect__Q34Game10MiniHoudai3ObjFv
/* 802EC4D0 002E9410  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC4D4 002E9414  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EC4D8 002E9418  7C 08 03 A6 */	mtlr r0
/* 802EC4DC 002E941C  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC4E0 002E9420  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game10MiniHoudai3ObjFv

.fn doFinishStoneState__Q34Game10MiniHoudai3ObjFv, global
/* 802EC4E4 002E9424  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC4E8 002E9428  7C 08 02 A6 */	mflr r0
/* 802EC4EC 002E942C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC4F0 002E9430  4B E1 6A 19 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802EC4F4 002E9434  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC4F8 002E9438  7C 08 03 A6 */	mtlr r0
/* 802EC4FC 002E943C  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC500 002E9440  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game10MiniHoudai3ObjFv

.fn doStartEarthquakeFitState__Q34Game10MiniHoudai3ObjFv, global
/* 802EC504 002E9444  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC508 002E9448  7C 08 02 A6 */	mflr r0
/* 802EC50C 002E944C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC510 002E9450  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EC514 002E9454  7C 7F 1B 78 */	mr r31, r3
/* 802EC518 002E9458  4B E1 B4 4D */	bl doStartEarthquakeFitState__Q24Game9EnemyBaseFv
/* 802EC51C 002E945C  7F E3 FB 78 */	mr r3, r31
/* 802EC520 002E9460  48 00 12 8D */	bl finishChargeEffect__Q34Game10MiniHoudai3ObjFv
/* 802EC524 002E9464  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC528 002E9468  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EC52C 002E946C  7C 08 03 A6 */	mtlr r0
/* 802EC530 002E9470  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC534 002E9474  4E 80 00 20 */	blr 
.endfn doStartEarthquakeFitState__Q34Game10MiniHoudai3ObjFv

.fn doFinishEarthquakeFitState__Q34Game10MiniHoudai3ObjFv, global
/* 802EC538 002E9478  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC53C 002E947C  7C 08 02 A6 */	mflr r0
/* 802EC540 002E9480  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC544 002E9484  4B E1 B4 25 */	bl doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
/* 802EC548 002E9488  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC54C 002E948C  7C 08 03 A6 */	mtlr r0
/* 802EC550 002E9490  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC554 002E9494  4E 80 00 20 */	blr 
.endfn doFinishEarthquakeFitState__Q34Game10MiniHoudai3ObjFv

.fn doStartWaitingBirthTypeDrop__Q34Game10MiniHoudai3ObjFv, global
/* 802EC558 002E9498  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC55C 002E949C  7C 08 02 A6 */	mflr r0
/* 802EC560 002E94A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC564 002E94A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EC568 002E94A8  7C 7F 1B 78 */	mr r31, r3
/* 802EC56C 002E94AC  4B E1 B4 2D */	bl doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 802EC570 002E94B0  7F E3 FB 78 */	mr r3, r31
/* 802EC574 002E94B4  48 00 14 C9 */	bl effectDrawOff__Q34Game10MiniHoudai3ObjFv
/* 802EC578 002E94B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC57C 002E94BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EC580 002E94C0  7C 08 03 A6 */	mtlr r0
/* 802EC584 002E94C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC588 002E94C8  4E 80 00 20 */	blr 
.endfn doStartWaitingBirthTypeDrop__Q34Game10MiniHoudai3ObjFv

.fn doFinishWaitingBirthTypeDrop__Q34Game10MiniHoudai3ObjFv, global
/* 802EC58C 002E94CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC590 002E94D0  7C 08 02 A6 */	mflr r0
/* 802EC594 002E94D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC598 002E94D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EC59C 002E94DC  7C 7F 1B 78 */	mr r31, r3
/* 802EC5A0 002E94E0  4B E1 B4 29 */	bl doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 802EC5A4 002E94E4  7F E3 FB 78 */	mr r3, r31
/* 802EC5A8 002E94E8  48 00 14 3D */	bl effectDrawOn__Q34Game10MiniHoudai3ObjFv
/* 802EC5AC 002E94EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC5B0 002E94F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EC5B4 002E94F4  7C 08 03 A6 */	mtlr r0
/* 802EC5B8 002E94F8  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC5BC 002E94FC  4E 80 00 20 */	blr 
.endfn doFinishWaitingBirthTypeDrop__Q34Game10MiniHoudai3ObjFv

.fn startCarcassMotion__Q34Game10MiniHoudai3ObjFv, global
/* 802EC5C0 002E9500  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC5C4 002E9504  7C 08 02 A6 */	mflr r0
/* 802EC5C8 002E9508  38 80 00 06 */	li r4, 6
/* 802EC5CC 002E950C  38 A0 00 00 */	li r5, 0
/* 802EC5D0 002E9510  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC5D4 002E9514  4B E1 8A 31 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802EC5D8 002E9518  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC5DC 002E951C  7C 08 03 A6 */	mtlr r0
/* 802EC5E0 002E9520  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC5E4 002E9524  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game10MiniHoudai3ObjFv

.fn doStartMovie__Q34Game10MiniHoudai3ObjFv, global
/* 802EC5E8 002E9528  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC5EC 002E952C  7C 08 02 A6 */	mflr r0
/* 802EC5F0 002E9530  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC5F4 002E9534  48 00 14 49 */	bl effectDrawOff__Q34Game10MiniHoudai3ObjFv
/* 802EC5F8 002E9538  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC5FC 002E953C  7C 08 03 A6 */	mtlr r0
/* 802EC600 002E9540  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC604 002E9544  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game10MiniHoudai3ObjFv

.fn doEndMovie__Q34Game10MiniHoudai3ObjFv, global
/* 802EC608 002E9548  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC60C 002E954C  7C 08 02 A6 */	mflr r0
/* 802EC610 002E9550  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC614 002E9554  48 00 13 D1 */	bl effectDrawOn__Q34Game10MiniHoudai3ObjFv
/* 802EC618 002E9558  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC61C 002E955C  7C 08 03 A6 */	mtlr r0
/* 802EC620 002E9560  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC624 002E9564  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game10MiniHoudai3ObjFv

.fn initWalkSmokeEffect__Q34Game10MiniHoudai3ObjFv, global
/* 802EC628 002E9568  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EC62C 002E956C  7C 08 02 A6 */	mflr r0
/* 802EC630 002E9570  38 80 00 02 */	li r4, 2
/* 802EC634 002E9574  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC638 002E9578  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EC63C 002E957C  7C 7F 1B 78 */	mr r31, r3
/* 802EC640 002E9580  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802EC644 002E9584  4B E3 DD 21 */	bl alloc__Q34Game15WalkSmokeEffect3MgrFi
/* 802EC648 002E9588  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 802EC64C 002E958C  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802EC650 002E9590  C0 22 EC 3C */	lfs f1, lbl_8051CF9C@sda21(r2)
/* 802EC654 002E9594  38 80 00 00 */	li r4, 0
/* 802EC658 002E9598  38 C2 EC 58 */	addi r6, r2, lbl_8051CFB8@sda21
/* 802EC65C 002E959C  4B E3 DF 85 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 802EC660 002E95A0  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 802EC664 002E95A4  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 802EC668 002E95A8  C0 22 EC 3C */	lfs f1, lbl_8051CF9C@sda21(r2)
/* 802EC66C 002E95AC  38 80 00 01 */	li r4, 1
/* 802EC670 002E95B0  38 C2 EC 60 */	addi r6, r2, lbl_8051CFC0@sda21
/* 802EC674 002E95B4  4B E3 DF 6D */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 802EC678 002E95B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EC67C 002E95BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EC680 002E95C0  7C 08 03 A6 */	mtlr r0
/* 802EC684 002E95C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802EC688 002E95C8  4E 80 00 20 */	blr 
.endfn initWalkSmokeEffect__Q34Game10MiniHoudai3ObjFv

.fn getWalkSmokeEffectMgr__Q34Game10MiniHoudai3ObjFv, global
/* 802EC68C 002E95CC  38 63 02 C0 */	addi r3, r3, 0x2c0
/* 802EC690 002E95D0  4E 80 00 20 */	blr 
.endfn getWalkSmokeEffectMgr__Q34Game10MiniHoudai3ObjFv

.fn doBecomeCarcass__Q34Game10MiniHoudai3ObjFv, global
/* 802EC694 002E95D4  C0 02 EC 2C */	lfs f0, lbl_8051CF8C@sda21(r2)
/* 802EC698 002E95D8  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 802EC69C 002E95DC  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 802EC6A0 002E95E0  38 60 00 01 */	li r3, 1
/* 802EC6A4 002E95E4  4E 80 00 20 */	blr 
.endfn doBecomeCarcass__Q34Game10MiniHoudai3ObjFv

.fn doUpdateCarcass__Q34Game10MiniHoudai3ObjFv, global
/* 802EC6A8 002E95E8  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 802EC6AC 002E95EC  7C 08 02 A6 */	mflr r0
/* 802EC6B0 002E95F0  90 01 00 74 */	stw r0, 0x74(r1)
/* 802EC6B4 002E95F4  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 802EC6B8 002E95F8  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 802EC6BC 002E95FC  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 802EC6C0 002E9600  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 802EC6C4 002E9604  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802EC6C8 002E9608  7C 7F 1B 78 */	mr r31, r3
/* 802EC6CC 002E960C  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 802EC6D0 002E9610  80 63 00 04 */	lwz r3, 4(r3)
/* 802EC6D4 002E9614  81 83 00 00 */	lwz r12, 0(r3)
/* 802EC6D8 002E9618  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802EC6DC 002E961C  7D 89 03 A6 */	mtctr r12
/* 802EC6E0 002E9620  4E 80 04 21 */	bctrl 
/* 802EC6E4 002E9624  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EC6E8 002E9628  41 82 01 5C */	beq .L_802EC844
/* 802EC6EC 002E962C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802EC6F0 002E9630  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802EC6F4 002E9634  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 802EC6F8 002E9638  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EC6FC 002E963C  40 80 00 48 */	bge .L_802EC744
/* 802EC700 002E9640  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802EC704 002E9644  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802EC708 002E9648  EC 01 00 2A */	fadds f0, f1, f0
/* 802EC70C 002E964C  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802EC710 002E9650  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 802EC714 002E9654  28 03 00 00 */	cmplwi r3, 0
/* 802EC718 002E9658  41 82 01 68 */	beq .L_802EC880
/* 802EC71C 002E965C  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802EC720 002E9660  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802EC724 002E9664  C0 04 08 1C */	lfs f0, 0x81c(r4)
/* 802EC728 002E9668  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EC72C 002E966C  4C 41 13 82 */	cror 2, 1, 2
/* 802EC730 002E9670  40 82 01 50 */	bne .L_802EC880
/* 802EC734 002E9674  C0 22 EC 2C */	lfs f1, lbl_8051CF8C@sda21(r2)
/* 802EC738 002E9678  7F E4 FB 78 */	mr r4, r31
/* 802EC73C 002E967C  4B E2 E3 59 */	bl activeLifeGauge__12LifeGaugeMgrFPQ24Game8Creaturef
/* 802EC740 002E9680  48 00 01 40 */	b .L_802EC880
.L_802EC744:
/* 802EC744 002E9684  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 802EC748 002E9688  C0 3F 02 04 */	lfs f1, 0x204(r31)
/* 802EC74C 002E968C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802EC750 002E9690  40 80 01 30 */	bge .L_802EC880
/* 802EC754 002E9694  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 802EC758 002E9698  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802EC75C 002E969C  EC 21 00 24 */	fdivs f1, f1, f0
/* 802EC760 002E96A0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802EC764 002E96A4  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 802EC768 002E96A8  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 802EC76C 002E96AC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802EC770 002E96B0  C0 1F 02 04 */	lfs f0, 0x204(r31)
/* 802EC774 002E96B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EC778 002E96B8  4C 41 13 82 */	cror 2, 1, 2
/* 802EC77C 002E96BC  40 82 01 04 */	bne .L_802EC880
/* 802EC780 002E96C0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 802EC784 002E96C4  38 80 00 00 */	li r4, 0
/* 802EC788 002E96C8  80 63 00 04 */	lwz r3, 4(r3)
/* 802EC78C 002E96CC  4B E4 E9 65 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 802EC790 002E96D0  C3 FF 01 40 */	lfs f31, 0x140(r31)
/* 802EC794 002E96D4  38 61 00 08 */	addi r3, r1, 8
/* 802EC798 002E96D8  C3 DF 01 60 */	lfs f30, 0x160(r31)
/* 802EC79C 002E96DC  4B E4 24 89 */	bl __ct__Q24Game13EnemyBirthArgFv
/* 802EC7A0 002E96E0  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 802EC7A4 002E96E4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EC7A8 002E96E8  FC 20 F8 90 */	fmr f1, f31
/* 802EC7AC 002E96EC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EC7B0 002E96F0  D0 01 00 08 */	stfs f0, 8(r1)
/* 802EC7B4 002E96F4  FC 40 F0 90 */	fmr f2, f30
/* 802EC7B8 002E96F8  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802EC7BC 002E96FC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802EC7C0 002E9700  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 802EC7C4 002E9704  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802EC7C8 002E9708  4B D4 89 41 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EC7CC 002E970C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 802EC7D0 002E9710  7F E3 FB 78 */	mr r3, r31
/* 802EC7D4 002E9714  C0 1F 02 AC */	lfs f0, 0x2ac(r31)
/* 802EC7D8 002E9718  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802EC7DC 002E971C  88 9F 01 F3 */	lbz r4, 0x1f3(r31)
/* 802EC7E0 002E9720  7C 04 00 D0 */	neg r0, r4
/* 802EC7E4 002E9724  7C 00 23 78 */	or r0, r0, r4
/* 802EC7E8 002E9728  54 00 0F FE */	srwi r0, r0, 0x1f
/* 802EC7EC 002E972C  98 01 00 38 */	stb r0, 0x38(r1)
/* 802EC7F0 002E9730  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EC7F4 002E9734  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802EC7F8 002E9738  7D 89 03 A6 */	mtctr r12
/* 802EC7FC 002E973C  4E 80 04 21 */	bctrl 
/* 802EC800 002E9740  7C 64 1B 78 */	mr r4, r3
/* 802EC804 002E9744  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802EC808 002E9748  38 A1 00 08 */	addi r5, r1, 8
/* 802EC80C 002E974C  4B E2 0C B5 */	bl birth__Q24Game15GeneralEnemyMgrFiRQ24Game13EnemyBirthArg
/* 802EC810 002E9750  28 03 00 00 */	cmplwi r3, 0
/* 802EC814 002E9754  41 82 00 6C */	beq .L_802EC880
/* 802EC818 002E9758  38 80 00 00 */	li r4, 0
/* 802EC81C 002E975C  4B E4 E7 AD */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 802EC820 002E9760  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802EC824 002E9764  7F E4 FB 78 */	mr r4, r31
/* 802EC828 002E9768  38 A0 00 01 */	li r5, 1
/* 802EC82C 002E976C  38 C0 00 00 */	li r6, 0
/* 802EC830 002E9770  81 83 00 00 */	lwz r12, 0(r3)
/* 802EC834 002E9774  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802EC838 002E9778  7D 89 03 A6 */	mtctr r12
/* 802EC83C 002E977C  4E 80 04 21 */	bctrl 
/* 802EC840 002E9780  48 00 00 40 */	b .L_802EC880
.L_802EC844:
/* 802EC844 002E9784  80 0D 92 08 */	lwz r0, lifeGaugeMgr@sda21(r13)
/* 802EC848 002E9788  28 00 00 00 */	cmplwi r0, 0
/* 802EC84C 002E978C  41 82 00 34 */	beq .L_802EC880
/* 802EC850 002E9790  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802EC854 002E9794  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802EC858 002E9798  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 802EC85C 002E979C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EC860 002E97A0  4C 41 13 82 */	cror 2, 1, 2
/* 802EC864 002E97A4  40 82 00 1C */	bne .L_802EC880
/* 802EC868 002E97A8  C0 02 EC 2C */	lfs f0, lbl_8051CF8C@sda21(r2)
/* 802EC86C 002E97AC  7F E4 FB 78 */	mr r4, r31
/* 802EC870 002E97B0  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802EC874 002E97B4  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 802EC878 002E97B8  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 802EC87C 002E97BC  4B E2 E2 FD */	bl inactiveLifeGauge__12LifeGaugeMgrFPQ24Game8Creature
.L_802EC880:
/* 802EC880 002E97C0  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 802EC884 002E97C4  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 802EC888 002E97C8  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 802EC88C 002E97CC  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 802EC890 002E97D0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802EC894 002E97D4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802EC898 002E97D8  7C 08 03 A6 */	mtlr r0
/* 802EC89C 002E97DC  38 21 00 70 */	addi r1, r1, 0x70
/* 802EC8A0 002E97E0  4E 80 00 20 */	blr 
.endfn doUpdateCarcass__Q34Game10MiniHoudai3ObjFv

.fn doGetLifeGaugeParam__Q34Game10MiniHoudai3ObjFRQ24Game14LifeGaugeParam, global
/* 802EC8A4 002E97E4  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802EC8A8 002E97E8  D0 04 00 00 */	stfs f0, 0(r4)
/* 802EC8AC 002E97EC  80 A3 01 7C */	lwz r5, 0x17c(r3)
/* 802EC8B0 002E97F0  80 05 00 04 */	lwz r0, 4(r5)
/* 802EC8B4 002E97F4  28 00 00 00 */	cmplwi r0, 0
/* 802EC8B8 002E97F8  41 82 00 18 */	beq .L_802EC8D0
/* 802EC8BC 002E97FC  C0 22 EC 4C */	lfs f1, lbl_8051CFAC@sda21(r2)
/* 802EC8C0 002E9800  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802EC8C4 002E9804  EC 01 00 2A */	fadds f0, f1, f0
/* 802EC8C8 002E9808  D0 04 00 04 */	stfs f0, 4(r4)
/* 802EC8CC 002E980C  48 00 00 18 */	b .L_802EC8E4
.L_802EC8D0:
/* 802EC8D0 002E9810  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802EC8D4 002E9814  C0 23 01 90 */	lfs f1, 0x190(r3)
/* 802EC8D8 002E9818  C0 05 01 2C */	lfs f0, 0x12c(r5)
/* 802EC8DC 002E981C  EC 01 00 2A */	fadds f0, f1, f0
/* 802EC8E0 002E9820  D0 04 00 04 */	stfs f0, 4(r4)
.L_802EC8E4:
/* 802EC8E4 002E9824  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802EC8E8 002E9828  C0 02 EC 68 */	lfs f0, lbl_8051CFC8@sda21(r2)
/* 802EC8EC 002E982C  D0 24 00 08 */	stfs f1, 8(r4)
/* 802EC8F0 002E9830  C0 43 02 00 */	lfs f2, 0x200(r3)
/* 802EC8F4 002E9834  C0 23 02 04 */	lfs f1, 0x204(r3)
/* 802EC8F8 002E9838  EC 22 08 24 */	fdivs f1, f2, f1
/* 802EC8FC 002E983C  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 802EC900 002E9840  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 802EC904 002E9844  4E 80 00 20 */	blr 
.endfn doGetLifeGaugeParam__Q34Game10MiniHoudai3ObjFRQ24Game14LifeGaugeParam

.fn updateCaution__Q34Game10MiniHoudai3ObjFv, global
/* 802EC908 002E9848  80 83 01 E0 */	lwz r4, 0x1e0(r3)
/* 802EC90C 002E984C  54 80 06 F7 */	rlwinm. r0, r4, 0, 0x1b, 0x1b
/* 802EC910 002E9850  40 82 00 18 */	bne .L_802EC928
/* 802EC914 002E9854  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 802EC918 002E9858  40 82 00 10 */	bne .L_802EC928
/* 802EC91C 002E985C  80 03 01 F4 */	lwz r0, 0x1f4(r3)
/* 802EC920 002E9860  2C 00 00 00 */	cmpwi r0, 0
/* 802EC924 002E9864  41 82 00 0C */	beq .L_802EC930
.L_802EC928:
/* 802EC928 002E9868  C0 02 EC 2C */	lfs f0, lbl_8051CF8C@sda21(r2)
/* 802EC92C 002E986C  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
.L_802EC930:
/* 802EC930 002E9870  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802EC934 002E9874  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 802EC938 002E9878  C0 04 06 2C */	lfs f0, 0x62c(r4)
/* 802EC93C 002E987C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EC940 002E9880  4C 80 00 20 */	bgelr 
/* 802EC944 002E9884  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802EC948 002E9888  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 802EC94C 002E988C  EC 01 00 2A */	fadds f0, f1, f0
/* 802EC950 002E9890  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 802EC954 002E9894  4E 80 00 20 */	blr 
.endfn updateCaution__Q34Game10MiniHoudai3ObjFv

.fn getViewAngle__Q34Game10MiniHoudai3ObjFv, global
/* 802EC958 002E9898  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802EC95C 002E989C  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 802EC960 002E98A0  C0 04 06 2C */	lfs f0, 0x62c(r4)
/* 802EC964 002E98A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EC968 002E98A8  40 80 00 0C */	bge .L_802EC974
/* 802EC96C 002E98AC  C0 22 EC 6C */	lfs f1, lbl_8051CFCC@sda21(r2)
/* 802EC970 002E98B0  4E 80 00 20 */	blr 
.L_802EC974:
/* 802EC974 002E98B4  C0 24 04 24 */	lfs f1, 0x424(r4)
/* 802EC978 002E98B8  4E 80 00 20 */	blr 
.endfn getViewAngle__Q34Game10MiniHoudai3ObjFv

.fn resetWayPoint__Q34Game10MiniHoudai3ObjFv, global
/* 802EC97C 002E98BC  38 00 00 00 */	li r0, 0
/* 802EC980 002E98C0  90 03 02 F0 */	stw r0, 0x2f0(r3)
/* 802EC984 002E98C4  90 03 02 F4 */	stw r0, 0x2f4(r3)
/* 802EC988 002E98C8  4E 80 00 20 */	blr 
.endfn resetWayPoint__Q34Game10MiniHoudai3ObjFv

.fn setNearestWayPoint__Q34Game10MiniHoudai3ObjFv, global
/* 802EC98C 002E98CC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802EC990 002E98D0  7C 08 02 A6 */	mflr r0
/* 802EC994 002E98D4  C0 02 EC 68 */	lfs f0, lbl_8051CFC8@sda21(r2)
/* 802EC998 002E98D8  90 01 00 34 */	stw r0, 0x34(r1)
/* 802EC99C 002E98DC  38 00 00 00 */	li r0, 0
/* 802EC9A0 002E98E0  38 81 00 08 */	addi r4, r1, 8
/* 802EC9A4 002E98E4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802EC9A8 002E98E8  7C 7F 1B 78 */	mr r31, r3
/* 802EC9AC 002E98EC  80 63 02 F0 */	lwz r3, 0x2f0(r3)
/* 802EC9B0 002E98F0  90 7F 02 F4 */	stw r3, 0x2f4(r31)
/* 802EC9B4 002E98F4  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 802EC9B8 002E98F8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802EC9BC 002E98FC  D0 21 00 08 */	stfs f1, 8(r1)
/* 802EC9C0 002E9900  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 802EC9C4 002E9904  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802EC9C8 002E9908  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 802EC9CC 002E990C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 802EC9D0 002E9910  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EC9D4 002E9914  98 01 00 18 */	stb r0, 0x18(r1)
/* 802EC9D8 002E9918  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802EC9DC 002E991C  80 63 00 08 */	lwz r3, 8(r3)
/* 802EC9E0 002E9920  4B E8 65 E5 */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 802EC9E4 002E9924  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 802EC9E8 002E9928  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 802EC9EC 002E992C  28 03 00 00 */	cmplwi r3, 0
/* 802EC9F0 002E9930  41 82 00 20 */	beq .L_802ECA10
/* 802EC9F4 002E9934  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 802EC9F8 002E9938  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 802EC9FC 002E993C  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 802ECA00 002E9940  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802ECA04 002E9944  D0 3F 02 E8 */	stfs f1, 0x2e8(r31)
/* 802ECA08 002E9948  D0 5F 02 EC */	stfs f2, 0x2ec(r31)
/* 802ECA0C 002E994C  48 00 00 1C */	b .L_802ECA28
.L_802ECA10:
/* 802ECA10 002E9950  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 802ECA14 002E9954  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802ECA18 002E9958  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802ECA1C 002E995C  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 802ECA20 002E9960  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802ECA24 002E9964  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
.L_802ECA28:
/* 802ECA28 002E9968  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802ECA2C 002E996C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802ECA30 002E9970  7C 08 03 A6 */	mtlr r0
/* 802ECA34 002E9974  38 21 00 30 */	addi r1, r1, 0x30
/* 802ECA38 002E9978  4E 80 00 20 */	blr 
.endfn setNearestWayPoint__Q34Game10MiniHoudai3ObjFv

.fn setLinkWayPoint__Q34Game10MiniHoudai3ObjFv, global
/* 802ECA3C 002E997C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802ECA40 002E9980  7C 08 02 A6 */	mflr r0
/* 802ECA44 002E9984  90 01 00 84 */	stw r0, 0x84(r1)
/* 802ECA48 002E9988  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 802ECA4C 002E998C  7C 7F 1B 78 */	mr r31, r3
/* 802ECA50 002E9990  93 C1 00 78 */	stw r30, 0x78(r1)
/* 802ECA54 002E9994  93 A1 00 74 */	stw r29, 0x74(r1)
/* 802ECA58 002E9998  93 81 00 70 */	stw r28, 0x70(r1)
/* 802ECA5C 002E999C  80 83 02 F0 */	lwz r4, 0x2f0(r3)
/* 802ECA60 002E99A0  28 04 00 00 */	cmplwi r4, 0
/* 802ECA64 002E99A4  41 82 01 90 */	beq .L_802ECBF4
/* 802ECA68 002E99A8  80 7F 02 F4 */	lwz r3, 0x2f4(r31)
/* 802ECA6C 002E99AC  3B A0 00 00 */	li r29, 0
/* 802ECA70 002E99B0  3B 80 FF FF */	li r28, -1
/* 802ECA74 002E99B4  28 03 00 00 */	cmplwi r3, 0
/* 802ECA78 002E99B8  41 82 00 08 */	beq .L_802ECA80
/* 802ECA7C 002E99BC  AB 83 00 36 */	lha r28, 0x36(r3)
.L_802ECA80:
/* 802ECA80 002E99C0  38 61 00 08 */	addi r3, r1, 8
/* 802ECA84 002E99C4  38 A0 00 01 */	li r5, 1
/* 802ECA88 002E99C8  4B E8 5A 99 */	bl __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
/* 802ECA8C 002E99CC  38 61 00 08 */	addi r3, r1, 8
/* 802ECA90 002E99D0  4B E8 5A A5 */	bl first__Q24Game16WayPointIteratorFv
/* 802ECA94 002E99D4  3B C1 00 2C */	addi r30, r1, 0x2c
/* 802ECA98 002E99D8  48 00 00 5C */	b .L_802ECAF4
.L_802ECA9C:
/* 802ECA9C 002E99DC  38 61 00 08 */	addi r3, r1, 8
/* 802ECAA0 002E99E0  4B E8 5B 25 */	bl __ml__Q24Game16WayPointIteratorFv
/* 802ECAA4 002E99E4  7C 60 07 34 */	extsh r0, r3
/* 802ECAA8 002E99E8  7C 00 E0 00 */	cmpw r0, r28
/* 802ECAAC 002E99EC  41 82 00 40 */	beq .L_802ECAEC
/* 802ECAB0 002E99F0  80 AD 93 08 */	lwz r5, mapMgr__4Game@sda21(r13)
/* 802ECAB4 002E99F4  7C 64 1B 78 */	mr r4, r3
/* 802ECAB8 002E99F8  80 65 00 08 */	lwz r3, 8(r5)
/* 802ECABC 002E99FC  81 83 00 00 */	lwz r12, 0(r3)
/* 802ECAC0 002E9A00  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 802ECAC4 002E9A04  7D 89 03 A6 */	mtctr r12
/* 802ECAC8 002E9A08  4E 80 04 21 */	bctrl 
/* 802ECACC 002E9A0C  28 03 00 00 */	cmplwi r3, 0
/* 802ECAD0 002E9A10  41 82 00 1C */	beq .L_802ECAEC
/* 802ECAD4 002E9A14  88 03 00 34 */	lbz r0, 0x34(r3)
/* 802ECAD8 002E9A18  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802ECADC 002E9A1C  40 82 00 10 */	bne .L_802ECAEC
/* 802ECAE0 002E9A20  90 7E 00 00 */	stw r3, 0(r30)
/* 802ECAE4 002E9A24  3B DE 00 04 */	addi r30, r30, 4
/* 802ECAE8 002E9A28  3B BD 00 01 */	addi r29, r29, 1
.L_802ECAEC:
/* 802ECAEC 002E9A2C  38 61 00 08 */	addi r3, r1, 8
/* 802ECAF0 002E9A30  4B E8 5A 6D */	bl next__Q24Game16WayPointIteratorFv
.L_802ECAF4:
/* 802ECAF4 002E9A34  38 61 00 08 */	addi r3, r1, 8
/* 802ECAF8 002E9A38  4B E8 5A 91 */	bl isDone__Q24Game16WayPointIteratorFv
/* 802ECAFC 002E9A3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802ECB00 002E9A40  41 82 FF 9C */	beq .L_802ECA9C
/* 802ECB04 002E9A44  2C 1D 00 00 */	cmpwi r29, 0
/* 802ECB08 002E9A48  41 82 00 88 */	beq .L_802ECB90
/* 802ECB0C 002E9A4C  80 1F 02 F0 */	lwz r0, 0x2f0(r31)
/* 802ECB10 002E9A50  90 1F 02 F4 */	stw r0, 0x2f4(r31)
/* 802ECB14 002E9A54  4B DD CA 8D */	bl rand
/* 802ECB18 002E9A58  3C 80 43 30 */	lis r4, 0x4330
/* 802ECB1C 002E9A5C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802ECB20 002E9A60  90 01 00 54 */	stw r0, 0x54(r1)
/* 802ECB24 002E9A64  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 802ECB28 002E9A68  C8 42 EC 78 */	lfd f2, lbl_8051CFD8@sda21(r2)
/* 802ECB2C 002E9A6C  38 61 00 2C */	addi r3, r1, 0x2c
/* 802ECB30 002E9A70  90 81 00 50 */	stw r4, 0x50(r1)
/* 802ECB34 002E9A74  C0 02 EC 70 */	lfs f0, lbl_8051CFD0@sda21(r2)
/* 802ECB38 002E9A78  C8 21 00 50 */	lfd f1, 0x50(r1)
/* 802ECB3C 002E9A7C  90 01 00 5C */	stw r0, 0x5c(r1)
/* 802ECB40 002E9A80  EC 21 10 28 */	fsubs f1, f1, f2
/* 802ECB44 002E9A84  90 81 00 58 */	stw r4, 0x58(r1)
/* 802ECB48 002E9A88  EC 21 00 24 */	fdivs f1, f1, f0
/* 802ECB4C 002E9A8C  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 802ECB50 002E9A90  EC 00 10 28 */	fsubs f0, f0, f2
/* 802ECB54 002E9A94  EC 00 00 72 */	fmuls f0, f0, f1
/* 802ECB58 002E9A98  FC 00 00 1E */	fctiwz f0, f0
/* 802ECB5C 002E9A9C  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 802ECB60 002E9AA0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802ECB64 002E9AA4  54 00 10 3A */	slwi r0, r0, 2
/* 802ECB68 002E9AA8  7C 03 00 2E */	lwzx r0, r3, r0
/* 802ECB6C 002E9AAC  90 1F 02 F0 */	stw r0, 0x2f0(r31)
/* 802ECB70 002E9AB0  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 802ECB74 002E9AB4  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 802ECB78 002E9AB8  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 802ECB7C 002E9ABC  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 802ECB80 002E9AC0  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802ECB84 002E9AC4  D0 3F 02 E8 */	stfs f1, 0x2e8(r31)
/* 802ECB88 002E9AC8  D0 5F 02 EC */	stfs f2, 0x2ec(r31)
/* 802ECB8C 002E9ACC  48 00 00 F0 */	b .L_802ECC7C
.L_802ECB90:
/* 802ECB90 002E9AD0  2C 1C 00 00 */	cmpwi r28, 0
/* 802ECB94 002E9AD4  41 80 00 60 */	blt .L_802ECBF4
/* 802ECB98 002E9AD8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802ECB9C 002E9ADC  7F 84 07 34 */	extsh r4, r28
/* 802ECBA0 002E9AE0  80 63 00 08 */	lwz r3, 8(r3)
/* 802ECBA4 002E9AE4  81 83 00 00 */	lwz r12, 0(r3)
/* 802ECBA8 002E9AE8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 802ECBAC 002E9AEC  7D 89 03 A6 */	mtctr r12
/* 802ECBB0 002E9AF0  4E 80 04 21 */	bctrl 
/* 802ECBB4 002E9AF4  28 03 00 00 */	cmplwi r3, 0
/* 802ECBB8 002E9AF8  41 82 00 3C */	beq .L_802ECBF4
/* 802ECBBC 002E9AFC  88 03 00 34 */	lbz r0, 0x34(r3)
/* 802ECBC0 002E9B00  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802ECBC4 002E9B04  40 82 00 30 */	bne .L_802ECBF4
/* 802ECBC8 002E9B08  80 1F 02 F0 */	lwz r0, 0x2f0(r31)
/* 802ECBCC 002E9B0C  90 1F 02 F4 */	stw r0, 0x2f4(r31)
/* 802ECBD0 002E9B10  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 802ECBD4 002E9B14  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 802ECBD8 002E9B18  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 802ECBDC 002E9B1C  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 802ECBE0 002E9B20  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 802ECBE4 002E9B24  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802ECBE8 002E9B28  D0 3F 02 E8 */	stfs f1, 0x2e8(r31)
/* 802ECBEC 002E9B2C  D0 5F 02 EC */	stfs f2, 0x2ec(r31)
/* 802ECBF0 002E9B30  48 00 00 8C */	b .L_802ECC7C
.L_802ECBF4:
/* 802ECBF4 002E9B34  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 802ECBF8 002E9B38  38 00 00 00 */	li r0, 0
/* 802ECBFC 002E9B3C  C0 02 EC 68 */	lfs f0, lbl_8051CFC8@sda21(r2)
/* 802ECC00 002E9B40  38 81 00 14 */	addi r4, r1, 0x14
/* 802ECC04 002E9B44  90 7F 02 F4 */	stw r3, 0x2f4(r31)
/* 802ECC08 002E9B48  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 802ECC0C 002E9B4C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802ECC10 002E9B50  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 802ECC14 002E9B54  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 802ECC18 002E9B58  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802ECC1C 002E9B5C  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 802ECC20 002E9B60  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802ECC24 002E9B64  90 01 00 20 */	stw r0, 0x20(r1)
/* 802ECC28 002E9B68  98 01 00 24 */	stb r0, 0x24(r1)
/* 802ECC2C 002E9B6C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802ECC30 002E9B70  80 63 00 08 */	lwz r3, 8(r3)
/* 802ECC34 002E9B74  4B E8 63 91 */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 802ECC38 002E9B78  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 802ECC3C 002E9B7C  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 802ECC40 002E9B80  28 03 00 00 */	cmplwi r3, 0
/* 802ECC44 002E9B84  41 82 00 20 */	beq .L_802ECC64
/* 802ECC48 002E9B88  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 802ECC4C 002E9B8C  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 802ECC50 002E9B90  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 802ECC54 002E9B94  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802ECC58 002E9B98  D0 3F 02 E8 */	stfs f1, 0x2e8(r31)
/* 802ECC5C 002E9B9C  D0 5F 02 EC */	stfs f2, 0x2ec(r31)
/* 802ECC60 002E9BA0  48 00 00 1C */	b .L_802ECC7C
.L_802ECC64:
/* 802ECC64 002E9BA4  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 802ECC68 002E9BA8  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802ECC6C 002E9BAC  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802ECC70 002E9BB0  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 802ECC74 002E9BB4  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802ECC78 002E9BB8  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
.L_802ECC7C:
/* 802ECC7C 002E9BBC  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802ECC80 002E9BC0  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 802ECC84 002E9BC4  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 802ECC88 002E9BC8  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 802ECC8C 002E9BCC  83 81 00 70 */	lwz r28, 0x70(r1)
/* 802ECC90 002E9BD0  7C 08 03 A6 */	mtlr r0
/* 802ECC94 002E9BD4  38 21 00 80 */	addi r1, r1, 0x80
/* 802ECC98 002E9BD8  4E 80 00 20 */	blr 
.endfn setLinkWayPoint__Q34Game10MiniHoudai3ObjFv

.fn getSearchedTarget__Q34Game10MiniHoudai3ObjFv, global
/* 802ECC9C 002E9BDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ECCA0 002E9BE0  7C 08 02 A6 */	mflr r0
/* 802ECCA4 002E9BE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ECCA8 002E9BE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ECCAC 002E9BEC  7C 7F 1B 78 */	mr r31, r3
/* 802ECCB0 002E9BF0  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802ECCB4 002E9BF4  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 802ECCB8 002E9BF8  C0 04 06 2C */	lfs f0, 0x62c(r4)
/* 802ECCBC 002E9BFC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ECCC0 002E9C00  40 80 00 0C */	bge .L_802ECCCC
/* 802ECCC4 002E9C04  C0 22 EC 6C */	lfs f1, lbl_8051CFCC@sda21(r2)
/* 802ECCC8 002E9C08  48 00 00 08 */	b .L_802ECCD0
.L_802ECCCC:
/* 802ECCCC 002E9C0C  C0 24 04 24 */	lfs f1, 0x424(r4)
.L_802ECCD0:
/* 802ECCD0 002E9C10  C0 44 03 D4 */	lfs f2, 0x3d4(r4)
/* 802ECCD4 002E9C14  38 80 00 00 */	li r4, 0
/* 802ECCD8 002E9C18  38 A0 00 00 */	li r5, 0
/* 802ECCDC 002E9C1C  38 C0 00 00 */	li r6, 0
/* 802ECCE0 002E9C20  4B E2 63 71 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 802ECCE4 002E9C24  28 03 00 00 */	cmplwi r3, 0
/* 802ECCE8 002E9C28  41 82 00 0C */	beq .L_802ECCF4
/* 802ECCEC 002E9C2C  C0 02 EC 2C */	lfs f0, lbl_8051CF8C@sda21(r2)
/* 802ECCF0 002E9C30  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
.L_802ECCF4:
/* 802ECCF4 002E9C34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ECCF8 002E9C38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ECCFC 002E9C3C  7C 08 03 A6 */	mtlr r0
/* 802ECD00 002E9C40  38 21 00 10 */	addi r1, r1, 0x10
/* 802ECD04 002E9C44  4E 80 00 20 */	blr 
.endfn getSearchedTarget__Q34Game10MiniHoudai3ObjFv

.fn updateTargetDistance__Q34Game10MiniHoudai3ObjFv, global
/* 802ECD08 002E9C48  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802ECD0C 002E9C4C  7C 08 02 A6 */	mflr r0
/* 802ECD10 002E9C50  90 01 00 34 */	stw r0, 0x34(r1)
/* 802ECD14 002E9C54  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802ECD18 002E9C58  7C 7F 1B 78 */	mr r31, r3
/* 802ECD1C 002E9C5C  80 63 02 F0 */	lwz r3, 0x2f0(r3)
/* 802ECD20 002E9C60  28 03 00 00 */	cmplwi r3, 0
/* 802ECD24 002E9C64  41 82 00 0C */	beq .L_802ECD30
/* 802ECD28 002E9C68  C0 03 00 58 */	lfs f0, 0x58(r3)
/* 802ECD2C 002E9C6C  48 00 00 0C */	b .L_802ECD38
.L_802ECD30:
/* 802ECD30 002E9C70  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802ECD34 002E9C74  C0 03 03 84 */	lfs f0, 0x384(r3)
.L_802ECD38:
/* 802ECD38 002E9C78  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 802ECD3C 002E9C7C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802ECD40 002E9C80  C0 3F 02 EC */	lfs f1, 0x2ec(r31)
/* 802ECD44 002E9C84  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 802ECD48 002E9C88  EC 42 08 28 */	fsubs f2, f2, f1
/* 802ECD4C 002E9C8C  C0 3F 02 E4 */	lfs f1, 0x2e4(r31)
/* 802ECD50 002E9C90  EC 63 08 28 */	fsubs f3, f3, f1
/* 802ECD54 002E9C94  EC 22 00 B2 */	fmuls f1, f2, f2
/* 802ECD58 002E9C98  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 802ECD5C 002E9C9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ECD60 002E9CA0  40 80 00 14 */	bge .L_802ECD74
/* 802ECD64 002E9CA4  7F E3 FB 78 */	mr r3, r31
/* 802ECD68 002E9CA8  4B FF FC D5 */	bl setLinkWayPoint__Q34Game10MiniHoudai3ObjFv
/* 802ECD6C 002E9CAC  C0 02 EC 2C */	lfs f0, lbl_8051CF8C@sda21(r2)
/* 802ECD70 002E9CB0  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
.L_802ECD74:
/* 802ECD74 002E9CB4  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 802ECD78 002E9CB8  C0 02 EC 3C */	lfs f0, lbl_8051CF9C@sda21(r2)
/* 802ECD7C 002E9CBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ECD80 002E9CC0  40 81 00 9C */	ble .L_802ECE1C
/* 802ECD84 002E9CC4  C0 22 EC 2C */	lfs f1, lbl_8051CF8C@sda21(r2)
/* 802ECD88 002E9CC8  38 00 00 00 */	li r0, 0
/* 802ECD8C 002E9CCC  C0 02 EC 68 */	lfs f0, lbl_8051CFC8@sda21(r2)
/* 802ECD90 002E9CD0  38 81 00 08 */	addi r4, r1, 8
/* 802ECD94 002E9CD4  D0 3F 02 D0 */	stfs f1, 0x2d0(r31)
/* 802ECD98 002E9CD8  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 802ECD9C 002E9CDC  90 7F 02 F4 */	stw r3, 0x2f4(r31)
/* 802ECDA0 002E9CE0  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 802ECDA4 002E9CE4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802ECDA8 002E9CE8  D0 21 00 08 */	stfs f1, 8(r1)
/* 802ECDAC 002E9CEC  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 802ECDB0 002E9CF0  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802ECDB4 002E9CF4  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 802ECDB8 002E9CF8  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 802ECDBC 002E9CFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ECDC0 002E9D00  98 01 00 18 */	stb r0, 0x18(r1)
/* 802ECDC4 002E9D04  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802ECDC8 002E9D08  80 63 00 08 */	lwz r3, 8(r3)
/* 802ECDCC 002E9D0C  4B E8 61 F9 */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 802ECDD0 002E9D10  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 802ECDD4 002E9D14  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 802ECDD8 002E9D18  28 03 00 00 */	cmplwi r3, 0
/* 802ECDDC 002E9D1C  41 82 00 20 */	beq .L_802ECDFC
/* 802ECDE0 002E9D20  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 802ECDE4 002E9D24  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 802ECDE8 002E9D28  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 802ECDEC 002E9D2C  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802ECDF0 002E9D30  D0 3F 02 E8 */	stfs f1, 0x2e8(r31)
/* 802ECDF4 002E9D34  D0 5F 02 EC */	stfs f2, 0x2ec(r31)
/* 802ECDF8 002E9D38  48 00 00 1C */	b .L_802ECE14
.L_802ECDFC:
/* 802ECDFC 002E9D3C  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 802ECE00 002E9D40  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802ECE04 002E9D44  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802ECE08 002E9D48  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 802ECE0C 002E9D4C  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802ECE10 002E9D50  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
.L_802ECE14:
/* 802ECE14 002E9D54  7F E3 FB 78 */	mr r3, r31
/* 802ECE18 002E9D58  48 00 00 19 */	bl updateHomePosition__Q34Game10MiniHoudai3ObjFv
.L_802ECE1C:
/* 802ECE1C 002E9D5C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802ECE20 002E9D60  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802ECE24 002E9D64  7C 08 03 A6 */	mtlr r0
/* 802ECE28 002E9D68  38 21 00 30 */	addi r1, r1, 0x30
/* 802ECE2C 002E9D6C  4E 80 00 20 */	blr 
.endfn updateTargetDistance__Q34Game10MiniHoudai3ObjFv

.fn updateHomePosition__Q34Game10MiniHoudai3ObjFv, global
/* 802ECE30 002E9D70  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802ECE34 002E9D74  C0 02 EC 2C */	lfs f0, lbl_8051CF8C@sda21(r2)
/* 802ECE38 002E9D78  C0 A3 01 FC */	lfs f5, 0x1fc(r3)
/* 802ECE3C 002E9D7C  FC 20 28 90 */	fmr f1, f5
/* 802ECE40 002E9D80  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802ECE44 002E9D84  40 80 00 08 */	bge .L_802ECE4C
/* 802ECE48 002E9D88  FC 20 28 50 */	fneg f1, f5
.L_802ECE4C:
/* 802ECE4C 002E9D8C  C0 62 EC 80 */	lfs f3, lbl_8051CFE0@sda21(r2)
/* 802ECE50 002E9D90  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 802ECE54 002E9D94  C0 02 EC 2C */	lfs f0, lbl_8051CF8C@sda21(r2)
/* 802ECE58 002E9D98  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 802ECE5C 002E9D9C  EC 41 00 F2 */	fmuls f2, f1, f3
/* 802ECE60 002E9DA0  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802ECE64 002E9DA4  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802ECE68 002E9DA8  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802ECE6C 002E9DAC  C0 C4 03 84 */	lfs f6, 0x384(r4)
/* 802ECE70 002E9DB0  FC 00 10 1E */	fctiwz f0, f2
/* 802ECE74 002E9DB4  C0 43 01 90 */	lfs f2, 0x190(r3)
/* 802ECE78 002E9DB8  D8 01 00 08 */	stfd f0, 8(r1)
/* 802ECE7C 002E9DBC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802ECE80 002E9DC0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802ECE84 002E9DC4  7C 85 02 14 */	add r4, r5, r0
/* 802ECE88 002E9DC8  C0 04 00 04 */	lfs f0, 4(r4)
/* 802ECE8C 002E9DCC  EC 80 09 BA */	fmadds f4, f0, f6, f1
/* 802ECE90 002E9DD0  40 80 00 28 */	bge .L_802ECEB8
/* 802ECE94 002E9DD4  C0 02 EC 84 */	lfs f0, lbl_8051CFE4@sda21(r2)
/* 802ECE98 002E9DD8  EC 05 00 32 */	fmuls f0, f5, f0
/* 802ECE9C 002E9DDC  FC 00 00 1E */	fctiwz f0, f0
/* 802ECEA0 002E9DE0  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 802ECEA4 002E9DE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ECEA8 002E9DE8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802ECEAC 002E9DEC  7C 05 04 2E */	lfsx f0, r5, r0
/* 802ECEB0 002E9DF0  FC 20 00 50 */	fneg f1, f0
/* 802ECEB4 002E9DF4  48 00 00 1C */	b .L_802ECED0
.L_802ECEB8:
/* 802ECEB8 002E9DF8  EC 05 00 F2 */	fmuls f0, f5, f3
/* 802ECEBC 002E9DFC  FC 00 00 1E */	fctiwz f0, f0
/* 802ECEC0 002E9E00  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802ECEC4 002E9E04  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802ECEC8 002E9E08  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802ECECC 002E9E0C  7C 25 04 2E */	lfsx f1, r5, r0
.L_802ECED0:
/* 802ECED0 002E9E10  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802ECED4 002E9E14  EC 01 01 BA */	fmadds f0, f1, f6, f0
/* 802ECED8 002E9E18  D0 03 01 98 */	stfs f0, 0x198(r3)
/* 802ECEDC 002E9E1C  D0 43 01 9C */	stfs f2, 0x19c(r3)
/* 802ECEE0 002E9E20  D0 83 01 A0 */	stfs f4, 0x1a0(r3)
/* 802ECEE4 002E9E24  38 21 00 20 */	addi r1, r1, 0x20
/* 802ECEE8 002E9E28  4E 80 00 20 */	blr 
.endfn updateHomePosition__Q34Game10MiniHoudai3ObjFv

.fn isAttackableTarget__Q34Game10MiniHoudai3ObjFv, global
/* 802ECEEC 002E9E2C  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 802ECEF0 002E9E30  7C 08 02 A6 */	mflr r0
/* 802ECEF4 002E9E34  90 01 01 34 */	stw r0, 0x134(r1)
/* 802ECEF8 002E9E38  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 802ECEFC 002E9E3C  F3 E1 01 28 */	psq_st f31, 296(r1), 0, qr0
/* 802ECF00 002E9E40  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 802ECF04 002E9E44  F3 C1 01 18 */	psq_st f30, 280(r1), 0, qr0
/* 802ECF08 002E9E48  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 802ECF0C 002E9E4C  F3 A1 01 08 */	psq_st f29, 264(r1), 0, qr0
/* 802ECF10 002E9E50  DB 81 00 F0 */	stfd f28, 0xf0(r1)
/* 802ECF14 002E9E54  F3 81 00 F8 */	psq_st f28, 248(r1), 0, qr0
/* 802ECF18 002E9E58  DB 61 00 E0 */	stfd f27, 0xe0(r1)
/* 802ECF1C 002E9E5C  F3 61 00 E8 */	psq_st f27, 232(r1), 0, qr0
/* 802ECF20 002E9E60  DB 41 00 D0 */	stfd f26, 0xd0(r1)
/* 802ECF24 002E9E64  F3 41 00 D8 */	psq_st f26, 216(r1), 0, qr0
/* 802ECF28 002E9E68  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 802ECF2C 002E9E6C  93 C1 00 C8 */	stw r30, 0xc8(r1)
/* 802ECF30 002E9E70  93 A1 00 C4 */	stw r29, 0xc4(r1)
/* 802ECF34 002E9E74  7C 7F 1B 78 */	mr r31, r3
/* 802ECF38 002E9E78  38 61 00 20 */	addi r3, r1, 0x20
/* 802ECF3C 002E9E7C  80 9F 02 F8 */	lwz r4, 0x2f8(r31)
/* 802ECF40 002E9E80  48 00 23 A9 */	bl getShotGunPosition__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802ECF44 002E9E84  C0 7F 01 FC */	lfs f3, 0x1fc(r31)
/* 802ECF48 002E9E88  C0 02 EC 2C */	lfs f0, lbl_8051CF8C@sda21(r2)
/* 802ECF4C 002E9E8C  FC 20 18 90 */	fmr f1, f3
/* 802ECF50 002E9E90  C3 81 00 20 */	lfs f28, 0x20(r1)
/* 802ECF54 002E9E94  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802ECF58 002E9E98  C3 61 00 24 */	lfs f27, 0x24(r1)
/* 802ECF5C 002E9E9C  C3 41 00 28 */	lfs f26, 0x28(r1)
/* 802ECF60 002E9EA0  40 80 00 08 */	bge .L_802ECF68
/* 802ECF64 002E9EA4  FC 20 18 50 */	fneg f1, f3
.L_802ECF68:
/* 802ECF68 002E9EA8  C0 42 EC 80 */	lfs f2, lbl_8051CFE0@sda21(r2)
/* 802ECF6C 002E9EAC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802ECF70 002E9EB0  C0 02 EC 2C */	lfs f0, lbl_8051CF8C@sda21(r2)
/* 802ECF74 002E9EB4  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802ECF78 002E9EB8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802ECF7C 002E9EBC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802ECF80 002E9EC0  FC 00 08 1E */	fctiwz f0, f1
/* 802ECF84 002E9EC4  D8 01 00 A8 */	stfd f0, 0xa8(r1)
/* 802ECF88 002E9EC8  80 01 00 AC */	lwz r0, 0xac(r1)
/* 802ECF8C 002E9ECC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802ECF90 002E9ED0  7C 64 02 14 */	add r3, r4, r0
/* 802ECF94 002E9ED4  C3 C3 00 04 */	lfs f30, 4(r3)
/* 802ECF98 002E9ED8  40 80 00 28 */	bge .L_802ECFC0
/* 802ECF9C 002E9EDC  C0 02 EC 84 */	lfs f0, lbl_8051CFE4@sda21(r2)
/* 802ECFA0 002E9EE0  EC 03 00 32 */	fmuls f0, f3, f0
/* 802ECFA4 002E9EE4  FC 00 00 1E */	fctiwz f0, f0
/* 802ECFA8 002E9EE8  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 802ECFAC 002E9EEC  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 802ECFB0 002E9EF0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802ECFB4 002E9EF4  7C 04 04 2E */	lfsx f0, r4, r0
/* 802ECFB8 002E9EF8  FF A0 00 50 */	fneg f29, f0
/* 802ECFBC 002E9EFC  48 00 00 1C */	b .L_802ECFD8
.L_802ECFC0:
/* 802ECFC0 002E9F00  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802ECFC4 002E9F04  FC 00 00 1E */	fctiwz f0, f0
/* 802ECFC8 002E9F08  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 802ECFCC 002E9F0C  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 802ECFD0 002E9F10  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802ECFD4 002E9F14  7F A4 04 2E */	lfsx f29, r4, r0
.L_802ECFD8:
/* 802ECFD8 002E9F18  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802ECFDC 002E9F1C  FF E0 F0 50 */	fneg f31, f30
/* 802ECFE0 002E9F20  C0 02 EC 88 */	lfs f0, lbl_8051CFE8@sda21(r2)
/* 802ECFE4 002E9F24  38 61 00 3C */	addi r3, r1, 0x3c
/* 802ECFE8 002E9F28  C0 44 04 4C */	lfs f2, 0x44c(r4)
/* 802ECFEC 002E9F2C  38 81 00 2C */	addi r4, r1, 0x2c
/* 802ECFF0 002E9F30  C0 22 EC 8C */	lfs f1, lbl_8051CFEC@sda21(r2)
/* 802ECFF4 002E9F34  EC A0 00 B2 */	fmuls f5, f0, f2
/* 802ECFF8 002E9F38  C0 7F 01 94 */	lfs f3, 0x194(r31)
/* 802ECFFC 002E9F3C  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 802ED000 002E9F40  EC 81 00 B2 */	fmuls f4, f1, f2
/* 802ED004 002E9F44  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 802ED008 002E9F48  C0 42 EC 2C */	lfs f2, lbl_8051CF8C@sda21(r2)
/* 802ED00C 002E9F4C  EC 7E 19 7A */	fmadds f3, f30, f5, f3
/* 802ED010 002E9F50  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 802ED014 002E9F54  EC 22 09 7A */	fmadds f1, f2, f5, f1
/* 802ED018 002E9F58  EC 1D 01 7A */	fmadds f0, f29, f5, f0
/* 802ED01C 002E9F5C  D0 61 00 34 */	stfs f3, 0x34(r1)
/* 802ED020 002E9F60  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802ED024 002E9F64  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802ED028 002E9F68  4B F4 13 79 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 802ED02C 002E9F6C  38 00 00 01 */	li r0, 1
/* 802ED030 002E9F70  38 61 00 5C */	addi r3, r1, 0x5c
/* 802ED034 002E9F74  98 01 00 58 */	stb r0, 0x58(r1)
/* 802ED038 002E9F78  38 81 00 3C */	addi r4, r1, 0x3c
/* 802ED03C 002E9F7C  4B F4 13 A5 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 802ED040 002E9F80  38 61 00 5C */	addi r3, r1, 0x5c
/* 802ED044 002E9F84  4B F4 14 19 */	bl first__Q24Game12CellIteratorFv
/* 802ED048 002E9F88  48 00 01 70 */	b .L_802ED1B8
.L_802ED04C:
/* 802ED04C 002E9F8C  38 61 00 5C */	addi r3, r1, 0x5c
/* 802ED050 002E9F90  4B F4 14 F5 */	bl __ml__Q24Game12CellIteratorFv
/* 802ED054 002E9F94  81 83 00 00 */	lwz r12, 0(r3)
/* 802ED058 002E9F98  7C 7E 1B 78 */	mr r30, r3
/* 802ED05C 002E9F9C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802ED060 002E9FA0  7D 89 03 A6 */	mtctr r12
/* 802ED064 002E9FA4  4E 80 04 21 */	bctrl 
/* 802ED068 002E9FA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802ED06C 002E9FAC  41 82 01 44 */	beq .L_802ED1B0
/* 802ED070 002E9FB0  7F C3 F3 78 */	mr r3, r30
/* 802ED074 002E9FB4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ED078 002E9FB8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802ED07C 002E9FBC  7D 89 03 A6 */	mtctr r12
/* 802ED080 002E9FC0  4E 80 04 21 */	bctrl 
/* 802ED084 002E9FC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802ED088 002E9FC8  7C 7D 1B 78 */	mr r29, r3
/* 802ED08C 002E9FCC  40 82 00 40 */	bne .L_802ED0CC
/* 802ED090 002E9FD0  7F C3 F3 78 */	mr r3, r30
/* 802ED094 002E9FD4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ED098 002E9FD8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802ED09C 002E9FDC  7D 89 03 A6 */	mtctr r12
/* 802ED0A0 002E9FE0  4E 80 04 21 */	bctrl 
/* 802ED0A4 002E9FE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802ED0A8 002E9FE8  41 82 00 24 */	beq .L_802ED0CC
/* 802ED0AC 002E9FEC  7F C3 F3 78 */	mr r3, r30
/* 802ED0B0 002E9FF0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ED0B4 002E9FF4  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802ED0B8 002E9FF8  7D 89 03 A6 */	mtctr r12
/* 802ED0BC 002E9FFC  4E 80 04 21 */	bctrl 
/* 802ED0C0 002EA000  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802ED0C4 002EA004  41 82 00 08 */	beq .L_802ED0CC
/* 802ED0C8 002EA008  3B A0 00 01 */	li r29, 1
.L_802ED0CC:
/* 802ED0CC 002EA00C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 802ED0D0 002EA010  41 82 00 E0 */	beq .L_802ED1B0
/* 802ED0D4 002EA014  7F C4 F3 78 */	mr r4, r30
/* 802ED0D8 002EA018  38 61 00 14 */	addi r3, r1, 0x14
/* 802ED0DC 002EA01C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ED0E0 002EA020  81 8C 00 08 */	lwz r12, 8(r12)
/* 802ED0E4 002EA024  7D 89 03 A6 */	mtctr r12
/* 802ED0E8 002EA028  4E 80 04 21 */	bctrl 
/* 802ED0EC 002EA02C  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 802ED0F0 002EA030  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 802ED0F4 002EA034  EC 42 D8 28 */	fsubs f2, f2, f27
/* 802ED0F8 002EA038  C0 81 00 1C */	lfs f4, 0x1c(r1)
/* 802ED0FC 002EA03C  C0 02 EC 2C */	lfs f0, lbl_8051CF8C@sda21(r2)
/* 802ED100 002EA040  EC 63 E0 28 */	fsubs f3, f3, f28
/* 802ED104 002EA044  EC 84 D0 28 */	fsubs f4, f4, f26
/* 802ED108 002EA048  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802ED10C 002EA04C  40 81 00 0C */	ble .L_802ED118
/* 802ED110 002EA050  FC 20 10 90 */	fmr f1, f2
/* 802ED114 002EA054  48 00 00 08 */	b .L_802ED11C
.L_802ED118:
/* 802ED118 002EA058  FC 20 10 50 */	fneg f1, f2
.L_802ED11C:
/* 802ED11C 002EA05C  C0 02 EC 90 */	lfs f0, lbl_8051CFF0@sda21(r2)
/* 802ED120 002EA060  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ED124 002EA064  40 80 00 8C */	bge .L_802ED1B0
/* 802ED128 002EA068  C0 22 EC 2C */	lfs f1, lbl_8051CF8C@sda21(r2)
/* 802ED12C 002EA06C  EC A1 00 B2 */	fmuls f5, f1, f2
/* 802ED130 002EA070  EC 1F 28 FA */	fmadds f0, f31, f3, f5
/* 802ED134 002EA074  EC 5D 01 3A */	fmadds f2, f29, f4, f0
/* 802ED138 002EA078  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802ED13C 002EA07C  40 81 00 08 */	ble .L_802ED144
/* 802ED140 002EA080  48 00 00 08 */	b .L_802ED148
.L_802ED144:
/* 802ED144 002EA084  FC 40 10 50 */	fneg f2, f2
.L_802ED148:
/* 802ED148 002EA088  C0 02 EC 94 */	lfs f0, lbl_8051CFF4@sda21(r2)
/* 802ED14C 002EA08C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802ED150 002EA090  40 80 00 60 */	bge .L_802ED1B0
/* 802ED154 002EA094  EC 3D 28 FA */	fmadds f1, f29, f3, f5
/* 802ED158 002EA098  C0 02 EC 40 */	lfs f0, lbl_8051CFA0@sda21(r2)
/* 802ED15C 002EA09C  EC 3E 09 3A */	fmadds f1, f30, f4, f1
/* 802ED160 002EA0A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ED164 002EA0A4  40 81 00 4C */	ble .L_802ED1B0
/* 802ED168 002EA0A8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802ED16C 002EA0AC  C0 03 04 4C */	lfs f0, 0x44c(r3)
/* 802ED170 002EA0B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ED174 002EA0B4  40 80 00 3C */	bge .L_802ED1B0
/* 802ED178 002EA0B8  7F C4 F3 78 */	mr r4, r30
/* 802ED17C 002EA0BC  38 61 00 08 */	addi r3, r1, 8
/* 802ED180 002EA0C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ED184 002EA0C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802ED188 002EA0C8  7D 89 03 A6 */	mtctr r12
/* 802ED18C 002EA0CC  4E 80 04 21 */	bctrl 
/* 802ED190 002EA0D0  C0 01 00 08 */	lfs f0, 8(r1)
/* 802ED194 002EA0D4  38 60 00 01 */	li r3, 1
/* 802ED198 002EA0D8  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 802ED19C 002EA0DC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802ED1A0 002EA0E0  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 802ED1A4 002EA0E4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802ED1A8 002EA0E8  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 802ED1AC 002EA0EC  48 00 00 20 */	b .L_802ED1CC
.L_802ED1B0:
/* 802ED1B0 002EA0F0  38 61 00 5C */	addi r3, r1, 0x5c
/* 802ED1B4 002EA0F4  4B F4 13 4D */	bl next__Q24Game12CellIteratorFv
.L_802ED1B8:
/* 802ED1B8 002EA0F8  38 61 00 5C */	addi r3, r1, 0x5c
/* 802ED1BC 002EA0FC  4B F4 13 79 */	bl isDone__Q24Game12CellIteratorFv
/* 802ED1C0 002EA100  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802ED1C4 002EA104  41 82 FE 88 */	beq .L_802ED04C
/* 802ED1C8 002EA108  38 60 00 00 */	li r3, 0
.L_802ED1CC:
/* 802ED1CC 002EA10C  E3 E1 01 28 */	psq_l f31, 296(r1), 0, qr0
/* 802ED1D0 002EA110  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 802ED1D4 002EA114  E3 C1 01 18 */	psq_l f30, 280(r1), 0, qr0
/* 802ED1D8 002EA118  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 802ED1DC 002EA11C  E3 A1 01 08 */	psq_l f29, 264(r1), 0, qr0
/* 802ED1E0 002EA120  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 802ED1E4 002EA124  E3 81 00 F8 */	psq_l f28, 248(r1), 0, qr0
/* 802ED1E8 002EA128  CB 81 00 F0 */	lfd f28, 0xf0(r1)
/* 802ED1EC 002EA12C  E3 61 00 E8 */	psq_l f27, 232(r1), 0, qr0
/* 802ED1F0 002EA130  CB 61 00 E0 */	lfd f27, 0xe0(r1)
/* 802ED1F4 002EA134  E3 41 00 D8 */	psq_l f26, 216(r1), 0, qr0
/* 802ED1F8 002EA138  CB 41 00 D0 */	lfd f26, 0xd0(r1)
/* 802ED1FC 002EA13C  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 802ED200 002EA140  83 C1 00 C8 */	lwz r30, 0xc8(r1)
/* 802ED204 002EA144  80 01 01 34 */	lwz r0, 0x134(r1)
/* 802ED208 002EA148  83 A1 00 C4 */	lwz r29, 0xc4(r1)
/* 802ED20C 002EA14C  7C 08 03 A6 */	mtlr r0
/* 802ED210 002EA150  38 21 01 30 */	addi r1, r1, 0x130
/* 802ED214 002EA154  4E 80 00 20 */	blr 
.endfn isAttackableTarget__Q34Game10MiniHoudai3ObjFv

.fn createShotGun__Q34Game10MiniHoudai3ObjFv, global
/* 802ED218 002EA158  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED21C 002EA15C  7C 08 02 A6 */	mflr r0
/* 802ED220 002EA160  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED224 002EA164  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ED228 002EA168  7C 7F 1B 78 */	mr r31, r3
/* 802ED22C 002EA16C  38 60 00 34 */	li r3, 0x34
/* 802ED230 002EA170  4B D3 6C 75 */	bl __nw__FUl
/* 802ED234 002EA174  7C 60 1B 79 */	or. r0, r3, r3
/* 802ED238 002EA178  41 82 00 10 */	beq .L_802ED248
/* 802ED23C 002EA17C  7F E4 FB 78 */	mr r4, r31
/* 802ED240 002EA180  48 00 17 B1 */	bl __ct__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFPQ34Game10MiniHoudai3Obj
/* 802ED244 002EA184  7C 60 1B 78 */	mr r0, r3
.L_802ED248:
/* 802ED248 002EA188  90 1F 02 F8 */	stw r0, 0x2f8(r31)
/* 802ED24C 002EA18C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED250 002EA190  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ED254 002EA194  7C 08 03 A6 */	mtlr r0
/* 802ED258 002EA198  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED25C 002EA19C  4E 80 00 20 */	blr 
.endfn createShotGun__Q34Game10MiniHoudai3ObjFv

.fn setupShotGun__Q34Game10MiniHoudai3ObjFv, global
/* 802ED260 002EA1A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED264 002EA1A4  7C 08 02 A6 */	mflr r0
/* 802ED268 002EA1A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED26C 002EA1AC  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED270 002EA1B0  48 00 19 61 */	bl setupShotGun__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802ED274 002EA1B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED278 002EA1B8  7C 08 03 A6 */	mtlr r0
/* 802ED27C 002EA1BC  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED280 002EA1C0  4E 80 00 20 */	blr 
.endfn setupShotGun__Q34Game10MiniHoudai3ObjFv

.fn resetShotGunCallBack__Q34Game10MiniHoudai3ObjFv, global
/* 802ED284 002EA1C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED288 002EA1C8  7C 08 02 A6 */	mflr r0
/* 802ED28C 002EA1CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED290 002EA1D0  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED294 002EA1D4  48 00 19 A9 */	bl resetCallBack__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802ED298 002EA1D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED29C 002EA1DC  7C 08 03 A6 */	mtlr r0
/* 802ED2A0 002EA1E0  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED2A4 002EA1E4  4E 80 00 20 */	blr 
.endfn resetShotGunCallBack__Q34Game10MiniHoudai3ObjFv

.fn setShotGunCallBack__Q34Game10MiniHoudai3ObjFv, global
/* 802ED2A8 002EA1E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED2AC 002EA1EC  7C 08 02 A6 */	mflr r0
/* 802ED2B0 002EA1F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED2B4 002EA1F4  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED2B8 002EA1F8  48 00 19 91 */	bl setCallBack__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802ED2BC 002EA1FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED2C0 002EA200  7C 08 03 A6 */	mtlr r0
/* 802ED2C4 002EA204  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED2C8 002EA208  4E 80 00 20 */	blr 
.endfn setShotGunCallBack__Q34Game10MiniHoudai3ObjFv

.fn doUpdateShotGun__Q34Game10MiniHoudai3ObjFv, global
/* 802ED2CC 002EA20C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED2D0 002EA210  7C 08 02 A6 */	mflr r0
/* 802ED2D4 002EA214  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED2D8 002EA218  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED2DC 002EA21C  48 00 1E A5 */	bl doUpdate__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802ED2E0 002EA220  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED2E4 002EA224  7C 08 03 A6 */	mtlr r0
/* 802ED2E8 002EA228  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED2EC 002EA22C  4E 80 00 20 */	blr 
.endfn doUpdateShotGun__Q34Game10MiniHoudai3ObjFv

.fn doUpdateCommonShotGun__Q34Game10MiniHoudai3ObjFv, global
/* 802ED2F0 002EA230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED2F4 002EA234  7C 08 02 A6 */	mflr r0
/* 802ED2F8 002EA238  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED2FC 002EA23C  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED300 002EA240  48 00 1E F5 */	bl doUpdateCommon__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802ED304 002EA244  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED308 002EA248  7C 08 03 A6 */	mtlr r0
/* 802ED30C 002EA24C  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED310 002EA250  4E 80 00 20 */	blr 
.endfn doUpdateCommonShotGun__Q34Game10MiniHoudai3ObjFv

.fn startShotGunRotation__Q34Game10MiniHoudai3ObjFv, global
/* 802ED314 002EA254  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED318 002EA258  7C 08 02 A6 */	mflr r0
/* 802ED31C 002EA25C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED320 002EA260  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED324 002EA264  48 00 19 2D */	bl startRotation__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802ED328 002EA268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED32C 002EA26C  7C 08 03 A6 */	mtlr r0
/* 802ED330 002EA270  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED334 002EA274  4E 80 00 20 */	blr 
.endfn startShotGunRotation__Q34Game10MiniHoudai3ObjFv

.fn finishShotGunRotation__Q34Game10MiniHoudai3ObjFv, global
/* 802ED338 002EA278  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED33C 002EA27C  7C 08 02 A6 */	mflr r0
/* 802ED340 002EA280  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED344 002EA284  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED348 002EA288  48 00 19 2D */	bl finishRotation__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802ED34C 002EA28C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED350 002EA290  7C 08 03 A6 */	mtlr r0
/* 802ED354 002EA294  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED358 002EA298  4E 80 00 20 */	blr 
.endfn finishShotGunRotation__Q34Game10MiniHoudai3ObjFv

.fn isShotGunRotation__Q34Game10MiniHoudai3ObjFv, global
/* 802ED35C 002EA29C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED360 002EA2A0  7C 08 02 A6 */	mflr r0
/* 802ED364 002EA2A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED368 002EA2A8  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED36C 002EA2AC  48 00 19 1D */	bl isShotGunRotation__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802ED370 002EA2B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED374 002EA2B4  7C 08 03 A6 */	mtlr r0
/* 802ED378 002EA2B8  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED37C 002EA2BC  4E 80 00 20 */	blr 
.endfn isShotGunRotation__Q34Game10MiniHoudai3ObjFv

.fn isShotGunLockOn__Q34Game10MiniHoudai3ObjFv, global
/* 802ED380 002EA2C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED384 002EA2C4  7C 08 02 A6 */	mflr r0
/* 802ED388 002EA2C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED38C 002EA2CC  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED390 002EA2D0  48 00 19 01 */	bl isShotGunLockOn__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802ED394 002EA2D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED398 002EA2D8  7C 08 03 A6 */	mtlr r0
/* 802ED39C 002EA2DC  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED3A0 002EA2E0  4E 80 00 20 */	blr 
.endfn isShotGunLockOn__Q34Game10MiniHoudai3ObjFv

.fn isFinishShotGun__Q34Game10MiniHoudai3ObjFv, global
/* 802ED3A4 002EA2E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED3A8 002EA2E8  7C 08 02 A6 */	mflr r0
/* 802ED3AC 002EA2EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED3B0 002EA2F0  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED3B4 002EA2F4  48 00 18 E5 */	bl isFinishShotGun__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802ED3B8 002EA2F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED3BC 002EA2FC  7C 08 03 A6 */	mtlr r0
/* 802ED3C0 002EA300  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED3C4 002EA304  4E 80 00 20 */	blr 
.endfn isFinishShotGun__Q34Game10MiniHoudai3ObjFv

.fn emitShotGun__Q34Game10MiniHoudai3ObjFv, global
/* 802ED3C8 002EA308  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED3CC 002EA30C  7C 08 02 A6 */	mflr r0
/* 802ED3D0 002EA310  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED3D4 002EA314  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED3D8 002EA318  48 00 18 E5 */	bl emitShotGun__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802ED3DC 002EA31C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED3E0 002EA320  7C 08 03 A6 */	mtlr r0
/* 802ED3E4 002EA324  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED3E8 002EA328  4E 80 00 20 */	blr 
.endfn emitShotGun__Q34Game10MiniHoudai3ObjFv

.fn setShotGunTargetPosition__Q34Game10MiniHoudai3ObjFv, global
/* 802ED3EC 002EA32C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED3F0 002EA330  7C 08 02 A6 */	mflr r0
/* 802ED3F4 002EA334  7C 64 1B 78 */	mr r4, r3
/* 802ED3F8 002EA338  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED3FC 002EA33C  38 84 02 D8 */	addi r4, r4, 0x2d8
/* 802ED400 002EA340  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED404 002EA344  48 00 18 9D */	bl "setShotGunTarget__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFR10Vector3<f>"
/* 802ED408 002EA348  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED40C 002EA34C  7C 08 03 A6 */	mtlr r0
/* 802ED410 002EA350  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED414 002EA354  4E 80 00 20 */	blr 
.endfn setShotGunTargetPosition__Q34Game10MiniHoudai3ObjFv

.fn forceFinishShotGun__Q34Game10MiniHoudai3ObjFv, global
/* 802ED418 002EA358  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED41C 002EA35C  7C 08 02 A6 */	mflr r0
/* 802ED420 002EA360  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED424 002EA364  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED428 002EA368  48 00 1E 45 */	bl forceFinishShotGun__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802ED42C 002EA36C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED430 002EA370  7C 08 03 A6 */	mtlr r0
/* 802ED434 002EA374  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED438 002EA378  4E 80 00 20 */	blr 
.endfn forceFinishShotGun__Q34Game10MiniHoudai3ObjFv

.fn createEffect__Q34Game10MiniHoudai3ObjFv, global
/* 802ED43C 002EA37C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED440 002EA380  7C 08 02 A6 */	mflr r0
/* 802ED444 002EA384  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED448 002EA388  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ED44C 002EA38C  7C 7F 1B 78 */	mr r31, r3
/* 802ED450 002EA390  38 60 00 14 */	li r3, 0x14
/* 802ED454 002EA394  4B D3 6A 51 */	bl __nw__FUl
/* 802ED458 002EA398  28 03 00 00 */	cmplwi r3, 0
/* 802ED45C 002EA39C  41 82 00 78 */	beq .L_802ED4D4
/* 802ED460 002EA3A0  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802ED464 002EA3A4  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802ED468 002EA3A8  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802ED46C 002EA3AC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802ED470 002EA3B0  90 03 00 00 */	stw r0, 0(r3)
/* 802ED474 002EA3B4  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802ED478 002EA3B8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802ED47C 002EA3BC  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 802ED480 002EA3C0  90 03 00 04 */	stw r0, 4(r3)
/* 802ED484 002EA3C4  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 802ED488 002EA3C8  3C 80 80 4D */	lis r4, __vt__Q23efx12TChibiCharge@ha
/* 802ED48C 002EA3CC  38 05 00 14 */	addi r0, r5, 0x14
/* 802ED490 002EA3D0  90 A3 00 00 */	stw r5, 0(r3)
/* 802ED494 002EA3D4  38 84 48 E0 */	addi r4, r4, __vt__Q23efx12TChibiCharge@l
/* 802ED498 002EA3D8  39 20 00 00 */	li r9, 0
/* 802ED49C 002EA3DC  39 00 02 B2 */	li r8, 0x2b2
/* 802ED4A0 002EA3E0  90 03 00 04 */	stw r0, 4(r3)
/* 802ED4A4 002EA3E4  38 C7 00 14 */	addi r6, r7, 0x14
/* 802ED4A8 002EA3E8  38 A0 02 30 */	li r5, 0x230
/* 802ED4AC 002EA3EC  38 04 00 14 */	addi r0, r4, 0x14
/* 802ED4B0 002EA3F0  91 23 00 08 */	stw r9, 8(r3)
/* 802ED4B4 002EA3F4  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802ED4B8 002EA3F8  99 23 00 0E */	stb r9, 0xe(r3)
/* 802ED4BC 002EA3FC  90 E3 00 00 */	stw r7, 0(r3)
/* 802ED4C0 002EA400  90 C3 00 04 */	stw r6, 4(r3)
/* 802ED4C4 002EA404  91 23 00 10 */	stw r9, 0x10(r3)
/* 802ED4C8 002EA408  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802ED4CC 002EA40C  90 83 00 00 */	stw r4, 0(r3)
/* 802ED4D0 002EA410  90 03 00 04 */	stw r0, 4(r3)
.L_802ED4D4:
/* 802ED4D4 002EA414  90 7F 03 00 */	stw r3, 0x300(r31)
/* 802ED4D8 002EA418  38 60 00 14 */	li r3, 0x14
/* 802ED4DC 002EA41C  4B D3 69 C9 */	bl __nw__FUl
/* 802ED4E0 002EA420  28 03 00 00 */	cmplwi r3, 0
/* 802ED4E4 002EA424  41 82 00 78 */	beq .L_802ED55C
/* 802ED4E8 002EA428  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802ED4EC 002EA42C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802ED4F0 002EA430  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802ED4F4 002EA434  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802ED4F8 002EA438  90 03 00 00 */	stw r0, 0(r3)
/* 802ED4FC 002EA43C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802ED500 002EA440  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802ED504 002EA444  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 802ED508 002EA448  90 03 00 04 */	stw r0, 4(r3)
/* 802ED50C 002EA44C  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 802ED510 002EA450  3C 80 80 4D */	lis r4, __vt__Q23efx15TChibiDeadLight@ha
/* 802ED514 002EA454  38 05 00 14 */	addi r0, r5, 0x14
/* 802ED518 002EA458  90 A3 00 00 */	stw r5, 0(r3)
/* 802ED51C 002EA45C  38 84 48 94 */	addi r4, r4, __vt__Q23efx15TChibiDeadLight@l
/* 802ED520 002EA460  39 20 00 00 */	li r9, 0
/* 802ED524 002EA464  39 00 02 B2 */	li r8, 0x2b2
/* 802ED528 002EA468  90 03 00 04 */	stw r0, 4(r3)
/* 802ED52C 002EA46C  38 C7 00 14 */	addi r6, r7, 0x14
/* 802ED530 002EA470  38 A0 02 31 */	li r5, 0x231
/* 802ED534 002EA474  38 04 00 14 */	addi r0, r4, 0x14
/* 802ED538 002EA478  91 23 00 08 */	stw r9, 8(r3)
/* 802ED53C 002EA47C  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802ED540 002EA480  99 23 00 0E */	stb r9, 0xe(r3)
/* 802ED544 002EA484  90 E3 00 00 */	stw r7, 0(r3)
/* 802ED548 002EA488  90 C3 00 04 */	stw r6, 4(r3)
/* 802ED54C 002EA48C  91 23 00 10 */	stw r9, 0x10(r3)
/* 802ED550 002EA490  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802ED554 002EA494  90 83 00 00 */	stw r4, 0(r3)
/* 802ED558 002EA498  90 03 00 04 */	stw r0, 4(r3)
.L_802ED55C:
/* 802ED55C 002EA49C  90 7F 03 04 */	stw r3, 0x304(r31)
/* 802ED560 002EA4A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED564 002EA4A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ED568 002EA4A8  7C 08 03 A6 */	mtlr r0
/* 802ED56C 002EA4AC  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED570 002EA4B0  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game10MiniHoudai3ObjFv

.fn setupEffect__Q34Game10MiniHoudai3ObjFv, global
/* 802ED574 002EA4B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED578 002EA4B8  7C 08 02 A6 */	mflr r0
/* 802ED57C 002EA4BC  38 82 EC 98 */	addi r4, r2, lbl_8051CFF8@sda21
/* 802ED580 002EA4C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED584 002EA4C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ED588 002EA4C8  7C 7F 1B 78 */	mr r31, r3
/* 802ED58C 002EA4CC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802ED590 002EA4D0  48 15 1A 55 */	bl getJoint__Q28SysShape5ModelFPc
/* 802ED594 002EA4D4  48 13 C3 0D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802ED598 002EA4D8  80 BF 03 00 */	lwz r5, 0x300(r31)
/* 802ED59C 002EA4DC  38 82 EC A0 */	addi r4, r2, lbl_8051D000@sda21
/* 802ED5A0 002EA4E0  90 65 00 10 */	stw r3, 0x10(r5)
/* 802ED5A4 002EA4E4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802ED5A8 002EA4E8  48 15 1A 3D */	bl getJoint__Q28SysShape5ModelFPc
/* 802ED5AC 002EA4EC  48 13 C2 F5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802ED5B0 002EA4F0  80 9F 03 04 */	lwz r4, 0x304(r31)
/* 802ED5B4 002EA4F4  90 64 00 10 */	stw r3, 0x10(r4)
/* 802ED5B8 002EA4F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED5BC 002EA4FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ED5C0 002EA500  7C 08 03 A6 */	mtlr r0
/* 802ED5C4 002EA504  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED5C8 002EA508  4E 80 00 20 */	blr 
.endfn setupEffect__Q34Game10MiniHoudai3ObjFv

.fn createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb, global
/* 802ED5CC 002EA50C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802ED5D0 002EA510  7C 08 02 A6 */	mflr r0
/* 802ED5D4 002EA514  90 01 00 24 */	stw r0, 0x24(r1)
/* 802ED5D8 002EA518  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802ED5DC 002EA51C  41 82 00 1C */	beq .L_802ED5F8
/* 802ED5E0 002EA520  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802ED5E4 002EA524  38 82 EC A8 */	addi r4, r2, lbl_8051D008@sda21
/* 802ED5E8 002EA528  48 15 19 FD */	bl getJoint__Q28SysShape5ModelFPc
/* 802ED5EC 002EA52C  48 13 C2 B5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802ED5F0 002EA530  7C 67 1B 78 */	mr r7, r3
/* 802ED5F4 002EA534  48 00 00 18 */	b .L_802ED60C
.L_802ED5F8:
/* 802ED5F8 002EA538  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802ED5FC 002EA53C  38 82 EC B0 */	addi r4, r2, lbl_8051D010@sda21
/* 802ED600 002EA540  48 15 19 E5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802ED604 002EA544  48 13 C2 9D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802ED608 002EA548  7C 67 1B 78 */	mr r7, r3
.L_802ED60C:
/* 802ED60C 002EA54C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802ED610 002EA550  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 802ED614 002EA554  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802ED618 002EA558  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 802ED61C 002EA55C  90 01 00 08 */	stw r0, 8(r1)
/* 802ED620 002EA560  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 802ED624 002EA564  3C 60 80 4D */	lis r3, __vt__Q23efx12TChibiSmokeS@ha
/* 802ED628 002EA568  38 C0 02 3E */	li r6, 0x23e
/* 802ED62C 002EA56C  90 01 00 08 */	stw r0, 8(r1)
/* 802ED630 002EA570  38 84 6A 14 */	addi r4, r4, __vt__Q23efx11TSimpleMtx1@l
/* 802ED634 002EA574  38 A0 00 00 */	li r5, 0
/* 802ED638 002EA578  38 03 48 80 */	addi r0, r3, __vt__Q23efx12TChibiSmokeS@l
/* 802ED63C 002EA57C  90 81 00 08 */	stw r4, 8(r1)
/* 802ED640 002EA580  38 61 00 08 */	addi r3, r1, 8
/* 802ED644 002EA584  38 80 00 00 */	li r4, 0
/* 802ED648 002EA588  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 802ED64C 002EA58C  90 A1 00 10 */	stw r5, 0x10(r1)
/* 802ED650 002EA590  90 E1 00 14 */	stw r7, 0x14(r1)
/* 802ED654 002EA594  90 01 00 08 */	stw r0, 8(r1)
/* 802ED658 002EA598  48 0C 1C 5D */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 802ED65C 002EA59C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802ED660 002EA5A0  7C 08 03 A6 */	mtlr r0
/* 802ED664 002EA5A4  38 21 00 20 */	addi r1, r1, 0x20
/* 802ED668 002EA5A8  4E 80 00 20 */	blr 
.endfn createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb

.fn createSmokeLargeEffect__Q34Game10MiniHoudai3ObjFv, global
/* 802ED66C 002EA5AC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802ED670 002EA5B0  7C 08 02 A6 */	mflr r0
/* 802ED674 002EA5B4  38 82 EC A8 */	addi r4, r2, lbl_8051D008@sda21
/* 802ED678 002EA5B8  90 01 00 34 */	stw r0, 0x34(r1)
/* 802ED67C 002EA5BC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802ED680 002EA5C0  7C 7F 1B 78 */	mr r31, r3
/* 802ED684 002EA5C4  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802ED688 002EA5C8  48 15 19 5D */	bl getJoint__Q28SysShape5ModelFPc
/* 802ED68C 002EA5CC  48 13 C2 15 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802ED690 002EA5D0  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802ED694 002EA5D4  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 802ED698 002EA5D8  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802ED69C 002EA5DC  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx1@ha
/* 802ED6A0 002EA5E0  90 01 00 18 */	stw r0, 0x18(r1)
/* 802ED6A4 002EA5E4  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 802ED6A8 002EA5E8  3C 80 80 4D */	lis r4, __vt__Q23efx12TChibiSmokeL@ha
/* 802ED6AC 002EA5EC  38 E0 02 3D */	li r7, 0x23d
/* 802ED6B0 002EA5F0  90 01 00 18 */	stw r0, 0x18(r1)
/* 802ED6B4 002EA5F4  38 A5 6A 14 */	addi r5, r5, __vt__Q23efx11TSimpleMtx1@l
/* 802ED6B8 002EA5F8  38 C0 00 00 */	li r6, 0
/* 802ED6BC 002EA5FC  38 04 48 6C */	addi r0, r4, __vt__Q23efx12TChibiSmokeL@l
/* 802ED6C0 002EA600  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802ED6C4 002EA604  38 80 00 00 */	li r4, 0
/* 802ED6C8 002EA608  90 61 00 24 */	stw r3, 0x24(r1)
/* 802ED6CC 002EA60C  38 61 00 18 */	addi r3, r1, 0x18
/* 802ED6D0 002EA610  B0 E1 00 1C */	sth r7, 0x1c(r1)
/* 802ED6D4 002EA614  90 C1 00 20 */	stw r6, 0x20(r1)
/* 802ED6D8 002EA618  90 01 00 18 */	stw r0, 0x18(r1)
/* 802ED6DC 002EA61C  48 0C 1B D9 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 802ED6E0 002EA620  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802ED6E4 002EA624  38 82 EC B0 */	addi r4, r2, lbl_8051D010@sda21
/* 802ED6E8 002EA628  48 15 18 FD */	bl getJoint__Q28SysShape5ModelFPc
/* 802ED6EC 002EA62C  48 13 C1 B5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802ED6F0 002EA630  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802ED6F4 002EA634  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 802ED6F8 002EA638  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802ED6FC 002EA63C  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx1@ha
/* 802ED700 002EA640  90 01 00 08 */	stw r0, 8(r1)
/* 802ED704 002EA644  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 802ED708 002EA648  3C 80 80 4D */	lis r4, __vt__Q23efx12TChibiSmokeL@ha
/* 802ED70C 002EA64C  38 E0 02 3D */	li r7, 0x23d
/* 802ED710 002EA650  90 01 00 08 */	stw r0, 8(r1)
/* 802ED714 002EA654  38 A5 6A 14 */	addi r5, r5, __vt__Q23efx11TSimpleMtx1@l
/* 802ED718 002EA658  38 C0 00 00 */	li r6, 0
/* 802ED71C 002EA65C  38 04 48 6C */	addi r0, r4, __vt__Q23efx12TChibiSmokeL@l
/* 802ED720 002EA660  90 A1 00 08 */	stw r5, 8(r1)
/* 802ED724 002EA664  38 80 00 00 */	li r4, 0
/* 802ED728 002EA668  90 61 00 14 */	stw r3, 0x14(r1)
/* 802ED72C 002EA66C  38 61 00 08 */	addi r3, r1, 8
/* 802ED730 002EA670  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 802ED734 002EA674  90 C1 00 10 */	stw r6, 0x10(r1)
/* 802ED738 002EA678  90 01 00 08 */	stw r0, 8(r1)
/* 802ED73C 002EA67C  48 0C 1B 79 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 802ED740 002EA680  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802ED744 002EA684  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802ED748 002EA688  7C 08 03 A6 */	mtlr r0
/* 802ED74C 002EA68C  38 21 00 30 */	addi r1, r1, 0x30
/* 802ED750 002EA690  4E 80 00 20 */	blr 
.endfn createSmokeLargeEffect__Q34Game10MiniHoudai3ObjFv

.fn createDownEffect__Q34Game10MiniHoudai3ObjFf, global
/* 802ED754 002EA694  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED758 002EA698  7C 08 02 A6 */	mflr r0
/* 802ED75C 002EA69C  38 83 01 8C */	addi r4, r3, 0x18c
/* 802ED760 002EA6A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED764 002EA6A4  4B E1 63 ED */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 802ED768 002EA6A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED76C 002EA6AC  7C 08 03 A6 */	mtlr r0
/* 802ED770 002EA6B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED774 002EA6B4  4E 80 00 20 */	blr 
.endfn createDownEffect__Q34Game10MiniHoudai3ObjFf

.fn startChargeEffect__Q34Game10MiniHoudai3ObjFv, global
/* 802ED778 002EA6B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED77C 002EA6BC  7C 08 02 A6 */	mflr r0
/* 802ED780 002EA6C0  38 80 00 00 */	li r4, 0
/* 802ED784 002EA6C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED788 002EA6C8  80 63 03 00 */	lwz r3, 0x300(r3)
/* 802ED78C 002EA6CC  81 83 00 00 */	lwz r12, 0(r3)
/* 802ED790 002EA6D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802ED794 002EA6D4  7D 89 03 A6 */	mtctr r12
/* 802ED798 002EA6D8  4E 80 04 21 */	bctrl 
/* 802ED79C 002EA6DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED7A0 002EA6E0  7C 08 03 A6 */	mtlr r0
/* 802ED7A4 002EA6E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED7A8 002EA6E8  4E 80 00 20 */	blr 
.endfn startChargeEffect__Q34Game10MiniHoudai3ObjFv

.fn finishChargeEffect__Q34Game10MiniHoudai3ObjFv, global
/* 802ED7AC 002EA6EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED7B0 002EA6F0  7C 08 02 A6 */	mflr r0
/* 802ED7B4 002EA6F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED7B8 002EA6F8  80 63 03 00 */	lwz r3, 0x300(r3)
/* 802ED7BC 002EA6FC  81 83 00 00 */	lwz r12, 0(r3)
/* 802ED7C0 002EA700  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802ED7C4 002EA704  7D 89 03 A6 */	mtctr r12
/* 802ED7C8 002EA708  4E 80 04 21 */	bctrl 
/* 802ED7CC 002EA70C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED7D0 002EA710  7C 08 03 A6 */	mtlr r0
/* 802ED7D4 002EA714  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED7D8 002EA718  4E 80 00 20 */	blr 
.endfn finishChargeEffect__Q34Game10MiniHoudai3ObjFv

.fn createDeadLightEffect__Q34Game10MiniHoudai3ObjFv, global
/* 802ED7DC 002EA71C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED7E0 002EA720  7C 08 02 A6 */	mflr r0
/* 802ED7E4 002EA724  38 80 00 00 */	li r4, 0
/* 802ED7E8 002EA728  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED7EC 002EA72C  80 63 03 04 */	lwz r3, 0x304(r3)
/* 802ED7F0 002EA730  81 83 00 00 */	lwz r12, 0(r3)
/* 802ED7F4 002EA734  81 8C 00 08 */	lwz r12, 8(r12)
/* 802ED7F8 002EA738  7D 89 03 A6 */	mtctr r12
/* 802ED7FC 002EA73C  4E 80 04 21 */	bctrl 
/* 802ED800 002EA740  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ED804 002EA744  7C 08 03 A6 */	mtlr r0
/* 802ED808 002EA748  38 21 00 10 */	addi r1, r1, 0x10
/* 802ED80C 002EA74C  4E 80 00 20 */	blr 
.endfn createDeadLightEffect__Q34Game10MiniHoudai3ObjFv

.fn createDeadBombEmitEffect__Q34Game10MiniHoudai3ObjFv, global
/* 802ED810 002EA750  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 802ED814 002EA754  7C 08 02 A6 */	mflr r0
/* 802ED818 002EA758  38 82 EC 98 */	addi r4, r2, lbl_8051CFF8@sda21
/* 802ED81C 002EA75C  90 01 00 74 */	stw r0, 0x74(r1)
/* 802ED820 002EA760  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 802ED824 002EA764  93 C1 00 68 */	stw r30, 0x68(r1)
/* 802ED828 002EA768  7C 7E 1B 78 */	mr r30, r3
/* 802ED82C 002EA76C  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802ED830 002EA770  48 15 17 B5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802ED834 002EA774  48 13 C0 6D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802ED838 002EA778  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802ED83C 002EA77C  38 A0 00 00 */	li r5, 0
/* 802ED840 002EA780  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802ED844 002EA784  7C 7F 1B 78 */	mr r31, r3
/* 802ED848 002EA788  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple3@ha
/* 802ED84C 002EA78C  90 01 00 40 */	stw r0, 0x40(r1)
/* 802ED850 002EA790  38 03 6A 50 */	addi r0, r3, __vt__Q23efx8TSimple3@l
/* 802ED854 002EA794  3C 60 80 4E */	lis r3, __vt__Q23efx11TSimpleMtx3@ha
/* 802ED858 002EA798  90 01 00 40 */	stw r0, 0x40(r1)
/* 802ED85C 002EA79C  38 03 69 EC */	addi r0, r3, __vt__Q23efx11TSimpleMtx3@l
/* 802ED860 002EA7A0  3C 60 80 4D */	lis r3, __vt__Q23efx11TChibiShoot@ha
/* 802ED864 002EA7A4  38 80 02 3A */	li r4, 0x23a
/* 802ED868 002EA7A8  90 01 00 40 */	stw r0, 0x40(r1)
/* 802ED86C 002EA7AC  38 03 48 58 */	addi r0, r3, __vt__Q23efx11TChibiShoot@l
/* 802ED870 002EA7B0  38 E0 02 3B */	li r7, 0x23b
/* 802ED874 002EA7B4  38 C0 02 3C */	li r6, 0x23c
/* 802ED878 002EA7B8  B0 81 00 44 */	sth r4, 0x44(r1)
/* 802ED87C 002EA7BC  38 61 00 40 */	addi r3, r1, 0x40
/* 802ED880 002EA7C0  38 80 00 00 */	li r4, 0
/* 802ED884 002EA7C4  B0 E1 00 46 */	sth r7, 0x46(r1)
/* 802ED888 002EA7C8  B0 C1 00 48 */	sth r6, 0x48(r1)
/* 802ED88C 002EA7CC  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 802ED890 002EA7D0  90 A1 00 50 */	stw r5, 0x50(r1)
/* 802ED894 002EA7D4  90 A1 00 54 */	stw r5, 0x54(r1)
/* 802ED898 002EA7D8  93 E1 00 58 */	stw r31, 0x58(r1)
/* 802ED89C 002EA7DC  90 01 00 40 */	stw r0, 0x40(r1)
/* 802ED8A0 002EA7E0  48 0C 1C 15 */	bl create__Q23efx11TSimpleMtx3FPQ23efx3Arg
/* 802ED8A4 002EA7E4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802ED8A8 002EA7E8  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 802ED8AC 002EA7EC  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802ED8B0 002EA7F0  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 802ED8B4 002EA7F4  90 01 00 08 */	stw r0, 8(r1)
/* 802ED8B8 002EA7F8  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 802ED8BC 002EA7FC  3C 60 80 4D */	lis r3, __vt__Q23efx15TChibiDeadMouth@ha
/* 802ED8C0 002EA800  38 C0 02 32 */	li r6, 0x232
/* 802ED8C4 002EA804  90 01 00 08 */	stw r0, 8(r1)
/* 802ED8C8 002EA808  38 84 6A 14 */	addi r4, r4, __vt__Q23efx11TSimpleMtx1@l
/* 802ED8CC 002EA80C  38 A0 00 00 */	li r5, 0
/* 802ED8D0 002EA810  38 03 48 44 */	addi r0, r3, __vt__Q23efx15TChibiDeadMouth@l
/* 802ED8D4 002EA814  90 81 00 08 */	stw r4, 8(r1)
/* 802ED8D8 002EA818  38 61 00 08 */	addi r3, r1, 8
/* 802ED8DC 002EA81C  38 80 00 00 */	li r4, 0
/* 802ED8E0 002EA820  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 802ED8E4 002EA824  90 A1 00 10 */	stw r5, 0x10(r1)
/* 802ED8E8 002EA828  93 E1 00 14 */	stw r31, 0x14(r1)
/* 802ED8EC 002EA82C  90 01 00 08 */	stw r0, 8(r1)
/* 802ED8F0 002EA830  48 0C 19 C5 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 802ED8F4 002EA834  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802ED8F8 002EA838  38 82 EC A8 */	addi r4, r2, lbl_8051D008@sda21
/* 802ED8FC 002EA83C  48 15 16 E9 */	bl getJoint__Q28SysShape5ModelFPc
/* 802ED900 002EA840  48 13 BF A1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802ED904 002EA844  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802ED908 002EA848  38 C0 00 00 */	li r6, 0
/* 802ED90C 002EA84C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802ED910 002EA850  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 802ED914 002EA854  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802ED918 002EA858  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 802ED91C 002EA85C  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 802ED920 002EA860  3C 80 80 4D */	lis r4, __vt__Q23efx12TChibiDeadSe@ha
/* 802ED924 002EA864  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802ED928 002EA868  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 802ED92C 002EA86C  38 E0 02 33 */	li r7, 0x233
/* 802ED930 002EA870  38 A0 02 34 */	li r5, 0x234
/* 802ED934 002EA874  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802ED938 002EA878  38 04 48 30 */	addi r0, r4, __vt__Q23efx12TChibiDeadSe@l
/* 802ED93C 002EA87C  38 80 00 00 */	li r4, 0
/* 802ED940 002EA880  90 61 00 3C */	stw r3, 0x3c(r1)
/* 802ED944 002EA884  38 61 00 2C */	addi r3, r1, 0x2c
/* 802ED948 002EA888  B0 E1 00 30 */	sth r7, 0x30(r1)
/* 802ED94C 002EA88C  B0 A1 00 32 */	sth r5, 0x32(r1)
/* 802ED950 002EA890  90 C1 00 34 */	stw r6, 0x34(r1)
/* 802ED954 002EA894  90 C1 00 38 */	stw r6, 0x38(r1)
/* 802ED958 002EA898  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802ED95C 002EA89C  48 0C 1A 3D */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 802ED960 002EA8A0  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802ED964 002EA8A4  38 82 EC B0 */	addi r4, r2, lbl_8051D010@sda21
/* 802ED968 002EA8A8  48 15 16 7D */	bl getJoint__Q28SysShape5ModelFPc
/* 802ED96C 002EA8AC  48 13 BF 35 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802ED970 002EA8B0  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802ED974 002EA8B4  38 C0 00 00 */	li r6, 0
/* 802ED978 002EA8B8  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802ED97C 002EA8BC  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 802ED980 002EA8C0  90 01 00 18 */	stw r0, 0x18(r1)
/* 802ED984 002EA8C4  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 802ED988 002EA8C8  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 802ED98C 002EA8CC  3C 80 80 4D */	lis r4, __vt__Q23efx12TChibiDeadSe@ha
/* 802ED990 002EA8D0  90 01 00 18 */	stw r0, 0x18(r1)
/* 802ED994 002EA8D4  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 802ED998 002EA8D8  38 E0 02 33 */	li r7, 0x233
/* 802ED99C 002EA8DC  38 A0 02 34 */	li r5, 0x234
/* 802ED9A0 002EA8E0  90 01 00 18 */	stw r0, 0x18(r1)
/* 802ED9A4 002EA8E4  38 04 48 30 */	addi r0, r4, __vt__Q23efx12TChibiDeadSe@l
/* 802ED9A8 002EA8E8  38 80 00 00 */	li r4, 0
/* 802ED9AC 002EA8EC  90 61 00 28 */	stw r3, 0x28(r1)
/* 802ED9B0 002EA8F0  38 61 00 18 */	addi r3, r1, 0x18
/* 802ED9B4 002EA8F4  B0 E1 00 1C */	sth r7, 0x1c(r1)
/* 802ED9B8 002EA8F8  B0 A1 00 1E */	sth r5, 0x1e(r1)
/* 802ED9BC 002EA8FC  90 C1 00 20 */	stw r6, 0x20(r1)
/* 802ED9C0 002EA900  90 C1 00 24 */	stw r6, 0x24(r1)
/* 802ED9C4 002EA904  90 01 00 18 */	stw r0, 0x18(r1)
/* 802ED9C8 002EA908  48 0C 19 D1 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 802ED9CC 002EA90C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802ED9D0 002EA910  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 802ED9D4 002EA914  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 802ED9D8 002EA918  7C 08 03 A6 */	mtlr r0
/* 802ED9DC 002EA91C  38 21 00 70 */	addi r1, r1, 0x70
/* 802ED9E0 002EA920  4E 80 00 20 */	blr 
.endfn createDeadBombEmitEffect__Q34Game10MiniHoudai3ObjFv

.fn effectDrawOn__Q34Game10MiniHoudai3ObjFv, global
/* 802ED9E4 002EA924  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ED9E8 002EA928  7C 08 02 A6 */	mflr r0
/* 802ED9EC 002EA92C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ED9F0 002EA930  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ED9F4 002EA934  7C 7F 1B 78 */	mr r31, r3
/* 802ED9F8 002EA938  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802ED9FC 002EA93C  48 00 1D ED */	bl effectDrawOn__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802EDA00 002EA940  80 7F 03 00 */	lwz r3, 0x300(r31)
/* 802EDA04 002EA944  81 83 00 00 */	lwz r12, 0(r3)
/* 802EDA08 002EA948  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802EDA0C 002EA94C  7D 89 03 A6 */	mtctr r12
/* 802EDA10 002EA950  4E 80 04 21 */	bctrl 
/* 802EDA14 002EA954  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 802EDA18 002EA958  81 83 00 00 */	lwz r12, 0(r3)
/* 802EDA1C 002EA95C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802EDA20 002EA960  7D 89 03 A6 */	mtctr r12
/* 802EDA24 002EA964  4E 80 04 21 */	bctrl 
/* 802EDA28 002EA968  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EDA2C 002EA96C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EDA30 002EA970  7C 08 03 A6 */	mtlr r0
/* 802EDA34 002EA974  38 21 00 10 */	addi r1, r1, 0x10
/* 802EDA38 002EA978  4E 80 00 20 */	blr 
.endfn effectDrawOn__Q34Game10MiniHoudai3ObjFv

.fn effectDrawOff__Q34Game10MiniHoudai3ObjFv, global
/* 802EDA3C 002EA97C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EDA40 002EA980  7C 08 02 A6 */	mflr r0
/* 802EDA44 002EA984  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EDA48 002EA988  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EDA4C 002EA98C  7C 7F 1B 78 */	mr r31, r3
/* 802EDA50 002EA990  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 802EDA54 002EA994  48 00 1E 1D */	bl effectDrawOff__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
/* 802EDA58 002EA998  80 7F 03 00 */	lwz r3, 0x300(r31)
/* 802EDA5C 002EA99C  81 83 00 00 */	lwz r12, 0(r3)
/* 802EDA60 002EA9A0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802EDA64 002EA9A4  7D 89 03 A6 */	mtctr r12
/* 802EDA68 002EA9A8  4E 80 04 21 */	bctrl 
/* 802EDA6C 002EA9AC  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 802EDA70 002EA9B0  81 83 00 00 */	lwz r12, 0(r3)
/* 802EDA74 002EA9B4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802EDA78 002EA9B8  7D 89 03 A6 */	mtctr r12
/* 802EDA7C 002EA9BC  4E 80 04 21 */	bctrl 
/* 802EDA80 002EA9C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EDA84 002EA9C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EDA88 002EA9C8  7C 08 03 A6 */	mtlr r0
/* 802EDA8C 002EA9CC  38 21 00 10 */	addi r1, r1, 0x10
/* 802EDA90 002EA9D0  4E 80 00 20 */	blr 
.endfn effectDrawOff__Q34Game10MiniHoudai3ObjFv

.fn __dt__Q23efx15TChibiDeadLightFv, weak
/* 802EDA94 002EA9D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EDA98 002EA9D8  7C 08 02 A6 */	mflr r0
/* 802EDA9C 002EA9DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EDAA0 002EA9E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EDAA4 002EA9E4  7C 9F 23 78 */	mr r31, r4
/* 802EDAA8 002EA9E8  93 C1 00 08 */	stw r30, 8(r1)
/* 802EDAAC 002EA9EC  7C 7E 1B 79 */	or. r30, r3, r3
/* 802EDAB0 002EA9F0  41 82 00 64 */	beq .L_802EDB14
/* 802EDAB4 002EA9F4  3C 60 80 4D */	lis r3, __vt__Q23efx15TChibiDeadLight@ha
/* 802EDAB8 002EA9F8  38 63 48 94 */	addi r3, r3, __vt__Q23efx15TChibiDeadLight@l
/* 802EDABC 002EA9FC  90 7E 00 00 */	stw r3, 0(r30)
/* 802EDAC0 002EAA00  38 03 00 14 */	addi r0, r3, 0x14
/* 802EDAC4 002EAA04  90 1E 00 04 */	stw r0, 4(r30)
/* 802EDAC8 002EAA08  41 82 00 3C */	beq .L_802EDB04
/* 802EDACC 002EAA0C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802EDAD0 002EAA10  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802EDAD4 002EAA14  90 7E 00 00 */	stw r3, 0(r30)
/* 802EDAD8 002EAA18  38 03 00 14 */	addi r0, r3, 0x14
/* 802EDADC 002EAA1C  90 1E 00 04 */	stw r0, 4(r30)
/* 802EDAE0 002EAA20  41 82 00 24 */	beq .L_802EDB04
/* 802EDAE4 002EAA24  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802EDAE8 002EAA28  38 7E 00 04 */	addi r3, r30, 4
/* 802EDAEC 002EAA2C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802EDAF0 002EAA30  38 80 00 00 */	li r4, 0
/* 802EDAF4 002EAA34  90 BE 00 00 */	stw r5, 0(r30)
/* 802EDAF8 002EAA38  38 05 00 14 */	addi r0, r5, 0x14
/* 802EDAFC 002EAA3C  90 1E 00 04 */	stw r0, 4(r30)
/* 802EDB00 002EAA40  4B DA 21 9D */	bl __dt__18JPAEmitterCallBackFv
.L_802EDB04:
/* 802EDB04 002EAA44  7F E0 07 35 */	extsh. r0, r31
/* 802EDB08 002EAA48  40 81 00 0C */	ble .L_802EDB14
/* 802EDB0C 002EAA4C  7F C3 F3 78 */	mr r3, r30
/* 802EDB10 002EAA50  4B D3 65 A5 */	bl __dl__FPv
.L_802EDB14:
/* 802EDB14 002EAA54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EDB18 002EAA58  7F C3 F3 78 */	mr r3, r30
/* 802EDB1C 002EAA5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EDB20 002EAA60  83 C1 00 08 */	lwz r30, 8(r1)
/* 802EDB24 002EAA64  7C 08 03 A6 */	mtlr r0
/* 802EDB28 002EAA68  38 21 00 10 */	addi r1, r1, 0x10
/* 802EDB2C 002EAA6C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx15TChibiDeadLightFv

.fn __dt__Q23efx12TChibiChargeFv, weak
/* 802EDB30 002EAA70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EDB34 002EAA74  7C 08 02 A6 */	mflr r0
/* 802EDB38 002EAA78  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EDB3C 002EAA7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EDB40 002EAA80  7C 9F 23 78 */	mr r31, r4
/* 802EDB44 002EAA84  93 C1 00 08 */	stw r30, 8(r1)
/* 802EDB48 002EAA88  7C 7E 1B 79 */	or. r30, r3, r3
/* 802EDB4C 002EAA8C  41 82 00 64 */	beq .L_802EDBB0
/* 802EDB50 002EAA90  3C 60 80 4D */	lis r3, __vt__Q23efx12TChibiCharge@ha
/* 802EDB54 002EAA94  38 63 48 E0 */	addi r3, r3, __vt__Q23efx12TChibiCharge@l
/* 802EDB58 002EAA98  90 7E 00 00 */	stw r3, 0(r30)
/* 802EDB5C 002EAA9C  38 03 00 14 */	addi r0, r3, 0x14
/* 802EDB60 002EAAA0  90 1E 00 04 */	stw r0, 4(r30)
/* 802EDB64 002EAAA4  41 82 00 3C */	beq .L_802EDBA0
/* 802EDB68 002EAAA8  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802EDB6C 002EAAAC  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802EDB70 002EAAB0  90 7E 00 00 */	stw r3, 0(r30)
/* 802EDB74 002EAAB4  38 03 00 14 */	addi r0, r3, 0x14
/* 802EDB78 002EAAB8  90 1E 00 04 */	stw r0, 4(r30)
/* 802EDB7C 002EAABC  41 82 00 24 */	beq .L_802EDBA0
/* 802EDB80 002EAAC0  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802EDB84 002EAAC4  38 7E 00 04 */	addi r3, r30, 4
/* 802EDB88 002EAAC8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802EDB8C 002EAACC  38 80 00 00 */	li r4, 0
/* 802EDB90 002EAAD0  90 BE 00 00 */	stw r5, 0(r30)
/* 802EDB94 002EAAD4  38 05 00 14 */	addi r0, r5, 0x14
/* 802EDB98 002EAAD8  90 1E 00 04 */	stw r0, 4(r30)
/* 802EDB9C 002EAADC  4B DA 21 01 */	bl __dt__18JPAEmitterCallBackFv
.L_802EDBA0:
/* 802EDBA0 002EAAE0  7F E0 07 35 */	extsh. r0, r31
/* 802EDBA4 002EAAE4  40 81 00 0C */	ble .L_802EDBB0
/* 802EDBA8 002EAAE8  7F C3 F3 78 */	mr r3, r30
/* 802EDBAC 002EAAEC  4B D3 65 09 */	bl __dl__FPv
.L_802EDBB0:
/* 802EDBB0 002EAAF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EDBB4 002EAAF4  7F C3 F3 78 */	mr r3, r30
/* 802EDBB8 002EAAF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EDBBC 002EAAFC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802EDBC0 002EAB00  7C 08 03 A6 */	mtlr r0
/* 802EDBC4 002EAB04  38 21 00 10 */	addi r1, r1, 0x10
/* 802EDBC8 002EAB08  4E 80 00 20 */	blr 
.endfn __dt__Q23efx12TChibiChargeFv

.fn __dt__Q34Game10MiniHoudai3ObjFv, weak
/* 802EDBCC 002EAB0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EDBD0 002EAB10  7C 08 02 A6 */	mflr r0
/* 802EDBD4 002EAB14  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EDBD8 002EAB18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EDBDC 002EAB1C  7C 7F 1B 79 */	or. r31, r3, r3
/* 802EDBE0 002EAB20  93 C1 00 08 */	stw r30, 8(r1)
/* 802EDBE4 002EAB24  7C 9E 23 78 */	mr r30, r4
/* 802EDBE8 002EAB28  41 82 00 84 */	beq .L_802EDC6C
/* 802EDBEC 002EAB2C  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai3Obj@ha
/* 802EDBF0 002EAB30  38 1F 03 08 */	addi r0, r31, 0x308
/* 802EDBF4 002EAB34  38 83 49 2C */	addi r4, r3, __vt__Q34Game10MiniHoudai3Obj@l
/* 802EDBF8 002EAB38  90 9F 00 00 */	stw r4, 0(r31)
/* 802EDBFC 002EAB3C  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 802EDC00 002EAB40  38 84 02 FC */	addi r4, r4, 0x2fc
/* 802EDC04 002EAB44  90 7F 01 78 */	stw r3, 0x178(r31)
/* 802EDC08 002EAB48  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 802EDC0C 002EAB4C  90 83 00 00 */	stw r4, 0(r3)
/* 802EDC10 002EAB50  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 802EDC14 002EAB54  7C 03 00 50 */	subf r0, r3, r0
/* 802EDC18 002EAB58  90 03 00 0C */	stw r0, 0xc(r3)
/* 802EDC1C 002EAB5C  41 82 00 40 */	beq .L_802EDC5C
/* 802EDC20 002EAB60  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 802EDC24 002EAB64  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 802EDC28 002EAB68  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 802EDC2C 002EAB6C  38 7F 02 90 */	addi r3, r31, 0x290
/* 802EDC30 002EAB70  90 9F 00 00 */	stw r4, 0(r31)
/* 802EDC34 002EAB74  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 802EDC38 002EAB78  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 802EDC3C 002EAB7C  38 80 FF FF */	li r4, -1
/* 802EDC40 002EAB80  90 BF 01 78 */	stw r5, 0x178(r31)
/* 802EDC44 002EAB84  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 802EDC48 002EAB88  90 C5 00 00 */	stw r6, 0(r5)
/* 802EDC4C 002EAB8C  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 802EDC50 002EAB90  7C 05 00 50 */	subf r0, r5, r0
/* 802EDC54 002EAB94  90 05 00 0C */	stw r0, 0xc(r5)
/* 802EDC58 002EAB98  48 12 39 31 */	bl __dt__5CNodeFv
.L_802EDC5C:
/* 802EDC5C 002EAB9C  7F C0 07 35 */	extsh. r0, r30
/* 802EDC60 002EABA0  40 81 00 0C */	ble .L_802EDC6C
/* 802EDC64 002EABA4  7F E3 FB 78 */	mr r3, r31
/* 802EDC68 002EABA8  4B D3 64 4D */	bl __dl__FPv
.L_802EDC6C:
/* 802EDC6C 002EABAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EDC70 002EABB0  7F E3 FB 78 */	mr r3, r31
/* 802EDC74 002EABB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EDC78 002EABB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802EDC7C 002EABBC  7C 08 03 A6 */	mtlr r0
/* 802EDC80 002EABC0  38 21 00 10 */	addi r1, r1, 0x10
/* 802EDC84 002EABC4  4E 80 00 20 */	blr 
.endfn __dt__Q34Game10MiniHoudai3ObjFv

.fn getDownSmokeScale__Q34Game10MiniHoudai3ObjFv, weak
/* 802EDC88 002EABC8  C0 22 EC B8 */	lfs f1, lbl_8051D018@sda21(r2)
/* 802EDC8C 002EABCC  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game10MiniHoudai3ObjFv

.fn "@4@__dt__Q23efx12TChibiChargeFv", weak
/* 802EDC90 002EABD0  38 63 FF FC */	addi r3, r3, -4
/* 802EDC94 002EABD4  4B FF FE 9C */	b __dt__Q23efx12TChibiChargeFv
.endfn "@4@__dt__Q23efx12TChibiChargeFv"

.fn "@4@__dt__Q23efx15TChibiDeadLightFv", weak
/* 802EDC98 002EABD8  38 63 FF FC */	addi r3, r3, -4
/* 802EDC9C 002EABDC  4B FF FD F8 */	b __dt__Q23efx15TChibiDeadLightFv
.endfn "@4@__dt__Q23efx15TChibiDeadLightFv"
