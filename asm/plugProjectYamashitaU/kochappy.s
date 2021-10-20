.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game8Kochappy3Obj
__vt__Q34Game8Kochappy3Obj:
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
	.4byte onInit__Q34Game12KochappyBase3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game12KochappyBase3ObjFR8Graphics
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
	.4byte bounceCallback__Q34Game12KochappyBase3ObjFPQ23Sys8Triangle
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
	.4byte getShadowParam__Q34Game12KochappyBase3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game8Kochappy3ObjFv
	.4byte "birth__Q34Game12KochappyBase3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game12KochappyBase3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game12KochappyBase3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game12KochappyBase3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game8Kochappy3ObjFv
	.4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q34Game12KochappyBase3ObjFv
	.4byte setParameters__Q24Game9EnemyBaseFv
	.4byte initMouthSlots__Q34Game12KochappyBase3ObjFv
	.4byte initWalkSmokeEffect__Q34Game12KochappyBase3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game12KochappyBase3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game8Kochappy3ObjFv
	.4byte getMouthSlots__Q34Game12KochappyBase3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game12KochappyBase3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game12KochappyBase3ObjFv
	.4byte doFinishStoneState__Q34Game12KochappyBase3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game12KochappyBase3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game12KochappyBase3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game12KochappyBase3ObjFPQ34Game12KochappyBase3FSM
	.4byte setAnimationSpeed__Q34Game12KochappyBase3ObjFf
	.4byte resetEnemyNonStone__Q34Game12KochappyBase3ObjFv
	.4byte setEnemyNonStone__Q34Game12KochappyBase3ObjFv
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
.global __vt__Q28SysShape12BaseAnimator
__vt__Q28SysShape12BaseAnimator:
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game8Kochappy3ObjFv
__ct__Q34Game8Kochappy3ObjFv:
/* 8010F31C 0010C25C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010F320 0010C260  7C 08 02 A6 */	mflr r0
/* 8010F324 0010C264  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010F328 0010C268  7C 80 07 35 */	extsh. r0, r4
/* 8010F32C 0010C26C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010F330 0010C270  7C 7F 1B 78 */	mr r31, r3
/* 8010F334 0010C274  93 C1 00 08 */	stw r30, 8(r1)
/* 8010F338 0010C278  41 82 00 24 */	beq lbl_8010F35C
/* 8010F33C 0010C27C  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 8010F340 0010C280  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8010F344 0010C284  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8010F348 0010C288  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8010F34C 0010C28C  38 00 00 00 */	li r0, 0
/* 8010F350 0010C290  90 7F 02 D8 */	stw r3, 0x2d8(r31)
/* 8010F354 0010C294  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 8010F358 0010C298  90 1F 02 E0 */	stw r0, 0x2e0(r31)
lbl_8010F35C:
/* 8010F35C 0010C29C  7F E3 FB 78 */	mr r3, r31
/* 8010F360 0010C2A0  38 80 00 00 */	li r4, 0
/* 8010F364 0010C2A4  48 01 E7 85 */	bl __ct__Q34Game12KochappyBase3ObjFv
/* 8010F368 0010C2A8  3C 60 80 4B */	lis r3, __vt__Q34Game8Kochappy3Obj@ha
/* 8010F36C 0010C2AC  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 8010F370 0010C2B0  38 A3 B6 50 */	addi r5, r3, __vt__Q34Game8Kochappy3Obj@l
/* 8010F374 0010C2B4  38 60 00 2C */	li r3, 0x2c
/* 8010F378 0010C2B8  90 BF 00 00 */	stw r5, 0(r31)
/* 8010F37C 0010C2BC  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8010F380 0010C2C0  38 A5 03 08 */	addi r5, r5, 0x308
/* 8010F384 0010C2C4  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8010F388 0010C2C8  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8010F38C 0010C2CC  90 A4 00 00 */	stw r5, 0(r4)
/* 8010F390 0010C2D0  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8010F394 0010C2D4  7C 04 00 50 */	subf r0, r4, r0
/* 8010F398 0010C2D8  90 04 00 0C */	stw r0, 0xc(r4)
/* 8010F39C 0010C2DC  4B F1 4B 09 */	bl __nw__FUl
/* 8010F3A0 0010C2E0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8010F3A4 0010C2E4  41 82 00 44 */	beq lbl_8010F3E8
/* 8010F3A8 0010C2E8  48 01 85 CD */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8010F3AC 0010C2EC  3C 60 80 4B */	lis r3, __vt__Q34Game12KochappyBase14ProperAnimator@ha
/* 8010F3B0 0010C2F0  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8010F3B4 0010C2F4  38 03 B6 28 */	addi r0, r3, __vt__Q34Game12KochappyBase14ProperAnimator@l
/* 8010F3B8 0010C2F8  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8010F3BC 0010C2FC  90 1E 00 00 */	stw r0, 0(r30)
/* 8010F3C0 0010C300  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8010F3C4 0010C304  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8010F3C8 0010C308  38 00 00 00 */	li r0, 0
/* 8010F3CC 0010C30C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8010F3D0 0010C310  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8010F3D4 0010C314  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8010F3D8 0010C318  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8010F3DC 0010C31C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8010F3E0 0010C320  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8010F3E4 0010C324  90 1E 00 20 */	stw r0, 0x20(r30)
lbl_8010F3E8:
/* 8010F3E8 0010C328  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8010F3EC 0010C32C  38 60 00 1C */	li r3, 0x1c
/* 8010F3F0 0010C330  4B F1 4A B5 */	bl __nw__FUl
/* 8010F3F4 0010C334  7C 64 1B 79 */	or. r4, r3, r3
/* 8010F3F8 0010C338  41 82 00 24 */	beq lbl_8010F41C
/* 8010F3FC 0010C33C  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8010F400 0010C340  3C 60 80 4B */	lis r3, __vt__Q34Game12KochappyBase3FSM@ha
/* 8010F404 0010C344  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8010F408 0010C348  38 A0 FF FF */	li r5, -1
/* 8010F40C 0010C34C  90 04 00 00 */	stw r0, 0(r4)
/* 8010F410 0010C350  38 03 BB 30 */	addi r0, r3, __vt__Q34Game12KochappyBase3FSM@l
/* 8010F414 0010C354  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8010F418 0010C358  90 04 00 00 */	stw r0, 0(r4)
lbl_8010F41C:
/* 8010F41C 0010C35C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8010F420 0010C360  7F E3 FB 78 */	mr r3, r31
/* 8010F424 0010C364  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8010F428 0010C368  7D 89 03 A6 */	mtctr r12
/* 8010F42C 0010C36C  4E 80 04 21 */	bctrl 
/* 8010F430 0010C370  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010F434 0010C374  7F E3 FB 78 */	mr r3, r31
/* 8010F438 0010C378  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010F43C 0010C37C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8010F440 0010C380  7C 08 03 A6 */	mtlr r0
/* 8010F444 0010C384  38 21 00 10 */	addi r1, r1, 0x10
/* 8010F448 0010C388  4E 80 00 20 */	blr 

.global setFSM__Q34Game12KochappyBase3ObjFPQ34Game12KochappyBase3FSM
setFSM__Q34Game12KochappyBase3ObjFPQ34Game12KochappyBase3FSM:
/* 8010F44C 0010C38C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010F450 0010C390  7C 08 02 A6 */	mflr r0
/* 8010F454 0010C394  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010F458 0010C398  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010F45C 0010C39C  7C 7F 1B 78 */	mr r31, r3
/* 8010F460 0010C3A0  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 8010F464 0010C3A4  7F E4 FB 78 */	mr r4, r31
/* 8010F468 0010C3A8  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8010F46C 0010C3AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8010F470 0010C3B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8010F474 0010C3B4  7D 89 03 A6 */	mtctr r12
/* 8010F478 0010C3B8  4E 80 04 21 */	bctrl 
/* 8010F47C 0010C3BC  38 00 00 00 */	li r0, 0
/* 8010F480 0010C3C0  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8010F484 0010C3C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010F488 0010C3C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010F48C 0010C3CC  7C 08 03 A6 */	mtlr r0
/* 8010F490 0010C3D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8010F494 0010C3D4  4E 80 00 20 */	blr 

.global __dt__Q24Game17EnemyAnimatorBaseFv
__dt__Q24Game17EnemyAnimatorBaseFv:
/* 8010F498 0010C3D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010F49C 0010C3DC  7C 08 02 A6 */	mflr r0
/* 8010F4A0 0010C3E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010F4A4 0010C3E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010F4A8 0010C3E8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8010F4AC 0010C3EC  41 82 00 1C */	beq lbl_8010F4C8
/* 8010F4B0 0010C3F0  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8010F4B4 0010C3F4  7C 80 07 35 */	extsh. r0, r4
/* 8010F4B8 0010C3F8  38 05 DC 58 */	addi r0, r5, __vt__Q24Game17EnemyAnimatorBase@l
/* 8010F4BC 0010C3FC  90 1F 00 00 */	stw r0, 0(r31)
/* 8010F4C0 0010C400  40 81 00 08 */	ble lbl_8010F4C8
/* 8010F4C4 0010C404  4B F1 4B F1 */	bl __dl__FPv
lbl_8010F4C8:
/* 8010F4C8 0010C408  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010F4CC 0010C40C  7F E3 FB 78 */	mr r3, r31
/* 8010F4D0 0010C410  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010F4D4 0010C414  7C 08 03 A6 */	mtlr r0
/* 8010F4D8 0010C418  38 21 00 10 */	addi r1, r1, 0x10
/* 8010F4DC 0010C41C  4E 80 00 20 */	blr 

.global __dt__Q34Game12KochappyBase3ObjFv
__dt__Q34Game12KochappyBase3ObjFv:
/* 8010F4E0 0010C420  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010F4E4 0010C424  7C 08 02 A6 */	mflr r0
/* 8010F4E8 0010C428  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010F4EC 0010C42C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010F4F0 0010C430  7C 7F 1B 79 */	or. r31, r3, r3
/* 8010F4F4 0010C434  93 C1 00 08 */	stw r30, 8(r1)
/* 8010F4F8 0010C438  7C 9E 23 78 */	mr r30, r4
/* 8010F4FC 0010C43C  41 82 00 84 */	beq lbl_8010F580
/* 8010F500 0010C440  3C 60 80 4B */	lis r3, __vt__Q34Game12KochappyBase3Obj@ha
/* 8010F504 0010C444  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 8010F508 0010C448  38 83 F4 E0 */	addi r4, r3, __vt__Q34Game12KochappyBase3Obj@l
/* 8010F50C 0010C44C  90 9F 00 00 */	stw r4, 0(r31)
/* 8010F510 0010C450  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8010F514 0010C454  38 84 03 08 */	addi r4, r4, 0x308
/* 8010F518 0010C458  90 7F 01 78 */	stw r3, 0x178(r31)
/* 8010F51C 0010C45C  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 8010F520 0010C460  90 83 00 00 */	stw r4, 0(r3)
/* 8010F524 0010C464  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 8010F528 0010C468  7C 03 00 50 */	subf r0, r3, r0
/* 8010F52C 0010C46C  90 03 00 0C */	stw r0, 0xc(r3)
/* 8010F530 0010C470  41 82 00 40 */	beq lbl_8010F570
/* 8010F534 0010C474  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 8010F538 0010C478  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 8010F53C 0010C47C  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 8010F540 0010C480  38 7F 02 90 */	addi r3, r31, 0x290
/* 8010F544 0010C484  90 9F 00 00 */	stw r4, 0(r31)
/* 8010F548 0010C488  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 8010F54C 0010C48C  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 8010F550 0010C490  38 80 FF FF */	li r4, -1
/* 8010F554 0010C494  90 BF 01 78 */	stw r5, 0x178(r31)
/* 8010F558 0010C498  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 8010F55C 0010C49C  90 C5 00 00 */	stw r6, 0(r5)
/* 8010F560 0010C4A0  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 8010F564 0010C4A4  7C 05 00 50 */	subf r0, r5, r0
/* 8010F568 0010C4A8  90 05 00 0C */	stw r0, 0xc(r5)
/* 8010F56C 0010C4AC  48 30 20 1D */	bl __dt__5CNodeFv
lbl_8010F570:
/* 8010F570 0010C4B0  7F C0 07 35 */	extsh. r0, r30
/* 8010F574 0010C4B4  40 81 00 0C */	ble lbl_8010F580
/* 8010F578 0010C4B8  7F E3 FB 78 */	mr r3, r31
/* 8010F57C 0010C4BC  4B F1 4B 39 */	bl __dl__FPv
lbl_8010F580:
/* 8010F580 0010C4C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010F584 0010C4C4  7F E3 FB 78 */	mr r3, r31
/* 8010F588 0010C4C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010F58C 0010C4CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8010F590 0010C4D0  7C 08 03 A6 */	mtlr r0
/* 8010F594 0010C4D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8010F598 0010C4D8  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game8Kochappy3ObjFv
changeMaterial__Q34Game8Kochappy3ObjFv:
/* 8010F59C 0010C4DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8010F5A0 0010C4E0  7C 08 02 A6 */	mflr r0
/* 8010F5A4 0010C4E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8010F5A8 0010C4E8  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8010F5AC 0010C4EC  7C 7B 1B 78 */	mr r27, r3
/* 8010F5B0 0010C4F0  80 63 01 80 */	lwz r3, 0x180(r3)
/* 8010F5B4 0010C4F4  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 8010F5B8 0010C4F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8010F5BC 0010C4FC  83 A4 00 08 */	lwz r29, 8(r4)
/* 8010F5C0 0010C500  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 8010F5C4 0010C504  83 DD 00 04 */	lwz r30, 4(r29)
/* 8010F5C8 0010C508  7D 89 03 A6 */	mtctr r12
/* 8010F5CC 0010C50C  4E 80 04 21 */	bctrl 
/* 8010F5D0 0010C510  7C 7F 1B 78 */	mr r31, r3
/* 8010F5D4 0010C514  7F A3 EB 78 */	mr r3, r29
/* 8010F5D8 0010C518  81 9D 00 00 */	lwz r12, 0(r29)
/* 8010F5DC 0010C51C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8010F5E0 0010C520  7D 89 03 A6 */	mtctr r12
/* 8010F5E4 0010C524  4E 80 04 21 */	bctrl 
/* 8010F5E8 0010C528  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 8010F5EC 0010C52C  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8010F5F0 0010C530  88 1F 00 00 */	lbz r0, 0(r31)
/* 8010F5F4 0010C534  3B 63 F2 30 */	addi r27, r3, j3dSys@l
/* 8010F5F8 0010C538  80 64 00 08 */	lwz r3, 8(r4)
/* 8010F5FC 0010C53C  3B 80 00 00 */	li r28, 0
/* 8010F600 0010C540  80 63 00 04 */	lwz r3, 4(r3)
/* 8010F604 0010C544  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 8010F608 0010C548  80 64 00 04 */	lwz r3, 4(r4)
/* 8010F60C 0010C54C  98 03 00 00 */	stb r0, 0(r3)
/* 8010F610 0010C550  88 1F 00 01 */	lbz r0, 1(r31)
/* 8010F614 0010C554  98 03 00 01 */	stb r0, 1(r3)
/* 8010F618 0010C558  A0 1F 00 02 */	lhz r0, 2(r31)
/* 8010F61C 0010C55C  B0 03 00 02 */	sth r0, 2(r3)
/* 8010F620 0010C560  A0 1F 00 04 */	lhz r0, 4(r31)
/* 8010F624 0010C564  B0 03 00 04 */	sth r0, 4(r3)
/* 8010F628 0010C568  88 1F 00 06 */	lbz r0, 6(r31)
/* 8010F62C 0010C56C  98 03 00 06 */	stb r0, 6(r3)
/* 8010F630 0010C570  88 1F 00 07 */	lbz r0, 7(r31)
/* 8010F634 0010C574  98 03 00 07 */	stb r0, 7(r3)
/* 8010F638 0010C578  88 1F 00 08 */	lbz r0, 8(r31)
/* 8010F63C 0010C57C  98 03 00 08 */	stb r0, 8(r3)
/* 8010F640 0010C580  88 1F 00 09 */	lbz r0, 9(r31)
/* 8010F644 0010C584  98 03 00 09 */	stb r0, 9(r3)
/* 8010F648 0010C588  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 8010F64C 0010C58C  B0 03 00 0A */	sth r0, 0xa(r3)
/* 8010F650 0010C590  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8010F654 0010C594  90 03 00 0C */	stw r0, 0xc(r3)
/* 8010F658 0010C598  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8010F65C 0010C59C  98 03 00 10 */	stb r0, 0x10(r3)
/* 8010F660 0010C5A0  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 8010F664 0010C5A4  98 03 00 11 */	stb r0, 0x11(r3)
/* 8010F668 0010C5A8  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 8010F66C 0010C5AC  98 03 00 12 */	stb r0, 0x12(r3)
/* 8010F670 0010C5B0  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 8010F674 0010C5B4  98 03 00 13 */	stb r0, 0x13(r3)
/* 8010F678 0010C5B8  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 8010F67C 0010C5BC  98 03 00 14 */	stb r0, 0x14(r3)
/* 8010F680 0010C5C0  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 8010F684 0010C5C4  98 03 00 15 */	stb r0, 0x15(r3)
/* 8010F688 0010C5C8  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 8010F68C 0010C5CC  98 03 00 16 */	stb r0, 0x16(r3)
/* 8010F690 0010C5D0  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 8010F694 0010C5D4  98 03 00 17 */	stb r0, 0x17(r3)
/* 8010F698 0010C5D8  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 8010F69C 0010C5DC  98 03 00 18 */	stb r0, 0x18(r3)
/* 8010F6A0 0010C5E0  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 8010F6A4 0010C5E4  98 03 00 19 */	stb r0, 0x19(r3)
/* 8010F6A8 0010C5E8  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 8010F6AC 0010C5EC  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 8010F6B0 0010C5F0  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8010F6B4 0010C5F4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8010F6B8 0010C5F8  80 64 00 04 */	lwz r3, 4(r4)
/* 8010F6BC 0010C5FC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8010F6C0 0010C600  7C 1F 02 14 */	add r0, r31, r0
/* 8010F6C4 0010C604  7C 03 00 50 */	subf r0, r3, r0
/* 8010F6C8 0010C608  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8010F6CC 0010C60C  80 64 00 04 */	lwz r3, 4(r4)
/* 8010F6D0 0010C610  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8010F6D4 0010C614  7C 1F 02 14 */	add r0, r31, r0
/* 8010F6D8 0010C618  7C 03 00 50 */	subf r0, r3, r0
/* 8010F6DC 0010C61C  90 03 00 0C */	stw r0, 0xc(r3)
/* 8010F6E0 0010C620  48 00 00 3C */	b lbl_8010F71C
lbl_8010F6E4:
/* 8010F6E4 0010C624  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 8010F6E8 0010C628  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 8010F6EC 0010C62C  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 8010F6F0 0010C630  7C 84 1A 14 */	add r4, r4, r3
/* 8010F6F4 0010C634  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 8010F6F8 0010C638  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 8010F6FC 0010C63C  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8010F700 0010C640  7C 63 00 2E */	lwzx r3, r3, r0
/* 8010F704 0010C644  80 84 00 34 */	lwz r4, 0x34(r4)
/* 8010F708 0010C648  81 83 00 00 */	lwz r12, 0(r3)
/* 8010F70C 0010C64C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8010F710 0010C650  7D 89 03 A6 */	mtctr r12
/* 8010F714 0010C654  4E 80 04 21 */	bctrl 
/* 8010F718 0010C658  3B 9C 00 01 */	addi r28, r28, 1
lbl_8010F71C:
/* 8010F71C 0010C65C  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 8010F720 0010C660  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 8010F724 0010C664  7C 03 00 40 */	cmplw r3, r0
/* 8010F728 0010C668  41 80 FF BC */	blt lbl_8010F6E4
/* 8010F72C 0010C66C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8010F730 0010C670  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8010F734 0010C674  7C 08 03 A6 */	mtlr r0
/* 8010F738 0010C678  38 21 00 20 */	addi r1, r1, 0x20
/* 8010F73C 0010C67C  4E 80 00 20 */	blr 

.global getChangeTexture__Q34Game8Kochappy3MgrFv
getChangeTexture__Q34Game8Kochappy3MgrFv:
/* 8010F740 0010C680  80 63 00 44 */	lwz r3, 0x44(r3)
/* 8010F744 0010C684  4E 80 00 20 */	blr 

.global __dt__Q34Game8Kochappy3ObjFv
__dt__Q34Game8Kochappy3ObjFv:
/* 8010F748 0010C688  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010F74C 0010C68C  7C 08 02 A6 */	mflr r0
/* 8010F750 0010C690  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010F754 0010C694  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010F758 0010C698  7C 9F 23 78 */	mr r31, r4
/* 8010F75C 0010C69C  93 C1 00 08 */	stw r30, 8(r1)
/* 8010F760 0010C6A0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8010F764 0010C6A4  41 82 00 B4 */	beq lbl_8010F818
/* 8010F768 0010C6A8  3C 60 80 4B */	lis r3, __vt__Q34Game8Kochappy3Obj@ha
/* 8010F76C 0010C6AC  38 BE 02 D8 */	addi r5, r30, 0x2d8
/* 8010F770 0010C6B0  38 83 B6 50 */	addi r4, r3, __vt__Q34Game8Kochappy3Obj@l
/* 8010F774 0010C6B4  90 9E 00 00 */	stw r4, 0(r30)
/* 8010F778 0010C6B8  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8010F77C 0010C6BC  38 04 03 08 */	addi r0, r4, 0x308
/* 8010F780 0010C6C0  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8010F784 0010C6C4  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8010F788 0010C6C8  90 03 00 00 */	stw r0, 0(r3)
/* 8010F78C 0010C6CC  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8010F790 0010C6D0  7C 03 28 50 */	subf r0, r3, r5
/* 8010F794 0010C6D4  90 03 00 0C */	stw r0, 0xc(r3)
/* 8010F798 0010C6D8  41 82 00 70 */	beq lbl_8010F808
/* 8010F79C 0010C6DC  3C 60 80 4B */	lis r3, __vt__Q34Game12KochappyBase3Obj@ha
/* 8010F7A0 0010C6E0  38 83 F4 E0 */	addi r4, r3, __vt__Q34Game12KochappyBase3Obj@l
/* 8010F7A4 0010C6E4  90 9E 00 00 */	stw r4, 0(r30)
/* 8010F7A8 0010C6E8  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8010F7AC 0010C6EC  38 04 03 08 */	addi r0, r4, 0x308
/* 8010F7B0 0010C6F0  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8010F7B4 0010C6F4  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8010F7B8 0010C6F8  90 03 00 00 */	stw r0, 0(r3)
/* 8010F7BC 0010C6FC  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8010F7C0 0010C700  7C 03 28 50 */	subf r0, r3, r5
/* 8010F7C4 0010C704  90 03 00 0C */	stw r0, 0xc(r3)
/* 8010F7C8 0010C708  41 82 00 40 */	beq lbl_8010F808
/* 8010F7CC 0010C70C  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 8010F7D0 0010C710  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 8010F7D4 0010C714  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 8010F7D8 0010C718  38 7E 02 90 */	addi r3, r30, 0x290
/* 8010F7DC 0010C71C  90 9E 00 00 */	stw r4, 0(r30)
/* 8010F7E0 0010C720  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 8010F7E4 0010C724  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 8010F7E8 0010C728  38 80 FF FF */	li r4, -1
/* 8010F7EC 0010C72C  90 BE 01 78 */	stw r5, 0x178(r30)
/* 8010F7F0 0010C730  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8010F7F4 0010C734  90 C5 00 00 */	stw r6, 0(r5)
/* 8010F7F8 0010C738  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8010F7FC 0010C73C  7C 05 00 50 */	subf r0, r5, r0
/* 8010F800 0010C740  90 05 00 0C */	stw r0, 0xc(r5)
/* 8010F804 0010C744  48 30 1D 85 */	bl __dt__5CNodeFv
lbl_8010F808:
/* 8010F808 0010C748  7F E0 07 35 */	extsh. r0, r31
/* 8010F80C 0010C74C  40 81 00 0C */	ble lbl_8010F818
/* 8010F810 0010C750  7F C3 F3 78 */	mr r3, r30
/* 8010F814 0010C754  4B F1 48 A1 */	bl __dl__FPv
lbl_8010F818:
/* 8010F818 0010C758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010F81C 0010C75C  7F C3 F3 78 */	mr r3, r30
/* 8010F820 0010C760  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010F824 0010C764  83 C1 00 08 */	lwz r30, 8(r1)
/* 8010F828 0010C768  7C 08 03 A6 */	mtlr r0
/* 8010F82C 0010C76C  38 21 00 10 */	addi r1, r1, 0x10
/* 8010F830 0010C770  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game8Kochappy3ObjFv
getEnemyTypeID__Q34Game8Kochappy3ObjFv:
/* 8010F834 0010C774  38 60 00 01 */	li r3, 1
/* 8010F838 0010C778  4E 80 00 20 */	blr 

.global setAnimationSpeed__Q34Game12KochappyBase3ObjFf
setAnimationSpeed__Q34Game12KochappyBase3ObjFf:
/* 8010F83C 0010C77C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010F840 0010C780  7C 08 02 A6 */	mflr r0
/* 8010F844 0010C784  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010F848 0010C788  4B FF 7B 49 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 8010F84C 0010C78C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010F850 0010C790  7C 08 03 A6 */	mtlr r0
/* 8010F854 0010C794  38 21 00 10 */	addi r1, r1, 0x10
/* 8010F858 0010C798  4E 80 00 20 */	blr 

.global getMouthSlots__Q34Game12KochappyBase3ObjFv
getMouthSlots__Q34Game12KochappyBase3ObjFv:
/* 8010F85C 0010C79C  38 63 02 C0 */	addi r3, r3, 0x2c0
/* 8010F860 0010C7A0  4E 80 00 20 */	blr 

.global resetEnemyNonStone__Q34Game12KochappyBase3ObjFv
resetEnemyNonStone__Q34Game12KochappyBase3ObjFv:
/* 8010F864 0010C7A4  4E 80 00 20 */	blr 

.global setEnemyNonStone__Q34Game12KochappyBase3ObjFv
setEnemyNonStone__Q34Game12KochappyBase3ObjFv:
/* 8010F868 0010C7A8  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q34Game12KochappyBase3ObjFv
getDownSmokeScale__Q34Game12KochappyBase3ObjFv:
/* 8010F86C 0010C7AC  C0 22 96 70 */	lfs f1, lbl_805179D0@sda21(r2)
/* 8010F870 0010C7B0  4E 80 00 20 */	blr 
