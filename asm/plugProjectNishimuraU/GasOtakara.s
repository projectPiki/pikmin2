.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q23efx7TOtaGas
__vt__Q23efx7TOtaGas:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.global __vt__Q23efx13TOtaChargegas
__vt__Q23efx13TOtaChargegas:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
.global __vt__Q34Game10GasOtakara3Obj
__vt__Q34Game10GasOtakara3Obj:
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
	.4byte onInit__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game11OtakaraBase3ObjFR8Graphics
	.4byte getBodyRadius__Q24Game9EnemyBaseFv
	.4byte getCellRadius__Q34Game11OtakaraBase3ObjFv
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
	.4byte getShadowParam__Q34Game11OtakaraBase3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game10GasOtakara3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game11OtakaraBase3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game11OtakaraBase3ObjFv
	.4byte doUpdateCommon__Q34Game11OtakaraBase3ObjFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game11OtakaraBase3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game11OtakaraBase3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game10GasOtakara3ObjFv
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
	.4byte getEnemyTypeID__Q34Game10GasOtakara3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game11OtakaraBase3ObjFv
	.4byte doFinishStoneState__Q34Game11OtakaraBase3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q34Game11OtakaraBase3ObjFf
	.4byte doFinishEarthquakeState__Q34Game11OtakaraBase3ObjFv
	.4byte doStartEarthquakeFitState__Q34Game11OtakaraBase3ObjFv
	.4byte doFinishEarthquakeFitState__Q34Game11OtakaraBase3ObjFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game11OtakaraBase3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game11OtakaraBase3ObjFv
	.4byte doStartMovie__Q34Game11OtakaraBase3ObjFv
	.4byte doEndMovie__Q34Game11OtakaraBase3ObjFv
	.4byte setFSM__Q34Game11OtakaraBase3ObjFPQ34Game11OtakaraBase3FSM
	.4byte interactCreature__Q34Game10GasOtakara3ObjFPQ24Game8Creature
	.4byte createEffect__Q34Game10GasOtakara3ObjFv
	.4byte setupEffect__Q34Game10GasOtakara3ObjFv
	.4byte startChargeEffect__Q34Game10GasOtakara3ObjFv
	.4byte finishChargeEffect__Q34Game10GasOtakara3ObjFv
	.4byte createDisChargeEffect__Q34Game10GasOtakara3ObjFv
	.4byte effectDrawOn__Q34Game10GasOtakara3ObjFv
	.4byte effectDrawOff__Q34Game10GasOtakara3ObjFv
	.4byte startEscapeSE__Q34Game11OtakaraBase3ObjFv
	.4byte startDisChargeSE__Q34Game10GasOtakara3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@760@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@760@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@760@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@760@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@760@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@760@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game10GasOtakara3ObjFv
__ct__Q34Game10GasOtakara3ObjFv:
/* 802B9294 002B61D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B9298 002B61D8  7C 08 02 A6 */	mflr r0
/* 802B929C 002B61DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B92A0 002B61E0  7C 80 07 35 */	extsh. r0, r4
/* 802B92A4 002B61E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B92A8 002B61E8  7C 7F 1B 78 */	mr r31, r3
/* 802B92AC 002B61EC  41 82 00 24 */	beq lbl_802B92D0
/* 802B92B0 002B61F0  38 1F 02 F8 */	addi r0, r31, 0x2f8
/* 802B92B4 002B61F4  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802B92B8 002B61F8  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802B92BC 002B61FC  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802B92C0 002B6200  38 00 00 00 */	li r0, 0
/* 802B92C4 002B6204  90 7F 02 F8 */	stw r3, 0x2f8(r31)
/* 802B92C8 002B6208  90 1F 02 FC */	stw r0, 0x2fc(r31)
/* 802B92CC 002B620C  90 1F 03 00 */	stw r0, 0x300(r31)
lbl_802B92D0:
/* 802B92D0 002B6210  7F E3 FB 78 */	mr r3, r31
/* 802B92D4 002B6214  38 80 00 00 */	li r4, 0
/* 802B92D8 002B6218  4B FF CF 75 */	bl __ct__Q34Game11OtakaraBase3ObjFv
/* 802B92DC 002B621C  3C 60 80 4D */	lis r3, __vt__Q34Game10GasOtakara3Obj@ha
/* 802B92E0 002B6220  38 1F 02 F8 */	addi r0, r31, 0x2f8
/* 802B92E4 002B6224  38 A3 FD D8 */	addi r5, r3, __vt__Q34Game10GasOtakara3Obj@l
/* 802B92E8 002B6228  7F E3 FB 78 */	mr r3, r31
/* 802B92EC 002B622C  90 BF 00 00 */	stw r5, 0(r31)
/* 802B92F0 002B6230  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802B92F4 002B6234  38 A5 03 24 */	addi r5, r5, 0x324
/* 802B92F8 002B6238  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802B92FC 002B623C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802B9300 002B6240  90 A4 00 00 */	stw r5, 0(r4)
/* 802B9304 002B6244  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802B9308 002B6248  7C 04 00 50 */	subf r0, r4, r0
/* 802B930C 002B624C  90 04 00 0C */	stw r0, 0xc(r4)
/* 802B9310 002B6250  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B9314 002B6254  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 802B9318 002B6258  7D 89 03 A6 */	mtctr r12
/* 802B931C 002B625C  4E 80 04 21 */	bctrl 
/* 802B9320 002B6260  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B9324 002B6264  7F E3 FB 78 */	mr r3, r31
/* 802B9328 002B6268  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B932C 002B626C  7C 08 03 A6 */	mtlr r0
/* 802B9330 002B6270  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9334 002B6274  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game10GasOtakara3ObjFv
changeMaterial__Q34Game10GasOtakara3ObjFv:
/* 802B9338 002B6278  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B933C 002B627C  7C 08 02 A6 */	mflr r0
/* 802B9340 002B6280  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B9344 002B6284  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802B9348 002B6288  7C 7B 1B 78 */	mr r27, r3
/* 802B934C 002B628C  80 63 01 80 */	lwz r3, 0x180(r3)
/* 802B9350 002B6290  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 802B9354 002B6294  81 83 00 00 */	lwz r12, 0(r3)
/* 802B9358 002B6298  83 A4 00 08 */	lwz r29, 8(r4)
/* 802B935C 002B629C  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 802B9360 002B62A0  83 DD 00 04 */	lwz r30, 4(r29)
/* 802B9364 002B62A4  7D 89 03 A6 */	mtctr r12
/* 802B9368 002B62A8  4E 80 04 21 */	bctrl 
/* 802B936C 002B62AC  7C 7F 1B 78 */	mr r31, r3
/* 802B9370 002B62B0  7F A3 EB 78 */	mr r3, r29
/* 802B9374 002B62B4  81 9D 00 00 */	lwz r12, 0(r29)
/* 802B9378 002B62B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802B937C 002B62BC  7D 89 03 A6 */	mtctr r12
/* 802B9380 002B62C0  4E 80 04 21 */	bctrl 
/* 802B9384 002B62C4  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 802B9388 002B62C8  3C 60 80 51 */	lis r3, j3dSys@ha
/* 802B938C 002B62CC  88 1F 00 00 */	lbz r0, 0(r31)
/* 802B9390 002B62D0  3B 63 F2 30 */	addi r27, r3, j3dSys@l
/* 802B9394 002B62D4  80 64 00 08 */	lwz r3, 8(r4)
/* 802B9398 002B62D8  3B 80 00 00 */	li r28, 0
/* 802B939C 002B62DC  80 63 00 04 */	lwz r3, 4(r3)
/* 802B93A0 002B62E0  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 802B93A4 002B62E4  80 64 00 04 */	lwz r3, 4(r4)
/* 802B93A8 002B62E8  98 03 00 00 */	stb r0, 0(r3)
/* 802B93AC 002B62EC  88 1F 00 01 */	lbz r0, 1(r31)
/* 802B93B0 002B62F0  98 03 00 01 */	stb r0, 1(r3)
/* 802B93B4 002B62F4  A0 1F 00 02 */	lhz r0, 2(r31)
/* 802B93B8 002B62F8  B0 03 00 02 */	sth r0, 2(r3)
/* 802B93BC 002B62FC  A0 1F 00 04 */	lhz r0, 4(r31)
/* 802B93C0 002B6300  B0 03 00 04 */	sth r0, 4(r3)
/* 802B93C4 002B6304  88 1F 00 06 */	lbz r0, 6(r31)
/* 802B93C8 002B6308  98 03 00 06 */	stb r0, 6(r3)
/* 802B93CC 002B630C  88 1F 00 07 */	lbz r0, 7(r31)
/* 802B93D0 002B6310  98 03 00 07 */	stb r0, 7(r3)
/* 802B93D4 002B6314  88 1F 00 08 */	lbz r0, 8(r31)
/* 802B93D8 002B6318  98 03 00 08 */	stb r0, 8(r3)
/* 802B93DC 002B631C  88 1F 00 09 */	lbz r0, 9(r31)
/* 802B93E0 002B6320  98 03 00 09 */	stb r0, 9(r3)
/* 802B93E4 002B6324  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 802B93E8 002B6328  B0 03 00 0A */	sth r0, 0xa(r3)
/* 802B93EC 002B632C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 802B93F0 002B6330  90 03 00 0C */	stw r0, 0xc(r3)
/* 802B93F4 002B6334  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 802B93F8 002B6338  98 03 00 10 */	stb r0, 0x10(r3)
/* 802B93FC 002B633C  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 802B9400 002B6340  98 03 00 11 */	stb r0, 0x11(r3)
/* 802B9404 002B6344  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 802B9408 002B6348  98 03 00 12 */	stb r0, 0x12(r3)
/* 802B940C 002B634C  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 802B9410 002B6350  98 03 00 13 */	stb r0, 0x13(r3)
/* 802B9414 002B6354  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 802B9418 002B6358  98 03 00 14 */	stb r0, 0x14(r3)
/* 802B941C 002B635C  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 802B9420 002B6360  98 03 00 15 */	stb r0, 0x15(r3)
/* 802B9424 002B6364  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 802B9428 002B6368  98 03 00 16 */	stb r0, 0x16(r3)
/* 802B942C 002B636C  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 802B9430 002B6370  98 03 00 17 */	stb r0, 0x17(r3)
/* 802B9434 002B6374  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 802B9438 002B6378  98 03 00 18 */	stb r0, 0x18(r3)
/* 802B943C 002B637C  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 802B9440 002B6380  98 03 00 19 */	stb r0, 0x19(r3)
/* 802B9444 002B6384  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 802B9448 002B6388  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 802B944C 002B638C  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 802B9450 002B6390  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802B9454 002B6394  80 64 00 04 */	lwz r3, 4(r4)
/* 802B9458 002B6398  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B945C 002B639C  7C 1F 02 14 */	add r0, r31, r0
/* 802B9460 002B63A0  7C 03 00 50 */	subf r0, r3, r0
/* 802B9464 002B63A4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802B9468 002B63A8  80 64 00 04 */	lwz r3, 4(r4)
/* 802B946C 002B63AC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802B9470 002B63B0  7C 1F 02 14 */	add r0, r31, r0
/* 802B9474 002B63B4  7C 03 00 50 */	subf r0, r3, r0
/* 802B9478 002B63B8  90 03 00 0C */	stw r0, 0xc(r3)
/* 802B947C 002B63BC  48 00 00 3C */	b lbl_802B94B8
lbl_802B9480:
/* 802B9480 002B63C0  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 802B9484 002B63C4  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 802B9488 002B63C8  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 802B948C 002B63CC  7C 84 1A 14 */	add r4, r4, r3
/* 802B9490 002B63D0  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 802B9494 002B63D4  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 802B9498 002B63D8  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 802B949C 002B63DC  7C 63 00 2E */	lwzx r3, r3, r0
/* 802B94A0 002B63E0  80 84 00 34 */	lwz r4, 0x34(r4)
/* 802B94A4 002B63E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802B94A8 002B63E8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802B94AC 002B63EC  7D 89 03 A6 */	mtctr r12
/* 802B94B0 002B63F0  4E 80 04 21 */	bctrl 
/* 802B94B4 002B63F4  3B 9C 00 01 */	addi r28, r28, 1
lbl_802B94B8:
/* 802B94B8 002B63F8  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 802B94BC 002B63FC  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 802B94C0 002B6400  7C 03 00 40 */	cmplw r3, r0
/* 802B94C4 002B6404  41 80 FF BC */	blt lbl_802B9480
/* 802B94C8 002B6408  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802B94CC 002B640C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B94D0 002B6410  7C 08 03 A6 */	mtlr r0
/* 802B94D4 002B6414  38 21 00 20 */	addi r1, r1, 0x20
/* 802B94D8 002B6418  4E 80 00 20 */	blr 

.global interactCreature__Q34Game10GasOtakara3ObjFPQ24Game8Creature
interactCreature__Q34Game10GasOtakara3ObjFPQ24Game8Creature:
/* 802B94DC 002B641C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B94E0 002B6420  7C 08 02 A6 */	mflr r0
/* 802B94E4 002B6424  3C C0 80 4B */	lis r6, __vt__Q24Game11Interaction@ha
/* 802B94E8 002B6428  7C 88 23 78 */	mr r8, r4
/* 802B94EC 002B642C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B94F0 002B6430  3C A0 80 4B */	lis r5, __vt__Q24Game11InteractGas@ha
/* 802B94F4 002B6434  38 C6 A3 00 */	addi r6, r6, __vt__Q24Game11Interaction@l
/* 802B94F8 002B6438  38 81 00 08 */	addi r4, r1, 8
/* 802B94FC 002B643C  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 802B9500 002B6440  38 05 48 0C */	addi r0, r5, __vt__Q24Game11InteractGas@l
/* 802B9504 002B6444  C0 07 06 04 */	lfs f0, 0x604(r7)
/* 802B9508 002B6448  90 C1 00 08 */	stw r6, 8(r1)
/* 802B950C 002B644C  90 61 00 0C */	stw r3, 0xc(r1)
/* 802B9510 002B6450  7D 03 43 78 */	mr r3, r8
/* 802B9514 002B6454  90 01 00 08 */	stw r0, 8(r1)
/* 802B9518 002B6458  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802B951C 002B645C  81 88 00 00 */	lwz r12, 0(r8)
/* 802B9520 002B6460  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802B9524 002B6464  7D 89 03 A6 */	mtctr r12
/* 802B9528 002B6468  4E 80 04 21 */	bctrl 
/* 802B952C 002B646C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B9530 002B6470  7C 08 03 A6 */	mtlr r0
/* 802B9534 002B6474  38 21 00 20 */	addi r1, r1, 0x20
/* 802B9538 002B6478  4E 80 00 20 */	blr 

.global createEffect__Q34Game10GasOtakara3ObjFv
createEffect__Q34Game10GasOtakara3ObjFv:
/* 802B953C 002B647C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B9540 002B6480  7C 08 02 A6 */	mflr r0
/* 802B9544 002B6484  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B9548 002B6488  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B954C 002B648C  93 C1 00 08 */	stw r30, 8(r1)
/* 802B9550 002B6490  7C 7E 1B 78 */	mr r30, r3
/* 802B9554 002B6494  38 60 00 2C */	li r3, 0x2c
/* 802B9558 002B6498  4B D6 A9 4D */	bl __nw__FUl
/* 802B955C 002B649C  7C 7F 1B 79 */	or. r31, r3, r3
/* 802B9560 002B64A0  41 82 00 20 */	beq lbl_802B9580
/* 802B9564 002B64A4  38 80 00 00 */	li r4, 0
/* 802B9568 002B64A8  38 A0 01 30 */	li r5, 0x130
/* 802B956C 002B64AC  38 C0 01 31 */	li r6, 0x131
/* 802B9570 002B64B0  48 0F 72 8D */	bl __ct__Q23efx11TChaseMtxT2FPA4_fUsUs
/* 802B9574 002B64B4  3C 60 80 4D */	lis r3, __vt__Q23efx13TOtaChargegas@ha
/* 802B9578 002B64B8  38 03 FD BC */	addi r0, r3, __vt__Q23efx13TOtaChargegas@l
/* 802B957C 002B64BC  90 1F 00 00 */	stw r0, 0(r31)
lbl_802B9580:
/* 802B9580 002B64C0  93 FE 02 F4 */	stw r31, 0x2f4(r30)
/* 802B9584 002B64C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B9588 002B64C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B958C 002B64CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B9590 002B64D0  7C 08 03 A6 */	mtlr r0
/* 802B9594 002B64D4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9598 002B64D8  4E 80 00 20 */	blr 

.global setupEffect__Q34Game10GasOtakara3ObjFv
setupEffect__Q34Game10GasOtakara3ObjFv:
/* 802B959C 002B64DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B95A0 002B64E0  7C 08 02 A6 */	mflr r0
/* 802B95A4 002B64E4  38 82 DF B8 */	addi r4, r2, lbl_8051C318@sda21
/* 802B95A8 002B64E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B95AC 002B64EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B95B0 002B64F0  7C 7F 1B 78 */	mr r31, r3
/* 802B95B4 002B64F4  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802B95B8 002B64F8  48 18 5A 2D */	bl getJoint__Q28SysShape5ModelFPc
/* 802B95BC 002B64FC  48 17 02 E5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B95C0 002B6500  7C 60 1B 78 */	mr r0, r3
/* 802B95C4 002B6504  80 7F 02 F4 */	lwz r3, 0x2f4(r31)
/* 802B95C8 002B6508  7C 04 03 78 */	mr r4, r0
/* 802B95CC 002B650C  48 0F 73 35 */	bl setMtxptr__Q23efx11TChaseMtxT2FPA4_f
/* 802B95D0 002B6510  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B95D4 002B6514  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B95D8 002B6518  7C 08 03 A6 */	mtlr r0
/* 802B95DC 002B651C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B95E0 002B6520  4E 80 00 20 */	blr 

.global startChargeEffect__Q34Game10GasOtakara3ObjFv
startChargeEffect__Q34Game10GasOtakara3ObjFv:
/* 802B95E4 002B6524  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B95E8 002B6528  7C 08 02 A6 */	mflr r0
/* 802B95EC 002B652C  38 80 00 00 */	li r4, 0
/* 802B95F0 002B6530  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B95F4 002B6534  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B95F8 002B6538  81 83 00 00 */	lwz r12, 0(r3)
/* 802B95FC 002B653C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B9600 002B6540  7D 89 03 A6 */	mtctr r12
/* 802B9604 002B6544  4E 80 04 21 */	bctrl 
/* 802B9608 002B6548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B960C 002B654C  7C 08 03 A6 */	mtlr r0
/* 802B9610 002B6550  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9614 002B6554  4E 80 00 20 */	blr 

.global finishChargeEffect__Q34Game10GasOtakara3ObjFv
finishChargeEffect__Q34Game10GasOtakara3ObjFv:
/* 802B9618 002B6558  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B961C 002B655C  7C 08 02 A6 */	mflr r0
/* 802B9620 002B6560  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B9624 002B6564  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B9628 002B6568  81 83 00 00 */	lwz r12, 0(r3)
/* 802B962C 002B656C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802B9630 002B6570  7D 89 03 A6 */	mtctr r12
/* 802B9634 002B6574  4E 80 04 21 */	bctrl 
/* 802B9638 002B6578  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B963C 002B657C  7C 08 03 A6 */	mtlr r0
/* 802B9640 002B6580  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9644 002B6584  4E 80 00 20 */	blr 

.global createDisChargeEffect__Q34Game10GasOtakara3ObjFv
createDisChargeEffect__Q34Game10GasOtakara3ObjFv:
/* 802B9648 002B6588  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802B964C 002B658C  7C 08 02 A6 */	mflr r0
/* 802B9650 002B6590  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 802B9654 002B6594  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple2@ha
/* 802B9658 002B6598  90 01 00 34 */	stw r0, 0x34(r1)
/* 802B965C 002B659C  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802B9660 002B65A0  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 802B9664 002B65A4  39 26 A7 F8 */	addi r9, r6, __vt__Q23efx5TBase@l
/* 802B9668 002B65A8  90 01 00 18 */	stw r0, 0x18(r1)
/* 802B966C 002B65AC  39 05 6A 64 */	addi r8, r5, __vt__Q23efx8TSimple2@l
/* 802B9670 002B65B0  3C 80 80 4D */	lis r4, __vt__Q23efx7TOtaGas@ha
/* 802B9674 002B65B4  38 E0 01 3C */	li r7, 0x13c
/* 802B9678 002B65B8  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802B967C 002B65BC  38 04 FD A8 */	addi r0, r4, __vt__Q23efx7TOtaGas@l
/* 802B9680 002B65C0  38 C0 01 3D */	li r6, 0x13d
/* 802B9684 002B65C4  38 A0 00 00 */	li r5, 0
/* 802B9688 002B65C8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802B968C 002B65CC  38 81 00 18 */	addi r4, r1, 0x18
/* 802B9690 002B65D0  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802B9694 002B65D4  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802B9698 002B65D8  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 802B969C 002B65DC  38 61 00 08 */	addi r3, r1, 8
/* 802B96A0 002B65E0  91 21 00 08 */	stw r9, 8(r1)
/* 802B96A4 002B65E4  91 01 00 08 */	stw r8, 8(r1)
/* 802B96A8 002B65E8  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802B96AC 002B65EC  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 802B96B0 002B65F0  B0 C1 00 0E */	sth r6, 0xe(r1)
/* 802B96B4 002B65F4  90 A1 00 10 */	stw r5, 0x10(r1)
/* 802B96B8 002B65F8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802B96BC 002B65FC  90 01 00 08 */	stw r0, 8(r1)
/* 802B96C0 002B6600  48 0F 59 55 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 802B96C4 002B6604  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802B96C8 002B6608  7C 08 03 A6 */	mtlr r0
/* 802B96CC 002B660C  38 21 00 30 */	addi r1, r1, 0x30
/* 802B96D0 002B6610  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game10GasOtakara3ObjFv
effectDrawOn__Q34Game10GasOtakara3ObjFv:
/* 802B96D4 002B6614  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B96D8 002B6618  7C 08 02 A6 */	mflr r0
/* 802B96DC 002B661C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B96E0 002B6620  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B96E4 002B6624  81 83 00 00 */	lwz r12, 0(r3)
/* 802B96E8 002B6628  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802B96EC 002B662C  7D 89 03 A6 */	mtctr r12
/* 802B96F0 002B6630  4E 80 04 21 */	bctrl 
/* 802B96F4 002B6634  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B96F8 002B6638  7C 08 03 A6 */	mtlr r0
/* 802B96FC 002B663C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9700 002B6640  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game10GasOtakara3ObjFv
effectDrawOff__Q34Game10GasOtakara3ObjFv:
/* 802B9704 002B6644  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B9708 002B6648  7C 08 02 A6 */	mflr r0
/* 802B970C 002B664C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B9710 002B6650  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B9714 002B6654  81 83 00 00 */	lwz r12, 0(r3)
/* 802B9718 002B6658  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802B971C 002B665C  7D 89 03 A6 */	mtctr r12
/* 802B9720 002B6660  4E 80 04 21 */	bctrl 
/* 802B9724 002B6664  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B9728 002B6668  7C 08 03 A6 */	mtlr r0
/* 802B972C 002B666C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9730 002B6670  4E 80 00 20 */	blr 

.global startDisChargeSE__Q34Game10GasOtakara3ObjFv
startDisChargeSE__Q34Game10GasOtakara3ObjFv:
/* 802B9734 002B6674  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B9738 002B6678  7C 08 02 A6 */	mflr r0
/* 802B973C 002B667C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B9740 002B6680  81 83 00 00 */	lwz r12, 0(r3)
/* 802B9744 002B6684  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802B9748 002B6688  7D 89 03 A6 */	mtctr r12
/* 802B974C 002B668C  4E 80 04 21 */	bctrl 
/* 802B9750 002B6690  81 83 00 00 */	lwz r12, 0(r3)
/* 802B9754 002B6694  38 80 51 64 */	li r4, 0x5164
/* 802B9758 002B6698  38 A0 00 00 */	li r5, 0
/* 802B975C 002B669C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802B9760 002B66A0  7D 89 03 A6 */	mtctr r12
/* 802B9764 002B66A4  4E 80 04 21 */	bctrl 
/* 802B9768 002B66A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B976C 002B66AC  7C 08 03 A6 */	mtlr r0
/* 802B9770 002B66B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9774 002B66B4  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game10GasOtakara3ObjFv
getEnemyTypeID__Q34Game10GasOtakara3ObjFv:
/* 802B9778 002B66B8  38 60 00 3D */	li r3, 0x3d
/* 802B977C 002B66BC  4E 80 00 20 */	blr 
