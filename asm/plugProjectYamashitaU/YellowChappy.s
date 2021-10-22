.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8047C0A0
lbl_8047C0A0:
	.asciz "YellowChappy.cpp"
	.skip 3
.global lbl_8047C0B4
lbl_8047C0B4:
	.asciz "P2Assert"
	.skip 3

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global "__vt__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>"
"__vt__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>":
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
.global __vt__Q23efx10TChaseMtx3
__vt__Q23efx10TChaseMtx3:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
.global __vt__Q23efx13TKechappyTest
__vt__Q23efx13TKechappyTest:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
.global __vt__Q23efx12TKechappyOff
__vt__Q23efx12TKechappyOff:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q34Game12YellowChappy3Obj
__vt__Q34Game12YellowChappy3Obj:
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
	.4byte onInit__Q34Game12YellowChappy3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game12YellowChappy3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game10ChappyBase3ObjFR8Graphics
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
	.4byte getShadowParam__Q34Game10ChappyBase3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game12YellowChappy3ObjFv
	.4byte "birth__Q34Game10ChappyBase3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game10ChappyBase3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game10ChappyBase3ObjFv
	.4byte doUpdateCommon__Q34Game12YellowChappy3ObjFv
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
	.4byte changeMaterial__Q34Game12YellowChappy3ObjFv
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
	.4byte initMouthSlots__Q34Game10ChappyBase3ObjFv
	.4byte initWalkSmokeEffect__Q34Game10ChappyBase3ObjFv
	.4byte getWalkSmokeEffectMgr__Q34Game10ChappyBase3ObjFv
	.4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
	.4byte injure__Q24Game9EnemyBaseFv
	.4byte setCollEvent__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game12YellowChappy3ObjFv
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
	.4byte doStartWaitingBirthTypeDrop__Q34Game12YellowChappy3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game12YellowChappy3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game10ChappyBase3ObjFv
	.4byte doStartMovie__Q34Game12YellowChappy3ObjFv
	.4byte doEndMovie__Q34Game12YellowChappy3ObjFv
	.4byte setFSM__Q34Game10ChappyBase3ObjFPQ34Game10ChappyBase3FSM
	.4byte isWakeup__Q34Game10ChappyBase3ObjFv
	.4byte setAnimationSpeed__Q34Game10ChappyBase3ObjFf
	.4byte flickAttackFail__Q34Game10ChappyBase3ObjFv
	.4byte flickStatePikmin__Q34Game10ChappyBase3ObjFv
	.4byte flickAttackBomb__Q34Game10ChappyBase3ObjFv
	.4byte eatAttackPikmin__Q34Game10ChappyBase3ObjFv
	.4byte resetUnderGround__Q34Game10ChappyBase3ObjFv
	.4byte setUnderGround__Q34Game10ChappyBase3ObjFv
	.4byte createEffect__Q34Game12YellowChappy3ObjFv
	.4byte setupEffect__Q34Game12YellowChappy3ObjFv
	.4byte startSleepEffect__Q34Game10ChappyBase3ObjFv
	.4byte finishSleepEffect__Q34Game10ChappyBase3ObjFv
	.4byte createFlickEffect__Q34Game10ChappyBase3ObjFv
	.4byte createSmokeEffect__Q34Game10ChappyBase3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@752@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@752@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@752@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@752@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@752@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@752@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
	.4byte 0

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 0x8
.global lbl_805180D0
lbl_805180D0:
	.float 0.5
.global lbl_805180D4
lbl_805180D4:
	.4byte 0x626F6479
	.4byte 0x00000000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game12YellowChappy3ObjFv
__ct__Q34Game12YellowChappy3ObjFv:
/* 8012C378 001292B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C37C 001292BC  7C 08 02 A6 */	mflr r0
/* 8012C380 001292C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C384 001292C4  7C 80 07 35 */	extsh. r0, r4
/* 8012C388 001292C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012C38C 001292CC  7C 7F 1B 78 */	mr r31, r3
/* 8012C390 001292D0  93 C1 00 08 */	stw r30, 8(r1)
/* 8012C394 001292D4  41 82 00 24 */	beq lbl_8012C3B8
/* 8012C398 001292D8  38 1F 02 F0 */	addi r0, r31, 0x2f0
/* 8012C39C 001292DC  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8012C3A0 001292E0  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8012C3A4 001292E4  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8012C3A8 001292E8  38 00 00 00 */	li r0, 0
/* 8012C3AC 001292EC  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 8012C3B0 001292F0  90 1F 02 F4 */	stw r0, 0x2f4(r31)
/* 8012C3B4 001292F4  90 1F 02 F8 */	stw r0, 0x2f8(r31)
lbl_8012C3B8:
/* 8012C3B8 001292F8  7F E3 FB 78 */	mr r3, r31
/* 8012C3BC 001292FC  38 80 00 00 */	li r4, 0
/* 8012C3C0 00129300  4B FF E5 91 */	bl __ct__Q34Game10ChappyBase3ObjFv
/* 8012C3C4 00129304  3C 60 80 4B */	lis r3, __vt__Q34Game12YellowChappy3Obj@ha
/* 8012C3C8 00129308  38 BF 02 F0 */	addi r5, r31, 0x2f0
/* 8012C3CC 0012930C  38 C3 E8 50 */	addi r6, r3, __vt__Q34Game12YellowChappy3Obj@l
/* 8012C3D0 00129310  38 80 00 00 */	li r4, 0
/* 8012C3D4 00129314  90 DF 00 00 */	stw r6, 0(r31)
/* 8012C3D8 00129318  38 66 01 B0 */	addi r3, r6, 0x1b0
/* 8012C3DC 0012931C  38 E6 03 34 */	addi r7, r6, 0x334
/* 8012C3E0 00129320  38 00 00 FF */	li r0, 0xff
/* 8012C3E4 00129324  90 7F 01 78 */	stw r3, 0x178(r31)
/* 8012C3E8 00129328  38 60 00 2C */	li r3, 0x2c
/* 8012C3EC 0012932C  80 DF 01 7C */	lwz r6, 0x17c(r31)
/* 8012C3F0 00129330  90 E6 00 00 */	stw r7, 0(r6)
/* 8012C3F4 00129334  80 DF 01 7C */	lwz r6, 0x17c(r31)
/* 8012C3F8 00129338  7C A6 28 50 */	subf r5, r6, r5
/* 8012C3FC 0012933C  90 A6 00 0C */	stw r5, 0xc(r6)
/* 8012C400 00129340  90 9F 02 E4 */	stw r4, 0x2e4(r31)
/* 8012C404 00129344  98 1F 02 E8 */	stb r0, 0x2e8(r31)
/* 8012C408 00129348  4B EF 7A 9D */	bl __nw__FUl
/* 8012C40C 0012934C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8012C410 00129350  41 82 00 44 */	beq lbl_8012C454
/* 8012C414 00129354  4B FF B5 61 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8012C418 00129358  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase14ProperAnimator@ha
/* 8012C41C 0012935C  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8012C420 00129360  38 03 C1 E8 */	addi r0, r3, __vt__Q34Game10ChappyBase14ProperAnimator@l
/* 8012C424 00129364  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8012C428 00129368  90 1E 00 00 */	stw r0, 0(r30)
/* 8012C42C 0012936C  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8012C430 00129370  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8012C434 00129374  38 00 00 00 */	li r0, 0
/* 8012C438 00129378  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8012C43C 0012937C  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8012C440 00129380  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8012C444 00129384  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8012C448 00129388  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8012C44C 0012938C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8012C450 00129390  90 1E 00 20 */	stw r0, 0x20(r30)
lbl_8012C454:
/* 8012C454 00129394  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8012C458 00129398  38 60 00 1C */	li r3, 0x1c
/* 8012C45C 0012939C  4B EF 7A 49 */	bl __nw__FUl
/* 8012C460 001293A0  7C 64 1B 79 */	or. r4, r3, r3
/* 8012C464 001293A4  41 82 00 24 */	beq lbl_8012C488
/* 8012C468 001293A8  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8012C46C 001293AC  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase3FSM@ha
/* 8012C470 001293B0  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8012C474 001293B4  38 A0 FF FF */	li r5, -1
/* 8012C478 001293B8  90 04 00 00 */	stw r0, 0(r4)
/* 8012C47C 001293BC  38 03 C1 C4 */	addi r0, r3, __vt__Q34Game10ChappyBase3FSM@l
/* 8012C480 001293C0  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8012C484 001293C4  90 04 00 00 */	stw r0, 0(r4)
lbl_8012C488:
/* 8012C488 001293C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8012C48C 001293CC  7F E3 FB 78 */	mr r3, r31
/* 8012C490 001293D0  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8012C494 001293D4  7D 89 03 A6 */	mtctr r12
/* 8012C498 001293D8  4E 80 04 21 */	bctrl 
/* 8012C49C 001293DC  7F E3 FB 78 */	mr r3, r31
/* 8012C4A0 001293E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8012C4A4 001293E4  81 8C 03 1C */	lwz r12, 0x31c(r12)
/* 8012C4A8 001293E8  7D 89 03 A6 */	mtctr r12
/* 8012C4AC 001293EC  4E 80 04 21 */	bctrl 
/* 8012C4B0 001293F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C4B4 001293F4  7F E3 FB 78 */	mr r3, r31
/* 8012C4B8 001293F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012C4BC 001293FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012C4C0 00129400  7C 08 03 A6 */	mtlr r0
/* 8012C4C4 00129404  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C4C8 00129408  4E 80 00 20 */	blr 

.global onInit__Q34Game12YellowChappy3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game12YellowChappy3ObjFPQ24Game15CreatureInitArg:
/* 8012C4CC 0012940C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C4D0 00129410  7C 08 02 A6 */	mflr r0
/* 8012C4D4 00129414  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C4D8 00129418  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012C4DC 0012941C  7C 7F 1B 78 */	mr r31, r3
/* 8012C4E0 00129420  4B FF E6 15 */	bl onInit__Q34Game10ChappyBase3ObjFPQ24Game15CreatureInitArg
/* 8012C4E4 00129424  38 60 00 FF */	li r3, 0xff
/* 8012C4E8 00129428  38 00 00 01 */	li r0, 1
/* 8012C4EC 0012942C  98 7F 02 E8 */	stb r3, 0x2e8(r31)
/* 8012C4F0 00129430  98 1F 02 E9 */	stb r0, 0x2e9(r31)
/* 8012C4F4 00129434  80 7F 01 80 */	lwz r3, 0x180(r31)
/* 8012C4F8 00129438  38 03 00 50 */	addi r0, r3, 0x50
/* 8012C4FC 0012943C  90 1F 02 EC */	stw r0, 0x2ec(r31)
/* 8012C500 00129440  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012C504 00129444  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C508 00129448  7C 08 03 A6 */	mtlr r0
/* 8012C50C 0012944C  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C510 00129450  4E 80 00 20 */	blr 

.global doUpdateCommon__Q34Game12YellowChappy3ObjFv
doUpdateCommon__Q34Game12YellowChappy3ObjFv:
/* 8012C514 00129454  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8012C518 00129458  7C 08 02 A6 */	mflr r0
/* 8012C51C 0012945C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8012C520 00129460  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8012C524 00129464  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8012C528 00129468  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8012C52C 0012946C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8012C530 00129470  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8012C534 00129474  7C 7E 1B 78 */	mr r30, r3
/* 8012C538 00129478  4B FD 69 DD */	bl doUpdateCommon__Q24Game9EnemyBaseFv
/* 8012C53C 0012947C  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 8012C540 00129480  8B FE 02 E8 */	lbz r31, 0x2e8(r30)
/* 8012C544 00129484  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8012C548 00129488  41 82 00 0C */	beq lbl_8012C554
/* 8012C54C 0012948C  3B FF FF F6 */	addi r31, r31, -10
/* 8012C550 00129490  48 00 00 E8 */	b lbl_8012C638
lbl_8012C554:
/* 8012C554 00129494  C0 22 9D 70 */	lfs f1, lbl_805180D0@sda21(r2)
/* 8012C558 00129498  C0 1E 02 04 */	lfs f0, 0x204(r30)
/* 8012C55C 0012949C  C0 5E 02 00 */	lfs f2, 0x200(r30)
/* 8012C560 001294A0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8012C564 001294A4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8012C568 001294A8  40 80 00 CC */	bge lbl_8012C634
/* 8012C56C 001294AC  88 1E 02 E9 */	lbz r0, 0x2e9(r30)
/* 8012C570 001294B0  28 00 00 00 */	cmplwi r0, 0
/* 8012C574 001294B4  41 82 00 B8 */	beq lbl_8012C62C
/* 8012C578 001294B8  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8012C57C 001294BC  38 82 9D 74 */	addi r4, r2, lbl_805180D4@sda21
/* 8012C580 001294C0  48 31 2A 65 */	bl getJoint__Q28SysShape5ModelFPc
/* 8012C584 001294C4  7C 7D 1B 79 */	or. r29, r3, r3
/* 8012C588 001294C8  40 82 00 20 */	bne lbl_8012C5A8
/* 8012C58C 001294CC  3C 60 80 48 */	lis r3, lbl_8047C0A0@ha
/* 8012C590 001294D0  3C A0 80 48 */	lis r5, lbl_8047C0B4@ha
/* 8012C594 001294D4  38 63 C0 A0 */	addi r3, r3, lbl_8047C0A0@l
/* 8012C598 001294D8  38 80 00 7C */	li r4, 0x7c
/* 8012C59C 001294DC  38 A5 C0 B4 */	addi r5, r5, lbl_8047C0B4@l
/* 8012C5A0 001294E0  4C C6 31 82 */	crclr 6
/* 8012C5A4 001294E4  4B EF E0 9D */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8012C5A8:
/* 8012C5A8 001294E8  7F A3 EB 78 */	mr r3, r29
/* 8012C5AC 001294EC  48 2F D2 F5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8012C5B0 001294F0  7C 7D 1B 79 */	or. r29, r3, r3
/* 8012C5B4 001294F4  40 82 00 20 */	bne lbl_8012C5D4
/* 8012C5B8 001294F8  3C 60 80 48 */	lis r3, lbl_8047C0A0@ha
/* 8012C5BC 001294FC  3C A0 80 48 */	lis r5, lbl_8047C0B4@ha
/* 8012C5C0 00129500  38 63 C0 A0 */	addi r3, r3, lbl_8047C0A0@l
/* 8012C5C4 00129504  38 80 00 7E */	li r4, 0x7e
/* 8012C5C8 00129508  38 A5 C0 B4 */	addi r5, r5, lbl_8047C0B4@l
/* 8012C5CC 0012950C  4C C6 31 82 */	crclr 6
/* 8012C5D0 00129510  4B EF E0 71 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8012C5D4:
/* 8012C5D4 00129514  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8012C5D8 00129518  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 8012C5DC 0012951C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8012C5E0 00129520  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 8012C5E4 00129524  90 01 00 08 */	stw r0, 8(r1)
/* 8012C5E8 00129528  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 8012C5EC 0012952C  3C 60 80 4B */	lis r3, __vt__Q23efx12TKechappyOff@ha
/* 8012C5F0 00129530  38 C0 02 94 */	li r6, 0x294
/* 8012C5F4 00129534  90 01 00 08 */	stw r0, 8(r1)
/* 8012C5F8 00129538  38 84 6A 14 */	addi r4, r4, __vt__Q23efx11TSimpleMtx1@l
/* 8012C5FC 0012953C  38 A0 00 00 */	li r5, 0
/* 8012C600 00129540  38 03 E8 3C */	addi r0, r3, __vt__Q23efx12TKechappyOff@l
/* 8012C604 00129544  90 81 00 08 */	stw r4, 8(r1)
/* 8012C608 00129548  38 61 00 08 */	addi r3, r1, 8
/* 8012C60C 0012954C  38 80 00 00 */	li r4, 0
/* 8012C610 00129550  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 8012C614 00129554  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8012C618 00129558  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8012C61C 0012955C  90 01 00 08 */	stw r0, 8(r1)
/* 8012C620 00129560  48 28 2C 95 */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 8012C624 00129564  38 00 00 00 */	li r0, 0
/* 8012C628 00129568  98 1E 02 E9 */	stb r0, 0x2e9(r30)
lbl_8012C62C:
/* 8012C62C 0012956C  3B FF FF CE */	addi r31, r31, -50
/* 8012C630 00129570  48 00 00 08 */	b lbl_8012C638
lbl_8012C634:
/* 8012C634 00129574  3B FF 00 0A */	addi r31, r31, 0xa
lbl_8012C638:
/* 8012C638 00129578  2C 1F 00 00 */	cmpwi r31, 0
/* 8012C63C 0012957C  40 80 00 0C */	bge lbl_8012C648
/* 8012C640 00129580  3B E0 00 00 */	li r31, 0
/* 8012C644 00129584  48 00 00 18 */	b lbl_8012C65C
lbl_8012C648:
/* 8012C648 00129588  2C 1F 00 FF */	cmpwi r31, 0xff
/* 8012C64C 0012958C  40 81 00 10 */	ble lbl_8012C65C
/* 8012C650 00129590  38 00 00 01 */	li r0, 1
/* 8012C654 00129594  3B E0 00 FF */	li r31, 0xff
/* 8012C658 00129598  98 1E 02 E9 */	stb r0, 0x2e9(r30)
lbl_8012C65C:
/* 8012C65C 0012959C  9B FE 02 E8 */	stb r31, 0x2e8(r30)
/* 8012C660 001295A0  80 7E 02 E4 */	lwz r3, 0x2e4(r30)
/* 8012C664 001295A4  88 9E 02 E8 */	lbz r4, 0x2e8(r30)
/* 8012C668 001295A8  48 28 74 E5 */	bl setGlobalAlpha__Q23efx13TKechappyTestFUc
/* 8012C66C 001295AC  80 7E 02 E4 */	lwz r3, 0x2e4(r30)
/* 8012C670 001295B0  38 9E 01 68 */	addi r4, r30, 0x168
/* 8012C674 001295B4  48 28 75 79 */	bl "setGlobalDynamicsScale__Q23efx13TKechappyTestFR10Vector3<f>"
/* 8012C678 001295B8  7F C3 F3 78 */	mr r3, r30
/* 8012C67C 001295BC  4B FD 8B F1 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 8012C680 001295C0  FF E0 08 90 */	fmr f31, f1
/* 8012C684 001295C4  7F C3 F3 78 */	mr r3, r30
/* 8012C688 001295C8  4B FD AC C1 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 8012C68C 001295CC  FC 20 F8 90 */	fmr f1, f31
/* 8012C690 001295D0  7C 65 1B 78 */	mr r5, r3
/* 8012C694 001295D4  80 7E 02 EC */	lwz r3, 0x2ec(r30)
/* 8012C698 001295D8  80 9E 02 E4 */	lwz r4, 0x2e4(r30)
/* 8012C69C 001295DC  48 00 6A 35 */	bl update__Q214EffectAnimator3MgrFPQ23efx13TKechappyTestif
/* 8012C6A0 001295E0  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8012C6A4 001295E4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8012C6A8 001295E8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8012C6AC 001295EC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8012C6B0 001295F0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8012C6B4 001295F4  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8012C6B8 001295F8  7C 08 03 A6 */	mtlr r0
/* 8012C6BC 001295FC  38 21 00 40 */	addi r1, r1, 0x40
/* 8012C6C0 00129600  4E 80 00 20 */	blr 

.global onKill__Q34Game12YellowChappy3ObjFPQ24Game15CreatureKillArg
onKill__Q34Game12YellowChappy3ObjFPQ24Game15CreatureKillArg:
/* 8012C6C4 00129604  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C6C8 00129608  7C 08 02 A6 */	mflr r0
/* 8012C6CC 0012960C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C6D0 00129610  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012C6D4 00129614  7C 7F 1B 78 */	mr r31, r3
/* 8012C6D8 00129618  4B FD 58 11 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 8012C6DC 0012961C  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 8012C6E0 00129620  81 83 00 00 */	lwz r12, 0(r3)
/* 8012C6E4 00129624  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8012C6E8 00129628  7D 89 03 A6 */	mtctr r12
/* 8012C6EC 0012962C  4E 80 04 21 */	bctrl 
/* 8012C6F0 00129630  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C6F4 00129634  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012C6F8 00129638  7C 08 03 A6 */	mtlr r0
/* 8012C6FC 0012963C  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C700 00129640  4E 80 00 20 */	blr 

.global createEffect__Q34Game12YellowChappy3ObjFv
createEffect__Q34Game12YellowChappy3ObjFv:
/* 8012C704 00129644  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C708 00129648  7C 08 02 A6 */	mflr r0
/* 8012C70C 0012964C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C710 00129650  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012C714 00129654  93 C1 00 08 */	stw r30, 8(r1)
/* 8012C718 00129658  7C 7E 1B 78 */	mr r30, r3
/* 8012C71C 0012965C  4B FF EE D1 */	bl createEffect__Q34Game10ChappyBase3ObjFv
/* 8012C720 00129660  38 60 00 40 */	li r3, 0x40
/* 8012C724 00129664  4B EF 77 81 */	bl __nw__FUl
/* 8012C728 00129668  7C 7F 1B 79 */	or. r31, r3, r3
/* 8012C72C 0012966C  41 82 00 24 */	beq lbl_8012C750
/* 8012C730 00129670  38 80 00 00 */	li r4, 0
/* 8012C734 00129674  38 A0 02 83 */	li r5, 0x283
/* 8012C738 00129678  38 C0 02 84 */	li r6, 0x284
/* 8012C73C 0012967C  38 E0 02 85 */	li r7, 0x285
/* 8012C740 00129680  48 28 3E 6D */	bl __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs
/* 8012C744 00129684  3C 60 80 4B */	lis r3, __vt__Q23efx13TKechappyTest@ha
/* 8012C748 00129688  38 03 E8 20 */	addi r0, r3, __vt__Q23efx13TKechappyTest@l
/* 8012C74C 0012968C  90 1F 00 00 */	stw r0, 0(r31)
lbl_8012C750:
/* 8012C750 00129690  93 FE 02 E4 */	stw r31, 0x2e4(r30)
/* 8012C754 00129694  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C758 00129698  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012C75C 0012969C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012C760 001296A0  7C 08 03 A6 */	mtlr r0
/* 8012C764 001296A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C768 001296A8  4E 80 00 20 */	blr 

.global setupEffect__Q34Game12YellowChappy3ObjFv
setupEffect__Q34Game12YellowChappy3ObjFv:
/* 8012C76C 001296AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C770 001296B0  7C 08 02 A6 */	mflr r0
/* 8012C774 001296B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C778 001296B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012C77C 001296BC  93 C1 00 08 */	stw r30, 8(r1)
/* 8012C780 001296C0  7C 7E 1B 78 */	mr r30, r3
/* 8012C784 001296C4  4B FF EF 9D */	bl setupEffect__Q34Game10ChappyBase3ObjFv
/* 8012C788 001296C8  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8012C78C 001296CC  38 82 9D 74 */	addi r4, r2, lbl_805180D4@sda21
/* 8012C790 001296D0  48 31 28 55 */	bl getJoint__Q28SysShape5ModelFPc
/* 8012C794 001296D4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8012C798 001296D8  40 82 00 20 */	bne lbl_8012C7B8
/* 8012C79C 001296DC  3C 60 80 48 */	lis r3, lbl_8047C0A0@ha
/* 8012C7A0 001296E0  3C A0 80 48 */	lis r5, lbl_8047C0B4@ha
/* 8012C7A4 001296E4  38 63 C0 A0 */	addi r3, r3, lbl_8047C0A0@l
/* 8012C7A8 001296E8  38 80 00 C0 */	li r4, 0xc0
/* 8012C7AC 001296EC  38 A5 C0 B4 */	addi r5, r5, lbl_8047C0B4@l
/* 8012C7B0 001296F0  4C C6 31 82 */	crclr 6
/* 8012C7B4 001296F4  4B EF DE 8D */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8012C7B8:
/* 8012C7B8 001296F8  7F E3 FB 78 */	mr r3, r31
/* 8012C7BC 001296FC  48 2F D0 E5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8012C7C0 00129700  7C 7F 1B 79 */	or. r31, r3, r3
/* 8012C7C4 00129704  40 82 00 20 */	bne lbl_8012C7E4
/* 8012C7C8 00129708  3C 60 80 48 */	lis r3, lbl_8047C0A0@ha
/* 8012C7CC 0012970C  3C A0 80 48 */	lis r5, lbl_8047C0B4@ha
/* 8012C7D0 00129710  38 63 C0 A0 */	addi r3, r3, lbl_8047C0A0@l
/* 8012C7D4 00129714  38 80 00 C2 */	li r4, 0xc2
/* 8012C7D8 00129718  38 A5 C0 B4 */	addi r5, r5, lbl_8047C0B4@l
/* 8012C7DC 0012971C  4C C6 31 82 */	crclr 6
/* 8012C7E0 00129720  4B EF DE 61 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8012C7E4:
/* 8012C7E4 00129724  80 7E 02 E4 */	lwz r3, 0x2e4(r30)
/* 8012C7E8 00129728  7F E4 FB 78 */	mr r4, r31
/* 8012C7EC 0012972C  48 28 3E 61 */	bl setMtxptr__Q23efx10TChaseMtx3FPA4_f
/* 8012C7F0 00129730  80 7E 02 E4 */	lwz r3, 0x2e4(r30)
/* 8012C7F4 00129734  38 80 00 00 */	li r4, 0
/* 8012C7F8 00129738  81 83 00 00 */	lwz r12, 0(r3)
/* 8012C7FC 0012973C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8012C800 00129740  7D 89 03 A6 */	mtctr r12
/* 8012C804 00129744  4E 80 04 21 */	bctrl 
/* 8012C808 00129748  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C80C 0012974C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012C810 00129750  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012C814 00129754  7C 08 03 A6 */	mtlr r0
/* 8012C818 00129758  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C81C 0012975C  4E 80 00 20 */	blr 

.global doStartMovie__Q34Game12YellowChappy3ObjFv
doStartMovie__Q34Game12YellowChappy3ObjFv:
/* 8012C820 00129760  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C824 00129764  7C 08 02 A6 */	mflr r0
/* 8012C828 00129768  38 80 00 00 */	li r4, 0
/* 8012C82C 0012976C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C830 00129770  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 8012C834 00129774  48 28 73 19 */	bl setGlobalAlpha__Q23efx13TKechappyTestFUc
/* 8012C838 00129778  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C83C 0012977C  7C 08 03 A6 */	mtlr r0
/* 8012C840 00129780  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C844 00129784  4E 80 00 20 */	blr 

.global doEndMovie__Q34Game12YellowChappy3ObjFv
doEndMovie__Q34Game12YellowChappy3ObjFv:
/* 8012C848 00129788  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game12YellowChappy3ObjFv
changeMaterial__Q34Game12YellowChappy3ObjFv:
/* 8012C84C 0012978C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8012C850 00129790  7C 08 02 A6 */	mflr r0
/* 8012C854 00129794  90 01 00 24 */	stw r0, 0x24(r1)
/* 8012C858 00129798  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8012C85C 0012979C  7C 7B 1B 78 */	mr r27, r3
/* 8012C860 001297A0  80 63 01 80 */	lwz r3, 0x180(r3)
/* 8012C864 001297A4  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 8012C868 001297A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8012C86C 001297AC  83 84 00 08 */	lwz r28, 8(r4)
/* 8012C870 001297B0  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 8012C874 001297B4  83 BC 00 04 */	lwz r29, 4(r28)
/* 8012C878 001297B8  7D 89 03 A6 */	mtctr r12
/* 8012C87C 001297BC  4E 80 04 21 */	bctrl 
/* 8012C880 001297C0  7C 7E 1B 78 */	mr r30, r3
/* 8012C884 001297C4  80 7B 01 80 */	lwz r3, 0x180(r27)
/* 8012C888 001297C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8012C88C 001297CC  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 8012C890 001297D0  7D 89 03 A6 */	mtctr r12
/* 8012C894 001297D4  4E 80 04 21 */	bctrl 
/* 8012C898 001297D8  7C 7F 1B 78 */	mr r31, r3
/* 8012C89C 001297DC  7F 83 E3 78 */	mr r3, r28
/* 8012C8A0 001297E0  81 9C 00 00 */	lwz r12, 0(r28)
/* 8012C8A4 001297E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8012C8A8 001297E8  7D 89 03 A6 */	mtctr r12
/* 8012C8AC 001297EC  4E 80 04 21 */	bctrl 
/* 8012C8B0 001297F0  80 7B 01 74 */	lwz r3, 0x174(r27)
/* 8012C8B4 001297F4  88 1E 00 00 */	lbz r0, 0(r30)
/* 8012C8B8 001297F8  80 63 00 08 */	lwz r3, 8(r3)
/* 8012C8BC 001297FC  80 63 00 04 */	lwz r3, 4(r3)
/* 8012C8C0 00129800  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 8012C8C4 00129804  80 64 00 04 */	lwz r3, 4(r4)
/* 8012C8C8 00129808  98 03 00 00 */	stb r0, 0(r3)
/* 8012C8CC 0012980C  88 1E 00 01 */	lbz r0, 1(r30)
/* 8012C8D0 00129810  98 03 00 01 */	stb r0, 1(r3)
/* 8012C8D4 00129814  A0 1E 00 02 */	lhz r0, 2(r30)
/* 8012C8D8 00129818  B0 03 00 02 */	sth r0, 2(r3)
/* 8012C8DC 0012981C  A0 1E 00 04 */	lhz r0, 4(r30)
/* 8012C8E0 00129820  B0 03 00 04 */	sth r0, 4(r3)
/* 8012C8E4 00129824  88 1E 00 06 */	lbz r0, 6(r30)
/* 8012C8E8 00129828  98 03 00 06 */	stb r0, 6(r3)
/* 8012C8EC 0012982C  88 1E 00 07 */	lbz r0, 7(r30)
/* 8012C8F0 00129830  98 03 00 07 */	stb r0, 7(r3)
/* 8012C8F4 00129834  88 1E 00 08 */	lbz r0, 8(r30)
/* 8012C8F8 00129838  98 03 00 08 */	stb r0, 8(r3)
/* 8012C8FC 0012983C  88 1E 00 09 */	lbz r0, 9(r30)
/* 8012C900 00129840  98 03 00 09 */	stb r0, 9(r3)
/* 8012C904 00129844  A0 1E 00 0A */	lhz r0, 0xa(r30)
/* 8012C908 00129848  B0 03 00 0A */	sth r0, 0xa(r3)
/* 8012C90C 0012984C  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 8012C910 00129850  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012C914 00129854  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 8012C918 00129858  98 03 00 10 */	stb r0, 0x10(r3)
/* 8012C91C 0012985C  88 1E 00 11 */	lbz r0, 0x11(r30)
/* 8012C920 00129860  98 03 00 11 */	stb r0, 0x11(r3)
/* 8012C924 00129864  88 1E 00 12 */	lbz r0, 0x12(r30)
/* 8012C928 00129868  98 03 00 12 */	stb r0, 0x12(r3)
/* 8012C92C 0012986C  88 1E 00 13 */	lbz r0, 0x13(r30)
/* 8012C930 00129870  98 03 00 13 */	stb r0, 0x13(r3)
/* 8012C934 00129874  88 1E 00 14 */	lbz r0, 0x14(r30)
/* 8012C938 00129878  98 03 00 14 */	stb r0, 0x14(r3)
/* 8012C93C 0012987C  88 1E 00 15 */	lbz r0, 0x15(r30)
/* 8012C940 00129880  98 03 00 15 */	stb r0, 0x15(r3)
/* 8012C944 00129884  88 1E 00 16 */	lbz r0, 0x16(r30)
/* 8012C948 00129888  98 03 00 16 */	stb r0, 0x16(r3)
/* 8012C94C 0012988C  88 1E 00 17 */	lbz r0, 0x17(r30)
/* 8012C950 00129890  98 03 00 17 */	stb r0, 0x17(r3)
/* 8012C954 00129894  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 8012C958 00129898  98 03 00 18 */	stb r0, 0x18(r3)
/* 8012C95C 0012989C  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 8012C960 001298A0  98 03 00 19 */	stb r0, 0x19(r3)
/* 8012C964 001298A4  A8 1E 00 1A */	lha r0, 0x1a(r30)
/* 8012C968 001298A8  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 8012C96C 001298AC  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 8012C970 001298B0  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8012C974 001298B4  80 64 00 04 */	lwz r3, 4(r4)
/* 8012C978 001298B8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8012C97C 001298BC  7C 1E 02 14 */	add r0, r30, r0
/* 8012C980 001298C0  7C 03 00 50 */	subf r0, r3, r0
/* 8012C984 001298C4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8012C988 001298C8  80 64 00 04 */	lwz r3, 4(r4)
/* 8012C98C 001298CC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8012C990 001298D0  7C 1E 02 14 */	add r0, r30, r0
/* 8012C994 001298D4  7C 03 00 50 */	subf r0, r3, r0
/* 8012C998 001298D8  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012C99C 001298DC  80 7B 01 74 */	lwz r3, 0x174(r27)
/* 8012C9A0 001298E0  88 1F 00 00 */	lbz r0, 0(r31)
/* 8012C9A4 001298E4  80 63 00 08 */	lwz r3, 8(r3)
/* 8012C9A8 001298E8  80 63 00 04 */	lwz r3, 4(r3)
/* 8012C9AC 001298EC  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 8012C9B0 001298F0  80 64 00 04 */	lwz r3, 4(r4)
/* 8012C9B4 001298F4  98 03 00 20 */	stb r0, 0x20(r3)
/* 8012C9B8 001298F8  88 1F 00 01 */	lbz r0, 1(r31)
/* 8012C9BC 001298FC  98 03 00 21 */	stb r0, 0x21(r3)
/* 8012C9C0 00129900  A0 1F 00 02 */	lhz r0, 2(r31)
/* 8012C9C4 00129904  B0 03 00 22 */	sth r0, 0x22(r3)
/* 8012C9C8 00129908  A0 1F 00 04 */	lhz r0, 4(r31)
/* 8012C9CC 0012990C  B0 03 00 24 */	sth r0, 0x24(r3)
/* 8012C9D0 00129910  88 1F 00 06 */	lbz r0, 6(r31)
/* 8012C9D4 00129914  98 03 00 26 */	stb r0, 0x26(r3)
/* 8012C9D8 00129918  88 1F 00 07 */	lbz r0, 7(r31)
/* 8012C9DC 0012991C  98 03 00 27 */	stb r0, 0x27(r3)
/* 8012C9E0 00129920  88 1F 00 08 */	lbz r0, 8(r31)
/* 8012C9E4 00129924  98 03 00 28 */	stb r0, 0x28(r3)
/* 8012C9E8 00129928  88 1F 00 09 */	lbz r0, 9(r31)
/* 8012C9EC 0012992C  98 03 00 29 */	stb r0, 0x29(r3)
/* 8012C9F0 00129930  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 8012C9F4 00129934  B0 03 00 2A */	sth r0, 0x2a(r3)
/* 8012C9F8 00129938  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8012C9FC 0012993C  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8012CA00 00129940  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8012CA04 00129944  98 03 00 30 */	stb r0, 0x30(r3)
/* 8012CA08 00129948  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 8012CA0C 0012994C  98 03 00 31 */	stb r0, 0x31(r3)
/* 8012CA10 00129950  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 8012CA14 00129954  98 03 00 32 */	stb r0, 0x32(r3)
/* 8012CA18 00129958  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 8012CA1C 0012995C  98 03 00 33 */	stb r0, 0x33(r3)
/* 8012CA20 00129960  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 8012CA24 00129964  98 03 00 34 */	stb r0, 0x34(r3)
/* 8012CA28 00129968  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 8012CA2C 0012996C  98 03 00 35 */	stb r0, 0x35(r3)
/* 8012CA30 00129970  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 8012CA34 00129974  98 03 00 36 */	stb r0, 0x36(r3)
/* 8012CA38 00129978  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 8012CA3C 0012997C  3C A0 80 51 */	lis r5, j3dSys@ha
/* 8012CA40 00129980  3B 65 F2 30 */	addi r27, r5, j3dSys@l
/* 8012CA44 00129984  3B C0 00 00 */	li r30, 0
/* 8012CA48 00129988  98 03 00 37 */	stb r0, 0x37(r3)
/* 8012CA4C 0012998C  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 8012CA50 00129990  98 03 00 38 */	stb r0, 0x38(r3)
/* 8012CA54 00129994  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 8012CA58 00129998  98 03 00 39 */	stb r0, 0x39(r3)
/* 8012CA5C 0012999C  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 8012CA60 001299A0  B0 03 00 3A */	sth r0, 0x3a(r3)
/* 8012CA64 001299A4  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8012CA68 001299A8  90 03 00 3C */	stw r0, 0x3c(r3)
/* 8012CA6C 001299AC  80 A4 00 04 */	lwz r5, 4(r4)
/* 8012CA70 001299B0  80 05 00 3C */	lwz r0, 0x3c(r5)
/* 8012CA74 001299B4  38 65 00 20 */	addi r3, r5, 0x20
/* 8012CA78 001299B8  7C 1F 02 14 */	add r0, r31, r0
/* 8012CA7C 001299BC  7C 03 00 50 */	subf r0, r3, r0
/* 8012CA80 001299C0  90 05 00 3C */	stw r0, 0x3c(r5)
/* 8012CA84 001299C4  80 84 00 04 */	lwz r4, 4(r4)
/* 8012CA88 001299C8  80 04 00 2C */	lwz r0, 0x2c(r4)
/* 8012CA8C 001299CC  38 64 00 20 */	addi r3, r4, 0x20
/* 8012CA90 001299D0  7C 1F 02 14 */	add r0, r31, r0
/* 8012CA94 001299D4  7C 03 00 50 */	subf r0, r3, r0
/* 8012CA98 001299D8  90 04 00 2C */	stw r0, 0x2c(r4)
/* 8012CA9C 001299DC  48 00 00 3C */	b lbl_8012CAD8
lbl_8012CAA0:
/* 8012CAA0 001299E0  80 9C 00 C0 */	lwz r4, 0xc0(r28)
/* 8012CAA4 001299E4  57 C3 32 B2 */	rlwinm r3, r30, 6, 0xa, 0x19
/* 8012CAA8 001299E8  57 C0 13 BA */	rlwinm r0, r30, 2, 0xe, 0x1d
/* 8012CAAC 001299EC  7C 84 1A 14 */	add r4, r4, r3
/* 8012CAB0 001299F0  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 8012CAB4 001299F4  80 7D 00 60 */	lwz r3, 0x60(r29)
/* 8012CAB8 001299F8  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8012CABC 001299FC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8012CAC0 00129A00  80 84 00 34 */	lwz r4, 0x34(r4)
/* 8012CAC4 00129A04  81 83 00 00 */	lwz r12, 0(r3)
/* 8012CAC8 00129A08  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8012CACC 00129A0C  7D 89 03 A6 */	mtctr r12
/* 8012CAD0 00129A10  4E 80 04 21 */	bctrl 
/* 8012CAD4 00129A14  3B DE 00 01 */	addi r30, r30, 1
lbl_8012CAD8:
/* 8012CAD8 00129A18  A0 1D 00 5C */	lhz r0, 0x5c(r29)
/* 8012CADC 00129A1C  57 C3 04 3E */	clrlwi r3, r30, 0x10
/* 8012CAE0 00129A20  7C 03 00 40 */	cmplw r3, r0
/* 8012CAE4 00129A24  41 80 FF BC */	blt lbl_8012CAA0
/* 8012CAE8 00129A28  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8012CAEC 00129A2C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8012CAF0 00129A30  7C 08 03 A6 */	mtlr r0
/* 8012CAF4 00129A34  38 21 00 20 */	addi r1, r1, 0x20
/* 8012CAF8 00129A38  4E 80 00 20 */	blr 

.global doStartWaitingBirthTypeDrop__Q34Game12YellowChappy3ObjFv
doStartWaitingBirthTypeDrop__Q34Game12YellowChappy3ObjFv:
/* 8012CAFC 00129A3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012CB00 00129A40  7C 08 02 A6 */	mflr r0
/* 8012CB04 00129A44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012CB08 00129A48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012CB0C 00129A4C  7C 7F 1B 78 */	mr r31, r3
/* 8012CB10 00129A50  4B FD AE 89 */	bl doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 8012CB14 00129A54  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 8012CB18 00129A58  38 80 00 00 */	li r4, 0
/* 8012CB1C 00129A5C  48 28 70 31 */	bl setGlobalAlpha__Q23efx13TKechappyTestFUc
/* 8012CB20 00129A60  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 8012CB24 00129A64  81 83 00 00 */	lwz r12, 0(r3)
/* 8012CB28 00129A68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8012CB2C 00129A6C  7D 89 03 A6 */	mtctr r12
/* 8012CB30 00129A70  4E 80 04 21 */	bctrl 
/* 8012CB34 00129A74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012CB38 00129A78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012CB3C 00129A7C  7C 08 03 A6 */	mtlr r0
/* 8012CB40 00129A80  38 21 00 10 */	addi r1, r1, 0x10
/* 8012CB44 00129A84  4E 80 00 20 */	blr 

.global doFinishWaitingBirthTypeDrop__Q34Game12YellowChappy3ObjFv
doFinishWaitingBirthTypeDrop__Q34Game12YellowChappy3ObjFv:
/* 8012CB48 00129A88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012CB4C 00129A8C  7C 08 02 A6 */	mflr r0
/* 8012CB50 00129A90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012CB54 00129A94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012CB58 00129A98  7C 7F 1B 78 */	mr r31, r3
/* 8012CB5C 00129A9C  4B FD AE 6D */	bl doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 8012CB60 00129AA0  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 8012CB64 00129AA4  38 80 00 FF */	li r4, 0xff
/* 8012CB68 00129AA8  48 28 6F E5 */	bl setGlobalAlpha__Q23efx13TKechappyTestFUc
/* 8012CB6C 00129AAC  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 8012CB70 00129AB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8012CB74 00129AB4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8012CB78 00129AB8  7D 89 03 A6 */	mtctr r12
/* 8012CB7C 00129ABC  4E 80 04 21 */	bctrl 
/* 8012CB80 00129AC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012CB84 00129AC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012CB88 00129AC8  7C 08 03 A6 */	mtlr r0
/* 8012CB8C 00129ACC  38 21 00 10 */	addi r1, r1, 0x10
/* 8012CB90 00129AD0  4E 80 00 20 */	blr 

.global forceKill__Q23efx8TSimple1Fv
forceKill__Q23efx8TSimple1Fv:
/* 8012CB94 00129AD4  4E 80 00 20 */	blr 

.global fade__Q23efx8TSimple1Fv
fade__Q23efx8TSimple1Fv:
/* 8012CB98 00129AD8  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game12YellowChappy3ObjFv
getEnemyTypeID__Q34Game12YellowChappy3ObjFv:
/* 8012CB9C 00129ADC  38 60 00 2B */	li r3, 0x2b
/* 8012CBA0 00129AE0  4E 80 00 20 */	blr 

.global "@752@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
"@752@12@viewOnPelletKilled__Q24Game9EnemyBaseFv":
/* 8012CBA4 00129AE4  39 60 00 0C */	li r11, 0xc
/* 8012CBA8 00129AE8  7D 63 58 2E */	lwzx r11, r3, r11
/* 8012CBAC 00129AEC  7C 63 5A 14 */	add r3, r3, r11
/* 8012CBB0 00129AF0  38 63 FD 10 */	addi r3, r3, -752
/* 8012CBB4 00129AF4  4B FD 9D 68 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv

.global "@752@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
"@752@12@viewStartCarryMotion__Q24Game9EnemyBaseFv":
/* 8012CBB8 00129AF8  39 60 00 0C */	li r11, 0xc
/* 8012CBBC 00129AFC  7D 63 58 2E */	lwzx r11, r3, r11
/* 8012CBC0 00129B00  7C 63 5A 14 */	add r3, r3, r11
/* 8012CBC4 00129B04  38 63 FD 10 */	addi r3, r3, -752
/* 8012CBC8 00129B08  4B FD 9A E0 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv

.global "@752@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
"@752@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv":
/* 8012CBCC 00129B0C  39 60 00 0C */	li r11, 0xc
/* 8012CBD0 00129B10  7D 63 58 2E */	lwzx r11, r3, r11
/* 8012CBD4 00129B14  7C 63 5A 14 */	add r3, r3, r11
/* 8012CBD8 00129B18  38 63 FD 10 */	addi r3, r3, -752
/* 8012CBDC 00129B1C  4B FD 9A EC */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv

.global "@752@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
"@752@12@view_finish_carrymotion__Q24Game9EnemyBaseFv":
/* 8012CBE0 00129B20  39 60 00 0C */	li r11, 0xc
/* 8012CBE4 00129B24  7D 63 58 2E */	lwzx r11, r3, r11
/* 8012CBE8 00129B28  7C 63 5A 14 */	add r3, r3, r11
/* 8012CBEC 00129B2C  38 63 FD 10 */	addi r3, r3, -752
/* 8012CBF0 00129B30  4B FD 9E 88 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv

.global "@752@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
"@752@12@view_start_carrymotion__Q24Game9EnemyBaseFv":
/* 8012CBF4 00129B34  39 60 00 0C */	li r11, 0xc
/* 8012CBF8 00129B38  7D 63 58 2E */	lwzx r11, r3, r11
/* 8012CBFC 00129B3C  7C 63 5A 14 */	add r3, r3, r11
/* 8012CC00 00129B40  38 63 FD 10 */	addi r3, r3, -752
/* 8012CC04 00129B44  4B FD 9E 48 */	b view_start_carrymotion__Q24Game9EnemyBaseFv

.global "@752@12@viewGetShape__Q24Game9EnemyBaseFv"
"@752@12@viewGetShape__Q24Game9EnemyBaseFv":
/* 8012CC08 00129B48  39 60 00 0C */	li r11, 0xc
/* 8012CC0C 00129B4C  7D 63 58 2E */	lwzx r11, r3, r11
/* 8012CC10 00129B50  7C 63 5A 14 */	add r3, r3, r11
/* 8012CC14 00129B54  38 63 FD 10 */	addi r3, r3, -752
/* 8012CC18 00129B58  4B FD 9A 88 */	b viewGetShape__Q24Game9EnemyBaseFv
