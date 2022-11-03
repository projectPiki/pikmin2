.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game5Demon3Obj
__vt__Q34Game5Demon3Obj:
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
	.4byte onInit__Q34Game5Sarai3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game5Sarai3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game5Sarai3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game5Sarai3ObjFv
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
	.4byte getShadowParam__Q34Game5Sarai3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game5Demon3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game5Sarai3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game5Sarai3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game5Sarai3ObjFR8Graphics
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
	.4byte initMouthSlots__Q34Game5Sarai3ObjFv
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
	.4byte getEnemyTypeID__Q34Game5Demon3ObjFv
	.4byte getMouthSlots__Q34Game5Sarai3ObjFv
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
	.4byte doStartStoneState__Q34Game5Sarai3ObjFv
	.4byte doFinishStoneState__Q34Game5Sarai3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game5Sarai3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game5Sarai3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game5Sarai3ObjFPQ34Game5Sarai3FSM
	.4byte getStickPikminNum__Q34Game5Demon3ObjFv
	.4byte getAttackableTarget__Q34Game5Demon3ObjFv
	.4byte catchTarget__Q34Game5Demon3ObjFv
	.4byte resetAttackableTimer__Q34Game5Demon3ObjFf
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
lbl_8051B930:
	.float 3.0
lbl_8051B934: # pi
	.float 3.1415927
lbl_8051B938:
	.float 0.0055555557
lbl_8051B93C:
	.float 0.0
lbl_8051B940:
	.float 1.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game5Demon3ObjFv
__ct__Q34Game5Demon3ObjFv:
/* 8028E394 0028B2D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028E398 0028B2D8  7C 08 02 A6 */	mflr r0
/* 8028E39C 0028B2DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028E3A0 0028B2E0  7C 80 07 35 */	extsh. r0, r4
/* 8028E3A4 0028B2E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028E3A8 0028B2E8  7C 7F 1B 78 */	mr r31, r3
/* 8028E3AC 0028B2EC  41 82 00 24 */	beq .L_8028E3D0
/* 8028E3B0 0028B2F0  38 1F 02 DC */	addi r0, r31, 0x2dc
/* 8028E3B4 0028B2F4  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8028E3B8 0028B2F8  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8028E3BC 0028B2FC  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8028E3C0 0028B300  38 00 00 00 */	li r0, 0
/* 8028E3C4 0028B304  90 7F 02 DC */	stw r3, 0x2dc(r31)
/* 8028E3C8 0028B308  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 8028E3CC 0028B30C  90 1F 02 E4 */	stw r0, 0x2e4(r31)
.L_8028E3D0:
/* 8028E3D0 0028B310  7F E3 FB 78 */	mr r3, r31
/* 8028E3D4 0028B314  38 80 00 00 */	li r4, 0
/* 8028E3D8 0028B318  4B FE 47 ED */	bl __ct__Q34Game5Sarai3ObjFv
/* 8028E3DC 0028B31C  3C 60 80 4D */	lis r3, __vt__Q34Game5Demon3Obj@ha
/* 8028E3E0 0028B320  38 1F 02 DC */	addi r0, r31, 0x2dc
/* 8028E3E4 0028B324  38 A3 A9 C8 */	addi r5, r3, __vt__Q34Game5Demon3Obj@l
/* 8028E3E8 0028B328  7F E3 FB 78 */	mr r3, r31
/* 8028E3EC 0028B32C  90 BF 00 00 */	stw r5, 0(r31)
/* 8028E3F0 0028B330  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8028E3F4 0028B334  38 A5 03 0C */	addi r5, r5, 0x30c
/* 8028E3F8 0028B338  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8028E3FC 0028B33C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8028E400 0028B340  90 A4 00 00 */	stw r5, 0(r4)
/* 8028E404 0028B344  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8028E408 0028B348  7C 04 00 50 */	subf r0, r4, r0
/* 8028E40C 0028B34C  90 04 00 0C */	stw r0, 0xc(r4)
/* 8028E410 0028B350  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028E414 0028B354  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028E418 0028B358  7C 08 03 A6 */	mtlr r0
/* 8028E41C 0028B35C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028E420 0028B360  4E 80 00 20 */	blr 

.global getAttackableTarget__Q34Game5Demon3ObjFv
getAttackableTarget__Q34Game5Demon3ObjFv:
/* 8028E424 0028B364  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8028E428 0028B368  7C 08 02 A6 */	mflr r0
/* 8028E42C 0028B36C  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8028E430 0028B370  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8028E434 0028B374  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 8028E438 0028B378  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 8028E43C 0028B37C  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 8028E440 0028B380  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 8028E444 0028B384  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 8028E448 0028B388  DB 81 00 80 */	stfd f28, 0x80(r1)
/* 8028E44C 0028B38C  F3 81 00 88 */	psq_st f28, 136(r1), 0, qr0
/* 8028E450 0028B390  DB 61 00 70 */	stfd f27, 0x70(r1)
/* 8028E454 0028B394  F3 61 00 78 */	psq_st f27, 120(r1), 0, qr0
/* 8028E458 0028B398  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8028E45C 0028B39C  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8028E460 0028B3A0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8028E464 0028B3A4  7C 7F 1B 78 */	mr r31, r3
/* 8028E468 0028B3A8  C0 43 02 D8 */	lfs f2, 0x2d8(r3)
/* 8028E46C 0028B3AC  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 8028E470 0028B3B0  C0 02 D5 D0 */	lfs f0, lbl_8051B930@sda21(r2)
/* 8028E474 0028B3B4  EC 22 08 2A */	fadds f1, f2, f1
/* 8028E478 0028B3B8  D0 23 02 D8 */	stfs f1, 0x2d8(r3)
/* 8028E47C 0028B3BC  C0 23 02 D8 */	lfs f1, 0x2d8(r3)
/* 8028E480 0028B3C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028E484 0028B3C4  40 81 03 4C */	ble .L_8028E7D0
/* 8028E488 0028B3C8  7F E4 FB 78 */	mr r4, r31
/* 8028E48C 0028B3CC  38 61 00 44 */	addi r3, r1, 0x44
/* 8028E490 0028B3D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028E494 0028B3D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028E498 0028B3D8  7D 89 03 A6 */	mtctr r12
/* 8028E49C 0028B3DC  4E 80 04 21 */	bctrl 
/* 8028E4A0 0028B3E0  C3 E1 00 4C */	lfs f31, 0x4c(r1)
/* 8028E4A4 0028B3E4  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8028E4A8 0028B3E8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8028E4AC 0028B3EC  EC 5F 00 28 */	fsubs f2, f31, f0
/* 8028E4B0 0028B3F0  C3 C1 00 44 */	lfs f30, 0x44(r1)
/* 8028E4B4 0028B3F4  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 8028E4B8 0028B3F8  C0 04 03 5C */	lfs f0, 0x35c(r4)
/* 8028E4BC 0028B3FC  EC 7E 08 28 */	fsubs f3, f30, f1
/* 8028E4C0 0028B400  EC 22 00 B2 */	fmuls f1, f2, f2
/* 8028E4C4 0028B404  EC 00 00 32 */	fmuls f0, f0, f0
/* 8028E4C8 0028B408  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8028E4CC 0028B40C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028E4D0 0028B410  40 80 03 00 */	bge .L_8028E7D0
/* 8028E4D4 0028B414  C0 42 D5 D8 */	lfs f2, lbl_8051B938@sda21(r2)
/* 8028E4D8 0028B418  3C 60 80 4B */	lis r3, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 8028E4DC 0028B41C  C0 24 04 24 */	lfs f1, 0x424(r4)
/* 8028E4E0 0028B420  38 00 00 00 */	li r0, 0
/* 8028E4E4 0028B424  C0 04 03 D4 */	lfs f0, 0x3d4(r4)
/* 8028E4E8 0028B428  38 83 BC B4 */	addi r4, r3, "__vt__22Iterator<Q24Game4Navi>"@l
/* 8028E4EC 0028B42C  EC 22 00 72 */	fmuls f1, f2, f1
/* 8028E4F0 0028B430  C0 42 D5 D4 */	lfs f2, lbl_8051B934@sda21(r2)
/* 8028E4F4 0028B434  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8028E4F8 0028B438  28 00 00 00 */	cmplwi r0, 0
/* 8028E4FC 0028B43C  EF 80 00 32 */	fmuls f28, f0, f0
/* 8028E500 0028B440  90 81 00 50 */	stw r4, 0x50(r1)
/* 8028E504 0028B444  EF A2 00 72 */	fmuls f29, f2, f1
/* 8028E508 0028B448  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8028E50C 0028B44C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8028E510 0028B450  90 61 00 58 */	stw r3, 0x58(r1)
/* 8028E514 0028B454  40 82 00 1C */	bne .L_8028E530
/* 8028E518 0028B458  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E51C 0028B45C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028E520 0028B460  7D 89 03 A6 */	mtctr r12
/* 8028E524 0028B464  4E 80 04 21 */	bctrl 
/* 8028E528 0028B468  90 61 00 54 */	stw r3, 0x54(r1)
/* 8028E52C 0028B46C  48 00 02 84 */	b .L_8028E7B0
.L_8028E530:
/* 8028E530 0028B470  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E534 0028B474  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028E538 0028B478  7D 89 03 A6 */	mtctr r12
/* 8028E53C 0028B47C  4E 80 04 21 */	bctrl 
/* 8028E540 0028B480  90 61 00 54 */	stw r3, 0x54(r1)
/* 8028E544 0028B484  48 00 00 58 */	b .L_8028E59C
.L_8028E548:
/* 8028E548 0028B488  80 61 00 58 */	lwz r3, 0x58(r1)
/* 8028E54C 0028B48C  80 81 00 54 */	lwz r4, 0x54(r1)
/* 8028E550 0028B490  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E554 0028B494  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8028E558 0028B498  7D 89 03 A6 */	mtctr r12
/* 8028E55C 0028B49C  4E 80 04 21 */	bctrl 
/* 8028E560 0028B4A0  7C 64 1B 78 */	mr r4, r3
/* 8028E564 0028B4A4  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 8028E568 0028B4A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E56C 0028B4AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028E570 0028B4B0  7D 89 03 A6 */	mtctr r12
/* 8028E574 0028B4B4  4E 80 04 21 */	bctrl 
/* 8028E578 0028B4B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028E57C 0028B4BC  40 82 02 34 */	bne .L_8028E7B0
/* 8028E580 0028B4C0  80 61 00 58 */	lwz r3, 0x58(r1)
/* 8028E584 0028B4C4  80 81 00 54 */	lwz r4, 0x54(r1)
/* 8028E588 0028B4C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E58C 0028B4CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028E590 0028B4D0  7D 89 03 A6 */	mtctr r12
/* 8028E594 0028B4D4  4E 80 04 21 */	bctrl 
/* 8028E598 0028B4D8  90 61 00 54 */	stw r3, 0x54(r1)
.L_8028E59C:
/* 8028E59C 0028B4DC  81 81 00 50 */	lwz r12, 0x50(r1)
/* 8028E5A0 0028B4E0  38 61 00 50 */	addi r3, r1, 0x50
/* 8028E5A4 0028B4E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028E5A8 0028B4E8  7D 89 03 A6 */	mtctr r12
/* 8028E5AC 0028B4EC  4E 80 04 21 */	bctrl 
/* 8028E5B0 0028B4F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028E5B4 0028B4F4  41 82 FF 94 */	beq .L_8028E548
/* 8028E5B8 0028B4F8  48 00 01 F8 */	b .L_8028E7B0
.L_8028E5BC:
/* 8028E5BC 0028B4FC  80 61 00 58 */	lwz r3, 0x58(r1)
/* 8028E5C0 0028B500  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E5C4 0028B504  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8028E5C8 0028B508  7D 89 03 A6 */	mtctr r12
/* 8028E5CC 0028B50C  4E 80 04 21 */	bctrl 
/* 8028E5D0 0028B510  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E5D4 0028B514  7C 7E 1B 78 */	mr r30, r3
/* 8028E5D8 0028B518  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8028E5DC 0028B51C  7D 89 03 A6 */	mtctr r12
/* 8028E5E0 0028B520  4E 80 04 21 */	bctrl 
/* 8028E5E4 0028B524  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028E5E8 0028B528  41 82 01 0C */	beq .L_8028E6F4
/* 8028E5EC 0028B52C  7F C3 F3 78 */	mr r3, r30
/* 8028E5F0 0028B530  4B F1 0F 99 */	bl isStickToMouth__Q24Game8CreatureFv
/* 8028E5F4 0028B534  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028E5F8 0028B538  40 82 00 FC */	bne .L_8028E6F4
/* 8028E5FC 0028B53C  7F C4 F3 78 */	mr r4, r30
/* 8028E600 0028B540  38 61 00 20 */	addi r3, r1, 0x20
/* 8028E604 0028B544  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028E608 0028B548  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028E60C 0028B54C  7D 89 03 A6 */	mtctr r12
/* 8028E610 0028B550  4E 80 04 21 */	bctrl 
/* 8028E614 0028B554  7F E4 FB 78 */	mr r4, r31
/* 8028E618 0028B558  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8028E61C 0028B55C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028E620 0028B560  38 61 00 2C */	addi r3, r1, 0x2c
/* 8028E624 0028B564  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8028E628 0028B568  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8028E62C 0028B56C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028E630 0028B570  D0 41 00 08 */	stfs f2, 8(r1)
/* 8028E634 0028B574  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8028E638 0028B578  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8028E63C 0028B57C  7D 89 03 A6 */	mtctr r12
/* 8028E640 0028B580  4E 80 04 21 */	bctrl 
/* 8028E644 0028B584  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 8028E648 0028B588  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8028E64C 0028B58C  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 8028E650 0028B590  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8028E654 0028B594  C0 21 00 08 */	lfs f1, 8(r1)
/* 8028E658 0028B598  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8028E65C 0028B59C  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 8028E660 0028B5A0  EC 21 28 28 */	fsubs f1, f1, f5
/* 8028E664 0028B5A4  EC 40 18 28 */	fsubs f2, f0, f3
/* 8028E668 0028B5A8  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 8028E66C 0028B5AC  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8028E670 0028B5B0  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8028E674 0028B5B4  4B DA 6A 95 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8028E678 0028B5B8  48 18 35 59 */	bl roundAng__Ff
/* 8028E67C 0028B5BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028E680 0028B5C0  FF 60 08 90 */	fmr f27, f1
/* 8028E684 0028B5C4  7F E3 FB 78 */	mr r3, r31
/* 8028E688 0028B5C8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8028E68C 0028B5CC  7D 89 03 A6 */	mtctr r12
/* 8028E690 0028B5D0  4E 80 04 21 */	bctrl 
/* 8028E694 0028B5D4  FC 40 08 90 */	fmr f2, f1
/* 8028E698 0028B5D8  FC 20 D8 90 */	fmr f1, f27
/* 8028E69C 0028B5DC  48 18 35 61 */	bl angDist__Fff
/* 8028E6A0 0028B5E0  FC 00 0A 10 */	fabs f0, f1
/* 8028E6A4 0028B5E4  FC 00 00 18 */	frsp f0, f0
/* 8028E6A8 0028B5E8  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 8028E6AC 0028B5EC  4C 40 13 82 */	cror 2, 0, 2
/* 8028E6B0 0028B5F0  40 82 00 44 */	bne .L_8028E6F4
/* 8028E6B4 0028B5F4  7F C4 F3 78 */	mr r4, r30
/* 8028E6B8 0028B5F8  38 61 00 38 */	addi r3, r1, 0x38
/* 8028E6BC 0028B5FC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028E6C0 0028B600  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028E6C4 0028B604  7D 89 03 A6 */	mtctr r12
/* 8028E6C8 0028B608  4E 80 04 21 */	bctrl 
/* 8028E6CC 0028B60C  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8028E6D0 0028B610  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 8028E6D4 0028B614  EC 1F 00 28 */	fsubs f0, f31, f0
/* 8028E6D8 0028B618  EC 3E 08 28 */	fsubs f1, f30, f1
/* 8028E6DC 0028B61C  EC 00 00 32 */	fmuls f0, f0, f0
/* 8028E6E0 0028B620  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 8028E6E4 0028B624  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 8028E6E8 0028B628  40 80 00 0C */	bge .L_8028E6F4
/* 8028E6EC 0028B62C  7F C3 F3 78 */	mr r3, r30
/* 8028E6F0 0028B630  48 00 00 E4 */	b .L_8028E7D4
.L_8028E6F4:
/* 8028E6F4 0028B634  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8028E6F8 0028B638  28 00 00 00 */	cmplwi r0, 0
/* 8028E6FC 0028B63C  40 82 00 24 */	bne .L_8028E720
/* 8028E700 0028B640  80 61 00 58 */	lwz r3, 0x58(r1)
/* 8028E704 0028B644  80 81 00 54 */	lwz r4, 0x54(r1)
/* 8028E708 0028B648  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E70C 0028B64C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028E710 0028B650  7D 89 03 A6 */	mtctr r12
/* 8028E714 0028B654  4E 80 04 21 */	bctrl 
/* 8028E718 0028B658  90 61 00 54 */	stw r3, 0x54(r1)
/* 8028E71C 0028B65C  48 00 00 94 */	b .L_8028E7B0
.L_8028E720:
/* 8028E720 0028B660  80 61 00 58 */	lwz r3, 0x58(r1)
/* 8028E724 0028B664  80 81 00 54 */	lwz r4, 0x54(r1)
/* 8028E728 0028B668  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E72C 0028B66C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028E730 0028B670  7D 89 03 A6 */	mtctr r12
/* 8028E734 0028B674  4E 80 04 21 */	bctrl 
/* 8028E738 0028B678  90 61 00 54 */	stw r3, 0x54(r1)
/* 8028E73C 0028B67C  48 00 00 58 */	b .L_8028E794
.L_8028E740:
/* 8028E740 0028B680  80 61 00 58 */	lwz r3, 0x58(r1)
/* 8028E744 0028B684  80 81 00 54 */	lwz r4, 0x54(r1)
/* 8028E748 0028B688  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E74C 0028B68C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8028E750 0028B690  7D 89 03 A6 */	mtctr r12
/* 8028E754 0028B694  4E 80 04 21 */	bctrl 
/* 8028E758 0028B698  7C 64 1B 78 */	mr r4, r3
/* 8028E75C 0028B69C  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 8028E760 0028B6A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E764 0028B6A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028E768 0028B6A8  7D 89 03 A6 */	mtctr r12
/* 8028E76C 0028B6AC  4E 80 04 21 */	bctrl 
/* 8028E770 0028B6B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028E774 0028B6B4  40 82 00 3C */	bne .L_8028E7B0
/* 8028E778 0028B6B8  80 61 00 58 */	lwz r3, 0x58(r1)
/* 8028E77C 0028B6BC  80 81 00 54 */	lwz r4, 0x54(r1)
/* 8028E780 0028B6C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E784 0028B6C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028E788 0028B6C8  7D 89 03 A6 */	mtctr r12
/* 8028E78C 0028B6CC  4E 80 04 21 */	bctrl 
/* 8028E790 0028B6D0  90 61 00 54 */	stw r3, 0x54(r1)
.L_8028E794:
/* 8028E794 0028B6D4  81 81 00 50 */	lwz r12, 0x50(r1)
/* 8028E798 0028B6D8  38 61 00 50 */	addi r3, r1, 0x50
/* 8028E79C 0028B6DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028E7A0 0028B6E0  7D 89 03 A6 */	mtctr r12
/* 8028E7A4 0028B6E4  4E 80 04 21 */	bctrl 
/* 8028E7A8 0028B6E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028E7AC 0028B6EC  41 82 FF 94 */	beq .L_8028E740
.L_8028E7B0:
/* 8028E7B0 0028B6F0  80 61 00 58 */	lwz r3, 0x58(r1)
/* 8028E7B4 0028B6F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E7B8 0028B6F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028E7BC 0028B6FC  7D 89 03 A6 */	mtctr r12
/* 8028E7C0 0028B700  4E 80 04 21 */	bctrl 
/* 8028E7C4 0028B704  80 81 00 54 */	lwz r4, 0x54(r1)
/* 8028E7C8 0028B708  7C 04 18 40 */	cmplw r4, r3
/* 8028E7CC 0028B70C  40 82 FD F0 */	bne .L_8028E5BC
.L_8028E7D0:
/* 8028E7D0 0028B710  38 60 00 00 */	li r3, 0
.L_8028E7D4:
/* 8028E7D4 0028B714  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 8028E7D8 0028B718  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 8028E7DC 0028B71C  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 8028E7E0 0028B720  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 8028E7E4 0028B724  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 8028E7E8 0028B728  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 8028E7EC 0028B72C  E3 81 00 88 */	psq_l f28, 136(r1), 0, qr0
/* 8028E7F0 0028B730  CB 81 00 80 */	lfd f28, 0x80(r1)
/* 8028E7F4 0028B734  E3 61 00 78 */	psq_l f27, 120(r1), 0, qr0
/* 8028E7F8 0028B738  CB 61 00 70 */	lfd f27, 0x70(r1)
/* 8028E7FC 0028B73C  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8028E800 0028B740  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8028E804 0028B744  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8028E808 0028B748  7C 08 03 A6 */	mtlr r0
/* 8028E80C 0028B74C  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8028E810 0028B750  4E 80 00 20 */	blr 

.global catchTarget__Q34Game5Demon3ObjFv
catchTarget__Q34Game5Demon3ObjFv:
/* 8028E814 0028B754  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8028E818 0028B758  7C 08 02 A6 */	mflr r0
/* 8028E81C 0028B75C  38 80 00 00 */	li r4, 0
/* 8028E820 0028B760  3C A0 80 4B */	lis r5, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 8028E824 0028B764  90 01 00 64 */	stw r0, 0x64(r1)
/* 8028E828 0028B768  38 A5 BC B4 */	addi r5, r5, "__vt__22Iterator<Q24Game4Navi>"@l
/* 8028E82C 0028B76C  28 04 00 00 */	cmplwi r4, 0
/* 8028E830 0028B770  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 8028E834 0028B774  7C 7E 1B 78 */	mr r30, r3
/* 8028E838 0028B778  3B E0 00 00 */	li r31, 0
/* 8028E83C 0028B77C  80 0D 92 E0 */	lwz r0, naviMgr__4Game@sda21(r13)
/* 8028E840 0028B780  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8028E844 0028B784  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8028E848 0028B788  90 81 00 24 */	stw r4, 0x24(r1)
/* 8028E84C 0028B78C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8028E850 0028B790  40 82 00 20 */	bne .L_8028E870
/* 8028E854 0028B794  7C 03 03 78 */	mr r3, r0
/* 8028E858 0028B798  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E85C 0028B79C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028E860 0028B7A0  7D 89 03 A6 */	mtctr r12
/* 8028E864 0028B7A4  4E 80 04 21 */	bctrl 
/* 8028E868 0028B7A8  90 61 00 24 */	stw r3, 0x24(r1)
/* 8028E86C 0028B7AC  48 00 02 AC */	b .L_8028EB18
.L_8028E870:
/* 8028E870 0028B7B0  7C 03 03 78 */	mr r3, r0
/* 8028E874 0028B7B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E878 0028B7B8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028E87C 0028B7BC  7D 89 03 A6 */	mtctr r12
/* 8028E880 0028B7C0  4E 80 04 21 */	bctrl 
/* 8028E884 0028B7C4  90 61 00 24 */	stw r3, 0x24(r1)
/* 8028E888 0028B7C8  48 00 00 58 */	b .L_8028E8E0
.L_8028E88C:
/* 8028E88C 0028B7CC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8028E890 0028B7D0  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8028E894 0028B7D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E898 0028B7D8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8028E89C 0028B7DC  7D 89 03 A6 */	mtctr r12
/* 8028E8A0 0028B7E0  4E 80 04 21 */	bctrl 
/* 8028E8A4 0028B7E4  7C 64 1B 78 */	mr r4, r3
/* 8028E8A8 0028B7E8  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8028E8AC 0028B7EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E8B0 0028B7F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028E8B4 0028B7F4  7D 89 03 A6 */	mtctr r12
/* 8028E8B8 0028B7F8  4E 80 04 21 */	bctrl 
/* 8028E8BC 0028B7FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028E8C0 0028B800  40 82 02 58 */	bne .L_8028EB18
/* 8028E8C4 0028B804  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8028E8C8 0028B808  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8028E8CC 0028B80C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E8D0 0028B810  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028E8D4 0028B814  7D 89 03 A6 */	mtctr r12
/* 8028E8D8 0028B818  4E 80 04 21 */	bctrl 
/* 8028E8DC 0028B81C  90 61 00 24 */	stw r3, 0x24(r1)
.L_8028E8E0:
/* 8028E8E0 0028B820  81 81 00 20 */	lwz r12, 0x20(r1)
/* 8028E8E4 0028B824  38 61 00 20 */	addi r3, r1, 0x20
/* 8028E8E8 0028B828  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028E8EC 0028B82C  7D 89 03 A6 */	mtctr r12
/* 8028E8F0 0028B830  4E 80 04 21 */	bctrl 
/* 8028E8F4 0028B834  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028E8F8 0028B838  41 82 FF 94 */	beq .L_8028E88C
/* 8028E8FC 0028B83C  48 00 02 1C */	b .L_8028EB18
.L_8028E900:
/* 8028E900 0028B840  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8028E904 0028B844  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E908 0028B848  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8028E90C 0028B84C  7D 89 03 A6 */	mtctr r12
/* 8028E910 0028B850  4E 80 04 21 */	bctrl 
/* 8028E914 0028B854  81 83 00 00 */	lwz r12, 0(r3)
/* 8028E918 0028B858  7C 7C 1B 78 */	mr r28, r3
/* 8028E91C 0028B85C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8028E920 0028B860  7D 89 03 A6 */	mtctr r12
/* 8028E924 0028B864  4E 80 04 21 */	bctrl 
/* 8028E928 0028B868  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028E92C 0028B86C  41 82 01 30 */	beq .L_8028EA5C
/* 8028E930 0028B870  7F 83 E3 78 */	mr r3, r28
/* 8028E934 0028B874  4B F1 0C 55 */	bl isStickToMouth__Q24Game8CreatureFv
/* 8028E938 0028B878  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028E93C 0028B87C  40 82 01 20 */	bne .L_8028EA5C
/* 8028E940 0028B880  3B 60 00 00 */	li r27, 0
/* 8028E944 0028B884  48 00 01 0C */	b .L_8028EA50
.L_8028E948:
/* 8028E948 0028B888  7F 64 DB 78 */	mr r4, r27
/* 8028E94C 0028B88C  38 7E 02 C4 */	addi r3, r30, 0x2c4
/* 8028E950 0028B890  4B EA 9E 29 */	bl getSlot__10MouthSlotsFi
/* 8028E954 0028B894  7C 7D 1B 78 */	mr r29, r3
/* 8028E958 0028B898  80 03 00 64 */	lwz r0, 0x64(r3)
/* 8028E95C 0028B89C  28 00 00 00 */	cmplwi r0, 0
/* 8028E960 0028B8A0  40 82 00 EC */	bne .L_8028EA4C
/* 8028E964 0028B8A4  38 81 00 14 */	addi r4, r1, 0x14
/* 8028E968 0028B8A8  4B EA 9B 61 */	bl "getPosition__13MouthCollPartFR10Vector3<f>"
/* 8028E96C 0028B8AC  7F 84 E3 78 */	mr r4, r28
/* 8028E970 0028B8B0  38 61 00 08 */	addi r3, r1, 8
/* 8028E974 0028B8B4  81 9C 00 00 */	lwz r12, 0(r28)
/* 8028E978 0028B8B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028E97C 0028B8BC  7D 89 03 A6 */	mtctr r12
/* 8028E980 0028B8C0  4E 80 04 21 */	bctrl 
/* 8028E984 0028B8C4  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8028E988 0028B8C8  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8028E98C 0028B8CC  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 8028E990 0028B8D0  EC 81 00 28 */	fsubs f4, f1, f0
/* 8028E994 0028B8D4  C0 41 00 08 */	lfs f2, 8(r1)
/* 8028E998 0028B8D8  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8028E99C 0028B8DC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8028E9A0 0028B8E0  EC 63 10 28 */	fsubs f3, f3, f2
/* 8028E9A4 0028B8E4  EC 84 01 32 */	fmuls f4, f4, f4
/* 8028E9A8 0028B8E8  EC 41 00 28 */	fsubs f2, f1, f0
/* 8028E9AC 0028B8EC  C0 02 D5 DC */	lfs f0, lbl_8051B93C@sda21(r2)
/* 8028E9B0 0028B8F0  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 8028E9B4 0028B8F4  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8028E9B8 0028B8F8  EC 22 08 2A */	fadds f1, f2, f1
/* 8028E9BC 0028B8FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028E9C0 0028B900  40 81 00 14 */	ble .L_8028E9D4
/* 8028E9C4 0028B904  40 81 00 14 */	ble .L_8028E9D8
/* 8028E9C8 0028B908  FC 00 08 34 */	frsqrte f0, f1
/* 8028E9CC 0028B90C  EC 20 00 72 */	fmuls f1, f0, f1
/* 8028E9D0 0028B910  48 00 00 08 */	b .L_8028E9D8
.L_8028E9D4:
/* 8028E9D4 0028B914  FC 20 00 90 */	fmr f1, f0
.L_8028E9D8:
/* 8028E9D8 0028B918  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 8028E9DC 0028B91C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028E9E0 0028B920  40 80 00 6C */	bge .L_8028EA4C
/* 8028E9E4 0028B924  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 8028E9E8 0028B928  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAttack@ha
/* 8028E9EC 0028B92C  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 8028E9F0 0028B930  3C 80 80 4B */	lis r4, __vt__Q24Game15InteractSwallow@ha
/* 8028E9F4 0028B934  90 01 00 30 */	stw r0, 0x30(r1)
/* 8028E9F8 0028B938  38 03 4D E0 */	addi r0, r3, __vt__Q24Game14InteractAttack@l
/* 8028E9FC 0028B93C  C0 02 D5 E0 */	lfs f0, lbl_8051B940@sda21(r2)
/* 8028EA00 0028B940  3C 60 80 4C */	lis r3, __vt__Q24Game13InteractSarai@ha
/* 8028EA04 0028B944  90 01 00 30 */	stw r0, 0x30(r1)
/* 8028EA08 0028B948  38 84 4D BC */	addi r4, r4, __vt__Q24Game15InteractSwallow@l
/* 8028EA0C 0028B94C  38 A0 00 00 */	li r5, 0
/* 8028EA10 0028B950  38 03 86 44 */	addi r0, r3, __vt__Q24Game13InteractSarai@l
/* 8028EA14 0028B954  90 81 00 30 */	stw r4, 0x30(r1)
/* 8028EA18 0028B958  7F 83 E3 78 */	mr r3, r28
/* 8028EA1C 0028B95C  38 81 00 30 */	addi r4, r1, 0x30
/* 8028EA20 0028B960  93 C1 00 34 */	stw r30, 0x34(r1)
/* 8028EA24 0028B964  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8028EA28 0028B968  93 A1 00 3C */	stw r29, 0x3c(r1)
/* 8028EA2C 0028B96C  90 A1 00 40 */	stw r5, 0x40(r1)
/* 8028EA30 0028B970  90 01 00 30 */	stw r0, 0x30(r1)
/* 8028EA34 0028B974  81 9C 00 00 */	lwz r12, 0(r28)
/* 8028EA38 0028B978  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8028EA3C 0028B97C  7D 89 03 A6 */	mtctr r12
/* 8028EA40 0028B980  4E 80 04 21 */	bctrl 
/* 8028EA44 0028B984  3B FF 00 01 */	addi r31, r31, 1
/* 8028EA48 0028B988  48 00 00 14 */	b .L_8028EA5C
.L_8028EA4C:
/* 8028EA4C 0028B98C  3B 7B 00 01 */	addi r27, r27, 1
.L_8028EA50:
/* 8028EA50 0028B990  80 1E 02 C4 */	lwz r0, 0x2c4(r30)
/* 8028EA54 0028B994  7C 1B 00 00 */	cmpw r27, r0
/* 8028EA58 0028B998  41 80 FE F0 */	blt .L_8028E948
.L_8028EA5C:
/* 8028EA5C 0028B99C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8028EA60 0028B9A0  28 00 00 00 */	cmplwi r0, 0
/* 8028EA64 0028B9A4  40 82 00 24 */	bne .L_8028EA88
/* 8028EA68 0028B9A8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8028EA6C 0028B9AC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8028EA70 0028B9B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8028EA74 0028B9B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028EA78 0028B9B8  7D 89 03 A6 */	mtctr r12
/* 8028EA7C 0028B9BC  4E 80 04 21 */	bctrl 
/* 8028EA80 0028B9C0  90 61 00 24 */	stw r3, 0x24(r1)
/* 8028EA84 0028B9C4  48 00 00 94 */	b .L_8028EB18
.L_8028EA88:
/* 8028EA88 0028B9C8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8028EA8C 0028B9CC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8028EA90 0028B9D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8028EA94 0028B9D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028EA98 0028B9D8  7D 89 03 A6 */	mtctr r12
/* 8028EA9C 0028B9DC  4E 80 04 21 */	bctrl 
/* 8028EAA0 0028B9E0  90 61 00 24 */	stw r3, 0x24(r1)
/* 8028EAA4 0028B9E4  48 00 00 58 */	b .L_8028EAFC
.L_8028EAA8:
/* 8028EAA8 0028B9E8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8028EAAC 0028B9EC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8028EAB0 0028B9F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8028EAB4 0028B9F4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8028EAB8 0028B9F8  7D 89 03 A6 */	mtctr r12
/* 8028EABC 0028B9FC  4E 80 04 21 */	bctrl 
/* 8028EAC0 0028BA00  7C 64 1B 78 */	mr r4, r3
/* 8028EAC4 0028BA04  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8028EAC8 0028BA08  81 83 00 00 */	lwz r12, 0(r3)
/* 8028EACC 0028BA0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028EAD0 0028BA10  7D 89 03 A6 */	mtctr r12
/* 8028EAD4 0028BA14  4E 80 04 21 */	bctrl 
/* 8028EAD8 0028BA18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028EADC 0028BA1C  40 82 00 3C */	bne .L_8028EB18
/* 8028EAE0 0028BA20  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8028EAE4 0028BA24  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8028EAE8 0028BA28  81 83 00 00 */	lwz r12, 0(r3)
/* 8028EAEC 0028BA2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028EAF0 0028BA30  7D 89 03 A6 */	mtctr r12
/* 8028EAF4 0028BA34  4E 80 04 21 */	bctrl 
/* 8028EAF8 0028BA38  90 61 00 24 */	stw r3, 0x24(r1)
.L_8028EAFC:
/* 8028EAFC 0028BA3C  81 81 00 20 */	lwz r12, 0x20(r1)
/* 8028EB00 0028BA40  38 61 00 20 */	addi r3, r1, 0x20
/* 8028EB04 0028BA44  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028EB08 0028BA48  7D 89 03 A6 */	mtctr r12
/* 8028EB0C 0028BA4C  4E 80 04 21 */	bctrl 
/* 8028EB10 0028BA50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028EB14 0028BA54  41 82 FF 94 */	beq .L_8028EAA8
.L_8028EB18:
/* 8028EB18 0028BA58  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8028EB1C 0028BA5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028EB20 0028BA60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028EB24 0028BA64  7D 89 03 A6 */	mtctr r12
/* 8028EB28 0028BA68  4E 80 04 21 */	bctrl 
/* 8028EB2C 0028BA6C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8028EB30 0028BA70  7C 04 18 40 */	cmplw r4, r3
/* 8028EB34 0028BA74  40 82 FD CC */	bne .L_8028E900
/* 8028EB38 0028BA78  7F E3 FB 78 */	mr r3, r31
/* 8028EB3C 0028BA7C  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 8028EB40 0028BA80  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8028EB44 0028BA84  7C 08 03 A6 */	mtlr r0
/* 8028EB48 0028BA88  38 21 00 60 */	addi r1, r1, 0x60
/* 8028EB4C 0028BA8C  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game5Demon3ObjFv
getEnemyTypeID__Q34Game5Demon3ObjFv:
/* 8028EB50 0028BA90  38 60 00 20 */	li r3, 0x20
/* 8028EB54 0028BA94  4E 80 00 20 */	blr 

.global getStickPikminNum__Q34Game5Demon3ObjFv
getStickPikminNum__Q34Game5Demon3ObjFv:
/* 8028EB58 0028BA98  80 63 01 F4 */	lwz r3, 0x1f4(r3)
/* 8028EB5C 0028BA9C  4E 80 00 20 */	blr 

.global resetAttackableTimer__Q34Game5Demon3ObjFf
resetAttackableTimer__Q34Game5Demon3ObjFf:
/* 8028EB60 0028BAA0  D0 23 02 D8 */	stfs f1, 0x2d8(r3)
/* 8028EB64 0028BAA4  4E 80 00 20 */	blr 
