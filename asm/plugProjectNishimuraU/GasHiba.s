.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_804864F8
lbl_804864F8:
	.4byte 0x41726747
	.4byte 0x61737548
	.4byte 0x69626100

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23efx11ArgGasuHiba
__vt__Q23efx11ArgGasuHiba:
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx11ArgGasuHibaFv
.global __vt__Q34Game7GasHiba3Obj
__vt__Q34Game7GasHiba3Obj:
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
	.4byte onInit__Q34Game7GasHiba3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q34Game7GasHiba3ObjFf
	.4byte doDirectDraw__Q34Game7GasHiba3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game7GasHiba3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game7GasHiba3ObjFv
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
	.4byte isLivingThing__Q34Game7GasHiba3ObjFv
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
	.4byte getShadowParam__Q34Game7GasHiba3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game7GasHiba3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game7GasHiba3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game7GasHiba3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game7GasHiba3ObjFR8Graphics
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
	.4byte getEnemyTypeID__Q34Game7GasHiba3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreatureR10Vector3<f>f"
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
	.4byte lifeRecover__Q34Game7GasHiba3ObjFv
	.4byte startCarcassMotion__Q24Game9EnemyBaseFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q24Game9EnemyBaseFv
	.4byte doStartMovie__Q24Game9EnemyBaseFv
	.4byte doEndMovie__Q24Game9EnemyBaseFv
	.4byte setFSM__Q34Game7GasHiba3ObjFPQ34Game7GasHiba3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@724@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@724@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@724@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@724@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@724@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@724@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051B078
lbl_8051B078:
	.4byte 0x00000000
.global lbl_8051B07C
lbl_8051B07C:
	.4byte 0x47000000
.global lbl_8051B080
lbl_8051B080:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051B088
lbl_8051B088:
	.float 1.0
.global lbl_8051B08C
lbl_8051B08C:
	.4byte 0x41C80000
.global lbl_8051B090
lbl_8051B090:
	.4byte 0x42960000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game7GasHiba3ObjFv
__ct__Q34Game7GasHiba3ObjFv:
/* 8026D14C 0026A08C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026D150 0026A090  7C 08 02 A6 */	mflr r0
/* 8026D154 0026A094  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026D158 0026A098  7C 80 07 35 */	extsh. r0, r4
/* 8026D15C 0026A09C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026D160 0026A0A0  7C 7F 1B 78 */	mr r31, r3
/* 8026D164 0026A0A4  93 C1 00 08 */	stw r30, 8(r1)
/* 8026D168 0026A0A8  41 82 00 24 */	beq lbl_8026D18C
/* 8026D16C 0026A0AC  38 1F 02 D4 */	addi r0, r31, 0x2d4
/* 8026D170 0026A0B0  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8026D174 0026A0B4  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8026D178 0026A0B8  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8026D17C 0026A0BC  38 00 00 00 */	li r0, 0
/* 8026D180 0026A0C0  90 7F 02 D4 */	stw r3, 0x2d4(r31)
/* 8026D184 0026A0C4  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 8026D188 0026A0C8  90 1F 02 DC */	stw r0, 0x2dc(r31)
lbl_8026D18C:
/* 8026D18C 0026A0CC  7F E3 FB 78 */	mr r3, r31
/* 8026D190 0026A0D0  38 80 00 00 */	li r4, 0
/* 8026D194 0026A0D4  4B E9 42 0D */	bl __ct__Q24Game9EnemyBaseFv
/* 8026D198 0026A0D8  3C 60 80 4C */	lis r3, __vt__Q34Game7GasHiba3Obj@ha
/* 8026D19C 0026A0DC  38 1F 02 D4 */	addi r0, r31, 0x2d4
/* 8026D1A0 0026A0E0  38 A3 59 DC */	addi r5, r3, __vt__Q34Game7GasHiba3Obj@l
/* 8026D1A4 0026A0E4  38 60 00 2C */	li r3, 0x2c
/* 8026D1A8 0026A0E8  90 BF 00 00 */	stw r5, 0(r31)
/* 8026D1AC 0026A0EC  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8026D1B0 0026A0F0  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 8026D1B4 0026A0F4  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8026D1B8 0026A0F8  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8026D1BC 0026A0FC  90 A4 00 00 */	stw r5, 0(r4)
/* 8026D1C0 0026A100  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8026D1C4 0026A104  7C 04 00 50 */	subf r0, r4, r0
/* 8026D1C8 0026A108  90 04 00 0C */	stw r0, 0xc(r4)
/* 8026D1CC 0026A10C  4B DB 6C D9 */	bl __nw__FUl
/* 8026D1D0 0026A110  7C 7E 1B 79 */	or. r30, r3, r3
/* 8026D1D4 0026A114  41 82 00 44 */	beq lbl_8026D218
/* 8026D1D8 0026A118  4B EB A7 9D */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8026D1DC 0026A11C  3C 60 80 4C */	lis r3, __vt__Q34Game7GasHiba14ProperAnimator@ha
/* 8026D1E0 0026A120  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8026D1E4 0026A124  38 03 58 B8 */	addi r0, r3, __vt__Q34Game7GasHiba14ProperAnimator@l
/* 8026D1E8 0026A128  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8026D1EC 0026A12C  90 1E 00 00 */	stw r0, 0(r30)
/* 8026D1F0 0026A130  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8026D1F4 0026A134  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8026D1F8 0026A138  38 00 00 00 */	li r0, 0
/* 8026D1FC 0026A13C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8026D200 0026A140  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8026D204 0026A144  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8026D208 0026A148  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8026D20C 0026A14C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8026D210 0026A150  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8026D214 0026A154  90 1E 00 20 */	stw r0, 0x20(r30)
lbl_8026D218:
/* 8026D218 0026A158  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8026D21C 0026A15C  38 60 00 1C */	li r3, 0x1c
/* 8026D220 0026A160  4B DB 6C 85 */	bl __nw__FUl
/* 8026D224 0026A164  7C 64 1B 79 */	or. r4, r3, r3
/* 8026D228 0026A168  41 82 00 24 */	beq lbl_8026D24C
/* 8026D22C 0026A16C  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8026D230 0026A170  3C 60 80 4C */	lis r3, __vt__Q34Game7GasHiba3FSM@ha
/* 8026D234 0026A174  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8026D238 0026A178  38 A0 FF FF */	li r5, -1
/* 8026D23C 0026A17C  90 04 00 00 */	stw r0, 0(r4)
/* 8026D240 0026A180  38 03 58 90 */	addi r0, r3, __vt__Q34Game7GasHiba3FSM@l
/* 8026D244 0026A184  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8026D248 0026A188  90 04 00 00 */	stw r0, 0(r4)
lbl_8026D24C:
/* 8026D24C 0026A18C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026D250 0026A190  7F E3 FB 78 */	mr r3, r31
/* 8026D254 0026A194  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8026D258 0026A198  7D 89 03 A6 */	mtctr r12
/* 8026D25C 0026A19C  4E 80 04 21 */	bctrl 
/* 8026D260 0026A1A0  7F E3 FB 78 */	mr r3, r31
/* 8026D264 0026A1A4  48 00 0B E9 */	bl createEffect__Q34Game7GasHiba3ObjFv
/* 8026D268 0026A1A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026D26C 0026A1AC  7F E3 FB 78 */	mr r3, r31
/* 8026D270 0026A1B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026D274 0026A1B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026D278 0026A1B8  7C 08 03 A6 */	mtlr r0
/* 8026D27C 0026A1BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8026D280 0026A1C0  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game7GasHiba3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game7GasHiba3ObjFPQ24Game21EnemyInitialParamBase:
/* 8026D284 0026A1C4  4E 80 00 20 */	blr 

.global onInit__Q34Game7GasHiba3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game7GasHiba3ObjFPQ24Game15CreatureInitArg:
/* 8026D288 0026A1C8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8026D28C 0026A1CC  7C 08 02 A6 */	mflr r0
/* 8026D290 0026A1D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8026D294 0026A1D4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8026D298 0026A1D8  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8026D29C 0026A1DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8026D2A0 0026A1E0  7C 7F 1B 78 */	mr r31, r3
/* 8026D2A4 0026A1E4  4B E9 47 B5 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8026D2A8 0026A1E8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8026D2AC 0026A1EC  7F E3 FB 78 */	mr r3, r31
/* 8026D2B0 0026A1F0  54 00 05 24 */	rlwinm r0, r0, 0, 0x14, 0x12
/* 8026D2B4 0026A1F4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026D2B8 0026A1F8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8026D2BC 0026A1FC  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 8026D2C0 0026A200  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026D2C4 0026A204  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8026D2C8 0026A208  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 8026D2CC 0026A20C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026D2D0 0026A210  4B E9 A4 AD */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 8026D2D4 0026A214  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8026D2D8 0026A218  7F E3 FB 78 */	mr r3, r31
/* 8026D2DC 0026A21C  64 00 00 40 */	oris r0, r0, 0x40
/* 8026D2E0 0026A220  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026D2E4 0026A224  4B E9 47 25 */	bl setEmotionNone__Q24Game9EnemyBaseFv
/* 8026D2E8 0026A228  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8026D2EC 0026A22C  7F E4 FB 78 */	mr r4, r31
/* 8026D2F0 0026A230  4B FD 49 79 */	bl killShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 8026D2F4 0026A234  C0 02 CD 18 */	lfs f0, lbl_8051B078@sda21(r2)
/* 8026D2F8 0026A238  7F E3 FB 78 */	mr r3, r31
/* 8026D2FC 0026A23C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8026D300 0026A240  48 00 04 91 */	bl resetBridgeGateCheck__Q34Game7GasHiba3ObjFv
/* 8026D304 0026A244  38 00 00 00 */	li r0, 0
/* 8026D308 0026A248  7F E3 FB 78 */	mr r3, r31
/* 8026D30C 0026A24C  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 8026D310 0026A250  48 00 0A ED */	bl setupLodParms__Q34Game7GasHiba3ObjFv
/* 8026D314 0026A254  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8026D318 0026A258  C3 E3 08 1C */	lfs f31, 0x81c(r3)
/* 8026D31C 0026A25C  4B E5 C2 85 */	bl rand
/* 8026D320 0026A260  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8026D324 0026A264  3C 00 43 30 */	lis r0, 0x4330
/* 8026D328 0026A268  90 61 00 14 */	stw r3, 0x14(r1)
/* 8026D32C 0026A26C  7F E4 FB 78 */	mr r4, r31
/* 8026D330 0026A270  C8 42 CD 20 */	lfd f2, lbl_8051B080@sda21(r2)
/* 8026D334 0026A274  38 C1 00 08 */	addi r6, r1, 8
/* 8026D338 0026A278  90 01 00 10 */	stw r0, 0x10(r1)
/* 8026D33C 0026A27C  38 A0 00 01 */	li r5, 1
/* 8026D340 0026A280  C0 02 CD 1C */	lfs f0, lbl_8051B07C@sda21(r2)
/* 8026D344 0026A284  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8026D348 0026A288  EC 21 10 28 */	fsubs f1, f1, f2
/* 8026D34C 0026A28C  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8026D350 0026A290  EC 01 00 24 */	fdivs f0, f1, f0
/* 8026D354 0026A294  D0 01 00 08 */	stfs f0, 8(r1)
/* 8026D358 0026A298  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8026D35C 0026A29C  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D360 0026A2A0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8026D364 0026A2A4  7D 89 03 A6 */	mtctr r12
/* 8026D368 0026A2A8  4E 80 04 21 */	bctrl 
/* 8026D36C 0026A2AC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8026D370 0026A2B0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8026D374 0026A2B4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8026D378 0026A2B8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8026D37C 0026A2BC  7C 08 03 A6 */	mtlr r0
/* 8026D380 0026A2C0  38 21 00 30 */	addi r1, r1, 0x30
/* 8026D384 0026A2C4  4E 80 00 20 */	blr 

.global doUpdate__Q34Game7GasHiba3ObjFv
doUpdate__Q34Game7GasHiba3ObjFv:
/* 8026D388 0026A2C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026D38C 0026A2CC  7C 08 02 A6 */	mflr r0
/* 8026D390 0026A2D0  7C 64 1B 78 */	mr r4, r3
/* 8026D394 0026A2D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026D398 0026A2D8  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8026D39C 0026A2DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D3A0 0026A2E0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8026D3A4 0026A2E4  7D 89 03 A6 */	mtctr r12
/* 8026D3A8 0026A2E8  4E 80 04 21 */	bctrl 
/* 8026D3AC 0026A2EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026D3B0 0026A2F0  7C 08 03 A6 */	mtlr r0
/* 8026D3B4 0026A2F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8026D3B8 0026A2F8  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game7GasHiba3ObjFR8Graphics
doDirectDraw__Q34Game7GasHiba3ObjFR8Graphics:
/* 8026D3BC 0026A2FC  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game7GasHiba3ObjFR8Graphics
doDebugDraw__Q34Game7GasHiba3ObjFR8Graphics:
/* 8026D3C0 0026A300  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026D3C4 0026A304  7C 08 02 A6 */	mflr r0
/* 8026D3C8 0026A308  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026D3CC 0026A30C  4B E9 8A A1 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 8026D3D0 0026A310  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026D3D4 0026A314  7C 08 03 A6 */	mtlr r0
/* 8026D3D8 0026A318  38 21 00 10 */	addi r1, r1, 0x10
/* 8026D3DC 0026A31C  4E 80 00 20 */	blr 

.global setFSM__Q34Game7GasHiba3ObjFPQ34Game7GasHiba3FSM
setFSM__Q34Game7GasHiba3ObjFPQ34Game7GasHiba3FSM:
/* 8026D3E0 0026A320  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026D3E4 0026A324  7C 08 02 A6 */	mflr r0
/* 8026D3E8 0026A328  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026D3EC 0026A32C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026D3F0 0026A330  7C 7F 1B 78 */	mr r31, r3
/* 8026D3F4 0026A334  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 8026D3F8 0026A338  7F E4 FB 78 */	mr r4, r31
/* 8026D3FC 0026A33C  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8026D400 0026A340  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D404 0026A344  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026D408 0026A348  7D 89 03 A6 */	mtctr r12
/* 8026D40C 0026A34C  4E 80 04 21 */	bctrl 
/* 8026D410 0026A350  38 00 00 00 */	li r0, 0
/* 8026D414 0026A354  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8026D418 0026A358  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026D41C 0026A35C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026D420 0026A360  7C 08 03 A6 */	mtlr r0
/* 8026D424 0026A364  38 21 00 10 */	addi r1, r1, 0x10
/* 8026D428 0026A368  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game7GasHiba3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game7GasHiba3ObjFRQ24Game11ShadowParam:
/* 8026D42C 0026A36C  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8026D430 0026A370  C0 22 CD 18 */	lfs f1, lbl_8051B078@sda21(r2)
/* 8026D434 0026A374  D0 04 00 00 */	stfs f0, 0(r4)
/* 8026D438 0026A378  C0 02 CD 28 */	lfs f0, lbl_8051B088@sda21(r2)
/* 8026D43C 0026A37C  C0 43 01 90 */	lfs f2, 0x190(r3)
/* 8026D440 0026A380  D0 44 00 04 */	stfs f2, 4(r4)
/* 8026D444 0026A384  C0 43 01 94 */	lfs f2, 0x194(r3)
/* 8026D448 0026A388  D0 44 00 08 */	stfs f2, 8(r4)
/* 8026D44C 0026A38C  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 8026D450 0026A390  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8026D454 0026A394  D0 24 00 14 */	stfs f1, 0x14(r4)
/* 8026D458 0026A398  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 8026D45C 0026A39C  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 8026D460 0026A3A0  4E 80 00 20 */	blr 

.global damageCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreaturefP8CollPart
damageCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreaturefP8CollPart:
/* 8026D464 0026A3A4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8026D468 0026A3A8  7C 08 02 A6 */	mflr r0
/* 8026D46C 0026A3AC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8026D470 0026A3B0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8026D474 0026A3B4  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8026D478 0026A3B8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8026D47C 0026A3BC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8026D480 0026A3C0  7C 9F 23 79 */	or. r31, r4, r4
/* 8026D484 0026A3C4  FF E0 08 90 */	fmr f31, f1
/* 8026D488 0026A3C8  7C 7E 1B 78 */	mr r30, r3
/* 8026D48C 0026A3CC  41 82 00 7C */	beq lbl_8026D508
/* 8026D490 0026A3D0  7F E3 FB 78 */	mr r3, r31
/* 8026D494 0026A3D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026D498 0026A3D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026D49C 0026A3DC  7D 89 03 A6 */	mtctr r12
/* 8026D4A0 0026A3E0  4E 80 04 21 */	bctrl 
/* 8026D4A4 0026A3E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026D4A8 0026A3E8  40 82 00 60 */	bne lbl_8026D508
/* 8026D4AC 0026A3EC  7F E4 FB 78 */	mr r4, r31
/* 8026D4B0 0026A3F0  38 61 00 08 */	addi r3, r1, 8
/* 8026D4B4 0026A3F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026D4B8 0026A3F8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026D4BC 0026A3FC  7D 89 03 A6 */	mtctr r12
/* 8026D4C0 0026A400  4E 80 04 21 */	bctrl 
/* 8026D4C4 0026A404  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8026D4C8 0026A408  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8026D4CC 0026A40C  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8026D4D0 0026A410  EC 21 00 28 */	fsubs f1, f1, f0
/* 8026D4D4 0026A414  C0 03 05 64 */	lfs f0, 0x564(r3)
/* 8026D4D8 0026A418  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026D4DC 0026A41C  40 80 00 2C */	bge lbl_8026D508
/* 8026D4E0 0026A420  C0 03 05 8C */	lfs f0, 0x58c(r3)
/* 8026D4E4 0026A424  FC 00 00 50 */	fneg f0, f0
/* 8026D4E8 0026A428  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026D4EC 0026A42C  40 81 00 1C */	ble lbl_8026D508
/* 8026D4F0 0026A430  FC 20 F8 90 */	fmr f1, f31
/* 8026D4F4 0026A434  C0 42 CD 28 */	lfs f2, lbl_8051B088@sda21(r2)
/* 8026D4F8 0026A438  7F C3 F3 78 */	mr r3, r30
/* 8026D4FC 0026A43C  4B E9 8B 31 */	bl addDamage__Q24Game9EnemyBaseFff
/* 8026D500 0026A440  38 60 00 01 */	li r3, 1
/* 8026D504 0026A444  48 00 00 08 */	b lbl_8026D50C
lbl_8026D508:
/* 8026D508 0026A448  38 60 00 00 */	li r3, 0
lbl_8026D50C:
/* 8026D50C 0026A44C  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8026D510 0026A450  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8026D514 0026A454  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8026D518 0026A458  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8026D51C 0026A45C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8026D520 0026A460  7C 08 03 A6 */	mtlr r0
/* 8026D524 0026A464  38 21 00 30 */	addi r1, r1, 0x30
/* 8026D528 0026A468  4E 80 00 20 */	blr 

.global pressCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreaturefP8CollPart
pressCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreaturefP8CollPart:
/* 8026D52C 0026A46C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026D530 0026A470  7C 08 02 A6 */	mflr r0
/* 8026D534 0026A474  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026D538 0026A478  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D53C 0026A47C  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 8026D540 0026A480  7D 89 03 A6 */	mtctr r12
/* 8026D544 0026A484  4E 80 04 21 */	bctrl 
/* 8026D548 0026A488  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026D54C 0026A48C  38 60 00 01 */	li r3, 1
/* 8026D550 0026A490  7C 08 03 A6 */	mtlr r0
/* 8026D554 0026A494  38 21 00 10 */	addi r1, r1, 0x10
/* 8026D558 0026A498  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreaturefP8CollPart:
/* 8026D55C 0026A49C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026D560 0026A4A0  7C 08 02 A6 */	mflr r0
/* 8026D564 0026A4A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026D568 0026A4A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D56C 0026A4AC  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 8026D570 0026A4B0  7D 89 03 A6 */	mtctr r12
/* 8026D574 0026A4B4  4E 80 04 21 */	bctrl 
/* 8026D578 0026A4B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026D57C 0026A4BC  38 60 00 01 */	li r3, 1
/* 8026D580 0026A4C0  7C 08 03 A6 */	mtlr r0
/* 8026D584 0026A4C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8026D588 0026A4C8  4E 80 00 20 */	blr 

.global "bombCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreatureR10Vector3<f>f"
"bombCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreatureR10Vector3<f>f":
/* 8026D58C 0026A4CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026D590 0026A4D0  7C 08 02 A6 */	mflr r0
/* 8026D594 0026A4D4  38 A0 00 00 */	li r5, 0
/* 8026D598 0026A4D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026D59C 0026A4DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D5A0 0026A4E0  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 8026D5A4 0026A4E4  7D 89 03 A6 */	mtctr r12
/* 8026D5A8 0026A4E8  4E 80 04 21 */	bctrl 
/* 8026D5AC 0026A4EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026D5B0 0026A4F0  38 60 00 01 */	li r3, 1
/* 8026D5B4 0026A4F4  7C 08 03 A6 */	mtlr r0
/* 8026D5B8 0026A4F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8026D5BC 0026A4FC  4E 80 00 20 */	blr 

.global interactGasAttack__Q34Game7GasHiba3ObjFv
interactGasAttack__Q34Game7GasHiba3ObjFv:
/* 8026D5C0 0026A500  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 8026D5C4 0026A504  7C 08 02 A6 */	mflr r0
/* 8026D5C8 0026A508  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 8026D5CC 0026A50C  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 8026D5D0 0026A510  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 8026D5D4 0026A514  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 8026D5D8 0026A518  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 8026D5DC 0026A51C  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 8026D5E0 0026A520  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 8026D5E4 0026A524  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8026D5E8 0026A528  93 C1 00 98 */	stw r30, 0x98(r1)
/* 8026D5EC 0026A52C  7C 7E 1B 78 */	mr r30, r3
/* 8026D5F0 0026A530  38 61 00 30 */	addi r3, r1, 0x30
/* 8026D5F4 0026A534  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 8026D5F8 0026A538  38 81 00 20 */	addi r4, r1, 0x20
/* 8026D5FC 0026A53C  C0 5E 01 90 */	lfs f2, 0x190(r30)
/* 8026D600 0026A540  C0 05 05 64 */	lfs f0, 0x564(r5)
/* 8026D604 0026A544  C0 25 05 8C */	lfs f1, 0x58c(r5)
/* 8026D608 0026A548  C0 65 05 B4 */	lfs f3, 0x5b4(r5)
/* 8026D60C 0026A54C  EF E2 00 2A */	fadds f31, f2, f0
/* 8026D610 0026A550  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 8026D614 0026A554  EF C2 08 28 */	fsubs f30, f2, f1
/* 8026D618 0026A558  EF A3 00 F2 */	fmuls f29, f3, f3
/* 8026D61C 0026A55C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8026D620 0026A560  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8026D624 0026A564  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8026D628 0026A568  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 8026D62C 0026A56C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8026D630 0026A570  D0 61 00 2C */	stfs f3, 0x2c(r1)
/* 8026D634 0026A574  4B FC 0D 6D */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 8026D638 0026A578  38 00 00 01 */	li r0, 1
/* 8026D63C 0026A57C  38 61 00 50 */	addi r3, r1, 0x50
/* 8026D640 0026A580  98 01 00 4C */	stb r0, 0x4c(r1)
/* 8026D644 0026A584  38 81 00 30 */	addi r4, r1, 0x30
/* 8026D648 0026A588  4B FC 0D 99 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 8026D64C 0026A58C  38 61 00 50 */	addi r3, r1, 0x50
/* 8026D650 0026A590  4B FC 0E 0D */	bl first__Q24Game12CellIteratorFv
/* 8026D654 0026A594  48 00 00 FC */	b lbl_8026D750
lbl_8026D658:
/* 8026D658 0026A598  38 61 00 50 */	addi r3, r1, 0x50
/* 8026D65C 0026A59C  4B FC 0E E9 */	bl __ml__Q24Game12CellIteratorFv
/* 8026D660 0026A5A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D664 0026A5A4  7C 7F 1B 78 */	mr r31, r3
/* 8026D668 0026A5A8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8026D66C 0026A5AC  7D 89 03 A6 */	mtctr r12
/* 8026D670 0026A5B0  4E 80 04 21 */	bctrl 
/* 8026D674 0026A5B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026D678 0026A5B8  41 82 00 D0 */	beq lbl_8026D748
/* 8026D67C 0026A5BC  7F E3 FB 78 */	mr r3, r31
/* 8026D680 0026A5C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026D684 0026A5C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026D688 0026A5C8  7D 89 03 A6 */	mtctr r12
/* 8026D68C 0026A5CC  4E 80 04 21 */	bctrl 
/* 8026D690 0026A5D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026D694 0026A5D4  40 82 00 20 */	bne lbl_8026D6B4
/* 8026D698 0026A5D8  7F E3 FB 78 */	mr r3, r31
/* 8026D69C 0026A5DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026D6A0 0026A5E0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8026D6A4 0026A5E4  7D 89 03 A6 */	mtctr r12
/* 8026D6A8 0026A5E8  4E 80 04 21 */	bctrl 
/* 8026D6AC 0026A5EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026D6B0 0026A5F0  41 82 00 98 */	beq lbl_8026D748
lbl_8026D6B4:
/* 8026D6B4 0026A5F4  7F E4 FB 78 */	mr r4, r31
/* 8026D6B8 0026A5F8  38 61 00 08 */	addi r3, r1, 8
/* 8026D6BC 0026A5FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026D6C0 0026A600  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026D6C4 0026A604  7D 89 03 A6 */	mtctr r12
/* 8026D6C8 0026A608  4E 80 04 21 */	bctrl 
/* 8026D6CC 0026A60C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8026D6D0 0026A610  C0 41 00 08 */	lfs f2, 8(r1)
/* 8026D6D4 0026A614  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8026D6D8 0026A618  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8026D6DC 0026A61C  40 81 00 6C */	ble lbl_8026D748
/* 8026D6E0 0026A620  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8026D6E4 0026A624  40 80 00 64 */	bge lbl_8026D748
/* 8026D6E8 0026A628  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 8026D6EC 0026A62C  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 8026D6F0 0026A630  EC 00 18 28 */	fsubs f0, f0, f3
/* 8026D6F4 0026A634  EC 21 10 28 */	fsubs f1, f1, f2
/* 8026D6F8 0026A638  EC 00 00 32 */	fmuls f0, f0, f0
/* 8026D6FC 0026A63C  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 8026D700 0026A640  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 8026D704 0026A644  40 80 00 44 */	bge lbl_8026D748
/* 8026D708 0026A648  80 DE 00 C0 */	lwz r6, 0xc0(r30)
/* 8026D70C 0026A64C  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 8026D710 0026A650  3C 80 80 4B */	lis r4, __vt__Q24Game11InteractGas@ha
/* 8026D714 0026A654  7F E3 FB 78 */	mr r3, r31
/* 8026D718 0026A658  C0 06 06 04 */	lfs f0, 0x604(r6)
/* 8026D71C 0026A65C  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 8026D720 0026A660  38 04 48 0C */	addi r0, r4, __vt__Q24Game11InteractGas@l
/* 8026D724 0026A664  38 81 00 14 */	addi r4, r1, 0x14
/* 8026D728 0026A668  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8026D72C 0026A66C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8026D730 0026A670  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026D734 0026A674  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8026D738 0026A678  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026D73C 0026A67C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8026D740 0026A680  7D 89 03 A6 */	mtctr r12
/* 8026D744 0026A684  4E 80 04 21 */	bctrl 
lbl_8026D748:
/* 8026D748 0026A688  38 61 00 50 */	addi r3, r1, 0x50
/* 8026D74C 0026A68C  4B FC 0D B5 */	bl next__Q24Game12CellIteratorFv
lbl_8026D750:
/* 8026D750 0026A690  38 61 00 50 */	addi r3, r1, 0x50
/* 8026D754 0026A694  4B FC 0D E1 */	bl isDone__Q24Game12CellIteratorFv
/* 8026D758 0026A698  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026D75C 0026A69C  41 82 FE FC */	beq lbl_8026D658
/* 8026D760 0026A6A0  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 8026D764 0026A6A4  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 8026D768 0026A6A8  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 8026D76C 0026A6AC  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 8026D770 0026A6B0  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 8026D774 0026A6B4  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 8026D778 0026A6B8  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8026D77C 0026A6BC  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 8026D780 0026A6C0  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 8026D784 0026A6C4  7C 08 03 A6 */	mtlr r0
/* 8026D788 0026A6C8  38 21 00 D0 */	addi r1, r1, 0xd0
/* 8026D78C 0026A6CC  4E 80 00 20 */	blr 

.global resetBridgeGateCheck__Q34Game7GasHiba3ObjFv
resetBridgeGateCheck__Q34Game7GasHiba3ObjFv:
/* 8026D790 0026A6D0  38 80 00 01 */	li r4, 1
/* 8026D794 0026A6D4  38 00 00 00 */	li r0, 0
/* 8026D798 0026A6D8  98 83 02 C0 */	stb r4, 0x2c0(r3)
/* 8026D79C 0026A6DC  90 03 02 C8 */	stw r0, 0x2c8(r3)
/* 8026D7A0 0026A6E0  90 03 02 CC */	stw r0, 0x2cc(r3)
/* 8026D7A4 0026A6E4  4E 80 00 20 */	blr 

.global setInitLivingThing__Q34Game7GasHiba3ObjFv
setInitLivingThing__Q34Game7GasHiba3ObjFv:
/* 8026D7A8 0026A6E8  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8026D7AC 0026A6EC  7C 08 02 A6 */	mflr r0
/* 8026D7B0 0026A6F0  90 01 00 74 */	stw r0, 0x74(r1)
/* 8026D7B4 0026A6F4  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8026D7B8 0026A6F8  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8026D7BC 0026A6FC  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8026D7C0 0026A700  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 8026D7C4 0026A704  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8026D7C8 0026A708  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8026D7CC 0026A70C  7C 7F 1B 78 */	mr r31, r3
/* 8026D7D0 0026A710  88 03 02 C0 */	lbz r0, 0x2c0(r3)
/* 8026D7D4 0026A714  28 00 00 00 */	cmplwi r0, 0
/* 8026D7D8 0026A718  41 82 05 58 */	beq lbl_8026DD30
/* 8026D7DC 0026A71C  38 00 00 00 */	li r0, 0
/* 8026D7E0 0026A720  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 8026D7E4 0026A724  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 8026D7E8 0026A728  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 8026D7EC 0026A72C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8026D7F0 0026A730  28 03 00 00 */	cmplwi r3, 0
/* 8026D7F4 0026A734  41 82 05 10 */	beq lbl_8026DD04
/* 8026D7F8 0026A738  88 03 00 48 */	lbz r0, 0x48(r3)
/* 8026D7FC 0026A73C  28 00 00 00 */	cmplwi r0, 0
/* 8026D800 0026A740  40 82 05 04 */	bne lbl_8026DD04
/* 8026D804 0026A744  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8026D808 0026A748  2C 00 00 00 */	cmpwi r0, 0
/* 8026D80C 0026A74C  40 82 04 F8 */	bne lbl_8026DD04
/* 8026D810 0026A750  80 6D 94 B8 */	lwz r3, mgr__Q24Game10ItemBridge@sda21(r13)
/* 8026D814 0026A754  28 03 00 00 */	cmplwi r3, 0
/* 8026D818 0026A758  41 82 02 70 */	beq lbl_8026DA88
/* 8026D81C 0026A75C  41 82 00 08 */	beq lbl_8026D824
/* 8026D820 0026A760  38 63 00 30 */	addi r3, r3, 0x30
lbl_8026D824:
/* 8026D824 0026A764  38 00 00 00 */	li r0, 0
/* 8026D828 0026A768  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 8026D82C 0026A76C  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 8026D830 0026A770  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8026D834 0026A774  28 00 00 00 */	cmplwi r0, 0
/* 8026D838 0026A778  90 81 00 30 */	stw r4, 0x30(r1)
/* 8026D83C 0026A77C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8026D840 0026A780  90 61 00 38 */	stw r3, 0x38(r1)
/* 8026D844 0026A784  40 82 00 1C */	bne lbl_8026D860
/* 8026D848 0026A788  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D84C 0026A78C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8026D850 0026A790  7D 89 03 A6 */	mtctr r12
/* 8026D854 0026A794  4E 80 04 21 */	bctrl 
/* 8026D858 0026A798  90 61 00 34 */	stw r3, 0x34(r1)
/* 8026D85C 0026A79C  48 00 00 8C */	b lbl_8026D8E8
lbl_8026D860:
/* 8026D860 0026A7A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D864 0026A7A4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8026D868 0026A7A8  7D 89 03 A6 */	mtctr r12
/* 8026D86C 0026A7AC  4E 80 04 21 */	bctrl 
/* 8026D870 0026A7B0  90 61 00 34 */	stw r3, 0x34(r1)
/* 8026D874 0026A7B4  48 00 00 58 */	b lbl_8026D8CC
lbl_8026D878:
/* 8026D878 0026A7B8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8026D87C 0026A7BC  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8026D880 0026A7C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D884 0026A7C4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8026D888 0026A7C8  7D 89 03 A6 */	mtctr r12
/* 8026D88C 0026A7CC  4E 80 04 21 */	bctrl 
/* 8026D890 0026A7D0  7C 64 1B 78 */	mr r4, r3
/* 8026D894 0026A7D4  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8026D898 0026A7D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D89C 0026A7DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026D8A0 0026A7E0  7D 89 03 A6 */	mtctr r12
/* 8026D8A4 0026A7E4  4E 80 04 21 */	bctrl 
/* 8026D8A8 0026A7E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026D8AC 0026A7EC  40 82 00 3C */	bne lbl_8026D8E8
/* 8026D8B0 0026A7F0  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8026D8B4 0026A7F4  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8026D8B8 0026A7F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D8BC 0026A7FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8026D8C0 0026A800  7D 89 03 A6 */	mtctr r12
/* 8026D8C4 0026A804  4E 80 04 21 */	bctrl 
/* 8026D8C8 0026A808  90 61 00 34 */	stw r3, 0x34(r1)
lbl_8026D8CC:
/* 8026D8CC 0026A80C  81 81 00 30 */	lwz r12, 0x30(r1)
/* 8026D8D0 0026A810  38 61 00 30 */	addi r3, r1, 0x30
/* 8026D8D4 0026A814  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8026D8D8 0026A818  7D 89 03 A6 */	mtctr r12
/* 8026D8DC 0026A81C  4E 80 04 21 */	bctrl 
/* 8026D8E0 0026A820  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026D8E4 0026A824  41 82 FF 94 */	beq lbl_8026D878
lbl_8026D8E8:
/* 8026D8E8 0026A828  C3 E2 CD 18 */	lfs f31, lbl_8051B078@sda21(r2)
/* 8026D8EC 0026A82C  C3 C2 CD 2C */	lfs f30, lbl_8051B08C@sda21(r2)
/* 8026D8F0 0026A830  48 00 01 78 */	b lbl_8026DA68
lbl_8026D8F4:
/* 8026D8F4 0026A834  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8026D8F8 0026A838  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D8FC 0026A83C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8026D900 0026A840  7D 89 03 A6 */	mtctr r12
/* 8026D904 0026A844  4E 80 04 21 */	bctrl 
/* 8026D908 0026A848  7C 60 1B 78 */	mr r0, r3
/* 8026D90C 0026A84C  38 61 00 14 */	addi r3, r1, 0x14
/* 8026D910 0026A850  7C 1E 03 78 */	mr r30, r0
/* 8026D914 0026A854  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026D918 0026A858  7F C4 F3 78 */	mr r4, r30
/* 8026D91C 0026A85C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026D920 0026A860  7D 89 03 A6 */	mtctr r12
/* 8026D924 0026A864  4E 80 04 21 */	bctrl 
/* 8026D928 0026A868  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8026D92C 0026A86C  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8026D930 0026A870  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8026D934 0026A874  EC 01 00 28 */	fsubs f0, f1, f0
/* 8026D938 0026A878  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 8026D93C 0026A87C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8026D940 0026A880  40 81 00 08 */	ble lbl_8026D948
/* 8026D944 0026A884  48 00 00 08 */	b lbl_8026D94C
lbl_8026D948:
/* 8026D948 0026A888  FC 00 00 50 */	fneg f0, f0
lbl_8026D94C:
/* 8026D94C 0026A88C  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 8026D950 0026A890  40 80 00 5C */	bge lbl_8026D9AC
/* 8026D954 0026A894  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8026D958 0026A898  C0 02 CD 18 */	lfs f0, lbl_8051B078@sda21(r2)
/* 8026D95C 0026A89C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8026D960 0026A8A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026D964 0026A8A4  40 81 00 08 */	ble lbl_8026D96C
/* 8026D968 0026A8A8  48 00 00 08 */	b lbl_8026D970
lbl_8026D96C:
/* 8026D96C 0026A8AC  FC 20 08 50 */	fneg f1, f1
lbl_8026D970:
/* 8026D970 0026A8B0  C0 02 CD 30 */	lfs f0, lbl_8051B090@sda21(r2)
/* 8026D974 0026A8B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026D978 0026A8B8  40 80 00 34 */	bge lbl_8026D9AC
/* 8026D97C 0026A8BC  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8026D980 0026A8C0  C0 02 CD 18 */	lfs f0, lbl_8051B078@sda21(r2)
/* 8026D984 0026A8C4  EC 23 08 28 */	fsubs f1, f3, f1
/* 8026D988 0026A8C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026D98C 0026A8CC  40 81 00 08 */	ble lbl_8026D994
/* 8026D990 0026A8D0  48 00 00 08 */	b lbl_8026D998
lbl_8026D994:
/* 8026D994 0026A8D4  FC 20 08 50 */	fneg f1, f1
lbl_8026D998:
/* 8026D998 0026A8D8  C0 02 CD 30 */	lfs f0, lbl_8051B090@sda21(r2)
/* 8026D99C 0026A8DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026D9A0 0026A8E0  40 80 00 0C */	bge lbl_8026D9AC
/* 8026D9A4 0026A8E4  93 DF 02 C8 */	stw r30, 0x2c8(r31)
/* 8026D9A8 0026A8E8  48 00 00 E0 */	b lbl_8026DA88
lbl_8026D9AC:
/* 8026D9AC 0026A8EC  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8026D9B0 0026A8F0  28 00 00 00 */	cmplwi r0, 0
/* 8026D9B4 0026A8F4  40 82 00 24 */	bne lbl_8026D9D8
/* 8026D9B8 0026A8F8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8026D9BC 0026A8FC  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8026D9C0 0026A900  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D9C4 0026A904  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8026D9C8 0026A908  7D 89 03 A6 */	mtctr r12
/* 8026D9CC 0026A90C  4E 80 04 21 */	bctrl 
/* 8026D9D0 0026A910  90 61 00 34 */	stw r3, 0x34(r1)
/* 8026D9D4 0026A914  48 00 00 94 */	b lbl_8026DA68
lbl_8026D9D8:
/* 8026D9D8 0026A918  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8026D9DC 0026A91C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8026D9E0 0026A920  81 83 00 00 */	lwz r12, 0(r3)
/* 8026D9E4 0026A924  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8026D9E8 0026A928  7D 89 03 A6 */	mtctr r12
/* 8026D9EC 0026A92C  4E 80 04 21 */	bctrl 
/* 8026D9F0 0026A930  90 61 00 34 */	stw r3, 0x34(r1)
/* 8026D9F4 0026A934  48 00 00 58 */	b lbl_8026DA4C
lbl_8026D9F8:
/* 8026D9F8 0026A938  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8026D9FC 0026A93C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8026DA00 0026A940  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DA04 0026A944  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8026DA08 0026A948  7D 89 03 A6 */	mtctr r12
/* 8026DA0C 0026A94C  4E 80 04 21 */	bctrl 
/* 8026DA10 0026A950  7C 64 1B 78 */	mr r4, r3
/* 8026DA14 0026A954  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8026DA18 0026A958  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DA1C 0026A95C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026DA20 0026A960  7D 89 03 A6 */	mtctr r12
/* 8026DA24 0026A964  4E 80 04 21 */	bctrl 
/* 8026DA28 0026A968  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026DA2C 0026A96C  40 82 00 3C */	bne lbl_8026DA68
/* 8026DA30 0026A970  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8026DA34 0026A974  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8026DA38 0026A978  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DA3C 0026A97C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8026DA40 0026A980  7D 89 03 A6 */	mtctr r12
/* 8026DA44 0026A984  4E 80 04 21 */	bctrl 
/* 8026DA48 0026A988  90 61 00 34 */	stw r3, 0x34(r1)
lbl_8026DA4C:
/* 8026DA4C 0026A98C  81 81 00 30 */	lwz r12, 0x30(r1)
/* 8026DA50 0026A990  38 61 00 30 */	addi r3, r1, 0x30
/* 8026DA54 0026A994  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8026DA58 0026A998  7D 89 03 A6 */	mtctr r12
/* 8026DA5C 0026A99C  4E 80 04 21 */	bctrl 
/* 8026DA60 0026A9A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026DA64 0026A9A4  41 82 FF 94 */	beq lbl_8026D9F8
lbl_8026DA68:
/* 8026DA68 0026A9A8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8026DA6C 0026A9AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DA70 0026A9B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026DA74 0026A9B4  7D 89 03 A6 */	mtctr r12
/* 8026DA78 0026A9B8  4E 80 04 21 */	bctrl 
/* 8026DA7C 0026A9BC  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8026DA80 0026A9C0  7C 04 18 40 */	cmplw r4, r3
/* 8026DA84 0026A9C4  40 82 FE 70 */	bne lbl_8026D8F4
lbl_8026DA88:
/* 8026DA88 0026A9C8  80 AD 94 30 */	lwz r5, itemGateMgr__4Game@sda21(r13)
/* 8026DA8C 0026A9CC  28 05 00 00 */	cmplwi r5, 0
/* 8026DA90 0026A9D0  41 82 02 74 */	beq lbl_8026DD04
/* 8026DA94 0026A9D4  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 8026DA98 0026A9D8  28 00 00 00 */	cmplwi r0, 0
/* 8026DA9C 0026A9DC  40 82 02 68 */	bne lbl_8026DD04
/* 8026DAA0 0026A9E0  38 00 00 00 */	li r0, 0
/* 8026DAA4 0026A9E4  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8ItemGate>"@ha
/* 8026DAA8 0026A9E8  38 83 5A 7C */	addi r4, r3, "__vt__26Iterator<Q24Game8ItemGate>"@l
/* 8026DAAC 0026A9EC  38 65 00 30 */	addi r3, r5, 0x30
/* 8026DAB0 0026A9F0  28 00 00 00 */	cmplwi r0, 0
/* 8026DAB4 0026A9F4  90 81 00 20 */	stw r4, 0x20(r1)
/* 8026DAB8 0026A9F8  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8026DABC 0026A9FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8026DAC0 0026AA00  90 61 00 28 */	stw r3, 0x28(r1)
/* 8026DAC4 0026AA04  40 82 00 1C */	bne lbl_8026DAE0
/* 8026DAC8 0026AA08  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DACC 0026AA0C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8026DAD0 0026AA10  7D 89 03 A6 */	mtctr r12
/* 8026DAD4 0026AA14  4E 80 04 21 */	bctrl 
/* 8026DAD8 0026AA18  90 61 00 24 */	stw r3, 0x24(r1)
/* 8026DADC 0026AA1C  48 00 00 8C */	b lbl_8026DB68
lbl_8026DAE0:
/* 8026DAE0 0026AA20  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DAE4 0026AA24  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8026DAE8 0026AA28  7D 89 03 A6 */	mtctr r12
/* 8026DAEC 0026AA2C  4E 80 04 21 */	bctrl 
/* 8026DAF0 0026AA30  90 61 00 24 */	stw r3, 0x24(r1)
/* 8026DAF4 0026AA34  48 00 00 58 */	b lbl_8026DB4C
lbl_8026DAF8:
/* 8026DAF8 0026AA38  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8026DAFC 0026AA3C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8026DB00 0026AA40  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DB04 0026AA44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8026DB08 0026AA48  7D 89 03 A6 */	mtctr r12
/* 8026DB0C 0026AA4C  4E 80 04 21 */	bctrl 
/* 8026DB10 0026AA50  7C 64 1B 78 */	mr r4, r3
/* 8026DB14 0026AA54  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8026DB18 0026AA58  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DB1C 0026AA5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026DB20 0026AA60  7D 89 03 A6 */	mtctr r12
/* 8026DB24 0026AA64  4E 80 04 21 */	bctrl 
/* 8026DB28 0026AA68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026DB2C 0026AA6C  40 82 00 3C */	bne lbl_8026DB68
/* 8026DB30 0026AA70  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8026DB34 0026AA74  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8026DB38 0026AA78  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DB3C 0026AA7C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8026DB40 0026AA80  7D 89 03 A6 */	mtctr r12
/* 8026DB44 0026AA84  4E 80 04 21 */	bctrl 
/* 8026DB48 0026AA88  90 61 00 24 */	stw r3, 0x24(r1)
lbl_8026DB4C:
/* 8026DB4C 0026AA8C  81 81 00 20 */	lwz r12, 0x20(r1)
/* 8026DB50 0026AA90  38 61 00 20 */	addi r3, r1, 0x20
/* 8026DB54 0026AA94  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8026DB58 0026AA98  7D 89 03 A6 */	mtctr r12
/* 8026DB5C 0026AA9C  4E 80 04 21 */	bctrl 
/* 8026DB60 0026AAA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026DB64 0026AAA4  41 82 FF 94 */	beq lbl_8026DAF8
lbl_8026DB68:
/* 8026DB68 0026AAA8  C3 C2 CD 18 */	lfs f30, lbl_8051B078@sda21(r2)
/* 8026DB6C 0026AAAC  C3 E2 CD 2C */	lfs f31, lbl_8051B08C@sda21(r2)
/* 8026DB70 0026AAB0  48 00 01 74 */	b lbl_8026DCE4
lbl_8026DB74:
/* 8026DB74 0026AAB4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8026DB78 0026AAB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DB7C 0026AABC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8026DB80 0026AAC0  7D 89 03 A6 */	mtctr r12
/* 8026DB84 0026AAC4  4E 80 04 21 */	bctrl 
/* 8026DB88 0026AAC8  7C 7E 1B 78 */	mr r30, r3
/* 8026DB8C 0026AACC  38 61 00 08 */	addi r3, r1, 8
/* 8026DB90 0026AAD0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026DB94 0026AAD4  7F C4 F3 78 */	mr r4, r30
/* 8026DB98 0026AAD8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026DB9C 0026AADC  7D 89 03 A6 */	mtctr r12
/* 8026DBA0 0026AAE0  4E 80 04 21 */	bctrl 
/* 8026DBA4 0026AAE4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8026DBA8 0026AAE8  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8026DBAC 0026AAEC  C0 41 00 08 */	lfs f2, 8(r1)
/* 8026DBB0 0026AAF0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8026DBB4 0026AAF4  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8026DBB8 0026AAF8  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 8026DBBC 0026AAFC  40 81 00 08 */	ble lbl_8026DBC4
/* 8026DBC0 0026AB00  48 00 00 08 */	b lbl_8026DBC8
lbl_8026DBC4:
/* 8026DBC4 0026AB04  FC 00 00 50 */	fneg f0, f0
lbl_8026DBC8:
/* 8026DBC8 0026AB08  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8026DBCC 0026AB0C  40 80 00 5C */	bge lbl_8026DC28
/* 8026DBD0 0026AB10  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8026DBD4 0026AB14  C0 02 CD 18 */	lfs f0, lbl_8051B078@sda21(r2)
/* 8026DBD8 0026AB18  EC 22 08 28 */	fsubs f1, f2, f1
/* 8026DBDC 0026AB1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026DBE0 0026AB20  40 81 00 08 */	ble lbl_8026DBE8
/* 8026DBE4 0026AB24  48 00 00 08 */	b lbl_8026DBEC
lbl_8026DBE8:
/* 8026DBE8 0026AB28  FC 20 08 50 */	fneg f1, f1
lbl_8026DBEC:
/* 8026DBEC 0026AB2C  C0 02 CD 30 */	lfs f0, lbl_8051B090@sda21(r2)
/* 8026DBF0 0026AB30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026DBF4 0026AB34  40 80 00 34 */	bge lbl_8026DC28
/* 8026DBF8 0026AB38  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8026DBFC 0026AB3C  C0 02 CD 18 */	lfs f0, lbl_8051B078@sda21(r2)
/* 8026DC00 0026AB40  EC 23 08 28 */	fsubs f1, f3, f1
/* 8026DC04 0026AB44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026DC08 0026AB48  40 81 00 08 */	ble lbl_8026DC10
/* 8026DC0C 0026AB4C  48 00 00 08 */	b lbl_8026DC14
lbl_8026DC10:
/* 8026DC10 0026AB50  FC 20 08 50 */	fneg f1, f1
lbl_8026DC14:
/* 8026DC14 0026AB54  C0 02 CD 30 */	lfs f0, lbl_8051B090@sda21(r2)
/* 8026DC18 0026AB58  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026DC1C 0026AB5C  40 80 00 0C */	bge lbl_8026DC28
/* 8026DC20 0026AB60  93 DF 02 CC */	stw r30, 0x2cc(r31)
/* 8026DC24 0026AB64  48 00 00 E0 */	b lbl_8026DD04
lbl_8026DC28:
/* 8026DC28 0026AB68  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8026DC2C 0026AB6C  28 00 00 00 */	cmplwi r0, 0
/* 8026DC30 0026AB70  40 82 00 24 */	bne lbl_8026DC54
/* 8026DC34 0026AB74  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8026DC38 0026AB78  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8026DC3C 0026AB7C  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DC40 0026AB80  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8026DC44 0026AB84  7D 89 03 A6 */	mtctr r12
/* 8026DC48 0026AB88  4E 80 04 21 */	bctrl 
/* 8026DC4C 0026AB8C  90 61 00 24 */	stw r3, 0x24(r1)
/* 8026DC50 0026AB90  48 00 00 94 */	b lbl_8026DCE4
lbl_8026DC54:
/* 8026DC54 0026AB94  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8026DC58 0026AB98  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8026DC5C 0026AB9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DC60 0026ABA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8026DC64 0026ABA4  7D 89 03 A6 */	mtctr r12
/* 8026DC68 0026ABA8  4E 80 04 21 */	bctrl 
/* 8026DC6C 0026ABAC  90 61 00 24 */	stw r3, 0x24(r1)
/* 8026DC70 0026ABB0  48 00 00 58 */	b lbl_8026DCC8
lbl_8026DC74:
/* 8026DC74 0026ABB4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8026DC78 0026ABB8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8026DC7C 0026ABBC  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DC80 0026ABC0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8026DC84 0026ABC4  7D 89 03 A6 */	mtctr r12
/* 8026DC88 0026ABC8  4E 80 04 21 */	bctrl 
/* 8026DC8C 0026ABCC  7C 64 1B 78 */	mr r4, r3
/* 8026DC90 0026ABD0  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8026DC94 0026ABD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DC98 0026ABD8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026DC9C 0026ABDC  7D 89 03 A6 */	mtctr r12
/* 8026DCA0 0026ABE0  4E 80 04 21 */	bctrl 
/* 8026DCA4 0026ABE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026DCA8 0026ABE8  40 82 00 3C */	bne lbl_8026DCE4
/* 8026DCAC 0026ABEC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8026DCB0 0026ABF0  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8026DCB4 0026ABF4  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DCB8 0026ABF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8026DCBC 0026ABFC  7D 89 03 A6 */	mtctr r12
/* 8026DCC0 0026AC00  4E 80 04 21 */	bctrl 
/* 8026DCC4 0026AC04  90 61 00 24 */	stw r3, 0x24(r1)
lbl_8026DCC8:
/* 8026DCC8 0026AC08  81 81 00 20 */	lwz r12, 0x20(r1)
/* 8026DCCC 0026AC0C  38 61 00 20 */	addi r3, r1, 0x20
/* 8026DCD0 0026AC10  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8026DCD4 0026AC14  7D 89 03 A6 */	mtctr r12
/* 8026DCD8 0026AC18  4E 80 04 21 */	bctrl 
/* 8026DCDC 0026AC1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026DCE0 0026AC20  41 82 FF 94 */	beq lbl_8026DC74
lbl_8026DCE4:
/* 8026DCE4 0026AC24  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8026DCE8 0026AC28  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DCEC 0026AC2C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026DCF0 0026AC30  7D 89 03 A6 */	mtctr r12
/* 8026DCF4 0026AC34  4E 80 04 21 */	bctrl 
/* 8026DCF8 0026AC38  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8026DCFC 0026AC3C  7C 04 18 40 */	cmplw r4, r3
/* 8026DD00 0026AC40  40 82 FE 74 */	bne lbl_8026DB74
lbl_8026DD04:
/* 8026DD04 0026AC44  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 8026DD08 0026AC48  28 00 00 00 */	cmplwi r0, 0
/* 8026DD0C 0026AC4C  40 82 00 10 */	bne lbl_8026DD1C
/* 8026DD10 0026AC50  80 1F 02 CC */	lwz r0, 0x2cc(r31)
/* 8026DD14 0026AC54  28 00 00 00 */	cmplwi r0, 0
/* 8026DD18 0026AC58  41 82 00 10 */	beq lbl_8026DD28
lbl_8026DD1C:
/* 8026DD1C 0026AC5C  38 00 00 00 */	li r0, 0
/* 8026DD20 0026AC60  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 8026DD24 0026AC64  48 00 00 0C */	b lbl_8026DD30
lbl_8026DD28:
/* 8026DD28 0026AC68  38 00 00 01 */	li r0, 1
/* 8026DD2C 0026AC6C  98 1F 02 C1 */	stb r0, 0x2c1(r31)
lbl_8026DD30:
/* 8026DD30 0026AC70  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8026DD34 0026AC74  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8026DD38 0026AC78  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8026DD3C 0026AC7C  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8026DD40 0026AC80  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8026DD44 0026AC84  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8026DD48 0026AC88  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8026DD4C 0026AC8C  7C 08 03 A6 */	mtlr r0
/* 8026DD50 0026AC90  38 21 00 70 */	addi r1, r1, 0x70
/* 8026DD54 0026AC94  4E 80 00 20 */	blr 

.global updateLivingThing__Q34Game7GasHiba3ObjFv
updateLivingThing__Q34Game7GasHiba3ObjFv:
/* 8026DD58 0026AC98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026DD5C 0026AC9C  7C 08 02 A6 */	mflr r0
/* 8026DD60 0026ACA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026DD64 0026ACA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026DD68 0026ACA8  7C 7F 1B 78 */	mr r31, r3
/* 8026DD6C 0026ACAC  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DD70 0026ACB0  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8026DD74 0026ACB4  7D 89 03 A6 */	mtctr r12
/* 8026DD78 0026ACB8  4E 80 04 21 */	bctrl 
/* 8026DD7C 0026ACBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026DD80 0026ACC0  40 82 00 60 */	bne lbl_8026DDE0
/* 8026DD84 0026ACC4  80 7F 02 C8 */	lwz r3, 0x2c8(r31)
/* 8026DD88 0026ACC8  28 03 00 00 */	cmplwi r3, 0
/* 8026DD8C 0026ACCC  41 82 00 1C */	beq lbl_8026DDA8
/* 8026DD90 0026ACD0  80 03 02 18 */	lwz r0, 0x218(r3)
/* 8026DD94 0026ACD4  2C 00 00 00 */	cmpwi r0, 0
/* 8026DD98 0026ACD8  41 82 00 48 */	beq lbl_8026DDE0
/* 8026DD9C 0026ACDC  38 00 00 01 */	li r0, 1
/* 8026DDA0 0026ACE0  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 8026DDA4 0026ACE4  48 00 00 3C */	b lbl_8026DDE0
lbl_8026DDA8:
/* 8026DDA8 0026ACE8  80 7F 02 CC */	lwz r3, 0x2cc(r31)
/* 8026DDAC 0026ACEC  28 03 00 00 */	cmplwi r3, 0
/* 8026DDB0 0026ACF0  41 82 00 28 */	beq lbl_8026DDD8
/* 8026DDB4 0026ACF4  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DDB8 0026ACF8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8026DDBC 0026ACFC  7D 89 03 A6 */	mtctr r12
/* 8026DDC0 0026AD00  4E 80 04 21 */	bctrl 
/* 8026DDC4 0026AD04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026DDC8 0026AD08  40 82 00 18 */	bne lbl_8026DDE0
/* 8026DDCC 0026AD0C  38 00 00 01 */	li r0, 1
/* 8026DDD0 0026AD10  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 8026DDD4 0026AD14  48 00 00 0C */	b lbl_8026DDE0
lbl_8026DDD8:
/* 8026DDD8 0026AD18  38 00 00 01 */	li r0, 1
/* 8026DDDC 0026AD1C  98 1F 02 C1 */	stb r0, 0x2c1(r31)
lbl_8026DDE0:
/* 8026DDE0 0026AD20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026DDE4 0026AD24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026DDE8 0026AD28  7C 08 03 A6 */	mtlr r0
/* 8026DDEC 0026AD2C  38 21 00 10 */	addi r1, r1, 0x10
/* 8026DDF0 0026AD30  4E 80 00 20 */	blr 

.global isLivingThing__Q34Game7GasHiba3ObjFv
isLivingThing__Q34Game7GasHiba3ObjFv:
/* 8026DDF4 0026AD34  88 63 02 C1 */	lbz r3, 0x2c1(r3)
/* 8026DDF8 0026AD38  4E 80 00 20 */	blr 

.global setupLodParms__Q34Game7GasHiba3ObjFv
setupLodParms__Q34Game7GasHiba3ObjFv:
/* 8026DDFC 0026AD3C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8026DE00 0026AD40  38 00 00 00 */	li r0, 0
/* 8026DE04 0026AD44  C0 04 08 BC */	lfs f0, 0x8bc(r4)
/* 8026DE08 0026AD48  D0 03 02 64 */	stfs f0, 0x264(r3)
/* 8026DE0C 0026AD4C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8026DE10 0026AD50  C0 04 08 E4 */	lfs f0, 0x8e4(r4)
/* 8026DE14 0026AD54  D0 03 02 68 */	stfs f0, 0x268(r3)
/* 8026DE18 0026AD58  98 03 02 6C */	stb r0, 0x26c(r3)
/* 8026DE1C 0026AD5C  4E 80 00 20 */	blr 

.global updateEfxLod__Q34Game7GasHiba3ObjFv
updateEfxLod__Q34Game7GasHiba3ObjFv:
/* 8026DE20 0026AD60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026DE24 0026AD64  7C 08 02 A6 */	mflr r0
/* 8026DE28 0026AD68  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026DE2C 0026AD6C  88 03 00 D8 */	lbz r0, 0xd8(r3)
/* 8026DE30 0026AD70  80 63 02 D0 */	lwz r3, 0x2d0(r3)
/* 8026DE34 0026AD74  54 04 07 BE */	clrlwi r4, r0, 0x1e
/* 8026DE38 0026AD78  48 14 6D 15 */	bl setRateLOD__Q23efx9TGasuHibaFi
/* 8026DE3C 0026AD7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026DE40 0026AD80  7C 08 03 A6 */	mtlr r0
/* 8026DE44 0026AD84  38 21 00 10 */	addi r1, r1, 0x10
/* 8026DE48 0026AD88  4E 80 00 20 */	blr 

.global createEffect__Q34Game7GasHiba3ObjFv
createEffect__Q34Game7GasHiba3ObjFv:
/* 8026DE4C 0026AD8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026DE50 0026AD90  7C 08 02 A6 */	mflr r0
/* 8026DE54 0026AD94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026DE58 0026AD98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026DE5C 0026AD9C  93 C1 00 08 */	stw r30, 8(r1)
/* 8026DE60 0026ADA0  7C 7E 1B 78 */	mr r30, r3
/* 8026DE64 0026ADA4  38 60 00 24 */	li r3, 0x24
/* 8026DE68 0026ADA8  4B DB 60 3D */	bl __nw__FUl
/* 8026DE6C 0026ADAC  7C 7F 1B 79 */	or. r31, r3, r3
/* 8026DE70 0026ADB0  41 82 00 1C */	beq lbl_8026DE8C
/* 8026DE74 0026ADB4  38 80 00 74 */	li r4, 0x74
/* 8026DE78 0026ADB8  38 A0 00 75 */	li r5, 0x75
/* 8026DE7C 0026ADBC  48 14 21 95 */	bl __ct__Q23efx9TForever2FUsUs
/* 8026DE80 0026ADC0  3C 60 80 4E */	lis r3, __vt__Q23efx9TGasuHiba@ha
/* 8026DE84 0026ADC4  38 03 6B 98 */	addi r0, r3, __vt__Q23efx9TGasuHiba@l
/* 8026DE88 0026ADC8  90 1F 00 00 */	stw r0, 0(r31)
lbl_8026DE8C:
/* 8026DE8C 0026ADCC  93 FE 02 D0 */	stw r31, 0x2d0(r30)
/* 8026DE90 0026ADD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026DE94 0026ADD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026DE98 0026ADD8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026DE9C 0026ADDC  7C 08 03 A6 */	mtlr r0
/* 8026DEA0 0026ADE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8026DEA4 0026ADE4  4E 80 00 20 */	blr 

.global startGasEffect__Q34Game7GasHiba3ObjFv
startGasEffect__Q34Game7GasHiba3ObjFv:
/* 8026DEA8 0026ADE8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8026DEAC 0026ADEC  7C 08 02 A6 */	mflr r0
/* 8026DEB0 0026ADF0  39 00 00 00 */	li r8, 0
/* 8026DEB4 0026ADF4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8026DEB8 0026ADF8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8026DEBC 0026ADFC  28 04 00 00 */	cmplwi r4, 0
/* 8026DEC0 0026AE00  41 82 00 14 */	beq lbl_8026DED4
/* 8026DEC4 0026AE04  88 04 00 48 */	lbz r0, 0x48(r4)
/* 8026DEC8 0026AE08  28 00 00 00 */	cmplwi r0, 0
/* 8026DECC 0026AE0C  40 82 00 08 */	bne lbl_8026DED4
/* 8026DED0 0026AE10  39 00 00 01 */	li r8, 1
lbl_8026DED4:
/* 8026DED4 0026AE14  80 03 01 8C */	lwz r0, 0x18c(r3)
/* 8026DED8 0026AE18  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 8026DEDC 0026AE1C  80 E3 01 90 */	lwz r7, 0x190(r3)
/* 8026DEE0 0026AE20  3C 80 80 4C */	lis r4, __vt__Q23efx11ArgGasuHiba@ha
/* 8026DEE4 0026AE24  80 C3 01 94 */	lwz r6, 0x194(r3)
/* 8026DEE8 0026AE28  38 A5 A7 EC */	addi r5, r5, __vt__Q23efx3Arg@l
/* 8026DEEC 0026AE2C  90 01 00 08 */	stw r0, 8(r1)
/* 8026DEF0 0026AE30  38 04 59 D0 */	addi r0, r4, __vt__Q23efx11ArgGasuHiba@l
/* 8026DEF4 0026AE34  38 81 00 14 */	addi r4, r1, 0x14
/* 8026DEF8 0026AE38  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8026DEFC 0026AE3C  C0 41 00 08 */	lfs f2, 8(r1)
/* 8026DF00 0026AE40  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8026DF04 0026AE44  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8026DF08 0026AE48  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8026DF0C 0026AE4C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8026DF10 0026AE50  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8026DF14 0026AE54  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8026DF18 0026AE58  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8026DF1C 0026AE5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026DF20 0026AE60  99 01 00 24 */	stb r8, 0x24(r1)
/* 8026DF24 0026AE64  80 63 02 D0 */	lwz r3, 0x2d0(r3)
/* 8026DF28 0026AE68  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DF2C 0026AE6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026DF30 0026AE70  7D 89 03 A6 */	mtctr r12
/* 8026DF34 0026AE74  4E 80 04 21 */	bctrl 
/* 8026DF38 0026AE78  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8026DF3C 0026AE7C  7C 08 03 A6 */	mtlr r0
/* 8026DF40 0026AE80  38 21 00 30 */	addi r1, r1, 0x30
/* 8026DF44 0026AE84  4E 80 00 20 */	blr 

.global finishGasEffect__Q34Game7GasHiba3ObjFv
finishGasEffect__Q34Game7GasHiba3ObjFv:
/* 8026DF48 0026AE88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026DF4C 0026AE8C  7C 08 02 A6 */	mflr r0
/* 8026DF50 0026AE90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026DF54 0026AE94  80 63 02 D0 */	lwz r3, 0x2d0(r3)
/* 8026DF58 0026AE98  81 83 00 00 */	lwz r12, 0(r3)
/* 8026DF5C 0026AE9C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8026DF60 0026AEA0  7D 89 03 A6 */	mtctr r12
/* 8026DF64 0026AEA4  4E 80 04 21 */	bctrl 
/* 8026DF68 0026AEA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026DF6C 0026AEAC  7C 08 03 A6 */	mtlr r0
/* 8026DF70 0026AEB0  38 21 00 10 */	addi r1, r1, 0x10
/* 8026DF74 0026AEB4  4E 80 00 20 */	blr 

.global generatorKill__Q34Game7GasHiba3ObjFv
generatorKill__Q34Game7GasHiba3ObjFv:
/* 8026DF78 0026AEB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026DF7C 0026AEBC  7C 08 02 A6 */	mflr r0
/* 8026DF80 0026AEC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026DF84 0026AEC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026DF88 0026AEC8  7C 7F 1B 78 */	mr r31, r3
/* 8026DF8C 0026AECC  80 63 00 C4 */	lwz r3, 0xc4(r3)
/* 8026DF90 0026AED0  28 03 00 00 */	cmplwi r3, 0
/* 8026DF94 0026AED4  41 82 00 14 */	beq lbl_8026DFA8
/* 8026DF98 0026AED8  7F E4 FB 78 */	mr r4, r31
/* 8026DF9C 0026AEDC  4B F3 CD 59 */	bl informDeath__Q24Game9GeneratorFPQ24Game8Creature
/* 8026DFA0 0026AEE0  38 00 00 00 */	li r0, 0
/* 8026DFA4 0026AEE4  90 1F 00 C4 */	stw r0, 0xc4(r31)
lbl_8026DFA8:
/* 8026DFA8 0026AEE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026DFAC 0026AEEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026DFB0 0026AEF0  7C 08 03 A6 */	mtlr r0
/* 8026DFB4 0026AEF4  38 21 00 10 */	addi r1, r1, 0x10
/* 8026DFB8 0026AEF8  4E 80 00 20 */	blr 

.global getName__Q23efx11ArgGasuHibaFv
getName__Q23efx11ArgGasuHibaFv:
/* 8026DFBC 0026AEFC  3C 60 80 48 */	lis r3, lbl_804864F8@ha
/* 8026DFC0 0026AF00  38 63 64 F8 */	addi r3, r3, lbl_804864F8@l
/* 8026DFC4 0026AF04  4E 80 00 20 */	blr 

.global doSimulation__Q34Game7GasHiba3ObjFf
doSimulation__Q34Game7GasHiba3ObjFf:
/* 8026DFC8 0026AF08  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game7GasHiba3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game7GasHiba3ObjFPQ24Game8WaterBox:
/* 8026DFCC 0026AF0C  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game7GasHiba3ObjFv
outWaterCallback__Q34Game7GasHiba3ObjFv:
/* 8026DFD0 0026AF10  4E 80 00 20 */	blr 

.global lifeRecover__Q34Game7GasHiba3ObjFv
lifeRecover__Q34Game7GasHiba3ObjFv:
/* 8026DFD4 0026AF14  4E 80 00 20 */	blr 
