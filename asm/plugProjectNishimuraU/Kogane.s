.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_804853D8, local
	.4byte 0x00000001
	.4byte 0x00000001
	.4byte 0x00000001
.endobj lbl_804853D8

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game6Kogane3Obj, global
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
	.4byte __dt__Q34Game6Kogane3ObjFv
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
	.4byte 0
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
	.4byte getEnemyTypeID__Q34Game6Kogane3ObjFv
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
	.4byte createItem__Q34Game6Kogane3ObjFv
	.4byte resetFartTimer__Q34Game6Kogane3ObjFv
	.4byte startBodyEffect__Q34Game6Kogane3ObjFv
	.4byte finishBodyEffect__Q34Game6Kogane3ObjFv
	.4byte createFartEffect__Q34Game6Kogane3ObjFv
	.4byte effectDrawOn__Q34Game6Kogane3ObjFv
	.4byte effectDrawOff__Q34Game6Kogane3ObjFv
	.4byte createPressSENormal__Q34Game6Kogane3ObjFv
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
.endobj __vt__Q34Game6Kogane3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051AC28, local
	.float 1.0E-4
.endobj lbl_8051AC28
.obj lbl_8051AC2C, local
	.float 0.0
.endobj lbl_8051AC2C
.obj lbl_8051AC30, local
	.float -12800.0
.endobj lbl_8051AC30
.obj lbl_8051AC34, local
	.float 5.0
.endobj lbl_8051AC34
.obj lbl_8051AC38, local
	.float 1.0
.endobj lbl_8051AC38
.obj lbl_8051AC3C, local
	.float 15.0
.endobj lbl_8051AC3C
.balign 4
.obj lbl_8051AC40, local
	.asciz "body"
.endobj lbl_8051AC40
.balign 4
.obj lbl_8051AC48, local
	.float 10.0
.endobj lbl_8051AC48
.obj lbl_8051AC4C, local
	.float 1000.0
.endobj lbl_8051AC4C
.obj lbl_8051AC50, local
	.float 0.1
.endobj lbl_8051AC50
.obj lbl_8051AC54, local
	.float 2.0
.endobj lbl_8051AC54
.obj lbl_8051AC58, local
	.float 32768.0
.endobj lbl_8051AC58
.obj lbl_8051AC5C, local # pi
	.float 3.1415927
.endobj lbl_8051AC5C
.obj lbl_8051AC60, local
	.float 0.0055555557
.endobj lbl_8051AC60
.obj lbl_8051AC64, local
	.float -325.9493
.endobj lbl_8051AC64
.obj lbl_8051AC68, local
	.float 325.9493
.endobj lbl_8051AC68
.balign 8
.obj lbl_8051AC70, local
	.8byte 0x4330000080000000
.endobj lbl_8051AC70
.obj lbl_8051AC78, local
	.float 250.0
.endobj lbl_8051AC78
.obj lbl_8051AC7C, local
	.float 12800.0
.endobj lbl_8051AC7C
.obj lbl_8051AC80, local
	.float 2.0943952
.endobj lbl_8051AC80
.obj lbl_8051AC84, local
	.float 50.0
.endobj lbl_8051AC84

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game6Kogane3ObjFv, global
/* 8025DC8C 0025ABCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025DC90 0025ABD0  7C 08 02 A6 */	mflr r0
/* 8025DC94 0025ABD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025DC98 0025ABD8  7C 80 07 35 */	extsh. r0, r4
/* 8025DC9C 0025ABDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025DCA0 0025ABE0  7C 7F 1B 78 */	mr r31, r3
/* 8025DCA4 0025ABE4  93 C1 00 08 */	stw r30, 8(r1)
/* 8025DCA8 0025ABE8  41 82 00 24 */	beq .L_8025DCCC
/* 8025DCAC 0025ABEC  38 1F 02 DC */	addi r0, r31, 0x2dc
/* 8025DCB0 0025ABF0  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8025DCB4 0025ABF4  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8025DCB8 0025ABF8  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8025DCBC 0025ABFC  38 00 00 00 */	li r0, 0
/* 8025DCC0 0025AC00  90 7F 02 DC */	stw r3, 0x2dc(r31)
/* 8025DCC4 0025AC04  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 8025DCC8 0025AC08  90 1F 02 E4 */	stw r0, 0x2e4(r31)
.L_8025DCCC:
/* 8025DCCC 0025AC0C  7F E3 FB 78 */	mr r3, r31
/* 8025DCD0 0025AC10  38 80 00 00 */	li r4, 0
/* 8025DCD4 0025AC14  4B EA 36 CD */	bl __ct__Q24Game9EnemyBaseFv
/* 8025DCD8 0025AC18  3C 60 80 4C */	lis r3, __vt__Q34Game6Kogane3Obj@ha
/* 8025DCDC 0025AC1C  38 1F 02 DC */	addi r0, r31, 0x2dc
/* 8025DCE0 0025AC20  38 A3 30 A8 */	addi r5, r3, __vt__Q34Game6Kogane3Obj@l
/* 8025DCE4 0025AC24  38 60 00 2C */	li r3, 0x2c
/* 8025DCE8 0025AC28  90 BF 00 00 */	stw r5, 0(r31)
/* 8025DCEC 0025AC2C  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8025DCF0 0025AC30  38 A5 03 20 */	addi r5, r5, 0x320
/* 8025DCF4 0025AC34  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8025DCF8 0025AC38  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8025DCFC 0025AC3C  90 A4 00 00 */	stw r5, 0(r4)
/* 8025DD00 0025AC40  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8025DD04 0025AC44  7C 04 00 50 */	subf r0, r4, r0
/* 8025DD08 0025AC48  90 04 00 0C */	stw r0, 0xc(r4)
/* 8025DD0C 0025AC4C  4B DC 61 99 */	bl __nw__FUl
/* 8025DD10 0025AC50  7C 7E 1B 79 */	or. r30, r3, r3
/* 8025DD14 0025AC54  41 82 00 44 */	beq .L_8025DD58
/* 8025DD18 0025AC58  4B EC 9C 5D */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8025DD1C 0025AC5C  3C 60 80 4C */	lis r3, __vt__Q34Game6Kogane14ProperAnimator@ha
/* 8025DD20 0025AC60  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8025DD24 0025AC64  38 03 33 F8 */	addi r0, r3, __vt__Q34Game6Kogane14ProperAnimator@l
/* 8025DD28 0025AC68  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8025DD2C 0025AC6C  90 1E 00 00 */	stw r0, 0(r30)
/* 8025DD30 0025AC70  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8025DD34 0025AC74  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8025DD38 0025AC78  38 00 00 00 */	li r0, 0
/* 8025DD3C 0025AC7C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8025DD40 0025AC80  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8025DD44 0025AC84  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8025DD48 0025AC88  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8025DD4C 0025AC8C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8025DD50 0025AC90  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8025DD54 0025AC94  90 1E 00 20 */	stw r0, 0x20(r30)
.L_8025DD58:
/* 8025DD58 0025AC98  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8025DD5C 0025AC9C  38 60 00 1C */	li r3, 0x1c
/* 8025DD60 0025ACA0  4B DC 61 45 */	bl __nw__FUl
/* 8025DD64 0025ACA4  7C 64 1B 79 */	or. r4, r3, r3
/* 8025DD68 0025ACA8  41 82 00 24 */	beq .L_8025DD8C
/* 8025DD6C 0025ACAC  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8025DD70 0025ACB0  3C 60 80 4C */	lis r3, __vt__Q34Game6Kogane3FSM@ha
/* 8025DD74 0025ACB4  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8025DD78 0025ACB8  38 A0 FF FF */	li r5, -1
/* 8025DD7C 0025ACBC  90 04 00 00 */	stw r0, 0(r4)
/* 8025DD80 0025ACC0  38 03 2F 98 */	addi r0, r3, __vt__Q34Game6Kogane3FSM@l
/* 8025DD84 0025ACC4  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8025DD88 0025ACC8  90 04 00 00 */	stw r0, 0(r4)
.L_8025DD8C:
/* 8025DD8C 0025ACCC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025DD90 0025ACD0  7F E3 FB 78 */	mr r3, r31
/* 8025DD94 0025ACD4  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8025DD98 0025ACD8  7D 89 03 A6 */	mtctr r12
/* 8025DD9C 0025ACDC  4E 80 04 21 */	bctrl 
/* 8025DDA0 0025ACE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025DDA4 0025ACE4  7F E3 FB 78 */	mr r3, r31
/* 8025DDA8 0025ACE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025DDAC 0025ACEC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8025DDB0 0025ACF0  7C 08 03 A6 */	mtlr r0
/* 8025DDB4 0025ACF4  38 21 00 10 */	addi r1, r1, 0x10
/* 8025DDB8 0025ACF8  4E 80 00 20 */	blr 
.endfn __ct__Q34Game6Kogane3ObjFv

.fn setInitialSetting__Q34Game6Kogane3ObjFPQ24Game21EnemyInitialParamBase, global
/* 8025DDBC 0025ACFC  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game6Kogane3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game6Kogane3ObjFPQ24Game15CreatureInitArg, global
/* 8025DDC0 0025AD00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025DDC4 0025AD04  7C 08 02 A6 */	mflr r0
/* 8025DDC8 0025AD08  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025DDCC 0025AD0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025DDD0 0025AD10  7C 7F 1B 78 */	mr r31, r3
/* 8025DDD4 0025AD14  4B EA 3C 85 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8025DDD8 0025AD18  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025DDDC 0025AD1C  7F E3 FB 78 */	mr r3, r31
/* 8025DDE0 0025AD20  60 00 00 01 */	ori r0, r0, 1
/* 8025DDE4 0025AD24  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025DDE8 0025AD28  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025DDEC 0025AD2C  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 8025DDF0 0025AD30  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025DDF4 0025AD34  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025DDF8 0025AD38  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 8025DDFC 0025AD3C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025DE00 0025AD40  4B EA 3C 09 */	bl setEmotionNone__Q24Game9EnemyBaseFv
/* 8025DE04 0025AD44  C0 02 C8 C8 */	lfs f0, lbl_8051AC28@sda21(r2)
/* 8025DE08 0025AD48  D0 1F 01 F8 */	stfs f0, 0x1f8(r31)
/* 8025DE0C 0025AD4C  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 8025DE10 0025AD50  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 8025DE14 0025AD54  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 8025DE18 0025AD58  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8025DE1C 0025AD5C  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 8025DE20 0025AD60  80 63 00 00 */	lwz r3, 0(r3)
/* 8025DE24 0025AD64  4B ED 9F E9 */	bl setScale__8CollPartFf
/* 8025DE28 0025AD68  38 00 00 00 */	li r0, 0
/* 8025DE2C 0025AD6C  7F E3 FB 78 */	mr r3, r31
/* 8025DE30 0025AD70  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 8025DE34 0025AD74  48 00 09 A1 */	bl resetAppearTimer__Q34Game6Kogane3ObjFv
/* 8025DE38 0025AD78  C0 22 C8 CC */	lfs f1, lbl_8051AC2C@sda21(r2)
/* 8025DE3C 0025AD7C  7F E3 FB 78 */	mr r3, r31
/* 8025DE40 0025AD80  FC 40 08 90 */	fmr f2, f1
/* 8025DE44 0025AD84  48 00 0A 89 */	bl resetMoveTimer__Q34Game6Kogane3ObjFff
/* 8025DE48 0025AD88  C0 02 C8 C8 */	lfs f0, lbl_8051AC28@sda21(r2)
/* 8025DE4C 0025AD8C  7F E3 FB 78 */	mr r3, r31
/* 8025DE50 0025AD90  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 8025DE54 0025AD94  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025DE58 0025AD98  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 8025DE5C 0025AD9C  7D 89 03 A6 */	mtctr r12
/* 8025DE60 0025ADA0  4E 80 04 21 */	bctrl 
/* 8025DE64 0025ADA4  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8025DE68 0025ADA8  7F E4 FB 78 */	mr r4, r31
/* 8025DE6C 0025ADAC  38 A0 00 00 */	li r5, 0
/* 8025DE70 0025ADB0  38 C0 00 00 */	li r6, 0
/* 8025DE74 0025ADB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8025DE78 0025ADB8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8025DE7C 0025ADBC  7D 89 03 A6 */	mtctr r12
/* 8025DE80 0025ADC0  4E 80 04 21 */	bctrl 
/* 8025DE84 0025ADC4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8025DE88 0025ADC8  28 03 00 00 */	cmplwi r3, 0
/* 8025DE8C 0025ADCC  41 82 00 3C */	beq .L_8025DEC8
/* 8025DE90 0025ADD0  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8025DE94 0025ADD4  2C 00 00 04 */	cmpwi r0, 4
/* 8025DE98 0025ADD8  40 82 00 30 */	bne .L_8025DEC8
/* 8025DE9C 0025ADDC  C0 02 C8 D0 */	lfs f0, lbl_8051AC30@sda21(r2)
/* 8025DEA0 0025ADE0  7F E4 FB 78 */	mr r4, r31
/* 8025DEA4 0025ADE4  38 A0 00 02 */	li r5, 2
/* 8025DEA8 0025ADE8  38 C0 00 00 */	li r6, 0
/* 8025DEAC 0025ADEC  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8025DEB0 0025ADF0  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8025DEB4 0025ADF4  81 83 00 00 */	lwz r12, 0(r3)
/* 8025DEB8 0025ADF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8025DEBC 0025ADFC  7D 89 03 A6 */	mtctr r12
/* 8025DEC0 0025AE00  4E 80 04 21 */	bctrl 
/* 8025DEC4 0025AE04  48 00 00 18 */	b .L_8025DEDC
.L_8025DEC8:
/* 8025DEC8 0025AE08  7F E3 FB 78 */	mr r3, r31
/* 8025DECC 0025AE0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025DED0 0025AE10  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 8025DED4 0025AE14  7D 89 03 A6 */	mtctr r12
/* 8025DED8 0025AE18  4E 80 04 21 */	bctrl 
.L_8025DEDC:
/* 8025DEDC 0025AE1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025DEE0 0025AE20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025DEE4 0025AE24  7C 08 03 A6 */	mtlr r0
/* 8025DEE8 0025AE28  38 21 00 10 */	addi r1, r1, 0x10
/* 8025DEEC 0025AE2C  4E 80 00 20 */	blr 
.endfn onInit__Q34Game6Kogane3ObjFPQ24Game15CreatureInitArg

.fn resetFartTimer__Q34Game6Kogane3ObjFv, weak
/* 8025DEF0 0025AE30  4E 80 00 20 */	blr 
.endfn resetFartTimer__Q34Game6Kogane3ObjFv

.fn onKill__Q34Game6Kogane3ObjFPQ24Game15CreatureKillArg, global
/* 8025DEF4 0025AE34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025DEF8 0025AE38  7C 08 02 A6 */	mflr r0
/* 8025DEFC 0025AE3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025DF00 0025AE40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025DF04 0025AE44  7C 9F 23 78 */	mr r31, r4
/* 8025DF08 0025AE48  93 C1 00 08 */	stw r30, 8(r1)
/* 8025DF0C 0025AE4C  7C 7E 1B 78 */	mr r30, r3
/* 8025DF10 0025AE50  81 83 00 00 */	lwz r12, 0(r3)
/* 8025DF14 0025AE54  81 8C 03 08 */	lwz r12, 0x308(r12)
/* 8025DF18 0025AE58  7D 89 03 A6 */	mtctr r12
/* 8025DF1C 0025AE5C  4E 80 04 21 */	bctrl 
/* 8025DF20 0025AE60  7F C3 F3 78 */	mr r3, r30
/* 8025DF24 0025AE64  7F E4 FB 78 */	mr r4, r31
/* 8025DF28 0025AE68  4B EA 3F C1 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 8025DF2C 0025AE6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025DF30 0025AE70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025DF34 0025AE74  83 C1 00 08 */	lwz r30, 8(r1)
/* 8025DF38 0025AE78  7C 08 03 A6 */	mtlr r0
/* 8025DF3C 0025AE7C  38 21 00 10 */	addi r1, r1, 0x10
/* 8025DF40 0025AE80  4E 80 00 20 */	blr 
.endfn onKill__Q34Game6Kogane3ObjFPQ24Game15CreatureKillArg

.fn doUpdate__Q34Game6Kogane3ObjFv, global
/* 8025DF44 0025AE84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025DF48 0025AE88  7C 08 02 A6 */	mflr r0
/* 8025DF4C 0025AE8C  7C 64 1B 78 */	mr r4, r3
/* 8025DF50 0025AE90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025DF54 0025AE94  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8025DF58 0025AE98  81 83 00 00 */	lwz r12, 0(r3)
/* 8025DF5C 0025AE9C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8025DF60 0025AEA0  7D 89 03 A6 */	mtctr r12
/* 8025DF64 0025AEA4  4E 80 04 21 */	bctrl 
/* 8025DF68 0025AEA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025DF6C 0025AEAC  7C 08 03 A6 */	mtlr r0
/* 8025DF70 0025AEB0  38 21 00 10 */	addi r1, r1, 0x10
/* 8025DF74 0025AEB4  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game6Kogane3ObjFv

.fn doUpdateCommon__Q34Game6Kogane3ObjFv, global
/* 8025DF78 0025AEB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025DF7C 0025AEBC  7C 08 02 A6 */	mflr r0
/* 8025DF80 0025AEC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025DF84 0025AEC4  4B EA 4F 91 */	bl doUpdateCommon__Q24Game9EnemyBaseFv
/* 8025DF88 0025AEC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025DF8C 0025AECC  7C 08 03 A6 */	mtlr r0
/* 8025DF90 0025AED0  38 21 00 10 */	addi r1, r1, 0x10
/* 8025DF94 0025AED4  4E 80 00 20 */	blr 
.endfn doUpdateCommon__Q34Game6Kogane3ObjFv

.fn doDirectDraw__Q34Game6Kogane3ObjFR8Graphics, global
/* 8025DF98 0025AED8  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game6Kogane3ObjFR8Graphics

.fn doDebugDraw__Q34Game6Kogane3ObjFR8Graphics, global
/* 8025DF9C 0025AEDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025DFA0 0025AEE0  7C 08 02 A6 */	mflr r0
/* 8025DFA4 0025AEE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025DFA8 0025AEE8  4B EA 7E C5 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 8025DFAC 0025AEEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025DFB0 0025AEF0  7C 08 03 A6 */	mtlr r0
/* 8025DFB4 0025AEF4  38 21 00 10 */	addi r1, r1, 0x10
/* 8025DFB8 0025AEF8  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game6Kogane3ObjFR8Graphics

.fn setFSM__Q34Game6Kogane3ObjFPQ34Game6Kogane3FSM, global
/* 8025DFBC 0025AEFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025DFC0 0025AF00  7C 08 02 A6 */	mflr r0
/* 8025DFC4 0025AF04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025DFC8 0025AF08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025DFCC 0025AF0C  7C 7F 1B 78 */	mr r31, r3
/* 8025DFD0 0025AF10  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 8025DFD4 0025AF14  7F E4 FB 78 */	mr r4, r31
/* 8025DFD8 0025AF18  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8025DFDC 0025AF1C  81 83 00 00 */	lwz r12, 0(r3)
/* 8025DFE0 0025AF20  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025DFE4 0025AF24  7D 89 03 A6 */	mtctr r12
/* 8025DFE8 0025AF28  4E 80 04 21 */	bctrl 
/* 8025DFEC 0025AF2C  38 00 00 00 */	li r0, 0
/* 8025DFF0 0025AF30  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8025DFF4 0025AF34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025DFF8 0025AF38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025DFFC 0025AF3C  7C 08 03 A6 */	mtlr r0
/* 8025E000 0025AF40  38 21 00 10 */	addi r1, r1, 0x10
/* 8025E004 0025AF44  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game6Kogane3ObjFPQ34Game6Kogane3FSM

.fn getShadowParam__Q34Game6Kogane3ObjFRQ24Game11ShadowParam, global
/* 8025E008 0025AF48  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8025E00C 0025AF4C  7C 08 02 A6 */	mflr r0
/* 8025E010 0025AF50  90 01 00 24 */	stw r0, 0x24(r1)
/* 8025E014 0025AF54  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8025E018 0025AF58  7C 9F 23 78 */	mr r31, r4
/* 8025E01C 0025AF5C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8025E020 0025AF60  7C 7E 1B 78 */	mr r30, r3
/* 8025E024 0025AF64  7F C4 F3 78 */	mr r4, r30
/* 8025E028 0025AF68  38 61 00 08 */	addi r3, r1, 8
/* 8025E02C 0025AF6C  48 00 04 7D */	bl getBodyJointPos__Q34Game6Kogane3ObjFv
/* 8025E030 0025AF70  C0 01 00 08 */	lfs f0, 8(r1)
/* 8025E034 0025AF74  C0 62 C8 D4 */	lfs f3, lbl_8051AC34@sda21(r2)
/* 8025E038 0025AF78  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8025E03C 0025AF7C  C0 22 C8 CC */	lfs f1, lbl_8051AC2C@sda21(r2)
/* 8025E040 0025AF80  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8025E044 0025AF84  C0 02 C8 D8 */	lfs f0, lbl_8051AC38@sda21(r2)
/* 8025E048 0025AF88  D0 5F 00 04 */	stfs f2, 4(r31)
/* 8025E04C 0025AF8C  C0 42 C8 DC */	lfs f2, lbl_8051AC3C@sda21(r2)
/* 8025E050 0025AF90  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 8025E054 0025AF94  D0 9F 00 08 */	stfs f4, 8(r31)
/* 8025E058 0025AF98  C0 9F 00 04 */	lfs f4, 4(r31)
/* 8025E05C 0025AF9C  EC 64 18 28 */	fsubs f3, f4, f3
/* 8025E060 0025AFA0  D0 7F 00 04 */	stfs f3, 4(r31)
/* 8025E064 0025AFA4  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 8025E068 0025AFA8  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8025E06C 0025AFAC  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 8025E070 0025AFB0  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8025E074 0025AFB4  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8025E078 0025AFB8  EC 01 00 28 */	fsubs f0, f1, f0
/* 8025E07C 0025AFBC  EC 02 00 2A */	fadds f0, f2, f0
/* 8025E080 0025AFC0  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 8025E084 0025AFC4  C0 1E 02 CC */	lfs f0, 0x2cc(r30)
/* 8025E088 0025AFC8  EC 02 00 32 */	fmuls f0, f2, f0
/* 8025E08C 0025AFCC  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8025E090 0025AFD0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8025E094 0025AFD4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8025E098 0025AFD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8025E09C 0025AFDC  7C 08 03 A6 */	mtlr r0
/* 8025E0A0 0025AFE0  38 21 00 20 */	addi r1, r1, 0x20
/* 8025E0A4 0025AFE4  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game6Kogane3ObjFRQ24Game11ShadowParam

.fn pressCallBack__Q34Game6Kogane3ObjFPQ24Game8CreaturefP8CollPart, global
/* 8025E0A8 0025AFE8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8025E0AC 0025AFEC  7C 08 02 A6 */	mflr r0
/* 8025E0B0 0025AFF0  28 04 00 00 */	cmplwi r4, 0
/* 8025E0B4 0025AFF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8025E0B8 0025AFF8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8025E0BC 0025AFFC  FF E0 08 90 */	fmr f31, f1
/* 8025E0C0 0025B000  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8025E0C4 0025B004  7C 7F 1B 78 */	mr r31, r3
/* 8025E0C8 0025B008  41 82 00 30 */	beq .L_8025E0F8
/* 8025E0CC 0025B00C  7C 83 23 78 */	mr r3, r4
/* 8025E0D0 0025B010  81 84 00 00 */	lwz r12, 0(r4)
/* 8025E0D4 0025B014  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8025E0D8 0025B018  7D 89 03 A6 */	mtctr r12
/* 8025E0DC 0025B01C  4E 80 04 21 */	bctrl 
/* 8025E0E0 0025B020  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025E0E4 0025B024  41 82 00 14 */	beq .L_8025E0F8
/* 8025E0E8 0025B028  FC 20 F8 90 */	fmr f1, f31
/* 8025E0EC 0025B02C  7F E3 FB 78 */	mr r3, r31
/* 8025E0F0 0025B030  48 00 02 2D */	bl transitDamageState__Q34Game6Kogane3ObjFf
/* 8025E0F4 0025B034  48 00 00 08 */	b .L_8025E0FC
.L_8025E0F8:
/* 8025E0F8 0025B038  38 60 00 00 */	li r3, 0
.L_8025E0FC:
/* 8025E0FC 0025B03C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8025E100 0025B040  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8025E104 0025B044  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8025E108 0025B048  7C 08 03 A6 */	mtlr r0
/* 8025E10C 0025B04C  38 21 00 20 */	addi r1, r1, 0x20
/* 8025E110 0025B050  4E 80 00 20 */	blr 
.endfn pressCallBack__Q34Game6Kogane3ObjFPQ24Game8CreaturefP8CollPart

.fn wallCallback__Q34Game6Kogane3ObjFRCQ24Game8MoveInfo, global
/* 8025E114 0025B054  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8025E118 0025B058  7C 08 02 A6 */	mflr r0
/* 8025E11C 0025B05C  C0 44 00 5C */	lfs f2, 0x5c(r4)
/* 8025E120 0025B060  90 01 00 24 */	stw r0, 0x24(r1)
/* 8025E124 0025B064  C0 24 00 60 */	lfs f1, 0x60(r4)
/* 8025E128 0025B068  C0 04 00 64 */	lfs f0, 0x64(r4)
/* 8025E12C 0025B06C  38 81 00 08 */	addi r4, r1, 8
/* 8025E130 0025B070  D0 41 00 08 */	stfs f2, 8(r1)
/* 8025E134 0025B074  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8025E138 0025B078  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8025E13C 0025B07C  48 00 04 ED */	bl "setTargetPosition__Q34Game6Kogane3ObjFP10Vector3<f>"
/* 8025E140 0025B080  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8025E144 0025B084  7C 08 03 A6 */	mtlr r0
/* 8025E148 0025B088  38 21 00 20 */	addi r1, r1, 0x20
/* 8025E14C 0025B08C  4E 80 00 20 */	blr 
.endfn wallCallback__Q34Game6Kogane3ObjFRCQ24Game8MoveInfo

.fn earthquakeCallBack__Q34Game6Kogane3ObjFPQ24Game8Creaturef, global
/* 8025E150 0025B090  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025E154 0025B094  7C 08 02 A6 */	mflr r0
/* 8025E158 0025B098  28 04 00 00 */	cmplwi r4, 0
/* 8025E15C 0025B09C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025E160 0025B0A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025E164 0025B0A4  7C 7F 1B 78 */	mr r31, r3
/* 8025E168 0025B0A8  41 82 00 30 */	beq .L_8025E198
/* 8025E16C 0025B0AC  7C 83 23 78 */	mr r3, r4
/* 8025E170 0025B0B0  81 84 00 00 */	lwz r12, 0(r4)
/* 8025E174 0025B0B4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8025E178 0025B0B8  7D 89 03 A6 */	mtctr r12
/* 8025E17C 0025B0BC  4E 80 04 21 */	bctrl 
/* 8025E180 0025B0C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025E184 0025B0C4  41 82 00 14 */	beq .L_8025E198
/* 8025E188 0025B0C8  C0 22 C8 CC */	lfs f1, lbl_8051AC2C@sda21(r2)
/* 8025E18C 0025B0CC  7F E3 FB 78 */	mr r3, r31
/* 8025E190 0025B0D0  48 00 01 8D */	bl transitDamageState__Q34Game6Kogane3ObjFf
/* 8025E194 0025B0D4  48 00 00 08 */	b .L_8025E19C
.L_8025E198:
/* 8025E198 0025B0D8  38 60 00 00 */	li r3, 0
.L_8025E19C:
/* 8025E19C 0025B0DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025E1A0 0025B0E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025E1A4 0025B0E4  7C 08 03 A6 */	mtlr r0
/* 8025E1A8 0025B0E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8025E1AC 0025B0EC  4E 80 00 20 */	blr 
.endfn earthquakeCallBack__Q34Game6Kogane3ObjFPQ24Game8Creaturef

.fn hipdropCallBack__Q34Game6Kogane3ObjFPQ24Game8CreaturefP8CollPart, global
/* 8025E1B0 0025B0F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8025E1B4 0025B0F4  7C 08 02 A6 */	mflr r0
/* 8025E1B8 0025B0F8  28 04 00 00 */	cmplwi r4, 0
/* 8025E1BC 0025B0FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8025E1C0 0025B100  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8025E1C4 0025B104  FF E0 08 90 */	fmr f31, f1
/* 8025E1C8 0025B108  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8025E1CC 0025B10C  7C 7F 1B 78 */	mr r31, r3
/* 8025E1D0 0025B110  41 82 00 30 */	beq .L_8025E200
/* 8025E1D4 0025B114  7C 83 23 78 */	mr r3, r4
/* 8025E1D8 0025B118  81 84 00 00 */	lwz r12, 0(r4)
/* 8025E1DC 0025B11C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8025E1E0 0025B120  7D 89 03 A6 */	mtctr r12
/* 8025E1E4 0025B124  4E 80 04 21 */	bctrl 
/* 8025E1E8 0025B128  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025E1EC 0025B12C  41 82 00 14 */	beq .L_8025E200
/* 8025E1F0 0025B130  FC 20 F8 90 */	fmr f1, f31
/* 8025E1F4 0025B134  7F E3 FB 78 */	mr r3, r31
/* 8025E1F8 0025B138  48 00 01 25 */	bl transitDamageState__Q34Game6Kogane3ObjFf
/* 8025E1FC 0025B13C  48 00 00 08 */	b .L_8025E204
.L_8025E200:
/* 8025E200 0025B140  38 60 00 00 */	li r3, 0
.L_8025E204:
/* 8025E204 0025B144  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8025E208 0025B148  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8025E20C 0025B14C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8025E210 0025B150  7C 08 03 A6 */	mtlr r0
/* 8025E214 0025B154  38 21 00 20 */	addi r1, r1, 0x20
/* 8025E218 0025B158  4E 80 00 20 */	blr 
.endfn hipdropCallBack__Q34Game6Kogane3ObjFPQ24Game8CreaturefP8CollPart

.fn doStartStoneState__Q34Game6Kogane3ObjFv, global
/* 8025E21C 0025B15C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025E220 0025B160  7C 08 02 A6 */	mflr r0
/* 8025E224 0025B164  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025E228 0025B168  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025E22C 0025B16C  7C 7F 1B 78 */	mr r31, r3
/* 8025E230 0025B170  4B EA 4C C5 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 8025E234 0025B174  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025E238 0025B178  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 8025E23C 0025B17C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025E240 0025B180  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025E244 0025B184  60 00 01 00 */	ori r0, r0, 0x100
/* 8025E248 0025B188  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025E24C 0025B18C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025E250 0025B190  60 00 08 00 */	ori r0, r0, 0x800
/* 8025E254 0025B194  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025E258 0025B198  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025E25C 0025B19C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025E260 0025B1A0  7C 08 03 A6 */	mtlr r0
/* 8025E264 0025B1A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8025E268 0025B1A8  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game6Kogane3ObjFv

.fn doFinishStoneState__Q34Game6Kogane3ObjFv, global
/* 8025E26C 0025B1AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025E270 0025B1B0  7C 08 02 A6 */	mflr r0
/* 8025E274 0025B1B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025E278 0025B1B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025E27C 0025B1BC  7C 7F 1B 78 */	mr r31, r3
/* 8025E280 0025B1C0  4B EA 4C 89 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 8025E284 0025B1C4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025E288 0025B1C8  60 00 00 01 */	ori r0, r0, 1
/* 8025E28C 0025B1CC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025E290 0025B1D0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025E294 0025B1D4  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 8025E298 0025B1D8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025E29C 0025B1DC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025E2A0 0025B1E0  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 8025E2A4 0025B1E4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025E2A8 0025B1E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025E2AC 0025B1EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025E2B0 0025B1F0  7C 08 03 A6 */	mtlr r0
/* 8025E2B4 0025B1F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8025E2B8 0025B1F8  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game6Kogane3ObjFv

.fn doStartMovie__Q34Game6Kogane3ObjFv, global
/* 8025E2BC 0025B1FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025E2C0 0025B200  7C 08 02 A6 */	mflr r0
/* 8025E2C4 0025B204  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025E2C8 0025B208  81 83 00 00 */	lwz r12, 0(r3)
/* 8025E2CC 0025B20C  81 8C 03 14 */	lwz r12, 0x314(r12)
/* 8025E2D0 0025B210  7D 89 03 A6 */	mtctr r12
/* 8025E2D4 0025B214  4E 80 04 21 */	bctrl 
/* 8025E2D8 0025B218  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025E2DC 0025B21C  7C 08 03 A6 */	mtlr r0
/* 8025E2E0 0025B220  38 21 00 10 */	addi r1, r1, 0x10
/* 8025E2E4 0025B224  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game6Kogane3ObjFv

.fn effectDrawOff__Q34Game6Kogane3ObjFv, weak
/* 8025E2E8 0025B228  4E 80 00 20 */	blr 
.endfn effectDrawOff__Q34Game6Kogane3ObjFv

.fn doEndMovie__Q34Game6Kogane3ObjFv, global
/* 8025E2EC 0025B22C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025E2F0 0025B230  7C 08 02 A6 */	mflr r0
/* 8025E2F4 0025B234  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025E2F8 0025B238  81 83 00 00 */	lwz r12, 0(r3)
/* 8025E2FC 0025B23C  81 8C 03 10 */	lwz r12, 0x310(r12)
/* 8025E300 0025B240  7D 89 03 A6 */	mtctr r12
/* 8025E304 0025B244  4E 80 04 21 */	bctrl 
/* 8025E308 0025B248  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025E30C 0025B24C  7C 08 03 A6 */	mtlr r0
/* 8025E310 0025B250  38 21 00 10 */	addi r1, r1, 0x10
/* 8025E314 0025B254  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game6Kogane3ObjFv

.fn effectDrawOn__Q34Game6Kogane3ObjFv, weak
/* 8025E318 0025B258  4E 80 00 20 */	blr 
.endfn effectDrawOn__Q34Game6Kogane3ObjFv

.fn transitDamageState__Q34Game6Kogane3ObjFf, global
/* 8025E31C 0025B25C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025E320 0025B260  7C 08 02 A6 */	mflr r0
/* 8025E324 0025B264  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025E328 0025B268  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025E32C 0025B26C  7C 7F 1B 78 */	mr r31, r3
/* 8025E330 0025B270  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8025E334 0025B274  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8025E338 0025B278  41 82 00 14 */	beq .L_8025E34C
/* 8025E33C 0025B27C  C0 42 C8 D8 */	lfs f2, lbl_8051AC38@sda21(r2)
/* 8025E340 0025B280  4B EA 7C ED */	bl addDamage__Q24Game9EnemyBaseFff
/* 8025E344 0025B284  38 60 00 01 */	li r3, 1
/* 8025E348 0025B288  48 00 00 44 */	b .L_8025E38C
.L_8025E34C:
/* 8025E34C 0025B28C  4B EA 90 A9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8025E350 0025B290  2C 03 00 02 */	cmpwi r3, 2
/* 8025E354 0025B294  41 82 00 0C */	beq .L_8025E360
/* 8025E358 0025B298  2C 03 00 03 */	cmpwi r3, 3
/* 8025E35C 0025B29C  40 82 00 2C */	bne .L_8025E388
.L_8025E360:
/* 8025E360 0025B2A0  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8025E364 0025B2A4  7F E4 FB 78 */	mr r4, r31
/* 8025E368 0025B2A8  38 A0 00 04 */	li r5, 4
/* 8025E36C 0025B2AC  38 C0 00 00 */	li r6, 0
/* 8025E370 0025B2B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8025E374 0025B2B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8025E378 0025B2B8  7D 89 03 A6 */	mtctr r12
/* 8025E37C 0025B2BC  4E 80 04 21 */	bctrl 
/* 8025E380 0025B2C0  38 60 00 01 */	li r3, 1
/* 8025E384 0025B2C4  48 00 00 08 */	b .L_8025E38C
.L_8025E388:
/* 8025E388 0025B2C8  38 60 00 00 */	li r3, 0
.L_8025E38C:
/* 8025E38C 0025B2CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025E390 0025B2D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025E394 0025B2D4  7C 08 03 A6 */	mtlr r0
/* 8025E398 0025B2D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8025E39C 0025B2DC  4E 80 00 20 */	blr 
.endfn transitDamageState__Q34Game6Kogane3ObjFf

.fn transitDisappear__Q34Game6Kogane3ObjFv, global
/* 8025E3A0 0025B2E0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8025E3A4 0025B2E4  7C 08 02 A6 */	mflr r0
/* 8025E3A8 0025B2E8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8025E3AC 0025B2EC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8025E3B0 0025B2F0  7C 7F 1B 78 */	mr r31, r3
/* 8025E3B4 0025B2F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8025E3B8 0025B2F8  81 8C 03 08 */	lwz r12, 0x308(r12)
/* 8025E3BC 0025B2FC  7D 89 03 A6 */	mtctr r12
/* 8025E3C0 0025B300  4E 80 04 21 */	bctrl 
/* 8025E3C4 0025B304  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 8025E3C8 0025B308  2C 00 00 00 */	cmpwi r0, 0
/* 8025E3CC 0025B30C  40 82 00 C4 */	bne .L_8025E490
/* 8025E3D0 0025B310  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8025E3D4 0025B314  28 03 00 00 */	cmplwi r3, 0
/* 8025E3D8 0025B318  41 82 00 B8 */	beq .L_8025E490
/* 8025E3DC 0025B31C  88 03 00 48 */	lbz r0, 0x48(r3)
/* 8025E3E0 0025B320  28 00 00 00 */	cmplwi r0, 0
/* 8025E3E4 0025B324  41 82 00 AC */	beq .L_8025E490
/* 8025E3E8 0025B328  80 0D 96 88 */	lwz r0, randMapMgr__Q24Game4Cave@sda21(r13)
/* 8025E3EC 0025B32C  28 00 00 00 */	cmplwi r0, 0
/* 8025E3F0 0025B330  41 82 00 A0 */	beq .L_8025E490
/* 8025E3F4 0025B334  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 8025E3F8 0025B338  39 00 00 00 */	li r8, 0
/* 8025E3FC 0025B33C  38 83 A2 F4 */	addi r4, r3, __vt__Q24Game15CreatureInitArg@l
/* 8025E400 0025B340  38 00 FF FF */	li r0, -1
/* 8025E404 0025B344  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 8025E408 0025B348  90 81 00 08 */	stw r4, 8(r1)
/* 8025E40C 0025B34C  38 63 A2 B8 */	addi r3, r3, __vt__Q24Game13PelletInitArg@l
/* 8025E410 0025B350  38 E0 00 FF */	li r7, 0xff
/* 8025E414 0025B354  38 C0 00 01 */	li r6, 1
/* 8025E418 0025B358  90 61 00 08 */	stw r3, 8(r1)
/* 8025E41C 0025B35C  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 8025E420 0025B360  38 81 00 08 */	addi r4, r1, 8
/* 8025E424 0025B364  99 01 00 24 */	stb r8, 0x24(r1)
/* 8025E428 0025B368  38 BF 02 50 */	addi r5, r31, 0x250
/* 8025E42C 0025B36C  B1 01 00 1C */	sth r8, 0x1c(r1)
/* 8025E430 0025B370  98 E1 00 1E */	stb r7, 0x1e(r1)
/* 8025E434 0025B374  91 01 00 20 */	stw r8, 0x20(r1)
/* 8025E438 0025B378  99 01 00 1F */	stb r8, 0x1f(r1)
/* 8025E43C 0025B37C  98 C1 00 0C */	stb r6, 0xc(r1)
/* 8025E440 0025B380  99 01 00 25 */	stb r8, 0x25(r1)
/* 8025E444 0025B384  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8025E448 0025B388  90 01 00 28 */	stw r0, 0x28(r1)
/* 8025E44C 0025B38C  99 01 00 26 */	stb r8, 0x26(r1)
/* 8025E450 0025B390  99 01 00 27 */	stb r8, 0x27(r1)
/* 8025E454 0025B394  4B F0 F7 3D */	bl makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgRQ34Game9PelletMgr15OtakaraItemCode
/* 8025E458 0025B398  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025E45C 0025B39C  41 82 00 34 */	beq .L_8025E490
/* 8025E460 0025B3A0  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 8025E464 0025B3A4  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8025E468 0025B3A8  38 BF 01 FC */	addi r5, r31, 0x1fc
/* 8025E46C 0025B3AC  4B FE 6A 99 */	bl "getBaseGenData__Q34Game4Cave10RandMapMgrFP10Vector3<f>Pf"
/* 8025E470 0025B3B0  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8025E474 0025B3B4  38 60 00 00 */	li r3, 0
/* 8025E478 0025B3B8  D0 1F 01 98 */	stfs f0, 0x198(r31)
/* 8025E47C 0025B3BC  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8025E480 0025B3C0  D0 1F 01 9C */	stfs f0, 0x19c(r31)
/* 8025E484 0025B3C4  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8025E488 0025B3C8  D0 1F 01 A0 */	stfs f0, 0x1a0(r31)
/* 8025E48C 0025B3CC  48 00 00 08 */	b .L_8025E494
.L_8025E490:
/* 8025E490 0025B3D0  38 60 00 01 */	li r3, 1
.L_8025E494:
/* 8025E494 0025B3D4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8025E498 0025B3D8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8025E49C 0025B3DC  7C 08 03 A6 */	mtlr r0
/* 8025E4A0 0025B3E0  38 21 00 40 */	addi r1, r1, 0x40
/* 8025E4A4 0025B3E4  4E 80 00 20 */	blr 
.endfn transitDisappear__Q34Game6Kogane3ObjFv

.fn getBodyJointPos__Q34Game6Kogane3ObjFv, global
/* 8025E4A8 0025B3E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025E4AC 0025B3EC  7C 08 02 A6 */	mflr r0
/* 8025E4B0 0025B3F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025E4B4 0025B3F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025E4B8 0025B3F8  7C 7F 1B 78 */	mr r31, r3
/* 8025E4BC 0025B3FC  80 64 01 74 */	lwz r3, 0x174(r4)
/* 8025E4C0 0025B400  38 82 C8 E0 */	addi r4, r2, lbl_8051AC40@sda21
/* 8025E4C4 0025B404  48 1E 0B 21 */	bl getJoint__Q28SysShape5ModelFPc
/* 8025E4C8 0025B408  48 1C B3 D9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8025E4CC 0025B40C  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8025E4D0 0025B410  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8025E4D4 0025B414  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8025E4D8 0025B418  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8025E4DC 0025B41C  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8025E4E0 0025B420  D0 5F 00 08 */	stfs f2, 8(r31)
/* 8025E4E4 0025B424  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025E4E8 0025B428  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025E4EC 0025B42C  7C 08 03 A6 */	mtlr r0
/* 8025E4F0 0025B430  38 21 00 10 */	addi r1, r1, 0x10
/* 8025E4F4 0025B434  4E 80 00 20 */	blr 
.endfn getBodyJointPos__Q34Game6Kogane3ObjFv

.fn koganeScaleUp__Q34Game6Kogane3ObjFv, global
/* 8025E4F8 0025B438  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025E4FC 0025B43C  7C 08 02 A6 */	mflr r0
/* 8025E500 0025B440  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025E504 0025B444  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025E508 0025B448  3B E0 00 00 */	li r31, 0
/* 8025E50C 0025B44C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8025E510 0025B450  C0 43 02 CC */	lfs f2, 0x2cc(r3)
/* 8025E514 0025B454  C0 04 09 34 */	lfs f0, 0x934(r4)
/* 8025E518 0025B458  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8025E51C 0025B45C  40 80 00 68 */	bge .L_8025E584
/* 8025E520 0025B460  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8025E524 0025B464  C0 22 C8 E8 */	lfs f1, lbl_8051AC48@sda21(r2)
/* 8025E528 0025B468  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8025E52C 0025B46C  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 8025E530 0025B470  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 8025E534 0025B474  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8025E538 0025B478  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 8025E53C 0025B47C  C0 04 09 34 */	lfs f0, 0x934(r4)
/* 8025E540 0025B480  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025E544 0025B484  4C 41 13 82 */	cror 2, 1, 2
/* 8025E548 0025B488  40 82 00 18 */	bne .L_8025E560
/* 8025E54C 0025B48C  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 8025E550 0025B490  3B E0 00 01 */	li r31, 1
/* 8025E554 0025B494  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8025E558 0025B498  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 8025E55C 0025B49C  90 03 01 E0 */	stw r0, 0x1e0(r3)
.L_8025E560:
/* 8025E560 0025B4A0  C0 03 02 CC */	lfs f0, 0x2cc(r3)
/* 8025E564 0025B4A4  D0 03 01 F8 */	stfs f0, 0x1f8(r3)
/* 8025E568 0025B4A8  D0 03 01 68 */	stfs f0, 0x168(r3)
/* 8025E56C 0025B4AC  D0 03 01 6C */	stfs f0, 0x16c(r3)
/* 8025E570 0025B4B0  D0 03 01 70 */	stfs f0, 0x170(r3)
/* 8025E574 0025B4B4  80 83 01 14 */	lwz r4, 0x114(r3)
/* 8025E578 0025B4B8  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 8025E57C 0025B4BC  80 64 00 00 */	lwz r3, 0(r4)
/* 8025E580 0025B4C0  4B ED 98 8D */	bl setScale__8CollPartFf
.L_8025E584:
/* 8025E584 0025B4C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025E588 0025B4C8  7F E3 FB 78 */	mr r3, r31
/* 8025E58C 0025B4CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025E590 0025B4D0  7C 08 03 A6 */	mtlr r0
/* 8025E594 0025B4D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8025E598 0025B4D8  4E 80 00 20 */	blr 
.endfn koganeScaleUp__Q34Game6Kogane3ObjFv

.fn koganeScaleDown__Q34Game6Kogane3ObjFv, global
/* 8025E59C 0025B4DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025E5A0 0025B4E0  7C 08 02 A6 */	mflr r0
/* 8025E5A4 0025B4E4  C0 42 C8 C8 */	lfs f2, lbl_8051AC28@sda21(r2)
/* 8025E5A8 0025B4E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025E5AC 0025B4EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025E5B0 0025B4F0  3B E0 00 00 */	li r31, 0
/* 8025E5B4 0025B4F4  C0 63 02 CC */	lfs f3, 0x2cc(r3)
/* 8025E5B8 0025B4F8  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 8025E5BC 0025B4FC  40 81 00 54 */	ble .L_8025E610
/* 8025E5C0 0025B500  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8025E5C4 0025B504  C0 22 C8 E8 */	lfs f1, lbl_8051AC48@sda21(r2)
/* 8025E5C8 0025B508  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8025E5CC 0025B50C  EC 01 18 3C */	fnmsubs f0, f1, f0, f3
/* 8025E5D0 0025B510  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 8025E5D4 0025B514  C0 03 02 CC */	lfs f0, 0x2cc(r3)
/* 8025E5D8 0025B518  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8025E5DC 0025B51C  4C 40 13 82 */	cror 2, 0, 2
/* 8025E5E0 0025B520  40 82 00 0C */	bne .L_8025E5EC
/* 8025E5E4 0025B524  D0 43 02 CC */	stfs f2, 0x2cc(r3)
/* 8025E5E8 0025B528  3B E0 00 01 */	li r31, 1
.L_8025E5EC:
/* 8025E5EC 0025B52C  C0 03 02 CC */	lfs f0, 0x2cc(r3)
/* 8025E5F0 0025B530  D0 03 01 F8 */	stfs f0, 0x1f8(r3)
/* 8025E5F4 0025B534  D0 03 01 68 */	stfs f0, 0x168(r3)
/* 8025E5F8 0025B538  D0 03 01 6C */	stfs f0, 0x16c(r3)
/* 8025E5FC 0025B53C  D0 03 01 70 */	stfs f0, 0x170(r3)
/* 8025E600 0025B540  80 83 01 14 */	lwz r4, 0x114(r3)
/* 8025E604 0025B544  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 8025E608 0025B548  80 64 00 00 */	lwz r3, 0(r4)
/* 8025E60C 0025B54C  4B ED 98 01 */	bl setScale__8CollPartFf
.L_8025E610:
/* 8025E610 0025B550  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025E614 0025B554  7F E3 FB 78 */	mr r3, r31
/* 8025E618 0025B558  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025E61C 0025B55C  7C 08 03 A6 */	mtlr r0
/* 8025E620 0025B560  38 21 00 10 */	addi r1, r1, 0x10
/* 8025E624 0025B564  4E 80 00 20 */	blr 
.endfn koganeScaleDown__Q34Game6Kogane3ObjFv

.fn "setTargetPosition__Q34Game6Kogane3ObjFP10Vector3<f>", global
/* 8025E628 0025B568  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8025E62C 0025B56C  7C 08 02 A6 */	mflr r0
/* 8025E630 0025B570  90 01 00 44 */	stw r0, 0x44(r1)
/* 8025E634 0025B574  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8025E638 0025B578  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8025E63C 0025B57C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8025E640 0025B580  28 04 00 00 */	cmplwi r4, 0
/* 8025E644 0025B584  7C 7F 1B 78 */	mr r31, r3
/* 8025E648 0025B588  41 82 00 34 */	beq .L_8025E67C
/* 8025E64C 0025B58C  C0 42 C8 EC */	lfs f2, lbl_8051AC4C@sda21(r2)
/* 8025E650 0025B590  C0 24 00 00 */	lfs f1, 0(r4)
/* 8025E654 0025B594  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8025E658 0025B598  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8025E65C 0025B59C  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 8025E660 0025B5A0  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8025E664 0025B5A4  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 8025E668 0025B5A8  C0 24 00 08 */	lfs f1, 8(r4)
/* 8025E66C 0025B5AC  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8025E670 0025B5B0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8025E674 0025B5B4  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 8025E678 0025B5B8  48 00 01 40 */	b .L_8025E7B8
.L_8025E67C:
/* 8025E67C 0025B5BC  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 8025E680 0025B5C0  C0 02 C8 F0 */	lfs f0, lbl_8051AC50@sda21(r2)
/* 8025E684 0025B5C4  C3 E2 C8 CC */	lfs f31, lbl_8051AC2C@sda21(r2)
/* 8025E688 0025B5C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025E68C 0025B5CC  40 81 00 4C */	ble .L_8025E6D8
/* 8025E690 0025B5D0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8025E694 0025B5D4  C0 22 C8 F4 */	lfs f1, lbl_8051AC54@sda21(r2)
/* 8025E698 0025B5D8  C0 03 09 0C */	lfs f0, 0x90c(r3)
/* 8025E69C 0025B5DC  EF E1 00 32 */	fmuls f31, f1, f0
/* 8025E6A0 0025B5E0  4B E6 AF 01 */	bl rand
/* 8025E6A4 0025B5E4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8025E6A8 0025B5E8  3C 00 43 30 */	lis r0, 0x4330
/* 8025E6AC 0025B5EC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8025E6B0 0025B5F0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8025E6B4 0025B5F4  90 01 00 08 */	stw r0, 8(r1)
/* 8025E6B8 0025B5F8  C8 42 C9 10 */	lfd f2, lbl_8051AC70@sda21(r2)
/* 8025E6BC 0025B5FC  C8 01 00 08 */	lfd f0, 8(r1)
/* 8025E6C0 0025B600  C0 22 C8 F8 */	lfs f1, lbl_8051AC58@sda21(r2)
/* 8025E6C4 0025B604  EC 40 10 28 */	fsubs f2, f0, f2
/* 8025E6C8 0025B608  C0 03 09 0C */	lfs f0, 0x90c(r3)
/* 8025E6CC 0025B60C  EC 5F 00 B2 */	fmuls f2, f31, f2
/* 8025E6D0 0025B610  EC 22 08 24 */	fdivs f1, f2, f1
/* 8025E6D4 0025B614  EF E1 00 28 */	fsubs f31, f1, f0
.L_8025E6D8:
/* 8025E6D8 0025B618  7F E3 FB 78 */	mr r3, r31
/* 8025E6DC 0025B61C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025E6E0 0025B620  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025E6E4 0025B624  7D 89 03 A6 */	mtctr r12
/* 8025E6E8 0025B628  4E 80 04 21 */	bctrl 
/* 8025E6EC 0025B62C  C0 02 C9 00 */	lfs f0, lbl_8051AC60@sda21(r2)
/* 8025E6F0 0025B630  C0 82 C8 FC */	lfs f4, lbl_8051AC5C@sda21(r2)
/* 8025E6F4 0025B634  EC 40 07 F2 */	fmuls f2, f0, f31
/* 8025E6F8 0025B638  C0 02 C8 CC */	lfs f0, lbl_8051AC2C@sda21(r2)
/* 8025E6FC 0025B63C  C0 62 C8 EC */	lfs f3, lbl_8051AC4C@sda21(r2)
/* 8025E700 0025B640  EC 84 08 BA */	fmadds f4, f4, f2, f1
/* 8025E704 0025B644  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8025E708 0025B648  40 80 00 30 */	bge .L_8025E738
/* 8025E70C 0025B64C  C0 02 C9 04 */	lfs f0, lbl_8051AC64@sda21(r2)
/* 8025E710 0025B650  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8025E714 0025B654  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8025E718 0025B658  EC 04 00 32 */	fmuls f0, f4, f0
/* 8025E71C 0025B65C  FC 00 00 1E */	fctiwz f0, f0
/* 8025E720 0025B660  D8 01 00 08 */	stfd f0, 8(r1)
/* 8025E724 0025B664  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8025E728 0025B668  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8025E72C 0025B66C  7C 03 04 2E */	lfsx f0, r3, r0
/* 8025E730 0025B670  FC 40 00 50 */	fneg f2, f0
/* 8025E734 0025B674  48 00 00 28 */	b .L_8025E75C
.L_8025E738:
/* 8025E738 0025B678  C0 02 C9 08 */	lfs f0, lbl_8051AC68@sda21(r2)
/* 8025E73C 0025B67C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8025E740 0025B680  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8025E744 0025B684  EC 04 00 32 */	fmuls f0, f4, f0
/* 8025E748 0025B688  FC 00 00 1E */	fctiwz f0, f0
/* 8025E74C 0025B68C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8025E750 0025B690  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025E754 0025B694  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8025E758 0025B698  7C 43 04 2E */	lfsx f2, r3, r0
.L_8025E75C:
/* 8025E75C 0025B69C  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8025E760 0025B6A0  C0 02 C8 CC */	lfs f0, lbl_8051AC2C@sda21(r2)
/* 8025E764 0025B6A4  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 8025E768 0025B6A8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8025E76C 0025B6AC  D0 3F 02 D0 */	stfs f1, 0x2d0(r31)
/* 8025E770 0025B6B0  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8025E774 0025B6B4  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 8025E778 0025B6B8  40 80 00 08 */	bge .L_8025E780
/* 8025E77C 0025B6BC  FC 80 20 50 */	fneg f4, f4
.L_8025E780:
/* 8025E780 0025B6C0  C0 02 C9 08 */	lfs f0, lbl_8051AC68@sda21(r2)
/* 8025E784 0025B6C4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8025E788 0025B6C8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8025E78C 0025B6CC  C0 42 C8 EC */	lfs f2, lbl_8051AC4C@sda21(r2)
/* 8025E790 0025B6D0  EC 24 00 32 */	fmuls f1, f4, f0
/* 8025E794 0025B6D4  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8025E798 0025B6D8  FC 20 08 1E */	fctiwz f1, f1
/* 8025E79C 0025B6DC  D8 21 00 18 */	stfd f1, 0x18(r1)
/* 8025E7A0 0025B6E0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8025E7A4 0025B6E4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8025E7A8 0025B6E8  7C 63 02 14 */	add r3, r3, r0
/* 8025E7AC 0025B6EC  C0 23 00 04 */	lfs f1, 4(r3)
/* 8025E7B0 0025B6F0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8025E7B4 0025B6F4  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
.L_8025E7B8:
/* 8025E7B8 0025B6F8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8025E7BC 0025B6FC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8025E7C0 0025B700  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8025E7C4 0025B704  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8025E7C8 0025B708  7C 08 03 A6 */	mtlr r0
/* 8025E7CC 0025B70C  38 21 00 40 */	addi r1, r1, 0x40
/* 8025E7D0 0025B710  4E 80 00 20 */	blr 
.endfn "setTargetPosition__Q34Game6Kogane3ObjFP10Vector3<f>"

.fn resetAppearTimer__Q34Game6Kogane3ObjFv, global
/* 8025E7D4 0025B714  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8025E7D8 0025B718  7C 08 02 A6 */	mflr r0
/* 8025E7DC 0025B71C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8025E7E0 0025B720  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8025E7E4 0025B724  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8025E7E8 0025B728  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8025E7EC 0025B72C  7C 7F 1B 78 */	mr r31, r3
/* 8025E7F0 0025B730  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8025E7F4 0025B734  C0 23 08 44 */	lfs f1, 0x844(r3)
/* 8025E7F8 0025B738  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 8025E7FC 0025B73C  EF E1 00 28 */	fsubs f31, f1, f0
/* 8025E800 0025B740  4B E6 AD A1 */	bl rand
/* 8025E804 0025B744  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8025E808 0025B748  3C 00 43 30 */	lis r0, 0x4330
/* 8025E80C 0025B74C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8025E810 0025B750  C8 42 C9 10 */	lfd f2, lbl_8051AC70@sda21(r2)
/* 8025E814 0025B754  90 01 00 08 */	stw r0, 8(r1)
/* 8025E818 0025B758  C0 02 C8 F8 */	lfs f0, lbl_8051AC58@sda21(r2)
/* 8025E81C 0025B75C  C8 21 00 08 */	lfd f1, 8(r1)
/* 8025E820 0025B760  EC 21 10 28 */	fsubs f1, f1, f2
/* 8025E824 0025B764  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8025E828 0025B768  EC 01 00 24 */	fdivs f0, f1, f0
/* 8025E82C 0025B76C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8025E830 0025B770  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8025E834 0025B774  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8025E838 0025B778  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8025E83C 0025B77C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8025E840 0025B780  7C 08 03 A6 */	mtlr r0
/* 8025E844 0025B784  38 21 00 30 */	addi r1, r1, 0x30
/* 8025E848 0025B788  4E 80 00 20 */	blr 
.endfn resetAppearTimer__Q34Game6Kogane3ObjFv

.fn isAppear__Q34Game6Kogane3ObjFv, global
/* 8025E84C 0025B78C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8025E850 0025B790  7C 08 02 A6 */	mflr r0
/* 8025E854 0025B794  90 01 00 24 */	stw r0, 0x24(r1)
/* 8025E858 0025B798  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8025E85C 0025B79C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8025E860 0025B7A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025E864 0025B7A4  7C 7F 1B 78 */	mr r31, r3
/* 8025E868 0025B7A8  38 80 00 00 */	li r4, 0
/* 8025E86C 0025B7AC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 8025E870 0025B7B0  C3 E5 03 D4 */	lfs f31, 0x3d4(r5)
/* 8025E874 0025B7B4  FC 20 F8 90 */	fmr f1, f31
/* 8025E878 0025B7B8  4B EB 62 49 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 8025E87C 0025B7BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025E880 0025B7C0  41 82 00 0C */	beq .L_8025E88C
/* 8025E884 0025B7C4  38 60 00 01 */	li r3, 1
/* 8025E888 0025B7C8  48 00 00 28 */	b .L_8025E8B0
.L_8025E88C:
/* 8025E88C 0025B7CC  FC 20 F8 90 */	fmr f1, f31
/* 8025E890 0025B7D0  7F E3 FB 78 */	mr r3, r31
/* 8025E894 0025B7D4  38 80 00 00 */	li r4, 0
/* 8025E898 0025B7D8  4B EB 5E 9D */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 8025E89C 0025B7DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025E8A0 0025B7E0  41 82 00 0C */	beq .L_8025E8AC
/* 8025E8A4 0025B7E4  38 60 00 01 */	li r3, 1
/* 8025E8A8 0025B7E8  48 00 00 08 */	b .L_8025E8B0
.L_8025E8AC:
/* 8025E8AC 0025B7EC  38 60 00 00 */	li r3, 0
.L_8025E8B0:
/* 8025E8B0 0025B7F0  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8025E8B4 0025B7F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8025E8B8 0025B7F8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8025E8BC 0025B7FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025E8C0 0025B800  7C 08 03 A6 */	mtlr r0
/* 8025E8C4 0025B804  38 21 00 20 */	addi r1, r1, 0x20
/* 8025E8C8 0025B808  4E 80 00 20 */	blr 
.endfn isAppear__Q34Game6Kogane3ObjFv

.fn resetMoveTimer__Q34Game6Kogane3ObjFff, global
/* 8025E8CC 0025B80C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8025E8D0 0025B810  7C 08 02 A6 */	mflr r0
/* 8025E8D4 0025B814  90 01 00 44 */	stw r0, 0x44(r1)
/* 8025E8D8 0025B818  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8025E8DC 0025B81C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8025E8E0 0025B820  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8025E8E4 0025B824  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8025E8E8 0025B828  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8025E8EC 0025B82C  FF C0 08 90 */	fmr f30, f1
/* 8025E8F0 0025B830  7C 7F 1B 78 */	mr r31, r3
/* 8025E8F4 0025B834  FF E0 10 90 */	fmr f31, f2
/* 8025E8F8 0025B838  4B E6 AC A9 */	bl rand
/* 8025E8FC 0025B83C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8025E900 0025B840  3C 00 43 30 */	lis r0, 0x4330
/* 8025E904 0025B844  90 61 00 0C */	stw r3, 0xc(r1)
/* 8025E908 0025B848  EC 3F F0 28 */	fsubs f1, f31, f30
/* 8025E90C 0025B84C  C8 62 C9 10 */	lfd f3, lbl_8051AC70@sda21(r2)
/* 8025E910 0025B850  90 01 00 08 */	stw r0, 8(r1)
/* 8025E914 0025B854  C0 02 C8 F8 */	lfs f0, lbl_8051AC58@sda21(r2)
/* 8025E918 0025B858  C8 41 00 08 */	lfd f2, 8(r1)
/* 8025E91C 0025B85C  EC 42 18 28 */	fsubs f2, f2, f3
/* 8025E920 0025B860  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8025E924 0025B864  EC 01 00 24 */	fdivs f0, f1, f0
/* 8025E928 0025B868  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 8025E92C 0025B86C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8025E930 0025B870  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8025E934 0025B874  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8025E938 0025B878  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8025E93C 0025B87C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8025E940 0025B880  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8025E944 0025B884  7C 08 03 A6 */	mtlr r0
/* 8025E948 0025B888  38 21 00 40 */	addi r1, r1, 0x40
/* 8025E94C 0025B88C  4E 80 00 20 */	blr 
.endfn resetMoveTimer__Q34Game6Kogane3ObjFff

.fn createTreasureItem__Q34Game6Kogane3ObjFv, global
/* 8025E950 0025B890  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8025E954 0025B894  7C 08 02 A6 */	mflr r0
/* 8025E958 0025B898  90 01 00 54 */	stw r0, 0x54(r1)
/* 8025E95C 0025B89C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8025E960 0025B8A0  7C 7F 1B 78 */	mr r31, r3
/* 8025E964 0025B8A4  80 03 02 C0 */	lwz r0, 0x2c0(r3)
/* 8025E968 0025B8A8  2C 00 00 00 */	cmpwi r0, 0
/* 8025E96C 0025B8AC  40 82 01 60 */	bne .L_8025EACC
/* 8025E970 0025B8B0  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 8025E974 0025B8B4  39 00 00 00 */	li r8, 0
/* 8025E978 0025B8B8  38 83 A2 F4 */	addi r4, r3, __vt__Q24Game15CreatureInitArg@l
/* 8025E97C 0025B8BC  38 00 FF FF */	li r0, -1
/* 8025E980 0025B8C0  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 8025E984 0025B8C4  90 81 00 20 */	stw r4, 0x20(r1)
/* 8025E988 0025B8C8  38 63 A2 B8 */	addi r3, r3, __vt__Q24Game13PelletInitArg@l
/* 8025E98C 0025B8CC  38 E0 00 FF */	li r7, 0xff
/* 8025E990 0025B8D0  38 C0 00 01 */	li r6, 1
/* 8025E994 0025B8D4  90 61 00 20 */	stw r3, 0x20(r1)
/* 8025E998 0025B8D8  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 8025E99C 0025B8DC  38 81 00 20 */	addi r4, r1, 0x20
/* 8025E9A0 0025B8E0  99 01 00 3C */	stb r8, 0x3c(r1)
/* 8025E9A4 0025B8E4  38 BF 02 50 */	addi r5, r31, 0x250
/* 8025E9A8 0025B8E8  B1 01 00 34 */	sth r8, 0x34(r1)
/* 8025E9AC 0025B8EC  98 E1 00 36 */	stb r7, 0x36(r1)
/* 8025E9B0 0025B8F0  91 01 00 38 */	stw r8, 0x38(r1)
/* 8025E9B4 0025B8F4  99 01 00 37 */	stb r8, 0x37(r1)
/* 8025E9B8 0025B8F8  98 C1 00 24 */	stb r6, 0x24(r1)
/* 8025E9BC 0025B8FC  99 01 00 3D */	stb r8, 0x3d(r1)
/* 8025E9C0 0025B900  90 01 00 44 */	stw r0, 0x44(r1)
/* 8025E9C4 0025B904  90 01 00 40 */	stw r0, 0x40(r1)
/* 8025E9C8 0025B908  99 01 00 3E */	stb r8, 0x3e(r1)
/* 8025E9CC 0025B90C  99 01 00 3F */	stb r8, 0x3f(r1)
/* 8025E9D0 0025B910  4B F0 F1 C1 */	bl makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgRQ34Game9PelletMgr15OtakaraItemCode
/* 8025E9D4 0025B914  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025E9D8 0025B918  41 82 00 F4 */	beq .L_8025EACC
/* 8025E9DC 0025B91C  88 0D 84 20 */	lbz r0, sFromTekiEnable__Q24Game6Pellet@sda21(r13)
/* 8025E9E0 0025B920  38 60 00 02 */	li r3, 2
/* 8025E9E4 0025B924  B0 61 00 34 */	sth r3, 0x34(r1)
/* 8025E9E8 0025B928  28 00 00 00 */	cmplwi r0, 0
/* 8025E9EC 0025B92C  41 82 00 0C */	beq .L_8025E9F8
/* 8025E9F0 0025B930  38 00 00 01 */	li r0, 1
/* 8025E9F4 0025B934  98 01 00 3F */	stb r0, 0x3f(r1)
.L_8025E9F8:
/* 8025E9F8 0025B938  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 8025E9FC 0025B93C  38 81 00 20 */	addi r4, r1, 0x20
/* 8025EA00 0025B940  4B F0 EA C1 */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 8025EA04 0025B944  90 7F 02 54 */	stw r3, 0x254(r31)
/* 8025EA08 0025B948  80 1F 02 54 */	lwz r0, 0x254(r31)
/* 8025EA0C 0025B94C  28 00 00 00 */	cmplwi r0, 0
/* 8025EA10 0025B950  41 82 00 BC */	beq .L_8025EACC
/* 8025EA14 0025B954  C0 22 C8 CC */	lfs f1, lbl_8051AC2C@sda21(r2)
/* 8025EA18 0025B958  38 82 C8 E0 */	addi r4, r2, lbl_8051AC40@sda21
/* 8025EA1C 0025B95C  C0 02 C9 18 */	lfs f0, lbl_8051AC78@sda21(r2)
/* 8025EA20 0025B960  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8025EA24 0025B964  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8025EA28 0025B968  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8025EA2C 0025B96C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8025EA30 0025B970  48 1E 05 B5 */	bl getJoint__Q28SysShape5ModelFPc
/* 8025EA34 0025B974  48 1C AE 6D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8025EA38 0025B978  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8025EA3C 0025B97C  38 81 00 08 */	addi r4, r1, 8
/* 8025EA40 0025B980  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8025EA44 0025B984  38 A0 00 00 */	li r5, 0
/* 8025EA48 0025B988  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8025EA4C 0025B98C  D0 01 00 08 */	stfs f0, 8(r1)
/* 8025EA50 0025B990  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8025EA54 0025B994  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8025EA58 0025B998  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 8025EA5C 0025B99C  4B ED C7 4D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8025EA60 0025B9A0  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 8025EA64 0025B9A4  38 81 00 14 */	addi r4, r1, 0x14
/* 8025EA68 0025B9A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8025EA6C 0025B9AC  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8025EA70 0025B9B0  7D 89 03 A6 */	mtctr r12
/* 8025EA74 0025B9B4  4E 80 04 21 */	bctrl 
/* 8025EA78 0025B9B8  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 8025EA7C 0025B9BC  38 81 00 08 */	addi r4, r1, 8
/* 8025EA80 0025B9C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8025EA84 0025B9C4  81 8C 01 FC */	lwz r12, 0x1fc(r12)
/* 8025EA88 0025B9C8  7D 89 03 A6 */	mtctr r12
/* 8025EA8C 0025B9CC  4E 80 04 21 */	bctrl 
/* 8025EA90 0025B9D0  7F E3 FB 78 */	mr r3, r31
/* 8025EA94 0025B9D4  4B FB FB 61 */	bl exit__Q25Radar3MgrFPQ24Game15TPositionObject
/* 8025EA98 0025B9D8  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 8025EA9C 0025B9DC  38 80 58 10 */	li r4, 0x5810
/* 8025EAA0 0025B9E0  38 A0 00 00 */	li r5, 0
/* 8025EAA4 0025B9E4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8025EAA8 0025B9E8  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8025EAAC 0025B9EC  7D 89 03 A6 */	mtctr r12
/* 8025EAB0 0025B9F0  4E 80 04 21 */	bctrl 
/* 8025EAB4 0025B9F4  C0 02 C9 1C */	lfs f0, lbl_8051AC7C@sda21(r2)
/* 8025EAB8 0025B9F8  38 00 32 00 */	li r0, 0x3200
/* 8025EABC 0025B9FC  38 60 00 01 */	li r3, 1
/* 8025EAC0 0025BA00  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8025EAC4 0025BA04  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 8025EAC8 0025BA08  48 00 00 08 */	b .L_8025EAD0
.L_8025EACC:
/* 8025EACC 0025BA0C  38 60 00 00 */	li r3, 0
.L_8025EAD0:
/* 8025EAD0 0025BA10  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8025EAD4 0025BA14  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8025EAD8 0025BA18  7C 08 03 A6 */	mtlr r0
/* 8025EADC 0025BA1C  38 21 00 50 */	addi r1, r1, 0x50
/* 8025EAE0 0025BA20  4E 80 00 20 */	blr 
.endfn createTreasureItem__Q34Game6Kogane3ObjFv

.fn createPellet__Q34Game6Kogane3ObjFii, global
/* 8025EAE4 0025BA24  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 8025EAE8 0025BA28  7C 08 02 A6 */	mflr r0
/* 8025EAEC 0025BA2C  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 8025EAF0 0025BA30  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 8025EAF4 0025BA34  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 8025EAF8 0025BA38  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 8025EAFC 0025BA3C  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 8025EB00 0025BA40  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 8025EB04 0025BA44  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 8025EB08 0025BA48  DB 81 00 90 */	stfd f28, 0x90(r1)
/* 8025EB0C 0025BA4C  F3 81 00 98 */	psq_st f28, 152(r1), 0, qr0
/* 8025EB10 0025BA50  BF 21 00 74 */	stmw r25, 0x74(r1)
/* 8025EB14 0025BA54  3C C0 80 48 */	lis r6, lbl_804853D8@ha
/* 8025EB18 0025BA58  7C 9D 23 78 */	mr r29, r4
/* 8025EB1C 0025BA5C  84 86 53 D8 */	lwzu r4, lbl_804853D8@l(r6)
/* 8025EB20 0025BA60  7C 79 1B 78 */	mr r25, r3
/* 8025EB24 0025BA64  7C BE 2B 78 */	mr r30, r5
/* 8025EB28 0025BA68  3B 41 00 20 */	addi r26, r1, 0x20
/* 8025EB2C 0025BA6C  80 66 00 04 */	lwz r3, 4(r6)
/* 8025EB30 0025BA70  3B 60 00 00 */	li r27, 0
/* 8025EB34 0025BA74  80 06 00 08 */	lwz r0, 8(r6)
/* 8025EB38 0025BA78  3B 80 00 00 */	li r28, 0
/* 8025EB3C 0025BA7C  90 81 00 20 */	stw r4, 0x20(r1)
/* 8025EB40 0025BA80  90 61 00 24 */	stw r3, 0x24(r1)
/* 8025EB44 0025BA84  90 01 00 28 */	stw r0, 0x28(r1)
.L_8025EB48:
/* 8025EB48 0025BA88  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8025EB4C 0025BA8C  7F 84 E3 78 */	mr r4, r28
/* 8025EB50 0025BA90  4B F8 85 59 */	bl hasMetPikmin__Q24Game8PlayDataFi
/* 8025EB54 0025BA94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025EB58 0025BA98  41 82 00 10 */	beq .L_8025EB68
/* 8025EB5C 0025BA9C  93 9A 00 00 */	stw r28, 0(r26)
/* 8025EB60 0025BAA0  3B 5A 00 04 */	addi r26, r26, 4
/* 8025EB64 0025BAA4  3B 7B 00 01 */	addi r27, r27, 1
.L_8025EB68:
/* 8025EB68 0025BAA8  3B 9C 00 01 */	addi r28, r28, 1
/* 8025EB6C 0025BAAC  2C 1C 00 03 */	cmpwi r28, 3
/* 8025EB70 0025BAB0  41 80 FF D8 */	blt .L_8025EB48
/* 8025EB74 0025BAB4  7F 23 CB 78 */	mr r3, r25
/* 8025EB78 0025BAB8  81 99 00 00 */	lwz r12, 0(r25)
/* 8025EB7C 0025BABC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025EB80 0025BAC0  7D 89 03 A6 */	mtctr r12
/* 8025EB84 0025BAC4  4E 80 04 21 */	bctrl 
/* 8025EB88 0025BAC8  38 7E 00 01 */	addi r3, r30, 1
/* 8025EB8C 0025BACC  3C 00 43 30 */	lis r0, 0x4330
/* 8025EB90 0025BAD0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8025EB94 0025BAD4  C0 62 C9 20 */	lfs f3, lbl_8051AC80@sda21(r2)
/* 8025EB98 0025BAD8  90 61 00 5C */	stw r3, 0x5c(r1)
/* 8025EB9C 0025BADC  38 82 C8 E0 */	addi r4, r2, lbl_8051AC40@sda21
/* 8025EBA0 0025BAE0  C8 42 C9 10 */	lfd f2, lbl_8051AC70@sda21(r2)
/* 8025EBA4 0025BAE4  EF A3 08 2A */	fadds f29, f3, f1
/* 8025EBA8 0025BAE8  90 01 00 58 */	stw r0, 0x58(r1)
/* 8025EBAC 0025BAEC  80 79 01 74 */	lwz r3, 0x174(r25)
/* 8025EBB0 0025BAF0  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 8025EBB4 0025BAF4  EC 00 10 28 */	fsubs f0, f0, f2
/* 8025EBB8 0025BAF8  EF 83 00 24 */	fdivs f28, f3, f0
/* 8025EBBC 0025BAFC  48 1E 04 29 */	bl getJoint__Q28SysShape5ModelFPc
/* 8025EBC0 0025BB00  48 1C AC E1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8025EBC4 0025BB04  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8025EBC8 0025BB08  6F 7B 80 00 */	xoris r27, r27, 0x8000
/* 8025EBCC 0025BB0C  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8025EBD0 0025BB10  3B 81 00 20 */	addi r28, r1, 0x20
/* 8025EBD4 0025BB14  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8025EBD8 0025BB18  3B E0 00 00 */	li r31, 0
/* 8025EBDC 0025BB1C  CB C2 C9 10 */	lfd f30, lbl_8051AC70@sda21(r2)
/* 8025EBE0 0025BB20  3F 40 43 30 */	lis r26, 0x4330
/* 8025EBE4 0025BB24  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8025EBE8 0025BB28  C3 E2 C8 F8 */	lfs f31, lbl_8051AC58@sda21(r2)
/* 8025EBEC 0025BB2C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8025EBF0 0025BB30  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 8025EBF4 0025BB34  48 00 01 48 */	b .L_8025ED3C
.L_8025EBF8:
/* 8025EBF8 0025BB38  4B E6 A9 A9 */	bl rand
/* 8025EBFC 0025BB3C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8025EC00 0025BB40  93 41 00 58 */	stw r26, 0x58(r1)
/* 8025EC04 0025BB44  7F A4 EB 78 */	mr r4, r29
/* 8025EC08 0025BB48  38 61 00 2C */	addi r3, r1, 0x2c
/* 8025EC0C 0025BB4C  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8025EC10 0025BB50  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 8025EC14 0025BB54  93 61 00 64 */	stw r27, 0x64(r1)
/* 8025EC18 0025BB58  EC 00 F0 28 */	fsubs f0, f0, f30
/* 8025EC1C 0025BB5C  93 41 00 60 */	stw r26, 0x60(r1)
/* 8025EC20 0025BB60  EC 20 F8 24 */	fdivs f1, f0, f31
/* 8025EC24 0025BB64  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 8025EC28 0025BB68  EC 00 F0 28 */	fsubs f0, f0, f30
/* 8025EC2C 0025BB6C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8025EC30 0025BB70  FC 00 00 1E */	fctiwz f0, f0
/* 8025EC34 0025BB74  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 8025EC38 0025BB78  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 8025EC3C 0025BB7C  54 00 10 3A */	slwi r0, r0, 2
/* 8025EC40 0025BB80  7C BC 00 2E */	lwzx r5, r28, r0
/* 8025EC44 0025BB84  4B F0 7F 31 */	bl __ct__Q24Game19PelletNumberInitArgFii
/* 8025EC48 0025BB88  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 8025EC4C 0025BB8C  38 81 00 2C */	addi r4, r1, 0x2c
/* 8025EC50 0025BB90  4B F0 E8 71 */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 8025EC54 0025BB94  7C 79 1B 79 */	or. r25, r3, r3
/* 8025EC58 0025BB98  41 82 00 E0 */	beq .L_8025ED38
/* 8025EC5C 0025BB9C  38 81 00 2C */	addi r4, r1, 0x2c
/* 8025EC60 0025BBA0  4B ED C3 69 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8025EC64 0025BBA4  7F 23 CB 78 */	mr r3, r25
/* 8025EC68 0025BBA8  38 81 00 14 */	addi r4, r1, 0x14
/* 8025EC6C 0025BBAC  81 99 00 00 */	lwz r12, 0(r25)
/* 8025EC70 0025BBB0  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8025EC74 0025BBB4  7D 89 03 A6 */	mtctr r12
/* 8025EC78 0025BBB8  4E 80 04 21 */	bctrl 
/* 8025EC7C 0025BBBC  EF BD E0 2A */	fadds f29, f29, f28
/* 8025EC80 0025BBC0  C0 02 C8 CC */	lfs f0, lbl_8051AC2C@sda21(r2)
/* 8025EC84 0025BBC4  FC 20 E8 90 */	fmr f1, f29
/* 8025EC88 0025BBC8  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8025EC8C 0025BBCC  40 80 00 08 */	bge .L_8025EC94
/* 8025EC90 0025BBD0  FC 20 E8 50 */	fneg f1, f29
.L_8025EC94:
/* 8025EC94 0025BBD4  C0 42 C9 08 */	lfs f2, lbl_8051AC68@sda21(r2)
/* 8025EC98 0025BBD8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8025EC9C 0025BBDC  C0 02 C8 CC */	lfs f0, lbl_8051AC2C@sda21(r2)
/* 8025ECA0 0025BBE0  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8025ECA4 0025BBE4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8025ECA8 0025BBE8  C0 62 C9 24 */	lfs f3, lbl_8051AC84@sda21(r2)
/* 8025ECAC 0025BBEC  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8025ECB0 0025BBF0  FC 00 08 1E */	fctiwz f0, f1
/* 8025ECB4 0025BBF4  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 8025ECB8 0025BBF8  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 8025ECBC 0025BBFC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8025ECC0 0025BC00  7C 64 02 14 */	add r3, r4, r0
/* 8025ECC4 0025BC04  C0 03 00 04 */	lfs f0, 4(r3)
/* 8025ECC8 0025BC08  EC 83 00 32 */	fmuls f4, f3, f0
/* 8025ECCC 0025BC0C  40 80 00 28 */	bge .L_8025ECF4
/* 8025ECD0 0025BC10  C0 02 C9 04 */	lfs f0, lbl_8051AC64@sda21(r2)
/* 8025ECD4 0025BC14  EC 1D 00 32 */	fmuls f0, f29, f0
/* 8025ECD8 0025BC18  FC 00 00 1E */	fctiwz f0, f0
/* 8025ECDC 0025BC1C  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 8025ECE0 0025BC20  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8025ECE4 0025BC24  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8025ECE8 0025BC28  7C 04 04 2E */	lfsx f0, r4, r0
/* 8025ECEC 0025BC2C  FC 00 00 50 */	fneg f0, f0
/* 8025ECF0 0025BC30  48 00 00 1C */	b .L_8025ED0C
.L_8025ECF4:
/* 8025ECF4 0025BC34  EC 1D 00 B2 */	fmuls f0, f29, f2
/* 8025ECF8 0025BC38  FC 00 00 1E */	fctiwz f0, f0
/* 8025ECFC 0025BC3C  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 8025ED00 0025BC40  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8025ED04 0025BC44  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8025ED08 0025BC48  7C 04 04 2E */	lfsx f0, r4, r0
.L_8025ED0C:
/* 8025ED0C 0025BC4C  EC 23 00 32 */	fmuls f1, f3, f0
/* 8025ED10 0025BC50  C0 02 C9 18 */	lfs f0, lbl_8051AC78@sda21(r2)
/* 8025ED14 0025BC54  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 8025ED18 0025BC58  7F 23 CB 78 */	mr r3, r25
/* 8025ED1C 0025BC5C  38 81 00 08 */	addi r4, r1, 8
/* 8025ED20 0025BC60  D0 21 00 08 */	stfs f1, 8(r1)
/* 8025ED24 0025BC64  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8025ED28 0025BC68  81 99 00 00 */	lwz r12, 0(r25)
/* 8025ED2C 0025BC6C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8025ED30 0025BC70  7D 89 03 A6 */	mtctr r12
/* 8025ED34 0025BC74  4E 80 04 21 */	bctrl 
.L_8025ED38:
/* 8025ED38 0025BC78  3B FF 00 01 */	addi r31, r31, 1
.L_8025ED3C:
/* 8025ED3C 0025BC7C  7C 1F F0 00 */	cmpw r31, r30
/* 8025ED40 0025BC80  41 80 FE B8 */	blt .L_8025EBF8
/* 8025ED44 0025BC84  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 8025ED48 0025BC88  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 8025ED4C 0025BC8C  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 8025ED50 0025BC90  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 8025ED54 0025BC94  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 8025ED58 0025BC98  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 8025ED5C 0025BC9C  E3 81 00 98 */	psq_l f28, 152(r1), 0, qr0
/* 8025ED60 0025BCA0  CB 81 00 90 */	lfd f28, 0x90(r1)
/* 8025ED64 0025BCA4  BB 21 00 74 */	lmw r25, 0x74(r1)
/* 8025ED68 0025BCA8  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 8025ED6C 0025BCAC  7C 08 03 A6 */	mtlr r0
/* 8025ED70 0025BCB0  38 21 00 D0 */	addi r1, r1, 0xd0
/* 8025ED74 0025BCB4  4E 80 00 20 */	blr 
.endfn createPellet__Q34Game6Kogane3ObjFii

.fn createDoping__Q34Game6Kogane3ObjFUci, global
/* 8025ED78 0025BCB8  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8025ED7C 0025BCBC  7C 08 02 A6 */	mflr r0
/* 8025ED80 0025BCC0  90 01 00 84 */	stw r0, 0x84(r1)
/* 8025ED84 0025BCC4  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8025ED88 0025BCC8  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8025ED8C 0025BCCC  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 8025ED90 0025BCD0  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 8025ED94 0025BCD4  BF 41 00 48 */	stmw r26, 0x48(r1)
/* 8025ED98 0025BCD8  81 83 00 00 */	lwz r12, 0(r3)
/* 8025ED9C 0025BCDC  7C 7A 1B 78 */	mr r26, r3
/* 8025EDA0 0025BCE0  7C 9E 23 78 */	mr r30, r4
/* 8025EDA4 0025BCE4  7C BF 2B 78 */	mr r31, r5
/* 8025EDA8 0025BCE8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025EDAC 0025BCEC  7D 89 03 A6 */	mtctr r12
/* 8025EDB0 0025BCF0  4E 80 04 21 */	bctrl 
/* 8025EDB4 0025BCF4  38 7F 00 01 */	addi r3, r31, 1
/* 8025EDB8 0025BCF8  3C 00 43 30 */	lis r0, 0x4330
/* 8025EDBC 0025BCFC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8025EDC0 0025BD00  C0 62 C9 20 */	lfs f3, lbl_8051AC80@sda21(r2)
/* 8025EDC4 0025BD04  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8025EDC8 0025BD08  38 82 C8 E0 */	addi r4, r2, lbl_8051AC40@sda21
/* 8025EDCC 0025BD0C  C8 42 C9 10 */	lfd f2, lbl_8051AC70@sda21(r2)
/* 8025EDD0 0025BD10  EF E3 08 2A */	fadds f31, f3, f1
/* 8025EDD4 0025BD14  90 01 00 28 */	stw r0, 0x28(r1)
/* 8025EDD8 0025BD18  80 7A 01 74 */	lwz r3, 0x174(r26)
/* 8025EDDC 0025BD1C  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 8025EDE0 0025BD20  EC 00 10 28 */	fsubs f0, f0, f2
/* 8025EDE4 0025BD24  EF C3 00 24 */	fdivs f30, f3, f0
/* 8025EDE8 0025BD28  48 1E 01 FD */	bl getJoint__Q28SysShape5ModelFPc
/* 8025EDEC 0025BD2C  48 1C AA B5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8025EDF0 0025BD30  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8025EDF4 0025BD34  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureInitArg@ha
/* 8025EDF8 0025BD38  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8025EDFC 0025BD3C  3C 80 80 4B */	lis r4, __vt__Q34Game9ItemHoney7InitArg@ha
/* 8025EE00 0025BD40  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8025EE04 0025BD44  3B 85 A2 F4 */	addi r28, r5, __vt__Q24Game15CreatureInitArg@l
/* 8025EE08 0025BD48  3B A4 A2 E8 */	addi r29, r4, __vt__Q34Game9ItemHoney7InitArg@l
/* 8025EE0C 0025BD4C  3B 60 00 00 */	li r27, 0
/* 8025EE10 0025BD50  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8025EE14 0025BD54  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8025EE18 0025BD58  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8025EE1C 0025BD5C  48 00 01 0C */	b .L_8025EF28
.L_8025EE20:
/* 8025EE20 0025BD60  93 81 00 08 */	stw r28, 8(r1)
/* 8025EE24 0025BD64  38 00 00 00 */	li r0, 0
/* 8025EE28 0025BD68  80 6D 94 50 */	lwz r3, mgr__Q24Game9ItemHoney@sda21(r13)
/* 8025EE2C 0025BD6C  93 A1 00 08 */	stw r29, 8(r1)
/* 8025EE30 0025BD70  9B C1 00 0C */	stb r30, 0xc(r1)
/* 8025EE34 0025BD74  98 01 00 0D */	stb r0, 0xd(r1)
/* 8025EE38 0025BD78  81 83 00 00 */	lwz r12, 0(r3)
/* 8025EE3C 0025BD7C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8025EE40 0025BD80  7D 89 03 A6 */	mtctr r12
/* 8025EE44 0025BD84  4E 80 04 21 */	bctrl 
/* 8025EE48 0025BD88  7C 7A 1B 79 */	or. r26, r3, r3
/* 8025EE4C 0025BD8C  41 82 00 D8 */	beq .L_8025EF24
/* 8025EE50 0025BD90  38 81 00 08 */	addi r4, r1, 8
/* 8025EE54 0025BD94  4B ED C1 75 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8025EE58 0025BD98  7F 43 D3 78 */	mr r3, r26
/* 8025EE5C 0025BD9C  38 81 00 1C */	addi r4, r1, 0x1c
/* 8025EE60 0025BDA0  38 A0 00 00 */	li r5, 0
/* 8025EE64 0025BDA4  4B ED C3 45 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8025EE68 0025BDA8  EF FF F0 2A */	fadds f31, f31, f30
/* 8025EE6C 0025BDAC  C0 02 C8 CC */	lfs f0, lbl_8051AC2C@sda21(r2)
/* 8025EE70 0025BDB0  FC 20 F8 90 */	fmr f1, f31
/* 8025EE74 0025BDB4  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8025EE78 0025BDB8  40 80 00 08 */	bge .L_8025EE80
/* 8025EE7C 0025BDBC  FC 20 F8 50 */	fneg f1, f31
.L_8025EE80:
/* 8025EE80 0025BDC0  C0 42 C9 08 */	lfs f2, lbl_8051AC68@sda21(r2)
/* 8025EE84 0025BDC4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8025EE88 0025BDC8  C0 02 C8 CC */	lfs f0, lbl_8051AC2C@sda21(r2)
/* 8025EE8C 0025BDCC  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8025EE90 0025BDD0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8025EE94 0025BDD4  C0 62 C9 24 */	lfs f3, lbl_8051AC84@sda21(r2)
/* 8025EE98 0025BDD8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8025EE9C 0025BDDC  FC 00 08 1E */	fctiwz f0, f1
/* 8025EEA0 0025BDE0  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8025EEA4 0025BDE4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8025EEA8 0025BDE8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8025EEAC 0025BDEC  7C 64 02 14 */	add r3, r4, r0
/* 8025EEB0 0025BDF0  C0 03 00 04 */	lfs f0, 4(r3)
/* 8025EEB4 0025BDF4  EC 83 00 32 */	fmuls f4, f3, f0
/* 8025EEB8 0025BDF8  40 80 00 28 */	bge .L_8025EEE0
/* 8025EEBC 0025BDFC  C0 02 C9 04 */	lfs f0, lbl_8051AC64@sda21(r2)
/* 8025EEC0 0025BE00  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8025EEC4 0025BE04  FC 00 00 1E */	fctiwz f0, f0
/* 8025EEC8 0025BE08  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8025EECC 0025BE0C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8025EED0 0025BE10  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8025EED4 0025BE14  7C 04 04 2E */	lfsx f0, r4, r0
/* 8025EED8 0025BE18  FC 00 00 50 */	fneg f0, f0
/* 8025EEDC 0025BE1C  48 00 00 1C */	b .L_8025EEF8
.L_8025EEE0:
/* 8025EEE0 0025BE20  EC 1F 00 B2 */	fmuls f0, f31, f2
/* 8025EEE4 0025BE24  FC 00 00 1E */	fctiwz f0, f0
/* 8025EEE8 0025BE28  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8025EEEC 0025BE2C  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8025EEF0 0025BE30  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8025EEF4 0025BE34  7C 04 04 2E */	lfsx f0, r4, r0
.L_8025EEF8:
/* 8025EEF8 0025BE38  EC 23 00 32 */	fmuls f1, f3, f0
/* 8025EEFC 0025BE3C  C0 02 C9 18 */	lfs f0, lbl_8051AC78@sda21(r2)
/* 8025EF00 0025BE40  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8025EF04 0025BE44  7F 43 D3 78 */	mr r3, r26
/* 8025EF08 0025BE48  38 81 00 10 */	addi r4, r1, 0x10
/* 8025EF0C 0025BE4C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8025EF10 0025BE50  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8025EF14 0025BE54  81 9A 00 00 */	lwz r12, 0(r26)
/* 8025EF18 0025BE58  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8025EF1C 0025BE5C  7D 89 03 A6 */	mtctr r12
/* 8025EF20 0025BE60  4E 80 04 21 */	bctrl 
.L_8025EF24:
/* 8025EF24 0025BE64  3B 7B 00 01 */	addi r27, r27, 1
.L_8025EF28:
/* 8025EF28 0025BE68  7C 1B F8 00 */	cmpw r27, r31
/* 8025EF2C 0025BE6C  41 80 FE F4 */	blt .L_8025EE20
/* 8025EF30 0025BE70  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8025EF34 0025BE74  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8025EF38 0025BE78  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 8025EF3C 0025BE7C  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 8025EF40 0025BE80  BB 41 00 48 */	lmw r26, 0x48(r1)
/* 8025EF44 0025BE84  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8025EF48 0025BE88  7C 08 03 A6 */	mtlr r0
/* 8025EF4C 0025BE8C  38 21 00 80 */	addi r1, r1, 0x80
/* 8025EF50 0025BE90  4E 80 00 20 */	blr 
.endfn createDoping__Q34Game6Kogane3ObjFUci

.fn __dt__Q34Game6Kogane3ObjFv, weak
/* 8025EF54 0025BE94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025EF58 0025BE98  7C 08 02 A6 */	mflr r0
/* 8025EF5C 0025BE9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025EF60 0025BEA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025EF64 0025BEA4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8025EF68 0025BEA8  93 C1 00 08 */	stw r30, 8(r1)
/* 8025EF6C 0025BEAC  7C 9E 23 78 */	mr r30, r4
/* 8025EF70 0025BEB0  41 82 00 84 */	beq .L_8025EFF4
/* 8025EF74 0025BEB4  3C 60 80 4C */	lis r3, __vt__Q34Game6Kogane3Obj@ha
/* 8025EF78 0025BEB8  38 1F 02 DC */	addi r0, r31, 0x2dc
/* 8025EF7C 0025BEBC  38 83 30 A8 */	addi r4, r3, __vt__Q34Game6Kogane3Obj@l
/* 8025EF80 0025BEC0  90 9F 00 00 */	stw r4, 0(r31)
/* 8025EF84 0025BEC4  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8025EF88 0025BEC8  38 84 03 20 */	addi r4, r4, 0x320
/* 8025EF8C 0025BECC  90 7F 01 78 */	stw r3, 0x178(r31)
/* 8025EF90 0025BED0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 8025EF94 0025BED4  90 83 00 00 */	stw r4, 0(r3)
/* 8025EF98 0025BED8  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 8025EF9C 0025BEDC  7C 03 00 50 */	subf r0, r3, r0
/* 8025EFA0 0025BEE0  90 03 00 0C */	stw r0, 0xc(r3)
/* 8025EFA4 0025BEE4  41 82 00 40 */	beq .L_8025EFE4
/* 8025EFA8 0025BEE8  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 8025EFAC 0025BEEC  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 8025EFB0 0025BEF0  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 8025EFB4 0025BEF4  38 7F 02 90 */	addi r3, r31, 0x290
/* 8025EFB8 0025BEF8  90 9F 00 00 */	stw r4, 0(r31)
/* 8025EFBC 0025BEFC  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 8025EFC0 0025BF00  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 8025EFC4 0025BF04  38 80 FF FF */	li r4, -1
/* 8025EFC8 0025BF08  90 BF 01 78 */	stw r5, 0x178(r31)
/* 8025EFCC 0025BF0C  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 8025EFD0 0025BF10  90 C5 00 00 */	stw r6, 0(r5)
/* 8025EFD4 0025BF14  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 8025EFD8 0025BF18  7C 05 00 50 */	subf r0, r5, r0
/* 8025EFDC 0025BF1C  90 05 00 0C */	stw r0, 0xc(r5)
/* 8025EFE0 0025BF20  48 1B 25 A9 */	bl __dt__5CNodeFv
.L_8025EFE4:
/* 8025EFE4 0025BF24  7F C0 07 35 */	extsh. r0, r30
/* 8025EFE8 0025BF28  40 81 00 0C */	ble .L_8025EFF4
/* 8025EFEC 0025BF2C  7F E3 FB 78 */	mr r3, r31
/* 8025EFF0 0025BF30  4B DC 50 C5 */	bl __dl__FPv
.L_8025EFF4:
/* 8025EFF4 0025BF34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025EFF8 0025BF38  7F E3 FB 78 */	mr r3, r31
/* 8025EFFC 0025BF3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025F000 0025BF40  83 C1 00 08 */	lwz r30, 8(r1)
/* 8025F004 0025BF44  7C 08 03 A6 */	mtlr r0
/* 8025F008 0025BF48  38 21 00 10 */	addi r1, r1, 0x10
/* 8025F00C 0025BF4C  4E 80 00 20 */	blr 
.endfn __dt__Q34Game6Kogane3ObjFv

.fn inWaterCallback__Q34Game6Kogane3ObjFPQ24Game8WaterBox, weak
/* 8025F010 0025BF50  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q34Game6Kogane3ObjFPQ24Game8WaterBox

.fn outWaterCallback__Q34Game6Kogane3ObjFv, weak
/* 8025F014 0025BF54  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q34Game6Kogane3ObjFv

.fn getEnemyTypeID__Q34Game6Kogane3ObjFv, weak
/* 8025F018 0025BF58  38 60 00 09 */	li r3, 9
/* 8025F01C 0025BF5C  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game6Kogane3ObjFv
