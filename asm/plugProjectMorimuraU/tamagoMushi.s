.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_804924E8
lbl_804924E8:
	.4byte 0x74616D61
	.4byte 0x676F4D75
	.4byte 0x73686900
.global lbl_804924F4
lbl_804924F4:
	.4byte 0x74616D61
	.4byte 0x676F4D75
	.4byte 0x7368692E
	.4byte 0x63707000
.global lbl_80492504
lbl_80492504:
	.asciz "P2Assert"
	.skip 3
	.4byte 0x6B6F7368
	.4byte 0x696A6E74
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23efx9TTamagoAp
__vt__Q23efx9TTamagoAp:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.global __vt__Q34Game11TamagoMushi3Obj
__vt__Q34Game11TamagoMushi3Obj:
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
	.4byte onInit__Q34Game11TamagoMushi3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game11TamagoMushi3ObjFR8Graphics
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
	.4byte isLivingThing__Q34Game11TamagoMushi3ObjFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte bounceCallback__Q34Game11TamagoMushi3ObjFPQ23Sys8Triangle
	.4byte collisionCallback__Q34Game11TamagoMushi3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game11TamagoMushi3ObjFRQ24Game11ShadowParam
	.4byte needShadow__Q34Game11TamagoMushi3ObjFv
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
	.4byte __dt__Q34Game11TamagoMushi3ObjFv
	.4byte "birth__Q34Game11TamagoMushi3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game11TamagoMushi3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game11TamagoMushi3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game11TamagoMushi3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game11TamagoMushi3ObjFR8Graphics
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
	.4byte setParameters__Q34Game11TamagoMushi3ObjFv
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
	.4byte getEnemyTypeID__Q34Game11TamagoMushi3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreatureR10Vector3<f>f"
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
	.4byte startCarcassMotion__Q34Game11TamagoMushi3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game11TamagoMushi3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game11TamagoMushi3ObjFPQ34Game11TamagoMushi3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@780@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@780@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@780@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@780@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@780@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@780@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051EAB0
lbl_8051EAB0:
	.4byte 0x47000000
.global lbl_8051EAB4
lbl_8051EAB4:
	.4byte 0x3F4CCCCD
.global lbl_8051EAB8
lbl_8051EAB8:
	.4byte 0x3E4CCCCD
.global lbl_8051EABC
lbl_8051EABC:
	.float 0.7
.global lbl_8051EAC0
lbl_8051EAC0:
	.float 0.3
.global lbl_8051EAC4
lbl_8051EAC4:
	.4byte 0x00000000
.global lbl_8051EAC8
lbl_8051EAC8:
	.4byte 0x43A2F983
.global lbl_8051EACC
lbl_8051EACC:
	.4byte 0xC3A2F983
.global lbl_8051EAD0
lbl_8051EAD0:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051EAD8
lbl_8051EAD8:
	.4byte 0x41200000
.global lbl_8051EADC
lbl_8051EADC:
	.4byte 0x40000000
.global lbl_8051EAE0
lbl_8051EAE0:
	.float 1.0
.global lbl_8051EAE4
lbl_8051EAE4:
	.4byte 0x41700000
.global lbl_8051EAE8
lbl_8051EAE8:
	.4byte 0x41400000
.global lbl_8051EAEC
lbl_8051EAEC:
	.4byte 0x42480000
.global lbl_8051EAF0
lbl_8051EAF0:
	.4byte 0x43480000
.global lbl_8051EAF4
lbl_8051EAF4:
	.4byte 0x3F666666
.global lbl_8051EAF8
lbl_8051EAF8:
	.4byte 0x43B40000
.global lbl_8051EAFC
lbl_8051EAFC:
	.4byte 0x40490FDB
.global lbl_8051EB00
lbl_8051EB00:
	.4byte 0x3BB60B61
.global lbl_8051EB04
lbl_8051EB04:
	.float 0.1
.global lbl_8051EB08
lbl_8051EB08:
	.float 0.5
.global lbl_8051EB0C
lbl_8051EB0C:
	.4byte 0x40C90FDB
.global lbl_8051EB10
lbl_8051EB10:
	.4byte 0x43340000
.global lbl_8051EB14
lbl_8051EB14:
	.4byte 0x3F733333
.global lbl_8051EB18
lbl_8051EB18:
	.4byte 0x3EB33333
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setParameters__Q34Game11TamagoMushi3ObjFv
setParameters__Q34Game11TamagoMushi3ObjFv:
/* 8036EBA8 0036BAE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036EBAC 0036BAEC  7C 08 02 A6 */	mflr r0
/* 8036EBB0 0036BAF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036EBB4 0036BAF4  4B D9 40 25 */	bl setParameters__Q24Game9EnemyBaseFv
/* 8036EBB8 0036BAF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036EBBC 0036BAFC  7C 08 03 A6 */	mtlr r0
/* 8036EBC0 0036BB00  38 21 00 10 */	addi r1, r1, 0x10
/* 8036EBC4 0036BB04  4E 80 00 20 */	blr 

.global "birth__Q34Game11TamagoMushi3ObjFR10Vector3<f>f"
"birth__Q34Game11TamagoMushi3ObjFR10Vector3<f>f":
/* 8036EBC8 0036BB08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036EBCC 0036BB0C  7C 08 02 A6 */	mflr r0
/* 8036EBD0 0036BB10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036EBD4 0036BB14  4B D9 3E 2D */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 8036EBD8 0036BB18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036EBDC 0036BB1C  7C 08 03 A6 */	mtlr r0
/* 8036EBE0 0036BB20  38 21 00 10 */	addi r1, r1, 0x10
/* 8036EBE4 0036BB24  4E 80 00 20 */	blr 

.global onInit__Q34Game11TamagoMushi3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game11TamagoMushi3ObjFPQ24Game15CreatureInitArg:
/* 8036EBE8 0036BB28  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8036EBEC 0036BB2C  7C 08 02 A6 */	mflr r0
/* 8036EBF0 0036BB30  3C A0 80 49 */	lis r5, lbl_804924E8@ha
/* 8036EBF4 0036BB34  90 01 00 54 */	stw r0, 0x54(r1)
/* 8036EBF8 0036BB38  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8036EBFC 0036BB3C  3B E5 24 E8 */	addi r31, r5, lbl_804924E8@l
/* 8036EC00 0036BB40  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8036EC04 0036BB44  7C 7E 1B 78 */	mr r30, r3
/* 8036EC08 0036BB48  4B D9 2E 51 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8036EC0C 0036BB4C  80 7E 01 E0 */	lwz r3, 0x1e0(r30)
/* 8036EC10 0036BB50  38 00 00 00 */	li r0, 0
/* 8036EC14 0036BB54  54 63 06 6E */	rlwinm r3, r3, 0, 0x19, 0x17
/* 8036EC18 0036BB58  90 7E 01 E0 */	stw r3, 0x1e0(r30)
/* 8036EC1C 0036BB5C  80 7E 01 E0 */	lwz r3, 0x1e0(r30)
/* 8036EC20 0036BB60  54 63 07 76 */	rlwinm r3, r3, 0, 0x1d, 0x1b
/* 8036EC24 0036BB64  90 7E 01 E0 */	stw r3, 0x1e0(r30)
/* 8036EC28 0036BB68  80 7E 01 E0 */	lwz r3, 0x1e0(r30)
/* 8036EC2C 0036BB6C  54 63 06 2C */	rlwinm r3, r3, 0, 0x18, 0x16
/* 8036EC30 0036BB70  90 7E 01 E0 */	stw r3, 0x1e0(r30)
/* 8036EC34 0036BB74  90 1E 02 BC */	stw r0, 0x2bc(r30)
/* 8036EC38 0036BB78  98 1E 02 F0 */	stb r0, 0x2f0(r30)
/* 8036EC3C 0036BB7C  90 1E 02 F4 */	stw r0, 0x2f4(r30)
/* 8036EC40 0036BB80  90 1E 03 04 */	stw r0, 0x304(r30)
/* 8036EC44 0036BB84  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 8036EC48 0036BB88  D0 1E 02 E0 */	stfs f0, 0x2e0(r30)
/* 8036EC4C 0036BB8C  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8036EC50 0036BB90  D0 1E 02 E4 */	stfs f0, 0x2e4(r30)
/* 8036EC54 0036BB94  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 8036EC58 0036BB98  D0 1E 02 E8 */	stfs f0, 0x2e8(r30)
/* 8036EC5C 0036BB9C  4B D5 A9 45 */	bl rand
/* 8036EC60 0036BBA0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8036EC64 0036BBA4  3C 00 43 30 */	lis r0, 0x4330
/* 8036EC68 0036BBA8  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8036EC6C 0036BBAC  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036EC70 0036BBB0  90 01 00 18 */	stw r0, 0x18(r1)
/* 8036EC74 0036BBB4  C8 22 07 70 */	lfd f1, lbl_8051EAD0@sda21(r2)
/* 8036EC78 0036BBB8  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8036EC7C 0036BBBC  C0 62 07 50 */	lfs f3, lbl_8051EAB0@sda21(r2)
/* 8036EC80 0036BBC0  EC 80 08 28 */	fsubs f4, f0, f1
/* 8036EC84 0036BBC4  C0 22 07 58 */	lfs f1, lbl_8051EAB8@sda21(r2)
/* 8036EC88 0036BBC8  C0 02 07 54 */	lfs f0, lbl_8051EAB4@sda21(r2)
/* 8036EC8C 0036BBCC  C0 43 08 1C */	lfs f2, 0x81c(r3)
/* 8036EC90 0036BBD0  EC 64 18 24 */	fdivs f3, f4, f3
/* 8036EC94 0036BBD4  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 8036EC98 0036BBD8  EC 02 00 32 */	fmuls f0, f2, f0
/* 8036EC9C 0036BBDC  FC 00 00 1E */	fctiwz f0, f0
/* 8036ECA0 0036BBE0  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8036ECA4 0036BBE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8036ECA8 0036BBE8  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 8036ECAC 0036BBEC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8036ECB0 0036BBF0  28 03 00 00 */	cmplwi r3, 0
/* 8036ECB4 0036BBF4  41 82 00 1C */	beq .L_8036ECD0
/* 8036ECB8 0036BBF8  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8036ECBC 0036BBFC  2C 00 00 04 */	cmpwi r0, 4
/* 8036ECC0 0036BC00  40 82 00 10 */	bne .L_8036ECD0
/* 8036ECC4 0036BC04  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 8036ECC8 0036BC08  1C 00 00 05 */	mulli r0, r0, 5
/* 8036ECCC 0036BC0C  90 1E 02 C0 */	stw r0, 0x2c0(r30)
.L_8036ECD0:
/* 8036ECD0 0036BC10  4B D5 A8 D1 */	bl rand
/* 8036ECD4 0036BC14  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8036ECD8 0036BC18  3C 00 43 30 */	lis r0, 0x4330
/* 8036ECDC 0036BC1C  90 61 00 24 */	stw r3, 0x24(r1)
/* 8036ECE0 0036BC20  C8 62 07 70 */	lfd f3, lbl_8051EAD0@sda21(r2)
/* 8036ECE4 0036BC24  90 01 00 20 */	stw r0, 0x20(r1)
/* 8036ECE8 0036BC28  C0 42 07 50 */	lfs f2, lbl_8051EAB0@sda21(r2)
/* 8036ECEC 0036BC2C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8036ECF0 0036BC30  C0 22 07 60 */	lfs f1, lbl_8051EAC0@sda21(r2)
/* 8036ECF4 0036BC34  EC 60 18 28 */	fsubs f3, f0, f3
/* 8036ECF8 0036BC38  C0 02 07 5C */	lfs f0, lbl_8051EABC@sda21(r2)
/* 8036ECFC 0036BC3C  EC 43 10 24 */	fdivs f2, f3, f2
/* 8036ED00 0036BC40  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8036ED04 0036BC44  D0 1E 02 C4 */	stfs f0, 0x2c4(r30)
/* 8036ED08 0036BC48  4B D5 A8 99 */	bl rand
/* 8036ED0C 0036BC4C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8036ED10 0036BC50  3C 00 43 30 */	lis r0, 0x4330
/* 8036ED14 0036BC54  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8036ED18 0036BC58  C8 62 07 70 */	lfd f3, lbl_8051EAD0@sda21(r2)
/* 8036ED1C 0036BC5C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8036ED20 0036BC60  C0 42 07 50 */	lfs f2, lbl_8051EAB0@sda21(r2)
/* 8036ED24 0036BC64  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8036ED28 0036BC68  C0 22 07 60 */	lfs f1, lbl_8051EAC0@sda21(r2)
/* 8036ED2C 0036BC6C  EC 60 18 28 */	fsubs f3, f0, f3
/* 8036ED30 0036BC70  C0 02 07 5C */	lfs f0, lbl_8051EABC@sda21(r2)
/* 8036ED34 0036BC74  EC 43 10 24 */	fdivs f2, f3, f2
/* 8036ED38 0036BC78  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8036ED3C 0036BC7C  D0 1E 02 C8 */	stfs f0, 0x2c8(r30)
/* 8036ED40 0036BC80  4B D5 A8 61 */	bl rand
/* 8036ED44 0036BC84  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8036ED48 0036BC88  3C 60 43 30 */	lis r3, 0x4330
/* 8036ED4C 0036BC8C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8036ED50 0036BC90  38 00 00 00 */	li r0, 0
/* 8036ED54 0036BC94  C8 22 07 70 */	lfd f1, lbl_8051EAD0@sda21(r2)
/* 8036ED58 0036BC98  90 61 00 28 */	stw r3, 0x28(r1)
/* 8036ED5C 0036BC9C  C0 62 07 50 */	lfs f3, lbl_8051EAB0@sda21(r2)
/* 8036ED60 0036BCA0  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 8036ED64 0036BCA4  C0 42 07 5C */	lfs f2, lbl_8051EABC@sda21(r2)
/* 8036ED68 0036BCA8  EC 80 08 28 */	fsubs f4, f0, f1
/* 8036ED6C 0036BCAC  C0 22 07 60 */	lfs f1, lbl_8051EAC0@sda21(r2)
/* 8036ED70 0036BCB0  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036ED74 0036BCB4  EC 64 18 24 */	fdivs f3, f4, f3
/* 8036ED78 0036BCB8  EC 22 08 FA */	fmadds f1, f2, f3, f1
/* 8036ED7C 0036BCBC  D0 3E 02 CC */	stfs f1, 0x2cc(r30)
/* 8036ED80 0036BCC0  D0 1E 02 FC */	stfs f0, 0x2fc(r30)
/* 8036ED84 0036BCC4  98 1E 03 00 */	stb r0, 0x300(r30)
/* 8036ED88 0036BCC8  C0 9E 01 FC */	lfs f4, 0x1fc(r30)
/* 8036ED8C 0036BCCC  FC 20 20 90 */	fmr f1, f4
/* 8036ED90 0036BCD0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8036ED94 0036BCD4  40 80 00 08 */	bge .L_8036ED9C
/* 8036ED98 0036BCD8  FC 20 20 50 */	fneg f1, f4
.L_8036ED9C:
/* 8036ED9C 0036BCDC  C0 42 07 68 */	lfs f2, lbl_8051EAC8@sda21(r2)
/* 8036EDA0 0036BCE0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036EDA4 0036BCE4  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036EDA8 0036BCE8  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8036EDAC 0036BCEC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8036EDB0 0036BCF0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8036EDB4 0036BCF4  FC 00 08 1E */	fctiwz f0, f1
/* 8036EDB8 0036BCF8  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8036EDBC 0036BCFC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8036EDC0 0036BD00  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036EDC4 0036BD04  7C 64 02 14 */	add r3, r4, r0
/* 8036EDC8 0036BD08  C0 63 00 04 */	lfs f3, 4(r3)
/* 8036EDCC 0036BD0C  40 80 00 28 */	bge .L_8036EDF4
/* 8036EDD0 0036BD10  C0 02 07 6C */	lfs f0, lbl_8051EACC@sda21(r2)
/* 8036EDD4 0036BD14  EC 04 00 32 */	fmuls f0, f4, f0
/* 8036EDD8 0036BD18  FC 00 00 1E */	fctiwz f0, f0
/* 8036EDDC 0036BD1C  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8036EDE0 0036BD20  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8036EDE4 0036BD24  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036EDE8 0036BD28  7C 04 04 2E */	lfsx f0, r4, r0
/* 8036EDEC 0036BD2C  FC 20 00 50 */	fneg f1, f0
/* 8036EDF0 0036BD30  48 00 00 1C */	b .L_8036EE0C
.L_8036EDF4:
/* 8036EDF4 0036BD34  EC 04 00 B2 */	fmuls f0, f4, f2
/* 8036EDF8 0036BD38  FC 00 00 1E */	fctiwz f0, f0
/* 8036EDFC 0036BD3C  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8036EE00 0036BD40  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8036EE04 0036BD44  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036EE08 0036BD48  7C 24 04 2E */	lfsx f1, r4, r0
.L_8036EE0C:
/* 8036EE0C 0036BD4C  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036EE10 0036BD50  7F C3 F3 78 */	mr r3, r30
/* 8036EE14 0036BD54  D0 21 00 08 */	stfs f1, 8(r1)
/* 8036EE18 0036BD58  38 81 00 08 */	addi r4, r1, 8
/* 8036EE1C 0036BD5C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8036EE20 0036BD60  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8036EE24 0036BD64  48 00 11 29 */	bl "setGoalDirect__Q34Game11TamagoMushi3ObjFR10Vector3<f>"
/* 8036EE28 0036BD68  38 00 00 00 */	li r0, 0
/* 8036EE2C 0036BD6C  98 1E 01 F3 */	stb r0, 0x1f3(r30)
/* 8036EE30 0036BD70  80 1E 01 74 */	lwz r0, 0x174(r30)
/* 8036EE34 0036BD74  28 00 00 00 */	cmplwi r0, 0
/* 8036EE38 0036BD78  40 82 00 18 */	bne .L_8036EE50
/* 8036EE3C 0036BD7C  38 7F 00 0C */	addi r3, r31, 0xc
/* 8036EE40 0036BD80  38 BF 00 1C */	addi r5, r31, 0x1c
/* 8036EE44 0036BD84  38 80 00 51 */	li r4, 0x51
/* 8036EE48 0036BD88  4C C6 31 82 */	crclr 6
/* 8036EE4C 0036BD8C  4B CB B7 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8036EE50:
/* 8036EE50 0036BD90  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8036EE54 0036BD94  38 9F 00 28 */	addi r4, r31, 0x28
/* 8036EE58 0036BD98  48 0D 01 8D */	bl getJoint__Q28SysShape5ModelFPc
/* 8036EE5C 0036BD9C  90 7E 02 F8 */	stw r3, 0x2f8(r30)
/* 8036EE60 0036BDA0  80 1E 02 F8 */	lwz r0, 0x2f8(r30)
/* 8036EE64 0036BDA4  28 00 00 00 */	cmplwi r0, 0
/* 8036EE68 0036BDA8  40 82 00 18 */	bne .L_8036EE80
/* 8036EE6C 0036BDAC  38 7F 00 0C */	addi r3, r31, 0xc
/* 8036EE70 0036BDB0  38 BF 00 1C */	addi r5, r31, 0x1c
/* 8036EE74 0036BDB4  38 80 00 54 */	li r4, 0x54
/* 8036EE78 0036BDB8  4C C6 31 82 */	crclr 6
/* 8036EE7C 0036BDBC  4B CB B7 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8036EE80:
/* 8036EE80 0036BDC0  80 7E 03 08 */	lwz r3, 0x308(r30)
/* 8036EE84 0036BDC4  7F C4 F3 78 */	mr r4, r30
/* 8036EE88 0036BDC8  38 A0 00 02 */	li r5, 2
/* 8036EE8C 0036BDCC  38 C0 00 00 */	li r6, 0
/* 8036EE90 0036BDD0  81 83 00 00 */	lwz r12, 0(r3)
/* 8036EE94 0036BDD4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8036EE98 0036BDD8  7D 89 03 A6 */	mtctr r12
/* 8036EE9C 0036BDDC  4E 80 04 21 */	bctrl 
/* 8036EEA0 0036BDE0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8036EEA4 0036BDE4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8036EEA8 0036BDE8  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8036EEAC 0036BDEC  7C 08 03 A6 */	mtlr r0
/* 8036EEB0 0036BDF0  38 21 00 50 */	addi r1, r1, 0x50
/* 8036EEB4 0036BDF4  4E 80 00 20 */	blr 

.global __ct__Q34Game11TamagoMushi3ObjFv
__ct__Q34Game11TamagoMushi3ObjFv:
/* 8036EEB8 0036BDF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036EEBC 0036BDFC  7C 08 02 A6 */	mflr r0
/* 8036EEC0 0036BE00  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036EEC4 0036BE04  7C 80 07 35 */	extsh. r0, r4
/* 8036EEC8 0036BE08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036EECC 0036BE0C  7C 7F 1B 78 */	mr r31, r3
/* 8036EED0 0036BE10  93 C1 00 08 */	stw r30, 8(r1)
/* 8036EED4 0036BE14  41 82 00 24 */	beq .L_8036EEF8
/* 8036EED8 0036BE18  38 1F 03 0C */	addi r0, r31, 0x30c
/* 8036EEDC 0036BE1C  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8036EEE0 0036BE20  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8036EEE4 0036BE24  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8036EEE8 0036BE28  38 00 00 00 */	li r0, 0
/* 8036EEEC 0036BE2C  90 7F 03 0C */	stw r3, 0x30c(r31)
/* 8036EEF0 0036BE30  90 1F 03 10 */	stw r0, 0x310(r31)
/* 8036EEF4 0036BE34  90 1F 03 14 */	stw r0, 0x314(r31)
.L_8036EEF8:
/* 8036EEF8 0036BE38  7F E3 FB 78 */	mr r3, r31
/* 8036EEFC 0036BE3C  38 80 00 00 */	li r4, 0
/* 8036EF00 0036BE40  4B D9 24 A1 */	bl __ct__Q24Game9EnemyBaseFv
/* 8036EF04 0036BE44  3C 60 80 4E */	lis r3, __vt__Q34Game11TamagoMushi3Obj@ha
/* 8036EF08 0036BE48  38 9F 03 0C */	addi r4, r31, 0x30c
/* 8036EF0C 0036BE4C  38 63 35 FC */	addi r3, r3, __vt__Q34Game11TamagoMushi3Obj@l
/* 8036EF10 0036BE50  38 00 00 00 */	li r0, 0
/* 8036EF14 0036BE54  90 7F 00 00 */	stw r3, 0(r31)
/* 8036EF18 0036BE58  38 A3 01 B0 */	addi r5, r3, 0x1b0
/* 8036EF1C 0036BE5C  38 C3 02 FC */	addi r6, r3, 0x2fc
/* 8036EF20 0036BE60  38 60 00 2C */	li r3, 0x2c
/* 8036EF24 0036BE64  90 BF 01 78 */	stw r5, 0x178(r31)
/* 8036EF28 0036BE68  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 8036EF2C 0036BE6C  90 C5 00 00 */	stw r6, 0(r5)
/* 8036EF30 0036BE70  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 8036EF34 0036BE74  7C 85 20 50 */	subf r4, r5, r4
/* 8036EF38 0036BE78  90 85 00 0C */	stw r4, 0xc(r5)
/* 8036EF3C 0036BE7C  90 1F 02 F8 */	stw r0, 0x2f8(r31)
/* 8036EF40 0036BE80  90 1F 03 08 */	stw r0, 0x308(r31)
/* 8036EF44 0036BE84  4B CB 4F 61 */	bl __nw__FUl
/* 8036EF48 0036BE88  7C 7E 1B 79 */	or. r30, r3, r3
/* 8036EF4C 0036BE8C  41 82 00 44 */	beq .L_8036EF90
/* 8036EF50 0036BE90  4B DB 8A 25 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8036EF54 0036BE94  3C 60 80 4E */	lis r3, __vt__Q34Game11TamagoMushi14ProperAnimator@ha
/* 8036EF58 0036BE98  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8036EF5C 0036BE9C  38 03 34 B0 */	addi r0, r3, __vt__Q34Game11TamagoMushi14ProperAnimator@l
/* 8036EF60 0036BEA0  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8036EF64 0036BEA4  90 1E 00 00 */	stw r0, 0(r30)
/* 8036EF68 0036BEA8  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8036EF6C 0036BEAC  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8036EF70 0036BEB0  38 00 00 00 */	li r0, 0
/* 8036EF74 0036BEB4  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8036EF78 0036BEB8  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8036EF7C 0036BEBC  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8036EF80 0036BEC0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8036EF84 0036BEC4  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8036EF88 0036BEC8  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8036EF8C 0036BECC  90 1E 00 20 */	stw r0, 0x20(r30)
.L_8036EF90:
/* 8036EF90 0036BED0  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8036EF94 0036BED4  38 60 00 1C */	li r3, 0x1c
/* 8036EF98 0036BED8  4B CB 4F 0D */	bl __nw__FUl
/* 8036EF9C 0036BEDC  7C 64 1B 79 */	or. r4, r3, r3
/* 8036EFA0 0036BEE0  41 82 00 24 */	beq .L_8036EFC4
/* 8036EFA4 0036BEE4  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8036EFA8 0036BEE8  3C 60 80 4E */	lis r3, __vt__Q34Game11TamagoMushi3FSM@ha
/* 8036EFAC 0036BEEC  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8036EFB0 0036BEF0  38 A0 FF FF */	li r5, -1
/* 8036EFB4 0036BEF4  90 04 00 00 */	stw r0, 0(r4)
/* 8036EFB8 0036BEF8  38 03 34 8C */	addi r0, r3, __vt__Q34Game11TamagoMushi3FSM@l
/* 8036EFBC 0036BEFC  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8036EFC0 0036BF00  90 04 00 00 */	stw r0, 0(r4)
.L_8036EFC4:
/* 8036EFC4 0036BF04  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036EFC8 0036BF08  7F E3 FB 78 */	mr r3, r31
/* 8036EFCC 0036BF0C  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8036EFD0 0036BF10  7D 89 03 A6 */	mtctr r12
/* 8036EFD4 0036BF14  4E 80 04 21 */	bctrl 
/* 8036EFD8 0036BF18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036EFDC 0036BF1C  7F E3 FB 78 */	mr r3, r31
/* 8036EFE0 0036BF20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036EFE4 0036BF24  83 C1 00 08 */	lwz r30, 8(r1)
/* 8036EFE8 0036BF28  7C 08 03 A6 */	mtlr r0
/* 8036EFEC 0036BF2C  38 21 00 10 */	addi r1, r1, 0x10
/* 8036EFF0 0036BF30  4E 80 00 20 */	blr 

.global setFSM__Q34Game11TamagoMushi3ObjFPQ34Game11TamagoMushi3FSM
setFSM__Q34Game11TamagoMushi3ObjFPQ34Game11TamagoMushi3FSM:
/* 8036EFF4 0036BF34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036EFF8 0036BF38  7C 08 02 A6 */	mflr r0
/* 8036EFFC 0036BF3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036F000 0036BF40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036F004 0036BF44  7C 7F 1B 78 */	mr r31, r3
/* 8036F008 0036BF48  90 83 03 08 */	stw r4, 0x308(r3)
/* 8036F00C 0036BF4C  7F E4 FB 78 */	mr r4, r31
/* 8036F010 0036BF50  80 63 03 08 */	lwz r3, 0x308(r3)
/* 8036F014 0036BF54  81 83 00 00 */	lwz r12, 0(r3)
/* 8036F018 0036BF58  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036F01C 0036BF5C  7D 89 03 A6 */	mtctr r12
/* 8036F020 0036BF60  4E 80 04 21 */	bctrl 
/* 8036F024 0036BF64  38 00 00 00 */	li r0, 0
/* 8036F028 0036BF68  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8036F02C 0036BF6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036F030 0036BF70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036F034 0036BF74  7C 08 03 A6 */	mtlr r0
/* 8036F038 0036BF78  38 21 00 10 */	addi r1, r1, 0x10
/* 8036F03C 0036BF7C  4E 80 00 20 */	blr 

.global doUpdate__Q34Game11TamagoMushi3ObjFv
doUpdate__Q34Game11TamagoMushi3ObjFv:
/* 8036F040 0036BF80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036F044 0036BF84  7C 08 02 A6 */	mflr r0
/* 8036F048 0036BF88  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036F04C 0036BF8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036F050 0036BF90  7C 7F 1B 78 */	mr r31, r3
/* 8036F054 0036BF94  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8036F058 0036BF98  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8036F05C 0036BF9C  40 82 00 70 */	bne .L_8036F0CC
/* 8036F060 0036BFA0  80 7F 03 08 */	lwz r3, 0x308(r31)
/* 8036F064 0036BFA4  7F E4 FB 78 */	mr r4, r31
/* 8036F068 0036BFA8  81 83 00 00 */	lwz r12, 0(r3)
/* 8036F06C 0036BFAC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8036F070 0036BFB0  7D 89 03 A6 */	mtctr r12
/* 8036F074 0036BFB4  4E 80 04 21 */	bctrl 
/* 8036F078 0036BFB8  7F E3 FB 78 */	mr r3, r31
/* 8036F07C 0036BFBC  4B D9 83 79 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036F080 0036BFC0  2C 03 00 00 */	cmpwi r3, 0
/* 8036F084 0036BFC4  41 82 00 0C */	beq .L_8036F090
/* 8036F088 0036BFC8  2C 03 00 01 */	cmpwi r3, 1
/* 8036F08C 0036BFCC  40 82 00 40 */	bne .L_8036F0CC
.L_8036F090:
/* 8036F090 0036BFD0  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8036F094 0036BFD4  38 03 00 01 */	addi r0, r3, 1
/* 8036F098 0036BFD8  90 1F 02 BC */	stw r0, 0x2bc(r31)
/* 8036F09C 0036BFDC  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8036F0A0 0036BFE0  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 8036F0A4 0036BFE4  7C 03 00 00 */	cmpw r3, r0
/* 8036F0A8 0036BFE8  40 81 00 24 */	ble .L_8036F0CC
/* 8036F0AC 0036BFEC  80 7F 03 08 */	lwz r3, 0x308(r31)
/* 8036F0B0 0036BFF0  7F E4 FB 78 */	mr r4, r31
/* 8036F0B4 0036BFF4  38 A0 00 03 */	li r5, 3
/* 8036F0B8 0036BFF8  38 C0 00 00 */	li r6, 0
/* 8036F0BC 0036BFFC  81 83 00 00 */	lwz r12, 0(r3)
/* 8036F0C0 0036C000  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036F0C4 0036C004  7D 89 03 A6 */	mtctr r12
/* 8036F0C8 0036C008  4E 80 04 21 */	bctrl 
.L_8036F0CC:
/* 8036F0CC 0036C00C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036F0D0 0036C010  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036F0D4 0036C014  7C 08 03 A6 */	mtlr r0
/* 8036F0D8 0036C018  38 21 00 10 */	addi r1, r1, 0x10
/* 8036F0DC 0036C01C  4E 80 00 20 */	blr 

.global doAnimationCullingOff__Q34Game11TamagoMushi3ObjFv
doAnimationCullingOff__Q34Game11TamagoMushi3ObjFv:
/* 8036F0E0 0036C020  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8036F0E4 0036C024  7C 08 02 A6 */	mflr r0
/* 8036F0E8 0036C028  90 01 00 54 */	stw r0, 0x54(r1)
/* 8036F0EC 0036C02C  38 00 00 00 */	li r0, 0
/* 8036F0F0 0036C030  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8036F0F4 0036C034  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8036F0F8 0036C038  7C 7E 1B 78 */	mr r30, r3
/* 8036F0FC 0036C03C  80 83 01 88 */	lwz r4, 0x188(r3)
/* 8036F100 0036C040  98 04 00 24 */	stb r0, 0x24(r4)
/* 8036F104 0036C044  81 83 00 00 */	lwz r12, 0(r3)
/* 8036F108 0036C048  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 8036F10C 0036C04C  7D 89 03 A6 */	mtctr r12
/* 8036F110 0036C050  4E 80 04 21 */	bctrl 
/* 8036F114 0036C054  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8036F118 0036C058  80 03 00 04 */	lwz r0, 4(r3)
/* 8036F11C 0036C05C  28 00 00 00 */	cmplwi r0, 0
/* 8036F120 0036C060  41 82 00 7C */	beq .L_8036F19C
/* 8036F124 0036C064  38 9E 01 38 */	addi r4, r30, 0x138
/* 8036F128 0036C068  4B DF 6C 79 */	bl viewMakeMatrix__Q24Game10PelletViewFR7Matrixf
/* 8036F12C 0036C06C  C0 3E 01 68 */	lfs f1, 0x168(r30)
/* 8036F130 0036C070  38 61 00 14 */	addi r3, r1, 0x14
/* 8036F134 0036C074  C0 5E 01 6C */	lfs f2, 0x16c(r30)
/* 8036F138 0036C078  C0 7E 01 70 */	lfs f3, 0x170(r30)
/* 8036F13C 0036C07C  4B D7 B6 99 */	bl PSMTXScale
/* 8036F140 0036C080  38 7E 01 38 */	addi r3, r30, 0x138
/* 8036F144 0036C084  38 81 00 14 */	addi r4, r1, 0x14
/* 8036F148 0036C088  7C 65 1B 78 */	mr r5, r3
/* 8036F14C 0036C08C  4B D7 B1 B5 */	bl PSMTXConcat
/* 8036F150 0036C090  C0 1E 01 44 */	lfs f0, 0x144(r30)
/* 8036F154 0036C094  7F C3 F3 78 */	mr r3, r30
/* 8036F158 0036C098  38 81 00 08 */	addi r4, r1, 8
/* 8036F15C 0036C09C  D0 01 00 08 */	stfs f0, 8(r1)
/* 8036F160 0036C0A0  C0 1E 01 54 */	lfs f0, 0x154(r30)
/* 8036F164 0036C0A4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8036F168 0036C0A8  C0 1E 01 64 */	lfs f0, 0x164(r30)
/* 8036F16C 0036C0AC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8036F170 0036C0B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036F174 0036C0B4  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8036F178 0036C0B8  7D 89 03 A6 */	mtctr r12
/* 8036F17C 0036C0BC  4E 80 04 21 */	bctrl 
/* 8036F180 0036C0C0  7F C3 F3 78 */	mr r3, r30
/* 8036F184 0036C0C4  38 81 00 08 */	addi r4, r1, 8
/* 8036F188 0036C0C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036F18C 0036C0CC  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8036F190 0036C0D0  7D 89 03 A6 */	mtctr r12
/* 8036F194 0036C0D4  4E 80 04 21 */	bctrl 
/* 8036F198 0036C0D8  48 00 00 14 */	b .L_8036F1AC
.L_8036F19C:
/* 8036F19C 0036C0DC  38 7E 01 38 */	addi r3, r30, 0x138
/* 8036F1A0 0036C0E0  38 9E 01 8C */	addi r4, r30, 0x18c
/* 8036F1A4 0036C0E4  38 BE 01 A4 */	addi r5, r30, 0x1a4
/* 8036F1A8 0036C0E8  48 0B 96 E1 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
.L_8036F1AC:
/* 8036F1AC 0036C0EC  80 9E 01 74 */	lwz r4, 0x174(r30)
/* 8036F1B0 0036C0F0  38 7E 01 38 */	addi r3, r30, 0x138
/* 8036F1B4 0036C0F4  80 84 00 08 */	lwz r4, 8(r4)
/* 8036F1B8 0036C0F8  38 84 00 24 */	addi r4, r4, 0x24
/* 8036F1BC 0036C0FC  4B D7 B1 11 */	bl PSMTXCopy
/* 8036F1C0 0036C100  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8036F1C4 0036C104  88 03 09 23 */	lbz r0, 0x923(r3)
/* 8036F1C8 0036C108  28 00 00 00 */	cmplwi r0, 0
/* 8036F1CC 0036C10C  41 82 00 34 */	beq .L_8036F200
/* 8036F1D0 0036C110  7F C3 F3 78 */	mr r3, r30
/* 8036F1D4 0036C114  4B D9 81 75 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 8036F1D8 0036C118  2C 03 00 02 */	cmpwi r3, 2
/* 8036F1DC 0036C11C  40 82 00 24 */	bne .L_8036F200
/* 8036F1E0 0036C120  80 9E 01 74 */	lwz r4, 0x174(r30)
/* 8036F1E4 0036C124  7F C3 F3 78 */	mr r3, r30
/* 8036F1E8 0036C128  83 E4 00 08 */	lwz r31, 8(r4)
/* 8036F1EC 0036C12C  4B D9 60 81 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 8036F1F0 0036C130  80 7E 01 80 */	lwz r3, 0x180(r30)
/* 8036F1F4 0036C134  7F E4 FB 78 */	mr r4, r31
/* 8036F1F8 0036C138  4B FF EB E1 */	bl fetch__Q34Game11TamagoMushi3MgrFP8J3DModelf
/* 8036F1FC 0036C13C  48 00 00 1C */	b .L_8036F218
.L_8036F200:
/* 8036F200 0036C140  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8036F204 0036C144  80 63 00 08 */	lwz r3, 8(r3)
/* 8036F208 0036C148  81 83 00 00 */	lwz r12, 0(r3)
/* 8036F20C 0036C14C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8036F210 0036C150  7D 89 03 A6 */	mtctr r12
/* 8036F214 0036C154  4E 80 04 21 */	bctrl 
.L_8036F218:
/* 8036F218 0036C158  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8036F21C 0036C15C  4B DC 68 81 */	bl update__8CollTreeFv
/* 8036F220 0036C160  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8036F224 0036C164  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8036F228 0036C168  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8036F22C 0036C16C  7C 08 03 A6 */	mtlr r0
/* 8036F230 0036C170  38 21 00 50 */	addi r1, r1, 0x50
/* 8036F234 0036C174  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game11TamagoMushi3ObjFR8Graphics
doDirectDraw__Q34Game11TamagoMushi3ObjFR8Graphics:
/* 8036F238 0036C178  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game11TamagoMushi3ObjFR8Graphics
doDebugDraw__Q34Game11TamagoMushi3ObjFR8Graphics:
/* 8036F23C 0036C17C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036F240 0036C180  7C 08 02 A6 */	mflr r0
/* 8036F244 0036C184  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036F248 0036C188  4B D9 6C 25 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 8036F24C 0036C18C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036F250 0036C190  7C 08 03 A6 */	mtlr r0
/* 8036F254 0036C194  38 21 00 10 */	addi r1, r1, 0x10
/* 8036F258 0036C198  4E 80 00 20 */	blr 

.global pressCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreaturefP8CollPart
pressCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreaturefP8CollPart:
/* 8036F25C 0036C19C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036F260 0036C1A0  7C 08 02 A6 */	mflr r0
/* 8036F264 0036C1A4  28 04 00 00 */	cmplwi r4, 0
/* 8036F268 0036C1A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036F26C 0036C1AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036F270 0036C1B0  7C 7F 1B 78 */	mr r31, r3
/* 8036F274 0036C1B4  41 82 00 AC */	beq .L_8036F320
/* 8036F278 0036C1B8  7C 83 23 78 */	mr r3, r4
/* 8036F27C 0036C1BC  81 84 00 00 */	lwz r12, 0(r4)
/* 8036F280 0036C1C0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8036F284 0036C1C4  7D 89 03 A6 */	mtctr r12
/* 8036F288 0036C1C8  4E 80 04 21 */	bctrl 
/* 8036F28C 0036C1CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8036F290 0036C1D0  41 82 00 90 */	beq .L_8036F320
/* 8036F294 0036C1D4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8036F298 0036C1D8  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8036F29C 0036C1DC  41 82 00 38 */	beq .L_8036F2D4
/* 8036F2A0 0036C1E0  80 7F 02 4C */	lwz r3, 0x24c(r31)
/* 8036F2A4 0036C1E4  88 03 00 50 */	lbz r0, 0x50(r3)
/* 8036F2A8 0036C1E8  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8036F2AC 0036C1EC  41 82 00 20 */	beq .L_8036F2CC
/* 8036F2B0 0036C1F0  7F E3 FB 78 */	mr r3, r31
/* 8036F2B4 0036C1F4  48 00 06 19 */	bl genItem__Q34Game11TamagoMushi3ObjFv
/* 8036F2B8 0036C1F8  7F E3 FB 78 */	mr r3, r31
/* 8036F2BC 0036C1FC  38 80 00 00 */	li r4, 0
/* 8036F2C0 0036C200  4B DC BE 31 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 8036F2C4 0036C204  38 60 00 01 */	li r3, 1
/* 8036F2C8 0036C208  48 00 00 5C */	b .L_8036F324
.L_8036F2CC:
/* 8036F2CC 0036C20C  38 60 00 00 */	li r3, 0
/* 8036F2D0 0036C210  48 00 00 54 */	b .L_8036F324
.L_8036F2D4:
/* 8036F2D4 0036C214  7F E3 FB 78 */	mr r3, r31
/* 8036F2D8 0036C218  4B D9 81 1D */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036F2DC 0036C21C  2C 03 00 04 */	cmpwi r3, 4
/* 8036F2E0 0036C220  41 82 00 40 */	beq .L_8036F320
/* 8036F2E4 0036C224  80 7F 03 08 */	lwz r3, 0x308(r31)
/* 8036F2E8 0036C228  7F E4 FB 78 */	mr r4, r31
/* 8036F2EC 0036C22C  38 A0 00 04 */	li r5, 4
/* 8036F2F0 0036C230  38 C0 00 00 */	li r6, 0
/* 8036F2F4 0036C234  81 83 00 00 */	lwz r12, 0(r3)
/* 8036F2F8 0036C238  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036F2FC 0036C23C  7D 89 03 A6 */	mtctr r12
/* 8036F300 0036C240  4E 80 04 21 */	bctrl 
/* 8036F304 0036C244  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8036F308 0036C248  38 60 00 01 */	li r3, 1
/* 8036F30C 0036C24C  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036F310 0036C250  60 00 08 00 */	ori r0, r0, 0x800
/* 8036F314 0036C254  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8036F318 0036C258  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8036F31C 0036C25C  48 00 00 08 */	b .L_8036F324
.L_8036F320:
/* 8036F320 0036C260  38 60 00 00 */	li r3, 0
.L_8036F324:
/* 8036F324 0036C264  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036F328 0036C268  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036F32C 0036C26C  7C 08 03 A6 */	mtlr r0
/* 8036F330 0036C270  38 21 00 10 */	addi r1, r1, 0x10
/* 8036F334 0036C274  4E 80 00 20 */	blr 

.global "bombCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreatureR10Vector3<f>f"
"bombCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreatureR10Vector3<f>f":
/* 8036F338 0036C278  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8036F33C 0036C27C  7C 08 02 A6 */	mflr r0
/* 8036F340 0036C280  90 01 00 34 */	stw r0, 0x34(r1)
/* 8036F344 0036C284  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8036F348 0036C288  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8036F34C 0036C28C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8036F350 0036C290  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8036F354 0036C294  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8036F358 0036C298  FF E0 08 90 */	fmr f31, f1
/* 8036F35C 0036C29C  7C 7D 1B 78 */	mr r29, r3
/* 8036F360 0036C2A0  7C 9E 23 78 */	mr r30, r4
/* 8036F364 0036C2A4  7C BF 2B 78 */	mr r31, r5
/* 8036F368 0036C2A8  4B D9 80 8D */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036F36C 0036C2AC  2C 03 00 04 */	cmpwi r3, 4
/* 8036F370 0036C2B0  41 82 00 5C */	beq .L_8036F3CC
/* 8036F374 0036C2B4  FC 20 F8 90 */	fmr f1, f31
/* 8036F378 0036C2B8  7F A3 EB 78 */	mr r3, r29
/* 8036F37C 0036C2BC  7F C4 F3 78 */	mr r4, r30
/* 8036F380 0036C2C0  7F E5 FB 78 */	mr r5, r31
/* 8036F384 0036C2C4  4B D9 72 45 */	bl "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
/* 8036F388 0036C2C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8036F38C 0036C2CC  41 82 00 40 */	beq .L_8036F3CC
/* 8036F390 0036C2D0  80 7D 03 08 */	lwz r3, 0x308(r29)
/* 8036F394 0036C2D4  7F A4 EB 78 */	mr r4, r29
/* 8036F398 0036C2D8  38 A0 00 04 */	li r5, 4
/* 8036F39C 0036C2DC  38 C0 00 00 */	li r6, 0
/* 8036F3A0 0036C2E0  81 83 00 00 */	lwz r12, 0(r3)
/* 8036F3A4 0036C2E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036F3A8 0036C2E8  7D 89 03 A6 */	mtctr r12
/* 8036F3AC 0036C2EC  4E 80 04 21 */	bctrl 
/* 8036F3B0 0036C2F0  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 8036F3B4 0036C2F4  38 60 00 01 */	li r3, 1
/* 8036F3B8 0036C2F8  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036F3BC 0036C2FC  60 00 08 00 */	ori r0, r0, 0x800
/* 8036F3C0 0036C300  90 1D 01 E0 */	stw r0, 0x1e0(r29)
/* 8036F3C4 0036C304  D0 1D 02 00 */	stfs f0, 0x200(r29)
/* 8036F3C8 0036C308  48 00 00 08 */	b .L_8036F3D0
.L_8036F3CC:
/* 8036F3CC 0036C30C  38 60 00 00 */	li r3, 0
.L_8036F3D0:
/* 8036F3D0 0036C310  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8036F3D4 0036C314  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8036F3D8 0036C318  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8036F3DC 0036C31C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8036F3E0 0036C320  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8036F3E4 0036C324  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8036F3E8 0036C328  7C 08 03 A6 */	mtlr r0
/* 8036F3EC 0036C32C  38 21 00 30 */	addi r1, r1, 0x30
/* 8036F3F0 0036C330  4E 80 00 20 */	blr 

.global damageCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreaturefP8CollPart
damageCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreaturefP8CollPart:
/* 8036F3F4 0036C334  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8036F3F8 0036C338  7C 08 02 A6 */	mflr r0
/* 8036F3FC 0036C33C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8036F400 0036C340  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8036F404 0036C344  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8036F408 0036C348  7C BE 2B 78 */	mr r30, r5
/* 8036F40C 0036C34C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8036F410 0036C350  7C 9D 23 78 */	mr r29, r4
/* 8036F414 0036C354  93 81 00 20 */	stw r28, 0x20(r1)
/* 8036F418 0036C358  7C 7C 1B 78 */	mr r28, r3
/* 8036F41C 0036C35C  4B D9 7F D9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036F420 0036C360  80 1C 01 E0 */	lwz r0, 0x1e0(r28)
/* 8036F424 0036C364  7C 7F 1B 78 */	mr r31, r3
/* 8036F428 0036C368  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8036F42C 0036C36C  41 82 00 38 */	beq .L_8036F464
/* 8036F430 0036C370  80 7C 03 04 */	lwz r3, 0x304(r28)
/* 8036F434 0036C374  38 03 00 01 */	addi r0, r3, 1
/* 8036F438 0036C378  90 1C 03 04 */	stw r0, 0x304(r28)
/* 8036F43C 0036C37C  80 1C 03 04 */	lwz r0, 0x304(r28)
/* 8036F440 0036C380  2C 00 00 04 */	cmpwi r0, 4
/* 8036F444 0036C384  40 81 00 18 */	ble .L_8036F45C
/* 8036F448 0036C388  7F 83 E3 78 */	mr r3, r28
/* 8036F44C 0036C38C  48 00 04 81 */	bl genItem__Q34Game11TamagoMushi3ObjFv
/* 8036F450 0036C390  7F 83 E3 78 */	mr r3, r28
/* 8036F454 0036C394  38 80 00 00 */	li r4, 0
/* 8036F458 0036C398  4B DC BC 99 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8036F45C:
/* 8036F45C 0036C39C  38 60 00 01 */	li r3, 1
/* 8036F460 0036C3A0  48 00 00 A8 */	b .L_8036F508
.L_8036F464:
/* 8036F464 0036C3A4  C0 22 07 64 */	lfs f1, lbl_8051EAC4@sda21(r2)
/* 8036F468 0036C3A8  7F 83 E3 78 */	mr r3, r28
/* 8036F46C 0036C3AC  7F A4 EB 78 */	mr r4, r29
/* 8036F470 0036C3B0  7F C5 F3 78 */	mr r5, r30
/* 8036F474 0036C3B4  4B D9 6B F9 */	bl damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
/* 8036F478 0036C3B8  2C 1F 00 02 */	cmpwi r31, 2
/* 8036F47C 0036C3BC  41 82 00 88 */	beq .L_8036F504
/* 8036F480 0036C3C0  2C 1F 00 04 */	cmpwi r31, 4
/* 8036F484 0036C3C4  41 82 00 80 */	beq .L_8036F504
/* 8036F488 0036C3C8  28 1D 00 00 */	cmplwi r29, 0
/* 8036F48C 0036C3CC  41 82 00 78 */	beq .L_8036F504
/* 8036F490 0036C3D0  7F A3 EB 78 */	mr r3, r29
/* 8036F494 0036C3D4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8036F498 0036C3D8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8036F49C 0036C3DC  7D 89 03 A6 */	mtctr r12
/* 8036F4A0 0036C3E0  4E 80 04 21 */	bctrl 
/* 8036F4A4 0036C3E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8036F4A8 0036C3E8  41 82 00 5C */	beq .L_8036F504
/* 8036F4AC 0036C3EC  7F A3 EB 78 */	mr r3, r29
/* 8036F4B0 0036C3F0  4B DD 9A 85 */	bl getStateID__Q24Game4PikiFv
/* 8036F4B4 0036C3F4  2C 03 00 15 */	cmpwi r3, 0x15
/* 8036F4B8 0036C3F8  41 82 00 4C */	beq .L_8036F504
/* 8036F4BC 0036C3FC  2C 03 00 06 */	cmpwi r3, 6
/* 8036F4C0 0036C400  41 82 00 44 */	beq .L_8036F504
/* 8036F4C4 0036C404  80 DC 00 C0 */	lwz r6, 0xc0(r28)
/* 8036F4C8 0036C408  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 8036F4CC 0036C40C  3C 80 80 4B */	lis r4, __vt__Q24Game16InteractAstonish@ha
/* 8036F4D0 0036C410  7F A3 EB 78 */	mr r3, r29
/* 8036F4D4 0036C414  C0 06 09 44 */	lfs f0, 0x944(r6)
/* 8036F4D8 0036C418  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 8036F4DC 0036C41C  38 04 48 54 */	addi r0, r4, __vt__Q24Game16InteractAstonish@l
/* 8036F4E0 0036C420  38 81 00 08 */	addi r4, r1, 8
/* 8036F4E4 0036C424  90 A1 00 08 */	stw r5, 8(r1)
/* 8036F4E8 0036C428  93 81 00 0C */	stw r28, 0xc(r1)
/* 8036F4EC 0036C42C  90 01 00 08 */	stw r0, 8(r1)
/* 8036F4F0 0036C430  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8036F4F4 0036C434  81 9D 00 00 */	lwz r12, 0(r29)
/* 8036F4F8 0036C438  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8036F4FC 0036C43C  7D 89 03 A6 */	mtctr r12
/* 8036F500 0036C440  4E 80 04 21 */	bctrl 
.L_8036F504:
/* 8036F504 0036C444  38 60 00 00 */	li r3, 0
.L_8036F508:
/* 8036F508 0036C448  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8036F50C 0036C44C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8036F510 0036C450  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8036F514 0036C454  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8036F518 0036C458  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8036F51C 0036C45C  7C 08 03 A6 */	mtlr r0
/* 8036F520 0036C460  38 21 00 30 */	addi r1, r1, 0x30
/* 8036F524 0036C464  4E 80 00 20 */	blr 

.global collisionCallback__Q34Game11TamagoMushi3ObjFRQ24Game9CollEvent
collisionCallback__Q34Game11TamagoMushi3ObjFRQ24Game9CollEvent:
/* 8036F528 0036C468  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8036F52C 0036C46C  7C 08 02 A6 */	mflr r0
/* 8036F530 0036C470  90 01 00 34 */	stw r0, 0x34(r1)
/* 8036F534 0036C474  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8036F538 0036C478  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8036F53C 0036C47C  7C 9E 23 78 */	mr r30, r4
/* 8036F540 0036C480  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8036F544 0036C484  7C 7D 1B 78 */	mr r29, r3
/* 8036F548 0036C488  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8036F54C 0036C48C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8036F550 0036C490  40 82 00 B4 */	bne .L_8036F604
/* 8036F554 0036C494  4B D9 7E A1 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036F558 0036C498  7C 7F 1B 78 */	mr r31, r3
/* 8036F55C 0036C49C  7F A3 EB 78 */	mr r3, r29
/* 8036F560 0036C4A0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8036F564 0036C4A4  7F C4 F3 78 */	mr r4, r30
/* 8036F568 0036C4A8  81 8C 02 40 */	lwz r12, 0x240(r12)
/* 8036F56C 0036C4AC  7D 89 03 A6 */	mtctr r12
/* 8036F570 0036C4B0  4E 80 04 21 */	bctrl 
/* 8036F574 0036C4B4  83 DE 00 00 */	lwz r30, 0(r30)
/* 8036F578 0036C4B8  28 1E 00 00 */	cmplwi r30, 0
/* 8036F57C 0036C4BC  41 82 00 88 */	beq .L_8036F604
/* 8036F580 0036C4C0  7F C3 F3 78 */	mr r3, r30
/* 8036F584 0036C4C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036F588 0036C4C8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8036F58C 0036C4CC  7D 89 03 A6 */	mtctr r12
/* 8036F590 0036C4D0  4E 80 04 21 */	bctrl 
/* 8036F594 0036C4D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8036F598 0036C4D8  41 82 00 6C */	beq .L_8036F604
/* 8036F59C 0036C4DC  2C 1F 00 02 */	cmpwi r31, 2
/* 8036F5A0 0036C4E0  41 82 00 64 */	beq .L_8036F604
/* 8036F5A4 0036C4E4  7F C3 F3 78 */	mr r3, r30
/* 8036F5A8 0036C4E8  4B DD 99 8D */	bl getStateID__Q24Game4PikiFv
/* 8036F5AC 0036C4EC  2C 03 00 15 */	cmpwi r3, 0x15
/* 8036F5B0 0036C4F0  41 82 00 54 */	beq .L_8036F604
/* 8036F5B4 0036C4F4  7F C3 F3 78 */	mr r3, r30
/* 8036F5B8 0036C4F8  4B DD 99 7D */	bl getStateID__Q24Game4PikiFv
/* 8036F5BC 0036C4FC  2C 03 00 06 */	cmpwi r3, 6
/* 8036F5C0 0036C500  41 82 00 44 */	beq .L_8036F604
/* 8036F5C4 0036C504  80 DD 00 C0 */	lwz r6, 0xc0(r29)
/* 8036F5C8 0036C508  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 8036F5CC 0036C50C  3C 80 80 4B */	lis r4, __vt__Q24Game16InteractAstonish@ha
/* 8036F5D0 0036C510  7F C3 F3 78 */	mr r3, r30
/* 8036F5D4 0036C514  C0 06 09 44 */	lfs f0, 0x944(r6)
/* 8036F5D8 0036C518  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 8036F5DC 0036C51C  38 04 48 54 */	addi r0, r4, __vt__Q24Game16InteractAstonish@l
/* 8036F5E0 0036C520  38 81 00 08 */	addi r4, r1, 8
/* 8036F5E4 0036C524  90 A1 00 08 */	stw r5, 8(r1)
/* 8036F5E8 0036C528  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8036F5EC 0036C52C  90 01 00 08 */	stw r0, 8(r1)
/* 8036F5F0 0036C530  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8036F5F4 0036C534  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036F5F8 0036C538  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8036F5FC 0036C53C  7D 89 03 A6 */	mtctr r12
/* 8036F600 0036C540  4E 80 04 21 */	bctrl 
.L_8036F604:
/* 8036F604 0036C544  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8036F608 0036C548  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8036F60C 0036C54C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8036F610 0036C550  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8036F614 0036C554  7C 08 03 A6 */	mtlr r0
/* 8036F618 0036C558  38 21 00 30 */	addi r1, r1, 0x30
/* 8036F61C 0036C55C  4E 80 00 20 */	blr 

.global bounceCallback__Q34Game11TamagoMushi3ObjFPQ23Sys8Triangle
bounceCallback__Q34Game11TamagoMushi3ObjFPQ23Sys8Triangle:
/* 8036F620 0036C560  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8036F624 0036C564  7C 08 02 A6 */	mflr r0
/* 8036F628 0036C568  90 01 00 44 */	stw r0, 0x44(r1)
/* 8036F62C 0036C56C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8036F630 0036C570  7C 7F 1B 78 */	mr r31, r3
/* 8036F634 0036C574  88 03 03 00 */	lbz r0, 0x300(r3)
/* 8036F638 0036C578  28 00 00 00 */	cmplwi r0, 0
/* 8036F63C 0036C57C  41 82 01 40 */	beq .L_8036F77C
/* 8036F640 0036C580  4B D5 9F 61 */	bl rand
/* 8036F644 0036C584  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8036F648 0036C588  3C 00 43 30 */	lis r0, 0x4330
/* 8036F64C 0036C58C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8036F650 0036C590  C0 BF 01 FC */	lfs f5, 0x1fc(r31)
/* 8036F654 0036C594  90 01 00 18 */	stw r0, 0x18(r1)
/* 8036F658 0036C598  C8 22 07 70 */	lfd f1, lbl_8051EAD0@sda21(r2)
/* 8036F65C 0036C59C  FC 80 28 90 */	fmr f4, f5
/* 8036F660 0036C5A0  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8036F664 0036C5A4  C0 42 07 50 */	lfs f2, lbl_8051EAB0@sda21(r2)
/* 8036F668 0036C5A8  EC 60 08 28 */	fsubs f3, f0, f1
/* 8036F66C 0036C5AC  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036F670 0036C5B0  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8036F674 0036C5B4  C0 22 07 60 */	lfs f1, lbl_8051EAC0@sda21(r2)
/* 8036F678 0036C5B8  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8036F67C 0036C5BC  EC 43 10 24 */	fdivs f2, f3, f2
/* 8036F680 0036C5C0  C0 02 07 5C */	lfs f0, lbl_8051EABC@sda21(r2)
/* 8036F684 0036C5C4  C0 E4 09 38 */	lfs f7, 0x938(r4)
/* 8036F688 0036C5C8  EC C1 00 BA */	fmadds f6, f1, f2, f0
/* 8036F68C 0036C5CC  40 80 00 08 */	bge .L_8036F694
/* 8036F690 0036C5D0  FC 80 28 50 */	fneg f4, f5
.L_8036F694:
/* 8036F694 0036C5D4  C0 62 07 68 */	lfs f3, lbl_8051EAC8@sda21(r2)
/* 8036F698 0036C5D8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036F69C 0036C5DC  C0 24 09 34 */	lfs f1, 0x934(r4)
/* 8036F6A0 0036C5E0  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8036F6A4 0036C5E4  EC 44 00 F2 */	fmuls f2, f4, f3
/* 8036F6A8 0036C5E8  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036F6AC 0036C5EC  EC 21 01 B2 */	fmuls f1, f1, f6
/* 8036F6B0 0036C5F0  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8036F6B4 0036C5F4  FC 00 10 1E */	fctiwz f0, f2
/* 8036F6B8 0036C5F8  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8036F6BC 0036C5FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8036F6C0 0036C600  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036F6C4 0036C604  7C 64 02 14 */	add r3, r4, r0
/* 8036F6C8 0036C608  C0 03 00 04 */	lfs f0, 4(r3)
/* 8036F6CC 0036C60C  EC 47 00 32 */	fmuls f2, f7, f0
/* 8036F6D0 0036C610  40 80 00 28 */	bge .L_8036F6F8
/* 8036F6D4 0036C614  C0 02 07 6C */	lfs f0, lbl_8051EACC@sda21(r2)
/* 8036F6D8 0036C618  EC 05 00 32 */	fmuls f0, f5, f0
/* 8036F6DC 0036C61C  FC 00 00 1E */	fctiwz f0, f0
/* 8036F6E0 0036C620  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8036F6E4 0036C624  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8036F6E8 0036C628  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036F6EC 0036C62C  7C 04 04 2E */	lfsx f0, r4, r0
/* 8036F6F0 0036C630  FC 00 00 50 */	fneg f0, f0
/* 8036F6F4 0036C634  48 00 00 1C */	b .L_8036F710
.L_8036F6F8:
/* 8036F6F8 0036C638  EC 05 00 F2 */	fmuls f0, f5, f3
/* 8036F6FC 0036C63C  FC 00 00 1E */	fctiwz f0, f0
/* 8036F700 0036C640  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8036F704 0036C644  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8036F708 0036C648  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036F70C 0036C64C  7C 04 04 2E */	lfsx f0, r4, r0
.L_8036F710:
/* 8036F710 0036C650  EC 07 00 32 */	fmuls f0, f7, f0
/* 8036F714 0036C654  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8036F718 0036C658  7F E3 FB 78 */	mr r3, r31
/* 8036F71C 0036C65C  38 81 00 08 */	addi r4, r1, 8
/* 8036F720 0036C660  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8036F724 0036C664  D0 01 00 08 */	stfs f0, 8(r1)
/* 8036F728 0036C668  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036F72C 0036C66C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8036F730 0036C670  7D 89 03 A6 */	mtctr r12
/* 8036F734 0036C674  4E 80 04 21 */	bctrl 
/* 8036F738 0036C678  C0 01 00 08 */	lfs f0, 8(r1)
/* 8036F73C 0036C67C  38 00 00 00 */	li r0, 0
/* 8036F740 0036C680  C0 22 07 78 */	lfs f1, lbl_8051EAD8@sda21(r2)
/* 8036F744 0036C684  7F E3 FB 78 */	mr r3, r31
/* 8036F748 0036C688  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8036F74C 0036C68C  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036F750 0036C690  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8036F754 0036C694  D0 5F 01 D8 */	stfs f2, 0x1d8(r31)
/* 8036F758 0036C698  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8036F75C 0036C69C  D0 5F 01 DC */	stfs f2, 0x1dc(r31)
/* 8036F760 0036C6A0  C0 5F 01 90 */	lfs f2, 0x190(r31)
/* 8036F764 0036C6A4  EC 22 08 2A */	fadds f1, f2, f1
/* 8036F768 0036C6A8  D0 3F 01 90 */	stfs f1, 0x190(r31)
/* 8036F76C 0036C6AC  98 1F 02 F0 */	stb r0, 0x2f0(r31)
/* 8036F770 0036C6B0  D0 1F 01 AC */	stfs f0, 0x1ac(r31)
/* 8036F774 0036C6B4  D0 1F 01 A4 */	stfs f0, 0x1a4(r31)
/* 8036F778 0036C6B8  48 00 0B 1D */	bl appearPanic__Q34Game11TamagoMushi3ObjFv
.L_8036F77C:
/* 8036F77C 0036C6BC  38 00 00 00 */	li r0, 0
/* 8036F780 0036C6C0  98 1F 03 00 */	stb r0, 0x300(r31)
/* 8036F784 0036C6C4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8036F788 0036C6C8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8036F78C 0036C6CC  7C 08 03 A6 */	mtlr r0
/* 8036F790 0036C6D0  38 21 00 40 */	addi r1, r1, 0x40
/* 8036F794 0036C6D4  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreaturefP8CollPart:
/* 8036F798 0036C6D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036F79C 0036C6DC  7C 08 02 A6 */	mflr r0
/* 8036F7A0 0036C6E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036F7A4 0036C6E4  81 83 00 00 */	lwz r12, 0(r3)
/* 8036F7A8 0036C6E8  81 8C 02 7C */	lwz r12, 0x27c(r12)
/* 8036F7AC 0036C6EC  7D 89 03 A6 */	mtctr r12
/* 8036F7B0 0036C6F0  4E 80 04 21 */	bctrl 
/* 8036F7B4 0036C6F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036F7B8 0036C6F8  7C 08 03 A6 */	mtlr r0
/* 8036F7BC 0036C6FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8036F7C0 0036C700  4E 80 00 20 */	blr 

.global earthquakeCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8Creaturef
earthquakeCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8Creaturef:
/* 8036F7C4 0036C704  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036F7C8 0036C708  7C 08 02 A6 */	mflr r0
/* 8036F7CC 0036C70C  38 A0 00 00 */	li r5, 0
/* 8036F7D0 0036C710  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036F7D4 0036C714  81 83 00 00 */	lwz r12, 0(r3)
/* 8036F7D8 0036C718  81 8C 02 7C */	lwz r12, 0x27c(r12)
/* 8036F7DC 0036C71C  7D 89 03 A6 */	mtctr r12
/* 8036F7E0 0036C720  4E 80 04 21 */	bctrl 
/* 8036F7E4 0036C724  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036F7E8 0036C728  7C 08 03 A6 */	mtlr r0
/* 8036F7EC 0036C72C  38 21 00 10 */	addi r1, r1, 0x10
/* 8036F7F0 0036C730  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game11TamagoMushi3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game11TamagoMushi3ObjFRQ24Game11ShadowParam:
/* 8036F7F4 0036C734  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036F7F8 0036C738  7C 08 02 A6 */	mflr r0
/* 8036F7FC 0036C73C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036F800 0036C740  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036F804 0036C744  7C 9F 23 78 */	mr r31, r4
/* 8036F808 0036C748  93 C1 00 08 */	stw r30, 8(r1)
/* 8036F80C 0036C74C  7C 7E 1B 78 */	mr r30, r3
/* 8036F810 0036C750  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 8036F814 0036C754  48 0B A0 8D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8036F818 0036C758  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8036F81C 0036C75C  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8036F820 0036C760  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8036F824 0036C764  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8036F828 0036C768  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8036F82C 0036C76C  D0 5F 00 08 */	stfs f2, 8(r31)
/* 8036F830 0036C770  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8036F834 0036C774  80 03 00 04 */	lwz r0, 4(r3)
/* 8036F838 0036C778  28 00 00 00 */	cmplwi r0, 0
/* 8036F83C 0036C77C  40 82 00 14 */	bne .L_8036F850
/* 8036F840 0036C780  7F C3 F3 78 */	mr r3, r30
/* 8036F844 0036C784  4B D9 7B B1 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8036F848 0036C788  2C 03 00 04 */	cmpwi r3, 4
/* 8036F84C 0036C78C  40 82 00 14 */	bne .L_8036F860
.L_8036F850:
/* 8036F850 0036C790  C0 22 07 7C */	lfs f1, lbl_8051EADC@sda21(r2)
/* 8036F854 0036C794  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8036F858 0036C798  EC 01 00 2A */	fadds f0, f1, f0
/* 8036F85C 0036C79C  D0 1F 00 04 */	stfs f0, 4(r31)
.L_8036F860:
/* 8036F860 0036C7A0  C0 42 07 64 */	lfs f2, lbl_8051EAC4@sda21(r2)
/* 8036F864 0036C7A4  C0 02 07 80 */	lfs f0, lbl_8051EAE0@sda21(r2)
/* 8036F868 0036C7A8  D0 5F 00 0C */	stfs f2, 0xc(r31)
/* 8036F86C 0036C7AC  C0 22 07 84 */	lfs f1, lbl_8051EAE4@sda21(r2)
/* 8036F870 0036C7B0  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8036F874 0036C7B4  C0 02 07 88 */	lfs f0, lbl_8051EAE8@sda21(r2)
/* 8036F878 0036C7B8  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 8036F87C 0036C7BC  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 8036F880 0036C7C0  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8036F884 0036C7C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036F888 0036C7C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8036F88C 0036C7CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036F890 0036C7D0  7C 08 03 A6 */	mtlr r0
/* 8036F894 0036C7D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8036F898 0036C7D8  4E 80 00 20 */	blr 

.global needShadow__Q34Game11TamagoMushi3ObjFv
needShadow__Q34Game11TamagoMushi3ObjFv:
/* 8036F89C 0036C7DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036F8A0 0036C7E0  7C 08 02 A6 */	mflr r0
/* 8036F8A4 0036C7E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036F8A8 0036C7E8  4B D9 7B 69 */	bl needShadow__Q24Game9EnemyBaseFv
/* 8036F8AC 0036C7EC  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8036F8B0 0036C7F0  7C 03 00 D0 */	neg r0, r3
/* 8036F8B4 0036C7F4  7C 00 1B 78 */	or r0, r0, r3
/* 8036F8B8 0036C7F8  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8036F8BC 0036C7FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036F8C0 0036C800  7C 08 03 A6 */	mtlr r0
/* 8036F8C4 0036C804  38 21 00 10 */	addi r1, r1, 0x10
/* 8036F8C8 0036C808  4E 80 00 20 */	blr 

.global genItem__Q34Game11TamagoMushi3ObjFv
genItem__Q34Game11TamagoMushi3ObjFv:
/* 8036F8CC 0036C80C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8036F8D0 0036C810  7C 08 02 A6 */	mflr r0
/* 8036F8D4 0036C814  90 01 00 54 */	stw r0, 0x54(r1)
/* 8036F8D8 0036C818  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8036F8DC 0036C81C  7C 7F 1B 78 */	mr r31, r3
/* 8036F8E0 0036C820  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8036F8E4 0036C824  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8036F8E8 0036C828  28 04 00 00 */	cmplwi r4, 0
/* 8036F8EC 0036C82C  41 82 00 10 */	beq .L_8036F8FC
/* 8036F8F0 0036C830  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8036F8F4 0036C834  2C 00 00 04 */	cmpwi r0, 4
/* 8036F8F8 0036C838  41 82 01 C4 */	beq .L_8036FABC
.L_8036F8FC:
/* 8036F8FC 0036C83C  38 00 00 01 */	li r0, 1
/* 8036F900 0036C840  98 1F 01 F3 */	stb r0, 0x1f3(r31)
/* 8036F904 0036C844  83 DF 00 C0 */	lwz r30, 0xc0(r31)
/* 8036F908 0036C848  4B D5 9C 99 */	bl rand
/* 8036F90C 0036C84C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8036F910 0036C850  3C 00 43 30 */	lis r0, 0x4330
/* 8036F914 0036C854  90 61 00 24 */	stw r3, 0x24(r1)
/* 8036F918 0036C858  C8 62 07 70 */	lfd f3, lbl_8051EAD0@sda21(r2)
/* 8036F91C 0036C85C  90 01 00 20 */	stw r0, 0x20(r1)
/* 8036F920 0036C860  C0 22 07 50 */	lfs f1, lbl_8051EAB0@sda21(r2)
/* 8036F924 0036C864  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 8036F928 0036C868  C0 1E 08 6C */	lfs f0, 0x86c(r30)
/* 8036F92C 0036C86C  EC 42 18 28 */	fsubs f2, f2, f3
/* 8036F930 0036C870  EC 22 08 24 */	fdivs f1, f2, f1
/* 8036F934 0036C874  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036F938 0036C878  41 81 01 84 */	bgt .L_8036FABC
/* 8036F93C 0036C87C  C0 7F 01 FC */	lfs f3, 0x1fc(r31)
/* 8036F940 0036C880  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036F944 0036C884  C0 42 07 8C */	lfs f2, lbl_8051EAEC@sda21(r2)
/* 8036F948 0036C888  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8036F94C 0036C88C  40 80 00 30 */	bge .L_8036F97C
/* 8036F950 0036C890  C0 02 07 6C */	lfs f0, lbl_8051EACC@sda21(r2)
/* 8036F954 0036C894  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036F958 0036C898  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036F95C 0036C89C  EC 03 00 32 */	fmuls f0, f3, f0
/* 8036F960 0036C8A0  FC 00 00 1E */	fctiwz f0, f0
/* 8036F964 0036C8A4  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8036F968 0036C8A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8036F96C 0036C8AC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036F970 0036C8B0  7C 03 04 2E */	lfsx f0, r3, r0
/* 8036F974 0036C8B4  FC 20 00 50 */	fneg f1, f0
/* 8036F978 0036C8B8  48 00 00 28 */	b .L_8036F9A0
.L_8036F97C:
/* 8036F97C 0036C8BC  C0 02 07 68 */	lfs f0, lbl_8051EAC8@sda21(r2)
/* 8036F980 0036C8C0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036F984 0036C8C4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036F988 0036C8C8  EC 03 00 32 */	fmuls f0, f3, f0
/* 8036F98C 0036C8CC  FC 00 00 1E */	fctiwz f0, f0
/* 8036F990 0036C8D0  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8036F994 0036C8D4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8036F998 0036C8D8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036F99C 0036C8DC  7C 23 04 2E */	lfsx f1, r3, r0
.L_8036F9A0:
/* 8036F9A0 0036C8E0  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036F9A4 0036C8E4  EC 42 00 72 */	fmuls f2, f2, f1
/* 8036F9A8 0036C8E8  C0 22 07 8C */	lfs f1, lbl_8051EAEC@sda21(r2)
/* 8036F9AC 0036C8EC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8036F9B0 0036C8F0  40 80 00 30 */	bge .L_8036F9E0
/* 8036F9B4 0036C8F4  C0 02 07 6C */	lfs f0, lbl_8051EACC@sda21(r2)
/* 8036F9B8 0036C8F8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036F9BC 0036C8FC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036F9C0 0036C900  EC 03 00 32 */	fmuls f0, f3, f0
/* 8036F9C4 0036C904  FC 00 00 1E */	fctiwz f0, f0
/* 8036F9C8 0036C908  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8036F9CC 0036C90C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8036F9D0 0036C910  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036F9D4 0036C914  7C 03 04 2E */	lfsx f0, r3, r0
/* 8036F9D8 0036C918  FC 00 00 50 */	fneg f0, f0
/* 8036F9DC 0036C91C  48 00 00 28 */	b .L_8036FA04
.L_8036F9E0:
/* 8036F9E0 0036C920  C0 02 07 68 */	lfs f0, lbl_8051EAC8@sda21(r2)
/* 8036F9E4 0036C924  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036F9E8 0036C928  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036F9EC 0036C92C  EC 03 00 32 */	fmuls f0, f3, f0
/* 8036F9F0 0036C930  FC 00 00 1E */	fctiwz f0, f0
/* 8036F9F4 0036C934  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8036F9F8 0036C938  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8036F9FC 0036C93C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036FA00 0036C940  7C 03 04 2E */	lfsx f0, r3, r0
.L_8036FA04:
/* 8036FA04 0036C944  EC 21 00 32 */	fmuls f1, f1, f0
/* 8036FA08 0036C948  C0 02 07 90 */	lfs f0, lbl_8051EAF0@sda21(r2)
/* 8036FA0C 0036C94C  80 0D 94 50 */	lwz r0, mgr__Q24Game9ItemHoney@sda21(r13)
/* 8036FA10 0036C950  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8036FA14 0036C954  C0 02 07 7C */	lfs f0, lbl_8051EADC@sda21(r2)
/* 8036FA18 0036C958  28 00 00 00 */	cmplwi r0, 0
/* 8036FA1C 0036C95C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8036FA20 0036C960  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 8036FA24 0036C964  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8036FA28 0036C968  D0 21 00 08 */	stfs f1, 8(r1)
/* 8036FA2C 0036C96C  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8036FA30 0036C970  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8036FA34 0036C974  EC 01 00 2A */	fadds f0, f1, f0
/* 8036FA38 0036C978  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8036FA3C 0036C97C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8036FA40 0036C980  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8036FA44 0036C984  40 82 00 20 */	bne .L_8036FA64
/* 8036FA48 0036C988  3C 60 80 49 */	lis r3, lbl_804924F4@ha
/* 8036FA4C 0036C98C  3C A0 80 49 */	lis r5, lbl_80492504@ha
/* 8036FA50 0036C990  38 63 24 F4 */	addi r3, r3, lbl_804924F4@l
/* 8036FA54 0036C994  38 80 01 B5 */	li r4, 0x1b5
/* 8036FA58 0036C998  38 A5 25 04 */	addi r5, r5, lbl_80492504@l
/* 8036FA5C 0036C99C  4C C6 31 82 */	crclr 6
/* 8036FA60 0036C9A0  4B CB AB E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8036FA64:
/* 8036FA64 0036C9A4  80 6D 94 50 */	lwz r3, mgr__Q24Game9ItemHoney@sda21(r13)
/* 8036FA68 0036C9A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8036FA6C 0036C9AC  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8036FA70 0036C9B0  7D 89 03 A6 */	mtctr r12
/* 8036FA74 0036C9B4  4E 80 04 21 */	bctrl 
/* 8036FA78 0036C9B8  7C 60 1B 79 */	or. r0, r3, r3
/* 8036FA7C 0036C9BC  41 82 00 40 */	beq .L_8036FABC
/* 8036FA80 0036C9C0  7C 1E 03 78 */	mr r30, r0
/* 8036FA84 0036C9C4  38 80 00 00 */	li r4, 0
/* 8036FA88 0036C9C8  4B DC B5 41 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8036FA8C 0036C9CC  38 00 00 00 */	li r0, 0
/* 8036FA90 0036C9D0  7F C3 F3 78 */	mr r3, r30
/* 8036FA94 0036C9D4  98 1E 01 E0 */	stb r0, 0x1e0(r30)
/* 8036FA98 0036C9D8  38 81 00 08 */	addi r4, r1, 8
/* 8036FA9C 0036C9DC  38 A0 00 00 */	li r5, 0
/* 8036FAA0 0036C9E0  4B DC B7 09 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8036FAA4 0036C9E4  7F C3 F3 78 */	mr r3, r30
/* 8036FAA8 0036C9E8  38 81 00 14 */	addi r4, r1, 0x14
/* 8036FAAC 0036C9EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036FAB0 0036C9F0  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8036FAB4 0036C9F4  7D 89 03 A6 */	mtctr r12
/* 8036FAB8 0036C9F8  4E 80 04 21 */	bctrl 
.L_8036FABC:
/* 8036FABC 0036C9FC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8036FAC0 0036CA00  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8036FAC4 0036CA04  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8036FAC8 0036CA08  7C 08 03 A6 */	mtlr r0
/* 8036FACC 0036CA0C  38 21 00 50 */	addi r1, r1, 0x50
/* 8036FAD0 0036CA10  4E 80 00 20 */	blr 

.global walkFunc__Q34Game11TamagoMushi3ObjFv
walkFunc__Q34Game11TamagoMushi3ObjFv:
/* 8036FAD4 0036CA14  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8036FAD8 0036CA18  7C 08 02 A6 */	mflr r0
/* 8036FADC 0036CA1C  90 01 00 94 */	stw r0, 0x94(r1)
/* 8036FAE0 0036CA20  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8036FAE4 0036CA24  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8036FAE8 0036CA28  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8036FAEC 0036CA2C  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8036FAF0 0036CA30  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8036FAF4 0036CA34  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 8036FAF8 0036CA38  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 8036FAFC 0036CA3C  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 8036FB00 0036CA40  DB 61 00 40 */	stfd f27, 0x40(r1)
/* 8036FB04 0036CA44  F3 61 00 48 */	psq_st f27, 72(r1), 0, qr0
/* 8036FB08 0036CA48  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8036FB0C 0036CA4C  7C 7F 1B 78 */	mr r31, r3
/* 8036FB10 0036CA50  C0 42 07 94 */	lfs f2, lbl_8051EAF4@sda21(r2)
/* 8036FB14 0036CA54  C0 23 01 A4 */	lfs f1, 0x1a4(r3)
/* 8036FB18 0036CA58  C0 02 07 98 */	lfs f0, lbl_8051EAF8@sda21(r2)
/* 8036FB1C 0036CA5C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8036FB20 0036CA60  D0 23 01 A4 */	stfs f1, 0x1a4(r3)
/* 8036FB24 0036CA64  C0 23 01 AC */	lfs f1, 0x1ac(r3)
/* 8036FB28 0036CA68  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8036FB2C 0036CA6C  D0 23 01 AC */	stfs f1, 0x1ac(r3)
/* 8036FB30 0036CA70  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8036FB34 0036CA74  C0 5F 02 FC */	lfs f2, 0x2fc(r31)
/* 8036FB38 0036CA78  C0 23 09 28 */	lfs f1, 0x928(r3)
/* 8036FB3C 0036CA7C  C0 7F 02 C8 */	lfs f3, 0x2c8(r31)
/* 8036FB40 0036CA80  EC 22 08 2A */	fadds f1, f2, f1
/* 8036FB44 0036CA84  C0 43 02 E4 */	lfs f2, 0x2e4(r3)
/* 8036FB48 0036CA88  C0 A3 09 24 */	lfs f5, 0x924(r3)
/* 8036FB4C 0036CA8C  C0 9F 02 CC */	lfs f4, 0x2cc(r31)
/* 8036FB50 0036CA90  EF A3 00 B2 */	fmuls f29, f3, f2
/* 8036FB54 0036CA94  C0 7F 02 C4 */	lfs f3, 0x2c4(r31)
/* 8036FB58 0036CA98  C0 43 03 34 */	lfs f2, 0x334(r3)
/* 8036FB5C 0036CA9C  EF 65 01 32 */	fmuls f27, f5, f4
/* 8036FB60 0036CAA0  D0 3F 02 FC */	stfs f1, 0x2fc(r31)
/* 8036FB64 0036CAA4  EF 83 00 B2 */	fmuls f28, f3, f2
/* 8036FB68 0036CAA8  C0 3F 02 FC */	lfs f1, 0x2fc(r31)
/* 8036FB6C 0036CAAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036FB70 0036CAB0  40 81 00 0C */	ble .L_8036FB7C
/* 8036FB74 0036CAB4  EC 01 00 28 */	fsubs f0, f1, f0
/* 8036FB78 0036CAB8  D0 1F 02 FC */	stfs f0, 0x2fc(r31)
.L_8036FB7C:
/* 8036FB7C 0036CABC  C0 3F 02 FC */	lfs f1, 0x2fc(r31)
/* 8036FB80 0036CAC0  4B D5 FC 9D */	bl sin
/* 8036FB84 0036CAC4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8036FB88 0036CAC8  FC 00 08 18 */	frsp f0, f1
/* 8036FB8C 0036CACC  88 03 09 20 */	lbz r0, 0x920(r3)
/* 8036FB90 0036CAD0  EC 5B 00 32 */	fmuls f2, f27, f0
/* 8036FB94 0036CAD4  28 00 00 00 */	cmplwi r0, 0
/* 8036FB98 0036CAD8  41 82 00 08 */	beq .L_8036FBA0
/* 8036FB9C 0036CADC  C0 42 07 64 */	lfs f2, lbl_8051EAC4@sda21(r2)
.L_8036FBA0:
/* 8036FBA0 0036CAE0  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 8036FBA4 0036CAE4  C0 02 07 A4 */	lfs f0, lbl_8051EB04@sda21(r2)
/* 8036FBA8 0036CAE8  EC 42 00 72 */	fmuls f2, f2, f1
/* 8036FBAC 0036CAEC  C0 62 07 A0 */	lfs f3, lbl_8051EB00@sda21(r2)
/* 8036FBB0 0036CAF0  EC 21 00 2A */	fadds f1, f1, f0
/* 8036FBB4 0036CAF4  C0 82 07 9C */	lfs f4, lbl_8051EAFC@sda21(r2)
/* 8036FBB8 0036CAF8  C0 02 07 80 */	lfs f0, lbl_8051EAE0@sda21(r2)
/* 8036FBBC 0036CAFC  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8036FBC0 0036CB00  D0 3F 02 D0 */	stfs f1, 0x2d0(r31)
/* 8036FBC4 0036CB04  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 8036FBC8 0036CB08  EF C4 00 B2 */	fmuls f30, f4, f2
/* 8036FBCC 0036CB0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036FBD0 0036CB10  40 81 00 08 */	ble .L_8036FBD8
/* 8036FBD4 0036CB14  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
.L_8036FBD8:
/* 8036FBD8 0036CB18  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8036FBDC 0036CB1C  88 03 09 21 */	lbz r0, 0x921(r3)
/* 8036FBE0 0036CB20  28 00 00 00 */	cmplwi r0, 0
/* 8036FBE4 0036CB24  41 82 00 AC */	beq .L_8036FC90
/* 8036FBE8 0036CB28  C0 3F 02 D4 */	lfs f1, 0x2d4(r31)
/* 8036FBEC 0036CB2C  C0 02 07 80 */	lfs f0, lbl_8051EAE0@sda21(r2)
/* 8036FBF0 0036CB30  EC 01 00 2A */	fadds f0, f1, f0
/* 8036FBF4 0036CB34  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 8036FBF8 0036CB38  C0 3F 02 D4 */	lfs f1, 0x2d4(r31)
/* 8036FBFC 0036CB3C  C0 1F 02 D8 */	lfs f0, 0x2d8(r31)
/* 8036FC00 0036CB40  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036FC04 0036CB44  40 81 00 54 */	ble .L_8036FC58
/* 8036FC08 0036CB48  88 1F 02 DC */	lbz r0, 0x2dc(r31)
/* 8036FC0C 0036CB4C  7C 00 00 34 */	cntlzw r0, r0
/* 8036FC10 0036CB50  54 00 D9 7E */	srwi r0, r0, 5
/* 8036FC14 0036CB54  98 1F 02 DC */	stb r0, 0x2dc(r31)
/* 8036FC18 0036CB58  4B D5 99 89 */	bl rand
/* 8036FC1C 0036CB5C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8036FC20 0036CB60  3C 00 43 30 */	lis r0, 0x4330
/* 8036FC24 0036CB64  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8036FC28 0036CB68  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8036FC2C 0036CB6C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8036FC30 0036CB70  C8 22 07 70 */	lfd f1, lbl_8051EAD0@sda21(r2)
/* 8036FC34 0036CB74  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8036FC38 0036CB78  C0 42 07 50 */	lfs f2, lbl_8051EAB0@sda21(r2)
/* 8036FC3C 0036CB7C  EC 60 08 28 */	fsubs f3, f0, f1
/* 8036FC40 0036CB80  C0 23 09 2C */	lfs f1, 0x92c(r3)
/* 8036FC44 0036CB84  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036FC48 0036CB88  EC 43 10 24 */	fdivs f2, f3, f2
/* 8036FC4C 0036CB8C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8036FC50 0036CB90  D0 3F 02 D8 */	stfs f1, 0x2d8(r31)
/* 8036FC54 0036CB94  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
.L_8036FC58:
/* 8036FC58 0036CB98  88 1F 02 DC */	lbz r0, 0x2dc(r31)
/* 8036FC5C 0036CB9C  28 00 00 00 */	cmplwi r0, 0
/* 8036FC60 0036CBA0  41 82 00 30 */	beq .L_8036FC90
/* 8036FC64 0036CBA4  C0 3F 02 D4 */	lfs f1, 0x2d4(r31)
/* 8036FC68 0036CBA8  C0 1F 02 D8 */	lfs f0, 0x2d8(r31)
/* 8036FC6C 0036CBAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036FC70 0036CBB0  40 80 00 20 */	bge .L_8036FC90
/* 8036FC74 0036CBB4  EC 01 00 24 */	fdivs f0, f1, f0
/* 8036FC78 0036CBB8  C0 22 07 80 */	lfs f1, lbl_8051EAE0@sda21(r2)
/* 8036FC7C 0036CBBC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8036FC80 0036CBC0  C0 43 09 30 */	lfs f2, 0x930(r3)
/* 8036FC84 0036CBC4  EC 01 00 28 */	fsubs f0, f1, f0
/* 8036FC88 0036CBC8  EC 02 00 32 */	fmuls f0, f2, f0
/* 8036FC8C 0036CBCC  EF BD 00 32 */	fmuls f29, f29, f0
.L_8036FC90:
/* 8036FC90 0036CBD0  C0 3F 02 EC */	lfs f1, 0x2ec(r31)
/* 8036FC94 0036CBD4  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036FC98 0036CBD8  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8036FC9C 0036CBDC  C0 9F 01 FC */	lfs f4, 0x1fc(r31)
/* 8036FCA0 0036CBE0  EC 64 F0 2A */	fadds f3, f4, f30
/* 8036FCA4 0036CBE4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8036FCA8 0036CBE8  40 80 00 30 */	bge .L_8036FCD8
/* 8036FCAC 0036CBEC  C0 02 07 6C */	lfs f0, lbl_8051EACC@sda21(r2)
/* 8036FCB0 0036CBF0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036FCB4 0036CBF4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036FCB8 0036CBF8  EC 03 00 32 */	fmuls f0, f3, f0
/* 8036FCBC 0036CBFC  FC 00 00 1E */	fctiwz f0, f0
/* 8036FCC0 0036CC00  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8036FCC4 0036CC04  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8036FCC8 0036CC08  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036FCCC 0036CC0C  7C 03 04 2E */	lfsx f0, r3, r0
/* 8036FCD0 0036CC10  FC 40 00 50 */	fneg f2, f0
/* 8036FCD4 0036CC14  48 00 00 28 */	b .L_8036FCFC
.L_8036FCD8:
/* 8036FCD8 0036CC18  C0 02 07 68 */	lfs f0, lbl_8051EAC8@sda21(r2)
/* 8036FCDC 0036CC1C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036FCE0 0036CC20  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036FCE4 0036CC24  EC 03 00 32 */	fmuls f0, f3, f0
/* 8036FCE8 0036CC28  FC 00 00 1E */	fctiwz f0, f0
/* 8036FCEC 0036CC2C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8036FCF0 0036CC30  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8036FCF4 0036CC34  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036FCF8 0036CC38  7C 43 04 2E */	lfsx f2, r3, r0
.L_8036FCFC:
/* 8036FCFC 0036CC3C  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036FD00 0036CC40  EF FD 00 B2 */	fmuls f31, f29, f2
/* 8036FD04 0036CC44  C0 3F 01 D4 */	lfs f1, 0x1d4(r31)
/* 8036FD08 0036CC48  C3 7F 01 D8 */	lfs f27, 0x1d8(r31)
/* 8036FD0C 0036CC4C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8036FD10 0036CC50  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8036FD14 0036CC54  D0 21 00 08 */	stfs f1, 8(r1)
/* 8036FD18 0036CC58  D3 61 00 0C */	stfs f27, 0xc(r1)
/* 8036FD1C 0036CC5C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8036FD20 0036CC60  40 80 00 08 */	bge .L_8036FD28
/* 8036FD24 0036CC64  FC 60 18 50 */	fneg f3, f3
.L_8036FD28:
/* 8036FD28 0036CC68  C0 02 07 68 */	lfs f0, lbl_8051EAC8@sda21(r2)
/* 8036FD2C 0036CC6C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036FD30 0036CC70  FC 40 F2 10 */	fabs f2, f30
/* 8036FD34 0036CC74  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036FD38 0036CC78  EC 23 00 32 */	fmuls f1, f3, f0
/* 8036FD3C 0036CC7C  FC 00 10 18 */	frsp f0, f2
/* 8036FD40 0036CC80  FC 20 08 1E */	fctiwz f1, f1
/* 8036FD44 0036CC84  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 8036FD48 0036CC88  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 8036FD4C 0036CC8C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8036FD50 0036CC90  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036FD54 0036CC94  7C 63 02 14 */	add r3, r3, r0
/* 8036FD58 0036CC98  C0 03 00 04 */	lfs f0, 4(r3)
/* 8036FD5C 0036CC9C  EF BD 00 32 */	fmuls f29, f29, f0
/* 8036FD60 0036CCA0  D0 9F 02 EC */	stfs f4, 0x2ec(r31)
/* 8036FD64 0036CCA4  40 81 00 1C */	ble .L_8036FD80
/* 8036FD68 0036CCA8  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036FD6C 0036CCAC  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8036FD70 0036CCB0  40 81 00 0C */	ble .L_8036FD7C
/* 8036FD74 0036CCB4  FF C0 E0 90 */	fmr f30, f28
/* 8036FD78 0036CCB8  48 00 00 08 */	b .L_8036FD80
.L_8036FD7C:
/* 8036FD7C 0036CCBC  FF C0 E0 50 */	fneg f30, f28
.L_8036FD80:
/* 8036FD80 0036CCC0  FC 20 F0 90 */	fmr f1, f30
/* 8036FD84 0036CCC4  48 0A 1E 4D */	bl roundAng__Ff
/* 8036FD88 0036CCC8  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8036FD8C 0036CCCC  EC 00 08 2A */	fadds f0, f0, f1
/* 8036FD90 0036CCD0  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 8036FD94 0036CCD4  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8036FD98 0036CCD8  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 8036FD9C 0036CCDC  D3 FF 01 D4 */	stfs f31, 0x1d4(r31)
/* 8036FDA0 0036CCE0  D3 7F 01 D8 */	stfs f27, 0x1d8(r31)
/* 8036FDA4 0036CCE4  D3 BF 01 DC */	stfs f29, 0x1dc(r31)
/* 8036FDA8 0036CCE8  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 8036FDAC 0036CCEC  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8036FDB0 0036CCF0  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 8036FDB4 0036CCF4  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8036FDB8 0036CCF8  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 8036FDBC 0036CCFC  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 8036FDC0 0036CD00  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 8036FDC4 0036CD04  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 8036FDC8 0036CD08  E3 61 00 48 */	psq_l f27, 72(r1), 0, qr0
/* 8036FDCC 0036CD0C  CB 61 00 40 */	lfd f27, 0x40(r1)
/* 8036FDD0 0036CD10  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8036FDD4 0036CD14  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8036FDD8 0036CD18  7C 08 03 A6 */	mtlr r0
/* 8036FDDC 0036CD1C  38 21 00 90 */	addi r1, r1, 0x90
/* 8036FDE0 0036CD20  4E 80 00 20 */	blr 

.global setGoalRandom__Q34Game11TamagoMushi3ObjFv
setGoalRandom__Q34Game11TamagoMushi3ObjFv:
/* 8036FDE4 0036CD24  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8036FDE8 0036CD28  7C 08 02 A6 */	mflr r0
/* 8036FDEC 0036CD2C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8036FDF0 0036CD30  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8036FDF4 0036CD34  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8036FDF8 0036CD38  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8036FDFC 0036CD3C  7C 7F 1B 78 */	mr r31, r3
/* 8036FE00 0036CD40  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8036FE04 0036CD44  C3 E3 03 5C */	lfs f31, 0x35c(r3)
/* 8036FE08 0036CD48  4B D5 97 99 */	bl rand
/* 8036FE0C 0036CD4C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8036FE10 0036CD50  3C 00 43 30 */	lis r0, 0x4330
/* 8036FE14 0036CD54  90 61 00 0C */	stw r3, 0xc(r1)
/* 8036FE18 0036CD58  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8036FE1C 0036CD5C  90 01 00 08 */	stw r0, 8(r1)
/* 8036FE20 0036CD60  C8 62 07 70 */	lfd f3, lbl_8051EAD0@sda21(r2)
/* 8036FE24 0036CD64  C8 21 00 08 */	lfd f1, 8(r1)
/* 8036FE28 0036CD68  C0 42 07 50 */	lfs f2, lbl_8051EAB0@sda21(r2)
/* 8036FE2C 0036CD6C  EC 61 18 28 */	fsubs f3, f1, f3
/* 8036FE30 0036CD70  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 8036FE34 0036CD74  C0 22 07 A8 */	lfs f1, lbl_8051EB08@sda21(r2)
/* 8036FE38 0036CD78  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8036FE3C 0036CD7C  EC 43 10 24 */	fdivs f2, f3, f2
/* 8036FE40 0036CD80  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 8036FE44 0036CD84  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8036FE48 0036CD88  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 8036FE4C 0036CD8C  EC 01 08 BA */	fmadds f0, f1, f2, f1
/* 8036FE50 0036CD90  EF FF 00 32 */	fmuls f31, f31, f0
/* 8036FE54 0036CD94  4B D5 97 4D */	bl rand
/* 8036FE58 0036CD98  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8036FE5C 0036CD9C  3C 00 43 30 */	lis r0, 0x4330
/* 8036FE60 0036CDA0  90 61 00 14 */	stw r3, 0x14(r1)
/* 8036FE64 0036CDA4  C8 62 07 70 */	lfd f3, lbl_8051EAD0@sda21(r2)
/* 8036FE68 0036CDA8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8036FE6C 0036CDAC  C0 42 07 50 */	lfs f2, lbl_8051EAB0@sda21(r2)
/* 8036FE70 0036CDB0  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8036FE74 0036CDB4  C0 22 07 AC */	lfs f1, lbl_8051EB0C@sda21(r2)
/* 8036FE78 0036CDB8  EC 60 18 28 */	fsubs f3, f0, f3
/* 8036FE7C 0036CDBC  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036FE80 0036CDC0  EC 43 10 24 */	fdivs f2, f3, f2
/* 8036FE84 0036CDC4  EC 61 00 B2 */	fmuls f3, f1, f2
/* 8036FE88 0036CDC8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8036FE8C 0036CDCC  40 80 00 30 */	bge .L_8036FEBC
/* 8036FE90 0036CDD0  C0 02 07 6C */	lfs f0, lbl_8051EACC@sda21(r2)
/* 8036FE94 0036CDD4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036FE98 0036CDD8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036FE9C 0036CDDC  EC 03 00 32 */	fmuls f0, f3, f0
/* 8036FEA0 0036CDE0  FC 00 00 1E */	fctiwz f0, f0
/* 8036FEA4 0036CDE4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8036FEA8 0036CDE8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8036FEAC 0036CDEC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036FEB0 0036CDF0  7C 03 04 2E */	lfsx f0, r3, r0
/* 8036FEB4 0036CDF4  FC 40 00 50 */	fneg f2, f0
/* 8036FEB8 0036CDF8  48 00 00 28 */	b .L_8036FEE0
.L_8036FEBC:
/* 8036FEBC 0036CDFC  C0 02 07 68 */	lfs f0, lbl_8051EAC8@sda21(r2)
/* 8036FEC0 0036CE00  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036FEC4 0036CE04  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036FEC8 0036CE08  EC 03 00 32 */	fmuls f0, f3, f0
/* 8036FECC 0036CE0C  FC 00 00 1E */	fctiwz f0, f0
/* 8036FED0 0036CE10  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8036FED4 0036CE14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8036FED8 0036CE18  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036FEDC 0036CE1C  7C 43 04 2E */	lfsx f2, r3, r0
.L_8036FEE0:
/* 8036FEE0 0036CE20  C0 3F 02 E0 */	lfs f1, 0x2e0(r31)
/* 8036FEE4 0036CE24  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 8036FEE8 0036CE28  EC 3F 08 BA */	fmadds f1, f31, f2, f1
/* 8036FEEC 0036CE2C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8036FEF0 0036CE30  D0 3F 02 E0 */	stfs f1, 0x2e0(r31)
/* 8036FEF4 0036CE34  40 80 00 08 */	bge .L_8036FEFC
/* 8036FEF8 0036CE38  FC 60 18 50 */	fneg f3, f3
.L_8036FEFC:
/* 8036FEFC 0036CE3C  C0 22 07 68 */	lfs f1, lbl_8051EAC8@sda21(r2)
/* 8036FF00 0036CE40  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8036FF04 0036CE44  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8036FF08 0036CE48  C0 1F 02 E8 */	lfs f0, 0x2e8(r31)
/* 8036FF0C 0036CE4C  EC 23 00 72 */	fmuls f1, f3, f1
/* 8036FF10 0036CE50  FC 20 08 1E */	fctiwz f1, f1
/* 8036FF14 0036CE54  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 8036FF18 0036CE58  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8036FF1C 0036CE5C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036FF20 0036CE60  7C 63 02 14 */	add r3, r3, r0
/* 8036FF24 0036CE64  C0 23 00 04 */	lfs f1, 4(r3)
/* 8036FF28 0036CE68  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 8036FF2C 0036CE6C  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 8036FF30 0036CE70  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8036FF34 0036CE74  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8036FF38 0036CE78  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8036FF3C 0036CE7C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8036FF40 0036CE80  7C 08 03 A6 */	mtlr r0
/* 8036FF44 0036CE84  38 21 00 50 */	addi r1, r1, 0x50
/* 8036FF48 0036CE88  4E 80 00 20 */	blr 

.global "setGoalDirect__Q34Game11TamagoMushi3ObjFR10Vector3<f>"
"setGoalDirect__Q34Game11TamagoMushi3ObjFR10Vector3<f>":
/* 8036FF4C 0036CE8C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8036FF50 0036CE90  7C 08 02 A6 */	mflr r0
/* 8036FF54 0036CE94  90 01 00 34 */	stw r0, 0x34(r1)
/* 8036FF58 0036CE98  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8036FF5C 0036CE9C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8036FF60 0036CEA0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8036FF64 0036CEA4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8036FF68 0036CEA8  7C 7E 1B 78 */	mr r30, r3
/* 8036FF6C 0036CEAC  7C 9F 23 78 */	mr r31, r4
/* 8036FF70 0036CEB0  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8036FF74 0036CEB4  C3 E3 09 3C */	lfs f31, 0x93c(r3)
/* 8036FF78 0036CEB8  4B D5 96 29 */	bl rand
/* 8036FF7C 0036CEBC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8036FF80 0036CEC0  3C 00 43 30 */	lis r0, 0x4330
/* 8036FF84 0036CEC4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8036FF88 0036CEC8  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 8036FF8C 0036CECC  90 01 00 08 */	stw r0, 8(r1)
/* 8036FF90 0036CED0  C8 62 07 70 */	lfd f3, lbl_8051EAD0@sda21(r2)
/* 8036FF94 0036CED4  C8 41 00 08 */	lfd f2, 8(r1)
/* 8036FF98 0036CED8  C0 22 07 50 */	lfs f1, lbl_8051EAB0@sda21(r2)
/* 8036FF9C 0036CEDC  EC 62 18 28 */	fsubs f3, f2, f3
/* 8036FFA0 0036CEE0  D0 1E 02 E0 */	stfs f0, 0x2e0(r30)
/* 8036FFA4 0036CEE4  C0 42 07 A8 */	lfs f2, lbl_8051EB08@sda21(r2)
/* 8036FFA8 0036CEE8  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8036FFAC 0036CEEC  EC 63 08 24 */	fdivs f3, f3, f1
/* 8036FFB0 0036CEF0  D0 1E 02 E4 */	stfs f0, 0x2e4(r30)
/* 8036FFB4 0036CEF4  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 8036FFB8 0036CEF8  D0 1E 02 E8 */	stfs f0, 0x2e8(r30)
/* 8036FFBC 0036CEFC  C0 3F 00 00 */	lfs f1, 0(r31)
/* 8036FFC0 0036CF00  C0 1E 02 E0 */	lfs f0, 0x2e0(r30)
/* 8036FFC4 0036CF04  EC 42 10 FA */	fmadds f2, f2, f3, f2
/* 8036FFC8 0036CF08  EF FF 00 B2 */	fmuls f31, f31, f2
/* 8036FFCC 0036CF0C  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 8036FFD0 0036CF10  D0 1E 02 E0 */	stfs f0, 0x2e0(r30)
/* 8036FFD4 0036CF14  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8036FFD8 0036CF18  C0 1E 02 E8 */	lfs f0, 0x2e8(r30)
/* 8036FFDC 0036CF1C  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 8036FFE0 0036CF20  D0 1E 02 E8 */	stfs f0, 0x2e8(r30)
/* 8036FFE4 0036CF24  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8036FFE8 0036CF28  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8036FFEC 0036CF2C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8036FFF0 0036CF30  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8036FFF4 0036CF34  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8036FFF8 0036CF38  7C 08 03 A6 */	mtlr r0
/* 8036FFFC 0036CF3C  38 21 00 30 */	addi r1, r1, 0x30
/* 80370000 0036CF40  4E 80 00 20 */	blr 

.global turnFunc__Q34Game11TamagoMushi3ObjFv
turnFunc__Q34Game11TamagoMushi3ObjFv:
/* 80370004 0036CF44  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80370008 0036CF48  7C 08 02 A6 */	mflr r0
/* 8037000C 0036CF4C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80370010 0036CF50  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80370014 0036CF54  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80370018 0036CF58  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8037001C 0036CF5C  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 80370020 0036CF60  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 80370024 0036CF64  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 80370028 0036CF68  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8037002C 0036CF6C  7C 7F 1B 78 */	mr r31, r3
/* 80370030 0036CF70  38 61 00 08 */	addi r3, r1, 8
/* 80370034 0036CF74  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80370038 0036CF78  7F E4 FB 78 */	mr r4, r31
/* 8037003C 0036CF7C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80370040 0036CF80  C0 5F 02 C4 */	lfs f2, 0x2c4(r31)
/* 80370044 0036CF84  C0 25 03 34 */	lfs f1, 0x334(r5)
/* 80370048 0036CF88  C0 05 03 0C */	lfs f0, 0x30c(r5)
/* 8037004C 0036CF8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80370050 0036CF90  EF A2 00 72 */	fmuls f29, f2, f1
/* 80370054 0036CF94  EF C2 00 32 */	fmuls f30, f2, f0
/* 80370058 0036CF98  7D 89 03 A6 */	mtctr r12
/* 8037005C 0036CF9C  4E 80 04 21 */	bctrl 
/* 80370060 0036CFA0  C0 7F 02 E0 */	lfs f3, 0x2e0(r31)
/* 80370064 0036CFA4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80370068 0036CFA8  C0 21 00 08 */	lfs f1, 8(r1)
/* 8037006C 0036CFAC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80370070 0036CFB0  C0 5F 02 E8 */	lfs f2, 0x2e8(r31)
/* 80370074 0036CFB4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80370078 0036CFB8  EC 23 08 28 */	fsubs f1, f3, f1
/* 8037007C 0036CFBC  EC 42 00 28 */	fsubs f2, f2, f0
/* 80370080 0036CFC0  4B CC 50 89 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80370084 0036CFC4  48 0A 1B 4D */	bl roundAng__Ff
/* 80370088 0036CFC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037008C 0036CFCC  FF E0 08 90 */	fmr f31, f1
/* 80370090 0036CFD0  7F E3 FB 78 */	mr r3, r31
/* 80370094 0036CFD4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80370098 0036CFD8  7D 89 03 A6 */	mtctr r12
/* 8037009C 0036CFDC  4E 80 04 21 */	bctrl 
/* 803700A0 0036CFE0  FC 40 08 90 */	fmr f2, f1
/* 803700A4 0036CFE4  FC 20 F8 90 */	fmr f1, f31
/* 803700A8 0036CFE8  48 0A 1B 55 */	bl angDist__Fff
/* 803700AC 0036CFEC  FF E0 08 90 */	fmr f31, f1
/* 803700B0 0036CFF0  C0 02 07 A0 */	lfs f0, lbl_8051EB00@sda21(r2)
/* 803700B4 0036CFF4  C0 22 07 9C */	lfs f1, lbl_8051EAFC@sda21(r2)
/* 803700B8 0036CFF8  EC 00 07 72 */	fmuls f0, f0, f29
/* 803700BC 0036CFFC  EF BF 07 B2 */	fmuls f29, f31, f30
/* 803700C0 0036D000  EC 21 00 32 */	fmuls f1, f1, f0
/* 803700C4 0036D004  FC 00 EA 10 */	fabs f0, f29
/* 803700C8 0036D008  FC 00 00 18 */	frsp f0, f0
/* 803700CC 0036D00C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803700D0 0036D010  40 81 00 1C */	ble .L_803700EC
/* 803700D4 0036D014  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 803700D8 0036D018  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 803700DC 0036D01C  40 81 00 0C */	ble .L_803700E8
/* 803700E0 0036D020  FF A0 08 90 */	fmr f29, f1
/* 803700E4 0036D024  48 00 00 08 */	b .L_803700EC
.L_803700E8:
/* 803700E8 0036D028  FF A0 08 50 */	fneg f29, f1
.L_803700EC:
/* 803700EC 0036D02C  7F E3 FB 78 */	mr r3, r31
/* 803700F0 0036D030  81 9F 00 00 */	lwz r12, 0(r31)
/* 803700F4 0036D034  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803700F8 0036D038  7D 89 03 A6 */	mtctr r12
/* 803700FC 0036D03C  4E 80 04 21 */	bctrl 
/* 80370100 0036D040  EC 3D 08 2A */	fadds f1, f29, f1
/* 80370104 0036D044  48 0A 1A CD */	bl roundAng__Ff
/* 80370108 0036D048  FC 60 FA 10 */	fabs f3, f31
/* 8037010C 0036D04C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80370110 0036D050  C0 02 07 A4 */	lfs f0, lbl_8051EB04@sda21(r2)
/* 80370114 0036D054  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 80370118 0036D058  FC 20 18 18 */	frsp f1, f3
/* 8037011C 0036D05C  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 80370120 0036D060  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80370124 0036D064  40 80 00 0C */	bge .L_80370130
/* 80370128 0036D068  38 60 00 01 */	li r3, 1
/* 8037012C 0036D06C  48 00 00 08 */	b .L_80370134
.L_80370130:
/* 80370130 0036D070  38 60 00 00 */	li r3, 0
.L_80370134:
/* 80370134 0036D074  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80370138 0036D078  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8037013C 0036D07C  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80370140 0036D080  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80370144 0036D084  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 80370148 0036D088  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 8037014C 0036D08C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80370150 0036D090  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80370154 0036D094  7C 08 03 A6 */	mtlr r0
/* 80370158 0036D098  38 21 00 50 */	addi r1, r1, 0x50
/* 8037015C 0036D09C  4E 80 00 20 */	blr 

.global isReachToGoal__Q34Game11TamagoMushi3ObjFf
isReachToGoal__Q34Game11TamagoMushi3ObjFf:
/* 80370160 0036D0A0  EC 01 00 72 */	fmuls f0, f1, f1
/* 80370164 0036D0A4  C0 43 01 94 */	lfs f2, 0x194(r3)
/* 80370168 0036D0A8  C0 23 02 E8 */	lfs f1, 0x2e8(r3)
/* 8037016C 0036D0AC  C0 63 01 8C */	lfs f3, 0x18c(r3)
/* 80370170 0036D0B0  EC 42 08 28 */	fsubs f2, f2, f1
/* 80370174 0036D0B4  C0 23 02 E0 */	lfs f1, 0x2e0(r3)
/* 80370178 0036D0B8  EC 63 08 28 */	fsubs f3, f3, f1
/* 8037017C 0036D0BC  EC 22 00 B2 */	fmuls f1, f2, f2
/* 80370180 0036D0C0  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 80370184 0036D0C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80370188 0036D0C8  7C 00 00 26 */	mfcr r0
/* 8037018C 0036D0CC  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80370190 0036D0D0  4E 80 00 20 */	blr 

.global resetWalkParm__Q34Game11TamagoMushi3ObjFv
resetWalkParm__Q34Game11TamagoMushi3ObjFv:
/* 80370194 0036D0D4  C0 02 07 64 */	lfs f0, lbl_8051EAC4@sda21(r2)
/* 80370198 0036D0D8  38 00 00 00 */	li r0, 0
/* 8037019C 0036D0DC  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 803701A0 0036D0E0  D0 03 02 D4 */	stfs f0, 0x2d4(r3)
/* 803701A4 0036D0E4  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 803701A8 0036D0E8  C0 04 09 2C */	lfs f0, 0x92c(r4)
/* 803701AC 0036D0EC  D0 03 02 D8 */	stfs f0, 0x2d8(r3)
/* 803701B0 0036D0F0  98 03 02 DC */	stb r0, 0x2dc(r3)
/* 803701B4 0036D0F4  C0 03 01 FC */	lfs f0, 0x1fc(r3)
/* 803701B8 0036D0F8  D0 03 02 EC */	stfs f0, 0x2ec(r3)
/* 803701BC 0036D0FC  4E 80 00 20 */	blr 

.global startCarcassMotion__Q34Game11TamagoMushi3ObjFv
startCarcassMotion__Q34Game11TamagoMushi3ObjFv:
/* 803701C0 0036D100  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803701C4 0036D104  7C 08 02 A6 */	mflr r0
/* 803701C8 0036D108  38 80 00 05 */	li r4, 5
/* 803701CC 0036D10C  38 A0 00 00 */	li r5, 0
/* 803701D0 0036D110  90 01 00 14 */	stw r0, 0x14(r1)
/* 803701D4 0036D114  4B D9 4E 31 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803701D8 0036D118  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803701DC 0036D11C  7C 08 03 A6 */	mtlr r0
/* 803701E0 0036D120  38 21 00 10 */	addi r1, r1, 0x10
/* 803701E4 0036D124  4E 80 00 20 */	blr 

.global setLeader__Q34Game11TamagoMushi3ObjFPQ34Game11TamagoMushi3Obj
setLeader__Q34Game11TamagoMushi3ObjFPQ34Game11TamagoMushi3Obj:
/* 803701E8 0036D128  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803701EC 0036D12C  7C 08 02 A6 */	mflr r0
/* 803701F0 0036D130  90 01 00 14 */	stw r0, 0x14(r1)
/* 803701F4 0036D134  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803701F8 0036D138  7C 7F 1B 78 */	mr r31, r3
/* 803701FC 0036D13C  80 03 02 F4 */	lwz r0, 0x2f4(r3)
/* 80370200 0036D140  7C 00 20 40 */	cmplw r0, r4
/* 80370204 0036D144  41 82 00 28 */	beq .L_8037022C
/* 80370208 0036D148  90 9F 02 F4 */	stw r4, 0x2f4(r31)
/* 8037020C 0036D14C  80 9F 02 F4 */	lwz r4, 0x2f4(r31)
/* 80370210 0036D150  88 04 02 F0 */	lbz r0, 0x2f0(r4)
/* 80370214 0036D154  28 00 00 00 */	cmplwi r0, 0
/* 80370218 0036D158  41 82 00 08 */	beq .L_80370220
/* 8037021C 0036D15C  48 00 00 25 */	bl setTypeBall__Q34Game11TamagoMushi3ObjFv
.L_80370220:
/* 80370220 0036D160  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80370224 0036D164  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80370228 0036D168  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_8037022C:
/* 8037022C 0036D16C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80370230 0036D170  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80370234 0036D174  7C 08 03 A6 */	mtlr r0
/* 80370238 0036D178  38 21 00 10 */	addi r1, r1, 0x10
/* 8037023C 0036D17C  4E 80 00 20 */	blr 

.global setTypeBall__Q34Game11TamagoMushi3ObjFv
setTypeBall__Q34Game11TamagoMushi3ObjFv:
/* 80370240 0036D180  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80370244 0036D184  7C 08 02 A6 */	mflr r0
/* 80370248 0036D188  38 A0 00 05 */	li r5, 5
/* 8037024C 0036D18C  38 C0 00 00 */	li r6, 0
/* 80370250 0036D190  90 01 00 14 */	stw r0, 0x14(r1)
/* 80370254 0036D194  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80370258 0036D198  7C 7F 1B 78 */	mr r31, r3
/* 8037025C 0036D19C  7F E4 FB 78 */	mr r4, r31
/* 80370260 0036D1A0  80 63 03 08 */	lwz r3, 0x308(r3)
/* 80370264 0036D1A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80370268 0036D1A8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8037026C 0036D1AC  7D 89 03 A6 */	mtctr r12
/* 80370270 0036D1B0  4E 80 04 21 */	bctrl 
/* 80370274 0036D1B4  38 00 00 01 */	li r0, 1
/* 80370278 0036D1B8  98 1F 02 F0 */	stb r0, 0x2f0(r31)
/* 8037027C 0036D1BC  98 1F 03 00 */	stb r0, 0x300(r31)
/* 80370280 0036D1C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80370284 0036D1C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80370288 0036D1C8  7C 08 03 A6 */	mtlr r0
/* 8037028C 0036D1CC  38 21 00 10 */	addi r1, r1, 0x10
/* 80370290 0036D1D0  4E 80 00 20 */	blr 

.global appearPanic__Q34Game11TamagoMushi3ObjFv
appearPanic__Q34Game11TamagoMushi3ObjFv:
/* 80370294 0036D1D4  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80370298 0036D1D8  7C 08 02 A6 */	mflr r0
/* 8037029C 0036D1DC  90 01 00 94 */	stw r0, 0x94(r1)
/* 803702A0 0036D1E0  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 803702A4 0036D1E4  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 803702A8 0036D1E8  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 803702AC 0036D1EC  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 803702B0 0036D1F0  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 803702B4 0036D1F4  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 803702B8 0036D1F8  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 803702BC 0036D1FC  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 803702C0 0036D200  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803702C4 0036D204  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803702C8 0036D208  93 A1 00 44 */	stw r29, 0x44(r1)
/* 803702CC 0036D20C  7C 7F 1B 78 */	mr r31, r3
/* 803702D0 0036D210  80 03 02 F4 */	lwz r0, 0x2f4(r3)
/* 803702D4 0036D214  28 00 00 00 */	cmplwi r0, 0
/* 803702D8 0036D218  41 82 00 0C */	beq .L_803702E4
/* 803702DC 0036D21C  7C 00 F8 40 */	cmplw r0, r31
/* 803702E0 0036D220  40 82 02 BC */	bne .L_8037059C
.L_803702E4:
/* 803702E4 0036D224  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 803702E8 0036D228  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 803702EC 0036D22C  38 00 00 00 */	li r0, 0
/* 803702F0 0036D230  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 803702F4 0036D234  C0 05 09 48 */	lfs f0, 0x948(r5)
/* 803702F8 0036D238  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 803702FC 0036D23C  28 00 00 00 */	cmplwi r0, 0
/* 80370300 0036D240  EF 80 00 32 */	fmuls f28, f0, f0
/* 80370304 0036D244  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80370308 0036D248  90 01 00 38 */	stw r0, 0x38(r1)
/* 8037030C 0036D24C  90 01 00 30 */	stw r0, 0x30(r1)
/* 80370310 0036D250  90 61 00 34 */	stw r3, 0x34(r1)
/* 80370314 0036D254  40 82 00 1C */	bne .L_80370330
/* 80370318 0036D258  81 83 00 00 */	lwz r12, 0(r3)
/* 8037031C 0036D25C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80370320 0036D260  7D 89 03 A6 */	mtctr r12
/* 80370324 0036D264  4E 80 04 21 */	bctrl 
/* 80370328 0036D268  90 61 00 30 */	stw r3, 0x30(r1)
/* 8037032C 0036D26C  48 00 02 50 */	b .L_8037057C
.L_80370330:
/* 80370330 0036D270  81 83 00 00 */	lwz r12, 0(r3)
/* 80370334 0036D274  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80370338 0036D278  7D 89 03 A6 */	mtctr r12
/* 8037033C 0036D27C  4E 80 04 21 */	bctrl 
/* 80370340 0036D280  90 61 00 30 */	stw r3, 0x30(r1)
/* 80370344 0036D284  48 00 00 58 */	b .L_8037039C
.L_80370348:
/* 80370348 0036D288  80 61 00 34 */	lwz r3, 0x34(r1)
/* 8037034C 0036D28C  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80370350 0036D290  81 83 00 00 */	lwz r12, 0(r3)
/* 80370354 0036D294  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80370358 0036D298  7D 89 03 A6 */	mtctr r12
/* 8037035C 0036D29C  4E 80 04 21 */	bctrl 
/* 80370360 0036D2A0  7C 64 1B 78 */	mr r4, r3
/* 80370364 0036D2A4  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80370368 0036D2A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8037036C 0036D2AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80370370 0036D2B0  7D 89 03 A6 */	mtctr r12
/* 80370374 0036D2B4  4E 80 04 21 */	bctrl 
/* 80370378 0036D2B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037037C 0036D2BC  40 82 02 00 */	bne .L_8037057C
/* 80370380 0036D2C0  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80370384 0036D2C4  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80370388 0036D2C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8037038C 0036D2CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80370390 0036D2D0  7D 89 03 A6 */	mtctr r12
/* 80370394 0036D2D4  4E 80 04 21 */	bctrl 
/* 80370398 0036D2D8  90 61 00 30 */	stw r3, 0x30(r1)
.L_8037039C:
/* 8037039C 0036D2DC  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 803703A0 0036D2E0  38 61 00 2C */	addi r3, r1, 0x2c
/* 803703A4 0036D2E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803703A8 0036D2E8  7D 89 03 A6 */	mtctr r12
/* 803703AC 0036D2EC  4E 80 04 21 */	bctrl 
/* 803703B0 0036D2F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803703B4 0036D2F4  41 82 FF 94 */	beq .L_80370348
/* 803703B8 0036D2F8  48 00 01 C4 */	b .L_8037057C
.L_803703BC:
/* 803703BC 0036D2FC  80 61 00 34 */	lwz r3, 0x34(r1)
/* 803703C0 0036D300  81 83 00 00 */	lwz r12, 0(r3)
/* 803703C4 0036D304  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803703C8 0036D308  7D 89 03 A6 */	mtctr r12
/* 803703CC 0036D30C  4E 80 04 21 */	bctrl 
/* 803703D0 0036D310  81 83 00 00 */	lwz r12, 0(r3)
/* 803703D4 0036D314  7C 7D 1B 78 */	mr r29, r3
/* 803703D8 0036D318  3B C0 00 00 */	li r30, 0
/* 803703DC 0036D31C  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 803703E0 0036D320  7D 89 03 A6 */	mtctr r12
/* 803703E4 0036D324  4E 80 04 21 */	bctrl 
/* 803703E8 0036D328  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803703EC 0036D32C  41 82 00 34 */	beq .L_80370420
/* 803703F0 0036D330  7F A3 EB 78 */	mr r3, r29
/* 803703F4 0036D334  81 9D 00 00 */	lwz r12, 0(r29)
/* 803703F8 0036D338  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 803703FC 0036D33C  7D 89 03 A6 */	mtctr r12
/* 80370400 0036D340  4E 80 04 21 */	bctrl 
/* 80370404 0036D344  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80370408 0036D348  41 82 00 18 */	beq .L_80370420
/* 8037040C 0036D34C  7F A3 EB 78 */	mr r3, r29
/* 80370410 0036D350  4B E2 F1 79 */	bl isStickToMouth__Q24Game8CreatureFv
/* 80370414 0036D354  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80370418 0036D358  40 82 00 08 */	bne .L_80370420
/* 8037041C 0036D35C  3B C0 00 01 */	li r30, 1
.L_80370420:
/* 80370420 0036D360  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80370424 0036D364  41 82 00 9C */	beq .L_803704C0
/* 80370428 0036D368  7F A4 EB 78 */	mr r4, r29
/* 8037042C 0036D36C  38 61 00 08 */	addi r3, r1, 8
/* 80370430 0036D370  81 9D 00 00 */	lwz r12, 0(r29)
/* 80370434 0036D374  C3 BF 01 94 */	lfs f29, 0x194(r31)
/* 80370438 0036D378  81 8C 00 08 */	lwz r12, 8(r12)
/* 8037043C 0036D37C  C3 DF 01 8C */	lfs f30, 0x18c(r31)
/* 80370440 0036D380  7D 89 03 A6 */	mtctr r12
/* 80370444 0036D384  4E 80 04 21 */	bctrl 
/* 80370448 0036D388  7F A4 EB 78 */	mr r4, r29
/* 8037044C 0036D38C  38 61 00 14 */	addi r3, r1, 0x14
/* 80370450 0036D390  81 9D 00 00 */	lwz r12, 0(r29)
/* 80370454 0036D394  C3 E1 00 10 */	lfs f31, 0x10(r1)
/* 80370458 0036D398  81 8C 00 08 */	lwz r12, 8(r12)
/* 8037045C 0036D39C  7D 89 03 A6 */	mtctr r12
/* 80370460 0036D3A0  4E 80 04 21 */	bctrl 
/* 80370464 0036D3A4  EC 1F E8 28 */	fsubs f0, f31, f29
/* 80370468 0036D3A8  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8037046C 0036D3AC  EC 21 F0 28 */	fsubs f1, f1, f30
/* 80370470 0036D3B0  EC 00 00 32 */	fmuls f0, f0, f0
/* 80370474 0036D3B4  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 80370478 0036D3B8  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 8037047C 0036D3BC  40 80 00 44 */	bge .L_803704C0
/* 80370480 0036D3C0  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 80370484 0036D3C4  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 80370488 0036D3C8  3C 80 80 4B */	lis r4, __vt__Q24Game16InteractAstonish@ha
/* 8037048C 0036D3CC  7F A3 EB 78 */	mr r3, r29
/* 80370490 0036D3D0  C0 06 09 44 */	lfs f0, 0x944(r6)
/* 80370494 0036D3D4  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 80370498 0036D3D8  38 04 48 54 */	addi r0, r4, __vt__Q24Game16InteractAstonish@l
/* 8037049C 0036D3DC  38 81 00 20 */	addi r4, r1, 0x20
/* 803704A0 0036D3E0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 803704A4 0036D3E4  93 E1 00 24 */	stw r31, 0x24(r1)
/* 803704A8 0036D3E8  90 01 00 20 */	stw r0, 0x20(r1)
/* 803704AC 0036D3EC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803704B0 0036D3F0  81 9D 00 00 */	lwz r12, 0(r29)
/* 803704B4 0036D3F4  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 803704B8 0036D3F8  7D 89 03 A6 */	mtctr r12
/* 803704BC 0036D3FC  4E 80 04 21 */	bctrl 
.L_803704C0:
/* 803704C0 0036D400  80 01 00 38 */	lwz r0, 0x38(r1)
/* 803704C4 0036D404  28 00 00 00 */	cmplwi r0, 0
/* 803704C8 0036D408  40 82 00 24 */	bne .L_803704EC
/* 803704CC 0036D40C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 803704D0 0036D410  80 81 00 30 */	lwz r4, 0x30(r1)
/* 803704D4 0036D414  81 83 00 00 */	lwz r12, 0(r3)
/* 803704D8 0036D418  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803704DC 0036D41C  7D 89 03 A6 */	mtctr r12
/* 803704E0 0036D420  4E 80 04 21 */	bctrl 
/* 803704E4 0036D424  90 61 00 30 */	stw r3, 0x30(r1)
/* 803704E8 0036D428  48 00 00 94 */	b .L_8037057C
.L_803704EC:
/* 803704EC 0036D42C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 803704F0 0036D430  80 81 00 30 */	lwz r4, 0x30(r1)
/* 803704F4 0036D434  81 83 00 00 */	lwz r12, 0(r3)
/* 803704F8 0036D438  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803704FC 0036D43C  7D 89 03 A6 */	mtctr r12
/* 80370500 0036D440  4E 80 04 21 */	bctrl 
/* 80370504 0036D444  90 61 00 30 */	stw r3, 0x30(r1)
/* 80370508 0036D448  48 00 00 58 */	b .L_80370560
.L_8037050C:
/* 8037050C 0036D44C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80370510 0036D450  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80370514 0036D454  81 83 00 00 */	lwz r12, 0(r3)
/* 80370518 0036D458  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8037051C 0036D45C  7D 89 03 A6 */	mtctr r12
/* 80370520 0036D460  4E 80 04 21 */	bctrl 
/* 80370524 0036D464  7C 64 1B 78 */	mr r4, r3
/* 80370528 0036D468  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8037052C 0036D46C  81 83 00 00 */	lwz r12, 0(r3)
/* 80370530 0036D470  81 8C 00 08 */	lwz r12, 8(r12)
/* 80370534 0036D474  7D 89 03 A6 */	mtctr r12
/* 80370538 0036D478  4E 80 04 21 */	bctrl 
/* 8037053C 0036D47C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80370540 0036D480  40 82 00 3C */	bne .L_8037057C
/* 80370544 0036D484  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80370548 0036D488  80 81 00 30 */	lwz r4, 0x30(r1)
/* 8037054C 0036D48C  81 83 00 00 */	lwz r12, 0(r3)
/* 80370550 0036D490  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80370554 0036D494  7D 89 03 A6 */	mtctr r12
/* 80370558 0036D498  4E 80 04 21 */	bctrl 
/* 8037055C 0036D49C  90 61 00 30 */	stw r3, 0x30(r1)
.L_80370560:
/* 80370560 0036D4A0  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 80370564 0036D4A4  38 61 00 2C */	addi r3, r1, 0x2c
/* 80370568 0036D4A8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8037056C 0036D4AC  7D 89 03 A6 */	mtctr r12
/* 80370570 0036D4B0  4E 80 04 21 */	bctrl 
/* 80370574 0036D4B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80370578 0036D4B8  41 82 FF 94 */	beq .L_8037050C
.L_8037057C:
/* 8037057C 0036D4BC  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80370580 0036D4C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80370584 0036D4C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80370588 0036D4C8  7D 89 03 A6 */	mtctr r12
/* 8037058C 0036D4CC  4E 80 04 21 */	bctrl 
/* 80370590 0036D4D0  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80370594 0036D4D4  7C 04 18 40 */	cmplw r4, r3
/* 80370598 0036D4D8  40 82 FE 24 */	bne .L_803703BC
.L_8037059C:
/* 8037059C 0036D4DC  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 803705A0 0036D4E0  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 803705A4 0036D4E4  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 803705A8 0036D4E8  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 803705AC 0036D4EC  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 803705B0 0036D4F0  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 803705B4 0036D4F4  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 803705B8 0036D4F8  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 803705BC 0036D4FC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803705C0 0036D500  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803705C4 0036D504  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803705C8 0036D508  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 803705CC 0036D50C  7C 08 03 A6 */	mtlr r0
/* 803705D0 0036D510  38 21 00 90 */	addi r1, r1, 0x90
/* 803705D4 0036D514  4E 80 00 20 */	blr 

.global isFound__Q34Game11TamagoMushi3ObjFv
isFound__Q34Game11TamagoMushi3ObjFv:
/* 803705D8 0036D518  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803705DC 0036D51C  7C 08 02 A6 */	mflr r0
/* 803705E0 0036D520  90 01 00 24 */	stw r0, 0x24(r1)
/* 803705E4 0036D524  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 803705E8 0036D528  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 803705EC 0036D52C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803705F0 0036D530  93 C1 00 08 */	stw r30, 8(r1)
/* 803705F4 0036D534  7C 7E 1B 78 */	mr r30, r3
/* 803705F8 0036D538  83 E3 02 F4 */	lwz r31, 0x2f4(r3)
/* 803705FC 0036D53C  28 1F 00 00 */	cmplwi r31, 0
/* 80370600 0036D540  41 82 03 00 */	beq .L_80370900
/* 80370604 0036D544  7C 1F F0 40 */	cmplw r31, r30
/* 80370608 0036D548  41 82 02 F8 */	beq .L_80370900
/* 8037060C 0036D54C  83 DF 02 F4 */	lwz r30, 0x2f4(r31)
/* 80370610 0036D550  28 1E 00 00 */	cmplwi r30, 0
/* 80370614 0036D554  41 82 02 6C */	beq .L_80370880
/* 80370618 0036D558  7C 1E F8 40 */	cmplw r30, r31
/* 8037061C 0036D55C  41 82 02 64 */	beq .L_80370880
/* 80370620 0036D560  83 FE 02 F4 */	lwz r31, 0x2f4(r30)
/* 80370624 0036D564  28 1F 00 00 */	cmplwi r31, 0
/* 80370628 0036D568  41 82 01 D8 */	beq .L_80370800
/* 8037062C 0036D56C  7C 1F F0 40 */	cmplw r31, r30
/* 80370630 0036D570  41 82 01 D0 */	beq .L_80370800
/* 80370634 0036D574  83 DF 02 F4 */	lwz r30, 0x2f4(r31)
/* 80370638 0036D578  28 1E 00 00 */	cmplwi r30, 0
/* 8037063C 0036D57C  41 82 01 44 */	beq .L_80370780
/* 80370640 0036D580  7C 1E F8 40 */	cmplw r30, r31
/* 80370644 0036D584  41 82 01 3C */	beq .L_80370780
/* 80370648 0036D588  83 FE 02 F4 */	lwz r31, 0x2f4(r30)
/* 8037064C 0036D58C  28 1F 00 00 */	cmplwi r31, 0
/* 80370650 0036D590  41 82 00 B0 */	beq .L_80370700
/* 80370654 0036D594  7C 1F F0 40 */	cmplw r31, r30
/* 80370658 0036D598  41 82 00 A8 */	beq .L_80370700
/* 8037065C 0036D59C  80 7F 02 F4 */	lwz r3, 0x2f4(r31)
/* 80370660 0036D5A0  28 03 00 00 */	cmplwi r3, 0
/* 80370664 0036D5A4  41 82 00 14 */	beq .L_80370678
/* 80370668 0036D5A8  7C 03 F8 40 */	cmplw r3, r31
/* 8037066C 0036D5AC  41 82 00 0C */	beq .L_80370678
/* 80370670 0036D5B0  4B FF FF 69 */	bl isFound__Q34Game11TamagoMushi3ObjFv
/* 80370674 0036D5B4  48 00 03 00 */	b .L_80370974
.L_80370678:
/* 80370678 0036D5B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8037067C 0036D5BC  28 03 00 00 */	cmplwi r3, 0
/* 80370680 0036D5C0  41 82 00 18 */	beq .L_80370698
/* 80370684 0036D5C4  48 00 03 19 */	bl isZukanMode__Q24Game10GameSystemFv
/* 80370688 0036D5C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037068C 0036D5CC  41 82 00 0C */	beq .L_80370698
/* 80370690 0036D5D0  38 60 00 01 */	li r3, 1
/* 80370694 0036D5D4  48 00 02 E0 */	b .L_80370974
.L_80370698:
/* 80370698 0036D5D8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8037069C 0036D5DC  38 63 08 2C */	addi r3, r3, 0x82c
/* 803706A0 0036D5E0  48 00 02 F5 */	bl "__cl__7Parm<f>Fv"
/* 803706A4 0036D5E4  C3 E3 00 00 */	lfs f31, 0(r3)
/* 803706A8 0036D5E8  7F E3 FB 78 */	mr r3, r31
/* 803706AC 0036D5EC  C0 22 07 B0 */	lfs f1, lbl_8051EB10@sda21(r2)
/* 803706B0 0036D5F0  38 80 00 00 */	li r4, 0
/* 803706B4 0036D5F4  FC 40 F8 90 */	fmr f2, f31
/* 803706B8 0036D5F8  38 A0 00 00 */	li r5, 0
/* 803706BC 0036D5FC  4B DA 24 A9 */	bl "getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
/* 803706C0 0036D600  28 03 00 00 */	cmplwi r3, 0
/* 803706C4 0036D604  41 82 00 0C */	beq .L_803706D0
/* 803706C8 0036D608  38 60 00 01 */	li r3, 1
/* 803706CC 0036D60C  48 00 02 A8 */	b .L_80370974
.L_803706D0:
/* 803706D0 0036D610  FC 40 F8 90 */	fmr f2, f31
/* 803706D4 0036D614  C0 22 07 B0 */	lfs f1, lbl_8051EB10@sda21(r2)
/* 803706D8 0036D618  7F E3 FB 78 */	mr r3, r31
/* 803706DC 0036D61C  38 80 00 00 */	li r4, 0
/* 803706E0 0036D620  38 A0 00 00 */	li r5, 0
/* 803706E4 0036D624  4B DA 20 11 */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
/* 803706E8 0036D628  28 03 00 00 */	cmplwi r3, 0
/* 803706EC 0036D62C  41 82 00 0C */	beq .L_803706F8
/* 803706F0 0036D630  38 60 00 01 */	li r3, 1
/* 803706F4 0036D634  48 00 02 80 */	b .L_80370974
.L_803706F8:
/* 803706F8 0036D638  38 60 00 00 */	li r3, 0
/* 803706FC 0036D63C  48 00 02 78 */	b .L_80370974
.L_80370700:
/* 80370700 0036D640  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80370704 0036D644  28 03 00 00 */	cmplwi r3, 0
/* 80370708 0036D648  41 82 00 18 */	beq .L_80370720
/* 8037070C 0036D64C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80370710 0036D650  2C 00 00 04 */	cmpwi r0, 4
/* 80370714 0036D654  40 82 00 0C */	bne .L_80370720
/* 80370718 0036D658  38 60 00 01 */	li r3, 1
/* 8037071C 0036D65C  48 00 02 58 */	b .L_80370974
.L_80370720:
/* 80370720 0036D660  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 80370724 0036D664  7F C3 F3 78 */	mr r3, r30
/* 80370728 0036D668  C0 22 07 B0 */	lfs f1, lbl_8051EB10@sda21(r2)
/* 8037072C 0036D66C  38 80 00 00 */	li r4, 0
/* 80370730 0036D670  C3 E5 08 44 */	lfs f31, 0x844(r5)
/* 80370734 0036D674  38 A0 00 00 */	li r5, 0
/* 80370738 0036D678  FC 40 F8 90 */	fmr f2, f31
/* 8037073C 0036D67C  4B DA 24 29 */	bl "getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
/* 80370740 0036D680  28 03 00 00 */	cmplwi r3, 0
/* 80370744 0036D684  41 82 00 0C */	beq .L_80370750
/* 80370748 0036D688  38 60 00 01 */	li r3, 1
/* 8037074C 0036D68C  48 00 02 28 */	b .L_80370974
.L_80370750:
/* 80370750 0036D690  FC 40 F8 90 */	fmr f2, f31
/* 80370754 0036D694  C0 22 07 B0 */	lfs f1, lbl_8051EB10@sda21(r2)
/* 80370758 0036D698  7F C3 F3 78 */	mr r3, r30
/* 8037075C 0036D69C  38 80 00 00 */	li r4, 0
/* 80370760 0036D6A0  38 A0 00 00 */	li r5, 0
/* 80370764 0036D6A4  4B DA 1F 91 */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
/* 80370768 0036D6A8  28 03 00 00 */	cmplwi r3, 0
/* 8037076C 0036D6AC  41 82 00 0C */	beq .L_80370778
/* 80370770 0036D6B0  38 60 00 01 */	li r3, 1
/* 80370774 0036D6B4  48 00 02 00 */	b .L_80370974
.L_80370778:
/* 80370778 0036D6B8  38 60 00 00 */	li r3, 0
/* 8037077C 0036D6BC  48 00 01 F8 */	b .L_80370974
.L_80370780:
/* 80370780 0036D6C0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80370784 0036D6C4  28 03 00 00 */	cmplwi r3, 0
/* 80370788 0036D6C8  41 82 00 18 */	beq .L_803707A0
/* 8037078C 0036D6CC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80370790 0036D6D0  2C 00 00 04 */	cmpwi r0, 4
/* 80370794 0036D6D4  40 82 00 0C */	bne .L_803707A0
/* 80370798 0036D6D8  38 60 00 01 */	li r3, 1
/* 8037079C 0036D6DC  48 00 01 D8 */	b .L_80370974
.L_803707A0:
/* 803707A0 0036D6E0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 803707A4 0036D6E4  7F E3 FB 78 */	mr r3, r31
/* 803707A8 0036D6E8  C0 22 07 B0 */	lfs f1, lbl_8051EB10@sda21(r2)
/* 803707AC 0036D6EC  38 80 00 00 */	li r4, 0
/* 803707B0 0036D6F0  C3 E5 08 44 */	lfs f31, 0x844(r5)
/* 803707B4 0036D6F4  38 A0 00 00 */	li r5, 0
/* 803707B8 0036D6F8  FC 40 F8 90 */	fmr f2, f31
/* 803707BC 0036D6FC  4B DA 23 A9 */	bl "getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
/* 803707C0 0036D700  28 03 00 00 */	cmplwi r3, 0
/* 803707C4 0036D704  41 82 00 0C */	beq .L_803707D0
/* 803707C8 0036D708  38 60 00 01 */	li r3, 1
/* 803707CC 0036D70C  48 00 01 A8 */	b .L_80370974
.L_803707D0:
/* 803707D0 0036D710  FC 40 F8 90 */	fmr f2, f31
/* 803707D4 0036D714  C0 22 07 B0 */	lfs f1, lbl_8051EB10@sda21(r2)
/* 803707D8 0036D718  7F E3 FB 78 */	mr r3, r31
/* 803707DC 0036D71C  38 80 00 00 */	li r4, 0
/* 803707E0 0036D720  38 A0 00 00 */	li r5, 0
/* 803707E4 0036D724  4B DA 1F 11 */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
/* 803707E8 0036D728  28 03 00 00 */	cmplwi r3, 0
/* 803707EC 0036D72C  41 82 00 0C */	beq .L_803707F8
/* 803707F0 0036D730  38 60 00 01 */	li r3, 1
/* 803707F4 0036D734  48 00 01 80 */	b .L_80370974
.L_803707F8:
/* 803707F8 0036D738  38 60 00 00 */	li r3, 0
/* 803707FC 0036D73C  48 00 01 78 */	b .L_80370974
.L_80370800:
/* 80370800 0036D740  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80370804 0036D744  28 03 00 00 */	cmplwi r3, 0
/* 80370808 0036D748  41 82 00 18 */	beq .L_80370820
/* 8037080C 0036D74C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80370810 0036D750  2C 00 00 04 */	cmpwi r0, 4
/* 80370814 0036D754  40 82 00 0C */	bne .L_80370820
/* 80370818 0036D758  38 60 00 01 */	li r3, 1
/* 8037081C 0036D75C  48 00 01 58 */	b .L_80370974
.L_80370820:
/* 80370820 0036D760  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 80370824 0036D764  7F C3 F3 78 */	mr r3, r30
/* 80370828 0036D768  C0 22 07 B0 */	lfs f1, lbl_8051EB10@sda21(r2)
/* 8037082C 0036D76C  38 80 00 00 */	li r4, 0
/* 80370830 0036D770  C3 E5 08 44 */	lfs f31, 0x844(r5)
/* 80370834 0036D774  38 A0 00 00 */	li r5, 0
/* 80370838 0036D778  FC 40 F8 90 */	fmr f2, f31
/* 8037083C 0036D77C  4B DA 23 29 */	bl "getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
/* 80370840 0036D780  28 03 00 00 */	cmplwi r3, 0
/* 80370844 0036D784  41 82 00 0C */	beq .L_80370850
/* 80370848 0036D788  38 60 00 01 */	li r3, 1
/* 8037084C 0036D78C  48 00 01 28 */	b .L_80370974
.L_80370850:
/* 80370850 0036D790  FC 40 F8 90 */	fmr f2, f31
/* 80370854 0036D794  C0 22 07 B0 */	lfs f1, lbl_8051EB10@sda21(r2)
/* 80370858 0036D798  7F C3 F3 78 */	mr r3, r30
/* 8037085C 0036D79C  38 80 00 00 */	li r4, 0
/* 80370860 0036D7A0  38 A0 00 00 */	li r5, 0
/* 80370864 0036D7A4  4B DA 1E 91 */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
/* 80370868 0036D7A8  28 03 00 00 */	cmplwi r3, 0
/* 8037086C 0036D7AC  41 82 00 0C */	beq .L_80370878
/* 80370870 0036D7B0  38 60 00 01 */	li r3, 1
/* 80370874 0036D7B4  48 00 01 00 */	b .L_80370974
.L_80370878:
/* 80370878 0036D7B8  38 60 00 00 */	li r3, 0
/* 8037087C 0036D7BC  48 00 00 F8 */	b .L_80370974
.L_80370880:
/* 80370880 0036D7C0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80370884 0036D7C4  28 03 00 00 */	cmplwi r3, 0
/* 80370888 0036D7C8  41 82 00 18 */	beq .L_803708A0
/* 8037088C 0036D7CC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80370890 0036D7D0  2C 00 00 04 */	cmpwi r0, 4
/* 80370894 0036D7D4  40 82 00 0C */	bne .L_803708A0
/* 80370898 0036D7D8  38 60 00 01 */	li r3, 1
/* 8037089C 0036D7DC  48 00 00 D8 */	b .L_80370974
.L_803708A0:
/* 803708A0 0036D7E0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 803708A4 0036D7E4  7F E3 FB 78 */	mr r3, r31
/* 803708A8 0036D7E8  C0 22 07 B0 */	lfs f1, lbl_8051EB10@sda21(r2)
/* 803708AC 0036D7EC  38 80 00 00 */	li r4, 0
/* 803708B0 0036D7F0  C3 E5 08 44 */	lfs f31, 0x844(r5)
/* 803708B4 0036D7F4  38 A0 00 00 */	li r5, 0
/* 803708B8 0036D7F8  FC 40 F8 90 */	fmr f2, f31
/* 803708BC 0036D7FC  4B DA 22 A9 */	bl "getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
/* 803708C0 0036D800  28 03 00 00 */	cmplwi r3, 0
/* 803708C4 0036D804  41 82 00 0C */	beq .L_803708D0
/* 803708C8 0036D808  38 60 00 01 */	li r3, 1
/* 803708CC 0036D80C  48 00 00 A8 */	b .L_80370974
.L_803708D0:
/* 803708D0 0036D810  FC 40 F8 90 */	fmr f2, f31
/* 803708D4 0036D814  C0 22 07 B0 */	lfs f1, lbl_8051EB10@sda21(r2)
/* 803708D8 0036D818  7F E3 FB 78 */	mr r3, r31
/* 803708DC 0036D81C  38 80 00 00 */	li r4, 0
/* 803708E0 0036D820  38 A0 00 00 */	li r5, 0
/* 803708E4 0036D824  4B DA 1E 11 */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
/* 803708E8 0036D828  28 03 00 00 */	cmplwi r3, 0
/* 803708EC 0036D82C  41 82 00 0C */	beq .L_803708F8
/* 803708F0 0036D830  38 60 00 01 */	li r3, 1
/* 803708F4 0036D834  48 00 00 80 */	b .L_80370974
.L_803708F8:
/* 803708F8 0036D838  38 60 00 00 */	li r3, 0
/* 803708FC 0036D83C  48 00 00 78 */	b .L_80370974
.L_80370900:
/* 80370900 0036D840  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80370904 0036D844  28 03 00 00 */	cmplwi r3, 0
/* 80370908 0036D848  41 82 00 18 */	beq .L_80370920
/* 8037090C 0036D84C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80370910 0036D850  2C 00 00 04 */	cmpwi r0, 4
/* 80370914 0036D854  40 82 00 0C */	bne .L_80370920
/* 80370918 0036D858  38 60 00 01 */	li r3, 1
/* 8037091C 0036D85C  48 00 00 58 */	b .L_80370974
.L_80370920:
/* 80370920 0036D860  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 80370924 0036D864  7F C3 F3 78 */	mr r3, r30
/* 80370928 0036D868  C0 22 07 B0 */	lfs f1, lbl_8051EB10@sda21(r2)
/* 8037092C 0036D86C  38 80 00 00 */	li r4, 0
/* 80370930 0036D870  C3 E5 08 44 */	lfs f31, 0x844(r5)
/* 80370934 0036D874  38 A0 00 00 */	li r5, 0
/* 80370938 0036D878  FC 40 F8 90 */	fmr f2, f31
/* 8037093C 0036D87C  4B DA 22 29 */	bl "getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
/* 80370940 0036D880  28 03 00 00 */	cmplwi r3, 0
/* 80370944 0036D884  41 82 00 0C */	beq .L_80370950
/* 80370948 0036D888  38 60 00 01 */	li r3, 1
/* 8037094C 0036D88C  48 00 00 28 */	b .L_80370974
.L_80370950:
/* 80370950 0036D890  FC 40 F8 90 */	fmr f2, f31
/* 80370954 0036D894  C0 22 07 B0 */	lfs f1, lbl_8051EB10@sda21(r2)
/* 80370958 0036D898  7F C3 F3 78 */	mr r3, r30
/* 8037095C 0036D89C  38 80 00 00 */	li r4, 0
/* 80370960 0036D8A0  38 A0 00 00 */	li r5, 0
/* 80370964 0036D8A4  4B DA 1D 91 */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
/* 80370968 0036D8A8  7C 03 00 D0 */	neg r0, r3
/* 8037096C 0036D8AC  7C 00 1B 78 */	or r0, r0, r3
/* 80370970 0036D8B0  54 03 0F FE */	srwi r3, r0, 0x1f
.L_80370974:
/* 80370974 0036D8B4  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80370978 0036D8B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037097C 0036D8BC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80370980 0036D8C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80370984 0036D8C4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80370988 0036D8C8  7C 08 03 A6 */	mtlr r0
/* 8037098C 0036D8CC  38 21 00 20 */	addi r1, r1, 0x20
/* 80370990 0036D8D0  4E 80 00 20 */	blr 

.global "__cl__7Parm<f>Fv"
"__cl__7Parm<f>Fv":
/* 80370994 0036D8D4  38 63 00 18 */	addi r3, r3, 0x18
/* 80370998 0036D8D8  4E 80 00 20 */	blr 

.global isZukanMode__Q24Game10GameSystemFv
isZukanMode__Q24Game10GameSystemFv:
/* 8037099C 0036D8DC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 803709A0 0036D8E0  20 00 00 04 */	subfic r0, r0, 4
/* 803709A4 0036D8E4  7C 00 00 34 */	cntlzw r0, r0
/* 803709A8 0036D8E8  54 03 D9 7E */	srwi r3, r0, 5
/* 803709AC 0036D8EC  4E 80 00 20 */	blr 

.global createFellow__Q34Game11TamagoMushi3ObjFv
createFellow__Q34Game11TamagoMushi3ObjFv:
/* 803709B0 0036D8F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803709B4 0036D8F4  7C 08 02 A6 */	mflr r0
/* 803709B8 0036D8F8  7C 64 1B 78 */	mr r4, r3
/* 803709BC 0036D8FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803709C0 0036D900  80 03 02 F4 */	lwz r0, 0x2f4(r3)
/* 803709C4 0036D904  28 00 00 00 */	cmplwi r0, 0
/* 803709C8 0036D908  41 82 00 0C */	beq .L_803709D4
/* 803709CC 0036D90C  7C 00 20 40 */	cmplw r0, r4
/* 803709D0 0036D910  40 82 00 14 */	bne .L_803709E4
.L_803709D4:
/* 803709D4 0036D914  80 64 01 80 */	lwz r3, 0x180(r4)
/* 803709D8 0036D918  38 A0 00 0A */	li r5, 0xa
/* 803709DC 0036D91C  38 C0 00 00 */	li r6, 0
/* 803709E0 0036D920  4B FF D5 F9 */	bl createGroup__Q34Game11TamagoMushi3MgrFPQ34Game11TamagoMushi3Objib
.L_803709E4:
/* 803709E4 0036D924  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803709E8 0036D928  7C 08 03 A6 */	mtlr r0
/* 803709EC 0036D92C  38 21 00 10 */	addi r1, r1, 0x10
/* 803709F0 0036D930  4E 80 00 20 */	blr 

.global ballMove__Q34Game11TamagoMushi3ObjFv
ballMove__Q34Game11TamagoMushi3ObjFv:
/* 803709F4 0036D934  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803709F8 0036D938  7C 08 02 A6 */	mflr r0
/* 803709FC 0036D93C  C0 42 07 7C */	lfs f2, lbl_8051EADC@sda21(r2)
/* 80370A00 0036D940  90 01 00 14 */	stw r0, 0x14(r1)
/* 80370A04 0036D944  C0 02 07 8C */	lfs f0, lbl_8051EAEC@sda21(r2)
/* 80370A08 0036D948  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80370A0C 0036D94C  7C 7F 1B 78 */	mr r31, r3
/* 80370A10 0036D950  C0 23 01 CC */	lfs f1, 0x1cc(r3)
/* 80370A14 0036D954  EC 22 00 72 */	fmuls f1, f2, f1
/* 80370A18 0036D958  EC 01 00 24 */	fdivs f0, f1, f0
/* 80370A1C 0036D95C  FC 00 02 10 */	fabs f0, f0
/* 80370A20 0036D960  FC 00 00 18 */	frsp f0, f0
/* 80370A24 0036D964  FC 80 00 90 */	fmr f4, f0
/* 80370A28 0036D968  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80370A2C 0036D96C  40 81 00 08 */	ble .L_80370A34
/* 80370A30 0036D970  FC 80 10 90 */	fmr f4, f2
.L_80370A34:
/* 80370A34 0036D974  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80370A38 0036D978  7F E3 FB 78 */	mr r3, r31
/* 80370A3C 0036D97C  C0 62 07 58 */	lfs f3, lbl_8051EAB8@sda21(r2)
/* 80370A40 0036D980  38 9F 02 E0 */	addi r4, r31, 0x2e0
/* 80370A44 0036D984  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 80370A48 0036D988  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 80370A4C 0036D98C  C0 05 03 34 */	lfs f0, 0x334(r5)
/* 80370A50 0036D990  EC 23 00 72 */	fmuls f1, f3, f1
/* 80370A54 0036D994  EC 42 01 32 */	fmuls f2, f2, f4
/* 80370A58 0036D998  EC 60 01 32 */	fmuls f3, f0, f4
/* 80370A5C 0036D99C  4B DA 4B 81 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 80370A60 0036D9A0  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 80370A64 0036D9A4  C0 22 07 B4 */	lfs f1, lbl_8051EB14@sda21(r2)
/* 80370A68 0036D9A8  EC 00 00 72 */	fmuls f0, f0, f1
/* 80370A6C 0036D9AC  D0 1F 01 A4 */	stfs f0, 0x1a4(r31)
/* 80370A70 0036D9B0  C0 1F 01 AC */	lfs f0, 0x1ac(r31)
/* 80370A74 0036D9B4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80370A78 0036D9B8  D0 1F 01 AC */	stfs f0, 0x1ac(r31)
/* 80370A7C 0036D9BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80370A80 0036D9C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80370A84 0036D9C4  7C 08 03 A6 */	mtlr r0
/* 80370A88 0036D9C8  38 21 00 10 */	addi r1, r1, 0x10
/* 80370A8C 0036D9CC  4E 80 00 20 */	blr 

.global createHideEffect__Q34Game11TamagoMushi3ObjFv
createHideEffect__Q34Game11TamagoMushi3ObjFv:
/* 80370A90 0036D9D0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80370A94 0036D9D4  7C 08 02 A6 */	mflr r0
/* 80370A98 0036D9D8  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80370A9C 0036D9DC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80370AA0 0036D9E0  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 80370AA4 0036D9E4  90 01 00 08 */	stw r0, 8(r1)
/* 80370AA8 0036D9E8  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 80370AAC 0036D9EC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80370AB0 0036D9F0  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 80370AB4 0036D9F4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80370AB8 0036D9F8  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 80370ABC 0036D9FC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80370AC0 0036DA00  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80370AC4 0036DA04  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80370AC8 0036DA08  48 0B 8D D9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80370ACC 0036DA0C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80370AD0 0036DA10  38 C0 00 00 */	li r6, 0
/* 80370AD4 0036DA14  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80370AD8 0036DA18  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 80370ADC 0036DA1C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80370AE0 0036DA20  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 80370AE4 0036DA24  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 80370AE8 0036DA28  3C 80 80 4C */	lis r4, __vt__Q23efx9TUjinkoHd@ha
/* 80370AEC 0036DA2C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80370AF0 0036DA30  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 80370AF4 0036DA34  38 E0 01 D1 */	li r7, 0x1d1
/* 80370AF8 0036DA38  38 A0 01 D2 */	li r5, 0x1d2
/* 80370AFC 0036DA3C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80370B00 0036DA40  38 04 29 20 */	addi r0, r4, __vt__Q23efx9TUjinkoHd@l
/* 80370B04 0036DA44  38 81 00 08 */	addi r4, r1, 8
/* 80370B08 0036DA48  90 61 00 28 */	stw r3, 0x28(r1)
/* 80370B0C 0036DA4C  38 61 00 18 */	addi r3, r1, 0x18
/* 80370B10 0036DA50  B0 E1 00 1C */	sth r7, 0x1c(r1)
/* 80370B14 0036DA54  B0 A1 00 1E */	sth r5, 0x1e(r1)
/* 80370B18 0036DA58  90 C1 00 20 */	stw r6, 0x20(r1)
/* 80370B1C 0036DA5C  90 C1 00 24 */	stw r6, 0x24(r1)
/* 80370B20 0036DA60  90 01 00 18 */	stw r0, 0x18(r1)
/* 80370B24 0036DA64  48 03 E8 75 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 80370B28 0036DA68  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80370B2C 0036DA6C  7C 08 03 A6 */	mtlr r0
/* 80370B30 0036DA70  38 21 00 30 */	addi r1, r1, 0x30
/* 80370B34 0036DA74  4E 80 00 20 */	blr 

.global createAppearEffect__Q34Game11TamagoMushi3ObjFv
createAppearEffect__Q34Game11TamagoMushi3ObjFv:
/* 80370B38 0036DA78  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80370B3C 0036DA7C  7C 08 02 A6 */	mflr r0
/* 80370B40 0036DA80  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80370B44 0036DA84  90 01 00 34 */	stw r0, 0x34(r1)
/* 80370B48 0036DA88  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 80370B4C 0036DA8C  90 01 00 08 */	stw r0, 8(r1)
/* 80370B50 0036DA90  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 80370B54 0036DA94  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80370B58 0036DA98  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 80370B5C 0036DA9C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80370B60 0036DAA0  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 80370B64 0036DAA4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80370B68 0036DAA8  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80370B6C 0036DAAC  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80370B70 0036DAB0  48 0B 8D 31 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80370B74 0036DAB4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80370B78 0036DAB8  38 C0 00 00 */	li r6, 0
/* 80370B7C 0036DABC  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80370B80 0036DAC0  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 80370B84 0036DAC4  90 01 00 18 */	stw r0, 0x18(r1)
/* 80370B88 0036DAC8  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 80370B8C 0036DACC  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 80370B90 0036DAD0  3C 80 80 4E */	lis r4, __vt__Q23efx9TTamagoAp@ha
/* 80370B94 0036DAD4  90 01 00 18 */	stw r0, 0x18(r1)
/* 80370B98 0036DAD8  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 80370B9C 0036DADC  38 E0 02 3F */	li r7, 0x23f
/* 80370BA0 0036DAE0  38 A0 02 40 */	li r5, 0x240
/* 80370BA4 0036DAE4  90 01 00 18 */	stw r0, 0x18(r1)
/* 80370BA8 0036DAE8  38 04 35 E8 */	addi r0, r4, __vt__Q23efx9TTamagoAp@l
/* 80370BAC 0036DAEC  38 81 00 08 */	addi r4, r1, 8
/* 80370BB0 0036DAF0  90 61 00 28 */	stw r3, 0x28(r1)
/* 80370BB4 0036DAF4  38 61 00 18 */	addi r3, r1, 0x18
/* 80370BB8 0036DAF8  B0 E1 00 1C */	sth r7, 0x1c(r1)
/* 80370BBC 0036DAFC  B0 A1 00 1E */	sth r5, 0x1e(r1)
/* 80370BC0 0036DB00  90 C1 00 20 */	stw r6, 0x20(r1)
/* 80370BC4 0036DB04  90 C1 00 24 */	stw r6, 0x24(r1)
/* 80370BC8 0036DB08  90 01 00 18 */	stw r0, 0x18(r1)
/* 80370BCC 0036DB0C  48 03 E7 CD */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 80370BD0 0036DB10  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80370BD4 0036DB14  7C 08 03 A6 */	mtlr r0
/* 80370BD8 0036DB18  38 21 00 30 */	addi r1, r1, 0x30
/* 80370BDC 0036DB1C  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game11TamagoMushi3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game11TamagoMushi3ObjFPQ24Game21EnemyInitialParamBase:
/* 80370BE0 0036DB20  4E 80 00 20 */	blr 

.global isLivingThing__Q34Game11TamagoMushi3ObjFv
isLivingThing__Q34Game11TamagoMushi3ObjFv:
/* 80370BE4 0036DB24  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80370BE8 0036DB28  88 03 09 22 */	lbz r0, 0x922(r3)
/* 80370BEC 0036DB2C  7C 00 00 34 */	cntlzw r0, r0
/* 80370BF0 0036DB30  54 03 D9 7E */	srwi r3, r0, 5
/* 80370BF4 0036DB34  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q34Game11TamagoMushi3ObjFv
getDownSmokeScale__Q34Game11TamagoMushi3ObjFv:
/* 80370BF8 0036DB38  C0 22 07 B8 */	lfs f1, lbl_8051EB18@sda21(r2)
/* 80370BFC 0036DB3C  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game11TamagoMushi3ObjFv
getEnemyTypeID__Q34Game11TamagoMushi3ObjFv:
/* 80370C00 0036DB40  38 60 00 44 */	li r3, 0x44
/* 80370C04 0036DB44  4E 80 00 20 */	blr 
