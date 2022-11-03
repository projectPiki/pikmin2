.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23efx9TBabyBorn
__vt__Q23efx9TBabyBorn:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx9TBabyBornFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx9TBabyBornFv
.global __vt__Q34Game4Baby3Obj
__vt__Q34Game4Baby3Obj:
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
	.4byte onInit__Q34Game4Baby3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game4Baby3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game4Baby3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game4Baby3ObjFv
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
	.4byte getShadowParam__Q34Game4Baby3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game4Baby3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game4Baby3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game4Baby3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game4Baby3ObjFR8Graphics
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
	.4byte initMouthSlots__Q34Game4Baby3ObjFv
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
	.4byte getEnemyTypeID__Q34Game4Baby3ObjFv
	.4byte getMouthSlots__Q34Game4Baby3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game4Baby3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game4Baby3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game4Baby3ObjFv
	.4byte doFinishStoneState__Q34Game4Baby3ObjFv
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
	.4byte doStartWaitingBirthTypeDrop__Q34Game4Baby3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game4Baby3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q24Game9EnemyBaseFv
	.4byte doStartMovie__Q34Game4Baby3ObjFv
	.4byte doEndMovie__Q34Game4Baby3ObjFv
	.4byte setFSM__Q34Game4Baby3ObjFPQ34Game4Baby3FSM
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
lbl_8051B8E0:
	.float 2.5
lbl_8051B8E4:
	.float 0.0
lbl_8051B8E8:
	.float 1.0
lbl_8051B8EC:
	.float 50.0
lbl_8051B8F0:
	.float 10.0
.balign 4
lbl_8051B8F4:
	.asciz "kamu"
.balign 4
lbl_8051B8FC:
	.float 20.0
lbl_8051B900:
	.float 32768.0
.balign 8
lbl_8051B908:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_8051B910:
	.float 500.0
lbl_8051B914:
	.float 100.0
lbl_8051B918: # pi
	.float 3.1415927
lbl_8051B91C: # half-pi
	.float 1.5707964
lbl_8051B920:
	.float -325.9493
lbl_8051B924:
	.float 325.9493
lbl_8051B928:
	.float 250.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game4Baby3ObjFv
__ct__Q34Game4Baby3ObjFv:
/* 8028D470 0028A3B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D474 0028A3B4  7C 08 02 A6 */	mflr r0
/* 8028D478 0028A3B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D47C 0028A3BC  7C 80 07 35 */	extsh. r0, r4
/* 8028D480 0028A3C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028D484 0028A3C4  7C 7F 1B 78 */	mr r31, r3
/* 8028D488 0028A3C8  93 C1 00 08 */	stw r30, 8(r1)
/* 8028D48C 0028A3CC  41 82 00 24 */	beq .L_8028D4B0
/* 8028D490 0028A3D0  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 8028D494 0028A3D4  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8028D498 0028A3D8  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8028D49C 0028A3DC  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8028D4A0 0028A3E0  38 00 00 00 */	li r0, 0
/* 8028D4A4 0028A3E4  90 7F 02 D8 */	stw r3, 0x2d8(r31)
/* 8028D4A8 0028A3E8  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 8028D4AC 0028A3EC  90 1F 02 E0 */	stw r0, 0x2e0(r31)
.L_8028D4B0:
/* 8028D4B0 0028A3F0  7F E3 FB 78 */	mr r3, r31
/* 8028D4B4 0028A3F4  38 80 00 00 */	li r4, 0
/* 8028D4B8 0028A3F8  4B E7 3E E9 */	bl __ct__Q24Game9EnemyBaseFv
/* 8028D4BC 0028A3FC  3C 60 80 4D */	lis r3, __vt__Q34Game4Baby3Obj@ha
/* 8028D4C0 0028A400  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 8028D4C4 0028A404  38 A3 A5 BC */	addi r5, r3, __vt__Q34Game4Baby3Obj@l
/* 8028D4C8 0028A408  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 8028D4CC 0028A40C  90 BF 00 00 */	stw r5, 0(r31)
/* 8028D4D0 0028A410  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8028D4D4 0028A414  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 8028D4D8 0028A418  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8028D4DC 0028A41C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8028D4E0 0028A420  90 A4 00 00 */	stw r5, 0(r4)
/* 8028D4E4 0028A424  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8028D4E8 0028A428  7C 04 00 50 */	subf r0, r4, r0
/* 8028D4EC 0028A42C  90 04 00 0C */	stw r0, 0xc(r4)
/* 8028D4F0 0028A430  4B EA B0 59 */	bl __ct__10MouthSlotsFv
/* 8028D4F4 0028A434  38 60 00 2C */	li r3, 0x2c
/* 8028D4F8 0028A438  4B D9 69 AD */	bl __nw__FUl
/* 8028D4FC 0028A43C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028D500 0028A440  41 82 00 44 */	beq .L_8028D544
/* 8028D504 0028A444  4B E9 A4 71 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8028D508 0028A448  3C 60 80 4D */	lis r3, __vt__Q34Game4Baby14ProperAnimator@ha
/* 8028D50C 0028A44C  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8028D510 0028A450  38 03 A4 58 */	addi r0, r3, __vt__Q34Game4Baby14ProperAnimator@l
/* 8028D514 0028A454  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8028D518 0028A458  90 1E 00 00 */	stw r0, 0(r30)
/* 8028D51C 0028A45C  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8028D520 0028A460  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8028D524 0028A464  38 00 00 00 */	li r0, 0
/* 8028D528 0028A468  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8028D52C 0028A46C  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8028D530 0028A470  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8028D534 0028A474  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8028D538 0028A478  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8028D53C 0028A47C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8028D540 0028A480  90 1E 00 20 */	stw r0, 0x20(r30)
.L_8028D544:
/* 8028D544 0028A484  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8028D548 0028A488  38 60 00 1C */	li r3, 0x1c
/* 8028D54C 0028A48C  4B D9 69 59 */	bl __nw__FUl
/* 8028D550 0028A490  7C 64 1B 79 */	or. r4, r3, r3
/* 8028D554 0028A494  41 82 00 24 */	beq .L_8028D578
/* 8028D558 0028A498  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8028D55C 0028A49C  3C 60 80 4D */	lis r3, __vt__Q34Game4Baby3FSM@ha
/* 8028D560 0028A4A0  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8028D564 0028A4A4  38 A0 FF FF */	li r5, -1
/* 8028D568 0028A4A8  90 04 00 00 */	stw r0, 0(r4)
/* 8028D56C 0028A4AC  38 03 A4 34 */	addi r0, r3, __vt__Q34Game4Baby3FSM@l
/* 8028D570 0028A4B0  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8028D574 0028A4B4  90 04 00 00 */	stw r0, 0(r4)
.L_8028D578:
/* 8028D578 0028A4B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028D57C 0028A4BC  7F E3 FB 78 */	mr r3, r31
/* 8028D580 0028A4C0  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8028D584 0028A4C4  7D 89 03 A6 */	mtctr r12
/* 8028D588 0028A4C8  4E 80 04 21 */	bctrl 
/* 8028D58C 0028A4CC  7F E3 FB 78 */	mr r3, r31
/* 8028D590 0028A4D0  48 00 08 B9 */	bl createEffect__Q34Game4Baby3ObjFv
/* 8028D594 0028A4D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D598 0028A4D8  7F E3 FB 78 */	mr r3, r31
/* 8028D59C 0028A4DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028D5A0 0028A4E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028D5A4 0028A4E4  7C 08 03 A6 */	mtlr r0
/* 8028D5A8 0028A4E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D5AC 0028A4EC  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game4Baby3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game4Baby3ObjFPQ24Game21EnemyInitialParamBase:
/* 8028D5B0 0028A4F0  4E 80 00 20 */	blr 

.global onInit__Q34Game4Baby3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game4Baby3ObjFPQ24Game15CreatureInitArg:
/* 8028D5B4 0028A4F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D5B8 0028A4F8  7C 08 02 A6 */	mflr r0
/* 8028D5BC 0028A4FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D5C0 0028A500  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028D5C4 0028A504  7C 7F 1B 78 */	mr r31, r3
/* 8028D5C8 0028A508  4B E7 44 91 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8028D5CC 0028A50C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8028D5D0 0028A510  7F E3 FB 78 */	mr r3, r31
/* 8028D5D4 0028A514  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8028D5D8 0028A518  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8028D5DC 0028A51C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8028D5E0 0028A520  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 8028D5E4 0028A524  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8028D5E8 0028A528  48 00 09 15 */	bl setupEffect__Q34Game4Baby3ObjFv
/* 8028D5EC 0028A52C  7F E3 FB 78 */	mr r3, r31
/* 8028D5F0 0028A530  48 00 04 C9 */	bl resetRandTargetPosition__Q34Game4Baby3ObjFv
/* 8028D5F4 0028A534  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8028D5F8 0028A538  28 03 00 00 */	cmplwi r3, 0
/* 8028D5FC 0028A53C  41 82 00 3C */	beq .L_8028D638
/* 8028D600 0028A540  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8028D604 0028A544  2C 00 00 04 */	cmpwi r0, 4
/* 8028D608 0028A548  40 82 00 30 */	bne .L_8028D638
/* 8028D60C 0028A54C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8028D610 0028A550  7F E4 FB 78 */	mr r4, r31
/* 8028D614 0028A554  38 A0 00 03 */	li r5, 3
/* 8028D618 0028A558  38 C0 00 00 */	li r6, 0
/* 8028D61C 0028A55C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028D620 0028A560  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8028D624 0028A564  7D 89 03 A6 */	mtctr r12
/* 8028D628 0028A568  4E 80 04 21 */	bctrl 
/* 8028D62C 0028A56C  7F E3 FB 78 */	mr r3, r31
/* 8028D630 0028A570  48 00 04 A5 */	bl resetZukanAnimationFrame__Q34Game4Baby3ObjFv
/* 8028D634 0028A574  48 00 00 24 */	b .L_8028D658
.L_8028D638:
/* 8028D638 0028A578  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8028D63C 0028A57C  7F E4 FB 78 */	mr r4, r31
/* 8028D640 0028A580  38 A0 00 02 */	li r5, 2
/* 8028D644 0028A584  38 C0 00 00 */	li r6, 0
/* 8028D648 0028A588  81 83 00 00 */	lwz r12, 0(r3)
/* 8028D64C 0028A58C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8028D650 0028A590  7D 89 03 A6 */	mtctr r12
/* 8028D654 0028A594  4E 80 04 21 */	bctrl 
.L_8028D658:
/* 8028D658 0028A598  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D65C 0028A59C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028D660 0028A5A0  7C 08 03 A6 */	mtlr r0
/* 8028D664 0028A5A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D668 0028A5A8  4E 80 00 20 */	blr 

.global doUpdate__Q34Game4Baby3ObjFv
doUpdate__Q34Game4Baby3ObjFv:
/* 8028D66C 0028A5AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D670 0028A5B0  7C 08 02 A6 */	mflr r0
/* 8028D674 0028A5B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D678 0028A5B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028D67C 0028A5BC  7C 7F 1B 78 */	mr r31, r3
/* 8028D680 0028A5C0  7F E4 FB 78 */	mr r4, r31
/* 8028D684 0028A5C4  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8028D688 0028A5C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8028D68C 0028A5CC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028D690 0028A5D0  7D 89 03 A6 */	mtctr r12
/* 8028D694 0028A5D4  4E 80 04 21 */	bctrl 
/* 8028D698 0028A5D8  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 8028D69C 0028A5DC  4B EA AF 91 */	bl update__10MouthSlotsFv
/* 8028D6A0 0028A5E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D6A4 0028A5E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028D6A8 0028A5E8  7C 08 03 A6 */	mtlr r0
/* 8028D6AC 0028A5EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D6B0 0028A5F0  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game4Baby3ObjFR8Graphics
doDirectDraw__Q34Game4Baby3ObjFR8Graphics:
/* 8028D6B4 0028A5F4  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game4Baby3ObjFR8Graphics
doDebugDraw__Q34Game4Baby3ObjFR8Graphics:
/* 8028D6B8 0028A5F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D6BC 0028A5FC  7C 08 02 A6 */	mflr r0
/* 8028D6C0 0028A600  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D6C4 0028A604  4B E7 87 A9 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 8028D6C8 0028A608  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D6CC 0028A60C  7C 08 03 A6 */	mtlr r0
/* 8028D6D0 0028A610  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D6D4 0028A614  4E 80 00 20 */	blr 

.global setFSM__Q34Game4Baby3ObjFPQ34Game4Baby3FSM
setFSM__Q34Game4Baby3ObjFPQ34Game4Baby3FSM:
/* 8028D6D8 0028A618  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D6DC 0028A61C  7C 08 02 A6 */	mflr r0
/* 8028D6E0 0028A620  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D6E4 0028A624  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028D6E8 0028A628  7C 7F 1B 78 */	mr r31, r3
/* 8028D6EC 0028A62C  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 8028D6F0 0028A630  7F E4 FB 78 */	mr r4, r31
/* 8028D6F4 0028A634  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8028D6F8 0028A638  81 83 00 00 */	lwz r12, 0(r3)
/* 8028D6FC 0028A63C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028D700 0028A640  7D 89 03 A6 */	mtctr r12
/* 8028D704 0028A644  4E 80 04 21 */	bctrl 
/* 8028D708 0028A648  38 00 00 00 */	li r0, 0
/* 8028D70C 0028A64C  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8028D710 0028A650  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D714 0028A654  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028D718 0028A658  7C 08 03 A6 */	mtlr r0
/* 8028D71C 0028A65C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D720 0028A660  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game4Baby3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game4Baby3ObjFRQ24Game11ShadowParam:
/* 8028D724 0028A664  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8028D728 0028A668  C0 42 D5 80 */	lfs f2, lbl_8051B8E0@sda21(r2)
/* 8028D72C 0028A66C  D0 04 00 00 */	stfs f0, 0(r4)
/* 8028D730 0028A670  C0 22 D5 84 */	lfs f1, lbl_8051B8E4@sda21(r2)
/* 8028D734 0028A674  C0 63 01 90 */	lfs f3, 0x190(r3)
/* 8028D738 0028A678  C0 02 D5 88 */	lfs f0, lbl_8051B8E8@sda21(r2)
/* 8028D73C 0028A67C  D0 64 00 04 */	stfs f3, 4(r4)
/* 8028D740 0028A680  C0 63 01 94 */	lfs f3, 0x194(r3)
/* 8028D744 0028A684  D0 64 00 08 */	stfs f3, 8(r4)
/* 8028D748 0028A688  C0 64 00 04 */	lfs f3, 4(r4)
/* 8028D74C 0028A68C  EC 43 10 2A */	fadds f2, f3, f2
/* 8028D750 0028A690  D0 44 00 04 */	stfs f2, 4(r4)
/* 8028D754 0028A694  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 8028D758 0028A698  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8028D75C 0028A69C  D0 24 00 14 */	stfs f1, 0x14(r4)
/* 8028D760 0028A6A0  80 03 01 E4 */	lwz r0, 0x1e4(r3)
/* 8028D764 0028A6A4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8028D768 0028A6A8  41 82 00 10 */	beq .L_8028D778
/* 8028D76C 0028A6AC  C0 02 D5 8C */	lfs f0, lbl_8051B8EC@sda21(r2)
/* 8028D770 0028A6B0  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 8028D774 0028A6B4  48 00 00 0C */	b .L_8028D780
.L_8028D778:
/* 8028D778 0028A6B8  C0 02 D5 90 */	lfs f0, lbl_8051B8F0@sda21(r2)
/* 8028D77C 0028A6BC  D0 04 00 18 */	stfs f0, 0x18(r4)
.L_8028D780:
/* 8028D780 0028A6C0  C0 02 D5 90 */	lfs f0, lbl_8051B8F0@sda21(r2)
/* 8028D784 0028A6C4  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 8028D788 0028A6C8  4E 80 00 20 */	blr 

.global pressCallBack__Q34Game4Baby3ObjFPQ24Game8CreaturefP8CollPart
pressCallBack__Q34Game4Baby3ObjFPQ24Game8CreaturefP8CollPart:
/* 8028D78C 0028A6CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D790 0028A6D0  7C 08 02 A6 */	mflr r0
/* 8028D794 0028A6D4  28 04 00 00 */	cmplwi r4, 0
/* 8028D798 0028A6D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D79C 0028A6DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028D7A0 0028A6E0  7C 7F 1B 78 */	mr r31, r3
/* 8028D7A4 0028A6E4  41 82 00 44 */	beq .L_8028D7E8
/* 8028D7A8 0028A6E8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8028D7AC 0028A6EC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8028D7B0 0028A6F0  40 82 00 38 */	bne .L_8028D7E8
/* 8028D7B4 0028A6F4  4B E7 9C 41 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8028D7B8 0028A6F8  2C 03 00 02 */	cmpwi r3, 2
/* 8028D7BC 0028A6FC  40 81 00 2C */	ble .L_8028D7E8
/* 8028D7C0 0028A700  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8028D7C4 0028A704  7F E4 FB 78 */	mr r4, r31
/* 8028D7C8 0028A708  38 A0 00 01 */	li r5, 1
/* 8028D7CC 0028A70C  38 C0 00 00 */	li r6, 0
/* 8028D7D0 0028A710  81 83 00 00 */	lwz r12, 0(r3)
/* 8028D7D4 0028A714  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028D7D8 0028A718  7D 89 03 A6 */	mtctr r12
/* 8028D7DC 0028A71C  4E 80 04 21 */	bctrl 
/* 8028D7E0 0028A720  38 60 00 01 */	li r3, 1
/* 8028D7E4 0028A724  48 00 00 08 */	b .L_8028D7EC
.L_8028D7E8:
/* 8028D7E8 0028A728  38 60 00 00 */	li r3, 0
.L_8028D7EC:
/* 8028D7EC 0028A72C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D7F0 0028A730  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028D7F4 0028A734  7C 08 03 A6 */	mtlr r0
/* 8028D7F8 0028A738  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D7FC 0028A73C  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game4Baby3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game4Baby3ObjFPQ24Game8CreaturefP8CollPart:
/* 8028D800 0028A740  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D804 0028A744  7C 08 02 A6 */	mflr r0
/* 8028D808 0028A748  28 04 00 00 */	cmplwi r4, 0
/* 8028D80C 0028A74C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D810 0028A750  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028D814 0028A754  7C 7F 1B 78 */	mr r31, r3
/* 8028D818 0028A758  41 82 00 44 */	beq .L_8028D85C
/* 8028D81C 0028A75C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8028D820 0028A760  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8028D824 0028A764  40 82 00 38 */	bne .L_8028D85C
/* 8028D828 0028A768  4B E7 9B CD */	bl getStateID__Q24Game9EnemyBaseFv
/* 8028D82C 0028A76C  2C 03 00 02 */	cmpwi r3, 2
/* 8028D830 0028A770  40 81 00 2C */	ble .L_8028D85C
/* 8028D834 0028A774  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8028D838 0028A778  7F E4 FB 78 */	mr r4, r31
/* 8028D83C 0028A77C  38 A0 00 01 */	li r5, 1
/* 8028D840 0028A780  38 C0 00 00 */	li r6, 0
/* 8028D844 0028A784  81 83 00 00 */	lwz r12, 0(r3)
/* 8028D848 0028A788  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028D84C 0028A78C  7D 89 03 A6 */	mtctr r12
/* 8028D850 0028A790  4E 80 04 21 */	bctrl 
/* 8028D854 0028A794  38 60 00 01 */	li r3, 1
/* 8028D858 0028A798  48 00 00 08 */	b .L_8028D860
.L_8028D85C:
/* 8028D85C 0028A79C  38 60 00 00 */	li r3, 0
.L_8028D860:
/* 8028D860 0028A7A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D864 0028A7A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028D868 0028A7A8  7C 08 03 A6 */	mtlr r0
/* 8028D86C 0028A7AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D870 0028A7B0  4E 80 00 20 */	blr 

.global doStartStoneState__Q34Game4Baby3ObjFv
doStartStoneState__Q34Game4Baby3ObjFv:
/* 8028D874 0028A7B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D878 0028A7B8  7C 08 02 A6 */	mflr r0
/* 8028D87C 0028A7BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D880 0028A7C0  4B E7 56 75 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 8028D884 0028A7C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D888 0028A7C8  7C 08 03 A6 */	mtlr r0
/* 8028D88C 0028A7CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D890 0028A7D0  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game4Baby3ObjFv
doFinishStoneState__Q34Game4Baby3ObjFv:
/* 8028D894 0028A7D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D898 0028A7D8  7C 08 02 A6 */	mflr r0
/* 8028D89C 0028A7DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D8A0 0028A7E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028D8A4 0028A7E4  7C 7F 1B 78 */	mr r31, r3
/* 8028D8A8 0028A7E8  4B E7 56 61 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 8028D8AC 0028A7EC  7F E3 FB 78 */	mr r3, r31
/* 8028D8B0 0028A7F0  4B E7 9B 45 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8028D8B4 0028A7F4  2C 03 00 02 */	cmpwi r3, 2
/* 8028D8B8 0028A7F8  40 82 00 24 */	bne .L_8028D8DC
/* 8028D8BC 0028A7FC  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8028D8C0 0028A800  7F E4 FB 78 */	mr r4, r31
/* 8028D8C4 0028A804  38 A0 00 03 */	li r5, 3
/* 8028D8C8 0028A808  38 C0 00 00 */	li r6, 0
/* 8028D8CC 0028A80C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028D8D0 0028A810  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028D8D4 0028A814  7D 89 03 A6 */	mtctr r12
/* 8028D8D8 0028A818  4E 80 04 21 */	bctrl 
.L_8028D8DC:
/* 8028D8DC 0028A81C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D8E0 0028A820  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028D8E4 0028A824  7C 08 03 A6 */	mtlr r0
/* 8028D8E8 0028A828  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D8EC 0028A82C  4E 80 00 20 */	blr 

.global doStartWaitingBirthTypeDrop__Q34Game4Baby3ObjFv
doStartWaitingBirthTypeDrop__Q34Game4Baby3ObjFv:
/* 8028D8F0 0028A830  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D8F4 0028A834  7C 08 02 A6 */	mflr r0
/* 8028D8F8 0028A838  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D8FC 0028A83C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028D900 0028A840  7C 7F 1B 78 */	mr r31, r3
/* 8028D904 0028A844  4B E7 A0 95 */	bl doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 8028D908 0028A848  7F E3 FB 78 */	mr r3, r31
/* 8028D90C 0028A84C  48 00 06 59 */	bl effectDrawOff__Q34Game4Baby3ObjFv
/* 8028D910 0028A850  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D914 0028A854  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028D918 0028A858  7C 08 03 A6 */	mtlr r0
/* 8028D91C 0028A85C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D920 0028A860  4E 80 00 20 */	blr 

.global doFinishWaitingBirthTypeDrop__Q34Game4Baby3ObjFv
doFinishWaitingBirthTypeDrop__Q34Game4Baby3ObjFv:
/* 8028D924 0028A864  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D928 0028A868  7C 08 02 A6 */	mflr r0
/* 8028D92C 0028A86C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D930 0028A870  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028D934 0028A874  7C 7F 1B 78 */	mr r31, r3
/* 8028D938 0028A878  4B E7 A0 91 */	bl doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 8028D93C 0028A87C  7F E3 FB 78 */	mr r3, r31
/* 8028D940 0028A880  48 00 05 F5 */	bl effectDrawOn__Q34Game4Baby3ObjFv
/* 8028D944 0028A884  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D948 0028A888  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028D94C 0028A88C  7C 08 03 A6 */	mtlr r0
/* 8028D950 0028A890  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D954 0028A894  4E 80 00 20 */	blr 

.global doStartMovie__Q34Game4Baby3ObjFv
doStartMovie__Q34Game4Baby3ObjFv:
/* 8028D958 0028A898  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D95C 0028A89C  7C 08 02 A6 */	mflr r0
/* 8028D960 0028A8A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D964 0028A8A4  48 00 06 01 */	bl effectDrawOff__Q34Game4Baby3ObjFv
/* 8028D968 0028A8A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D96C 0028A8AC  7C 08 03 A6 */	mtlr r0
/* 8028D970 0028A8B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D974 0028A8B4  4E 80 00 20 */	blr 

.global doEndMovie__Q34Game4Baby3ObjFv
doEndMovie__Q34Game4Baby3ObjFv:
/* 8028D978 0028A8B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D97C 0028A8BC  7C 08 02 A6 */	mflr r0
/* 8028D980 0028A8C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D984 0028A8C4  48 00 05 B1 */	bl effectDrawOn__Q34Game4Baby3ObjFv
/* 8028D988 0028A8C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D98C 0028A8CC  7C 08 03 A6 */	mtlr r0
/* 8028D990 0028A8D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D994 0028A8D4  4E 80 00 20 */	blr 

.global initMouthSlots__Q34Game4Baby3ObjFv
initMouthSlots__Q34Game4Baby3ObjFv:
/* 8028D998 0028A8D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8028D99C 0028A8DC  7C 08 02 A6 */	mflr r0
/* 8028D9A0 0028A8E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8028D9A4 0028A8E4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8028D9A8 0028A8E8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8028D9AC 0028A8EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028D9B0 0028A8F0  93 C1 00 08 */	stw r30, 8(r1)
/* 8028D9B4 0028A8F4  7C 7E 1B 78 */	mr r30, r3
/* 8028D9B8 0028A8F8  38 80 00 01 */	li r4, 1
/* 8028D9BC 0028A8FC  38 7E 02 C0 */	addi r3, r30, 0x2c0
/* 8028D9C0 0028A900  4B EA AB 99 */	bl alloc__10MouthSlotsFi
/* 8028D9C4 0028A904  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 8028D9C8 0028A908  38 7E 02 C0 */	addi r3, r30, 0x2c0
/* 8028D9CC 0028A90C  38 80 00 00 */	li r4, 0
/* 8028D9D0 0028A910  38 C2 D5 94 */	addi r6, r2, lbl_8051B8F4@sda21
/* 8028D9D4 0028A914  4B EA AC BD */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 8028D9D8 0028A918  C3 E2 D5 9C */	lfs f31, lbl_8051B8FC@sda21(r2)
/* 8028D9DC 0028A91C  3B E0 00 00 */	li r31, 0
/* 8028D9E0 0028A920  48 00 00 18 */	b .L_8028D9F8
.L_8028D9E4:
/* 8028D9E4 0028A924  7F E4 FB 78 */	mr r4, r31
/* 8028D9E8 0028A928  38 7E 02 C0 */	addi r3, r30, 0x2c0
/* 8028D9EC 0028A92C  4B EA AD 8D */	bl getSlot__10MouthSlotsFi
/* 8028D9F0 0028A930  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 8028D9F4 0028A934  3B FF 00 01 */	addi r31, r31, 1
.L_8028D9F8:
/* 8028D9F8 0028A938  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 8028D9FC 0028A93C  7C 1F 00 00 */	cmpw r31, r0
/* 8028DA00 0028A940  41 80 FF E4 */	blt .L_8028D9E4
/* 8028DA04 0028A944  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8028DA08 0028A948  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8028DA0C 0028A94C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8028DA10 0028A950  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028DA14 0028A954  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028DA18 0028A958  7C 08 03 A6 */	mtlr r0
/* 8028DA1C 0028A95C  38 21 00 20 */	addi r1, r1, 0x20
/* 8028DA20 0028A960  4E 80 00 20 */	blr 

.global getSlotPikiNum__Q34Game4Baby3ObjFv
getSlotPikiNum__Q34Game4Baby3ObjFv:
/* 8028DA24 0028A964  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8028DA28 0028A968  7C 08 02 A6 */	mflr r0
/* 8028DA2C 0028A96C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8028DA30 0028A970  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8028DA34 0028A974  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8028DA38 0028A978  3B C0 00 00 */	li r30, 0
/* 8028DA3C 0028A97C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8028DA40 0028A980  93 81 00 10 */	stw r28, 0x10(r1)
/* 8028DA44 0028A984  81 83 00 00 */	lwz r12, 0(r3)
/* 8028DA48 0028A988  81 8C 02 5C */	lwz r12, 0x25c(r12)
/* 8028DA4C 0028A98C  7D 89 03 A6 */	mtctr r12
/* 8028DA50 0028A990  4E 80 04 21 */	bctrl 
/* 8028DA54 0028A994  83 E3 00 00 */	lwz r31, 0(r3)
/* 8028DA58 0028A998  3B 80 00 00 */	li r28, 0
/* 8028DA5C 0028A99C  7C 7D 1B 78 */	mr r29, r3
/* 8028DA60 0028A9A0  48 00 00 24 */	b .L_8028DA84
.L_8028DA64:
/* 8028DA64 0028A9A4  7F A3 EB 78 */	mr r3, r29
/* 8028DA68 0028A9A8  7F 84 E3 78 */	mr r4, r28
/* 8028DA6C 0028A9AC  4B EA AD 0D */	bl getSlot__10MouthSlotsFi
/* 8028DA70 0028A9B0  80 03 00 64 */	lwz r0, 0x64(r3)
/* 8028DA74 0028A9B4  28 00 00 00 */	cmplwi r0, 0
/* 8028DA78 0028A9B8  41 82 00 08 */	beq .L_8028DA80
/* 8028DA7C 0028A9BC  3B DE 00 01 */	addi r30, r30, 1
.L_8028DA80:
/* 8028DA80 0028A9C0  3B 9C 00 01 */	addi r28, r28, 1
.L_8028DA84:
/* 8028DA84 0028A9C4  7C 1C F8 00 */	cmpw r28, r31
/* 8028DA88 0028A9C8  41 80 FF DC */	blt .L_8028DA64
/* 8028DA8C 0028A9CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8028DA90 0028A9D0  7F C3 F3 78 */	mr r3, r30
/* 8028DA94 0028A9D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8028DA98 0028A9D8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8028DA9C 0028A9DC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8028DAA0 0028A9E0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8028DAA4 0028A9E4  7C 08 03 A6 */	mtlr r0
/* 8028DAA8 0028A9E8  38 21 00 20 */	addi r1, r1, 0x20
/* 8028DAAC 0028A9EC  4E 80 00 20 */	blr 

.global getMouthSlots__Q34Game4Baby3ObjFv
getMouthSlots__Q34Game4Baby3ObjFv:
/* 8028DAB0 0028A9F0  38 63 02 C0 */	addi r3, r3, 0x2c0
/* 8028DAB4 0028A9F4  4E 80 00 20 */	blr 

.global resetRandTargetPosition__Q34Game4Baby3ObjFv
resetRandTargetPosition__Q34Game4Baby3ObjFv:
/* 8028DAB8 0028A9F8  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8028DABC 0028A9FC  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8028DAC0 0028AA00  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 8028DAC4 0028AA04  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 8028DAC8 0028AA08  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 8028DACC 0028AA0C  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 8028DAD0 0028AA10  4E 80 00 20 */	blr 

.global resetZukanAnimationFrame__Q34Game4Baby3ObjFv
resetZukanAnimationFrame__Q34Game4Baby3ObjFv:
/* 8028DAD4 0028AA14  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8028DAD8 0028AA18  7C 08 02 A6 */	mflr r0
/* 8028DADC 0028AA1C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8028DAE0 0028AA20  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8028DAE4 0028AA24  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8028DAE8 0028AA28  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8028DAEC 0028AA2C  7C 7F 1B 78 */	mr r31, r3
/* 8028DAF0 0028AA30  4B E7 97 31 */	bl getMotionFrameMax__Q24Game9EnemyBaseFv
/* 8028DAF4 0028AA34  FF E0 08 90 */	fmr f31, f1
/* 8028DAF8 0028AA38  4B E3 BA A9 */	bl rand
/* 8028DAFC 0028AA3C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8028DB00 0028AA40  3C 00 43 30 */	lis r0, 0x4330
/* 8028DB04 0028AA44  90 61 00 0C */	stw r3, 0xc(r1)
/* 8028DB08 0028AA48  7F E3 FB 78 */	mr r3, r31
/* 8028DB0C 0028AA4C  C8 42 D5 A8 */	lfd f2, lbl_8051B908@sda21(r2)
/* 8028DB10 0028AA50  90 01 00 08 */	stw r0, 8(r1)
/* 8028DB14 0028AA54  C0 02 D5 A0 */	lfs f0, lbl_8051B900@sda21(r2)
/* 8028DB18 0028AA58  C8 21 00 08 */	lfd f1, 8(r1)
/* 8028DB1C 0028AA5C  EC 21 10 28 */	fsubs f1, f1, f2
/* 8028DB20 0028AA60  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8028DB24 0028AA64  EC 21 00 24 */	fdivs f1, f1, f0
/* 8028DB28 0028AA68  4B E7 77 01 */	bl setMotionFrame__Q24Game9EnemyBaseFf
/* 8028DB2C 0028AA6C  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8028DB30 0028AA70  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8028DB34 0028AA74  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8028DB38 0028AA78  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8028DB3C 0028AA7C  7C 08 03 A6 */	mtlr r0
/* 8028DB40 0028AA80  38 21 00 30 */	addi r1, r1, 0x30
/* 8028DB44 0028AA84  4E 80 00 20 */	blr 

.global moveNoTarget__Q34Game4Baby3ObjFv
moveNoTarget__Q34Game4Baby3ObjFv:
/* 8028DB48 0028AA88  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8028DB4C 0028AA8C  7C 08 02 A6 */	mflr r0
/* 8028DB50 0028AA90  90 01 00 64 */	stw r0, 0x64(r1)
/* 8028DB54 0028AA94  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8028DB58 0028AA98  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8028DB5C 0028AA9C  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8028DB60 0028AAA0  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8028DB64 0028AAA4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8028DB68 0028AAA8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8028DB6C 0028AAAC  7C 7F 1B 78 */	mr r31, r3
/* 8028DB70 0028AAB0  28 04 00 00 */	cmplwi r4, 0
/* 8028DB74 0028AAB4  41 82 01 AC */	beq .L_8028DD20
/* 8028DB78 0028AAB8  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8028DB7C 0028AABC  2C 00 00 04 */	cmpwi r0, 4
/* 8028DB80 0028AAC0  40 82 01 A0 */	bne .L_8028DD20
/* 8028DB84 0028AAC4  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8028DB88 0028AAC8  C0 1F 02 D0 */	lfs f0, 0x2d0(r31)
/* 8028DB8C 0028AACC  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8028DB90 0028AAD0  EC 61 00 28 */	fsubs f3, f1, f0
/* 8028DB94 0028AAD4  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 8028DB98 0028AAD8  C0 02 D5 B0 */	lfs f0, lbl_8051B910@sda21(r2)
/* 8028DB9C 0028AADC  EC 42 08 28 */	fsubs f2, f2, f1
/* 8028DBA0 0028AAE0  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8028DBA4 0028AAE4  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8028DBA8 0028AAE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028DBAC 0028AAEC  40 80 01 54 */	bge .L_8028DD00
/* 8028DBB0 0028AAF0  4B E3 B9 F1 */	bl rand
/* 8028DBB4 0028AAF4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8028DBB8 0028AAF8  3C 00 43 30 */	lis r0, 0x4330
/* 8028DBBC 0028AAFC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8028DBC0 0028AB00  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8028DBC4 0028AB04  C8 42 D5 A8 */	lfd f2, lbl_8051B908@sda21(r2)
/* 8028DBC8 0028AB08  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8028DBCC 0028AB0C  90 01 00 08 */	stw r0, 8(r1)
/* 8028DBD0 0028AB10  C0 02 D5 B4 */	lfs f0, lbl_8051B914@sda21(r2)
/* 8028DBD4 0028AB14  C8 21 00 08 */	lfd f1, 8(r1)
/* 8028DBD8 0028AB18  C0 A2 D5 A0 */	lfs f5, lbl_8051B900@sda21(r2)
/* 8028DBDC 0028AB1C  EC 41 10 28 */	fsubs f2, f1, f2
/* 8028DBE0 0028AB20  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 8028DBE4 0028AB24  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 8028DBE8 0028AB28  C0 82 D5 8C */	lfs f4, lbl_8051B8EC@sda21(r2)
/* 8028DBEC 0028AB2C  EC C0 00 B2 */	fmuls f6, f0, f2
/* 8028DBF0 0028AB30  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 8028DBF4 0028AB34  EC 23 08 28 */	fsubs f1, f3, f1
/* 8028DBF8 0028AB38  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8028DBFC 0028AB3C  EC 66 28 24 */	fdivs f3, f6, f5
/* 8028DC00 0028AB40  EF E4 18 2A */	fadds f31, f4, f3
/* 8028DC04 0028AB44  EC 42 00 28 */	fsubs f2, f2, f0
/* 8028DC08 0028AB48  4B DA 75 01 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8028DC0C 0028AB4C  FF C0 08 90 */	fmr f30, f1
/* 8028DC10 0028AB50  4B E3 B9 91 */	bl rand
/* 8028DC14 0028AB54  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8028DC18 0028AB58  3C 00 43 30 */	lis r0, 0x4330
/* 8028DC1C 0028AB5C  90 61 00 14 */	stw r3, 0x14(r1)
/* 8028DC20 0028AB60  C8 42 D5 A8 */	lfd f2, lbl_8051B908@sda21(r2)
/* 8028DC24 0028AB64  90 01 00 10 */	stw r0, 0x10(r1)
/* 8028DC28 0028AB68  C0 62 D5 B8 */	lfs f3, lbl_8051B918@sda21(r2)
/* 8028DC2C 0028AB6C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8028DC30 0028AB70  C0 22 D5 A0 */	lfs f1, lbl_8051B900@sda21(r2)
/* 8028DC34 0028AB74  EC 80 10 28 */	fsubs f4, f0, f2
/* 8028DC38 0028AB78  C0 42 D5 BC */	lfs f2, lbl_8051B91C@sda21(r2)
/* 8028DC3C 0028AB7C  C0 02 D5 84 */	lfs f0, lbl_8051B8E4@sda21(r2)
/* 8028DC40 0028AB80  EC 63 01 32 */	fmuls f3, f3, f4
/* 8028DC44 0028AB84  EC 23 08 24 */	fdivs f1, f3, f1
/* 8028DC48 0028AB88  EC 3E 08 2A */	fadds f1, f30, f1
/* 8028DC4C 0028AB8C  EC 62 08 2A */	fadds f3, f2, f1
/* 8028DC50 0028AB90  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8028DC54 0028AB94  40 80 00 30 */	bge .L_8028DC84
/* 8028DC58 0028AB98  C0 02 D5 C0 */	lfs f0, lbl_8051B920@sda21(r2)
/* 8028DC5C 0028AB9C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8028DC60 0028ABA0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8028DC64 0028ABA4  EC 03 00 32 */	fmuls f0, f3, f0
/* 8028DC68 0028ABA8  FC 00 00 1E */	fctiwz f0, f0
/* 8028DC6C 0028ABAC  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8028DC70 0028ABB0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8028DC74 0028ABB4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8028DC78 0028ABB8  7C 03 04 2E */	lfsx f0, r3, r0
/* 8028DC7C 0028ABBC  FC 40 00 50 */	fneg f2, f0
/* 8028DC80 0028ABC0  48 00 00 28 */	b .L_8028DCA8
.L_8028DC84:
/* 8028DC84 0028ABC4  C0 02 D5 C4 */	lfs f0, lbl_8051B924@sda21(r2)
/* 8028DC88 0028ABC8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8028DC8C 0028ABCC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8028DC90 0028ABD0  EC 03 00 32 */	fmuls f0, f3, f0
/* 8028DC94 0028ABD4  FC 00 00 1E */	fctiwz f0, f0
/* 8028DC98 0028ABD8  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8028DC9C 0028ABDC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8028DCA0 0028ABE0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8028DCA4 0028ABE4  7C 43 04 2E */	lfsx f2, r3, r0
.L_8028DCA8:
/* 8028DCA8 0028ABE8  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 8028DCAC 0028ABEC  C0 02 D5 84 */	lfs f0, lbl_8051B8E4@sda21(r2)
/* 8028DCB0 0028ABF0  EC 3F 08 BA */	fmadds f1, f31, f2, f1
/* 8028DCB4 0028ABF4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8028DCB8 0028ABF8  D0 3F 02 C8 */	stfs f1, 0x2c8(r31)
/* 8028DCBC 0028ABFC  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8028DCC0 0028AC00  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 8028DCC4 0028AC04  40 80 00 08 */	bge .L_8028DCCC
/* 8028DCC8 0028AC08  FC 60 18 50 */	fneg f3, f3
.L_8028DCCC:
/* 8028DCCC 0028AC0C  C0 22 D5 C4 */	lfs f1, lbl_8051B924@sda21(r2)
/* 8028DCD0 0028AC10  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8028DCD4 0028AC14  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8028DCD8 0028AC18  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8028DCDC 0028AC1C  EC 23 00 72 */	fmuls f1, f3, f1
/* 8028DCE0 0028AC20  FC 20 08 1E */	fctiwz f1, f1
/* 8028DCE4 0028AC24  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 8028DCE8 0028AC28  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8028DCEC 0028AC2C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8028DCF0 0028AC30  7C 63 02 14 */	add r3, r3, r0
/* 8028DCF4 0028AC34  C0 23 00 04 */	lfs f1, 4(r3)
/* 8028DCF8 0028AC38  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 8028DCFC 0028AC3C  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
.L_8028DD00:
/* 8028DD00 0028AC40  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8028DD04 0028AC44  7F E3 FB 78 */	mr r3, r31
/* 8028DD08 0028AC48  38 9F 02 C8 */	addi r4, r31, 0x2c8
/* 8028DD0C 0028AC4C  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 8028DD10 0028AC50  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 8028DD14 0028AC54  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 8028DD18 0028AC58  4B E8 78 C5 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 8028DD1C 0028AC5C  48 00 00 14 */	b .L_8028DD30
.L_8028DD20:
/* 8028DD20 0028AC60  C0 02 D5 84 */	lfs f0, lbl_8051B8E4@sda21(r2)
/* 8028DD24 0028AC64  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8028DD28 0028AC68  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8028DD2C 0028AC6C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_8028DD30:
/* 8028DD30 0028AC70  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8028DD34 0028AC74  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8028DD38 0028AC78  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8028DD3C 0028AC7C  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8028DD40 0028AC80  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8028DD44 0028AC84  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8028DD48 0028AC88  7C 08 03 A6 */	mtlr r0
/* 8028DD4C 0028AC8C  38 21 00 60 */	addi r1, r1, 0x60
/* 8028DD50 0028AC90  4E 80 00 20 */	blr 

.global createHoney__Q34Game4Baby3ObjFv
createHoney__Q34Game4Baby3ObjFv:
/* 8028DD54 0028AC94  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8028DD58 0028AC98  7C 08 02 A6 */	mflr r0
/* 8028DD5C 0028AC9C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8028DD60 0028ACA0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8028DD64 0028ACA4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8028DD68 0028ACA8  7C 7E 1B 78 */	mr r30, r3
/* 8028DD6C 0028ACAC  83 E3 00 C0 */	lwz r31, 0xc0(r3)
/* 8028DD70 0028ACB0  4B E3 B8 31 */	bl rand
/* 8028DD74 0028ACB4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8028DD78 0028ACB8  3C 00 43 30 */	lis r0, 0x4330
/* 8028DD7C 0028ACBC  90 61 00 24 */	stw r3, 0x24(r1)
/* 8028DD80 0028ACC0  C8 62 D5 A8 */	lfd f3, lbl_8051B908@sda21(r2)
/* 8028DD84 0028ACC4  90 01 00 20 */	stw r0, 0x20(r1)
/* 8028DD88 0028ACC8  C0 42 D5 88 */	lfs f2, lbl_8051B8E8@sda21(r2)
/* 8028DD8C 0028ACCC  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8028DD90 0028ACD0  C0 22 D5 A0 */	lfs f1, lbl_8051B900@sda21(r2)
/* 8028DD94 0028ACD4  EC 60 18 28 */	fsubs f3, f0, f3
/* 8028DD98 0028ACD8  C0 1F 08 44 */	lfs f0, 0x844(r31)
/* 8028DD9C 0028ACDC  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8028DDA0 0028ACE0  EC 22 08 24 */	fdivs f1, f2, f1
/* 8028DDA4 0028ACE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028DDA8 0028ACE8  40 80 00 88 */	bge .L_8028DE30
/* 8028DDAC 0028ACEC  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 8028DDB0 0028ACF0  38 00 00 00 */	li r0, 0
/* 8028DDB4 0028ACF4  38 83 A2 F4 */	addi r4, r3, __vt__Q24Game15CreatureInitArg@l
/* 8028DDB8 0028ACF8  3C 60 80 4B */	lis r3, __vt__Q34Game9ItemHoney7InitArg@ha
/* 8028DDBC 0028ACFC  90 81 00 08 */	stw r4, 8(r1)
/* 8028DDC0 0028AD00  38 83 A2 E8 */	addi r4, r3, __vt__Q34Game9ItemHoney7InitArg@l
/* 8028DDC4 0028AD04  80 6D 94 50 */	lwz r3, mgr__Q24Game9ItemHoney@sda21(r13)
/* 8028DDC8 0028AD08  90 81 00 08 */	stw r4, 8(r1)
/* 8028DDCC 0028AD0C  98 01 00 0C */	stb r0, 0xc(r1)
/* 8028DDD0 0028AD10  98 01 00 0D */	stb r0, 0xd(r1)
/* 8028DDD4 0028AD14  81 83 00 00 */	lwz r12, 0(r3)
/* 8028DDD8 0028AD18  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8028DDDC 0028AD1C  7D 89 03 A6 */	mtctr r12
/* 8028DDE0 0028AD20  4E 80 04 21 */	bctrl 
/* 8028DDE4 0028AD24  7C 7F 1B 79 */	or. r31, r3, r3
/* 8028DDE8 0028AD28  41 82 00 48 */	beq .L_8028DE30
/* 8028DDEC 0028AD2C  38 81 00 08 */	addi r4, r1, 8
/* 8028DDF0 0028AD30  4B EA D1 D9 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8028DDF4 0028AD34  7F E3 FB 78 */	mr r3, r31
/* 8028DDF8 0028AD38  38 9E 01 8C */	addi r4, r30, 0x18c
/* 8028DDFC 0028AD3C  38 A0 00 00 */	li r5, 0
/* 8028DE00 0028AD40  4B EA D3 A9 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8028DE04 0028AD44  C0 22 D5 84 */	lfs f1, lbl_8051B8E4@sda21(r2)
/* 8028DE08 0028AD48  7F E3 FB 78 */	mr r3, r31
/* 8028DE0C 0028AD4C  C0 02 D5 C8 */	lfs f0, lbl_8051B928@sda21(r2)
/* 8028DE10 0028AD50  38 81 00 10 */	addi r4, r1, 0x10
/* 8028DE14 0028AD54  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8028DE18 0028AD58  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8028DE1C 0028AD5C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8028DE20 0028AD60  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028DE24 0028AD64  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8028DE28 0028AD68  7D 89 03 A6 */	mtctr r12
/* 8028DE2C 0028AD6C  4E 80 04 21 */	bctrl 
.L_8028DE30:
/* 8028DE30 0028AD70  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8028DE34 0028AD74  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8028DE38 0028AD78  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8028DE3C 0028AD7C  7C 08 03 A6 */	mtlr r0
/* 8028DE40 0028AD80  38 21 00 30 */	addi r1, r1, 0x30
/* 8028DE44 0028AD84  4E 80 00 20 */	blr 

.global createEffect__Q34Game4Baby3ObjFv
createEffect__Q34Game4Baby3ObjFv:
/* 8028DE48 0028AD88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028DE4C 0028AD8C  7C 08 02 A6 */	mflr r0
/* 8028DE50 0028AD90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028DE54 0028AD94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028DE58 0028AD98  7C 7F 1B 78 */	mr r31, r3
/* 8028DE5C 0028AD9C  38 60 00 14 */	li r3, 0x14
/* 8028DE60 0028ADA0  4B D9 60 45 */	bl __nw__FUl
/* 8028DE64 0028ADA4  28 03 00 00 */	cmplwi r3, 0
/* 8028DE68 0028ADA8  41 82 00 7C */	beq .L_8028DEE4
/* 8028DE6C 0028ADAC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8028DE70 0028ADB0  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8028DE74 0028ADB4  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8028DE78 0028ADB8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028DE7C 0028ADBC  90 03 00 00 */	stw r0, 0(r3)
/* 8028DE80 0028ADC0  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8028DE84 0028ADC4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028DE88 0028ADC8  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 8028DE8C 0028ADCC  90 03 00 04 */	stw r0, 4(r3)
/* 8028DE90 0028ADD0  39 04 69 40 */	addi r8, r4, __vt__Q23efx9TChasePos@l
/* 8028DE94 0028ADD4  3C 80 80 4D */	lis r4, __vt__Q23efx9TBabyBorn@ha
/* 8028DE98 0028ADD8  38 05 00 14 */	addi r0, r5, 0x14
/* 8028DE9C 0028ADDC  90 A3 00 00 */	stw r5, 0(r3)
/* 8028DEA0 0028ADE0  38 84 A5 70 */	addi r4, r4, __vt__Q23efx9TBabyBorn@l
/* 8028DEA4 0028ADE4  39 40 00 00 */	li r10, 0
/* 8028DEA8 0028ADE8  39 20 02 B2 */	li r9, 0x2b2
/* 8028DEAC 0028ADEC  90 03 00 04 */	stw r0, 4(r3)
/* 8028DEB0 0028ADF0  38 E8 00 14 */	addi r7, r8, 0x14
/* 8028DEB4 0028ADF4  38 DF 01 8C */	addi r6, r31, 0x18c
/* 8028DEB8 0028ADF8  38 A0 00 04 */	li r5, 4
/* 8028DEBC 0028ADFC  91 43 00 08 */	stw r10, 8(r3)
/* 8028DEC0 0028AE00  38 04 00 14 */	addi r0, r4, 0x14
/* 8028DEC4 0028AE04  B1 23 00 0C */	sth r9, 0xc(r3)
/* 8028DEC8 0028AE08  99 43 00 0E */	stb r10, 0xe(r3)
/* 8028DECC 0028AE0C  91 03 00 00 */	stw r8, 0(r3)
/* 8028DED0 0028AE10  90 E3 00 04 */	stw r7, 4(r3)
/* 8028DED4 0028AE14  90 C3 00 10 */	stw r6, 0x10(r3)
/* 8028DED8 0028AE18  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8028DEDC 0028AE1C  90 83 00 00 */	stw r4, 0(r3)
/* 8028DEE0 0028AE20  90 03 00 04 */	stw r0, 4(r3)
.L_8028DEE4:
/* 8028DEE4 0028AE24  90 7F 02 D4 */	stw r3, 0x2d4(r31)
/* 8028DEE8 0028AE28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028DEEC 0028AE2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028DEF0 0028AE30  7C 08 03 A6 */	mtlr r0
/* 8028DEF4 0028AE34  38 21 00 10 */	addi r1, r1, 0x10
/* 8028DEF8 0028AE38  4E 80 00 20 */	blr 

.global setupEffect__Q34Game4Baby3ObjFv
setupEffect__Q34Game4Baby3ObjFv:
/* 8028DEFC 0028AE3C  4E 80 00 20 */	blr 

.global createBornEffect__Q34Game4Baby3ObjFv
createBornEffect__Q34Game4Baby3ObjFv:
/* 8028DF00 0028AE40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028DF04 0028AE44  7C 08 02 A6 */	mflr r0
/* 8028DF08 0028AE48  38 80 00 00 */	li r4, 0
/* 8028DF0C 0028AE4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028DF10 0028AE50  80 63 02 D4 */	lwz r3, 0x2d4(r3)
/* 8028DF14 0028AE54  81 83 00 00 */	lwz r12, 0(r3)
/* 8028DF18 0028AE58  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028DF1C 0028AE5C  7D 89 03 A6 */	mtctr r12
/* 8028DF20 0028AE60  4E 80 04 21 */	bctrl 
/* 8028DF24 0028AE64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028DF28 0028AE68  7C 08 03 A6 */	mtlr r0
/* 8028DF2C 0028AE6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028DF30 0028AE70  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game4Baby3ObjFv
effectDrawOn__Q34Game4Baby3ObjFv:
/* 8028DF34 0028AE74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028DF38 0028AE78  7C 08 02 A6 */	mflr r0
/* 8028DF3C 0028AE7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028DF40 0028AE80  80 63 02 D4 */	lwz r3, 0x2d4(r3)
/* 8028DF44 0028AE84  81 83 00 00 */	lwz r12, 0(r3)
/* 8028DF48 0028AE88  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8028DF4C 0028AE8C  7D 89 03 A6 */	mtctr r12
/* 8028DF50 0028AE90  4E 80 04 21 */	bctrl 
/* 8028DF54 0028AE94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028DF58 0028AE98  7C 08 03 A6 */	mtlr r0
/* 8028DF5C 0028AE9C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028DF60 0028AEA0  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game4Baby3ObjFv
effectDrawOff__Q34Game4Baby3ObjFv:
/* 8028DF64 0028AEA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028DF68 0028AEA8  7C 08 02 A6 */	mflr r0
/* 8028DF6C 0028AEAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028DF70 0028AEB0  80 63 02 D4 */	lwz r3, 0x2d4(r3)
/* 8028DF74 0028AEB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028DF78 0028AEB8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8028DF7C 0028AEBC  7D 89 03 A6 */	mtctr r12
/* 8028DF80 0028AEC0  4E 80 04 21 */	bctrl 
/* 8028DF84 0028AEC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028DF88 0028AEC8  7C 08 03 A6 */	mtlr r0
/* 8028DF8C 0028AECC  38 21 00 10 */	addi r1, r1, 0x10
/* 8028DF90 0028AED0  4E 80 00 20 */	blr 

.global __dt__Q23efx9TBabyBornFv
__dt__Q23efx9TBabyBornFv:
/* 8028DF94 0028AED4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028DF98 0028AED8  7C 08 02 A6 */	mflr r0
/* 8028DF9C 0028AEDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028DFA0 0028AEE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028DFA4 0028AEE4  7C 9F 23 78 */	mr r31, r4
/* 8028DFA8 0028AEE8  93 C1 00 08 */	stw r30, 8(r1)
/* 8028DFAC 0028AEEC  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028DFB0 0028AEF0  41 82 00 64 */	beq .L_8028E014
/* 8028DFB4 0028AEF4  3C 60 80 4D */	lis r3, __vt__Q23efx9TBabyBorn@ha
/* 8028DFB8 0028AEF8  38 63 A5 70 */	addi r3, r3, __vt__Q23efx9TBabyBorn@l
/* 8028DFBC 0028AEFC  90 7E 00 00 */	stw r3, 0(r30)
/* 8028DFC0 0028AF00  38 03 00 14 */	addi r0, r3, 0x14
/* 8028DFC4 0028AF04  90 1E 00 04 */	stw r0, 4(r30)
/* 8028DFC8 0028AF08  41 82 00 3C */	beq .L_8028E004
/* 8028DFCC 0028AF0C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 8028DFD0 0028AF10  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 8028DFD4 0028AF14  90 7E 00 00 */	stw r3, 0(r30)
/* 8028DFD8 0028AF18  38 03 00 14 */	addi r0, r3, 0x14
/* 8028DFDC 0028AF1C  90 1E 00 04 */	stw r0, 4(r30)
/* 8028DFE0 0028AF20  41 82 00 24 */	beq .L_8028E004
/* 8028DFE4 0028AF24  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028DFE8 0028AF28  38 7E 00 04 */	addi r3, r30, 4
/* 8028DFEC 0028AF2C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028DFF0 0028AF30  38 80 00 00 */	li r4, 0
/* 8028DFF4 0028AF34  90 BE 00 00 */	stw r5, 0(r30)
/* 8028DFF8 0028AF38  38 05 00 14 */	addi r0, r5, 0x14
/* 8028DFFC 0028AF3C  90 1E 00 04 */	stw r0, 4(r30)
/* 8028E000 0028AF40  4B E0 1C 9D */	bl __dt__18JPAEmitterCallBackFv
.L_8028E004:
/* 8028E004 0028AF44  7F E0 07 35 */	extsh. r0, r31
/* 8028E008 0028AF48  40 81 00 0C */	ble .L_8028E014
/* 8028E00C 0028AF4C  7F C3 F3 78 */	mr r3, r30
/* 8028E010 0028AF50  4B D9 60 A5 */	bl __dl__FPv
.L_8028E014:
/* 8028E014 0028AF54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028E018 0028AF58  7F C3 F3 78 */	mr r3, r30
/* 8028E01C 0028AF5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028E020 0028AF60  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028E024 0028AF64  7C 08 03 A6 */	mtlr r0
/* 8028E028 0028AF68  38 21 00 10 */	addi r1, r1, 0x10
/* 8028E02C 0028AF6C  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game4Baby3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game4Baby3ObjFPQ24Game8WaterBox:
/* 8028E030 0028AF70  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game4Baby3ObjFv
outWaterCallback__Q34Game4Baby3ObjFv:
/* 8028E034 0028AF74  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game4Baby3ObjFv
getEnemyTypeID__Q34Game4Baby3ObjFv:
/* 8028E038 0028AF78  38 60 00 1F */	li r3, 0x1f
/* 8028E03C 0028AF7C  4E 80 00 20 */	blr 

.global "@4@__dt__Q23efx9TBabyBornFv"
"@4@__dt__Q23efx9TBabyBornFv":
/* 8028E040 0028AF80  38 63 FF FC */	addi r3, r3, -4
/* 8028E044 0028AF84  4B FF FF 50 */	b __dt__Q23efx9TBabyBornFv
