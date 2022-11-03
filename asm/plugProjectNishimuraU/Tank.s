.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game4Tank3Obj
__vt__Q34Game4Tank3Obj:
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
	.4byte onInit__Q34Game4Tank3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game4Tank3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game4Tank3ObjFR8Graphics
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
	.4byte getShadowParam__Q34Game4Tank3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game4Tank3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game4Tank3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game4Tank3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game4Tank3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte 0
	.4byte "getCommonEffectPos__Q34Game4Tank3ObjFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q34Game4Tank3ObjFv
	.4byte setParameters__Q24Game9EnemyBaseFv
	.4byte initMouthSlots__Q24Game9EnemyBaseFv
	.4byte initWalkSmokeEffect__Q34Game4Tank3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game4Tank3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game4Tank3ObjFv
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
	.4byte hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game4Tank3ObjFv
	.4byte doFinishStoneState__Q34Game4Tank3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q34Game4Tank3ObjFv
	.4byte doFinishEarthquakeFitState__Q34Game4Tank3ObjFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game4Tank3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q34Game4Tank3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game4Tank3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game4Tank3ObjFv
	.4byte doStartMovie__Q34Game4Tank3ObjFv
	.4byte doEndMovie__Q34Game4Tank3ObjFv
	.4byte setFSM__Q34Game4Tank3ObjFPQ34Game4Tank3FSM
	.4byte createEffect__Q34Game4Tank3ObjFv
	.4byte setupEffect__Q34Game4Tank3ObjFv
	.4byte startEffect__Q34Game4Tank3ObjFv
	.4byte startYodare__Q34Game4Tank3ObjFv
	.4byte finishEffect__Q34Game4Tank3ObjFv
	.4byte effectDrawOn__Q34Game4Tank3ObjFv
	.4byte effectDrawOff__Q34Game4Tank3ObjFv
	.4byte interactCreature__Q34Game4Tank3ObjFPQ24Game8Creature
	.4byte stopEffectRadius__Q34Game4Tank3ObjFf
	.4byte createChargeSE__Q34Game4Tank3ObjFv
	.4byte createDisChargeSE__Q34Game4Tank3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@776@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@776@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@776@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@776@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@776@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@776@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051B2E8
lbl_8051B2E8:
	.4byte 0x43000000
.global lbl_8051B2EC
lbl_8051B2EC:
	.4byte 0x686F7070
	.4byte 0x65000000
.global lbl_8051B2F4
lbl_8051B2F4:
	.4byte 0x00000000
.global lbl_8051B2F8
lbl_8051B2F8:
	.float 1.0
.global lbl_8051B2FC
lbl_8051B2FC:
	.4byte 0x40200000
.global lbl_8051B300
lbl_8051B300:
	.4byte 0x42480000
.global lbl_8051B304
lbl_8051B304:
	.4byte 0x41A00000
.global lbl_8051B308
lbl_8051B308:
	.4byte 0x41700000
.global lbl_8051B30C
lbl_8051B30C:
	.4byte 0x7273756E
	.4byte 0x65520000
.global lbl_8051B314
lbl_8051B314:
	.4byte 0x40000000
.global lbl_8051B318
lbl_8051B318:
	.4byte 0x7273756E
	.4byte 0x654C0000
.global lbl_8051B320
lbl_8051B320:
	.4byte 0x6673756E
	.4byte 0x65520000
.global lbl_8051B328
lbl_8051B328:
	.4byte 0x40400000
.global lbl_8051B32C
lbl_8051B32C:
	.4byte 0x6673756E
	.4byte 0x654C0000
.global lbl_8051B334
lbl_8051B334:
	.4byte 0x43A2F983
.global lbl_8051B338
lbl_8051B338:
	.4byte 0xC3A2F983
.global lbl_8051B33C
lbl_8051B33C:
	.float 0.5
.global lbl_8051B340
lbl_8051B340:
	.4byte 0x3A83126F
.global lbl_8051B344
lbl_8051B344:
	.4byte 0x41200000
.global lbl_8051B348
lbl_8051B348:
	.4byte 0x3F19999A
.global lbl_8051B34C
lbl_8051B34C:
	.4byte 0x40A00000
.global lbl_8051B350
lbl_8051B350:
	.4byte 0x43340000
.global lbl_8051B354
lbl_8051B354:
	.4byte 0x3F0CCCCD

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game4Tank3ObjFv
__ct__Q34Game4Tank3ObjFv:
/* 80275D8C 00272CCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80275D90 00272CD0  7C 08 02 A6 */	mflr r0
/* 80275D94 00272CD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80275D98 00272CD8  7C 80 07 35 */	extsh. r0, r4
/* 80275D9C 00272CDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80275DA0 00272CE0  7C 7F 1B 78 */	mr r31, r3
/* 80275DA4 00272CE4  93 C1 00 08 */	stw r30, 8(r1)
/* 80275DA8 00272CE8  41 82 00 24 */	beq .L_80275DCC
/* 80275DAC 00272CEC  38 1F 03 08 */	addi r0, r31, 0x308
/* 80275DB0 00272CF0  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 80275DB4 00272CF4  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80275DB8 00272CF8  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80275DBC 00272CFC  38 00 00 00 */	li r0, 0
/* 80275DC0 00272D00  90 7F 03 08 */	stw r3, 0x308(r31)
/* 80275DC4 00272D04  90 1F 03 0C */	stw r0, 0x30c(r31)
/* 80275DC8 00272D08  90 1F 03 10 */	stw r0, 0x310(r31)
.L_80275DCC:
/* 80275DCC 00272D0C  7F E3 FB 78 */	mr r3, r31
/* 80275DD0 00272D10  38 80 00 00 */	li r4, 0
/* 80275DD4 00272D14  4B E8 B5 CD */	bl __ct__Q24Game9EnemyBaseFv
/* 80275DD8 00272D18  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank3Obj@ha
/* 80275DDC 00272D1C  38 1F 03 08 */	addi r0, r31, 0x308
/* 80275DE0 00272D20  38 A3 6B 50 */	addi r5, r3, __vt__Q34Game4Tank3Obj@l
/* 80275DE4 00272D24  38 7F 02 C4 */	addi r3, r31, 0x2c4
/* 80275DE8 00272D28  90 BF 00 00 */	stw r5, 0(r31)
/* 80275DEC 00272D2C  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80275DF0 00272D30  38 A5 03 28 */	addi r5, r5, 0x328
/* 80275DF4 00272D34  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80275DF8 00272D38  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80275DFC 00272D3C  90 A4 00 00 */	stw r5, 0(r4)
/* 80275E00 00272D40  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80275E04 00272D44  7C 04 00 50 */	subf r0, r4, r0
/* 80275E08 00272D48  90 04 00 0C */	stw r0, 0xc(r4)
/* 80275E0C 00272D4C  4B EB 45 49 */	bl __ct__Q34Game15WalkSmokeEffect3MgrFv
/* 80275E10 00272D50  38 60 00 2C */	li r3, 0x2c
/* 80275E14 00272D54  4B DA E0 91 */	bl __nw__FUl
/* 80275E18 00272D58  7C 7E 1B 79 */	or. r30, r3, r3
/* 80275E1C 00272D5C  41 82 00 44 */	beq .L_80275E60
/* 80275E20 00272D60  4B EB 1B 55 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80275E24 00272D64  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank14ProperAnimator@ha
/* 80275E28 00272D68  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 80275E2C 00272D6C  38 03 6A 40 */	addi r0, r3, __vt__Q34Game4Tank14ProperAnimator@l
/* 80275E30 00272D70  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80275E34 00272D74  90 1E 00 00 */	stw r0, 0(r30)
/* 80275E38 00272D78  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 80275E3C 00272D7C  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 80275E40 00272D80  38 00 00 00 */	li r0, 0
/* 80275E44 00272D84  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80275E48 00272D88  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80275E4C 00272D8C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80275E50 00272D90  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80275E54 00272D94  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80275E58 00272D98  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80275E5C 00272D9C  90 1E 00 20 */	stw r0, 0x20(r30)
.L_80275E60:
/* 80275E60 00272DA0  93 DF 01 84 */	stw r30, 0x184(r31)
/* 80275E64 00272DA4  38 60 00 1C */	li r3, 0x1c
/* 80275E68 00272DA8  4B DA E0 3D */	bl __nw__FUl
/* 80275E6C 00272DAC  7C 64 1B 79 */	or. r4, r3, r3
/* 80275E70 00272DB0  41 82 00 24 */	beq .L_80275E94
/* 80275E74 00272DB4  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 80275E78 00272DB8  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank3FSM@ha
/* 80275E7C 00272DBC  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 80275E80 00272DC0  38 A0 FF FF */	li r5, -1
/* 80275E84 00272DC4  90 04 00 00 */	stw r0, 0(r4)
/* 80275E88 00272DC8  38 03 6A 18 */	addi r0, r3, __vt__Q34Game4Tank3FSM@l
/* 80275E8C 00272DCC  90 A4 00 18 */	stw r5, 0x18(r4)
/* 80275E90 00272DD0  90 04 00 00 */	stw r0, 0(r4)
.L_80275E94:
/* 80275E94 00272DD4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80275E98 00272DD8  7F E3 FB 78 */	mr r3, r31
/* 80275E9C 00272DDC  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 80275EA0 00272DE0  7D 89 03 A6 */	mtctr r12
/* 80275EA4 00272DE4  4E 80 04 21 */	bctrl 
/* 80275EA8 00272DE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80275EAC 00272DEC  7F E3 FB 78 */	mr r3, r31
/* 80275EB0 00272DF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80275EB4 00272DF4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80275EB8 00272DF8  7C 08 03 A6 */	mtlr r0
/* 80275EBC 00272DFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80275EC0 00272E00  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game4Tank3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game4Tank3ObjFPQ24Game21EnemyInitialParamBase:
/* 80275EC4 00272E04  4E 80 00 20 */	blr 

.global onInit__Q34Game4Tank3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game4Tank3ObjFPQ24Game15CreatureInitArg:
/* 80275EC8 00272E08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80275ECC 00272E0C  7C 08 02 A6 */	mflr r0
/* 80275ED0 00272E10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80275ED4 00272E14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80275ED8 00272E18  7C 7F 1B 78 */	mr r31, r3
/* 80275EDC 00272E1C  4B E8 BB 7D */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 80275EE0 00272E20  C0 02 CF 88 */	lfs f0, lbl_8051B2E8@sda21(r2)
/* 80275EE4 00272E24  38 82 CF 8C */	addi r4, r2, lbl_8051B2EC@sda21
/* 80275EE8 00272E28  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 80275EEC 00272E2C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80275EF0 00272E30  48 1C 90 F5 */	bl getJoint__Q28SysShape5ModelFPc
/* 80275EF4 00272E34  90 7F 02 C0 */	stw r3, 0x2c0(r31)
/* 80275EF8 00272E38  38 00 00 00 */	li r0, 0
/* 80275EFC 00272E3C  C0 22 CF 94 */	lfs f1, lbl_8051B2F4@sda21(r2)
/* 80275F00 00272E40  7F E3 FB 78 */	mr r3, r31
/* 80275F04 00272E44  C0 02 CF 98 */	lfs f0, lbl_8051B2F8@sda21(r2)
/* 80275F08 00272E48  D0 3F 02 F0 */	stfs f1, 0x2f0(r31)
/* 80275F0C 00272E4C  D0 3F 02 EC */	stfs f1, 0x2ec(r31)
/* 80275F10 00272E50  98 1F 03 04 */	stb r0, 0x304(r31)
/* 80275F14 00272E54  D0 3F 02 E4 */	stfs f1, 0x2e4(r31)
/* 80275F18 00272E58  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 80275F1C 00272E5C  D0 3F 02 F4 */	stfs f1, 0x2f4(r31)
/* 80275F20 00272E60  81 9F 00 00 */	lwz r12, 0(r31)
/* 80275F24 00272E64  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 80275F28 00272E68  7D 89 03 A6 */	mtctr r12
/* 80275F2C 00272E6C  4E 80 04 21 */	bctrl 
/* 80275F30 00272E70  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80275F34 00272E74  7F E4 FB 78 */	mr r4, r31
/* 80275F38 00272E78  38 A0 00 01 */	li r5, 1
/* 80275F3C 00272E7C  38 C0 00 00 */	li r6, 0
/* 80275F40 00272E80  81 83 00 00 */	lwz r12, 0(r3)
/* 80275F44 00272E84  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80275F48 00272E88  7D 89 03 A6 */	mtctr r12
/* 80275F4C 00272E8C  4E 80 04 21 */	bctrl 
/* 80275F50 00272E90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80275F54 00272E94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80275F58 00272E98  7C 08 03 A6 */	mtlr r0
/* 80275F5C 00272E9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80275F60 00272EA0  4E 80 00 20 */	blr 

.global setupEffect__Q34Game4Tank3ObjFv
setupEffect__Q34Game4Tank3ObjFv:
/* 80275F64 00272EA4  4E 80 00 20 */	blr 

.global onKill__Q34Game4Tank3ObjFPQ24Game15CreatureKillArg
onKill__Q34Game4Tank3ObjFPQ24Game15CreatureKillArg:
/* 80275F68 00272EA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80275F6C 00272EAC  7C 08 02 A6 */	mflr r0
/* 80275F70 00272EB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80275F74 00272EB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80275F78 00272EB8  7C 9F 23 78 */	mr r31, r4
/* 80275F7C 00272EBC  93 C1 00 08 */	stw r30, 8(r1)
/* 80275F80 00272EC0  7C 7E 1B 78 */	mr r30, r3
/* 80275F84 00272EC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80275F88 00272EC8  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 80275F8C 00272ECC  7D 89 03 A6 */	mtctr r12
/* 80275F90 00272ED0  4E 80 04 21 */	bctrl 
/* 80275F94 00272ED4  7F C3 F3 78 */	mr r3, r30
/* 80275F98 00272ED8  7F E4 FB 78 */	mr r4, r31
/* 80275F9C 00272EDC  4B E8 BF 4D */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 80275FA0 00272EE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80275FA4 00272EE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80275FA8 00272EE8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80275FAC 00272EEC  7C 08 03 A6 */	mtlr r0
/* 80275FB0 00272EF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80275FB4 00272EF4  4E 80 00 20 */	blr 

.global doUpdate__Q34Game4Tank3ObjFv
doUpdate__Q34Game4Tank3ObjFv:
/* 80275FB8 00272EF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80275FBC 00272EFC  7C 08 02 A6 */	mflr r0
/* 80275FC0 00272F00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80275FC4 00272F04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80275FC8 00272F08  7C 7F 1B 78 */	mr r31, r3
/* 80275FCC 00272F0C  48 00 0B CD */	bl updateCaution__Q34Game4Tank3ObjFv
/* 80275FD0 00272F10  7F E3 FB 78 */	mr r3, r31
/* 80275FD4 00272F14  48 00 0A 95 */	bl updateEmit__Q34Game4Tank3ObjFv
/* 80275FD8 00272F18  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80275FDC 00272F1C  7F E4 FB 78 */	mr r4, r31
/* 80275FE0 00272F20  81 83 00 00 */	lwz r12, 0(r3)
/* 80275FE4 00272F24  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80275FE8 00272F28  7D 89 03 A6 */	mtctr r12
/* 80275FEC 00272F2C  4E 80 04 21 */	bctrl 
/* 80275FF0 00272F30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80275FF4 00272F34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80275FF8 00272F38  7C 08 03 A6 */	mtlr r0
/* 80275FFC 00272F3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80276000 00272F40  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game4Tank3ObjFR8Graphics
doDirectDraw__Q34Game4Tank3ObjFR8Graphics:
/* 80276004 00272F44  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game4Tank3ObjFR8Graphics
doDebugDraw__Q34Game4Tank3ObjFR8Graphics:
/* 80276008 00272F48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027600C 00272F4C  7C 08 02 A6 */	mflr r0
/* 80276010 00272F50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80276014 00272F54  4B E8 FE 59 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 80276018 00272F58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027601C 00272F5C  7C 08 03 A6 */	mtlr r0
/* 80276020 00272F60  38 21 00 10 */	addi r1, r1, 0x10
/* 80276024 00272F64  4E 80 00 20 */	blr 

.global setFSM__Q34Game4Tank3ObjFPQ34Game4Tank3FSM
setFSM__Q34Game4Tank3ObjFPQ34Game4Tank3FSM:
/* 80276028 00272F68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027602C 00272F6C  7C 08 02 A6 */	mflr r0
/* 80276030 00272F70  90 01 00 14 */	stw r0, 0x14(r1)
/* 80276034 00272F74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80276038 00272F78  7C 7F 1B 78 */	mr r31, r3
/* 8027603C 00272F7C  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 80276040 00272F80  7F E4 FB 78 */	mr r4, r31
/* 80276044 00272F84  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80276048 00272F88  81 83 00 00 */	lwz r12, 0(r3)
/* 8027604C 00272F8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80276050 00272F90  7D 89 03 A6 */	mtctr r12
/* 80276054 00272F94  4E 80 04 21 */	bctrl 
/* 80276058 00272F98  38 00 00 00 */	li r0, 0
/* 8027605C 00272F9C  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80276060 00272FA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80276064 00272FA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80276068 00272FA8  7C 08 03 A6 */	mtlr r0
/* 8027606C 00272FAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80276070 00272FB0  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game4Tank3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game4Tank3ObjFRQ24Game11ShadowParam:
/* 80276074 00272FB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80276078 00272FB8  7C 08 02 A6 */	mflr r0
/* 8027607C 00272FBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80276080 00272FC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80276084 00272FC4  7C 9F 23 78 */	mr r31, r4
/* 80276088 00272FC8  93 C1 00 08 */	stw r30, 8(r1)
/* 8027608C 00272FCC  7C 7E 1B 78 */	mr r30, r3
/* 80276090 00272FD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80276094 00272FD4  81 8C 02 04 */	lwz r12, 0x204(r12)
/* 80276098 00272FD8  7D 89 03 A6 */	mtctr r12
/* 8027609C 00272FDC  4E 80 04 21 */	bctrl 
/* 802760A0 00272FE0  C0 42 CF 9C */	lfs f2, lbl_8051B2FC@sda21(r2)
/* 802760A4 00272FE4  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 802760A8 00272FE8  C0 22 CF 94 */	lfs f1, lbl_8051B2F4@sda21(r2)
/* 802760AC 00272FEC  EC 42 00 2A */	fadds f2, f2, f0
/* 802760B0 00272FF0  C0 02 CF 98 */	lfs f0, lbl_8051B2F8@sda21(r2)
/* 802760B4 00272FF4  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802760B8 00272FF8  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802760BC 00272FFC  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802760C0 00273000  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802760C4 00273004  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 802760C8 00273008  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802760CC 0027300C  41 82 00 10 */	beq .L_802760DC
/* 802760D0 00273010  C0 02 CF A0 */	lfs f0, lbl_8051B300@sda21(r2)
/* 802760D4 00273014  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802760D8 00273018  48 00 00 0C */	b .L_802760E4
.L_802760DC:
/* 802760DC 0027301C  C0 02 CF A4 */	lfs f0, lbl_8051B304@sda21(r2)
/* 802760E0 00273020  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802760E4:
/* 802760E4 00273024  C0 02 CF A8 */	lfs f0, lbl_8051B308@sda21(r2)
/* 802760E8 00273028  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802760EC 0027302C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802760F0 00273030  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802760F4 00273034  83 C1 00 08 */	lwz r30, 8(r1)
/* 802760F8 00273038  7C 08 03 A6 */	mtlr r0
/* 802760FC 0027303C  38 21 00 10 */	addi r1, r1, 0x10
/* 80276100 00273040  4E 80 00 20 */	blr 

.global doStartStoneState__Q34Game4Tank3ObjFv
doStartStoneState__Q34Game4Tank3ObjFv:
/* 80276104 00273044  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80276108 00273048  7C 08 02 A6 */	mflr r0
/* 8027610C 0027304C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80276110 00273050  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80276114 00273054  7C 7F 1B 78 */	mr r31, r3
/* 80276118 00273058  4B E8 CD DD */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 8027611C 0027305C  88 1F 03 04 */	lbz r0, 0x304(r31)
/* 80276120 00273060  28 00 00 00 */	cmplwi r0, 0
/* 80276124 00273064  41 82 00 20 */	beq .L_80276144
/* 80276128 00273068  C0 02 CF 94 */	lfs f0, lbl_8051B2F4@sda21(r2)
/* 8027612C 0027306C  7F E3 FB 78 */	mr r3, r31
/* 80276130 00273070  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 80276134 00273074  81 9F 00 00 */	lwz r12, 0(r31)
/* 80276138 00273078  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 8027613C 0027307C  7D 89 03 A6 */	mtctr r12
/* 80276140 00273080  4E 80 04 21 */	bctrl 
.L_80276144:
/* 80276144 00273084  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80276148 00273088  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027614C 0027308C  7C 08 03 A6 */	mtlr r0
/* 80276150 00273090  38 21 00 10 */	addi r1, r1, 0x10
/* 80276154 00273094  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game4Tank3ObjFv
doFinishStoneState__Q34Game4Tank3ObjFv:
/* 80276158 00273098  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027615C 0027309C  7C 08 02 A6 */	mflr r0
/* 80276160 002730A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80276164 002730A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80276168 002730A8  7C 7F 1B 78 */	mr r31, r3
/* 8027616C 002730AC  4B E8 CD 9D */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 80276170 002730B0  88 1F 03 04 */	lbz r0, 0x304(r31)
/* 80276174 002730B4  28 00 00 00 */	cmplwi r0, 0
/* 80276178 002730B8  41 82 00 18 */	beq .L_80276190
/* 8027617C 002730BC  7F E3 FB 78 */	mr r3, r31
/* 80276180 002730C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80276184 002730C4  81 8C 03 04 */	lwz r12, 0x304(r12)
/* 80276188 002730C8  7D 89 03 A6 */	mtctr r12
/* 8027618C 002730CC  4E 80 04 21 */	bctrl 
.L_80276190:
/* 80276190 002730D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80276194 002730D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80276198 002730D8  7C 08 03 A6 */	mtlr r0
/* 8027619C 002730DC  38 21 00 10 */	addi r1, r1, 0x10
/* 802761A0 002730E0  4E 80 00 20 */	blr 

.global doStartEarthquakeFitState__Q34Game4Tank3ObjFv
doStartEarthquakeFitState__Q34Game4Tank3ObjFv:
/* 802761A4 002730E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802761A8 002730E8  7C 08 02 A6 */	mflr r0
/* 802761AC 002730EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802761B0 002730F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802761B4 002730F4  7C 7F 1B 78 */	mr r31, r3
/* 802761B8 002730F8  4B E9 17 AD */	bl doStartEarthquakeFitState__Q24Game9EnemyBaseFv
/* 802761BC 002730FC  88 1F 03 04 */	lbz r0, 0x304(r31)
/* 802761C0 00273100  28 00 00 00 */	cmplwi r0, 0
/* 802761C4 00273104  41 82 00 20 */	beq .L_802761E4
/* 802761C8 00273108  C0 02 CF 94 */	lfs f0, lbl_8051B2F4@sda21(r2)
/* 802761CC 0027310C  7F E3 FB 78 */	mr r3, r31
/* 802761D0 00273110  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802761D4 00273114  81 9F 00 00 */	lwz r12, 0(r31)
/* 802761D8 00273118  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 802761DC 0027311C  7D 89 03 A6 */	mtctr r12
/* 802761E0 00273120  4E 80 04 21 */	bctrl 
.L_802761E4:
/* 802761E4 00273124  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802761E8 00273128  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802761EC 0027312C  7C 08 03 A6 */	mtlr r0
/* 802761F0 00273130  38 21 00 10 */	addi r1, r1, 0x10
/* 802761F4 00273134  4E 80 00 20 */	blr 

.global doFinishEarthquakeFitState__Q34Game4Tank3ObjFv
doFinishEarthquakeFitState__Q34Game4Tank3ObjFv:
/* 802761F8 00273138  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802761FC 0027313C  7C 08 02 A6 */	mflr r0
/* 80276200 00273140  90 01 00 14 */	stw r0, 0x14(r1)
/* 80276204 00273144  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80276208 00273148  7C 7F 1B 78 */	mr r31, r3
/* 8027620C 0027314C  4B E9 17 5D */	bl doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
/* 80276210 00273150  88 1F 03 04 */	lbz r0, 0x304(r31)
/* 80276214 00273154  28 00 00 00 */	cmplwi r0, 0
/* 80276218 00273158  41 82 00 18 */	beq .L_80276230
/* 8027621C 0027315C  7F E3 FB 78 */	mr r3, r31
/* 80276220 00273160  81 9F 00 00 */	lwz r12, 0(r31)
/* 80276224 00273164  81 8C 03 04 */	lwz r12, 0x304(r12)
/* 80276228 00273168  7D 89 03 A6 */	mtctr r12
/* 8027622C 0027316C  4E 80 04 21 */	bctrl 
.L_80276230:
/* 80276230 00273170  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80276234 00273174  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80276238 00273178  7C 08 03 A6 */	mtlr r0
/* 8027623C 0027317C  38 21 00 10 */	addi r1, r1, 0x10
/* 80276240 00273180  4E 80 00 20 */	blr 

.global doStartWaitingBirthTypeDrop__Q34Game4Tank3ObjFv
doStartWaitingBirthTypeDrop__Q34Game4Tank3ObjFv:
/* 80276244 00273184  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80276248 00273188  7C 08 02 A6 */	mflr r0
/* 8027624C 0027318C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80276250 00273190  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80276254 00273194  7C 7F 1B 78 */	mr r31, r3
/* 80276258 00273198  4B E9 17 41 */	bl doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 8027625C 0027319C  7F E3 FB 78 */	mr r3, r31
/* 80276260 002731A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80276264 002731A4  81 8C 03 14 */	lwz r12, 0x314(r12)
/* 80276268 002731A8  7D 89 03 A6 */	mtctr r12
/* 8027626C 002731AC  4E 80 04 21 */	bctrl 
/* 80276270 002731B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80276274 002731B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80276278 002731B8  7C 08 03 A6 */	mtlr r0
/* 8027627C 002731BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80276280 002731C0  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game4Tank3ObjFv
effectDrawOff__Q34Game4Tank3ObjFv:
/* 80276284 002731C4  4E 80 00 20 */	blr 

.global doFinishWaitingBirthTypeDrop__Q34Game4Tank3ObjFv
doFinishWaitingBirthTypeDrop__Q34Game4Tank3ObjFv:
/* 80276288 002731C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027628C 002731CC  7C 08 02 A6 */	mflr r0
/* 80276290 002731D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80276294 002731D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80276298 002731D8  7C 7F 1B 78 */	mr r31, r3
/* 8027629C 002731DC  4B E9 17 2D */	bl doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 802762A0 002731E0  7F E3 FB 78 */	mr r3, r31
/* 802762A4 002731E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802762A8 002731E8  81 8C 03 10 */	lwz r12, 0x310(r12)
/* 802762AC 002731EC  7D 89 03 A6 */	mtctr r12
/* 802762B0 002731F0  4E 80 04 21 */	bctrl 
/* 802762B4 002731F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802762B8 002731F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802762BC 002731FC  7C 08 03 A6 */	mtlr r0
/* 802762C0 00273200  38 21 00 10 */	addi r1, r1, 0x10
/* 802762C4 00273204  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game4Tank3ObjFv
effectDrawOn__Q34Game4Tank3ObjFv:
/* 802762C8 00273208  4E 80 00 20 */	blr 

.global startCarcassMotion__Q34Game4Tank3ObjFv
startCarcassMotion__Q34Game4Tank3ObjFv:
/* 802762CC 0027320C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802762D0 00273210  7C 08 02 A6 */	mflr r0
/* 802762D4 00273214  38 80 00 06 */	li r4, 6
/* 802762D8 00273218  38 A0 00 00 */	li r5, 0
/* 802762DC 0027321C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802762E0 00273220  4B E8 ED 25 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802762E4 00273224  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802762E8 00273228  7C 08 03 A6 */	mtlr r0
/* 802762EC 0027322C  38 21 00 10 */	addi r1, r1, 0x10
/* 802762F0 00273230  4E 80 00 20 */	blr 

.global doStartMovie__Q34Game4Tank3ObjFv
doStartMovie__Q34Game4Tank3ObjFv:
/* 802762F4 00273234  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802762F8 00273238  7C 08 02 A6 */	mflr r0
/* 802762FC 0027323C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80276300 00273240  81 83 00 00 */	lwz r12, 0(r3)
/* 80276304 00273244  81 8C 03 14 */	lwz r12, 0x314(r12)
/* 80276308 00273248  7D 89 03 A6 */	mtctr r12
/* 8027630C 0027324C  4E 80 04 21 */	bctrl 
/* 80276310 00273250  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80276314 00273254  7C 08 03 A6 */	mtlr r0
/* 80276318 00273258  38 21 00 10 */	addi r1, r1, 0x10
/* 8027631C 0027325C  4E 80 00 20 */	blr 

.global doEndMovie__Q34Game4Tank3ObjFv
doEndMovie__Q34Game4Tank3ObjFv:
/* 80276320 00273260  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80276324 00273264  7C 08 02 A6 */	mflr r0
/* 80276328 00273268  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027632C 0027326C  81 83 00 00 */	lwz r12, 0(r3)
/* 80276330 00273270  81 8C 03 10 */	lwz r12, 0x310(r12)
/* 80276334 00273274  7D 89 03 A6 */	mtctr r12
/* 80276338 00273278  4E 80 04 21 */	bctrl 
/* 8027633C 0027327C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80276340 00273280  7C 08 03 A6 */	mtlr r0
/* 80276344 00273284  38 21 00 10 */	addi r1, r1, 0x10
/* 80276348 00273288  4E 80 00 20 */	blr 

.global getOffsetForMapCollision__Q34Game4Tank3ObjFv
getOffsetForMapCollision__Q34Game4Tank3ObjFv:
/* 8027634C 0027328C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80276350 00273290  7C 08 02 A6 */	mflr r0
/* 80276354 00273294  90 01 00 24 */	stw r0, 0x24(r1)
/* 80276358 00273298  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8027635C 0027329C  7C 9F 23 78 */	mr r31, r4
/* 80276360 002732A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80276364 002732A4  7C 7E 1B 78 */	mr r30, r3
/* 80276368 002732A8  7F E3 FB 78 */	mr r3, r31
/* 8027636C 002732AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80276370 002732B0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80276374 002732B4  7D 89 03 A6 */	mtctr r12
/* 80276378 002732B8  4E 80 04 21 */	bctrl 
/* 8027637C 002732BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80276380 002732C0  41 82 00 24 */	beq .L_802763A4
/* 80276384 002732C4  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 80276388 002732C8  C4 03 41 E4 */	lfsu f0, "zero__10Vector3<f>"@l(r3)
/* 8027638C 002732CC  D0 1E 00 00 */	stfs f0, 0(r30)
/* 80276390 002732D0  C0 03 00 04 */	lfs f0, 4(r3)
/* 80276394 002732D4  D0 1E 00 04 */	stfs f0, 4(r30)
/* 80276398 002732D8  C0 03 00 08 */	lfs f0, 8(r3)
/* 8027639C 002732DC  D0 1E 00 08 */	stfs f0, 8(r30)
/* 802763A0 002732E0  48 00 00 58 */	b .L_802763F8
.L_802763A4:
/* 802763A4 002732E4  7F E3 FB 78 */	mr r3, r31
/* 802763A8 002732E8  38 81 00 08 */	addi r4, r1, 8
/* 802763AC 002732EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802763B0 002732F0  81 8C 02 04 */	lwz r12, 0x204(r12)
/* 802763B4 002732F4  7D 89 03 A6 */	mtctr r12
/* 802763B8 002732F8  4E 80 04 21 */	bctrl 
/* 802763BC 002732FC  C0 41 00 08 */	lfs f2, 8(r1)
/* 802763C0 00273300  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 802763C4 00273304  C0 02 CF 94 */	lfs f0, lbl_8051B2F4@sda21(r2)
/* 802763C8 00273308  EC 42 08 28 */	fsubs f2, f2, f1
/* 802763CC 0027330C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 802763D0 00273310  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802763D4 00273314  D0 41 00 08 */	stfs f2, 8(r1)
/* 802763D8 00273318  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 802763DC 0027331C  EC 01 00 28 */	fsubs f0, f1, f0
/* 802763E0 00273320  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802763E4 00273324  D0 5E 00 00 */	stfs f2, 0(r30)
/* 802763E8 00273328  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802763EC 0027332C  D0 1E 00 04 */	stfs f0, 4(r30)
/* 802763F0 00273330  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802763F4 00273334  D0 1E 00 08 */	stfs f0, 8(r30)
.L_802763F8:
/* 802763F8 00273338  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802763FC 0027333C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80276400 00273340  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80276404 00273344  7C 08 03 A6 */	mtlr r0
/* 80276408 00273348  38 21 00 20 */	addi r1, r1, 0x20
/* 8027640C 0027334C  4E 80 00 20 */	blr 

.global initWalkSmokeEffect__Q34Game4Tank3ObjFv
initWalkSmokeEffect__Q34Game4Tank3ObjFv:
/* 80276410 00273350  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80276414 00273354  7C 08 02 A6 */	mflr r0
/* 80276418 00273358  38 80 00 04 */	li r4, 4
/* 8027641C 0027335C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80276420 00273360  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80276424 00273364  7C 7F 1B 78 */	mr r31, r3
/* 80276428 00273368  38 7F 02 C4 */	addi r3, r31, 0x2c4
/* 8027642C 0027336C  4B EB 3F 39 */	bl alloc__Q34Game15WalkSmokeEffect3MgrFi
/* 80276430 00273370  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 80276434 00273374  38 7F 02 C4 */	addi r3, r31, 0x2c4
/* 80276438 00273378  C0 22 CF B4 */	lfs f1, lbl_8051B314@sda21(r2)
/* 8027643C 0027337C  38 80 00 00 */	li r4, 0
/* 80276440 00273380  38 C2 CF AC */	addi r6, r2, lbl_8051B30C@sda21
/* 80276444 00273384  4B EB 41 9D */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 80276448 00273388  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 8027644C 0027338C  38 7F 02 C4 */	addi r3, r31, 0x2c4
/* 80276450 00273390  C0 22 CF B4 */	lfs f1, lbl_8051B314@sda21(r2)
/* 80276454 00273394  38 80 00 01 */	li r4, 1
/* 80276458 00273398  38 C2 CF B8 */	addi r6, r2, lbl_8051B318@sda21
/* 8027645C 0027339C  4B EB 41 85 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 80276460 002733A0  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 80276464 002733A4  38 7F 02 C4 */	addi r3, r31, 0x2c4
/* 80276468 002733A8  C0 22 CF C8 */	lfs f1, lbl_8051B328@sda21(r2)
/* 8027646C 002733AC  38 80 00 02 */	li r4, 2
/* 80276470 002733B0  38 C2 CF C0 */	addi r6, r2, lbl_8051B320@sda21
/* 80276474 002733B4  4B EB 41 6D */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 80276478 002733B8  80 BF 01 74 */	lwz r5, 0x174(r31)
/* 8027647C 002733BC  38 7F 02 C4 */	addi r3, r31, 0x2c4
/* 80276480 002733C0  C0 22 CF C8 */	lfs f1, lbl_8051B328@sda21(r2)
/* 80276484 002733C4  38 80 00 03 */	li r4, 3
/* 80276488 002733C8  38 C2 CF CC */	addi r6, r2, lbl_8051B32C@sda21
/* 8027648C 002733CC  4B EB 41 55 */	bl setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
/* 80276490 002733D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80276494 002733D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80276498 002733D8  7C 08 03 A6 */	mtlr r0
/* 8027649C 002733DC  38 21 00 10 */	addi r1, r1, 0x10
/* 802764A0 002733E0  4E 80 00 20 */	blr 

.global getWalkSmokeEffectMgr__Q34Game4Tank3ObjFv
getWalkSmokeEffectMgr__Q34Game4Tank3ObjFv:
/* 802764A4 002733E4  38 63 02 C4 */	addi r3, r3, 0x2c4
/* 802764A8 002733E8  4E 80 00 20 */	blr 

.global "getCommonEffectPos__Q34Game4Tank3ObjFR10Vector3<f>"
"getCommonEffectPos__Q34Game4Tank3ObjFR10Vector3<f>":
/* 802764AC 002733EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802764B0 002733F0  7C 08 02 A6 */	mflr r0
/* 802764B4 002733F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802764B8 002733F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802764BC 002733FC  7C 9F 23 78 */	mr r31, r4
/* 802764C0 00273400  38 81 00 08 */	addi r4, r1, 8
/* 802764C4 00273404  81 83 00 00 */	lwz r12, 0(r3)
/* 802764C8 00273408  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802764CC 0027340C  7D 89 03 A6 */	mtctr r12
/* 802764D0 00273410  4E 80 04 21 */	bctrl 
/* 802764D4 00273414  C0 01 00 08 */	lfs f0, 8(r1)
/* 802764D8 00273418  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802764DC 0027341C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802764E0 00273420  D0 1F 00 04 */	stfs f0, 4(r31)
/* 802764E4 00273424  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802764E8 00273428  D0 1F 00 08 */	stfs f0, 8(r31)
/* 802764EC 0027342C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802764F0 00273430  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802764F4 00273434  7C 08 03 A6 */	mtlr r0
/* 802764F8 00273438  38 21 00 20 */	addi r1, r1, 0x20
/* 802764FC 0027343C  4E 80 00 20 */	blr 

.global isAttackable__Q34Game4Tank3ObjFb
isAttackable__Q34Game4Tank3ObjFb:
/* 80276500 00273440  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 80276504 00273444  7C 08 02 A6 */	mflr r0
/* 80276508 00273448  90 01 01 04 */	stw r0, 0x104(r1)
/* 8027650C 0027344C  DB E1 00 F0 */	stfd f31, 0xf0(r1)
/* 80276510 00273450  F3 E1 00 F8 */	psq_st f31, 248(r1), 0, qr0
/* 80276514 00273454  DB C1 00 E0 */	stfd f30, 0xe0(r1)
/* 80276518 00273458  F3 C1 00 E8 */	psq_st f30, 232(r1), 0, qr0
/* 8027651C 0027345C  DB A1 00 D0 */	stfd f29, 0xd0(r1)
/* 80276520 00273460  F3 A1 00 D8 */	psq_st f29, 216(r1), 0, qr0
/* 80276524 00273464  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 80276528 00273468  93 C1 00 C8 */	stw r30, 0xc8(r1)
/* 8027652C 0027346C  93 A1 00 C4 */	stw r29, 0xc4(r1)
/* 80276530 00273470  7C 7E 1B 78 */	mr r30, r3
/* 80276534 00273474  7C 9F 23 78 */	mr r31, r4
/* 80276538 00273478  C0 23 02 D0 */	lfs f1, 0x2d0(r3)
/* 8027653C 0027347C  C0 43 02 D4 */	lfs f2, 0x2d4(r3)
/* 80276540 00273480  C0 03 02 CC */	lfs f0, 0x2cc(r3)
/* 80276544 00273484  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80276548 00273488  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 8027654C 0027348C  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80276550 00273490  81 83 00 00 */	lwz r12, 0(r3)
/* 80276554 00273494  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80276558 00273498  7D 89 03 A6 */	mtctr r12
/* 8027655C 0027349C  4E 80 04 21 */	bctrl 
/* 80276560 002734A0  FC 40 08 90 */	fmr f2, f1
/* 80276564 002734A4  C0 02 CF 94 */	lfs f0, lbl_8051B2F4@sda21(r2)
/* 80276568 002734A8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8027656C 002734AC  40 80 00 08 */	bge .L_80276574
/* 80276570 002734B0  FC 40 10 50 */	fneg f2, f2
.L_80276574:
/* 80276574 002734B4  C0 62 CF D4 */	lfs f3, lbl_8051B334@sda21(r2)
/* 80276578 002734B8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8027657C 002734BC  C0 02 CF 94 */	lfs f0, lbl_8051B2F4@sda21(r2)
/* 80276580 002734C0  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80276584 002734C4  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80276588 002734C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027658C 002734CC  FC 00 10 1E */	fctiwz f0, f2
/* 80276590 002734D0  D8 01 00 A8 */	stfd f0, 0xa8(r1)
/* 80276594 002734D4  80 01 00 AC */	lwz r0, 0xac(r1)
/* 80276598 002734D8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8027659C 002734DC  7C 64 02 14 */	add r3, r4, r0
/* 802765A0 002734E0  C0 43 00 04 */	lfs f2, 4(r3)
/* 802765A4 002734E4  40 80 00 28 */	bge .L_802765CC
/* 802765A8 002734E8  C0 02 CF D8 */	lfs f0, lbl_8051B338@sda21(r2)
/* 802765AC 002734EC  EC 01 00 32 */	fmuls f0, f1, f0
/* 802765B0 002734F0  FC 00 00 1E */	fctiwz f0, f0
/* 802765B4 002734F4  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 802765B8 002734F8  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 802765BC 002734FC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802765C0 00273500  7C 04 04 2E */	lfsx f0, r4, r0
/* 802765C4 00273504  FC 20 00 50 */	fneg f1, f0
/* 802765C8 00273508  48 00 00 1C */	b .L_802765E4
.L_802765CC:
/* 802765CC 0027350C  EC 01 00 F2 */	fmuls f0, f1, f3
/* 802765D0 00273510  FC 00 00 1E */	fctiwz f0, f0
/* 802765D4 00273514  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 802765D8 00273518  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 802765DC 0027351C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802765E0 00273520  7C 24 04 2E */	lfsx f1, r4, r0
.L_802765E4:
/* 802765E4 00273524  C0 02 CF 94 */	lfs f0, lbl_8051B2F4@sda21(r2)
/* 802765E8 00273528  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802765EC 0027352C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802765F0 00273530  FF C0 08 18 */	frsp f30, f1
/* 802765F4 00273534  FF E0 10 50 */	fneg f31, f2
/* 802765F8 00273538  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802765FC 0027353C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80276600 00273540  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80276604 00273544  C3 A3 05 64 */	lfs f29, 0x564(r3)
/* 80276608 00273548  41 82 00 1C */	beq .L_80276624
/* 8027660C 0027354C  FC 20 E8 90 */	fmr f1, f29
/* 80276610 00273550  7F C3 F3 78 */	mr r3, r30
/* 80276614 00273554  38 81 00 24 */	addi r4, r1, 0x24
/* 80276618 00273558  38 A1 00 30 */	addi r5, r1, 0x30
/* 8027661C 0027355C  48 00 02 21 */	bl "emitCollideRatio__Q34Game4Tank3ObjFR10Vector3<f>R10Vector3<f>f"
/* 80276620 00273560  FF A0 08 90 */	fmr f29, f1
.L_80276624:
/* 80276624 00273564  C0 02 CF DC */	lfs f0, lbl_8051B33C@sda21(r2)
/* 80276628 00273568  38 61 00 3C */	addi r3, r1, 0x3c
/* 8027662C 0027356C  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 80276630 00273570  38 81 00 14 */	addi r4, r1, 0x14
/* 80276634 00273574  EC A0 07 72 */	fmuls f5, f0, f29
/* 80276638 00273578  C0 61 00 2C */	lfs f3, 0x2c(r1)
/* 8027663C 0027357C  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 80276640 00273580  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80276644 00273584  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 80276648 00273588  EC 43 11 7A */	fmadds f2, f3, f5, f2
/* 8027664C 0027358C  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 80276650 00273590  EC 01 01 7A */	fmadds f0, f1, f5, f0
/* 80276654 00273594  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 80276658 00273598  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8027665C 0027359C  D0 A1 00 20 */	stfs f5, 0x20(r1)
/* 80276660 002735A0  4B FB 7D 41 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 80276664 002735A4  38 00 00 01 */	li r0, 1
/* 80276668 002735A8  38 61 00 5C */	addi r3, r1, 0x5c
/* 8027666C 002735AC  98 01 00 58 */	stb r0, 0x58(r1)
/* 80276670 002735B0  38 81 00 3C */	addi r4, r1, 0x3c
/* 80276674 002735B4  4B FB 7D 6D */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 80276678 002735B8  38 61 00 5C */	addi r3, r1, 0x5c
/* 8027667C 002735BC  4B FB 7D E1 */	bl first__Q24Game12CellIteratorFv
/* 80276680 002735C0  48 00 01 70 */	b .L_802767F0
.L_80276684:
/* 80276684 002735C4  38 61 00 5C */	addi r3, r1, 0x5c
/* 80276688 002735C8  4B FB 7E BD */	bl __ml__Q24Game12CellIteratorFv
/* 8027668C 002735CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80276690 002735D0  7C 7D 1B 78 */	mr r29, r3
/* 80276694 002735D4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80276698 002735D8  7D 89 03 A6 */	mtctr r12
/* 8027669C 002735DC  4E 80 04 21 */	bctrl 
/* 802766A0 002735E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802766A4 002735E4  41 82 01 44 */	beq .L_802767E8
/* 802766A8 002735E8  7F A3 EB 78 */	mr r3, r29
/* 802766AC 002735EC  81 9D 00 00 */	lwz r12, 0(r29)
/* 802766B0 002735F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802766B4 002735F4  7D 89 03 A6 */	mtctr r12
/* 802766B8 002735F8  4E 80 04 21 */	bctrl 
/* 802766BC 002735FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802766C0 00273600  40 82 00 3C */	bne .L_802766FC
/* 802766C4 00273604  7F A3 EB 78 */	mr r3, r29
/* 802766C8 00273608  81 9D 00 00 */	lwz r12, 0(r29)
/* 802766CC 0027360C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802766D0 00273610  7D 89 03 A6 */	mtctr r12
/* 802766D4 00273614  4E 80 04 21 */	bctrl 
/* 802766D8 00273618  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802766DC 0027361C  41 82 01 0C */	beq .L_802767E8
/* 802766E0 00273620  7F A3 EB 78 */	mr r3, r29
/* 802766E4 00273624  81 9D 00 00 */	lwz r12, 0(r29)
/* 802766E8 00273628  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802766EC 0027362C  7D 89 03 A6 */	mtctr r12
/* 802766F0 00273630  4E 80 04 21 */	bctrl 
/* 802766F4 00273634  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802766F8 00273638  41 82 00 F0 */	beq .L_802767E8
.L_802766FC:
/* 802766FC 0027363C  7F A4 EB 78 */	mr r4, r29
/* 80276700 00273640  38 61 00 08 */	addi r3, r1, 8
/* 80276704 00273644  81 9D 00 00 */	lwz r12, 0(r29)
/* 80276708 00273648  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027670C 0027364C  7D 89 03 A6 */	mtctr r12
/* 80276710 00273650  4E 80 04 21 */	bctrl 
/* 80276714 00273654  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80276718 00273658  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8027671C 0027365C  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 80276720 00273660  C0 61 00 38 */	lfs f3, 0x38(r1)
/* 80276724 00273664  EC A1 00 28 */	fsubs f5, f1, f0
/* 80276728 00273668  C0 02 CF 94 */	lfs f0, lbl_8051B2F4@sda21(r2)
/* 8027672C 0027366C  C0 41 00 08 */	lfs f2, 8(r1)
/* 80276730 00273670  EC 84 18 28 */	fsubs f4, f4, f3
/* 80276734 00273674  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80276738 00273678  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8027673C 0027367C  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80276740 00273680  EC 62 08 28 */	fsubs f3, f2, f1
/* 80276744 00273684  40 81 00 0C */	ble .L_80276750
/* 80276748 00273688  FC 20 28 90 */	fmr f1, f5
/* 8027674C 0027368C  48 00 00 08 */	b .L_80276754
.L_80276750:
/* 80276750 00273690  FC 20 28 50 */	fneg f1, f5
.L_80276754:
/* 80276754 00273694  C0 03 05 B4 */	lfs f0, 0x5b4(r3)
/* 80276758 00273698  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027675C 0027369C  40 80 00 8C */	bge .L_802767E8
/* 80276760 002736A0  C0 22 CF 94 */	lfs f1, lbl_8051B2F4@sda21(r2)
/* 80276764 002736A4  EC 01 01 72 */	fmuls f0, f1, f5
/* 80276768 002736A8  EC 1F 00 FA */	fmadds f0, f31, f3, f0
/* 8027676C 002736AC  EC 5E 01 3A */	fmadds f2, f30, f4, f0
/* 80276770 002736B0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80276774 002736B4  40 81 00 08 */	ble .L_8027677C
/* 80276778 002736B8  48 00 00 08 */	b .L_80276780
.L_8027677C:
/* 8027677C 002736BC  FC 40 10 50 */	fneg f2, f2
.L_80276780:
/* 80276780 002736C0  C0 03 05 B4 */	lfs f0, 0x5b4(r3)
/* 80276784 002736C4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80276788 002736C8  40 80 00 60 */	bge .L_802767E8
/* 8027678C 002736CC  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80276790 002736D0  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80276794 002736D4  EC 00 01 72 */	fmuls f0, f0, f5
/* 80276798 002736D8  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 8027679C 002736DC  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 802767A0 002736E0  EC 22 01 3A */	fmadds f1, f2, f4, f0
/* 802767A4 002736E4  FC 01 E8 40 */	fcmpo cr0, f1, f29
/* 802767A8 002736E8  40 80 00 40 */	bge .L_802767E8
/* 802767AC 002736EC  C0 02 CF 94 */	lfs f0, lbl_8051B2F4@sda21(r2)
/* 802767B0 002736F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802767B4 002736F4  40 81 00 34 */	ble .L_802767E8
/* 802767B8 002736F8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802767BC 002736FC  41 82 00 20 */	beq .L_802767DC
/* 802767C0 00273700  7F C3 F3 78 */	mr r3, r30
/* 802767C4 00273704  7F A4 EB 78 */	mr r4, r29
/* 802767C8 00273708  81 9E 00 00 */	lwz r12, 0(r30)
/* 802767CC 0027370C  81 8C 03 18 */	lwz r12, 0x318(r12)
/* 802767D0 00273710  7D 89 03 A6 */	mtctr r12
/* 802767D4 00273714  4E 80 04 21 */	bctrl 
/* 802767D8 00273718  48 00 00 10 */	b .L_802767E8
.L_802767DC:
/* 802767DC 0027371C  93 BE 02 30 */	stw r29, 0x230(r30)
/* 802767E0 00273720  38 60 00 01 */	li r3, 1
/* 802767E4 00273724  48 00 00 20 */	b .L_80276804
.L_802767E8:
/* 802767E8 00273728  38 61 00 5C */	addi r3, r1, 0x5c
/* 802767EC 0027372C  4B FB 7D 15 */	bl next__Q24Game12CellIteratorFv
.L_802767F0:
/* 802767F0 00273730  38 61 00 5C */	addi r3, r1, 0x5c
/* 802767F4 00273734  4B FB 7D 41 */	bl isDone__Q24Game12CellIteratorFv
/* 802767F8 00273738  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802767FC 0027373C  41 82 FE 88 */	beq .L_80276684
/* 80276800 00273740  7F E3 FB 78 */	mr r3, r31
.L_80276804:
/* 80276804 00273744  E3 E1 00 F8 */	psq_l f31, 248(r1), 0, qr0
/* 80276808 00273748  CB E1 00 F0 */	lfd f31, 0xf0(r1)
/* 8027680C 0027374C  E3 C1 00 E8 */	psq_l f30, 232(r1), 0, qr0
/* 80276810 00273750  CB C1 00 E0 */	lfd f30, 0xe0(r1)
/* 80276814 00273754  E3 A1 00 D8 */	psq_l f29, 216(r1), 0, qr0
/* 80276818 00273758  CB A1 00 D0 */	lfd f29, 0xd0(r1)
/* 8027681C 0027375C  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 80276820 00273760  83 C1 00 C8 */	lwz r30, 0xc8(r1)
/* 80276824 00273764  80 01 01 04 */	lwz r0, 0x104(r1)
/* 80276828 00273768  83 A1 00 C4 */	lwz r29, 0xc4(r1)
/* 8027682C 0027376C  7C 08 03 A6 */	mtlr r0
/* 80276830 00273770  38 21 01 00 */	addi r1, r1, 0x100
/* 80276834 00273774  4E 80 00 20 */	blr 

.global interactCreature__Q34Game4Tank3ObjFPQ24Game8Creature
interactCreature__Q34Game4Tank3ObjFPQ24Game8Creature:
/* 80276838 00273778  4E 80 00 20 */	blr 

.global "emitCollideRatio__Q34Game4Tank3ObjFR10Vector3<f>R10Vector3<f>f"
"emitCollideRatio__Q34Game4Tank3ObjFR10Vector3<f>R10Vector3<f>f":
/* 8027683C 0027377C  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80276840 00273780  7C 08 02 A6 */	mflr r0
/* 80276844 00273784  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80276848 00273788  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 8027684C 0027378C  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 80276850 00273790  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 80276854 00273794  7C 7F 1B 78 */	mr r31, r3
/* 80276858 00273798  C0 02 CF 94 */	lfs f0, lbl_8051B2F4@sda21(r2)
/* 8027685C 0027379C  C0 43 02 E4 */	lfs f2, 0x2e4(r3)
/* 80276860 002737A0  FC 00 10 00 */	fcmpu cr0, f0, f2
/* 80276864 002737A4  EF E1 00 B2 */	fmuls f31, f1, f2
/* 80276868 002737A8  40 82 00 14 */	bne .L_8027687C
/* 8027686C 002737AC  C0 22 CF E0 */	lfs f1, lbl_8051B340@sda21(r2)
/* 80276870 002737B0  C0 02 CF 98 */	lfs f0, lbl_8051B2F8@sda21(r2)
/* 80276874 002737B4  D0 3F 02 E4 */	stfs f1, 0x2e4(r31)
/* 80276878 002737B8  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
.L_8027687C:
/* 8027687C 002737BC  C0 3F 02 E4 */	lfs f1, 0x2e4(r31)
/* 80276880 002737C0  C0 1F 02 E8 */	lfs f0, 0x2e8(r31)
/* 80276884 002737C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80276888 002737C8  40 80 01 A0 */	bge .L_80276A28
/* 8027688C 002737CC  C0 A4 00 04 */	lfs f5, 4(r4)
/* 80276890 002737D0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80276894 002737D4  C0 64 00 00 */	lfs f3, 0(r4)
/* 80276898 002737D8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8027689C 002737DC  EC A5 07 F2 */	fmuls f5, f5, f31
/* 802768A0 002737E0  C0 C4 00 08 */	lfs f6, 8(r4)
/* 802768A4 002737E4  C0 25 00 04 */	lfs f1, 4(r5)
/* 802768A8 002737E8  EC 63 07 F2 */	fmuls f3, f3, f31
/* 802768AC 002737EC  C0 45 00 00 */	lfs f2, 0(r5)
/* 802768B0 002737F0  EC C6 07 F2 */	fmuls f6, f6, f31
/* 802768B4 002737F4  C0 05 00 08 */	lfs f0, 8(r5)
/* 802768B8 002737F8  EC A5 08 2A */	fadds f5, f5, f1
/* 802768BC 002737FC  C0 22 CF E4 */	lfs f1, lbl_8051B344@sda21(r2)
/* 802768C0 00273800  EC 63 10 2A */	fadds f3, f3, f2
/* 802768C4 00273804  EC C6 00 2A */	fadds f6, f6, f0
/* 802768C8 00273808  C0 02 CF 9C */	lfs f0, lbl_8051B2FC@sda21(r2)
/* 802768CC 0027380C  EC A5 08 2A */	fadds f5, f5, f1
/* 802768D0 00273810  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 802768D4 00273814  38 C0 00 00 */	li r6, 0
/* 802768D8 00273818  C0 82 CF B4 */	lfs f4, lbl_8051B314@sda21(r2)
/* 802768DC 0027381C  D0 A1 00 18 */	stfs f5, 0x18(r1)
/* 802768E0 00273820  39 01 00 14 */	addi r8, r1, 0x14
/* 802768E4 00273824  C0 42 CF 94 */	lfs f2, lbl_8051B2F4@sda21(r2)
/* 802768E8 00273828  38 E1 00 08 */	addi r7, r1, 8
/* 802768EC 0027382C  D0 C1 00 1C */	stfs f6, 0x1c(r1)
/* 802768F0 00273830  38 00 FF FF */	li r0, -1
/* 802768F4 00273834  C0 23 08 00 */	lfs f1, 0x800(r3)
/* 802768F8 00273838  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802768FC 0027383C  C0 02 CF E8 */	lfs f0, lbl_8051B348@sda21(r2)
/* 80276900 00273840  C0 A4 00 00 */	lfs f5, 0(r4)
/* 80276904 00273844  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80276908 00273848  D0 A1 00 08 */	stfs f5, 8(r1)
/* 8027690C 0027384C  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 80276910 00273850  C0 E4 00 04 */	lfs f7, 4(r4)
/* 80276914 00273854  D0 E1 00 0C */	stfs f7, 0xc(r1)
/* 80276918 00273858  C0 C4 00 08 */	lfs f6, 8(r4)
/* 8027691C 0027385C  38 81 00 24 */	addi r4, r1, 0x24
/* 80276920 00273860  D0 C1 00 10 */	stfs f6, 0x10(r1)
/* 80276924 00273864  81 3F 00 C0 */	lwz r9, 0xc0(r31)
/* 80276928 00273868  C0 69 05 64 */	lfs f3, 0x564(r9)
/* 8027692C 0027386C  EC 64 00 F2 */	fmuls f3, f4, f3
/* 80276930 00273870  EC A5 00 F2 */	fmuls f5, f5, f3
/* 80276934 00273874  EC 87 00 F2 */	fmuls f4, f7, f3
/* 80276938 00273878  EC 66 00 F2 */	fmuls f3, f6, f3
/* 8027693C 0027387C  D0 A1 00 08 */	stfs f5, 8(r1)
/* 80276940 00273880  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 80276944 00273884  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 80276948 00273888  C0 69 00 4C */	lfs f3, 0x4c(r9)
/* 8027694C 0027388C  90 C1 00 38 */	stw r6, 0x38(r1)
/* 80276950 00273890  91 01 00 24 */	stw r8, 0x24(r1)
/* 80276954 00273894  90 E1 00 28 */	stw r7, 0x28(r1)
/* 80276958 00273898  D0 61 00 2C */	stfs f3, 0x2c(r1)
/* 8027695C 0027389C  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 80276960 002738A0  90 C1 00 34 */	stw r6, 0x34(r1)
/* 80276964 002738A4  90 C1 00 68 */	stw r6, 0x68(r1)
/* 80276968 002738A8  98 C1 00 98 */	stb r6, 0x98(r1)
/* 8027696C 002738AC  98 C1 00 3D */	stb r6, 0x3d(r1)
/* 80276970 002738B0  98 C1 00 3C */	stb r6, 0x3c(r1)
/* 80276974 002738B4  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 80276978 002738B8  98 C1 00 B4 */	stb r6, 0xb4(r1)
/* 8027697C 002738BC  90 C1 00 B8 */	stw r6, 0xb8(r1)
/* 80276980 002738C0  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80276984 002738C4  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80276988 002738C8  90 01 00 BC */	stw r0, 0xbc(r1)
/* 8027698C 002738CC  90 C1 00 70 */	stw r6, 0x70(r1)
/* 80276990 002738D0  98 C1 00 3E */	stb r6, 0x3e(r1)
/* 80276994 002738D4  93 E1 00 38 */	stw r31, 0x38(r1)
/* 80276998 002738D8  81 83 00 04 */	lwz r12, 4(r3)
/* 8027699C 002738DC  C0 25 00 54 */	lfs f1, 0x54(r5)
/* 802769A0 002738E0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802769A4 002738E4  7D 89 03 A6 */	mtctr r12
/* 802769A8 002738E8  4E 80 04 21 */	bctrl 
/* 802769AC 002738EC  80 01 00 68 */	lwz r0, 0x68(r1)
/* 802769B0 002738F0  28 00 00 00 */	cmplwi r0, 0
/* 802769B4 002738F4  40 82 00 10 */	bne .L_802769C4
/* 802769B8 002738F8  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 802769BC 002738FC  28 00 00 00 */	cmplwi r0, 0
/* 802769C0 00273900  41 82 00 10 */	beq .L_802769D0
.L_802769C4:
/* 802769C4 00273904  C0 1F 02 E4 */	lfs f0, 0x2e4(r31)
/* 802769C8 00273908  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 802769CC 0027390C  48 00 00 30 */	b .L_802769FC
.L_802769D0:
/* 802769D0 00273910  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802769D4 00273914  C0 42 CF B4 */	lfs f2, lbl_8051B314@sda21(r2)
/* 802769D8 00273918  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 802769DC 0027391C  C0 1F 02 E4 */	lfs f0, 0x2e4(r31)
/* 802769E0 00273920  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 802769E4 00273924  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802769E8 00273928  C0 1F 02 E4 */	lfs f0, 0x2e4(r31)
/* 802769EC 0027392C  C0 3F 02 E8 */	lfs f1, 0x2e8(r31)
/* 802769F0 00273930  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802769F4 00273934  40 81 00 08 */	ble .L_802769FC
/* 802769F8 00273938  D0 3F 02 E4 */	stfs f1, 0x2e4(r31)
.L_802769FC:
/* 802769FC 0027393C  C0 3F 02 E8 */	lfs f1, 0x2e8(r31)
/* 80276A00 00273940  C0 02 CF 98 */	lfs f0, lbl_8051B2F8@sda21(r2)
/* 80276A04 00273944  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80276A08 00273948  40 80 00 20 */	bge .L_80276A28
/* 80276A0C 0027394C  7F E3 FB 78 */	mr r3, r31
/* 80276A10 00273950  C0 02 CF EC */	lfs f0, lbl_8051B34C@sda21(r2)
/* 80276A14 00273954  81 9F 00 00 */	lwz r12, 0(r31)
/* 80276A18 00273958  EC 20 F8 2A */	fadds f1, f0, f31
/* 80276A1C 0027395C  81 8C 03 1C */	lwz r12, 0x31c(r12)
/* 80276A20 00273960  7D 89 03 A6 */	mtctr r12
/* 80276A24 00273964  4E 80 04 21 */	bctrl 
.L_80276A28:
/* 80276A28 00273968  C0 3F 02 E8 */	lfs f1, 0x2e8(r31)
/* 80276A2C 0027396C  C0 02 CF 98 */	lfs f0, lbl_8051B2F8@sda21(r2)
/* 80276A30 00273970  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80276A34 00273974  40 80 00 10 */	bge .L_80276A44
/* 80276A38 00273978  C0 02 CF 9C */	lfs f0, lbl_8051B2FC@sda21(r2)
/* 80276A3C 0027397C  EC 20 F8 2A */	fadds f1, f0, f31
/* 80276A40 00273980  48 00 00 08 */	b .L_80276A48
.L_80276A44:
/* 80276A44 00273984  FC 20 F8 90 */	fmr f1, f31
.L_80276A48:
/* 80276A48 00273988  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 80276A4C 0027398C  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80276A50 00273990  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 80276A54 00273994  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 80276A58 00273998  7C 08 03 A6 */	mtlr r0
/* 80276A5C 0027399C  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80276A60 002739A0  4E 80 00 20 */	blr 

.global stopEffectRadius__Q34Game4Tank3ObjFf
stopEffectRadius__Q34Game4Tank3ObjFf:
/* 80276A64 002739A4  4E 80 00 20 */	blr 

.global updateEmit__Q34Game4Tank3ObjFv
updateEmit__Q34Game4Tank3ObjFv:
/* 80276A68 002739A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80276A6C 002739AC  7C 08 02 A6 */	mflr r0
/* 80276A70 002739B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80276A74 002739B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80276A78 002739B8  7C 7F 1B 78 */	mr r31, r3
/* 80276A7C 002739BC  80 63 02 C0 */	lwz r3, 0x2c0(r3)
/* 80276A80 002739C0  48 1B 2E 21 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80276A84 002739C4  28 03 00 00 */	cmplwi r3, 0
/* 80276A88 002739C8  41 82 00 FC */	beq .L_80276B84
/* 80276A8C 002739CC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80276A90 002739D0  C0 22 CF 94 */	lfs f1, lbl_8051B2F4@sda21(r2)
/* 80276A94 002739D4  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 80276A98 002739D8  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80276A9C 002739DC  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 80276AA0 002739E0  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 80276AA4 002739E4  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 80276AA8 002739E8  C0 03 00 00 */	lfs f0, 0(r3)
/* 80276AAC 002739EC  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 80276AB0 002739F0  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80276AB4 002739F4  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80276AB8 002739F8  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 80276ABC 002739FC  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 80276AC0 00273A00  C0 7F 02 D8 */	lfs f3, 0x2d8(r31)
/* 80276AC4 00273A04  C0 5F 02 DC */	lfs f2, 0x2dc(r31)
/* 80276AC8 00273A08  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80276ACC 00273A0C  C0 9F 02 E0 */	lfs f4, 0x2e0(r31)
/* 80276AD0 00273A10  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80276AD4 00273A14  EC 84 01 32 */	fmuls f4, f4, f4
/* 80276AD8 00273A18  EC 00 10 2A */	fadds f0, f0, f2
/* 80276ADC 00273A1C  EC 04 00 2A */	fadds f0, f4, f0
/* 80276AE0 00273A20  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80276AE4 00273A24  40 81 00 20 */	ble .L_80276B04
/* 80276AE8 00273A28  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 80276AEC 00273A2C  EC 44 00 2A */	fadds f2, f4, f0
/* 80276AF0 00273A30  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80276AF4 00273A34  40 81 00 14 */	ble .L_80276B08
/* 80276AF8 00273A38  FC 00 10 34 */	frsqrte f0, f2
/* 80276AFC 00273A3C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80276B00 00273A40  48 00 00 08 */	b .L_80276B08
.L_80276B04:
/* 80276B04 00273A44  FC 40 08 90 */	fmr f2, f1
.L_80276B08:
/* 80276B08 00273A48  C0 02 CF 94 */	lfs f0, lbl_8051B2F4@sda21(r2)
/* 80276B0C 00273A4C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80276B10 00273A50  40 81 00 30 */	ble .L_80276B40
/* 80276B14 00273A54  C0 22 CF 98 */	lfs f1, lbl_8051B2F8@sda21(r2)
/* 80276B18 00273A58  C0 1F 02 D8 */	lfs f0, 0x2d8(r31)
/* 80276B1C 00273A5C  EC 21 10 24 */	fdivs f1, f1, f2
/* 80276B20 00273A60  EC 00 00 72 */	fmuls f0, f0, f1
/* 80276B24 00273A64  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 80276B28 00273A68  C0 1F 02 DC */	lfs f0, 0x2dc(r31)
/* 80276B2C 00273A6C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80276B30 00273A70  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80276B34 00273A74  C0 1F 02 E0 */	lfs f0, 0x2e0(r31)
/* 80276B38 00273A78  EC 00 00 72 */	fmuls f0, f0, f1
/* 80276B3C 00273A7C  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
.L_80276B40:
/* 80276B40 00273A80  C0 5F 02 D8 */	lfs f2, 0x2d8(r31)
/* 80276B44 00273A84  C0 22 CF E4 */	lfs f1, lbl_8051B344@sda21(r2)
/* 80276B48 00273A88  C0 7F 02 DC */	lfs f3, 0x2dc(r31)
/* 80276B4C 00273A8C  EC 42 00 72 */	fmuls f2, f2, f1
/* 80276B50 00273A90  C0 1F 02 CC */	lfs f0, 0x2cc(r31)
/* 80276B54 00273A94  EC 63 00 72 */	fmuls f3, f3, f1
/* 80276B58 00273A98  C0 9F 02 E0 */	lfs f4, 0x2e0(r31)
/* 80276B5C 00273A9C  EC 00 10 2A */	fadds f0, f0, f2
/* 80276B60 00273AA0  EC 63 08 28 */	fsubs f3, f3, f1
/* 80276B64 00273AA4  EC 84 00 72 */	fmuls f4, f4, f1
/* 80276B68 00273AA8  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 80276B6C 00273AAC  C0 1F 02 D0 */	lfs f0, 0x2d0(r31)
/* 80276B70 00273AB0  EC 00 18 2A */	fadds f0, f0, f3
/* 80276B74 00273AB4  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 80276B78 00273AB8  C0 1F 02 D4 */	lfs f0, 0x2d4(r31)
/* 80276B7C 00273ABC  EC 00 20 2A */	fadds f0, f0, f4
/* 80276B80 00273AC0  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
.L_80276B84:
/* 80276B84 00273AC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80276B88 00273AC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80276B8C 00273ACC  7C 08 03 A6 */	mtlr r0
/* 80276B90 00273AD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80276B94 00273AD4  4E 80 00 20 */	blr 

.global updateCaution__Q34Game4Tank3ObjFv
updateCaution__Q34Game4Tank3ObjFv:
/* 80276B98 00273AD8  80 83 01 E0 */	lwz r4, 0x1e0(r3)
/* 80276B9C 00273ADC  54 80 06 F7 */	rlwinm. r0, r4, 0, 0x1b, 0x1b
/* 80276BA0 00273AE0  40 82 00 18 */	bne .L_80276BB8
/* 80276BA4 00273AE4  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 80276BA8 00273AE8  40 82 00 10 */	bne .L_80276BB8
/* 80276BAC 00273AEC  80 03 01 F4 */	lwz r0, 0x1f4(r3)
/* 80276BB0 00273AF0  2C 00 00 00 */	cmpwi r0, 0
/* 80276BB4 00273AF4  41 82 00 0C */	beq .L_80276BC0
.L_80276BB8:
/* 80276BB8 00273AF8  C0 02 CF 94 */	lfs f0, lbl_8051B2F4@sda21(r2)
/* 80276BBC 00273AFC  D0 03 02 EC */	stfs f0, 0x2ec(r3)
.L_80276BC0:
/* 80276BC0 00273B00  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80276BC4 00273B04  C0 23 02 EC */	lfs f1, 0x2ec(r3)
/* 80276BC8 00273B08  C0 04 06 2C */	lfs f0, 0x62c(r4)
/* 80276BCC 00273B0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80276BD0 00273B10  4C 80 00 20 */	bgelr 
/* 80276BD4 00273B14  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80276BD8 00273B18  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 80276BDC 00273B1C  EC 01 00 2A */	fadds f0, f1, f0
/* 80276BE0 00273B20  D0 03 02 EC */	stfs f0, 0x2ec(r3)
/* 80276BE4 00273B24  4E 80 00 20 */	blr 

.global getViewAngle__Q34Game4Tank3ObjFv
getViewAngle__Q34Game4Tank3ObjFv:
/* 80276BE8 00273B28  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80276BEC 00273B2C  C0 23 02 EC */	lfs f1, 0x2ec(r3)
/* 80276BF0 00273B30  C0 04 06 2C */	lfs f0, 0x62c(r4)
/* 80276BF4 00273B34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80276BF8 00273B38  40 80 00 0C */	bge .L_80276C04
/* 80276BFC 00273B3C  C0 22 CF F0 */	lfs f1, lbl_8051B350@sda21(r2)
/* 80276C00 00273B40  4E 80 00 20 */	blr 
.L_80276C04:
/* 80276C04 00273B44  C0 24 04 24 */	lfs f1, 0x424(r4)
/* 80276C08 00273B48  4E 80 00 20 */	blr 

.global __dt__Q34Game4Tank3ObjFv
__dt__Q34Game4Tank3ObjFv:
/* 80276C0C 00273B4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80276C10 00273B50  7C 08 02 A6 */	mflr r0
/* 80276C14 00273B54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80276C18 00273B58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80276C1C 00273B5C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80276C20 00273B60  93 C1 00 08 */	stw r30, 8(r1)
/* 80276C24 00273B64  7C 9E 23 78 */	mr r30, r4
/* 80276C28 00273B68  41 82 00 84 */	beq .L_80276CAC
/* 80276C2C 00273B6C  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank3Obj@ha
/* 80276C30 00273B70  38 1F 03 08 */	addi r0, r31, 0x308
/* 80276C34 00273B74  38 83 6B 50 */	addi r4, r3, __vt__Q34Game4Tank3Obj@l
/* 80276C38 00273B78  90 9F 00 00 */	stw r4, 0(r31)
/* 80276C3C 00273B7C  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 80276C40 00273B80  38 84 03 28 */	addi r4, r4, 0x328
/* 80276C44 00273B84  90 7F 01 78 */	stw r3, 0x178(r31)
/* 80276C48 00273B88  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 80276C4C 00273B8C  90 83 00 00 */	stw r4, 0(r3)
/* 80276C50 00273B90  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 80276C54 00273B94  7C 03 00 50 */	subf r0, r3, r0
/* 80276C58 00273B98  90 03 00 0C */	stw r0, 0xc(r3)
/* 80276C5C 00273B9C  41 82 00 40 */	beq .L_80276C9C
/* 80276C60 00273BA0  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 80276C64 00273BA4  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 80276C68 00273BA8  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 80276C6C 00273BAC  38 7F 02 90 */	addi r3, r31, 0x290
/* 80276C70 00273BB0  90 9F 00 00 */	stw r4, 0(r31)
/* 80276C74 00273BB4  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 80276C78 00273BB8  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 80276C7C 00273BBC  38 80 FF FF */	li r4, -1
/* 80276C80 00273BC0  90 BF 01 78 */	stw r5, 0x178(r31)
/* 80276C84 00273BC4  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 80276C88 00273BC8  90 C5 00 00 */	stw r6, 0(r5)
/* 80276C8C 00273BCC  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 80276C90 00273BD0  7C 05 00 50 */	subf r0, r5, r0
/* 80276C94 00273BD4  90 05 00 0C */	stw r0, 0xc(r5)
/* 80276C98 00273BD8  48 19 A8 F1 */	bl __dt__5CNodeFv
.L_80276C9C:
/* 80276C9C 00273BDC  7F C0 07 35 */	extsh. r0, r30
/* 80276CA0 00273BE0  40 81 00 0C */	ble .L_80276CAC
/* 80276CA4 00273BE4  7F E3 FB 78 */	mr r3, r31
/* 80276CA8 00273BE8  4B DA D4 0D */	bl __dl__FPv
.L_80276CAC:
/* 80276CAC 00273BEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80276CB0 00273BF0  7F E3 FB 78 */	mr r3, r31
/* 80276CB4 00273BF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80276CB8 00273BF8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80276CBC 00273BFC  7C 08 03 A6 */	mtlr r0
/* 80276CC0 00273C00  38 21 00 10 */	addi r1, r1, 0x10
/* 80276CC4 00273C04  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q34Game4Tank3ObjFv
getDownSmokeScale__Q34Game4Tank3ObjFv:
/* 80276CC8 00273C08  C0 22 CF F4 */	lfs f1, lbl_8051B354@sda21(r2)
/* 80276CCC 00273C0C  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game4Tank3ObjFv
getEnemyTypeID__Q34Game4Tank3ObjFv:
/* 80276CD0 00273C10  38 60 00 18 */	li r3, 0x18
/* 80276CD4 00273C14  4E 80 00 20 */	blr 

.global createEffect__Q34Game4Tank3ObjFv
createEffect__Q34Game4Tank3ObjFv:
/* 80276CD8 00273C18  4E 80 00 20 */	blr 

.global "@776@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
"@776@12@viewOnPelletKilled__Q24Game9EnemyBaseFv":
/* 80276CDC 00273C1C  39 60 00 0C */	li r11, 0xc
/* 80276CE0 00273C20  7D 63 58 2E */	lwzx r11, r3, r11
/* 80276CE4 00273C24  7C 63 5A 14 */	add r3, r3, r11
/* 80276CE8 00273C28  38 63 FC F8 */	addi r3, r3, -776
/* 80276CEC 00273C2C  4B E8 FC 30 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv

.global "@776@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
"@776@12@viewStartCarryMotion__Q24Game9EnemyBaseFv":
/* 80276CF0 00273C30  39 60 00 0C */	li r11, 0xc
/* 80276CF4 00273C34  7D 63 58 2E */	lwzx r11, r3, r11
/* 80276CF8 00273C38  7C 63 5A 14 */	add r3, r3, r11
/* 80276CFC 00273C3C  38 63 FC F8 */	addi r3, r3, -776
/* 80276D00 00273C40  4B E8 F9 A8 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv

.global "@776@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
"@776@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv":
/* 80276D04 00273C44  39 60 00 0C */	li r11, 0xc
/* 80276D08 00273C48  7D 63 58 2E */	lwzx r11, r3, r11
/* 80276D0C 00273C4C  7C 63 5A 14 */	add r3, r3, r11
/* 80276D10 00273C50  38 63 FC F8 */	addi r3, r3, -776
/* 80276D14 00273C54  4B E8 F9 B4 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv

.global "@776@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
"@776@12@view_finish_carrymotion__Q24Game9EnemyBaseFv":
/* 80276D18 00273C58  39 60 00 0C */	li r11, 0xc
/* 80276D1C 00273C5C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80276D20 00273C60  7C 63 5A 14 */	add r3, r3, r11
/* 80276D24 00273C64  38 63 FC F8 */	addi r3, r3, -776
/* 80276D28 00273C68  4B E8 FD 50 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv

.global "@776@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
"@776@12@view_start_carrymotion__Q24Game9EnemyBaseFv":
/* 80276D2C 00273C6C  39 60 00 0C */	li r11, 0xc
/* 80276D30 00273C70  7D 63 58 2E */	lwzx r11, r3, r11
/* 80276D34 00273C74  7C 63 5A 14 */	add r3, r3, r11
/* 80276D38 00273C78  38 63 FC F8 */	addi r3, r3, -776
/* 80276D3C 00273C7C  4B E8 FD 10 */	b view_start_carrymotion__Q24Game9EnemyBaseFv

.global "@776@12@viewGetShape__Q24Game9EnemyBaseFv"
"@776@12@viewGetShape__Q24Game9EnemyBaseFv":
/* 80276D40 00273C80  39 60 00 0C */	li r11, 0xc
/* 80276D44 00273C84  7D 63 58 2E */	lwzx r11, r3, r11
/* 80276D48 00273C88  7C 63 5A 14 */	add r3, r3, r11
/* 80276D4C 00273C8C  38 63 FC F8 */	addi r3, r3, -776
/* 80276D50 00273C90  4B E8 F9 50 */	b viewGetShape__Q24Game9EnemyBaseFv
