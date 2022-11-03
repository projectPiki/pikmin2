.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23efx8TPkDiveB
__vt__Q23efx8TPkDiveB:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q34Game7Tadpole3Obj
__vt__Q34Game7Tadpole3Obj:
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
	.4byte onInit__Q34Game7Tadpole3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game7Tadpole3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game7Tadpole3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game7Tadpole3ObjFv
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
	.4byte getShadowParam__Q34Game7Tadpole3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game7Tadpole3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game7Tadpole3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game7Tadpole3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game7Tadpole3ObjFR8Graphics
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
	.4byte getEnemyTypeID__Q34Game7Tadpole3ObjFv
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
	.4byte hipdropCallBack__Q34Game7Tadpole3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q24Game9EnemyBaseFv
	.4byte doFinishStoneState__Q24Game9EnemyBaseFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game7Tadpole3ObjFv
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
	.4byte setFSM__Q34Game7Tadpole3ObjFPQ34Game7Tadpole3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@728@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@728@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@728@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@728@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@728@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@728@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051B410
lbl_8051B410:
	.4byte 0x00000000
.global lbl_8051B414
lbl_8051B414:
	.4byte 0x40200000
.global lbl_8051B418
lbl_8051B418:
	.float 1.0
.global lbl_8051B41C
lbl_8051B41C:
	.4byte 0x42480000
.global lbl_8051B420
lbl_8051B420:
	.4byte 0x40F00000
.global lbl_8051B424
lbl_8051B424:
	.4byte 0x47000000
.global lbl_8051B428
lbl_8051B428:
	.4byte 0x40490FDB
.global lbl_8051B42C
lbl_8051B42C:
	.4byte 0x3FC90FDB
.global lbl_8051B430
lbl_8051B430:
	.4byte 0x43A2F983
.global lbl_8051B434
lbl_8051B434:
	.4byte 0xC3A2F983
.global lbl_8051B438
lbl_8051B438:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051B440
lbl_8051B440:
	.4byte 0x41B00000
.global lbl_8051B444
lbl_8051B444:
	.4byte 0x3F99999A
.global lbl_8051B448
lbl_8051B448:
	.float 0.3
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game7Tadpole3ObjFv
__ct__Q34Game7Tadpole3ObjFv:
/* 802785D0 00275510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802785D4 00275514  7C 08 02 A6 */	mflr r0
/* 802785D8 00275518  90 01 00 14 */	stw r0, 0x14(r1)
/* 802785DC 0027551C  7C 80 07 35 */	extsh. r0, r4
/* 802785E0 00275520  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802785E4 00275524  7C 7F 1B 78 */	mr r31, r3
/* 802785E8 00275528  93 C1 00 08 */	stw r30, 8(r1)
/* 802785EC 0027552C  41 82 00 24 */	beq .L_80278610
/* 802785F0 00275530  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 802785F4 00275534  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802785F8 00275538  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802785FC 0027553C  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80278600 00275540  38 00 00 00 */	li r0, 0
/* 80278604 00275544  90 7F 02 D8 */	stw r3, 0x2d8(r31)
/* 80278608 00275548  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 8027860C 0027554C  90 1F 02 E0 */	stw r0, 0x2e0(r31)
.L_80278610:
/* 80278610 00275550  7F E3 FB 78 */	mr r3, r31
/* 80278614 00275554  38 80 00 00 */	li r4, 0
/* 80278618 00275558  4B E8 8D 89 */	bl __ct__Q24Game9EnemyBaseFv
/* 8027861C 0027555C  3C 60 80 4C */	lis r3, __vt__Q34Game7Tadpole3Obj@ha
/* 80278620 00275560  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 80278624 00275564  38 A3 75 0C */	addi r5, r3, __vt__Q34Game7Tadpole3Obj@l
/* 80278628 00275568  38 60 00 2C */	li r3, 0x2c
/* 8027862C 0027556C  90 BF 00 00 */	stw r5, 0(r31)
/* 80278630 00275570  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80278634 00275574  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 80278638 00275578  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8027863C 0027557C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80278640 00275580  90 A4 00 00 */	stw r5, 0(r4)
/* 80278644 00275584  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80278648 00275588  7C 04 00 50 */	subf r0, r4, r0
/* 8027864C 0027558C  90 04 00 0C */	stw r0, 0xc(r4)
/* 80278650 00275590  4B DA B8 55 */	bl __nw__FUl
/* 80278654 00275594  7C 7E 1B 79 */	or. r30, r3, r3
/* 80278658 00275598  41 82 00 44 */	beq .L_8027869C
/* 8027865C 0027559C  4B EA F3 19 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80278660 002755A0  3C 60 80 4C */	lis r3, __vt__Q34Game7Tadpole14ProperAnimator@ha
/* 80278664 002755A4  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 80278668 002755A8  38 03 73 E0 */	addi r0, r3, __vt__Q34Game7Tadpole14ProperAnimator@l
/* 8027866C 002755AC  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80278670 002755B0  90 1E 00 00 */	stw r0, 0(r30)
/* 80278674 002755B4  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 80278678 002755B8  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8027867C 002755BC  38 00 00 00 */	li r0, 0
/* 80278680 002755C0  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80278684 002755C4  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80278688 002755C8  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8027868C 002755CC  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80278690 002755D0  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80278694 002755D4  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80278698 002755D8  90 1E 00 20 */	stw r0, 0x20(r30)
.L_8027869C:
/* 8027869C 002755DC  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802786A0 002755E0  38 60 00 1C */	li r3, 0x1c
/* 802786A4 002755E4  4B DA B8 01 */	bl __nw__FUl
/* 802786A8 002755E8  7C 64 1B 79 */	or. r4, r3, r3
/* 802786AC 002755EC  41 82 00 24 */	beq .L_802786D0
/* 802786B0 002755F0  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802786B4 002755F4  3C 60 80 4C */	lis r3, __vt__Q34Game7Tadpole3FSM@ha
/* 802786B8 002755F8  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802786BC 002755FC  38 A0 FF FF */	li r5, -1
/* 802786C0 00275600  90 04 00 00 */	stw r0, 0(r4)
/* 802786C4 00275604  38 03 73 BC */	addi r0, r3, __vt__Q34Game7Tadpole3FSM@l
/* 802786C8 00275608  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802786CC 0027560C  90 04 00 00 */	stw r0, 0(r4)
.L_802786D0:
/* 802786D0 00275610  81 9F 00 00 */	lwz r12, 0(r31)
/* 802786D4 00275614  7F E3 FB 78 */	mr r3, r31
/* 802786D8 00275618  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802786DC 0027561C  7D 89 03 A6 */	mtctr r12
/* 802786E0 00275620  4E 80 04 21 */	bctrl 
/* 802786E4 00275624  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802786E8 00275628  7F E3 FB 78 */	mr r3, r31
/* 802786EC 0027562C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802786F0 00275630  83 C1 00 08 */	lwz r30, 8(r1)
/* 802786F4 00275634  7C 08 03 A6 */	mtlr r0
/* 802786F8 00275638  38 21 00 10 */	addi r1, r1, 0x10
/* 802786FC 0027563C  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game7Tadpole3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game7Tadpole3ObjFPQ24Game21EnemyInitialParamBase:
/* 80278700 00275640  4E 80 00 20 */	blr 

.global onInit__Q34Game7Tadpole3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game7Tadpole3ObjFPQ24Game15CreatureInitArg:
/* 80278704 00275644  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80278708 00275648  7C 08 02 A6 */	mflr r0
/* 8027870C 0027564C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80278710 00275650  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80278714 00275654  7C 7F 1B 78 */	mr r31, r3
/* 80278718 00275658  4B E8 93 41 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8027871C 0027565C  C0 02 D0 B0 */	lfs f0, lbl_8051B410@sda21(r2)
/* 80278720 00275660  38 60 FF FF */	li r3, -1
/* 80278724 00275664  38 00 00 01 */	li r0, 1
/* 80278728 00275668  7F E4 FB 78 */	mr r4, r31
/* 8027872C 0027566C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 80278730 00275670  38 A0 00 01 */	li r5, 1
/* 80278734 00275674  38 C0 00 00 */	li r6, 0
/* 80278738 00275678  90 7F 02 C8 */	stw r3, 0x2c8(r31)
/* 8027873C 0027567C  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 80278740 00275680  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80278744 00275684  81 83 00 00 */	lwz r12, 0(r3)
/* 80278748 00275688  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8027874C 0027568C  7D 89 03 A6 */	mtctr r12
/* 80278750 00275690  4E 80 04 21 */	bctrl 
/* 80278754 00275694  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80278758 00275698  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027875C 0027569C  7C 08 03 A6 */	mtlr r0
/* 80278760 002756A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80278764 002756A4  4E 80 00 20 */	blr 

.global doUpdate__Q34Game7Tadpole3ObjFv
doUpdate__Q34Game7Tadpole3ObjFv:
/* 80278768 002756A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027876C 002756AC  7C 08 02 A6 */	mflr r0
/* 80278770 002756B0  7C 64 1B 78 */	mr r4, r3
/* 80278774 002756B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80278778 002756B8  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8027877C 002756BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80278780 002756C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80278784 002756C4  7D 89 03 A6 */	mtctr r12
/* 80278788 002756C8  4E 80 04 21 */	bctrl 
/* 8027878C 002756CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80278790 002756D0  7C 08 03 A6 */	mtlr r0
/* 80278794 002756D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80278798 002756D8  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game7Tadpole3ObjFR8Graphics
doDirectDraw__Q34Game7Tadpole3ObjFR8Graphics:
/* 8027879C 002756DC  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game7Tadpole3ObjFR8Graphics
doDebugDraw__Q34Game7Tadpole3ObjFR8Graphics:
/* 802787A0 002756E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802787A4 002756E4  7C 08 02 A6 */	mflr r0
/* 802787A8 002756E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802787AC 002756EC  4B E8 D6 C1 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802787B0 002756F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802787B4 002756F4  7C 08 03 A6 */	mtlr r0
/* 802787B8 002756F8  38 21 00 10 */	addi r1, r1, 0x10
/* 802787BC 002756FC  4E 80 00 20 */	blr 

.global setFSM__Q34Game7Tadpole3ObjFPQ34Game7Tadpole3FSM
setFSM__Q34Game7Tadpole3ObjFPQ34Game7Tadpole3FSM:
/* 802787C0 00275700  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802787C4 00275704  7C 08 02 A6 */	mflr r0
/* 802787C8 00275708  90 01 00 14 */	stw r0, 0x14(r1)
/* 802787CC 0027570C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802787D0 00275710  7C 7F 1B 78 */	mr r31, r3
/* 802787D4 00275714  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802787D8 00275718  7F E4 FB 78 */	mr r4, r31
/* 802787DC 0027571C  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802787E0 00275720  81 83 00 00 */	lwz r12, 0(r3)
/* 802787E4 00275724  81 8C 00 08 */	lwz r12, 8(r12)
/* 802787E8 00275728  7D 89 03 A6 */	mtctr r12
/* 802787EC 0027572C  4E 80 04 21 */	bctrl 
/* 802787F0 00275730  38 00 00 00 */	li r0, 0
/* 802787F4 00275734  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802787F8 00275738  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802787FC 0027573C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80278800 00275740  7C 08 03 A6 */	mtlr r0
/* 80278804 00275744  38 21 00 10 */	addi r1, r1, 0x10
/* 80278808 00275748  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game7Tadpole3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game7Tadpole3ObjFRQ24Game11ShadowParam:
/* 8027880C 0027574C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80278810 00275750  7C 08 02 A6 */	mflr r0
/* 80278814 00275754  90 01 00 24 */	stw r0, 0x24(r1)
/* 80278818 00275758  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8027881C 0027575C  7C 9F 23 78 */	mr r31, r4
/* 80278820 00275760  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80278824 00275764  7C 7E 1B 78 */	mr r30, r3
/* 80278828 00275768  7F C4 F3 78 */	mr r4, r30
/* 8027882C 0027576C  38 61 00 08 */	addi r3, r1, 8
/* 80278830 00275770  81 9E 00 00 */	lwz r12, 0(r30)
/* 80278834 00275774  81 8C 00 08 */	lwz r12, 8(r12)
/* 80278838 00275778  7D 89 03 A6 */	mtctr r12
/* 8027883C 0027577C  4E 80 04 21 */	bctrl 
/* 80278840 00275780  C0 01 00 08 */	lfs f0, 8(r1)
/* 80278844 00275784  C0 42 D0 B4 */	lfs f2, lbl_8051B414@sda21(r2)
/* 80278848 00275788  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8027884C 0027578C  C0 22 D0 B0 */	lfs f1, lbl_8051B410@sda21(r2)
/* 80278850 00275790  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 80278854 00275794  C0 02 D0 B8 */	lfs f0, lbl_8051B418@sda21(r2)
/* 80278858 00275798  D0 7F 00 04 */	stfs f3, 4(r31)
/* 8027885C 0027579C  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 80278860 002757A0  D0 7F 00 08 */	stfs f3, 8(r31)
/* 80278864 002757A4  C0 7F 00 04 */	lfs f3, 4(r31)
/* 80278868 002757A8  EC 43 10 2A */	fadds f2, f3, f2
/* 8027886C 002757AC  D0 5F 00 04 */	stfs f2, 4(r31)
/* 80278870 002757B0  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 80278874 002757B4  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80278878 002757B8  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 8027887C 002757BC  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 80278880 002757C0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80278884 002757C4  41 82 00 10 */	beq .L_80278894
/* 80278888 002757C8  C0 02 D0 BC */	lfs f0, lbl_8051B41C@sda21(r2)
/* 8027888C 002757CC  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80278890 002757D0  48 00 00 0C */	b .L_8027889C
.L_80278894:
/* 80278894 002757D4  C0 02 D0 C0 */	lfs f0, lbl_8051B420@sda21(r2)
/* 80278898 002757D8  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_8027889C:
/* 8027889C 002757DC  C0 02 D0 C0 */	lfs f0, lbl_8051B420@sda21(r2)
/* 802788A0 002757E0  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802788A4 002757E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802788A8 002757E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802788AC 002757EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802788B0 002757F0  7C 08 03 A6 */	mtlr r0
/* 802788B4 002757F4  38 21 00 20 */	addi r1, r1, 0x20
/* 802788B8 002757F8  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game7Tadpole3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game7Tadpole3ObjFPQ24Game8CreaturefP8CollPart:
/* 802788BC 002757FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802788C0 00275800  7C 08 02 A6 */	mflr r0
/* 802788C4 00275804  90 01 00 14 */	stw r0, 0x14(r1)
/* 802788C8 00275808  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802788CC 0027580C  7C 7F 1B 78 */	mr r31, r3
/* 802788D0 00275810  81 83 00 00 */	lwz r12, 0(r3)
/* 802788D4 00275814  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802788D8 00275818  7D 89 03 A6 */	mtctr r12
/* 802788DC 0027581C  4E 80 04 21 */	bctrl 
/* 802788E0 00275820  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802788E4 00275824  41 82 00 28 */	beq .L_8027890C
/* 802788E8 00275828  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802788EC 0027582C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802788F0 00275830  40 82 00 1C */	bne .L_8027890C
/* 802788F4 00275834  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802788F8 00275838  7F E3 FB 78 */	mr r3, r31
/* 802788FC 0027583C  C0 42 D0 B8 */	lfs f2, lbl_8051B418@sda21(r2)
/* 80278900 00275840  4B E8 D7 2D */	bl addDamage__Q24Game9EnemyBaseFff
/* 80278904 00275844  38 60 00 01 */	li r3, 1
/* 80278908 00275848  48 00 00 08 */	b .L_80278910
.L_8027890C:
/* 8027890C 0027584C  38 60 00 00 */	li r3, 0
.L_80278910:
/* 80278910 00275850  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80278914 00275854  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80278918 00275858  7C 08 03 A6 */	mtlr r0
/* 8027891C 0027585C  38 21 00 10 */	addi r1, r1, 0x10
/* 80278920 00275860  4E 80 00 20 */	blr 

.global startCarcassMotion__Q34Game7Tadpole3ObjFv
startCarcassMotion__Q34Game7Tadpole3ObjFv:
/* 80278924 00275864  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80278928 00275868  7C 08 02 A6 */	mflr r0
/* 8027892C 0027586C  38 80 00 05 */	li r4, 5
/* 80278930 00275870  38 A0 00 00 */	li r5, 0
/* 80278934 00275874  90 01 00 14 */	stw r0, 0x14(r1)
/* 80278938 00275878  4B E8 C6 CD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8027893C 0027587C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80278940 00275880  7C 08 03 A6 */	mtlr r0
/* 80278944 00275884  38 21 00 10 */	addi r1, r1, 0x10
/* 80278948 00275888  4E 80 00 20 */	blr 

.global setRandTarget__Q34Game7Tadpole3ObjFb
setRandTarget__Q34Game7Tadpole3ObjFb:
/* 8027894C 0027588C  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80278950 00275890  7C 08 02 A6 */	mflr r0
/* 80278954 00275894  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80278958 00275898  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8027895C 0027589C  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80278960 002758A0  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80278964 002758A4  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 80278968 002758A8  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8027896C 002758AC  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 80278970 002758B0  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 80278974 002758B4  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 80278978 002758B8  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 8027897C 002758BC  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 80278980 002758C0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80278984 002758C4  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80278988 002758C8  C3 62 D0 B0 */	lfs f27, lbl_8051B410@sda21(r2)
/* 8027898C 002758CC  7C 7F 1B 78 */	mr r31, r3
/* 80278990 002758D0  40 82 00 14 */	bne .L_802789A4
/* 80278994 002758D4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80278998 002758D8  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 8027899C 002758DC  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802789A0 002758E0  EF 61 00 28 */	fsubs f27, f1, f0
.L_802789A4:
/* 802789A4 002758E4  4B E5 0B FD */	bl rand
/* 802789A8 002758E8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802789AC 002758EC  3C 00 43 30 */	lis r0, 0x4330
/* 802789B0 002758F0  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802789B4 002758F4  7F E4 FB 78 */	mr r4, r31
/* 802789B8 002758F8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802789BC 002758FC  38 61 00 08 */	addi r3, r1, 8
/* 802789C0 00275900  90 01 00 18 */	stw r0, 0x18(r1)
/* 802789C4 00275904  C8 22 D0 D8 */	lfd f1, lbl_8051B438@sda21(r2)
/* 802789C8 00275908  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 802789CC 0027590C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802789D0 00275910  EC 40 08 28 */	fsubs f2, f0, f1
/* 802789D4 00275914  C0 22 D0 C4 */	lfs f1, lbl_8051B424@sda21(r2)
/* 802789D8 00275918  C0 05 03 84 */	lfs f0, 0x384(r5)
/* 802789DC 0027591C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802789E0 00275920  EC 5B 00 B2 */	fmuls f2, f27, f2
/* 802789E4 00275924  EC 22 08 24 */	fdivs f1, f2, f1
/* 802789E8 00275928  EF 80 08 2A */	fadds f28, f0, f1
/* 802789EC 0027592C  7D 89 03 A6 */	mtctr r12
/* 802789F0 00275930  4E 80 04 21 */	bctrl 
/* 802789F4 00275934  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 802789F8 00275938  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802789FC 0027593C  C0 21 00 08 */	lfs f1, 8(r1)
/* 80278A00 00275940  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80278A04 00275944  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 80278A08 00275948  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80278A0C 0027594C  EC 21 F8 28 */	fsubs f1, f1, f31
/* 80278A10 00275950  C3 DF 01 9C */	lfs f30, 0x19c(r31)
/* 80278A14 00275954  EC 40 E8 28 */	fsubs f2, f0, f29
/* 80278A18 00275958  4B DB C6 F1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80278A1C 0027595C  FF 60 08 90 */	fmr f27, f1
/* 80278A20 00275960  4B E5 0B 81 */	bl rand
/* 80278A24 00275964  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80278A28 00275968  3C 00 43 30 */	lis r0, 0x4330
/* 80278A2C 0027596C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80278A30 00275970  C8 42 D0 D8 */	lfd f2, lbl_8051B438@sda21(r2)
/* 80278A34 00275974  90 01 00 20 */	stw r0, 0x20(r1)
/* 80278A38 00275978  C0 62 D0 C8 */	lfs f3, lbl_8051B428@sda21(r2)
/* 80278A3C 0027597C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80278A40 00275980  C0 22 D0 C4 */	lfs f1, lbl_8051B424@sda21(r2)
/* 80278A44 00275984  EC 80 10 28 */	fsubs f4, f0, f2
/* 80278A48 00275988  C0 42 D0 CC */	lfs f2, lbl_8051B42C@sda21(r2)
/* 80278A4C 0027598C  C0 02 D0 B0 */	lfs f0, lbl_8051B410@sda21(r2)
/* 80278A50 00275990  EC 63 01 32 */	fmuls f3, f3, f4
/* 80278A54 00275994  EC 23 08 24 */	fdivs f1, f3, f1
/* 80278A58 00275998  EC 3B 08 2A */	fadds f1, f27, f1
/* 80278A5C 0027599C  EC 62 08 2A */	fadds f3, f2, f1
/* 80278A60 002759A0  FC 20 18 90 */	fmr f1, f3
/* 80278A64 002759A4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80278A68 002759A8  40 80 00 08 */	bge .L_80278A70
/* 80278A6C 002759AC  FC 20 18 50 */	fneg f1, f3
.L_80278A70:
/* 80278A70 002759B0  C0 42 D0 D0 */	lfs f2, lbl_8051B430@sda21(r2)
/* 80278A74 002759B4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80278A78 002759B8  C0 02 D0 B0 */	lfs f0, lbl_8051B410@sda21(r2)
/* 80278A7C 002759BC  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80278A80 002759C0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80278A84 002759C4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80278A88 002759C8  FC 00 08 1E */	fctiwz f0, f1
/* 80278A8C 002759CC  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80278A90 002759D0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80278A94 002759D4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80278A98 002759D8  7C 64 02 14 */	add r3, r4, r0
/* 80278A9C 002759DC  C0 03 00 04 */	lfs f0, 4(r3)
/* 80278AA0 002759E0  EC 3C E8 3A */	fmadds f1, f28, f0, f29
/* 80278AA4 002759E4  40 80 00 28 */	bge .L_80278ACC
/* 80278AA8 002759E8  C0 02 D0 D4 */	lfs f0, lbl_8051B434@sda21(r2)
/* 80278AAC 002759EC  EC 03 00 32 */	fmuls f0, f3, f0
/* 80278AB0 002759F0  FC 00 00 1E */	fctiwz f0, f0
/* 80278AB4 002759F4  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80278AB8 002759F8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80278ABC 002759FC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80278AC0 00275A00  7C 04 04 2E */	lfsx f0, r4, r0
/* 80278AC4 00275A04  FC 00 00 50 */	fneg f0, f0
/* 80278AC8 00275A08  48 00 00 1C */	b .L_80278AE4
.L_80278ACC:
/* 80278ACC 00275A0C  EC 03 00 B2 */	fmuls f0, f3, f2
/* 80278AD0 00275A10  FC 00 00 1E */	fctiwz f0, f0
/* 80278AD4 00275A14  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 80278AD8 00275A18  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80278ADC 00275A1C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80278AE0 00275A20  7C 04 04 2E */	lfsx f0, r4, r0
.L_80278AE4:
/* 80278AE4 00275A24  EC 1C F8 3A */	fmadds f0, f28, f0, f31
/* 80278AE8 00275A28  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 80278AEC 00275A2C  D3 DF 02 D0 */	stfs f30, 0x2d0(r31)
/* 80278AF0 00275A30  D0 3F 02 D4 */	stfs f1, 0x2d4(r31)
/* 80278AF4 00275A34  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80278AF8 00275A38  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80278AFC 00275A3C  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 80278B00 00275A40  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 80278B04 00275A44  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 80278B08 00275A48  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 80278B0C 00275A4C  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 80278B10 00275A50  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 80278B14 00275A54  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 80278B18 00275A58  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 80278B1C 00275A5C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80278B20 00275A60  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80278B24 00275A64  7C 08 03 A6 */	mtlr r0
/* 80278B28 00275A68  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80278B2C 00275A6C  4E 80 00 20 */	blr 

.global getTargetPosition__Q34Game7Tadpole3ObjFPQ24Game8Creature
getTargetPosition__Q34Game7Tadpole3ObjFPQ24Game8Creature:
/* 80278B30 00275A70  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80278B34 00275A74  7C 08 02 A6 */	mflr r0
/* 80278B38 00275A78  90 01 00 64 */	stw r0, 0x64(r1)
/* 80278B3C 00275A7C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80278B40 00275A80  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80278B44 00275A84  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80278B48 00275A88  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 80278B4C 00275A8C  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 80278B50 00275A90  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 80278B54 00275A94  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80278B58 00275A98  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80278B5C 00275A9C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80278B60 00275AA0  81 84 00 00 */	lwz r12, 0(r4)
/* 80278B64 00275AA4  7C 7D 1B 78 */	mr r29, r3
/* 80278B68 00275AA8  7C 9E 23 78 */	mr r30, r4
/* 80278B6C 00275AAC  7C BF 2B 78 */	mr r31, r5
/* 80278B70 00275AB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80278B74 00275AB4  38 61 00 14 */	addi r3, r1, 0x14
/* 80278B78 00275AB8  7D 89 03 A6 */	mtctr r12
/* 80278B7C 00275ABC  4E 80 04 21 */	bctrl 
/* 80278B80 00275AC0  7F E4 FB 78 */	mr r4, r31
/* 80278B84 00275AC4  38 61 00 08 */	addi r3, r1, 8
/* 80278B88 00275AC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80278B8C 00275ACC  C3 C1 00 14 */	lfs f30, 0x14(r1)
/* 80278B90 00275AD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80278B94 00275AD4  C3 E1 00 18 */	lfs f31, 0x18(r1)
/* 80278B98 00275AD8  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 80278B9C 00275ADC  7D 89 03 A6 */	mtctr r12
/* 80278BA0 00275AE0  4E 80 04 21 */	bctrl 
/* 80278BA4 00275AE4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80278BA8 00275AE8  C0 41 00 08 */	lfs f2, 8(r1)
/* 80278BAC 00275AEC  EC 3D 00 28 */	fsubs f1, f29, f0
/* 80278BB0 00275AF0  C0 02 D0 B0 */	lfs f0, lbl_8051B410@sda21(r2)
/* 80278BB4 00275AF4  ED 1E 10 28 */	fsubs f8, f30, f2
/* 80278BB8 00275AF8  C0 BE 01 98 */	lfs f5, 0x198(r30)
/* 80278BBC 00275AFC  C0 DE 01 9C */	lfs f6, 0x19c(r30)
/* 80278BC0 00275B00  EC 61 00 72 */	fmuls f3, f1, f1
/* 80278BC4 00275B04  EC 48 02 3A */	fmadds f2, f8, f8, f0
/* 80278BC8 00275B08  C0 FE 01 A0 */	lfs f7, 0x1a0(r30)
/* 80278BCC 00275B0C  EC 63 10 2A */	fadds f3, f3, f2
/* 80278BD0 00275B10  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80278BD4 00275B14  40 81 00 14 */	ble .L_80278BE8
/* 80278BD8 00275B18  40 81 00 14 */	ble .L_80278BEC
/* 80278BDC 00275B1C  FC 40 18 34 */	frsqrte f2, f3
/* 80278BE0 00275B20  EC 62 00 F2 */	fmuls f3, f2, f3
/* 80278BE4 00275B24  48 00 00 08 */	b .L_80278BEC
.L_80278BE8:
/* 80278BE8 00275B28  FC 60 00 90 */	fmr f3, f0
.L_80278BEC:
/* 80278BEC 00275B2C  C0 42 D0 B0 */	lfs f2, lbl_8051B410@sda21(r2)
/* 80278BF0 00275B30  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 80278BF4 00275B34  40 81 00 18 */	ble .L_80278C0C
/* 80278BF8 00275B38  C0 42 D0 B8 */	lfs f2, lbl_8051B418@sda21(r2)
/* 80278BFC 00275B3C  EC 42 18 24 */	fdivs f2, f2, f3
/* 80278C00 00275B40  ED 08 00 B2 */	fmuls f8, f8, f2
/* 80278C04 00275B44  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80278C08 00275B48  EC 21 00 B2 */	fmuls f1, f1, f2
.L_80278C0C:
/* 80278C0C 00275B4C  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80278C10 00275B50  C0 43 02 E4 */	lfs f2, 0x2e4(r3)
/* 80278C14 00275B54  C1 23 03 5C */	lfs f9, 0x35c(r3)
/* 80278C18 00275B58  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80278C1C 00275B5C  ED 08 00 B2 */	fmuls f8, f8, f2
/* 80278C20 00275B60  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80278C24 00275B64  EC 21 E8 2A */	fadds f1, f1, f29
/* 80278C28 00275B68  ED 08 F0 2A */	fadds f8, f8, f30
/* 80278C2C 00275B6C  EC 49 02 72 */	fmuls f2, f9, f9
/* 80278C30 00275B70  EC 61 38 28 */	fsubs f3, f1, f7
/* 80278C34 00275B74  EC 88 28 28 */	fsubs f4, f8, f5
/* 80278C38 00275B78  EC 00 F8 2A */	fadds f0, f0, f31
/* 80278C3C 00275B7C  EC 63 00 F2 */	fmuls f3, f3, f3
/* 80278C40 00275B80  EC 64 19 3A */	fmadds f3, f4, f4, f3
/* 80278C44 00275B84  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 80278C48 00275B88  40 81 00 70 */	ble .L_80278CB8
/* 80278C4C 00275B8C  EC 21 38 28 */	fsubs f1, f1, f7
/* 80278C50 00275B90  C0 02 D0 B0 */	lfs f0, lbl_8051B410@sda21(r2)
/* 80278C54 00275B94  ED 08 28 28 */	fsubs f8, f8, f5
/* 80278C58 00275B98  EC 61 00 72 */	fmuls f3, f1, f1
/* 80278C5C 00275B9C  EC 48 02 3A */	fmadds f2, f8, f8, f0
/* 80278C60 00275BA0  EC 63 10 2A */	fadds f3, f3, f2
/* 80278C64 00275BA4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80278C68 00275BA8  40 81 00 14 */	ble .L_80278C7C
/* 80278C6C 00275BAC  40 81 00 14 */	ble .L_80278C80
/* 80278C70 00275BB0  FC 40 18 34 */	frsqrte f2, f3
/* 80278C74 00275BB4  EC 62 00 F2 */	fmuls f3, f2, f3
/* 80278C78 00275BB8  48 00 00 08 */	b .L_80278C80
.L_80278C7C:
/* 80278C7C 00275BBC  FC 60 00 90 */	fmr f3, f0
.L_80278C80:
/* 80278C80 00275BC0  C0 42 D0 B0 */	lfs f2, lbl_8051B410@sda21(r2)
/* 80278C84 00275BC4  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 80278C88 00275BC8  40 81 00 18 */	ble .L_80278CA0
/* 80278C8C 00275BCC  C0 42 D0 B8 */	lfs f2, lbl_8051B418@sda21(r2)
/* 80278C90 00275BD0  EC 42 18 24 */	fdivs f2, f2, f3
/* 80278C94 00275BD4  ED 08 00 B2 */	fmuls f8, f8, f2
/* 80278C98 00275BD8  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80278C9C 00275BDC  EC 21 00 B2 */	fmuls f1, f1, f2
.L_80278CA0:
/* 80278CA0 00275BE0  ED 08 02 72 */	fmuls f8, f8, f9
/* 80278CA4 00275BE4  EC 00 02 72 */	fmuls f0, f0, f9
/* 80278CA8 00275BE8  EC 21 02 72 */	fmuls f1, f1, f9
/* 80278CAC 00275BEC  ED 08 28 2A */	fadds f8, f8, f5
/* 80278CB0 00275BF0  EC 00 30 2A */	fadds f0, f0, f6
/* 80278CB4 00275BF4  EC 21 38 2A */	fadds f1, f1, f7
.L_80278CB8:
/* 80278CB8 00275BF8  D1 1D 00 00 */	stfs f8, 0(r29)
/* 80278CBC 00275BFC  D0 1D 00 04 */	stfs f0, 4(r29)
/* 80278CC0 00275C00  D0 3D 00 08 */	stfs f1, 8(r29)
/* 80278CC4 00275C04  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80278CC8 00275C08  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80278CCC 00275C0C  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 80278CD0 00275C10  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80278CD4 00275C14  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 80278CD8 00275C18  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80278CDC 00275C1C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80278CE0 00275C20  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80278CE4 00275C24  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80278CE8 00275C28  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80278CEC 00275C2C  7C 08 03 A6 */	mtlr r0
/* 80278CF0 00275C30  38 21 00 60 */	addi r1, r1, 0x60
/* 80278CF4 00275C34  4E 80 00 20 */	blr 

.global createLeapEffect__Q34Game7Tadpole3ObjFv
createLeapEffect__Q34Game7Tadpole3ObjFv:
/* 80278CF8 00275C38  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80278CFC 00275C3C  7C 08 02 A6 */	mflr r0
/* 80278D00 00275C40  90 01 00 74 */	stw r0, 0x74(r1)
/* 80278D04 00275C44  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80278D08 00275C48  7C 7F 1B 78 */	mr r31, r3
/* 80278D0C 00275C4C  80 63 02 80 */	lwz r3, 0x280(r3)
/* 80278D10 00275C50  28 03 00 00 */	cmplwi r3, 0
/* 80278D14 00275C54  41 82 00 F4 */	beq .L_80278E08
/* 80278D18 00275C58  81 83 00 00 */	lwz r12, 0(r3)
/* 80278D1C 00275C5C  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 80278D20 00275C60  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 80278D24 00275C64  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 80278D28 00275C68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80278D2C 00275C6C  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 80278D30 00275C70  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 80278D34 00275C74  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 80278D38 00275C78  7D 89 03 A6 */	mtctr r12
/* 80278D3C 00275C7C  4E 80 04 21 */	bctrl 
/* 80278D40 00275C80  C0 43 00 00 */	lfs f2, 0(r3)
/* 80278D44 00275C84  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 80278D48 00275C88  C0 02 D0 E0 */	lfs f0, lbl_8051B440@sda21(r2)
/* 80278D4C 00275C8C  EC 22 08 28 */	fsubs f1, f2, f1
/* 80278D50 00275C90  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 80278D54 00275C94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80278D58 00275C98  40 80 01 14 */	bge .L_80278E6C
/* 80278D5C 00275C9C  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80278D60 00275CA0  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80278D64 00275CA4  80 E1 00 44 */	lwz r7, 0x44(r1)
/* 80278D68 00275CA8  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80278D6C 00275CAC  80 C1 00 48 */	lwz r6, 0x48(r1)
/* 80278D70 00275CB0  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 80278D74 00275CB4  90 81 00 08 */	stw r4, 8(r1)
/* 80278D78 00275CB8  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 80278D7C 00275CBC  39 43 A7 EC */	addi r10, r3, __vt__Q23efx3Arg@l
/* 80278D80 00275CC0  C0 02 D0 E4 */	lfs f0, lbl_8051B444@sda21(r2)
/* 80278D84 00275CC4  38 A0 00 00 */	li r5, 0
/* 80278D88 00275CC8  90 E1 00 0C */	stw r7, 0xc(r1)
/* 80278D8C 00275CCC  C0 61 00 08 */	lfs f3, 8(r1)
/* 80278D90 00275CD0  3D 20 80 4B */	lis r9, __vt__Q23efx8ArgScale@ha
/* 80278D94 00275CD4  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80278D98 00275CD8  3C 60 80 4F */	lis r3, __vt__Q23efx10TEnemyDive@ha
/* 80278D9C 00275CDC  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80278DA0 00275CE0  38 E0 01 59 */	li r7, 0x159
/* 80278DA4 00275CE4  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80278DA8 00275CE8  38 C0 01 5A */	li r6, 0x15a
/* 80278DAC 00275CEC  90 01 00 30 */	stw r0, 0x30(r1)
/* 80278DB0 00275CF0  39 04 6A 64 */	addi r8, r4, __vt__Q23efx8TSimple2@l
/* 80278DB4 00275CF4  39 29 A2 DC */	addi r9, r9, __vt__Q23efx8ArgScale@l
/* 80278DB8 00275CF8  38 03 85 E8 */	addi r0, r3, __vt__Q23efx10TEnemyDive@l
/* 80278DBC 00275CFC  91 41 00 4C */	stw r10, 0x4c(r1)
/* 80278DC0 00275D00  38 61 00 30 */	addi r3, r1, 0x30
/* 80278DC4 00275D04  38 81 00 4C */	addi r4, r1, 0x4c
/* 80278DC8 00275D08  91 01 00 30 */	stw r8, 0x30(r1)
/* 80278DCC 00275D0C  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 80278DD0 00275D10  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 80278DD4 00275D14  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 80278DD8 00275D18  91 21 00 4C */	stw r9, 0x4c(r1)
/* 80278DDC 00275D1C  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80278DE0 00275D20  B0 E1 00 34 */	sth r7, 0x34(r1)
/* 80278DE4 00275D24  B0 C1 00 36 */	sth r6, 0x36(r1)
/* 80278DE8 00275D28  90 A1 00 38 */	stw r5, 0x38(r1)
/* 80278DEC 00275D2C  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 80278DF0 00275D30  90 01 00 30 */	stw r0, 0x30(r1)
/* 80278DF4 00275D34  48 14 FA E5 */	bl create__Q23efx10TEnemyDiveFPQ23efx3Arg
/* 80278DF8 00275D38  C0 22 D0 E8 */	lfs f1, lbl_8051B448@sda21(r2)
/* 80278DFC 00275D3C  7F E3 FB 78 */	mr r3, r31
/* 80278E00 00275D40  48 1F 5A 41 */	bl PSStartEnemyDownWatSE__FPQ24Game9EnemyBasef
/* 80278E04 00275D44  48 00 00 68 */	b .L_80278E6C
.L_80278E08:
/* 80278E08 00275D48  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 80278E0C 00275D4C  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 80278E10 00275D50  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 80278E14 00275D54  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 80278E18 00275D58  90 01 00 20 */	stw r0, 0x20(r1)
/* 80278E1C 00275D5C  3C 60 80 4C */	lis r3, __vt__Q23efx8TPkDiveB@ha
/* 80278E20 00275D60  39 05 A7 F8 */	addi r8, r5, __vt__Q23efx5TBase@l
/* 80278E24 00275D64  38 E4 6A 78 */	addi r7, r4, __vt__Q23efx8TSimple1@l
/* 80278E28 00275D68  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 80278E2C 00275D6C  38 03 74 F8 */	addi r0, r3, __vt__Q23efx8TPkDiveB@l
/* 80278E30 00275D70  38 C0 01 5A */	li r6, 0x15a
/* 80278E34 00275D74  38 A0 00 00 */	li r5, 0
/* 80278E38 00275D78  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80278E3C 00275D7C  38 61 00 14 */	addi r3, r1, 0x14
/* 80278E40 00275D80  38 81 00 20 */	addi r4, r1, 0x20
/* 80278E44 00275D84  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 80278E48 00275D88  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80278E4C 00275D8C  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 80278E50 00275D90  91 01 00 14 */	stw r8, 0x14(r1)
/* 80278E54 00275D94  90 E1 00 14 */	stw r7, 0x14(r1)
/* 80278E58 00275D98  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80278E5C 00275D9C  B0 C1 00 18 */	sth r6, 0x18(r1)
/* 80278E60 00275DA0  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 80278E64 00275DA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80278E68 00275DA8  48 13 61 1D */	bl create__Q23efx8TSimple1FPQ23efx3Arg
.L_80278E6C:
/* 80278E6C 00275DAC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80278E70 00275DB0  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80278E74 00275DB4  7C 08 03 A6 */	mtlr r0
/* 80278E78 00275DB8  38 21 00 70 */	addi r1, r1, 0x70
/* 80278E7C 00275DBC  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game7Tadpole3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game7Tadpole3ObjFPQ24Game8WaterBox:
/* 80278E80 00275DC0  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game7Tadpole3ObjFv
outWaterCallback__Q34Game7Tadpole3ObjFv:
/* 80278E84 00275DC4  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game7Tadpole3ObjFv
getEnemyTypeID__Q34Game7Tadpole3ObjFv:
/* 80278E88 00275DC8  38 60 00 1B */	li r3, 0x1b
/* 80278E8C 00275DCC  4E 80 00 20 */	blr 
