.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game12BlueKochappy3Obj
__vt__Q34Game12BlueKochappy3Obj:
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
	.4byte __dt__Q34Game12BlueKochappy3ObjFv
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
	.4byte changeMaterial__Q34Game12BlueKochappy3ObjFv
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
	.4byte getEnemyTypeID__Q34Game12BlueKochappy3ObjFv
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
.global __ct__Q34Game12BlueKochappy3ObjFv
__ct__Q34Game12BlueKochappy3ObjFv:
/* 8012CF38 00129E78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012CF3C 00129E7C  7C 08 02 A6 */	mflr r0
/* 8012CF40 00129E80  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012CF44 00129E84  7C 80 07 35 */	extsh. r0, r4
/* 8012CF48 00129E88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012CF4C 00129E8C  7C 7F 1B 78 */	mr r31, r3
/* 8012CF50 00129E90  93 C1 00 08 */	stw r30, 8(r1)
/* 8012CF54 00129E94  41 82 00 24 */	beq lbl_8012CF78
/* 8012CF58 00129E98  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 8012CF5C 00129E9C  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8012CF60 00129EA0  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8012CF64 00129EA4  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8012CF68 00129EA8  38 00 00 00 */	li r0, 0
/* 8012CF6C 00129EAC  90 7F 02 D8 */	stw r3, 0x2d8(r31)
/* 8012CF70 00129EB0  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 8012CF74 00129EB4  90 1F 02 E0 */	stw r0, 0x2e0(r31)
lbl_8012CF78:
/* 8012CF78 00129EB8  7F E3 FB 78 */	mr r3, r31
/* 8012CF7C 00129EBC  38 80 00 00 */	li r4, 0
/* 8012CF80 00129EC0  48 00 0B 69 */	bl __ct__Q34Game12KochappyBase3ObjFv
/* 8012CF84 00129EC4  3C 60 80 4B */	lis r3, __vt__Q34Game12BlueKochappy3Obj@ha
/* 8012CF88 00129EC8  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 8012CF8C 00129ECC  38 A3 EC A0 */	addi r5, r3, __vt__Q34Game12BlueKochappy3Obj@l
/* 8012CF90 00129ED0  38 60 00 2C */	li r3, 0x2c
/* 8012CF94 00129ED4  90 BF 00 00 */	stw r5, 0(r31)
/* 8012CF98 00129ED8  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8012CF9C 00129EDC  38 A5 03 08 */	addi r5, r5, 0x308
/* 8012CFA0 00129EE0  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8012CFA4 00129EE4  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8012CFA8 00129EE8  90 A4 00 00 */	stw r5, 0(r4)
/* 8012CFAC 00129EEC  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8012CFB0 00129EF0  7C 04 00 50 */	subf r0, r4, r0
/* 8012CFB4 00129EF4  90 04 00 0C */	stw r0, 0xc(r4)
/* 8012CFB8 00129EF8  4B EF 6E ED */	bl __nw__FUl
/* 8012CFBC 00129EFC  7C 7E 1B 79 */	or. r30, r3, r3
/* 8012CFC0 00129F00  41 82 00 44 */	beq lbl_8012D004
/* 8012CFC4 00129F04  4B FF A9 B1 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8012CFC8 00129F08  3C 60 80 4B */	lis r3, __vt__Q34Game12KochappyBase14ProperAnimator@ha
/* 8012CFCC 00129F0C  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8012CFD0 00129F10  38 03 B6 28 */	addi r0, r3, __vt__Q34Game12KochappyBase14ProperAnimator@l
/* 8012CFD4 00129F14  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8012CFD8 00129F18  90 1E 00 00 */	stw r0, 0(r30)
/* 8012CFDC 00129F1C  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8012CFE0 00129F20  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8012CFE4 00129F24  38 00 00 00 */	li r0, 0
/* 8012CFE8 00129F28  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8012CFEC 00129F2C  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8012CFF0 00129F30  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8012CFF4 00129F34  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8012CFF8 00129F38  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8012CFFC 00129F3C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8012D000 00129F40  90 1E 00 20 */	stw r0, 0x20(r30)
lbl_8012D004:
/* 8012D004 00129F44  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8012D008 00129F48  38 60 00 1C */	li r3, 0x1c
/* 8012D00C 00129F4C  4B EF 6E 99 */	bl __nw__FUl
/* 8012D010 00129F50  7C 64 1B 79 */	or. r4, r3, r3
/* 8012D014 00129F54  41 82 00 24 */	beq lbl_8012D038
/* 8012D018 00129F58  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8012D01C 00129F5C  3C 60 80 4B */	lis r3, __vt__Q34Game12KochappyBase3FSM@ha
/* 8012D020 00129F60  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8012D024 00129F64  38 A0 FF FF */	li r5, -1
/* 8012D028 00129F68  90 04 00 00 */	stw r0, 0(r4)
/* 8012D02C 00129F6C  38 03 BB 30 */	addi r0, r3, __vt__Q34Game12KochappyBase3FSM@l
/* 8012D030 00129F70  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8012D034 00129F74  90 04 00 00 */	stw r0, 0(r4)
lbl_8012D038:
/* 8012D038 00129F78  81 9F 00 00 */	lwz r12, 0(r31)
/* 8012D03C 00129F7C  7F E3 FB 78 */	mr r3, r31
/* 8012D040 00129F80  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8012D044 00129F84  7D 89 03 A6 */	mtctr r12
/* 8012D048 00129F88  4E 80 04 21 */	bctrl 
/* 8012D04C 00129F8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012D050 00129F90  7F E3 FB 78 */	mr r3, r31
/* 8012D054 00129F94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012D058 00129F98  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012D05C 00129F9C  7C 08 03 A6 */	mtlr r0
/* 8012D060 00129FA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8012D064 00129FA4  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game12BlueKochappy3ObjFv
changeMaterial__Q34Game12BlueKochappy3ObjFv:
/* 8012D068 00129FA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8012D06C 00129FAC  7C 08 02 A6 */	mflr r0
/* 8012D070 00129FB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8012D074 00129FB4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8012D078 00129FB8  7C 7B 1B 78 */	mr r27, r3
/* 8012D07C 00129FBC  80 63 01 80 */	lwz r3, 0x180(r3)
/* 8012D080 00129FC0  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 8012D084 00129FC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8012D088 00129FC8  83 A4 00 08 */	lwz r29, 8(r4)
/* 8012D08C 00129FCC  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 8012D090 00129FD0  83 DD 00 04 */	lwz r30, 4(r29)
/* 8012D094 00129FD4  7D 89 03 A6 */	mtctr r12
/* 8012D098 00129FD8  4E 80 04 21 */	bctrl 
/* 8012D09C 00129FDC  7C 7F 1B 78 */	mr r31, r3
/* 8012D0A0 00129FE0  7F A3 EB 78 */	mr r3, r29
/* 8012D0A4 00129FE4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8012D0A8 00129FE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8012D0AC 00129FEC  7D 89 03 A6 */	mtctr r12
/* 8012D0B0 00129FF0  4E 80 04 21 */	bctrl 
/* 8012D0B4 00129FF4  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 8012D0B8 00129FF8  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8012D0BC 00129FFC  88 1F 00 00 */	lbz r0, 0(r31)
/* 8012D0C0 0012A000  3B 63 F2 30 */	addi r27, r3, j3dSys@l
/* 8012D0C4 0012A004  80 64 00 08 */	lwz r3, 8(r4)
/* 8012D0C8 0012A008  3B 80 00 00 */	li r28, 0
/* 8012D0CC 0012A00C  80 63 00 04 */	lwz r3, 4(r3)
/* 8012D0D0 0012A010  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 8012D0D4 0012A014  80 64 00 04 */	lwz r3, 4(r4)
/* 8012D0D8 0012A018  98 03 00 00 */	stb r0, 0(r3)
/* 8012D0DC 0012A01C  88 1F 00 01 */	lbz r0, 1(r31)
/* 8012D0E0 0012A020  98 03 00 01 */	stb r0, 1(r3)
/* 8012D0E4 0012A024  A0 1F 00 02 */	lhz r0, 2(r31)
/* 8012D0E8 0012A028  B0 03 00 02 */	sth r0, 2(r3)
/* 8012D0EC 0012A02C  A0 1F 00 04 */	lhz r0, 4(r31)
/* 8012D0F0 0012A030  B0 03 00 04 */	sth r0, 4(r3)
/* 8012D0F4 0012A034  88 1F 00 06 */	lbz r0, 6(r31)
/* 8012D0F8 0012A038  98 03 00 06 */	stb r0, 6(r3)
/* 8012D0FC 0012A03C  88 1F 00 07 */	lbz r0, 7(r31)
/* 8012D100 0012A040  98 03 00 07 */	stb r0, 7(r3)
/* 8012D104 0012A044  88 1F 00 08 */	lbz r0, 8(r31)
/* 8012D108 0012A048  98 03 00 08 */	stb r0, 8(r3)
/* 8012D10C 0012A04C  88 1F 00 09 */	lbz r0, 9(r31)
/* 8012D110 0012A050  98 03 00 09 */	stb r0, 9(r3)
/* 8012D114 0012A054  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 8012D118 0012A058  B0 03 00 0A */	sth r0, 0xa(r3)
/* 8012D11C 0012A05C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8012D120 0012A060  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012D124 0012A064  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8012D128 0012A068  98 03 00 10 */	stb r0, 0x10(r3)
/* 8012D12C 0012A06C  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 8012D130 0012A070  98 03 00 11 */	stb r0, 0x11(r3)
/* 8012D134 0012A074  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 8012D138 0012A078  98 03 00 12 */	stb r0, 0x12(r3)
/* 8012D13C 0012A07C  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 8012D140 0012A080  98 03 00 13 */	stb r0, 0x13(r3)
/* 8012D144 0012A084  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 8012D148 0012A088  98 03 00 14 */	stb r0, 0x14(r3)
/* 8012D14C 0012A08C  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 8012D150 0012A090  98 03 00 15 */	stb r0, 0x15(r3)
/* 8012D154 0012A094  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 8012D158 0012A098  98 03 00 16 */	stb r0, 0x16(r3)
/* 8012D15C 0012A09C  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 8012D160 0012A0A0  98 03 00 17 */	stb r0, 0x17(r3)
/* 8012D164 0012A0A4  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 8012D168 0012A0A8  98 03 00 18 */	stb r0, 0x18(r3)
/* 8012D16C 0012A0AC  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 8012D170 0012A0B0  98 03 00 19 */	stb r0, 0x19(r3)
/* 8012D174 0012A0B4  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 8012D178 0012A0B8  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 8012D17C 0012A0BC  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8012D180 0012A0C0  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8012D184 0012A0C4  80 64 00 04 */	lwz r3, 4(r4)
/* 8012D188 0012A0C8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8012D18C 0012A0CC  7C 1F 02 14 */	add r0, r31, r0
/* 8012D190 0012A0D0  7C 03 00 50 */	subf r0, r3, r0
/* 8012D194 0012A0D4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8012D198 0012A0D8  80 64 00 04 */	lwz r3, 4(r4)
/* 8012D19C 0012A0DC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8012D1A0 0012A0E0  7C 1F 02 14 */	add r0, r31, r0
/* 8012D1A4 0012A0E4  7C 03 00 50 */	subf r0, r3, r0
/* 8012D1A8 0012A0E8  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012D1AC 0012A0EC  48 00 00 3C */	b lbl_8012D1E8
lbl_8012D1B0:
/* 8012D1B0 0012A0F0  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 8012D1B4 0012A0F4  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 8012D1B8 0012A0F8  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 8012D1BC 0012A0FC  7C 84 1A 14 */	add r4, r4, r3
/* 8012D1C0 0012A100  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 8012D1C4 0012A104  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 8012D1C8 0012A108  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8012D1CC 0012A10C  7C 63 00 2E */	lwzx r3, r3, r0
/* 8012D1D0 0012A110  80 84 00 34 */	lwz r4, 0x34(r4)
/* 8012D1D4 0012A114  81 83 00 00 */	lwz r12, 0(r3)
/* 8012D1D8 0012A118  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8012D1DC 0012A11C  7D 89 03 A6 */	mtctr r12
/* 8012D1E0 0012A120  4E 80 04 21 */	bctrl 
/* 8012D1E4 0012A124  3B 9C 00 01 */	addi r28, r28, 1
lbl_8012D1E8:
/* 8012D1E8 0012A128  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 8012D1EC 0012A12C  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 8012D1F0 0012A130  7C 03 00 40 */	cmplw r3, r0
/* 8012D1F4 0012A134  41 80 FF BC */	blt lbl_8012D1B0
/* 8012D1F8 0012A138  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8012D1FC 0012A13C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8012D200 0012A140  7C 08 03 A6 */	mtlr r0
/* 8012D204 0012A144  38 21 00 20 */	addi r1, r1, 0x20
/* 8012D208 0012A148  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game12BlueKochappy3ObjFv
getEnemyTypeID__Q34Game12BlueKochappy3ObjFv:
/* 8012D20C 0012A14C  38 60 00 2C */	li r3, 0x2c
/* 8012D210 0012A150  4E 80 00 20 */	blr 
