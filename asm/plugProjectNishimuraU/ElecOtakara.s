.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23efx8TOtaElec
__vt__Q23efx8TOtaElec:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple3FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.global __vt__Q23efx14TOtaChargeelec
__vt__Q23efx14TOtaChargeelec:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
.global __vt__Q34Game11ElecOtakara3Obj
__vt__Q34Game11ElecOtakara3Obj:
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
	.4byte __dt__Q34Game11ElecOtakara3ObjFv
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
	.4byte changeMaterial__Q34Game11ElecOtakara3ObjFv
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
	.4byte getEnemyTypeID__Q34Game11ElecOtakara3ObjFv
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
	.4byte interactCreature__Q34Game11ElecOtakara3ObjFPQ24Game8Creature
	.4byte createEffect__Q34Game11ElecOtakara3ObjFv
	.4byte setupEffect__Q34Game11ElecOtakara3ObjFv
	.4byte startChargeEffect__Q34Game11ElecOtakara3ObjFv
	.4byte finishChargeEffect__Q34Game11ElecOtakara3ObjFv
	.4byte createDisChargeEffect__Q34Game11ElecOtakara3ObjFv
	.4byte effectDrawOn__Q34Game11ElecOtakara3ObjFv
	.4byte effectDrawOff__Q34Game11ElecOtakara3ObjFv
	.4byte startEscapeSE__Q34Game11OtakaraBase3ObjFv
	.4byte startDisChargeSE__Q34Game11ElecOtakara3ObjFv
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

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051C320:
	.float 0.0
lbl_8051C324:
	.float 1.0
.balign 4
lbl_8051C328:
	.asciz "center"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game11ElecOtakara3ObjFv
__ct__Q34Game11ElecOtakara3ObjFv:
/* 802B9AD8 002B6A18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B9ADC 002B6A1C  7C 08 02 A6 */	mflr r0
/* 802B9AE0 002B6A20  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B9AE4 002B6A24  7C 80 07 35 */	extsh. r0, r4
/* 802B9AE8 002B6A28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B9AEC 002B6A2C  7C 7F 1B 78 */	mr r31, r3
/* 802B9AF0 002B6A30  41 82 00 24 */	beq lbl_802B9B14
/* 802B9AF4 002B6A34  38 1F 02 F8 */	addi r0, r31, 0x2f8
/* 802B9AF8 002B6A38  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802B9AFC 002B6A3C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802B9B00 002B6A40  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802B9B04 002B6A44  38 00 00 00 */	li r0, 0
/* 802B9B08 002B6A48  90 7F 02 F8 */	stw r3, 0x2f8(r31)
/* 802B9B0C 002B6A4C  90 1F 02 FC */	stw r0, 0x2fc(r31)
/* 802B9B10 002B6A50  90 1F 03 00 */	stw r0, 0x300(r31)
lbl_802B9B14:
/* 802B9B14 002B6A54  7F E3 FB 78 */	mr r3, r31
/* 802B9B18 002B6A58  38 80 00 00 */	li r4, 0
/* 802B9B1C 002B6A5C  4B FF C7 31 */	bl __ct__Q34Game11OtakaraBase3ObjFv
/* 802B9B20 002B6A60  3C 60 80 4D */	lis r3, __vt__Q34Game11ElecOtakara3Obj@ha
/* 802B9B24 002B6A64  38 1F 02 F8 */	addi r0, r31, 0x2f8
/* 802B9B28 002B6A68  38 A3 02 48 */	addi r5, r3, __vt__Q34Game11ElecOtakara3Obj@l
/* 802B9B2C 002B6A6C  7F E3 FB 78 */	mr r3, r31
/* 802B9B30 002B6A70  90 BF 00 00 */	stw r5, 0(r31)
/* 802B9B34 002B6A74  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802B9B38 002B6A78  38 A5 03 24 */	addi r5, r5, 0x324
/* 802B9B3C 002B6A7C  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802B9B40 002B6A80  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802B9B44 002B6A84  90 A4 00 00 */	stw r5, 0(r4)
/* 802B9B48 002B6A88  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802B9B4C 002B6A8C  7C 04 00 50 */	subf r0, r4, r0
/* 802B9B50 002B6A90  90 04 00 0C */	stw r0, 0xc(r4)
/* 802B9B54 002B6A94  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B9B58 002B6A98  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 802B9B5C 002B6A9C  7D 89 03 A6 */	mtctr r12
/* 802B9B60 002B6AA0  4E 80 04 21 */	bctrl 
/* 802B9B64 002B6AA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B9B68 002B6AA8  7F E3 FB 78 */	mr r3, r31
/* 802B9B6C 002B6AAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B9B70 002B6AB0  7C 08 03 A6 */	mtlr r0
/* 802B9B74 002B6AB4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9B78 002B6AB8  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game11ElecOtakara3ObjFv
changeMaterial__Q34Game11ElecOtakara3ObjFv:
/* 802B9B7C 002B6ABC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B9B80 002B6AC0  7C 08 02 A6 */	mflr r0
/* 802B9B84 002B6AC4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B9B88 002B6AC8  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802B9B8C 002B6ACC  7C 7B 1B 78 */	mr r27, r3
/* 802B9B90 002B6AD0  80 63 01 80 */	lwz r3, 0x180(r3)
/* 802B9B94 002B6AD4  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 802B9B98 002B6AD8  81 83 00 00 */	lwz r12, 0(r3)
/* 802B9B9C 002B6ADC  83 A4 00 08 */	lwz r29, 8(r4)
/* 802B9BA0 002B6AE0  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 802B9BA4 002B6AE4  83 DD 00 04 */	lwz r30, 4(r29)
/* 802B9BA8 002B6AE8  7D 89 03 A6 */	mtctr r12
/* 802B9BAC 002B6AEC  4E 80 04 21 */	bctrl 
/* 802B9BB0 002B6AF0  7C 7F 1B 78 */	mr r31, r3
/* 802B9BB4 002B6AF4  7F A3 EB 78 */	mr r3, r29
/* 802B9BB8 002B6AF8  81 9D 00 00 */	lwz r12, 0(r29)
/* 802B9BBC 002B6AFC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802B9BC0 002B6B00  7D 89 03 A6 */	mtctr r12
/* 802B9BC4 002B6B04  4E 80 04 21 */	bctrl 
/* 802B9BC8 002B6B08  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 802B9BCC 002B6B0C  3C 60 80 51 */	lis r3, j3dSys@ha
/* 802B9BD0 002B6B10  88 1F 00 00 */	lbz r0, 0(r31)
/* 802B9BD4 002B6B14  3B 63 F2 30 */	addi r27, r3, j3dSys@l
/* 802B9BD8 002B6B18  80 64 00 08 */	lwz r3, 8(r4)
/* 802B9BDC 002B6B1C  3B 80 00 00 */	li r28, 0
/* 802B9BE0 002B6B20  80 63 00 04 */	lwz r3, 4(r3)
/* 802B9BE4 002B6B24  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 802B9BE8 002B6B28  80 64 00 04 */	lwz r3, 4(r4)
/* 802B9BEC 002B6B2C  98 03 00 00 */	stb r0, 0(r3)
/* 802B9BF0 002B6B30  88 1F 00 01 */	lbz r0, 1(r31)
/* 802B9BF4 002B6B34  98 03 00 01 */	stb r0, 1(r3)
/* 802B9BF8 002B6B38  A0 1F 00 02 */	lhz r0, 2(r31)
/* 802B9BFC 002B6B3C  B0 03 00 02 */	sth r0, 2(r3)
/* 802B9C00 002B6B40  A0 1F 00 04 */	lhz r0, 4(r31)
/* 802B9C04 002B6B44  B0 03 00 04 */	sth r0, 4(r3)
/* 802B9C08 002B6B48  88 1F 00 06 */	lbz r0, 6(r31)
/* 802B9C0C 002B6B4C  98 03 00 06 */	stb r0, 6(r3)
/* 802B9C10 002B6B50  88 1F 00 07 */	lbz r0, 7(r31)
/* 802B9C14 002B6B54  98 03 00 07 */	stb r0, 7(r3)
/* 802B9C18 002B6B58  88 1F 00 08 */	lbz r0, 8(r31)
/* 802B9C1C 002B6B5C  98 03 00 08 */	stb r0, 8(r3)
/* 802B9C20 002B6B60  88 1F 00 09 */	lbz r0, 9(r31)
/* 802B9C24 002B6B64  98 03 00 09 */	stb r0, 9(r3)
/* 802B9C28 002B6B68  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 802B9C2C 002B6B6C  B0 03 00 0A */	sth r0, 0xa(r3)
/* 802B9C30 002B6B70  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 802B9C34 002B6B74  90 03 00 0C */	stw r0, 0xc(r3)
/* 802B9C38 002B6B78  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 802B9C3C 002B6B7C  98 03 00 10 */	stb r0, 0x10(r3)
/* 802B9C40 002B6B80  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 802B9C44 002B6B84  98 03 00 11 */	stb r0, 0x11(r3)
/* 802B9C48 002B6B88  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 802B9C4C 002B6B8C  98 03 00 12 */	stb r0, 0x12(r3)
/* 802B9C50 002B6B90  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 802B9C54 002B6B94  98 03 00 13 */	stb r0, 0x13(r3)
/* 802B9C58 002B6B98  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 802B9C5C 002B6B9C  98 03 00 14 */	stb r0, 0x14(r3)
/* 802B9C60 002B6BA0  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 802B9C64 002B6BA4  98 03 00 15 */	stb r0, 0x15(r3)
/* 802B9C68 002B6BA8  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 802B9C6C 002B6BAC  98 03 00 16 */	stb r0, 0x16(r3)
/* 802B9C70 002B6BB0  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 802B9C74 002B6BB4  98 03 00 17 */	stb r0, 0x17(r3)
/* 802B9C78 002B6BB8  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 802B9C7C 002B6BBC  98 03 00 18 */	stb r0, 0x18(r3)
/* 802B9C80 002B6BC0  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 802B9C84 002B6BC4  98 03 00 19 */	stb r0, 0x19(r3)
/* 802B9C88 002B6BC8  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 802B9C8C 002B6BCC  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 802B9C90 002B6BD0  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 802B9C94 002B6BD4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802B9C98 002B6BD8  80 64 00 04 */	lwz r3, 4(r4)
/* 802B9C9C 002B6BDC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B9CA0 002B6BE0  7C 1F 02 14 */	add r0, r31, r0
/* 802B9CA4 002B6BE4  7C 03 00 50 */	subf r0, r3, r0
/* 802B9CA8 002B6BE8  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802B9CAC 002B6BEC  80 64 00 04 */	lwz r3, 4(r4)
/* 802B9CB0 002B6BF0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802B9CB4 002B6BF4  7C 1F 02 14 */	add r0, r31, r0
/* 802B9CB8 002B6BF8  7C 03 00 50 */	subf r0, r3, r0
/* 802B9CBC 002B6BFC  90 03 00 0C */	stw r0, 0xc(r3)
/* 802B9CC0 002B6C00  48 00 00 3C */	b lbl_802B9CFC
lbl_802B9CC4:
/* 802B9CC4 002B6C04  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 802B9CC8 002B6C08  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 802B9CCC 002B6C0C  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 802B9CD0 002B6C10  7C 84 1A 14 */	add r4, r4, r3
/* 802B9CD4 002B6C14  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 802B9CD8 002B6C18  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 802B9CDC 002B6C1C  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 802B9CE0 002B6C20  7C 63 00 2E */	lwzx r3, r3, r0
/* 802B9CE4 002B6C24  80 84 00 34 */	lwz r4, 0x34(r4)
/* 802B9CE8 002B6C28  81 83 00 00 */	lwz r12, 0(r3)
/* 802B9CEC 002B6C2C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802B9CF0 002B6C30  7D 89 03 A6 */	mtctr r12
/* 802B9CF4 002B6C34  4E 80 04 21 */	bctrl 
/* 802B9CF8 002B6C38  3B 9C 00 01 */	addi r28, r28, 1
lbl_802B9CFC:
/* 802B9CFC 002B6C3C  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 802B9D00 002B6C40  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 802B9D04 002B6C44  7C 03 00 40 */	cmplw r3, r0
/* 802B9D08 002B6C48  41 80 FF BC */	blt lbl_802B9CC4
/* 802B9D0C 002B6C4C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802B9D10 002B6C50  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B9D14 002B6C54  7C 08 03 A6 */	mtlr r0
/* 802B9D18 002B6C58  38 21 00 20 */	addi r1, r1, 0x20
/* 802B9D1C 002B6C5C  4E 80 00 20 */	blr 

.global interactCreature__Q34Game11ElecOtakara3ObjFPQ24Game8Creature
interactCreature__Q34Game11ElecOtakara3ObjFPQ24Game8Creature:
/* 802B9D20 002B6C60  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 802B9D24 002B6C64  7C 08 02 A6 */	mflr r0
/* 802B9D28 002B6C68  90 01 00 74 */	stw r0, 0x74(r1)
/* 802B9D2C 002B6C6C  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 802B9D30 002B6C70  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 802B9D34 002B6C74  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 802B9D38 002B6C78  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 802B9D3C 002B6C7C  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 802B9D40 002B6C80  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 802B9D44 002B6C84  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802B9D48 002B6C88  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802B9D4C 002B6C8C  81 84 00 00 */	lwz r12, 0(r4)
/* 802B9D50 002B6C90  7C 7E 1B 78 */	mr r30, r3
/* 802B9D54 002B6C94  7C 9F 23 78 */	mr r31, r4
/* 802B9D58 002B6C98  38 61 00 08 */	addi r3, r1, 8
/* 802B9D5C 002B6C9C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B9D60 002B6CA0  7D 89 03 A6 */	mtctr r12
/* 802B9D64 002B6CA4  4E 80 04 21 */	bctrl 
/* 802B9D68 002B6CA8  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 802B9D6C 002B6CAC  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802B9D70 002B6CB0  C0 21 00 08 */	lfs f1, 8(r1)
/* 802B9D74 002B6CB4  EF A2 00 28 */	fsubs f29, f2, f0
/* 802B9D78 002B6CB8  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 802B9D7C 002B6CBC  C3 C2 DF C0 */	lfs f30, lbl_8051C320@sda21(r2)
/* 802B9D80 002B6CC0  EF E1 00 28 */	fsubs f31, f1, f0
/* 802B9D84 002B6CC4  EC 3D 07 72 */	fmuls f1, f29, f29
/* 802B9D88 002B6CC8  EC 1F F7 FA */	fmadds f0, f31, f31, f30
/* 802B9D8C 002B6CCC  EC 21 00 2A */	fadds f1, f1, f0
/* 802B9D90 002B6CD0  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 802B9D94 002B6CD4  40 81 00 14 */	ble lbl_802B9DA8
/* 802B9D98 002B6CD8  40 81 00 14 */	ble lbl_802B9DAC
/* 802B9D9C 002B6CDC  FC 00 08 34 */	frsqrte f0, f1
/* 802B9DA0 002B6CE0  EC 20 00 72 */	fmuls f1, f0, f1
/* 802B9DA4 002B6CE4  48 00 00 08 */	b lbl_802B9DAC
lbl_802B9DA8:
/* 802B9DA8 002B6CE8  FC 20 F0 90 */	fmr f1, f30
lbl_802B9DAC:
/* 802B9DAC 002B6CEC  C0 02 DF C0 */	lfs f0, lbl_8051C320@sda21(r2)
/* 802B9DB0 002B6CF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B9DB4 002B6CF4  40 81 00 18 */	ble lbl_802B9DCC
/* 802B9DB8 002B6CF8  C0 02 DF C4 */	lfs f0, lbl_8051C324@sda21(r2)
/* 802B9DBC 002B6CFC  EC 00 08 24 */	fdivs f0, f0, f1
/* 802B9DC0 002B6D00  EF FF 00 32 */	fmuls f31, f31, f0
/* 802B9DC4 002B6D04  EF DE 00 32 */	fmuls f30, f30, f0
/* 802B9DC8 002B6D08  EF BD 00 32 */	fmuls f29, f29, f0
lbl_802B9DCC:
/* 802B9DCC 002B6D0C  7F E3 FB 78 */	mr r3, r31
/* 802B9DD0 002B6D10  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 802B9DD4 002B6D14  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B9DD8 002B6D18  C0 04 04 4C */	lfs f0, 0x44c(r4)
/* 802B9DDC 002B6D1C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802B9DE0 002B6D20  EF FF 00 32 */	fmuls f31, f31, f0
/* 802B9DE4 002B6D24  EF BD 00 32 */	fmuls f29, f29, f0
/* 802B9DE8 002B6D28  7D 89 03 A6 */	mtctr r12
/* 802B9DEC 002B6D2C  4E 80 04 21 */	bctrl 
/* 802B9DF0 002B6D30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B9DF4 002B6D34  41 82 00 0C */	beq lbl_802B9E00
/* 802B9DF8 002B6D38  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802B9DFC 002B6D3C  C3 C3 04 74 */	lfs f30, 0x474(r3)
lbl_802B9E00:
/* 802B9E00 002B6D40  80 DE 00 C0 */	lwz r6, 0xc0(r30)
/* 802B9E04 002B6D44  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 802B9E08 002B6D48  3C 80 80 4B */	lis r4, __vt__Q24Game12InteractWind@ha
/* 802B9E0C 002B6D4C  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractDenki@ha
/* 802B9E10 002B6D50  C0 06 06 04 */	lfs f0, 0x604(r6)
/* 802B9E14 002B6D54  38 C5 A3 00 */	addi r6, r5, __vt__Q24Game11Interaction@l
/* 802B9E18 002B6D58  38 A4 49 74 */	addi r5, r4, __vt__Q24Game12InteractWind@l
/* 802B9E1C 002B6D5C  38 03 49 08 */	addi r0, r3, __vt__Q24Game13InteractDenki@l
/* 802B9E20 002B6D60  90 C1 00 14 */	stw r6, 0x14(r1)
/* 802B9E24 002B6D64  7F E3 FB 78 */	mr r3, r31
/* 802B9E28 002B6D68  38 81 00 14 */	addi r4, r1, 0x14
/* 802B9E2C 002B6D6C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802B9E30 002B6D70  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802B9E34 002B6D74  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802B9E38 002B6D78  D3 E1 00 20 */	stfs f31, 0x20(r1)
/* 802B9E3C 002B6D7C  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 802B9E40 002B6D80  D3 A1 00 28 */	stfs f29, 0x28(r1)
/* 802B9E44 002B6D84  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B9E48 002B6D88  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B9E4C 002B6D8C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802B9E50 002B6D90  7D 89 03 A6 */	mtctr r12
/* 802B9E54 002B6D94  4E 80 04 21 */	bctrl 
/* 802B9E58 002B6D98  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 802B9E5C 002B6D9C  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 802B9E60 002B6DA0  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 802B9E64 002B6DA4  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 802B9E68 002B6DA8  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 802B9E6C 002B6DAC  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 802B9E70 002B6DB0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802B9E74 002B6DB4  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802B9E78 002B6DB8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802B9E7C 002B6DBC  7C 08 03 A6 */	mtlr r0
/* 802B9E80 002B6DC0  38 21 00 70 */	addi r1, r1, 0x70
/* 802B9E84 002B6DC4  4E 80 00 20 */	blr 

.global createEffect__Q34Game11ElecOtakara3ObjFv
createEffect__Q34Game11ElecOtakara3ObjFv:
/* 802B9E88 002B6DC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B9E8C 002B6DCC  7C 08 02 A6 */	mflr r0
/* 802B9E90 002B6DD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B9E94 002B6DD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B9E98 002B6DD8  93 C1 00 08 */	stw r30, 8(r1)
/* 802B9E9C 002B6DDC  7C 7E 1B 78 */	mr r30, r3
/* 802B9EA0 002B6DE0  38 60 00 2C */	li r3, 0x2c
/* 802B9EA4 002B6DE4  4B D6 A0 01 */	bl __nw__FUl
/* 802B9EA8 002B6DE8  7C 7F 1B 79 */	or. r31, r3, r3
/* 802B9EAC 002B6DEC  41 82 00 20 */	beq lbl_802B9ECC
/* 802B9EB0 002B6DF0  38 80 00 00 */	li r4, 0
/* 802B9EB4 002B6DF4  38 A0 01 2C */	li r5, 0x12c
/* 802B9EB8 002B6DF8  38 C0 01 2D */	li r6, 0x12d
/* 802B9EBC 002B6DFC  48 0F 69 41 */	bl __ct__Q23efx11TChaseMtxT2FPA4_fUsUs
/* 802B9EC0 002B6E00  3C 60 80 4D */	lis r3, __vt__Q23efx14TOtaChargeelec@ha
/* 802B9EC4 002B6E04  38 03 02 2C */	addi r0, r3, __vt__Q23efx14TOtaChargeelec@l
/* 802B9EC8 002B6E08  90 1F 00 00 */	stw r0, 0(r31)
lbl_802B9ECC:
/* 802B9ECC 002B6E0C  93 FE 02 F4 */	stw r31, 0x2f4(r30)
/* 802B9ED0 002B6E10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B9ED4 002B6E14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B9ED8 002B6E18  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B9EDC 002B6E1C  7C 08 03 A6 */	mtlr r0
/* 802B9EE0 002B6E20  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9EE4 002B6E24  4E 80 00 20 */	blr 

.global setupEffect__Q34Game11ElecOtakara3ObjFv
setupEffect__Q34Game11ElecOtakara3ObjFv:
/* 802B9EE8 002B6E28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B9EEC 002B6E2C  7C 08 02 A6 */	mflr r0
/* 802B9EF0 002B6E30  38 82 DF C8 */	addi r4, r2, lbl_8051C328@sda21
/* 802B9EF4 002B6E34  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B9EF8 002B6E38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B9EFC 002B6E3C  7C 7F 1B 78 */	mr r31, r3
/* 802B9F00 002B6E40  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802B9F04 002B6E44  48 18 50 E1 */	bl getJoint__Q28SysShape5ModelFPc
/* 802B9F08 002B6E48  48 16 F9 99 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B9F0C 002B6E4C  7C 60 1B 78 */	mr r0, r3
/* 802B9F10 002B6E50  80 7F 02 F4 */	lwz r3, 0x2f4(r31)
/* 802B9F14 002B6E54  7C 04 03 78 */	mr r4, r0
/* 802B9F18 002B6E58  48 0F 69 E9 */	bl setMtxptr__Q23efx11TChaseMtxT2FPA4_f
/* 802B9F1C 002B6E5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B9F20 002B6E60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B9F24 002B6E64  7C 08 03 A6 */	mtlr r0
/* 802B9F28 002B6E68  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9F2C 002B6E6C  4E 80 00 20 */	blr 

.global startChargeEffect__Q34Game11ElecOtakara3ObjFv
startChargeEffect__Q34Game11ElecOtakara3ObjFv:
/* 802B9F30 002B6E70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B9F34 002B6E74  7C 08 02 A6 */	mflr r0
/* 802B9F38 002B6E78  38 80 00 00 */	li r4, 0
/* 802B9F3C 002B6E7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B9F40 002B6E80  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B9F44 002B6E84  81 83 00 00 */	lwz r12, 0(r3)
/* 802B9F48 002B6E88  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B9F4C 002B6E8C  7D 89 03 A6 */	mtctr r12
/* 802B9F50 002B6E90  4E 80 04 21 */	bctrl 
/* 802B9F54 002B6E94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B9F58 002B6E98  7C 08 03 A6 */	mtlr r0
/* 802B9F5C 002B6E9C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9F60 002B6EA0  4E 80 00 20 */	blr 

.global finishChargeEffect__Q34Game11ElecOtakara3ObjFv
finishChargeEffect__Q34Game11ElecOtakara3ObjFv:
/* 802B9F64 002B6EA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B9F68 002B6EA8  7C 08 02 A6 */	mflr r0
/* 802B9F6C 002B6EAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B9F70 002B6EB0  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B9F74 002B6EB4  81 83 00 00 */	lwz r12, 0(r3)
/* 802B9F78 002B6EB8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802B9F7C 002B6EBC  7D 89 03 A6 */	mtctr r12
/* 802B9F80 002B6EC0  4E 80 04 21 */	bctrl 
/* 802B9F84 002B6EC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B9F88 002B6EC8  7C 08 03 A6 */	mtlr r0
/* 802B9F8C 002B6ECC  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9F90 002B6ED0  4E 80 00 20 */	blr 

.global createDisChargeEffect__Q34Game11ElecOtakara3ObjFv
createDisChargeEffect__Q34Game11ElecOtakara3ObjFv:
/* 802B9F94 002B6ED4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802B9F98 002B6ED8  7C 08 02 A6 */	mflr r0
/* 802B9F9C 002B6EDC  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 802B9FA0 002B6EE0  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple3@ha
/* 802B9FA4 002B6EE4  90 01 00 34 */	stw r0, 0x34(r1)
/* 802B9FA8 002B6EE8  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802B9FAC 002B6EEC  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 802B9FB0 002B6EF0  39 46 A7 F8 */	addi r10, r6, __vt__Q23efx5TBase@l
/* 802B9FB4 002B6EF4  90 01 00 08 */	stw r0, 8(r1)
/* 802B9FB8 002B6EF8  39 25 6A 50 */	addi r9, r5, __vt__Q23efx8TSimple3@l
/* 802B9FBC 002B6EFC  3C 80 80 4D */	lis r4, __vt__Q23efx8TOtaElec@ha
/* 802B9FC0 002B6F00  39 00 01 34 */	li r8, 0x134
/* 802B9FC4 002B6F04  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802B9FC8 002B6F08  38 04 02 18 */	addi r0, r4, __vt__Q23efx8TOtaElec@l
/* 802B9FCC 002B6F0C  38 E0 01 35 */	li r7, 0x135
/* 802B9FD0 002B6F10  38 C0 01 36 */	li r6, 0x136
/* 802B9FD4 002B6F14  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802B9FD8 002B6F18  38 A0 00 00 */	li r5, 0
/* 802B9FDC 002B6F1C  38 81 00 08 */	addi r4, r1, 8
/* 802B9FE0 002B6F20  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802B9FE4 002B6F24  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802B9FE8 002B6F28  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 802B9FEC 002B6F2C  38 61 00 18 */	addi r3, r1, 0x18
/* 802B9FF0 002B6F30  91 41 00 18 */	stw r10, 0x18(r1)
/* 802B9FF4 002B6F34  91 21 00 18 */	stw r9, 0x18(r1)
/* 802B9FF8 002B6F38  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802B9FFC 002B6F3C  B1 01 00 1C */	sth r8, 0x1c(r1)
/* 802BA000 002B6F40  B0 E1 00 1E */	sth r7, 0x1e(r1)
/* 802BA004 002B6F44  B0 C1 00 20 */	sth r6, 0x20(r1)
/* 802BA008 002B6F48  90 A1 00 24 */	stw r5, 0x24(r1)
/* 802BA00C 002B6F4C  90 A1 00 28 */	stw r5, 0x28(r1)
/* 802BA010 002B6F50  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 802BA014 002B6F54  90 01 00 18 */	stw r0, 0x18(r1)
/* 802BA018 002B6F58  48 0F 50 A5 */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 802BA01C 002B6F5C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802BA020 002B6F60  7C 08 03 A6 */	mtlr r0
/* 802BA024 002B6F64  38 21 00 30 */	addi r1, r1, 0x30
/* 802BA028 002B6F68  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game11ElecOtakara3ObjFv
effectDrawOn__Q34Game11ElecOtakara3ObjFv:
/* 802BA02C 002B6F6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BA030 002B6F70  7C 08 02 A6 */	mflr r0
/* 802BA034 002B6F74  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BA038 002B6F78  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802BA03C 002B6F7C  81 83 00 00 */	lwz r12, 0(r3)
/* 802BA040 002B6F80  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802BA044 002B6F84  7D 89 03 A6 */	mtctr r12
/* 802BA048 002B6F88  4E 80 04 21 */	bctrl 
/* 802BA04C 002B6F8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BA050 002B6F90  7C 08 03 A6 */	mtlr r0
/* 802BA054 002B6F94  38 21 00 10 */	addi r1, r1, 0x10
/* 802BA058 002B6F98  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game11ElecOtakara3ObjFv
effectDrawOff__Q34Game11ElecOtakara3ObjFv:
/* 802BA05C 002B6F9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BA060 002B6FA0  7C 08 02 A6 */	mflr r0
/* 802BA064 002B6FA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BA068 002B6FA8  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802BA06C 002B6FAC  81 83 00 00 */	lwz r12, 0(r3)
/* 802BA070 002B6FB0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802BA074 002B6FB4  7D 89 03 A6 */	mtctr r12
/* 802BA078 002B6FB8  4E 80 04 21 */	bctrl 
/* 802BA07C 002B6FBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BA080 002B6FC0  7C 08 03 A6 */	mtlr r0
/* 802BA084 002B6FC4  38 21 00 10 */	addi r1, r1, 0x10
/* 802BA088 002B6FC8  4E 80 00 20 */	blr 

.global startDisChargeSE__Q34Game11ElecOtakara3ObjFv
startDisChargeSE__Q34Game11ElecOtakara3ObjFv:
/* 802BA08C 002B6FCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BA090 002B6FD0  7C 08 02 A6 */	mflr r0
/* 802BA094 002B6FD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BA098 002B6FD8  81 83 00 00 */	lwz r12, 0(r3)
/* 802BA09C 002B6FDC  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802BA0A0 002B6FE0  7D 89 03 A6 */	mtctr r12
/* 802BA0A4 002B6FE4  4E 80 04 21 */	bctrl 
/* 802BA0A8 002B6FE8  81 83 00 00 */	lwz r12, 0(r3)
/* 802BA0AC 002B6FEC  38 80 51 66 */	li r4, 0x5166
/* 802BA0B0 002B6FF0  38 A0 00 00 */	li r5, 0
/* 802BA0B4 002B6FF4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802BA0B8 002B6FF8  7D 89 03 A6 */	mtctr r12
/* 802BA0BC 002B6FFC  4E 80 04 21 */	bctrl 
/* 802BA0C0 002B7000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BA0C4 002B7004  7C 08 03 A6 */	mtlr r0
/* 802BA0C8 002B7008  38 21 00 10 */	addi r1, r1, 0x10
/* 802BA0CC 002B700C  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game11ElecOtakara3ObjFv
getEnemyTypeID__Q34Game11ElecOtakara3ObjFv:
/* 802BA0D0 002B7010  38 60 00 3E */	li r3, 0x3e
/* 802BA0D4 002B7014  4E 80 00 20 */	blr 
