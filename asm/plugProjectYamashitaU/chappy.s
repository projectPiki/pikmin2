.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game6Chappy3Obj
__vt__Q34Game6Chappy3Obj:
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
	.4byte onInit__Q34Game10ChappyBase3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game10ChappyBase3ObjFR8Graphics
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
	.4byte collisionCallback__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game10ChappyBase3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game6Chappy3ObjFv
	.4byte "birth__Q34Game10ChappyBase3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game10ChappyBase3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game10ChappyBase3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game10ChappyBase3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game6Chappy3ObjFv
	.4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q34Game10ChappyBase3ObjFv
	.4byte setParameters__Q24Game9EnemyBaseFv
	.4byte initMouthSlots__Q34Game10ChappyBase3ObjFv
	.4byte initWalkSmokeEffect__Q34Game10ChappyBase3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game10ChappyBase3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game6Chappy3ObjFv
	.4byte getMouthSlots__Q34Game10ChappyBase3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game10ChappyBase3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte doStartStoneState__Q34Game10ChappyBase3ObjFv
	.4byte doFinishStoneState__Q34Game10ChappyBase3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game10ChappyBase3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game10ChappyBase3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game10ChappyBase3ObjFPQ34Game10ChappyBase3FSM
	.4byte isWakeup__Q34Game10ChappyBase3ObjFv
	.4byte setAnimationSpeed__Q34Game10ChappyBase3ObjFf
	.4byte flickAttackFail__Q34Game10ChappyBase3ObjFv
	.4byte flickStatePikmin__Q34Game10ChappyBase3ObjFv
	.4byte flickAttackBomb__Q34Game10ChappyBase3ObjFv
	.4byte eatAttackPikmin__Q34Game10ChappyBase3ObjFv
	.4byte resetUnderGround__Q34Game10ChappyBase3ObjFv
	.4byte setUnderGround__Q34Game10ChappyBase3ObjFv
	.4byte createEffect__Q34Game10ChappyBase3ObjFv
	.4byte setupEffect__Q34Game10ChappyBase3ObjFv
	.4byte startSleepEffect__Q34Game10ChappyBase3ObjFv
	.4byte finishSleepEffect__Q34Game10ChappyBase3ObjFv
	.4byte createFlickEffect__Q34Game10ChappyBase3ObjFv
	.4byte createSmokeEffect__Q34Game10ChappyBase3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@740@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@740@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@740@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@740@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@740@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@740@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
	.4byte 0

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80517A98
lbl_80517A98:
	.4byte 0x3F666666
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game6Chappy3ObjFv
__ct__Q34Game6Chappy3ObjFv:
/* 80115F90 00112ED0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80115F94 00112ED4  7C 08 02 A6 */	mflr r0
/* 80115F98 00112ED8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80115F9C 00112EDC  7C 80 07 35 */	extsh. r0, r4
/* 80115FA0 00112EE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80115FA4 00112EE4  7C 7F 1B 78 */	mr r31, r3
/* 80115FA8 00112EE8  93 C1 00 08 */	stw r30, 8(r1)
/* 80115FAC 00112EEC  41 82 00 24 */	beq lbl_80115FD0
/* 80115FB0 00112EF0  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 80115FB4 00112EF4  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 80115FB8 00112EF8  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80115FBC 00112EFC  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80115FC0 00112F00  38 00 00 00 */	li r0, 0
/* 80115FC4 00112F04  90 7F 02 E4 */	stw r3, 0x2e4(r31)
/* 80115FC8 00112F08  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 80115FCC 00112F0C  90 1F 02 EC */	stw r0, 0x2ec(r31)
lbl_80115FD0:
/* 80115FD0 00112F10  7F E3 FB 78 */	mr r3, r31
/* 80115FD4 00112F14  38 80 00 00 */	li r4, 0
/* 80115FD8 00112F18  48 01 49 79 */	bl __ct__Q34Game10ChappyBase3ObjFv
/* 80115FDC 00112F1C  3C 60 80 4B */	lis r3, __vt__Q34Game6Chappy3Obj@ha
/* 80115FE0 00112F20  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 80115FE4 00112F24  38 A3 BC D0 */	addi r5, r3, __vt__Q34Game6Chappy3Obj@l
/* 80115FE8 00112F28  38 60 00 2C */	li r3, 0x2c
/* 80115FEC 00112F2C  90 BF 00 00 */	stw r5, 0(r31)
/* 80115FF0 00112F30  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80115FF4 00112F34  38 A5 03 34 */	addi r5, r5, 0x334
/* 80115FF8 00112F38  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80115FFC 00112F3C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80116000 00112F40  90 A4 00 00 */	stw r5, 0(r4)
/* 80116004 00112F44  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80116008 00112F48  7C 04 00 50 */	subf r0, r4, r0
/* 8011600C 00112F4C  90 04 00 0C */	stw r0, 0xc(r4)
/* 80116010 00112F50  4B F0 DE 95 */	bl __nw__FUl
/* 80116014 00112F54  7C 7E 1B 79 */	or. r30, r3, r3
/* 80116018 00112F58  41 82 00 44 */	beq lbl_8011605C
/* 8011601C 00112F5C  48 01 19 59 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80116020 00112F60  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase14ProperAnimator@ha
/* 80116024 00112F64  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 80116028 00112F68  38 03 C1 E8 */	addi r0, r3, __vt__Q34Game10ChappyBase14ProperAnimator@l
/* 8011602C 00112F6C  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80116030 00112F70  90 1E 00 00 */	stw r0, 0(r30)
/* 80116034 00112F74  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 80116038 00112F78  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8011603C 00112F7C  38 00 00 00 */	li r0, 0
/* 80116040 00112F80  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80116044 00112F84  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80116048 00112F88  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8011604C 00112F8C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80116050 00112F90  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80116054 00112F94  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80116058 00112F98  90 1E 00 20 */	stw r0, 0x20(r30)
lbl_8011605C:
/* 8011605C 00112F9C  93 DF 01 84 */	stw r30, 0x184(r31)
/* 80116060 00112FA0  38 60 00 1C */	li r3, 0x1c
/* 80116064 00112FA4  4B F0 DE 41 */	bl __nw__FUl
/* 80116068 00112FA8  7C 64 1B 79 */	or. r4, r3, r3
/* 8011606C 00112FAC  41 82 00 24 */	beq lbl_80116090
/* 80116070 00112FB0  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 80116074 00112FB4  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase3FSM@ha
/* 80116078 00112FB8  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8011607C 00112FBC  38 A0 FF FF */	li r5, -1
/* 80116080 00112FC0  90 04 00 00 */	stw r0, 0(r4)
/* 80116084 00112FC4  38 03 C1 C4 */	addi r0, r3, __vt__Q34Game10ChappyBase3FSM@l
/* 80116088 00112FC8  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8011608C 00112FCC  90 04 00 00 */	stw r0, 0(r4)
lbl_80116090:
/* 80116090 00112FD0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80116094 00112FD4  7F E3 FB 78 */	mr r3, r31
/* 80116098 00112FD8  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8011609C 00112FDC  7D 89 03 A6 */	mtctr r12
/* 801160A0 00112FE0  4E 80 04 21 */	bctrl 
/* 801160A4 00112FE4  7F E3 FB 78 */	mr r3, r31
/* 801160A8 00112FE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801160AC 00112FEC  81 8C 03 1C */	lwz r12, 0x31c(r12)
/* 801160B0 00112FF0  7D 89 03 A6 */	mtctr r12
/* 801160B4 00112FF4  4E 80 04 21 */	bctrl 
/* 801160B8 00112FF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801160BC 00112FFC  7F E3 FB 78 */	mr r3, r31
/* 801160C0 00113000  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801160C4 00113004  83 C1 00 08 */	lwz r30, 8(r1)
/* 801160C8 00113008  7C 08 03 A6 */	mtlr r0
/* 801160CC 0011300C  38 21 00 10 */	addi r1, r1, 0x10
/* 801160D0 00113010  4E 80 00 20 */	blr 

.global setFSM__Q34Game10ChappyBase3ObjFPQ34Game10ChappyBase3FSM
setFSM__Q34Game10ChappyBase3ObjFPQ34Game10ChappyBase3FSM:
/* 801160D4 00113014  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801160D8 00113018  7C 08 02 A6 */	mflr r0
/* 801160DC 0011301C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801160E0 00113020  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801160E4 00113024  7C 7F 1B 78 */	mr r31, r3
/* 801160E8 00113028  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 801160EC 0011302C  7F E4 FB 78 */	mr r4, r31
/* 801160F0 00113030  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 801160F4 00113034  81 83 00 00 */	lwz r12, 0(r3)
/* 801160F8 00113038  81 8C 00 08 */	lwz r12, 8(r12)
/* 801160FC 0011303C  7D 89 03 A6 */	mtctr r12
/* 80116100 00113040  4E 80 04 21 */	bctrl 
/* 80116104 00113044  38 00 00 00 */	li r0, 0
/* 80116108 00113048  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8011610C 0011304C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80116110 00113050  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80116114 00113054  7C 08 03 A6 */	mtlr r0
/* 80116118 00113058  38 21 00 10 */	addi r1, r1, 0x10
/* 8011611C 0011305C  4E 80 00 20 */	blr 

.global __dt__Q34Game10ChappyBase3ObjFv
__dt__Q34Game10ChappyBase3ObjFv:
/* 80116120 00113060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80116124 00113064  7C 08 02 A6 */	mflr r0
/* 80116128 00113068  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011612C 0011306C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80116130 00113070  7C 7F 1B 79 */	or. r31, r3, r3
/* 80116134 00113074  93 C1 00 08 */	stw r30, 8(r1)
/* 80116138 00113078  7C 9E 23 78 */	mr r30, r4
/* 8011613C 0011307C  41 82 00 84 */	beq lbl_801161C0
/* 80116140 00113080  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase3Obj@ha
/* 80116144 00113084  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 80116148 00113088  38 83 DF 4C */	addi r4, r3, __vt__Q34Game10ChappyBase3Obj@l
/* 8011614C 0011308C  90 9F 00 00 */	stw r4, 0(r31)
/* 80116150 00113090  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 80116154 00113094  38 84 03 34 */	addi r4, r4, 0x334
/* 80116158 00113098  90 7F 01 78 */	stw r3, 0x178(r31)
/* 8011615C 0011309C  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 80116160 001130A0  90 83 00 00 */	stw r4, 0(r3)
/* 80116164 001130A4  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 80116168 001130A8  7C 03 00 50 */	subf r0, r3, r0
/* 8011616C 001130AC  90 03 00 0C */	stw r0, 0xc(r3)
/* 80116170 001130B0  41 82 00 40 */	beq lbl_801161B0
/* 80116174 001130B4  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 80116178 001130B8  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 8011617C 001130BC  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 80116180 001130C0  38 7F 02 90 */	addi r3, r31, 0x290
/* 80116184 001130C4  90 9F 00 00 */	stw r4, 0(r31)
/* 80116188 001130C8  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 8011618C 001130CC  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 80116190 001130D0  38 80 FF FF */	li r4, -1
/* 80116194 001130D4  90 BF 01 78 */	stw r5, 0x178(r31)
/* 80116198 001130D8  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 8011619C 001130DC  90 C5 00 00 */	stw r6, 0(r5)
/* 801161A0 001130E0  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 801161A4 001130E4  7C 05 00 50 */	subf r0, r5, r0
/* 801161A8 001130E8  90 05 00 0C */	stw r0, 0xc(r5)
/* 801161AC 001130EC  48 2F B3 DD */	bl __dt__5CNodeFv
lbl_801161B0:
/* 801161B0 001130F0  7F C0 07 35 */	extsh. r0, r30
/* 801161B4 001130F4  40 81 00 0C */	ble lbl_801161C0
/* 801161B8 001130F8  7F E3 FB 78 */	mr r3, r31
/* 801161BC 001130FC  4B F0 DE F9 */	bl __dl__FPv
lbl_801161C0:
/* 801161C0 00113100  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801161C4 00113104  7F E3 FB 78 */	mr r3, r31
/* 801161C8 00113108  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801161CC 0011310C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801161D0 00113110  7C 08 03 A6 */	mtlr r0
/* 801161D4 00113114  38 21 00 10 */	addi r1, r1, 0x10
/* 801161D8 00113118  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game6Chappy3ObjFv
changeMaterial__Q34Game6Chappy3ObjFv:
/* 801161DC 0011311C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801161E0 00113120  7C 08 02 A6 */	mflr r0
/* 801161E4 00113124  90 01 00 24 */	stw r0, 0x24(r1)
/* 801161E8 00113128  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801161EC 0011312C  7C 7B 1B 78 */	mr r27, r3
/* 801161F0 00113130  80 63 01 80 */	lwz r3, 0x180(r3)
/* 801161F4 00113134  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 801161F8 00113138  81 83 00 00 */	lwz r12, 0(r3)
/* 801161FC 0011313C  83 84 00 08 */	lwz r28, 8(r4)
/* 80116200 00113140  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 80116204 00113144  83 BC 00 04 */	lwz r29, 4(r28)
/* 80116208 00113148  7D 89 03 A6 */	mtctr r12
/* 8011620C 0011314C  4E 80 04 21 */	bctrl 
/* 80116210 00113150  7C 7E 1B 78 */	mr r30, r3
/* 80116214 00113154  80 7B 01 80 */	lwz r3, 0x180(r27)
/* 80116218 00113158  81 83 00 00 */	lwz r12, 0(r3)
/* 8011621C 0011315C  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 80116220 00113160  7D 89 03 A6 */	mtctr r12
/* 80116224 00113164  4E 80 04 21 */	bctrl 
/* 80116228 00113168  7C 7F 1B 78 */	mr r31, r3
/* 8011622C 0011316C  7F 83 E3 78 */	mr r3, r28
/* 80116230 00113170  81 9C 00 00 */	lwz r12, 0(r28)
/* 80116234 00113174  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80116238 00113178  7D 89 03 A6 */	mtctr r12
/* 8011623C 0011317C  4E 80 04 21 */	bctrl 
/* 80116240 00113180  80 7B 01 74 */	lwz r3, 0x174(r27)
/* 80116244 00113184  88 1E 00 00 */	lbz r0, 0(r30)
/* 80116248 00113188  80 63 00 08 */	lwz r3, 8(r3)
/* 8011624C 0011318C  80 63 00 04 */	lwz r3, 4(r3)
/* 80116250 00113190  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 80116254 00113194  80 64 00 04 */	lwz r3, 4(r4)
/* 80116258 00113198  98 03 00 00 */	stb r0, 0(r3)
/* 8011625C 0011319C  88 1E 00 01 */	lbz r0, 1(r30)
/* 80116260 001131A0  98 03 00 01 */	stb r0, 1(r3)
/* 80116264 001131A4  A0 1E 00 02 */	lhz r0, 2(r30)
/* 80116268 001131A8  B0 03 00 02 */	sth r0, 2(r3)
/* 8011626C 001131AC  A0 1E 00 04 */	lhz r0, 4(r30)
/* 80116270 001131B0  B0 03 00 04 */	sth r0, 4(r3)
/* 80116274 001131B4  88 1E 00 06 */	lbz r0, 6(r30)
/* 80116278 001131B8  98 03 00 06 */	stb r0, 6(r3)
/* 8011627C 001131BC  88 1E 00 07 */	lbz r0, 7(r30)
/* 80116280 001131C0  98 03 00 07 */	stb r0, 7(r3)
/* 80116284 001131C4  88 1E 00 08 */	lbz r0, 8(r30)
/* 80116288 001131C8  98 03 00 08 */	stb r0, 8(r3)
/* 8011628C 001131CC  88 1E 00 09 */	lbz r0, 9(r30)
/* 80116290 001131D0  98 03 00 09 */	stb r0, 9(r3)
/* 80116294 001131D4  A0 1E 00 0A */	lhz r0, 0xa(r30)
/* 80116298 001131D8  B0 03 00 0A */	sth r0, 0xa(r3)
/* 8011629C 001131DC  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 801162A0 001131E0  90 03 00 0C */	stw r0, 0xc(r3)
/* 801162A4 001131E4  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 801162A8 001131E8  98 03 00 10 */	stb r0, 0x10(r3)
/* 801162AC 001131EC  88 1E 00 11 */	lbz r0, 0x11(r30)
/* 801162B0 001131F0  98 03 00 11 */	stb r0, 0x11(r3)
/* 801162B4 001131F4  88 1E 00 12 */	lbz r0, 0x12(r30)
/* 801162B8 001131F8  98 03 00 12 */	stb r0, 0x12(r3)
/* 801162BC 001131FC  88 1E 00 13 */	lbz r0, 0x13(r30)
/* 801162C0 00113200  98 03 00 13 */	stb r0, 0x13(r3)
/* 801162C4 00113204  88 1E 00 14 */	lbz r0, 0x14(r30)
/* 801162C8 00113208  98 03 00 14 */	stb r0, 0x14(r3)
/* 801162CC 0011320C  88 1E 00 15 */	lbz r0, 0x15(r30)
/* 801162D0 00113210  98 03 00 15 */	stb r0, 0x15(r3)
/* 801162D4 00113214  88 1E 00 16 */	lbz r0, 0x16(r30)
/* 801162D8 00113218  98 03 00 16 */	stb r0, 0x16(r3)
/* 801162DC 0011321C  88 1E 00 17 */	lbz r0, 0x17(r30)
/* 801162E0 00113220  98 03 00 17 */	stb r0, 0x17(r3)
/* 801162E4 00113224  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 801162E8 00113228  98 03 00 18 */	stb r0, 0x18(r3)
/* 801162EC 0011322C  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 801162F0 00113230  98 03 00 19 */	stb r0, 0x19(r3)
/* 801162F4 00113234  A8 1E 00 1A */	lha r0, 0x1a(r30)
/* 801162F8 00113238  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 801162FC 0011323C  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 80116300 00113240  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80116304 00113244  80 64 00 04 */	lwz r3, 4(r4)
/* 80116308 00113248  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8011630C 0011324C  7C 1E 02 14 */	add r0, r30, r0
/* 80116310 00113250  7C 03 00 50 */	subf r0, r3, r0
/* 80116314 00113254  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80116318 00113258  80 64 00 04 */	lwz r3, 4(r4)
/* 8011631C 0011325C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80116320 00113260  7C 1E 02 14 */	add r0, r30, r0
/* 80116324 00113264  7C 03 00 50 */	subf r0, r3, r0
/* 80116328 00113268  90 03 00 0C */	stw r0, 0xc(r3)
/* 8011632C 0011326C  80 7B 01 74 */	lwz r3, 0x174(r27)
/* 80116330 00113270  88 1F 00 00 */	lbz r0, 0(r31)
/* 80116334 00113274  80 63 00 08 */	lwz r3, 8(r3)
/* 80116338 00113278  80 63 00 04 */	lwz r3, 4(r3)
/* 8011633C 0011327C  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 80116340 00113280  80 64 00 04 */	lwz r3, 4(r4)
/* 80116344 00113284  98 03 00 20 */	stb r0, 0x20(r3)
/* 80116348 00113288  88 1F 00 01 */	lbz r0, 1(r31)
/* 8011634C 0011328C  98 03 00 21 */	stb r0, 0x21(r3)
/* 80116350 00113290  A0 1F 00 02 */	lhz r0, 2(r31)
/* 80116354 00113294  B0 03 00 22 */	sth r0, 0x22(r3)
/* 80116358 00113298  A0 1F 00 04 */	lhz r0, 4(r31)
/* 8011635C 0011329C  B0 03 00 24 */	sth r0, 0x24(r3)
/* 80116360 001132A0  88 1F 00 06 */	lbz r0, 6(r31)
/* 80116364 001132A4  98 03 00 26 */	stb r0, 0x26(r3)
/* 80116368 001132A8  88 1F 00 07 */	lbz r0, 7(r31)
/* 8011636C 001132AC  98 03 00 27 */	stb r0, 0x27(r3)
/* 80116370 001132B0  88 1F 00 08 */	lbz r0, 8(r31)
/* 80116374 001132B4  98 03 00 28 */	stb r0, 0x28(r3)
/* 80116378 001132B8  88 1F 00 09 */	lbz r0, 9(r31)
/* 8011637C 001132BC  98 03 00 29 */	stb r0, 0x29(r3)
/* 80116380 001132C0  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 80116384 001132C4  B0 03 00 2A */	sth r0, 0x2a(r3)
/* 80116388 001132C8  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8011638C 001132CC  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80116390 001132D0  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 80116394 001132D4  98 03 00 30 */	stb r0, 0x30(r3)
/* 80116398 001132D8  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 8011639C 001132DC  98 03 00 31 */	stb r0, 0x31(r3)
/* 801163A0 001132E0  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 801163A4 001132E4  98 03 00 32 */	stb r0, 0x32(r3)
/* 801163A8 001132E8  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 801163AC 001132EC  98 03 00 33 */	stb r0, 0x33(r3)
/* 801163B0 001132F0  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 801163B4 001132F4  98 03 00 34 */	stb r0, 0x34(r3)
/* 801163B8 001132F8  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 801163BC 001132FC  98 03 00 35 */	stb r0, 0x35(r3)
/* 801163C0 00113300  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 801163C4 00113304  98 03 00 36 */	stb r0, 0x36(r3)
/* 801163C8 00113308  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 801163CC 0011330C  3C A0 80 51 */	lis r5, j3dSys@ha
/* 801163D0 00113310  3B 65 F2 30 */	addi r27, r5, j3dSys@l
/* 801163D4 00113314  3B C0 00 00 */	li r30, 0
/* 801163D8 00113318  98 03 00 37 */	stb r0, 0x37(r3)
/* 801163DC 0011331C  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 801163E0 00113320  98 03 00 38 */	stb r0, 0x38(r3)
/* 801163E4 00113324  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 801163E8 00113328  98 03 00 39 */	stb r0, 0x39(r3)
/* 801163EC 0011332C  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 801163F0 00113330  B0 03 00 3A */	sth r0, 0x3a(r3)
/* 801163F4 00113334  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 801163F8 00113338  90 03 00 3C */	stw r0, 0x3c(r3)
/* 801163FC 0011333C  80 A4 00 04 */	lwz r5, 4(r4)
/* 80116400 00113340  80 05 00 3C */	lwz r0, 0x3c(r5)
/* 80116404 00113344  38 65 00 20 */	addi r3, r5, 0x20
/* 80116408 00113348  7C 1F 02 14 */	add r0, r31, r0
/* 8011640C 0011334C  7C 03 00 50 */	subf r0, r3, r0
/* 80116410 00113350  90 05 00 3C */	stw r0, 0x3c(r5)
/* 80116414 00113354  80 84 00 04 */	lwz r4, 4(r4)
/* 80116418 00113358  80 04 00 2C */	lwz r0, 0x2c(r4)
/* 8011641C 0011335C  38 64 00 20 */	addi r3, r4, 0x20
/* 80116420 00113360  7C 1F 02 14 */	add r0, r31, r0
/* 80116424 00113364  7C 03 00 50 */	subf r0, r3, r0
/* 80116428 00113368  90 04 00 2C */	stw r0, 0x2c(r4)
/* 8011642C 0011336C  48 00 00 3C */	b lbl_80116468
lbl_80116430:
/* 80116430 00113370  80 9C 00 C0 */	lwz r4, 0xc0(r28)
/* 80116434 00113374  57 C3 32 B2 */	rlwinm r3, r30, 6, 0xa, 0x19
/* 80116438 00113378  57 C0 13 BA */	rlwinm r0, r30, 2, 0xe, 0x1d
/* 8011643C 0011337C  7C 84 1A 14 */	add r4, r4, r3
/* 80116440 00113380  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 80116444 00113384  80 7D 00 60 */	lwz r3, 0x60(r29)
/* 80116448 00113388  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8011644C 0011338C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80116450 00113390  80 84 00 34 */	lwz r4, 0x34(r4)
/* 80116454 00113394  81 83 00 00 */	lwz r12, 0(r3)
/* 80116458 00113398  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8011645C 0011339C  7D 89 03 A6 */	mtctr r12
/* 80116460 001133A0  4E 80 04 21 */	bctrl 
/* 80116464 001133A4  3B DE 00 01 */	addi r30, r30, 1
lbl_80116468:
/* 80116468 001133A8  A0 1D 00 5C */	lhz r0, 0x5c(r29)
/* 8011646C 001133AC  57 C3 04 3E */	clrlwi r3, r30, 0x10
/* 80116470 001133B0  7C 03 00 40 */	cmplw r3, r0
/* 80116474 001133B4  41 80 FF BC */	blt lbl_80116430
/* 80116478 001133B8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8011647C 001133BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80116480 001133C0  7C 08 03 A6 */	mtlr r0
/* 80116484 001133C4  38 21 00 20 */	addi r1, r1, 0x20
/* 80116488 001133C8  4E 80 00 20 */	blr 

.global getChangeTexture1__Q34Game6Chappy3MgrFv
getChangeTexture1__Q34Game6Chappy3MgrFv:
/* 8011648C 001133CC  80 63 00 48 */	lwz r3, 0x48(r3)
/* 80116490 001133D0  4E 80 00 20 */	blr 

.global getChangeTexture0__Q34Game6Chappy3MgrFv
getChangeTexture0__Q34Game6Chappy3MgrFv:
/* 80116494 001133D4  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80116498 001133D8  4E 80 00 20 */	blr 

.global __dt__Q34Game6Chappy3ObjFv
__dt__Q34Game6Chappy3ObjFv:
/* 8011649C 001133DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801164A0 001133E0  7C 08 02 A6 */	mflr r0
/* 801164A4 001133E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801164A8 001133E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801164AC 001133EC  7C 9F 23 78 */	mr r31, r4
/* 801164B0 001133F0  93 C1 00 08 */	stw r30, 8(r1)
/* 801164B4 001133F4  7C 7E 1B 79 */	or. r30, r3, r3
/* 801164B8 001133F8  41 82 00 B4 */	beq lbl_8011656C
/* 801164BC 001133FC  3C 60 80 4B */	lis r3, __vt__Q34Game6Chappy3Obj@ha
/* 801164C0 00113400  38 BE 02 E4 */	addi r5, r30, 0x2e4
/* 801164C4 00113404  38 83 BC D0 */	addi r4, r3, __vt__Q34Game6Chappy3Obj@l
/* 801164C8 00113408  90 9E 00 00 */	stw r4, 0(r30)
/* 801164CC 0011340C  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 801164D0 00113410  38 04 03 34 */	addi r0, r4, 0x334
/* 801164D4 00113414  90 7E 01 78 */	stw r3, 0x178(r30)
/* 801164D8 00113418  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801164DC 0011341C  90 03 00 00 */	stw r0, 0(r3)
/* 801164E0 00113420  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801164E4 00113424  7C 03 28 50 */	subf r0, r3, r5
/* 801164E8 00113428  90 03 00 0C */	stw r0, 0xc(r3)
/* 801164EC 0011342C  41 82 00 70 */	beq lbl_8011655C
/* 801164F0 00113430  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase3Obj@ha
/* 801164F4 00113434  38 83 DF 4C */	addi r4, r3, __vt__Q34Game10ChappyBase3Obj@l
/* 801164F8 00113438  90 9E 00 00 */	stw r4, 0(r30)
/* 801164FC 0011343C  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 80116500 00113440  38 04 03 34 */	addi r0, r4, 0x334
/* 80116504 00113444  90 7E 01 78 */	stw r3, 0x178(r30)
/* 80116508 00113448  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8011650C 0011344C  90 03 00 00 */	stw r0, 0(r3)
/* 80116510 00113450  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 80116514 00113454  7C 03 28 50 */	subf r0, r3, r5
/* 80116518 00113458  90 03 00 0C */	stw r0, 0xc(r3)
/* 8011651C 0011345C  41 82 00 40 */	beq lbl_8011655C
/* 80116520 00113460  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 80116524 00113464  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 80116528 00113468  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 8011652C 0011346C  38 7E 02 90 */	addi r3, r30, 0x290
/* 80116530 00113470  90 9E 00 00 */	stw r4, 0(r30)
/* 80116534 00113474  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 80116538 00113478  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 8011653C 0011347C  38 80 FF FF */	li r4, -1
/* 80116540 00113480  90 BE 01 78 */	stw r5, 0x178(r30)
/* 80116544 00113484  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 80116548 00113488  90 C5 00 00 */	stw r6, 0(r5)
/* 8011654C 0011348C  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 80116550 00113490  7C 05 00 50 */	subf r0, r5, r0
/* 80116554 00113494  90 05 00 0C */	stw r0, 0xc(r5)
/* 80116558 00113498  48 2F B0 31 */	bl __dt__5CNodeFv
lbl_8011655C:
/* 8011655C 0011349C  7F E0 07 35 */	extsh. r0, r31
/* 80116560 001134A0  40 81 00 0C */	ble lbl_8011656C
/* 80116564 001134A4  7F C3 F3 78 */	mr r3, r30
/* 80116568 001134A8  4B F0 DB 4D */	bl __dl__FPv
lbl_8011656C:
/* 8011656C 001134AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80116570 001134B0  7F C3 F3 78 */	mr r3, r30
/* 80116574 001134B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80116578 001134B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011657C 001134BC  7C 08 03 A6 */	mtlr r0
/* 80116580 001134C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80116584 001134C4  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game6Chappy3ObjFv
getEnemyTypeID__Q34Game6Chappy3ObjFv:
/* 80116588 001134C8  38 60 00 02 */	li r3, 2
/* 8011658C 001134CC  4E 80 00 20 */	blr 

.global getMouthSlots__Q34Game10ChappyBase3ObjFv
getMouthSlots__Q34Game10ChappyBase3ObjFv:
/* 80116590 001134D0  38 63 02 C0 */	addi r3, r3, 0x2c0
/* 80116594 001134D4  4E 80 00 20 */	blr 

.global setAnimationSpeed__Q34Game10ChappyBase3ObjFf
setAnimationSpeed__Q34Game10ChappyBase3ObjFf:
/* 80116598 001134D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011659C 001134DC  7C 08 02 A6 */	mflr r0
/* 801165A0 001134E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801165A4 001134E4  4B FF 0D ED */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 801165A8 001134E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801165AC 001134EC  7C 08 03 A6 */	mtlr r0
/* 801165B0 001134F0  38 21 00 10 */	addi r1, r1, 0x10
/* 801165B4 001134F4  4E 80 00 20 */	blr 

.global resetUnderGround__Q34Game10ChappyBase3ObjFv
resetUnderGround__Q34Game10ChappyBase3ObjFv:
/* 801165B8 001134F8  4E 80 00 20 */	blr 

.global setUnderGround__Q34Game10ChappyBase3ObjFv
setUnderGround__Q34Game10ChappyBase3ObjFv:
/* 801165BC 001134FC  4E 80 00 20 */	blr 

.global createFlickEffect__Q34Game10ChappyBase3ObjFv
createFlickEffect__Q34Game10ChappyBase3ObjFv:
/* 801165C0 00113500  4E 80 00 20 */	blr 

.global createSmokeEffect__Q34Game10ChappyBase3ObjFv
createSmokeEffect__Q34Game10ChappyBase3ObjFv:
/* 801165C4 00113504  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q34Game10ChappyBase3ObjFv
getDownSmokeScale__Q34Game10ChappyBase3ObjFv:
/* 801165C8 00113508  C0 22 97 38 */	lfs f1, lbl_80517A98@sda21(r2)
/* 801165CC 0011350C  4E 80 00 20 */	blr 

.global "@740@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
"@740@12@viewOnPelletKilled__Q24Game9EnemyBaseFv":
/* 801165D0 00113510  39 60 00 0C */	li r11, 0xc
/* 801165D4 00113514  7D 63 58 2E */	lwzx r11, r3, r11
/* 801165D8 00113518  7C 63 5A 14 */	add r3, r3, r11
/* 801165DC 0011351C  38 63 FD 1C */	addi r3, r3, -740
/* 801165E0 00113520  4B FF 03 3C */	b viewOnPelletKilled__Q24Game9EnemyBaseFv

.global "@740@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
"@740@12@viewStartCarryMotion__Q24Game9EnemyBaseFv":
/* 801165E4 00113524  39 60 00 0C */	li r11, 0xc
/* 801165E8 00113528  7D 63 58 2E */	lwzx r11, r3, r11
/* 801165EC 0011352C  7C 63 5A 14 */	add r3, r3, r11
/* 801165F0 00113530  38 63 FD 1C */	addi r3, r3, -740
/* 801165F4 00113534  4B FF 00 B4 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv

.global "@740@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
"@740@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv":
/* 801165F8 00113538  39 60 00 0C */	li r11, 0xc
/* 801165FC 0011353C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80116600 00113540  7C 63 5A 14 */	add r3, r3, r11
/* 80116604 00113544  38 63 FD 1C */	addi r3, r3, -740
/* 80116608 00113548  4B FF 00 C0 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv

.global "@740@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
"@740@12@view_finish_carrymotion__Q24Game9EnemyBaseFv":
/* 8011660C 0011354C  39 60 00 0C */	li r11, 0xc
/* 80116610 00113550  7D 63 58 2E */	lwzx r11, r3, r11
/* 80116614 00113554  7C 63 5A 14 */	add r3, r3, r11
/* 80116618 00113558  38 63 FD 1C */	addi r3, r3, -740
/* 8011661C 0011355C  4B FF 04 5C */	b view_finish_carrymotion__Q24Game9EnemyBaseFv

.global "@740@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
"@740@12@view_start_carrymotion__Q24Game9EnemyBaseFv":
/* 80116620 00113560  39 60 00 0C */	li r11, 0xc
/* 80116624 00113564  7D 63 58 2E */	lwzx r11, r3, r11
/* 80116628 00113568  7C 63 5A 14 */	add r3, r3, r11
/* 8011662C 0011356C  38 63 FD 1C */	addi r3, r3, -740
/* 80116630 00113570  4B FF 04 1C */	b view_start_carrymotion__Q24Game9EnemyBaseFv

.global "@740@12@viewGetShape__Q24Game9EnemyBaseFv"
"@740@12@viewGetShape__Q24Game9EnemyBaseFv":
/* 80116634 00113574  39 60 00 0C */	li r11, 0xc
/* 80116638 00113578  7D 63 58 2E */	lwzx r11, r3, r11
/* 8011663C 0011357C  7C 63 5A 14 */	add r3, r3, r11
/* 80116640 00113580  38 63 FD 1C */	addi r3, r3, -740
/* 80116644 00113584  4B FF 00 5C */	b viewGetShape__Q24Game9EnemyBaseFv
