.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80486C50
lbl_80486C50:
	.4byte 0x726B616D
	.4byte 0x756A6E74
	.4byte 0x00000000
.global lbl_80486C5C
lbl_80486C5C:
	.4byte 0x6C6B616D
	.4byte 0x756A6E74
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game5Sarai3Obj
__vt__Q34Game5Sarai3Obj:
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
	.4byte __dt__Q34Game5Sarai3ObjFv
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
	.4byte getEnemyTypeID__Q34Game5Sarai3ObjFv
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
	.4byte getStickPikminNum__Q34Game5Sarai3ObjFv
	.4byte getAttackableTarget__Q34Game5Sarai3ObjFv
	.4byte catchTarget__Q34Game5Sarai3ObjFv
	.4byte resetAttackableTimer__Q34Game5Sarai3ObjFf
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
	.4byte 0

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051B1F8
lbl_8051B1F8:
	.4byte 0x00000000
.global lbl_8051B1FC
lbl_8051B1FC:
	.4byte 0x46480000
.global lbl_8051B200
lbl_8051B200:
	.4byte 0x626F6479
	.4byte 0x6A6E7400
.global lbl_8051B208
lbl_8051B208:
	.4byte 0x40A00000
.global lbl_8051B20C
lbl_8051B20C:
	.4byte 0x42C80000
.global lbl_8051B210
lbl_8051B210:
	.4byte 0x42480000
.global lbl_8051B214
lbl_8051B214:
	.4byte 0x41A00000
.global lbl_8051B218
lbl_8051B218:
	.4byte 0x40200000
.global lbl_8051B21C
lbl_8051B21C:
	.4byte 0x41C80000
.global lbl_8051B220
lbl_8051B220:
	.float 1.0
.global lbl_8051B224
lbl_8051B224:
	.4byte 0x41480000
.global lbl_8051B228
lbl_8051B228:
	.4byte 0x41700000
	.4byte 0x00000000
.global lbl_8051B230
lbl_8051B230:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051B238
lbl_8051B238:
	.4byte 0x47000000
.global lbl_8051B23C
lbl_8051B23C:
	.4byte 0x40490FDB
.global lbl_8051B240
lbl_8051B240:
	.4byte 0x3FC90FDB
.global lbl_8051B244
lbl_8051B244:
	.4byte 0x43A2F983
.global lbl_8051B248
lbl_8051B248:
	.4byte 0xC3A2F983
.global lbl_8051B24C
lbl_8051B24C:
	.4byte 0x40800000
.global lbl_8051B250
lbl_8051B250:
	.float 0.25
.global lbl_8051B254
lbl_8051B254:
	.4byte 0x41200000
.global lbl_8051B258
lbl_8051B258:
	.4byte 0xC47A0000
.global lbl_8051B25C
lbl_8051B25C:
	.4byte 0x3BB60B61
.global lbl_8051B260
lbl_8051B260:
	.4byte 0x3F266666
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game5Sarai3ObjFv
__ct__Q34Game5Sarai3ObjFv:
/* 80272BC4 0026FB04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80272BC8 0026FB08  7C 08 02 A6 */	mflr r0
/* 80272BCC 0026FB0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80272BD0 0026FB10  7C 80 07 35 */	extsh. r0, r4
/* 80272BD4 0026FB14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80272BD8 0026FB18  7C 7F 1B 78 */	mr r31, r3
/* 80272BDC 0026FB1C  93 C1 00 08 */	stw r30, 8(r1)
/* 80272BE0 0026FB20  41 82 00 24 */	beq .L_80272C04
/* 80272BE4 0026FB24  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 80272BE8 0026FB28  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 80272BEC 0026FB2C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80272BF0 0026FB30  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80272BF4 0026FB34  38 00 00 00 */	li r0, 0
/* 80272BF8 0026FB38  90 7F 02 D8 */	stw r3, 0x2d8(r31)
/* 80272BFC 0026FB3C  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 80272C00 0026FB40  90 1F 02 E0 */	stw r0, 0x2e0(r31)
.L_80272C04:
/* 80272C04 0026FB44  7F E3 FB 78 */	mr r3, r31
/* 80272C08 0026FB48  38 80 00 00 */	li r4, 0
/* 80272C0C 0026FB4C  4B E8 E7 95 */	bl __ct__Q24Game9EnemyBaseFv
/* 80272C10 0026FB50  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai3Obj@ha
/* 80272C14 0026FB54  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 80272C18 0026FB58  38 A3 65 B8 */	addi r5, r3, __vt__Q34Game5Sarai3Obj@l
/* 80272C1C 0026FB5C  38 7F 02 C4 */	addi r3, r31, 0x2c4
/* 80272C20 0026FB60  90 BF 00 00 */	stw r5, 0(r31)
/* 80272C24 0026FB64  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80272C28 0026FB68  38 A5 03 0C */	addi r5, r5, 0x30c
/* 80272C2C 0026FB6C  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80272C30 0026FB70  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80272C34 0026FB74  90 A4 00 00 */	stw r5, 0(r4)
/* 80272C38 0026FB78  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80272C3C 0026FB7C  7C 04 00 50 */	subf r0, r4, r0
/* 80272C40 0026FB80  90 04 00 0C */	stw r0, 0xc(r4)
/* 80272C44 0026FB84  4B EC 59 05 */	bl __ct__10MouthSlotsFv
/* 80272C48 0026FB88  38 60 00 2C */	li r3, 0x2c
/* 80272C4C 0026FB8C  4B DB 12 59 */	bl __nw__FUl
/* 80272C50 0026FB90  7C 7E 1B 79 */	or. r30, r3, r3
/* 80272C54 0026FB94  41 82 00 44 */	beq .L_80272C98
/* 80272C58 0026FB98  4B EB 4D 1D */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80272C5C 0026FB9C  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai14ProperAnimator@ha
/* 80272C60 0026FBA0  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 80272C64 0026FBA4  38 03 64 A0 */	addi r0, r3, __vt__Q34Game5Sarai14ProperAnimator@l
/* 80272C68 0026FBA8  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80272C6C 0026FBAC  90 1E 00 00 */	stw r0, 0(r30)
/* 80272C70 0026FBB0  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 80272C74 0026FBB4  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 80272C78 0026FBB8  38 00 00 00 */	li r0, 0
/* 80272C7C 0026FBBC  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80272C80 0026FBC0  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80272C84 0026FBC4  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80272C88 0026FBC8  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80272C8C 0026FBCC  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80272C90 0026FBD0  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80272C94 0026FBD4  90 1E 00 20 */	stw r0, 0x20(r30)
.L_80272C98:
/* 80272C98 0026FBD8  93 DF 01 84 */	stw r30, 0x184(r31)
/* 80272C9C 0026FBDC  38 60 00 1C */	li r3, 0x1c
/* 80272CA0 0026FBE0  4B DB 12 05 */	bl __nw__FUl
/* 80272CA4 0026FBE4  7C 64 1B 79 */	or. r4, r3, r3
/* 80272CA8 0026FBE8  41 82 00 24 */	beq .L_80272CCC
/* 80272CAC 0026FBEC  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 80272CB0 0026FBF0  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai3FSM@ha
/* 80272CB4 0026FBF4  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 80272CB8 0026FBF8  38 A0 FF FF */	li r5, -1
/* 80272CBC 0026FBFC  90 04 00 00 */	stw r0, 0(r4)
/* 80272CC0 0026FC00  38 03 64 78 */	addi r0, r3, __vt__Q34Game5Sarai3FSM@l
/* 80272CC4 0026FC04  90 A4 00 18 */	stw r5, 0x18(r4)
/* 80272CC8 0026FC08  90 04 00 00 */	stw r0, 0(r4)
.L_80272CCC:
/* 80272CCC 0026FC0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80272CD0 0026FC10  7F E3 FB 78 */	mr r3, r31
/* 80272CD4 0026FC14  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 80272CD8 0026FC18  7D 89 03 A6 */	mtctr r12
/* 80272CDC 0026FC1C  4E 80 04 21 */	bctrl 
/* 80272CE0 0026FC20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80272CE4 0026FC24  7F E3 FB 78 */	mr r3, r31
/* 80272CE8 0026FC28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80272CEC 0026FC2C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80272CF0 0026FC30  7C 08 03 A6 */	mtlr r0
/* 80272CF4 0026FC34  38 21 00 10 */	addi r1, r1, 0x10
/* 80272CF8 0026FC38  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game5Sarai3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game5Sarai3ObjFPQ24Game21EnemyInitialParamBase:
/* 80272CFC 0026FC3C  4E 80 00 20 */	blr 

.global onInit__Q34Game5Sarai3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game5Sarai3ObjFPQ24Game15CreatureInitArg:
/* 80272D00 0026FC40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80272D04 0026FC44  7C 08 02 A6 */	mflr r0
/* 80272D08 0026FC48  90 01 00 14 */	stw r0, 0x14(r1)
/* 80272D0C 0026FC4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80272D10 0026FC50  7C 7F 1B 78 */	mr r31, r3
/* 80272D14 0026FC54  4B E8 ED 45 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 80272D18 0026FC58  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80272D1C 0026FC5C  7F E3 FB 78 */	mr r3, r31
/* 80272D20 0026FC60  C0 02 CE 98 */	lfs f0, lbl_8051B1F8@sda21(r2)
/* 80272D24 0026FC64  60 00 00 04 */	ori r0, r0, 4
/* 80272D28 0026FC68  C0 22 CE 9C */	lfs f1, lbl_8051B1FC@sda21(r2)
/* 80272D2C 0026FC6C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80272D30 0026FC70  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80272D34 0026FC74  81 9F 00 00 */	lwz r12, 0(r31)
/* 80272D38 0026FC78  81 8C 03 08 */	lwz r12, 0x308(r12)
/* 80272D3C 0026FC7C  7D 89 03 A6 */	mtctr r12
/* 80272D40 0026FC80  4E 80 04 21 */	bctrl 
/* 80272D44 0026FC84  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80272D48 0026FC88  7F E4 FB 78 */	mr r4, r31
/* 80272D4C 0026FC8C  38 A0 00 06 */	li r5, 6
/* 80272D50 0026FC90  38 C0 00 00 */	li r6, 0
/* 80272D54 0026FC94  81 83 00 00 */	lwz r12, 0(r3)
/* 80272D58 0026FC98  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80272D5C 0026FC9C  7D 89 03 A6 */	mtctr r12
/* 80272D60 0026FCA0  4E 80 04 21 */	bctrl 
/* 80272D64 0026FCA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80272D68 0026FCA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80272D6C 0026FCAC  7C 08 03 A6 */	mtlr r0
/* 80272D70 0026FCB0  38 21 00 10 */	addi r1, r1, 0x10
/* 80272D74 0026FCB4  4E 80 00 20 */	blr 

.global doUpdate__Q34Game5Sarai3ObjFv
doUpdate__Q34Game5Sarai3ObjFv:
/* 80272D78 0026FCB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80272D7C 0026FCBC  7C 08 02 A6 */	mflr r0
/* 80272D80 0026FCC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80272D84 0026FCC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80272D88 0026FCC8  7C 7F 1B 78 */	mr r31, r3
/* 80272D8C 0026FCCC  7F E4 FB 78 */	mr r4, r31
/* 80272D90 0026FCD0  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80272D94 0026FCD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80272D98 0026FCD8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80272D9C 0026FCDC  7D 89 03 A6 */	mtctr r12
/* 80272DA0 0026FCE0  4E 80 04 21 */	bctrl 
/* 80272DA4 0026FCE4  38 7F 02 C4 */	addi r3, r31, 0x2c4
/* 80272DA8 0026FCE8  4B EC 58 85 */	bl update__10MouthSlotsFv
/* 80272DAC 0026FCEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80272DB0 0026FCF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80272DB4 0026FCF4  7C 08 03 A6 */	mtlr r0
/* 80272DB8 0026FCF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80272DBC 0026FCFC  4E 80 00 20 */	blr 

.global setFSM__Q34Game5Sarai3ObjFPQ34Game5Sarai3FSM
setFSM__Q34Game5Sarai3ObjFPQ34Game5Sarai3FSM:
/* 80272DC0 0026FD00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80272DC4 0026FD04  7C 08 02 A6 */	mflr r0
/* 80272DC8 0026FD08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80272DCC 0026FD0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80272DD0 0026FD10  7C 7F 1B 78 */	mr r31, r3
/* 80272DD4 0026FD14  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 80272DD8 0026FD18  7F E4 FB 78 */	mr r4, r31
/* 80272DDC 0026FD1C  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80272DE0 0026FD20  81 83 00 00 */	lwz r12, 0(r3)
/* 80272DE4 0026FD24  81 8C 00 08 */	lwz r12, 8(r12)
/* 80272DE8 0026FD28  7D 89 03 A6 */	mtctr r12
/* 80272DEC 0026FD2C  4E 80 04 21 */	bctrl 
/* 80272DF0 0026FD30  38 00 00 00 */	li r0, 0
/* 80272DF4 0026FD34  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80272DF8 0026FD38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80272DFC 0026FD3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80272E00 0026FD40  7C 08 03 A6 */	mtlr r0
/* 80272E04 0026FD44  38 21 00 10 */	addi r1, r1, 0x10
/* 80272E08 0026FD48  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game5Sarai3ObjFR8Graphics
doDirectDraw__Q34Game5Sarai3ObjFR8Graphics:
/* 80272E0C 0026FD4C  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game5Sarai3ObjFR8Graphics
doDebugDraw__Q34Game5Sarai3ObjFR8Graphics:
/* 80272E10 0026FD50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80272E14 0026FD54  7C 08 02 A6 */	mflr r0
/* 80272E18 0026FD58  90 01 00 14 */	stw r0, 0x14(r1)
/* 80272E1C 0026FD5C  4B E9 30 51 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 80272E20 0026FD60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80272E24 0026FD64  7C 08 03 A6 */	mtlr r0
/* 80272E28 0026FD68  38 21 00 10 */	addi r1, r1, 0x10
/* 80272E2C 0026FD6C  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game5Sarai3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game5Sarai3ObjFRQ24Game11ShadowParam:
/* 80272E30 0026FD70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80272E34 0026FD74  7C 08 02 A6 */	mflr r0
/* 80272E38 0026FD78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80272E3C 0026FD7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80272E40 0026FD80  7C 9F 23 78 */	mr r31, r4
/* 80272E44 0026FD84  38 82 CE A0 */	addi r4, r2, lbl_8051B200@sda21
/* 80272E48 0026FD88  93 C1 00 08 */	stw r30, 8(r1)
/* 80272E4C 0026FD8C  7C 7E 1B 78 */	mr r30, r3
/* 80272E50 0026FD90  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80272E54 0026FD94  48 1C C1 91 */	bl getJoint__Q28SysShape5ModelFPc
/* 80272E58 0026FD98  48 1B 6A 49 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80272E5C 0026FD9C  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 80272E60 0026FDA0  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80272E64 0026FDA4  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80272E68 0026FDA8  7F C3 F3 78 */	mr r3, r30
/* 80272E6C 0026FDAC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80272E70 0026FDB0  D0 3F 00 04 */	stfs f1, 4(r31)
/* 80272E74 0026FDB4  D0 5F 00 08 */	stfs f2, 8(r31)
/* 80272E78 0026FDB8  81 9E 00 00 */	lwz r12, 0(r30)
/* 80272E7C 0026FDBC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80272E80 0026FDC0  7D 89 03 A6 */	mtctr r12
/* 80272E84 0026FDC4  4E 80 04 21 */	bctrl 
/* 80272E88 0026FDC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80272E8C 0026FDCC  41 82 00 98 */	beq .L_80272F24
/* 80272E90 0026FDD0  7F C3 F3 78 */	mr r3, r30
/* 80272E94 0026FDD4  4B E9 45 61 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80272E98 0026FDD8  38 03 FF FF */	addi r0, r3, -1
/* 80272E9C 0026FDDC  28 00 00 01 */	cmplwi r0, 1
/* 80272EA0 0026FDE0  40 81 00 0C */	ble .L_80272EAC
/* 80272EA4 0026FDE4  2C 03 00 03 */	cmpwi r3, 3
/* 80272EA8 0026FDE8  40 82 00 2C */	bne .L_80272ED4
.L_80272EAC:
/* 80272EAC 0026FDEC  C0 5F 00 04 */	lfs f2, 4(r31)
/* 80272EB0 0026FDF0  C0 02 CE A8 */	lfs f0, lbl_8051B208@sda21(r2)
/* 80272EB4 0026FDF4  C0 22 CE AC */	lfs f1, lbl_8051B20C@sda21(r2)
/* 80272EB8 0026FDF8  EC 02 00 28 */	fsubs f0, f2, f0
/* 80272EBC 0026FDFC  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80272EC0 0026FE00  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80272EC4 0026FE04  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 80272EC8 0026FE08  EC 01 00 2A */	fadds f0, f1, f0
/* 80272ECC 0026FE0C  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80272ED0 0026FE10  48 00 00 6C */	b .L_80272F3C
.L_80272ED4:
/* 80272ED4 0026FE14  80 1E 00 C8 */	lwz r0, 0xc8(r30)
/* 80272ED8 0026FE18  28 00 00 00 */	cmplwi r0, 0
/* 80272EDC 0026FE1C  41 82 00 20 */	beq .L_80272EFC
/* 80272EE0 0026FE20  C0 5F 00 04 */	lfs f2, 4(r31)
/* 80272EE4 0026FE24  C0 22 CE A8 */	lfs f1, lbl_8051B208@sda21(r2)
/* 80272EE8 0026FE28  C0 02 CE B0 */	lfs f0, lbl_8051B210@sda21(r2)
/* 80272EEC 0026FE2C  EC 22 08 28 */	fsubs f1, f2, f1
/* 80272EF0 0026FE30  D0 3F 00 04 */	stfs f1, 4(r31)
/* 80272EF4 0026FE34  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80272EF8 0026FE38  48 00 00 44 */	b .L_80272F3C
.L_80272EFC:
/* 80272EFC 0026FE3C  C0 5F 00 04 */	lfs f2, 4(r31)
/* 80272F00 0026FE40  C0 02 CE B4 */	lfs f0, lbl_8051B214@sda21(r2)
/* 80272F04 0026FE44  C0 22 CE AC */	lfs f1, lbl_8051B20C@sda21(r2)
/* 80272F08 0026FE48  EC 02 00 28 */	fsubs f0, f2, f0
/* 80272F0C 0026FE4C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80272F10 0026FE50  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80272F14 0026FE54  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 80272F18 0026FE58  EC 01 00 2A */	fadds f0, f1, f0
/* 80272F1C 0026FE5C  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80272F20 0026FE60  48 00 00 1C */	b .L_80272F3C
.L_80272F24:
/* 80272F24 0026FE64  C0 42 CE B8 */	lfs f2, lbl_8051B218@sda21(r2)
/* 80272F28 0026FE68  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 80272F2C 0026FE6C  C0 02 CE BC */	lfs f0, lbl_8051B21C@sda21(r2)
/* 80272F30 0026FE70  EC 22 08 2A */	fadds f1, f2, f1
/* 80272F34 0026FE74  D0 3F 00 04 */	stfs f1, 4(r31)
/* 80272F38 0026FE78  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_80272F3C:
/* 80272F3C 0026FE7C  C0 42 CE 98 */	lfs f2, lbl_8051B1F8@sda21(r2)
/* 80272F40 0026FE80  C0 22 CE C0 */	lfs f1, lbl_8051B220@sda21(r2)
/* 80272F44 0026FE84  D0 5F 00 0C */	stfs f2, 0xc(r31)
/* 80272F48 0026FE88  C0 02 CE C4 */	lfs f0, lbl_8051B224@sda21(r2)
/* 80272F4C 0026FE8C  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 80272F50 0026FE90  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 80272F54 0026FE94  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80272F58 0026FE98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80272F5C 0026FE9C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80272F60 0026FEA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80272F64 0026FEA4  7C 08 03 A6 */	mtlr r0
/* 80272F68 0026FEA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80272F6C 0026FEAC  4E 80 00 20 */	blr 

.global doStartStoneState__Q34Game5Sarai3ObjFv
doStartStoneState__Q34Game5Sarai3ObjFv:
/* 80272F70 0026FEB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80272F74 0026FEB4  7C 08 02 A6 */	mflr r0
/* 80272F78 0026FEB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80272F7C 0026FEBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80272F80 0026FEC0  7C 7F 1B 78 */	mr r31, r3
/* 80272F84 0026FEC4  4B E8 FF 71 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 80272F88 0026FEC8  7F E3 FB 78 */	mr r3, r31
/* 80272F8C 0026FECC  48 00 08 D1 */	bl flickStickTarget__Q34Game5Sarai3ObjFv
/* 80272F90 0026FED0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80272F94 0026FED4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80272F98 0026FED8  7C 08 03 A6 */	mtlr r0
/* 80272F9C 0026FEDC  38 21 00 10 */	addi r1, r1, 0x10
/* 80272FA0 0026FEE0  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game5Sarai3ObjFv
doFinishStoneState__Q34Game5Sarai3ObjFv:
/* 80272FA4 0026FEE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80272FA8 0026FEE8  7C 08 02 A6 */	mflr r0
/* 80272FAC 0026FEEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80272FB0 0026FEF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80272FB4 0026FEF4  7C 7F 1B 78 */	mr r31, r3
/* 80272FB8 0026FEF8  4B E8 FF 51 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 80272FBC 0026FEFC  7F E3 FB 78 */	mr r3, r31
/* 80272FC0 0026FF00  4B E9 44 35 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80272FC4 0026FF04  2C 03 00 03 */	cmpwi r3, 3
/* 80272FC8 0026FF08  41 80 00 24 */	blt .L_80272FEC
/* 80272FCC 0026FF0C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80272FD0 0026FF10  7F E4 FB 78 */	mr r4, r31
/* 80272FD4 0026FF14  38 A0 00 03 */	li r5, 3
/* 80272FD8 0026FF18  38 C0 00 00 */	li r6, 0
/* 80272FDC 0026FF1C  81 83 00 00 */	lwz r12, 0(r3)
/* 80272FE0 0026FF20  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80272FE4 0026FF24  7D 89 03 A6 */	mtctr r12
/* 80272FE8 0026FF28  4E 80 04 21 */	bctrl 
.L_80272FEC:
/* 80272FEC 0026FF2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80272FF0 0026FF30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80272FF4 0026FF34  7C 08 03 A6 */	mtlr r0
/* 80272FF8 0026FF38  38 21 00 10 */	addi r1, r1, 0x10
/* 80272FFC 0026FF3C  4E 80 00 20 */	blr 

.global startCarcassMotion__Q34Game5Sarai3ObjFv
startCarcassMotion__Q34Game5Sarai3ObjFv:
/* 80273000 0026FF40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80273004 0026FF44  7C 08 02 A6 */	mflr r0
/* 80273008 0026FF48  38 80 00 0B */	li r4, 0xb
/* 8027300C 0026FF4C  38 A0 00 00 */	li r5, 0
/* 80273010 0026FF50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80273014 0026FF54  4B E9 1F F1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80273018 0026FF58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027301C 0026FF5C  7C 08 03 A6 */	mtlr r0
/* 80273020 0026FF60  38 21 00 10 */	addi r1, r1, 0x10
/* 80273024 0026FF64  4E 80 00 20 */	blr 

.global initMouthSlots__Q34Game5Sarai3ObjFv
initMouthSlots__Q34Game5Sarai3ObjFv:
/* 80273028 0026FF68  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8027302C 0026FF6C  7C 08 02 A6 */	mflr r0
/* 80273030 0026FF70  90 01 00 24 */	stw r0, 0x24(r1)
/* 80273034 0026FF74  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80273038 0026FF78  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8027303C 0026FF7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80273040 0026FF80  93 C1 00 08 */	stw r30, 8(r1)
/* 80273044 0026FF84  7C 7E 1B 78 */	mr r30, r3
/* 80273048 0026FF88  38 80 00 02 */	li r4, 2
/* 8027304C 0026FF8C  38 7E 02 C4 */	addi r3, r30, 0x2c4
/* 80273050 0026FF90  4B EC 55 09 */	bl alloc__10MouthSlotsFi
/* 80273054 0026FF94  3C 60 80 48 */	lis r3, lbl_80486C50@ha
/* 80273058 0026FF98  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 8027305C 0026FF9C  38 C3 6C 50 */	addi r6, r3, lbl_80486C50@l
/* 80273060 0026FFA0  38 80 00 00 */	li r4, 0
/* 80273064 0026FFA4  38 7E 02 C4 */	addi r3, r30, 0x2c4
/* 80273068 0026FFA8  4B EC 56 29 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 8027306C 0026FFAC  3C 60 80 48 */	lis r3, lbl_80486C5C@ha
/* 80273070 0026FFB0  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 80273074 0026FFB4  38 C3 6C 5C */	addi r6, r3, lbl_80486C5C@l
/* 80273078 0026FFB8  38 80 00 01 */	li r4, 1
/* 8027307C 0026FFBC  38 7E 02 C4 */	addi r3, r30, 0x2c4
/* 80273080 0026FFC0  4B EC 56 11 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 80273084 0026FFC4  C3 E2 CE C8 */	lfs f31, lbl_8051B228@sda21(r2)
/* 80273088 0026FFC8  3B E0 00 00 */	li r31, 0
/* 8027308C 0026FFCC  48 00 00 18 */	b .L_802730A4
.L_80273090:
/* 80273090 0026FFD0  7F E4 FB 78 */	mr r4, r31
/* 80273094 0026FFD4  38 7E 02 C4 */	addi r3, r30, 0x2c4
/* 80273098 0026FFD8  4B EC 56 E1 */	bl getSlot__10MouthSlotsFi
/* 8027309C 0026FFDC  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 802730A0 0026FFE0  3B FF 00 01 */	addi r31, r31, 1
.L_802730A4:
/* 802730A4 0026FFE4  80 1E 02 C4 */	lwz r0, 0x2c4(r30)
/* 802730A8 0026FFE8  7C 1F 00 00 */	cmpw r31, r0
/* 802730AC 0026FFEC  41 80 FF E4 */	blt .L_80273090
/* 802730B0 0026FFF0  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802730B4 0026FFF4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802730B8 0026FFF8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802730BC 0026FFFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802730C0 00270000  83 C1 00 08 */	lwz r30, 8(r1)
/* 802730C4 00270004  7C 08 03 A6 */	mtlr r0
/* 802730C8 00270008  38 21 00 20 */	addi r1, r1, 0x20
/* 802730CC 0027000C  4E 80 00 20 */	blr 

.global setHeightVelocity__Q34Game5Sarai3ObjFv
setHeightVelocity__Q34Game5Sarai3ObjFv:
/* 802730D0 00270010  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802730D4 00270014  7C 08 02 A6 */	mflr r0
/* 802730D8 00270018  90 01 00 44 */	stw r0, 0x44(r1)
/* 802730DC 0027001C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802730E0 00270020  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802730E4 00270024  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 802730E8 00270028  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 802730EC 0027002C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802730F0 00270030  7C 7F 1B 78 */	mr r31, r3
/* 802730F4 00270034  80 63 01 F4 */	lwz r3, 0x1f4(r3)
/* 802730F8 00270038  2C 03 00 00 */	cmpwi r3, 0
/* 802730FC 0027003C  40 80 00 0C */	bge .L_80273108
/* 80273100 00270040  38 00 00 00 */	li r0, 0
/* 80273104 00270044  48 00 00 14 */	b .L_80273118
.L_80273108:
/* 80273108 00270048  2C 03 00 05 */	cmpwi r3, 5
/* 8027310C 0027004C  38 00 00 05 */	li r0, 5
/* 80273110 00270050  41 81 00 08 */	bgt .L_80273118
/* 80273114 00270054  7C 60 1B 78 */	mr r0, r3
.L_80273118:
/* 80273118 00270058  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 8027311C 0027005C  3C 00 43 30 */	lis r0, 0x4330
/* 80273120 00270060  90 61 00 0C */	stw r3, 0xc(r1)
/* 80273124 00270064  38 9F 01 8C */	addi r4, r31, 0x18c
/* 80273128 00270068  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8027312C 0027006C  90 01 00 08 */	stw r0, 8(r1)
/* 80273130 00270070  C8 22 CE D0 */	lfd f1, lbl_8051B230@sda21(r2)
/* 80273134 00270074  C8 01 00 08 */	lfd f0, 8(r1)
/* 80273138 00270078  C0 82 CE A8 */	lfs f4, lbl_8051B208@sda21(r2)
/* 8027313C 0027007C  EC 20 08 28 */	fsubs f1, f0, f1
/* 80273140 00270080  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80273144 00270084  C0 05 09 34 */	lfs f0, 0x934(r5)
/* 80273148 00270088  81 83 00 04 */	lwz r12, 4(r3)
/* 8027314C 0027008C  EC 64 08 28 */	fsubs f3, f4, f1
/* 80273150 00270090  C0 45 09 0C */	lfs f2, 0x90c(r5)
/* 80273154 00270094  EC 21 20 24 */	fdivs f1, f1, f4
/* 80273158 00270098  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8027315C 0027009C  EC 63 20 24 */	fdivs f3, f3, f4
/* 80273160 002700A0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80273164 002700A4  EF C3 00 BA */	fmadds f30, f3, f2, f0
/* 80273168 002700A8  7D 89 03 A6 */	mtctr r12
/* 8027316C 002700AC  4E 80 04 21 */	bctrl 
/* 80273170 002700B0  FF E0 08 90 */	fmr f31, f1
/* 80273174 002700B4  7F E3 FB 78 */	mr r3, r31
/* 80273178 002700B8  48 00 05 25 */	bl getCatchTargetNum__Q34Game5Sarai3ObjFv
/* 8027317C 002700BC  2C 03 00 00 */	cmpwi r3, 0
/* 80273180 002700C0  41 82 00 10 */	beq .L_80273190
/* 80273184 002700C4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80273188 002700C8  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 8027318C 002700CC  48 00 00 0C */	b .L_80273198
.L_80273190:
/* 80273190 002700D0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80273194 002700D4  C0 03 08 1C */	lfs f0, 0x81c(r3)
.L_80273198:
/* 80273198 002700D8  EC 3F 00 2A */	fadds f1, f31, f0
/* 8027319C 002700DC  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802731A0 002700E0  EC 01 00 28 */	fsubs f0, f1, f0
/* 802731A4 002700E4  EC 1E 00 32 */	fmuls f0, f30, f0
/* 802731A8 002700E8  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 802731AC 002700EC  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802731B0 002700F0  EC 20 F8 28 */	fsubs f1, f0, f31
/* 802731B4 002700F4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802731B8 002700F8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802731BC 002700FC  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 802731C0 00270100  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 802731C4 00270104  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802731C8 00270108  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802731CC 0027010C  7C 08 03 A6 */	mtlr r0
/* 802731D0 00270110  38 21 00 40 */	addi r1, r1, 0x40
/* 802731D4 00270114  4E 80 00 20 */	blr 

.global setRandTarget__Q34Game5Sarai3ObjFv
setRandTarget__Q34Game5Sarai3ObjFv:
/* 802731D8 00270118  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802731DC 0027011C  7C 08 02 A6 */	mflr r0
/* 802731E0 00270120  90 01 00 54 */	stw r0, 0x54(r1)
/* 802731E4 00270124  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802731E8 00270128  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802731EC 0027012C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 802731F0 00270130  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 802731F4 00270134  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802731F8 00270138  7C 7F 1B 78 */	mr r31, r3
/* 802731FC 0027013C  48 00 04 A1 */	bl getCatchTargetNum__Q34Game5Sarai3ObjFv
/* 80273200 00270140  2C 03 00 00 */	cmpwi r3, 0
/* 80273204 00270144  41 82 00 40 */	beq .L_80273244
/* 80273208 00270148  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8027320C 0027014C  C3 C3 03 84 */	lfs f30, 0x384(r3)
/* 80273210 00270150  4B E5 63 91 */	bl rand
/* 80273214 00270154  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80273218 00270158  3C 00 43 30 */	lis r0, 0x4330
/* 8027321C 0027015C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80273220 00270160  C8 42 CE D0 */	lfd f2, lbl_8051B230@sda21(r2)
/* 80273224 00270164  90 01 00 08 */	stw r0, 8(r1)
/* 80273228 00270168  C0 02 CE D8 */	lfs f0, lbl_8051B238@sda21(r2)
/* 8027322C 0027016C  C8 21 00 08 */	lfd f1, 8(r1)
/* 80273230 00270170  EC 21 10 28 */	fsubs f1, f1, f2
/* 80273234 00270174  EC 3E 00 72 */	fmuls f1, f30, f1
/* 80273238 00270178  EC 01 00 24 */	fdivs f0, f1, f0
/* 8027323C 0027017C  FF E0 00 90 */	fmr f31, f0
/* 80273240 00270180  48 00 00 9C */	b .L_802732DC
.L_80273244:
/* 80273244 00270184  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80273248 00270188  28 03 00 00 */	cmplwi r3, 0
/* 8027324C 0027018C  41 82 00 48 */	beq .L_80273294
/* 80273250 00270190  88 03 00 48 */	lbz r0, 0x48(r3)
/* 80273254 00270194  28 00 00 00 */	cmplwi r0, 0
/* 80273258 00270198  41 82 00 3C */	beq .L_80273294
/* 8027325C 0027019C  4B E5 63 45 */	bl rand
/* 80273260 002701A0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80273264 002701A4  3C 00 43 30 */	lis r0, 0x4330
/* 80273268 002701A8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8027326C 002701AC  C8 62 CE D0 */	lfd f3, lbl_8051B230@sda21(r2)
/* 80273270 002701B0  90 01 00 08 */	stw r0, 8(r1)
/* 80273274 002701B4  C0 42 CE B0 */	lfs f2, lbl_8051B210@sda21(r2)
/* 80273278 002701B8  C8 21 00 08 */	lfd f1, 8(r1)
/* 8027327C 002701BC  C0 02 CE D8 */	lfs f0, lbl_8051B238@sda21(r2)
/* 80273280 002701C0  EC 21 18 28 */	fsubs f1, f1, f3
/* 80273284 002701C4  EC 22 00 72 */	fmuls f1, f2, f1
/* 80273288 002701C8  EC 01 00 24 */	fdivs f0, f1, f0
/* 8027328C 002701CC  EF E2 00 2A */	fadds f31, f2, f0
/* 80273290 002701D0  48 00 00 4C */	b .L_802732DC
.L_80273294:
/* 80273294 002701D4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80273298 002701D8  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 8027329C 002701DC  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802732A0 002701E0  EF C1 00 28 */	fsubs f30, f1, f0
/* 802732A4 002701E4  4B E5 62 FD */	bl rand
/* 802732A8 002701E8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802732AC 002701EC  3C 00 43 30 */	lis r0, 0x4330
/* 802732B0 002701F0  90 61 00 0C */	stw r3, 0xc(r1)
/* 802732B4 002701F4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802732B8 002701F8  90 01 00 08 */	stw r0, 8(r1)
/* 802732BC 002701FC  C8 42 CE D0 */	lfd f2, lbl_8051B230@sda21(r2)
/* 802732C0 00270200  C8 01 00 08 */	lfd f0, 8(r1)
/* 802732C4 00270204  C0 22 CE D8 */	lfs f1, lbl_8051B238@sda21(r2)
/* 802732C8 00270208  EC 40 10 28 */	fsubs f2, f0, f2
/* 802732CC 0027020C  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802732D0 00270210  EC 5E 00 B2 */	fmuls f2, f30, f2
/* 802732D4 00270214  EC 22 08 24 */	fdivs f1, f2, f1
/* 802732D8 00270218  EF E0 08 2A */	fadds f31, f0, f1
.L_802732DC:
/* 802732DC 0027021C  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 802732E0 00270220  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802732E4 00270224  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 802732E8 00270228  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802732EC 0027022C  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 802732F0 00270230  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802732F4 00270234  EC 23 08 28 */	fsubs f1, f3, f1
/* 802732F8 00270238  EC 42 00 28 */	fsubs f2, f2, f0
/* 802732FC 0027023C  4B DC 1E 0D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80273300 00270240  FF C0 08 90 */	fmr f30, f1
/* 80273304 00270244  4B E5 62 9D */	bl rand
/* 80273308 00270248  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8027330C 0027024C  3C 00 43 30 */	lis r0, 0x4330
/* 80273310 00270250  90 61 00 0C */	stw r3, 0xc(r1)
/* 80273314 00270254  C8 42 CE D0 */	lfd f2, lbl_8051B230@sda21(r2)
/* 80273318 00270258  90 01 00 08 */	stw r0, 8(r1)
/* 8027331C 0027025C  C0 62 CE DC */	lfs f3, lbl_8051B23C@sda21(r2)
/* 80273320 00270260  C8 01 00 08 */	lfd f0, 8(r1)
/* 80273324 00270264  C0 22 CE D8 */	lfs f1, lbl_8051B238@sda21(r2)
/* 80273328 00270268  EC 80 10 28 */	fsubs f4, f0, f2
/* 8027332C 0027026C  C0 42 CE E0 */	lfs f2, lbl_8051B240@sda21(r2)
/* 80273330 00270270  C0 02 CE 98 */	lfs f0, lbl_8051B1F8@sda21(r2)
/* 80273334 00270274  EC 63 01 32 */	fmuls f3, f3, f4
/* 80273338 00270278  EC 23 08 24 */	fdivs f1, f3, f1
/* 8027333C 0027027C  EC 3E 08 2A */	fadds f1, f30, f1
/* 80273340 00270280  EC A2 08 2A */	fadds f5, f2, f1
/* 80273344 00270284  FC 20 28 90 */	fmr f1, f5
/* 80273348 00270288  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8027334C 0027028C  40 80 00 08 */	bge .L_80273354
/* 80273350 00270290  FC 20 28 50 */	fneg f1, f5
.L_80273354:
/* 80273354 00270294  C0 62 CE E4 */	lfs f3, lbl_8051B244@sda21(r2)
/* 80273358 00270298  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8027335C 0027029C  C0 02 CE 98 */	lfs f0, lbl_8051B1F8@sda21(r2)
/* 80273360 002702A0  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80273364 002702A4  EC 41 00 F2 */	fmuls f2, f1, f3
/* 80273368 002702A8  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 8027336C 002702AC  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80273370 002702B0  C0 9F 01 9C */	lfs f4, 0x19c(r31)
/* 80273374 002702B4  FC 00 10 1E */	fctiwz f0, f2
/* 80273378 002702B8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8027337C 002702BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80273380 002702C0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80273384 002702C4  7C 64 02 14 */	add r3, r4, r0
/* 80273388 002702C8  C0 03 00 04 */	lfs f0, 4(r3)
/* 8027338C 002702CC  EC 5F 08 3A */	fmadds f2, f31, f0, f1
/* 80273390 002702D0  40 80 00 28 */	bge .L_802733B8
/* 80273394 002702D4  C0 02 CE E8 */	lfs f0, lbl_8051B248@sda21(r2)
/* 80273398 002702D8  EC 05 00 32 */	fmuls f0, f5, f0
/* 8027339C 002702DC  FC 00 00 1E */	fctiwz f0, f0
/* 802733A0 002702E0  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802733A4 002702E4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802733A8 002702E8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802733AC 002702EC  7C 04 04 2E */	lfsx f0, r4, r0
/* 802733B0 002702F0  FC 20 00 50 */	fneg f1, f0
/* 802733B4 002702F4  48 00 00 1C */	b .L_802733D0
.L_802733B8:
/* 802733B8 002702F8  EC 05 00 F2 */	fmuls f0, f5, f3
/* 802733BC 002702FC  FC 00 00 1E */	fctiwz f0, f0
/* 802733C0 00270300  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802733C4 00270304  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802733C8 00270308  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802733CC 0027030C  7C 24 04 2E */	lfsx f1, r4, r0
.L_802733D0:
/* 802733D0 00270310  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 802733D4 00270314  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 802733D8 00270318  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802733DC 0027031C  D0 9F 02 D0 */	stfs f4, 0x2d0(r31)
/* 802733E0 00270320  D0 5F 02 D4 */	stfs f2, 0x2d4(r31)
/* 802733E4 00270324  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802733E8 00270328  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802733EC 0027032C  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 802733F0 00270330  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 802733F4 00270334  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802733F8 00270338  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802733FC 0027033C  7C 08 03 A6 */	mtlr r0
/* 80273400 00270340  38 21 00 50 */	addi r1, r1, 0x50
/* 80273404 00270344  4E 80 00 20 */	blr 

.global fallMeckGround__Q34Game5Sarai3ObjFv
fallMeckGround__Q34Game5Sarai3ObjFv:
/* 80273408 00270348  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8027340C 0027034C  7C 08 02 A6 */	mflr r0
/* 80273410 00270350  90 01 00 64 */	stw r0, 0x64(r1)
/* 80273414 00270354  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80273418 00270358  7C 7F 1B 78 */	mr r31, r3
/* 8027341C 0027035C  38 61 00 30 */	addi r3, r1, 0x30
/* 80273420 00270360  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80273424 00270364  7F E4 FB 78 */	mr r4, r31
/* 80273428 00270368  4B F2 C8 35 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 8027342C 0027036C  38 00 00 00 */	li r0, 0
/* 80273430 00270370  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80273434 00270374  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80273438 00270378  38 61 00 30 */	addi r3, r1, 0x30
/* 8027343C 0027037C  28 00 00 00 */	cmplwi r0, 0
/* 80273440 00270380  90 81 00 20 */	stw r4, 0x20(r1)
/* 80273444 00270384  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80273448 00270388  90 01 00 24 */	stw r0, 0x24(r1)
/* 8027344C 0027038C  90 61 00 28 */	stw r3, 0x28(r1)
/* 80273450 00270390  40 82 00 1C */	bne .L_8027346C
/* 80273454 00270394  81 83 00 00 */	lwz r12, 0(r3)
/* 80273458 00270398  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8027345C 0027039C  7D 89 03 A6 */	mtctr r12
/* 80273460 002703A0  4E 80 04 21 */	bctrl 
/* 80273464 002703A4  90 61 00 24 */	stw r3, 0x24(r1)
/* 80273468 002703A8  48 00 01 F0 */	b .L_80273658
.L_8027346C:
/* 8027346C 002703AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80273470 002703B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80273474 002703B4  7D 89 03 A6 */	mtctr r12
/* 80273478 002703B8  4E 80 04 21 */	bctrl 
/* 8027347C 002703BC  90 61 00 24 */	stw r3, 0x24(r1)
/* 80273480 002703C0  48 00 00 58 */	b .L_802734D8
.L_80273484:
/* 80273484 002703C4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80273488 002703C8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8027348C 002703CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80273490 002703D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80273494 002703D4  7D 89 03 A6 */	mtctr r12
/* 80273498 002703D8  4E 80 04 21 */	bctrl 
/* 8027349C 002703DC  7C 64 1B 78 */	mr r4, r3
/* 802734A0 002703E0  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 802734A4 002703E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802734A8 002703E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802734AC 002703EC  7D 89 03 A6 */	mtctr r12
/* 802734B0 002703F0  4E 80 04 21 */	bctrl 
/* 802734B4 002703F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802734B8 002703F8  40 82 01 A0 */	bne .L_80273658
/* 802734BC 002703FC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802734C0 00270400  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802734C4 00270404  81 83 00 00 */	lwz r12, 0(r3)
/* 802734C8 00270408  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802734CC 0027040C  7D 89 03 A6 */	mtctr r12
/* 802734D0 00270410  4E 80 04 21 */	bctrl 
/* 802734D4 00270414  90 61 00 24 */	stw r3, 0x24(r1)
.L_802734D8:
/* 802734D8 00270418  81 81 00 20 */	lwz r12, 0x20(r1)
/* 802734DC 0027041C  38 61 00 20 */	addi r3, r1, 0x20
/* 802734E0 00270420  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802734E4 00270424  7D 89 03 A6 */	mtctr r12
/* 802734E8 00270428  4E 80 04 21 */	bctrl 
/* 802734EC 0027042C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802734F0 00270430  41 82 FF 94 */	beq .L_80273484
/* 802734F4 00270434  48 00 01 64 */	b .L_80273658
.L_802734F8:
/* 802734F8 00270438  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802734FC 0027043C  81 83 00 00 */	lwz r12, 0(r3)
/* 80273500 00270440  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80273504 00270444  7D 89 03 A6 */	mtctr r12
/* 80273508 00270448  4E 80 04 21 */	bctrl 
/* 8027350C 0027044C  7C 7E 1B 78 */	mr r30, r3
/* 80273510 00270450  4B F2 C0 79 */	bl isStickToMouth__Q24Game8CreatureFv
/* 80273514 00270454  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80273518 00270458  41 82 00 84 */	beq .L_8027359C
/* 8027351C 0027045C  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 80273520 00270460  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 80273524 00270464  3C 80 80 4B */	lis r4, __vt__Q24Game16InteractFallMeck@ha
/* 80273528 00270468  7F C3 F3 78 */	mr r3, r30
/* 8027352C 0027046C  C0 06 06 04 */	lfs f0, 0x604(r6)
/* 80273530 00270470  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 80273534 00270474  38 04 48 E4 */	addi r0, r4, __vt__Q24Game16InteractFallMeck@l
/* 80273538 00270478  38 81 00 14 */	addi r4, r1, 0x14
/* 8027353C 0027047C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80273540 00270480  93 E1 00 18 */	stw r31, 0x18(r1)
/* 80273544 00270484  90 01 00 14 */	stw r0, 0x14(r1)
/* 80273548 00270488  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8027354C 0027048C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80273550 00270490  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80273554 00270494  7D 89 03 A6 */	mtctr r12
/* 80273558 00270498  4E 80 04 21 */	bctrl 
/* 8027355C 0027049C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80273560 002704A0  41 82 00 3C */	beq .L_8027359C
/* 80273564 002704A4  C0 22 CE 98 */	lfs f1, lbl_8051B1F8@sda21(r2)
/* 80273568 002704A8  7F C3 F3 78 */	mr r3, r30
/* 8027356C 002704AC  38 81 00 08 */	addi r4, r1, 8
/* 80273570 002704B0  D0 21 00 08 */	stfs f1, 8(r1)
/* 80273574 002704B4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80273578 002704B8  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8027357C 002704BC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80273580 002704C0  C0 05 0A 24 */	lfs f0, 0xa24(r5)
/* 80273584 002704C4  EC 01 00 28 */	fsubs f0, f1, f0
/* 80273588 002704C8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8027358C 002704CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80273590 002704D0  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80273594 002704D4  7D 89 03 A6 */	mtctr r12
/* 80273598 002704D8  4E 80 04 21 */	bctrl 
.L_8027359C:
/* 8027359C 002704DC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802735A0 002704E0  28 00 00 00 */	cmplwi r0, 0
/* 802735A4 002704E4  40 82 00 24 */	bne .L_802735C8
/* 802735A8 002704E8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802735AC 002704EC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802735B0 002704F0  81 83 00 00 */	lwz r12, 0(r3)
/* 802735B4 002704F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802735B8 002704F8  7D 89 03 A6 */	mtctr r12
/* 802735BC 002704FC  4E 80 04 21 */	bctrl 
/* 802735C0 00270500  90 61 00 24 */	stw r3, 0x24(r1)
/* 802735C4 00270504  48 00 00 94 */	b .L_80273658
.L_802735C8:
/* 802735C8 00270508  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802735CC 0027050C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802735D0 00270510  81 83 00 00 */	lwz r12, 0(r3)
/* 802735D4 00270514  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802735D8 00270518  7D 89 03 A6 */	mtctr r12
/* 802735DC 0027051C  4E 80 04 21 */	bctrl 
/* 802735E0 00270520  90 61 00 24 */	stw r3, 0x24(r1)
/* 802735E4 00270524  48 00 00 58 */	b .L_8027363C
.L_802735E8:
/* 802735E8 00270528  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802735EC 0027052C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802735F0 00270530  81 83 00 00 */	lwz r12, 0(r3)
/* 802735F4 00270534  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802735F8 00270538  7D 89 03 A6 */	mtctr r12
/* 802735FC 0027053C  4E 80 04 21 */	bctrl 
/* 80273600 00270540  7C 64 1B 78 */	mr r4, r3
/* 80273604 00270544  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80273608 00270548  81 83 00 00 */	lwz r12, 0(r3)
/* 8027360C 0027054C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80273610 00270550  7D 89 03 A6 */	mtctr r12
/* 80273614 00270554  4E 80 04 21 */	bctrl 
/* 80273618 00270558  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027361C 0027055C  40 82 00 3C */	bne .L_80273658
/* 80273620 00270560  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80273624 00270564  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80273628 00270568  81 83 00 00 */	lwz r12, 0(r3)
/* 8027362C 0027056C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80273630 00270570  7D 89 03 A6 */	mtctr r12
/* 80273634 00270574  4E 80 04 21 */	bctrl 
/* 80273638 00270578  90 61 00 24 */	stw r3, 0x24(r1)
.L_8027363C:
/* 8027363C 0027057C  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80273640 00270580  38 61 00 20 */	addi r3, r1, 0x20
/* 80273644 00270584  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80273648 00270588  7D 89 03 A6 */	mtctr r12
/* 8027364C 0027058C  4E 80 04 21 */	bctrl 
/* 80273650 00270590  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80273654 00270594  41 82 FF 94 */	beq .L_802735E8
.L_80273658:
/* 80273658 00270598  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8027365C 0027059C  81 83 00 00 */	lwz r12, 0(r3)
/* 80273660 002705A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80273664 002705A4  7D 89 03 A6 */	mtctr r12
/* 80273668 002705A8  4E 80 04 21 */	bctrl 
/* 8027366C 002705AC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80273670 002705B0  7C 04 18 40 */	cmplw r4, r3
/* 80273674 002705B4  40 82 FE 84 */	bne .L_802734F8
/* 80273678 002705B8  38 61 00 30 */	addi r3, r1, 0x30
/* 8027367C 002705BC  38 80 FF FF */	li r4, -1
/* 80273680 002705C0  4B F2 C6 E5 */	bl __dt__Q24Game8StickersFv
/* 80273684 002705C4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80273688 002705C8  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8027368C 002705CC  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80273690 002705D0  7C 08 03 A6 */	mtlr r0
/* 80273694 002705D4  38 21 00 60 */	addi r1, r1, 0x60
/* 80273698 002705D8  4E 80 00 20 */	blr 

.global getCatchTargetNum__Q34Game5Sarai3ObjFv
getCatchTargetNum__Q34Game5Sarai3ObjFv:
/* 8027369C 002705DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802736A0 002705E0  7C 08 02 A6 */	mflr r0
/* 802736A4 002705E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802736A8 002705E8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802736AC 002705EC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802736B0 002705F0  3B C0 00 00 */	li r30, 0
/* 802736B4 002705F4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802736B8 002705F8  3B A0 00 00 */	li r29, 0
/* 802736BC 002705FC  93 81 00 10 */	stw r28, 0x10(r1)
/* 802736C0 00270600  7C 7C 1B 78 */	mr r28, r3
/* 802736C4 00270604  83 E3 02 C4 */	lwz r31, 0x2c4(r3)
/* 802736C8 00270608  48 00 00 24 */	b .L_802736EC
.L_802736CC:
/* 802736CC 0027060C  7F A4 EB 78 */	mr r4, r29
/* 802736D0 00270610  38 7C 02 C4 */	addi r3, r28, 0x2c4
/* 802736D4 00270614  4B EC 50 A5 */	bl getSlot__10MouthSlotsFi
/* 802736D8 00270618  80 03 00 64 */	lwz r0, 0x64(r3)
/* 802736DC 0027061C  28 00 00 00 */	cmplwi r0, 0
/* 802736E0 00270620  41 82 00 08 */	beq .L_802736E8
/* 802736E4 00270624  3B DE 00 01 */	addi r30, r30, 1
.L_802736E8:
/* 802736E8 00270628  3B BD 00 01 */	addi r29, r29, 1
.L_802736EC:
/* 802736EC 0027062C  7C 1D F8 00 */	cmpw r29, r31
/* 802736F0 00270630  41 80 FF DC */	blt .L_802736CC
/* 802736F4 00270634  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802736F8 00270638  7F C3 F3 78 */	mr r3, r30
/* 802736FC 0027063C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80273700 00270640  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80273704 00270644  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80273708 00270648  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8027370C 0027064C  7C 08 03 A6 */	mtlr r0
/* 80273710 00270650  38 21 00 20 */	addi r1, r1, 0x20
/* 80273714 00270654  4E 80 00 20 */	blr 

.global getNextStateOnHeight__Q34Game5Sarai3ObjFv
getNextStateOnHeight__Q34Game5Sarai3ObjFv:
/* 80273718 00270658  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8027371C 0027065C  7C 08 02 A6 */	mflr r0
/* 80273720 00270660  90 01 00 34 */	stw r0, 0x34(r1)
/* 80273724 00270664  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80273728 00270668  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8027372C 0027066C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80273730 00270670  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80273734 00270674  7C 7E 1B 78 */	mr r30, r3
/* 80273738 00270678  C0 02 CE 98 */	lfs f0, lbl_8051B1F8@sda21(r2)
/* 8027373C 0027067C  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 80273740 00270680  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80273744 00270684  4C 40 13 82 */	cror 2, 0, 2
/* 80273748 00270688  40 82 00 0C */	bne .L_80273754
/* 8027374C 0027068C  38 60 00 01 */	li r3, 1
/* 80273750 00270690  48 00 00 EC */	b .L_8027383C
.L_80273754:
/* 80273754 00270694  81 83 00 00 */	lwz r12, 0(r3)
/* 80273758 00270698  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 8027375C 0027069C  7D 89 03 A6 */	mtctr r12
/* 80273760 002706A0  4E 80 04 21 */	bctrl 
/* 80273764 002706A4  7C 7F 1B 79 */	or. r31, r3, r3
/* 80273768 002706A8  41 82 00 D0 */	beq .L_80273838
/* 8027376C 002706AC  7F C3 F3 78 */	mr r3, r30
/* 80273770 002706B0  38 80 00 03 */	li r4, 3
/* 80273774 002706B4  4B EA 1A 41 */	bl getStickPikminColorNum__Q24Game9EnemyFuncFPQ24Game8Creaturei
/* 80273778 002706B8  2C 03 00 00 */	cmpwi r3, 0
/* 8027377C 002706BC  40 81 00 0C */	ble .L_80273788
/* 80273780 002706C0  38 60 00 01 */	li r3, 1
/* 80273784 002706C4  48 00 00 B8 */	b .L_8027383C
.L_80273788:
/* 80273788 002706C8  34 1F FF FF */	addic. r0, r31, -1
/* 8027378C 002706CC  40 80 00 0C */	bge .L_80273798
/* 80273790 002706D0  38 60 00 00 */	li r3, 0
/* 80273794 002706D4  48 00 00 18 */	b .L_802737AC
.L_80273798:
/* 80273798 002706D8  38 1F FF FF */	addi r0, r31, -1
/* 8027379C 002706DC  38 60 00 04 */	li r3, 4
/* 802737A0 002706E0  2C 00 00 04 */	cmpwi r0, 4
/* 802737A4 002706E4  41 81 00 08 */	bgt .L_802737AC
/* 802737A8 002706E8  7C 03 03 78 */	mr r3, r0
.L_802737AC:
/* 802737AC 002706EC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802737B0 002706F0  3C 00 43 30 */	lis r0, 0x4330
/* 802737B4 002706F4  90 61 00 0C */	stw r3, 0xc(r1)
/* 802737B8 002706F8  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802737BC 002706FC  90 01 00 08 */	stw r0, 8(r1)
/* 802737C0 00270700  C8 42 CE D0 */	lfd f2, lbl_8051B230@sda21(r2)
/* 802737C4 00270704  C8 01 00 08 */	lfd f0, 8(r1)
/* 802737C8 00270708  C0 22 CE EC */	lfs f1, lbl_8051B24C@sda21(r2)
/* 802737CC 0027070C  EC A0 10 28 */	fsubs f5, f0, f2
/* 802737D0 00270710  C0 62 CE F0 */	lfs f3, lbl_8051B250@sda21(r2)
/* 802737D4 00270714  C0 03 09 84 */	lfs f0, 0x984(r3)
/* 802737D8 00270718  C0 43 09 5C */	lfs f2, 0x95c(r3)
/* 802737DC 0027071C  EC 81 28 28 */	fsubs f4, f1, f5
/* 802737E0 00270720  EC 25 00 F2 */	fmuls f1, f5, f3
/* 802737E4 00270724  EC 64 00 F2 */	fmuls f3, f4, f3
/* 802737E8 00270728  EC 01 00 32 */	fmuls f0, f1, f0
/* 802737EC 0027072C  EF E3 00 BA */	fmadds f31, f3, f2, f0
/* 802737F0 00270730  4B E5 5D B1 */	bl rand
/* 802737F4 00270734  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802737F8 00270738  3C 00 43 30 */	lis r0, 0x4330
/* 802737FC 0027073C  90 61 00 14 */	stw r3, 0x14(r1)
/* 80273800 00270740  C8 62 CE D0 */	lfd f3, lbl_8051B230@sda21(r2)
/* 80273804 00270744  90 01 00 10 */	stw r0, 0x10(r1)
/* 80273808 00270748  C0 22 CE C0 */	lfs f1, lbl_8051B220@sda21(r2)
/* 8027380C 0027074C  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 80273810 00270750  C0 02 CE D8 */	lfs f0, lbl_8051B238@sda21(r2)
/* 80273814 00270754  EC 42 18 28 */	fsubs f2, f2, f3
/* 80273818 00270758  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8027381C 0027075C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80273820 00270760  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80273824 00270764  40 80 00 0C */	bge .L_80273830
/* 80273828 00270768  38 60 00 04 */	li r3, 4
/* 8027382C 0027076C  48 00 00 10 */	b .L_8027383C
.L_80273830:
/* 80273830 00270770  38 60 00 01 */	li r3, 1
/* 80273834 00270774  48 00 00 08 */	b .L_8027383C
.L_80273838:
/* 80273838 00270778  38 60 FF FF */	li r3, -1
.L_8027383C:
/* 8027383C 0027077C  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80273840 00270780  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80273844 00270784  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80273848 00270788  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8027384C 0027078C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80273850 00270790  7C 08 03 A6 */	mtlr r0
/* 80273854 00270794  38 21 00 30 */	addi r1, r1, 0x30
/* 80273858 00270798  4E 80 00 20 */	blr 

.global flickStickTarget__Q34Game5Sarai3ObjFv
flickStickTarget__Q34Game5Sarai3ObjFv:
/* 8027385C 0027079C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80273860 002707A0  7C 08 02 A6 */	mflr r0
/* 80273864 002707A4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80273868 002707A8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8027386C 002707AC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80273870 002707B0  3B C0 00 00 */	li r30, 0
/* 80273874 002707B4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80273878 002707B8  7C 7D 1B 78 */	mr r29, r3
/* 8027387C 002707BC  83 E3 02 C4 */	lwz r31, 0x2c4(r3)
/* 80273880 002707C0  48 00 00 68 */	b .L_802738E8
.L_80273884:
/* 80273884 002707C4  7F C4 F3 78 */	mr r4, r30
/* 80273888 002707C8  38 7D 02 C4 */	addi r3, r29, 0x2c4
/* 8027388C 002707CC  4B EC 4E ED */	bl getSlot__10MouthSlotsFi
/* 80273890 002707D0  80 63 00 64 */	lwz r3, 0x64(r3)
/* 80273894 002707D4  28 03 00 00 */	cmplwi r3, 0
/* 80273898 002707D8  41 82 00 4C */	beq .L_802738E4
/* 8027389C 002707DC  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 802738A0 002707E0  C0 42 CE F4 */	lfs f2, lbl_8051B254@sda21(r2)
/* 802738A4 002707E4  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 802738A8 002707E8  C0 22 CE 98 */	lfs f1, lbl_8051B1F8@sda21(r2)
/* 802738AC 002707EC  C0 02 CE F8 */	lfs f0, lbl_8051B258@sda21(r2)
/* 802738B0 002707F0  3C 80 80 4B */	lis r4, __vt__Q24Game13InteractFlick@ha
/* 802738B4 002707F4  90 01 00 08 */	stw r0, 8(r1)
/* 802738B8 002707F8  38 04 4E 04 */	addi r0, r4, __vt__Q24Game13InteractFlick@l
/* 802738BC 002707FC  38 81 00 08 */	addi r4, r1, 8
/* 802738C0 00270800  93 A1 00 0C */	stw r29, 0xc(r1)
/* 802738C4 00270804  90 01 00 08 */	stw r0, 8(r1)
/* 802738C8 00270808  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 802738CC 0027080C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 802738D0 00270810  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802738D4 00270814  81 83 00 00 */	lwz r12, 0(r3)
/* 802738D8 00270818  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802738DC 0027081C  7D 89 03 A6 */	mtctr r12
/* 802738E0 00270820  4E 80 04 21 */	bctrl 
.L_802738E4:
/* 802738E4 00270824  3B DE 00 01 */	addi r30, r30, 1
.L_802738E8:
/* 802738E8 00270828  7C 1E F8 00 */	cmpw r30, r31
/* 802738EC 0027082C  41 80 FF 98 */	blt .L_80273884
/* 802738F0 00270830  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802738F4 00270834  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802738F8 00270838  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802738FC 0027083C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80273900 00270840  7C 08 03 A6 */	mtlr r0
/* 80273904 00270844  38 21 00 30 */	addi r1, r1, 0x30
/* 80273908 00270848  4E 80 00 20 */	blr 

.global getStickPikminNum__Q34Game5Sarai3ObjFv
getStickPikminNum__Q34Game5Sarai3ObjFv:
/* 8027390C 0027084C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80273910 00270850  7C 08 02 A6 */	mflr r0
/* 80273914 00270854  90 01 00 24 */	stw r0, 0x24(r1)
/* 80273918 00270858  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8027391C 0027085C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80273920 00270860  3B C0 00 00 */	li r30, 0
/* 80273924 00270864  7F DF F3 78 */	mr r31, r30
/* 80273928 00270868  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8027392C 0027086C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80273930 00270870  7C 7C 1B 78 */	mr r28, r3
/* 80273934 00270874  83 A3 02 C4 */	lwz r29, 0x2c4(r3)
/* 80273938 00270878  48 00 00 24 */	b .L_8027395C
.L_8027393C:
/* 8027393C 0027087C  7F E4 FB 78 */	mr r4, r31
/* 80273940 00270880  38 7C 02 C4 */	addi r3, r28, 0x2c4
/* 80273944 00270884  4B EC 4E 35 */	bl getSlot__10MouthSlotsFi
/* 80273948 00270888  80 03 00 64 */	lwz r0, 0x64(r3)
/* 8027394C 0027088C  28 00 00 00 */	cmplwi r0, 0
/* 80273950 00270890  41 82 00 08 */	beq .L_80273958
/* 80273954 00270894  3B DE 00 01 */	addi r30, r30, 1
.L_80273958:
/* 80273958 00270898  3B FF 00 01 */	addi r31, r31, 1
.L_8027395C:
/* 8027395C 0027089C  7C 1F E8 00 */	cmpw r31, r29
/* 80273960 002708A0  41 80 FF DC */	blt .L_8027393C
/* 80273964 002708A4  80 1C 01 F4 */	lwz r0, 0x1f4(r28)
/* 80273968 002708A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8027396C 002708AC  7C 7E 00 50 */	subf r3, r30, r0
/* 80273970 002708B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80273974 002708B4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80273978 002708B8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8027397C 002708BC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80273980 002708C0  7C 08 03 A6 */	mtlr r0
/* 80273984 002708C4  38 21 00 20 */	addi r1, r1, 0x20
/* 80273988 002708C8  4E 80 00 20 */	blr 

.global getAttackableTarget__Q34Game5Sarai3ObjFv
getAttackableTarget__Q34Game5Sarai3ObjFv:
/* 8027398C 002708CC  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80273990 002708D0  7C 08 02 A6 */	mflr r0
/* 80273994 002708D4  90 01 00 94 */	stw r0, 0x94(r1)
/* 80273998 002708D8  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8027399C 002708DC  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 802739A0 002708E0  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 802739A4 002708E4  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 802739A8 002708E8  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 802739AC 002708EC  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 802739B0 002708F0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802739B4 002708F4  93 C1 00 58 */	stw r30, 0x58(r1)
/* 802739B8 002708F8  7C 7F 1B 78 */	mr r31, r3
/* 802739BC 002708FC  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802739C0 00270900  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 802739C4 00270904  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802739C8 00270908  EC 61 00 28 */	fsubs f3, f1, f0
/* 802739CC 0027090C  C0 43 01 8C */	lfs f2, 0x18c(r3)
/* 802739D0 00270910  C0 23 01 98 */	lfs f1, 0x198(r3)
/* 802739D4 00270914  C0 04 03 5C */	lfs f0, 0x35c(r4)
/* 802739D8 00270918  EC 42 08 28 */	fsubs f2, f2, f1
/* 802739DC 0027091C  EC 23 00 F2 */	fmuls f1, f3, f3
/* 802739E0 00270920  EC 00 00 32 */	fmuls f0, f0, f0
/* 802739E4 00270924  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802739E8 00270928  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802739EC 0027092C  40 80 03 3C */	bge .L_80273D28
/* 802739F0 00270930  C0 42 CE FC */	lfs f2, lbl_8051B25C@sda21(r2)
/* 802739F4 00270934  3C 60 80 4B */	lis r3, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802739F8 00270938  C0 24 04 24 */	lfs f1, 0x424(r4)
/* 802739FC 0027093C  38 00 00 00 */	li r0, 0
/* 80273A00 00270940  C0 04 03 D4 */	lfs f0, 0x3d4(r4)
/* 80273A04 00270944  38 83 BC 9C */	addi r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80273A08 00270948  EC 22 00 72 */	fmuls f1, f2, f1
/* 80273A0C 0027094C  C0 42 CE DC */	lfs f2, lbl_8051B23C@sda21(r2)
/* 80273A10 00270950  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80273A14 00270954  28 00 00 00 */	cmplwi r0, 0
/* 80273A18 00270958  EF C0 00 32 */	fmuls f30, f0, f0
/* 80273A1C 0027095C  90 81 00 44 */	stw r4, 0x44(r1)
/* 80273A20 00270960  EF E2 00 72 */	fmuls f31, f2, f1
/* 80273A24 00270964  90 01 00 50 */	stw r0, 0x50(r1)
/* 80273A28 00270968  90 01 00 48 */	stw r0, 0x48(r1)
/* 80273A2C 0027096C  90 61 00 4C */	stw r3, 0x4c(r1)
/* 80273A30 00270970  40 82 00 1C */	bne .L_80273A4C
/* 80273A34 00270974  81 83 00 00 */	lwz r12, 0(r3)
/* 80273A38 00270978  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80273A3C 0027097C  7D 89 03 A6 */	mtctr r12
/* 80273A40 00270980  4E 80 04 21 */	bctrl 
/* 80273A44 00270984  90 61 00 48 */	stw r3, 0x48(r1)
/* 80273A48 00270988  48 00 02 C0 */	b .L_80273D08
.L_80273A4C:
/* 80273A4C 0027098C  81 83 00 00 */	lwz r12, 0(r3)
/* 80273A50 00270990  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80273A54 00270994  7D 89 03 A6 */	mtctr r12
/* 80273A58 00270998  4E 80 04 21 */	bctrl 
/* 80273A5C 0027099C  90 61 00 48 */	stw r3, 0x48(r1)
/* 80273A60 002709A0  48 00 00 58 */	b .L_80273AB8
.L_80273A64:
/* 80273A64 002709A4  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80273A68 002709A8  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80273A6C 002709AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80273A70 002709B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80273A74 002709B4  7D 89 03 A6 */	mtctr r12
/* 80273A78 002709B8  4E 80 04 21 */	bctrl 
/* 80273A7C 002709BC  7C 64 1B 78 */	mr r4, r3
/* 80273A80 002709C0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 80273A84 002709C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80273A88 002709C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80273A8C 002709CC  7D 89 03 A6 */	mtctr r12
/* 80273A90 002709D0  4E 80 04 21 */	bctrl 
/* 80273A94 002709D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80273A98 002709D8  40 82 02 70 */	bne .L_80273D08
/* 80273A9C 002709DC  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80273AA0 002709E0  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80273AA4 002709E4  81 83 00 00 */	lwz r12, 0(r3)
/* 80273AA8 002709E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80273AAC 002709EC  7D 89 03 A6 */	mtctr r12
/* 80273AB0 002709F0  4E 80 04 21 */	bctrl 
/* 80273AB4 002709F4  90 61 00 48 */	stw r3, 0x48(r1)
.L_80273AB8:
/* 80273AB8 002709F8  81 81 00 44 */	lwz r12, 0x44(r1)
/* 80273ABC 002709FC  38 61 00 44 */	addi r3, r1, 0x44
/* 80273AC0 00270A00  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80273AC4 00270A04  7D 89 03 A6 */	mtctr r12
/* 80273AC8 00270A08  4E 80 04 21 */	bctrl 
/* 80273ACC 00270A0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80273AD0 00270A10  41 82 FF 94 */	beq .L_80273A64
/* 80273AD4 00270A14  48 00 02 34 */	b .L_80273D08
.L_80273AD8:
/* 80273AD8 00270A18  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80273ADC 00270A1C  81 83 00 00 */	lwz r12, 0(r3)
/* 80273AE0 00270A20  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80273AE4 00270A24  7D 89 03 A6 */	mtctr r12
/* 80273AE8 00270A28  4E 80 04 21 */	bctrl 
/* 80273AEC 00270A2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80273AF0 00270A30  7C 7E 1B 78 */	mr r30, r3
/* 80273AF4 00270A34  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80273AF8 00270A38  7D 89 03 A6 */	mtctr r12
/* 80273AFC 00270A3C  4E 80 04 21 */	bctrl 
/* 80273B00 00270A40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80273B04 00270A44  41 82 01 48 */	beq .L_80273C4C
/* 80273B08 00270A48  7F C3 F3 78 */	mr r3, r30
/* 80273B0C 00270A4C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80273B10 00270A50  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 80273B14 00270A54  7D 89 03 A6 */	mtctr r12
/* 80273B18 00270A58  4E 80 04 21 */	bctrl 
/* 80273B1C 00270A5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80273B20 00270A60  41 82 01 2C */	beq .L_80273C4C
/* 80273B24 00270A64  7F C3 F3 78 */	mr r3, r30
/* 80273B28 00270A68  4B F2 BA 61 */	bl isStickToMouth__Q24Game8CreatureFv
/* 80273B2C 00270A6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80273B30 00270A70  40 82 01 1C */	bne .L_80273C4C
/* 80273B34 00270A74  80 1E 00 F4 */	lwz r0, 0xf4(r30)
/* 80273B38 00270A78  7C 00 F8 40 */	cmplw r0, r31
/* 80273B3C 00270A7C  41 82 01 10 */	beq .L_80273C4C
/* 80273B40 00270A80  80 1E 00 C8 */	lwz r0, 0xc8(r30)
/* 80273B44 00270A84  28 00 00 00 */	cmplwi r0, 0
/* 80273B48 00270A88  41 82 01 04 */	beq .L_80273C4C
/* 80273B4C 00270A8C  7F C4 F3 78 */	mr r4, r30
/* 80273B50 00270A90  38 61 00 20 */	addi r3, r1, 0x20
/* 80273B54 00270A94  81 9E 00 00 */	lwz r12, 0(r30)
/* 80273B58 00270A98  81 8C 00 08 */	lwz r12, 8(r12)
/* 80273B5C 00270A9C  7D 89 03 A6 */	mtctr r12
/* 80273B60 00270AA0  4E 80 04 21 */	bctrl 
/* 80273B64 00270AA4  7F E4 FB 78 */	mr r4, r31
/* 80273B68 00270AA8  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80273B6C 00270AAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80273B70 00270AB0  38 61 00 2C */	addi r3, r1, 0x2c
/* 80273B74 00270AB4  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80273B78 00270AB8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80273B7C 00270ABC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80273B80 00270AC0  D0 41 00 08 */	stfs f2, 8(r1)
/* 80273B84 00270AC4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80273B88 00270AC8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80273B8C 00270ACC  7D 89 03 A6 */	mtctr r12
/* 80273B90 00270AD0  4E 80 04 21 */	bctrl 
/* 80273B94 00270AD4  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 80273B98 00270AD8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80273B9C 00270ADC  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 80273BA0 00270AE0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80273BA4 00270AE4  C0 21 00 08 */	lfs f1, 8(r1)
/* 80273BA8 00270AE8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80273BAC 00270AEC  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 80273BB0 00270AF0  EC 21 28 28 */	fsubs f1, f1, f5
/* 80273BB4 00270AF4  EC 40 18 28 */	fsubs f2, f0, f3
/* 80273BB8 00270AF8  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 80273BBC 00270AFC  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 80273BC0 00270B00  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80273BC4 00270B04  4B DC 15 45 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80273BC8 00270B08  48 19 E0 09 */	bl roundAng__Ff
/* 80273BCC 00270B0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80273BD0 00270B10  FF A0 08 90 */	fmr f29, f1
/* 80273BD4 00270B14  7F E3 FB 78 */	mr r3, r31
/* 80273BD8 00270B18  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80273BDC 00270B1C  7D 89 03 A6 */	mtctr r12
/* 80273BE0 00270B20  4E 80 04 21 */	bctrl 
/* 80273BE4 00270B24  FC 40 08 90 */	fmr f2, f1
/* 80273BE8 00270B28  FC 20 E8 90 */	fmr f1, f29
/* 80273BEC 00270B2C  48 19 E0 11 */	bl angDist__Fff
/* 80273BF0 00270B30  FC 00 0A 10 */	fabs f0, f1
/* 80273BF4 00270B34  FC 00 00 18 */	frsp f0, f0
/* 80273BF8 00270B38  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80273BFC 00270B3C  4C 40 13 82 */	cror 2, 0, 2
/* 80273C00 00270B40  40 82 00 4C */	bne .L_80273C4C
/* 80273C04 00270B44  7F C4 F3 78 */	mr r4, r30
/* 80273C08 00270B48  38 61 00 38 */	addi r3, r1, 0x38
/* 80273C0C 00270B4C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80273C10 00270B50  81 8C 00 08 */	lwz r12, 8(r12)
/* 80273C14 00270B54  7D 89 03 A6 */	mtctr r12
/* 80273C18 00270B58  4E 80 04 21 */	bctrl 
/* 80273C1C 00270B5C  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 80273C20 00270B60  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80273C24 00270B64  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 80273C28 00270B68  EC 21 00 28 */	fsubs f1, f1, f0
/* 80273C2C 00270B6C  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80273C30 00270B70  EC 42 00 28 */	fsubs f2, f2, f0
/* 80273C34 00270B74  EC 01 00 72 */	fmuls f0, f1, f1
/* 80273C38 00270B78  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 80273C3C 00270B7C  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 80273C40 00270B80  40 80 00 0C */	bge .L_80273C4C
/* 80273C44 00270B84  7F C3 F3 78 */	mr r3, r30
/* 80273C48 00270B88  48 00 00 E4 */	b .L_80273D2C
.L_80273C4C:
/* 80273C4C 00270B8C  80 01 00 50 */	lwz r0, 0x50(r1)
/* 80273C50 00270B90  28 00 00 00 */	cmplwi r0, 0
/* 80273C54 00270B94  40 82 00 24 */	bne .L_80273C78
/* 80273C58 00270B98  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80273C5C 00270B9C  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80273C60 00270BA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80273C64 00270BA4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80273C68 00270BA8  7D 89 03 A6 */	mtctr r12
/* 80273C6C 00270BAC  4E 80 04 21 */	bctrl 
/* 80273C70 00270BB0  90 61 00 48 */	stw r3, 0x48(r1)
/* 80273C74 00270BB4  48 00 00 94 */	b .L_80273D08
.L_80273C78:
/* 80273C78 00270BB8  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80273C7C 00270BBC  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80273C80 00270BC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80273C84 00270BC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80273C88 00270BC8  7D 89 03 A6 */	mtctr r12
/* 80273C8C 00270BCC  4E 80 04 21 */	bctrl 
/* 80273C90 00270BD0  90 61 00 48 */	stw r3, 0x48(r1)
/* 80273C94 00270BD4  48 00 00 58 */	b .L_80273CEC
.L_80273C98:
/* 80273C98 00270BD8  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80273C9C 00270BDC  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80273CA0 00270BE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80273CA4 00270BE4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80273CA8 00270BE8  7D 89 03 A6 */	mtctr r12
/* 80273CAC 00270BEC  4E 80 04 21 */	bctrl 
/* 80273CB0 00270BF0  7C 64 1B 78 */	mr r4, r3
/* 80273CB4 00270BF4  80 61 00 50 */	lwz r3, 0x50(r1)
/* 80273CB8 00270BF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80273CBC 00270BFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80273CC0 00270C00  7D 89 03 A6 */	mtctr r12
/* 80273CC4 00270C04  4E 80 04 21 */	bctrl 
/* 80273CC8 00270C08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80273CCC 00270C0C  40 82 00 3C */	bne .L_80273D08
/* 80273CD0 00270C10  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80273CD4 00270C14  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80273CD8 00270C18  81 83 00 00 */	lwz r12, 0(r3)
/* 80273CDC 00270C1C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80273CE0 00270C20  7D 89 03 A6 */	mtctr r12
/* 80273CE4 00270C24  4E 80 04 21 */	bctrl 
/* 80273CE8 00270C28  90 61 00 48 */	stw r3, 0x48(r1)
.L_80273CEC:
/* 80273CEC 00270C2C  81 81 00 44 */	lwz r12, 0x44(r1)
/* 80273CF0 00270C30  38 61 00 44 */	addi r3, r1, 0x44
/* 80273CF4 00270C34  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80273CF8 00270C38  7D 89 03 A6 */	mtctr r12
/* 80273CFC 00270C3C  4E 80 04 21 */	bctrl 
/* 80273D00 00270C40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80273D04 00270C44  41 82 FF 94 */	beq .L_80273C98
.L_80273D08:
/* 80273D08 00270C48  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80273D0C 00270C4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80273D10 00270C50  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80273D14 00270C54  7D 89 03 A6 */	mtctr r12
/* 80273D18 00270C58  4E 80 04 21 */	bctrl 
/* 80273D1C 00270C5C  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80273D20 00270C60  7C 04 18 40 */	cmplw r4, r3
/* 80273D24 00270C64  40 82 FD B4 */	bne .L_80273AD8
.L_80273D28:
/* 80273D28 00270C68  38 60 00 00 */	li r3, 0
.L_80273D2C:
/* 80273D2C 00270C6C  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80273D30 00270C70  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80273D34 00270C74  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80273D38 00270C78  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80273D3C 00270C7C  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 80273D40 00270C80  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80273D44 00270C84  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80273D48 00270C88  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80273D4C 00270C8C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80273D50 00270C90  7C 08 03 A6 */	mtlr r0
/* 80273D54 00270C94  38 21 00 90 */	addi r1, r1, 0x90
/* 80273D58 00270C98  4E 80 00 20 */	blr 

.global catchTarget__Q34Game5Sarai3ObjFv
catchTarget__Q34Game5Sarai3ObjFv:
/* 80273D5C 00270C9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80273D60 00270CA0  7C 08 02 A6 */	mflr r0
/* 80273D64 00270CA4  38 80 00 00 */	li r4, 0
/* 80273D68 00270CA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80273D6C 00270CAC  4B E9 FD C9 */	bl "eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
/* 80273D70 00270CB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80273D74 00270CB4  7C 08 03 A6 */	mtlr r0
/* 80273D78 00270CB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80273D7C 00270CBC  4E 80 00 20 */	blr 

.global createDownEffect__Q34Game5Sarai3ObjFv
createDownEffect__Q34Game5Sarai3ObjFv:
/* 80273D80 00270CC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80273D84 00270CC4  7C 08 02 A6 */	mflr r0
/* 80273D88 00270CC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80273D8C 00270CCC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80273D90 00270CD0  7C 7F 1B 78 */	mr r31, r3
/* 80273D94 00270CD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80273D98 00270CD8  81 8C 02 EC */	lwz r12, 0x2ec(r12)
/* 80273D9C 00270CDC  7D 89 03 A6 */	mtctr r12
/* 80273DA0 00270CE0  4E 80 04 21 */	bctrl 
/* 80273DA4 00270CE4  7F E3 FB 78 */	mr r3, r31
/* 80273DA8 00270CE8  38 9F 01 8C */	addi r4, r31, 0x18c
/* 80273DAC 00270CEC  4B E8 FD A5 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 80273DB0 00270CF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80273DB4 00270CF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80273DB8 00270CF8  7C 08 03 A6 */	mtlr r0
/* 80273DBC 00270CFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80273DC0 00270D00  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q34Game5Sarai3ObjFv
getDownSmokeScale__Q34Game5Sarai3ObjFv:
/* 80273DC4 00270D04  C0 22 CF 00 */	lfs f1, lbl_8051B260@sda21(r2)
/* 80273DC8 00270D08  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game5Sarai3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game5Sarai3ObjFPQ24Game8WaterBox:
/* 80273DCC 00270D0C  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game5Sarai3ObjFv
outWaterCallback__Q34Game5Sarai3ObjFv:
/* 80273DD0 00270D10  4E 80 00 20 */	blr 

.global getMouthSlots__Q34Game5Sarai3ObjFv
getMouthSlots__Q34Game5Sarai3ObjFv:
/* 80273DD4 00270D14  38 63 02 C4 */	addi r3, r3, 0x2c4
/* 80273DD8 00270D18  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game5Sarai3ObjFv
getEnemyTypeID__Q34Game5Sarai3ObjFv:
/* 80273DDC 00270D1C  38 60 00 17 */	li r3, 0x17
/* 80273DE0 00270D20  4E 80 00 20 */	blr 
