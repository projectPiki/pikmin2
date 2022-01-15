.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game11Koganemushi3Obj
__vt__Q34Game11Koganemushi3Obj:
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
	.4byte onInit__Q34Game6Kogane3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game6Kogane3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game6Kogane3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game6Kogane3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game6Kogane3ObjFv
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
	.4byte getShadowParam__Q34Game6Kogane3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game11Koganemushi3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game6Kogane3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game6Kogane3ObjFv
	.4byte doUpdateCommon__Q34Game6Kogane3ObjFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game6Kogane3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game11Koganemushi3ObjFv
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
	.4byte getEnemyTypeID__Q34Game11Koganemushi3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game6Kogane3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game6Kogane3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q34Game6Kogane3ObjFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game6Kogane3ObjFv
	.4byte doFinishStoneState__Q34Game6Kogane3ObjFv
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
	.4byte wallCallback__Q34Game6Kogane3ObjFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q24Game9EnemyBaseFv
	.4byte doStartMovie__Q34Game6Kogane3ObjFv
	.4byte doEndMovie__Q34Game6Kogane3ObjFv
	.4byte setFSM__Q34Game6Kogane3ObjFPQ34Game6Kogane3FSM
	.4byte createItem__Q34Game11Koganemushi3ObjFv
	.4byte resetFartTimer__Q34Game6Kogane3ObjFv
	.4byte startBodyEffect__Q34Game6Kogane3ObjFv
	.4byte finishBodyEffect__Q34Game6Kogane3ObjFv
	.4byte createFartEffect__Q34Game6Kogane3ObjFv
	.4byte effectDrawOn__Q34Game6Kogane3ObjFv
	.4byte effectDrawOff__Q34Game6Kogane3ObjFv
	.4byte createPressSENormal__Q34Game11Koganemushi3ObjFv
	.4byte createPressSESpecial__Q34Game6Kogane3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@732@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@732@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@732@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@732@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@732@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@732@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051BCE0
lbl_8051BCE0:
	.4byte 0x6B617261
	.4byte 0x64610000
.global lbl_8051BCE8
lbl_8051BCE8:
	.4byte 0x46480000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game11Koganemushi3ObjFv
__ct__Q34Game11Koganemushi3ObjFv:
/* 8029DD44 0029AC84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029DD48 0029AC88  7C 08 02 A6 */	mflr r0
/* 8029DD4C 0029AC8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029DD50 0029AC90  7C 80 07 35 */	extsh. r0, r4
/* 8029DD54 0029AC94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029DD58 0029AC98  7C 7F 1B 78 */	mr r31, r3
/* 8029DD5C 0029AC9C  41 82 00 24 */	beq lbl_8029DD80
/* 8029DD60 0029ACA0  38 1F 02 DC */	addi r0, r31, 0x2dc
/* 8029DD64 0029ACA4  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8029DD68 0029ACA8  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8029DD6C 0029ACAC  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8029DD70 0029ACB0  38 00 00 00 */	li r0, 0
/* 8029DD74 0029ACB4  90 7F 02 DC */	stw r3, 0x2dc(r31)
/* 8029DD78 0029ACB8  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 8029DD7C 0029ACBC  90 1F 02 E4 */	stw r0, 0x2e4(r31)
lbl_8029DD80:
/* 8029DD80 0029ACC0  7F E3 FB 78 */	mr r3, r31
/* 8029DD84 0029ACC4  38 80 00 00 */	li r4, 0
/* 8029DD88 0029ACC8  4B FB FF 05 */	bl __ct__Q34Game6Kogane3ObjFv
/* 8029DD8C 0029ACCC  3C 60 80 4D */	lis r3, __vt__Q34Game11Koganemushi3Obj@ha
/* 8029DD90 0029ACD0  38 1F 02 DC */	addi r0, r31, 0x2dc
/* 8029DD94 0029ACD4  38 A3 C7 10 */	addi r5, r3, __vt__Q34Game11Koganemushi3Obj@l
/* 8029DD98 0029ACD8  7F E3 FB 78 */	mr r3, r31
/* 8029DD9C 0029ACDC  90 BF 00 00 */	stw r5, 0(r31)
/* 8029DDA0 0029ACE0  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8029DDA4 0029ACE4  38 A5 03 20 */	addi r5, r5, 0x320
/* 8029DDA8 0029ACE8  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8029DDAC 0029ACEC  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8029DDB0 0029ACF0  90 A4 00 00 */	stw r5, 0(r4)
/* 8029DDB4 0029ACF4  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8029DDB8 0029ACF8  7C 04 00 50 */	subf r0, r4, r0
/* 8029DDBC 0029ACFC  90 04 00 0C */	stw r0, 0xc(r4)
/* 8029DDC0 0029AD00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029DDC4 0029AD04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029DDC8 0029AD08  7C 08 03 A6 */	mtlr r0
/* 8029DDCC 0029AD0C  38 21 00 10 */	addi r1, r1, 0x10
/* 8029DDD0 0029AD10  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game11Koganemushi3ObjFv
changeMaterial__Q34Game11Koganemushi3ObjFv:
/* 8029DDD4 0029AD14  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8029DDD8 0029AD18  7C 08 02 A6 */	mflr r0
/* 8029DDDC 0029AD1C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8029DDE0 0029AD20  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8029DDE4 0029AD24  7C 7B 1B 78 */	mr r27, r3
/* 8029DDE8 0029AD28  80 63 01 80 */	lwz r3, 0x180(r3)
/* 8029DDEC 0029AD2C  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 8029DDF0 0029AD30  81 83 00 00 */	lwz r12, 0(r3)
/* 8029DDF4 0029AD34  83 A4 00 08 */	lwz r29, 8(r4)
/* 8029DDF8 0029AD38  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 8029DDFC 0029AD3C  83 DD 00 04 */	lwz r30, 4(r29)
/* 8029DE00 0029AD40  7D 89 03 A6 */	mtctr r12
/* 8029DE04 0029AD44  4E 80 04 21 */	bctrl 
/* 8029DE08 0029AD48  7C 7F 1B 78 */	mr r31, r3
/* 8029DE0C 0029AD4C  80 7E 00 64 */	lwz r3, 0x64(r30)
/* 8029DE10 0029AD50  38 82 D9 80 */	addi r4, r2, lbl_8051BCE0@sda21
/* 8029DE14 0029AD54  4B D9 0F 71 */	bl getIndex__10JUTNameTabCFPCc
/* 8029DE18 0029AD58  80 BE 00 60 */	lwz r5, 0x60(r30)
/* 8029DE1C 0029AD5C  54 64 13 BA */	rlwinm r4, r3, 2, 0xe, 0x1d
/* 8029DE20 0029AD60  38 60 00 3C */	li r3, 0x3c
/* 8029DE24 0029AD64  38 00 00 FF */	li r0, 0xff
/* 8029DE28 0029AD68  7C C5 20 2E */	lwzx r6, r5, r4
/* 8029DE2C 0029AD6C  38 A1 00 08 */	addi r5, r1, 8
/* 8029DE30 0029AD70  38 80 00 00 */	li r4, 0
/* 8029DE34 0029AD74  98 61 00 08 */	stb r3, 8(r1)
/* 8029DE38 0029AD78  98 61 00 09 */	stb r3, 9(r1)
/* 8029DE3C 0029AD7C  98 61 00 0A */	stb r3, 0xa(r1)
/* 8029DE40 0029AD80  98 01 00 0B */	stb r0, 0xb(r1)
/* 8029DE44 0029AD84  80 66 00 2C */	lwz r3, 0x2c(r6)
/* 8029DE48 0029AD88  81 83 00 00 */	lwz r12, 0(r3)
/* 8029DE4C 0029AD8C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8029DE50 0029AD90  7D 89 03 A6 */	mtctr r12
/* 8029DE54 0029AD94  4E 80 04 21 */	bctrl 
/* 8029DE58 0029AD98  7F A3 EB 78 */	mr r3, r29
/* 8029DE5C 0029AD9C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8029DE60 0029ADA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8029DE64 0029ADA4  7D 89 03 A6 */	mtctr r12
/* 8029DE68 0029ADA8  4E 80 04 21 */	bctrl 
/* 8029DE6C 0029ADAC  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 8029DE70 0029ADB0  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8029DE74 0029ADB4  88 1F 00 00 */	lbz r0, 0(r31)
/* 8029DE78 0029ADB8  3B 63 F2 30 */	addi r27, r3, j3dSys@l
/* 8029DE7C 0029ADBC  80 64 00 08 */	lwz r3, 8(r4)
/* 8029DE80 0029ADC0  3B 80 00 00 */	li r28, 0
/* 8029DE84 0029ADC4  80 63 00 04 */	lwz r3, 4(r3)
/* 8029DE88 0029ADC8  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 8029DE8C 0029ADCC  80 64 00 04 */	lwz r3, 4(r4)
/* 8029DE90 0029ADD0  98 03 00 00 */	stb r0, 0(r3)
/* 8029DE94 0029ADD4  88 1F 00 01 */	lbz r0, 1(r31)
/* 8029DE98 0029ADD8  98 03 00 01 */	stb r0, 1(r3)
/* 8029DE9C 0029ADDC  A0 1F 00 02 */	lhz r0, 2(r31)
/* 8029DEA0 0029ADE0  B0 03 00 02 */	sth r0, 2(r3)
/* 8029DEA4 0029ADE4  A0 1F 00 04 */	lhz r0, 4(r31)
/* 8029DEA8 0029ADE8  B0 03 00 04 */	sth r0, 4(r3)
/* 8029DEAC 0029ADEC  88 1F 00 06 */	lbz r0, 6(r31)
/* 8029DEB0 0029ADF0  98 03 00 06 */	stb r0, 6(r3)
/* 8029DEB4 0029ADF4  88 1F 00 07 */	lbz r0, 7(r31)
/* 8029DEB8 0029ADF8  98 03 00 07 */	stb r0, 7(r3)
/* 8029DEBC 0029ADFC  88 1F 00 08 */	lbz r0, 8(r31)
/* 8029DEC0 0029AE00  98 03 00 08 */	stb r0, 8(r3)
/* 8029DEC4 0029AE04  88 1F 00 09 */	lbz r0, 9(r31)
/* 8029DEC8 0029AE08  98 03 00 09 */	stb r0, 9(r3)
/* 8029DECC 0029AE0C  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 8029DED0 0029AE10  B0 03 00 0A */	sth r0, 0xa(r3)
/* 8029DED4 0029AE14  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8029DED8 0029AE18  90 03 00 0C */	stw r0, 0xc(r3)
/* 8029DEDC 0029AE1C  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8029DEE0 0029AE20  98 03 00 10 */	stb r0, 0x10(r3)
/* 8029DEE4 0029AE24  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 8029DEE8 0029AE28  98 03 00 11 */	stb r0, 0x11(r3)
/* 8029DEEC 0029AE2C  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 8029DEF0 0029AE30  98 03 00 12 */	stb r0, 0x12(r3)
/* 8029DEF4 0029AE34  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 8029DEF8 0029AE38  98 03 00 13 */	stb r0, 0x13(r3)
/* 8029DEFC 0029AE3C  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 8029DF00 0029AE40  98 03 00 14 */	stb r0, 0x14(r3)
/* 8029DF04 0029AE44  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 8029DF08 0029AE48  98 03 00 15 */	stb r0, 0x15(r3)
/* 8029DF0C 0029AE4C  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 8029DF10 0029AE50  98 03 00 16 */	stb r0, 0x16(r3)
/* 8029DF14 0029AE54  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 8029DF18 0029AE58  98 03 00 17 */	stb r0, 0x17(r3)
/* 8029DF1C 0029AE5C  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 8029DF20 0029AE60  98 03 00 18 */	stb r0, 0x18(r3)
/* 8029DF24 0029AE64  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 8029DF28 0029AE68  98 03 00 19 */	stb r0, 0x19(r3)
/* 8029DF2C 0029AE6C  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 8029DF30 0029AE70  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 8029DF34 0029AE74  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8029DF38 0029AE78  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8029DF3C 0029AE7C  80 64 00 04 */	lwz r3, 4(r4)
/* 8029DF40 0029AE80  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8029DF44 0029AE84  7C 1F 02 14 */	add r0, r31, r0
/* 8029DF48 0029AE88  7C 03 00 50 */	subf r0, r3, r0
/* 8029DF4C 0029AE8C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8029DF50 0029AE90  80 64 00 04 */	lwz r3, 4(r4)
/* 8029DF54 0029AE94  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8029DF58 0029AE98  7C 1F 02 14 */	add r0, r31, r0
/* 8029DF5C 0029AE9C  7C 03 00 50 */	subf r0, r3, r0
/* 8029DF60 0029AEA0  90 03 00 0C */	stw r0, 0xc(r3)
/* 8029DF64 0029AEA4  48 00 00 3C */	b lbl_8029DFA0
lbl_8029DF68:
/* 8029DF68 0029AEA8  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 8029DF6C 0029AEAC  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 8029DF70 0029AEB0  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 8029DF74 0029AEB4  7C 84 1A 14 */	add r4, r4, r3
/* 8029DF78 0029AEB8  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 8029DF7C 0029AEBC  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 8029DF80 0029AEC0  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8029DF84 0029AEC4  7C 63 00 2E */	lwzx r3, r3, r0
/* 8029DF88 0029AEC8  80 84 00 34 */	lwz r4, 0x34(r4)
/* 8029DF8C 0029AECC  81 83 00 00 */	lwz r12, 0(r3)
/* 8029DF90 0029AED0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8029DF94 0029AED4  7D 89 03 A6 */	mtctr r12
/* 8029DF98 0029AED8  4E 80 04 21 */	bctrl 
/* 8029DF9C 0029AEDC  3B 9C 00 01 */	addi r28, r28, 1
lbl_8029DFA0:
/* 8029DFA0 0029AEE0  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 8029DFA4 0029AEE4  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 8029DFA8 0029AEE8  7C 03 00 40 */	cmplw r3, r0
/* 8029DFAC 0029AEEC  41 80 FF BC */	blt lbl_8029DF68
/* 8029DFB0 0029AEF0  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8029DFB4 0029AEF4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8029DFB8 0029AEF8  7C 08 03 A6 */	mtlr r0
/* 8029DFBC 0029AEFC  38 21 00 30 */	addi r1, r1, 0x30
/* 8029DFC0 0029AF00  4E 80 00 20 */	blr 

.global createItem__Q34Game11Koganemushi3ObjFv
createItem__Q34Game11Koganemushi3ObjFv:
/* 8029DFC4 0029AF04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029DFC8 0029AF08  7C 08 02 A6 */	mflr r0
/* 8029DFCC 0029AF0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029DFD0 0029AF10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029DFD4 0029AF14  93 C1 00 08 */	stw r30, 8(r1)
/* 8029DFD8 0029AF18  7C 7E 1B 78 */	mr r30, r3
/* 8029DFDC 0029AF1C  4B FC 09 75 */	bl createTreasureItem__Q34Game6Kogane3ObjFv
/* 8029DFE0 0029AF20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029DFE4 0029AF24  40 82 00 E4 */	bne lbl_8029E0C8
/* 8029DFE8 0029AF28  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 8029DFEC 0029AF2C  3B E0 00 01 */	li r31, 1
/* 8029DFF0 0029AF30  38 80 00 00 */	li r4, 0
/* 8029DFF4 0029AF34  38 A0 00 00 */	li r5, 0
/* 8029DFF8 0029AF38  2C 00 00 01 */	cmpwi r0, 1
/* 8029DFFC 0029AF3C  41 82 00 54 */	beq lbl_8029E050
/* 8029E000 0029AF40  40 80 00 10 */	bge lbl_8029E010
/* 8029E004 0029AF44  2C 00 00 00 */	cmpwi r0, 0
/* 8029E008 0029AF48  40 80 00 14 */	bge lbl_8029E01C
/* 8029E00C 0029AF4C  48 00 00 90 */	b lbl_8029E09C
lbl_8029E010:
/* 8029E010 0029AF50  2C 00 00 03 */	cmpwi r0, 3
/* 8029E014 0029AF54  40 80 00 88 */	bge lbl_8029E09C
/* 8029E018 0029AF58  48 00 00 48 */	b lbl_8029E060
lbl_8029E01C:
/* 8029E01C 0029AF5C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8029E020 0029AF60  28 03 00 00 */	cmplwi r3, 0
/* 8029E024 0029AF64  41 82 00 20 */	beq lbl_8029E044
/* 8029E028 0029AF68  88 03 00 48 */	lbz r0, 0x48(r3)
/* 8029E02C 0029AF6C  28 00 00 00 */	cmplwi r0, 0
/* 8029E030 0029AF70  41 82 00 14 */	beq lbl_8029E044
/* 8029E034 0029AF74  3B E0 00 00 */	li r31, 0
/* 8029E038 0029AF78  38 80 00 00 */	li r4, 0
/* 8029E03C 0029AF7C  38 A0 00 01 */	li r5, 1
/* 8029E040 0029AF80  48 00 00 5C */	b lbl_8029E09C
lbl_8029E044:
/* 8029E044 0029AF84  38 80 00 01 */	li r4, 1
/* 8029E048 0029AF88  38 A0 00 01 */	li r5, 1
/* 8029E04C 0029AF8C  48 00 00 50 */	b lbl_8029E09C
lbl_8029E050:
/* 8029E050 0029AF90  3B E0 00 00 */	li r31, 0
/* 8029E054 0029AF94  38 80 00 00 */	li r4, 0
/* 8029E058 0029AF98  38 A0 00 02 */	li r5, 2
/* 8029E05C 0029AF9C  48 00 00 40 */	b lbl_8029E09C
lbl_8029E060:
/* 8029E060 0029AFA0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8029E064 0029AFA4  3B E0 00 00 */	li r31, 0
/* 8029E068 0029AFA8  28 03 00 00 */	cmplwi r3, 0
/* 8029E06C 0029AFAC  41 82 00 20 */	beq lbl_8029E08C
/* 8029E070 0029AFB0  38 80 00 1D */	li r4, 0x1d
/* 8029E074 0029AFB4  4B F4 93 6D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 8029E078 0029AFB8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029E07C 0029AFBC  41 82 00 10 */	beq lbl_8029E08C
/* 8029E080 0029AFC0  38 80 00 01 */	li r4, 1
/* 8029E084 0029AFC4  38 A0 00 01 */	li r5, 1
/* 8029E088 0029AFC8  48 00 00 0C */	b lbl_8029E094
lbl_8029E08C:
/* 8029E08C 0029AFCC  38 80 00 00 */	li r4, 0
/* 8029E090 0029AFD0  38 A0 00 03 */	li r5, 3
lbl_8029E094:
/* 8029E094 0029AFD4  C0 02 D9 88 */	lfs f0, lbl_8051BCE8@sda21(r2)
/* 8029E098 0029AFD8  D0 1E 02 C4 */	stfs f0, 0x2c4(r30)
lbl_8029E09C:
/* 8029E09C 0029AFDC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8029E0A0 0029AFE0  41 82 00 10 */	beq lbl_8029E0B0
/* 8029E0A4 0029AFE4  7F C3 F3 78 */	mr r3, r30
/* 8029E0A8 0029AFE8  4B FC 0A 3D */	bl createPellet__Q34Game6Kogane3ObjFii
/* 8029E0AC 0029AFEC  48 00 00 10 */	b lbl_8029E0BC
lbl_8029E0B0:
/* 8029E0B0 0029AFF0  7F C3 F3 78 */	mr r3, r30
/* 8029E0B4 0029AFF4  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8029E0B8 0029AFF8  4B FC 0C C1 */	bl createDoping__Q34Game6Kogane3ObjFUci
lbl_8029E0BC:
/* 8029E0BC 0029AFFC  80 7E 02 C0 */	lwz r3, 0x2c0(r30)
/* 8029E0C0 0029B000  38 03 00 01 */	addi r0, r3, 1
/* 8029E0C4 0029B004  90 1E 02 C0 */	stw r0, 0x2c0(r30)
lbl_8029E0C8:
/* 8029E0C8 0029B008  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029E0CC 0029B00C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029E0D0 0029B010  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029E0D4 0029B014  7C 08 03 A6 */	mtlr r0
/* 8029E0D8 0029B018  38 21 00 10 */	addi r1, r1, 0x10
/* 8029E0DC 0029B01C  4E 80 00 20 */	blr 

.global createPressSENormal__Q34Game11Koganemushi3ObjFv
createPressSENormal__Q34Game11Koganemushi3ObjFv:
/* 8029E0E0 0029B020  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029E0E4 0029B024  7C 08 02 A6 */	mflr r0
/* 8029E0E8 0029B028  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029E0EC 0029B02C  81 83 00 00 */	lwz r12, 0(r3)
/* 8029E0F0 0029B030  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 8029E0F4 0029B034  7D 89 03 A6 */	mtctr r12
/* 8029E0F8 0029B038  4E 80 04 21 */	bctrl 
/* 8029E0FC 0029B03C  81 83 00 00 */	lwz r12, 0(r3)
/* 8029E100 0029B040  38 80 58 73 */	li r4, 0x5873
/* 8029E104 0029B044  38 A0 00 00 */	li r5, 0
/* 8029E108 0029B048  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8029E10C 0029B04C  7D 89 03 A6 */	mtctr r12
/* 8029E110 0029B050  4E 80 04 21 */	bctrl 
/* 8029E114 0029B054  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029E118 0029B058  7C 08 03 A6 */	mtlr r0
/* 8029E11C 0029B05C  38 21 00 10 */	addi r1, r1, 0x10
/* 8029E120 0029B060  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game11Koganemushi3ObjFv
getEnemyTypeID__Q34Game11Koganemushi3ObjFv:
/* 8029E124 0029B064  38 60 00 09 */	li r3, 9
/* 8029E128 0029B068  4E 80 00 20 */	blr 
