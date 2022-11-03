.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8048D1B0
lbl_8048D1B0:
	.asciz "leaf_joint1"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23efx10TJgmBubble
__vt__Q23efx10TJgmBubble:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q34Game7Sokkuri3Obj
__vt__Q34Game7Sokkuri3Obj:
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
	.4byte onInit__Q34Game7Sokkuri3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game7Sokkuri3ObjFR8Graphics
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
	.4byte isUnderground__Q34Game7Sokkuri3ObjFv
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
	.4byte getShadowParam__Q34Game7Sokkuri3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game7Sokkuri3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game7Sokkuri3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game7Sokkuri3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game7Sokkuri3ObjFR8Graphics
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
	.4byte getOffsetForMapCollision__Q34Game7Sokkuri3ObjFv
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
	.4byte createEfxHamon__Q34Game7Sokkuri3ObjFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game7Sokkuri3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game7Sokkuri3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game7Sokkuri3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game7Sokkuri3ObjFv
	.4byte doFinishStoneState__Q34Game7Sokkuri3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game7Sokkuri3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q34Game7Sokkuri3ObjFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game7Sokkuri3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game7Sokkuri3ObjFPQ34Game7Sokkuri3FSM
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
.global lbl_8051D120
lbl_8051D120:
	.4byte 0x00000000
.global lbl_8051D124
lbl_8051D124:
	.4byte 0x40200000
.global lbl_8051D128
lbl_8051D128:
	.float 1.0
.global lbl_8051D12C
lbl_8051D12C:
	.4byte 0x42480000
.global lbl_8051D130
lbl_8051D130:
	.4byte 0x40F00000
.global lbl_8051D134
lbl_8051D134:
	.4byte 0x41200000
.global lbl_8051D138
lbl_8051D138:
	.float 0.1
.global lbl_8051D13C
lbl_8051D13C:
	.4byte 0x447A0000
.global lbl_8051D140
lbl_8051D140:
	.4byte 0x47000000
.global lbl_8051D144
lbl_8051D144:
	.4byte 0x40490FDB
.global lbl_8051D148
lbl_8051D148:
	.4byte 0x3BB60B61
.global lbl_8051D14C
lbl_8051D14C:
	.float 0.5
.global lbl_8051D150
lbl_8051D150:
	.4byte 0xC3A2F983
.global lbl_8051D154
lbl_8051D154:
	.4byte 0x43A2F983
.global lbl_8051D158
lbl_8051D158:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051D160
lbl_8051D160:
	.4byte 0x40A00000
.global lbl_8051D164
lbl_8051D164:
	.4byte 0x41C80000
.global lbl_8051D168
lbl_8051D168:
	.4byte 0x41B00000
.global lbl_8051D16C
lbl_8051D16C:
	.4byte 0x3F0CCCCD

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game7Sokkuri3ObjFv
__ct__Q34Game7Sokkuri3ObjFv:
/* 802F1264 002EE1A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F1268 002EE1A8  7C 08 02 A6 */	mflr r0
/* 802F126C 002EE1AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F1270 002EE1B0  7C 80 07 35 */	extsh. r0, r4
/* 802F1274 002EE1B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F1278 002EE1B8  7C 7F 1B 78 */	mr r31, r3
/* 802F127C 002EE1BC  93 C1 00 08 */	stw r30, 8(r1)
/* 802F1280 002EE1C0  41 82 00 24 */	beq .L_802F12A4
/* 802F1284 002EE1C4  38 1F 02 DC */	addi r0, r31, 0x2dc
/* 802F1288 002EE1C8  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802F128C 002EE1CC  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802F1290 002EE1D0  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802F1294 002EE1D4  38 00 00 00 */	li r0, 0
/* 802F1298 002EE1D8  90 7F 02 DC */	stw r3, 0x2dc(r31)
/* 802F129C 002EE1DC  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 802F12A0 002EE1E0  90 1F 02 E4 */	stw r0, 0x2e4(r31)
.L_802F12A4:
/* 802F12A4 002EE1E4  7F E3 FB 78 */	mr r3, r31
/* 802F12A8 002EE1E8  38 80 00 00 */	li r4, 0
/* 802F12AC 002EE1EC  4B E1 00 F5 */	bl __ct__Q24Game9EnemyBaseFv
/* 802F12B0 002EE1F0  3C 60 80 4D */	lis r3, __vt__Q34Game7Sokkuri3Obj@ha
/* 802F12B4 002EE1F4  38 1F 02 DC */	addi r0, r31, 0x2dc
/* 802F12B8 002EE1F8  38 A3 4F 7C */	addi r5, r3, __vt__Q34Game7Sokkuri3Obj@l
/* 802F12BC 002EE1FC  38 60 00 2C */	li r3, 0x2c
/* 802F12C0 002EE200  90 BF 00 00 */	stw r5, 0(r31)
/* 802F12C4 002EE204  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802F12C8 002EE208  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 802F12CC 002EE20C  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802F12D0 002EE210  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802F12D4 002EE214  90 A4 00 00 */	stw r5, 0(r4)
/* 802F12D8 002EE218  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802F12DC 002EE21C  7C 04 00 50 */	subf r0, r4, r0
/* 802F12E0 002EE220  90 04 00 0C */	stw r0, 0xc(r4)
/* 802F12E4 002EE224  4B D3 2B C1 */	bl __nw__FUl
/* 802F12E8 002EE228  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F12EC 002EE22C  41 82 00 44 */	beq .L_802F1330
/* 802F12F0 002EE230  4B E3 66 85 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802F12F4 002EE234  3C 60 80 4D */	lis r3, __vt__Q34Game7Sokkuri14ProperAnimator@ha
/* 802F12F8 002EE238  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802F12FC 002EE23C  38 03 4E 50 */	addi r0, r3, __vt__Q34Game7Sokkuri14ProperAnimator@l
/* 802F1300 002EE240  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802F1304 002EE244  90 1E 00 00 */	stw r0, 0(r30)
/* 802F1308 002EE248  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802F130C 002EE24C  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802F1310 002EE250  38 00 00 00 */	li r0, 0
/* 802F1314 002EE254  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802F1318 002EE258  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802F131C 002EE25C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802F1320 002EE260  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802F1324 002EE264  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802F1328 002EE268  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802F132C 002EE26C  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802F1330:
/* 802F1330 002EE270  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802F1334 002EE274  38 60 00 1C */	li r3, 0x1c
/* 802F1338 002EE278  4B D3 2B 6D */	bl __nw__FUl
/* 802F133C 002EE27C  7C 64 1B 79 */	or. r4, r3, r3
/* 802F1340 002EE280  41 82 00 24 */	beq .L_802F1364
/* 802F1344 002EE284  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802F1348 002EE288  3C 60 80 4D */	lis r3, __vt__Q34Game7Sokkuri3FSM@ha
/* 802F134C 002EE28C  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802F1350 002EE290  38 A0 FF FF */	li r5, -1
/* 802F1354 002EE294  90 04 00 00 */	stw r0, 0(r4)
/* 802F1358 002EE298  38 03 4E 28 */	addi r0, r3, __vt__Q34Game7Sokkuri3FSM@l
/* 802F135C 002EE29C  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802F1360 002EE2A0  90 04 00 00 */	stw r0, 0(r4)
.L_802F1364:
/* 802F1364 002EE2A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F1368 002EE2A8  7F E3 FB 78 */	mr r3, r31
/* 802F136C 002EE2AC  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802F1370 002EE2B0  7D 89 03 A6 */	mtctr r12
/* 802F1374 002EE2B4  4E 80 04 21 */	bctrl 
/* 802F1378 002EE2B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F137C 002EE2BC  7F E3 FB 78 */	mr r3, r31
/* 802F1380 002EE2C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F1384 002EE2C4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F1388 002EE2C8  7C 08 03 A6 */	mtlr r0
/* 802F138C 002EE2CC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F1390 002EE2D0  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game7Sokkuri3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game7Sokkuri3ObjFPQ24Game21EnemyInitialParamBase:
/* 802F1394 002EE2D4  4E 80 00 20 */	blr 

.global onInit__Q34Game7Sokkuri3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game7Sokkuri3ObjFPQ24Game15CreatureInitArg:
/* 802F1398 002EE2D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F139C 002EE2DC  7C 08 02 A6 */	mflr r0
/* 802F13A0 002EE2E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F13A4 002EE2E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F13A8 002EE2E8  7C 7F 1B 78 */	mr r31, r3
/* 802F13AC 002EE2EC  4B E1 06 AD */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802F13B0 002EE2F0  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 802F13B4 002EE2F4  38 80 00 01 */	li r4, 1
/* 802F13B8 002EE2F8  C0 02 ED C0 */	lfs f0, lbl_8051D120@sda21(r2)
/* 802F13BC 002EE2FC  38 00 FF FF */	li r0, -1
/* 802F13C0 002EE300  54 65 05 66 */	rlwinm r5, r3, 0, 0x15, 0x13
/* 802F13C4 002EE304  7F E3 FB 78 */	mr r3, r31
/* 802F13C8 002EE308  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802F13CC 002EE30C  98 9F 02 C0 */	stb r4, 0x2c0(r31)
/* 802F13D0 002EE310  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802F13D4 002EE314  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F13D8 002EE318  48 00 09 E9 */	bl resetMoveVelocity__Q34Game7Sokkuri3ObjFv
/* 802F13DC 002EE31C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802F13E0 002EE320  7F E4 FB 78 */	mr r4, r31
/* 802F13E4 002EE324  38 A0 00 02 */	li r5, 2
/* 802F13E8 002EE328  38 C0 00 00 */	li r6, 0
/* 802F13EC 002EE32C  81 83 00 00 */	lwz r12, 0(r3)
/* 802F13F0 002EE330  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802F13F4 002EE334  7D 89 03 A6 */	mtctr r12
/* 802F13F8 002EE338  4E 80 04 21 */	bctrl 
/* 802F13FC 002EE33C  7F E3 FB 78 */	mr r3, r31
/* 802F1400 002EE340  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F1404 002EE344  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 802F1408 002EE348  7D 89 03 A6 */	mtctr r12
/* 802F140C 002EE34C  4E 80 04 21 */	bctrl 
/* 802F1410 002EE350  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F1414 002EE354  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F1418 002EE358  7C 08 03 A6 */	mtlr r0
/* 802F141C 002EE35C  38 21 00 10 */	addi r1, r1, 0x10
/* 802F1420 002EE360  4E 80 00 20 */	blr 

.global doUpdate__Q34Game7Sokkuri3ObjFv
doUpdate__Q34Game7Sokkuri3ObjFv:
/* 802F1424 002EE364  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F1428 002EE368  7C 08 02 A6 */	mflr r0
/* 802F142C 002EE36C  7C 64 1B 78 */	mr r4, r3
/* 802F1430 002EE370  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F1434 002EE374  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802F1438 002EE378  81 83 00 00 */	lwz r12, 0(r3)
/* 802F143C 002EE37C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802F1440 002EE380  7D 89 03 A6 */	mtctr r12
/* 802F1444 002EE384  4E 80 04 21 */	bctrl 
/* 802F1448 002EE388  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F144C 002EE38C  7C 08 03 A6 */	mtlr r0
/* 802F1450 002EE390  38 21 00 10 */	addi r1, r1, 0x10
/* 802F1454 002EE394  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game7Sokkuri3ObjFR8Graphics
doDirectDraw__Q34Game7Sokkuri3ObjFR8Graphics:
/* 802F1458 002EE398  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game7Sokkuri3ObjFR8Graphics
doDebugDraw__Q34Game7Sokkuri3ObjFR8Graphics:
/* 802F145C 002EE39C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F1460 002EE3A0  7C 08 02 A6 */	mflr r0
/* 802F1464 002EE3A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F1468 002EE3A8  4B E1 4A 05 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802F146C 002EE3AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F1470 002EE3B0  7C 08 03 A6 */	mtlr r0
/* 802F1474 002EE3B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802F1478 002EE3B8  4E 80 00 20 */	blr 

.global setFSM__Q34Game7Sokkuri3ObjFPQ34Game7Sokkuri3FSM
setFSM__Q34Game7Sokkuri3ObjFPQ34Game7Sokkuri3FSM:
/* 802F147C 002EE3BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F1480 002EE3C0  7C 08 02 A6 */	mflr r0
/* 802F1484 002EE3C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F1488 002EE3C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F148C 002EE3CC  7C 7F 1B 78 */	mr r31, r3
/* 802F1490 002EE3D0  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802F1494 002EE3D4  7F E4 FB 78 */	mr r4, r31
/* 802F1498 002EE3D8  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802F149C 002EE3DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802F14A0 002EE3E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F14A4 002EE3E4  7D 89 03 A6 */	mtctr r12
/* 802F14A8 002EE3E8  4E 80 04 21 */	bctrl 
/* 802F14AC 002EE3EC  38 00 00 00 */	li r0, 0
/* 802F14B0 002EE3F0  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802F14B4 002EE3F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F14B8 002EE3F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F14BC 002EE3FC  7C 08 03 A6 */	mtlr r0
/* 802F14C0 002EE400  38 21 00 10 */	addi r1, r1, 0x10
/* 802F14C4 002EE404  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game7Sokkuri3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game7Sokkuri3ObjFRQ24Game11ShadowParam:
/* 802F14C8 002EE408  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F14CC 002EE40C  7C 08 02 A6 */	mflr r0
/* 802F14D0 002EE410  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F14D4 002EE414  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F14D8 002EE418  7C 9F 23 78 */	mr r31, r4
/* 802F14DC 002EE41C  93 C1 00 08 */	stw r30, 8(r1)
/* 802F14E0 002EE420  7C 7E 1B 78 */	mr r30, r3
/* 802F14E4 002EE424  81 83 00 00 */	lwz r12, 0(r3)
/* 802F14E8 002EE428  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802F14EC 002EE42C  7D 89 03 A6 */	mtctr r12
/* 802F14F0 002EE430  4E 80 04 21 */	bctrl 
/* 802F14F4 002EE434  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F14F8 002EE438  41 82 00 98 */	beq .L_802F1590
/* 802F14FC 002EE43C  7F C3 F3 78 */	mr r3, r30
/* 802F1500 002EE440  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F1504 002EE444  81 8C 00 D0 */	lwz r12, 0xd0(r12)
/* 802F1508 002EE448  7D 89 03 A6 */	mtctr r12
/* 802F150C 002EE44C  4E 80 04 21 */	bctrl 
/* 802F1510 002EE450  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F1514 002EE454  40 82 00 7C */	bne .L_802F1590
/* 802F1518 002EE458  7F C3 F3 78 */	mr r3, r30
/* 802F151C 002EE45C  4B E1 5E D9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802F1520 002EE460  2C 03 00 03 */	cmpwi r3, 3
/* 802F1524 002EE464  41 82 00 6C */	beq .L_802F1590
/* 802F1528 002EE468  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 802F152C 002EE46C  C0 42 ED C4 */	lfs f2, lbl_8051D124@sda21(r2)
/* 802F1530 002EE470  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802F1534 002EE474  C0 22 ED C0 */	lfs f1, lbl_8051D120@sda21(r2)
/* 802F1538 002EE478  C0 7E 01 90 */	lfs f3, 0x190(r30)
/* 802F153C 002EE47C  C0 02 ED C8 */	lfs f0, lbl_8051D128@sda21(r2)
/* 802F1540 002EE480  D0 7F 00 04 */	stfs f3, 4(r31)
/* 802F1544 002EE484  C0 7E 01 94 */	lfs f3, 0x194(r30)
/* 802F1548 002EE488  D0 7F 00 08 */	stfs f3, 8(r31)
/* 802F154C 002EE48C  C0 7F 00 04 */	lfs f3, 4(r31)
/* 802F1550 002EE490  EC 43 10 2A */	fadds f2, f3, f2
/* 802F1554 002EE494  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802F1558 002EE498  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802F155C 002EE49C  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802F1560 002EE4A0  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802F1564 002EE4A4  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 802F1568 002EE4A8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802F156C 002EE4AC  41 82 00 10 */	beq .L_802F157C
/* 802F1570 002EE4B0  C0 02 ED CC */	lfs f0, lbl_8051D12C@sda21(r2)
/* 802F1574 002EE4B4  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802F1578 002EE4B8  48 00 00 0C */	b .L_802F1584
.L_802F157C:
/* 802F157C 002EE4BC  C0 02 ED D0 */	lfs f0, lbl_8051D130@sda21(r2)
/* 802F1580 002EE4C0  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802F1584:
/* 802F1584 002EE4C4  C0 02 ED D4 */	lfs f0, lbl_8051D134@sda21(r2)
/* 802F1588 002EE4C8  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802F158C 002EE4CC  48 00 00 3C */	b .L_802F15C8
.L_802F1590:
/* 802F1590 002EE4D0  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 802F1594 002EE4D4  C0 42 ED C0 */	lfs f2, lbl_8051D120@sda21(r2)
/* 802F1598 002EE4D8  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802F159C 002EE4DC  C0 22 ED C8 */	lfs f1, lbl_8051D128@sda21(r2)
/* 802F15A0 002EE4E0  C0 7E 01 90 */	lfs f3, 0x190(r30)
/* 802F15A4 002EE4E4  C0 02 ED D8 */	lfs f0, lbl_8051D138@sda21(r2)
/* 802F15A8 002EE4E8  D0 7F 00 04 */	stfs f3, 4(r31)
/* 802F15AC 002EE4EC  C0 7E 01 94 */	lfs f3, 0x194(r30)
/* 802F15B0 002EE4F0  D0 7F 00 08 */	stfs f3, 8(r31)
/* 802F15B4 002EE4F4  D0 5F 00 0C */	stfs f2, 0xc(r31)
/* 802F15B8 002EE4F8  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 802F15BC 002EE4FC  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 802F15C0 002EE500  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802F15C4 002EE504  D0 1F 00 1C */	stfs f0, 0x1c(r31)
.L_802F15C8:
/* 802F15C8 002EE508  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F15CC 002EE50C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F15D0 002EE510  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F15D4 002EE514  7C 08 03 A6 */	mtlr r0
/* 802F15D8 002EE518  38 21 00 10 */	addi r1, r1, 0x10
/* 802F15DC 002EE51C  4E 80 00 20 */	blr 

.global isUnderground__Q34Game7Sokkuri3ObjFv
isUnderground__Q34Game7Sokkuri3ObjFv:
/* 802F15E0 002EE520  88 63 02 C0 */	lbz r3, 0x2c0(r3)
/* 802F15E4 002EE524  4E 80 00 20 */	blr 

.global pressCallBack__Q34Game7Sokkuri3ObjFPQ24Game8CreaturefP8CollPart
pressCallBack__Q34Game7Sokkuri3ObjFPQ24Game8CreaturefP8CollPart:
/* 802F15E8 002EE528  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F15EC 002EE52C  7C 08 02 A6 */	mflr r0
/* 802F15F0 002EE530  28 04 00 00 */	cmplwi r4, 0
/* 802F15F4 002EE534  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F15F8 002EE538  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F15FC 002EE53C  7C 7F 1B 78 */	mr r31, r3
/* 802F1600 002EE540  41 82 00 6C */	beq .L_802F166C
/* 802F1604 002EE544  7C 83 23 78 */	mr r3, r4
/* 802F1608 002EE548  81 84 00 00 */	lwz r12, 0(r4)
/* 802F160C 002EE54C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802F1610 002EE550  7D 89 03 A6 */	mtctr r12
/* 802F1614 002EE554  4E 80 04 21 */	bctrl 
/* 802F1618 002EE558  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F161C 002EE55C  41 82 00 50 */	beq .L_802F166C
/* 802F1620 002EE560  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802F1624 002EE564  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802F1628 002EE568  40 82 00 44 */	bne .L_802F166C
/* 802F162C 002EE56C  7F E3 FB 78 */	mr r3, r31
/* 802F1630 002EE570  4B E1 5D C5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802F1634 002EE574  2C 03 00 00 */	cmpwi r3, 0
/* 802F1638 002EE578  41 82 00 34 */	beq .L_802F166C
/* 802F163C 002EE57C  2C 03 00 01 */	cmpwi r3, 1
/* 802F1640 002EE580  41 82 00 2C */	beq .L_802F166C
/* 802F1644 002EE584  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802F1648 002EE588  7F E4 FB 78 */	mr r4, r31
/* 802F164C 002EE58C  38 A0 00 01 */	li r5, 1
/* 802F1650 002EE590  38 C0 00 00 */	li r6, 0
/* 802F1654 002EE594  81 83 00 00 */	lwz r12, 0(r3)
/* 802F1658 002EE598  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802F165C 002EE59C  7D 89 03 A6 */	mtctr r12
/* 802F1660 002EE5A0  4E 80 04 21 */	bctrl 
/* 802F1664 002EE5A4  38 60 00 01 */	li r3, 1
/* 802F1668 002EE5A8  48 00 00 08 */	b .L_802F1670
.L_802F166C:
/* 802F166C 002EE5AC  38 60 00 00 */	li r3, 0
.L_802F1670:
/* 802F1670 002EE5B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F1674 002EE5B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F1678 002EE5B8  7C 08 03 A6 */	mtlr r0
/* 802F167C 002EE5BC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F1680 002EE5C0  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game7Sokkuri3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game7Sokkuri3ObjFPQ24Game8CreaturefP8CollPart:
/* 802F1684 002EE5C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F1688 002EE5C8  7C 08 02 A6 */	mflr r0
/* 802F168C 002EE5CC  28 04 00 00 */	cmplwi r4, 0
/* 802F1690 002EE5D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F1694 002EE5D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F1698 002EE5D8  7C 7F 1B 78 */	mr r31, r3
/* 802F169C 002EE5DC  41 82 00 6C */	beq .L_802F1708
/* 802F16A0 002EE5E0  7C 83 23 78 */	mr r3, r4
/* 802F16A4 002EE5E4  81 84 00 00 */	lwz r12, 0(r4)
/* 802F16A8 002EE5E8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802F16AC 002EE5EC  7D 89 03 A6 */	mtctr r12
/* 802F16B0 002EE5F0  4E 80 04 21 */	bctrl 
/* 802F16B4 002EE5F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F16B8 002EE5F8  41 82 00 50 */	beq .L_802F1708
/* 802F16BC 002EE5FC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802F16C0 002EE600  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802F16C4 002EE604  40 82 00 44 */	bne .L_802F1708
/* 802F16C8 002EE608  7F E3 FB 78 */	mr r3, r31
/* 802F16CC 002EE60C  4B E1 5D 29 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802F16D0 002EE610  2C 03 00 00 */	cmpwi r3, 0
/* 802F16D4 002EE614  41 82 00 34 */	beq .L_802F1708
/* 802F16D8 002EE618  2C 03 00 01 */	cmpwi r3, 1
/* 802F16DC 002EE61C  41 82 00 2C */	beq .L_802F1708
/* 802F16E0 002EE620  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802F16E4 002EE624  7F E4 FB 78 */	mr r4, r31
/* 802F16E8 002EE628  38 A0 00 01 */	li r5, 1
/* 802F16EC 002EE62C  38 C0 00 00 */	li r6, 0
/* 802F16F0 002EE630  81 83 00 00 */	lwz r12, 0(r3)
/* 802F16F4 002EE634  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802F16F8 002EE638  7D 89 03 A6 */	mtctr r12
/* 802F16FC 002EE63C  4E 80 04 21 */	bctrl 
/* 802F1700 002EE640  38 60 00 01 */	li r3, 1
/* 802F1704 002EE644  48 00 00 08 */	b .L_802F170C
.L_802F1708:
/* 802F1708 002EE648  38 60 00 00 */	li r3, 0
.L_802F170C:
/* 802F170C 002EE64C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F1710 002EE650  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F1714 002EE654  7C 08 03 A6 */	mtlr r0
/* 802F1718 002EE658  38 21 00 10 */	addi r1, r1, 0x10
/* 802F171C 002EE65C  4E 80 00 20 */	blr 

.global wallCallback__Q34Game7Sokkuri3ObjFRCQ24Game8MoveInfo
wallCallback__Q34Game7Sokkuri3ObjFRCQ24Game8MoveInfo:
/* 802F1720 002EE660  C0 04 00 5C */	lfs f0, 0x5c(r4)
/* 802F1724 002EE664  C0 24 00 60 */	lfs f1, 0x60(r4)
/* 802F1728 002EE668  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 802F172C 002EE66C  C0 04 00 64 */	lfs f0, 0x64(r4)
/* 802F1730 002EE670  D0 23 02 D4 */	stfs f1, 0x2d4(r3)
/* 802F1734 002EE674  C0 22 ED C0 */	lfs f1, lbl_8051D120@sda21(r2)
/* 802F1738 002EE678  D0 03 02 D8 */	stfs f0, 0x2d8(r3)
/* 802F173C 002EE67C  D0 23 02 D4 */	stfs f1, 0x2d4(r3)
/* 802F1740 002EE680  C0 63 02 D0 */	lfs f3, 0x2d0(r3)
/* 802F1744 002EE684  C0 43 02 D4 */	lfs f2, 0x2d4(r3)
/* 802F1748 002EE688  EC 03 00 F2 */	fmuls f0, f3, f3
/* 802F174C 002EE68C  C0 83 02 D8 */	lfs f4, 0x2d8(r3)
/* 802F1750 002EE690  EC 42 00 B2 */	fmuls f2, f2, f2
/* 802F1754 002EE694  EC 84 01 32 */	fmuls f4, f4, f4
/* 802F1758 002EE698  EC 00 10 2A */	fadds f0, f0, f2
/* 802F175C 002EE69C  EC 04 00 2A */	fadds f0, f4, f0
/* 802F1760 002EE6A0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802F1764 002EE6A4  40 81 00 20 */	ble .L_802F1784
/* 802F1768 002EE6A8  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 802F176C 002EE6AC  EC 44 00 2A */	fadds f2, f4, f0
/* 802F1770 002EE6B0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802F1774 002EE6B4  40 81 00 14 */	ble .L_802F1788
/* 802F1778 002EE6B8  FC 00 10 34 */	frsqrte f0, f2
/* 802F177C 002EE6BC  EC 40 00 B2 */	fmuls f2, f0, f2
/* 802F1780 002EE6C0  48 00 00 08 */	b .L_802F1788
.L_802F1784:
/* 802F1784 002EE6C4  FC 40 08 90 */	fmr f2, f1
.L_802F1788:
/* 802F1788 002EE6C8  C0 02 ED C0 */	lfs f0, lbl_8051D120@sda21(r2)
/* 802F178C 002EE6CC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802F1790 002EE6D0  40 81 00 30 */	ble .L_802F17C0
/* 802F1794 002EE6D4  C0 22 ED C8 */	lfs f1, lbl_8051D128@sda21(r2)
/* 802F1798 002EE6D8  C0 03 02 D0 */	lfs f0, 0x2d0(r3)
/* 802F179C 002EE6DC  EC 21 10 24 */	fdivs f1, f1, f2
/* 802F17A0 002EE6E0  EC 00 00 72 */	fmuls f0, f0, f1
/* 802F17A4 002EE6E4  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 802F17A8 002EE6E8  C0 03 02 D4 */	lfs f0, 0x2d4(r3)
/* 802F17AC 002EE6EC  EC 00 00 72 */	fmuls f0, f0, f1
/* 802F17B0 002EE6F0  D0 03 02 D4 */	stfs f0, 0x2d4(r3)
/* 802F17B4 002EE6F4  C0 03 02 D8 */	lfs f0, 0x2d8(r3)
/* 802F17B8 002EE6F8  EC 00 00 72 */	fmuls f0, f0, f1
/* 802F17BC 002EE6FC  D0 03 02 D8 */	stfs f0, 0x2d8(r3)
.L_802F17C0:
/* 802F17C0 002EE700  C0 03 02 D0 */	lfs f0, 0x2d0(r3)
/* 802F17C4 002EE704  C0 22 ED DC */	lfs f1, lbl_8051D13C@sda21(r2)
/* 802F17C8 002EE708  EC 00 00 72 */	fmuls f0, f0, f1
/* 802F17CC 002EE70C  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 802F17D0 002EE710  C0 03 02 D4 */	lfs f0, 0x2d4(r3)
/* 802F17D4 002EE714  EC 00 00 72 */	fmuls f0, f0, f1
/* 802F17D8 002EE718  D0 03 02 D4 */	stfs f0, 0x2d4(r3)
/* 802F17DC 002EE71C  C0 03 02 D8 */	lfs f0, 0x2d8(r3)
/* 802F17E0 002EE720  EC 00 00 72 */	fmuls f0, f0, f1
/* 802F17E4 002EE724  D0 03 02 D8 */	stfs f0, 0x2d8(r3)
/* 802F17E8 002EE728  C0 23 02 D0 */	lfs f1, 0x2d0(r3)
/* 802F17EC 002EE72C  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802F17F0 002EE730  EC 01 00 2A */	fadds f0, f1, f0
/* 802F17F4 002EE734  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 802F17F8 002EE738  C0 23 02 D4 */	lfs f1, 0x2d4(r3)
/* 802F17FC 002EE73C  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802F1800 002EE740  EC 01 00 2A */	fadds f0, f1, f0
/* 802F1804 002EE744  D0 03 02 D4 */	stfs f0, 0x2d4(r3)
/* 802F1808 002EE748  C0 23 02 D8 */	lfs f1, 0x2d8(r3)
/* 802F180C 002EE74C  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 802F1810 002EE750  EC 01 00 2A */	fadds f0, f1, f0
/* 802F1814 002EE754  D0 03 02 D8 */	stfs f0, 0x2d8(r3)
/* 802F1818 002EE758  4E 80 00 20 */	blr 

.global doStartStoneState__Q34Game7Sokkuri3ObjFv
doStartStoneState__Q34Game7Sokkuri3ObjFv:
/* 802F181C 002EE75C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F1820 002EE760  7C 08 02 A6 */	mflr r0
/* 802F1824 002EE764  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F1828 002EE768  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F182C 002EE76C  7C 7F 1B 78 */	mr r31, r3
/* 802F1830 002EE770  4B E1 16 C5 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802F1834 002EE774  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 802F1838 002EE778  38 00 00 00 */	li r0, 0
/* 802F183C 002EE77C  60 63 08 00 */	ori r3, r3, 0x800
/* 802F1840 002EE780  90 7F 01 E0 */	stw r3, 0x1e0(r31)
/* 802F1844 002EE784  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802F1848 002EE788  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F184C 002EE78C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F1850 002EE790  7C 08 03 A6 */	mtlr r0
/* 802F1854 002EE794  38 21 00 10 */	addi r1, r1, 0x10
/* 802F1858 002EE798  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game7Sokkuri3ObjFv
doFinishStoneState__Q34Game7Sokkuri3ObjFv:
/* 802F185C 002EE79C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F1860 002EE7A0  7C 08 02 A6 */	mflr r0
/* 802F1864 002EE7A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F1868 002EE7A8  4B E1 16 A1 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802F186C 002EE7AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F1870 002EE7B0  7C 08 03 A6 */	mtlr r0
/* 802F1874 002EE7B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802F1878 002EE7B8  4E 80 00 20 */	blr 

.global startCarcassMotion__Q34Game7Sokkuri3ObjFv
startCarcassMotion__Q34Game7Sokkuri3ObjFv:
/* 802F187C 002EE7BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F1880 002EE7C0  7C 08 02 A6 */	mflr r0
/* 802F1884 002EE7C4  38 80 00 08 */	li r4, 8
/* 802F1888 002EE7C8  38 A0 00 00 */	li r5, 0
/* 802F188C 002EE7CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F1890 002EE7D0  4B E1 37 75 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802F1894 002EE7D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F1898 002EE7D8  7C 08 03 A6 */	mtlr r0
/* 802F189C 002EE7DC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F18A0 002EE7E0  4E 80 00 20 */	blr 

.global getOffsetForMapCollision__Q34Game7Sokkuri3ObjFv
getOffsetForMapCollision__Q34Game7Sokkuri3ObjFv:
/* 802F18A4 002EE7E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F18A8 002EE7E8  7C 08 02 A6 */	mflr r0
/* 802F18AC 002EE7EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F18B0 002EE7F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F18B4 002EE7F4  7C 9F 23 78 */	mr r31, r4
/* 802F18B8 002EE7F8  93 C1 00 08 */	stw r30, 8(r1)
/* 802F18BC 002EE7FC  7C 7E 1B 78 */	mr r30, r3
/* 802F18C0 002EE800  7F E3 FB 78 */	mr r3, r31
/* 802F18C4 002EE804  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F18C8 002EE808  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802F18CC 002EE80C  7D 89 03 A6 */	mtctr r12
/* 802F18D0 002EE810  4E 80 04 21 */	bctrl 
/* 802F18D4 002EE814  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F18D8 002EE818  41 82 00 24 */	beq .L_802F18FC
/* 802F18DC 002EE81C  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 802F18E0 002EE820  C4 03 41 E4 */	lfsu f0, "zero__10Vector3<f>"@l(r3)
/* 802F18E4 002EE824  D0 1E 00 00 */	stfs f0, 0(r30)
/* 802F18E8 002EE828  C0 03 00 04 */	lfs f0, 4(r3)
/* 802F18EC 002EE82C  D0 1E 00 04 */	stfs f0, 4(r30)
/* 802F18F0 002EE830  C0 03 00 08 */	lfs f0, 8(r3)
/* 802F18F4 002EE834  D0 1E 00 08 */	stfs f0, 8(r30)
/* 802F18F8 002EE838  48 00 00 40 */	b .L_802F1938
.L_802F18FC:
/* 802F18FC 002EE83C  3C 80 80 49 */	lis r4, lbl_8048D1B0@ha
/* 802F1900 002EE840  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802F1904 002EE844  38 84 D1 B0 */	addi r4, r4, lbl_8048D1B0@l
/* 802F1908 002EE848  48 14 D6 DD */	bl getJoint__Q28SysShape5ModelFPc
/* 802F190C 002EE84C  48 13 7F 95 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802F1910 002EE850  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 802F1914 002EE854  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 802F1918 002EE858  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 802F191C 002EE85C  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 802F1920 002EE860  EC 42 00 28 */	fsubs f2, f2, f0
/* 802F1924 002EE864  C0 02 ED C0 */	lfs f0, lbl_8051D120@sda21(r2)
/* 802F1928 002EE868  EC 63 08 28 */	fsubs f3, f3, f1
/* 802F192C 002EE86C  D0 5E 00 00 */	stfs f2, 0(r30)
/* 802F1930 002EE870  D0 1E 00 04 */	stfs f0, 4(r30)
/* 802F1934 002EE874  D0 7E 00 08 */	stfs f3, 8(r30)
.L_802F1938:
/* 802F1938 002EE878  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F193C 002EE87C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F1940 002EE880  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F1944 002EE884  7C 08 03 A6 */	mtlr r0
/* 802F1948 002EE888  38 21 00 10 */	addi r1, r1, 0x10
/* 802F194C 002EE88C  4E 80 00 20 */	blr 

.global isAppear__Q34Game7Sokkuri3ObjFv
isAppear__Q34Game7Sokkuri3ObjFv:
/* 802F1950 002EE890  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F1954 002EE894  7C 08 02 A6 */	mflr r0
/* 802F1958 002EE898  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F195C 002EE89C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802F1960 002EE8A0  28 04 00 00 */	cmplwi r4, 0
/* 802F1964 002EE8A4  41 82 00 2C */	beq .L_802F1990
/* 802F1968 002EE8A8  80 04 00 44 */	lwz r0, 0x44(r4)
/* 802F196C 002EE8AC  2C 00 00 04 */	cmpwi r0, 4
/* 802F1970 002EE8B0  40 82 00 20 */	bne .L_802F1990
/* 802F1974 002EE8B4  80 C3 00 C0 */	lwz r6, 0xc0(r3)
/* 802F1978 002EE8B8  38 80 00 00 */	li r4, 0
/* 802F197C 002EE8BC  38 A0 00 00 */	li r5, 0
/* 802F1980 002EE8C0  C0 26 04 24 */	lfs f1, 0x424(r6)
/* 802F1984 002EE8C4  C0 46 03 D4 */	lfs f2, 0x3d4(r6)
/* 802F1988 002EE8C8  4B E2 11 DD */	bl "getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
/* 802F198C 002EE8CC  48 00 00 1C */	b .L_802F19A8
.L_802F1990:
/* 802F1990 002EE8D0  80 C3 00 C0 */	lwz r6, 0xc0(r3)
/* 802F1994 002EE8D4  38 80 00 00 */	li r4, 0
/* 802F1998 002EE8D8  38 A0 00 00 */	li r5, 0
/* 802F199C 002EE8DC  C0 26 04 24 */	lfs f1, 0x424(r6)
/* 802F19A0 002EE8E0  C0 46 03 D4 */	lfs f2, 0x3d4(r6)
/* 802F19A4 002EE8E4  4B E2 0D 51 */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
.L_802F19A8:
/* 802F19A8 002EE8E8  28 03 00 00 */	cmplwi r3, 0
/* 802F19AC 002EE8EC  41 82 00 0C */	beq .L_802F19B8
/* 802F19B0 002EE8F0  38 60 00 01 */	li r3, 1
/* 802F19B4 002EE8F4  48 00 00 08 */	b .L_802F19BC
.L_802F19B8:
/* 802F19B8 002EE8F8  38 60 00 00 */	li r3, 0
.L_802F19BC:
/* 802F19BC 002EE8FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F19C0 002EE900  7C 08 03 A6 */	mtlr r0
/* 802F19C4 002EE904  38 21 00 10 */	addi r1, r1, 0x10
/* 802F19C8 002EE908  4E 80 00 20 */	blr 

.global isDisappear__Q34Game7Sokkuri3ObjFv
isDisappear__Q34Game7Sokkuri3ObjFv:
/* 802F19CC 002EE90C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F19D0 002EE910  7C 08 02 A6 */	mflr r0
/* 802F19D4 002EE914  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F19D8 002EE918  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802F19DC 002EE91C  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 802F19E0 002EE920  C0 43 01 8C */	lfs f2, 0x18c(r3)
/* 802F19E4 002EE924  EC 61 00 28 */	fsubs f3, f1, f0
/* 802F19E8 002EE928  C0 23 01 98 */	lfs f1, 0x198(r3)
/* 802F19EC 002EE92C  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802F19F0 002EE930  EC 42 08 28 */	fsubs f2, f2, f1
/* 802F19F4 002EE934  EC 23 00 F2 */	fmuls f1, f3, f3
/* 802F19F8 002EE938  C0 05 03 84 */	lfs f0, 0x384(r5)
/* 802F19FC 002EE93C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802F1A00 002EE940  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802F1A04 002EE944  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F1A08 002EE948  40 80 00 58 */	bge .L_802F1A60
/* 802F1A0C 002EE94C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802F1A10 002EE950  28 04 00 00 */	cmplwi r4, 0
/* 802F1A14 002EE954  41 82 00 28 */	beq .L_802F1A3C
/* 802F1A18 002EE958  80 04 00 44 */	lwz r0, 0x44(r4)
/* 802F1A1C 002EE95C  2C 00 00 04 */	cmpwi r0, 4
/* 802F1A20 002EE960  40 82 00 1C */	bne .L_802F1A3C
/* 802F1A24 002EE964  C0 25 04 24 */	lfs f1, 0x424(r5)
/* 802F1A28 002EE968  38 80 00 00 */	li r4, 0
/* 802F1A2C 002EE96C  C0 45 03 D4 */	lfs f2, 0x3d4(r5)
/* 802F1A30 002EE970  38 A0 00 00 */	li r5, 0
/* 802F1A34 002EE974  4B E2 11 31 */	bl "getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
/* 802F1A38 002EE978  48 00 00 18 */	b .L_802F1A50
.L_802F1A3C:
/* 802F1A3C 002EE97C  C0 25 04 24 */	lfs f1, 0x424(r5)
/* 802F1A40 002EE980  38 80 00 00 */	li r4, 0
/* 802F1A44 002EE984  C0 45 03 D4 */	lfs f2, 0x3d4(r5)
/* 802F1A48 002EE988  38 A0 00 00 */	li r5, 0
/* 802F1A4C 002EE98C  4B E2 0C A9 */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
.L_802F1A50:
/* 802F1A50 002EE990  28 03 00 00 */	cmplwi r3, 0
/* 802F1A54 002EE994  40 82 00 0C */	bne .L_802F1A60
/* 802F1A58 002EE998  38 60 00 01 */	li r3, 1
/* 802F1A5C 002EE99C  48 00 00 08 */	b .L_802F1A64
.L_802F1A60:
/* 802F1A60 002EE9A0  38 60 00 00 */	li r3, 0
.L_802F1A64:
/* 802F1A64 002EE9A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F1A68 002EE9A8  7C 08 03 A6 */	mtlr r0
/* 802F1A6C 002EE9AC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F1A70 002EE9B0  4E 80 00 20 */	blr 

.global setNextMoveInfo__Q34Game7Sokkuri3ObjFv
setNextMoveInfo__Q34Game7Sokkuri3ObjFv:
/* 802F1A74 002EE9B4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802F1A78 002EE9B8  7C 08 02 A6 */	mflr r0
/* 802F1A7C 002EE9BC  90 01 00 54 */	stw r0, 0x54(r1)
/* 802F1A80 002EE9C0  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802F1A84 002EE9C4  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802F1A88 002EE9C8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802F1A8C 002EE9CC  7C 7F 1B 78 */	mr r31, r3
/* 802F1A90 002EE9D0  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802F1A94 002EE9D4  C0 23 08 1C */	lfs f1, 0x81c(r3)
/* 802F1A98 002EE9D8  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 802F1A9C 002EE9DC  EF E1 00 28 */	fsubs f31, f1, f0
/* 802F1AA0 002EE9E0  4B DD 7B 01 */	bl rand
/* 802F1AA4 002EE9E4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F1AA8 002EE9E8  3C 00 43 30 */	lis r0, 0x4330
/* 802F1AAC 002EE9EC  90 61 00 0C */	stw r3, 0xc(r1)
/* 802F1AB0 002EE9F0  C8 42 ED F8 */	lfd f2, lbl_8051D158@sda21(r2)
/* 802F1AB4 002EE9F4  90 01 00 08 */	stw r0, 8(r1)
/* 802F1AB8 002EE9F8  C0 02 ED E0 */	lfs f0, lbl_8051D140@sda21(r2)
/* 802F1ABC 002EE9FC  C8 21 00 08 */	lfd f1, 8(r1)
/* 802F1AC0 002EEA00  EC 21 10 28 */	fsubs f1, f1, f2
/* 802F1AC4 002EEA04  EC 3F 00 72 */	fmuls f1, f31, f1
/* 802F1AC8 002EEA08  EC 01 00 24 */	fdivs f0, f1, f0
/* 802F1ACC 002EEA0C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802F1AD0 002EEA10  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802F1AD4 002EEA14  C0 23 08 6C */	lfs f1, 0x86c(r3)
/* 802F1AD8 002EEA18  C0 03 08 94 */	lfs f0, 0x894(r3)
/* 802F1ADC 002EEA1C  EF E1 00 28 */	fsubs f31, f1, f0
/* 802F1AE0 002EEA20  4B DD 7A C1 */	bl rand
/* 802F1AE4 002EEA24  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F1AE8 002EEA28  3C 00 43 30 */	lis r0, 0x4330
/* 802F1AEC 002EEA2C  90 61 00 14 */	stw r3, 0x14(r1)
/* 802F1AF0 002EEA30  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802F1AF4 002EEA34  90 01 00 10 */	stw r0, 0x10(r1)
/* 802F1AF8 002EEA38  C8 22 ED F8 */	lfd f1, lbl_8051D158@sda21(r2)
/* 802F1AFC 002EEA3C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802F1B00 002EEA40  C0 62 ED E0 */	lfs f3, lbl_8051D140@sda21(r2)
/* 802F1B04 002EEA44  EC 80 08 28 */	fsubs f4, f0, f1
/* 802F1B08 002EEA48  C0 03 08 94 */	lfs f0, 0x894(r3)
/* 802F1B0C 002EEA4C  C0 22 ED E8 */	lfs f1, lbl_8051D148@sda21(r2)
/* 802F1B10 002EEA50  C0 42 ED E4 */	lfs f2, lbl_8051D144@sda21(r2)
/* 802F1B14 002EEA54  EC 9F 01 32 */	fmuls f4, f31, f4
/* 802F1B18 002EEA58  EC 64 18 24 */	fdivs f3, f4, f3
/* 802F1B1C 002EEA5C  EC 03 00 2A */	fadds f0, f3, f0
/* 802F1B20 002EEA60  EC 01 00 32 */	fmuls f0, f1, f0
/* 802F1B24 002EEA64  EF E2 00 32 */	fmuls f31, f2, f0
/* 802F1B28 002EEA68  4B DD 7A 79 */	bl rand
/* 802F1B2C 002EEA6C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F1B30 002EEA70  3C 00 43 30 */	lis r0, 0x4330
/* 802F1B34 002EEA74  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802F1B38 002EEA78  C8 62 ED F8 */	lfd f3, lbl_8051D158@sda21(r2)
/* 802F1B3C 002EEA7C  90 01 00 18 */	stw r0, 0x18(r1)
/* 802F1B40 002EEA80  C0 42 ED C8 */	lfs f2, lbl_8051D128@sda21(r2)
/* 802F1B44 002EEA84  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 802F1B48 002EEA88  C0 22 ED E0 */	lfs f1, lbl_8051D140@sda21(r2)
/* 802F1B4C 002EEA8C  EC 60 18 28 */	fsubs f3, f0, f3
/* 802F1B50 002EEA90  C0 02 ED EC */	lfs f0, lbl_8051D14C@sda21(r2)
/* 802F1B54 002EEA94  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F1B58 002EEA98  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F1B5C 002EEA9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F1B60 002EEAA0  40 80 00 10 */	bge .L_802F1B70
/* 802F1B64 002EEAA4  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802F1B68 002EEAA8  EF FF 00 2A */	fadds f31, f31, f0
/* 802F1B6C 002EEAAC  48 00 00 0C */	b .L_802F1B78
.L_802F1B70:
/* 802F1B70 002EEAB0  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802F1B74 002EEAB4  EF FF 00 28 */	fsubs f31, f31, f0
.L_802F1B78:
/* 802F1B78 002EEAB8  C0 02 ED C0 */	lfs f0, lbl_8051D120@sda21(r2)
/* 802F1B7C 002EEABC  C0 62 ED DC */	lfs f3, lbl_8051D13C@sda21(r2)
/* 802F1B80 002EEAC0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802F1B84 002EEAC4  40 80 00 30 */	bge .L_802F1BB4
/* 802F1B88 002EEAC8  C0 02 ED F0 */	lfs f0, lbl_8051D150@sda21(r2)
/* 802F1B8C 002EEACC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802F1B90 002EEAD0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802F1B94 002EEAD4  EC 1F 00 32 */	fmuls f0, f31, f0
/* 802F1B98 002EEAD8  FC 00 00 1E */	fctiwz f0, f0
/* 802F1B9C 002EEADC  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802F1BA0 002EEAE0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F1BA4 002EEAE4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F1BA8 002EEAE8  7C 03 04 2E */	lfsx f0, r3, r0
/* 802F1BAC 002EEAEC  FC 40 00 50 */	fneg f2, f0
/* 802F1BB0 002EEAF0  48 00 00 28 */	b .L_802F1BD8
.L_802F1BB4:
/* 802F1BB4 002EEAF4  C0 02 ED F4 */	lfs f0, lbl_8051D154@sda21(r2)
/* 802F1BB8 002EEAF8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802F1BBC 002EEAFC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802F1BC0 002EEB00  EC 1F 00 32 */	fmuls f0, f31, f0
/* 802F1BC4 002EEB04  FC 00 00 1E */	fctiwz f0, f0
/* 802F1BC8 002EEB08  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802F1BCC 002EEB0C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802F1BD0 002EEB10  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F1BD4 002EEB14  7C 43 04 2E */	lfsx f2, r3, r0
.L_802F1BD8:
/* 802F1BD8 002EEB18  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 802F1BDC 002EEB1C  FC 80 F8 90 */	fmr f4, f31
/* 802F1BE0 002EEB20  C0 02 ED C0 */	lfs f0, lbl_8051D120@sda21(r2)
/* 802F1BE4 002EEB24  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 802F1BE8 002EEB28  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802F1BEC 002EEB2C  D0 3F 02 D0 */	stfs f1, 0x2d0(r31)
/* 802F1BF0 002EEB30  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802F1BF4 002EEB34  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 802F1BF8 002EEB38  40 80 00 08 */	bge .L_802F1C00
/* 802F1BFC 002EEB3C  FC 80 F8 50 */	fneg f4, f31
.L_802F1C00:
/* 802F1C00 002EEB40  C0 02 ED F4 */	lfs f0, lbl_8051D154@sda21(r2)
/* 802F1C04 002EEB44  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802F1C08 002EEB48  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802F1C0C 002EEB4C  C0 42 ED DC */	lfs f2, lbl_8051D13C@sda21(r2)
/* 802F1C10 002EEB50  EC 24 00 32 */	fmuls f1, f4, f0
/* 802F1C14 002EEB54  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 802F1C18 002EEB58  FC 20 08 1E */	fctiwz f1, f1
/* 802F1C1C 002EEB5C  D8 21 00 30 */	stfd f1, 0x30(r1)
/* 802F1C20 002EEB60  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802F1C24 002EEB64  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F1C28 002EEB68  7C 63 02 14 */	add r3, r3, r0
/* 802F1C2C 002EEB6C  C0 23 00 04 */	lfs f1, 4(r3)
/* 802F1C30 002EEB70  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 802F1C34 002EEB74  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 802F1C38 002EEB78  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802F1C3C 002EEB7C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802F1C40 002EEB80  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802F1C44 002EEB84  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802F1C48 002EEB88  7C 08 03 A6 */	mtlr r0
/* 802F1C4C 002EEB8C  38 21 00 50 */	addi r1, r1, 0x50
/* 802F1C50 002EEB90  4E 80 00 20 */	blr 

.global updateMoveState__Q34Game7Sokkuri3ObjFv
updateMoveState__Q34Game7Sokkuri3ObjFv:
/* 802F1C54 002EEB94  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802F1C58 002EEB98  7C 08 02 A6 */	mflr r0
/* 802F1C5C 002EEB9C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802F1C60 002EEBA0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802F1C64 002EEBA4  7C 7F 1B 78 */	mr r31, r3
/* 802F1C68 002EEBA8  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802F1C6C 002EEBAC  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 802F1C70 002EEBB0  C0 9F 01 98 */	lfs f4, 0x198(r31)
/* 802F1C74 002EEBB4  EC 41 00 28 */	fsubs f2, f1, f0
/* 802F1C78 002EEBB8  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 802F1C7C 002EEBBC  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802F1C80 002EEBC0  EC 61 20 28 */	fsubs f3, f1, f4
/* 802F1C84 002EEBC4  EC 22 00 B2 */	fmuls f1, f2, f2
/* 802F1C88 002EEBC8  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 802F1C8C 002EEBCC  EC 00 00 32 */	fmuls f0, f0, f0
/* 802F1C90 002EEBD0  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 802F1C94 002EEBD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F1C98 002EEBD8  40 81 00 18 */	ble .L_802F1CB0
/* 802F1C9C 002EEBDC  D0 9F 02 D0 */	stfs f4, 0x2d0(r31)
/* 802F1CA0 002EEBE0  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802F1CA4 002EEBE4  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 802F1CA8 002EEBE8  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802F1CAC 002EEBEC  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
.L_802F1CB0:
/* 802F1CB0 002EEBF0  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802F1CB4 002EEBF4  28 00 00 00 */	cmplwi r0, 0
/* 802F1CB8 002EEBF8  41 82 00 A8 */	beq .L_802F1D60
/* 802F1CBC 002EEBFC  7F E4 FB 78 */	mr r4, r31
/* 802F1CC0 002EEC00  38 61 00 08 */	addi r3, r1, 8
/* 802F1CC4 002EEC04  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F1CC8 002EEC08  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 802F1CCC 002EEC0C  7D 89 03 A6 */	mtctr r12
/* 802F1CD0 002EEC10  4E 80 04 21 */	bctrl 
/* 802F1CD4 002EEC14  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 802F1CD8 002EEC18  7F E3 FB 78 */	mr r3, r31
/* 802F1CDC 002EEC1C  C0 02 EE 00 */	lfs f0, lbl_8051D160@sda21(r2)
/* 802F1CE0 002EEC20  38 81 00 14 */	addi r4, r1, 0x14
/* 802F1CE4 002EEC24  C0 61 00 08 */	lfs f3, 8(r1)
/* 802F1CE8 002EEC28  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 802F1CEC 002EEC2C  EC 02 00 2A */	fadds f0, f2, f0
/* 802F1CF0 002EEC30  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 802F1CF4 002EEC34  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 802F1CF8 002EEC38  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802F1CFC 002EEC3C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802F1D00 002EEC40  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F1D04 002EEC44  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 802F1D08 002EEC48  7D 89 03 A6 */	mtctr r12
/* 802F1D0C 002EEC4C  4E 80 04 21 */	bctrl 
/* 802F1D10 002EEC50  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802F1D14 002EEC54  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802F1D18 002EEC58  C0 43 09 34 */	lfs f2, 0x934(r3)
/* 802F1D1C 002EEC5C  C0 02 ED C0 */	lfs f0, lbl_8051D120@sda21(r2)
/* 802F1D20 002EEC60  EC 61 10 28 */	fsubs f3, f1, f2
/* 802F1D24 002EEC64  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802F1D28 002EEC68  40 81 00 08 */	ble .L_802F1D30
/* 802F1D2C 002EEC6C  48 00 00 08 */	b .L_802F1D34
.L_802F1D30:
/* 802F1D30 002EEC70  FC 60 18 50 */	fneg f3, f3
.L_802F1D34:
/* 802F1D34 002EEC74  C0 02 ED D4 */	lfs f0, lbl_8051D134@sda21(r2)
/* 802F1D38 002EEC78  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802F1D3C 002EEC7C  40 80 00 08 */	bge .L_802F1D44
/* 802F1D40 002EEC80  48 00 00 18 */	b .L_802F1D58
.L_802F1D44:
/* 802F1D44 002EEC84  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802F1D48 002EEC88  40 80 00 0C */	bge .L_802F1D54
/* 802F1D4C 002EEC8C  EC 41 00 2A */	fadds f2, f1, f0
/* 802F1D50 002EEC90  48 00 00 08 */	b .L_802F1D58
.L_802F1D54:
/* 802F1D54 002EEC94  EC 41 00 28 */	fsubs f2, f1, f0
.L_802F1D58:
/* 802F1D58 002EEC98  D0 5F 02 CC */	stfs f2, 0x2cc(r31)
/* 802F1D5C 002EEC9C  48 00 00 50 */	b .L_802F1DAC
.L_802F1D60:
/* 802F1D60 002EECA0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802F1D64 002EECA4  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802F1D68 002EECA8  C0 43 02 E4 */	lfs f2, 0x2e4(r3)
/* 802F1D6C 002EECAC  C0 02 ED C0 */	lfs f0, lbl_8051D120@sda21(r2)
/* 802F1D70 002EECB0  EC 61 10 28 */	fsubs f3, f1, f2
/* 802F1D74 002EECB4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802F1D78 002EECB8  40 81 00 08 */	ble .L_802F1D80
/* 802F1D7C 002EECBC  48 00 00 08 */	b .L_802F1D84
.L_802F1D80:
/* 802F1D80 002EECC0  FC 60 18 50 */	fneg f3, f3
.L_802F1D84:
/* 802F1D84 002EECC4  C0 02 EE 04 */	lfs f0, lbl_8051D164@sda21(r2)
/* 802F1D88 002EECC8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802F1D8C 002EECCC  40 80 00 08 */	bge .L_802F1D94
/* 802F1D90 002EECD0  48 00 00 18 */	b .L_802F1DA8
.L_802F1D94:
/* 802F1D94 002EECD4  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802F1D98 002EECD8  40 80 00 0C */	bge .L_802F1DA4
/* 802F1D9C 002EECDC  EC 41 00 2A */	fadds f2, f1, f0
/* 802F1DA0 002EECE0  48 00 00 08 */	b .L_802F1DA8
.L_802F1DA4:
/* 802F1DA4 002EECE4  EC 41 00 28 */	fsubs f2, f1, f0
.L_802F1DA8:
/* 802F1DA8 002EECE8  D0 5F 02 CC */	stfs f2, 0x2cc(r31)
.L_802F1DAC:
/* 802F1DAC 002EECEC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802F1DB0 002EECF0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802F1DB4 002EECF4  7C 08 03 A6 */	mtlr r0
/* 802F1DB8 002EECF8  38 21 00 30 */	addi r1, r1, 0x30
/* 802F1DBC 002EECFC  4E 80 00 20 */	blr 

.global resetMoveVelocity__Q34Game7Sokkuri3ObjFv
resetMoveVelocity__Q34Game7Sokkuri3ObjFv:
/* 802F1DC0 002EED00  80 03 02 80 */	lwz r0, 0x280(r3)
/* 802F1DC4 002EED04  28 00 00 00 */	cmplwi r0, 0
/* 802F1DC8 002EED08  41 82 00 14 */	beq .L_802F1DDC
/* 802F1DCC 002EED0C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802F1DD0 002EED10  C0 04 09 34 */	lfs f0, 0x934(r4)
/* 802F1DD4 002EED14  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 802F1DD8 002EED18  4E 80 00 20 */	blr 
.L_802F1DDC:
/* 802F1DDC 002EED1C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802F1DE0 002EED20  C0 04 02 E4 */	lfs f0, 0x2e4(r4)
/* 802F1DE4 002EED24  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 802F1DE8 002EED28  4E 80 00 20 */	blr 

.global setNextWaitInfo__Q34Game7Sokkuri3ObjFv
setNextWaitInfo__Q34Game7Sokkuri3ObjFv:
/* 802F1DEC 002EED2C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802F1DF0 002EED30  7C 08 02 A6 */	mflr r0
/* 802F1DF4 002EED34  90 01 00 34 */	stw r0, 0x34(r1)
/* 802F1DF8 002EED38  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802F1DFC 002EED3C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802F1E00 002EED40  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802F1E04 002EED44  7C 7F 1B 78 */	mr r31, r3
/* 802F1E08 002EED48  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802F1E0C 002EED4C  C0 23 08 E4 */	lfs f1, 0x8e4(r3)
/* 802F1E10 002EED50  C0 03 09 0C */	lfs f0, 0x90c(r3)
/* 802F1E14 002EED54  EF E1 00 28 */	fsubs f31, f1, f0
/* 802F1E18 002EED58  4B DD 77 89 */	bl rand
/* 802F1E1C 002EED5C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F1E20 002EED60  3C 00 43 30 */	lis r0, 0x4330
/* 802F1E24 002EED64  90 61 00 0C */	stw r3, 0xc(r1)
/* 802F1E28 002EED68  C8 42 ED F8 */	lfd f2, lbl_8051D158@sda21(r2)
/* 802F1E2C 002EED6C  90 01 00 08 */	stw r0, 8(r1)
/* 802F1E30 002EED70  C0 02 ED E0 */	lfs f0, lbl_8051D140@sda21(r2)
/* 802F1E34 002EED74  C8 21 00 08 */	lfd f1, 8(r1)
/* 802F1E38 002EED78  EC 21 10 28 */	fsubs f1, f1, f2
/* 802F1E3C 002EED7C  EC 3F 00 72 */	fmuls f1, f31, f1
/* 802F1E40 002EED80  EC 01 00 24 */	fdivs f0, f1, f0
/* 802F1E44 002EED84  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802F1E48 002EED88  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802F1E4C 002EED8C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802F1E50 002EED90  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802F1E54 002EED94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802F1E58 002EED98  7C 08 03 A6 */	mtlr r0
/* 802F1E5C 002EED9C  38 21 00 30 */	addi r1, r1, 0x30
/* 802F1E60 002EEDA0  4E 80 00 20 */	blr 

.global createDownEffect__Q34Game7Sokkuri3ObjFff
createDownEffect__Q34Game7Sokkuri3ObjFff:
/* 802F1E64 002EEDA4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802F1E68 002EEDA8  7C 08 02 A6 */	mflr r0
/* 802F1E6C 002EEDAC  90 01 00 34 */	stw r0, 0x34(r1)
/* 802F1E70 002EEDB0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802F1E74 002EEDB4  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802F1E78 002EEDB8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802F1E7C 002EEDBC  7C 7F 1B 78 */	mr r31, r3
/* 802F1E80 002EEDC0  FF E0 10 90 */	fmr f31, f2
/* 802F1E84 002EEDC4  80 03 02 80 */	lwz r0, 0x280(r3)
/* 802F1E88 002EEDC8  28 00 00 00 */	cmplwi r0, 0
/* 802F1E8C 002EEDCC  41 82 00 6C */	beq .L_802F1EF8
/* 802F1E90 002EEDD0  C0 02 ED C0 */	lfs f0, lbl_8051D120@sda21(r2)
/* 802F1E94 002EEDD4  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802F1E98 002EEDD8  40 81 00 74 */	ble .L_802F1F0C
/* 802F1E9C 002EEDDC  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 802F1EA0 002EEDE0  7C 03 03 78 */	mr r3, r0
/* 802F1EA4 002EEDE4  D0 01 00 08 */	stfs f0, 8(r1)
/* 802F1EA8 002EEDE8  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802F1EAC 002EEDEC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802F1EB0 002EEDF0  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 802F1EB4 002EEDF4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802F1EB8 002EEDF8  81 83 00 00 */	lwz r12, 0(r3)
/* 802F1EBC 002EEDFC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802F1EC0 002EEE00  7D 89 03 A6 */	mtctr r12
/* 802F1EC4 002EEE04  4E 80 04 21 */	bctrl 
/* 802F1EC8 002EEE08  C0 43 00 00 */	lfs f2, 0(r3)
/* 802F1ECC 002EEE0C  C0 02 EE 08 */	lfs f0, lbl_8051D168@sda21(r2)
/* 802F1ED0 002EEE10  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 802F1ED4 002EEE14  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 802F1ED8 002EEE18  EC 22 08 28 */	fsubs f1, f2, f1
/* 802F1EDC 002EEE1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F1EE0 002EEE20  40 80 00 2C */	bge .L_802F1F0C
/* 802F1EE4 002EEE24  FC 20 F8 90 */	fmr f1, f31
/* 802F1EE8 002EEE28  7F E3 FB 78 */	mr r3, r31
/* 802F1EEC 002EEE2C  38 81 00 08 */	addi r4, r1, 8
/* 802F1EF0 002EEE30  4B E1 1B 09 */	bl "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 802F1EF4 002EEE34  48 00 00 18 */	b .L_802F1F0C
.L_802F1EF8:
/* 802F1EF8 002EEE38  C0 02 ED C0 */	lfs f0, lbl_8051D120@sda21(r2)
/* 802F1EFC 002EEE3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F1F00 002EEE40  40 81 00 0C */	ble .L_802F1F0C
/* 802F1F04 002EEE44  38 9F 01 8C */	addi r4, r31, 0x18c
/* 802F1F08 002EEE48  4B E1 1A 39 */	bl "createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
.L_802F1F0C:
/* 802F1F0C 002EEE4C  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802F1F10 002EEE50  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802F1F14 002EEE54  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802F1F18 002EEE58  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802F1F1C 002EEE5C  7C 08 03 A6 */	mtlr r0
/* 802F1F20 002EEE60  38 21 00 30 */	addi r1, r1, 0x30
/* 802F1F24 002EEE64  4E 80 00 20 */	blr 

.global createBubbleEffect__Q34Game7Sokkuri3ObjFv
createBubbleEffect__Q34Game7Sokkuri3ObjFv:
/* 802F1F28 002EEE68  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802F1F2C 002EEE6C  7C 08 02 A6 */	mflr r0
/* 802F1F30 002EEE70  90 01 00 34 */	stw r0, 0x34(r1)
/* 802F1F34 002EEE74  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802F1F38 002EEE78  7C 7F 1B 78 */	mr r31, r3
/* 802F1F3C 002EEE7C  80 63 02 80 */	lwz r3, 0x280(r3)
/* 802F1F40 002EEE80  28 03 00 00 */	cmplwi r3, 0
/* 802F1F44 002EEE84  41 82 00 90 */	beq .L_802F1FD4
/* 802F1F48 002EEE88  81 83 00 00 */	lwz r12, 0(r3)
/* 802F1F4C 002EEE8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802F1F50 002EEE90  7D 89 03 A6 */	mtctr r12
/* 802F1F54 002EEE94  4E 80 04 21 */	bctrl 
/* 802F1F58 002EEE98  C0 43 00 00 */	lfs f2, 0(r3)
/* 802F1F5C 002EEE9C  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 802F1F60 002EEEA0  C0 02 ED D4 */	lfs f0, lbl_8051D134@sda21(r2)
/* 802F1F64 002EEEA4  EC 22 08 28 */	fsubs f1, f2, f1
/* 802F1F68 002EEEA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F1F6C 002EEEAC  40 81 00 68 */	ble .L_802F1FD4
/* 802F1F70 002EEEB0  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 802F1F74 002EEEB4  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802F1F78 002EEEB8  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 802F1F7C 002EEEBC  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 802F1F80 002EEEC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F1F84 002EEEC4  3C 60 80 4D */	lis r3, __vt__Q23efx10TJgmBubble@ha
/* 802F1F88 002EEEC8  39 05 A7 F8 */	addi r8, r5, __vt__Q23efx5TBase@l
/* 802F1F8C 002EEECC  38 E4 6A 78 */	addi r7, r4, __vt__Q23efx8TSimple1@l
/* 802F1F90 002EEED0  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 802F1F94 002EEED4  38 03 4F 68 */	addi r0, r3, __vt__Q23efx10TJgmBubble@l
/* 802F1F98 002EEED8  38 C0 00 C1 */	li r6, 0xc1
/* 802F1F9C 002EEEDC  38 A0 00 00 */	li r5, 0
/* 802F1FA0 002EEEE0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802F1FA4 002EEEE4  38 61 00 08 */	addi r3, r1, 8
/* 802F1FA8 002EEEE8  38 81 00 14 */	addi r4, r1, 0x14
/* 802F1FAC 002EEEEC  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802F1FB0 002EEEF0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802F1FB4 002EEEF4  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 802F1FB8 002EEEF8  91 01 00 08 */	stw r8, 8(r1)
/* 802F1FBC 002EEEFC  90 E1 00 08 */	stw r7, 8(r1)
/* 802F1FC0 002EEF00  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802F1FC4 002EEF04  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 802F1FC8 002EEF08  90 A1 00 10 */	stw r5, 0x10(r1)
/* 802F1FCC 002EEF0C  90 01 00 08 */	stw r0, 8(r1)
/* 802F1FD0 002EEF10  48 0B CF B5 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
.L_802F1FD4:
/* 802F1FD4 002EEF14  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802F1FD8 002EEF18  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802F1FDC 002EEF1C  7C 08 03 A6 */	mtlr r0
/* 802F1FE0 002EEF20  38 21 00 30 */	addi r1, r1, 0x30
/* 802F1FE4 002EEF24  4E 80 00 20 */	blr 

.global createEfxHamon__Q34Game7Sokkuri3ObjFv
createEfxHamon__Q34Game7Sokkuri3ObjFv:
/* 802F1FE8 002EEF28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F1FEC 002EEF2C  7C 08 02 A6 */	mflr r0
/* 802F1FF0 002EEF30  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F1FF4 002EEF34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F1FF8 002EEF38  7C 7F 1B 78 */	mr r31, r3
/* 802F1FFC 002EEF3C  81 83 00 00 */	lwz r12, 0(r3)
/* 802F2000 002EEF40  81 8C 00 D0 */	lwz r12, 0xd0(r12)
/* 802F2004 002EEF44  7D 89 03 A6 */	mtctr r12
/* 802F2008 002EEF48  4E 80 04 21 */	bctrl 
/* 802F200C 002EEF4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F2010 002EEF50  40 82 00 0C */	bne .L_802F201C
/* 802F2014 002EEF54  7F E3 FB 78 */	mr r3, r31
/* 802F2018 002EEF58  4B E0 F8 ED */	bl createEfxHamon__Q24Game9EnemyBaseFv
.L_802F201C:
/* 802F201C 002EEF5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F2020 002EEF60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F2024 002EEF64  7C 08 03 A6 */	mtlr r0
/* 802F2028 002EEF68  38 21 00 10 */	addi r1, r1, 0x10
/* 802F202C 002EEF6C  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q34Game7Sokkuri3ObjFv
getDownSmokeScale__Q34Game7Sokkuri3ObjFv:
/* 802F2030 002EEF70  C0 22 EE 0C */	lfs f1, lbl_8051D16C@sda21(r2)
/* 802F2034 002EEF74  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game7Sokkuri3ObjFv
getEnemyTypeID__Q34Game7Sokkuri3ObjFv:
/* 802F2038 002EEF78  38 60 00 4F */	li r3, 0x4f
/* 802F203C 002EEF7C  4E 80 00 20 */	blr 
