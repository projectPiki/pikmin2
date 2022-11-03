.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_tyre_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80495820:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.balign 4
lbl_8049582C:
	.asciz "tyre.cpp"
.balign 4
lbl_80495838:
	.asciz "P2Assert"
.balign 4
lbl_80495844:
	.asciz "tyrefront"
.balign 4
lbl_80495850:
	.asciz "tyreback"
.balign 4
lbl_8049585C:
	.asciz "ArgRotYScale"
.balign 4
lbl_8049586C:
	.asciz "ArgEnemyType"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
lbl_804E63C8:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q23efx10TKageRecov
__vt__Q23efx10TKageRecov:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.global __vt__Q23efx13TKageTyredead
__vt__Q23efx13TKageTyredead:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple3FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.global __vt__Q23efx14TKageTyresmoke
__vt__Q23efx14TKageTyresmoke:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TKageTyresmokeFv"
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
	.4byte __dt__Q23efx14TKageTyresmokeFv
.global __vt__Q34Game4Tyre3Obj
__vt__Q34Game4Tyre3Obj:
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
	.4byte onInit__Q34Game4Tyre3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q34Game4Tyre3ObjFf
	.4byte doDirectDraw__Q34Game4Tyre3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game4Tyre3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game4Tyre3ObjFv
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
	.4byte isUnderground__Q34Game4Tyre3ObjFv
	.4byte isLivingThing__Q24Game8CreatureFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
	.4byte collisionCallback__Q34Game4Tyre3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game4Tyre3ObjFRQ24Game11ShadowParam
	.4byte needShadow__Q34Game4Tyre3ObjFv
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
	.4byte __dt__Q34Game4Tyre3ObjFv
	.4byte "birth__Q34Game4Tyre3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game4Tyre3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game4Tyre3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game4Tyre3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game4Tyre3ObjFR8Graphics
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
	.4byte setParameters__Q34Game4Tyre3ObjFv
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
	.4byte getEnemyTypeID__Q34Game4Tyre3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q34Game4Tyre3ObjFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game4Tyre3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game4Tyre3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q34Game4Tyre3ObjFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q34Game4Tyre3ObjFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game4Tyre3ObjFv
	.4byte doFinishStoneState__Q34Game4Tyre3ObjFv
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
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q24Game9EnemyBaseFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game4Tyre3ObjFPQ34Game4Tyre3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@836@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@836@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@836@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@836@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@836@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@836@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4
.global curT__Q24Game4Tyre
curT__Q24Game4Tyre:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051F5B8:
	.float 0.0
lbl_8051F5BC:
	.float 0.01
lbl_8051F5C0:
	.float 0.5
lbl_8051F5C4:
	.float 1.0
lbl_8051F5C8:
	.float -1000.0
lbl_8051F5CC:
	.float 10000.0
lbl_8051F5D0:
	.float 900.0
.balign 8
lbl_8051F5D8:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_8051F5E0:
	.float 2.0
lbl_8051F5E4:
	.float 20.0
lbl_8051F5E8:
	.float 10.0
.balign 4
lbl_8051F5EC:
	.asciz "tyreFL"
.balign 4
lbl_8051F5F4:
	.asciz "TyreFR"
.balign 4
lbl_8051F5FC:
	.float 100.0
lbl_8051F600:
	.float 5.0
lbl_8051F604:
	.float 50.0
lbl_8051F608:
	.float 80.0
lbl_8051F60C:
	.float 0.8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global frontTyreCallBack__Q24Game4TyreFP8J3DJointi
frontTyreCallBack__Q24Game4TyreFP8J3DJointi:
/* 803AC2F0 003A9230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AC2F4 003A9234  7C 08 02 A6 */	mflr r0
/* 803AC2F8 003A9238  2C 04 00 00 */	cmpwi r4, 0
/* 803AC2FC 003A923C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AC300 003A9240  40 82 00 14 */	bne .L_803AC314
/* 803AC304 003A9244  80 6D 99 F0 */	lwz r3, curT__Q24Game4Tyre@sda21(r13)
/* 803AC308 003A9248  28 03 00 00 */	cmplwi r3, 0
/* 803AC30C 003A924C  41 82 00 08 */	beq .L_803AC314
/* 803AC310 003A9250  48 00 12 11 */	bl frontRollMtxCalc__Q34Game4Tyre3ObjFv
.L_803AC314:
/* 803AC314 003A9254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AC318 003A9258  38 60 00 01 */	li r3, 1
/* 803AC31C 003A925C  7C 08 03 A6 */	mtlr r0
/* 803AC320 003A9260  38 21 00 10 */	addi r1, r1, 0x10
/* 803AC324 003A9264  4E 80 00 20 */	blr 

.global rearTyreCallBack__Q24Game4TyreFP8J3DJointi
rearTyreCallBack__Q24Game4TyreFP8J3DJointi:
/* 803AC328 003A9268  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AC32C 003A926C  7C 08 02 A6 */	mflr r0
/* 803AC330 003A9270  2C 04 00 00 */	cmpwi r4, 0
/* 803AC334 003A9274  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AC338 003A9278  40 82 00 14 */	bne .L_803AC34C
/* 803AC33C 003A927C  80 6D 99 F0 */	lwz r3, curT__Q24Game4Tyre@sda21(r13)
/* 803AC340 003A9280  28 03 00 00 */	cmplwi r3, 0
/* 803AC344 003A9284  41 82 00 08 */	beq .L_803AC34C
/* 803AC348 003A9288  48 00 14 71 */	bl rearRollMtxCalc__Q34Game4Tyre3ObjFv
.L_803AC34C:
/* 803AC34C 003A928C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AC350 003A9290  38 60 00 01 */	li r3, 1
/* 803AC354 003A9294  7C 08 03 A6 */	mtlr r0
/* 803AC358 003A9298  38 21 00 10 */	addi r1, r1, 0x10
/* 803AC35C 003A929C  4E 80 00 20 */	blr 

.global setParameters__Q34Game4Tyre3ObjFv
setParameters__Q34Game4Tyre3ObjFv:
/* 803AC360 003A92A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AC364 003A92A4  7C 08 02 A6 */	mflr r0
/* 803AC368 003A92A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AC36C 003A92AC  4B D5 68 6D */	bl setParameters__Q24Game9EnemyBaseFv
/* 803AC370 003A92B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AC374 003A92B4  7C 08 03 A6 */	mtlr r0
/* 803AC378 003A92B8  38 21 00 10 */	addi r1, r1, 0x10
/* 803AC37C 003A92BC  4E 80 00 20 */	blr 

.global "birth__Q34Game4Tyre3ObjFR10Vector3<f>f"
"birth__Q34Game4Tyre3ObjFR10Vector3<f>f":
/* 803AC380 003A92C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AC384 003A92C4  7C 08 02 A6 */	mflr r0
/* 803AC388 003A92C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AC38C 003A92CC  4B D5 66 75 */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 803AC390 003A92D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AC394 003A92D4  7C 08 03 A6 */	mtlr r0
/* 803AC398 003A92D8  38 21 00 10 */	addi r1, r1, 0x10
/* 803AC39C 003A92DC  4E 80 00 20 */	blr 

.global onInit__Q34Game4Tyre3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game4Tyre3ObjFPQ24Game15CreatureInitArg:
/* 803AC3A0 003A92E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803AC3A4 003A92E4  7C 08 02 A6 */	mflr r0
/* 803AC3A8 003A92E8  3C A0 80 49 */	lis r5, lbl_80495820@ha
/* 803AC3AC 003A92EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803AC3B0 003A92F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803AC3B4 003A92F4  7C 7F 1B 78 */	mr r31, r3
/* 803AC3B8 003A92F8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803AC3BC 003A92FC  3B C5 58 20 */	addi r30, r5, lbl_80495820@l
/* 803AC3C0 003A9300  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803AC3C4 003A9304  4B D5 56 95 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 803AC3C8 003A9308  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803AC3CC 003A930C  7F E3 FB 78 */	mr r3, r31
/* 803AC3D0 003A9310  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 803AC3D4 003A9314  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 803AC3D8 003A9318  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803AC3DC 003A931C  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 803AC3E0 003A9320  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 803AC3E4 003A9324  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803AC3E8 003A9328  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 803AC3EC 003A932C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 803AC3F0 003A9330  4B D5 56 19 */	bl setEmotionNone__Q24Game9EnemyBaseFv
/* 803AC3F4 003A9334  7F E3 FB 78 */	mr r3, r31
/* 803AC3F8 003A9338  4B D5 B3 85 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 803AC3FC 003A933C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803AC400 003A9340  7F E4 FB 78 */	mr r4, r31
/* 803AC404 003A9344  38 A0 00 01 */	li r5, 1
/* 803AC408 003A9348  38 C0 00 00 */	li r6, 0
/* 803AC40C 003A934C  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 803AC410 003A9350  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 803AC414 003A9354  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 803AC418 003A9358  81 83 00 00 */	lwz r12, 0(r3)
/* 803AC41C 003A935C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803AC420 003A9360  7D 89 03 A6 */	mtctr r12
/* 803AC424 003A9364  4E 80 04 21 */	bctrl 
/* 803AC428 003A9368  38 00 00 00 */	li r0, 0
/* 803AC42C 003A936C  90 0D 99 F0 */	stw r0, curT__Q24Game4Tyre@sda21(r13)
/* 803AC430 003A9370  80 1F 01 74 */	lwz r0, 0x174(r31)
/* 803AC434 003A9374  28 00 00 00 */	cmplwi r0, 0
/* 803AC438 003A9378  40 82 00 18 */	bne .L_803AC450
/* 803AC43C 003A937C  38 7E 00 0C */	addi r3, r30, 0xc
/* 803AC440 003A9380  38 BE 00 18 */	addi r5, r30, 0x18
/* 803AC444 003A9384  38 80 00 60 */	li r4, 0x60
/* 803AC448 003A9388  4C C6 31 82 */	crclr 6
/* 803AC44C 003A938C  4B C7 E1 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AC450:
/* 803AC450 003A9390  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 803AC454 003A9394  38 9E 00 24 */	addi r4, r30, 0x24
/* 803AC458 003A9398  80 A3 00 08 */	lwz r5, 8(r3)
/* 803AC45C 003A939C  83 A5 00 04 */	lwz r29, 4(r5)
/* 803AC460 003A93A0  48 09 2B 55 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 803AC464 003A93A4  B0 7F 03 10 */	sth r3, 0x310(r31)
/* 803AC468 003A93A8  38 9E 00 30 */	addi r4, r30, 0x30
/* 803AC46C 003A93AC  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 803AC470 003A93B0  48 09 2B 45 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 803AC474 003A93B4  B0 7F 03 12 */	sth r3, 0x312(r31)
/* 803AC478 003A93B8  3C 80 80 3B */	lis r4, frontTyreCallBack__Q24Game4TyreFP8J3DJointi@ha
/* 803AC47C 003A93BC  3C 60 80 3B */	lis r3, rearTyreCallBack__Q24Game4TyreFP8J3DJointi@ha
/* 803AC480 003A93C0  C0 22 12 58 */	lfs f1, lbl_8051F5B8@sda21(r2)
/* 803AC484 003A93C4  A0 1F 03 10 */	lhz r0, 0x310(r31)
/* 803AC488 003A93C8  38 A4 C2 F0 */	addi r5, r4, frontTyreCallBack__Q24Game4TyreFP8J3DJointi@l
/* 803AC48C 003A93CC  80 9D 00 28 */	lwz r4, 0x28(r29)
/* 803AC490 003A93D0  38 C3 C3 28 */	addi r6, r3, rearTyreCallBack__Q24Game4TyreFP8J3DJointi@l
/* 803AC494 003A93D4  54 03 10 3A */	slwi r3, r0, 2
/* 803AC498 003A93D8  38 00 00 00 */	li r0, 0
/* 803AC49C 003A93DC  7C 64 18 2E */	lwzx r3, r4, r3
/* 803AC4A0 003A93E0  7F E4 FB 78 */	mr r4, r31
/* 803AC4A4 003A93E4  90 A3 00 04 */	stw r5, 4(r3)
/* 803AC4A8 003A93E8  A0 7F 03 12 */	lhz r3, 0x312(r31)
/* 803AC4AC 003A93EC  80 BD 00 28 */	lwz r5, 0x28(r29)
/* 803AC4B0 003A93F0  54 63 10 3A */	slwi r3, r3, 2
/* 803AC4B4 003A93F4  7C 65 18 2E */	lwzx r3, r5, r3
/* 803AC4B8 003A93F8  90 C3 00 04 */	stw r6, 4(r3)
/* 803AC4BC 003A93FC  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 803AC4C0 003A9400  D0 1F 03 14 */	stfs f0, 0x314(r31)
/* 803AC4C4 003A9404  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 803AC4C8 003A9408  D0 3F 02 C0 */	stfs f1, 0x2c0(r31)
/* 803AC4CC 003A940C  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 803AC4D0 003A9410  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 803AC4D4 003A9414  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 803AC4D8 003A9418  90 1F 03 18 */	stw r0, 0x318(r31)
/* 803AC4DC 003A941C  D0 3F 03 1C */	stfs f1, 0x31c(r31)
/* 803AC4E0 003A9420  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 803AC4E4 003A9424  4B E9 59 B5 */	bl delNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 803AC4E8 003A9428  80 7F 03 38 */	lwz r3, 0x338(r31)
/* 803AC4EC 003A942C  4B F5 58 41 */	bl init__Q34Game4Tyre13TyreShadowMgrFv
/* 803AC4F0 003A9430  38 00 00 00 */	li r0, 0
/* 803AC4F4 003A9434  98 1F 03 21 */	stb r0, 0x321(r31)
/* 803AC4F8 003A9438  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 803AC4FC 003A943C  D0 1F 03 24 */	stfs f0, 0x324(r31)
/* 803AC500 003A9440  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 803AC504 003A9444  D0 1F 03 28 */	stfs f0, 0x328(r31)
/* 803AC508 003A9448  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 803AC50C 003A944C  D0 1F 03 2C */	stfs f0, 0x32c(r31)
/* 803AC510 003A9450  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803AC514 003A9454  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803AC518 003A9458  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803AC51C 003A945C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803AC520 003A9460  7C 08 03 A6 */	mtlr r0
/* 803AC524 003A9464  38 21 00 20 */	addi r1, r1, 0x20
/* 803AC528 003A9468  4E 80 00 20 */	blr 

.global __ct__Q34Game4Tyre3ObjFv
__ct__Q34Game4Tyre3ObjFv:
/* 803AC52C 003A946C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803AC530 003A9470  7C 08 02 A6 */	mflr r0
/* 803AC534 003A9474  90 01 00 24 */	stw r0, 0x24(r1)
/* 803AC538 003A9478  7C 80 07 35 */	extsh. r0, r4
/* 803AC53C 003A947C  BF 41 00 08 */	stmw r26, 8(r1)
/* 803AC540 003A9480  7C 7F 1B 78 */	mr r31, r3
/* 803AC544 003A9484  41 82 00 24 */	beq .L_803AC568
/* 803AC548 003A9488  38 1F 03 44 */	addi r0, r31, 0x344
/* 803AC54C 003A948C  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 803AC550 003A9490  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 803AC554 003A9494  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 803AC558 003A9498  38 00 00 00 */	li r0, 0
/* 803AC55C 003A949C  90 7F 03 44 */	stw r3, 0x344(r31)
/* 803AC560 003A94A0  90 1F 03 48 */	stw r0, 0x348(r31)
/* 803AC564 003A94A4  90 1F 03 4C */	stw r0, 0x34c(r31)
.L_803AC568:
/* 803AC568 003A94A8  7F E3 FB 78 */	mr r3, r31
/* 803AC56C 003A94AC  38 80 00 00 */	li r4, 0
/* 803AC570 003A94B0  4B D5 4E 31 */	bl __ct__Q24Game9EnemyBaseFv
/* 803AC574 003A94B4  3C 80 80 4E */	lis r4, __vt__Q34Game4Tyre3Obj@ha
/* 803AC578 003A94B8  39 3F 03 44 */	addi r9, r31, 0x344
/* 803AC57C 003A94BC  38 A4 64 48 */	addi r5, r4, __vt__Q34Game4Tyre3Obj@l
/* 803AC580 003A94C0  3C 60 80 12 */	lis r3, "__ct__10Vector3<f>Fv"@ha
/* 803AC584 003A94C4  90 BF 00 00 */	stw r5, 0(r31)
/* 803AC588 003A94C8  38 05 01 B0 */	addi r0, r5, 0x1b0
/* 803AC58C 003A94CC  39 45 02 FC */	addi r10, r5, 0x2fc
/* 803AC590 003A94D0  38 83 F3 48 */	addi r4, r3, "__ct__10Vector3<f>Fv"@l
/* 803AC594 003A94D4  90 1F 01 78 */	stw r0, 0x178(r31)
/* 803AC598 003A94D8  39 00 00 00 */	li r8, 0
/* 803AC59C 003A94DC  38 00 00 01 */	li r0, 1
/* 803AC5A0 003A94E0  38 7F 02 EC */	addi r3, r31, 0x2ec
/* 803AC5A4 003A94E4  80 FF 01 7C */	lwz r7, 0x17c(r31)
/* 803AC5A8 003A94E8  38 A0 00 00 */	li r5, 0
/* 803AC5AC 003A94EC  38 C0 00 0C */	li r6, 0xc
/* 803AC5B0 003A94F0  91 47 00 00 */	stw r10, 0(r7)
/* 803AC5B4 003A94F4  38 E0 00 02 */	li r7, 2
/* 803AC5B8 003A94F8  81 5F 01 7C */	lwz r10, 0x17c(r31)
/* 803AC5BC 003A94FC  7D 2A 48 50 */	subf r9, r10, r9
/* 803AC5C0 003A9500  91 2A 00 0C */	stw r9, 0xc(r10)
/* 803AC5C4 003A9504  91 1F 02 BC */	stw r8, 0x2bc(r31)
/* 803AC5C8 003A9508  99 1F 02 D0 */	stb r8, 0x2d0(r31)
/* 803AC5CC 003A950C  98 1F 02 D1 */	stb r0, 0x2d1(r31)
/* 803AC5D0 003A9510  99 1F 02 D2 */	stb r8, 0x2d2(r31)
/* 803AC5D4 003A9514  4B D1 52 69 */	bl __construct_array
/* 803AC5D8 003A9518  38 80 00 00 */	li r4, 0
/* 803AC5DC 003A951C  C0 22 12 5C */	lfs f1, lbl_8051F5BC@sda21(r2)
/* 803AC5E0 003A9520  90 9F 03 04 */	stw r4, 0x304(r31)
/* 803AC5E4 003A9524  38 00 00 01 */	li r0, 1
/* 803AC5E8 003A9528  C0 02 12 58 */	lfs f0, lbl_8051F5B8@sda21(r2)
/* 803AC5EC 003A952C  38 60 00 2C */	li r3, 0x2c
/* 803AC5F0 003A9530  D0 3F 03 08 */	stfs f1, 0x308(r31)
/* 803AC5F4 003A9534  D0 1F 03 0C */	stfs f0, 0x30c(r31)
/* 803AC5F8 003A9538  98 1F 03 20 */	stb r0, 0x320(r31)
/* 803AC5FC 003A953C  98 9F 03 21 */	stb r4, 0x321(r31)
/* 803AC600 003A9540  98 9F 03 22 */	stb r4, 0x322(r31)
/* 803AC604 003A9544  90 9F 03 30 */	stw r4, 0x330(r31)
/* 803AC608 003A9548  90 9F 03 34 */	stw r4, 0x334(r31)
/* 803AC60C 003A954C  90 9F 03 38 */	stw r4, 0x338(r31)
/* 803AC610 003A9550  90 9F 03 3C */	stw r4, 0x33c(r31)
/* 803AC614 003A9554  90 9F 03 40 */	stw r4, 0x340(r31)
/* 803AC618 003A9558  4B C7 78 8D */	bl __nw__FUl
/* 803AC61C 003A955C  7C 7C 1B 79 */	or. r28, r3, r3
/* 803AC620 003A9560  41 82 00 44 */	beq .L_803AC664
/* 803AC624 003A9564  4B D7 B3 51 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 803AC628 003A9568  3C 60 80 4E */	lis r3, __vt__Q34Game4Tyre14ProperAnimator@ha
/* 803AC62C 003A956C  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 803AC630 003A9570  38 03 62 B0 */	addi r0, r3, __vt__Q34Game4Tyre14ProperAnimator@l
/* 803AC634 003A9574  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 803AC638 003A9578  90 1C 00 00 */	stw r0, 0(r28)
/* 803AC63C 003A957C  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 803AC640 003A9580  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 803AC644 003A9584  38 00 00 00 */	li r0, 0
/* 803AC648 003A9588  90 9C 00 10 */	stw r4, 0x10(r28)
/* 803AC64C 003A958C  90 7C 00 10 */	stw r3, 0x10(r28)
/* 803AC650 003A9590  98 1C 00 28 */	stb r0, 0x28(r28)
/* 803AC654 003A9594  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 803AC658 003A9598  90 1C 00 14 */	stw r0, 0x14(r28)
/* 803AC65C 003A959C  98 1C 00 28 */	stb r0, 0x28(r28)
/* 803AC660 003A95A0  90 1C 00 20 */	stw r0, 0x20(r28)
.L_803AC664:
/* 803AC664 003A95A4  93 9F 01 84 */	stw r28, 0x184(r31)
/* 803AC668 003A95A8  38 60 00 1C */	li r3, 0x1c
/* 803AC66C 003A95AC  4B C7 78 39 */	bl __nw__FUl
/* 803AC670 003A95B0  7C 64 1B 79 */	or. r4, r3, r3
/* 803AC674 003A95B4  41 82 00 24 */	beq .L_803AC698
/* 803AC678 003A95B8  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 803AC67C 003A95BC  3C 60 80 4E */	lis r3, __vt__Q34Game4Tyre3FSM@ha
/* 803AC680 003A95C0  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 803AC684 003A95C4  38 A0 FF FF */	li r5, -1
/* 803AC688 003A95C8  90 04 00 00 */	stw r0, 0(r4)
/* 803AC68C 003A95CC  38 03 62 8C */	addi r0, r3, __vt__Q34Game4Tyre3FSM@l
/* 803AC690 003A95D0  90 A4 00 18 */	stw r5, 0x18(r4)
/* 803AC694 003A95D4  90 04 00 00 */	stw r0, 0(r4)
.L_803AC698:
/* 803AC698 003A95D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 803AC69C 003A95DC  7F E3 FB 78 */	mr r3, r31
/* 803AC6A0 003A95E0  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 803AC6A4 003A95E4  7D 89 03 A6 */	mtctr r12
/* 803AC6A8 003A95E8  4E 80 04 21 */	bctrl 
/* 803AC6AC 003A95EC  38 60 00 18 */	li r3, 0x18
/* 803AC6B0 003A95F0  4B C7 77 F5 */	bl __nw__FUl
/* 803AC6B4 003A95F4  28 03 00 00 */	cmplwi r3, 0
/* 803AC6B8 003A95F8  41 82 00 84 */	beq .L_803AC73C
/* 803AC6BC 003A95FC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803AC6C0 003A9600  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 803AC6C4 003A9604  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803AC6C8 003A9608  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803AC6CC 003A960C  90 03 00 00 */	stw r0, 0(r3)
/* 803AC6D0 003A9610  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 803AC6D4 003A9614  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803AC6D8 003A9618  3C 80 80 4E */	lis r4, __vt__Q23efx13TChasePosYRot@ha
/* 803AC6DC 003A961C  90 03 00 04 */	stw r0, 4(r3)
/* 803AC6E0 003A9620  39 24 68 F4 */	addi r9, r4, __vt__Q23efx13TChasePosYRot@l
/* 803AC6E4 003A9624  3C 80 80 4E */	lis r4, __vt__Q23efx14TKageTyresmoke@ha
/* 803AC6E8 003A9628  38 05 00 14 */	addi r0, r5, 0x14
/* 803AC6EC 003A962C  90 A3 00 00 */	stw r5, 0(r3)
/* 803AC6F0 003A9630  38 84 63 FC */	addi r4, r4, __vt__Q23efx14TKageTyresmoke@l
/* 803AC6F4 003A9634  39 60 00 00 */	li r11, 0
/* 803AC6F8 003A9638  39 40 02 B2 */	li r10, 0x2b2
/* 803AC6FC 003A963C  90 03 00 04 */	stw r0, 4(r3)
/* 803AC700 003A9640  39 09 00 14 */	addi r8, r9, 0x14
/* 803AC704 003A9644  38 FF 01 8C */	addi r7, r31, 0x18c
/* 803AC708 003A9648  38 DF 01 FC */	addi r6, r31, 0x1fc
/* 803AC70C 003A964C  91 63 00 08 */	stw r11, 8(r3)
/* 803AC710 003A9650  38 A0 02 A0 */	li r5, 0x2a0
/* 803AC714 003A9654  38 04 00 14 */	addi r0, r4, 0x14
/* 803AC718 003A9658  B1 43 00 0C */	sth r10, 0xc(r3)
/* 803AC71C 003A965C  99 63 00 0E */	stb r11, 0xe(r3)
/* 803AC720 003A9660  91 23 00 00 */	stw r9, 0(r3)
/* 803AC724 003A9664  91 03 00 04 */	stw r8, 4(r3)
/* 803AC728 003A9668  90 E3 00 10 */	stw r7, 0x10(r3)
/* 803AC72C 003A966C  90 C3 00 14 */	stw r6, 0x14(r3)
/* 803AC730 003A9670  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803AC734 003A9674  90 83 00 00 */	stw r4, 0(r3)
/* 803AC738 003A9678  90 03 00 04 */	stw r0, 4(r3)
.L_803AC73C:
/* 803AC73C 003A967C  90 7F 03 30 */	stw r3, 0x330(r31)
/* 803AC740 003A9680  38 60 00 18 */	li r3, 0x18
/* 803AC744 003A9684  4B C7 77 61 */	bl __nw__FUl
/* 803AC748 003A9688  28 03 00 00 */	cmplwi r3, 0
/* 803AC74C 003A968C  41 82 00 84 */	beq .L_803AC7D0
/* 803AC750 003A9690  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803AC754 003A9694  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 803AC758 003A9698  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803AC75C 003A969C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803AC760 003A96A0  90 03 00 00 */	stw r0, 0(r3)
/* 803AC764 003A96A4  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 803AC768 003A96A8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803AC76C 003A96AC  3C 80 80 4E */	lis r4, __vt__Q23efx13TChasePosYRot@ha
/* 803AC770 003A96B0  90 03 00 04 */	stw r0, 4(r3)
/* 803AC774 003A96B4  39 24 68 F4 */	addi r9, r4, __vt__Q23efx13TChasePosYRot@l
/* 803AC778 003A96B8  3C 80 80 4E */	lis r4, __vt__Q23efx14TKageTyresmoke@ha
/* 803AC77C 003A96BC  38 05 00 14 */	addi r0, r5, 0x14
/* 803AC780 003A96C0  90 A3 00 00 */	stw r5, 0(r3)
/* 803AC784 003A96C4  38 84 63 FC */	addi r4, r4, __vt__Q23efx14TKageTyresmoke@l
/* 803AC788 003A96C8  39 60 00 00 */	li r11, 0
/* 803AC78C 003A96CC  39 40 02 B2 */	li r10, 0x2b2
/* 803AC790 003A96D0  90 03 00 04 */	stw r0, 4(r3)
/* 803AC794 003A96D4  39 09 00 14 */	addi r8, r9, 0x14
/* 803AC798 003A96D8  38 FF 01 8C */	addi r7, r31, 0x18c
/* 803AC79C 003A96DC  38 DF 01 FC */	addi r6, r31, 0x1fc
/* 803AC7A0 003A96E0  91 63 00 08 */	stw r11, 8(r3)
/* 803AC7A4 003A96E4  38 A0 02 A0 */	li r5, 0x2a0
/* 803AC7A8 003A96E8  38 04 00 14 */	addi r0, r4, 0x14
/* 803AC7AC 003A96EC  B1 43 00 0C */	sth r10, 0xc(r3)
/* 803AC7B0 003A96F0  99 63 00 0E */	stb r11, 0xe(r3)
/* 803AC7B4 003A96F4  91 23 00 00 */	stw r9, 0(r3)
/* 803AC7B8 003A96F8  91 03 00 04 */	stw r8, 4(r3)
/* 803AC7BC 003A96FC  90 E3 00 10 */	stw r7, 0x10(r3)
/* 803AC7C0 003A9700  90 C3 00 14 */	stw r6, 0x14(r3)
/* 803AC7C4 003A9704  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803AC7C8 003A9708  90 83 00 00 */	stw r4, 0(r3)
/* 803AC7CC 003A970C  90 03 00 04 */	stw r0, 4(r3)
.L_803AC7D0:
/* 803AC7D0 003A9710  90 7F 03 34 */	stw r3, 0x334(r31)
/* 803AC7D4 003A9714  38 60 00 2C */	li r3, 0x2c
/* 803AC7D8 003A9718  4B C7 76 CD */	bl __nw__FUl
/* 803AC7DC 003A971C  28 03 00 00 */	cmplwi r3, 0
/* 803AC7E0 003A9720  41 82 00 D0 */	beq .L_803AC8B0
/* 803AC7E4 003A9724  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 803AC7E8 003A9728  3C 80 80 4F */	lis r4, __vt__Q23efx19TEnemyHamonChasePos@ha
/* 803AC7EC 003A972C  3B 85 A7 F8 */	addi r28, r5, __vt__Q23efx5TBase@l
/* 803AC7F0 003A9730  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803AC7F4 003A9734  93 83 00 00 */	stw r28, 0(r3)
/* 803AC7F8 003A9738  38 04 84 C4 */	addi r0, r4, __vt__Q23efx19TEnemyHamonChasePos@l
/* 803AC7FC 003A973C  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 803AC800 003A9740  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 803AC804 003A9744  90 03 00 00 */	stw r0, 0(r3)
/* 803AC808 003A9748  3B C5 69 8C */	addi r30, r5, __vt__Q23efx5TSync@l
/* 803AC80C 003A974C  39 44 69 40 */	addi r10, r4, __vt__Q23efx9TChasePos@l
/* 803AC810 003A9750  3C 80 80 4F */	lis r4, __vt__Q23efx12TEnemyHamonM@ha
/* 803AC814 003A9754  93 83 00 04 */	stw r28, 4(r3)
/* 803AC818 003A9758  3B A6 E2 7C */	addi r29, r6, __vt__18JPAEmitterCallBack@l
/* 803AC81C 003A975C  38 E4 85 24 */	addi r7, r4, __vt__Q23efx12TEnemyHamonM@l
/* 803AC820 003A9760  3C 80 80 4F */	lis r4, __vt__Q23efx15TEnemyHamonMInd@ha
/* 803AC824 003A9764  93 A3 00 08 */	stw r29, 8(r3)
/* 803AC828 003A9768  38 84 84 D8 */	addi r4, r4, __vt__Q23efx15TEnemyHamonMInd@l
/* 803AC82C 003A976C  3B 7E 00 14 */	addi r27, r30, 0x14
/* 803AC830 003A9770  39 80 00 00 */	li r12, 0
/* 803AC834 003A9774  93 C3 00 04 */	stw r30, 4(r3)
/* 803AC838 003A9778  39 60 02 B2 */	li r11, 0x2b2
/* 803AC83C 003A977C  3B 4A 00 14 */	addi r26, r10, 0x14
/* 803AC840 003A9780  39 3F 03 24 */	addi r9, r31, 0x324
/* 803AC844 003A9784  93 63 00 08 */	stw r27, 8(r3)
/* 803AC848 003A9788  39 00 00 57 */	li r8, 0x57
/* 803AC84C 003A978C  38 C7 00 14 */	addi r6, r7, 0x14
/* 803AC850 003A9790  38 A0 00 58 */	li r5, 0x58
/* 803AC854 003A9794  91 83 00 0C */	stw r12, 0xc(r3)
/* 803AC858 003A9798  38 04 00 14 */	addi r0, r4, 0x14
/* 803AC85C 003A979C  B1 63 00 10 */	sth r11, 0x10(r3)
/* 803AC860 003A97A0  99 83 00 12 */	stb r12, 0x12(r3)
/* 803AC864 003A97A4  91 43 00 04 */	stw r10, 4(r3)
/* 803AC868 003A97A8  93 43 00 08 */	stw r26, 8(r3)
/* 803AC86C 003A97AC  91 23 00 14 */	stw r9, 0x14(r3)
/* 803AC870 003A97B0  B1 03 00 10 */	sth r8, 0x10(r3)
/* 803AC874 003A97B4  90 E3 00 04 */	stw r7, 4(r3)
/* 803AC878 003A97B8  90 C3 00 08 */	stw r6, 8(r3)
/* 803AC87C 003A97BC  93 83 00 18 */	stw r28, 0x18(r3)
/* 803AC880 003A97C0  93 A3 00 1C */	stw r29, 0x1c(r3)
/* 803AC884 003A97C4  93 C3 00 18 */	stw r30, 0x18(r3)
/* 803AC888 003A97C8  93 63 00 1C */	stw r27, 0x1c(r3)
/* 803AC88C 003A97CC  91 83 00 20 */	stw r12, 0x20(r3)
/* 803AC890 003A97D0  B1 63 00 24 */	sth r11, 0x24(r3)
/* 803AC894 003A97D4  99 83 00 26 */	stb r12, 0x26(r3)
/* 803AC898 003A97D8  91 43 00 18 */	stw r10, 0x18(r3)
/* 803AC89C 003A97DC  93 43 00 1C */	stw r26, 0x1c(r3)
/* 803AC8A0 003A97E0  91 23 00 28 */	stw r9, 0x28(r3)
/* 803AC8A4 003A97E4  B0 A3 00 24 */	sth r5, 0x24(r3)
/* 803AC8A8 003A97E8  90 83 00 18 */	stw r4, 0x18(r3)
/* 803AC8AC 003A97EC  90 03 00 1C */	stw r0, 0x1c(r3)
.L_803AC8B0:
/* 803AC8B0 003A97F0  90 7F 03 3C */	stw r3, 0x33c(r31)
/* 803AC8B4 003A97F4  38 60 00 1C */	li r3, 0x1c
/* 803AC8B8 003A97F8  4B C7 75 ED */	bl __nw__FUl
/* 803AC8BC 003A97FC  7C 60 1B 79 */	or. r0, r3, r3
/* 803AC8C0 003A9800  41 82 00 10 */	beq .L_803AC8D0
/* 803AC8C4 003A9804  7F E4 FB 78 */	mr r4, r31
/* 803AC8C8 003A9808  4B F5 53 81 */	bl __ct__Q34Game4Tyre13TyreShadowMgrFPQ34Game4Tyre3Obj
/* 803AC8CC 003A980C  7C 60 1B 78 */	mr r0, r3
.L_803AC8D0:
/* 803AC8D0 003A9810  90 1F 03 38 */	stw r0, 0x338(r31)
/* 803AC8D4 003A9814  7F E3 FB 78 */	mr r3, r31
/* 803AC8D8 003A9818  BB 41 00 08 */	lmw r26, 8(r1)
/* 803AC8DC 003A981C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803AC8E0 003A9820  7C 08 03 A6 */	mtlr r0
/* 803AC8E4 003A9824  38 21 00 20 */	addi r1, r1, 0x20
/* 803AC8E8 003A9828  4E 80 00 20 */	blr 

.global setFSM__Q34Game4Tyre3ObjFPQ34Game4Tyre3FSM
setFSM__Q34Game4Tyre3ObjFPQ34Game4Tyre3FSM:
/* 803AC8EC 003A982C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AC8F0 003A9830  7C 08 02 A6 */	mflr r0
/* 803AC8F4 003A9834  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AC8F8 003A9838  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AC8FC 003A983C  7C 7F 1B 78 */	mr r31, r3
/* 803AC900 003A9840  90 83 03 04 */	stw r4, 0x304(r3)
/* 803AC904 003A9844  7F E4 FB 78 */	mr r4, r31
/* 803AC908 003A9848  80 63 03 04 */	lwz r3, 0x304(r3)
/* 803AC90C 003A984C  81 83 00 00 */	lwz r12, 0(r3)
/* 803AC910 003A9850  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AC914 003A9854  7D 89 03 A6 */	mtctr r12
/* 803AC918 003A9858  4E 80 04 21 */	bctrl 
/* 803AC91C 003A985C  38 00 00 00 */	li r0, 0
/* 803AC920 003A9860  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 803AC924 003A9864  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AC928 003A9868  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AC92C 003A986C  7C 08 03 A6 */	mtlr r0
/* 803AC930 003A9870  38 21 00 10 */	addi r1, r1, 0x10
/* 803AC934 003A9874  4E 80 00 20 */	blr 

.global doUpdate__Q34Game4Tyre3ObjFv
doUpdate__Q34Game4Tyre3ObjFv:
/* 803AC938 003A9878  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AC93C 003A987C  7C 08 02 A6 */	mflr r0
/* 803AC940 003A9880  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AC944 003A9884  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AC948 003A9888  7C 7F 1B 78 */	mr r31, r3
/* 803AC94C 003A988C  4B D5 AA A9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803AC950 003A9890  7F E3 FB 78 */	mr r3, r31
/* 803AC954 003A9894  4B D5 A9 E5 */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 803AC958 003A9898  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 803AC95C 003A989C  7F E4 FB 78 */	mr r4, r31
/* 803AC960 003A98A0  81 83 00 00 */	lwz r12, 0(r3)
/* 803AC964 003A98A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AC968 003A98A8  7D 89 03 A6 */	mtctr r12
/* 803AC96C 003A98AC  4E 80 04 21 */	bctrl 
/* 803AC970 003A98B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AC974 003A98B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AC978 003A98B8  7C 08 03 A6 */	mtlr r0
/* 803AC97C 003A98BC  38 21 00 10 */	addi r1, r1, 0x10
/* 803AC980 003A98C0  4E 80 00 20 */	blr 

.global doAnimationCullingOff__Q34Game4Tyre3ObjFv
doAnimationCullingOff__Q34Game4Tyre3ObjFv:
/* 803AC984 003A98C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AC988 003A98C8  7C 08 02 A6 */	mflr r0
/* 803AC98C 003A98CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AC990 003A98D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AC994 003A98D4  7C 7F 1B 78 */	mr r31, r3
/* 803AC998 003A98D8  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 803AC99C 003A98DC  88 03 08 32 */	lbz r0, 0x832(r3)
/* 803AC9A0 003A98E0  28 00 00 00 */	cmplwi r0, 0
/* 803AC9A4 003A98E4  41 82 00 08 */	beq .L_803AC9AC
/* 803AC9A8 003A98E8  93 ED 99 F0 */	stw r31, curT__Q24Game4Tyre@sda21(r13)
.L_803AC9AC:
/* 803AC9AC 003A98EC  80 1F 03 18 */	lwz r0, 0x318(r31)
/* 803AC9B0 003A98F0  2C 00 00 00 */	cmpwi r0, 0
/* 803AC9B4 003A98F4  40 81 00 30 */	ble .L_803AC9E4
/* 803AC9B8 003A98F8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803AC9BC 003A98FC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803AC9C0 003A9900  40 82 00 24 */	bne .L_803AC9E4
/* 803AC9C4 003A9904  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 803AC9C8 003A9908  C0 1F 03 1C */	lfs f0, 0x31c(r31)
/* 803AC9CC 003A990C  EC 01 00 2A */	fadds f0, f1, f0
/* 803AC9D0 003A9910  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 803AC9D4 003A9914  80 7F 03 18 */	lwz r3, 0x318(r31)
/* 803AC9D8 003A9918  38 03 FF FF */	addi r0, r3, -1
/* 803AC9DC 003A991C  90 1F 03 18 */	stw r0, 0x318(r31)
/* 803AC9E0 003A9920  48 00 00 18 */	b .L_803AC9F8
.L_803AC9E4:
/* 803AC9E4 003A9924  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 803AC9E8 003A9928  38 00 00 00 */	li r0, 0
/* 803AC9EC 003A992C  54 63 07 B8 */	rlwinm r3, r3, 0, 0x1e, 0x1c
/* 803AC9F0 003A9930  90 7F 01 E0 */	stw r3, 0x1e0(r31)
/* 803AC9F4 003A9934  90 1F 03 18 */	stw r0, 0x318(r31)
.L_803AC9F8:
/* 803AC9F8 003A9938  7F E3 FB 78 */	mr r3, r31
/* 803AC9FC 003A993C  4B D5 66 85 */	bl doAnimationCullingOff__Q24Game9EnemyBaseFv
/* 803ACA00 003A9940  38 00 00 00 */	li r0, 0
/* 803ACA04 003A9944  90 0D 99 F0 */	stw r0, curT__Q24Game4Tyre@sda21(r13)
/* 803ACA08 003A9948  88 1F 02 D2 */	lbz r0, 0x2d2(r31)
/* 803ACA0C 003A994C  28 00 00 00 */	cmplwi r0, 0
/* 803ACA10 003A9950  41 82 00 18 */	beq .L_803ACA28
/* 803ACA14 003A9954  C0 1F 03 08 */	lfs f0, 0x308(r31)
/* 803ACA18 003A9958  80 7F 03 38 */	lwz r3, 0x338(r31)
/* 803ACA1C 003A995C  D0 03 00 00 */	stfs f0, 0(r3)
/* 803ACA20 003A9960  80 7F 03 38 */	lwz r3, 0x338(r31)
/* 803ACA24 003A9964  4B F5 53 71 */	bl update__Q34Game4Tyre13TyreShadowMgrFv
.L_803ACA28:
/* 803ACA28 003A9968  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ACA2C 003A996C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803ACA30 003A9970  7C 08 03 A6 */	mtlr r0
/* 803ACA34 003A9974  38 21 00 10 */	addi r1, r1, 0x10
/* 803ACA38 003A9978  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game4Tyre3ObjFR8Graphics
doDirectDraw__Q34Game4Tyre3ObjFR8Graphics:
/* 803ACA3C 003A997C  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game4Tyre3ObjFR8Graphics
doDebugDraw__Q34Game4Tyre3ObjFR8Graphics:
/* 803ACA40 003A9980  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ACA44 003A9984  7C 08 02 A6 */	mflr r0
/* 803ACA48 003A9988  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ACA4C 003A998C  4B D5 94 21 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 803ACA50 003A9990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ACA54 003A9994  7C 08 03 A6 */	mtlr r0
/* 803ACA58 003A9998  38 21 00 10 */	addi r1, r1, 0x10
/* 803ACA5C 003A999C  4E 80 00 20 */	blr 

.global doSimulation__Q34Game4Tyre3ObjFf
doSimulation__Q34Game4Tyre3ObjFf:
/* 803ACA60 003A99A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ACA64 003A99A4  7C 08 02 A6 */	mflr r0
/* 803ACA68 003A99A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ACA6C 003A99AC  4B D5 7F ED */	bl doSimulation__Q24Game9EnemyBaseFf
/* 803ACA70 003A99B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ACA74 003A99B4  7C 08 03 A6 */	mtlr r0
/* 803ACA78 003A99B8  38 21 00 10 */	addi r1, r1, 0x10
/* 803ACA7C 003A99BC  4E 80 00 20 */	blr 

.global doGetLifeGaugeParam__Q34Game4Tyre3ObjFRQ24Game14LifeGaugeParam
doGetLifeGaugeParam__Q34Game4Tyre3ObjFRQ24Game14LifeGaugeParam:
/* 803ACA80 003A99C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ACA84 003A99C4  7C 08 02 A6 */	mflr r0
/* 803ACA88 003A99C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ACA8C 003A99CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803ACA90 003A99D0  7C 9F 23 78 */	mr r31, r4
/* 803ACA94 003A99D4  93 C1 00 08 */	stw r30, 8(r1)
/* 803ACA98 003A99D8  7C 7E 1B 78 */	mr r30, r3
/* 803ACA9C 003A99DC  4B D5 94 55 */	bl doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
/* 803ACAA0 003A99E0  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 803ACAA4 003A99E4  A0 1E 03 12 */	lhz r0, 0x312(r30)
/* 803ACAA8 003A99E8  80 63 00 08 */	lwz r3, 8(r3)
/* 803ACAAC 003A99EC  1C 00 00 30 */	mulli r0, r0, 0x30
/* 803ACAB0 003A99F0  C0 3F 00 00 */	lfs f1, 0(r31)
/* 803ACAB4 003A99F4  80 63 00 84 */	lwz r3, 0x84(r3)
/* 803ACAB8 003A99F8  C0 42 12 60 */	lfs f2, lbl_8051F5C0@sda21(r2)
/* 803ACABC 003A99FC  80 63 00 0C */	lwz r3, 0xc(r3)
/* 803ACAC0 003A9A00  7C 63 02 14 */	add r3, r3, r0
/* 803ACAC4 003A9A04  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803ACAC8 003A9A08  EC 01 00 2A */	fadds f0, f1, f0
/* 803ACACC 003A9A0C  EC 02 00 32 */	fmuls f0, f2, f0
/* 803ACAD0 003A9A10  D0 1F 00 00 */	stfs f0, 0(r31)
/* 803ACAD4 003A9A14  C0 3F 00 08 */	lfs f1, 8(r31)
/* 803ACAD8 003A9A18  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 803ACADC 003A9A1C  EC 01 00 2A */	fadds f0, f1, f0
/* 803ACAE0 003A9A20  EC 02 00 32 */	fmuls f0, f2, f0
/* 803ACAE4 003A9A24  D0 1F 00 08 */	stfs f0, 8(r31)
/* 803ACAE8 003A9A28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803ACAEC 003A9A2C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803ACAF0 003A9A30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ACAF4 003A9A34  7C 08 03 A6 */	mtlr r0
/* 803ACAF8 003A9A38  38 21 00 10 */	addi r1, r1, 0x10
/* 803ACAFC 003A9A3C  4E 80 00 20 */	blr 

.global doStartStoneState__Q34Game4Tyre3ObjFv
doStartStoneState__Q34Game4Tyre3ObjFv:
/* 803ACB00 003A9A40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ACB04 003A9A44  7C 08 02 A6 */	mflr r0
/* 803ACB08 003A9A48  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ACB0C 003A9A4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803ACB10 003A9A50  7C 7F 1B 78 */	mr r31, r3
/* 803ACB14 003A9A54  4B D5 63 E1 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 803ACB18 003A9A58  C0 02 12 58 */	lfs f0, lbl_8051F5B8@sda21(r2)
/* 803ACB1C 003A9A5C  3C 60 74 79 */	lis r3, 0x74797231@ha
/* 803ACB20 003A9A60  38 83 72 31 */	addi r4, r3, 0x74797231@l
/* 803ACB24 003A9A64  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803ACB28 003A9A68  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803ACB2C 003A9A6C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803ACB30 003A9A70  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 803ACB34 003A9A74  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 803ACB38 003A9A78  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 803ACB3C 003A9A7C  D0 1F 03 0C */	stfs f0, 0x30c(r31)
/* 803ACB40 003A9A80  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 803ACB44 003A9A84  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 803ACB48 003A9A88  D0 1F 01 24 */	stfs f0, 0x124(r31)
/* 803ACB4C 003A9A8C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803ACB50 003A9A90  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 803ACB54 003A9A94  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 803ACB58 003A9A98  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ACB5C 003A9A9C  4B D8 92 E9 */	bl getCollPart__8CollTreeFUl
/* 803ACB60 003A9AA0  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803ACB64 003A9AA4  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ACB68 003A9AA8  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803ACB6C 003A9AAC  48 06 68 99 */	bl __as__4ID32FUl
/* 803ACB70 003A9AB0  3C 80 74 79 */	lis r4, 0x74797232@ha
/* 803ACB74 003A9AB4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ACB78 003A9AB8  38 84 72 32 */	addi r4, r4, 0x74797232@l
/* 803ACB7C 003A9ABC  4B D8 92 C9 */	bl getCollPart__8CollTreeFUl
/* 803ACB80 003A9AC0  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803ACB84 003A9AC4  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ACB88 003A9AC8  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803ACB8C 003A9ACC  48 06 68 79 */	bl __as__4ID32FUl
/* 803ACB90 003A9AD0  3C 80 74 79 */	lis r4, 0x74797233@ha
/* 803ACB94 003A9AD4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ACB98 003A9AD8  38 84 72 33 */	addi r4, r4, 0x74797233@l
/* 803ACB9C 003A9ADC  4B D8 92 A9 */	bl getCollPart__8CollTreeFUl
/* 803ACBA0 003A9AE0  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803ACBA4 003A9AE4  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ACBA8 003A9AE8  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803ACBAC 003A9AEC  48 06 68 59 */	bl __as__4ID32FUl
/* 803ACBB0 003A9AF0  3C 80 74 79 */	lis r4, 0x74797234@ha
/* 803ACBB4 003A9AF4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ACBB8 003A9AF8  38 84 72 34 */	addi r4, r4, 0x74797234@l
/* 803ACBBC 003A9AFC  4B D8 92 89 */	bl getCollPart__8CollTreeFUl
/* 803ACBC0 003A9B00  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803ACBC4 003A9B04  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ACBC8 003A9B08  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803ACBCC 003A9B0C  48 06 68 39 */	bl __as__4ID32FUl
/* 803ACBD0 003A9B10  3C 80 74 79 */	lis r4, 0x74797235@ha
/* 803ACBD4 003A9B14  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ACBD8 003A9B18  38 84 72 35 */	addi r4, r4, 0x74797235@l
/* 803ACBDC 003A9B1C  4B D8 92 69 */	bl getCollPart__8CollTreeFUl
/* 803ACBE0 003A9B20  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803ACBE4 003A9B24  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ACBE8 003A9B28  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803ACBEC 003A9B2C  48 06 68 19 */	bl __as__4ID32FUl
/* 803ACBF0 003A9B30  3C 80 74 79 */	lis r4, 0x74797236@ha
/* 803ACBF4 003A9B34  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ACBF8 003A9B38  38 84 72 36 */	addi r4, r4, 0x74797236@l
/* 803ACBFC 003A9B3C  4B D8 92 49 */	bl getCollPart__8CollTreeFUl
/* 803ACC00 003A9B40  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803ACC04 003A9B44  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ACC08 003A9B48  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803ACC0C 003A9B4C  48 06 67 F9 */	bl __as__4ID32FUl
/* 803ACC10 003A9B50  7F E3 FB 78 */	mr r3, r31
/* 803ACC14 003A9B54  48 00 18 E1 */	bl fadeSmokeEffect__Q34Game4Tyre3ObjFv
/* 803ACC18 003A9B58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ACC1C 003A9B5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803ACC20 003A9B60  7C 08 03 A6 */	mtlr r0
/* 803ACC24 003A9B64  38 21 00 10 */	addi r1, r1, 0x10
/* 803ACC28 003A9B68  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game4Tyre3ObjFv
doFinishStoneState__Q34Game4Tyre3ObjFv:
/* 803ACC2C 003A9B6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ACC30 003A9B70  7C 08 02 A6 */	mflr r0
/* 803ACC34 003A9B74  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ACC38 003A9B78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803ACC3C 003A9B7C  7C 7F 1B 78 */	mr r31, r3
/* 803ACC40 003A9B80  4B D5 62 C9 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 803ACC44 003A9B84  3C 80 74 79 */	lis r4, 0x74797231@ha
/* 803ACC48 003A9B88  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ACC4C 003A9B8C  38 84 72 31 */	addi r4, r4, 0x74797231@l
/* 803ACC50 003A9B90  4B D8 91 F5 */	bl getCollPart__8CollTreeFUl
/* 803ACC54 003A9B94  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803ACC58 003A9B98  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ACC5C 003A9B9C  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803ACC60 003A9BA0  48 06 67 A5 */	bl __as__4ID32FUl
/* 803ACC64 003A9BA4  3C 80 74 79 */	lis r4, 0x74797232@ha
/* 803ACC68 003A9BA8  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ACC6C 003A9BAC  38 84 72 32 */	addi r4, r4, 0x74797232@l
/* 803ACC70 003A9BB0  4B D8 91 D5 */	bl getCollPart__8CollTreeFUl
/* 803ACC74 003A9BB4  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803ACC78 003A9BB8  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ACC7C 003A9BBC  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803ACC80 003A9BC0  48 06 67 85 */	bl __as__4ID32FUl
/* 803ACC84 003A9BC4  3C 80 74 79 */	lis r4, 0x74797233@ha
/* 803ACC88 003A9BC8  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ACC8C 003A9BCC  38 84 72 33 */	addi r4, r4, 0x74797233@l
/* 803ACC90 003A9BD0  4B D8 91 B5 */	bl getCollPart__8CollTreeFUl
/* 803ACC94 003A9BD4  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803ACC98 003A9BD8  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ACC9C 003A9BDC  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803ACCA0 003A9BE0  48 06 67 65 */	bl __as__4ID32FUl
/* 803ACCA4 003A9BE4  3C 80 74 79 */	lis r4, 0x74797234@ha
/* 803ACCA8 003A9BE8  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ACCAC 003A9BEC  38 84 72 34 */	addi r4, r4, 0x74797234@l
/* 803ACCB0 003A9BF0  4B D8 91 95 */	bl getCollPart__8CollTreeFUl
/* 803ACCB4 003A9BF4  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803ACCB8 003A9BF8  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ACCBC 003A9BFC  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803ACCC0 003A9C00  48 06 67 45 */	bl __as__4ID32FUl
/* 803ACCC4 003A9C04  3C 80 74 79 */	lis r4, 0x74797235@ha
/* 803ACCC8 003A9C08  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ACCCC 003A9C0C  38 84 72 35 */	addi r4, r4, 0x74797235@l
/* 803ACCD0 003A9C10  4B D8 91 75 */	bl getCollPart__8CollTreeFUl
/* 803ACCD4 003A9C14  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803ACCD8 003A9C18  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ACCDC 003A9C1C  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803ACCE0 003A9C20  48 06 67 25 */	bl __as__4ID32FUl
/* 803ACCE4 003A9C24  3C 80 74 79 */	lis r4, 0x74797236@ha
/* 803ACCE8 003A9C28  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ACCEC 003A9C2C  38 84 72 36 */	addi r4, r4, 0x74797236@l
/* 803ACCF0 003A9C30  4B D8 91 55 */	bl getCollPart__8CollTreeFUl
/* 803ACCF4 003A9C34  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803ACCF8 003A9C38  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ACCFC 003A9C3C  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803ACD00 003A9C40  48 06 67 05 */	bl __as__4ID32FUl
/* 803ACD04 003A9C44  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 803ACD08 003A9C48  7F E3 FB 78 */	mr r3, r31
/* 803ACD0C 003A9C4C  C0 22 12 64 */	lfs f1, lbl_8051F5C4@sda21(r2)
/* 803ACD10 003A9C50  38 80 00 00 */	li r4, 0
/* 803ACD14 003A9C54  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 803ACD18 003A9C58  C0 62 12 58 */	lfs f3, lbl_8051F5B8@sda21(r2)
/* 803ACD1C 003A9C5C  C0 82 12 68 */	lfs f4, lbl_8051F5C8@sda21(r2)
/* 803ACD20 003A9C60  4B D6 63 FD */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 803ACD24 003A9C64  7F E3 FB 78 */	mr r3, r31
/* 803ACD28 003A9C68  4B D5 A6 CD */	bl getStateID__Q24Game9EnemyBaseFv
/* 803ACD2C 003A9C6C  2C 03 00 00 */	cmpwi r3, 0
/* 803ACD30 003A9C70  40 82 00 0C */	bne .L_803ACD3C
/* 803ACD34 003A9C74  7F E3 FB 78 */	mr r3, r31
/* 803ACD38 003A9C78  48 00 17 59 */	bl createSmokeEffect__Q34Game4Tyre3ObjFv
.L_803ACD3C:
/* 803ACD3C 003A9C7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ACD40 003A9C80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803ACD44 003A9C84  7C 08 03 A6 */	mtlr r0
/* 803ACD48 003A9C88  38 21 00 10 */	addi r1, r1, 0x10
/* 803ACD4C 003A9C8C  4E 80 00 20 */	blr 

.global collisionCallback__Q34Game4Tyre3ObjFRQ24Game9CollEvent
collisionCallback__Q34Game4Tyre3ObjFRQ24Game9CollEvent:
/* 803ACD50 003A9C90  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 803ACD54 003A9C94  7C 08 02 A6 */	mflr r0
/* 803ACD58 003A9C98  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 803ACD5C 003A9C9C  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 803ACD60 003A9CA0  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 803ACD64 003A9CA4  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 803ACD68 003A9CA8  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 803ACD6C 003A9CAC  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 803ACD70 003A9CB0  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 803ACD74 003A9CB4  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 803ACD78 003A9CB8  7C 9D 23 78 */	mr r29, r4
/* 803ACD7C 003A9CBC  7C 7E 1B 78 */	mr r30, r3
/* 803ACD80 003A9CC0  80 64 00 00 */	lwz r3, 0(r4)
/* 803ACD84 003A9CC4  81 83 00 00 */	lwz r12, 0(r3)
/* 803ACD88 003A9CC8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803ACD8C 003A9CCC  7D 89 03 A6 */	mtctr r12
/* 803ACD90 003A9CD0  4E 80 04 21 */	bctrl 
/* 803ACD94 003A9CD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803ACD98 003A9CD8  41 82 00 14 */	beq .L_803ACDAC
/* 803ACD9C 003A9CDC  C0 02 12 58 */	lfs f0, lbl_8051F5B8@sda21(r2)
/* 803ACDA0 003A9CE0  D0 1E 01 1C */	stfs f0, 0x11c(r30)
/* 803ACDA4 003A9CE4  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 803ACDA8 003A9CE8  D0 1E 01 24 */	stfs f0, 0x124(r30)
.L_803ACDAC:
/* 803ACDAC 003A9CEC  7F C3 F3 78 */	mr r3, r30
/* 803ACDB0 003A9CF0  7F A4 EB 78 */	mr r4, r29
/* 803ACDB4 003A9CF4  4B D5 98 5D */	bl collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
/* 803ACDB8 003A9CF8  7F C3 F3 78 */	mr r3, r30
/* 803ACDBC 003A9CFC  48 00 07 15 */	bl isFreeze__Q34Game4Tyre3ObjFv
/* 803ACDC0 003A9D00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803ACDC4 003A9D04  40 82 04 98 */	bne .L_803AD25C
/* 803ACDC8 003A9D08  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 803ACDCC 003A9D0C  83 FD 00 00 */	lwz r31, 0(r29)
/* 803ACDD0 003A9D10  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803ACDD4 003A9D14  40 82 04 88 */	bne .L_803AD25C
/* 803ACDD8 003A9D18  28 1F 00 00 */	cmplwi r31, 0
/* 803ACDDC 003A9D1C  41 82 04 80 */	beq .L_803AD25C
/* 803ACDE0 003A9D20  7F E3 FB 78 */	mr r3, r31
/* 803ACDE4 003A9D24  81 9F 00 00 */	lwz r12, 0(r31)
/* 803ACDE8 003A9D28  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803ACDEC 003A9D2C  7D 89 03 A6 */	mtctr r12
/* 803ACDF0 003A9D30  4E 80 04 21 */	bctrl 
/* 803ACDF4 003A9D34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803ACDF8 003A9D38  40 82 00 20 */	bne .L_803ACE18
/* 803ACDFC 003A9D3C  7F E3 FB 78 */	mr r3, r31
/* 803ACE00 003A9D40  81 9F 00 00 */	lwz r12, 0(r31)
/* 803ACE04 003A9D44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803ACE08 003A9D48  7D 89 03 A6 */	mtctr r12
/* 803ACE0C 003A9D4C  4E 80 04 21 */	bctrl 
/* 803ACE10 003A9D50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803ACE14 003A9D54  41 82 00 6C */	beq .L_803ACE80
.L_803ACE18:
/* 803ACE18 003A9D58  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 803ACE1C 003A9D5C  28 00 00 00 */	cmplwi r0, 0
/* 803ACE20 003A9D60  40 82 00 14 */	bne .L_803ACE34
/* 803ACE24 003A9D64  7F E3 FB 78 */	mr r3, r31
/* 803ACE28 003A9D68  4B DF 27 4D */	bl isStickTo__Q24Game8CreatureFv
/* 803ACE2C 003A9D6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803ACE30 003A9D70  41 82 00 50 */	beq .L_803ACE80
.L_803ACE34:
/* 803ACE34 003A9D74  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 803ACE38 003A9D78  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 803ACE3C 003A9D7C  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractPress@ha
/* 803ACE40 003A9D80  38 00 00 00 */	li r0, 0
/* 803ACE44 003A9D84  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 803ACE48 003A9D88  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 803ACE4C 003A9D8C  38 A3 B3 20 */	addi r5, r3, __vt__Q24Game13InteractPress@l
/* 803ACE50 003A9D90  7F E3 FB 78 */	mr r3, r31
/* 803ACE54 003A9D94  90 81 00 58 */	stw r4, 0x58(r1)
/* 803ACE58 003A9D98  38 81 00 58 */	addi r4, r1, 0x58
/* 803ACE5C 003A9D9C  93 C1 00 5C */	stw r30, 0x5c(r1)
/* 803ACE60 003A9DA0  90 A1 00 58 */	stw r5, 0x58(r1)
/* 803ACE64 003A9DA4  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 803ACE68 003A9DA8  90 01 00 64 */	stw r0, 0x64(r1)
/* 803ACE6C 003A9DAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803ACE70 003A9DB0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 803ACE74 003A9DB4  7D 89 03 A6 */	mtctr r12
/* 803ACE78 003A9DB8  4E 80 04 21 */	bctrl 
/* 803ACE7C 003A9DBC  48 00 03 E0 */	b .L_803AD25C
.L_803ACE80:
/* 803ACE80 003A9DC0  7F E3 FB 78 */	mr r3, r31
/* 803ACE84 003A9DC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 803ACE88 003A9DC8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803ACE8C 003A9DCC  7D 89 03 A6 */	mtctr r12
/* 803ACE90 003A9DD0  4E 80 04 21 */	bctrl 
/* 803ACE94 003A9DD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803ACE98 003A9DD8  41 82 00 88 */	beq .L_803ACF20
/* 803ACE9C 003A9DDC  80 7D 00 00 */	lwz r3, 0(r29)
/* 803ACEA0 003A9DE0  81 83 00 00 */	lwz r12, 0(r3)
/* 803ACEA4 003A9DE4  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 803ACEA8 003A9DE8  7D 89 03 A6 */	mtctr r12
/* 803ACEAC 003A9DEC  4E 80 04 21 */	bctrl 
/* 803ACEB0 003A9DF0  2C 03 00 63 */	cmpwi r3, 0x63
/* 803ACEB4 003A9DF4  41 82 00 6C */	beq .L_803ACF20
/* 803ACEB8 003A9DF8  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 803ACEBC 003A9DFC  3C A0 80 4B */	lis r5, __vt__Q24Game12InteractWind@ha
/* 803ACEC0 003A9E00  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 803ACEC4 003A9E04  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 803ACEC8 003A9E08  90 01 00 84 */	stw r0, 0x84(r1)
/* 803ACECC 003A9E0C  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 803ACED0 003A9E10  38 A5 49 74 */	addi r5, r5, __vt__Q24Game12InteractWind@l
/* 803ACED4 003A9E14  C0 62 12 6C */	lfs f3, lbl_8051F5CC@sda21(r2)
/* 803ACED8 003A9E18  C0 44 00 00 */	lfs f2, 0(r4)
/* 803ACEDC 003A9E1C  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractBomb@ha
/* 803ACEE0 003A9E20  C0 24 00 04 */	lfs f1, 4(r4)
/* 803ACEE4 003A9E24  38 03 49 2C */	addi r0, r3, __vt__Q24Game12InteractBomb@l
/* 803ACEE8 003A9E28  90 A1 00 84 */	stw r5, 0x84(r1)
/* 803ACEEC 003A9E2C  7F E3 FB 78 */	mr r3, r31
/* 803ACEF0 003A9E30  C0 04 00 08 */	lfs f0, 8(r4)
/* 803ACEF4 003A9E34  38 81 00 84 */	addi r4, r1, 0x84
/* 803ACEF8 003A9E38  93 C1 00 88 */	stw r30, 0x88(r1)
/* 803ACEFC 003A9E3C  D0 61 00 8C */	stfs f3, 0x8c(r1)
/* 803ACF00 003A9E40  D0 41 00 90 */	stfs f2, 0x90(r1)
/* 803ACF04 003A9E44  D0 21 00 94 */	stfs f1, 0x94(r1)
/* 803ACF08 003A9E48  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 803ACF0C 003A9E4C  90 01 00 84 */	stw r0, 0x84(r1)
/* 803ACF10 003A9E50  81 9F 00 00 */	lwz r12, 0(r31)
/* 803ACF14 003A9E54  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 803ACF18 003A9E58  7D 89 03 A6 */	mtctr r12
/* 803ACF1C 003A9E5C  4E 80 04 21 */	bctrl 
.L_803ACF20:
/* 803ACF20 003A9E60  7F E3 FB 78 */	mr r3, r31
/* 803ACF24 003A9E64  81 9F 00 00 */	lwz r12, 0(r31)
/* 803ACF28 003A9E68  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 803ACF2C 003A9E6C  7D 89 03 A6 */	mtctr r12
/* 803ACF30 003A9E70  4E 80 04 21 */	bctrl 
/* 803ACF34 003A9E74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803ACF38 003A9E78  41 82 00 60 */	beq .L_803ACF98
/* 803ACF3C 003A9E7C  80 7E 01 E0 */	lwz r3, 0x1e0(r30)
/* 803ACF40 003A9E80  3C 00 43 30 */	lis r0, 0x4330
/* 803ACF44 003A9E84  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 803ACF48 003A9E88  38 00 00 01 */	li r0, 1
/* 803ACF4C 003A9E8C  60 63 00 04 */	ori r3, r3, 4
/* 803ACF50 003A9E90  C8 22 12 78 */	lfd f1, lbl_8051F5D8@sda21(r2)
/* 803ACF54 003A9E94  90 7E 01 E0 */	stw r3, 0x1e0(r30)
/* 803ACF58 003A9E98  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 803ACF5C 003A9E9C  88 63 08 33 */	lbz r3, 0x833(r3)
/* 803ACF60 003A9EA0  90 7E 03 18 */	stw r3, 0x318(r30)
/* 803ACF64 003A9EA4  80 7E 03 18 */	lwz r3, 0x318(r30)
/* 803ACF68 003A9EA8  80 9F 03 5C */	lwz r4, 0x35c(r31)
/* 803ACF6C 003A9EAC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803ACF70 003A9EB0  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 803ACF74 003A9EB4  90 61 00 A4 */	stw r3, 0xa4(r1)
/* 803ACF78 003A9EB8  C0 44 00 C0 */	lfs f2, 0xc0(r4)
/* 803ACF7C 003A9EBC  C8 01 00 A0 */	lfd f0, 0xa0(r1)
/* 803ACF80 003A9EC0  C0 65 08 48 */	lfs f3, 0x848(r5)
/* 803ACF84 003A9EC4  EC 00 08 28 */	fsubs f0, f0, f1
/* 803ACF88 003A9EC8  EC 02 00 24 */	fdivs f0, f2, f0
/* 803ACF8C 003A9ECC  EC 03 00 32 */	fmuls f0, f3, f0
/* 803ACF90 003A9ED0  D0 1E 03 1C */	stfs f0, 0x31c(r30)
/* 803ACF94 003A9ED4  98 1E 03 22 */	stb r0, 0x322(r30)
.L_803ACF98:
/* 803ACF98 003A9ED8  7F E4 FB 78 */	mr r4, r31
/* 803ACF9C 003A9EDC  38 61 00 68 */	addi r3, r1, 0x68
/* 803ACFA0 003A9EE0  4B DF 2C BD */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 803ACFA4 003A9EE4  38 00 00 00 */	li r0, 0
/* 803ACFA8 003A9EE8  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 803ACFAC 003A9EEC  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 803ACFB0 003A9EF0  38 61 00 68 */	addi r3, r1, 0x68
/* 803ACFB4 003A9EF4  28 00 00 00 */	cmplwi r0, 0
/* 803ACFB8 003A9EF8  90 81 00 48 */	stw r4, 0x48(r1)
/* 803ACFBC 003A9EFC  90 01 00 54 */	stw r0, 0x54(r1)
/* 803ACFC0 003A9F00  90 01 00 4C */	stw r0, 0x4c(r1)
/* 803ACFC4 003A9F04  90 61 00 50 */	stw r3, 0x50(r1)
/* 803ACFC8 003A9F08  40 82 00 1C */	bne .L_803ACFE4
/* 803ACFCC 003A9F0C  81 83 00 00 */	lwz r12, 0(r3)
/* 803ACFD0 003A9F10  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803ACFD4 003A9F14  7D 89 03 A6 */	mtctr r12
/* 803ACFD8 003A9F18  4E 80 04 21 */	bctrl 
/* 803ACFDC 003A9F1C  90 61 00 4C */	stw r3, 0x4c(r1)
/* 803ACFE0 003A9F20  48 00 02 50 */	b .L_803AD230
.L_803ACFE4:
/* 803ACFE4 003A9F24  81 83 00 00 */	lwz r12, 0(r3)
/* 803ACFE8 003A9F28  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803ACFEC 003A9F2C  7D 89 03 A6 */	mtctr r12
/* 803ACFF0 003A9F30  4E 80 04 21 */	bctrl 
/* 803ACFF4 003A9F34  90 61 00 4C */	stw r3, 0x4c(r1)
/* 803ACFF8 003A9F38  48 00 00 58 */	b .L_803AD050
.L_803ACFFC:
/* 803ACFFC 003A9F3C  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AD000 003A9F40  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AD004 003A9F44  81 83 00 00 */	lwz r12, 0(r3)
/* 803AD008 003A9F48  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803AD00C 003A9F4C  7D 89 03 A6 */	mtctr r12
/* 803AD010 003A9F50  4E 80 04 21 */	bctrl 
/* 803AD014 003A9F54  7C 64 1B 78 */	mr r4, r3
/* 803AD018 003A9F58  80 61 00 54 */	lwz r3, 0x54(r1)
/* 803AD01C 003A9F5C  81 83 00 00 */	lwz r12, 0(r3)
/* 803AD020 003A9F60  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AD024 003A9F64  7D 89 03 A6 */	mtctr r12
/* 803AD028 003A9F68  4E 80 04 21 */	bctrl 
/* 803AD02C 003A9F6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AD030 003A9F70  40 82 02 00 */	bne .L_803AD230
/* 803AD034 003A9F74  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AD038 003A9F78  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AD03C 003A9F7C  81 83 00 00 */	lwz r12, 0(r3)
/* 803AD040 003A9F80  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803AD044 003A9F84  7D 89 03 A6 */	mtctr r12
/* 803AD048 003A9F88  4E 80 04 21 */	bctrl 
/* 803AD04C 003A9F8C  90 61 00 4C */	stw r3, 0x4c(r1)
.L_803AD050:
/* 803AD050 003A9F90  81 81 00 48 */	lwz r12, 0x48(r1)
/* 803AD054 003A9F94  38 61 00 48 */	addi r3, r1, 0x48
/* 803AD058 003A9F98  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AD05C 003A9F9C  7D 89 03 A6 */	mtctr r12
/* 803AD060 003A9FA0  4E 80 04 21 */	bctrl 
/* 803AD064 003A9FA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AD068 003A9FA8  41 82 FF 94 */	beq .L_803ACFFC
/* 803AD06C 003A9FAC  48 00 01 C4 */	b .L_803AD230
.L_803AD070:
/* 803AD070 003A9FB0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AD074 003A9FB4  81 83 00 00 */	lwz r12, 0(r3)
/* 803AD078 003A9FB8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803AD07C 003A9FBC  7D 89 03 A6 */	mtctr r12
/* 803AD080 003A9FC0  4E 80 04 21 */	bctrl 
/* 803AD084 003A9FC4  81 83 00 00 */	lwz r12, 0(r3)
/* 803AD088 003A9FC8  7C 7F 1B 78 */	mr r31, r3
/* 803AD08C 003A9FCC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803AD090 003A9FD0  7D 89 03 A6 */	mtctr r12
/* 803AD094 003A9FD4  4E 80 04 21 */	bctrl 
/* 803AD098 003A9FD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AD09C 003A9FDC  41 82 00 D8 */	beq .L_803AD174
/* 803AD0A0 003A9FE0  7F C4 F3 78 */	mr r4, r30
/* 803AD0A4 003A9FE4  38 61 00 14 */	addi r3, r1, 0x14
/* 803AD0A8 003A9FE8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803AD0AC 003A9FEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AD0B0 003A9FF0  7D 89 03 A6 */	mtctr r12
/* 803AD0B4 003A9FF4  4E 80 04 21 */	bctrl 
/* 803AD0B8 003A9FF8  7F E4 FB 78 */	mr r4, r31
/* 803AD0BC 003A9FFC  38 61 00 08 */	addi r3, r1, 8
/* 803AD0C0 003AA000  81 9F 00 00 */	lwz r12, 0(r31)
/* 803AD0C4 003AA004  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 803AD0C8 003AA008  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AD0CC 003AA00C  7D 89 03 A6 */	mtctr r12
/* 803AD0D0 003AA010  4E 80 04 21 */	bctrl 
/* 803AD0D4 003AA014  7F C4 F3 78 */	mr r4, r30
/* 803AD0D8 003AA018  C0 01 00 08 */	lfs f0, 8(r1)
/* 803AD0DC 003AA01C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803AD0E0 003AA020  38 61 00 2C */	addi r3, r1, 0x2c
/* 803AD0E4 003AA024  EF C0 F8 28 */	fsubs f30, f0, f31
/* 803AD0E8 003AA028  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AD0EC 003AA02C  7D 89 03 A6 */	mtctr r12
/* 803AD0F0 003AA030  4E 80 04 21 */	bctrl 
/* 803AD0F4 003AA034  7F E4 FB 78 */	mr r4, r31
/* 803AD0F8 003AA038  38 61 00 20 */	addi r3, r1, 0x20
/* 803AD0FC 003AA03C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803AD100 003AA040  C3 E1 00 34 */	lfs f31, 0x34(r1)
/* 803AD104 003AA044  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AD108 003AA048  7D 89 03 A6 */	mtctr r12
/* 803AD10C 003AA04C  4E 80 04 21 */	bctrl 
/* 803AD110 003AA050  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 803AD114 003AA054  C0 02 12 70 */	lfs f0, lbl_8051F5D0@sda21(r2)
/* 803AD118 003AA058  EC 21 F8 28 */	fsubs f1, f1, f31
/* 803AD11C 003AA05C  EC 21 00 72 */	fmuls f1, f1, f1
/* 803AD120 003AA060  EC 3E 0F BA */	fmadds f1, f30, f30, f1
/* 803AD124 003AA064  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803AD128 003AA068  40 80 00 4C */	bge .L_803AD174
/* 803AD12C 003AA06C  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 803AD130 003AA070  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 803AD134 003AA074  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractPress@ha
/* 803AD138 003AA078  38 00 00 00 */	li r0, 0
/* 803AD13C 003AA07C  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 803AD140 003AA080  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 803AD144 003AA084  38 A3 B3 20 */	addi r5, r3, __vt__Q24Game13InteractPress@l
/* 803AD148 003AA088  7F E3 FB 78 */	mr r3, r31
/* 803AD14C 003AA08C  90 81 00 38 */	stw r4, 0x38(r1)
/* 803AD150 003AA090  38 81 00 38 */	addi r4, r1, 0x38
/* 803AD154 003AA094  93 C1 00 3C */	stw r30, 0x3c(r1)
/* 803AD158 003AA098  90 A1 00 38 */	stw r5, 0x38(r1)
/* 803AD15C 003AA09C  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 803AD160 003AA0A0  90 01 00 44 */	stw r0, 0x44(r1)
/* 803AD164 003AA0A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 803AD168 003AA0A8  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 803AD16C 003AA0AC  7D 89 03 A6 */	mtctr r12
/* 803AD170 003AA0B0  4E 80 04 21 */	bctrl 
.L_803AD174:
/* 803AD174 003AA0B4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803AD178 003AA0B8  28 00 00 00 */	cmplwi r0, 0
/* 803AD17C 003AA0BC  40 82 00 24 */	bne .L_803AD1A0
/* 803AD180 003AA0C0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AD184 003AA0C4  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AD188 003AA0C8  81 83 00 00 */	lwz r12, 0(r3)
/* 803AD18C 003AA0CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803AD190 003AA0D0  7D 89 03 A6 */	mtctr r12
/* 803AD194 003AA0D4  4E 80 04 21 */	bctrl 
/* 803AD198 003AA0D8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 803AD19C 003AA0DC  48 00 00 94 */	b .L_803AD230
.L_803AD1A0:
/* 803AD1A0 003AA0E0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AD1A4 003AA0E4  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AD1A8 003AA0E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803AD1AC 003AA0EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803AD1B0 003AA0F0  7D 89 03 A6 */	mtctr r12
/* 803AD1B4 003AA0F4  4E 80 04 21 */	bctrl 
/* 803AD1B8 003AA0F8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 803AD1BC 003AA0FC  48 00 00 58 */	b .L_803AD214
.L_803AD1C0:
/* 803AD1C0 003AA100  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AD1C4 003AA104  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AD1C8 003AA108  81 83 00 00 */	lwz r12, 0(r3)
/* 803AD1CC 003AA10C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803AD1D0 003AA110  7D 89 03 A6 */	mtctr r12
/* 803AD1D4 003AA114  4E 80 04 21 */	bctrl 
/* 803AD1D8 003AA118  7C 64 1B 78 */	mr r4, r3
/* 803AD1DC 003AA11C  80 61 00 54 */	lwz r3, 0x54(r1)
/* 803AD1E0 003AA120  81 83 00 00 */	lwz r12, 0(r3)
/* 803AD1E4 003AA124  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AD1E8 003AA128  7D 89 03 A6 */	mtctr r12
/* 803AD1EC 003AA12C  4E 80 04 21 */	bctrl 
/* 803AD1F0 003AA130  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AD1F4 003AA134  40 82 00 3C */	bne .L_803AD230
/* 803AD1F8 003AA138  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AD1FC 003AA13C  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AD200 003AA140  81 83 00 00 */	lwz r12, 0(r3)
/* 803AD204 003AA144  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803AD208 003AA148  7D 89 03 A6 */	mtctr r12
/* 803AD20C 003AA14C  4E 80 04 21 */	bctrl 
/* 803AD210 003AA150  90 61 00 4C */	stw r3, 0x4c(r1)
.L_803AD214:
/* 803AD214 003AA154  81 81 00 48 */	lwz r12, 0x48(r1)
/* 803AD218 003AA158  38 61 00 48 */	addi r3, r1, 0x48
/* 803AD21C 003AA15C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AD220 003AA160  7D 89 03 A6 */	mtctr r12
/* 803AD224 003AA164  4E 80 04 21 */	bctrl 
/* 803AD228 003AA168  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AD22C 003AA16C  41 82 FF 94 */	beq .L_803AD1C0
.L_803AD230:
/* 803AD230 003AA170  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AD234 003AA174  81 83 00 00 */	lwz r12, 0(r3)
/* 803AD238 003AA178  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803AD23C 003AA17C  7D 89 03 A6 */	mtctr r12
/* 803AD240 003AA180  4E 80 04 21 */	bctrl 
/* 803AD244 003AA184  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AD248 003AA188  7C 04 18 40 */	cmplw r4, r3
/* 803AD24C 003AA18C  40 82 FE 24 */	bne .L_803AD070
/* 803AD250 003AA190  38 61 00 68 */	addi r3, r1, 0x68
/* 803AD254 003AA194  38 80 FF FF */	li r4, -1
/* 803AD258 003AA198  4B DF 2B 0D */	bl __dt__Q24Game8StickersFv
.L_803AD25C:
/* 803AD25C 003AA19C  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 803AD260 003AA1A0  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 803AD264 003AA1A4  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 803AD268 003AA1A8  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 803AD26C 003AA1AC  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 803AD270 003AA1B0  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 803AD274 003AA1B4  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 803AD278 003AA1B8  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 803AD27C 003AA1BC  7C 08 03 A6 */	mtlr r0
/* 803AD280 003AA1C0  38 21 00 E0 */	addi r1, r1, 0xe0
/* 803AD284 003AA1C4  4E 80 00 20 */	blr 

.global damageCallBack__Q34Game4Tyre3ObjFPQ24Game8CreaturefP8CollPart
damageCallBack__Q34Game4Tyre3ObjFPQ24Game8CreaturefP8CollPart:
/* 803AD288 003AA1C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803AD28C 003AA1CC  7C 08 02 A6 */	mflr r0
/* 803AD290 003AA1D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803AD294 003AA1D4  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 803AD298 003AA1D8  FF E0 08 90 */	fmr f31, f1
/* 803AD29C 003AA1DC  93 E1 00 14 */	stw r31, 0x14(r1)
/* 803AD2A0 003AA1E0  7C BF 2B 78 */	mr r31, r5
/* 803AD2A4 003AA1E4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 803AD2A8 003AA1E8  7C 9E 23 78 */	mr r30, r4
/* 803AD2AC 003AA1EC  93 A1 00 0C */	stw r29, 0xc(r1)
/* 803AD2B0 003AA1F0  7C 7D 1B 78 */	mr r29, r3
/* 803AD2B4 003AA1F4  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 803AD2B8 003AA1F8  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803AD2BC 003AA1FC  40 82 00 10 */	bne .L_803AD2CC
/* 803AD2C0 003AA200  48 00 02 11 */	bl isFreeze__Q34Game4Tyre3ObjFv
/* 803AD2C4 003AA204  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AD2C8 003AA208  41 82 00 3C */	beq .L_803AD304
.L_803AD2CC:
/* 803AD2CC 003AA20C  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 803AD2D0 003AA210  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803AD2D4 003AA214  40 82 00 10 */	bne .L_803AD2E4
/* 803AD2D8 003AA218  88 1D 03 21 */	lbz r0, 0x321(r29)
/* 803AD2DC 003AA21C  28 00 00 00 */	cmplwi r0, 0
/* 803AD2E0 003AA220  40 82 00 0C */	bne .L_803AD2EC
.L_803AD2E4:
/* 803AD2E4 003AA224  38 60 00 00 */	li r3, 0
/* 803AD2E8 003AA228  48 00 00 20 */	b .L_803AD308
.L_803AD2EC:
/* 803AD2EC 003AA22C  FC 20 F8 90 */	fmr f1, f31
/* 803AD2F0 003AA230  7F A3 EB 78 */	mr r3, r29
/* 803AD2F4 003AA234  7F C4 F3 78 */	mr r4, r30
/* 803AD2F8 003AA238  7F E5 FB 78 */	mr r5, r31
/* 803AD2FC 003AA23C  4B D5 8D 71 */	bl damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
/* 803AD300 003AA240  48 00 00 08 */	b .L_803AD308
.L_803AD304:
/* 803AD304 003AA244  38 60 00 00 */	li r3, 0
.L_803AD308:
/* 803AD308 003AA248  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803AD30C 003AA24C  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 803AD310 003AA250  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 803AD314 003AA254  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 803AD318 003AA258  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 803AD31C 003AA25C  7C 08 03 A6 */	mtlr r0
/* 803AD320 003AA260  38 21 00 20 */	addi r1, r1, 0x20
/* 803AD324 003AA264  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game4Tyre3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game4Tyre3ObjFPQ24Game8CreaturefP8CollPart:
/* 803AD328 003AA268  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AD32C 003AA26C  7C 08 02 A6 */	mflr r0
/* 803AD330 003AA270  28 04 00 00 */	cmplwi r4, 0
/* 803AD334 003AA274  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AD338 003AA278  41 82 00 18 */	beq .L_803AD350
/* 803AD33C 003AA27C  7C 83 23 78 */	mr r3, r4
/* 803AD340 003AA280  81 84 00 00 */	lwz r12, 0(r4)
/* 803AD344 003AA284  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803AD348 003AA288  7D 89 03 A6 */	mtctr r12
/* 803AD34C 003AA28C  4E 80 04 21 */	bctrl 
.L_803AD350:
/* 803AD350 003AA290  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AD354 003AA294  38 60 00 00 */	li r3, 0
/* 803AD358 003AA298  7C 08 03 A6 */	mtlr r0
/* 803AD35C 003AA29C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AD360 003AA2A0  4E 80 00 20 */	blr 

.global earthquakeCallBack__Q34Game4Tyre3ObjFPQ24Game8Creaturef
earthquakeCallBack__Q34Game4Tyre3ObjFPQ24Game8Creaturef:
/* 803AD364 003AA2A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AD368 003AA2A8  7C 08 02 A6 */	mflr r0
/* 803AD36C 003AA2AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AD370 003AA2B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AD374 003AA2B4  7C 7F 1B 78 */	mr r31, r3
/* 803AD378 003AA2B8  4B D5 A0 7D */	bl getStateID__Q24Game9EnemyBaseFv
/* 803AD37C 003AA2BC  2C 03 00 00 */	cmpwi r3, 0
/* 803AD380 003AA2C0  40 82 00 24 */	bne .L_803AD3A4
/* 803AD384 003AA2C4  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 803AD388 003AA2C8  7F E4 FB 78 */	mr r4, r31
/* 803AD38C 003AA2CC  38 A0 00 02 */	li r5, 2
/* 803AD390 003AA2D0  38 C0 00 00 */	li r6, 0
/* 803AD394 003AA2D4  81 83 00 00 */	lwz r12, 0(r3)
/* 803AD398 003AA2D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803AD39C 003AA2DC  7D 89 03 A6 */	mtctr r12
/* 803AD3A0 003AA2E0  4E 80 04 21 */	bctrl 
.L_803AD3A4:
/* 803AD3A4 003AA2E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AD3A8 003AA2E8  38 60 00 00 */	li r3, 0
/* 803AD3AC 003AA2EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AD3B0 003AA2F0  7C 08 03 A6 */	mtlr r0
/* 803AD3B4 003AA2F4  38 21 00 10 */	addi r1, r1, 0x10
/* 803AD3B8 003AA2F8  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game4Tyre3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game4Tyre3ObjFPQ24Game8WaterBox:
/* 803AD3BC 003AA2FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AD3C0 003AA300  7C 08 02 A6 */	mflr r0
/* 803AD3C4 003AA304  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AD3C8 003AA308  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AD3CC 003AA30C  7C 7F 1B 78 */	mr r31, r3
/* 803AD3D0 003AA310  4B D5 6A C5 */	bl inWaterCallback__Q24Game9EnemyBaseFPQ24Game8WaterBox
/* 803AD3D4 003AA314  7F E3 FB 78 */	mr r3, r31
/* 803AD3D8 003AA318  48 00 11 1D */	bl fadeSmokeEffect__Q34Game4Tyre3ObjFv
/* 803AD3DC 003AA31C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AD3E0 003AA320  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AD3E4 003AA324  7C 08 03 A6 */	mtlr r0
/* 803AD3E8 003AA328  38 21 00 10 */	addi r1, r1, 0x10
/* 803AD3EC 003AA32C  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game4Tyre3ObjFv
outWaterCallback__Q34Game4Tyre3ObjFv:
/* 803AD3F0 003AA330  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AD3F4 003AA334  7C 08 02 A6 */	mflr r0
/* 803AD3F8 003AA338  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AD3FC 003AA33C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AD400 003AA340  7C 7F 1B 78 */	mr r31, r3
/* 803AD404 003AA344  4B D5 69 29 */	bl outWaterCallback__Q24Game9EnemyBaseFv
/* 803AD408 003AA348  7F E3 FB 78 */	mr r3, r31
/* 803AD40C 003AA34C  4B D5 9F E9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803AD410 003AA350  2C 03 00 00 */	cmpwi r3, 0
/* 803AD414 003AA354  40 82 00 0C */	bne .L_803AD420
/* 803AD418 003AA358  7F E3 FB 78 */	mr r3, r31
/* 803AD41C 003AA35C  48 00 10 75 */	bl createSmokeEffect__Q34Game4Tyre3ObjFv
.L_803AD420:
/* 803AD420 003AA360  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AD424 003AA364  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AD428 003AA368  7C 08 03 A6 */	mtlr r0
/* 803AD42C 003AA36C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AD430 003AA370  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game4Tyre3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game4Tyre3ObjFRQ24Game11ShadowParam:
/* 803AD434 003AA374  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 803AD438 003AA378  C0 A2 12 80 */	lfs f5, lbl_8051F5E0@sda21(r2)
/* 803AD43C 003AA37C  D0 04 00 00 */	stfs f0, 0(r4)
/* 803AD440 003AA380  C0 62 12 58 */	lfs f3, lbl_8051F5B8@sda21(r2)
/* 803AD444 003AA384  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 803AD448 003AA388  C0 42 12 64 */	lfs f2, lbl_8051F5C4@sda21(r2)
/* 803AD44C 003AA38C  D0 04 00 04 */	stfs f0, 4(r4)
/* 803AD450 003AA390  C0 22 12 84 */	lfs f1, lbl_8051F5E4@sda21(r2)
/* 803AD454 003AA394  C0 83 01 94 */	lfs f4, 0x194(r3)
/* 803AD458 003AA398  C0 02 12 88 */	lfs f0, lbl_8051F5E8@sda21(r2)
/* 803AD45C 003AA39C  D0 84 00 08 */	stfs f4, 8(r4)
/* 803AD460 003AA3A0  C0 83 01 90 */	lfs f4, 0x190(r3)
/* 803AD464 003AA3A4  EC 85 20 2A */	fadds f4, f5, f4
/* 803AD468 003AA3A8  D0 84 00 04 */	stfs f4, 4(r4)
/* 803AD46C 003AA3AC  D0 64 00 0C */	stfs f3, 0xc(r4)
/* 803AD470 003AA3B0  D0 44 00 10 */	stfs f2, 0x10(r4)
/* 803AD474 003AA3B4  D0 64 00 14 */	stfs f3, 0x14(r4)
/* 803AD478 003AA3B8  D0 24 00 18 */	stfs f1, 0x18(r4)
/* 803AD47C 003AA3BC  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 803AD480 003AA3C0  4E 80 00 20 */	blr 

.global needShadow__Q34Game4Tyre3ObjFv
needShadow__Q34Game4Tyre3ObjFv:
/* 803AD484 003AA3C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AD488 003AA3C8  7C 08 02 A6 */	mflr r0
/* 803AD48C 003AA3CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AD490 003AA3D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AD494 003AA3D4  7C 7F 1B 78 */	mr r31, r3
/* 803AD498 003AA3D8  4B D5 9F 79 */	bl needShadow__Q24Game9EnemyBaseFv
/* 803AD49C 003AA3DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AD4A0 003AA3E0  41 82 00 0C */	beq .L_803AD4AC
/* 803AD4A4 003AA3E4  38 60 00 01 */	li r3, 1
/* 803AD4A8 003AA3E8  48 00 00 14 */	b .L_803AD4BC
.L_803AD4AC:
/* 803AD4AC 003AA3EC  7F E3 FB 78 */	mr r3, r31
/* 803AD4B0 003AA3F0  4B D5 9F 45 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803AD4B4 003AA3F4  2C 03 00 01 */	cmpwi r3, 1
/* 803AD4B8 003AA3F8  38 60 00 01 */	li r3, 1
.L_803AD4BC:
/* 803AD4BC 003AA3FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AD4C0 003AA400  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AD4C4 003AA404  7C 08 03 A6 */	mtlr r0
/* 803AD4C8 003AA408  38 21 00 10 */	addi r1, r1, 0x10
/* 803AD4CC 003AA40C  4E 80 00 20 */	blr 

.global isFreeze__Q34Game4Tyre3ObjFv
isFreeze__Q34Game4Tyre3ObjFv:
/* 803AD4D0 003AA410  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AD4D4 003AA414  7C 08 02 A6 */	mflr r0
/* 803AD4D8 003AA418  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AD4DC 003AA41C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AD4E0 003AA420  7C 7F 1B 78 */	mr r31, r3
/* 803AD4E4 003AA424  4B D5 9F 11 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803AD4E8 003AA428  2C 03 00 02 */	cmpwi r3, 2
/* 803AD4EC 003AA42C  41 82 00 14 */	beq .L_803AD500
/* 803AD4F0 003AA430  7F E3 FB 78 */	mr r3, r31
/* 803AD4F4 003AA434  4B D5 9F 01 */	bl getStateID__Q24Game9EnemyBaseFv
/* 803AD4F8 003AA438  2C 03 00 03 */	cmpwi r3, 3
/* 803AD4FC 003AA43C  40 82 00 0C */	bne .L_803AD508
.L_803AD500:
/* 803AD500 003AA440  38 60 00 01 */	li r3, 1
/* 803AD504 003AA444  48 00 00 08 */	b .L_803AD50C
.L_803AD508:
/* 803AD508 003AA448  38 60 00 00 */	li r3, 0
.L_803AD50C:
/* 803AD50C 003AA44C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AD510 003AA450  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AD514 003AA454  7C 08 03 A6 */	mtlr r0
/* 803AD518 003AA458  38 21 00 10 */	addi r1, r1, 0x10
/* 803AD51C 003AA45C  4E 80 00 20 */	blr 

.global frontRollMtxCalc__Q34Game4Tyre3ObjFv
frontRollMtxCalc__Q34Game4Tyre3ObjFv:
/* 803AD520 003AA460  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 803AD524 003AA464  7C 08 02 A6 */	mflr r0
/* 803AD528 003AA468  90 01 00 94 */	stw r0, 0x94(r1)
/* 803AD52C 003AA46C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 803AD530 003AA470  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 803AD534 003AA474  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 803AD538 003AA478  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 803AD53C 003AA47C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 803AD540 003AA480  93 C1 00 68 */	stw r30, 0x68(r1)
/* 803AD544 003AA484  7C 7F 1B 78 */	mr r31, r3
/* 803AD548 003AA488  A0 03 03 10 */	lhz r0, 0x310(r3)
/* 803AD54C 003AA48C  80 63 01 74 */	lwz r3, 0x174(r3)
/* 803AD550 003AA490  1C 00 00 3C */	mulli r0, r0, 0x3c
/* 803AD554 003AA494  80 63 00 10 */	lwz r3, 0x10(r3)
/* 803AD558 003AA498  7C 63 02 14 */	add r3, r3, r0
/* 803AD55C 003AA49C  48 07 C3 45 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AD560 003AA4A0  C0 02 12 58 */	lfs f0, lbl_8051F5B8@sda21(r2)
/* 803AD564 003AA4A4  7C 7E 1B 78 */	mr r30, r3
/* 803AD568 003AA4A8  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803AD56C 003AA4AC  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803AD570 003AA4B0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803AD574 003AA4B4  88 1F 02 D0 */	lbz r0, 0x2d0(r31)
/* 803AD578 003AA4B8  28 00 00 00 */	cmplwi r0, 0
/* 803AD57C 003AA4BC  41 82 00 40 */	beq .L_803AD5BC
/* 803AD580 003AA4C0  80 1F 02 D4 */	lwz r0, 0x2d4(r31)
/* 803AD584 003AA4C4  3C 80 80 51 */	lis r4, mCurrentMtx__6J3DSys@ha
/* 803AD588 003AA4C8  80 BF 02 D8 */	lwz r5, 0x2d8(r31)
/* 803AD58C 003AA4CC  38 84 F3 D4 */	addi r4, r4, mCurrentMtx__6J3DSys@l
/* 803AD590 003AA4D0  90 01 00 08 */	stw r0, 8(r1)
/* 803AD594 003AA4D4  80 1F 02 DC */	lwz r0, 0x2dc(r31)
/* 803AD598 003AA4D8  90 A1 00 0C */	stw r5, 0xc(r1)
/* 803AD59C 003AA4DC  C0 01 00 08 */	lfs f0, 8(r1)
/* 803AD5A0 003AA4E0  90 01 00 10 */	stw r0, 0x10(r1)
/* 803AD5A4 003AA4E4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803AD5A8 003AA4E8  D0 1E 00 0C */	stfs f0, 0xc(r30)
/* 803AD5AC 003AA4EC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803AD5B0 003AA4F0  D0 3E 00 1C */	stfs f1, 0x1c(r30)
/* 803AD5B4 003AA4F4  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 803AD5B8 003AA4F8  4B D3 CD 15 */	bl PSMTXCopy
.L_803AD5BC:
/* 803AD5BC 003AA4FC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803AD5C0 003AA500  C0 02 12 58 */	lfs f0, lbl_8051F5B8@sda21(r2)
/* 803AD5C4 003AA504  C0 23 08 34 */	lfs f1, 0x834(r3)
/* 803AD5C8 003AA508  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 803AD5CC 003AA50C  41 82 00 14 */	beq .L_803AD5E0
/* 803AD5D0 003AA510  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803AD5D4 003AA514  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803AD5D8 003AA518  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803AD5DC 003AA51C  48 00 00 F8 */	b .L_803AD6D4
.L_803AD5E0:
/* 803AD5E0 003AA520  C3 E3 08 44 */	lfs f31, 0x844(r3)
/* 803AD5E4 003AA524  C3 C3 08 40 */	lfs f30, 0x840(r3)
/* 803AD5E8 003AA528  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 803AD5EC 003AA52C  C0 5F 03 14 */	lfs f2, 0x314(r31)
/* 803AD5F0 003AA530  48 06 46 0D */	bl angDist__Fff
/* 803AD5F4 003AA534  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 803AD5F8 003AA538  40 81 00 2C */	ble .L_803AD624
/* 803AD5FC 003AA53C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803AD600 003AA540  C0 1F 02 CC */	lfs f0, 0x2cc(r31)
/* 803AD604 003AA544  C0 43 08 38 */	lfs f2, 0x838(r3)
/* 803AD608 003AA548  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 803AD60C 003AA54C  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 803AD610 003AA550  C0 1F 02 CC */	lfs f0, 0x2cc(r31)
/* 803AD614 003AA554  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 803AD618 003AA558  40 81 00 98 */	ble .L_803AD6B0
/* 803AD61C 003AA55C  D3 FF 02 CC */	stfs f31, 0x2cc(r31)
/* 803AD620 003AA560  48 00 00 90 */	b .L_803AD6B0
.L_803AD624:
/* 803AD624 003AA564  FC 00 F0 50 */	fneg f0, f30
/* 803AD628 003AA568  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803AD62C 003AA56C  40 80 00 30 */	bge .L_803AD65C
/* 803AD630 003AA570  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803AD634 003AA574  FC 60 F8 50 */	fneg f3, f31
/* 803AD638 003AA578  C0 1F 02 CC */	lfs f0, 0x2cc(r31)
/* 803AD63C 003AA57C  C0 43 08 38 */	lfs f2, 0x838(r3)
/* 803AD640 003AA580  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 803AD644 003AA584  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 803AD648 003AA588  C0 1F 02 CC */	lfs f0, 0x2cc(r31)
/* 803AD64C 003AA58C  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 803AD650 003AA590  40 80 00 60 */	bge .L_803AD6B0
/* 803AD654 003AA594  D0 7F 02 CC */	stfs f3, 0x2cc(r31)
/* 803AD658 003AA598  48 00 00 58 */	b .L_803AD6B0
.L_803AD65C:
/* 803AD65C 003AA59C  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 803AD660 003AA5A0  C0 22 12 58 */	lfs f1, lbl_8051F5B8@sda21(r2)
/* 803AD664 003AA5A4  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 803AD668 003AA5A8  40 81 00 28 */	ble .L_803AD690
/* 803AD66C 003AA5AC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803AD670 003AA5B0  C0 03 08 3C */	lfs f0, 0x83c(r3)
/* 803AD674 003AA5B4  EC 02 00 28 */	fsubs f0, f2, f0
/* 803AD678 003AA5B8  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 803AD67C 003AA5BC  C0 1F 02 CC */	lfs f0, 0x2cc(r31)
/* 803AD680 003AA5C0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803AD684 003AA5C4  40 80 00 2C */	bge .L_803AD6B0
/* 803AD688 003AA5C8  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 803AD68C 003AA5CC  48 00 00 24 */	b .L_803AD6B0
.L_803AD690:
/* 803AD690 003AA5D0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803AD694 003AA5D4  C0 03 08 3C */	lfs f0, 0x83c(r3)
/* 803AD698 003AA5D8  EC 02 00 2A */	fadds f0, f2, f0
/* 803AD69C 003AA5DC  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 803AD6A0 003AA5E0  C0 1F 02 CC */	lfs f0, 0x2cc(r31)
/* 803AD6A4 003AA5E4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803AD6A8 003AA5E8  40 81 00 08 */	ble .L_803AD6B0
/* 803AD6AC 003AA5EC  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
.L_803AD6B0:
/* 803AD6B0 003AA5F0  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 803AD6B4 003AA5F4  38 61 00 2C */	addi r3, r1, 0x2c
/* 803AD6B8 003AA5F8  C0 02 12 58 */	lfs f0, lbl_8051F5B8@sda21(r2)
/* 803AD6BC 003AA5FC  38 81 00 20 */	addi r4, r1, 0x20
/* 803AD6C0 003AA600  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803AD6C4 003AA604  38 A1 00 14 */	addi r5, r1, 0x14
/* 803AD6C8 003AA608  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803AD6CC 003AA60C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803AD6D0 003AA610  48 07 B1 B9 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
.L_803AD6D4:
/* 803AD6D4 003AA614  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 803AD6D8 003AA618  38 82 12 8C */	addi r4, r2, lbl_8051F5EC@sda21
/* 803AD6DC 003AA61C  48 09 19 09 */	bl getJoint__Q28SysShape5ModelFPc
/* 803AD6E0 003AA620  48 07 C1 C1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AD6E4 003AA624  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 803AD6E8 003AA628  38 82 12 94 */	addi r4, r2, lbl_8051F5F4@sda21
/* 803AD6EC 003AA62C  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 803AD6F0 003AA630  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803AD6F4 003AA634  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 803AD6F8 003AA638  D0 3F 02 F0 */	stfs f1, 0x2f0(r31)
/* 803AD6FC 003AA63C  D0 5F 02 F4 */	stfs f2, 0x2f4(r31)
/* 803AD700 003AA640  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 803AD704 003AA644  48 09 18 E1 */	bl getJoint__Q28SysShape5ModelFPc
/* 803AD708 003AA648  48 07 C1 99 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AD70C 003AA64C  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 803AD710 003AA650  7F C5 F3 78 */	mr r5, r30
/* 803AD714 003AA654  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 803AD718 003AA658  38 81 00 2C */	addi r4, r1, 0x2c
/* 803AD71C 003AA65C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803AD720 003AA660  7F C3 F3 78 */	mr r3, r30
/* 803AD724 003AA664  D0 1F 02 F8 */	stfs f0, 0x2f8(r31)
/* 803AD728 003AA668  D0 3F 02 FC */	stfs f1, 0x2fc(r31)
/* 803AD72C 003AA66C  D0 5F 03 00 */	stfs f2, 0x300(r31)
/* 803AD730 003AA670  4B D3 CB D1 */	bl PSMTXConcat
/* 803AD734 003AA674  3C 60 80 51 */	lis r3, mCurrentMtx__6J3DSys@ha
/* 803AD738 003AA678  38 81 00 2C */	addi r4, r1, 0x2c
/* 803AD73C 003AA67C  38 63 F3 D4 */	addi r3, r3, mCurrentMtx__6J3DSys@l
/* 803AD740 003AA680  7C 65 1B 78 */	mr r5, r3
/* 803AD744 003AA684  4B D3 CB BD */	bl PSMTXConcat
/* 803AD748 003AA688  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 803AD74C 003AA68C  38 61 00 2C */	addi r3, r1, 0x2c
/* 803AD750 003AA690  C0 02 12 58 */	lfs f0, lbl_8051F5B8@sda21(r2)
/* 803AD754 003AA694  38 81 00 20 */	addi r4, r1, 0x20
/* 803AD758 003AA698  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 803AD75C 003AA69C  38 A1 00 14 */	addi r5, r1, 0x14
/* 803AD760 003AA6A0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803AD764 003AA6A4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803AD768 003AA6A8  48 07 B1 21 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 803AD76C 003AA6AC  7F C3 F3 78 */	mr r3, r30
/* 803AD770 003AA6B0  7F C5 F3 78 */	mr r5, r30
/* 803AD774 003AA6B4  38 81 00 2C */	addi r4, r1, 0x2c
/* 803AD778 003AA6B8  4B D3 CB 89 */	bl PSMTXConcat
/* 803AD77C 003AA6BC  3C 60 80 51 */	lis r3, mCurrentMtx__6J3DSys@ha
/* 803AD780 003AA6C0  38 81 00 2C */	addi r4, r1, 0x2c
/* 803AD784 003AA6C4  38 63 F3 D4 */	addi r3, r3, mCurrentMtx__6J3DSys@l
/* 803AD788 003AA6C8  7C 65 1B 78 */	mr r5, r3
/* 803AD78C 003AA6CC  4B D3 CB 75 */	bl PSMTXConcat
/* 803AD790 003AA6D0  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 803AD794 003AA6D4  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 803AD798 003AA6D8  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 803AD79C 003AA6DC  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 803AD7A0 003AA6E0  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 803AD7A4 003AA6E4  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803AD7A8 003AA6E8  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 803AD7AC 003AA6EC  7C 08 03 A6 */	mtlr r0
/* 803AD7B0 003AA6F0  38 21 00 90 */	addi r1, r1, 0x90
/* 803AD7B4 003AA6F4  4E 80 00 20 */	blr 

.global rearRollMtxCalc__Q34Game4Tyre3ObjFv
rearRollMtxCalc__Q34Game4Tyre3ObjFv:
/* 803AD7B8 003AA6F8  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 803AD7BC 003AA6FC  7C 08 02 A6 */	mflr r0
/* 803AD7C0 003AA700  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 803AD7C4 003AA704  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 803AD7C8 003AA708  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 803AD7CC 003AA70C  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 803AD7D0 003AA710  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 803AD7D4 003AA714  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 803AD7D8 003AA718  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 803AD7DC 003AA71C  7C 7E 1B 78 */	mr r30, r3
/* 803AD7E0 003AA720  A0 03 03 12 */	lhz r0, 0x312(r3)
/* 803AD7E4 003AA724  80 63 01 74 */	lwz r3, 0x174(r3)
/* 803AD7E8 003AA728  1C 00 00 3C */	mulli r0, r0, 0x3c
/* 803AD7EC 003AA72C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 803AD7F0 003AA730  7C 63 02 14 */	add r3, r3, r0
/* 803AD7F4 003AA734  48 07 C0 AD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AD7F8 003AA738  7C 7F 1B 78 */	mr r31, r3
/* 803AD7FC 003AA73C  C0 02 12 9C */	lfs f0, lbl_8051F5FC@sda21(r2)
/* 803AD800 003AA740  C0 5F 00 1C */	lfs f2, 0x1c(r31)
/* 803AD804 003AA744  38 81 00 58 */	addi r4, r1, 0x58
/* 803AD808 003AA748  C0 7F 00 2C */	lfs f3, 0x2c(r31)
/* 803AD80C 003AA74C  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 803AD810 003AA750  EC 02 00 2A */	fadds f0, f2, f0
/* 803AD814 003AA754  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803AD818 003AA758  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 803AD81C 003AA75C  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 803AD820 003AA760  D0 61 00 60 */	stfs f3, 0x60(r1)
/* 803AD824 003AA764  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 803AD828 003AA768  81 83 00 04 */	lwz r12, 4(r3)
/* 803AD82C 003AA76C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803AD830 003AA770  7D 89 03 A6 */	mtctr r12
/* 803AD834 003AA774  4E 80 04 21 */	bctrl 
/* 803AD838 003AA778  7F C3 F3 78 */	mr r3, r30
/* 803AD83C 003AA77C  FF E0 08 90 */	fmr f31, f1
/* 803AD840 003AA780  81 9E 00 00 */	lwz r12, 0(r30)
/* 803AD844 003AA784  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 803AD848 003AA788  7D 89 03 A6 */	mtctr r12
/* 803AD84C 003AA78C  4E 80 04 21 */	bctrl 
/* 803AD850 003AA790  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AD854 003AA794  41 82 00 2C */	beq .L_803AD880
/* 803AD858 003AA798  C0 22 12 88 */	lfs f1, lbl_8051F5E8@sda21(r2)
/* 803AD85C 003AA79C  C0 5E 02 C8 */	lfs f2, 0x2c8(r30)
/* 803AD860 003AA7A0  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 803AD864 003AA7A4  EC 21 10 2A */	fadds f1, f1, f2
/* 803AD868 003AA7A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803AD86C 003AA7AC  40 80 00 24 */	bge .L_803AD890
/* 803AD870 003AA7B0  C0 02 12 80 */	lfs f0, lbl_8051F5E0@sda21(r2)
/* 803AD874 003AA7B4  EC 02 00 2A */	fadds f0, f2, f0
/* 803AD878 003AA7B8  D0 1E 02 C8 */	stfs f0, 0x2c8(r30)
/* 803AD87C 003AA7BC  48 00 00 14 */	b .L_803AD890
.L_803AD880:
/* 803AD880 003AA7C0  C0 3E 02 C8 */	lfs f1, 0x2c8(r30)
/* 803AD884 003AA7C4  C0 02 12 A0 */	lfs f0, lbl_8051F600@sda21(r2)
/* 803AD888 003AA7C8  EC 01 00 28 */	fsubs f0, f1, f0
/* 803AD88C 003AA7CC  D0 1E 02 C8 */	stfs f0, 0x2c8(r30)
.L_803AD890:
/* 803AD890 003AA7D0  C3 C2 12 80 */	lfs f30, lbl_8051F5E0@sda21(r2)
/* 803AD894 003AA7D4  7F C3 F3 78 */	mr r3, r30
/* 803AD898 003AA7D8  4B D5 9B 5D */	bl getStateID__Q24Game9EnemyBaseFv
/* 803AD89C 003AA7DC  2C 03 00 01 */	cmpwi r3, 1
/* 803AD8A0 003AA7E0  41 82 00 08 */	beq .L_803AD8A8
/* 803AD8A4 003AA7E4  C3 C2 12 58 */	lfs f30, lbl_8051F5B8@sda21(r2)
.L_803AD8A8:
/* 803AD8A8 003AA7E8  EC 1F F0 2A */	fadds f0, f31, f30
/* 803AD8AC 003AA7EC  C0 3E 02 C8 */	lfs f1, 0x2c8(r30)
/* 803AD8B0 003AA7F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803AD8B4 003AA7F4  4C 40 13 82 */	cror 2, 0, 2
/* 803AD8B8 003AA7F8  40 82 01 C4 */	bne .L_803ADA7C
/* 803AD8BC 003AA7FC  D3 FE 02 C8 */	stfs f31, 0x2c8(r30)
/* 803AD8C0 003AA800  C0 02 12 A4 */	lfs f0, lbl_8051F604@sda21(r2)
/* 803AD8C4 003AA804  C0 7F 00 2C */	lfs f3, 0x2c(r31)
/* 803AD8C8 003AA808  C0 5F 00 1C */	lfs f2, 0x1c(r31)
/* 803AD8CC 003AA80C  EC 1F 00 2A */	fadds f0, f31, f0
/* 803AD8D0 003AA810  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 803AD8D4 003AA814  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 803AD8D8 003AA818  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 803AD8DC 003AA81C  D0 61 00 54 */	stfs f3, 0x54(r1)
/* 803AD8E0 003AA820  D3 E1 00 50 */	stfs f31, 0x50(r1)
/* 803AD8E4 003AA824  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 803AD8E8 003AA828  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803AD8EC 003AA82C  40 80 00 24 */	bge .L_803AD910
/* 803AD8F0 003AA830  88 1E 03 20 */	lbz r0, 0x320(r30)
/* 803AD8F4 003AA834  28 00 00 00 */	cmplwi r0, 0
/* 803AD8F8 003AA838  41 82 00 18 */	beq .L_803AD910
/* 803AD8FC 003AA83C  7F C3 F3 78 */	mr r3, r30
/* 803AD900 003AA840  38 81 00 4C */	addi r4, r1, 0x4c
/* 803AD904 003AA844  48 00 0C 41 */	bl "landEffect__Q34Game4Tyre3ObjFR10Vector3<f>"
/* 803AD908 003AA848  38 00 00 00 */	li r0, 0
/* 803AD90C 003AA84C  98 1E 03 20 */	stb r0, 0x320(r30)
.L_803AD910:
/* 803AD910 003AA850  80 1E 00 C8 */	lwz r0, 0xc8(r30)
/* 803AD914 003AA854  28 00 00 00 */	cmplwi r0, 0
/* 803AD918 003AA858  41 82 01 64 */	beq .L_803ADA7C
/* 803AD91C 003AA85C  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 803AD920 003AA860  D0 1E 03 24 */	stfs f0, 0x324(r30)
/* 803AD924 003AA864  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 803AD928 003AA868  D0 1E 03 28 */	stfs f0, 0x328(r30)
/* 803AD92C 003AA86C  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 803AD930 003AA870  D0 1E 03 2C */	stfs f0, 0x32c(r30)
/* 803AD934 003AA874  80 1E 03 40 */	lwz r0, 0x340(r30)
/* 803AD938 003AA878  28 00 00 00 */	cmplwi r0, 0
/* 803AD93C 003AA87C  40 82 00 E8 */	bne .L_803ADA24
/* 803AD940 003AA880  C0 1E 03 24 */	lfs f0, 0x324(r30)
/* 803AD944 003AA884  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803AD948 003AA888  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 803AD94C 003AA88C  C0 02 12 A8 */	lfs f0, lbl_8051F608@sda21(r2)
/* 803AD950 003AA890  28 03 00 00 */	cmplwi r3, 0
/* 803AD954 003AA894  C0 3E 03 28 */	lfs f1, 0x328(r30)
/* 803AD958 003AA898  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 803AD95C 003AA89C  C0 3E 03 2C */	lfs f1, 0x32c(r30)
/* 803AD960 003AA8A0  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 803AD964 003AA8A4  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 803AD968 003AA8A8  41 82 00 10 */	beq .L_803AD978
/* 803AD96C 003AA8AC  38 81 00 3C */	addi r4, r1, 0x3c
/* 803AD970 003AA8B0  4B DB 5F B9 */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 803AD974 003AA8B4  90 7E 03 40 */	stw r3, 0x340(r30)
.L_803AD978:
/* 803AD978 003AA8B8  80 1E 03 40 */	lwz r0, 0x340(r30)
/* 803AD97C 003AA8BC  28 00 00 00 */	cmplwi r0, 0
/* 803AD980 003AA8C0  41 82 00 FC */	beq .L_803ADA7C
/* 803AD984 003AA8C4  7F C3 F3 78 */	mr r3, r30
/* 803AD988 003AA8C8  C3 FE 01 F8 */	lfs f31, 0x1f8(r30)
/* 803AD98C 003AA8CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803AD990 003AA8D0  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 803AD994 003AA8D4  7D 89 03 A6 */	mtctr r12
/* 803AD998 003AA8D8  4E 80 04 21 */	bctrl 
/* 803AD99C 003AA8DC  80 1E 03 24 */	lwz r0, 0x324(r30)
/* 803AD9A0 003AA8E0  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 803AD9A4 003AA8E4  80 FE 03 28 */	lwz r7, 0x328(r30)
/* 803AD9A8 003AA8E8  3C 80 80 4B */	lis r4, __vt__Q23efx12ArgEnemyType@ha
/* 803AD9AC 003AA8EC  80 DE 03 2C */	lwz r6, 0x32c(r30)
/* 803AD9B0 003AA8F0  38 A5 A7 EC */	addi r5, r5, __vt__Q23efx3Arg@l
/* 803AD9B4 003AA8F4  90 01 00 08 */	stw r0, 8(r1)
/* 803AD9B8 003AA8F8  38 04 A7 E0 */	addi r0, r4, __vt__Q23efx12ArgEnemyType@l
/* 803AD9BC 003AA8FC  38 81 00 64 */	addi r4, r1, 0x64
/* 803AD9C0 003AA900  90 E1 00 0C */	stw r7, 0xc(r1)
/* 803AD9C4 003AA904  C0 41 00 08 */	lfs f2, 8(r1)
/* 803AD9C8 003AA908  90 C1 00 10 */	stw r6, 0x10(r1)
/* 803AD9CC 003AA90C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803AD9D0 003AA910  90 A1 00 64 */	stw r5, 0x64(r1)
/* 803AD9D4 003AA914  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803AD9D8 003AA918  D0 41 00 68 */	stfs f2, 0x68(r1)
/* 803AD9DC 003AA91C  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 803AD9E0 003AA920  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 803AD9E4 003AA924  90 01 00 64 */	stw r0, 0x64(r1)
/* 803AD9E8 003AA928  90 61 00 74 */	stw r3, 0x74(r1)
/* 803AD9EC 003AA92C  D3 E1 00 78 */	stfs f31, 0x78(r1)
/* 803AD9F0 003AA930  80 7E 03 3C */	lwz r3, 0x33c(r30)
/* 803AD9F4 003AA934  81 83 00 00 */	lwz r12, 0(r3)
/* 803AD9F8 003AA938  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AD9FC 003AA93C  7D 89 03 A6 */	mtctr r12
/* 803ADA00 003AA940  4E 80 04 21 */	bctrl 
/* 803ADA04 003AA944  80 7E 03 40 */	lwz r3, 0x340(r30)
/* 803ADA08 003AA948  81 83 00 00 */	lwz r12, 0(r3)
/* 803ADA0C 003AA94C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803ADA10 003AA950  7D 89 03 A6 */	mtctr r12
/* 803ADA14 003AA954  4E 80 04 21 */	bctrl 
/* 803ADA18 003AA958  C0 03 00 00 */	lfs f0, 0(r3)
/* 803ADA1C 003AA95C  D0 1E 03 28 */	stfs f0, 0x328(r30)
/* 803ADA20 003AA960  48 00 00 5C */	b .L_803ADA7C
.L_803ADA24:
/* 803ADA24 003AA964  C0 1E 03 24 */	lfs f0, 0x324(r30)
/* 803ADA28 003AA968  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803ADA2C 003AA96C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 803ADA30 003AA970  C0 02 12 A8 */	lfs f0, lbl_8051F608@sda21(r2)
/* 803ADA34 003AA974  28 03 00 00 */	cmplwi r3, 0
/* 803ADA38 003AA978  C0 3E 03 28 */	lfs f1, 0x328(r30)
/* 803ADA3C 003AA97C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 803ADA40 003AA980  C0 3E 03 2C */	lfs f1, 0x32c(r30)
/* 803ADA44 003AA984  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 803ADA48 003AA988  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 803ADA4C 003AA98C  41 82 00 10 */	beq .L_803ADA5C
/* 803ADA50 003AA990  38 81 00 2C */	addi r4, r1, 0x2c
/* 803ADA54 003AA994  4B DB 5E D5 */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 803ADA58 003AA998  90 7E 03 40 */	stw r3, 0x340(r30)
.L_803ADA5C:
/* 803ADA5C 003AA99C  80 1E 03 40 */	lwz r0, 0x340(r30)
/* 803ADA60 003AA9A0  28 00 00 00 */	cmplwi r0, 0
/* 803ADA64 003AA9A4  40 82 00 18 */	bne .L_803ADA7C
/* 803ADA68 003AA9A8  80 7E 03 3C */	lwz r3, 0x33c(r30)
/* 803ADA6C 003AA9AC  81 83 00 00 */	lwz r12, 0(r3)
/* 803ADA70 003AA9B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803ADA74 003AA9B4  7D 89 03 A6 */	mtctr r12
/* 803ADA78 003AA9B8  4E 80 04 21 */	bctrl 
.L_803ADA7C:
/* 803ADA7C 003AA9BC  C0 5E 02 C8 */	lfs f2, 0x2c8(r30)
/* 803ADA80 003AA9C0  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 803ADA84 003AA9C4  C0 02 12 A4 */	lfs f0, lbl_8051F604@sda21(r2)
/* 803ADA88 003AA9C8  EC 42 08 28 */	fsubs f2, f2, f1
/* 803ADA8C 003AA9CC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803ADA90 003AA9D0  40 81 00 08 */	ble .L_803ADA98
/* 803ADA94 003AA9D4  FC 40 00 90 */	fmr f2, f0
.L_803ADA98:
/* 803ADA98 003AA9D8  C0 02 12 A4 */	lfs f0, lbl_8051F604@sda21(r2)
/* 803ADA9C 003AA9DC  FC 00 00 50 */	fneg f0, f0
/* 803ADAA0 003AA9E0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803ADAA4 003AA9E4  40 80 00 08 */	bge .L_803ADAAC
/* 803ADAA8 003AA9E8  FC 40 00 90 */	fmr f2, f0
.L_803ADAAC:
/* 803ADAAC 003AA9EC  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 803ADAB0 003AA9F0  3C 60 80 51 */	lis r3, mCurrentMtx__6J3DSys@ha
/* 803ADAB4 003AA9F4  38 83 F3 D4 */	addi r4, r3, mCurrentMtx__6J3DSys@l
/* 803ADAB8 003AA9F8  EC 00 10 2A */	fadds f0, f0, f2
/* 803ADABC 003AA9FC  7F E3 FB 78 */	mr r3, r31
/* 803ADAC0 003AAA00  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 803ADAC4 003AAA04  4B D3 C8 09 */	bl PSMTXCopy
/* 803ADAC8 003AAA08  C0 22 12 58 */	lfs f1, lbl_8051F5B8@sda21(r2)
/* 803ADACC 003AAA0C  38 61 00 7C */	addi r3, r1, 0x7c
/* 803ADAD0 003AAA10  38 81 00 20 */	addi r4, r1, 0x20
/* 803ADAD4 003AAA14  38 A1 00 14 */	addi r5, r1, 0x14
/* 803ADAD8 003AAA18  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 803ADADC 003AAA1C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 803ADAE0 003AAA20  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 803ADAE4 003AAA24  C0 1E 02 C0 */	lfs f0, 0x2c0(r30)
/* 803ADAE8 003AAA28  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803ADAEC 003AAA2C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803ADAF0 003AAA30  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 803ADAF4 003AAA34  48 07 AD 95 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 803ADAF8 003AAA38  7F E3 FB 78 */	mr r3, r31
/* 803ADAFC 003AAA3C  7F E5 FB 78 */	mr r5, r31
/* 803ADB00 003AAA40  38 81 00 7C */	addi r4, r1, 0x7c
/* 803ADB04 003AAA44  4B D3 C7 FD */	bl PSMTXConcat
/* 803ADB08 003AAA48  3C 60 80 51 */	lis r3, mCurrentMtx__6J3DSys@ha
/* 803ADB0C 003AAA4C  38 81 00 7C */	addi r4, r1, 0x7c
/* 803ADB10 003AAA50  38 63 F3 D4 */	addi r3, r3, mCurrentMtx__6J3DSys@l
/* 803ADB14 003AAA54  7C 65 1B 78 */	mr r5, r3
/* 803ADB18 003AAA58  4B D3 C7 E9 */	bl PSMTXConcat
/* 803ADB1C 003AAA5C  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 803ADB20 003AAA60  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 803ADB24 003AAA64  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 803ADB28 003AAA68  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 803ADB2C 003AAA6C  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 803ADB30 003AAA70  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 803ADB34 003AAA74  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 803ADB38 003AAA78  7C 08 03 A6 */	mtlr r0
/* 803ADB3C 003AAA7C  38 21 00 E0 */	addi r1, r1, 0xe0
/* 803ADB40 003AAA80  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game4Tyre3ObjFv
getEnemyTypeID__Q34Game4Tyre3ObjFv:
/* 803ADB44 003AAA84  38 60 00 62 */	li r3, 0x62
/* 803ADB48 003AAA88  4E 80 00 20 */	blr 

.global moveStart__Q34Game4Tyre3ObjFv
moveStart__Q34Game4Tyre3ObjFv:
/* 803ADB4C 003AAA8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ADB50 003AAA90  7C 08 02 A6 */	mflr r0
/* 803ADB54 003AAA94  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ADB58 003AAA98  38 00 00 01 */	li r0, 1
/* 803ADB5C 003AAA9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803ADB60 003AAAA0  7C 7F 1B 78 */	mr r31, r3
/* 803ADB64 003AAAA4  98 03 03 21 */	stb r0, 0x321(r3)
/* 803ADB68 003AAAA8  4B D5 98 8D */	bl getStateID__Q24Game9EnemyBaseFv
/* 803ADB6C 003AAAAC  2C 03 00 02 */	cmpwi r3, 2
/* 803ADB70 003AAAB0  41 82 00 14 */	beq .L_803ADB84
/* 803ADB74 003AAAB4  7F E3 FB 78 */	mr r3, r31
/* 803ADB78 003AAAB8  4B D5 98 7D */	bl getStateID__Q24Game9EnemyBaseFv
/* 803ADB7C 003AAABC  2C 03 00 03 */	cmpwi r3, 3
/* 803ADB80 003AAAC0  40 82 00 0C */	bne .L_803ADB8C
.L_803ADB84:
/* 803ADB84 003AAAC4  38 00 00 01 */	li r0, 1
/* 803ADB88 003AAAC8  48 00 00 08 */	b .L_803ADB90
.L_803ADB8C:
/* 803ADB8C 003AAACC  38 00 00 00 */	li r0, 0
.L_803ADB90:
/* 803ADB90 003AAAD0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803ADB94 003AAAD4  41 82 00 24 */	beq .L_803ADBB8
/* 803ADB98 003AAAD8  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 803ADB9C 003AAADC  7F E4 FB 78 */	mr r4, r31
/* 803ADBA0 003AAAE0  38 A0 00 00 */	li r5, 0
/* 803ADBA4 003AAAE4  38 C0 00 00 */	li r6, 0
/* 803ADBA8 003AAAE8  81 83 00 00 */	lwz r12, 0(r3)
/* 803ADBAC 003AAAEC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803ADBB0 003AAAF0  7D 89 03 A6 */	mtctr r12
/* 803ADBB4 003AAAF4  4E 80 04 21 */	bctrl 
.L_803ADBB8:
/* 803ADBB8 003AAAF8  7F E3 FB 78 */	mr r3, r31
/* 803ADBBC 003AAAFC  4B D5 9B B1 */	bl constraintOff__Q24Game9EnemyBaseFv
/* 803ADBC0 003AAB00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ADBC4 003AAB04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803ADBC8 003AAB08  7C 08 03 A6 */	mtlr r0
/* 803ADBCC 003AAB0C  38 21 00 10 */	addi r1, r1, 0x10
/* 803ADBD0 003AAB10  4E 80 00 20 */	blr 

.global collisionStOn__Q34Game4Tyre3ObjFv
collisionStOn__Q34Game4Tyre3ObjFv:
/* 803ADBD4 003AAB14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ADBD8 003AAB18  7C 08 02 A6 */	mflr r0
/* 803ADBDC 003AAB1C  3C 80 74 79 */	lis r4, 0x74797231@ha
/* 803ADBE0 003AAB20  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ADBE4 003AAB24  38 84 72 31 */	addi r4, r4, 0x74797231@l
/* 803ADBE8 003AAB28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803ADBEC 003AAB2C  7C 7F 1B 78 */	mr r31, r3
/* 803ADBF0 003AAB30  80 63 01 14 */	lwz r3, 0x114(r3)
/* 803ADBF4 003AAB34  4B D8 82 51 */	bl getCollPart__8CollTreeFUl
/* 803ADBF8 003AAB38  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803ADBFC 003AAB3C  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ADC00 003AAB40  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803ADC04 003AAB44  48 06 58 01 */	bl __as__4ID32FUl
/* 803ADC08 003AAB48  3C 80 74 79 */	lis r4, 0x74797232@ha
/* 803ADC0C 003AAB4C  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ADC10 003AAB50  38 84 72 32 */	addi r4, r4, 0x74797232@l
/* 803ADC14 003AAB54  4B D8 82 31 */	bl getCollPart__8CollTreeFUl
/* 803ADC18 003AAB58  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803ADC1C 003AAB5C  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ADC20 003AAB60  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803ADC24 003AAB64  48 06 57 E1 */	bl __as__4ID32FUl
/* 803ADC28 003AAB68  3C 80 74 79 */	lis r4, 0x74797233@ha
/* 803ADC2C 003AAB6C  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ADC30 003AAB70  38 84 72 33 */	addi r4, r4, 0x74797233@l
/* 803ADC34 003AAB74  4B D8 82 11 */	bl getCollPart__8CollTreeFUl
/* 803ADC38 003AAB78  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803ADC3C 003AAB7C  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ADC40 003AAB80  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803ADC44 003AAB84  48 06 57 C1 */	bl __as__4ID32FUl
/* 803ADC48 003AAB88  3C 80 74 79 */	lis r4, 0x74797234@ha
/* 803ADC4C 003AAB8C  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ADC50 003AAB90  38 84 72 34 */	addi r4, r4, 0x74797234@l
/* 803ADC54 003AAB94  4B D8 81 F1 */	bl getCollPart__8CollTreeFUl
/* 803ADC58 003AAB98  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803ADC5C 003AAB9C  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ADC60 003AABA0  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803ADC64 003AABA4  48 06 57 A1 */	bl __as__4ID32FUl
/* 803ADC68 003AABA8  3C 80 74 79 */	lis r4, 0x74797235@ha
/* 803ADC6C 003AABAC  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ADC70 003AABB0  38 84 72 35 */	addi r4, r4, 0x74797235@l
/* 803ADC74 003AABB4  4B D8 81 D1 */	bl getCollPart__8CollTreeFUl
/* 803ADC78 003AABB8  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803ADC7C 003AABBC  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ADC80 003AABC0  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803ADC84 003AABC4  48 06 57 81 */	bl __as__4ID32FUl
/* 803ADC88 003AABC8  3C 80 74 79 */	lis r4, 0x74797236@ha
/* 803ADC8C 003AABCC  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ADC90 003AABD0  38 84 72 36 */	addi r4, r4, 0x74797236@l
/* 803ADC94 003AABD4  4B D8 81 B1 */	bl getCollPart__8CollTreeFUl
/* 803ADC98 003AABD8  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 803ADC9C 003AABDC  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ADCA0 003AABE0  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 803ADCA4 003AABE4  48 06 57 61 */	bl __as__4ID32FUl
/* 803ADCA8 003AABE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ADCAC 003AABEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803ADCB0 003AABF0  7C 08 03 A6 */	mtlr r0
/* 803ADCB4 003AABF4  38 21 00 10 */	addi r1, r1, 0x10
/* 803ADCB8 003AABF8  4E 80 00 20 */	blr 

.global collisionStOff__Q34Game4Tyre3ObjFv
collisionStOff__Q34Game4Tyre3ObjFv:
/* 803ADCBC 003AABFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ADCC0 003AAC00  7C 08 02 A6 */	mflr r0
/* 803ADCC4 003AAC04  3C 80 74 79 */	lis r4, 0x74797231@ha
/* 803ADCC8 003AAC08  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ADCCC 003AAC0C  38 84 72 31 */	addi r4, r4, 0x74797231@l
/* 803ADCD0 003AAC10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803ADCD4 003AAC14  7C 7F 1B 78 */	mr r31, r3
/* 803ADCD8 003AAC18  80 63 01 14 */	lwz r3, 0x114(r3)
/* 803ADCDC 003AAC1C  4B D8 81 69 */	bl getCollPart__8CollTreeFUl
/* 803ADCE0 003AAC20  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803ADCE4 003AAC24  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ADCE8 003AAC28  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803ADCEC 003AAC2C  48 06 57 19 */	bl __as__4ID32FUl
/* 803ADCF0 003AAC30  3C 80 74 79 */	lis r4, 0x74797232@ha
/* 803ADCF4 003AAC34  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ADCF8 003AAC38  38 84 72 32 */	addi r4, r4, 0x74797232@l
/* 803ADCFC 003AAC3C  4B D8 81 49 */	bl getCollPart__8CollTreeFUl
/* 803ADD00 003AAC40  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803ADD04 003AAC44  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ADD08 003AAC48  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803ADD0C 003AAC4C  48 06 56 F9 */	bl __as__4ID32FUl
/* 803ADD10 003AAC50  3C 80 74 79 */	lis r4, 0x74797233@ha
/* 803ADD14 003AAC54  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ADD18 003AAC58  38 84 72 33 */	addi r4, r4, 0x74797233@l
/* 803ADD1C 003AAC5C  4B D8 81 29 */	bl getCollPart__8CollTreeFUl
/* 803ADD20 003AAC60  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803ADD24 003AAC64  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ADD28 003AAC68  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803ADD2C 003AAC6C  48 06 56 D9 */	bl __as__4ID32FUl
/* 803ADD30 003AAC70  3C 80 74 79 */	lis r4, 0x74797234@ha
/* 803ADD34 003AAC74  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ADD38 003AAC78  38 84 72 34 */	addi r4, r4, 0x74797234@l
/* 803ADD3C 003AAC7C  4B D8 81 09 */	bl getCollPart__8CollTreeFUl
/* 803ADD40 003AAC80  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803ADD44 003AAC84  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ADD48 003AAC88  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803ADD4C 003AAC8C  48 06 56 B9 */	bl __as__4ID32FUl
/* 803ADD50 003AAC90  3C 80 74 79 */	lis r4, 0x74797235@ha
/* 803ADD54 003AAC94  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ADD58 003AAC98  38 84 72 35 */	addi r4, r4, 0x74797235@l
/* 803ADD5C 003AAC9C  4B D8 80 E9 */	bl getCollPart__8CollTreeFUl
/* 803ADD60 003AACA0  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803ADD64 003AACA4  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ADD68 003AACA8  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803ADD6C 003AACAC  48 06 56 99 */	bl __as__4ID32FUl
/* 803ADD70 003AACB0  3C 80 74 79 */	lis r4, 0x74797236@ha
/* 803ADD74 003AACB4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 803ADD78 003AACB8  38 84 72 36 */	addi r4, r4, 0x74797236@l
/* 803ADD7C 003AACBC  4B D8 80 C9 */	bl getCollPart__8CollTreeFUl
/* 803ADD80 003AACC0  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803ADD84 003AACC4  38 63 00 3C */	addi r3, r3, 0x3c
/* 803ADD88 003AACC8  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803ADD8C 003AACCC  48 06 56 79 */	bl __as__4ID32FUl
/* 803ADD90 003AACD0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 803ADD94 003AACD4  7F E3 FB 78 */	mr r3, r31
/* 803ADD98 003AACD8  C0 22 12 64 */	lfs f1, lbl_8051F5C4@sda21(r2)
/* 803ADD9C 003AACDC  38 80 00 00 */	li r4, 0
/* 803ADDA0 003AACE0  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 803ADDA4 003AACE4  C0 62 12 58 */	lfs f3, lbl_8051F5B8@sda21(r2)
/* 803ADDA8 003AACE8  C0 82 12 68 */	lfs f4, lbl_8051F5C8@sda21(r2)
/* 803ADDAC 003AACEC  4B D6 53 71 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 803ADDB0 003AACF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ADDB4 003AACF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803ADDB8 003AACF8  7C 08 03 A6 */	mtlr r0
/* 803ADDBC 003AACFC  38 21 00 10 */	addi r1, r1, 0x10
/* 803ADDC0 003AAD00  4E 80 00 20 */	blr 

.global flick__Q34Game4Tyre3ObjFv
flick__Q34Game4Tyre3ObjFv:
/* 803ADDC4 003AAD04  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 803ADDC8 003AAD08  7C 08 02 A6 */	mflr r0
/* 803ADDCC 003AAD0C  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 803ADDD0 003AAD10  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 803ADDD4 003AAD14  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 803ADDD8 003AAD18  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 803ADDDC 003AAD1C  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 803ADDE0 003AAD20  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 803ADDE4 003AAD24  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 803ADDE8 003AAD28  DB 81 00 80 */	stfd f28, 0x80(r1)
/* 803ADDEC 003AAD2C  F3 81 00 88 */	psq_st f28, 136(r1), 0, qr0
/* 803ADDF0 003AAD30  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 803ADDF4 003AAD34  93 C1 00 78 */	stw r30, 0x78(r1)
/* 803ADDF8 003AAD38  7C 7F 1B 78 */	mr r31, r3
/* 803ADDFC 003AAD3C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 803ADE00 003AAD40  38 BF 01 8C */	addi r5, r31, 0x18c
/* 803ADE04 003AAD44  38 80 00 0F */	li r4, 0xf
/* 803ADE08 003AAD48  38 C0 00 02 */	li r6, 2
/* 803ADE0C 003AAD4C  4B EA 44 31 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 803ADE10 003AAD50  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 803ADE14 003AAD54  38 BF 01 8C */	addi r5, r31, 0x18c
/* 803ADE18 003AAD58  38 80 00 0D */	li r4, 0xd
/* 803ADE1C 003AAD5C  38 C0 00 02 */	li r6, 2
/* 803ADE20 003AAD60  4B EA 59 61 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 803ADE24 003AAD64  38 00 00 00 */	li r0, 0
/* 803ADE28 003AAD68  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 803ADE2C 003AAD6C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 803ADE30 003AAD70  90 01 00 74 */	stw r0, 0x74(r1)
/* 803ADE34 003AAD74  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 803ADE38 003AAD78  28 00 00 00 */	cmplwi r0, 0
/* 803ADE3C 003AAD7C  90 81 00 68 */	stw r4, 0x68(r1)
/* 803ADE40 003AAD80  90 01 00 6C */	stw r0, 0x6c(r1)
/* 803ADE44 003AAD84  90 61 00 70 */	stw r3, 0x70(r1)
/* 803ADE48 003AAD88  40 82 00 1C */	bne .L_803ADE64
/* 803ADE4C 003AAD8C  81 83 00 00 */	lwz r12, 0(r3)
/* 803ADE50 003AAD90  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803ADE54 003AAD94  7D 89 03 A6 */	mtctr r12
/* 803ADE58 003AAD98  4E 80 04 21 */	bctrl 
/* 803ADE5C 003AAD9C  90 61 00 6C */	stw r3, 0x6c(r1)
/* 803ADE60 003AADA0  48 00 02 2C */	b .L_803AE08C
.L_803ADE64:
/* 803ADE64 003AADA4  81 83 00 00 */	lwz r12, 0(r3)
/* 803ADE68 003AADA8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803ADE6C 003AADAC  7D 89 03 A6 */	mtctr r12
/* 803ADE70 003AADB0  4E 80 04 21 */	bctrl 
/* 803ADE74 003AADB4  90 61 00 6C */	stw r3, 0x6c(r1)
/* 803ADE78 003AADB8  48 00 00 58 */	b .L_803ADED0
.L_803ADE7C:
/* 803ADE7C 003AADBC  80 61 00 70 */	lwz r3, 0x70(r1)
/* 803ADE80 003AADC0  80 81 00 6C */	lwz r4, 0x6c(r1)
/* 803ADE84 003AADC4  81 83 00 00 */	lwz r12, 0(r3)
/* 803ADE88 003AADC8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803ADE8C 003AADCC  7D 89 03 A6 */	mtctr r12
/* 803ADE90 003AADD0  4E 80 04 21 */	bctrl 
/* 803ADE94 003AADD4  7C 64 1B 78 */	mr r4, r3
/* 803ADE98 003AADD8  80 61 00 74 */	lwz r3, 0x74(r1)
/* 803ADE9C 003AADDC  81 83 00 00 */	lwz r12, 0(r3)
/* 803ADEA0 003AADE0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803ADEA4 003AADE4  7D 89 03 A6 */	mtctr r12
/* 803ADEA8 003AADE8  4E 80 04 21 */	bctrl 
/* 803ADEAC 003AADEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803ADEB0 003AADF0  40 82 01 DC */	bne .L_803AE08C
/* 803ADEB4 003AADF4  80 61 00 70 */	lwz r3, 0x70(r1)
/* 803ADEB8 003AADF8  80 81 00 6C */	lwz r4, 0x6c(r1)
/* 803ADEBC 003AADFC  81 83 00 00 */	lwz r12, 0(r3)
/* 803ADEC0 003AAE00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803ADEC4 003AAE04  7D 89 03 A6 */	mtctr r12
/* 803ADEC8 003AAE08  4E 80 04 21 */	bctrl 
/* 803ADECC 003AAE0C  90 61 00 6C */	stw r3, 0x6c(r1)
.L_803ADED0:
/* 803ADED0 003AAE10  81 81 00 68 */	lwz r12, 0x68(r1)
/* 803ADED4 003AAE14  38 61 00 68 */	addi r3, r1, 0x68
/* 803ADED8 003AAE18  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803ADEDC 003AAE1C  7D 89 03 A6 */	mtctr r12
/* 803ADEE0 003AAE20  4E 80 04 21 */	bctrl 
/* 803ADEE4 003AAE24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803ADEE8 003AAE28  41 82 FF 94 */	beq .L_803ADE7C
/* 803ADEEC 003AAE2C  48 00 01 A0 */	b .L_803AE08C
.L_803ADEF0:
/* 803ADEF0 003AAE30  80 61 00 70 */	lwz r3, 0x70(r1)
/* 803ADEF4 003AAE34  81 83 00 00 */	lwz r12, 0(r3)
/* 803ADEF8 003AAE38  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803ADEFC 003AAE3C  7D 89 03 A6 */	mtctr r12
/* 803ADF00 003AAE40  4E 80 04 21 */	bctrl 
/* 803ADF04 003AAE44  81 83 00 00 */	lwz r12, 0(r3)
/* 803ADF08 003AAE48  7C 7E 1B 78 */	mr r30, r3
/* 803ADF0C 003AAE4C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 803ADF10 003AAE50  7D 89 03 A6 */	mtctr r12
/* 803ADF14 003AAE54  4E 80 04 21 */	bctrl 
/* 803ADF18 003AAE58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803ADF1C 003AAE5C  41 82 00 B4 */	beq .L_803ADFD0
/* 803ADF20 003AAE60  80 1E 00 C8 */	lwz r0, 0xc8(r30)
/* 803ADF24 003AAE64  28 00 00 00 */	cmplwi r0, 0
/* 803ADF28 003AAE68  41 82 00 A8 */	beq .L_803ADFD0
/* 803ADF2C 003AAE6C  7F C4 F3 78 */	mr r4, r30
/* 803ADF30 003AAE70  38 61 00 20 */	addi r3, r1, 0x20
/* 803ADF34 003AAE74  81 9E 00 00 */	lwz r12, 0(r30)
/* 803ADF38 003AAE78  C3 BF 01 94 */	lfs f29, 0x194(r31)
/* 803ADF3C 003AAE7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803ADF40 003AAE80  C3 DF 01 8C */	lfs f30, 0x18c(r31)
/* 803ADF44 003AAE84  7D 89 03 A6 */	mtctr r12
/* 803ADF48 003AAE88  4E 80 04 21 */	bctrl 
/* 803ADF4C 003AAE8C  7F C4 F3 78 */	mr r4, r30
/* 803ADF50 003AAE90  38 61 00 2C */	addi r3, r1, 0x2c
/* 803ADF54 003AAE94  81 9E 00 00 */	lwz r12, 0(r30)
/* 803ADF58 003AAE98  C3 E1 00 28 */	lfs f31, 0x28(r1)
/* 803ADF5C 003AAE9C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803ADF60 003AAEA0  7D 89 03 A6 */	mtctr r12
/* 803ADF64 003AAEA4  4E 80 04 21 */	bctrl 
/* 803ADF68 003AAEA8  EC 3F E8 28 */	fsubs f1, f31, f29
/* 803ADF6C 003AAEAC  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 803ADF70 003AAEB0  C0 02 12 70 */	lfs f0, lbl_8051F5D0@sda21(r2)
/* 803ADF74 003AAEB4  EC 42 F0 28 */	fsubs f2, f2, f30
/* 803ADF78 003AAEB8  EC 21 00 72 */	fmuls f1, f1, f1
/* 803ADF7C 003AAEBC  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 803ADF80 003AAEC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803ADF84 003AAEC4  40 80 00 4C */	bge .L_803ADFD0
/* 803ADF88 003AAEC8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 803ADF8C 003AAECC  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 803ADF90 003AAED0  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractPress@ha
/* 803ADF94 003AAED4  38 00 00 00 */	li r0, 0
/* 803ADF98 003AAED8  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 803ADF9C 003AAEDC  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 803ADFA0 003AAEE0  38 A3 B3 20 */	addi r5, r3, __vt__Q24Game13InteractPress@l
/* 803ADFA4 003AAEE4  7F C3 F3 78 */	mr r3, r30
/* 803ADFA8 003AAEE8  90 81 00 58 */	stw r4, 0x58(r1)
/* 803ADFAC 003AAEEC  38 81 00 58 */	addi r4, r1, 0x58
/* 803ADFB0 003AAEF0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803ADFB4 003AAEF4  90 A1 00 58 */	stw r5, 0x58(r1)
/* 803ADFB8 003AAEF8  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 803ADFBC 003AAEFC  90 01 00 64 */	stw r0, 0x64(r1)
/* 803ADFC0 003AAF00  81 9E 00 00 */	lwz r12, 0(r30)
/* 803ADFC4 003AAF04  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 803ADFC8 003AAF08  7D 89 03 A6 */	mtctr r12
/* 803ADFCC 003AAF0C  4E 80 04 21 */	bctrl 
.L_803ADFD0:
/* 803ADFD0 003AAF10  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803ADFD4 003AAF14  28 00 00 00 */	cmplwi r0, 0
/* 803ADFD8 003AAF18  40 82 00 24 */	bne .L_803ADFFC
/* 803ADFDC 003AAF1C  80 61 00 70 */	lwz r3, 0x70(r1)
/* 803ADFE0 003AAF20  80 81 00 6C */	lwz r4, 0x6c(r1)
/* 803ADFE4 003AAF24  81 83 00 00 */	lwz r12, 0(r3)
/* 803ADFE8 003AAF28  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803ADFEC 003AAF2C  7D 89 03 A6 */	mtctr r12
/* 803ADFF0 003AAF30  4E 80 04 21 */	bctrl 
/* 803ADFF4 003AAF34  90 61 00 6C */	stw r3, 0x6c(r1)
/* 803ADFF8 003AAF38  48 00 00 94 */	b .L_803AE08C
.L_803ADFFC:
/* 803ADFFC 003AAF3C  80 61 00 70 */	lwz r3, 0x70(r1)
/* 803AE000 003AAF40  80 81 00 6C */	lwz r4, 0x6c(r1)
/* 803AE004 003AAF44  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE008 003AAF48  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803AE00C 003AAF4C  7D 89 03 A6 */	mtctr r12
/* 803AE010 003AAF50  4E 80 04 21 */	bctrl 
/* 803AE014 003AAF54  90 61 00 6C */	stw r3, 0x6c(r1)
/* 803AE018 003AAF58  48 00 00 58 */	b .L_803AE070
.L_803AE01C:
/* 803AE01C 003AAF5C  80 61 00 70 */	lwz r3, 0x70(r1)
/* 803AE020 003AAF60  80 81 00 6C */	lwz r4, 0x6c(r1)
/* 803AE024 003AAF64  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE028 003AAF68  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803AE02C 003AAF6C  7D 89 03 A6 */	mtctr r12
/* 803AE030 003AAF70  4E 80 04 21 */	bctrl 
/* 803AE034 003AAF74  7C 64 1B 78 */	mr r4, r3
/* 803AE038 003AAF78  80 61 00 74 */	lwz r3, 0x74(r1)
/* 803AE03C 003AAF7C  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE040 003AAF80  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AE044 003AAF84  7D 89 03 A6 */	mtctr r12
/* 803AE048 003AAF88  4E 80 04 21 */	bctrl 
/* 803AE04C 003AAF8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AE050 003AAF90  40 82 00 3C */	bne .L_803AE08C
/* 803AE054 003AAF94  80 61 00 70 */	lwz r3, 0x70(r1)
/* 803AE058 003AAF98  80 81 00 6C */	lwz r4, 0x6c(r1)
/* 803AE05C 003AAF9C  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE060 003AAFA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803AE064 003AAFA4  7D 89 03 A6 */	mtctr r12
/* 803AE068 003AAFA8  4E 80 04 21 */	bctrl 
/* 803AE06C 003AAFAC  90 61 00 6C */	stw r3, 0x6c(r1)
.L_803AE070:
/* 803AE070 003AAFB0  81 81 00 68 */	lwz r12, 0x68(r1)
/* 803AE074 003AAFB4  38 61 00 68 */	addi r3, r1, 0x68
/* 803AE078 003AAFB8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AE07C 003AAFBC  7D 89 03 A6 */	mtctr r12
/* 803AE080 003AAFC0  4E 80 04 21 */	bctrl 
/* 803AE084 003AAFC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AE088 003AAFC8  41 82 FF 94 */	beq .L_803AE01C
.L_803AE08C:
/* 803AE08C 003AAFCC  80 61 00 70 */	lwz r3, 0x70(r1)
/* 803AE090 003AAFD0  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE094 003AAFD4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803AE098 003AAFD8  7D 89 03 A6 */	mtctr r12
/* 803AE09C 003AAFDC  4E 80 04 21 */	bctrl 
/* 803AE0A0 003AAFE0  80 81 00 6C */	lwz r4, 0x6c(r1)
/* 803AE0A4 003AAFE4  7C 04 18 40 */	cmplw r4, r3
/* 803AE0A8 003AAFE8  40 82 FE 48 */	bne .L_803ADEF0
/* 803AE0AC 003AAFEC  38 00 00 00 */	li r0, 0
/* 803AE0B0 003AAFF0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 803AE0B4 003AAFF4  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 803AE0B8 003AAFF8  90 01 00 54 */	stw r0, 0x54(r1)
/* 803AE0BC 003AAFFC  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 803AE0C0 003AB000  28 00 00 00 */	cmplwi r0, 0
/* 803AE0C4 003AB004  90 81 00 48 */	stw r4, 0x48(r1)
/* 803AE0C8 003AB008  90 01 00 4C */	stw r0, 0x4c(r1)
/* 803AE0CC 003AB00C  90 61 00 50 */	stw r3, 0x50(r1)
/* 803AE0D0 003AB010  40 82 00 1C */	bne .L_803AE0EC
/* 803AE0D4 003AB014  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE0D8 003AB018  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803AE0DC 003AB01C  7D 89 03 A6 */	mtctr r12
/* 803AE0E0 003AB020  4E 80 04 21 */	bctrl 
/* 803AE0E4 003AB024  90 61 00 4C */	stw r3, 0x4c(r1)
/* 803AE0E8 003AB028  48 00 00 8C */	b .L_803AE174
.L_803AE0EC:
/* 803AE0EC 003AB02C  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE0F0 003AB030  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803AE0F4 003AB034  7D 89 03 A6 */	mtctr r12
/* 803AE0F8 003AB038  4E 80 04 21 */	bctrl 
/* 803AE0FC 003AB03C  90 61 00 4C */	stw r3, 0x4c(r1)
/* 803AE100 003AB040  48 00 00 58 */	b .L_803AE158
.L_803AE104:
/* 803AE104 003AB044  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AE108 003AB048  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AE10C 003AB04C  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE110 003AB050  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803AE114 003AB054  7D 89 03 A6 */	mtctr r12
/* 803AE118 003AB058  4E 80 04 21 */	bctrl 
/* 803AE11C 003AB05C  7C 64 1B 78 */	mr r4, r3
/* 803AE120 003AB060  80 61 00 54 */	lwz r3, 0x54(r1)
/* 803AE124 003AB064  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE128 003AB068  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AE12C 003AB06C  7D 89 03 A6 */	mtctr r12
/* 803AE130 003AB070  4E 80 04 21 */	bctrl 
/* 803AE134 003AB074  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AE138 003AB078  40 82 00 3C */	bne .L_803AE174
/* 803AE13C 003AB07C  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AE140 003AB080  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AE144 003AB084  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE148 003AB088  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803AE14C 003AB08C  7D 89 03 A6 */	mtctr r12
/* 803AE150 003AB090  4E 80 04 21 */	bctrl 
/* 803AE154 003AB094  90 61 00 4C */	stw r3, 0x4c(r1)
.L_803AE158:
/* 803AE158 003AB098  81 81 00 48 */	lwz r12, 0x48(r1)
/* 803AE15C 003AB09C  38 61 00 48 */	addi r3, r1, 0x48
/* 803AE160 003AB0A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AE164 003AB0A4  7D 89 03 A6 */	mtctr r12
/* 803AE168 003AB0A8  4E 80 04 21 */	bctrl 
/* 803AE16C 003AB0AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AE170 003AB0B0  41 82 FF 94 */	beq .L_803AE104
.L_803AE174:
/* 803AE174 003AB0B4  C3 E2 12 70 */	lfs f31, lbl_8051F5D0@sda21(r2)
/* 803AE178 003AB0B8  48 00 01 78 */	b .L_803AE2F0
.L_803AE17C:
/* 803AE17C 003AB0BC  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AE180 003AB0C0  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE184 003AB0C4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803AE188 003AB0C8  7D 89 03 A6 */	mtctr r12
/* 803AE18C 003AB0CC  4E 80 04 21 */	bctrl 
/* 803AE190 003AB0D0  7C 7E 1B 78 */	mr r30, r3
/* 803AE194 003AB0D4  38 61 00 08 */	addi r3, r1, 8
/* 803AE198 003AB0D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803AE19C 003AB0DC  7F C4 F3 78 */	mr r4, r30
/* 803AE1A0 003AB0E0  C3 9F 01 94 */	lfs f28, 0x194(r31)
/* 803AE1A4 003AB0E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AE1A8 003AB0E8  C3 DF 01 8C */	lfs f30, 0x18c(r31)
/* 803AE1AC 003AB0EC  7D 89 03 A6 */	mtctr r12
/* 803AE1B0 003AB0F0  4E 80 04 21 */	bctrl 
/* 803AE1B4 003AB0F4  7F C4 F3 78 */	mr r4, r30
/* 803AE1B8 003AB0F8  38 61 00 14 */	addi r3, r1, 0x14
/* 803AE1BC 003AB0FC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803AE1C0 003AB100  C3 A1 00 10 */	lfs f29, 0x10(r1)
/* 803AE1C4 003AB104  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AE1C8 003AB108  7D 89 03 A6 */	mtctr r12
/* 803AE1CC 003AB10C  4E 80 04 21 */	bctrl 
/* 803AE1D0 003AB110  EC 1D E0 28 */	fsubs f0, f29, f28
/* 803AE1D4 003AB114  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 803AE1D8 003AB118  EC 21 F0 28 */	fsubs f1, f1, f30
/* 803AE1DC 003AB11C  EC 00 00 32 */	fmuls f0, f0, f0
/* 803AE1E0 003AB120  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 803AE1E4 003AB124  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 803AE1E8 003AB128  40 80 00 4C */	bge .L_803AE234
/* 803AE1EC 003AB12C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 803AE1F0 003AB130  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 803AE1F4 003AB134  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractPress@ha
/* 803AE1F8 003AB138  38 00 00 00 */	li r0, 0
/* 803AE1FC 003AB13C  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 803AE200 003AB140  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 803AE204 003AB144  38 A3 B3 20 */	addi r5, r3, __vt__Q24Game13InteractPress@l
/* 803AE208 003AB148  7F C3 F3 78 */	mr r3, r30
/* 803AE20C 003AB14C  90 81 00 38 */	stw r4, 0x38(r1)
/* 803AE210 003AB150  38 81 00 38 */	addi r4, r1, 0x38
/* 803AE214 003AB154  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803AE218 003AB158  90 A1 00 38 */	stw r5, 0x38(r1)
/* 803AE21C 003AB15C  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 803AE220 003AB160  90 01 00 44 */	stw r0, 0x44(r1)
/* 803AE224 003AB164  81 9E 00 00 */	lwz r12, 0(r30)
/* 803AE228 003AB168  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 803AE22C 003AB16C  7D 89 03 A6 */	mtctr r12
/* 803AE230 003AB170  4E 80 04 21 */	bctrl 
.L_803AE234:
/* 803AE234 003AB174  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803AE238 003AB178  28 00 00 00 */	cmplwi r0, 0
/* 803AE23C 003AB17C  40 82 00 24 */	bne .L_803AE260
/* 803AE240 003AB180  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AE244 003AB184  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AE248 003AB188  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE24C 003AB18C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803AE250 003AB190  7D 89 03 A6 */	mtctr r12
/* 803AE254 003AB194  4E 80 04 21 */	bctrl 
/* 803AE258 003AB198  90 61 00 4C */	stw r3, 0x4c(r1)
/* 803AE25C 003AB19C  48 00 00 94 */	b .L_803AE2F0
.L_803AE260:
/* 803AE260 003AB1A0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AE264 003AB1A4  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AE268 003AB1A8  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE26C 003AB1AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803AE270 003AB1B0  7D 89 03 A6 */	mtctr r12
/* 803AE274 003AB1B4  4E 80 04 21 */	bctrl 
/* 803AE278 003AB1B8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 803AE27C 003AB1BC  48 00 00 58 */	b .L_803AE2D4
.L_803AE280:
/* 803AE280 003AB1C0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AE284 003AB1C4  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AE288 003AB1C8  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE28C 003AB1CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803AE290 003AB1D0  7D 89 03 A6 */	mtctr r12
/* 803AE294 003AB1D4  4E 80 04 21 */	bctrl 
/* 803AE298 003AB1D8  7C 64 1B 78 */	mr r4, r3
/* 803AE29C 003AB1DC  80 61 00 54 */	lwz r3, 0x54(r1)
/* 803AE2A0 003AB1E0  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE2A4 003AB1E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AE2A8 003AB1E8  7D 89 03 A6 */	mtctr r12
/* 803AE2AC 003AB1EC  4E 80 04 21 */	bctrl 
/* 803AE2B0 003AB1F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AE2B4 003AB1F4  40 82 00 3C */	bne .L_803AE2F0
/* 803AE2B8 003AB1F8  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AE2BC 003AB1FC  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AE2C0 003AB200  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE2C4 003AB204  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803AE2C8 003AB208  7D 89 03 A6 */	mtctr r12
/* 803AE2CC 003AB20C  4E 80 04 21 */	bctrl 
/* 803AE2D0 003AB210  90 61 00 4C */	stw r3, 0x4c(r1)
.L_803AE2D4:
/* 803AE2D4 003AB214  81 81 00 48 */	lwz r12, 0x48(r1)
/* 803AE2D8 003AB218  38 61 00 48 */	addi r3, r1, 0x48
/* 803AE2DC 003AB21C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AE2E0 003AB220  7D 89 03 A6 */	mtctr r12
/* 803AE2E4 003AB224  4E 80 04 21 */	bctrl 
/* 803AE2E8 003AB228  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AE2EC 003AB22C  41 82 FF 94 */	beq .L_803AE280
.L_803AE2F0:
/* 803AE2F0 003AB230  80 61 00 50 */	lwz r3, 0x50(r1)
/* 803AE2F4 003AB234  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE2F8 003AB238  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803AE2FC 003AB23C  7D 89 03 A6 */	mtctr r12
/* 803AE300 003AB240  4E 80 04 21 */	bctrl 
/* 803AE304 003AB244  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 803AE308 003AB248  7C 04 18 40 */	cmplw r4, r3
/* 803AE30C 003AB24C  40 82 FE 70 */	bne .L_803AE17C
/* 803AE310 003AB250  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 803AE314 003AB254  7F E3 FB 78 */	mr r3, r31
/* 803AE318 003AB258  C0 82 12 68 */	lfs f4, lbl_8051F5C8@sda21(r2)
/* 803AE31C 003AB25C  38 80 00 00 */	li r4, 0
/* 803AE320 003AB260  C3 A5 04 C4 */	lfs f29, 0x4c4(r5)
/* 803AE324 003AB264  C3 C5 04 EC */	lfs f30, 0x4ec(r5)
/* 803AE328 003AB268  FC 40 E8 90 */	fmr f2, f29
/* 803AE32C 003AB26C  C3 85 05 3C */	lfs f28, 0x53c(r5)
/* 803AE330 003AB270  FC 60 F0 90 */	fmr f3, f30
/* 803AE334 003AB274  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 803AE338 003AB278  4B D6 51 9D */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 803AE33C 003AB27C  FC 20 E0 90 */	fmr f1, f28
/* 803AE340 003AB280  C0 82 12 68 */	lfs f4, lbl_8051F5C8@sda21(r2)
/* 803AE344 003AB284  FC 40 E8 90 */	fmr f2, f29
/* 803AE348 003AB288  7F E3 FB 78 */	mr r3, r31
/* 803AE34C 003AB28C  FC 60 F0 90 */	fmr f3, f30
/* 803AE350 003AB290  38 80 00 00 */	li r4, 0
/* 803AE354 003AB294  4B D6 4D C9 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 803AE358 003AB298  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 803AE35C 003AB29C  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 803AE360 003AB2A0  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 803AE364 003AB2A4  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 803AE368 003AB2A8  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 803AE36C 003AB2AC  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 803AE370 003AB2B0  E3 81 00 88 */	psq_l f28, 136(r1), 0, qr0
/* 803AE374 003AB2B4  CB 81 00 80 */	lfd f28, 0x80(r1)
/* 803AE378 003AB2B8  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 803AE37C 003AB2BC  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 803AE380 003AB2C0  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 803AE384 003AB2C4  7C 08 03 A6 */	mtlr r0
/* 803AE388 003AB2C8  38 21 00 C0 */	addi r1, r1, 0xc0
/* 803AE38C 003AB2CC  4E 80 00 20 */	blr 

.global deadEffect__Q34Game4Tyre3ObjFv
deadEffect__Q34Game4Tyre3ObjFv:
/* 803AE390 003AB2D0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803AE394 003AB2D4  7C 08 02 A6 */	mflr r0
/* 803AE398 003AB2D8  90 01 00 44 */	stw r0, 0x44(r1)
/* 803AE39C 003AB2DC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803AE3A0 003AB2E0  7C 7F 1B 78 */	mr r31, r3
/* 803AE3A4 003AB2E4  A0 03 03 12 */	lhz r0, 0x312(r3)
/* 803AE3A8 003AB2E8  80 63 01 74 */	lwz r3, 0x174(r3)
/* 803AE3AC 003AB2EC  1C 00 00 3C */	mulli r0, r0, 0x3c
/* 803AE3B0 003AB2F0  80 63 00 10 */	lwz r3, 0x10(r3)
/* 803AE3B4 003AB2F4  7C 63 02 14 */	add r3, r3, r0
/* 803AE3B8 003AB2F8  48 07 B4 E9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AE3BC 003AB2FC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803AE3C0 003AB300  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 803AE3C4 003AB304  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 803AE3C8 003AB308  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 803AE3CC 003AB30C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803AE3D0 003AB310  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple3@ha
/* 803AE3D4 003AB314  38 03 6A 50 */	addi r0, r3, __vt__Q23efx8TSimple3@l
/* 803AE3D8 003AB318  38 A0 00 00 */	li r5, 0
/* 803AE3DC 003AB31C  90 81 00 18 */	stw r4, 0x18(r1)
/* 803AE3E0 003AB320  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803AE3E4 003AB324  3C 60 80 4E */	lis r3, __vt__Q23efx13TKageTyredead@ha
/* 803AE3E8 003AB328  39 00 02 9D */	li r8, 0x29d
/* 803AE3EC 003AB32C  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 803AE3F0 003AB330  38 E0 02 9E */	li r7, 0x29e
/* 803AE3F4 003AB334  38 C0 02 9F */	li r6, 0x29f
/* 803AE3F8 003AB338  90 01 00 18 */	stw r0, 0x18(r1)
/* 803AE3FC 003AB33C  38 03 63 E8 */	addi r0, r3, __vt__Q23efx13TKageTyredead@l
/* 803AE400 003AB340  38 61 00 18 */	addi r3, r1, 0x18
/* 803AE404 003AB344  90 81 00 08 */	stw r4, 8(r1)
/* 803AE408 003AB348  38 81 00 08 */	addi r4, r1, 8
/* 803AE40C 003AB34C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803AE410 003AB350  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803AE414 003AB354  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803AE418 003AB358  B1 01 00 1C */	sth r8, 0x1c(r1)
/* 803AE41C 003AB35C  B0 E1 00 1E */	sth r7, 0x1e(r1)
/* 803AE420 003AB360  B0 C1 00 20 */	sth r6, 0x20(r1)
/* 803AE424 003AB364  90 A1 00 24 */	stw r5, 0x24(r1)
/* 803AE428 003AB368  90 A1 00 28 */	stw r5, 0x28(r1)
/* 803AE42C 003AB36C  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 803AE430 003AB370  90 01 00 18 */	stw r0, 0x18(r1)
/* 803AE434 003AB374  48 00 0C 89 */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 803AE438 003AB378  A0 1F 03 10 */	lhz r0, 0x310(r31)
/* 803AE43C 003AB37C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 803AE440 003AB380  1C 00 00 3C */	mulli r0, r0, 0x3c
/* 803AE444 003AB384  80 63 00 10 */	lwz r3, 0x10(r3)
/* 803AE448 003AB388  7C 63 02 14 */	add r3, r3, r0
/* 803AE44C 003AB38C  48 07 B4 55 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 803AE450 003AB390  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 803AE454 003AB394  38 81 00 08 */	addi r4, r1, 8
/* 803AE458 003AB398  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 803AE45C 003AB39C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803AE460 003AB3A0  38 61 00 18 */	addi r3, r1, 0x18
/* 803AE464 003AB3A4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803AE468 003AB3A8  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803AE46C 003AB3AC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803AE470 003AB3B0  48 00 0C 4D */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 803AE474 003AB3B4  38 00 00 00 */	li r0, 0
/* 803AE478 003AB3B8  98 1F 02 D2 */	stb r0, 0x2d2(r31)
/* 803AE47C 003AB3BC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803AE480 003AB3C0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803AE484 003AB3C4  7C 08 03 A6 */	mtlr r0
/* 803AE488 003AB3C8  38 21 00 40 */	addi r1, r1, 0x40
/* 803AE48C 003AB3CC  4E 80 00 20 */	blr 

.global createSmokeEffect__Q34Game4Tyre3ObjFv
createSmokeEffect__Q34Game4Tyre3ObjFv:
/* 803AE490 003AB3D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AE494 003AB3D4  7C 08 02 A6 */	mflr r0
/* 803AE498 003AB3D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AE49C 003AB3DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AE4A0 003AB3E0  7C 7F 1B 78 */	mr r31, r3
/* 803AE4A4 003AB3E4  80 03 02 80 */	lwz r0, 0x280(r3)
/* 803AE4A8 003AB3E8  28 00 00 00 */	cmplwi r0, 0
/* 803AE4AC 003AB3EC  40 82 00 34 */	bne .L_803AE4E0
/* 803AE4B0 003AB3F0  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 803AE4B4 003AB3F4  38 80 00 00 */	li r4, 0
/* 803AE4B8 003AB3F8  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE4BC 003AB3FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AE4C0 003AB400  7D 89 03 A6 */	mtctr r12
/* 803AE4C4 003AB404  4E 80 04 21 */	bctrl 
/* 803AE4C8 003AB408  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 803AE4CC 003AB40C  38 80 00 00 */	li r4, 0
/* 803AE4D0 003AB410  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE4D4 003AB414  81 8C 00 08 */	lwz r12, 8(r12)
/* 803AE4D8 003AB418  7D 89 03 A6 */	mtctr r12
/* 803AE4DC 003AB41C  4E 80 04 21 */	bctrl 
.L_803AE4E0:
/* 803AE4E0 003AB420  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AE4E4 003AB424  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AE4E8 003AB428  7C 08 03 A6 */	mtlr r0
/* 803AE4EC 003AB42C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AE4F0 003AB430  4E 80 00 20 */	blr 

.global fadeSmokeEffect__Q34Game4Tyre3ObjFv
fadeSmokeEffect__Q34Game4Tyre3ObjFv:
/* 803AE4F4 003AB434  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AE4F8 003AB438  7C 08 02 A6 */	mflr r0
/* 803AE4FC 003AB43C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AE500 003AB440  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AE504 003AB444  7C 7F 1B 78 */	mr r31, r3
/* 803AE508 003AB448  80 63 03 30 */	lwz r3, 0x330(r3)
/* 803AE50C 003AB44C  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE510 003AB450  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AE514 003AB454  7D 89 03 A6 */	mtctr r12
/* 803AE518 003AB458  4E 80 04 21 */	bctrl 
/* 803AE51C 003AB45C  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 803AE520 003AB460  81 83 00 00 */	lwz r12, 0(r3)
/* 803AE524 003AB464  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AE528 003AB468  7D 89 03 A6 */	mtctr r12
/* 803AE52C 003AB46C  4E 80 04 21 */	bctrl 
/* 803AE530 003AB470  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AE534 003AB474  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AE538 003AB478  7C 08 03 A6 */	mtlr r0
/* 803AE53C 003AB47C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AE540 003AB480  4E 80 00 20 */	blr 

.global "landEffect__Q34Game4Tyre3ObjFR10Vector3<f>"
"landEffect__Q34Game4Tyre3ObjFR10Vector3<f>":
/* 803AE544 003AB484  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 803AE548 003AB488  7C 08 02 A6 */	mflr r0
/* 803AE54C 003AB48C  38 A0 00 00 */	li r5, 0
/* 803AE550 003AB490  90 01 00 94 */	stw r0, 0x94(r1)
/* 803AE554 003AB494  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 803AE558 003AB498  7C 9F 23 78 */	mr r31, r4
/* 803AE55C 003AB49C  38 80 59 76 */	li r4, 0x5976
/* 803AE560 003AB4A0  93 C1 00 88 */	stw r30, 0x88(r1)
/* 803AE564 003AB4A4  93 A1 00 84 */	stw r29, 0x84(r1)
/* 803AE568 003AB4A8  7C 7D 1B 78 */	mr r29, r3
/* 803AE56C 003AB4AC  80 63 02 8C */	lwz r3, 0x28c(r3)
/* 803AE570 003AB4B0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 803AE574 003AB4B4  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803AE578 003AB4B8  7D 89 03 A6 */	mtctr r12
/* 803AE57C 003AB4BC  4E 80 04 21 */	bctrl 
/* 803AE580 003AB4C0  80 1D 02 80 */	lwz r0, 0x280(r29)
/* 803AE584 003AB4C4  3B C0 00 00 */	li r30, 0
/* 803AE588 003AB4C8  28 00 00 00 */	cmplwi r0, 0
/* 803AE58C 003AB4CC  41 82 00 08 */	beq .L_803AE594
/* 803AE590 003AB4D0  3B C0 00 01 */	li r30, 1
.L_803AE594:
/* 803AE594 003AB4D4  28 00 00 00 */	cmplwi r0, 0
/* 803AE598 003AB4D8  40 82 00 4C */	bne .L_803AE5E4
/* 803AE59C 003AB4DC  C0 1F 00 00 */	lfs f0, 0(r31)
/* 803AE5A0 003AB4E0  38 00 00 00 */	li r0, 0
/* 803AE5A4 003AB4E4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803AE5A8 003AB4E8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803AE5AC 003AB4EC  C0 02 12 A8 */	lfs f0, lbl_8051F608@sda21(r2)
/* 803AE5B0 003AB4F0  28 03 00 00 */	cmplwi r3, 0
/* 803AE5B4 003AB4F4  C0 3F 00 04 */	lfs f1, 4(r31)
/* 803AE5B8 003AB4F8  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 803AE5BC 003AB4FC  C0 3F 00 08 */	lfs f1, 8(r31)
/* 803AE5C0 003AB500  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 803AE5C4 003AB504  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 803AE5C8 003AB508  41 82 00 10 */	beq .L_803AE5D8
/* 803AE5CC 003AB50C  38 81 00 28 */	addi r4, r1, 0x28
/* 803AE5D0 003AB510  4B DB 53 59 */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 803AE5D4 003AB514  7C 60 1B 78 */	mr r0, r3
.L_803AE5D8:
/* 803AE5D8 003AB518  28 00 00 00 */	cmplwi r0, 0
/* 803AE5DC 003AB51C  41 82 00 08 */	beq .L_803AE5E4
/* 803AE5E0 003AB520  3B C0 00 01 */	li r30, 1
.L_803AE5E4:
/* 803AE5E4 003AB524  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803AE5E8 003AB528  41 82 00 B8 */	beq .L_803AE6A0
/* 803AE5EC 003AB52C  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 803AE5F0 003AB530  C0 5D 01 FC */	lfs f2, 0x1fc(r29)
/* 803AE5F4 003AB534  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 803AE5F8 003AB538  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 803AE5FC 003AB53C  90 01 00 38 */	stw r0, 0x38(r1)
/* 803AE600 003AB540  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple5@ha
/* 803AE604 003AB544  3C C0 80 4E */	lis r6, __vt__Q23efx12ArgRotYScale@ha
/* 803AE608 003AB548  3C 60 80 4F */	lis r3, __vt__Q23efx9TKchApWat@ha
/* 803AE60C 003AB54C  C0 3F 00 00 */	lfs f1, 0(r31)
/* 803AE610 003AB550  39 85 A7 F8 */	addi r12, r5, __vt__Q23efx5TBase@l
/* 803AE614 003AB554  39 64 6A 28 */	addi r11, r4, __vt__Q23efx8TSimple5@l
/* 803AE618 003AB558  C0 02 12 AC */	lfs f0, lbl_8051F60C@sda21(r2)
/* 803AE61C 003AB55C  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 803AE620 003AB560  3B C6 1B 50 */	addi r30, r6, __vt__Q23efx12ArgRotYScale@l
/* 803AE624 003AB564  38 03 A0 E0 */	addi r0, r3, __vt__Q23efx9TKchApWat@l
/* 803AE628 003AB568  39 40 02 11 */	li r10, 0x211
/* 803AE62C 003AB56C  C0 3F 00 04 */	lfs f1, 4(r31)
/* 803AE630 003AB570  39 20 02 12 */	li r9, 0x212
/* 803AE634 003AB574  39 00 02 13 */	li r8, 0x213
/* 803AE638 003AB578  38 E0 02 14 */	li r7, 0x214
/* 803AE63C 003AB57C  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 803AE640 003AB580  38 C0 02 15 */	li r6, 0x215
/* 803AE644 003AB584  38 A0 00 00 */	li r5, 0
/* 803AE648 003AB588  38 61 00 50 */	addi r3, r1, 0x50
/* 803AE64C 003AB58C  C0 3F 00 08 */	lfs f1, 8(r31)
/* 803AE650 003AB590  38 81 00 38 */	addi r4, r1, 0x38
/* 803AE654 003AB594  91 81 00 50 */	stw r12, 0x50(r1)
/* 803AE658 003AB598  91 61 00 50 */	stw r11, 0x50(r1)
/* 803AE65C 003AB59C  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 803AE660 003AB5A0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803AE664 003AB5A4  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 803AE668 003AB5A8  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 803AE66C 003AB5AC  B1 41 00 54 */	sth r10, 0x54(r1)
/* 803AE670 003AB5B0  B1 21 00 56 */	sth r9, 0x56(r1)
/* 803AE674 003AB5B4  B1 01 00 58 */	sth r8, 0x58(r1)
/* 803AE678 003AB5B8  B0 E1 00 5A */	sth r7, 0x5a(r1)
/* 803AE67C 003AB5BC  B0 C1 00 5C */	sth r6, 0x5c(r1)
/* 803AE680 003AB5C0  90 A1 00 60 */	stw r5, 0x60(r1)
/* 803AE684 003AB5C4  90 A1 00 64 */	stw r5, 0x64(r1)
/* 803AE688 003AB5C8  90 A1 00 68 */	stw r5, 0x68(r1)
/* 803AE68C 003AB5CC  90 A1 00 6C */	stw r5, 0x6c(r1)
/* 803AE690 003AB5D0  90 A1 00 70 */	stw r5, 0x70(r1)
/* 803AE694 003AB5D4  90 01 00 50 */	stw r0, 0x50(r1)
/* 803AE698 003AB5D8  48 03 D6 55 */	bl create__Q23efx9TKchApWatFPQ23efx3Arg
/* 803AE69C 003AB5DC  48 00 00 74 */	b .L_803AE710
.L_803AE6A0:
/* 803AE6A0 003AB5E0  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 803AE6A4 003AB5E4  38 C0 00 00 */	li r6, 0
/* 803AE6A8 003AB5E8  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 803AE6AC 003AB5EC  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 803AE6B0 003AB5F0  90 01 00 18 */	stw r0, 0x18(r1)
/* 803AE6B4 003AB5F4  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 803AE6B8 003AB5F8  3C 80 80 4E */	lis r4, __vt__Q23efx10TKageRecov@ha
/* 803AE6BC 003AB5FC  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 803AE6C0 003AB600  90 01 00 18 */	stw r0, 0x18(r1)
/* 803AE6C4 003AB604  38 A4 63 D4 */	addi r5, r4, __vt__Q23efx10TKageRecov@l
/* 803AE6C8 003AB608  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 803AE6CC 003AB60C  38 60 02 9A */	li r3, 0x29a
/* 803AE6D0 003AB610  38 E0 02 9B */	li r7, 0x29b
/* 803AE6D4 003AB614  B0 61 00 1C */	sth r3, 0x1c(r1)
/* 803AE6D8 003AB618  38 61 00 18 */	addi r3, r1, 0x18
/* 803AE6DC 003AB61C  38 81 00 08 */	addi r4, r1, 8
/* 803AE6E0 003AB620  B0 E1 00 1E */	sth r7, 0x1e(r1)
/* 803AE6E4 003AB624  90 C1 00 20 */	stw r6, 0x20(r1)
/* 803AE6E8 003AB628  90 C1 00 24 */	stw r6, 0x24(r1)
/* 803AE6EC 003AB62C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 803AE6F0 003AB630  90 01 00 08 */	stw r0, 8(r1)
/* 803AE6F4 003AB634  C0 1F 00 00 */	lfs f0, 0(r31)
/* 803AE6F8 003AB638  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803AE6FC 003AB63C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 803AE700 003AB640  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803AE704 003AB644  C0 1F 00 08 */	lfs f0, 8(r31)
/* 803AE708 003AB648  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803AE70C 003AB64C  48 00 09 09 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
.L_803AE710:
/* 803AE710 003AB650  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803AE714 003AB654  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 803AE718 003AB658  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 803AE71C 003AB65C  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 803AE720 003AB660  7C 08 03 A6 */	mtlr r0
/* 803AE724 003AB664  38 21 00 90 */	addi r1, r1, 0x90
/* 803AE728 003AB668  4E 80 00 20 */	blr 

.global scaleUpShadow__Q34Game4Tyre3ObjFv
scaleUpShadow__Q34Game4Tyre3ObjFv:
/* 803AE72C 003AB66C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803AE730 003AB670  C0 43 03 08 */	lfs f2, 0x308(r3)
/* 803AE734 003AB674  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 803AE738 003AB678  C0 02 12 64 */	lfs f0, lbl_8051F5C4@sda21(r2)
/* 803AE73C 003AB67C  EC 22 08 2A */	fadds f1, f2, f1
/* 803AE740 003AB680  D0 23 03 08 */	stfs f1, 0x308(r3)
/* 803AE744 003AB684  C0 23 03 08 */	lfs f1, 0x308(r3)
/* 803AE748 003AB688  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803AE74C 003AB68C  4C 81 00 20 */	blelr 
/* 803AE750 003AB690  D0 03 03 08 */	stfs f0, 0x308(r3)
/* 803AE754 003AB694  4E 80 00 20 */	blr 

.global __dt__Q23efx14TKageTyresmokeFv
__dt__Q23efx14TKageTyresmokeFv:
/* 803AE758 003AB698  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AE75C 003AB69C  7C 08 02 A6 */	mflr r0
/* 803AE760 003AB6A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AE764 003AB6A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AE768 003AB6A8  7C 9F 23 78 */	mr r31, r4
/* 803AE76C 003AB6AC  93 C1 00 08 */	stw r30, 8(r1)
/* 803AE770 003AB6B0  7C 7E 1B 79 */	or. r30, r3, r3
/* 803AE774 003AB6B4  41 82 00 64 */	beq .L_803AE7D8
/* 803AE778 003AB6B8  3C 60 80 4E */	lis r3, __vt__Q23efx14TKageTyresmoke@ha
/* 803AE77C 003AB6BC  38 63 63 FC */	addi r3, r3, __vt__Q23efx14TKageTyresmoke@l
/* 803AE780 003AB6C0  90 7E 00 00 */	stw r3, 0(r30)
/* 803AE784 003AB6C4  38 03 00 14 */	addi r0, r3, 0x14
/* 803AE788 003AB6C8  90 1E 00 04 */	stw r0, 4(r30)
/* 803AE78C 003AB6CC  41 82 00 3C */	beq .L_803AE7C8
/* 803AE790 003AB6D0  3C 60 80 4E */	lis r3, __vt__Q23efx13TChasePosYRot@ha
/* 803AE794 003AB6D4  38 63 68 F4 */	addi r3, r3, __vt__Q23efx13TChasePosYRot@l
/* 803AE798 003AB6D8  90 7E 00 00 */	stw r3, 0(r30)
/* 803AE79C 003AB6DC  38 03 00 14 */	addi r0, r3, 0x14
/* 803AE7A0 003AB6E0  90 1E 00 04 */	stw r0, 4(r30)
/* 803AE7A4 003AB6E4  41 82 00 24 */	beq .L_803AE7C8
/* 803AE7A8 003AB6E8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803AE7AC 003AB6EC  38 7E 00 04 */	addi r3, r30, 4
/* 803AE7B0 003AB6F0  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803AE7B4 003AB6F4  38 80 00 00 */	li r4, 0
/* 803AE7B8 003AB6F8  90 BE 00 00 */	stw r5, 0(r30)
/* 803AE7BC 003AB6FC  38 05 00 14 */	addi r0, r5, 0x14
/* 803AE7C0 003AB700  90 1E 00 04 */	stw r0, 4(r30)
/* 803AE7C4 003AB704  4B CE 14 D9 */	bl __dt__18JPAEmitterCallBackFv
.L_803AE7C8:
/* 803AE7C8 003AB708  7F E0 07 35 */	extsh. r0, r31
/* 803AE7CC 003AB70C  40 81 00 0C */	ble .L_803AE7D8
/* 803AE7D0 003AB710  7F C3 F3 78 */	mr r3, r30
/* 803AE7D4 003AB714  4B C7 58 E1 */	bl __dl__FPv
.L_803AE7D8:
/* 803AE7D8 003AB718  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AE7DC 003AB71C  7F C3 F3 78 */	mr r3, r30
/* 803AE7E0 003AB720  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AE7E4 003AB724  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AE7E8 003AB728  7C 08 03 A6 */	mtlr r0
/* 803AE7EC 003AB72C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AE7F0 003AB730  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game4Tyre3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game4Tyre3ObjFPQ24Game21EnemyInitialParamBase:
/* 803AE7F4 003AB734  4E 80 00 20 */	blr 

.global isUnderground__Q34Game4Tyre3ObjFv
isUnderground__Q34Game4Tyre3ObjFv:
/* 803AE7F8 003AB738  88 63 02 D1 */	lbz r3, 0x2d1(r3)
/* 803AE7FC 003AB73C  4E 80 00 20 */	blr 

.global "bombCallBack__Q34Game4Tyre3ObjFPQ24Game8CreatureR10Vector3<f>f"
"bombCallBack__Q34Game4Tyre3ObjFPQ24Game8CreatureR10Vector3<f>f":
/* 803AE800 003AB740  38 60 00 00 */	li r3, 0
/* 803AE804 003AB744  4E 80 00 20 */	blr 

.global __sinit_tyre_cpp
__sinit_tyre_cpp:
/* 803AE808 003AB748  3C 80 80 51 */	lis r4, __float_nan@ha
/* 803AE80C 003AB74C  38 00 FF FF */	li r0, -1
/* 803AE810 003AB750  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 803AE814 003AB754  3C 60 80 4E */	lis r3, lbl_804E63C8@ha
/* 803AE818 003AB758  90 0D 99 E8 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 803AE81C 003AB75C  D4 03 63 C8 */	stfsu f0, lbl_804E63C8@l(r3)
/* 803AE820 003AB760  D0 0D 99 EC */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 803AE824 003AB764  D0 03 00 04 */	stfs f0, 4(r3)
/* 803AE828 003AB768  D0 03 00 08 */	stfs f0, 8(r3)
/* 803AE82C 003AB76C  4E 80 00 20 */	blr 

"@836@12@viewOnPelletKilled__Q24Game9EnemyBaseFv":
/* 803AE830 003AB770  39 60 00 0C */	li r11, 0xc
/* 803AE834 003AB774  7D 63 58 2E */	lwzx r11, r3, r11
/* 803AE838 003AB778  7C 63 5A 14 */	add r3, r3, r11
/* 803AE83C 003AB77C  38 63 FC BC */	addi r3, r3, -836
/* 803AE840 003AB780  4B D5 80 DC */	b viewOnPelletKilled__Q24Game9EnemyBaseFv

"@836@12@viewStartCarryMotion__Q24Game9EnemyBaseFv":
/* 803AE844 003AB784  39 60 00 0C */	li r11, 0xc
/* 803AE848 003AB788  7D 63 58 2E */	lwzx r11, r3, r11
/* 803AE84C 003AB78C  7C 63 5A 14 */	add r3, r3, r11
/* 803AE850 003AB790  38 63 FC BC */	addi r3, r3, -836
/* 803AE854 003AB794  4B D5 7E 54 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv

"@836@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv":
/* 803AE858 003AB798  39 60 00 0C */	li r11, 0xc
/* 803AE85C 003AB79C  7D 63 58 2E */	lwzx r11, r3, r11
/* 803AE860 003AB7A0  7C 63 5A 14 */	add r3, r3, r11
/* 803AE864 003AB7A4  38 63 FC BC */	addi r3, r3, -836
/* 803AE868 003AB7A8  4B D5 7E 60 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv

"@836@12@view_finish_carrymotion__Q24Game9EnemyBaseFv":
/* 803AE86C 003AB7AC  39 60 00 0C */	li r11, 0xc
/* 803AE870 003AB7B0  7D 63 58 2E */	lwzx r11, r3, r11
/* 803AE874 003AB7B4  7C 63 5A 14 */	add r3, r3, r11
/* 803AE878 003AB7B8  38 63 FC BC */	addi r3, r3, -836
/* 803AE87C 003AB7BC  4B D5 81 FC */	b view_finish_carrymotion__Q24Game9EnemyBaseFv

"@836@12@view_start_carrymotion__Q24Game9EnemyBaseFv":
/* 803AE880 003AB7C0  39 60 00 0C */	li r11, 0xc
/* 803AE884 003AB7C4  7D 63 58 2E */	lwzx r11, r3, r11
/* 803AE888 003AB7C8  7C 63 5A 14 */	add r3, r3, r11
/* 803AE88C 003AB7CC  38 63 FC BC */	addi r3, r3, -836
/* 803AE890 003AB7D0  4B D5 81 BC */	b view_start_carrymotion__Q24Game9EnemyBaseFv

"@836@12@viewGetShape__Q24Game9EnemyBaseFv":
/* 803AE894 003AB7D4  39 60 00 0C */	li r11, 0xc
/* 803AE898 003AB7D8  7D 63 58 2E */	lwzx r11, r3, r11
/* 803AE89C 003AB7DC  7C 63 5A 14 */	add r3, r3, r11
/* 803AE8A0 003AB7E0  38 63 FC BC */	addi r3, r3, -836
/* 803AE8A4 003AB7E4  4B D5 7D FC */	b viewGetShape__Q24Game9EnemyBaseFv

"@4@__dt__Q23efx14TKageTyresmokeFv":
/* 803AE8A8 003AB7E8  38 63 FF FC */	addi r3, r3, -4
/* 803AE8AC 003AB7EC  4B FF FE AC */	b __dt__Q23efx14TKageTyresmokeFv
