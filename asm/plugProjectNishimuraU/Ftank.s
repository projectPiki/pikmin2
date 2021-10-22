.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q23efx15TTankFireYodare
__vt__Q23efx15TTankFireYodare:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx15TTankFireYodareFv"
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
	.4byte __dt__Q23efx15TTankFireYodareFv
.global __vt__Q23efx12TTankFireHit
__vt__Q23efx12TTankFireHit:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx17TOneEmitterSimpleFPQ23efx3Arg
	.4byte forceKill__Q23efx17TOneEmitterSimpleFv
	.4byte fade__Q23efx17TOneEmitterSimpleFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx12TTankFireHitFv"
	.4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte "@4@executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx17TOneEmitterSimpleFv
	.4byte endDemoDrawOn__Q23efx17TOneEmitterSimpleFv
	.4byte __dt__Q23efx12TTankFireHitFv
.global __vt__Q34Game5Ftank3Obj
__vt__Q34Game5Ftank3Obj:
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
	.4byte onInit__Q34Game4Tank3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game4Tank3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game4Tank3ObjFR8Graphics
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
	.4byte getShadowParam__Q34Game4Tank3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game5Ftank3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game4Tank3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game4Tank3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game4Tank3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game5Ftank3ObjFv
	.4byte "getCommonEffectPos__Q34Game4Tank3ObjFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q34Game4Tank3ObjFv
	.4byte setParameters__Q24Game9EnemyBaseFv
	.4byte initMouthSlots__Q24Game9EnemyBaseFv
	.4byte initWalkSmokeEffect__Q34Game4Tank3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game4Tank3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game5Ftank3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
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
	.4byte doStartStoneState__Q34Game4Tank3ObjFv
	.4byte doFinishStoneState__Q34Game4Tank3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q34Game4Tank3ObjFv
	.4byte doFinishEarthquakeFitState__Q34Game4Tank3ObjFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game4Tank3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q34Game4Tank3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game4Tank3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game4Tank3ObjFv
	.4byte doStartMovie__Q34Game4Tank3ObjFv
	.4byte doEndMovie__Q34Game4Tank3ObjFv
	.4byte setFSM__Q34Game4Tank3ObjFPQ34Game4Tank3FSM
	.4byte createEffect__Q34Game5Ftank3ObjFv
	.4byte setupEffect__Q34Game5Ftank3ObjFv
	.4byte startEffect__Q34Game5Ftank3ObjFv
	.4byte startYodare__Q34Game5Ftank3ObjFv
	.4byte finishEffect__Q34Game5Ftank3ObjFv
	.4byte effectDrawOn__Q34Game5Ftank3ObjFv
	.4byte effectDrawOff__Q34Game5Ftank3ObjFv
	.4byte interactCreature__Q34Game5Ftank3ObjFPQ24Game8Creature
	.4byte stopEffectRadius__Q34Game5Ftank3ObjFf
	.4byte createChargeSE__Q34Game5Ftank3ObjFv
	.4byte createDisChargeSE__Q34Game5Ftank3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@780@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@780@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@780@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@780@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@780@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@780@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
	.4byte 0

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 0x8
.global lbl_8051BCF0
lbl_8051BCF0:
	.4byte 0x447A0000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game5Ftank3ObjFv
__ct__Q34Game5Ftank3ObjFv:
/* 8029E484 0029B3C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029E488 0029B3C8  7C 08 02 A6 */	mflr r0
/* 8029E48C 0029B3CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029E490 0029B3D0  7C 80 07 35 */	extsh. r0, r4
/* 8029E494 0029B3D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029E498 0029B3D8  7C 7F 1B 78 */	mr r31, r3
/* 8029E49C 0029B3DC  41 82 00 24 */	beq lbl_8029E4C0
/* 8029E4A0 0029B3E0  38 1F 03 0C */	addi r0, r31, 0x30c
/* 8029E4A4 0029B3E4  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8029E4A8 0029B3E8  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8029E4AC 0029B3EC  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8029E4B0 0029B3F0  38 00 00 00 */	li r0, 0
/* 8029E4B4 0029B3F4  90 7F 03 0C */	stw r3, 0x30c(r31)
/* 8029E4B8 0029B3F8  90 1F 03 10 */	stw r0, 0x310(r31)
/* 8029E4BC 0029B3FC  90 1F 03 14 */	stw r0, 0x314(r31)
lbl_8029E4C0:
/* 8029E4C0 0029B400  7F E3 FB 78 */	mr r3, r31
/* 8029E4C4 0029B404  38 80 00 00 */	li r4, 0
/* 8029E4C8 0029B408  4B FD 78 C5 */	bl __ct__Q34Game4Tank3ObjFv
/* 8029E4CC 0029B40C  3C 60 80 4D */	lis r3, __vt__Q34Game5Ftank3Obj@ha
/* 8029E4D0 0029B410  38 1F 03 0C */	addi r0, r31, 0x30c
/* 8029E4D4 0029B414  38 A3 CB D4 */	addi r5, r3, __vt__Q34Game5Ftank3Obj@l
/* 8029E4D8 0029B418  7F E3 FB 78 */	mr r3, r31
/* 8029E4DC 0029B41C  90 BF 00 00 */	stw r5, 0(r31)
/* 8029E4E0 0029B420  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8029E4E4 0029B424  38 A5 03 28 */	addi r5, r5, 0x328
/* 8029E4E8 0029B428  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8029E4EC 0029B42C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8029E4F0 0029B430  90 A4 00 00 */	stw r5, 0(r4)
/* 8029E4F4 0029B434  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8029E4F8 0029B438  7C 04 00 50 */	subf r0, r4, r0
/* 8029E4FC 0029B43C  90 04 00 0C */	stw r0, 0xc(r4)
/* 8029E500 0029B440  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029E504 0029B444  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 8029E508 0029B448  7D 89 03 A6 */	mtctr r12
/* 8029E50C 0029B44C  4E 80 04 21 */	bctrl 
/* 8029E510 0029B450  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029E514 0029B454  7F E3 FB 78 */	mr r3, r31
/* 8029E518 0029B458  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029E51C 0029B45C  7C 08 03 A6 */	mtlr r0
/* 8029E520 0029B460  38 21 00 10 */	addi r1, r1, 0x10
/* 8029E524 0029B464  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game5Ftank3ObjFv
changeMaterial__Q34Game5Ftank3ObjFv:
/* 8029E528 0029B468  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8029E52C 0029B46C  7C 08 02 A6 */	mflr r0
/* 8029E530 0029B470  90 01 00 24 */	stw r0, 0x24(r1)
/* 8029E534 0029B474  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8029E538 0029B478  7C 7B 1B 78 */	mr r27, r3
/* 8029E53C 0029B47C  80 63 01 80 */	lwz r3, 0x180(r3)
/* 8029E540 0029B480  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 8029E544 0029B484  81 83 00 00 */	lwz r12, 0(r3)
/* 8029E548 0029B488  83 A4 00 08 */	lwz r29, 8(r4)
/* 8029E54C 0029B48C  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 8029E550 0029B490  83 DD 00 04 */	lwz r30, 4(r29)
/* 8029E554 0029B494  7D 89 03 A6 */	mtctr r12
/* 8029E558 0029B498  4E 80 04 21 */	bctrl 
/* 8029E55C 0029B49C  7C 7F 1B 78 */	mr r31, r3
/* 8029E560 0029B4A0  7F A3 EB 78 */	mr r3, r29
/* 8029E564 0029B4A4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8029E568 0029B4A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8029E56C 0029B4AC  7D 89 03 A6 */	mtctr r12
/* 8029E570 0029B4B0  4E 80 04 21 */	bctrl 
/* 8029E574 0029B4B4  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 8029E578 0029B4B8  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8029E57C 0029B4BC  88 1F 00 00 */	lbz r0, 0(r31)
/* 8029E580 0029B4C0  3B 63 F2 30 */	addi r27, r3, j3dSys@l
/* 8029E584 0029B4C4  80 64 00 08 */	lwz r3, 8(r4)
/* 8029E588 0029B4C8  3B 80 00 00 */	li r28, 0
/* 8029E58C 0029B4CC  80 63 00 04 */	lwz r3, 4(r3)
/* 8029E590 0029B4D0  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 8029E594 0029B4D4  80 64 00 04 */	lwz r3, 4(r4)
/* 8029E598 0029B4D8  98 03 00 00 */	stb r0, 0(r3)
/* 8029E59C 0029B4DC  88 1F 00 01 */	lbz r0, 1(r31)
/* 8029E5A0 0029B4E0  98 03 00 01 */	stb r0, 1(r3)
/* 8029E5A4 0029B4E4  A0 1F 00 02 */	lhz r0, 2(r31)
/* 8029E5A8 0029B4E8  B0 03 00 02 */	sth r0, 2(r3)
/* 8029E5AC 0029B4EC  A0 1F 00 04 */	lhz r0, 4(r31)
/* 8029E5B0 0029B4F0  B0 03 00 04 */	sth r0, 4(r3)
/* 8029E5B4 0029B4F4  88 1F 00 06 */	lbz r0, 6(r31)
/* 8029E5B8 0029B4F8  98 03 00 06 */	stb r0, 6(r3)
/* 8029E5BC 0029B4FC  88 1F 00 07 */	lbz r0, 7(r31)
/* 8029E5C0 0029B500  98 03 00 07 */	stb r0, 7(r3)
/* 8029E5C4 0029B504  88 1F 00 08 */	lbz r0, 8(r31)
/* 8029E5C8 0029B508  98 03 00 08 */	stb r0, 8(r3)
/* 8029E5CC 0029B50C  88 1F 00 09 */	lbz r0, 9(r31)
/* 8029E5D0 0029B510  98 03 00 09 */	stb r0, 9(r3)
/* 8029E5D4 0029B514  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 8029E5D8 0029B518  B0 03 00 0A */	sth r0, 0xa(r3)
/* 8029E5DC 0029B51C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8029E5E0 0029B520  90 03 00 0C */	stw r0, 0xc(r3)
/* 8029E5E4 0029B524  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8029E5E8 0029B528  98 03 00 10 */	stb r0, 0x10(r3)
/* 8029E5EC 0029B52C  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 8029E5F0 0029B530  98 03 00 11 */	stb r0, 0x11(r3)
/* 8029E5F4 0029B534  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 8029E5F8 0029B538  98 03 00 12 */	stb r0, 0x12(r3)
/* 8029E5FC 0029B53C  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 8029E600 0029B540  98 03 00 13 */	stb r0, 0x13(r3)
/* 8029E604 0029B544  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 8029E608 0029B548  98 03 00 14 */	stb r0, 0x14(r3)
/* 8029E60C 0029B54C  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 8029E610 0029B550  98 03 00 15 */	stb r0, 0x15(r3)
/* 8029E614 0029B554  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 8029E618 0029B558  98 03 00 16 */	stb r0, 0x16(r3)
/* 8029E61C 0029B55C  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 8029E620 0029B560  98 03 00 17 */	stb r0, 0x17(r3)
/* 8029E624 0029B564  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 8029E628 0029B568  98 03 00 18 */	stb r0, 0x18(r3)
/* 8029E62C 0029B56C  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 8029E630 0029B570  98 03 00 19 */	stb r0, 0x19(r3)
/* 8029E634 0029B574  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 8029E638 0029B578  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 8029E63C 0029B57C  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8029E640 0029B580  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8029E644 0029B584  80 64 00 04 */	lwz r3, 4(r4)
/* 8029E648 0029B588  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8029E64C 0029B58C  7C 1F 02 14 */	add r0, r31, r0
/* 8029E650 0029B590  7C 03 00 50 */	subf r0, r3, r0
/* 8029E654 0029B594  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8029E658 0029B598  80 64 00 04 */	lwz r3, 4(r4)
/* 8029E65C 0029B59C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8029E660 0029B5A0  7C 1F 02 14 */	add r0, r31, r0
/* 8029E664 0029B5A4  7C 03 00 50 */	subf r0, r3, r0
/* 8029E668 0029B5A8  90 03 00 0C */	stw r0, 0xc(r3)
/* 8029E66C 0029B5AC  48 00 00 3C */	b lbl_8029E6A8
lbl_8029E670:
/* 8029E670 0029B5B0  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 8029E674 0029B5B4  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 8029E678 0029B5B8  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 8029E67C 0029B5BC  7C 84 1A 14 */	add r4, r4, r3
/* 8029E680 0029B5C0  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 8029E684 0029B5C4  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 8029E688 0029B5C8  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8029E68C 0029B5CC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8029E690 0029B5D0  80 84 00 34 */	lwz r4, 0x34(r4)
/* 8029E694 0029B5D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8029E698 0029B5D8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8029E69C 0029B5DC  7D 89 03 A6 */	mtctr r12
/* 8029E6A0 0029B5E0  4E 80 04 21 */	bctrl 
/* 8029E6A4 0029B5E4  3B 9C 00 01 */	addi r28, r28, 1
lbl_8029E6A8:
/* 8029E6A8 0029B5E8  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 8029E6AC 0029B5EC  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 8029E6B0 0029B5F0  7C 03 00 40 */	cmplw r3, r0
/* 8029E6B4 0029B5F4  41 80 FF BC */	blt lbl_8029E670
/* 8029E6B8 0029B5F8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8029E6BC 0029B5FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8029E6C0 0029B600  7C 08 03 A6 */	mtlr r0
/* 8029E6C4 0029B604  38 21 00 20 */	addi r1, r1, 0x20
/* 8029E6C8 0029B608  4E 80 00 20 */	blr 

.global createEffect__Q34Game5Ftank3ObjFv
createEffect__Q34Game5Ftank3ObjFv:
/* 8029E6CC 0029B60C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029E6D0 0029B610  7C 08 02 A6 */	mflr r0
/* 8029E6D4 0029B614  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029E6D8 0029B618  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029E6DC 0029B61C  7C 7F 1B 78 */	mr r31, r3
/* 8029E6E0 0029B620  38 60 00 A0 */	li r3, 0xa0
/* 8029E6E4 0029B624  4B D8 57 C1 */	bl __nw__FUl
/* 8029E6E8 0029B628  7C 60 1B 79 */	or. r0, r3, r3
/* 8029E6EC 0029B62C  41 82 00 10 */	beq lbl_8029E6FC
/* 8029E6F0 0029B630  38 80 00 00 */	li r4, 0
/* 8029E6F4 0029B634  48 00 00 21 */	bl __ct__Q23efx11TTankEffectFPA4_f
/* 8029E6F8 0029B638  7C 60 1B 78 */	mr r0, r3
lbl_8029E6FC:
/* 8029E6FC 0029B63C  90 1F 03 08 */	stw r0, 0x308(r31)
/* 8029E700 0029B640  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029E704 0029B644  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029E708 0029B648  7C 08 03 A6 */	mtlr r0
/* 8029E70C 0029B64C  38 21 00 10 */	addi r1, r1, 0x10
/* 8029E710 0029B650  4E 80 00 20 */	blr 

.global __ct__Q23efx11TTankEffectFPA4_f
__ct__Q23efx11TTankEffectFPA4_f:
/* 8029E714 0029B654  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8029E718 0029B658  7C 08 02 A6 */	mflr r0
/* 8029E71C 0029B65C  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 8029E720 0029B660  38 C0 01 B1 */	li r6, 0x1b1
/* 8029E724 0029B664  90 01 00 34 */	stw r0, 0x34(r1)
/* 8029E728 0029B668  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 8029E72C 0029B66C  38 A0 01 B0 */	li r5, 0x1b0
/* 8029E730 0029B670  38 E0 01 B2 */	li r7, 0x1b2
/* 8029E734 0029B674  BF 01 00 10 */	stmw r24, 0x10(r1)
/* 8029E738 0029B678  7C 7C 1B 78 */	mr r28, r3
/* 8029E73C 0029B67C  3C 60 80 4E */	lis r3, __vt__Q23efx9TTankFire@ha
/* 8029E740 0029B680  7C 9F 23 78 */	mr r31, r4
/* 8029E744 0029B684  3B DC 00 04 */	addi r30, r28, 4
/* 8029E748 0029B688  90 1C 00 00 */	stw r0, 0(r28)
/* 8029E74C 0029B68C  38 03 6C 68 */	addi r0, r3, __vt__Q23efx9TTankFire@l
/* 8029E750 0029B690  7F C3 F3 78 */	mr r3, r30
/* 8029E754 0029B694  90 1C 00 00 */	stw r0, 0(r28)
/* 8029E758 0029B698  48 11 1E 55 */	bl __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs
/* 8029E75C 0029B69C  3C 60 80 4E */	lis r3, __vt__Q23efx12TTankFireABC@ha
/* 8029E760 0029B6A0  3C 80 80 4A */	lis r4, __vt__19JPAParticleCallBack@ha
/* 8029E764 0029B6A4  38 03 6C C8 */	addi r0, r3, __vt__Q23efx12TTankFireABC@l
/* 8029E768 0029B6A8  3C 60 80 4E */	lis r3, __vt__Q23efx26TParticleCallBack_TankFire@ha
/* 8029E76C 0029B6AC  90 1E 00 00 */	stw r0, 0(r30)
/* 8029E770 0029B6B0  38 04 33 58 */	addi r0, r4, __vt__19JPAParticleCallBack@l
/* 8029E774 0029B6B4  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 8029E778 0029B6B8  3B BE 00 4C */	addi r29, r30, 0x4c
/* 8029E77C 0029B6BC  90 1E 00 40 */	stw r0, 0x40(r30)
/* 8029E780 0029B6C0  38 03 6C E4 */	addi r0, r3, __vt__Q23efx26TParticleCallBack_TankFire@l
/* 8029E784 0029B6C4  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 8029E788 0029B6C8  3C 60 80 4E */	lis r3, __vt__Q23efx17TOneEmitterSimple@ha
/* 8029E78C 0029B6CC  90 1E 00 40 */	stw r0, 0x40(r30)
/* 8029E790 0029B6D0  38 A3 6A 8C */	addi r5, r3, __vt__Q23efx17TOneEmitterSimple@l
/* 8029E794 0029B6D4  C0 02 D9 90 */	lfs f0, lbl_8051BCF0@sda21(r2)
/* 8029E798 0029B6D8  39 00 00 00 */	li r8, 0
/* 8029E79C 0029B6DC  38 E6 A7 F8 */	addi r7, r6, __vt__Q23efx5TBase@l
/* 8029E7A0 0029B6E0  38 C4 E2 7C */	addi r6, r4, __vt__18JPAEmitterCallBack@l
/* 8029E7A4 0029B6E4  D0 1E 00 44 */	stfs f0, 0x44(r30)
/* 8029E7A8 0029B6E8  38 85 00 14 */	addi r4, r5, 0x14
/* 8029E7AC 0029B6EC  38 60 01 B3 */	li r3, 0x1b3
/* 8029E7B0 0029B6F0  38 00 00 0A */	li r0, 0xa
/* 8029E7B4 0029B6F4  91 1E 00 48 */	stw r8, 0x48(r30)
/* 8029E7B8 0029B6F8  7F B8 EB 78 */	mr r24, r29
/* 8029E7BC 0029B6FC  90 FE 00 4C */	stw r7, 0x4c(r30)
/* 8029E7C0 0029B700  90 DE 00 50 */	stw r6, 0x50(r30)
/* 8029E7C4 0029B704  90 BE 00 4C */	stw r5, 0x4c(r30)
/* 8029E7C8 0029B708  90 9E 00 50 */	stw r4, 0x50(r30)
/* 8029E7CC 0029B70C  91 1E 00 54 */	stw r8, 0x54(r30)
/* 8029E7D0 0029B710  B0 7E 00 58 */	sth r3, 0x58(r30)
/* 8029E7D4 0029B714  91 1E 00 60 */	stw r8, 0x60(r30)
/* 8029E7D8 0029B718  90 1E 00 64 */	stw r0, 0x64(r30)
/* 8029E7DC 0029B71C  83 5E 00 64 */	lwz r26, 0x64(r30)
/* 8029E7E0 0029B720  1C 7A 00 0C */	mulli r3, r26, 0xc
/* 8029E7E4 0029B724  38 63 00 10 */	addi r3, r3, 0x10
/* 8029E7E8 0029B728  4B D8 57 C5 */	bl __nwa__FUl
/* 8029E7EC 0029B72C  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 8029E7F0 0029B730  7F 47 D3 78 */	mr r7, r26
/* 8029E7F4 0029B734  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 8029E7F8 0029B738  38 A0 00 00 */	li r5, 0
/* 8029E7FC 0029B73C  38 C0 00 0C */	li r6, 0xc
/* 8029E800 0029B740  4B E2 31 F1 */	bl __construct_new_array
/* 8029E804 0029B744  90 78 00 10 */	stw r3, 0x10(r24)
/* 8029E808 0029B748  3C 60 80 4D */	lis r3, __vt__Q23efx12TTankFireHit@ha
/* 8029E80C 0029B74C  38 63 CB 94 */	addi r3, r3, __vt__Q23efx12TTankFireHit@l
/* 8029E810 0029B750  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 8029E814 0029B754  90 7D 00 00 */	stw r3, 0(r29)
/* 8029E818 0029B758  38 03 00 14 */	addi r0, r3, 0x14
/* 8029E81C 0029B75C  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 8029E820 0029B760  3C 60 80 4E */	lis r3, __vt__Q23efx5TSync@ha
/* 8029E824 0029B764  90 1D 00 04 */	stw r0, 4(r29)
/* 8029E828 0029B768  3B 45 A7 F8 */	addi r26, r5, __vt__Q23efx5TBase@l
/* 8029E82C 0029B76C  3B C3 69 8C */	addi r30, r3, __vt__Q23efx5TSync@l
/* 8029E830 0029B770  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 8029E834 0029B774  93 5C 00 6C */	stw r26, 0x6c(r28)
/* 8029E838 0029B778  3B 64 E2 7C */	addi r27, r4, __vt__18JPAEmitterCallBack@l
/* 8029E83C 0029B77C  39 63 68 A8 */	addi r11, r3, __vt__Q23efx9TChaseMtx@l
/* 8029E840 0029B780  3C 60 80 4E */	lis r3, __vt__Q23efx12TTankFireIND@ha
/* 8029E844 0029B784  93 7C 00 70 */	stw r27, 0x70(r28)
/* 8029E848 0029B788  39 23 6C 7C */	addi r9, r3, __vt__Q23efx12TTankFireIND@l
/* 8029E84C 0029B78C  3C C0 80 4A */	lis r6, __vt__19JPAParticleCallBack@ha
/* 8029E850 0029B790  3C A0 80 4E */	lis r5, __vt__Q23efx26TParticleCallBack_TankFire@ha
/* 8029E854 0029B794  93 DC 00 6C */	stw r30, 0x6c(r28)
/* 8029E858 0029B798  3B 3E 00 14 */	addi r25, r30, 0x14
/* 8029E85C 0029B79C  3C 60 80 4D */	lis r3, __vt__Q23efx15TTankFireYodare@ha
/* 8029E860 0029B7A0  3B A0 00 00 */	li r29, 0
/* 8029E864 0029B7A4  93 3C 00 70 */	stw r25, 0x70(r28)
/* 8029E868 0029B7A8  38 83 CB 48 */	addi r4, r3, __vt__Q23efx15TTankFireYodare@l
/* 8029E86C 0029B7AC  39 80 02 B2 */	li r12, 0x2b2
/* 8029E870 0029B7B0  3B 0B 00 14 */	addi r24, r11, 0x14
/* 8029E874 0029B7B4  93 BC 00 74 */	stw r29, 0x74(r28)
/* 8029E878 0029B7B8  39 40 01 B4 */	li r10, 0x1b4
/* 8029E87C 0029B7BC  39 09 00 14 */	addi r8, r9, 0x14
/* 8029E880 0029B7C0  38 E6 33 58 */	addi r7, r6, __vt__19JPAParticleCallBack@l
/* 8029E884 0029B7C4  B1 9C 00 78 */	sth r12, 0x78(r28)
/* 8029E888 0029B7C8  38 C5 6C E4 */	addi r6, r5, __vt__Q23efx26TParticleCallBack_TankFire@l
/* 8029E88C 0029B7CC  C0 02 D9 90 */	lfs f0, lbl_8051BCF0@sda21(r2)
/* 8029E890 0029B7D0  38 A0 01 B5 */	li r5, 0x1b5
/* 8029E894 0029B7D4  9B BC 00 7A */	stb r29, 0x7a(r28)
/* 8029E898 0029B7D8  38 04 00 14 */	addi r0, r4, 0x14
/* 8029E89C 0029B7DC  7F 83 E3 78 */	mr r3, r28
/* 8029E8A0 0029B7E0  91 7C 00 6C */	stw r11, 0x6c(r28)
/* 8029E8A4 0029B7E4  93 1C 00 70 */	stw r24, 0x70(r28)
/* 8029E8A8 0029B7E8  93 FC 00 7C */	stw r31, 0x7c(r28)
/* 8029E8AC 0029B7EC  B1 5C 00 78 */	sth r10, 0x78(r28)
/* 8029E8B0 0029B7F0  91 3C 00 6C */	stw r9, 0x6c(r28)
/* 8029E8B4 0029B7F4  91 1C 00 70 */	stw r8, 0x70(r28)
/* 8029E8B8 0029B7F8  90 FC 00 80 */	stw r7, 0x80(r28)
/* 8029E8BC 0029B7FC  90 DC 00 80 */	stw r6, 0x80(r28)
/* 8029E8C0 0029B800  D0 1C 00 84 */	stfs f0, 0x84(r28)
/* 8029E8C4 0029B804  93 BC 00 88 */	stw r29, 0x88(r28)
/* 8029E8C8 0029B808  93 5C 00 8C */	stw r26, 0x8c(r28)
/* 8029E8CC 0029B80C  93 7C 00 90 */	stw r27, 0x90(r28)
/* 8029E8D0 0029B810  93 DC 00 8C */	stw r30, 0x8c(r28)
/* 8029E8D4 0029B814  93 3C 00 90 */	stw r25, 0x90(r28)
/* 8029E8D8 0029B818  93 BC 00 94 */	stw r29, 0x94(r28)
/* 8029E8DC 0029B81C  B1 9C 00 98 */	sth r12, 0x98(r28)
/* 8029E8E0 0029B820  9B BC 00 9A */	stb r29, 0x9a(r28)
/* 8029E8E4 0029B824  91 7C 00 8C */	stw r11, 0x8c(r28)
/* 8029E8E8 0029B828  93 1C 00 90 */	stw r24, 0x90(r28)
/* 8029E8EC 0029B82C  93 FC 00 9C */	stw r31, 0x9c(r28)
/* 8029E8F0 0029B830  B0 BC 00 98 */	sth r5, 0x98(r28)
/* 8029E8F4 0029B834  90 9C 00 8C */	stw r4, 0x8c(r28)
/* 8029E8F8 0029B838  90 1C 00 90 */	stw r0, 0x90(r28)
/* 8029E8FC 0029B83C  BB 01 00 10 */	lmw r24, 0x10(r1)
/* 8029E900 0029B840  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8029E904 0029B844  7C 08 03 A6 */	mtlr r0
/* 8029E908 0029B848  38 21 00 30 */	addi r1, r1, 0x30
/* 8029E90C 0029B84C  4E 80 00 20 */	blr 

.global __dt__Q23efx15TTankFireYodareFv
__dt__Q23efx15TTankFireYodareFv:
/* 8029E910 0029B850  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029E914 0029B854  7C 08 02 A6 */	mflr r0
/* 8029E918 0029B858  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029E91C 0029B85C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029E920 0029B860  7C 9F 23 78 */	mr r31, r4
/* 8029E924 0029B864  93 C1 00 08 */	stw r30, 8(r1)
/* 8029E928 0029B868  7C 7E 1B 79 */	or. r30, r3, r3
/* 8029E92C 0029B86C  41 82 00 64 */	beq lbl_8029E990
/* 8029E930 0029B870  3C 60 80 4D */	lis r3, __vt__Q23efx15TTankFireYodare@ha
/* 8029E934 0029B874  38 63 CB 48 */	addi r3, r3, __vt__Q23efx15TTankFireYodare@l
/* 8029E938 0029B878  90 7E 00 00 */	stw r3, 0(r30)
/* 8029E93C 0029B87C  38 03 00 14 */	addi r0, r3, 0x14
/* 8029E940 0029B880  90 1E 00 04 */	stw r0, 4(r30)
/* 8029E944 0029B884  41 82 00 3C */	beq lbl_8029E980
/* 8029E948 0029B888  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 8029E94C 0029B88C  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 8029E950 0029B890  90 7E 00 00 */	stw r3, 0(r30)
/* 8029E954 0029B894  38 03 00 14 */	addi r0, r3, 0x14
/* 8029E958 0029B898  90 1E 00 04 */	stw r0, 4(r30)
/* 8029E95C 0029B89C  41 82 00 24 */	beq lbl_8029E980
/* 8029E960 0029B8A0  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8029E964 0029B8A4  38 7E 00 04 */	addi r3, r30, 4
/* 8029E968 0029B8A8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8029E96C 0029B8AC  38 80 00 00 */	li r4, 0
/* 8029E970 0029B8B0  90 BE 00 00 */	stw r5, 0(r30)
/* 8029E974 0029B8B4  38 05 00 14 */	addi r0, r5, 0x14
/* 8029E978 0029B8B8  90 1E 00 04 */	stw r0, 4(r30)
/* 8029E97C 0029B8BC  4B DF 13 21 */	bl __dt__18JPAEmitterCallBackFv
lbl_8029E980:
/* 8029E980 0029B8C0  7F E0 07 35 */	extsh. r0, r31
/* 8029E984 0029B8C4  40 81 00 0C */	ble lbl_8029E990
/* 8029E988 0029B8C8  7F C3 F3 78 */	mr r3, r30
/* 8029E98C 0029B8CC  4B D8 57 29 */	bl __dl__FPv
lbl_8029E990:
/* 8029E990 0029B8D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029E994 0029B8D4  7F C3 F3 78 */	mr r3, r30
/* 8029E998 0029B8D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029E99C 0029B8DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029E9A0 0029B8E0  7C 08 03 A6 */	mtlr r0
/* 8029E9A4 0029B8E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8029E9A8 0029B8E8  4E 80 00 20 */	blr 

.global __dt__Q23efx12TTankFireINDFv
__dt__Q23efx12TTankFireINDFv:
/* 8029E9AC 0029B8EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029E9B0 0029B8F0  7C 08 02 A6 */	mflr r0
/* 8029E9B4 0029B8F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029E9B8 0029B8F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029E9BC 0029B8FC  7C 9F 23 78 */	mr r31, r4
/* 8029E9C0 0029B900  93 C1 00 08 */	stw r30, 8(r1)
/* 8029E9C4 0029B904  7C 7E 1B 79 */	or. r30, r3, r3
/* 8029E9C8 0029B908  41 82 00 88 */	beq lbl_8029EA50
/* 8029E9CC 0029B90C  3C 60 80 4E */	lis r3, __vt__Q23efx12TTankFireIND@ha
/* 8029E9D0 0029B910  34 1E 00 14 */	addic. r0, r30, 0x14
/* 8029E9D4 0029B914  38 63 6C 7C */	addi r3, r3, __vt__Q23efx12TTankFireIND@l
/* 8029E9D8 0029B918  90 7E 00 00 */	stw r3, 0(r30)
/* 8029E9DC 0029B91C  38 03 00 14 */	addi r0, r3, 0x14
/* 8029E9E0 0029B920  90 1E 00 04 */	stw r0, 4(r30)
/* 8029E9E4 0029B924  41 82 00 1C */	beq lbl_8029EA00
/* 8029E9E8 0029B928  3C 80 80 4E */	lis r4, __vt__Q23efx26TParticleCallBack_TankFire@ha
/* 8029E9EC 0029B92C  38 7E 00 14 */	addi r3, r30, 0x14
/* 8029E9F0 0029B930  38 04 6C E4 */	addi r0, r4, __vt__Q23efx26TParticleCallBack_TankFire@l
/* 8029E9F4 0029B934  38 80 00 00 */	li r4, 0
/* 8029E9F8 0029B938  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8029E9FC 0029B93C  4B DF 56 2D */	bl __dt__19JPAParticleCallBackFv
lbl_8029EA00:
/* 8029EA00 0029B940  28 1E 00 00 */	cmplwi r30, 0
/* 8029EA04 0029B944  41 82 00 3C */	beq lbl_8029EA40
/* 8029EA08 0029B948  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 8029EA0C 0029B94C  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 8029EA10 0029B950  90 7E 00 00 */	stw r3, 0(r30)
/* 8029EA14 0029B954  38 03 00 14 */	addi r0, r3, 0x14
/* 8029EA18 0029B958  90 1E 00 04 */	stw r0, 4(r30)
/* 8029EA1C 0029B95C  41 82 00 24 */	beq lbl_8029EA40
/* 8029EA20 0029B960  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8029EA24 0029B964  38 7E 00 04 */	addi r3, r30, 4
/* 8029EA28 0029B968  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8029EA2C 0029B96C  38 80 00 00 */	li r4, 0
/* 8029EA30 0029B970  90 BE 00 00 */	stw r5, 0(r30)
/* 8029EA34 0029B974  38 05 00 14 */	addi r0, r5, 0x14
/* 8029EA38 0029B978  90 1E 00 04 */	stw r0, 4(r30)
/* 8029EA3C 0029B97C  4B DF 12 61 */	bl __dt__18JPAEmitterCallBackFv
lbl_8029EA40:
/* 8029EA40 0029B980  7F E0 07 35 */	extsh. r0, r31
/* 8029EA44 0029B984  40 81 00 0C */	ble lbl_8029EA50
/* 8029EA48 0029B988  7F C3 F3 78 */	mr r3, r30
/* 8029EA4C 0029B98C  4B D8 56 69 */	bl __dl__FPv
lbl_8029EA50:
/* 8029EA50 0029B990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029EA54 0029B994  7F C3 F3 78 */	mr r3, r30
/* 8029EA58 0029B998  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029EA5C 0029B99C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029EA60 0029B9A0  7C 08 03 A6 */	mtlr r0
/* 8029EA64 0029B9A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8029EA68 0029B9A8  4E 80 00 20 */	blr 

.global __dt__Q23efx12TTankFireHitFv
__dt__Q23efx12TTankFireHitFv:
/* 8029EA6C 0029B9AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029EA70 0029B9B0  7C 08 02 A6 */	mflr r0
/* 8029EA74 0029B9B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029EA78 0029B9B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029EA7C 0029B9BC  7C 9F 23 78 */	mr r31, r4
/* 8029EA80 0029B9C0  93 C1 00 08 */	stw r30, 8(r1)
/* 8029EA84 0029B9C4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8029EA88 0029B9C8  41 82 00 4C */	beq lbl_8029EAD4
/* 8029EA8C 0029B9CC  3C 60 80 4D */	lis r3, __vt__Q23efx12TTankFireHit@ha
/* 8029EA90 0029B9D0  38 63 CB 94 */	addi r3, r3, __vt__Q23efx12TTankFireHit@l
/* 8029EA94 0029B9D4  90 7E 00 00 */	stw r3, 0(r30)
/* 8029EA98 0029B9D8  38 03 00 14 */	addi r0, r3, 0x14
/* 8029EA9C 0029B9DC  90 1E 00 04 */	stw r0, 4(r30)
/* 8029EAA0 0029B9E0  41 82 00 24 */	beq lbl_8029EAC4
/* 8029EAA4 0029B9E4  3C 80 80 4E */	lis r4, __vt__Q23efx17TOneEmitterSimple@ha
/* 8029EAA8 0029B9E8  38 7E 00 04 */	addi r3, r30, 4
/* 8029EAAC 0029B9EC  38 A4 6A 8C */	addi r5, r4, __vt__Q23efx17TOneEmitterSimple@l
/* 8029EAB0 0029B9F0  38 80 00 00 */	li r4, 0
/* 8029EAB4 0029B9F4  90 BE 00 00 */	stw r5, 0(r30)
/* 8029EAB8 0029B9F8  38 05 00 14 */	addi r0, r5, 0x14
/* 8029EABC 0029B9FC  90 1E 00 04 */	stw r0, 4(r30)
/* 8029EAC0 0029BA00  4B DF 11 DD */	bl __dt__18JPAEmitterCallBackFv
lbl_8029EAC4:
/* 8029EAC4 0029BA04  7F E0 07 35 */	extsh. r0, r31
/* 8029EAC8 0029BA08  40 81 00 0C */	ble lbl_8029EAD4
/* 8029EACC 0029BA0C  7F C3 F3 78 */	mr r3, r30
/* 8029EAD0 0029BA10  4B D8 55 E5 */	bl __dl__FPv
lbl_8029EAD4:
/* 8029EAD4 0029BA14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029EAD8 0029BA18  7F C3 F3 78 */	mr r3, r30
/* 8029EADC 0029BA1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029EAE0 0029BA20  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029EAE4 0029BA24  7C 08 03 A6 */	mtlr r0
/* 8029EAE8 0029BA28  38 21 00 10 */	addi r1, r1, 0x10
/* 8029EAEC 0029BA2C  4E 80 00 20 */	blr 

.global setupEffect__Q34Game5Ftank3ObjFv
setupEffect__Q34Game5Ftank3ObjFv:
/* 8029EAF0 0029BA30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029EAF4 0029BA34  7C 08 02 A6 */	mflr r0
/* 8029EAF8 0029BA38  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029EAFC 0029BA3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029EB00 0029BA40  93 C1 00 08 */	stw r30, 8(r1)
/* 8029EB04 0029BA44  7C 7E 1B 78 */	mr r30, r3
/* 8029EB08 0029BA48  80 63 02 C0 */	lwz r3, 0x2c0(r3)
/* 8029EB0C 0029BA4C  48 18 AD 95 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8029EB10 0029BA50  83 FE 03 08 */	lwz r31, 0x308(r30)
/* 8029EB14 0029BA54  7C 7E 1B 78 */	mr r30, r3
/* 8029EB18 0029BA58  7F C4 F3 78 */	mr r4, r30
/* 8029EB1C 0029BA5C  38 7F 00 04 */	addi r3, r31, 4
/* 8029EB20 0029BA60  48 11 1B 2D */	bl setMtxptr__Q23efx10TChaseMtx3FPA4_f
/* 8029EB24 0029BA64  93 DF 00 7C */	stw r30, 0x7c(r31)
/* 8029EB28 0029BA68  93 DF 00 9C */	stw r30, 0x9c(r31)
/* 8029EB2C 0029BA6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029EB30 0029BA70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029EB34 0029BA74  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029EB38 0029BA78  7C 08 03 A6 */	mtlr r0
/* 8029EB3C 0029BA7C  38 21 00 10 */	addi r1, r1, 0x10
/* 8029EB40 0029BA80  4E 80 00 20 */	blr 

.global startEffect__Q34Game5Ftank3ObjFv
startEffect__Q34Game5Ftank3ObjFv:
/* 8029EB44 0029BA84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029EB48 0029BA88  7C 08 02 A6 */	mflr r0
/* 8029EB4C 0029BA8C  38 80 00 00 */	li r4, 0
/* 8029EB50 0029BA90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029EB54 0029BA94  80 63 03 08 */	lwz r3, 0x308(r3)
/* 8029EB58 0029BA98  81 83 00 00 */	lwz r12, 0(r3)
/* 8029EB5C 0029BA9C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029EB60 0029BAA0  7D 89 03 A6 */	mtctr r12
/* 8029EB64 0029BAA4  4E 80 04 21 */	bctrl 
/* 8029EB68 0029BAA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029EB6C 0029BAAC  7C 08 03 A6 */	mtlr r0
/* 8029EB70 0029BAB0  38 21 00 10 */	addi r1, r1, 0x10
/* 8029EB74 0029BAB4  4E 80 00 20 */	blr 

.global startYodare__Q34Game5Ftank3ObjFv
startYodare__Q34Game5Ftank3ObjFv:
/* 8029EB78 0029BAB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029EB7C 0029BABC  7C 08 02 A6 */	mflr r0
/* 8029EB80 0029BAC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029EB84 0029BAC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029EB88 0029BAC8  83 E3 03 08 */	lwz r31, 0x308(r3)
/* 8029EB8C 0029BACC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029EB90 0029BAD0  7F E3 FB 78 */	mr r3, r31
/* 8029EB94 0029BAD4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029EB98 0029BAD8  7D 89 03 A6 */	mtctr r12
/* 8029EB9C 0029BADC  4E 80 04 21 */	bctrl 
/* 8029EBA0 0029BAE0  38 7F 00 8C */	addi r3, r31, 0x8c
/* 8029EBA4 0029BAE4  38 80 00 00 */	li r4, 0
/* 8029EBA8 0029BAE8  81 9F 00 8C */	lwz r12, 0x8c(r31)
/* 8029EBAC 0029BAEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029EBB0 0029BAF0  7D 89 03 A6 */	mtctr r12
/* 8029EBB4 0029BAF4  4E 80 04 21 */	bctrl 
/* 8029EBB8 0029BAF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029EBBC 0029BAFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029EBC0 0029BB00  7C 08 03 A6 */	mtlr r0
/* 8029EBC4 0029BB04  38 21 00 10 */	addi r1, r1, 0x10
/* 8029EBC8 0029BB08  4E 80 00 20 */	blr 

.global fade__Q23efx9TTankFireFv
fade__Q23efx9TTankFireFv:
/* 8029EBCC 0029BB0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029EBD0 0029BB10  7C 08 02 A6 */	mflr r0
/* 8029EBD4 0029BB14  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029EBD8 0029BB18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029EBDC 0029BB1C  7C 7F 1B 78 */	mr r31, r3
/* 8029EBE0 0029BB20  38 7F 00 04 */	addi r3, r31, 4
/* 8029EBE4 0029BB24  81 9F 00 04 */	lwz r12, 4(r31)
/* 8029EBE8 0029BB28  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029EBEC 0029BB2C  7D 89 03 A6 */	mtctr r12
/* 8029EBF0 0029BB30  4E 80 04 21 */	bctrl 
/* 8029EBF4 0029BB34  38 7F 00 6C */	addi r3, r31, 0x6c
/* 8029EBF8 0029BB38  81 9F 00 6C */	lwz r12, 0x6c(r31)
/* 8029EBFC 0029BB3C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029EC00 0029BB40  7D 89 03 A6 */	mtctr r12
/* 8029EC04 0029BB44  4E 80 04 21 */	bctrl 
/* 8029EC08 0029BB48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029EC0C 0029BB4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029EC10 0029BB50  7C 08 03 A6 */	mtlr r0
/* 8029EC14 0029BB54  38 21 00 10 */	addi r1, r1, 0x10
/* 8029EC18 0029BB58  4E 80 00 20 */	blr 

.global fade__Q23efx12TTankFireABCFv
fade__Q23efx12TTankFireABCFv:
/* 8029EC1C 0029BB5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029EC20 0029BB60  7C 08 02 A6 */	mflr r0
/* 8029EC24 0029BB64  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029EC28 0029BB68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029EC2C 0029BB6C  7C 7F 1B 78 */	mr r31, r3
/* 8029EC30 0029BB70  48 11 32 3D */	bl "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
/* 8029EC34 0029BB74  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8029EC38 0029BB78  28 03 00 00 */	cmplwi r3, 0
/* 8029EC3C 0029BB7C  41 82 00 14 */	beq lbl_8029EC50
/* 8029EC40 0029BB80  81 83 00 00 */	lwz r12, 0(r3)
/* 8029EC44 0029BB84  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029EC48 0029BB88  7D 89 03 A6 */	mtctr r12
/* 8029EC4C 0029BB8C  4E 80 04 21 */	bctrl 
lbl_8029EC50:
/* 8029EC50 0029BB90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029EC54 0029BB94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029EC58 0029BB98  7C 08 03 A6 */	mtlr r0
/* 8029EC5C 0029BB9C  38 21 00 10 */	addi r1, r1, 0x10
/* 8029EC60 0029BBA0  4E 80 00 20 */	blr 

.global finishEffect__Q34Game5Ftank3ObjFv
finishEffect__Q34Game5Ftank3ObjFv:
/* 8029EC64 0029BBA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029EC68 0029BBA8  7C 08 02 A6 */	mflr r0
/* 8029EC6C 0029BBAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029EC70 0029BBB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029EC74 0029BBB4  83 E3 03 08 */	lwz r31, 0x308(r3)
/* 8029EC78 0029BBB8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029EC7C 0029BBBC  7F E3 FB 78 */	mr r3, r31
/* 8029EC80 0029BBC0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029EC84 0029BBC4  7D 89 03 A6 */	mtctr r12
/* 8029EC88 0029BBC8  4E 80 04 21 */	bctrl 
/* 8029EC8C 0029BBCC  38 7F 00 8C */	addi r3, r31, 0x8c
/* 8029EC90 0029BBD0  81 9F 00 8C */	lwz r12, 0x8c(r31)
/* 8029EC94 0029BBD4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029EC98 0029BBD8  7D 89 03 A6 */	mtctr r12
/* 8029EC9C 0029BBDC  4E 80 04 21 */	bctrl 
/* 8029ECA0 0029BBE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029ECA4 0029BBE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029ECA8 0029BBE8  7C 08 03 A6 */	mtlr r0
/* 8029ECAC 0029BBEC  38 21 00 10 */	addi r1, r1, 0x10
/* 8029ECB0 0029BBF0  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game5Ftank3ObjFv
effectDrawOn__Q34Game5Ftank3ObjFv:
/* 8029ECB4 0029BBF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029ECB8 0029BBF8  7C 08 02 A6 */	mflr r0
/* 8029ECBC 0029BBFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029ECC0 0029BC00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029ECC4 0029BC04  83 E3 03 08 */	lwz r31, 0x308(r3)
/* 8029ECC8 0029BC08  81 9F 00 04 */	lwz r12, 4(r31)
/* 8029ECCC 0029BC0C  38 7F 00 04 */	addi r3, r31, 4
/* 8029ECD0 0029BC10  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8029ECD4 0029BC14  7D 89 03 A6 */	mtctr r12
/* 8029ECD8 0029BC18  4E 80 04 21 */	bctrl 
/* 8029ECDC 0029BC1C  38 7F 00 6C */	addi r3, r31, 0x6c
/* 8029ECE0 0029BC20  81 9F 00 6C */	lwz r12, 0x6c(r31)
/* 8029ECE4 0029BC24  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8029ECE8 0029BC28  7D 89 03 A6 */	mtctr r12
/* 8029ECEC 0029BC2C  4E 80 04 21 */	bctrl 
/* 8029ECF0 0029BC30  38 7F 00 8C */	addi r3, r31, 0x8c
/* 8029ECF4 0029BC34  81 9F 00 8C */	lwz r12, 0x8c(r31)
/* 8029ECF8 0029BC38  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8029ECFC 0029BC3C  7D 89 03 A6 */	mtctr r12
/* 8029ED00 0029BC40  4E 80 04 21 */	bctrl 
/* 8029ED04 0029BC44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029ED08 0029BC48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029ED0C 0029BC4C  7C 08 03 A6 */	mtlr r0
/* 8029ED10 0029BC50  38 21 00 10 */	addi r1, r1, 0x10
/* 8029ED14 0029BC54  4E 80 00 20 */	blr 

.global endDemoDrawOn__Q23efx12TTankFireABCFv
endDemoDrawOn__Q23efx12TTankFireABCFv:
/* 8029ED18 0029BC58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029ED1C 0029BC5C  7C 08 02 A6 */	mflr r0
/* 8029ED20 0029BC60  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029ED24 0029BC64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029ED28 0029BC68  7C 7F 1B 78 */	mr r31, r3
/* 8029ED2C 0029BC6C  48 11 32 49 */	bl "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
/* 8029ED30 0029BC70  38 7F 00 4C */	addi r3, r31, 0x4c
/* 8029ED34 0029BC74  81 9F 00 4C */	lwz r12, 0x4c(r31)
/* 8029ED38 0029BC78  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8029ED3C 0029BC7C  7D 89 03 A6 */	mtctr r12
/* 8029ED40 0029BC80  4E 80 04 21 */	bctrl 
/* 8029ED44 0029BC84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029ED48 0029BC88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029ED4C 0029BC8C  7C 08 03 A6 */	mtlr r0
/* 8029ED50 0029BC90  38 21 00 10 */	addi r1, r1, 0x10
/* 8029ED54 0029BC94  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game5Ftank3ObjFv
effectDrawOff__Q34Game5Ftank3ObjFv:
/* 8029ED58 0029BC98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029ED5C 0029BC9C  7C 08 02 A6 */	mflr r0
/* 8029ED60 0029BCA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029ED64 0029BCA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029ED68 0029BCA8  83 E3 03 08 */	lwz r31, 0x308(r3)
/* 8029ED6C 0029BCAC  81 9F 00 04 */	lwz r12, 4(r31)
/* 8029ED70 0029BCB0  38 7F 00 04 */	addi r3, r31, 4
/* 8029ED74 0029BCB4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8029ED78 0029BCB8  7D 89 03 A6 */	mtctr r12
/* 8029ED7C 0029BCBC  4E 80 04 21 */	bctrl 
/* 8029ED80 0029BCC0  38 7F 00 6C */	addi r3, r31, 0x6c
/* 8029ED84 0029BCC4  81 9F 00 6C */	lwz r12, 0x6c(r31)
/* 8029ED88 0029BCC8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8029ED8C 0029BCCC  7D 89 03 A6 */	mtctr r12
/* 8029ED90 0029BCD0  4E 80 04 21 */	bctrl 
/* 8029ED94 0029BCD4  38 7F 00 8C */	addi r3, r31, 0x8c
/* 8029ED98 0029BCD8  81 9F 00 8C */	lwz r12, 0x8c(r31)
/* 8029ED9C 0029BCDC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8029EDA0 0029BCE0  7D 89 03 A6 */	mtctr r12
/* 8029EDA4 0029BCE4  4E 80 04 21 */	bctrl 
/* 8029EDA8 0029BCE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029EDAC 0029BCEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029EDB0 0029BCF0  7C 08 03 A6 */	mtlr r0
/* 8029EDB4 0029BCF4  38 21 00 10 */	addi r1, r1, 0x10
/* 8029EDB8 0029BCF8  4E 80 00 20 */	blr 

.global startDemoDrawOff__Q23efx12TTankFireABCFv
startDemoDrawOff__Q23efx12TTankFireABCFv:
/* 8029EDBC 0029BCFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029EDC0 0029BD00  7C 08 02 A6 */	mflr r0
/* 8029EDC4 0029BD04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029EDC8 0029BD08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029EDCC 0029BD0C  7C 7F 1B 78 */	mr r31, r3
/* 8029EDD0 0029BD10  48 11 31 4D */	bl "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
/* 8029EDD4 0029BD14  38 7F 00 4C */	addi r3, r31, 0x4c
/* 8029EDD8 0029BD18  81 9F 00 4C */	lwz r12, 0x4c(r31)
/* 8029EDDC 0029BD1C  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8029EDE0 0029BD20  7D 89 03 A6 */	mtctr r12
/* 8029EDE4 0029BD24  4E 80 04 21 */	bctrl 
/* 8029EDE8 0029BD28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029EDEC 0029BD2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029EDF0 0029BD30  7C 08 03 A6 */	mtlr r0
/* 8029EDF4 0029BD34  38 21 00 10 */	addi r1, r1, 0x10
/* 8029EDF8 0029BD38  4E 80 00 20 */	blr 

.global interactCreature__Q34Game5Ftank3ObjFPQ24Game8Creature
interactCreature__Q34Game5Ftank3ObjFPQ24Game8Creature:
/* 8029EDFC 0029BD3C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8029EE00 0029BD40  7C 08 02 A6 */	mflr r0
/* 8029EE04 0029BD44  3C C0 80 4B */	lis r6, __vt__Q24Game11Interaction@ha
/* 8029EE08 0029BD48  7C 88 23 78 */	mr r8, r4
/* 8029EE0C 0029BD4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8029EE10 0029BD50  3C A0 80 4B */	lis r5, __vt__Q24Game12InteractFire@ha
/* 8029EE14 0029BD54  38 C6 A3 00 */	addi r6, r6, __vt__Q24Game11Interaction@l
/* 8029EE18 0029BD58  38 81 00 08 */	addi r4, r1, 8
/* 8029EE1C 0029BD5C  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 8029EE20 0029BD60  38 05 48 78 */	addi r0, r5, __vt__Q24Game12InteractFire@l
/* 8029EE24 0029BD64  C0 07 06 04 */	lfs f0, 0x604(r7)
/* 8029EE28 0029BD68  90 C1 00 08 */	stw r6, 8(r1)
/* 8029EE2C 0029BD6C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8029EE30 0029BD70  7D 03 43 78 */	mr r3, r8
/* 8029EE34 0029BD74  90 01 00 08 */	stw r0, 8(r1)
/* 8029EE38 0029BD78  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8029EE3C 0029BD7C  81 88 00 00 */	lwz r12, 0(r8)
/* 8029EE40 0029BD80  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8029EE44 0029BD84  7D 89 03 A6 */	mtctr r12
/* 8029EE48 0029BD88  4E 80 04 21 */	bctrl 
/* 8029EE4C 0029BD8C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8029EE50 0029BD90  7C 08 03 A6 */	mtlr r0
/* 8029EE54 0029BD94  38 21 00 20 */	addi r1, r1, 0x20
/* 8029EE58 0029BD98  4E 80 00 20 */	blr 

.global stopEffectRadius__Q34Game5Ftank3ObjFf
stopEffectRadius__Q34Game5Ftank3ObjFf:
/* 8029EE5C 0029BD9C  80 63 03 08 */	lwz r3, 0x308(r3)
/* 8029EE60 0029BDA0  D0 23 00 48 */	stfs f1, 0x48(r3)
/* 8029EE64 0029BDA4  D0 23 00 84 */	stfs f1, 0x84(r3)
/* 8029EE68 0029BDA8  4E 80 00 20 */	blr 

.global createChargeSE__Q34Game5Ftank3ObjFv
createChargeSE__Q34Game5Ftank3ObjFv:
/* 8029EE6C 0029BDAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029EE70 0029BDB0  7C 08 02 A6 */	mflr r0
/* 8029EE74 0029BDB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029EE78 0029BDB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8029EE7C 0029BDBC  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 8029EE80 0029BDC0  7D 89 03 A6 */	mtctr r12
/* 8029EE84 0029BDC4  4E 80 04 21 */	bctrl 
/* 8029EE88 0029BDC8  81 83 00 00 */	lwz r12, 0(r3)
/* 8029EE8C 0029BDCC  38 80 58 3D */	li r4, 0x583d
/* 8029EE90 0029BDD0  38 A0 00 00 */	li r5, 0
/* 8029EE94 0029BDD4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8029EE98 0029BDD8  7D 89 03 A6 */	mtctr r12
/* 8029EE9C 0029BDDC  4E 80 04 21 */	bctrl 
/* 8029EEA0 0029BDE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029EEA4 0029BDE4  7C 08 03 A6 */	mtlr r0
/* 8029EEA8 0029BDE8  38 21 00 10 */	addi r1, r1, 0x10
/* 8029EEAC 0029BDEC  4E 80 00 20 */	blr 

.global createDisChargeSE__Q34Game5Ftank3ObjFv
createDisChargeSE__Q34Game5Ftank3ObjFv:
/* 8029EEB0 0029BDF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029EEB4 0029BDF4  7C 08 02 A6 */	mflr r0
/* 8029EEB8 0029BDF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029EEBC 0029BDFC  81 83 00 00 */	lwz r12, 0(r3)
/* 8029EEC0 0029BE00  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 8029EEC4 0029BE04  7D 89 03 A6 */	mtctr r12
/* 8029EEC8 0029BE08  4E 80 04 21 */	bctrl 
/* 8029EECC 0029BE0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8029EED0 0029BE10  38 80 50 3C */	li r4, 0x503c
/* 8029EED4 0029BE14  38 A0 00 00 */	li r5, 0
/* 8029EED8 0029BE18  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8029EEDC 0029BE1C  7D 89 03 A6 */	mtctr r12
/* 8029EEE0 0029BE20  4E 80 04 21 */	bctrl 
/* 8029EEE4 0029BE24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029EEE8 0029BE28  7C 08 03 A6 */	mtlr r0
/* 8029EEEC 0029BE2C  38 21 00 10 */	addi r1, r1, 0x10
/* 8029EEF0 0029BE30  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game5Ftank3ObjFv
getEnemyTypeID__Q34Game5Ftank3ObjFv:
/* 8029EEF4 0029BE34  38 60 00 18 */	li r3, 0x18
/* 8029EEF8 0029BE38  4E 80 00 20 */	blr 

.global "@4@__dt__Q23efx12TTankFireHitFv"
"@4@__dt__Q23efx12TTankFireHitFv":
/* 8029EEFC 0029BE3C  38 63 FF FC */	addi r3, r3, -4
/* 8029EF00 0029BE40  4B FF FB 6C */	b __dt__Q23efx12TTankFireHitFv

.global "@4@__dt__Q23efx15TTankFireYodareFv"
"@4@__dt__Q23efx15TTankFireYodareFv":
/* 8029EF04 0029BE44  38 63 FF FC */	addi r3, r3, -4
/* 8029EF08 0029BE48  4B FF FA 08 */	b __dt__Q23efx15TTankFireYodareFv
