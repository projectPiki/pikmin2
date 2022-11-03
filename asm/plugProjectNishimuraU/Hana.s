.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_Hana_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804D53A8
lbl_804D53A8:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q24Game21ConditionNotStickSlot
__vt__Q24Game21ConditionNotStickSlot:
	.4byte 0
	.4byte 0
	.4byte satisfy__Q24Game21ConditionNotStickSlotFPQ24Game4Piki
.global __vt__Q23efx9THanaMiss
__vt__Q23efx9THanaMiss:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.global __vt__Q34Game4Hana3Obj
__vt__Q34Game4Hana3Obj:
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
	.4byte onInit__Q34Game4Hana3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game4Hana3ObjFR8Graphics
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
	.4byte isUnderground__Q34Game4Hana3ObjFv
	.4byte isLivingThing__Q24Game8CreatureFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
	.4byte collisionCallback__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game4Hana3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game4Hana3ObjFv
	.4byte "birth__Q34Game10ChappyBase3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game10ChappyBase3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game10ChappyBase3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game10ChappyBase3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game4Hana3ObjFv
	.4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q34Game10ChappyBase3ObjFv
	.4byte setParameters__Q24Game9EnemyBaseFv
	.4byte initMouthSlots__Q34Game4Hana3ObjFv
	.4byte initWalkSmokeEffect__Q34Game4Hana3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game4Hana3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game4Hana3ObjFv
	.4byte getMouthSlots__Q34Game10ChappyBase3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game10ChappyBase3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte doStartStoneState__Q34Game10ChappyBase3ObjFv
	.4byte doFinishStoneState__Q34Game10ChappyBase3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game10ChappyBase3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game4Hana3ObjFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game10ChappyBase3ObjFPQ34Game10ChappyBase3FSM
	.4byte isWakeup__Q34Game4Hana3ObjFv
	.4byte setAnimationSpeed__Q34Game4Hana3ObjFf
	.4byte flickAttackFail__Q34Game4Hana3ObjFv
	.4byte flickStatePikmin__Q34Game4Hana3ObjFv
	.4byte flickAttackBomb__Q34Game4Hana3ObjFv
	.4byte eatAttackPikmin__Q34Game4Hana3ObjFv
	.4byte resetUnderGround__Q34Game4Hana3ObjFv
	.4byte setUnderGround__Q34Game4Hana3ObjFv
	.4byte createEffect__Q34Game4Hana3ObjFv
	.4byte setupEffect__Q34Game4Hana3ObjFv
	.4byte startSleepEffect__Q34Game4Hana3ObjFv
	.4byte finishSleepEffect__Q34Game4Hana3ObjFv
	.4byte createFlickEffect__Q34Game10ChappyBase3ObjFv
	.4byte createSmokeEffect__Q34Game4Hana3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@744@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@744@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@744@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@744@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@744@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@744@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515E00
lbl_80515E00:
	.skip 0x4
.global lbl_80515E04
lbl_80515E04:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051D1A0
lbl_8051D1A0:
	.4byte 0x6B6F7369
	.4byte 0x00000000
.global lbl_8051D1A8
lbl_8051D1A8:
	.4byte 0x00000000
.global lbl_8051D1AC
lbl_8051D1AC:
	.float 1.0
.global lbl_8051D1B0
lbl_8051D1B0:
	.float 0.1
.global lbl_8051D1B4
lbl_8051D1B4:
	.4byte 0x41200000
.global lbl_8051D1B8
lbl_8051D1B8:
	.4byte 0x42960000
.global lbl_8051D1BC
lbl_8051D1BC:
	.4byte 0x42480000
.global lbl_8051D1C0
lbl_8051D1C0:
	.4byte 0x41C80000
.global lbl_8051D1C4
lbl_8051D1C4:
	.4byte 0x6B616D75
	.4byte 0x31000000
.global lbl_8051D1CC
lbl_8051D1CC:
	.4byte 0x6B616D75
	.4byte 0x32000000
.global lbl_8051D1D4
lbl_8051D1D4:
	.4byte 0x6B616D75
	.4byte 0x33000000
.global lbl_8051D1DC
lbl_8051D1DC:
	.4byte 0x41F00000
.global lbl_8051D1E0
lbl_8051D1E0:
	.4byte 0xC47A0000
.global lbl_8051D1E4
lbl_8051D1E4:
	.4byte 0x6B757469
	.4byte 0x32000000
.global lbl_8051D1EC
lbl_8051D1EC:
	.4byte 0x42700000
.global lbl_8051D1F0
lbl_8051D1F0:
	.4byte 0x43A2F983
.global lbl_8051D1F4
lbl_8051D1F4:
	.4byte 0xC3A2F983
.global lbl_8051D1F8
lbl_8051D1F8:
	.4byte 0x3F99999A
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game4Hana3ObjFv
__ct__Q34Game4Hana3ObjFv:
/* 802F3138 002F0078  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F313C 002F007C  7C 08 02 A6 */	mflr r0
/* 802F3140 002F0080  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F3144 002F0084  7C 80 07 35 */	extsh. r0, r4
/* 802F3148 002F0088  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F314C 002F008C  7C 7F 1B 78 */	mr r31, r3
/* 802F3150 002F0090  41 82 00 24 */	beq .L_802F3174
/* 802F3154 002F0094  38 1F 02 E8 */	addi r0, r31, 0x2e8
/* 802F3158 002F0098  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802F315C 002F009C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802F3160 002F00A0  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802F3164 002F00A4  38 00 00 00 */	li r0, 0
/* 802F3168 002F00A8  90 7F 02 E8 */	stw r3, 0x2e8(r31)
/* 802F316C 002F00AC  90 1F 02 EC */	stw r0, 0x2ec(r31)
/* 802F3170 002F00B0  90 1F 02 F0 */	stw r0, 0x2f0(r31)
.L_802F3174:
/* 802F3174 002F00B4  7F E3 FB 78 */	mr r3, r31
/* 802F3178 002F00B8  38 80 00 00 */	li r4, 0
/* 802F317C 002F00BC  4B E3 77 D5 */	bl __ct__Q34Game10ChappyBase3ObjFv
/* 802F3180 002F00C0  3C 60 80 4D */	lis r3, __vt__Q34Game4Hana3Obj@ha
/* 802F3184 002F00C4  38 1F 02 E8 */	addi r0, r31, 0x2e8
/* 802F3188 002F00C8  38 A3 53 D4 */	addi r5, r3, __vt__Q34Game4Hana3Obj@l
/* 802F318C 002F00CC  7F E3 FB 78 */	mr r3, r31
/* 802F3190 002F00D0  90 BF 00 00 */	stw r5, 0(r31)
/* 802F3194 002F00D4  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802F3198 002F00D8  38 A5 03 34 */	addi r5, r5, 0x334
/* 802F319C 002F00DC  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802F31A0 002F00E0  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802F31A4 002F00E4  90 A4 00 00 */	stw r5, 0(r4)
/* 802F31A8 002F00E8  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802F31AC 002F00EC  7C 04 00 50 */	subf r0, r4, r0
/* 802F31B0 002F00F0  90 04 00 0C */	stw r0, 0xc(r4)
/* 802F31B4 002F00F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F31B8 002F00F8  81 8C 03 1C */	lwz r12, 0x31c(r12)
/* 802F31BC 002F00FC  7D 89 03 A6 */	mtctr r12
/* 802F31C0 002F0100  4E 80 04 21 */	bctrl 
/* 802F31C4 002F0104  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F31C8 002F0108  7F E3 FB 78 */	mr r3, r31
/* 802F31CC 002F010C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F31D0 002F0110  7C 08 03 A6 */	mtlr r0
/* 802F31D4 002F0114  38 21 00 10 */	addi r1, r1, 0x10
/* 802F31D8 002F0118  4E 80 00 20 */	blr 

.global createEffect__Q34Game4Hana3ObjFv
createEffect__Q34Game4Hana3ObjFv:
/* 802F31DC 002F011C  4E 80 00 20 */	blr 

.global onInit__Q34Game4Hana3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game4Hana3ObjFPQ24Game15CreatureInitArg:
/* 802F31E0 002F0120  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F31E4 002F0124  7C 08 02 A6 */	mflr r0
/* 802F31E8 002F0128  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F31EC 002F012C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F31F0 002F0130  7C 7F 1B 78 */	mr r31, r3
/* 802F31F4 002F0134  4B E3 79 01 */	bl onInit__Q34Game10ChappyBase3ObjFPQ24Game15CreatureInitArg
/* 802F31F8 002F0138  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802F31FC 002F013C  38 82 EE 40 */	addi r4, r2, lbl_8051D1A0@sda21
/* 802F3200 002F0140  48 14 BD E5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802F3204 002F0144  90 7F 02 C8 */	stw r3, 0x2c8(r31)
/* 802F3208 002F0148  7F E3 FB 78 */	mr r3, r31
/* 802F320C 002F014C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3210 002F0150  81 8C 03 18 */	lwz r12, 0x318(r12)
/* 802F3214 002F0154  7D 89 03 A6 */	mtctr r12
/* 802F3218 002F0158  4E 80 04 21 */	bctrl 
/* 802F321C 002F015C  7F E3 FB 78 */	mr r3, r31
/* 802F3220 002F0160  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3224 002F0164  81 8C 03 20 */	lwz r12, 0x320(r12)
/* 802F3228 002F0168  7D 89 03 A6 */	mtctr r12
/* 802F322C 002F016C  4E 80 04 21 */	bctrl 
/* 802F3230 002F0170  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F3234 002F0174  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F3238 002F0178  7C 08 03 A6 */	mtlr r0
/* 802F323C 002F017C  38 21 00 10 */	addi r1, r1, 0x10
/* 802F3240 002F0180  4E 80 00 20 */	blr 

.global setupEffect__Q34Game4Hana3ObjFv
setupEffect__Q34Game4Hana3ObjFv:
/* 802F3244 002F0184  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game4Hana3ObjFR8Graphics
doDirectDraw__Q34Game4Hana3ObjFR8Graphics:
/* 802F3248 002F0188  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game4Hana3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game4Hana3ObjFRQ24Game11ShadowParam:
/* 802F324C 002F018C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F3250 002F0190  7C 08 02 A6 */	mflr r0
/* 802F3254 002F0194  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F3258 002F0198  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F325C 002F019C  7C 9F 23 78 */	mr r31, r4
/* 802F3260 002F01A0  93 C1 00 08 */	stw r30, 8(r1)
/* 802F3264 002F01A4  7C 7E 1B 78 */	mr r30, r3
/* 802F3268 002F01A8  4B E1 41 8D */	bl getStateID__Q24Game9EnemyBaseFv
/* 802F326C 002F01AC  2C 03 00 07 */	cmpwi r3, 7
/* 802F3270 002F01B0  40 82 00 40 */	bne .L_802F32B0
/* 802F3274 002F01B4  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 802F3278 002F01B8  C0 42 EE 48 */	lfs f2, lbl_8051D1A8@sda21(r2)
/* 802F327C 002F01BC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802F3280 002F01C0  C0 22 EE 4C */	lfs f1, lbl_8051D1AC@sda21(r2)
/* 802F3284 002F01C4  C0 7E 01 90 */	lfs f3, 0x190(r30)
/* 802F3288 002F01C8  C0 02 EE 50 */	lfs f0, lbl_8051D1B0@sda21(r2)
/* 802F328C 002F01CC  D0 7F 00 04 */	stfs f3, 4(r31)
/* 802F3290 002F01D0  C0 7E 01 94 */	lfs f3, 0x194(r30)
/* 802F3294 002F01D4  D0 7F 00 08 */	stfs f3, 8(r31)
/* 802F3298 002F01D8  D0 5F 00 0C */	stfs f2, 0xc(r31)
/* 802F329C 002F01DC  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 802F32A0 002F01E0  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 802F32A4 002F01E4  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802F32A8 002F01E8  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802F32AC 002F01EC  48 00 00 70 */	b .L_802F331C
.L_802F32B0:
/* 802F32B0 002F01F0  80 7E 02 C8 */	lwz r3, 0x2c8(r30)
/* 802F32B4 002F01F4  48 13 65 ED */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802F32B8 002F01F8  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 802F32BC 002F01FC  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 802F32C0 002F0200  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802F32C4 002F0204  C0 62 EE 54 */	lfs f3, lbl_8051D1B4@sda21(r2)
/* 802F32C8 002F0208  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802F32CC 002F020C  C0 22 EE 48 */	lfs f1, lbl_8051D1A8@sda21(r2)
/* 802F32D0 002F0210  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802F32D4 002F0214  C0 02 EE 4C */	lfs f0, lbl_8051D1AC@sda21(r2)
/* 802F32D8 002F0218  D0 9F 00 08 */	stfs f4, 8(r31)
/* 802F32DC 002F021C  C0 5E 01 90 */	lfs f2, 0x190(r30)
/* 802F32E0 002F0220  EC 43 10 2A */	fadds f2, f3, f2
/* 802F32E4 002F0224  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802F32E8 002F0228  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802F32EC 002F022C  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802F32F0 002F0230  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802F32F4 002F0234  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 802F32F8 002F0238  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802F32FC 002F023C  41 82 00 10 */	beq .L_802F330C
/* 802F3300 002F0240  C0 02 EE 58 */	lfs f0, lbl_8051D1B8@sda21(r2)
/* 802F3304 002F0244  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802F3308 002F0248  48 00 00 0C */	b .L_802F3314
.L_802F330C:
/* 802F330C 002F024C  C0 02 EE 5C */	lfs f0, lbl_8051D1BC@sda21(r2)
/* 802F3310 002F0250  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802F3314:
/* 802F3314 002F0254  C0 02 EE 60 */	lfs f0, lbl_8051D1C0@sda21(r2)
/* 802F3318 002F0258  D0 1F 00 1C */	stfs f0, 0x1c(r31)
.L_802F331C:
/* 802F331C 002F025C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F3320 002F0260  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F3324 002F0264  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F3328 002F0268  7C 08 03 A6 */	mtlr r0
/* 802F332C 002F026C  38 21 00 10 */	addi r1, r1, 0x10
/* 802F3330 002F0270  4E 80 00 20 */	blr 

.global initMouthSlots__Q34Game4Hana3ObjFv
initMouthSlots__Q34Game4Hana3ObjFv:
/* 802F3334 002F0274  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F3338 002F0278  7C 08 02 A6 */	mflr r0
/* 802F333C 002F027C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F3340 002F0280  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802F3344 002F0284  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802F3348 002F0288  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F334C 002F028C  93 C1 00 08 */	stw r30, 8(r1)
/* 802F3350 002F0290  7C 7E 1B 78 */	mr r30, r3
/* 802F3354 002F0294  38 80 00 03 */	li r4, 3
/* 802F3358 002F0298  38 7E 02 C0 */	addi r3, r30, 0x2c0
/* 802F335C 002F029C  4B E4 51 FD */	bl alloc__10MouthSlotsFi
/* 802F3360 002F02A0  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 802F3364 002F02A4  38 7E 02 C0 */	addi r3, r30, 0x2c0
/* 802F3368 002F02A8  38 80 00 00 */	li r4, 0
/* 802F336C 002F02AC  38 C2 EE 64 */	addi r6, r2, lbl_8051D1C4@sda21
/* 802F3370 002F02B0  4B E4 53 21 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802F3374 002F02B4  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 802F3378 002F02B8  38 7E 02 C0 */	addi r3, r30, 0x2c0
/* 802F337C 002F02BC  38 80 00 01 */	li r4, 1
/* 802F3380 002F02C0  38 C2 EE 6C */	addi r6, r2, lbl_8051D1CC@sda21
/* 802F3384 002F02C4  4B E4 53 0D */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802F3388 002F02C8  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 802F338C 002F02CC  38 7E 02 C0 */	addi r3, r30, 0x2c0
/* 802F3390 002F02D0  38 80 00 02 */	li r4, 2
/* 802F3394 002F02D4  38 C2 EE 74 */	addi r6, r2, lbl_8051D1D4@sda21
/* 802F3398 002F02D8  4B E4 52 F9 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 802F339C 002F02DC  C3 E2 EE 7C */	lfs f31, lbl_8051D1DC@sda21(r2)
/* 802F33A0 002F02E0  3B E0 00 00 */	li r31, 0
/* 802F33A4 002F02E4  48 00 00 18 */	b .L_802F33BC
.L_802F33A8:
/* 802F33A8 002F02E8  7F E4 FB 78 */	mr r4, r31
/* 802F33AC 002F02EC  38 7E 02 C0 */	addi r3, r30, 0x2c0
/* 802F33B0 002F02F0  4B E4 53 C9 */	bl getSlot__10MouthSlotsFi
/* 802F33B4 002F02F4  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 802F33B8 002F02F8  3B FF 00 01 */	addi r31, r31, 1
.L_802F33BC:
/* 802F33BC 002F02FC  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 802F33C0 002F0300  7C 1F 00 00 */	cmpw r31, r0
/* 802F33C4 002F0304  41 80 FF E4 */	blt .L_802F33A8
/* 802F33C8 002F0308  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802F33CC 002F030C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F33D0 002F0310  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802F33D4 002F0314  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F33D8 002F0318  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F33DC 002F031C  7C 08 03 A6 */	mtlr r0
/* 802F33E0 002F0320  38 21 00 20 */	addi r1, r1, 0x20
/* 802F33E4 002F0324  4E 80 00 20 */	blr 

.global isWakeup__Q34Game4Hana3ObjFv
isWakeup__Q34Game4Hana3ObjFv:
/* 802F33E8 002F0328  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F33EC 002F032C  7C 08 02 A6 */	mflr r0
/* 802F33F0 002F0330  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F33F4 002F0334  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802F33F8 002F0338  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802F33FC 002F033C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F3400 002F0340  7C 7F 1B 78 */	mr r31, r3
/* 802F3404 002F0344  38 80 00 00 */	li r4, 0
/* 802F3408 002F0348  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802F340C 002F034C  C3 E5 03 AC */	lfs f31, 0x3ac(r5)
/* 802F3410 002F0350  FC 20 F8 90 */	fmr f1, f31
/* 802F3414 002F0354  4B E2 16 AD */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 802F3418 002F0358  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F341C 002F035C  41 82 00 0C */	beq .L_802F3428
/* 802F3420 002F0360  38 60 00 01 */	li r3, 1
/* 802F3424 002F0364  48 00 00 28 */	b .L_802F344C
.L_802F3428:
/* 802F3428 002F0368  FC 20 F8 90 */	fmr f1, f31
/* 802F342C 002F036C  7F E3 FB 78 */	mr r3, r31
/* 802F3430 002F0370  38 80 00 00 */	li r4, 0
/* 802F3434 002F0374  4B E2 13 01 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 802F3438 002F0378  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F343C 002F037C  41 82 00 0C */	beq .L_802F3448
/* 802F3440 002F0380  38 60 00 01 */	li r3, 1
/* 802F3444 002F0384  48 00 00 08 */	b .L_802F344C
.L_802F3448:
/* 802F3448 002F0388  38 60 00 00 */	li r3, 0
.L_802F344C:
/* 802F344C 002F038C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802F3450 002F0390  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F3454 002F0394  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802F3458 002F0398  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F345C 002F039C  7C 08 03 A6 */	mtlr r0
/* 802F3460 002F03A0  38 21 00 20 */	addi r1, r1, 0x20
/* 802F3464 002F03A4  4E 80 00 20 */	blr 

.global flickStatePikmin__Q34Game4Hana3ObjFv
flickStatePikmin__Q34Game4Hana3ObjFv:
/* 802F3468 002F03A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F346C 002F03AC  7C 08 02 A6 */	mflr r0
/* 802F3470 002F03B0  C0 82 EE 80 */	lfs f4, lbl_8051D1E0@sda21(r2)
/* 802F3474 002F03B4  38 80 00 00 */	li r4, 0
/* 802F3478 002F03B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F347C 002F03BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F3480 002F03C0  7C 7F 1B 78 */	mr r31, r3
/* 802F3484 002F03C4  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802F3488 002F03C8  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802F348C 002F03CC  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802F3490 002F03D0  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802F3494 002F03D4  4B E1 FC 89 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802F3498 002F03D8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802F349C 002F03DC  7F E3 FB 78 */	mr r3, r31
/* 802F34A0 002F03E0  C0 82 EE 80 */	lfs f4, lbl_8051D1E0@sda21(r2)
/* 802F34A4 002F03E4  38 80 00 00 */	li r4, 0
/* 802F34A8 002F03E8  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802F34AC 002F03EC  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802F34B0 002F03F0  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802F34B4 002F03F4  4B E2 00 21 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802F34B8 002F03F8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802F34BC 002F03FC  7F E3 FB 78 */	mr r3, r31
/* 802F34C0 002F0400  C0 82 EE 80 */	lfs f4, lbl_8051D1E0@sda21(r2)
/* 802F34C4 002F0404  38 80 00 00 */	li r4, 0
/* 802F34C8 002F0408  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802F34CC 002F040C  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802F34D0 002F0410  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802F34D4 002F0414  4B E2 02 BD */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 802F34D8 002F0418  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F34DC 002F041C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F34E0 002F0420  7C 08 03 A6 */	mtlr r0
/* 802F34E4 002F0424  38 21 00 10 */	addi r1, r1, 0x10
/* 802F34E8 002F0428  4E 80 00 20 */	blr 

.global flickAttackBomb__Q34Game4Hana3ObjFv
flickAttackBomb__Q34Game4Hana3ObjFv:
/* 802F34EC 002F042C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802F34F0 002F0430  7C 08 02 A6 */	mflr r0
/* 802F34F4 002F0434  C0 82 EE 80 */	lfs f4, lbl_8051D1E0@sda21(r2)
/* 802F34F8 002F0438  38 80 00 00 */	li r4, 0
/* 802F34FC 002F043C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802F3500 002F0440  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802F3504 002F0444  7C 7F 1B 78 */	mr r31, r3
/* 802F3508 002F0448  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802F350C 002F044C  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802F3510 002F0450  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802F3514 002F0454  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802F3518 002F0458  4B E1 FC 05 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802F351C 002F045C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802F3520 002F0460  38 82 EE 84 */	addi r4, r2, lbl_8051D1E4@sda21
/* 802F3524 002F0464  48 14 BA C1 */	bl getJoint__Q28SysShape5ModelFPc
/* 802F3528 002F0468  48 13 63 79 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802F352C 002F046C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802F3530 002F0470  38 C0 00 00 */	li r6, 0
/* 802F3534 002F0474  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802F3538 002F0478  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 802F353C 002F047C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F3540 002F0480  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 802F3544 002F0484  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 802F3548 002F0488  3C 80 80 4D */	lis r4, __vt__Q23efx9THanaMiss@ha
/* 802F354C 002F048C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F3550 002F0490  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 802F3554 002F0494  38 E0 02 58 */	li r7, 0x258
/* 802F3558 002F0498  38 A0 02 59 */	li r5, 0x259
/* 802F355C 002F049C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F3560 002F04A0  38 04 53 C0 */	addi r0, r4, __vt__Q23efx9THanaMiss@l
/* 802F3564 002F04A4  38 80 00 00 */	li r4, 0
/* 802F3568 002F04A8  90 61 00 24 */	stw r3, 0x24(r1)
/* 802F356C 002F04AC  38 61 00 14 */	addi r3, r1, 0x14
/* 802F3570 002F04B0  B0 E1 00 18 */	sth r7, 0x18(r1)
/* 802F3574 002F04B4  B0 A1 00 1A */	sth r5, 0x1a(r1)
/* 802F3578 002F04B8  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 802F357C 002F04BC  90 C1 00 20 */	stw r6, 0x20(r1)
/* 802F3580 002F04C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F3584 002F04C4  48 0B BE 15 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 802F3588 002F04C8  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 802F358C 002F04CC  38 A1 00 08 */	addi r5, r1, 8
/* 802F3590 002F04D0  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802F3594 002F04D4  38 80 00 1C */	li r4, 0x1c
/* 802F3598 002F04D8  D0 01 00 08 */	stfs f0, 8(r1)
/* 802F359C 002F04DC  38 C0 00 02 */	li r6, 2
/* 802F35A0 002F04E0  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802F35A4 002F04E4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802F35A8 002F04E8  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 802F35AC 002F04EC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802F35B0 002F04F0  4B F5 EC 8D */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802F35B4 002F04F4  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802F35B8 002F04F8  38 A1 00 08 */	addi r5, r1, 8
/* 802F35BC 002F04FC  38 80 00 0B */	li r4, 0xb
/* 802F35C0 002F0500  38 C0 00 02 */	li r6, 2
/* 802F35C4 002F0504  4B F6 01 BD */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802F35C8 002F0508  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802F35CC 002F050C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802F35D0 002F0510  7C 08 03 A6 */	mtlr r0
/* 802F35D4 002F0514  38 21 00 30 */	addi r1, r1, 0x30
/* 802F35D8 002F0518  4E 80 00 20 */	blr 

.global eatAttackPikmin__Q34Game4Hana3ObjFv
eatAttackPikmin__Q34Game4Hana3ObjFv:
/* 802F35DC 002F051C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F35E0 002F0520  7C 08 02 A6 */	mflr r0
/* 802F35E4 002F0524  3C 80 80 4B */	lis r4, "__vt__23Condition<Q24Game4Piki>"@ha
/* 802F35E8 002F0528  3C A0 80 4D */	lis r5, __vt__Q24Game21ConditionNotStickSlot@ha
/* 802F35EC 002F052C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F35F0 002F0530  38 04 BC 60 */	addi r0, r4, "__vt__23Condition<Q24Game4Piki>"@l
/* 802F35F4 002F0534  38 81 00 08 */	addi r4, r1, 8
/* 802F35F8 002F0538  90 01 00 08 */	stw r0, 8(r1)
/* 802F35FC 002F053C  38 05 53 B4 */	addi r0, r5, __vt__Q24Game21ConditionNotStickSlot@l
/* 802F3600 002F0540  90 01 00 08 */	stw r0, 8(r1)
/* 802F3604 002F0544  4B E2 05 31 */	bl "eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
/* 802F3608 002F0548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F360C 002F054C  7C 08 03 A6 */	mtlr r0
/* 802F3610 002F0550  38 21 00 10 */	addi r1, r1, 0x10
/* 802F3614 002F0554  4E 80 00 20 */	blr 

.global resetUnderGround__Q34Game4Hana3ObjFv
resetUnderGround__Q34Game4Hana3ObjFv:
/* 802F3618 002F0558  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F361C 002F055C  7C 08 02 A6 */	mflr r0
/* 802F3620 002F0560  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F3624 002F0564  38 00 00 00 */	li r0, 0
/* 802F3628 002F0568  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F362C 002F056C  7C 7F 1B 78 */	mr r31, r3
/* 802F3630 002F0570  98 03 02 E4 */	stb r0, 0x2e4(r3)
/* 802F3634 002F0574  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802F3638 002F0578  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 802F363C 002F057C  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 802F3640 002F0580  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802F3644 002F0584  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802F3648 002F0588  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 802F364C 002F058C  4B E1 41 49 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802F3650 002F0590  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802F3654 002F0594  7F E3 FB 78 */	mr r3, r31
/* 802F3658 002F0598  38 80 00 01 */	li r4, 1
/* 802F365C 002F059C  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 802F3660 002F05A0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802F3664 002F05A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3668 002F05A8  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 802F366C 002F05AC  7D 89 03 A6 */	mtctr r12
/* 802F3670 002F05B0  4E 80 04 21 */	bctrl 
/* 802F3674 002F05B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F3678 002F05B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F367C 002F05BC  7C 08 03 A6 */	mtlr r0
/* 802F3680 002F05C0  38 21 00 10 */	addi r1, r1, 0x10
/* 802F3684 002F05C4  4E 80 00 20 */	blr 

.global setUnderGround__Q34Game4Hana3ObjFv
setUnderGround__Q34Game4Hana3ObjFv:
/* 802F3688 002F05C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F368C 002F05CC  7C 08 02 A6 */	mflr r0
/* 802F3690 002F05D0  C0 82 EE 80 */	lfs f4, lbl_8051D1E0@sda21(r2)
/* 802F3694 002F05D4  38 80 00 00 */	li r4, 0
/* 802F3698 002F05D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F369C 002F05DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F36A0 002F05E0  7C 7F 1B 78 */	mr r31, r3
/* 802F36A4 002F05E4  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802F36A8 002F05E8  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802F36AC 002F05EC  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802F36B0 002F05F0  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802F36B4 002F05F4  4B E1 FA 69 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802F36B8 002F05F8  38 00 00 01 */	li r0, 1
/* 802F36BC 002F05FC  7F E3 FB 78 */	mr r3, r31
/* 802F36C0 002F0600  98 1F 02 E4 */	stb r0, 0x2e4(r31)
/* 802F36C4 002F0604  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802F36C8 002F0608  64 00 00 40 */	oris r0, r0, 0x40
/* 802F36CC 002F060C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802F36D0 002F0610  4B E1 40 AD */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802F36D4 002F0614  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802F36D8 002F0618  7F E3 FB 78 */	mr r3, r31
/* 802F36DC 002F061C  38 80 00 00 */	li r4, 0
/* 802F36E0 002F0620  60 00 00 01 */	ori r0, r0, 1
/* 802F36E4 002F0624  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802F36E8 002F0628  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F36EC 002F062C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 802F36F0 002F0630  7D 89 03 A6 */	mtctr r12
/* 802F36F4 002F0634  4E 80 04 21 */	bctrl 
/* 802F36F8 002F0638  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F36FC 002F063C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F3700 002F0640  7C 08 03 A6 */	mtlr r0
/* 802F3704 002F0644  38 21 00 10 */	addi r1, r1, 0x10
/* 802F3708 002F0648  4E 80 00 20 */	blr 

.global createSmokeEffect__Q34Game4Hana3ObjFv
createSmokeEffect__Q34Game4Hana3ObjFv:
/* 802F370C 002F064C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802F3710 002F0650  7C 08 02 A6 */	mflr r0
/* 802F3714 002F0654  90 01 00 44 */	stw r0, 0x44(r1)
/* 802F3718 002F0658  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802F371C 002F065C  7C 7F 1B 78 */	mr r31, r3
/* 802F3720 002F0660  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802F3724 002F0664  D0 01 00 08 */	stfs f0, 8(r1)
/* 802F3728 002F0668  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 802F372C 002F066C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802F3730 002F0670  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 802F3734 002F0674  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802F3738 002F0678  4B E1 3C 11 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 802F373C 002F067C  2C 03 00 08 */	cmpwi r3, 8
/* 802F3740 002F0680  40 82 00 EC */	bne .L_802F382C
/* 802F3744 002F0684  C0 DF 01 FC */	lfs f6, 0x1fc(r31)
/* 802F3748 002F0688  C0 02 EE 48 */	lfs f0, lbl_8051D1A8@sda21(r2)
/* 802F374C 002F068C  FC 20 30 90 */	fmr f1, f6
/* 802F3750 002F0690  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 802F3754 002F0694  40 80 00 08 */	bge .L_802F375C
/* 802F3758 002F0698  FC 20 30 50 */	fneg f1, f6
.L_802F375C:
/* 802F375C 002F069C  C0 42 EE 90 */	lfs f2, lbl_8051D1F0@sda21(r2)
/* 802F3760 002F06A0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802F3764 002F06A4  C0 02 EE 48 */	lfs f0, lbl_8051D1A8@sda21(r2)
/* 802F3768 002F06A8  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802F376C 002F06AC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802F3770 002F06B0  C0 62 EE 8C */	lfs f3, lbl_8051D1EC@sda21(r2)
/* 802F3774 002F06B4  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 802F3778 002F06B8  C0 81 00 08 */	lfs f4, 8(r1)
/* 802F377C 002F06BC  FC 00 08 1E */	fctiwz f0, f1
/* 802F3780 002F06C0  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802F3784 002F06C4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802F3788 002F06C8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F378C 002F06CC  7C 64 02 14 */	add r3, r4, r0
/* 802F3790 002F06D0  C0 03 00 04 */	lfs f0, 4(r3)
/* 802F3794 002F06D4  EC A3 00 32 */	fmuls f5, f3, f0
/* 802F3798 002F06D8  40 80 00 28 */	bge .L_802F37C0
/* 802F379C 002F06DC  C0 02 EE 94 */	lfs f0, lbl_8051D1F4@sda21(r2)
/* 802F37A0 002F06E0  EC 06 00 32 */	fmuls f0, f6, f0
/* 802F37A4 002F06E4  FC 00 00 1E */	fctiwz f0, f0
/* 802F37A8 002F06E8  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802F37AC 002F06EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F37B0 002F06F0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F37B4 002F06F4  7C 04 04 2E */	lfsx f0, r4, r0
/* 802F37B8 002F06F8  FC 00 00 50 */	fneg f0, f0
/* 802F37BC 002F06FC  48 00 00 1C */	b .L_802F37D8
.L_802F37C0:
/* 802F37C0 002F0700  EC 06 00 B2 */	fmuls f0, f6, f2
/* 802F37C4 002F0704  FC 00 00 1E */	fctiwz f0, f0
/* 802F37C8 002F0708  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802F37CC 002F070C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802F37D0 002F0710  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F37D4 002F0714  7C 04 04 2E */	lfsx f0, r4, r0
.L_802F37D8:
/* 802F37D8 002F0718  EC 63 00 32 */	fmuls f3, f3, f0
/* 802F37DC 002F071C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802F37E0 002F0720  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 802F37E4 002F0724  38 A1 00 08 */	addi r5, r1, 8
/* 802F37E8 002F0728  C0 22 EE 48 */	lfs f1, lbl_8051D1A8@sda21(r2)
/* 802F37EC 002F072C  EC 00 28 28 */	fsubs f0, f0, f5
/* 802F37F0 002F0730  EC 64 18 28 */	fsubs f3, f4, f3
/* 802F37F4 002F0734  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802F37F8 002F0738  EC 22 08 28 */	fsubs f1, f2, f1
/* 802F37FC 002F073C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802F3800 002F0740  38 80 00 03 */	li r4, 3
/* 802F3804 002F0744  38 C0 00 02 */	li r6, 2
/* 802F3808 002F0748  D0 61 00 08 */	stfs f3, 8(r1)
/* 802F380C 002F074C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802F3810 002F0750  4B F5 EA 2D */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802F3814 002F0754  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802F3818 002F0758  38 A1 00 08 */	addi r5, r1, 8
/* 802F381C 002F075C  38 80 00 0B */	li r4, 0xb
/* 802F3820 002F0760  38 C0 00 02 */	li r6, 2
/* 802F3824 002F0764  4B F5 FF 5D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802F3828 002F0768  48 00 00 80 */	b .L_802F38A8
.L_802F382C:
/* 802F382C 002F076C  2C 03 00 04 */	cmpwi r3, 4
/* 802F3830 002F0770  40 82 00 88 */	bne .L_802F38B8
/* 802F3834 002F0774  7F E3 FB 78 */	mr r3, r31
/* 802F3838 002F0778  38 80 00 01 */	li r4, 1
/* 802F383C 002F077C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3840 002F0780  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 802F3844 002F0784  7D 89 03 A6 */	mtctr r12
/* 802F3848 002F0788  4E 80 04 21 */	bctrl 
/* 802F384C 002F078C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802F3850 002F0790  7F E3 FB 78 */	mr r3, r31
/* 802F3854 002F0794  C0 82 EE 80 */	lfs f4, lbl_8051D1E0@sda21(r2)
/* 802F3858 002F0798  38 80 00 00 */	li r4, 0
/* 802F385C 002F079C  C0 25 03 AC */	lfs f1, 0x3ac(r5)
/* 802F3860 002F07A0  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802F3864 002F07A4  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802F3868 002F07A8  4B E1 FC 6D */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802F386C 002F07AC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802F3870 002F07B0  7F E3 FB 78 */	mr r3, r31
/* 802F3874 002F07B4  C0 82 EE 80 */	lfs f4, lbl_8051D1E0@sda21(r2)
/* 802F3878 002F07B8  38 80 00 00 */	li r4, 0
/* 802F387C 002F07BC  C0 25 03 AC */	lfs f1, 0x3ac(r5)
/* 802F3880 002F07C0  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802F3884 002F07C4  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802F3888 002F07C8  4B E1 FF 09 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 802F388C 002F07CC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802F3890 002F07D0  38 A1 00 08 */	addi r5, r1, 8
/* 802F3894 002F07D4  38 80 00 0A */	li r4, 0xa
/* 802F3898 002F07D8  38 C0 00 02 */	li r6, 2
/* 802F389C 002F07DC  4B F5 FE E5 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802F38A0 002F07E0  48 00 00 08 */	b .L_802F38A8
/* 802F38A4 002F07E4  48 00 00 14 */	b .L_802F38B8
.L_802F38A8:
/* 802F38A8 002F07E8  C0 22 EE 4C */	lfs f1, lbl_8051D1AC@sda21(r2)
/* 802F38AC 002F07EC  7F E3 FB 78 */	mr r3, r31
/* 802F38B0 002F07F0  38 81 00 08 */	addi r4, r1, 8
/* 802F38B4 002F07F4  4B E1 02 9D */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
.L_802F38B8:
/* 802F38B8 002F07F8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802F38BC 002F07FC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802F38C0 002F0800  7C 08 03 A6 */	mtlr r0
/* 802F38C4 002F0804  38 21 00 40 */	addi r1, r1, 0x40
/* 802F38C8 002F0808  4E 80 00 20 */	blr 

.global satisfy__Q24Game21ConditionNotStickSlotFPQ24Game4Piki
satisfy__Q24Game21ConditionNotStickSlotFPQ24Game4Piki:
/* 802F38CC 002F080C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F38D0 002F0810  7C 08 02 A6 */	mflr r0
/* 802F38D4 002F0814  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F38D8 002F0818  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F38DC 002F081C  7C 9F 23 78 */	mr r31, r4
/* 802F38E0 002F0820  7F E3 FB 78 */	mr r3, r31
/* 802F38E4 002F0824  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F38E8 002F0828  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802F38EC 002F082C  7D 89 03 A6 */	mtctr r12
/* 802F38F0 002F0830  4E 80 04 21 */	bctrl 
/* 802F38F4 002F0834  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F38F8 002F0838  41 82 00 38 */	beq .L_802F3930
/* 802F38FC 002F083C  7F E3 FB 78 */	mr r3, r31
/* 802F3900 002F0840  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3904 002F0844  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802F3908 002F0848  7D 89 03 A6 */	mtctr r12
/* 802F390C 002F084C  4E 80 04 21 */	bctrl 
/* 802F3910 002F0850  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F3914 002F0854  41 82 00 1C */	beq .L_802F3930
/* 802F3918 002F0858  7F E3 FB 78 */	mr r3, r31
/* 802F391C 002F085C  4B EA BC 6D */	bl isStickToMouth__Q24Game8CreatureFv
/* 802F3920 002F0860  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F3924 002F0864  40 82 00 0C */	bne .L_802F3930
/* 802F3928 002F0868  38 60 00 01 */	li r3, 1
/* 802F392C 002F086C  48 00 00 08 */	b .L_802F3934
.L_802F3930:
/* 802F3930 002F0870  38 60 00 00 */	li r3, 0
.L_802F3934:
/* 802F3934 002F0874  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F3938 002F0878  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F393C 002F087C  7C 08 03 A6 */	mtlr r0
/* 802F3940 002F0880  38 21 00 10 */	addi r1, r1, 0x10
/* 802F3944 002F0884  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game4Hana3ObjFv
changeMaterial__Q34Game4Hana3ObjFv:
/* 802F3948 002F0888  4E 80 00 20 */	blr 

.global isUnderground__Q34Game4Hana3ObjFv
isUnderground__Q34Game4Hana3ObjFv:
/* 802F394C 002F088C  88 63 02 E4 */	lbz r3, 0x2e4(r3)
/* 802F3950 002F0890  4E 80 00 20 */	blr 

.global initWalkSmokeEffect__Q34Game4Hana3ObjFv
initWalkSmokeEffect__Q34Game4Hana3ObjFv:
/* 802F3954 002F0894  4E 80 00 20 */	blr 

.global getWalkSmokeEffectMgr__Q34Game4Hana3ObjFv
getWalkSmokeEffectMgr__Q34Game4Hana3ObjFv:
/* 802F3958 002F0898  38 60 00 00 */	li r3, 0
/* 802F395C 002F089C  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q34Game4Hana3ObjFv
getDownSmokeScale__Q34Game4Hana3ObjFv:
/* 802F3960 002F08A0  C0 22 EE 98 */	lfs f1, lbl_8051D1F8@sda21(r2)
/* 802F3964 002F08A4  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game4Hana3ObjFv
getEnemyTypeID__Q34Game4Hana3ObjFv:
/* 802F3968 002F08A8  38 60 00 54 */	li r3, 0x54
/* 802F396C 002F08AC  4E 80 00 20 */	blr 

.global setAnimationSpeed__Q34Game4Hana3ObjFf
setAnimationSpeed__Q34Game4Hana3ObjFf:
/* 802F3970 002F08B0  4E 80 00 20 */	blr 

.global flickAttackFail__Q34Game4Hana3ObjFv
flickAttackFail__Q34Game4Hana3ObjFv:
/* 802F3974 002F08B4  4E 80 00 20 */	blr 

.global startSleepEffect__Q34Game4Hana3ObjFv
startSleepEffect__Q34Game4Hana3ObjFv:
/* 802F3978 002F08B8  4E 80 00 20 */	blr 

.global finishSleepEffect__Q34Game4Hana3ObjFv
finishSleepEffect__Q34Game4Hana3ObjFv:
/* 802F397C 002F08BC  4E 80 00 20 */	blr 

.global __sinit_Hana_cpp
__sinit_Hana_cpp:
/* 802F3980 002F08C0  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802F3984 002F08C4  38 00 FF FF */	li r0, -1
/* 802F3988 002F08C8  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802F398C 002F08CC  3C 60 80 4D */	lis r3, lbl_804D53A8@ha
/* 802F3990 002F08D0  90 0D 97 80 */	stw r0, lbl_80515E00@sda21(r13)
/* 802F3994 002F08D4  D4 03 53 A8 */	stfsu f0, lbl_804D53A8@l(r3)
/* 802F3998 002F08D8  D0 0D 97 84 */	stfs f0, lbl_80515E04@sda21(r13)
/* 802F399C 002F08DC  D0 03 00 04 */	stfs f0, 4(r3)
/* 802F39A0 002F08E0  D0 03 00 08 */	stfs f0, 8(r3)
/* 802F39A4 002F08E4  4E 80 00 20 */	blr 
