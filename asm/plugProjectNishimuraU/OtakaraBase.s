.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q24Game30ConditionNotStickClientAndItem
__vt__Q24Game30ConditionNotStickClientAndItem:
	.4byte 0
	.4byte 0
	.4byte satisfy__Q24Game30ConditionNotStickClientAndItemFPQ24Game4Piki
.global __vt__Q34Game11OtakaraBase3Obj
__vt__Q34Game11OtakaraBase3Obj:
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
	.4byte onInit__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game11OtakaraBase3ObjFR8Graphics
	.4byte getBodyRadius__Q24Game9EnemyBaseFv
	.4byte getCellRadius__Q34Game11OtakaraBase3ObjFv
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
	.4byte getShadowParam__Q34Game11OtakaraBase3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game11OtakaraBase3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game11OtakaraBase3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game11OtakaraBase3ObjFv
	.4byte doUpdateCommon__Q34Game11OtakaraBase3ObjFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game11OtakaraBase3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game11OtakaraBase3ObjFR8Graphics
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
	.4byte getEnemyTypeID__Q34Game11OtakaraBase3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game11OtakaraBase3ObjFv
	.4byte doFinishStoneState__Q34Game11OtakaraBase3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q34Game11OtakaraBase3ObjFf
	.4byte doFinishEarthquakeState__Q34Game11OtakaraBase3ObjFv
	.4byte doStartEarthquakeFitState__Q34Game11OtakaraBase3ObjFv
	.4byte doFinishEarthquakeFitState__Q34Game11OtakaraBase3ObjFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game11OtakaraBase3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game11OtakaraBase3ObjFv
	.4byte doStartMovie__Q34Game11OtakaraBase3ObjFv
	.4byte doEndMovie__Q34Game11OtakaraBase3ObjFv
	.4byte setFSM__Q34Game11OtakaraBase3ObjFPQ34Game11OtakaraBase3FSM
	.4byte interactCreature__Q34Game11OtakaraBase3ObjFPQ24Game8Creature
	.4byte createEffect__Q34Game11OtakaraBase3ObjFv
	.4byte setupEffect__Q34Game11OtakaraBase3ObjFv
	.4byte startChargeEffect__Q34Game11OtakaraBase3ObjFv
	.4byte finishChargeEffect__Q34Game11OtakaraBase3ObjFv
	.4byte createDisChargeEffect__Q34Game11OtakaraBase3ObjFv
	.4byte effectDrawOn__Q34Game11OtakaraBase3ObjFv
	.4byte effectDrawOff__Q34Game11OtakaraBase3ObjFv
	.4byte startEscapeSE__Q34Game11OtakaraBase3ObjFv
	.4byte startDisChargeSE__Q34Game11OtakaraBase3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@756@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@756@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@756@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@756@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@756@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@756@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051C290
lbl_8051C290:
	.4byte 0x00000000
.global lbl_8051C294
lbl_8051C294:
	.4byte 0x46480000
.global lbl_8051C298
lbl_8051C298:
	.float 1.0
.global lbl_8051C29C
lbl_8051C29C:
	.4byte 0x6F74616B
	.4byte 0x61726100
.global lbl_8051C2A4
lbl_8051C2A4:
	.4byte 0x40A00000
.global lbl_8051C2A8
lbl_8051C2A8:
	.4byte 0x41F00000
.global lbl_8051C2AC
lbl_8051C2AC:
	.4byte 0x42480000
.global lbl_8051C2B0
lbl_8051C2B0:
	.4byte 0x41C80000
.global lbl_8051C2B4
lbl_8051C2B4:
	.4byte 0x41480000
.global lbl_8051C2B8
lbl_8051C2B8:
	.4byte 0x41200000
.global lbl_8051C2BC
lbl_8051C2BC:
	.4byte 0x41A00000
.global lbl_8051C2C0
lbl_8051C2C0:
	.4byte 0xC47A0000
.global lbl_8051C2C4
lbl_8051C2C4:
	.float 0.5
.global lbl_8051C2C8
lbl_8051C2C8:
	.4byte 0x42C80000
.global lbl_8051C2CC
lbl_8051C2CC:
	.4byte 0x63656E74
	.4byte 0x65720000
.global lbl_8051C2D4
lbl_8051C2D4:
	.4byte 0x3CE978D5
.global lbl_8051C2D8
lbl_8051C2D8:
	.4byte 0x40400000
.global lbl_8051C2DC
lbl_8051C2DC:
	.4byte 0x41700000
.global lbl_8051C2E0
lbl_8051C2E0:
	.4byte 0x3FC00000
.global lbl_8051C2E4
lbl_8051C2E4:
	.float 0.7

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game11OtakaraBase3ObjFv
__ct__Q34Game11OtakaraBase3ObjFv:
/* 802B624C 002B318C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6250 002B3190  7C 08 02 A6 */	mflr r0
/* 802B6254 002B3194  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6258 002B3198  7C 80 07 35 */	extsh. r0, r4
/* 802B625C 002B319C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B6260 002B31A0  7C 7F 1B 78 */	mr r31, r3
/* 802B6264 002B31A4  93 C1 00 08 */	stw r30, 8(r1)
/* 802B6268 002B31A8  41 82 00 24 */	beq .L_802B628C
/* 802B626C 002B31AC  38 1F 02 F4 */	addi r0, r31, 0x2f4
/* 802B6270 002B31B0  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802B6274 002B31B4  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802B6278 002B31B8  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802B627C 002B31BC  38 00 00 00 */	li r0, 0
/* 802B6280 002B31C0  90 7F 02 F4 */	stw r3, 0x2f4(r31)
/* 802B6284 002B31C4  90 1F 02 F8 */	stw r0, 0x2f8(r31)
/* 802B6288 002B31C8  90 1F 02 FC */	stw r0, 0x2fc(r31)
.L_802B628C:
/* 802B628C 002B31CC  7F E3 FB 78 */	mr r3, r31
/* 802B6290 002B31D0  38 80 00 00 */	li r4, 0
/* 802B6294 002B31D4  4B E4 B1 0D */	bl __ct__Q24Game9EnemyBaseFv
/* 802B6298 002B31D8  3C 60 80 4D */	lis r3, __vt__Q34Game11OtakaraBase3Obj@ha
/* 802B629C 002B31DC  38 1F 02 F4 */	addi r0, r31, 0x2f4
/* 802B62A0 002B31E0  38 A3 F0 84 */	addi r5, r3, __vt__Q34Game11OtakaraBase3Obj@l
/* 802B62A4 002B31E4  38 60 00 2C */	li r3, 0x2c
/* 802B62A8 002B31E8  90 BF 00 00 */	stw r5, 0(r31)
/* 802B62AC 002B31EC  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802B62B0 002B31F0  38 A5 03 24 */	addi r5, r5, 0x324
/* 802B62B4 002B31F4  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802B62B8 002B31F8  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802B62BC 002B31FC  90 A4 00 00 */	stw r5, 0(r4)
/* 802B62C0 002B3200  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802B62C4 002B3204  7C 04 00 50 */	subf r0, r4, r0
/* 802B62C8 002B3208  90 04 00 0C */	stw r0, 0xc(r4)
/* 802B62CC 002B320C  4B D6 DB D9 */	bl __nw__FUl
/* 802B62D0 002B3210  7C 7E 1B 79 */	or. r30, r3, r3
/* 802B62D4 002B3214  41 82 00 44 */	beq .L_802B6318
/* 802B62D8 002B3218  4B E7 16 9D */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802B62DC 002B321C  3C 60 80 4D */	lis r3, __vt__Q34Game11OtakaraBase14ProperAnimator@ha
/* 802B62E0 002B3220  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802B62E4 002B3224  38 03 EF 68 */	addi r0, r3, __vt__Q34Game11OtakaraBase14ProperAnimator@l
/* 802B62E8 002B3228  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802B62EC 002B322C  90 1E 00 00 */	stw r0, 0(r30)
/* 802B62F0 002B3230  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802B62F4 002B3234  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802B62F8 002B3238  38 00 00 00 */	li r0, 0
/* 802B62FC 002B323C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802B6300 002B3240  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802B6304 002B3244  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802B6308 002B3248  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802B630C 002B324C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802B6310 002B3250  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802B6314 002B3254  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802B6318:
/* 802B6318 002B3258  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802B631C 002B325C  38 60 00 1C */	li r3, 0x1c
/* 802B6320 002B3260  4B D6 DB 85 */	bl __nw__FUl
/* 802B6324 002B3264  7C 64 1B 79 */	or. r4, r3, r3
/* 802B6328 002B3268  41 82 00 24 */	beq .L_802B634C
/* 802B632C 002B326C  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802B6330 002B3270  3C 60 80 4D */	lis r3, __vt__Q34Game11OtakaraBase3FSM@ha
/* 802B6334 002B3274  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802B6338 002B3278  38 A0 FF FF */	li r5, -1
/* 802B633C 002B327C  90 04 00 00 */	stw r0, 0(r4)
/* 802B6340 002B3280  38 03 EF 44 */	addi r0, r3, __vt__Q34Game11OtakaraBase3FSM@l
/* 802B6344 002B3284  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802B6348 002B3288  90 04 00 00 */	stw r0, 0(r4)
.L_802B634C:
/* 802B634C 002B328C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B6350 002B3290  7F E3 FB 78 */	mr r3, r31
/* 802B6354 002B3294  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802B6358 002B3298  7D 89 03 A6 */	mtctr r12
/* 802B635C 002B329C  4E 80 04 21 */	bctrl 
/* 802B6360 002B32A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6364 002B32A4  7F E3 FB 78 */	mr r3, r31
/* 802B6368 002B32A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B636C 002B32AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B6370 002B32B0  7C 08 03 A6 */	mtlr r0
/* 802B6374 002B32B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6378 002B32B8  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game11OtakaraBase3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game11OtakaraBase3ObjFPQ24Game21EnemyInitialParamBase:
/* 802B637C 002B32BC  4E 80 00 20 */	blr 

.global onInit__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureInitArg:
/* 802B6380 002B32C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6384 002B32C4  7C 08 02 A6 */	mflr r0
/* 802B6388 002B32C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B638C 002B32CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B6390 002B32D0  7C 7F 1B 78 */	mr r31, r3
/* 802B6394 002B32D4  4B E4 B6 C5 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802B6398 002B32D8  38 00 FF FF */	li r0, -1
/* 802B639C 002B32DC  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B63A0 002B32E0  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802B63A4 002B32E4  7F E3 FB 78 */	mr r3, r31
/* 802B63A8 002B32E8  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802B63AC 002B32EC  48 00 0C C5 */	bl resetTreasure__Q34Game11OtakaraBase3ObjFv
/* 802B63B0 002B32F0  38 00 00 00 */	li r0, 0
/* 802B63B4 002B32F4  C0 22 DF 34 */	lfs f1, lbl_8051C294@sda21(r2)
/* 802B63B8 002B32F8  98 1F 02 D0 */	stb r0, 0x2d0(r31)
/* 802B63BC 002B32FC  7F E3 FB 78 */	mr r3, r31
/* 802B63C0 002B3300  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B63C4 002B3304  D0 3F 02 C8 */	stfs f1, 0x2c8(r31)
/* 802B63C8 002B3308  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802B63CC 002B330C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B63D0 002B3310  81 8C 03 04 */	lwz r12, 0x304(r12)
/* 802B63D4 002B3314  7D 89 03 A6 */	mtctr r12
/* 802B63D8 002B3318  4E 80 04 21 */	bctrl 
/* 802B63DC 002B331C  7F E3 FB 78 */	mr r3, r31
/* 802B63E0 002B3320  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B63E4 002B3324  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802B63E8 002B3328  7D 89 03 A6 */	mtctr r12
/* 802B63EC 002B332C  4E 80 04 21 */	bctrl 
/* 802B63F0 002B3330  2C 03 00 5D */	cmpwi r3, 0x5d
/* 802B63F4 002B3334  40 82 00 54 */	bne .L_802B6448
/* 802B63F8 002B3338  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B63FC 002B333C  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 802B6400 002B3340  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802B6404 002B3344  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B6408 002B3348  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 802B640C 002B334C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802B6410 002B3350  88 1F 02 B0 */	lbz r0, 0x2b0(r31)
/* 802B6414 002B3354  7C 00 07 75 */	extsb. r0, r0
/* 802B6418 002B3358  40 82 00 0C */	bne .L_802B6424
/* 802B641C 002B335C  7F E3 FB 78 */	mr r3, r31
/* 802B6420 002B3360  48 00 15 19 */	bl initBombOtakara__Q34Game11OtakaraBase3ObjFv
.L_802B6424:
/* 802B6424 002B3364  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802B6428 002B3368  7F E4 FB 78 */	mr r4, r31
/* 802B642C 002B336C  38 A0 00 0B */	li r5, 0xb
/* 802B6430 002B3370  38 C0 00 00 */	li r6, 0
/* 802B6434 002B3374  81 83 00 00 */	lwz r12, 0(r3)
/* 802B6438 002B3378  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802B643C 002B337C  7D 89 03 A6 */	mtctr r12
/* 802B6440 002B3380  4E 80 04 21 */	bctrl 
/* 802B6444 002B3384  48 00 00 2C */	b .L_802B6470
.L_802B6448:
/* 802B6448 002B3388  C0 02 DF 34 */	lfs f0, lbl_8051C294@sda21(r2)
/* 802B644C 002B338C  7F E4 FB 78 */	mr r4, r31
/* 802B6450 002B3390  38 A0 00 02 */	li r5, 2
/* 802B6454 002B3394  38 C0 00 00 */	li r6, 0
/* 802B6458 002B3398  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 802B645C 002B339C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802B6460 002B33A0  81 83 00 00 */	lwz r12, 0(r3)
/* 802B6464 002B33A4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802B6468 002B33A8  7D 89 03 A6 */	mtctr r12
/* 802B646C 002B33AC  4E 80 04 21 */	bctrl 
.L_802B6470:
/* 802B6470 002B33B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6474 002B33B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B6478 002B33B8  7C 08 03 A6 */	mtlr r0
/* 802B647C 002B33BC  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6480 002B33C0  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game11OtakaraBase3ObjFv
getEnemyTypeID__Q34Game11OtakaraBase3ObjFv:
/* 802B6484 002B33C4  38 60 00 3B */	li r3, 0x3b
/* 802B6488 002B33C8  4E 80 00 20 */	blr 

.global setupEffect__Q34Game11OtakaraBase3ObjFv
setupEffect__Q34Game11OtakaraBase3ObjFv:
/* 802B648C 002B33CC  4E 80 00 20 */	blr 

.global onKill__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureKillArg
onKill__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureKillArg:
/* 802B6490 002B33D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6494 002B33D4  7C 08 02 A6 */	mflr r0
/* 802B6498 002B33D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B649C 002B33DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B64A0 002B33E0  7C 9F 23 78 */	mr r31, r4
/* 802B64A4 002B33E4  38 80 00 01 */	li r4, 1
/* 802B64A8 002B33E8  93 C1 00 08 */	stw r30, 8(r1)
/* 802B64AC 002B33EC  7C 7E 1B 78 */	mr r30, r3
/* 802B64B0 002B33F0  48 00 0F AD */	bl fallTreasure__Q34Game11OtakaraBase3ObjFb
/* 802B64B4 002B33F4  7F C3 F3 78 */	mr r3, r30
/* 802B64B8 002B33F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B64BC 002B33FC  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 802B64C0 002B3400  7D 89 03 A6 */	mtctr r12
/* 802B64C4 002B3404  4E 80 04 21 */	bctrl 
/* 802B64C8 002B3408  7F C3 F3 78 */	mr r3, r30
/* 802B64CC 002B340C  7F E4 FB 78 */	mr r4, r31
/* 802B64D0 002B3410  4B E4 BA 19 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 802B64D4 002B3414  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B64D8 002B3418  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B64DC 002B341C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B64E0 002B3420  7C 08 03 A6 */	mtlr r0
/* 802B64E4 002B3424  38 21 00 10 */	addi r1, r1, 0x10
/* 802B64E8 002B3428  4E 80 00 20 */	blr 

.global doUpdate__Q34Game11OtakaraBase3ObjFv
doUpdate__Q34Game11OtakaraBase3ObjFv:
/* 802B64EC 002B342C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B64F0 002B3430  7C 08 02 A6 */	mflr r0
/* 802B64F4 002B3434  7C 64 1B 78 */	mr r4, r3
/* 802B64F8 002B3438  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B64FC 002B343C  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802B6500 002B3440  81 83 00 00 */	lwz r12, 0(r3)
/* 802B6504 002B3444  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802B6508 002B3448  7D 89 03 A6 */	mtctr r12
/* 802B650C 002B344C  4E 80 04 21 */	bctrl 
/* 802B6510 002B3450  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6514 002B3454  7C 08 03 A6 */	mtlr r0
/* 802B6518 002B3458  38 21 00 10 */	addi r1, r1, 0x10
/* 802B651C 002B345C  4E 80 00 20 */	blr 

.global doUpdateCommon__Q34Game11OtakaraBase3ObjFv
doUpdateCommon__Q34Game11OtakaraBase3ObjFv:
/* 802B6520 002B3460  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6524 002B3464  7C 08 02 A6 */	mflr r0
/* 802B6528 002B3468  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B652C 002B346C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B6530 002B3470  7C 7F 1B 78 */	mr r31, r3
/* 802B6534 002B3474  4B E4 C9 E1 */	bl doUpdateCommon__Q24Game9EnemyBaseFv
/* 802B6538 002B3478  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802B653C 002B347C  C0 02 DF 38 */	lfs f0, lbl_8051C298@sda21(r2)
/* 802B6540 002B3480  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B6544 002B3484  40 80 00 30 */	bge .L_802B6574
/* 802B6548 002B3488  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802B654C 002B348C  7F E3 FB 78 */	mr r3, r31
/* 802B6550 002B3490  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 802B6554 002B3494  EC 01 00 2A */	fadds f0, f1, f0
/* 802B6558 002B3498  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802B655C 002B349C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B6560 002B34A0  81 8C 03 20 */	lwz r12, 0x320(r12)
/* 802B6564 002B34A4  7D 89 03 A6 */	mtctr r12
/* 802B6568 002B34A8  4E 80 04 21 */	bctrl 
/* 802B656C 002B34AC  7F E3 FB 78 */	mr r3, r31
/* 802B6570 002B34B0  48 00 10 61 */	bl attackTarget__Q34Game11OtakaraBase3ObjFv
.L_802B6574:
/* 802B6574 002B34B4  7F E3 FB 78 */	mr r3, r31
/* 802B6578 002B34B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B657C 002B34BC  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802B6580 002B34C0  7D 89 03 A6 */	mtctr r12
/* 802B6584 002B34C4  4E 80 04 21 */	bctrl 
/* 802B6588 002B34C8  2C 03 00 5D */	cmpwi r3, 0x5d
/* 802B658C 002B34CC  40 82 00 70 */	bne .L_802B65FC
/* 802B6590 002B34D0  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 802B6594 002B34D4  28 03 00 00 */	cmplwi r3, 0
/* 802B6598 002B34D8  41 82 00 5C */	beq .L_802B65F4
/* 802B659C 002B34DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802B65A0 002B34E0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802B65A4 002B34E4  7D 89 03 A6 */	mtctr r12
/* 802B65A8 002B34E8  4E 80 04 21 */	bctrl 
/* 802B65AC 002B34EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B65B0 002B34F0  40 82 00 18 */	bne .L_802B65C8
/* 802B65B4 002B34F4  38 00 00 00 */	li r0, 0
/* 802B65B8 002B34F8  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B65BC 002B34FC  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802B65C0 002B3500  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 802B65C4 002B3504  48 00 00 38 */	b .L_802B65FC
.L_802B65C8:
/* 802B65C8 002B3508  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 802B65CC 002B350C  4B EE 8F A9 */	bl isStickTo__Q24Game8CreatureFv
/* 802B65D0 002B3510  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B65D4 002B3514  41 82 00 28 */	beq .L_802B65FC
/* 802B65D8 002B3518  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 802B65DC 002B351C  4B EE 95 C1 */	bl endCapture__Q24Game8CreatureFv
/* 802B65E0 002B3520  38 00 00 00 */	li r0, 0
/* 802B65E4 002B3524  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B65E8 002B3528  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802B65EC 002B352C  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 802B65F0 002B3530  48 00 00 0C */	b .L_802B65FC
.L_802B65F4:
/* 802B65F4 002B3534  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B65F8 002B3538  D0 1F 02 00 */	stfs f0, 0x200(r31)
.L_802B65FC:
/* 802B65FC 002B353C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6600 002B3540  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B6604 002B3544  7C 08 03 A6 */	mtlr r0
/* 802B6608 002B3548  38 21 00 10 */	addi r1, r1, 0x10
/* 802B660C 002B354C  4E 80 00 20 */	blr 

.global startDisChargeSE__Q34Game11OtakaraBase3ObjFv
startDisChargeSE__Q34Game11OtakaraBase3ObjFv:
/* 802B6610 002B3550  4E 80 00 20 */	blr 

.global doAnimationCullingOff__Q34Game11OtakaraBase3ObjFv
doAnimationCullingOff__Q34Game11OtakaraBase3ObjFv:
/* 802B6614 002B3554  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802B6618 002B3558  7C 08 02 A6 */	mflr r0
/* 802B661C 002B355C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802B6620 002B3560  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802B6624 002B3564  7C 7F 1B 78 */	mr r31, r3
/* 802B6628 002B3568  4B E4 CA 59 */	bl doAnimationCullingOff__Q24Game9EnemyBaseFv
/* 802B662C 002B356C  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802B6630 002B3570  28 03 00 00 */	cmplwi r3, 0
/* 802B6634 002B3574  41 82 00 48 */	beq .L_802B667C
/* 802B6638 002B3578  81 83 00 00 */	lwz r12, 0(r3)
/* 802B663C 002B357C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802B6640 002B3580  7D 89 03 A6 */	mtctr r12
/* 802B6644 002B3584  4E 80 04 21 */	bctrl 
/* 802B6648 002B3588  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B664C 002B358C  40 82 00 14 */	bne .L_802B6660
/* 802B6650 002B3590  7F E3 FB 78 */	mr r3, r31
/* 802B6654 002B3594  38 80 00 00 */	li r4, 0
/* 802B6658 002B3598  48 00 0E 05 */	bl fallTreasure__Q34Game11OtakaraBase3ObjFb
/* 802B665C 002B359C  48 00 00 20 */	b .L_802B667C
.L_802B6660:
/* 802B6660 002B35A0  38 61 00 08 */	addi r3, r1, 8
/* 802B6664 002B35A4  4B E3 3C 3D */	bl PSMTXIdentity
/* 802B6668 002B35A8  C0 1F 02 EC */	lfs f0, 0x2ec(r31)
/* 802B666C 002B35AC  38 81 00 08 */	addi r4, r1, 8
/* 802B6670 002B35B0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802B6674 002B35B4  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802B6678 002B35B8  4B EE 94 85 */	bl updateCapture__Q24Game8CreatureFR7Matrixf
.L_802B667C:
/* 802B667C 002B35BC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802B6680 002B35C0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802B6684 002B35C4  7C 08 03 A6 */	mtlr r0
/* 802B6688 002B35C8  38 21 00 40 */	addi r1, r1, 0x40
/* 802B668C 002B35CC  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game11OtakaraBase3ObjFR8Graphics
doDirectDraw__Q34Game11OtakaraBase3ObjFR8Graphics:
/* 802B6690 002B35D0  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game11OtakaraBase3ObjFR8Graphics
doDebugDraw__Q34Game11OtakaraBase3ObjFR8Graphics:
/* 802B6694 002B35D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6698 002B35D8  7C 08 02 A6 */	mflr r0
/* 802B669C 002B35DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B66A0 002B35E0  4B E4 F7 CD */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802B66A4 002B35E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B66A8 002B35E8  7C 08 03 A6 */	mtlr r0
/* 802B66AC 002B35EC  38 21 00 10 */	addi r1, r1, 0x10
/* 802B66B0 002B35F0  4E 80 00 20 */	blr 

.global setFSM__Q34Game11OtakaraBase3ObjFPQ34Game11OtakaraBase3FSM
setFSM__Q34Game11OtakaraBase3ObjFPQ34Game11OtakaraBase3FSM:
/* 802B66B4 002B35F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B66B8 002B35F8  7C 08 02 A6 */	mflr r0
/* 802B66BC 002B35FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B66C0 002B3600  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B66C4 002B3604  7C 7F 1B 78 */	mr r31, r3
/* 802B66C8 002B3608  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802B66CC 002B360C  7F E4 FB 78 */	mr r4, r31
/* 802B66D0 002B3610  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802B66D4 002B3614  81 83 00 00 */	lwz r12, 0(r3)
/* 802B66D8 002B3618  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B66DC 002B361C  7D 89 03 A6 */	mtctr r12
/* 802B66E0 002B3620  4E 80 04 21 */	bctrl 
/* 802B66E4 002B3624  38 00 00 00 */	li r0, 0
/* 802B66E8 002B3628  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802B66EC 002B362C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B66F0 002B3630  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B66F4 002B3634  7C 08 03 A6 */	mtlr r0
/* 802B66F8 002B3638  38 21 00 10 */	addi r1, r1, 0x10
/* 802B66FC 002B363C  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game11OtakaraBase3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game11OtakaraBase3ObjFRQ24Game11ShadowParam:
/* 802B6700 002B3640  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6704 002B3644  7C 08 02 A6 */	mflr r0
/* 802B6708 002B3648  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B670C 002B364C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B6710 002B3650  7C 9F 23 78 */	mr r31, r4
/* 802B6714 002B3654  38 82 DF 3C */	addi r4, r2, lbl_8051C29C@sda21
/* 802B6718 002B3658  93 C1 00 08 */	stw r30, 8(r1)
/* 802B671C 002B365C  7C 7E 1B 78 */	mr r30, r3
/* 802B6720 002B3660  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802B6724 002B3664  48 18 88 C1 */	bl getJoint__Q28SysShape5ModelFPc
/* 802B6728 002B3668  48 17 31 79 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B672C 002B366C  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 802B6730 002B3670  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 802B6734 002B3674  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802B6738 002B3678  C0 42 DF 44 */	lfs f2, lbl_8051C2A4@sda21(r2)
/* 802B673C 002B367C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802B6740 002B3680  C0 22 DF 30 */	lfs f1, lbl_8051C290@sda21(r2)
/* 802B6744 002B3684  D0 7F 00 04 */	stfs f3, 4(r31)
/* 802B6748 002B3688  C0 02 DF 38 */	lfs f0, lbl_8051C298@sda21(r2)
/* 802B674C 002B368C  D0 9F 00 08 */	stfs f4, 8(r31)
/* 802B6750 002B3690  C0 7F 00 04 */	lfs f3, 4(r31)
/* 802B6754 002B3694  EC 43 10 28 */	fsubs f2, f3, f2
/* 802B6758 002B3698  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802B675C 002B369C  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802B6760 002B36A0  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802B6764 002B36A4  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802B6768 002B36A8  80 1E 02 E0 */	lwz r0, 0x2e0(r30)
/* 802B676C 002B36AC  28 00 00 00 */	cmplwi r0, 0
/* 802B6770 002B36B0  41 82 00 10 */	beq .L_802B6780
/* 802B6774 002B36B4  C0 02 DF 48 */	lfs f0, lbl_8051C2A8@sda21(r2)
/* 802B6778 002B36B8  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802B677C 002B36BC  48 00 00 0C */	b .L_802B6788
.L_802B6780:
/* 802B6780 002B36C0  C0 02 DF 4C */	lfs f0, lbl_8051C2AC@sda21(r2)
/* 802B6784 002B36C4  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802B6788:
/* 802B6788 002B36C8  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 802B678C 002B36CC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802B6790 002B36D0  41 82 00 14 */	beq .L_802B67A4
/* 802B6794 002B36D4  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 802B6798 002B36D8  C0 02 DF 50 */	lfs f0, lbl_8051C2B0@sda21(r2)
/* 802B679C 002B36DC  EC 01 00 2A */	fadds f0, f1, f0
/* 802B67A0 002B36E0  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_802B67A4:
/* 802B67A4 002B36E4  7F C3 F3 78 */	mr r3, r30
/* 802B67A8 002B36E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B67AC 002B36EC  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802B67B0 002B36F0  7D 89 03 A6 */	mtctr r12
/* 802B67B4 002B36F4  4E 80 04 21 */	bctrl 
/* 802B67B8 002B36F8  2C 03 00 5D */	cmpwi r3, 0x5d
/* 802B67BC 002B36FC  40 82 00 10 */	bne .L_802B67CC
/* 802B67C0 002B3700  C0 02 DF 54 */	lfs f0, lbl_8051C2B4@sda21(r2)
/* 802B67C4 002B3704  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802B67C8 002B3708  48 00 00 0C */	b .L_802B67D4
.L_802B67CC:
/* 802B67CC 002B370C  C0 02 DF 44 */	lfs f0, lbl_8051C2A4@sda21(r2)
/* 802B67D0 002B3710  D0 1F 00 1C */	stfs f0, 0x1c(r31)
.L_802B67D4:
/* 802B67D4 002B3714  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B67D8 002B3718  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B67DC 002B371C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B67E0 002B3720  7C 08 03 A6 */	mtlr r0
/* 802B67E4 002B3724  38 21 00 10 */	addi r1, r1, 0x10
/* 802B67E8 002B3728  4E 80 00 20 */	blr 

.global damageCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreaturefP8CollPart
damageCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreaturefP8CollPart:
/* 802B67EC 002B372C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B67F0 002B3730  7C 08 02 A6 */	mflr r0
/* 802B67F4 002B3734  28 05 00 00 */	cmplwi r5, 0
/* 802B67F8 002B3738  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B67FC 002B373C  41 82 00 10 */	beq .L_802B680C
/* 802B6800 002B3740  48 00 0D 7D */	bl damageTreasure__Q34Game11OtakaraBase3ObjFf
/* 802B6804 002B3744  38 60 00 01 */	li r3, 1
/* 802B6808 002B3748  48 00 00 08 */	b .L_802B6810
.L_802B680C:
/* 802B680C 002B374C  38 60 00 00 */	li r3, 0
.L_802B6810:
/* 802B6810 002B3750  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6814 002B3754  7C 08 03 A6 */	mtlr r0
/* 802B6818 002B3758  38 21 00 10 */	addi r1, r1, 0x10
/* 802B681C 002B375C  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreaturefP8CollPart:
/* 802B6820 002B3760  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B6824 002B3764  7C 08 02 A6 */	mflr r0
/* 802B6828 002B3768  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B682C 002B376C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802B6830 002B3770  7C BF 2B 79 */	or. r31, r5, r5
/* 802B6834 002B3774  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802B6838 002B3778  7C 9E 23 78 */	mr r30, r4
/* 802B683C 002B377C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802B6840 002B3780  7C 7D 1B 78 */	mr r29, r3
/* 802B6844 002B3784  41 82 00 24 */	beq .L_802B6868
/* 802B6848 002B3788  80 1D 02 E0 */	lwz r0, 0x2e0(r29)
/* 802B684C 002B378C  28 00 00 00 */	cmplwi r0, 0
/* 802B6850 002B3790  41 82 00 14 */	beq .L_802B6864
/* 802B6854 002B3794  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 802B6858 002B3798  C0 24 08 1C */	lfs f1, 0x81c(r4)
/* 802B685C 002B379C  48 00 0D 21 */	bl damageTreasure__Q34Game11OtakaraBase3ObjFf
/* 802B6860 002B37A0  48 00 00 08 */	b .L_802B6868
.L_802B6864:
/* 802B6864 002B37A4  48 00 0D 19 */	bl damageTreasure__Q34Game11OtakaraBase3ObjFf
.L_802B6868:
/* 802B6868 002B37A8  C0 22 DF 30 */	lfs f1, lbl_8051C290@sda21(r2)
/* 802B686C 002B37AC  7F A3 EB 78 */	mr r3, r29
/* 802B6870 002B37B0  7F C4 F3 78 */	mr r4, r30
/* 802B6874 002B37B4  7F E5 FB 78 */	mr r5, r31
/* 802B6878 002B37B8  4B E4 F8 4D */	bl hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
/* 802B687C 002B37BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B6880 002B37C0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802B6884 002B37C4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802B6888 002B37C8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802B688C 002B37CC  7C 08 03 A6 */	mtlr r0
/* 802B6890 002B37D0  38 21 00 20 */	addi r1, r1, 0x20
/* 802B6894 002B37D4  4E 80 00 20 */	blr 

.global earthquakeCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8Creaturef
earthquakeCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8Creaturef:
/* 802B6898 002B37D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B689C 002B37DC  7C 08 02 A6 */	mflr r0
/* 802B68A0 002B37E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B68A4 002B37E4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802B68A8 002B37E8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802B68AC 002B37EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B68B0 002B37F0  93 C1 00 08 */	stw r30, 8(r1)
/* 802B68B4 002B37F4  7C 7E 1B 78 */	mr r30, r3
/* 802B68B8 002B37F8  FF E0 08 90 */	fmr f31, f1
/* 802B68BC 002B37FC  80 03 02 E0 */	lwz r0, 0x2e0(r3)
/* 802B68C0 002B3800  7C 9F 23 78 */	mr r31, r4
/* 802B68C4 002B3804  28 00 00 00 */	cmplwi r0, 0
/* 802B68C8 002B3808  41 82 00 10 */	beq .L_802B68D8
/* 802B68CC 002B380C  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 802B68D0 002B3810  C0 24 08 1C */	lfs f1, 0x81c(r4)
/* 802B68D4 002B3814  48 00 0C A9 */	bl damageTreasure__Q34Game11OtakaraBase3ObjFf
.L_802B68D8:
/* 802B68D8 002B3818  FC 20 F8 90 */	fmr f1, f31
/* 802B68DC 002B381C  7F C3 F3 78 */	mr r3, r30
/* 802B68E0 002B3820  7F E4 FB 78 */	mr r4, r31
/* 802B68E4 002B3824  4B E4 FA E1 */	bl earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
/* 802B68E8 002B3828  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802B68EC 002B382C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B68F0 002B3830  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802B68F4 002B3834  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B68F8 002B3838  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B68FC 002B383C  7C 08 03 A6 */	mtlr r0
/* 802B6900 002B3840  38 21 00 20 */	addi r1, r1, 0x20
/* 802B6904 002B3844  4E 80 00 20 */	blr 

.global "bombCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreatureR10Vector3<f>f"
"bombCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreatureR10Vector3<f>f":
/* 802B6908 002B3848  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B690C 002B384C  7C 08 02 A6 */	mflr r0
/* 802B6910 002B3850  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6914 002B3854  48 00 0C 69 */	bl damageTreasure__Q34Game11OtakaraBase3ObjFf
/* 802B6918 002B3858  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B691C 002B385C  38 60 00 01 */	li r3, 1
/* 802B6920 002B3860  7C 08 03 A6 */	mtlr r0
/* 802B6924 002B3864  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6928 002B3868  4E 80 00 20 */	blr 

.global doStartStoneState__Q34Game11OtakaraBase3ObjFv
doStartStoneState__Q34Game11OtakaraBase3ObjFv:
/* 802B692C 002B386C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6930 002B3870  7C 08 02 A6 */	mflr r0
/* 802B6934 002B3874  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6938 002B3878  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B693C 002B387C  7C 7F 1B 78 */	mr r31, r3
/* 802B6940 002B3880  4B E4 C5 B5 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802B6944 002B3884  7F E3 FB 78 */	mr r3, r31
/* 802B6948 002B3888  38 80 00 01 */	li r4, 1
/* 802B694C 002B388C  48 00 0B 11 */	bl fallTreasure__Q34Game11OtakaraBase3ObjFb
/* 802B6950 002B3890  7F E3 FB 78 */	mr r3, r31
/* 802B6954 002B3894  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B6958 002B3898  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 802B695C 002B389C  7D 89 03 A6 */	mtctr r12
/* 802B6960 002B38A0  4E 80 04 21 */	bctrl 
/* 802B6964 002B38A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6968 002B38A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B696C 002B38AC  7C 08 03 A6 */	mtlr r0
/* 802B6970 002B38B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6974 002B38B4  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game11OtakaraBase3ObjFv
doFinishStoneState__Q34Game11OtakaraBase3ObjFv:
/* 802B6978 002B38B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B697C 002B38BC  7C 08 02 A6 */	mflr r0
/* 802B6980 002B38C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6984 002B38C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B6988 002B38C8  7C 7F 1B 78 */	mr r31, r3
/* 802B698C 002B38CC  4B E4 C5 7D */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802B6990 002B38D0  88 1F 02 D0 */	lbz r0, 0x2d0(r31)
/* 802B6994 002B38D4  28 00 00 00 */	cmplwi r0, 0
/* 802B6998 002B38D8  41 82 00 18 */	beq .L_802B69B0
/* 802B699C 002B38DC  7F E3 FB 78 */	mr r3, r31
/* 802B69A0 002B38E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B69A4 002B38E4  81 8C 03 08 */	lwz r12, 0x308(r12)
/* 802B69A8 002B38E8  7D 89 03 A6 */	mtctr r12
/* 802B69AC 002B38EC  4E 80 04 21 */	bctrl 
.L_802B69B0:
/* 802B69B0 002B38F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B69B4 002B38F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B69B8 002B38F8  7C 08 03 A6 */	mtlr r0
/* 802B69BC 002B38FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802B69C0 002B3900  4E 80 00 20 */	blr 

.global doStartEarthquakeState__Q34Game11OtakaraBase3ObjFf
doStartEarthquakeState__Q34Game11OtakaraBase3ObjFf:
/* 802B69C4 002B3904  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B69C8 002B3908  7C 08 02 A6 */	mflr r0
/* 802B69CC 002B390C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B69D0 002B3910  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B69D4 002B3914  7C 7F 1B 78 */	mr r31, r3
/* 802B69D8 002B3918  4B E5 0E F5 */	bl doStartEarthquakeState__Q24Game9EnemyBaseFf
/* 802B69DC 002B391C  7F E3 FB 78 */	mr r3, r31
/* 802B69E0 002B3920  38 80 00 01 */	li r4, 1
/* 802B69E4 002B3924  48 00 0A 79 */	bl fallTreasure__Q34Game11OtakaraBase3ObjFb
/* 802B69E8 002B3928  7F E3 FB 78 */	mr r3, r31
/* 802B69EC 002B392C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B69F0 002B3930  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 802B69F4 002B3934  7D 89 03 A6 */	mtctr r12
/* 802B69F8 002B3938  4E 80 04 21 */	bctrl 
/* 802B69FC 002B393C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6A00 002B3940  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B6A04 002B3944  7C 08 03 A6 */	mtlr r0
/* 802B6A08 002B3948  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6A0C 002B394C  4E 80 00 20 */	blr 

.global doFinishEarthquakeState__Q34Game11OtakaraBase3ObjFv
doFinishEarthquakeState__Q34Game11OtakaraBase3ObjFv:
/* 802B6A10 002B3950  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6A14 002B3954  7C 08 02 A6 */	mflr r0
/* 802B6A18 002B3958  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6A1C 002B395C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B6A20 002B3960  7C 7F 1B 78 */	mr r31, r3
/* 802B6A24 002B3964  4B E5 0F 3D */	bl doFinishEarthquakeState__Q24Game9EnemyBaseFv
/* 802B6A28 002B3968  88 1F 02 D0 */	lbz r0, 0x2d0(r31)
/* 802B6A2C 002B396C  28 00 00 00 */	cmplwi r0, 0
/* 802B6A30 002B3970  41 82 00 18 */	beq .L_802B6A48
/* 802B6A34 002B3974  7F E3 FB 78 */	mr r3, r31
/* 802B6A38 002B3978  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B6A3C 002B397C  81 8C 03 08 */	lwz r12, 0x308(r12)
/* 802B6A40 002B3980  7D 89 03 A6 */	mtctr r12
/* 802B6A44 002B3984  4E 80 04 21 */	bctrl 
.L_802B6A48:
/* 802B6A48 002B3988  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6A4C 002B398C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B6A50 002B3990  7C 08 03 A6 */	mtlr r0
/* 802B6A54 002B3994  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6A58 002B3998  4E 80 00 20 */	blr 

.global doStartEarthquakeFitState__Q34Game11OtakaraBase3ObjFv
doStartEarthquakeFitState__Q34Game11OtakaraBase3ObjFv:
/* 802B6A5C 002B399C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6A60 002B39A0  7C 08 02 A6 */	mflr r0
/* 802B6A64 002B39A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6A68 002B39A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B6A6C 002B39AC  7C 7F 1B 78 */	mr r31, r3
/* 802B6A70 002B39B0  4B E5 0E F5 */	bl doStartEarthquakeFitState__Q24Game9EnemyBaseFv
/* 802B6A74 002B39B4  7F E3 FB 78 */	mr r3, r31
/* 802B6A78 002B39B8  38 80 00 01 */	li r4, 1
/* 802B6A7C 002B39BC  48 00 09 E1 */	bl fallTreasure__Q34Game11OtakaraBase3ObjFb
/* 802B6A80 002B39C0  7F E3 FB 78 */	mr r3, r31
/* 802B6A84 002B39C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B6A88 002B39C8  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 802B6A8C 002B39CC  7D 89 03 A6 */	mtctr r12
/* 802B6A90 002B39D0  4E 80 04 21 */	bctrl 
/* 802B6A94 002B39D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6A98 002B39D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B6A9C 002B39DC  7C 08 03 A6 */	mtlr r0
/* 802B6AA0 002B39E0  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6AA4 002B39E4  4E 80 00 20 */	blr 

.global doFinishEarthquakeFitState__Q34Game11OtakaraBase3ObjFv
doFinishEarthquakeFitState__Q34Game11OtakaraBase3ObjFv:
/* 802B6AA8 002B39E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6AAC 002B39EC  7C 08 02 A6 */	mflr r0
/* 802B6AB0 002B39F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6AB4 002B39F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B6AB8 002B39F8  7C 7F 1B 78 */	mr r31, r3
/* 802B6ABC 002B39FC  4B E5 0E AD */	bl doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
/* 802B6AC0 002B3A00  88 1F 02 D0 */	lbz r0, 0x2d0(r31)
/* 802B6AC4 002B3A04  28 00 00 00 */	cmplwi r0, 0
/* 802B6AC8 002B3A08  41 82 00 18 */	beq .L_802B6AE0
/* 802B6ACC 002B3A0C  7F E3 FB 78 */	mr r3, r31
/* 802B6AD0 002B3A10  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B6AD4 002B3A14  81 8C 03 08 */	lwz r12, 0x308(r12)
/* 802B6AD8 002B3A18  7D 89 03 A6 */	mtctr r12
/* 802B6ADC 002B3A1C  4E 80 04 21 */	bctrl 
.L_802B6AE0:
/* 802B6AE0 002B3A20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6AE4 002B3A24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B6AE8 002B3A28  7C 08 03 A6 */	mtlr r0
/* 802B6AEC 002B3A2C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6AF0 002B3A30  4E 80 00 20 */	blr 

.global doStartWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv
doStartWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv:
/* 802B6AF4 002B3A34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6AF8 002B3A38  7C 08 02 A6 */	mflr r0
/* 802B6AFC 002B3A3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6B00 002B3A40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B6B04 002B3A44  7C 7F 1B 78 */	mr r31, r3
/* 802B6B08 002B3A48  4B E5 0E 91 */	bl doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 802B6B0C 002B3A4C  7F E3 FB 78 */	mr r3, r31
/* 802B6B10 002B3A50  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B6B14 002B3A54  81 8C 03 18 */	lwz r12, 0x318(r12)
/* 802B6B18 002B3A58  7D 89 03 A6 */	mtctr r12
/* 802B6B1C 002B3A5C  4E 80 04 21 */	bctrl 
/* 802B6B20 002B3A60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6B24 002B3A64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B6B28 002B3A68  7C 08 03 A6 */	mtlr r0
/* 802B6B2C 002B3A6C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6B30 002B3A70  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game11OtakaraBase3ObjFv
effectDrawOff__Q34Game11OtakaraBase3ObjFv:
/* 802B6B34 002B3A74  4E 80 00 20 */	blr 

.global doFinishWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv
doFinishWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv:
/* 802B6B38 002B3A78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6B3C 002B3A7C  7C 08 02 A6 */	mflr r0
/* 802B6B40 002B3A80  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6B44 002B3A84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B6B48 002B3A88  7C 7F 1B 78 */	mr r31, r3
/* 802B6B4C 002B3A8C  4B E5 0E 7D */	bl doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 802B6B50 002B3A90  7F E3 FB 78 */	mr r3, r31
/* 802B6B54 002B3A94  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B6B58 002B3A98  81 8C 03 14 */	lwz r12, 0x314(r12)
/* 802B6B5C 002B3A9C  7D 89 03 A6 */	mtctr r12
/* 802B6B60 002B3AA0  4E 80 04 21 */	bctrl 
/* 802B6B64 002B3AA4  7F E3 FB 78 */	mr r3, r31
/* 802B6B68 002B3AA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B6B6C 002B3AAC  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802B6B70 002B3AB0  7D 89 03 A6 */	mtctr r12
/* 802B6B74 002B3AB4  4E 80 04 21 */	bctrl 
/* 802B6B78 002B3AB8  2C 03 00 5D */	cmpwi r3, 0x5d
/* 802B6B7C 002B3ABC  40 82 00 0C */	bne .L_802B6B88
/* 802B6B80 002B3AC0  7F E3 FB 78 */	mr r3, r31
/* 802B6B84 002B3AC4  48 00 0D B5 */	bl initBombOtakara__Q34Game11OtakaraBase3ObjFv
.L_802B6B88:
/* 802B6B88 002B3AC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6B8C 002B3ACC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B6B90 002B3AD0  7C 08 03 A6 */	mtlr r0
/* 802B6B94 002B3AD4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6B98 002B3AD8  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game11OtakaraBase3ObjFv
effectDrawOn__Q34Game11OtakaraBase3ObjFv:
/* 802B6B9C 002B3ADC  4E 80 00 20 */	blr 

.global startCarcassMotion__Q34Game11OtakaraBase3ObjFv
startCarcassMotion__Q34Game11OtakaraBase3ObjFv:
/* 802B6BA0 002B3AE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6BA4 002B3AE4  7C 08 02 A6 */	mflr r0
/* 802B6BA8 002B3AE8  38 80 00 0B */	li r4, 0xb
/* 802B6BAC 002B3AEC  38 A0 00 00 */	li r5, 0
/* 802B6BB0 002B3AF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6BB4 002B3AF4  4B E4 E4 51 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B6BB8 002B3AF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6BBC 002B3AFC  7C 08 03 A6 */	mtlr r0
/* 802B6BC0 002B3B00  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6BC4 002B3B04  4E 80 00 20 */	blr 

.global doStartMovie__Q34Game11OtakaraBase3ObjFv
doStartMovie__Q34Game11OtakaraBase3ObjFv:
/* 802B6BC8 002B3B08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6BCC 002B3B0C  7C 08 02 A6 */	mflr r0
/* 802B6BD0 002B3B10  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6BD4 002B3B14  81 83 00 00 */	lwz r12, 0(r3)
/* 802B6BD8 002B3B18  81 8C 03 18 */	lwz r12, 0x318(r12)
/* 802B6BDC 002B3B1C  7D 89 03 A6 */	mtctr r12
/* 802B6BE0 002B3B20  4E 80 04 21 */	bctrl 
/* 802B6BE4 002B3B24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6BE8 002B3B28  7C 08 03 A6 */	mtlr r0
/* 802B6BEC 002B3B2C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6BF0 002B3B30  4E 80 00 20 */	blr 

.global doEndMovie__Q34Game11OtakaraBase3ObjFv
doEndMovie__Q34Game11OtakaraBase3ObjFv:
/* 802B6BF4 002B3B34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6BF8 002B3B38  7C 08 02 A6 */	mflr r0
/* 802B6BFC 002B3B3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6C00 002B3B40  81 83 00 00 */	lwz r12, 0(r3)
/* 802B6C04 002B3B44  81 8C 03 14 */	lwz r12, 0x314(r12)
/* 802B6C08 002B3B48  7D 89 03 A6 */	mtctr r12
/* 802B6C0C 002B3B4C  4E 80 04 21 */	bctrl 
/* 802B6C10 002B3B50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6C14 002B3B54  7C 08 03 A6 */	mtlr r0
/* 802B6C18 002B3B58  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6C1C 002B3B5C  4E 80 00 20 */	blr 

.global isMovePositionSet__Q34Game11OtakaraBase3ObjFb
isMovePositionSet__Q34Game11OtakaraBase3ObjFb:
/* 802B6C20 002B3B60  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802B6C24 002B3B64  7C 08 02 A6 */	mflr r0
/* 802B6C28 002B3B68  90 01 00 44 */	stw r0, 0x44(r1)
/* 802B6C2C 002B3B6C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802B6C30 002B3B70  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802B6C34 002B3B74  3B E0 00 00 */	li r31, 0
/* 802B6C38 002B3B78  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802B6C3C 002B3B7C  7C 7E 1B 78 */	mr r30, r3
/* 802B6C40 002B3B80  40 82 00 24 */	bne .L_802B6C64
/* 802B6C44 002B3B84  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 802B6C48 002B3B88  C0 3E 02 E8 */	lfs f1, 0x2e8(r30)
/* 802B6C4C 002B3B8C  C0 04 08 94 */	lfs f0, 0x894(r4)
/* 802B6C50 002B3B90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B6C54 002B3B94  40 81 00 10 */	ble .L_802B6C64
/* 802B6C58 002B3B98  48 00 01 09 */	bl getNearestTreasure__Q34Game11OtakaraBase3ObjFv
/* 802B6C5C 002B3B9C  7C 7F 1B 78 */	mr r31, r3
/* 802B6C60 002B3BA0  48 00 00 18 */	b .L_802B6C78
.L_802B6C64:
/* 802B6C64 002B3BA4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802B6C68 002B3BA8  C0 3E 02 E8 */	lfs f1, 0x2e8(r30)
/* 802B6C6C 002B3BAC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802B6C70 002B3BB0  EC 01 00 2A */	fadds f0, f1, f0
/* 802B6C74 002B3BB4  D0 1E 02 E8 */	stfs f0, 0x2e8(r30)
.L_802B6C78:
/* 802B6C78 002B3BB8  28 1F 00 00 */	cmplwi r31, 0
/* 802B6C7C 002B3BBC  41 82 00 3C */	beq .L_802B6CB8
/* 802B6C80 002B3BC0  7F E4 FB 78 */	mr r4, r31
/* 802B6C84 002B3BC4  38 61 00 14 */	addi r3, r1, 0x14
/* 802B6C88 002B3BC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B6C8C 002B3BCC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B6C90 002B3BD0  7D 89 03 A6 */	mtctr r12
/* 802B6C94 002B3BD4  4E 80 04 21 */	bctrl 
/* 802B6C98 002B3BD8  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 802B6C9C 002B3BDC  D0 1E 02 D4 */	stfs f0, 0x2d4(r30)
/* 802B6CA0 002B3BE0  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 802B6CA4 002B3BE4  D0 1E 02 D8 */	stfs f0, 0x2d8(r30)
/* 802B6CA8 002B3BE8  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802B6CAC 002B3BEC  D0 1E 02 DC */	stfs f0, 0x2dc(r30)
/* 802B6CB0 002B3BF0  93 FE 02 30 */	stw r31, 0x230(r30)
/* 802B6CB4 002B3BF4  48 00 00 80 */	b .L_802B6D34
.L_802B6CB8:
/* 802B6CB8 002B3BF8  80 FE 02 E0 */	lwz r7, 0x2e0(r30)
/* 802B6CBC 002B3BFC  3C 60 80 4B */	lis r3, "__vt__23Condition<Q24Game4Piki>"@ha
/* 802B6CC0 002B3C00  38 03 BC 60 */	addi r0, r3, "__vt__23Condition<Q24Game4Piki>"@l
/* 802B6CC4 002B3C04  3C 60 80 4D */	lis r3, __vt__Q24Game30ConditionNotStickClientAndItem@ha
/* 802B6CC8 002B3C08  90 01 00 20 */	stw r0, 0x20(r1)
/* 802B6CCC 002B3C0C  38 03 F0 78 */	addi r0, r3, __vt__Q24Game30ConditionNotStickClientAndItem@l
/* 802B6CD0 002B3C10  7F C3 F3 78 */	mr r3, r30
/* 802B6CD4 002B3C14  38 C1 00 20 */	addi r6, r1, 0x20
/* 802B6CD8 002B3C18  90 01 00 20 */	stw r0, 0x20(r1)
/* 802B6CDC 002B3C1C  38 80 00 00 */	li r4, 0
/* 802B6CE0 002B3C20  38 A0 00 00 */	li r5, 0
/* 802B6CE4 002B3C24  93 C1 00 24 */	stw r30, 0x24(r1)
/* 802B6CE8 002B3C28  90 E1 00 28 */	stw r7, 0x28(r1)
/* 802B6CEC 002B3C2C  80 FE 00 C0 */	lwz r7, 0xc0(r30)
/* 802B6CF0 002B3C30  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 802B6CF4 002B3C34  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 802B6CF8 002B3C38  4B E5 C3 59 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 802B6CFC 002B3C3C  7C 7F 1B 79 */	or. r31, r3, r3
/* 802B6D00 002B3C40  41 82 00 2C */	beq .L_802B6D2C
/* 802B6D04 002B3C44  7F C4 F3 78 */	mr r4, r30
/* 802B6D08 002B3C48  7F E5 FB 78 */	mr r5, r31
/* 802B6D0C 002B3C4C  38 61 00 08 */	addi r3, r1, 8
/* 802B6D10 002B3C50  48 00 01 99 */	bl getTargetPosition__Q34Game11OtakaraBase3ObjFPQ24Game8Creature
/* 802B6D14 002B3C54  C0 01 00 08 */	lfs f0, 8(r1)
/* 802B6D18 002B3C58  D0 1E 02 D4 */	stfs f0, 0x2d4(r30)
/* 802B6D1C 002B3C5C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802B6D20 002B3C60  D0 1E 02 D8 */	stfs f0, 0x2d8(r30)
/* 802B6D24 002B3C64  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802B6D28 002B3C68  D0 1E 02 DC */	stfs f0, 0x2dc(r30)
.L_802B6D2C:
/* 802B6D2C 002B3C6C  38 00 00 00 */	li r0, 0
/* 802B6D30 002B3C70  90 1E 02 30 */	stw r0, 0x230(r30)
.L_802B6D34:
/* 802B6D34 002B3C74  28 1F 00 00 */	cmplwi r31, 0
/* 802B6D38 002B3C78  41 82 00 0C */	beq .L_802B6D44
/* 802B6D3C 002B3C7C  38 60 00 01 */	li r3, 1
/* 802B6D40 002B3C80  48 00 00 08 */	b .L_802B6D48
.L_802B6D44:
/* 802B6D44 002B3C84  38 60 00 00 */	li r3, 0
.L_802B6D48:
/* 802B6D48 002B3C88  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802B6D4C 002B3C8C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802B6D50 002B3C90  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802B6D54 002B3C94  7C 08 03 A6 */	mtlr r0
/* 802B6D58 002B3C98  38 21 00 40 */	addi r1, r1, 0x40
/* 802B6D5C 002B3C9C  4E 80 00 20 */	blr 

.global getNearestTreasure__Q34Game11OtakaraBase3ObjFv
getNearestTreasure__Q34Game11OtakaraBase3ObjFv:
/* 802B6D60 002B3CA0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802B6D64 002B3CA4  7C 08 02 A6 */	mflr r0
/* 802B6D68 002B3CA8  90 01 00 54 */	stw r0, 0x54(r1)
/* 802B6D6C 002B3CAC  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802B6D70 002B3CB0  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802B6D74 002B3CB4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802B6D78 002B3CB8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802B6D7C 002B3CBC  93 A1 00 34 */	stw r29, 0x34(r1)
/* 802B6D80 002B3CC0  7C 7D 1B 78 */	mr r29, r3
/* 802B6D84 002B3CC4  38 61 00 14 */	addi r3, r1, 0x14
/* 802B6D88 002B3CC8  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 802B6D8C 002B3CCC  3B E0 00 00 */	li r31, 0
/* 802B6D90 002B3CD0  C0 04 03 D4 */	lfs f0, 0x3d4(r4)
/* 802B6D94 002B3CD4  EF E0 00 32 */	fmuls f31, f0, f0
/* 802B6D98 002B3CD8  4B EB 5B D1 */	bl __ct__Q24Game14PelletIteratorFv
/* 802B6D9C 002B3CDC  38 61 00 14 */	addi r3, r1, 0x14
/* 802B6DA0 002B3CE0  4B EB 5B E1 */	bl first__Q24Game14PelletIteratorFv
/* 802B6DA4 002B3CE4  48 00 00 CC */	b .L_802B6E70
.L_802B6DA8:
/* 802B6DA8 002B3CE8  38 61 00 14 */	addi r3, r1, 0x14
/* 802B6DAC 002B3CEC  4B EB 5C 21 */	bl __ml__Q24Game14PelletIteratorFv
/* 802B6DB0 002B3CF0  81 83 00 00 */	lwz r12, 0(r3)
/* 802B6DB4 002B3CF4  7C 7E 1B 78 */	mr r30, r3
/* 802B6DB8 002B3CF8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802B6DBC 002B3CFC  7D 89 03 A6 */	mtctr r12
/* 802B6DC0 002B3D00  4E 80 04 21 */	bctrl 
/* 802B6DC4 002B3D04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B6DC8 002B3D08  41 82 00 A0 */	beq .L_802B6E68
/* 802B6DCC 002B3D0C  80 1E 00 B8 */	lwz r0, 0xb8(r30)
/* 802B6DD0 002B3D10  28 00 00 00 */	cmplwi r0, 0
/* 802B6DD4 002B3D14  40 82 00 94 */	bne .L_802B6E68
/* 802B6DD8 002B3D18  7F C3 F3 78 */	mr r3, r30
/* 802B6DDC 002B3D1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B6DE0 002B3D20  81 8C 01 E4 */	lwz r12, 0x1e4(r12)
/* 802B6DE4 002B3D24  7D 89 03 A6 */	mtctr r12
/* 802B6DE8 002B3D28  4E 80 04 21 */	bctrl 
/* 802B6DEC 002B3D2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B6DF0 002B3D30  41 82 00 78 */	beq .L_802B6E68
/* 802B6DF4 002B3D34  7F C4 F3 78 */	mr r4, r30
/* 802B6DF8 002B3D38  38 61 00 08 */	addi r3, r1, 8
/* 802B6DFC 002B3D3C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B6E00 002B3D40  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B6E04 002B3D44  7D 89 03 A6 */	mtctr r12
/* 802B6E08 002B3D48  4E 80 04 21 */	bctrl 
/* 802B6E0C 002B3D4C  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 802B6E10 002B3D50  C0 1D 01 A0 */	lfs f0, 0x1a0(r29)
/* 802B6E14 002B3D54  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 802B6E18 002B3D58  EC 44 00 28 */	fsubs f2, f4, f0
/* 802B6E1C 002B3D5C  C0 A1 00 08 */	lfs f5, 8(r1)
/* 802B6E20 002B3D60  C0 3D 01 98 */	lfs f1, 0x198(r29)
/* 802B6E24 002B3D64  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 802B6E28 002B3D68  EC 65 08 28 */	fsubs f3, f5, f1
/* 802B6E2C 002B3D6C  EC 22 00 B2 */	fmuls f1, f2, f2
/* 802B6E30 002B3D70  EC 00 00 32 */	fmuls f0, f0, f0
/* 802B6E34 002B3D74  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 802B6E38 002B3D78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B6E3C 002B3D7C  40 80 00 2C */	bge .L_802B6E68
/* 802B6E40 002B3D80  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 802B6E44 002B3D84  C0 3D 01 8C */	lfs f1, 0x18c(r29)
/* 802B6E48 002B3D88  EC 00 20 28 */	fsubs f0, f0, f4
/* 802B6E4C 002B3D8C  EC 21 28 28 */	fsubs f1, f1, f5
/* 802B6E50 002B3D90  EC 00 00 32 */	fmuls f0, f0, f0
/* 802B6E54 002B3D94  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802B6E58 002B3D98  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802B6E5C 002B3D9C  40 80 00 0C */	bge .L_802B6E68
/* 802B6E60 002B3DA0  7F DF F3 78 */	mr r31, r30
/* 802B6E64 002B3DA4  FF E0 00 90 */	fmr f31, f0
.L_802B6E68:
/* 802B6E68 002B3DA8  38 61 00 14 */	addi r3, r1, 0x14
/* 802B6E6C 002B3DAC  4B EB 5B C9 */	bl next__Q24Game14PelletIteratorFv
.L_802B6E70:
/* 802B6E70 002B3DB0  38 61 00 14 */	addi r3, r1, 0x14
/* 802B6E74 002B3DB4  4B EB 5C 81 */	bl isDone__Q24Game14PelletIteratorFv
/* 802B6E78 002B3DB8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B6E7C 002B3DBC  41 82 FF 2C */	beq .L_802B6DA8
/* 802B6E80 002B3DC0  7F E3 FB 78 */	mr r3, r31
/* 802B6E84 002B3DC4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802B6E88 002B3DC8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802B6E8C 002B3DCC  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802B6E90 002B3DD0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802B6E94 002B3DD4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802B6E98 002B3DD8  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 802B6E9C 002B3DDC  7C 08 03 A6 */	mtlr r0
/* 802B6EA0 002B3DE0  38 21 00 50 */	addi r1, r1, 0x50
/* 802B6EA4 002B3DE4  4E 80 00 20 */	blr 

.global getTargetPosition__Q34Game11OtakaraBase3ObjFPQ24Game8Creature
getTargetPosition__Q34Game11OtakaraBase3ObjFPQ24Game8Creature:
/* 802B6EA8 002B3DE8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802B6EAC 002B3DEC  7C 08 02 A6 */	mflr r0
/* 802B6EB0 002B3DF0  90 01 00 64 */	stw r0, 0x64(r1)
/* 802B6EB4 002B3DF4  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 802B6EB8 002B3DF8  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 802B6EBC 002B3DFC  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 802B6EC0 002B3E00  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 802B6EC4 002B3E04  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 802B6EC8 002B3E08  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 802B6ECC 002B3E0C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802B6ED0 002B3E10  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802B6ED4 002B3E14  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802B6ED8 002B3E18  81 84 00 00 */	lwz r12, 0(r4)
/* 802B6EDC 002B3E1C  7C 7D 1B 78 */	mr r29, r3
/* 802B6EE0 002B3E20  7C 9E 23 78 */	mr r30, r4
/* 802B6EE4 002B3E24  7C BF 2B 78 */	mr r31, r5
/* 802B6EE8 002B3E28  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B6EEC 002B3E2C  38 61 00 14 */	addi r3, r1, 0x14
/* 802B6EF0 002B3E30  7D 89 03 A6 */	mtctr r12
/* 802B6EF4 002B3E34  4E 80 04 21 */	bctrl 
/* 802B6EF8 002B3E38  7F E4 FB 78 */	mr r4, r31
/* 802B6EFC 002B3E3C  38 61 00 08 */	addi r3, r1, 8
/* 802B6F00 002B3E40  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B6F04 002B3E44  C3 C1 00 14 */	lfs f30, 0x14(r1)
/* 802B6F08 002B3E48  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B6F0C 002B3E4C  C3 E1 00 18 */	lfs f31, 0x18(r1)
/* 802B6F10 002B3E50  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 802B6F14 002B3E54  7D 89 03 A6 */	mtctr r12
/* 802B6F18 002B3E58  4E 80 04 21 */	bctrl 
/* 802B6F1C 002B3E5C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802B6F20 002B3E60  C0 41 00 08 */	lfs f2, 8(r1)
/* 802B6F24 002B3E64  EC 3D 00 28 */	fsubs f1, f29, f0
/* 802B6F28 002B3E68  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B6F2C 002B3E6C  ED 1E 10 28 */	fsubs f8, f30, f2
/* 802B6F30 002B3E70  C0 BE 01 98 */	lfs f5, 0x198(r30)
/* 802B6F34 002B3E74  C0 DE 01 9C */	lfs f6, 0x19c(r30)
/* 802B6F38 002B3E78  EC 61 00 72 */	fmuls f3, f1, f1
/* 802B6F3C 002B3E7C  EC 48 02 3A */	fmadds f2, f8, f8, f0
/* 802B6F40 002B3E80  C0 FE 01 A0 */	lfs f7, 0x1a0(r30)
/* 802B6F44 002B3E84  EC 63 10 2A */	fadds f3, f3, f2
/* 802B6F48 002B3E88  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802B6F4C 002B3E8C  40 81 00 14 */	ble .L_802B6F60
/* 802B6F50 002B3E90  40 81 00 14 */	ble .L_802B6F64
/* 802B6F54 002B3E94  FC 40 18 34 */	frsqrte f2, f3
/* 802B6F58 002B3E98  EC 62 00 F2 */	fmuls f3, f2, f3
/* 802B6F5C 002B3E9C  48 00 00 08 */	b .L_802B6F64
.L_802B6F60:
/* 802B6F60 002B3EA0  FC 60 00 90 */	fmr f3, f0
.L_802B6F64:
/* 802B6F64 002B3EA4  C0 42 DF 30 */	lfs f2, lbl_8051C290@sda21(r2)
/* 802B6F68 002B3EA8  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 802B6F6C 002B3EAC  40 81 00 18 */	ble .L_802B6F84
/* 802B6F70 002B3EB0  C0 42 DF 38 */	lfs f2, lbl_8051C298@sda21(r2)
/* 802B6F74 002B3EB4  EC 42 18 24 */	fdivs f2, f2, f3
/* 802B6F78 002B3EB8  ED 08 00 B2 */	fmuls f8, f8, f2
/* 802B6F7C 002B3EBC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 802B6F80 002B3EC0  EC 21 00 B2 */	fmuls f1, f1, f2
.L_802B6F84:
/* 802B6F84 002B3EC4  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802B6F88 002B3EC8  C0 43 02 E4 */	lfs f2, 0x2e4(r3)
/* 802B6F8C 002B3ECC  C1 23 03 5C */	lfs f9, 0x35c(r3)
/* 802B6F90 002B3ED0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802B6F94 002B3ED4  ED 08 00 B2 */	fmuls f8, f8, f2
/* 802B6F98 002B3ED8  EC 00 00 B2 */	fmuls f0, f0, f2
/* 802B6F9C 002B3EDC  EC 21 E8 2A */	fadds f1, f1, f29
/* 802B6FA0 002B3EE0  ED 08 F0 2A */	fadds f8, f8, f30
/* 802B6FA4 002B3EE4  EC 49 02 72 */	fmuls f2, f9, f9
/* 802B6FA8 002B3EE8  EC 61 38 28 */	fsubs f3, f1, f7
/* 802B6FAC 002B3EEC  EC 88 28 28 */	fsubs f4, f8, f5
/* 802B6FB0 002B3EF0  EC 00 F8 2A */	fadds f0, f0, f31
/* 802B6FB4 002B3EF4  EC 63 00 F2 */	fmuls f3, f3, f3
/* 802B6FB8 002B3EF8  EC 64 19 3A */	fmadds f3, f4, f4, f3
/* 802B6FBC 002B3EFC  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 802B6FC0 002B3F00  40 81 00 70 */	ble .L_802B7030
/* 802B6FC4 002B3F04  EC 21 38 28 */	fsubs f1, f1, f7
/* 802B6FC8 002B3F08  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B6FCC 002B3F0C  ED 08 28 28 */	fsubs f8, f8, f5
/* 802B6FD0 002B3F10  EC 61 00 72 */	fmuls f3, f1, f1
/* 802B6FD4 002B3F14  EC 48 02 3A */	fmadds f2, f8, f8, f0
/* 802B6FD8 002B3F18  EC 63 10 2A */	fadds f3, f3, f2
/* 802B6FDC 002B3F1C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802B6FE0 002B3F20  40 81 00 14 */	ble .L_802B6FF4
/* 802B6FE4 002B3F24  40 81 00 14 */	ble .L_802B6FF8
/* 802B6FE8 002B3F28  FC 40 18 34 */	frsqrte f2, f3
/* 802B6FEC 002B3F2C  EC 62 00 F2 */	fmuls f3, f2, f3
/* 802B6FF0 002B3F30  48 00 00 08 */	b .L_802B6FF8
.L_802B6FF4:
/* 802B6FF4 002B3F34  FC 60 00 90 */	fmr f3, f0
.L_802B6FF8:
/* 802B6FF8 002B3F38  C0 42 DF 30 */	lfs f2, lbl_8051C290@sda21(r2)
/* 802B6FFC 002B3F3C  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 802B7000 002B3F40  40 81 00 18 */	ble .L_802B7018
/* 802B7004 002B3F44  C0 42 DF 38 */	lfs f2, lbl_8051C298@sda21(r2)
/* 802B7008 002B3F48  EC 42 18 24 */	fdivs f2, f2, f3
/* 802B700C 002B3F4C  ED 08 00 B2 */	fmuls f8, f8, f2
/* 802B7010 002B3F50  EC 00 00 B2 */	fmuls f0, f0, f2
/* 802B7014 002B3F54  EC 21 00 B2 */	fmuls f1, f1, f2
.L_802B7018:
/* 802B7018 002B3F58  ED 08 02 72 */	fmuls f8, f8, f9
/* 802B701C 002B3F5C  EC 00 02 72 */	fmuls f0, f0, f9
/* 802B7020 002B3F60  EC 21 02 72 */	fmuls f1, f1, f9
/* 802B7024 002B3F64  ED 08 28 2A */	fadds f8, f8, f5
/* 802B7028 002B3F68  EC 00 30 2A */	fadds f0, f0, f6
/* 802B702C 002B3F6C  EC 21 38 2A */	fadds f1, f1, f7
.L_802B7030:
/* 802B7030 002B3F70  D1 1D 00 00 */	stfs f8, 0(r29)
/* 802B7034 002B3F74  D0 1D 00 04 */	stfs f0, 4(r29)
/* 802B7038 002B3F78  D0 3D 00 08 */	stfs f1, 8(r29)
/* 802B703C 002B3F7C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 802B7040 002B3F80  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 802B7044 002B3F84  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 802B7048 002B3F88  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 802B704C 002B3F8C  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 802B7050 002B3F90  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 802B7054 002B3F94  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802B7058 002B3F98  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802B705C 002B3F9C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802B7060 002B3FA0  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802B7064 002B3FA4  7C 08 03 A6 */	mtlr r0
/* 802B7068 002B3FA8  38 21 00 60 */	addi r1, r1, 0x60
/* 802B706C 002B3FAC  4E 80 00 20 */	blr 

.global resetTreasure__Q34Game11OtakaraBase3ObjFv
resetTreasure__Q34Game11OtakaraBase3ObjFv:
/* 802B7070 002B3FB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B7074 002B3FB4  7C 08 02 A6 */	mflr r0
/* 802B7078 002B3FB8  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B707C 002B3FBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B7080 002B3FC0  38 00 00 00 */	li r0, 0
/* 802B7084 002B3FC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B7088 002B3FC8  7C 7F 1B 78 */	mr r31, r3
/* 802B708C 002B3FCC  90 03 02 E0 */	stw r0, 0x2e0(r3)
/* 802B7090 002B3FD0  3C 60 62 6F */	lis r3, 0x626F6479@ha
/* 802B7094 002B3FD4  38 83 64 79 */	addi r4, r3, 0x626F6479@l
/* 802B7098 002B3FD8  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 802B709C 002B3FDC  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 802B70A0 002B3FE0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B70A4 002B3FE4  C0 03 01 CC */	lfs f0, 0x1cc(r3)
/* 802B70A8 002B3FE8  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
/* 802B70AC 002B3FEC  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 802B70B0 002B3FF0  4B E7 ED 95 */	bl getCollPart__8CollTreeFUl
/* 802B70B4 002B3FF4  C0 02 DF 58 */	lfs f0, lbl_8051C2B8@sda21(r2)
/* 802B70B8 002B3FF8  38 80 00 00 */	li r4, 0
/* 802B70BC 002B3FFC  C0 42 DF 30 */	lfs f2, lbl_8051C290@sda21(r2)
/* 802B70C0 002B4000  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802B70C4 002B4004  C0 02 DF 5C */	lfs f0, lbl_8051C2BC@sda21(r2)
/* 802B70C8 002B4008  FC 60 10 90 */	fmr f3, f2
/* 802B70CC 002B400C  D0 43 00 24 */	stfs f2, 0x24(r3)
/* 802B70D0 002B4010  7F E3 FB 78 */	mr r3, r31
/* 802B70D4 002B4014  C0 22 DF 38 */	lfs f1, lbl_8051C298@sda21(r2)
/* 802B70D8 002B4018  80 BF 01 14 */	lwz r5, 0x114(r31)
/* 802B70DC 002B401C  C0 82 DF 60 */	lfs f4, lbl_8051C2C0@sda21(r2)
/* 802B70E0 002B4020  80 A5 00 00 */	lwz r5, 0(r5)
/* 802B70E4 002B4024  D0 05 00 1C */	stfs f0, 0x1c(r5)
/* 802B70E8 002B4028  D0 45 00 24 */	stfs f2, 0x24(r5)
/* 802B70EC 002B402C  4B E5 C0 31 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802B70F0 002B4030  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B70F4 002B4034  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B70F8 002B4038  7C 08 03 A6 */	mtlr r0
/* 802B70FC 002B403C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B7100 002B4040  4E 80 00 20 */	blr 

.global isTakeTreasure__Q34Game11OtakaraBase3ObjFv
isTakeTreasure__Q34Game11OtakaraBase3ObjFv:
/* 802B7104 002B4044  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802B7108 002B4048  7C 08 02 A6 */	mflr r0
/* 802B710C 002B404C  90 01 00 54 */	stw r0, 0x54(r1)
/* 802B7110 002B4050  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802B7114 002B4054  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802B7118 002B4058  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 802B711C 002B405C  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 802B7120 002B4060  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 802B7124 002B4064  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 802B7128 002B4068  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802B712C 002B406C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802B7130 002B4070  7C 7E 1B 78 */	mr r30, r3
/* 802B7134 002B4074  83 E3 02 30 */	lwz r31, 0x230(r3)
/* 802B7138 002B4078  28 1F 00 00 */	cmplwi r31, 0
/* 802B713C 002B407C  41 82 00 A0 */	beq .L_802B71DC
/* 802B7140 002B4080  7F E4 FB 78 */	mr r4, r31
/* 802B7144 002B4084  38 61 00 08 */	addi r3, r1, 8
/* 802B7148 002B4088  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B714C 002B408C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B7150 002B4090  7D 89 03 A6 */	mtctr r12
/* 802B7154 002B4094  4E 80 04 21 */	bctrl 
/* 802B7158 002B4098  C3 E1 00 08 */	lfs f31, 8(r1)
/* 802B715C 002B409C  7F E3 FB 78 */	mr r3, r31
/* 802B7160 002B40A0  C3 C1 00 0C */	lfs f30, 0xc(r1)
/* 802B7164 002B40A4  C3 A1 00 10 */	lfs f29, 0x10(r1)
/* 802B7168 002B40A8  4B EA F8 61 */	bl getPickRadius__Q24Game6PelletFv
/* 802B716C 002B40AC  C0 42 DF 5C */	lfs f2, lbl_8051C2BC@sda21(r2)
/* 802B7170 002B40B0  C0 02 DF 4C */	lfs f0, lbl_8051C2AC@sda21(r2)
/* 802B7174 002B40B4  EC A2 08 2A */	fadds f5, f2, f1
/* 802B7178 002B40B8  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802B717C 002B40BC  40 80 00 08 */	bge .L_802B7184
/* 802B7180 002B40C0  FC A0 00 90 */	fmr f5, f0
.L_802B7184:
/* 802B7184 002B40C4  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 802B7188 002B40C8  C0 5E 01 8C */	lfs f2, 0x18c(r30)
/* 802B718C 002B40CC  EC 7E 00 28 */	fsubs f3, f30, f0
/* 802B7190 002B40D0  C0 3E 01 94 */	lfs f1, 0x194(r30)
/* 802B7194 002B40D4  EC 5F 10 28 */	fsubs f2, f31, f2
/* 802B7198 002B40D8  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B719C 002B40DC  EC 3D 08 28 */	fsubs f1, f29, f1
/* 802B71A0 002B40E0  EC 63 00 F2 */	fmuls f3, f3, f3
/* 802B71A4 002B40E4  EC 81 00 72 */	fmuls f4, f1, f1
/* 802B71A8 002B40E8  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 802B71AC 002B40EC  EC 24 08 2A */	fadds f1, f4, f1
/* 802B71B0 002B40F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B71B4 002B40F4  40 81 00 14 */	ble .L_802B71C8
/* 802B71B8 002B40F8  40 81 00 14 */	ble .L_802B71CC
/* 802B71BC 002B40FC  FC 00 08 34 */	frsqrte f0, f1
/* 802B71C0 002B4100  EC 20 00 72 */	fmuls f1, f0, f1
/* 802B71C4 002B4104  48 00 00 08 */	b .L_802B71CC
.L_802B71C8:
/* 802B71C8 002B4108  FC 20 00 90 */	fmr f1, f0
.L_802B71CC:
/* 802B71CC 002B410C  FC 01 28 40 */	fcmpo cr0, f1, f5
/* 802B71D0 002B4110  40 80 00 0C */	bge .L_802B71DC
/* 802B71D4 002B4114  38 60 00 01 */	li r3, 1
/* 802B71D8 002B4118  48 00 00 08 */	b .L_802B71E0
.L_802B71DC:
/* 802B71DC 002B411C  38 60 00 00 */	li r3, 0
.L_802B71E0:
/* 802B71E0 002B4120  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802B71E4 002B4124  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802B71E8 002B4128  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 802B71EC 002B412C  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 802B71F0 002B4130  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 802B71F4 002B4134  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 802B71F8 002B4138  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802B71FC 002B413C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802B7200 002B4140  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802B7204 002B4144  7C 08 03 A6 */	mtlr r0
/* 802B7208 002B4148  38 21 00 50 */	addi r1, r1, 0x50
/* 802B720C 002B414C  4E 80 00 20 */	blr 

.global takeTreasure__Q34Game11OtakaraBase3ObjFv
takeTreasure__Q34Game11OtakaraBase3ObjFv:
/* 802B7210 002B4150  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802B7214 002B4154  7C 08 02 A6 */	mflr r0
/* 802B7218 002B4158  90 01 00 64 */	stw r0, 0x64(r1)
/* 802B721C 002B415C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 802B7220 002B4160  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 802B7224 002B4164  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 802B7228 002B4168  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 802B722C 002B416C  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 802B7230 002B4170  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 802B7234 002B4174  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802B7238 002B4178  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802B723C 002B417C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802B7240 002B4180  7C 7D 1B 78 */	mr r29, r3
/* 802B7244 002B4184  83 C3 02 30 */	lwz r30, 0x230(r3)
/* 802B7248 002B4188  28 1E 00 00 */	cmplwi r30, 0
/* 802B724C 002B418C  41 82 01 D8 */	beq .L_802B7424
/* 802B7250 002B4190  7F C3 F3 78 */	mr r3, r30
/* 802B7254 002B4194  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B7258 002B4198  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802B725C 002B419C  7D 89 03 A6 */	mtctr r12
/* 802B7260 002B41A0  4E 80 04 21 */	bctrl 
/* 802B7264 002B41A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B7268 002B41A8  41 82 01 8C */	beq .L_802B73F4
/* 802B726C 002B41AC  80 1E 00 B8 */	lwz r0, 0xb8(r30)
/* 802B7270 002B41B0  28 00 00 00 */	cmplwi r0, 0
/* 802B7274 002B41B4  40 82 01 80 */	bne .L_802B73F4
/* 802B7278 002B41B8  7F C3 F3 78 */	mr r3, r30
/* 802B727C 002B41BC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B7280 002B41C0  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 802B7284 002B41C4  7D 89 03 A6 */	mtctr r12
/* 802B7288 002B41C8  4E 80 04 21 */	bctrl 
/* 802B728C 002B41CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B7290 002B41D0  41 82 01 64 */	beq .L_802B73F4
/* 802B7294 002B41D4  7F C3 F3 78 */	mr r3, r30
/* 802B7298 002B41D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B729C 002B41DC  81 8C 01 E4 */	lwz r12, 0x1e4(r12)
/* 802B72A0 002B41E0  7D 89 03 A6 */	mtctr r12
/* 802B72A4 002B41E4  4E 80 04 21 */	bctrl 
/* 802B72A8 002B41E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B72AC 002B41EC  41 82 01 48 */	beq .L_802B73F4
/* 802B72B0 002B41F0  83 FD 02 30 */	lwz r31, 0x230(r29)
/* 802B72B4 002B41F4  28 1F 00 00 */	cmplwi r31, 0
/* 802B72B8 002B41F8  41 82 00 A0 */	beq .L_802B7358
/* 802B72BC 002B41FC  7F E4 FB 78 */	mr r4, r31
/* 802B72C0 002B4200  38 61 00 08 */	addi r3, r1, 8
/* 802B72C4 002B4204  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B72C8 002B4208  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B72CC 002B420C  7D 89 03 A6 */	mtctr r12
/* 802B72D0 002B4210  4E 80 04 21 */	bctrl 
/* 802B72D4 002B4214  C3 E1 00 08 */	lfs f31, 8(r1)
/* 802B72D8 002B4218  7F E3 FB 78 */	mr r3, r31
/* 802B72DC 002B421C  C3 C1 00 0C */	lfs f30, 0xc(r1)
/* 802B72E0 002B4220  C3 A1 00 10 */	lfs f29, 0x10(r1)
/* 802B72E4 002B4224  4B EA F6 E5 */	bl getPickRadius__Q24Game6PelletFv
/* 802B72E8 002B4228  C0 42 DF 5C */	lfs f2, lbl_8051C2BC@sda21(r2)
/* 802B72EC 002B422C  C0 02 DF 4C */	lfs f0, lbl_8051C2AC@sda21(r2)
/* 802B72F0 002B4230  EC 62 08 2A */	fadds f3, f2, f1
/* 802B72F4 002B4234  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802B72F8 002B4238  40 80 00 08 */	bge .L_802B7300
/* 802B72FC 002B423C  FC 60 00 90 */	fmr f3, f0
.L_802B7300:
/* 802B7300 002B4240  C0 1D 01 90 */	lfs f0, 0x190(r29)
/* 802B7304 002B4244  C0 5D 01 8C */	lfs f2, 0x18c(r29)
/* 802B7308 002B4248  EC 9E 00 28 */	fsubs f4, f30, f0
/* 802B730C 002B424C  C0 3D 01 94 */	lfs f1, 0x194(r29)
/* 802B7310 002B4250  EC 5F 10 28 */	fsubs f2, f31, f2
/* 802B7314 002B4254  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B7318 002B4258  EC 3D 08 28 */	fsubs f1, f29, f1
/* 802B731C 002B425C  EC 84 01 32 */	fmuls f4, f4, f4
/* 802B7320 002B4260  EC A1 00 72 */	fmuls f5, f1, f1
/* 802B7324 002B4264  EC 22 20 BA */	fmadds f1, f2, f2, f4
/* 802B7328 002B4268  EC 25 08 2A */	fadds f1, f5, f1
/* 802B732C 002B426C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B7330 002B4270  40 81 00 14 */	ble .L_802B7344
/* 802B7334 002B4274  40 81 00 14 */	ble .L_802B7348
/* 802B7338 002B4278  FC 00 08 34 */	frsqrte f0, f1
/* 802B733C 002B427C  EC 20 00 72 */	fmuls f1, f0, f1
/* 802B7340 002B4280  48 00 00 08 */	b .L_802B7348
.L_802B7344:
/* 802B7344 002B4284  FC 20 00 90 */	fmr f1, f0
.L_802B7348:
/* 802B7348 002B4288  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 802B734C 002B428C  40 80 00 0C */	bge .L_802B7358
/* 802B7350 002B4290  38 00 00 01 */	li r0, 1
/* 802B7354 002B4294  48 00 00 08 */	b .L_802B735C
.L_802B7358:
/* 802B7358 002B4298  38 00 00 00 */	li r0, 0
.L_802B735C:
/* 802B735C 002B429C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 802B7360 002B42A0  41 82 00 94 */	beq .L_802B73F4
/* 802B7364 002B42A4  93 DD 02 E0 */	stw r30, 0x2e0(r29)
/* 802B7368 002B42A8  7F C3 F3 78 */	mr r3, r30
/* 802B736C 002B42AC  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 802B7370 002B42B0  C0 04 08 1C */	lfs f0, 0x81c(r4)
/* 802B7374 002B42B4  D0 1D 02 E4 */	stfs f0, 0x2e4(r29)
/* 802B7378 002B42B8  4B EA F6 5D */	bl getCylinderHeight__Q24Game6PelletFv
/* 802B737C 002B42BC  C0 02 DF 64 */	lfs f0, lbl_8051C2C4@sda21(r2)
/* 802B7380 002B42C0  7F C3 F3 78 */	mr r3, r30
/* 802B7384 002B42C4  EC 00 00 72 */	fmuls f0, f0, f1
/* 802B7388 002B42C8  D0 1D 02 EC */	stfs f0, 0x2ec(r29)
/* 802B738C 002B42CC  4B EA F6 3D */	bl getPickRadius__Q24Game6PelletFv
/* 802B7390 002B42D0  D0 3D 02 F0 */	stfs f1, 0x2f0(r29)
/* 802B7394 002B42D4  3C 60 62 6F */	lis r3, 0x626F6479@ha
/* 802B7398 002B42D8  38 83 64 79 */	addi r4, r3, 0x626F6479@l
/* 802B739C 002B42DC  80 7D 01 14 */	lwz r3, 0x114(r29)
/* 802B73A0 002B42E0  4B E7 EA A5 */	bl getCollPart__8CollTreeFUl
/* 802B73A4 002B42E4  7C 7F 1B 78 */	mr r31, r3
/* 802B73A8 002B42E8  7F C3 F3 78 */	mr r3, r30
/* 802B73AC 002B42EC  4B EA F6 1D */	bl getPickRadius__Q24Game6PelletFv
/* 802B73B0 002B42F0  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 802B73B4 002B42F4  7F C3 F3 78 */	mr r3, r30
/* 802B73B8 002B42F8  C0 1D 02 EC */	lfs f0, 0x2ec(r29)
/* 802B73BC 002B42FC  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 802B73C0 002B4300  80 9D 01 14 */	lwz r4, 0x114(r29)
/* 802B73C4 002B4304  83 C4 00 00 */	lwz r30, 0(r4)
/* 802B73C8 002B4308  4B EA F6 01 */	bl getPickRadius__Q24Game6PelletFv
/* 802B73CC 002B430C  C0 42 DF 58 */	lfs f2, lbl_8051C2B8@sda21(r2)
/* 802B73D0 002B4310  38 00 00 01 */	li r0, 1
/* 802B73D4 002B4314  EC 02 08 2A */	fadds f0, f2, f1
/* 802B73D8 002B4318  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 802B73DC 002B431C  C0 1D 02 EC */	lfs f0, 0x2ec(r29)
/* 802B73E0 002B4320  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 802B73E4 002B4324  C0 1D 02 F0 */	lfs f0, 0x2f0(r29)
/* 802B73E8 002B4328  EC 00 10 2A */	fadds f0, f0, f2
/* 802B73EC 002B432C  D0 1D 02 F0 */	stfs f0, 0x2f0(r29)
/* 802B73F0 002B4330  48 00 00 08 */	b .L_802B73F8
.L_802B73F4:
/* 802B73F4 002B4334  38 00 00 00 */	li r0, 0
.L_802B73F8:
/* 802B73F8 002B4338  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 802B73FC 002B433C  41 82 00 28 */	beq .L_802B7424
/* 802B7400 002B4340  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 802B7404 002B4344  38 82 DF 3C */	addi r4, r2, lbl_8051C29C@sda21
/* 802B7408 002B4348  48 18 7B DD */	bl getJoint__Q28SysShape5ModelFPc
/* 802B740C 002B434C  48 17 24 95 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B7410 002B4350  7C 64 1B 78 */	mr r4, r3
/* 802B7414 002B4354  80 7D 02 E0 */	lwz r3, 0x2e0(r29)
/* 802B7418 002B4358  4B EE 86 91 */	bl startCapture__Q24Game8CreatureFP7Matrixf
/* 802B741C 002B435C  38 60 00 01 */	li r3, 1
/* 802B7420 002B4360  48 00 00 08 */	b .L_802B7428
.L_802B7424:
/* 802B7424 002B4364  38 60 00 00 */	li r3, 0
.L_802B7428:
/* 802B7428 002B4368  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 802B742C 002B436C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 802B7430 002B4370  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 802B7434 002B4374  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 802B7438 002B4378  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 802B743C 002B437C  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 802B7440 002B4380  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802B7444 002B4384  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802B7448 002B4388  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802B744C 002B438C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802B7450 002B4390  7C 08 03 A6 */	mtlr r0
/* 802B7454 002B4394  38 21 00 60 */	addi r1, r1, 0x60
/* 802B7458 002B4398  4E 80 00 20 */	blr 

.global fallTreasure__Q34Game11OtakaraBase3ObjFb
fallTreasure__Q34Game11OtakaraBase3ObjFb:
/* 802B745C 002B439C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B7460 002B43A0  7C 08 02 A6 */	mflr r0
/* 802B7464 002B43A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B7468 002B43A8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802B746C 002B43AC  7C 9F 23 78 */	mr r31, r4
/* 802B7470 002B43B0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802B7474 002B43B4  7C 7E 1B 78 */	mr r30, r3
/* 802B7478 002B43B8  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802B747C 002B43BC  28 03 00 00 */	cmplwi r3, 0
/* 802B7480 002B43C0  41 82 00 B8 */	beq .L_802B7538
/* 802B7484 002B43C4  4B EE 87 19 */	bl endCapture__Q24Game8CreatureFv
/* 802B7488 002B43C8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802B748C 002B43CC  41 82 00 30 */	beq .L_802B74BC
/* 802B7490 002B43D0  C0 22 DF 30 */	lfs f1, lbl_8051C290@sda21(r2)
/* 802B7494 002B43D4  38 81 00 08 */	addi r4, r1, 8
/* 802B7498 002B43D8  C0 02 DF 68 */	lfs f0, lbl_8051C2C8@sda21(r2)
/* 802B749C 002B43DC  D0 21 00 08 */	stfs f1, 8(r1)
/* 802B74A0 002B43E0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802B74A4 002B43E4  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 802B74A8 002B43E8  80 7E 02 E0 */	lwz r3, 0x2e0(r30)
/* 802B74AC 002B43EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802B74B0 002B43F0  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 802B74B4 002B43F4  7D 89 03 A6 */	mtctr r12
/* 802B74B8 002B43F8  4E 80 04 21 */	bctrl 
.L_802B74BC:
/* 802B74BC 002B43FC  7F C3 F3 78 */	mr r3, r30
/* 802B74C0 002B4400  48 00 02 BD */	bl createTreasureFallEffect__Q34Game11OtakaraBase3ObjFv
/* 802B74C4 002B4404  38 00 00 00 */	li r0, 0
/* 802B74C8 002B4408  3C 60 62 6F */	lis r3, 0x626F6479@ha
/* 802B74CC 002B440C  90 1E 02 E0 */	stw r0, 0x2e0(r30)
/* 802B74D0 002B4410  38 83 64 79 */	addi r4, r3, 0x626F6479@l
/* 802B74D4 002B4414  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B74D8 002B4418  D0 1E 02 E4 */	stfs f0, 0x2e4(r30)
/* 802B74DC 002B441C  D0 1E 02 EC */	stfs f0, 0x2ec(r30)
/* 802B74E0 002B4420  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802B74E4 002B4424  C0 03 01 CC */	lfs f0, 0x1cc(r3)
/* 802B74E8 002B4428  D0 1E 02 F0 */	stfs f0, 0x2f0(r30)
/* 802B74EC 002B442C  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 802B74F0 002B4430  4B E7 E9 55 */	bl getCollPart__8CollTreeFUl
/* 802B74F4 002B4434  C0 02 DF 58 */	lfs f0, lbl_8051C2B8@sda21(r2)
/* 802B74F8 002B4438  38 80 00 00 */	li r4, 0
/* 802B74FC 002B443C  C0 42 DF 30 */	lfs f2, lbl_8051C290@sda21(r2)
/* 802B7500 002B4440  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802B7504 002B4444  C0 02 DF 5C */	lfs f0, lbl_8051C2BC@sda21(r2)
/* 802B7508 002B4448  FC 60 10 90 */	fmr f3, f2
/* 802B750C 002B444C  D0 43 00 24 */	stfs f2, 0x24(r3)
/* 802B7510 002B4450  7F C3 F3 78 */	mr r3, r30
/* 802B7514 002B4454  C0 22 DF 38 */	lfs f1, lbl_8051C298@sda21(r2)
/* 802B7518 002B4458  80 BE 01 14 */	lwz r5, 0x114(r30)
/* 802B751C 002B445C  C0 82 DF 60 */	lfs f4, lbl_8051C2C0@sda21(r2)
/* 802B7520 002B4460  80 A5 00 00 */	lwz r5, 0(r5)
/* 802B7524 002B4464  D0 05 00 1C */	stfs f0, 0x1c(r5)
/* 802B7528 002B4468  D0 45 00 24 */	stfs f2, 0x24(r5)
/* 802B752C 002B446C  4B E5 BB F1 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802B7530 002B4470  38 60 00 01 */	li r3, 1
/* 802B7534 002B4474  48 00 00 08 */	b .L_802B753C
.L_802B7538:
/* 802B7538 002B4478  38 60 00 00 */	li r3, 0
.L_802B753C:
/* 802B753C 002B447C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B7540 002B4480  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802B7544 002B4484  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802B7548 002B4488  7C 08 03 A6 */	mtlr r0
/* 802B754C 002B448C  38 21 00 20 */	addi r1, r1, 0x20
/* 802B7550 002B4490  4E 80 00 20 */	blr 

.global isDropTreasure__Q34Game11OtakaraBase3ObjFv
isDropTreasure__Q34Game11OtakaraBase3ObjFv:
/* 802B7554 002B4494  C0 23 02 E4 */	lfs f1, 0x2e4(r3)
/* 802B7558 002B4498  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B755C 002B449C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 802B7560 002B44A0  41 82 00 14 */	beq .L_802B7574
/* 802B7564 002B44A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B7568 002B44A8  40 81 00 0C */	ble .L_802B7574
/* 802B756C 002B44AC  38 60 00 00 */	li r3, 0
/* 802B7570 002B44B0  4E 80 00 20 */	blr 
.L_802B7574:
/* 802B7574 002B44B4  38 60 00 01 */	li r3, 1
/* 802B7578 002B44B8  4E 80 00 20 */	blr 

.global damageTreasure__Q34Game11OtakaraBase3ObjFf
damageTreasure__Q34Game11OtakaraBase3ObjFf:
/* 802B757C 002B44BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B7580 002B44C0  7C 08 02 A6 */	mflr r0
/* 802B7584 002B44C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B7588 002B44C8  80 03 02 E0 */	lwz r0, 0x2e0(r3)
/* 802B758C 002B44CC  28 00 00 00 */	cmplwi r0, 0
/* 802B7590 002B44D0  41 82 00 28 */	beq .L_802B75B8
/* 802B7594 002B44D4  C0 43 02 E4 */	lfs f2, 0x2e4(r3)
/* 802B7598 002B44D8  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B759C 002B44DC  EC 22 08 28 */	fsubs f1, f2, f1
/* 802B75A0 002B44E0  D0 23 02 E4 */	stfs f1, 0x2e4(r3)
/* 802B75A4 002B44E4  C0 23 02 E4 */	lfs f1, 0x2e4(r3)
/* 802B75A8 002B44E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B75AC 002B44EC  40 80 00 14 */	bge .L_802B75C0
/* 802B75B0 002B44F0  D0 03 02 E4 */	stfs f0, 0x2e4(r3)
/* 802B75B4 002B44F4  48 00 00 0C */	b .L_802B75C0
.L_802B75B8:
/* 802B75B8 002B44F8  C0 42 DF 38 */	lfs f2, lbl_8051C298@sda21(r2)
/* 802B75BC 002B44FC  4B E4 EA 71 */	bl addDamage__Q24Game9EnemyBaseFff
.L_802B75C0:
/* 802B75C0 002B4500  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B75C4 002B4504  7C 08 03 A6 */	mtlr r0
/* 802B75C8 002B4508  38 21 00 10 */	addi r1, r1, 0x10
/* 802B75CC 002B450C  4E 80 00 20 */	blr 

.global attackTarget__Q34Game11OtakaraBase3ObjFv
attackTarget__Q34Game11OtakaraBase3ObjFv:
/* 802B75D0 002B4510  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 802B75D4 002B4514  7C 08 02 A6 */	mflr r0
/* 802B75D8 002B4518  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 802B75DC 002B451C  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 802B75E0 002B4520  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 802B75E4 002B4524  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 802B75E8 002B4528  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 802B75EC 002B452C  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 802B75F0 002B4530  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 802B75F4 002B4534  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 802B75F8 002B4538  93 C1 00 98 */	stw r30, 0x98(r1)
/* 802B75FC 002B453C  7C 7E 1B 78 */	mr r30, r3
/* 802B7600 002B4540  38 61 00 24 */	addi r3, r1, 0x24
/* 802B7604 002B4544  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 802B7608 002B4548  38 81 00 14 */	addi r4, r1, 0x14
/* 802B760C 002B454C  C0 5E 01 90 */	lfs f2, 0x190(r30)
/* 802B7610 002B4550  C0 05 05 64 */	lfs f0, 0x564(r5)
/* 802B7614 002B4554  C0 25 05 8C */	lfs f1, 0x58c(r5)
/* 802B7618 002B4558  C0 65 05 B4 */	lfs f3, 0x5b4(r5)
/* 802B761C 002B455C  EF E2 00 2A */	fadds f31, f2, f0
/* 802B7620 002B4560  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 802B7624 002B4564  EF C2 08 28 */	fsubs f30, f2, f1
/* 802B7628 002B4568  EF A3 00 F2 */	fmuls f29, f3, f3
/* 802B762C 002B456C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802B7630 002B4570  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 802B7634 002B4574  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802B7638 002B4578  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802B763C 002B457C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802B7640 002B4580  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 802B7644 002B4584  4B F7 6D 5D */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 802B7648 002B4588  38 00 00 01 */	li r0, 1
/* 802B764C 002B458C  38 61 00 44 */	addi r3, r1, 0x44
/* 802B7650 002B4590  98 01 00 40 */	stb r0, 0x40(r1)
/* 802B7654 002B4594  38 81 00 24 */	addi r4, r1, 0x24
/* 802B7658 002B4598  4B F7 6D 89 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 802B765C 002B459C  38 61 00 44 */	addi r3, r1, 0x44
/* 802B7660 002B45A0  4B F7 6D FD */	bl first__Q24Game12CellIteratorFv
/* 802B7664 002B45A4  48 00 00 D4 */	b .L_802B7738
.L_802B7668:
/* 802B7668 002B45A8  38 61 00 44 */	addi r3, r1, 0x44
/* 802B766C 002B45AC  4B F7 6E D9 */	bl __ml__Q24Game12CellIteratorFv
/* 802B7670 002B45B0  81 83 00 00 */	lwz r12, 0(r3)
/* 802B7674 002B45B4  7C 7F 1B 78 */	mr r31, r3
/* 802B7678 002B45B8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802B767C 002B45BC  7D 89 03 A6 */	mtctr r12
/* 802B7680 002B45C0  4E 80 04 21 */	bctrl 
/* 802B7684 002B45C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B7688 002B45C8  41 82 00 A8 */	beq .L_802B7730
/* 802B768C 002B45CC  7F E3 FB 78 */	mr r3, r31
/* 802B7690 002B45D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B7694 002B45D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B7698 002B45D8  7D 89 03 A6 */	mtctr r12
/* 802B769C 002B45DC  4E 80 04 21 */	bctrl 
/* 802B76A0 002B45E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B76A4 002B45E4  40 82 00 20 */	bne .L_802B76C4
/* 802B76A8 002B45E8  7F E3 FB 78 */	mr r3, r31
/* 802B76AC 002B45EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B76B0 002B45F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802B76B4 002B45F4  7D 89 03 A6 */	mtctr r12
/* 802B76B8 002B45F8  4E 80 04 21 */	bctrl 
/* 802B76BC 002B45FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B76C0 002B4600  41 82 00 70 */	beq .L_802B7730
.L_802B76C4:
/* 802B76C4 002B4604  7F E4 FB 78 */	mr r4, r31
/* 802B76C8 002B4608  38 61 00 08 */	addi r3, r1, 8
/* 802B76CC 002B460C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B76D0 002B4610  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B76D4 002B4614  7D 89 03 A6 */	mtctr r12
/* 802B76D8 002B4618  4E 80 04 21 */	bctrl 
/* 802B76DC 002B461C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802B76E0 002B4620  C0 41 00 08 */	lfs f2, 8(r1)
/* 802B76E4 002B4624  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802B76E8 002B4628  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 802B76EC 002B462C  40 81 00 44 */	ble .L_802B7730
/* 802B76F0 002B4630  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 802B76F4 002B4634  40 80 00 3C */	bge .L_802B7730
/* 802B76F8 002B4638  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802B76FC 002B463C  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 802B7700 002B4640  EC 00 18 28 */	fsubs f0, f0, f3
/* 802B7704 002B4644  EC 21 10 28 */	fsubs f1, f1, f2
/* 802B7708 002B4648  EC 00 00 32 */	fmuls f0, f0, f0
/* 802B770C 002B464C  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802B7710 002B4650  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 802B7714 002B4654  40 80 00 1C */	bge .L_802B7730
/* 802B7718 002B4658  7F C3 F3 78 */	mr r3, r30
/* 802B771C 002B465C  7F E4 FB 78 */	mr r4, r31
/* 802B7720 002B4660  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B7724 002B4664  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 802B7728 002B4668  7D 89 03 A6 */	mtctr r12
/* 802B772C 002B466C  4E 80 04 21 */	bctrl 
.L_802B7730:
/* 802B7730 002B4670  38 61 00 44 */	addi r3, r1, 0x44
/* 802B7734 002B4674  4B F7 6D CD */	bl next__Q24Game12CellIteratorFv
.L_802B7738:
/* 802B7738 002B4678  38 61 00 44 */	addi r3, r1, 0x44
/* 802B773C 002B467C  4B F7 6D F9 */	bl isDone__Q24Game12CellIteratorFv
/* 802B7740 002B4680  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B7744 002B4684  41 82 FF 24 */	beq .L_802B7668
/* 802B7748 002B4688  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 802B774C 002B468C  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 802B7750 002B4690  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 802B7754 002B4694  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 802B7758 002B4698  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 802B775C 002B469C  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 802B7760 002B46A0  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 802B7764 002B46A4  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 802B7768 002B46A8  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 802B776C 002B46AC  7C 08 03 A6 */	mtlr r0
/* 802B7770 002B46B0  38 21 00 D0 */	addi r1, r1, 0xd0
/* 802B7774 002B46B4  4E 80 00 20 */	blr 

.global interactCreature__Q34Game11OtakaraBase3ObjFPQ24Game8Creature
interactCreature__Q34Game11OtakaraBase3ObjFPQ24Game8Creature:
/* 802B7778 002B46B8  4E 80 00 20 */	blr 

.global createTreasureFallEffect__Q34Game11OtakaraBase3ObjFv
createTreasureFallEffect__Q34Game11OtakaraBase3ObjFv:
/* 802B777C 002B46BC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802B7780 002B46C0  7C 08 02 A6 */	mflr r0
/* 802B7784 002B46C4  38 82 DF 6C */	addi r4, r2, lbl_8051C2CC@sda21
/* 802B7788 002B46C8  90 01 00 54 */	stw r0, 0x54(r1)
/* 802B778C 002B46CC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802B7790 002B46D0  7C 7F 1B 78 */	mr r31, r3
/* 802B7794 002B46D4  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802B7798 002B46D8  48 18 78 4D */	bl getJoint__Q28SysShape5ModelFPc
/* 802B779C 002B46DC  48 17 21 05 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B77A0 002B46E0  C0 3F 02 F0 */	lfs f1, 0x2f0(r31)
/* 802B77A4 002B46E4  C0 02 DF 58 */	lfs f0, lbl_8051C2B8@sda21(r2)
/* 802B77A8 002B46E8  C0 83 00 0C */	lfs f4, 0xc(r3)
/* 802B77AC 002B46EC  EC 01 00 28 */	fsubs f0, f1, f0
/* 802B77B0 002B46F0  C0 22 DF 74 */	lfs f1, lbl_8051C2D4@sda21(r2)
/* 802B77B4 002B46F4  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 802B77B8 002B46F8  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802B77BC 002B46FC  EC A1 00 32 */	fmuls f5, f1, f0
/* 802B77C0 002B4700  C0 02 DF 38 */	lfs f0, lbl_8051C298@sda21(r2)
/* 802B77C4 002B4704  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 802B77C8 002B4708  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802B77CC 002B470C  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 802B77D0 002B4710  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 802B77D4 002B4714  40 80 00 10 */	bge .L_802B77E4
/* 802B77D8 002B4718  EC 00 28 2A */	fadds f0, f0, f5
/* 802B77DC 002B471C  C0 22 DF 64 */	lfs f1, lbl_8051C2C4@sda21(r2)
/* 802B77E0 002B4720  EC A1 00 32 */	fmuls f5, f1, f0
.L_802B77E4:
/* 802B77E4 002B4724  80 81 00 20 */	lwz r4, 0x20(r1)
/* 802B77E8 002B4728  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802B77EC 002B472C  80 C1 00 24 */	lwz r6, 0x24(r1)
/* 802B77F0 002B4730  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802B77F4 002B4734  80 A1 00 28 */	lwz r5, 0x28(r1)
/* 802B77F8 002B4738  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 802B77FC 002B473C  90 81 00 08 */	stw r4, 8(r1)
/* 802B7800 002B4740  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 802B7804 002B4744  39 23 A7 EC */	addi r9, r3, __vt__Q23efx3Arg@l
/* 802B7808 002B4748  3D 00 80 4B */	lis r8, __vt__Q23efx8ArgScale@ha
/* 802B780C 002B474C  90 C1 00 0C */	stw r6, 0xc(r1)
/* 802B7810 002B4750  3C 60 80 4E */	lis r3, __vt__Q23efx12TOtaPartsoff@ha
/* 802B7814 002B4754  C0 41 00 08 */	lfs f2, 8(r1)
/* 802B7818 002B4758  38 C0 02 7F */	li r6, 0x27f
/* 802B781C 002B475C  90 A1 00 10 */	stw r5, 0x10(r1)
/* 802B7820 002B4760  38 A0 00 00 */	li r5, 0
/* 802B7824 002B4764  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802B7828 002B4768  38 E4 6A 78 */	addi r7, r4, __vt__Q23efx8TSimple1@l
/* 802B782C 002B476C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B7830 002B4770  39 08 A2 DC */	addi r8, r8, __vt__Q23efx8ArgScale@l
/* 802B7834 002B4774  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802B7838 002B4778  38 03 6E 44 */	addi r0, r3, __vt__Q23efx12TOtaPartsoff@l
/* 802B783C 002B477C  91 21 00 2C */	stw r9, 0x2c(r1)
/* 802B7840 002B4780  38 61 00 14 */	addi r3, r1, 0x14
/* 802B7844 002B4784  38 81 00 2C */	addi r4, r1, 0x2c
/* 802B7848 002B4788  90 E1 00 14 */	stw r7, 0x14(r1)
/* 802B784C 002B478C  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 802B7850 002B4790  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 802B7854 002B4794  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 802B7858 002B4798  91 01 00 2C */	stw r8, 0x2c(r1)
/* 802B785C 002B479C  D0 A1 00 3C */	stfs f5, 0x3c(r1)
/* 802B7860 002B47A0  B0 C1 00 18 */	sth r6, 0x18(r1)
/* 802B7864 002B47A4  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 802B7868 002B47A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B786C 002B47AC  48 0F C0 61 */	bl create__Q23efx12TOtaPartsoffFPQ23efx3Arg
/* 802B7870 002B47B0  7F E3 FB 78 */	mr r3, r31
/* 802B7874 002B47B4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B7878 002B47B8  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802B787C 002B47BC  7D 89 03 A6 */	mtctr r12
/* 802B7880 002B47C0  4E 80 04 21 */	bctrl 
/* 802B7884 002B47C4  81 83 00 00 */	lwz r12, 0(r3)
/* 802B7888 002B47C8  38 80 59 67 */	li r4, 0x5967
/* 802B788C 002B47CC  38 A0 00 00 */	li r5, 0
/* 802B7890 002B47D0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802B7894 002B47D4  7D 89 03 A6 */	mtctr r12
/* 802B7898 002B47D8  4E 80 04 21 */	bctrl 
/* 802B789C 002B47DC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802B78A0 002B47E0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802B78A4 002B47E4  7C 08 03 A6 */	mtlr r0
/* 802B78A8 002B47E8  38 21 00 50 */	addi r1, r1, 0x50
/* 802B78AC 002B47EC  4E 80 00 20 */	blr 

.global startEscapeSE__Q34Game11OtakaraBase3ObjFv
startEscapeSE__Q34Game11OtakaraBase3ObjFv:
/* 802B78B0 002B47F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B78B4 002B47F4  7C 08 02 A6 */	mflr r0
/* 802B78B8 002B47F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B78BC 002B47FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B78C0 002B4800  7C 7F 1B 78 */	mr r31, r3
/* 802B78C4 002B4804  80 03 02 30 */	lwz r0, 0x230(r3)
/* 802B78C8 002B4808  28 00 00 00 */	cmplwi r0, 0
/* 802B78CC 002B480C  40 82 00 58 */	bne .L_802B7924
/* 802B78D0 002B4810  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802B78D4 002B4814  C0 02 DF 78 */	lfs f0, lbl_8051C2D8@sda21(r2)
/* 802B78D8 002B4818  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B78DC 002B481C  40 81 00 38 */	ble .L_802B7914
/* 802B78E0 002B4820  81 83 00 00 */	lwz r12, 0(r3)
/* 802B78E4 002B4824  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802B78E8 002B4828  7D 89 03 A6 */	mtctr r12
/* 802B78EC 002B482C  4E 80 04 21 */	bctrl 
/* 802B78F0 002B4830  81 83 00 00 */	lwz r12, 0(r3)
/* 802B78F4 002B4834  38 80 58 F0 */	li r4, 0x58f0
/* 802B78F8 002B4838  38 A0 00 00 */	li r5, 0
/* 802B78FC 002B483C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802B7900 002B4840  7D 89 03 A6 */	mtctr r12
/* 802B7904 002B4844  4E 80 04 21 */	bctrl 
/* 802B7908 002B4848  C0 02 DF 30 */	lfs f0, lbl_8051C290@sda21(r2)
/* 802B790C 002B484C  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802B7910 002B4850  48 00 00 14 */	b .L_802B7924
.L_802B7914:
/* 802B7914 002B4854  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802B7918 002B4858  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802B791C 002B485C  EC 01 00 2A */	fadds f0, f1, f0
/* 802B7920 002B4860  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
.L_802B7924:
/* 802B7924 002B4864  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B7928 002B4868  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B792C 002B486C  7C 08 03 A6 */	mtlr r0
/* 802B7930 002B4870  38 21 00 10 */	addi r1, r1, 0x10
/* 802B7934 002B4874  4E 80 00 20 */	blr 

.global initBombOtakara__Q34Game11OtakaraBase3ObjFv
initBombOtakara__Q34Game11OtakaraBase3ObjFv:
/* 802B7938 002B4878  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802B793C 002B487C  7C 08 02 A6 */	mflr r0
/* 802B7940 002B4880  90 01 00 54 */	stw r0, 0x54(r1)
/* 802B7944 002B4884  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802B7948 002B4888  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802B794C 002B488C  7C 7E 1B 78 */	mr r30, r3
/* 802B7950 002B4890  80 03 02 30 */	lwz r0, 0x230(r3)
/* 802B7954 002B4894  28 00 00 00 */	cmplwi r0, 0
/* 802B7958 002B4898  40 82 00 C4 */	bne .L_802B7A1C
/* 802B795C 002B489C  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802B7960 002B48A0  38 80 00 24 */	li r4, 0x24
/* 802B7964 002B48A4  4B E5 63 41 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 802B7968 002B48A8  7C 7F 1B 79 */	or. r31, r3, r3
/* 802B796C 002B48AC  41 82 00 B0 */	beq .L_802B7A1C
/* 802B7970 002B48B0  38 61 00 08 */	addi r3, r1, 8
/* 802B7974 002B48B4  4B E7 72 B1 */	bl __ct__Q24Game13EnemyBirthArgFv
/* 802B7978 002B48B8  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 802B797C 002B48BC  7F E3 FB 78 */	mr r3, r31
/* 802B7980 002B48C0  38 81 00 08 */	addi r4, r1, 8
/* 802B7984 002B48C4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802B7988 002B48C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B798C 002B48CC  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 802B7990 002B48D0  7D 89 03 A6 */	mtctr r12
/* 802B7994 002B48D4  4E 80 04 21 */	bctrl 
/* 802B7998 002B48D8  90 7E 02 30 */	stw r3, 0x230(r30)
/* 802B799C 002B48DC  80 7E 02 30 */	lwz r3, 0x230(r30)
/* 802B79A0 002B48E0  28 03 00 00 */	cmplwi r3, 0
/* 802B79A4 002B48E4  41 82 00 78 */	beq .L_802B7A1C
/* 802B79A8 002B48E8  38 80 00 00 */	li r4, 0
/* 802B79AC 002B48EC  4B E8 36 1D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 802B79B0 002B48F0  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802B79B4 002B48F4  38 82 DF 3C */	addi r4, r2, lbl_8051C29C@sda21
/* 802B79B8 002B48F8  48 18 76 2D */	bl getJoint__Q28SysShape5ModelFPc
/* 802B79BC 002B48FC  48 17 1E E5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B79C0 002B4900  7C 64 1B 78 */	mr r4, r3
/* 802B79C4 002B4904  80 7E 02 30 */	lwz r3, 0x230(r30)
/* 802B79C8 002B4908  4B EE 80 E1 */	bl startCapture__Q24Game8CreatureFP7Matrixf
/* 802B79CC 002B490C  80 BE 02 30 */	lwz r5, 0x230(r30)
/* 802B79D0 002B4910  3C 60 62 6F */	lis r3, 0x626F6479@ha
/* 802B79D4 002B4914  C0 22 DF 58 */	lfs f1, lbl_8051C2B8@sda21(r2)
/* 802B79D8 002B4918  38 83 64 79 */	addi r4, r3, 0x626F6479@l
/* 802B79DC 002B491C  93 C5 02 CC */	stw r30, 0x2cc(r5)
/* 802B79E0 002B4920  C0 02 DF 50 */	lfs f0, lbl_8051C2B0@sda21(r2)
/* 802B79E4 002B4924  D0 3E 02 EC */	stfs f1, 0x2ec(r30)
/* 802B79E8 002B4928  D0 1E 02 F0 */	stfs f0, 0x2f0(r30)
/* 802B79EC 002B492C  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 802B79F0 002B4930  4B E7 E4 55 */	bl getCollPart__8CollTreeFUl
/* 802B79F4 002B4934  C0 22 DF 7C */	lfs f1, lbl_8051C2DC@sda21(r2)
/* 802B79F8 002B4938  C0 02 DF 50 */	lfs f0, lbl_8051C2B0@sda21(r2)
/* 802B79FC 002B493C  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 802B7A00 002B4940  C0 3E 02 EC */	lfs f1, 0x2ec(r30)
/* 802B7A04 002B4944  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 802B7A08 002B4948  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 802B7A0C 002B494C  80 63 00 00 */	lwz r3, 0(r3)
/* 802B7A10 002B4950  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802B7A14 002B4954  C0 1E 02 EC */	lfs f0, 0x2ec(r30)
/* 802B7A18 002B4958  D0 03 00 24 */	stfs f0, 0x24(r3)
.L_802B7A1C:
/* 802B7A1C 002B495C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802B7A20 002B4960  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802B7A24 002B4964  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802B7A28 002B4968  7C 08 03 A6 */	mtlr r0
/* 802B7A2C 002B496C  38 21 00 50 */	addi r1, r1, 0x50
/* 802B7A30 002B4970  4E 80 00 20 */	blr 

.global isTransitChaseState__Q34Game11OtakaraBase3ObjFv
isTransitChaseState__Q34Game11OtakaraBase3ObjFv:
/* 802B7A34 002B4974  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B7A38 002B4978  7C 08 02 A6 */	mflr r0
/* 802B7A3C 002B497C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B7A40 002B4980  80 83 01 E0 */	lwz r4, 0x1e0(r3)
/* 802B7A44 002B4984  54 80 06 F7 */	rlwinm. r0, r4, 0, 0x1b, 0x1b
/* 802B7A48 002B4988  40 82 00 18 */	bne .L_802B7A60
/* 802B7A4C 002B498C  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 802B7A50 002B4990  40 82 00 10 */	bne .L_802B7A60
/* 802B7A54 002B4994  80 03 01 F4 */	lwz r0, 0x1f4(r3)
/* 802B7A58 002B4998  2C 00 00 00 */	cmpwi r0, 0
/* 802B7A5C 002B499C  41 82 00 0C */	beq .L_802B7A68
.L_802B7A60:
/* 802B7A60 002B49A0  38 60 00 01 */	li r3, 1
/* 802B7A64 002B49A4  48 00 00 28 */	b .L_802B7A8C
.L_802B7A68:
/* 802B7A68 002B49A8  80 C3 00 C0 */	lwz r6, 0xc0(r3)
/* 802B7A6C 002B49AC  38 80 00 00 */	li r4, 0
/* 802B7A70 002B49B0  38 A0 00 00 */	li r5, 0
/* 802B7A74 002B49B4  C0 26 04 24 */	lfs f1, 0x424(r6)
/* 802B7A78 002B49B8  C0 46 03 D4 */	lfs f2, 0x3d4(r6)
/* 802B7A7C 002B49BC  4B E5 AC 79 */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
/* 802B7A80 002B49C0  7C 03 00 D0 */	neg r0, r3
/* 802B7A84 002B49C4  7C 00 1B 78 */	or r0, r0, r3
/* 802B7A88 002B49C8  54 03 0F FE */	srwi r3, r0, 0x1f
.L_802B7A8C:
/* 802B7A8C 002B49CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B7A90 002B49D0  7C 08 03 A6 */	mtlr r0
/* 802B7A94 002B49D4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B7A98 002B49D8  4E 80 00 20 */	blr 

.global stimulateBomb__Q34Game11OtakaraBase3ObjFv
stimulateBomb__Q34Game11OtakaraBase3ObjFv:
/* 802B7A9C 002B49DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B7AA0 002B49E0  7C 08 02 A6 */	mflr r0
/* 802B7AA4 002B49E4  C0 02 DF 80 */	lfs f0, lbl_8051C2E0@sda21(r2)
/* 802B7AA8 002B49E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B7AAC 002B49EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B7AB0 002B49F0  7C 7F 1B 78 */	mr r31, r3
/* 802B7AB4 002B49F4  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802B7AB8 002B49F8  C0 43 02 E8 */	lfs f2, 0x2e8(r3)
/* 802B7ABC 002B49FC  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 802B7AC0 002B4A00  EC 22 08 2A */	fadds f1, f2, f1
/* 802B7AC4 002B4A04  D0 23 02 E8 */	stfs f1, 0x2e8(r3)
/* 802B7AC8 002B4A08  C0 23 02 E8 */	lfs f1, 0x2e8(r3)
/* 802B7ACC 002B4A0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B7AD0 002B4A10  40 81 00 3C */	ble .L_802B7B0C
/* 802B7AD4 002B4A14  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 802B7AD8 002B4A18  28 03 00 00 */	cmplwi r3, 0
/* 802B7ADC 002B4A1C  41 82 00 30 */	beq .L_802B7B0C
/* 802B7AE0 002B4A20  81 83 00 00 */	lwz r12, 0(r3)
/* 802B7AE4 002B4A24  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802B7AE8 002B4A28  7D 89 03 A6 */	mtctr r12
/* 802B7AEC 002B4A2C  4E 80 04 21 */	bctrl 
/* 802B7AF0 002B4A30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B7AF4 002B4A34  41 82 00 18 */	beq .L_802B7B0C
/* 802B7AF8 002B4A38  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B7AFC 002B4A3C  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802B7B00 002B4A40  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802B7B04 002B4A44  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 802B7B08 002B4A48  48 09 35 C9 */	bl forceBomb__Q34Game4Bomb3ObjFv
.L_802B7B0C:
/* 802B7B0C 002B4A4C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B7B10 002B4A50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B7B14 002B4A54  54 03 D7 FE */	rlwinm r3, r0, 0x1a, 0x1f, 0x1f
/* 802B7B18 002B4A58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B7B1C 002B4A5C  7C 08 03 A6 */	mtlr r0
/* 802B7B20 002B4A60  38 21 00 10 */	addi r1, r1, 0x10
/* 802B7B24 002B4A64  4E 80 00 20 */	blr 

.global getChaseTargetCreature__Q34Game11OtakaraBase3ObjFv
getChaseTargetCreature__Q34Game11OtakaraBase3ObjFv:
/* 802B7B28 002B4A68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B7B2C 002B4A6C  7C 08 02 A6 */	mflr r0
/* 802B7B30 002B4A70  38 80 00 00 */	li r4, 0
/* 802B7B34 002B4A74  38 A0 00 00 */	li r5, 0
/* 802B7B38 002B4A78  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B7B3C 002B4A7C  38 C0 00 00 */	li r6, 0
/* 802B7B40 002B4A80  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 802B7B44 002B4A84  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 802B7B48 002B4A88  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 802B7B4C 002B4A8C  4B E5 B5 05 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 802B7B50 002B4A90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B7B54 002B4A94  7C 08 03 A6 */	mtlr r0
/* 802B7B58 002B4A98  38 21 00 10 */	addi r1, r1, 0x10
/* 802B7B5C 002B4A9C  4E 80 00 20 */	blr 

.global satisfy__Q24Game30ConditionNotStickClientAndItemFPQ24Game4Piki
satisfy__Q24Game30ConditionNotStickClientAndItemFPQ24Game4Piki:
/* 802B7B60 002B4AA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B7B64 002B4AA4  7C 08 02 A6 */	mflr r0
/* 802B7B68 002B4AA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B7B6C 002B4AAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B7B70 002B4AB0  7C 9F 23 78 */	mr r31, r4
/* 802B7B74 002B4AB4  93 C1 00 08 */	stw r30, 8(r1)
/* 802B7B78 002B4AB8  7C 7E 1B 78 */	mr r30, r3
/* 802B7B7C 002B4ABC  7F E3 FB 78 */	mr r3, r31
/* 802B7B80 002B4AC0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B7B84 002B4AC4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802B7B88 002B4AC8  7D 89 03 A6 */	mtctr r12
/* 802B7B8C 002B4ACC  4E 80 04 21 */	bctrl 
/* 802B7B90 002B4AD0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B7B94 002B4AD4  41 82 00 4C */	beq .L_802B7BE0
/* 802B7B98 002B4AD8  7F E3 FB 78 */	mr r3, r31
/* 802B7B9C 002B4ADC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B7BA0 002B4AE0  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802B7BA4 002B4AE4  7D 89 03 A6 */	mtctr r12
/* 802B7BA8 002B4AE8  4E 80 04 21 */	bctrl 
/* 802B7BAC 002B4AEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B7BB0 002B4AF0  41 82 00 30 */	beq .L_802B7BE0
/* 802B7BB4 002B4AF4  80 7F 00 F4 */	lwz r3, 0xf4(r31)
/* 802B7BB8 002B4AF8  80 1E 00 04 */	lwz r0, 4(r30)
/* 802B7BBC 002B4AFC  7C 03 00 40 */	cmplw r3, r0
/* 802B7BC0 002B4B00  41 82 00 20 */	beq .L_802B7BE0
/* 802B7BC4 002B4B04  80 1E 00 08 */	lwz r0, 8(r30)
/* 802B7BC8 002B4B08  28 00 00 00 */	cmplwi r0, 0
/* 802B7BCC 002B4B0C  41 82 00 0C */	beq .L_802B7BD8
/* 802B7BD0 002B4B10  7C 03 00 40 */	cmplw r3, r0
/* 802B7BD4 002B4B14  41 82 00 0C */	beq .L_802B7BE0
.L_802B7BD8:
/* 802B7BD8 002B4B18  38 60 00 01 */	li r3, 1
/* 802B7BDC 002B4B1C  48 00 00 08 */	b .L_802B7BE4
.L_802B7BE0:
/* 802B7BE0 002B4B20  38 60 00 00 */	li r3, 0
.L_802B7BE4:
/* 802B7BE4 002B4B24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B7BE8 002B4B28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B7BEC 002B4B2C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B7BF0 002B4B30  7C 08 03 A6 */	mtlr r0
/* 802B7BF4 002B4B34  38 21 00 10 */	addi r1, r1, 0x10
/* 802B7BF8 002B4B38  4E 80 00 20 */	blr 

.global __dt__Q34Game11OtakaraBase3ObjFv
__dt__Q34Game11OtakaraBase3ObjFv:
/* 802B7BFC 002B4B3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B7C00 002B4B40  7C 08 02 A6 */	mflr r0
/* 802B7C04 002B4B44  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B7C08 002B4B48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B7C0C 002B4B4C  7C 7F 1B 79 */	or. r31, r3, r3
/* 802B7C10 002B4B50  93 C1 00 08 */	stw r30, 8(r1)
/* 802B7C14 002B4B54  7C 9E 23 78 */	mr r30, r4
/* 802B7C18 002B4B58  41 82 00 84 */	beq .L_802B7C9C
/* 802B7C1C 002B4B5C  3C 60 80 4D */	lis r3, __vt__Q34Game11OtakaraBase3Obj@ha
/* 802B7C20 002B4B60  38 1F 02 F4 */	addi r0, r31, 0x2f4
/* 802B7C24 002B4B64  38 83 F0 84 */	addi r4, r3, __vt__Q34Game11OtakaraBase3Obj@l
/* 802B7C28 002B4B68  90 9F 00 00 */	stw r4, 0(r31)
/* 802B7C2C 002B4B6C  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 802B7C30 002B4B70  38 84 03 24 */	addi r4, r4, 0x324
/* 802B7C34 002B4B74  90 7F 01 78 */	stw r3, 0x178(r31)
/* 802B7C38 002B4B78  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 802B7C3C 002B4B7C  90 83 00 00 */	stw r4, 0(r3)
/* 802B7C40 002B4B80  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 802B7C44 002B4B84  7C 03 00 50 */	subf r0, r3, r0
/* 802B7C48 002B4B88  90 03 00 0C */	stw r0, 0xc(r3)
/* 802B7C4C 002B4B8C  41 82 00 40 */	beq .L_802B7C8C
/* 802B7C50 002B4B90  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 802B7C54 002B4B94  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 802B7C58 002B4B98  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 802B7C5C 002B4B9C  38 7F 02 90 */	addi r3, r31, 0x290
/* 802B7C60 002B4BA0  90 9F 00 00 */	stw r4, 0(r31)
/* 802B7C64 002B4BA4  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 802B7C68 002B4BA8  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 802B7C6C 002B4BAC  38 80 FF FF */	li r4, -1
/* 802B7C70 002B4BB0  90 BF 01 78 */	stw r5, 0x178(r31)
/* 802B7C74 002B4BB4  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 802B7C78 002B4BB8  90 C5 00 00 */	stw r6, 0(r5)
/* 802B7C7C 002B4BBC  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 802B7C80 002B4BC0  7C 05 00 50 */	subf r0, r5, r0
/* 802B7C84 002B4BC4  90 05 00 0C */	stw r0, 0xc(r5)
/* 802B7C88 002B4BC8  48 15 99 01 */	bl __dt__5CNodeFv
.L_802B7C8C:
/* 802B7C8C 002B4BCC  7F C0 07 35 */	extsh. r0, r30
/* 802B7C90 002B4BD0  40 81 00 0C */	ble .L_802B7C9C
/* 802B7C94 002B4BD4  7F E3 FB 78 */	mr r3, r31
/* 802B7C98 002B4BD8  4B D6 C4 1D */	bl __dl__FPv
.L_802B7C9C:
/* 802B7C9C 002B4BDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B7CA0 002B4BE0  7F E3 FB 78 */	mr r3, r31
/* 802B7CA4 002B4BE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B7CA8 002B4BE8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B7CAC 002B4BEC  7C 08 03 A6 */	mtlr r0
/* 802B7CB0 002B4BF0  38 21 00 10 */	addi r1, r1, 0x10
/* 802B7CB4 002B4BF4  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q34Game11OtakaraBase3ObjFv
getDownSmokeScale__Q34Game11OtakaraBase3ObjFv:
/* 802B7CB8 002B4BF8  C0 22 DF 84 */	lfs f1, lbl_8051C2E4@sda21(r2)
/* 802B7CBC 002B4BFC  4E 80 00 20 */	blr 

.global getCellRadius__Q34Game11OtakaraBase3ObjFv
getCellRadius__Q34Game11OtakaraBase3ObjFv:
/* 802B7CC0 002B4C00  C0 23 02 F0 */	lfs f1, 0x2f0(r3)
/* 802B7CC4 002B4C04  4E 80 00 20 */	blr 

.global createEffect__Q34Game11OtakaraBase3ObjFv
createEffect__Q34Game11OtakaraBase3ObjFv:
/* 802B7CC8 002B4C08  4E 80 00 20 */	blr 
