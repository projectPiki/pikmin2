.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q23efx7TOtaWat
__vt__Q23efx7TOtaWat:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple4FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.global __vt__Q23efx13TOtaChargewat
__vt__Q23efx13TOtaChargewat:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
.global __vt__Q34Game12WaterOtakara3Obj
__vt__Q34Game12WaterOtakara3Obj:
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
	.4byte __dt__Q34Game12WaterOtakara3ObjFv
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
	.4byte changeMaterial__Q34Game12WaterOtakara3ObjFv
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
	.4byte getEnemyTypeID__Q34Game12WaterOtakara3ObjFv
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
	.4byte interactCreature__Q34Game12WaterOtakara3ObjFPQ24Game8Creature
	.4byte createEffect__Q34Game12WaterOtakara3ObjFv
	.4byte setupEffect__Q34Game12WaterOtakara3ObjFv
	.4byte startChargeEffect__Q34Game12WaterOtakara3ObjFv
	.4byte finishChargeEffect__Q34Game12WaterOtakara3ObjFv
	.4byte createDisChargeEffect__Q34Game12WaterOtakara3ObjFv
	.4byte effectDrawOn__Q34Game12WaterOtakara3ObjFv
	.4byte effectDrawOff__Q34Game12WaterOtakara3ObjFv
	.4byte startEscapeSE__Q34Game11OtakaraBase3ObjFv
	.4byte startDisChargeSE__Q34Game12WaterOtakara3ObjFv
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

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 0x8
.global lbl_8051C310
lbl_8051C310:
	.4byte 0x63656E74
	.4byte 0x65720000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game12WaterOtakara3ObjFv
__ct__Q34Game12WaterOtakara3ObjFv:
/* 802B8A38 002B5978  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8A3C 002B597C  7C 08 02 A6 */	mflr r0
/* 802B8A40 002B5980  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8A44 002B5984  7C 80 07 35 */	extsh. r0, r4
/* 802B8A48 002B5988  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B8A4C 002B598C  7C 7F 1B 78 */	mr r31, r3
/* 802B8A50 002B5990  41 82 00 24 */	beq lbl_802B8A74
/* 802B8A54 002B5994  38 1F 02 F8 */	addi r0, r31, 0x2f8
/* 802B8A58 002B5998  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802B8A5C 002B599C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802B8A60 002B59A0  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802B8A64 002B59A4  38 00 00 00 */	li r0, 0
/* 802B8A68 002B59A8  90 7F 02 F8 */	stw r3, 0x2f8(r31)
/* 802B8A6C 002B59AC  90 1F 02 FC */	stw r0, 0x2fc(r31)
/* 802B8A70 002B59B0  90 1F 03 00 */	stw r0, 0x300(r31)
lbl_802B8A74:
/* 802B8A74 002B59B4  7F E3 FB 78 */	mr r3, r31
/* 802B8A78 002B59B8  38 80 00 00 */	li r4, 0
/* 802B8A7C 002B59BC  4B FF D7 D1 */	bl __ct__Q34Game11OtakaraBase3ObjFv
/* 802B8A80 002B59C0  3C 60 80 4D */	lis r3, __vt__Q34Game12WaterOtakara3Obj@ha
/* 802B8A84 002B59C4  38 1F 02 F8 */	addi r0, r31, 0x2f8
/* 802B8A88 002B59C8  38 A3 F9 68 */	addi r5, r3, __vt__Q34Game12WaterOtakara3Obj@l
/* 802B8A8C 002B59CC  7F E3 FB 78 */	mr r3, r31
/* 802B8A90 002B59D0  90 BF 00 00 */	stw r5, 0(r31)
/* 802B8A94 002B59D4  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802B8A98 002B59D8  38 A5 03 24 */	addi r5, r5, 0x324
/* 802B8A9C 002B59DC  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802B8AA0 002B59E0  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802B8AA4 002B59E4  90 A4 00 00 */	stw r5, 0(r4)
/* 802B8AA8 002B59E8  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802B8AAC 002B59EC  7C 04 00 50 */	subf r0, r4, r0
/* 802B8AB0 002B59F0  90 04 00 0C */	stw r0, 0xc(r4)
/* 802B8AB4 002B59F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B8AB8 002B59F8  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 802B8ABC 002B59FC  7D 89 03 A6 */	mtctr r12
/* 802B8AC0 002B5A00  4E 80 04 21 */	bctrl 
/* 802B8AC4 002B5A04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8AC8 002B5A08  7F E3 FB 78 */	mr r3, r31
/* 802B8ACC 002B5A0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B8AD0 002B5A10  7C 08 03 A6 */	mtlr r0
/* 802B8AD4 002B5A14  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8AD8 002B5A18  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game12WaterOtakara3ObjFv
changeMaterial__Q34Game12WaterOtakara3ObjFv:
/* 802B8ADC 002B5A1C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B8AE0 002B5A20  7C 08 02 A6 */	mflr r0
/* 802B8AE4 002B5A24  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B8AE8 002B5A28  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802B8AEC 002B5A2C  7C 7B 1B 78 */	mr r27, r3
/* 802B8AF0 002B5A30  80 63 01 80 */	lwz r3, 0x180(r3)
/* 802B8AF4 002B5A34  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 802B8AF8 002B5A38  81 83 00 00 */	lwz r12, 0(r3)
/* 802B8AFC 002B5A3C  83 A4 00 08 */	lwz r29, 8(r4)
/* 802B8B00 002B5A40  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 802B8B04 002B5A44  83 DD 00 04 */	lwz r30, 4(r29)
/* 802B8B08 002B5A48  7D 89 03 A6 */	mtctr r12
/* 802B8B0C 002B5A4C  4E 80 04 21 */	bctrl 
/* 802B8B10 002B5A50  7C 7F 1B 78 */	mr r31, r3
/* 802B8B14 002B5A54  7F A3 EB 78 */	mr r3, r29
/* 802B8B18 002B5A58  81 9D 00 00 */	lwz r12, 0(r29)
/* 802B8B1C 002B5A5C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802B8B20 002B5A60  7D 89 03 A6 */	mtctr r12
/* 802B8B24 002B5A64  4E 80 04 21 */	bctrl 
/* 802B8B28 002B5A68  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 802B8B2C 002B5A6C  3C 60 80 51 */	lis r3, j3dSys@ha
/* 802B8B30 002B5A70  88 1F 00 00 */	lbz r0, 0(r31)
/* 802B8B34 002B5A74  3B 63 F2 30 */	addi r27, r3, j3dSys@l
/* 802B8B38 002B5A78  80 64 00 08 */	lwz r3, 8(r4)
/* 802B8B3C 002B5A7C  3B 80 00 00 */	li r28, 0
/* 802B8B40 002B5A80  80 63 00 04 */	lwz r3, 4(r3)
/* 802B8B44 002B5A84  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 802B8B48 002B5A88  80 64 00 04 */	lwz r3, 4(r4)
/* 802B8B4C 002B5A8C  98 03 00 00 */	stb r0, 0(r3)
/* 802B8B50 002B5A90  88 1F 00 01 */	lbz r0, 1(r31)
/* 802B8B54 002B5A94  98 03 00 01 */	stb r0, 1(r3)
/* 802B8B58 002B5A98  A0 1F 00 02 */	lhz r0, 2(r31)
/* 802B8B5C 002B5A9C  B0 03 00 02 */	sth r0, 2(r3)
/* 802B8B60 002B5AA0  A0 1F 00 04 */	lhz r0, 4(r31)
/* 802B8B64 002B5AA4  B0 03 00 04 */	sth r0, 4(r3)
/* 802B8B68 002B5AA8  88 1F 00 06 */	lbz r0, 6(r31)
/* 802B8B6C 002B5AAC  98 03 00 06 */	stb r0, 6(r3)
/* 802B8B70 002B5AB0  88 1F 00 07 */	lbz r0, 7(r31)
/* 802B8B74 002B5AB4  98 03 00 07 */	stb r0, 7(r3)
/* 802B8B78 002B5AB8  88 1F 00 08 */	lbz r0, 8(r31)
/* 802B8B7C 002B5ABC  98 03 00 08 */	stb r0, 8(r3)
/* 802B8B80 002B5AC0  88 1F 00 09 */	lbz r0, 9(r31)
/* 802B8B84 002B5AC4  98 03 00 09 */	stb r0, 9(r3)
/* 802B8B88 002B5AC8  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 802B8B8C 002B5ACC  B0 03 00 0A */	sth r0, 0xa(r3)
/* 802B8B90 002B5AD0  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 802B8B94 002B5AD4  90 03 00 0C */	stw r0, 0xc(r3)
/* 802B8B98 002B5AD8  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 802B8B9C 002B5ADC  98 03 00 10 */	stb r0, 0x10(r3)
/* 802B8BA0 002B5AE0  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 802B8BA4 002B5AE4  98 03 00 11 */	stb r0, 0x11(r3)
/* 802B8BA8 002B5AE8  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 802B8BAC 002B5AEC  98 03 00 12 */	stb r0, 0x12(r3)
/* 802B8BB0 002B5AF0  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 802B8BB4 002B5AF4  98 03 00 13 */	stb r0, 0x13(r3)
/* 802B8BB8 002B5AF8  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 802B8BBC 002B5AFC  98 03 00 14 */	stb r0, 0x14(r3)
/* 802B8BC0 002B5B00  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 802B8BC4 002B5B04  98 03 00 15 */	stb r0, 0x15(r3)
/* 802B8BC8 002B5B08  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 802B8BCC 002B5B0C  98 03 00 16 */	stb r0, 0x16(r3)
/* 802B8BD0 002B5B10  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 802B8BD4 002B5B14  98 03 00 17 */	stb r0, 0x17(r3)
/* 802B8BD8 002B5B18  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 802B8BDC 002B5B1C  98 03 00 18 */	stb r0, 0x18(r3)
/* 802B8BE0 002B5B20  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 802B8BE4 002B5B24  98 03 00 19 */	stb r0, 0x19(r3)
/* 802B8BE8 002B5B28  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 802B8BEC 002B5B2C  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 802B8BF0 002B5B30  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 802B8BF4 002B5B34  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802B8BF8 002B5B38  80 64 00 04 */	lwz r3, 4(r4)
/* 802B8BFC 002B5B3C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B8C00 002B5B40  7C 1F 02 14 */	add r0, r31, r0
/* 802B8C04 002B5B44  7C 03 00 50 */	subf r0, r3, r0
/* 802B8C08 002B5B48  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802B8C0C 002B5B4C  80 64 00 04 */	lwz r3, 4(r4)
/* 802B8C10 002B5B50  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802B8C14 002B5B54  7C 1F 02 14 */	add r0, r31, r0
/* 802B8C18 002B5B58  7C 03 00 50 */	subf r0, r3, r0
/* 802B8C1C 002B5B5C  90 03 00 0C */	stw r0, 0xc(r3)
/* 802B8C20 002B5B60  48 00 00 3C */	b lbl_802B8C5C
lbl_802B8C24:
/* 802B8C24 002B5B64  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 802B8C28 002B5B68  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 802B8C2C 002B5B6C  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 802B8C30 002B5B70  7C 84 1A 14 */	add r4, r4, r3
/* 802B8C34 002B5B74  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 802B8C38 002B5B78  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 802B8C3C 002B5B7C  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 802B8C40 002B5B80  7C 63 00 2E */	lwzx r3, r3, r0
/* 802B8C44 002B5B84  80 84 00 34 */	lwz r4, 0x34(r4)
/* 802B8C48 002B5B88  81 83 00 00 */	lwz r12, 0(r3)
/* 802B8C4C 002B5B8C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802B8C50 002B5B90  7D 89 03 A6 */	mtctr r12
/* 802B8C54 002B5B94  4E 80 04 21 */	bctrl 
/* 802B8C58 002B5B98  3B 9C 00 01 */	addi r28, r28, 1
lbl_802B8C5C:
/* 802B8C5C 002B5B9C  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 802B8C60 002B5BA0  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 802B8C64 002B5BA4  7C 03 00 40 */	cmplw r3, r0
/* 802B8C68 002B5BA8  41 80 FF BC */	blt lbl_802B8C24
/* 802B8C6C 002B5BAC  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802B8C70 002B5BB0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B8C74 002B5BB4  7C 08 03 A6 */	mtlr r0
/* 802B8C78 002B5BB8  38 21 00 20 */	addi r1, r1, 0x20
/* 802B8C7C 002B5BBC  4E 80 00 20 */	blr 

.global interactCreature__Q34Game12WaterOtakara3ObjFPQ24Game8Creature
interactCreature__Q34Game12WaterOtakara3ObjFPQ24Game8Creature:
/* 802B8C80 002B5BC0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B8C84 002B5BC4  7C 08 02 A6 */	mflr r0
/* 802B8C88 002B5BC8  3C C0 80 4B */	lis r6, __vt__Q24Game11Interaction@ha
/* 802B8C8C 002B5BCC  7C 88 23 78 */	mr r8, r4
/* 802B8C90 002B5BD0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B8C94 002B5BD4  3C A0 80 4B */	lis r5, __vt__Q24Game14InteractBubble@ha
/* 802B8C98 002B5BD8  38 C6 A3 00 */	addi r6, r6, __vt__Q24Game11Interaction@l
/* 802B8C9C 002B5BDC  38 81 00 08 */	addi r4, r1, 8
/* 802B8CA0 002B5BE0  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 802B8CA4 002B5BE4  38 05 48 30 */	addi r0, r5, __vt__Q24Game14InteractBubble@l
/* 802B8CA8 002B5BE8  C0 07 06 04 */	lfs f0, 0x604(r7)
/* 802B8CAC 002B5BEC  90 C1 00 08 */	stw r6, 8(r1)
/* 802B8CB0 002B5BF0  90 61 00 0C */	stw r3, 0xc(r1)
/* 802B8CB4 002B5BF4  7D 03 43 78 */	mr r3, r8
/* 802B8CB8 002B5BF8  90 01 00 08 */	stw r0, 8(r1)
/* 802B8CBC 002B5BFC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802B8CC0 002B5C00  81 88 00 00 */	lwz r12, 0(r8)
/* 802B8CC4 002B5C04  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802B8CC8 002B5C08  7D 89 03 A6 */	mtctr r12
/* 802B8CCC 002B5C0C  4E 80 04 21 */	bctrl 
/* 802B8CD0 002B5C10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B8CD4 002B5C14  7C 08 03 A6 */	mtlr r0
/* 802B8CD8 002B5C18  38 21 00 20 */	addi r1, r1, 0x20
/* 802B8CDC 002B5C1C  4E 80 00 20 */	blr 

.global createEffect__Q34Game12WaterOtakara3ObjFv
createEffect__Q34Game12WaterOtakara3ObjFv:
/* 802B8CE0 002B5C20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8CE4 002B5C24  7C 08 02 A6 */	mflr r0
/* 802B8CE8 002B5C28  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8CEC 002B5C2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B8CF0 002B5C30  93 C1 00 08 */	stw r30, 8(r1)
/* 802B8CF4 002B5C34  7C 7E 1B 78 */	mr r30, r3
/* 802B8CF8 002B5C38  38 60 00 2C */	li r3, 0x2c
/* 802B8CFC 002B5C3C  4B D6 B1 A9 */	bl __nw__FUl
/* 802B8D00 002B5C40  7C 7F 1B 79 */	or. r31, r3, r3
/* 802B8D04 002B5C44  41 82 00 20 */	beq lbl_802B8D24
/* 802B8D08 002B5C48  38 80 00 00 */	li r4, 0
/* 802B8D0C 002B5C4C  38 A0 01 32 */	li r5, 0x132
/* 802B8D10 002B5C50  38 C0 01 33 */	li r6, 0x133
/* 802B8D14 002B5C54  48 0F 7A E9 */	bl __ct__Q23efx11TChaseMtxT2FPA4_fUsUs
/* 802B8D18 002B5C58  3C 60 80 4D */	lis r3, __vt__Q23efx13TOtaChargewat@ha
/* 802B8D1C 002B5C5C  38 03 F9 4C */	addi r0, r3, __vt__Q23efx13TOtaChargewat@l
/* 802B8D20 002B5C60  90 1F 00 00 */	stw r0, 0(r31)
lbl_802B8D24:
/* 802B8D24 002B5C64  93 FE 02 F4 */	stw r31, 0x2f4(r30)
/* 802B8D28 002B5C68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8D2C 002B5C6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B8D30 002B5C70  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B8D34 002B5C74  7C 08 03 A6 */	mtlr r0
/* 802B8D38 002B5C78  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8D3C 002B5C7C  4E 80 00 20 */	blr 

.global setupEffect__Q34Game12WaterOtakara3ObjFv
setupEffect__Q34Game12WaterOtakara3ObjFv:
/* 802B8D40 002B5C80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8D44 002B5C84  7C 08 02 A6 */	mflr r0
/* 802B8D48 002B5C88  38 82 DF B0 */	addi r4, r2, lbl_8051C310@sda21
/* 802B8D4C 002B5C8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8D50 002B5C90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B8D54 002B5C94  7C 7F 1B 78 */	mr r31, r3
/* 802B8D58 002B5C98  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802B8D5C 002B5C9C  48 18 62 89 */	bl getJoint__Q28SysShape5ModelFPc
/* 802B8D60 002B5CA0  48 17 0B 41 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B8D64 002B5CA4  7C 60 1B 78 */	mr r0, r3
/* 802B8D68 002B5CA8  80 7F 02 F4 */	lwz r3, 0x2f4(r31)
/* 802B8D6C 002B5CAC  7C 04 03 78 */	mr r4, r0
/* 802B8D70 002B5CB0  48 0F 7B 91 */	bl setMtxptr__Q23efx11TChaseMtxT2FPA4_f
/* 802B8D74 002B5CB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8D78 002B5CB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B8D7C 002B5CBC  7C 08 03 A6 */	mtlr r0
/* 802B8D80 002B5CC0  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8D84 002B5CC4  4E 80 00 20 */	blr 

.global startChargeEffect__Q34Game12WaterOtakara3ObjFv
startChargeEffect__Q34Game12WaterOtakara3ObjFv:
/* 802B8D88 002B5CC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8D8C 002B5CCC  7C 08 02 A6 */	mflr r0
/* 802B8D90 002B5CD0  38 80 00 00 */	li r4, 0
/* 802B8D94 002B5CD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8D98 002B5CD8  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B8D9C 002B5CDC  81 83 00 00 */	lwz r12, 0(r3)
/* 802B8DA0 002B5CE0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B8DA4 002B5CE4  7D 89 03 A6 */	mtctr r12
/* 802B8DA8 002B5CE8  4E 80 04 21 */	bctrl 
/* 802B8DAC 002B5CEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8DB0 002B5CF0  7C 08 03 A6 */	mtlr r0
/* 802B8DB4 002B5CF4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8DB8 002B5CF8  4E 80 00 20 */	blr 

.global finishChargeEffect__Q34Game12WaterOtakara3ObjFv
finishChargeEffect__Q34Game12WaterOtakara3ObjFv:
/* 802B8DBC 002B5CFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8DC0 002B5D00  7C 08 02 A6 */	mflr r0
/* 802B8DC4 002B5D04  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8DC8 002B5D08  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B8DCC 002B5D0C  81 83 00 00 */	lwz r12, 0(r3)
/* 802B8DD0 002B5D10  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802B8DD4 002B5D14  7D 89 03 A6 */	mtctr r12
/* 802B8DD8 002B5D18  4E 80 04 21 */	bctrl 
/* 802B8DDC 002B5D1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8DE0 002B5D20  7C 08 03 A6 */	mtlr r0
/* 802B8DE4 002B5D24  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8DE8 002B5D28  4E 80 00 20 */	blr 

.global createDisChargeEffect__Q34Game12WaterOtakara3ObjFv
createDisChargeEffect__Q34Game12WaterOtakara3ObjFv:
/* 802B8DEC 002B5D2C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802B8DF0 002B5D30  7C 08 02 A6 */	mflr r0
/* 802B8DF4 002B5D34  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 802B8DF8 002B5D38  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple4@ha
/* 802B8DFC 002B5D3C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802B8E00 002B5D40  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802B8E04 002B5D44  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 802B8E08 002B5D48  39 66 A7 F8 */	addi r11, r6, __vt__Q23efx5TBase@l
/* 802B8E0C 002B5D4C  90 01 00 08 */	stw r0, 8(r1)
/* 802B8E10 002B5D50  39 45 6A 3C */	addi r10, r5, __vt__Q23efx8TSimple4@l
/* 802B8E14 002B5D54  3C 80 80 4D */	lis r4, __vt__Q23efx7TOtaWat@ha
/* 802B8E18 002B5D58  39 20 01 3E */	li r9, 0x13e
/* 802B8E1C 002B5D5C  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802B8E20 002B5D60  38 04 F9 38 */	addi r0, r4, __vt__Q23efx7TOtaWat@l
/* 802B8E24 002B5D64  39 00 01 3F */	li r8, 0x13f
/* 802B8E28 002B5D68  38 E0 01 40 */	li r7, 0x140
/* 802B8E2C 002B5D6C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802B8E30 002B5D70  38 C0 01 41 */	li r6, 0x141
/* 802B8E34 002B5D74  38 A0 00 00 */	li r5, 0
/* 802B8E38 002B5D78  38 81 00 08 */	addi r4, r1, 8
/* 802B8E3C 002B5D7C  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802B8E40 002B5D80  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802B8E44 002B5D84  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 802B8E48 002B5D88  38 61 00 18 */	addi r3, r1, 0x18
/* 802B8E4C 002B5D8C  91 61 00 18 */	stw r11, 0x18(r1)
/* 802B8E50 002B5D90  91 41 00 18 */	stw r10, 0x18(r1)
/* 802B8E54 002B5D94  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802B8E58 002B5D98  B1 21 00 1C */	sth r9, 0x1c(r1)
/* 802B8E5C 002B5D9C  B1 01 00 1E */	sth r8, 0x1e(r1)
/* 802B8E60 002B5DA0  B0 E1 00 20 */	sth r7, 0x20(r1)
/* 802B8E64 002B5DA4  B0 C1 00 22 */	sth r6, 0x22(r1)
/* 802B8E68 002B5DA8  90 A1 00 24 */	stw r5, 0x24(r1)
/* 802B8E6C 002B5DAC  90 A1 00 28 */	stw r5, 0x28(r1)
/* 802B8E70 002B5DB0  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 802B8E74 002B5DB4  90 A1 00 30 */	stw r5, 0x30(r1)
/* 802B8E78 002B5DB8  90 01 00 18 */	stw r0, 0x18(r1)
/* 802B8E7C 002B5DBC  48 0F 62 E9 */	bl create__Q23efx8TSimple4FPQ23efx3Arg
/* 802B8E80 002B5DC0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802B8E84 002B5DC4  7C 08 03 A6 */	mtlr r0
/* 802B8E88 002B5DC8  38 21 00 40 */	addi r1, r1, 0x40
/* 802B8E8C 002B5DCC  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game12WaterOtakara3ObjFv
effectDrawOn__Q34Game12WaterOtakara3ObjFv:
/* 802B8E90 002B5DD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8E94 002B5DD4  7C 08 02 A6 */	mflr r0
/* 802B8E98 002B5DD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8E9C 002B5DDC  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B8EA0 002B5DE0  81 83 00 00 */	lwz r12, 0(r3)
/* 802B8EA4 002B5DE4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802B8EA8 002B5DE8  7D 89 03 A6 */	mtctr r12
/* 802B8EAC 002B5DEC  4E 80 04 21 */	bctrl 
/* 802B8EB0 002B5DF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8EB4 002B5DF4  7C 08 03 A6 */	mtlr r0
/* 802B8EB8 002B5DF8  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8EBC 002B5DFC  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game12WaterOtakara3ObjFv
effectDrawOff__Q34Game12WaterOtakara3ObjFv:
/* 802B8EC0 002B5E00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8EC4 002B5E04  7C 08 02 A6 */	mflr r0
/* 802B8EC8 002B5E08  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8ECC 002B5E0C  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B8ED0 002B5E10  81 83 00 00 */	lwz r12, 0(r3)
/* 802B8ED4 002B5E14  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802B8ED8 002B5E18  7D 89 03 A6 */	mtctr r12
/* 802B8EDC 002B5E1C  4E 80 04 21 */	bctrl 
/* 802B8EE0 002B5E20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8EE4 002B5E24  7C 08 03 A6 */	mtlr r0
/* 802B8EE8 002B5E28  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8EEC 002B5E2C  4E 80 00 20 */	blr 

.global startDisChargeSE__Q34Game12WaterOtakara3ObjFv
startDisChargeSE__Q34Game12WaterOtakara3ObjFv:
/* 802B8EF0 002B5E30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8EF4 002B5E34  7C 08 02 A6 */	mflr r0
/* 802B8EF8 002B5E38  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8EFC 002B5E3C  81 83 00 00 */	lwz r12, 0(r3)
/* 802B8F00 002B5E40  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802B8F04 002B5E44  7D 89 03 A6 */	mtctr r12
/* 802B8F08 002B5E48  4E 80 04 21 */	bctrl 
/* 802B8F0C 002B5E4C  81 83 00 00 */	lwz r12, 0(r3)
/* 802B8F10 002B5E50  38 80 51 65 */	li r4, 0x5165
/* 802B8F14 002B5E54  38 A0 00 00 */	li r5, 0
/* 802B8F18 002B5E58  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802B8F1C 002B5E5C  7D 89 03 A6 */	mtctr r12
/* 802B8F20 002B5E60  4E 80 04 21 */	bctrl 
/* 802B8F24 002B5E64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8F28 002B5E68  7C 08 03 A6 */	mtlr r0
/* 802B8F2C 002B5E6C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8F30 002B5E70  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game12WaterOtakara3ObjFv
getEnemyTypeID__Q34Game12WaterOtakara3ObjFv:
/* 802B8F34 002B5E74  38 60 00 3C */	li r3, 0x3c
/* 802B8F38 002B5E78  4E 80 00 20 */	blr 
