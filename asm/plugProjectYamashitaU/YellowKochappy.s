.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game14YellowKochappy3Obj
__vt__Q34Game14YellowKochappy3Obj:
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
	.4byte __dt__Q34Game14YellowKochappy3ObjFv
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
	.4byte changeMaterial__Q34Game14YellowKochappy3ObjFv
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
	.4byte getEnemyTypeID__Q34Game14YellowKochappy3ObjFv
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

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game14YellowKochappy3ObjFv
__ct__Q34Game14YellowKochappy3ObjFv:
/* 8012D214 0012A154  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012D218 0012A158  7C 08 02 A6 */	mflr r0
/* 8012D21C 0012A15C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012D220 0012A160  7C 80 07 35 */	extsh. r0, r4
/* 8012D224 0012A164  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012D228 0012A168  7C 7F 1B 78 */	mr r31, r3
/* 8012D22C 0012A16C  93 C1 00 08 */	stw r30, 8(r1)
/* 8012D230 0012A170  41 82 00 24 */	beq lbl_8012D254
/* 8012D234 0012A174  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 8012D238 0012A178  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8012D23C 0012A17C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8012D240 0012A180  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8012D244 0012A184  38 00 00 00 */	li r0, 0
/* 8012D248 0012A188  90 7F 02 D8 */	stw r3, 0x2d8(r31)
/* 8012D24C 0012A18C  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 8012D250 0012A190  90 1F 02 E0 */	stw r0, 0x2e0(r31)
lbl_8012D254:
/* 8012D254 0012A194  7F E3 FB 78 */	mr r3, r31
/* 8012D258 0012A198  38 80 00 00 */	li r4, 0
/* 8012D25C 0012A19C  48 00 08 8D */	bl __ct__Q34Game12KochappyBase3ObjFv
/* 8012D260 0012A1A0  3C 60 80 4B */	lis r3, __vt__Q34Game14YellowKochappy3Obj@ha
/* 8012D264 0012A1A4  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 8012D268 0012A1A8  38 A3 EF D8 */	addi r5, r3, __vt__Q34Game14YellowKochappy3Obj@l
/* 8012D26C 0012A1AC  38 60 00 2C */	li r3, 0x2c
/* 8012D270 0012A1B0  90 BF 00 00 */	stw r5, 0(r31)
/* 8012D274 0012A1B4  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8012D278 0012A1B8  38 A5 03 08 */	addi r5, r5, 0x308
/* 8012D27C 0012A1BC  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8012D280 0012A1C0  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8012D284 0012A1C4  90 A4 00 00 */	stw r5, 0(r4)
/* 8012D288 0012A1C8  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8012D28C 0012A1CC  7C 04 00 50 */	subf r0, r4, r0
/* 8012D290 0012A1D0  90 04 00 0C */	stw r0, 0xc(r4)
/* 8012D294 0012A1D4  4B EF 6C 11 */	bl __nw__FUl
/* 8012D298 0012A1D8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8012D29C 0012A1DC  41 82 00 44 */	beq lbl_8012D2E0
/* 8012D2A0 0012A1E0  4B FF A6 D5 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8012D2A4 0012A1E4  3C 60 80 4B */	lis r3, __vt__Q34Game12KochappyBase14ProperAnimator@ha
/* 8012D2A8 0012A1E8  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8012D2AC 0012A1EC  38 03 B6 28 */	addi r0, r3, __vt__Q34Game12KochappyBase14ProperAnimator@l
/* 8012D2B0 0012A1F0  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8012D2B4 0012A1F4  90 1E 00 00 */	stw r0, 0(r30)
/* 8012D2B8 0012A1F8  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8012D2BC 0012A1FC  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8012D2C0 0012A200  38 00 00 00 */	li r0, 0
/* 8012D2C4 0012A204  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8012D2C8 0012A208  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8012D2CC 0012A20C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8012D2D0 0012A210  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8012D2D4 0012A214  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8012D2D8 0012A218  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8012D2DC 0012A21C  90 1E 00 20 */	stw r0, 0x20(r30)
lbl_8012D2E0:
/* 8012D2E0 0012A220  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8012D2E4 0012A224  38 60 00 1C */	li r3, 0x1c
/* 8012D2E8 0012A228  4B EF 6B BD */	bl __nw__FUl
/* 8012D2EC 0012A22C  7C 64 1B 79 */	or. r4, r3, r3
/* 8012D2F0 0012A230  41 82 00 24 */	beq lbl_8012D314
/* 8012D2F4 0012A234  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8012D2F8 0012A238  3C 60 80 4B */	lis r3, __vt__Q34Game12KochappyBase3FSM@ha
/* 8012D2FC 0012A23C  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8012D300 0012A240  38 A0 FF FF */	li r5, -1
/* 8012D304 0012A244  90 04 00 00 */	stw r0, 0(r4)
/* 8012D308 0012A248  38 03 BB 30 */	addi r0, r3, __vt__Q34Game12KochappyBase3FSM@l
/* 8012D30C 0012A24C  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8012D310 0012A250  90 04 00 00 */	stw r0, 0(r4)
lbl_8012D314:
/* 8012D314 0012A254  81 9F 00 00 */	lwz r12, 0(r31)
/* 8012D318 0012A258  7F E3 FB 78 */	mr r3, r31
/* 8012D31C 0012A25C  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8012D320 0012A260  7D 89 03 A6 */	mtctr r12
/* 8012D324 0012A264  4E 80 04 21 */	bctrl 
/* 8012D328 0012A268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012D32C 0012A26C  7F E3 FB 78 */	mr r3, r31
/* 8012D330 0012A270  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012D334 0012A274  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012D338 0012A278  7C 08 03 A6 */	mtlr r0
/* 8012D33C 0012A27C  38 21 00 10 */	addi r1, r1, 0x10
/* 8012D340 0012A280  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game14YellowKochappy3ObjFv
changeMaterial__Q34Game14YellowKochappy3ObjFv:
/* 8012D344 0012A284  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8012D348 0012A288  7C 08 02 A6 */	mflr r0
/* 8012D34C 0012A28C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8012D350 0012A290  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8012D354 0012A294  7C 7B 1B 78 */	mr r27, r3
/* 8012D358 0012A298  80 63 01 80 */	lwz r3, 0x180(r3)
/* 8012D35C 0012A29C  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 8012D360 0012A2A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8012D364 0012A2A4  83 A4 00 08 */	lwz r29, 8(r4)
/* 8012D368 0012A2A8  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 8012D36C 0012A2AC  83 DD 00 04 */	lwz r30, 4(r29)
/* 8012D370 0012A2B0  7D 89 03 A6 */	mtctr r12
/* 8012D374 0012A2B4  4E 80 04 21 */	bctrl 
/* 8012D378 0012A2B8  7C 7F 1B 78 */	mr r31, r3
/* 8012D37C 0012A2BC  7F A3 EB 78 */	mr r3, r29
/* 8012D380 0012A2C0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8012D384 0012A2C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8012D388 0012A2C8  7D 89 03 A6 */	mtctr r12
/* 8012D38C 0012A2CC  4E 80 04 21 */	bctrl 
/* 8012D390 0012A2D0  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 8012D394 0012A2D4  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8012D398 0012A2D8  88 1F 00 00 */	lbz r0, 0(r31)
/* 8012D39C 0012A2DC  3B 63 F2 30 */	addi r27, r3, j3dSys@l
/* 8012D3A0 0012A2E0  80 64 00 08 */	lwz r3, 8(r4)
/* 8012D3A4 0012A2E4  3B 80 00 00 */	li r28, 0
/* 8012D3A8 0012A2E8  80 63 00 04 */	lwz r3, 4(r3)
/* 8012D3AC 0012A2EC  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 8012D3B0 0012A2F0  80 64 00 04 */	lwz r3, 4(r4)
/* 8012D3B4 0012A2F4  98 03 00 00 */	stb r0, 0(r3)
/* 8012D3B8 0012A2F8  88 1F 00 01 */	lbz r0, 1(r31)
/* 8012D3BC 0012A2FC  98 03 00 01 */	stb r0, 1(r3)
/* 8012D3C0 0012A300  A0 1F 00 02 */	lhz r0, 2(r31)
/* 8012D3C4 0012A304  B0 03 00 02 */	sth r0, 2(r3)
/* 8012D3C8 0012A308  A0 1F 00 04 */	lhz r0, 4(r31)
/* 8012D3CC 0012A30C  B0 03 00 04 */	sth r0, 4(r3)
/* 8012D3D0 0012A310  88 1F 00 06 */	lbz r0, 6(r31)
/* 8012D3D4 0012A314  98 03 00 06 */	stb r0, 6(r3)
/* 8012D3D8 0012A318  88 1F 00 07 */	lbz r0, 7(r31)
/* 8012D3DC 0012A31C  98 03 00 07 */	stb r0, 7(r3)
/* 8012D3E0 0012A320  88 1F 00 08 */	lbz r0, 8(r31)
/* 8012D3E4 0012A324  98 03 00 08 */	stb r0, 8(r3)
/* 8012D3E8 0012A328  88 1F 00 09 */	lbz r0, 9(r31)
/* 8012D3EC 0012A32C  98 03 00 09 */	stb r0, 9(r3)
/* 8012D3F0 0012A330  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 8012D3F4 0012A334  B0 03 00 0A */	sth r0, 0xa(r3)
/* 8012D3F8 0012A338  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8012D3FC 0012A33C  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012D400 0012A340  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8012D404 0012A344  98 03 00 10 */	stb r0, 0x10(r3)
/* 8012D408 0012A348  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 8012D40C 0012A34C  98 03 00 11 */	stb r0, 0x11(r3)
/* 8012D410 0012A350  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 8012D414 0012A354  98 03 00 12 */	stb r0, 0x12(r3)
/* 8012D418 0012A358  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 8012D41C 0012A35C  98 03 00 13 */	stb r0, 0x13(r3)
/* 8012D420 0012A360  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 8012D424 0012A364  98 03 00 14 */	stb r0, 0x14(r3)
/* 8012D428 0012A368  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 8012D42C 0012A36C  98 03 00 15 */	stb r0, 0x15(r3)
/* 8012D430 0012A370  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 8012D434 0012A374  98 03 00 16 */	stb r0, 0x16(r3)
/* 8012D438 0012A378  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 8012D43C 0012A37C  98 03 00 17 */	stb r0, 0x17(r3)
/* 8012D440 0012A380  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 8012D444 0012A384  98 03 00 18 */	stb r0, 0x18(r3)
/* 8012D448 0012A388  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 8012D44C 0012A38C  98 03 00 19 */	stb r0, 0x19(r3)
/* 8012D450 0012A390  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 8012D454 0012A394  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 8012D458 0012A398  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8012D45C 0012A39C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8012D460 0012A3A0  80 64 00 04 */	lwz r3, 4(r4)
/* 8012D464 0012A3A4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8012D468 0012A3A8  7C 1F 02 14 */	add r0, r31, r0
/* 8012D46C 0012A3AC  7C 03 00 50 */	subf r0, r3, r0
/* 8012D470 0012A3B0  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8012D474 0012A3B4  80 64 00 04 */	lwz r3, 4(r4)
/* 8012D478 0012A3B8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8012D47C 0012A3BC  7C 1F 02 14 */	add r0, r31, r0
/* 8012D480 0012A3C0  7C 03 00 50 */	subf r0, r3, r0
/* 8012D484 0012A3C4  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012D488 0012A3C8  48 00 00 3C */	b lbl_8012D4C4
lbl_8012D48C:
/* 8012D48C 0012A3CC  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 8012D490 0012A3D0  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 8012D494 0012A3D4  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 8012D498 0012A3D8  7C 84 1A 14 */	add r4, r4, r3
/* 8012D49C 0012A3DC  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 8012D4A0 0012A3E0  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 8012D4A4 0012A3E4  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8012D4A8 0012A3E8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8012D4AC 0012A3EC  80 84 00 34 */	lwz r4, 0x34(r4)
/* 8012D4B0 0012A3F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8012D4B4 0012A3F4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8012D4B8 0012A3F8  7D 89 03 A6 */	mtctr r12
/* 8012D4BC 0012A3FC  4E 80 04 21 */	bctrl 
/* 8012D4C0 0012A400  3B 9C 00 01 */	addi r28, r28, 1
lbl_8012D4C4:
/* 8012D4C4 0012A404  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 8012D4C8 0012A408  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 8012D4CC 0012A40C  7C 03 00 40 */	cmplw r3, r0
/* 8012D4D0 0012A410  41 80 FF BC */	blt lbl_8012D48C
/* 8012D4D4 0012A414  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8012D4D8 0012A418  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8012D4DC 0012A41C  7C 08 03 A6 */	mtlr r0
/* 8012D4E0 0012A420  38 21 00 20 */	addi r1, r1, 0x20
/* 8012D4E4 0012A424  4E 80 00 20 */	blr 

.global getChangeTexture__Q34Game14YellowKochappy3MgrFv
getChangeTexture__Q34Game14YellowKochappy3MgrFv:
/* 8012D4E8 0012A428  80 63 00 44 */	lwz r3, 0x44(r3)
/* 8012D4EC 0012A42C  4E 80 00 20 */	blr 

.global __dt__Q34Game14YellowKochappy3ObjFv
__dt__Q34Game14YellowKochappy3ObjFv:
/* 8012D4F0 0012A430  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012D4F4 0012A434  7C 08 02 A6 */	mflr r0
/* 8012D4F8 0012A438  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012D4FC 0012A43C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012D500 0012A440  7C 9F 23 78 */	mr r31, r4
/* 8012D504 0012A444  93 C1 00 08 */	stw r30, 8(r1)
/* 8012D508 0012A448  7C 7E 1B 79 */	or. r30, r3, r3
/* 8012D50C 0012A44C  41 82 00 B4 */	beq lbl_8012D5C0
/* 8012D510 0012A450  3C 60 80 4B */	lis r3, __vt__Q34Game14YellowKochappy3Obj@ha
/* 8012D514 0012A454  38 BE 02 D8 */	addi r5, r30, 0x2d8
/* 8012D518 0012A458  38 83 EF D8 */	addi r4, r3, __vt__Q34Game14YellowKochappy3Obj@l
/* 8012D51C 0012A45C  90 9E 00 00 */	stw r4, 0(r30)
/* 8012D520 0012A460  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8012D524 0012A464  38 04 03 08 */	addi r0, r4, 0x308
/* 8012D528 0012A468  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8012D52C 0012A46C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012D530 0012A470  90 03 00 00 */	stw r0, 0(r3)
/* 8012D534 0012A474  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012D538 0012A478  7C 03 28 50 */	subf r0, r3, r5
/* 8012D53C 0012A47C  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012D540 0012A480  41 82 00 70 */	beq lbl_8012D5B0
/* 8012D544 0012A484  3C 60 80 4B */	lis r3, __vt__Q34Game12KochappyBase3Obj@ha
/* 8012D548 0012A488  38 83 F4 E0 */	addi r4, r3, __vt__Q34Game12KochappyBase3Obj@l
/* 8012D54C 0012A48C  90 9E 00 00 */	stw r4, 0(r30)
/* 8012D550 0012A490  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8012D554 0012A494  38 04 03 08 */	addi r0, r4, 0x308
/* 8012D558 0012A498  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8012D55C 0012A49C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012D560 0012A4A0  90 03 00 00 */	stw r0, 0(r3)
/* 8012D564 0012A4A4  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012D568 0012A4A8  7C 03 28 50 */	subf r0, r3, r5
/* 8012D56C 0012A4AC  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012D570 0012A4B0  41 82 00 40 */	beq lbl_8012D5B0
/* 8012D574 0012A4B4  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 8012D578 0012A4B8  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 8012D57C 0012A4BC  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 8012D580 0012A4C0  38 7E 02 90 */	addi r3, r30, 0x290
/* 8012D584 0012A4C4  90 9E 00 00 */	stw r4, 0(r30)
/* 8012D588 0012A4C8  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 8012D58C 0012A4CC  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 8012D590 0012A4D0  38 80 FF FF */	li r4, -1
/* 8012D594 0012A4D4  90 BE 01 78 */	stw r5, 0x178(r30)
/* 8012D598 0012A4D8  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8012D59C 0012A4DC  90 C5 00 00 */	stw r6, 0(r5)
/* 8012D5A0 0012A4E0  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8012D5A4 0012A4E4  7C 05 00 50 */	subf r0, r5, r0
/* 8012D5A8 0012A4E8  90 05 00 0C */	stw r0, 0xc(r5)
/* 8012D5AC 0012A4EC  48 2E 3F DD */	bl __dt__5CNodeFv
lbl_8012D5B0:
/* 8012D5B0 0012A4F0  7F E0 07 35 */	extsh. r0, r31
/* 8012D5B4 0012A4F4  40 81 00 0C */	ble lbl_8012D5C0
/* 8012D5B8 0012A4F8  7F C3 F3 78 */	mr r3, r30
/* 8012D5BC 0012A4FC  4B EF 6A F9 */	bl __dl__FPv
lbl_8012D5C0:
/* 8012D5C0 0012A500  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012D5C4 0012A504  7F C3 F3 78 */	mr r3, r30
/* 8012D5C8 0012A508  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012D5CC 0012A50C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012D5D0 0012A510  7C 08 03 A6 */	mtlr r0
/* 8012D5D4 0012A514  38 21 00 10 */	addi r1, r1, 0x10
/* 8012D5D8 0012A518  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game14YellowKochappy3ObjFv
getEnemyTypeID__Q34Game14YellowKochappy3ObjFv:
/* 8012D5DC 0012A51C  38 60 00 2D */	li r3, 0x2d
/* 8012D5E0 0012A520  4E 80 00 20 */	blr 
