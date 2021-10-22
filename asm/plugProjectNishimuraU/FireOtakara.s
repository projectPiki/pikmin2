.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q23efx8TOtaFire
__vt__Q23efx8TOtaFire:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple5FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple5Fv
	.4byte fade__Q23efx8TSimple5Fv
.global __vt__Q23efx14TOtaChargefire
__vt__Q23efx14TOtaChargefire:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
	.4byte "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
.global __vt__Q34Game11FireOtakara3Obj
__vt__Q34Game11FireOtakara3Obj:
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
	.4byte __dt__Q34Game11FireOtakara3ObjFv
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
	.4byte changeMaterial__Q34Game11FireOtakara3ObjFv
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
	.4byte getEnemyTypeID__Q34Game11FireOtakara3ObjFv
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
	.4byte interactCreature__Q34Game11FireOtakara3ObjFPQ24Game8Creature
	.4byte createEffect__Q34Game11FireOtakara3ObjFv
	.4byte setupEffect__Q34Game11FireOtakara3ObjFv
	.4byte startChargeEffect__Q34Game11FireOtakara3ObjFv
	.4byte finishChargeEffect__Q34Game11FireOtakara3ObjFv
	.4byte createDisChargeEffect__Q34Game11FireOtakara3ObjFv
	.4byte effectDrawOn__Q34Game11FireOtakara3ObjFv
	.4byte effectDrawOff__Q34Game11FireOtakara3ObjFv
	.4byte startEscapeSE__Q34Game11OtakaraBase3ObjFv
	.4byte startDisChargeSE__Q34Game11FireOtakara3ObjFv
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
.global lbl_8051C308
lbl_8051C308:
	.4byte 0x63656E74
	.4byte 0x65720000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game11FireOtakara3ObjFv
__ct__Q34Game11FireOtakara3ObjFv:
/* 802B81C8 002B5108  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B81CC 002B510C  7C 08 02 A6 */	mflr r0
/* 802B81D0 002B5110  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B81D4 002B5114  7C 80 07 35 */	extsh. r0, r4
/* 802B81D8 002B5118  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B81DC 002B511C  7C 7F 1B 78 */	mr r31, r3
/* 802B81E0 002B5120  41 82 00 24 */	beq lbl_802B8204
/* 802B81E4 002B5124  38 1F 02 F8 */	addi r0, r31, 0x2f8
/* 802B81E8 002B5128  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802B81EC 002B512C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802B81F0 002B5130  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802B81F4 002B5134  38 00 00 00 */	li r0, 0
/* 802B81F8 002B5138  90 7F 02 F8 */	stw r3, 0x2f8(r31)
/* 802B81FC 002B513C  90 1F 02 FC */	stw r0, 0x2fc(r31)
/* 802B8200 002B5140  90 1F 03 00 */	stw r0, 0x300(r31)
lbl_802B8204:
/* 802B8204 002B5144  7F E3 FB 78 */	mr r3, r31
/* 802B8208 002B5148  38 80 00 00 */	li r4, 0
/* 802B820C 002B514C  4B FF E0 41 */	bl __ct__Q34Game11OtakaraBase3ObjFv
/* 802B8210 002B5150  3C 60 80 4D */	lis r3, __vt__Q34Game11FireOtakara3Obj@ha
/* 802B8214 002B5154  38 1F 02 F8 */	addi r0, r31, 0x2f8
/* 802B8218 002B5158  38 A3 F4 F8 */	addi r5, r3, __vt__Q34Game11FireOtakara3Obj@l
/* 802B821C 002B515C  7F E3 FB 78 */	mr r3, r31
/* 802B8220 002B5160  90 BF 00 00 */	stw r5, 0(r31)
/* 802B8224 002B5164  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802B8228 002B5168  38 A5 03 24 */	addi r5, r5, 0x324
/* 802B822C 002B516C  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802B8230 002B5170  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802B8234 002B5174  90 A4 00 00 */	stw r5, 0(r4)
/* 802B8238 002B5178  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802B823C 002B517C  7C 04 00 50 */	subf r0, r4, r0
/* 802B8240 002B5180  90 04 00 0C */	stw r0, 0xc(r4)
/* 802B8244 002B5184  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B8248 002B5188  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 802B824C 002B518C  7D 89 03 A6 */	mtctr r12
/* 802B8250 002B5190  4E 80 04 21 */	bctrl 
/* 802B8254 002B5194  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8258 002B5198  7F E3 FB 78 */	mr r3, r31
/* 802B825C 002B519C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B8260 002B51A0  7C 08 03 A6 */	mtlr r0
/* 802B8264 002B51A4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8268 002B51A8  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game11FireOtakara3ObjFv
changeMaterial__Q34Game11FireOtakara3ObjFv:
/* 802B826C 002B51AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B8270 002B51B0  7C 08 02 A6 */	mflr r0
/* 802B8274 002B51B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B8278 002B51B8  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802B827C 002B51BC  7C 7B 1B 78 */	mr r27, r3
/* 802B8280 002B51C0  80 63 01 80 */	lwz r3, 0x180(r3)
/* 802B8284 002B51C4  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 802B8288 002B51C8  81 83 00 00 */	lwz r12, 0(r3)
/* 802B828C 002B51CC  83 A4 00 08 */	lwz r29, 8(r4)
/* 802B8290 002B51D0  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 802B8294 002B51D4  83 DD 00 04 */	lwz r30, 4(r29)
/* 802B8298 002B51D8  7D 89 03 A6 */	mtctr r12
/* 802B829C 002B51DC  4E 80 04 21 */	bctrl 
/* 802B82A0 002B51E0  7C 7F 1B 78 */	mr r31, r3
/* 802B82A4 002B51E4  7F A3 EB 78 */	mr r3, r29
/* 802B82A8 002B51E8  81 9D 00 00 */	lwz r12, 0(r29)
/* 802B82AC 002B51EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802B82B0 002B51F0  7D 89 03 A6 */	mtctr r12
/* 802B82B4 002B51F4  4E 80 04 21 */	bctrl 
/* 802B82B8 002B51F8  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 802B82BC 002B51FC  3C 60 80 51 */	lis r3, j3dSys@ha
/* 802B82C0 002B5200  88 1F 00 00 */	lbz r0, 0(r31)
/* 802B82C4 002B5204  3B 63 F2 30 */	addi r27, r3, j3dSys@l
/* 802B82C8 002B5208  80 64 00 08 */	lwz r3, 8(r4)
/* 802B82CC 002B520C  3B 80 00 00 */	li r28, 0
/* 802B82D0 002B5210  80 63 00 04 */	lwz r3, 4(r3)
/* 802B82D4 002B5214  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 802B82D8 002B5218  80 64 00 04 */	lwz r3, 4(r4)
/* 802B82DC 002B521C  98 03 00 00 */	stb r0, 0(r3)
/* 802B82E0 002B5220  88 1F 00 01 */	lbz r0, 1(r31)
/* 802B82E4 002B5224  98 03 00 01 */	stb r0, 1(r3)
/* 802B82E8 002B5228  A0 1F 00 02 */	lhz r0, 2(r31)
/* 802B82EC 002B522C  B0 03 00 02 */	sth r0, 2(r3)
/* 802B82F0 002B5230  A0 1F 00 04 */	lhz r0, 4(r31)
/* 802B82F4 002B5234  B0 03 00 04 */	sth r0, 4(r3)
/* 802B82F8 002B5238  88 1F 00 06 */	lbz r0, 6(r31)
/* 802B82FC 002B523C  98 03 00 06 */	stb r0, 6(r3)
/* 802B8300 002B5240  88 1F 00 07 */	lbz r0, 7(r31)
/* 802B8304 002B5244  98 03 00 07 */	stb r0, 7(r3)
/* 802B8308 002B5248  88 1F 00 08 */	lbz r0, 8(r31)
/* 802B830C 002B524C  98 03 00 08 */	stb r0, 8(r3)
/* 802B8310 002B5250  88 1F 00 09 */	lbz r0, 9(r31)
/* 802B8314 002B5254  98 03 00 09 */	stb r0, 9(r3)
/* 802B8318 002B5258  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 802B831C 002B525C  B0 03 00 0A */	sth r0, 0xa(r3)
/* 802B8320 002B5260  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 802B8324 002B5264  90 03 00 0C */	stw r0, 0xc(r3)
/* 802B8328 002B5268  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 802B832C 002B526C  98 03 00 10 */	stb r0, 0x10(r3)
/* 802B8330 002B5270  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 802B8334 002B5274  98 03 00 11 */	stb r0, 0x11(r3)
/* 802B8338 002B5278  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 802B833C 002B527C  98 03 00 12 */	stb r0, 0x12(r3)
/* 802B8340 002B5280  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 802B8344 002B5284  98 03 00 13 */	stb r0, 0x13(r3)
/* 802B8348 002B5288  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 802B834C 002B528C  98 03 00 14 */	stb r0, 0x14(r3)
/* 802B8350 002B5290  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 802B8354 002B5294  98 03 00 15 */	stb r0, 0x15(r3)
/* 802B8358 002B5298  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 802B835C 002B529C  98 03 00 16 */	stb r0, 0x16(r3)
/* 802B8360 002B52A0  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 802B8364 002B52A4  98 03 00 17 */	stb r0, 0x17(r3)
/* 802B8368 002B52A8  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 802B836C 002B52AC  98 03 00 18 */	stb r0, 0x18(r3)
/* 802B8370 002B52B0  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 802B8374 002B52B4  98 03 00 19 */	stb r0, 0x19(r3)
/* 802B8378 002B52B8  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 802B837C 002B52BC  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 802B8380 002B52C0  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 802B8384 002B52C4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802B8388 002B52C8  80 64 00 04 */	lwz r3, 4(r4)
/* 802B838C 002B52CC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B8390 002B52D0  7C 1F 02 14 */	add r0, r31, r0
/* 802B8394 002B52D4  7C 03 00 50 */	subf r0, r3, r0
/* 802B8398 002B52D8  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802B839C 002B52DC  80 64 00 04 */	lwz r3, 4(r4)
/* 802B83A0 002B52E0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802B83A4 002B52E4  7C 1F 02 14 */	add r0, r31, r0
/* 802B83A8 002B52E8  7C 03 00 50 */	subf r0, r3, r0
/* 802B83AC 002B52EC  90 03 00 0C */	stw r0, 0xc(r3)
/* 802B83B0 002B52F0  48 00 00 3C */	b lbl_802B83EC
lbl_802B83B4:
/* 802B83B4 002B52F4  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 802B83B8 002B52F8  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 802B83BC 002B52FC  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 802B83C0 002B5300  7C 84 1A 14 */	add r4, r4, r3
/* 802B83C4 002B5304  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 802B83C8 002B5308  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 802B83CC 002B530C  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 802B83D0 002B5310  7C 63 00 2E */	lwzx r3, r3, r0
/* 802B83D4 002B5314  80 84 00 34 */	lwz r4, 0x34(r4)
/* 802B83D8 002B5318  81 83 00 00 */	lwz r12, 0(r3)
/* 802B83DC 002B531C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802B83E0 002B5320  7D 89 03 A6 */	mtctr r12
/* 802B83E4 002B5324  4E 80 04 21 */	bctrl 
/* 802B83E8 002B5328  3B 9C 00 01 */	addi r28, r28, 1
lbl_802B83EC:
/* 802B83EC 002B532C  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 802B83F0 002B5330  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 802B83F4 002B5334  7C 03 00 40 */	cmplw r3, r0
/* 802B83F8 002B5338  41 80 FF BC */	blt lbl_802B83B4
/* 802B83FC 002B533C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802B8400 002B5340  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B8404 002B5344  7C 08 03 A6 */	mtlr r0
/* 802B8408 002B5348  38 21 00 20 */	addi r1, r1, 0x20
/* 802B840C 002B534C  4E 80 00 20 */	blr 

.global interactCreature__Q34Game11FireOtakara3ObjFPQ24Game8Creature
interactCreature__Q34Game11FireOtakara3ObjFPQ24Game8Creature:
/* 802B8410 002B5350  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B8414 002B5354  7C 08 02 A6 */	mflr r0
/* 802B8418 002B5358  3C C0 80 4B */	lis r6, __vt__Q24Game11Interaction@ha
/* 802B841C 002B535C  7C 88 23 78 */	mr r8, r4
/* 802B8420 002B5360  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B8424 002B5364  3C A0 80 4B */	lis r5, __vt__Q24Game12InteractFire@ha
/* 802B8428 002B5368  38 C6 A3 00 */	addi r6, r6, __vt__Q24Game11Interaction@l
/* 802B842C 002B536C  38 81 00 08 */	addi r4, r1, 8
/* 802B8430 002B5370  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 802B8434 002B5374  38 05 48 78 */	addi r0, r5, __vt__Q24Game12InteractFire@l
/* 802B8438 002B5378  C0 07 06 04 */	lfs f0, 0x604(r7)
/* 802B843C 002B537C  90 C1 00 08 */	stw r6, 8(r1)
/* 802B8440 002B5380  90 61 00 0C */	stw r3, 0xc(r1)
/* 802B8444 002B5384  7D 03 43 78 */	mr r3, r8
/* 802B8448 002B5388  90 01 00 08 */	stw r0, 8(r1)
/* 802B844C 002B538C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802B8450 002B5390  81 88 00 00 */	lwz r12, 0(r8)
/* 802B8454 002B5394  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802B8458 002B5398  7D 89 03 A6 */	mtctr r12
/* 802B845C 002B539C  4E 80 04 21 */	bctrl 
/* 802B8460 002B53A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B8464 002B53A4  7C 08 03 A6 */	mtlr r0
/* 802B8468 002B53A8  38 21 00 20 */	addi r1, r1, 0x20
/* 802B846C 002B53AC  4E 80 00 20 */	blr 

.global createEffect__Q34Game11FireOtakara3ObjFv
createEffect__Q34Game11FireOtakara3ObjFv:
/* 802B8470 002B53B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8474 002B53B4  7C 08 02 A6 */	mflr r0
/* 802B8478 002B53B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B847C 002B53BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B8480 002B53C0  93 C1 00 08 */	stw r30, 8(r1)
/* 802B8484 002B53C4  7C 7E 1B 78 */	mr r30, r3
/* 802B8488 002B53C8  38 60 00 2C */	li r3, 0x2c
/* 802B848C 002B53CC  4B D6 BA 19 */	bl __nw__FUl
/* 802B8490 002B53D0  7C 7F 1B 79 */	or. r31, r3, r3
/* 802B8494 002B53D4  41 82 00 20 */	beq lbl_802B84B4
/* 802B8498 002B53D8  38 80 00 00 */	li r4, 0
/* 802B849C 002B53DC  38 A0 01 2E */	li r5, 0x12e
/* 802B84A0 002B53E0  38 C0 01 2F */	li r6, 0x12f
/* 802B84A4 002B53E4  48 0F 83 59 */	bl __ct__Q23efx11TChaseMtxT2FPA4_fUsUs
/* 802B84A8 002B53E8  3C 60 80 4D */	lis r3, __vt__Q23efx14TOtaChargefire@ha
/* 802B84AC 002B53EC  38 03 F4 DC */	addi r0, r3, __vt__Q23efx14TOtaChargefire@l
/* 802B84B0 002B53F0  90 1F 00 00 */	stw r0, 0(r31)
lbl_802B84B4:
/* 802B84B4 002B53F4  93 FE 02 F4 */	stw r31, 0x2f4(r30)
/* 802B84B8 002B53F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B84BC 002B53FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B84C0 002B5400  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B84C4 002B5404  7C 08 03 A6 */	mtlr r0
/* 802B84C8 002B5408  38 21 00 10 */	addi r1, r1, 0x10
/* 802B84CC 002B540C  4E 80 00 20 */	blr 

.global setupEffect__Q34Game11FireOtakara3ObjFv
setupEffect__Q34Game11FireOtakara3ObjFv:
/* 802B84D0 002B5410  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B84D4 002B5414  7C 08 02 A6 */	mflr r0
/* 802B84D8 002B5418  38 82 DF A8 */	addi r4, r2, lbl_8051C308@sda21
/* 802B84DC 002B541C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B84E0 002B5420  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B84E4 002B5424  7C 7F 1B 78 */	mr r31, r3
/* 802B84E8 002B5428  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802B84EC 002B542C  48 18 6A F9 */	bl getJoint__Q28SysShape5ModelFPc
/* 802B84F0 002B5430  48 17 13 B1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B84F4 002B5434  7C 60 1B 78 */	mr r0, r3
/* 802B84F8 002B5438  80 7F 02 F4 */	lwz r3, 0x2f4(r31)
/* 802B84FC 002B543C  7C 04 03 78 */	mr r4, r0
/* 802B8500 002B5440  48 0F 84 01 */	bl setMtxptr__Q23efx11TChaseMtxT2FPA4_f
/* 802B8504 002B5444  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8508 002B5448  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B850C 002B544C  7C 08 03 A6 */	mtlr r0
/* 802B8510 002B5450  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8514 002B5454  4E 80 00 20 */	blr 

.global startChargeEffect__Q34Game11FireOtakara3ObjFv
startChargeEffect__Q34Game11FireOtakara3ObjFv:
/* 802B8518 002B5458  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B851C 002B545C  7C 08 02 A6 */	mflr r0
/* 802B8520 002B5460  38 80 00 00 */	li r4, 0
/* 802B8524 002B5464  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8528 002B5468  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B852C 002B546C  81 83 00 00 */	lwz r12, 0(r3)
/* 802B8530 002B5470  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B8534 002B5474  7D 89 03 A6 */	mtctr r12
/* 802B8538 002B5478  4E 80 04 21 */	bctrl 
/* 802B853C 002B547C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8540 002B5480  7C 08 03 A6 */	mtlr r0
/* 802B8544 002B5484  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8548 002B5488  4E 80 00 20 */	blr 

.global finishChargeEffect__Q34Game11FireOtakara3ObjFv
finishChargeEffect__Q34Game11FireOtakara3ObjFv:
/* 802B854C 002B548C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8550 002B5490  7C 08 02 A6 */	mflr r0
/* 802B8554 002B5494  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8558 002B5498  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B855C 002B549C  81 83 00 00 */	lwz r12, 0(r3)
/* 802B8560 002B54A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802B8564 002B54A4  7D 89 03 A6 */	mtctr r12
/* 802B8568 002B54A8  4E 80 04 21 */	bctrl 
/* 802B856C 002B54AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8570 002B54B0  7C 08 03 A6 */	mtlr r0
/* 802B8574 002B54B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8578 002B54B8  4E 80 00 20 */	blr 

.global createDisChargeEffect__Q34Game11FireOtakara3ObjFv
createDisChargeEffect__Q34Game11FireOtakara3ObjFv:
/* 802B857C 002B54BC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802B8580 002B54C0  7C 08 02 A6 */	mflr r0
/* 802B8584 002B54C4  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 802B8588 002B54C8  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple5@ha
/* 802B858C 002B54CC  90 01 00 44 */	stw r0, 0x44(r1)
/* 802B8590 002B54D0  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802B8594 002B54D4  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 802B8598 002B54D8  39 86 A7 F8 */	addi r12, r6, __vt__Q23efx5TBase@l
/* 802B859C 002B54DC  90 01 00 08 */	stw r0, 8(r1)
/* 802B85A0 002B54E0  39 65 6A 28 */	addi r11, r5, __vt__Q23efx8TSimple5@l
/* 802B85A4 002B54E4  3C 80 80 4D */	lis r4, __vt__Q23efx8TOtaFire@ha
/* 802B85A8 002B54E8  39 40 01 37 */	li r10, 0x137
/* 802B85AC 002B54EC  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802B85B0 002B54F0  38 04 F4 C8 */	addi r0, r4, __vt__Q23efx8TOtaFire@l
/* 802B85B4 002B54F4  39 20 01 38 */	li r9, 0x138
/* 802B85B8 002B54F8  39 00 01 39 */	li r8, 0x139
/* 802B85BC 002B54FC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802B85C0 002B5500  38 E0 01 3A */	li r7, 0x13a
/* 802B85C4 002B5504  38 C0 01 3B */	li r6, 0x13b
/* 802B85C8 002B5508  38 A0 00 00 */	li r5, 0
/* 802B85CC 002B550C  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802B85D0 002B5510  38 81 00 08 */	addi r4, r1, 8
/* 802B85D4 002B5514  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802B85D8 002B5518  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 802B85DC 002B551C  38 61 00 18 */	addi r3, r1, 0x18
/* 802B85E0 002B5520  91 81 00 18 */	stw r12, 0x18(r1)
/* 802B85E4 002B5524  91 61 00 18 */	stw r11, 0x18(r1)
/* 802B85E8 002B5528  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802B85EC 002B552C  B1 41 00 1C */	sth r10, 0x1c(r1)
/* 802B85F0 002B5530  B1 21 00 1E */	sth r9, 0x1e(r1)
/* 802B85F4 002B5534  B1 01 00 20 */	sth r8, 0x20(r1)
/* 802B85F8 002B5538  B0 E1 00 22 */	sth r7, 0x22(r1)
/* 802B85FC 002B553C  B0 C1 00 24 */	sth r6, 0x24(r1)
/* 802B8600 002B5540  90 A1 00 28 */	stw r5, 0x28(r1)
/* 802B8604 002B5544  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 802B8608 002B5548  90 A1 00 30 */	stw r5, 0x30(r1)
/* 802B860C 002B554C  90 A1 00 34 */	stw r5, 0x34(r1)
/* 802B8610 002B5550  90 A1 00 38 */	stw r5, 0x38(r1)
/* 802B8614 002B5554  90 01 00 18 */	stw r0, 0x18(r1)
/* 802B8618 002B5558  48 0F 6B F5 */	bl create__Q23efx8TSimple5FPQ23efx3Arg
/* 802B861C 002B555C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802B8620 002B5560  7C 08 03 A6 */	mtlr r0
/* 802B8624 002B5564  38 21 00 40 */	addi r1, r1, 0x40
/* 802B8628 002B5568  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game11FireOtakara3ObjFv
effectDrawOn__Q34Game11FireOtakara3ObjFv:
/* 802B862C 002B556C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8630 002B5570  7C 08 02 A6 */	mflr r0
/* 802B8634 002B5574  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8638 002B5578  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B863C 002B557C  81 83 00 00 */	lwz r12, 0(r3)
/* 802B8640 002B5580  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802B8644 002B5584  7D 89 03 A6 */	mtctr r12
/* 802B8648 002B5588  4E 80 04 21 */	bctrl 
/* 802B864C 002B558C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8650 002B5590  7C 08 03 A6 */	mtlr r0
/* 802B8654 002B5594  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8658 002B5598  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game11FireOtakara3ObjFv
effectDrawOff__Q34Game11FireOtakara3ObjFv:
/* 802B865C 002B559C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8660 002B55A0  7C 08 02 A6 */	mflr r0
/* 802B8664 002B55A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8668 002B55A8  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 802B866C 002B55AC  81 83 00 00 */	lwz r12, 0(r3)
/* 802B8670 002B55B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802B8674 002B55B4  7D 89 03 A6 */	mtctr r12
/* 802B8678 002B55B8  4E 80 04 21 */	bctrl 
/* 802B867C 002B55BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8680 002B55C0  7C 08 03 A6 */	mtlr r0
/* 802B8684 002B55C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8688 002B55C8  4E 80 00 20 */	blr 

.global startDisChargeSE__Q34Game11FireOtakara3ObjFv
startDisChargeSE__Q34Game11FireOtakara3ObjFv:
/* 802B868C 002B55CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8690 002B55D0  7C 08 02 A6 */	mflr r0
/* 802B8694 002B55D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8698 002B55D8  81 83 00 00 */	lwz r12, 0(r3)
/* 802B869C 002B55DC  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802B86A0 002B55E0  7D 89 03 A6 */	mtctr r12
/* 802B86A4 002B55E4  4E 80 04 21 */	bctrl 
/* 802B86A8 002B55E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802B86AC 002B55EC  38 80 50 F3 */	li r4, 0x50f3
/* 802B86B0 002B55F0  38 A0 00 00 */	li r5, 0
/* 802B86B4 002B55F4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802B86B8 002B55F8  7D 89 03 A6 */	mtctr r12
/* 802B86BC 002B55FC  4E 80 04 21 */	bctrl 
/* 802B86C0 002B5600  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B86C4 002B5604  7C 08 03 A6 */	mtlr r0
/* 802B86C8 002B5608  38 21 00 10 */	addi r1, r1, 0x10
/* 802B86CC 002B560C  4E 80 00 20 */	blr 

.global forceKill__Q23efx8TSimple5Fv
forceKill__Q23efx8TSimple5Fv:
/* 802B86D0 002B5610  4E 80 00 20 */	blr 

.global fade__Q23efx8TSimple5Fv
fade__Q23efx8TSimple5Fv:
/* 802B86D4 002B5614  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game11FireOtakara3ObjFv
getEnemyTypeID__Q34Game11FireOtakara3ObjFv:
/* 802B86D8 002B5618  38 60 00 3B */	li r3, 0x3b
/* 802B86DC 002B561C  4E 80 00 20 */	blr 
