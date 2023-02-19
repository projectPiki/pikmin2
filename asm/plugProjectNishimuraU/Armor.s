.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80487418, local
	.asciz "yoroimushi"
.endobj lbl_80487418

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx9TYoroiEat, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx9TYoroiEat
.obj __vt__Q23efx8TYoroiHd, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx8TYoroiHd
.obj __vt__Q23efx8TYoroiAp, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx8TYoroiAp
.obj __vt__Q23efx12TYoroiAttack, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx12TYoroiAttackFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx12TYoroiAttackFv
.endobj __vt__Q23efx12TYoroiAttack
.obj __vt__Q23efx15TYoroiAttackhit, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx15TYoroiAttackhit
.obj __vt__Q34Game5Armor3Obj, global
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
	.4byte onInit__Q34Game5Armor3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game5Armor3ObjFR8Graphics
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
	.4byte getShadowParam__Q34Game5Armor3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game5Armor3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game5Armor3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game5Armor3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game5Armor3ObjFR8Graphics
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
	.4byte initMouthSlots__Q34Game5Armor3ObjFv
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
	.4byte getEnemyTypeID__Q34Game5Armor3ObjFv
	.4byte getMouthSlots__Q34Game5Armor3ObjFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game5Armor3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game5Armor3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game5Armor3ObjFv
	.4byte doFinishStoneState__Q34Game5Armor3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game5Armor3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game5Armor3ObjFv
	.4byte doStartMovie__Q34Game5Armor3ObjFv
	.4byte doEndMovie__Q34Game5Armor3ObjFv
	.4byte setFSM__Q34Game5Armor3ObjFPQ34Game5Armor3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@740@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@740@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@740@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@740@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@740@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@740@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game5Armor3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051B540, local
	.float 0.0
.endobj lbl_8051B540
.obj lbl_8051B544, local
	.float 50.0
.endobj lbl_8051B544
.obj lbl_8051B548, local
	.float 2.5
.endobj lbl_8051B548
.obj lbl_8051B54C, local
	.float 25.0
.endobj lbl_8051B54C
.obj lbl_8051B550, local
	.float 1.0
.endobj lbl_8051B550
.obj lbl_8051B554, local
	.float -1000.0
.endobj lbl_8051B554
.balign 4
.obj lbl_8051B558, local
	.asciz "kamujnt"
.endobj lbl_8051B558
.balign 4
.obj lbl_8051B560, local
	.float 32768.0
.endobj lbl_8051B560
.obj lbl_8051B564, local
	.float 0.5
.endobj lbl_8051B564
.balign 8
.obj lbl_8051B568, local
	.8byte 0x4330000080000000
.endobj lbl_8051B568
.obj lbl_8051B570, local
	.float 5.0
.endobj lbl_8051B570
.obj lbl_8051B574, local
	.float -50.0
.endobj lbl_8051B574
.obj lbl_8051B578, local
	.float 250.0
.endobj lbl_8051B578
.obj lbl_8051B57C, local
	.float 0.75
.endobj lbl_8051B57C
.obj lbl_8051B580, local # pi
	.float 3.1415927
.endobj lbl_8051B580
.obj lbl_8051B584, local
	.float 0.0055555557
.endobj lbl_8051B584
.obj lbl_8051B588, local
	.float 0.7
.endobj lbl_8051B588
.obj lbl_8051B58C, local
	.float -25.0
.endobj lbl_8051B58C
.obj lbl_8051B590, local
	.float 750.0
.endobj lbl_8051B590
.obj lbl_8051B594, local
	.float 0.9
.endobj lbl_8051B594

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game5Armor3ObjFv, global
/* 8027D69C 0027A5DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027D6A0 0027A5E0  7C 08 02 A6 */	mflr r0
/* 8027D6A4 0027A5E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027D6A8 0027A5E8  7C 80 07 35 */	extsh. r0, r4
/* 8027D6AC 0027A5EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027D6B0 0027A5F0  7C 7F 1B 78 */	mr r31, r3
/* 8027D6B4 0027A5F4  93 C1 00 08 */	stw r30, 8(r1)
/* 8027D6B8 0027A5F8  41 82 00 24 */	beq .L_8027D6DC
/* 8027D6BC 0027A5FC  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 8027D6C0 0027A600  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8027D6C4 0027A604  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8027D6C8 0027A608  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8027D6CC 0027A60C  38 00 00 00 */	li r0, 0
/* 8027D6D0 0027A610  90 7F 02 E4 */	stw r3, 0x2e4(r31)
/* 8027D6D4 0027A614  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 8027D6D8 0027A618  90 1F 02 EC */	stw r0, 0x2ec(r31)
.L_8027D6DC:
/* 8027D6DC 0027A61C  7F E3 FB 78 */	mr r3, r31
/* 8027D6E0 0027A620  38 80 00 00 */	li r4, 0
/* 8027D6E4 0027A624  4B E8 3C BD */	bl __ct__Q24Game9EnemyBaseFv
/* 8027D6E8 0027A628  3C 60 80 4D */	lis r3, __vt__Q34Game5Armor3Obj@ha
/* 8027D6EC 0027A62C  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 8027D6F0 0027A630  38 A3 85 7C */	addi r5, r3, __vt__Q34Game5Armor3Obj@l
/* 8027D6F4 0027A634  38 7F 02 CC */	addi r3, r31, 0x2cc
/* 8027D6F8 0027A638  90 BF 00 00 */	stw r5, 0(r31)
/* 8027D6FC 0027A63C  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8027D700 0027A640  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 8027D704 0027A644  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8027D708 0027A648  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8027D70C 0027A64C  90 A4 00 00 */	stw r5, 0(r4)
/* 8027D710 0027A650  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8027D714 0027A654  7C 04 00 50 */	subf r0, r4, r0
/* 8027D718 0027A658  90 04 00 0C */	stw r0, 0xc(r4)
/* 8027D71C 0027A65C  4B EB AE 2D */	bl __ct__10MouthSlotsFv
/* 8027D720 0027A660  38 60 00 2C */	li r3, 0x2c
/* 8027D724 0027A664  4B DA 67 81 */	bl __nw__FUl
/* 8027D728 0027A668  7C 7E 1B 79 */	or. r30, r3, r3
/* 8027D72C 0027A66C  41 82 00 44 */	beq .L_8027D770
/* 8027D730 0027A670  4B EA A2 45 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8027D734 0027A674  3C 60 80 4D */	lis r3, __vt__Q34Game5Armor14ProperAnimator@ha
/* 8027D738 0027A678  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8027D73C 0027A67C  38 03 9A 90 */	addi r0, r3, __vt__Q34Game5Armor14ProperAnimator@l
/* 8027D740 0027A680  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8027D744 0027A684  90 1E 00 00 */	stw r0, 0(r30)
/* 8027D748 0027A688  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8027D74C 0027A68C  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8027D750 0027A690  38 00 00 00 */	li r0, 0
/* 8027D754 0027A694  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8027D758 0027A698  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8027D75C 0027A69C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8027D760 0027A6A0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8027D764 0027A6A4  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8027D768 0027A6A8  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8027D76C 0027A6AC  90 1E 00 20 */	stw r0, 0x20(r30)
.L_8027D770:
/* 8027D770 0027A6B0  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8027D774 0027A6B4  38 60 00 1C */	li r3, 0x1c
/* 8027D778 0027A6B8  4B DA 67 2D */	bl __nw__FUl
/* 8027D77C 0027A6BC  7C 64 1B 79 */	or. r4, r3, r3
/* 8027D780 0027A6C0  41 82 00 24 */	beq .L_8027D7A4
/* 8027D784 0027A6C4  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8027D788 0027A6C8  3C 60 80 4D */	lis r3, __vt__Q34Game5Armor3FSM@ha
/* 8027D78C 0027A6CC  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8027D790 0027A6D0  38 A0 FF FF */	li r5, -1
/* 8027D794 0027A6D4  90 04 00 00 */	stw r0, 0(r4)
/* 8027D798 0027A6D8  38 03 9A 6C */	addi r0, r3, __vt__Q34Game5Armor3FSM@l
/* 8027D79C 0027A6DC  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8027D7A0 0027A6E0  90 04 00 00 */	stw r0, 0(r4)
.L_8027D7A4:
/* 8027D7A4 0027A6E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027D7A8 0027A6E8  7F E3 FB 78 */	mr r3, r31
/* 8027D7AC 0027A6EC  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8027D7B0 0027A6F0  7D 89 03 A6 */	mtctr r12
/* 8027D7B4 0027A6F4  4E 80 04 21 */	bctrl 
/* 8027D7B8 0027A6F8  7F E3 FB 78 */	mr r3, r31
/* 8027D7BC 0027A6FC  48 00 19 71 */	bl createEffect__Q34Game5Armor3ObjFv
/* 8027D7C0 0027A700  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027D7C4 0027A704  7F E3 FB 78 */	mr r3, r31
/* 8027D7C8 0027A708  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027D7CC 0027A70C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8027D7D0 0027A710  7C 08 03 A6 */	mtlr r0
/* 8027D7D4 0027A714  38 21 00 10 */	addi r1, r1, 0x10
/* 8027D7D8 0027A718  4E 80 00 20 */	blr 
.endfn __ct__Q34Game5Armor3ObjFv

.fn setInitialSetting__Q34Game5Armor3ObjFPQ24Game21EnemyInitialParamBase, global
/* 8027D7DC 0027A71C  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game5Armor3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game5Armor3ObjFPQ24Game15CreatureInitArg, global
/* 8027D7E0 0027A720  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027D7E4 0027A724  7C 08 02 A6 */	mflr r0
/* 8027D7E8 0027A728  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027D7EC 0027A72C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027D7F0 0027A730  7C 7F 1B 78 */	mr r31, r3
/* 8027D7F4 0027A734  4B E8 42 65 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8027D7F8 0027A738  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8027D7FC 0027A73C  38 00 FF FF */	li r0, -1
/* 8027D800 0027A740  C0 02 D1 E0 */	lfs f0, lbl_8051B540@sda21(r2)
/* 8027D804 0027A744  7F E3 FB 78 */	mr r3, r31
/* 8027D808 0027A748  54 84 05 66 */	rlwinm r4, r4, 0, 0x15, 0x13
/* 8027D80C 0027A74C  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8027D810 0027A750  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8027D814 0027A754  54 84 06 B0 */	rlwinm r4, r4, 0, 0x1a, 0x18
/* 8027D818 0027A758  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8027D81C 0027A75C  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8027D820 0027A760  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 8027D824 0027A764  48 00 0B 59 */	bl resetBridgeSearch__Q34Game5Armor3ObjFv
/* 8027D828 0027A768  7F E3 FB 78 */	mr r3, r31
/* 8027D82C 0027A76C  48 00 19 B1 */	bl setupEffect__Q34Game5Armor3ObjFv
/* 8027D830 0027A770  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8027D834 0027A774  7F E4 FB 78 */	mr r4, r31
/* 8027D838 0027A778  38 A0 00 01 */	li r5, 1
/* 8027D83C 0027A77C  38 C0 00 00 */	li r6, 0
/* 8027D840 0027A780  81 83 00 00 */	lwz r12, 0(r3)
/* 8027D844 0027A784  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8027D848 0027A788  7D 89 03 A6 */	mtctr r12
/* 8027D84C 0027A78C  4E 80 04 21 */	bctrl 
/* 8027D850 0027A790  7F E3 FB 78 */	mr r3, r31
/* 8027D854 0027A794  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027D858 0027A798  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 8027D85C 0027A79C  7D 89 03 A6 */	mtctr r12
/* 8027D860 0027A7A0  4E 80 04 21 */	bctrl 
/* 8027D864 0027A7A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027D868 0027A7A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027D86C 0027A7AC  7C 08 03 A6 */	mtlr r0
/* 8027D870 0027A7B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8027D874 0027A7B4  4E 80 00 20 */	blr 
.endfn onInit__Q34Game5Armor3ObjFPQ24Game15CreatureInitArg

.fn doUpdate__Q34Game5Armor3ObjFv, global
/* 8027D878 0027A7B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027D87C 0027A7BC  7C 08 02 A6 */	mflr r0
/* 8027D880 0027A7C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027D884 0027A7C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027D888 0027A7C8  7C 7F 1B 78 */	mr r31, r3
/* 8027D88C 0027A7CC  7F E4 FB 78 */	mr r4, r31
/* 8027D890 0027A7D0  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8027D894 0027A7D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8027D898 0027A7D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8027D89C 0027A7DC  7D 89 03 A6 */	mtctr r12
/* 8027D8A0 0027A7E0  4E 80 04 21 */	bctrl 
/* 8027D8A4 0027A7E4  38 7F 02 CC */	addi r3, r31, 0x2cc
/* 8027D8A8 0027A7E8  4B EB AD 85 */	bl update__10MouthSlotsFv
/* 8027D8AC 0027A7EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027D8B0 0027A7F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027D8B4 0027A7F4  7C 08 03 A6 */	mtlr r0
/* 8027D8B8 0027A7F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8027D8BC 0027A7FC  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game5Armor3ObjFv

.fn doDirectDraw__Q34Game5Armor3ObjFR8Graphics, global
/* 8027D8C0 0027A800  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game5Armor3ObjFR8Graphics

.fn doDebugDraw__Q34Game5Armor3ObjFR8Graphics, global
/* 8027D8C4 0027A804  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027D8C8 0027A808  7C 08 02 A6 */	mflr r0
/* 8027D8CC 0027A80C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027D8D0 0027A810  4B E8 85 9D */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 8027D8D4 0027A814  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027D8D8 0027A818  7C 08 03 A6 */	mtlr r0
/* 8027D8DC 0027A81C  38 21 00 10 */	addi r1, r1, 0x10
/* 8027D8E0 0027A820  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game5Armor3ObjFR8Graphics

.fn setFSM__Q34Game5Armor3ObjFPQ34Game5Armor3FSM, global
/* 8027D8E4 0027A824  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027D8E8 0027A828  7C 08 02 A6 */	mflr r0
/* 8027D8EC 0027A82C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027D8F0 0027A830  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027D8F4 0027A834  7C 7F 1B 78 */	mr r31, r3
/* 8027D8F8 0027A838  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 8027D8FC 0027A83C  7F E4 FB 78 */	mr r4, r31
/* 8027D900 0027A840  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8027D904 0027A844  81 83 00 00 */	lwz r12, 0(r3)
/* 8027D908 0027A848  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027D90C 0027A84C  7D 89 03 A6 */	mtctr r12
/* 8027D910 0027A850  4E 80 04 21 */	bctrl 
/* 8027D914 0027A854  38 00 00 00 */	li r0, 0
/* 8027D918 0027A858  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8027D91C 0027A85C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027D920 0027A860  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027D924 0027A864  7C 08 03 A6 */	mtlr r0
/* 8027D928 0027A868  38 21 00 10 */	addi r1, r1, 0x10
/* 8027D92C 0027A86C  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game5Armor3ObjFPQ34Game5Armor3FSM

.fn getShadowParam__Q34Game5Armor3ObjFRQ24Game11ShadowParam, global
/* 8027D930 0027A870  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8027D934 0027A874  7C 08 02 A6 */	mflr r0
/* 8027D938 0027A878  90 01 00 24 */	stw r0, 0x24(r1)
/* 8027D93C 0027A87C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8027D940 0027A880  7C 9F 23 78 */	mr r31, r4
/* 8027D944 0027A884  38 81 00 08 */	addi r4, r1, 8
/* 8027D948 0027A888  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8027D94C 0027A88C  7C 7E 1B 78 */	mr r30, r3
/* 8027D950 0027A890  81 83 00 00 */	lwz r12, 0(r3)
/* 8027D954 0027A894  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8027D958 0027A898  7D 89 03 A6 */	mtctr r12
/* 8027D95C 0027A89C  4E 80 04 21 */	bctrl 
/* 8027D960 0027A8A0  80 9E 01 E0 */	lwz r4, 0x1e0(r30)
/* 8027D964 0027A8A4  38 60 00 00 */	li r3, 0
/* 8027D968 0027A8A8  54 80 05 6B */	rlwinm. r0, r4, 0, 0x15, 0x15
/* 8027D96C 0027A8AC  40 82 00 0C */	bne .L_8027D978
/* 8027D970 0027A8B0  54 80 03 5B */	rlwinm. r0, r4, 0, 0xd, 0xd
/* 8027D974 0027A8B4  41 82 00 08 */	beq .L_8027D97C
.L_8027D978:
/* 8027D978 0027A8B8  38 60 00 01 */	li r3, 1
.L_8027D97C:
/* 8027D97C 0027A8BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027D980 0027A8C0  41 82 00 28 */	beq .L_8027D9A8
/* 8027D984 0027A8C4  C0 21 00 08 */	lfs f1, 8(r1)
/* 8027D988 0027A8C8  C0 02 D1 E4 */	lfs f0, lbl_8051B544@sda21(r2)
/* 8027D98C 0027A8CC  D0 3F 00 00 */	stfs f1, 0(r31)
/* 8027D990 0027A8D0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8027D994 0027A8D4  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8027D998 0027A8D8  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8027D99C 0027A8DC  D0 3F 00 08 */	stfs f1, 8(r31)
/* 8027D9A0 0027A8E0  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 8027D9A4 0027A8E4  48 00 00 44 */	b .L_8027D9E8
.L_8027D9A8:
/* 8027D9A8 0027A8E8  C0 01 00 08 */	lfs f0, 8(r1)
/* 8027D9AC 0027A8EC  C0 22 D1 E8 */	lfs f1, lbl_8051B548@sda21(r2)
/* 8027D9B0 0027A8F0  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8027D9B4 0027A8F4  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8027D9B8 0027A8F8  EC 01 00 2A */	fadds f0, f1, f0
/* 8027D9BC 0027A8FC  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8027D9C0 0027A900  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8027D9C4 0027A904  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8027D9C8 0027A908  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 8027D9CC 0027A90C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8027D9D0 0027A910  41 82 00 10 */	beq .L_8027D9E0
/* 8027D9D4 0027A914  C0 02 D1 E4 */	lfs f0, lbl_8051B544@sda21(r2)
/* 8027D9D8 0027A918  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 8027D9DC 0027A91C  48 00 00 0C */	b .L_8027D9E8
.L_8027D9E0:
/* 8027D9E0 0027A920  C0 02 D1 EC */	lfs f0, lbl_8051B54C@sda21(r2)
/* 8027D9E4 0027A924  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_8027D9E8:
/* 8027D9E8 0027A928  C0 42 D1 E0 */	lfs f2, lbl_8051B540@sda21(r2)
/* 8027D9EC 0027A92C  C0 22 D1 F0 */	lfs f1, lbl_8051B550@sda21(r2)
/* 8027D9F0 0027A930  D0 5F 00 0C */	stfs f2, 0xc(r31)
/* 8027D9F4 0027A934  C0 02 D1 EC */	lfs f0, lbl_8051B54C@sda21(r2)
/* 8027D9F8 0027A938  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 8027D9FC 0027A93C  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 8027DA00 0027A940  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8027DA04 0027A944  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8027DA08 0027A948  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8027DA0C 0027A94C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8027DA10 0027A950  7C 08 03 A6 */	mtlr r0
/* 8027DA14 0027A954  38 21 00 20 */	addi r1, r1, 0x20
/* 8027DA18 0027A958  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game5Armor3ObjFRQ24Game11ShadowParam

.fn damageCallBack__Q34Game5Armor3ObjFPQ24Game8CreaturefP8CollPart, global
/* 8027DA1C 0027A95C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8027DA20 0027A960  7C 08 02 A6 */	mflr r0
/* 8027DA24 0027A964  90 01 00 24 */	stw r0, 0x24(r1)
/* 8027DA28 0027A968  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8027DA2C 0027A96C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8027DA30 0027A970  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027DA34 0027A974  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8027DA38 0027A978  FF E0 08 90 */	fmr f31, f1
/* 8027DA3C 0027A97C  7C 7F 1B 78 */	mr r31, r3
/* 8027DA40 0027A980  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8027DA44 0027A984  41 82 00 14 */	beq .L_8027DA58
/* 8027DA48 0027A988  C0 42 D1 F0 */	lfs f2, lbl_8051B550@sda21(r2)
/* 8027DA4C 0027A98C  4B E8 85 E1 */	bl addDamage__Q24Game9EnemyBaseFff
/* 8027DA50 0027A990  38 60 00 01 */	li r3, 1
/* 8027DA54 0027A994  48 00 00 40 */	b .L_8027DA94
.L_8027DA58:
/* 8027DA58 0027A998  28 05 00 00 */	cmplwi r5, 0
/* 8027DA5C 0027A99C  41 82 00 34 */	beq .L_8027DA90
/* 8027DA60 0027A9A0  3C 80 64 6D */	lis r4, 0x646D6731@ha
/* 8027DA64 0027A9A4  38 65 00 30 */	addi r3, r5, 0x30
/* 8027DA68 0027A9A8  38 84 67 31 */	addi r4, r4, 0x646D6731@l
/* 8027DA6C 0027A9AC  48 19 59 C9 */	bl __eq__4ID32FUl
/* 8027DA70 0027A9B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027DA74 0027A9B4  41 82 00 1C */	beq .L_8027DA90
/* 8027DA78 0027A9B8  FC 20 F8 90 */	fmr f1, f31
/* 8027DA7C 0027A9BC  C0 42 D1 F0 */	lfs f2, lbl_8051B550@sda21(r2)
/* 8027DA80 0027A9C0  7F E3 FB 78 */	mr r3, r31
/* 8027DA84 0027A9C4  4B E8 85 A9 */	bl addDamage__Q24Game9EnemyBaseFff
/* 8027DA88 0027A9C8  38 60 00 01 */	li r3, 1
/* 8027DA8C 0027A9CC  48 00 00 08 */	b .L_8027DA94
.L_8027DA90:
/* 8027DA90 0027A9D0  38 60 00 00 */	li r3, 0
.L_8027DA94:
/* 8027DA94 0027A9D4  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8027DA98 0027A9D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8027DA9C 0027A9DC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8027DAA0 0027A9E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027DAA4 0027A9E4  7C 08 03 A6 */	mtlr r0
/* 8027DAA8 0027A9E8  38 21 00 20 */	addi r1, r1, 0x20
/* 8027DAAC 0027A9EC  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game5Armor3ObjFPQ24Game8CreaturefP8CollPart

.fn hipdropCallBack__Q34Game5Armor3ObjFPQ24Game8CreaturefP8CollPart, global
/* 8027DAB0 0027A9F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027DAB4 0027A9F4  7C 08 02 A6 */	mflr r0
/* 8027DAB8 0027A9F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027DABC 0027A9FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027DAC0 0027AA00  7C 7F 1B 78 */	mr r31, r3
/* 8027DAC4 0027AA04  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DAC8 0027AA08  80 C3 00 C0 */	lwz r6, 0xc0(r3)
/* 8027DACC 0027AA0C  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 8027DAD0 0027AA10  C0 26 06 7C */	lfs f1, 0x67c(r6)
/* 8027DAD4 0027AA14  7D 89 03 A6 */	mtctr r12
/* 8027DAD8 0027AA18  4E 80 04 21 */	bctrl 
/* 8027DADC 0027AA1C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8027DAE0 0027AA20  54 80 05 AD */	rlwinm. r0, r4, 0, 0x16, 0x16
/* 8027DAE4 0027AA24  40 82 00 14 */	bne .L_8027DAF8
/* 8027DAE8 0027AA28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027DAEC 0027AA2C  41 82 00 0C */	beq .L_8027DAF8
/* 8027DAF0 0027AA30  64 80 00 08 */	oris r0, r4, 8
/* 8027DAF4 0027AA34  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_8027DAF8:
/* 8027DAF8 0027AA38  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8027DAFC 0027AA3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027DB00 0027AA40  7C 00 00 34 */	cntlzw r0, r0
/* 8027DB04 0027AA44  54 03 D9 7E */	srwi r3, r0, 5
/* 8027DB08 0027AA48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027DB0C 0027AA4C  7C 08 03 A6 */	mtlr r0
/* 8027DB10 0027AA50  38 21 00 10 */	addi r1, r1, 0x10
/* 8027DB14 0027AA54  4E 80 00 20 */	blr 
.endfn hipdropCallBack__Q34Game5Armor3ObjFPQ24Game8CreaturefP8CollPart

.fn doStartStoneState__Q34Game5Armor3ObjFv, global
/* 8027DB18 0027AA58  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8027DB1C 0027AA5C  7C 08 02 A6 */	mflr r0
/* 8027DB20 0027AA60  90 01 00 54 */	stw r0, 0x54(r1)
/* 8027DB24 0027AA64  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8027DB28 0027AA68  7C 7F 1B 78 */	mr r31, r3
/* 8027DB2C 0027AA6C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8027DB30 0027AA70  4B E8 53 C5 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 8027DB34 0027AA74  7F E4 FB 78 */	mr r4, r31
/* 8027DB38 0027AA78  38 61 00 2C */	addi r3, r1, 0x2c
/* 8027DB3C 0027AA7C  4B F2 21 21 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 8027DB40 0027AA80  38 00 00 00 */	li r0, 0
/* 8027DB44 0027AA84  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 8027DB48 0027AA88  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 8027DB4C 0027AA8C  38 61 00 2C */	addi r3, r1, 0x2c
/* 8027DB50 0027AA90  28 00 00 00 */	cmplwi r0, 0
/* 8027DB54 0027AA94  90 81 00 08 */	stw r4, 8(r1)
/* 8027DB58 0027AA98  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027DB5C 0027AA9C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8027DB60 0027AAA0  90 61 00 10 */	stw r3, 0x10(r1)
/* 8027DB64 0027AAA4  40 82 00 1C */	bne .L_8027DB80
/* 8027DB68 0027AAA8  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DB6C 0027AAAC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8027DB70 0027AAB0  7D 89 03 A6 */	mtctr r12
/* 8027DB74 0027AAB4  4E 80 04 21 */	bctrl 
/* 8027DB78 0027AAB8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8027DB7C 0027AABC  48 00 01 B8 */	b .L_8027DD34
.L_8027DB80:
/* 8027DB80 0027AAC0  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DB84 0027AAC4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8027DB88 0027AAC8  7D 89 03 A6 */	mtctr r12
/* 8027DB8C 0027AACC  4E 80 04 21 */	bctrl 
/* 8027DB90 0027AAD0  90 61 00 0C */	stw r3, 0xc(r1)
/* 8027DB94 0027AAD4  48 00 00 58 */	b .L_8027DBEC
.L_8027DB98:
/* 8027DB98 0027AAD8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8027DB9C 0027AADC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8027DBA0 0027AAE0  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DBA4 0027AAE4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8027DBA8 0027AAE8  7D 89 03 A6 */	mtctr r12
/* 8027DBAC 0027AAEC  4E 80 04 21 */	bctrl 
/* 8027DBB0 0027AAF0  7C 64 1B 78 */	mr r4, r3
/* 8027DBB4 0027AAF4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8027DBB8 0027AAF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DBBC 0027AAFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027DBC0 0027AB00  7D 89 03 A6 */	mtctr r12
/* 8027DBC4 0027AB04  4E 80 04 21 */	bctrl 
/* 8027DBC8 0027AB08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027DBCC 0027AB0C  40 82 01 68 */	bne .L_8027DD34
/* 8027DBD0 0027AB10  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8027DBD4 0027AB14  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8027DBD8 0027AB18  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DBDC 0027AB1C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027DBE0 0027AB20  7D 89 03 A6 */	mtctr r12
/* 8027DBE4 0027AB24  4E 80 04 21 */	bctrl 
/* 8027DBE8 0027AB28  90 61 00 0C */	stw r3, 0xc(r1)
.L_8027DBEC:
/* 8027DBEC 0027AB2C  81 81 00 08 */	lwz r12, 8(r1)
/* 8027DBF0 0027AB30  38 61 00 08 */	addi r3, r1, 8
/* 8027DBF4 0027AB34  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8027DBF8 0027AB38  7D 89 03 A6 */	mtctr r12
/* 8027DBFC 0027AB3C  4E 80 04 21 */	bctrl 
/* 8027DC00 0027AB40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027DC04 0027AB44  41 82 FF 94 */	beq .L_8027DB98
/* 8027DC08 0027AB48  48 00 01 2C */	b .L_8027DD34
.L_8027DC0C:
/* 8027DC0C 0027AB4C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8027DC10 0027AB50  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DC14 0027AB54  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8027DC18 0027AB58  7D 89 03 A6 */	mtctr r12
/* 8027DC1C 0027AB5C  4E 80 04 21 */	bctrl 
/* 8027DC20 0027AB60  7C 7E 1B 78 */	mr r30, r3
/* 8027DC24 0027AB64  4B F2 19 65 */	bl isStickToMouth__Q24Game8CreatureFv
/* 8027DC28 0027AB68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027DC2C 0027AB6C  41 82 00 4C */	beq .L_8027DC78
/* 8027DC30 0027AB70  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 8027DC34 0027AB74  C0 22 D1 E0 */	lfs f1, lbl_8051B540@sda21(r2)
/* 8027DC38 0027AB78  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 8027DC3C 0027AB7C  C0 02 D1 F4 */	lfs f0, lbl_8051B554@sda21(r2)
/* 8027DC40 0027AB80  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractFlick@ha
/* 8027DC44 0027AB84  90 01 00 18 */	stw r0, 0x18(r1)
/* 8027DC48 0027AB88  38 03 4E 04 */	addi r0, r3, __vt__Q24Game13InteractFlick@l
/* 8027DC4C 0027AB8C  7F C3 F3 78 */	mr r3, r30
/* 8027DC50 0027AB90  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8027DC54 0027AB94  38 81 00 18 */	addi r4, r1, 0x18
/* 8027DC58 0027AB98  90 01 00 18 */	stw r0, 0x18(r1)
/* 8027DC5C 0027AB9C  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8027DC60 0027ABA0  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8027DC64 0027ABA4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8027DC68 0027ABA8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027DC6C 0027ABAC  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8027DC70 0027ABB0  7D 89 03 A6 */	mtctr r12
/* 8027DC74 0027ABB4  4E 80 04 21 */	bctrl 
.L_8027DC78:
/* 8027DC78 0027ABB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027DC7C 0027ABBC  28 00 00 00 */	cmplwi r0, 0
/* 8027DC80 0027ABC0  40 82 00 24 */	bne .L_8027DCA4
/* 8027DC84 0027ABC4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8027DC88 0027ABC8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8027DC8C 0027ABCC  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DC90 0027ABD0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027DC94 0027ABD4  7D 89 03 A6 */	mtctr r12
/* 8027DC98 0027ABD8  4E 80 04 21 */	bctrl 
/* 8027DC9C 0027ABDC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8027DCA0 0027ABE0  48 00 00 94 */	b .L_8027DD34
.L_8027DCA4:
/* 8027DCA4 0027ABE4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8027DCA8 0027ABE8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8027DCAC 0027ABEC  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DCB0 0027ABF0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027DCB4 0027ABF4  7D 89 03 A6 */	mtctr r12
/* 8027DCB8 0027ABF8  4E 80 04 21 */	bctrl 
/* 8027DCBC 0027ABFC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8027DCC0 0027AC00  48 00 00 58 */	b .L_8027DD18
.L_8027DCC4:
/* 8027DCC4 0027AC04  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8027DCC8 0027AC08  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8027DCCC 0027AC0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DCD0 0027AC10  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8027DCD4 0027AC14  7D 89 03 A6 */	mtctr r12
/* 8027DCD8 0027AC18  4E 80 04 21 */	bctrl 
/* 8027DCDC 0027AC1C  7C 64 1B 78 */	mr r4, r3
/* 8027DCE0 0027AC20  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8027DCE4 0027AC24  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DCE8 0027AC28  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027DCEC 0027AC2C  7D 89 03 A6 */	mtctr r12
/* 8027DCF0 0027AC30  4E 80 04 21 */	bctrl 
/* 8027DCF4 0027AC34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027DCF8 0027AC38  40 82 00 3C */	bne .L_8027DD34
/* 8027DCFC 0027AC3C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8027DD00 0027AC40  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8027DD04 0027AC44  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DD08 0027AC48  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027DD0C 0027AC4C  7D 89 03 A6 */	mtctr r12
/* 8027DD10 0027AC50  4E 80 04 21 */	bctrl 
/* 8027DD14 0027AC54  90 61 00 0C */	stw r3, 0xc(r1)
.L_8027DD18:
/* 8027DD18 0027AC58  81 81 00 08 */	lwz r12, 8(r1)
/* 8027DD1C 0027AC5C  38 61 00 08 */	addi r3, r1, 8
/* 8027DD20 0027AC60  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8027DD24 0027AC64  7D 89 03 A6 */	mtctr r12
/* 8027DD28 0027AC68  4E 80 04 21 */	bctrl 
/* 8027DD2C 0027AC6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027DD30 0027AC70  41 82 FF 94 */	beq .L_8027DCC4
.L_8027DD34:
/* 8027DD34 0027AC74  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8027DD38 0027AC78  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DD3C 0027AC7C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8027DD40 0027AC80  7D 89 03 A6 */	mtctr r12
/* 8027DD44 0027AC84  4E 80 04 21 */	bctrl 
/* 8027DD48 0027AC88  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8027DD4C 0027AC8C  7C 04 18 40 */	cmplw r4, r3
/* 8027DD50 0027AC90  40 82 FE BC */	bne .L_8027DC0C
/* 8027DD54 0027AC94  38 61 00 2C */	addi r3, r1, 0x2c
/* 8027DD58 0027AC98  38 80 FF FF */	li r4, -1
/* 8027DD5C 0027AC9C  4B F2 20 09 */	bl __dt__Q24Game8StickersFv
/* 8027DD60 0027ACA0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8027DD64 0027ACA4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8027DD68 0027ACA8  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8027DD6C 0027ACAC  7C 08 03 A6 */	mtlr r0
/* 8027DD70 0027ACB0  38 21 00 50 */	addi r1, r1, 0x50
/* 8027DD74 0027ACB4  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game5Armor3ObjFv

.fn doFinishStoneState__Q34Game5Armor3ObjFv, global
/* 8027DD78 0027ACB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027DD7C 0027ACBC  7C 08 02 A6 */	mflr r0
/* 8027DD80 0027ACC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027DD84 0027ACC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027DD88 0027ACC8  7C 7F 1B 78 */	mr r31, r3
/* 8027DD8C 0027ACCC  4B E8 51 7D */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 8027DD90 0027ACD0  C0 02 D1 E0 */	lfs f0, lbl_8051B540@sda21(r2)
/* 8027DD94 0027ACD4  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 8027DD98 0027ACD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027DD9C 0027ACDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027DDA0 0027ACE0  7C 08 03 A6 */	mtlr r0
/* 8027DDA4 0027ACE4  38 21 00 10 */	addi r1, r1, 0x10
/* 8027DDA8 0027ACE8  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game5Armor3ObjFv

.fn startCarcassMotion__Q34Game5Armor3ObjFv, global
/* 8027DDAC 0027ACEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027DDB0 0027ACF0  7C 08 02 A6 */	mflr r0
/* 8027DDB4 0027ACF4  38 80 00 09 */	li r4, 9
/* 8027DDB8 0027ACF8  38 A0 00 00 */	li r5, 0
/* 8027DDBC 0027ACFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027DDC0 0027AD00  4B E8 72 45 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8027DDC4 0027AD04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027DDC8 0027AD08  7C 08 03 A6 */	mtlr r0
/* 8027DDCC 0027AD0C  38 21 00 10 */	addi r1, r1, 0x10
/* 8027DDD0 0027AD10  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game5Armor3ObjFv

.fn doStartMovie__Q34Game5Armor3ObjFv, global
/* 8027DDD4 0027AD14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027DDD8 0027AD18  7C 08 02 A6 */	mflr r0
/* 8027DDDC 0027AD1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027DDE0 0027AD20  48 00 16 49 */	bl effectDrawOff__Q34Game5Armor3ObjFv
/* 8027DDE4 0027AD24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027DDE8 0027AD28  7C 08 03 A6 */	mtlr r0
/* 8027DDEC 0027AD2C  38 21 00 10 */	addi r1, r1, 0x10
/* 8027DDF0 0027AD30  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game5Armor3ObjFv

.fn doEndMovie__Q34Game5Armor3ObjFv, global
/* 8027DDF4 0027AD34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027DDF8 0027AD38  7C 08 02 A6 */	mflr r0
/* 8027DDFC 0027AD3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027DE00 0027AD40  48 00 15 F9 */	bl effectDrawOn__Q34Game5Armor3ObjFv
/* 8027DE04 0027AD44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027DE08 0027AD48  7C 08 03 A6 */	mtlr r0
/* 8027DE0C 0027AD4C  38 21 00 10 */	addi r1, r1, 0x10
/* 8027DE10 0027AD50  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game5Armor3ObjFv

.fn initMouthSlots__Q34Game5Armor3ObjFv, global
/* 8027DE14 0027AD54  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8027DE18 0027AD58  7C 08 02 A6 */	mflr r0
/* 8027DE1C 0027AD5C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8027DE20 0027AD60  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8027DE24 0027AD64  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8027DE28 0027AD68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027DE2C 0027AD6C  93 C1 00 08 */	stw r30, 8(r1)
/* 8027DE30 0027AD70  7C 7E 1B 78 */	mr r30, r3
/* 8027DE34 0027AD74  38 80 00 01 */	li r4, 1
/* 8027DE38 0027AD78  38 7E 02 CC */	addi r3, r30, 0x2cc
/* 8027DE3C 0027AD7C  4B EB A7 1D */	bl alloc__10MouthSlotsFi
/* 8027DE40 0027AD80  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 8027DE44 0027AD84  38 7E 02 CC */	addi r3, r30, 0x2cc
/* 8027DE48 0027AD88  38 80 00 00 */	li r4, 0
/* 8027DE4C 0027AD8C  38 C2 D1 F8 */	addi r6, r2, lbl_8051B558@sda21
/* 8027DE50 0027AD90  4B EB A8 41 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 8027DE54 0027AD94  C3 E2 D1 EC */	lfs f31, lbl_8051B54C@sda21(r2)
/* 8027DE58 0027AD98  3B E0 00 00 */	li r31, 0
/* 8027DE5C 0027AD9C  48 00 00 18 */	b .L_8027DE74
.L_8027DE60:
/* 8027DE60 0027ADA0  7F E4 FB 78 */	mr r4, r31
/* 8027DE64 0027ADA4  38 7E 02 CC */	addi r3, r30, 0x2cc
/* 8027DE68 0027ADA8  4B EB A9 11 */	bl getSlot__10MouthSlotsFi
/* 8027DE6C 0027ADAC  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 8027DE70 0027ADB0  3B FF 00 01 */	addi r31, r31, 1
.L_8027DE74:
/* 8027DE74 0027ADB4  80 1E 02 CC */	lwz r0, 0x2cc(r30)
/* 8027DE78 0027ADB8  7C 1F 00 00 */	cmpw r31, r0
/* 8027DE7C 0027ADBC  41 80 FF E4 */	blt .L_8027DE60
/* 8027DE80 0027ADC0  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8027DE84 0027ADC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8027DE88 0027ADC8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8027DE8C 0027ADCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027DE90 0027ADD0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8027DE94 0027ADD4  7C 08 03 A6 */	mtlr r0
/* 8027DE98 0027ADD8  38 21 00 20 */	addi r1, r1, 0x20
/* 8027DE9C 0027ADDC  4E 80 00 20 */	blr 
.endfn initMouthSlots__Q34Game5Armor3ObjFv

.fn lifeIncrement__Q34Game5Armor3ObjFv, global
/* 8027DEA0 0027ADE0  C0 22 D1 E0 */	lfs f1, lbl_8051B540@sda21(r2)
/* 8027DEA4 0027ADE4  D0 23 02 08 */	stfs f1, 0x208(r3)
/* 8027DEA8 0027ADE8  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8027DEAC 0027ADEC  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8027DEB0 0027ADF0  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 8027DEB4 0027ADF4  C0 03 02 00 */	lfs f0, 0x200(r3)
/* 8027DEB8 0027ADF8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8027DEBC 0027ADFC  4C 40 13 82 */	cror 2, 0, 2
/* 8027DEC0 0027AE00  4C 82 00 20 */	bnelr 
/* 8027DEC4 0027AE04  C0 02 D1 F0 */	lfs f0, lbl_8051B550@sda21(r2)
/* 8027DEC8 0027AE08  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 8027DECC 0027AE0C  4E 80 00 20 */	blr 
.endfn lifeIncrement__Q34Game5Armor3ObjFv

.fn attackPikmin__Q34Game5Armor3ObjFv, global
/* 8027DED0 0027AE10  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8027DED4 0027AE14  7C 08 02 A6 */	mflr r0
/* 8027DED8 0027AE18  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8027DEDC 0027AE1C  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8027DEE0 0027AE20  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8027DEE4 0027AE24  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8027DEE8 0027AE28  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 8027DEEC 0027AE2C  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8027DEF0 0027AE30  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 8027DEF4 0027AE34  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8027DEF8 0027AE38  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8027DEFC 0027AE3C  93 A1 00 64 */	stw r29, 0x64(r1)
/* 8027DF00 0027AE40  93 81 00 60 */	stw r28, 0x60(r1)
/* 8027DF04 0027AE44  38 80 00 00 */	li r4, 0
/* 8027DF08 0027AE48  80 0D 92 F4 */	lwz r0, pikiMgr__4Game@sda21(r13)
/* 8027DF0C 0027AE4C  3C A0 80 4B */	lis r5, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 8027DF10 0027AE50  90 81 00 48 */	stw r4, 0x48(r1)
/* 8027DF14 0027AE54  38 A5 BC 9C */	addi r5, r5, "__vt__22Iterator<Q24Game4Piki>"@l
/* 8027DF18 0027AE58  28 04 00 00 */	cmplwi r4, 0
/* 8027DF1C 0027AE5C  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 8027DF20 0027AE60  7C 7F 1B 78 */	mr r31, r3
/* 8027DF24 0027AE64  90 81 00 40 */	stw r4, 0x40(r1)
/* 8027DF28 0027AE68  90 01 00 44 */	stw r0, 0x44(r1)
/* 8027DF2C 0027AE6C  40 82 00 20 */	bne .L_8027DF4C
/* 8027DF30 0027AE70  7C 03 03 78 */	mr r3, r0
/* 8027DF34 0027AE74  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DF38 0027AE78  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8027DF3C 0027AE7C  7D 89 03 A6 */	mtctr r12
/* 8027DF40 0027AE80  4E 80 04 21 */	bctrl 
/* 8027DF44 0027AE84  90 61 00 40 */	stw r3, 0x40(r1)
/* 8027DF48 0027AE88  48 00 03 1C */	b .L_8027E264
.L_8027DF4C:
/* 8027DF4C 0027AE8C  7C 03 03 78 */	mr r3, r0
/* 8027DF50 0027AE90  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DF54 0027AE94  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8027DF58 0027AE98  7D 89 03 A6 */	mtctr r12
/* 8027DF5C 0027AE9C  4E 80 04 21 */	bctrl 
/* 8027DF60 0027AEA0  90 61 00 40 */	stw r3, 0x40(r1)
/* 8027DF64 0027AEA4  48 00 00 58 */	b .L_8027DFBC
.L_8027DF68:
/* 8027DF68 0027AEA8  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8027DF6C 0027AEAC  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8027DF70 0027AEB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DF74 0027AEB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8027DF78 0027AEB8  7D 89 03 A6 */	mtctr r12
/* 8027DF7C 0027AEBC  4E 80 04 21 */	bctrl 
/* 8027DF80 0027AEC0  7C 64 1B 78 */	mr r4, r3
/* 8027DF84 0027AEC4  80 61 00 48 */	lwz r3, 0x48(r1)
/* 8027DF88 0027AEC8  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DF8C 0027AECC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027DF90 0027AED0  7D 89 03 A6 */	mtctr r12
/* 8027DF94 0027AED4  4E 80 04 21 */	bctrl 
/* 8027DF98 0027AED8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027DF9C 0027AEDC  40 82 02 C8 */	bne .L_8027E264
/* 8027DFA0 0027AEE0  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8027DFA4 0027AEE4  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8027DFA8 0027AEE8  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DFAC 0027AEEC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027DFB0 0027AEF0  7D 89 03 A6 */	mtctr r12
/* 8027DFB4 0027AEF4  4E 80 04 21 */	bctrl 
/* 8027DFB8 0027AEF8  90 61 00 40 */	stw r3, 0x40(r1)
.L_8027DFBC:
/* 8027DFBC 0027AEFC  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 8027DFC0 0027AF00  38 61 00 3C */	addi r3, r1, 0x3c
/* 8027DFC4 0027AF04  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8027DFC8 0027AF08  7D 89 03 A6 */	mtctr r12
/* 8027DFCC 0027AF0C  4E 80 04 21 */	bctrl 
/* 8027DFD0 0027AF10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027DFD4 0027AF14  41 82 FF 94 */	beq .L_8027DF68
/* 8027DFD8 0027AF18  48 00 02 8C */	b .L_8027E264
.L_8027DFDC:
/* 8027DFDC 0027AF1C  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8027DFE0 0027AF20  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DFE4 0027AF24  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8027DFE8 0027AF28  7D 89 03 A6 */	mtctr r12
/* 8027DFEC 0027AF2C  4E 80 04 21 */	bctrl 
/* 8027DFF0 0027AF30  81 83 00 00 */	lwz r12, 0(r3)
/* 8027DFF4 0027AF34  7C 7D 1B 78 */	mr r29, r3
/* 8027DFF8 0027AF38  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8027DFFC 0027AF3C  7D 89 03 A6 */	mtctr r12
/* 8027E000 0027AF40  4E 80 04 21 */	bctrl 
/* 8027E004 0027AF44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027E008 0027AF48  41 82 01 A0 */	beq .L_8027E1A8
/* 8027E00C 0027AF4C  7F A3 EB 78 */	mr r3, r29
/* 8027E010 0027AF50  81 9D 00 00 */	lwz r12, 0(r29)
/* 8027E014 0027AF54  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 8027E018 0027AF58  7D 89 03 A6 */	mtctr r12
/* 8027E01C 0027AF5C  4E 80 04 21 */	bctrl 
/* 8027E020 0027AF60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027E024 0027AF64  41 82 01 84 */	beq .L_8027E1A8
/* 8027E028 0027AF68  80 1D 00 F4 */	lwz r0, 0xf4(r29)
/* 8027E02C 0027AF6C  7C 00 F8 40 */	cmplw r0, r31
/* 8027E030 0027AF70  41 82 01 78 */	beq .L_8027E1A8
/* 8027E034 0027AF74  3B 80 00 00 */	li r28, 0
/* 8027E038 0027AF78  48 00 01 64 */	b .L_8027E19C
.L_8027E03C:
/* 8027E03C 0027AF7C  7F 84 E3 78 */	mr r4, r28
/* 8027E040 0027AF80  38 7F 02 CC */	addi r3, r31, 0x2cc
/* 8027E044 0027AF84  4B EB A7 35 */	bl getSlot__10MouthSlotsFi
/* 8027E048 0027AF88  7C 7E 1B 78 */	mr r30, r3
/* 8027E04C 0027AF8C  80 03 00 64 */	lwz r0, 0x64(r3)
/* 8027E050 0027AF90  28 00 00 00 */	cmplwi r0, 0
/* 8027E054 0027AF94  40 82 01 44 */	bne .L_8027E198
/* 8027E058 0027AF98  38 81 00 30 */	addi r4, r1, 0x30
/* 8027E05C 0027AF9C  4B EB A4 6D */	bl "getPosition__13MouthCollPartFR10Vector3<f>"
/* 8027E060 0027AFA0  7F A4 EB 78 */	mr r4, r29
/* 8027E064 0027AFA4  38 61 00 08 */	addi r3, r1, 8
/* 8027E068 0027AFA8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8027E06C 0027AFAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027E070 0027AFB0  7D 89 03 A6 */	mtctr r12
/* 8027E074 0027AFB4  4E 80 04 21 */	bctrl 
/* 8027E078 0027AFB8  C3 E1 00 0C */	lfs f31, 0xc(r1)
/* 8027E07C 0027AFBC  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8027E080 0027AFC0  C3 A1 00 08 */	lfs f29, 8(r1)
/* 8027E084 0027AFC4  EC 40 F8 28 */	fsubs f2, f0, f31
/* 8027E088 0027AFC8  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 8027E08C 0027AFCC  C3 C1 00 10 */	lfs f30, 0x10(r1)
/* 8027E090 0027AFD0  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8027E094 0027AFD4  EC 21 E8 28 */	fsubs f1, f1, f29
/* 8027E098 0027AFD8  EC 62 00 B2 */	fmuls f3, f2, f2
/* 8027E09C 0027AFDC  EC 40 F0 28 */	fsubs f2, f0, f30
/* 8027E0A0 0027AFE0  C0 02 D1 E0 */	lfs f0, lbl_8051B540@sda21(r2)
/* 8027E0A4 0027AFE4  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 8027E0A8 0027AFE8  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8027E0AC 0027AFEC  EC 22 08 2A */	fadds f1, f2, f1
/* 8027E0B0 0027AFF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027E0B4 0027AFF4  40 81 00 14 */	ble .L_8027E0C8
/* 8027E0B8 0027AFF8  40 81 00 14 */	ble .L_8027E0CC
/* 8027E0BC 0027AFFC  FC 00 08 34 */	frsqrte f0, f1
/* 8027E0C0 0027B000  EC 20 00 72 */	fmuls f1, f0, f1
/* 8027E0C4 0027B004  48 00 00 08 */	b .L_8027E0CC
.L_8027E0C8:
/* 8027E0C8 0027B008  FC 20 00 90 */	fmr f1, f0
.L_8027E0CC:
/* 8027E0CC 0027B00C  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8027E0D0 0027B010  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027E0D4 0027B014  40 80 00 C4 */	bge .L_8027E198
/* 8027E0D8 0027B018  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 8027E0DC 0027B01C  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAttack@ha
/* 8027E0E0 0027B020  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 8027E0E4 0027B024  38 80 00 00 */	li r4, 0
/* 8027E0E8 0027B028  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8027E0EC 0027B02C  38 03 4D E0 */	addi r0, r3, __vt__Q24Game14InteractAttack@l
/* 8027E0F0 0027B030  C0 02 D1 F0 */	lfs f0, lbl_8051B550@sda21(r2)
/* 8027E0F4 0027B034  3C 60 80 4B */	lis r3, __vt__Q24Game15InteractSwallow@ha
/* 8027E0F8 0027B038  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8027E0FC 0027B03C  38 A3 4D BC */	addi r5, r3, __vt__Q24Game15InteractSwallow@l
/* 8027E100 0027B040  38 00 00 01 */	li r0, 1
/* 8027E104 0027B044  7F A3 EB 78 */	mr r3, r29
/* 8027E108 0027B048  90 81 00 5C */	stw r4, 0x5c(r1)
/* 8027E10C 0027B04C  38 81 00 4C */	addi r4, r1, 0x4c
/* 8027E110 0027B050  93 E1 00 50 */	stw r31, 0x50(r1)
/* 8027E114 0027B054  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 8027E118 0027B058  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8027E11C 0027B05C  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 8027E120 0027B060  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8027E124 0027B064  81 9D 00 00 */	lwz r12, 0(r29)
/* 8027E128 0027B068  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8027E12C 0027B06C  7D 89 03 A6 */	mtctr r12
/* 8027E130 0027B070  4E 80 04 21 */	bctrl 
/* 8027E134 0027B074  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027E138 0027B078  41 82 00 60 */	beq .L_8027E198
/* 8027E13C 0027B07C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8027E140 0027B080  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 8027E144 0027B084  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8027E148 0027B088  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8027E14C 0027B08C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027E150 0027B090  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 8027E154 0027B094  3C 60 80 4D */	lis r3, __vt__Q23efx15TYoroiAttackhit@ha
/* 8027E158 0027B098  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 8027E15C 0027B09C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027E160 0027B0A0  38 03 85 68 */	addi r0, r3, __vt__Q23efx15TYoroiAttackhit@l
/* 8027E164 0027B0A4  38 C0 01 ED */	li r6, 0x1ed
/* 8027E168 0027B0A8  38 A0 00 00 */	li r5, 0
/* 8027E16C 0027B0AC  90 81 00 20 */	stw r4, 0x20(r1)
/* 8027E170 0027B0B0  38 61 00 14 */	addi r3, r1, 0x14
/* 8027E174 0027B0B4  38 81 00 20 */	addi r4, r1, 0x20
/* 8027E178 0027B0B8  D3 A1 00 24 */	stfs f29, 0x24(r1)
/* 8027E17C 0027B0BC  D3 E1 00 28 */	stfs f31, 0x28(r1)
/* 8027E180 0027B0C0  D3 C1 00 2C */	stfs f30, 0x2c(r1)
/* 8027E184 0027B0C4  B0 C1 00 18 */	sth r6, 0x18(r1)
/* 8027E188 0027B0C8  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8027E18C 0027B0CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027E190 0027B0D0  48 13 0D F5 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 8027E194 0027B0D4  48 00 00 14 */	b .L_8027E1A8
.L_8027E198:
/* 8027E198 0027B0D8  3B 9C 00 01 */	addi r28, r28, 1
.L_8027E19C:
/* 8027E19C 0027B0DC  80 1F 02 CC */	lwz r0, 0x2cc(r31)
/* 8027E1A0 0027B0E0  7C 1C 00 00 */	cmpw r28, r0
/* 8027E1A4 0027B0E4  41 80 FE 98 */	blt .L_8027E03C
.L_8027E1A8:
/* 8027E1A8 0027B0E8  80 01 00 48 */	lwz r0, 0x48(r1)
/* 8027E1AC 0027B0EC  28 00 00 00 */	cmplwi r0, 0
/* 8027E1B0 0027B0F0  40 82 00 24 */	bne .L_8027E1D4
/* 8027E1B4 0027B0F4  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8027E1B8 0027B0F8  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8027E1BC 0027B0FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E1C0 0027B100  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027E1C4 0027B104  7D 89 03 A6 */	mtctr r12
/* 8027E1C8 0027B108  4E 80 04 21 */	bctrl 
/* 8027E1CC 0027B10C  90 61 00 40 */	stw r3, 0x40(r1)
/* 8027E1D0 0027B110  48 00 00 94 */	b .L_8027E264
.L_8027E1D4:
/* 8027E1D4 0027B114  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8027E1D8 0027B118  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8027E1DC 0027B11C  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E1E0 0027B120  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027E1E4 0027B124  7D 89 03 A6 */	mtctr r12
/* 8027E1E8 0027B128  4E 80 04 21 */	bctrl 
/* 8027E1EC 0027B12C  90 61 00 40 */	stw r3, 0x40(r1)
/* 8027E1F0 0027B130  48 00 00 58 */	b .L_8027E248
.L_8027E1F4:
/* 8027E1F4 0027B134  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8027E1F8 0027B138  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8027E1FC 0027B13C  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E200 0027B140  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8027E204 0027B144  7D 89 03 A6 */	mtctr r12
/* 8027E208 0027B148  4E 80 04 21 */	bctrl 
/* 8027E20C 0027B14C  7C 64 1B 78 */	mr r4, r3
/* 8027E210 0027B150  80 61 00 48 */	lwz r3, 0x48(r1)
/* 8027E214 0027B154  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E218 0027B158  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027E21C 0027B15C  7D 89 03 A6 */	mtctr r12
/* 8027E220 0027B160  4E 80 04 21 */	bctrl 
/* 8027E224 0027B164  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027E228 0027B168  40 82 00 3C */	bne .L_8027E264
/* 8027E22C 0027B16C  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8027E230 0027B170  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8027E234 0027B174  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E238 0027B178  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027E23C 0027B17C  7D 89 03 A6 */	mtctr r12
/* 8027E240 0027B180  4E 80 04 21 */	bctrl 
/* 8027E244 0027B184  90 61 00 40 */	stw r3, 0x40(r1)
.L_8027E248:
/* 8027E248 0027B188  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 8027E24C 0027B18C  38 61 00 3C */	addi r3, r1, 0x3c
/* 8027E250 0027B190  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8027E254 0027B194  7D 89 03 A6 */	mtctr r12
/* 8027E258 0027B198  4E 80 04 21 */	bctrl 
/* 8027E25C 0027B19C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027E260 0027B1A0  41 82 FF 94 */	beq .L_8027E1F4
.L_8027E264:
/* 8027E264 0027B1A4  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8027E268 0027B1A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E26C 0027B1AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8027E270 0027B1B0  7D 89 03 A6 */	mtctr r12
/* 8027E274 0027B1B4  4E 80 04 21 */	bctrl 
/* 8027E278 0027B1B8  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8027E27C 0027B1BC  7C 04 18 40 */	cmplw r4, r3
/* 8027E280 0027B1C0  40 82 FD 5C */	bne .L_8027DFDC
/* 8027E284 0027B1C4  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8027E288 0027B1C8  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8027E28C 0027B1CC  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8027E290 0027B1D0  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8027E294 0027B1D4  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 8027E298 0027B1D8  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8027E29C 0027B1DC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8027E2A0 0027B1E0  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8027E2A4 0027B1E4  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 8027E2A8 0027B1E8  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8027E2AC 0027B1EC  83 81 00 60 */	lwz r28, 0x60(r1)
/* 8027E2B0 0027B1F0  7C 08 03 A6 */	mtlr r0
/* 8027E2B4 0027B1F4  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8027E2B8 0027B1F8  4E 80 00 20 */	blr 
.endfn attackPikmin__Q34Game5Armor3ObjFv

.fn getSlotPikiNum__Q34Game5Armor3ObjFv, global
/* 8027E2BC 0027B1FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8027E2C0 0027B200  7C 08 02 A6 */	mflr r0
/* 8027E2C4 0027B204  90 01 00 24 */	stw r0, 0x24(r1)
/* 8027E2C8 0027B208  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8027E2CC 0027B20C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8027E2D0 0027B210  3B C0 00 00 */	li r30, 0
/* 8027E2D4 0027B214  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8027E2D8 0027B218  93 81 00 10 */	stw r28, 0x10(r1)
/* 8027E2DC 0027B21C  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E2E0 0027B220  81 8C 02 5C */	lwz r12, 0x25c(r12)
/* 8027E2E4 0027B224  7D 89 03 A6 */	mtctr r12
/* 8027E2E8 0027B228  4E 80 04 21 */	bctrl 
/* 8027E2EC 0027B22C  83 E3 00 00 */	lwz r31, 0(r3)
/* 8027E2F0 0027B230  3B 80 00 00 */	li r28, 0
/* 8027E2F4 0027B234  7C 7D 1B 78 */	mr r29, r3
/* 8027E2F8 0027B238  48 00 00 24 */	b .L_8027E31C
.L_8027E2FC:
/* 8027E2FC 0027B23C  7F A3 EB 78 */	mr r3, r29
/* 8027E300 0027B240  7F 84 E3 78 */	mr r4, r28
/* 8027E304 0027B244  4B EB A4 75 */	bl getSlot__10MouthSlotsFi
/* 8027E308 0027B248  80 03 00 64 */	lwz r0, 0x64(r3)
/* 8027E30C 0027B24C  28 00 00 00 */	cmplwi r0, 0
/* 8027E310 0027B250  41 82 00 08 */	beq .L_8027E318
/* 8027E314 0027B254  3B DE 00 01 */	addi r30, r30, 1
.L_8027E318:
/* 8027E318 0027B258  3B 9C 00 01 */	addi r28, r28, 1
.L_8027E31C:
/* 8027E31C 0027B25C  7C 1C F8 00 */	cmpw r28, r31
/* 8027E320 0027B260  41 80 FF DC */	blt .L_8027E2FC
/* 8027E324 0027B264  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8027E328 0027B268  7F C3 F3 78 */	mr r3, r30
/* 8027E32C 0027B26C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8027E330 0027B270  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8027E334 0027B274  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8027E338 0027B278  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8027E33C 0027B27C  7C 08 03 A6 */	mtlr r0
/* 8027E340 0027B280  38 21 00 20 */	addi r1, r1, 0x20
/* 8027E344 0027B284  4E 80 00 20 */	blr 
.endfn getSlotPikiNum__Q34Game5Armor3ObjFv

.fn getMouthSlots__Q34Game5Armor3ObjFv, weak
/* 8027E348 0027B288  38 63 02 CC */	addi r3, r3, 0x2cc
/* 8027E34C 0027B28C  4E 80 00 20 */	blr 
.endfn getMouthSlots__Q34Game5Armor3ObjFv

.fn killSlotPiki__Q34Game5Armor3ObjFv, global
/* 8027E350 0027B290  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027E354 0027B294  7C 08 02 A6 */	mflr r0
/* 8027E358 0027B298  38 80 00 00 */	li r4, 0
/* 8027E35C 0027B29C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027E360 0027B2A0  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 8027E364 0027B2A4  C0 25 08 1C */	lfs f1, 0x81c(r5)
/* 8027E368 0027B2A8  4B E9 5B 1D */	bl "swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 8027E36C 0027B2AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027E370 0027B2B0  7C 08 03 A6 */	mtlr r0
/* 8027E374 0027B2B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8027E378 0027B2B8  4E 80 00 20 */	blr 
.endfn killSlotPiki__Q34Game5Armor3ObjFv

.fn resetBridgeSearch__Q34Game5Armor3ObjFv, global
/* 8027E37C 0027B2BC  38 80 00 01 */	li r4, 1
/* 8027E380 0027B2C0  38 00 00 00 */	li r0, 0
/* 8027E384 0027B2C4  98 83 02 C0 */	stb r4, 0x2c0(r3)
/* 8027E388 0027B2C8  C0 02 D1 E0 */	lfs f0, lbl_8051B540@sda21(r2)
/* 8027E38C 0027B2CC  90 03 02 D8 */	stw r0, 0x2d8(r3)
/* 8027E390 0027B2D0  D0 03 02 DC */	stfs f0, 0x2dc(r3)
/* 8027E394 0027B2D4  D0 03 02 E0 */	stfs f0, 0x2e0(r3)
/* 8027E398 0027B2D8  4E 80 00 20 */	blr 
.endfn resetBridgeSearch__Q34Game5Armor3ObjFv

.fn setBridgeSearch__Q34Game5Armor3ObjFv, global
/* 8027E39C 0027B2DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027E3A0 0027B2E0  7C 08 02 A6 */	mflr r0
/* 8027E3A4 0027B2E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027E3A8 0027B2E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027E3AC 0027B2EC  7C 7F 1B 78 */	mr r31, r3
/* 8027E3B0 0027B2F0  88 03 02 C0 */	lbz r0, 0x2c0(r3)
/* 8027E3B4 0027B2F4  28 00 00 00 */	cmplwi r0, 0
/* 8027E3B8 0027B2F8  41 82 00 18 */	beq .L_8027E3D0
/* 8027E3BC 0027B2FC  38 00 00 00 */	li r0, 0
/* 8027E3C0 0027B300  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 8027E3C4 0027B304  48 00 00 21 */	bl setNearestBridge__Q34Game5Armor3ObjFv
/* 8027E3C8 0027B308  7F E3 FB 78 */	mr r3, r31
/* 8027E3CC 0027B30C  48 00 02 D9 */	bl setCullingCheck__Q34Game5Armor3ObjFv
.L_8027E3D0:
/* 8027E3D0 0027B310  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027E3D4 0027B314  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027E3D8 0027B318  7C 08 03 A6 */	mtlr r0
/* 8027E3DC 0027B31C  38 21 00 10 */	addi r1, r1, 0x10
/* 8027E3E0 0027B320  4E 80 00 20 */	blr 
.endfn setBridgeSearch__Q34Game5Armor3ObjFv

.fn setNearestBridge__Q34Game5Armor3ObjFv, global
/* 8027E3E4 0027B324  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8027E3E8 0027B328  7C 08 02 A6 */	mflr r0
/* 8027E3EC 0027B32C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8027E3F0 0027B330  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8027E3F4 0027B334  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8027E3F8 0027B338  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8027E3FC 0027B33C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8027E400 0027B340  7C 7F 1B 78 */	mr r31, r3
/* 8027E404 0027B344  38 00 00 00 */	li r0, 0
/* 8027E408 0027B348  90 03 02 D8 */	stw r0, 0x2d8(r3)
/* 8027E40C 0027B34C  C0 02 D1 E0 */	lfs f0, lbl_8051B540@sda21(r2)
/* 8027E410 0027B350  D0 03 02 DC */	stfs f0, 0x2dc(r3)
/* 8027E414 0027B354  D0 03 02 E0 */	stfs f0, 0x2e0(r3)
/* 8027E418 0027B358  80 6D 94 B8 */	lwz r3, mgr__Q24Game10ItemBridge@sda21(r13)
/* 8027E41C 0027B35C  28 03 00 00 */	cmplwi r3, 0
/* 8027E420 0027B360  41 82 02 14 */	beq .L_8027E634
/* 8027E424 0027B364  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8027E428 0027B368  C0 04 03 5C */	lfs f0, 0x35c(r4)
/* 8027E42C 0027B36C  EF E0 00 32 */	fmuls f31, f0, f0
/* 8027E430 0027B370  41 82 00 08 */	beq .L_8027E438
/* 8027E434 0027B374  38 63 00 30 */	addi r3, r3, 0x30
.L_8027E438:
/* 8027E438 0027B378  38 00 00 00 */	li r0, 0
/* 8027E43C 0027B37C  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 8027E440 0027B380  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 8027E444 0027B384  90 01 00 20 */	stw r0, 0x20(r1)
/* 8027E448 0027B388  28 00 00 00 */	cmplwi r0, 0
/* 8027E44C 0027B38C  90 81 00 14 */	stw r4, 0x14(r1)
/* 8027E450 0027B390  90 01 00 18 */	stw r0, 0x18(r1)
/* 8027E454 0027B394  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8027E458 0027B398  40 82 00 1C */	bne .L_8027E474
/* 8027E45C 0027B39C  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E460 0027B3A0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8027E464 0027B3A4  7D 89 03 A6 */	mtctr r12
/* 8027E468 0027B3A8  4E 80 04 21 */	bctrl 
/* 8027E46C 0027B3AC  90 61 00 18 */	stw r3, 0x18(r1)
/* 8027E470 0027B3B0  48 00 01 A4 */	b .L_8027E614
.L_8027E474:
/* 8027E474 0027B3B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E478 0027B3B8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8027E47C 0027B3BC  7D 89 03 A6 */	mtctr r12
/* 8027E480 0027B3C0  4E 80 04 21 */	bctrl 
/* 8027E484 0027B3C4  90 61 00 18 */	stw r3, 0x18(r1)
/* 8027E488 0027B3C8  48 00 00 58 */	b .L_8027E4E0
.L_8027E48C:
/* 8027E48C 0027B3CC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8027E490 0027B3D0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8027E494 0027B3D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E498 0027B3D8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8027E49C 0027B3DC  7D 89 03 A6 */	mtctr r12
/* 8027E4A0 0027B3E0  4E 80 04 21 */	bctrl 
/* 8027E4A4 0027B3E4  7C 64 1B 78 */	mr r4, r3
/* 8027E4A8 0027B3E8  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8027E4AC 0027B3EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E4B0 0027B3F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027E4B4 0027B3F4  7D 89 03 A6 */	mtctr r12
/* 8027E4B8 0027B3F8  4E 80 04 21 */	bctrl 
/* 8027E4BC 0027B3FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027E4C0 0027B400  40 82 01 54 */	bne .L_8027E614
/* 8027E4C4 0027B404  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8027E4C8 0027B408  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8027E4CC 0027B40C  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E4D0 0027B410  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027E4D4 0027B414  7D 89 03 A6 */	mtctr r12
/* 8027E4D8 0027B418  4E 80 04 21 */	bctrl 
/* 8027E4DC 0027B41C  90 61 00 18 */	stw r3, 0x18(r1)
.L_8027E4E0:
/* 8027E4E0 0027B420  81 81 00 14 */	lwz r12, 0x14(r1)
/* 8027E4E4 0027B424  38 61 00 14 */	addi r3, r1, 0x14
/* 8027E4E8 0027B428  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8027E4EC 0027B42C  7D 89 03 A6 */	mtctr r12
/* 8027E4F0 0027B430  4E 80 04 21 */	bctrl 
/* 8027E4F4 0027B434  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027E4F8 0027B438  41 82 FF 94 */	beq .L_8027E48C
/* 8027E4FC 0027B43C  48 00 01 18 */	b .L_8027E614
.L_8027E500:
/* 8027E500 0027B440  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8027E504 0027B444  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E508 0027B448  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8027E50C 0027B44C  7D 89 03 A6 */	mtctr r12
/* 8027E510 0027B450  4E 80 04 21 */	bctrl 
/* 8027E514 0027B454  7C 60 1B 78 */	mr r0, r3
/* 8027E518 0027B458  38 61 00 08 */	addi r3, r1, 8
/* 8027E51C 0027B45C  7C 1E 03 78 */	mr r30, r0
/* 8027E520 0027B460  7F C4 F3 78 */	mr r4, r30
/* 8027E524 0027B464  4B F7 0A 11 */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8027E528 0027B468  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8027E52C 0027B46C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8027E530 0027B470  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8027E534 0027B474  EC 21 00 28 */	fsubs f1, f1, f0
/* 8027E538 0027B478  C0 01 00 08 */	lfs f0, 8(r1)
/* 8027E53C 0027B47C  EC 42 00 28 */	fsubs f2, f2, f0
/* 8027E540 0027B480  EC 01 00 72 */	fmuls f0, f1, f1
/* 8027E544 0027B484  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 8027E548 0027B488  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8027E54C 0027B48C  40 80 00 0C */	bge .L_8027E558
/* 8027E550 0027B490  93 DF 02 D8 */	stw r30, 0x2d8(r31)
/* 8027E554 0027B494  FF E0 00 90 */	fmr f31, f0
.L_8027E558:
/* 8027E558 0027B498  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8027E55C 0027B49C  28 00 00 00 */	cmplwi r0, 0
/* 8027E560 0027B4A0  40 82 00 24 */	bne .L_8027E584
/* 8027E564 0027B4A4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8027E568 0027B4A8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8027E56C 0027B4AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E570 0027B4B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027E574 0027B4B4  7D 89 03 A6 */	mtctr r12
/* 8027E578 0027B4B8  4E 80 04 21 */	bctrl 
/* 8027E57C 0027B4BC  90 61 00 18 */	stw r3, 0x18(r1)
/* 8027E580 0027B4C0  48 00 00 94 */	b .L_8027E614
.L_8027E584:
/* 8027E584 0027B4C4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8027E588 0027B4C8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8027E58C 0027B4CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E590 0027B4D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027E594 0027B4D4  7D 89 03 A6 */	mtctr r12
/* 8027E598 0027B4D8  4E 80 04 21 */	bctrl 
/* 8027E59C 0027B4DC  90 61 00 18 */	stw r3, 0x18(r1)
/* 8027E5A0 0027B4E0  48 00 00 58 */	b .L_8027E5F8
.L_8027E5A4:
/* 8027E5A4 0027B4E4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8027E5A8 0027B4E8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8027E5AC 0027B4EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E5B0 0027B4F0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8027E5B4 0027B4F4  7D 89 03 A6 */	mtctr r12
/* 8027E5B8 0027B4F8  4E 80 04 21 */	bctrl 
/* 8027E5BC 0027B4FC  7C 64 1B 78 */	mr r4, r3
/* 8027E5C0 0027B500  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8027E5C4 0027B504  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E5C8 0027B508  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027E5CC 0027B50C  7D 89 03 A6 */	mtctr r12
/* 8027E5D0 0027B510  4E 80 04 21 */	bctrl 
/* 8027E5D4 0027B514  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027E5D8 0027B518  40 82 00 3C */	bne .L_8027E614
/* 8027E5DC 0027B51C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8027E5E0 0027B520  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8027E5E4 0027B524  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E5E8 0027B528  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027E5EC 0027B52C  7D 89 03 A6 */	mtctr r12
/* 8027E5F0 0027B530  4E 80 04 21 */	bctrl 
/* 8027E5F4 0027B534  90 61 00 18 */	stw r3, 0x18(r1)
.L_8027E5F8:
/* 8027E5F8 0027B538  81 81 00 14 */	lwz r12, 0x14(r1)
/* 8027E5FC 0027B53C  38 61 00 14 */	addi r3, r1, 0x14
/* 8027E600 0027B540  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8027E604 0027B544  7D 89 03 A6 */	mtctr r12
/* 8027E608 0027B548  4E 80 04 21 */	bctrl 
/* 8027E60C 0027B54C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027E610 0027B550  41 82 FF 94 */	beq .L_8027E5A4
.L_8027E614:
/* 8027E614 0027B554  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8027E618 0027B558  81 83 00 00 */	lwz r12, 0(r3)
/* 8027E61C 0027B55C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8027E620 0027B560  7D 89 03 A6 */	mtctr r12
/* 8027E624 0027B564  4E 80 04 21 */	bctrl 
/* 8027E628 0027B568  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8027E62C 0027B56C  7C 04 18 40 */	cmplw r4, r3
/* 8027E630 0027B570  40 82 FE D0 */	bne .L_8027E500
.L_8027E634:
/* 8027E634 0027B574  80 7F 02 D8 */	lwz r3, 0x2d8(r31)
/* 8027E638 0027B578  28 03 00 00 */	cmplwi r3, 0
/* 8027E63C 0027B57C  41 82 00 48 */	beq .L_8027E684
/* 8027E640 0027B580  4B F7 09 F1 */	bl getStageWidth__Q34Game10ItemBridge4ItemFv
/* 8027E644 0027B584  C0 02 D1 E4 */	lfs f0, lbl_8051B544@sda21(r2)
/* 8027E648 0027B588  EF E1 00 28 */	fsubs f31, f1, f0
/* 8027E64C 0027B58C  4B E4 AF 55 */	bl rand
/* 8027E650 0027B590  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8027E654 0027B594  3C 00 43 30 */	lis r0, 0x4330
/* 8027E658 0027B598  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8027E65C 0027B59C  C8 62 D2 08 */	lfd f3, lbl_8051B568@sda21(r2)
/* 8027E660 0027B5A0  90 01 00 28 */	stw r0, 0x28(r1)
/* 8027E664 0027B5A4  C0 22 D2 00 */	lfs f1, lbl_8051B560@sda21(r2)
/* 8027E668 0027B5A8  C8 41 00 28 */	lfd f2, 0x28(r1)
/* 8027E66C 0027B5AC  C0 02 D2 04 */	lfs f0, lbl_8051B564@sda21(r2)
/* 8027E670 0027B5B0  EC 42 18 28 */	fsubs f2, f2, f3
/* 8027E674 0027B5B4  EC 5F 00 B2 */	fmuls f2, f31, f2
/* 8027E678 0027B5B8  EC 22 08 24 */	fdivs f1, f2, f1
/* 8027E67C 0027B5BC  EC 00 0F FC */	fnmsubs f0, f0, f31, f1
/* 8027E680 0027B5C0  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
.L_8027E684:
/* 8027E684 0027B5C4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8027E688 0027B5C8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8027E68C 0027B5CC  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8027E690 0027B5D0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8027E694 0027B5D4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8027E698 0027B5D8  7C 08 03 A6 */	mtlr r0
/* 8027E69C 0027B5DC  38 21 00 50 */	addi r1, r1, 0x50
/* 8027E6A0 0027B5E0  4E 80 00 20 */	blr 
.endfn setNearestBridge__Q34Game5Armor3ObjFv

.fn setCullingCheck__Q34Game5Armor3ObjFv, global
/* 8027E6A4 0027B5E4  4E 80 00 20 */	blr 
.endfn setCullingCheck__Q34Game5Armor3ObjFv

.fn checkBreakOrMove__Q34Game5Armor3ObjFv, global
/* 8027E6A8 0027B5E8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8027E6AC 0027B5EC  7C 08 02 A6 */	mflr r0
/* 8027E6B0 0027B5F0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8027E6B4 0027B5F4  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8027E6B8 0027B5F8  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8027E6BC 0027B5FC  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8027E6C0 0027B600  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 8027E6C4 0027B604  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8027E6C8 0027B608  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 8027E6CC 0027B60C  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 8027E6D0 0027B610  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 8027E6D4 0027B614  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 8027E6D8 0027B618  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 8027E6DC 0027B61C  DB 41 00 40 */	stfd f26, 0x40(r1)
/* 8027E6E0 0027B620  F3 41 00 48 */	psq_st f26, 72(r1), 0, qr0
/* 8027E6E4 0027B624  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8027E6E8 0027B628  7C 7F 1B 78 */	mr r31, r3
/* 8027E6EC 0027B62C  80 83 02 D8 */	lwz r4, 0x2d8(r3)
/* 8027E6F0 0027B630  28 04 00 00 */	cmplwi r4, 0
/* 8027E6F4 0027B634  41 82 01 20 */	beq .L_8027E814
/* 8027E6F8 0027B638  38 61 00 20 */	addi r3, r1, 0x20
/* 8027E6FC 0027B63C  4B F7 09 3D */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 8027E700 0027B640  C3 81 00 20 */	lfs f28, 0x20(r1)
/* 8027E704 0027B644  38 61 00 14 */	addi r3, r1, 0x14
/* 8027E708 0027B648  C3 A1 00 24 */	lfs f29, 0x24(r1)
/* 8027E70C 0027B64C  C3 61 00 28 */	lfs f27, 0x28(r1)
/* 8027E710 0027B650  80 9F 02 D8 */	lwz r4, 0x2d8(r31)
/* 8027E714 0027B654  4B F7 08 21 */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8027E718 0027B658  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8027E71C 0027B65C  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8027E720 0027B660  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8027E724 0027B664  EF C2 00 28 */	fsubs f30, f2, f0
/* 8027E728 0027B668  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8027E72C 0027B66C  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 8027E730 0027B670  EF E1 00 28 */	fsubs f31, f1, f0
/* 8027E734 0027B674  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8027E738 0027B678  EC 3D 07 B2 */	fmuls f1, f29, f30
/* 8027E73C 0027B67C  EF A2 00 28 */	fsubs f29, f2, f0
/* 8027E740 0027B680  C0 02 D1 E0 */	lfs f0, lbl_8051B540@sda21(r2)
/* 8027E744 0027B684  EC 3C 0F FA */	fmadds f1, f28, f31, f1
/* 8027E748 0027B688  EC 3B 0F 7A */	fmadds f1, f27, f29, f1
/* 8027E74C 0027B68C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027E750 0027B690  40 81 00 0C */	ble .L_8027E75C
/* 8027E754 0027B694  38 60 00 06 */	li r3, 6
/* 8027E758 0027B698  48 00 00 C0 */	b .L_8027E818
.L_8027E75C:
/* 8027E75C 0027B69C  80 9F 02 D8 */	lwz r4, 0x2d8(r31)
/* 8027E760 0027B6A0  38 61 00 08 */	addi r3, r1, 8
/* 8027E764 0027B6A4  4B F7 09 79 */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 8027E768 0027B6A8  C3 61 00 08 */	lfs f27, 8(r1)
/* 8027E76C 0027B6AC  C3 81 00 0C */	lfs f28, 0xc(r1)
/* 8027E770 0027B6B0  C3 41 00 10 */	lfs f26, 0x10(r1)
/* 8027E774 0027B6B4  80 7F 02 D8 */	lwz r3, 0x2d8(r31)
/* 8027E778 0027B6B8  4B F7 08 B9 */	bl getStageWidth__Q34Game10ItemBridge4ItemFv
/* 8027E77C 0027B6BC  EC 7C 07 B2 */	fmuls f3, f28, f30
/* 8027E780 0027B6C0  C0 02 D2 04 */	lfs f0, lbl_8051B564@sda21(r2)
/* 8027E784 0027B6C4  C0 42 D1 E4 */	lfs f2, lbl_8051B544@sda21(r2)
/* 8027E788 0027B6C8  EC 80 00 72 */	fmuls f4, f0, f1
/* 8027E78C 0027B6CC  C0 02 D1 E0 */	lfs f0, lbl_8051B540@sda21(r2)
/* 8027E790 0027B6D0  EC 3B 1F FA */	fmadds f1, f27, f31, f3
/* 8027E794 0027B6D4  EC 42 20 2A */	fadds f2, f2, f4
/* 8027E798 0027B6D8  EC 3A 0F 7A */	fmadds f1, f26, f29, f1
/* 8027E79C 0027B6DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027E7A0 0027B6E0  40 80 00 0C */	bge .L_8027E7AC
/* 8027E7A4 0027B6E4  D0 5F 02 E0 */	stfs f2, 0x2e0(r31)
/* 8027E7A8 0027B6E8  48 00 00 0C */	b .L_8027E7B4
.L_8027E7AC:
/* 8027E7AC 0027B6EC  FC 00 10 50 */	fneg f0, f2
/* 8027E7B0 0027B6F0  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
.L_8027E7B4:
/* 8027E7B4 0027B6F4  C0 02 D1 E0 */	lfs f0, lbl_8051B540@sda21(r2)
/* 8027E7B8 0027B6F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027E7BC 0027B6FC  40 81 00 08 */	ble .L_8027E7C4
/* 8027E7C0 0027B700  48 00 00 08 */	b .L_8027E7C8
.L_8027E7C4:
/* 8027E7C4 0027B704  FC 20 08 50 */	fneg f1, f1
.L_8027E7C8:
/* 8027E7C8 0027B708  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 8027E7CC 0027B70C  40 81 00 0C */	ble .L_8027E7D8
/* 8027E7D0 0027B710  38 60 00 05 */	li r3, 5
/* 8027E7D4 0027B714  48 00 00 44 */	b .L_8027E818
.L_8027E7D8:
/* 8027E7D8 0027B718  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8027E7DC 0027B71C  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8027E7E0 0027B720  81 83 00 04 */	lwz r12, 4(r3)
/* 8027E7E4 0027B724  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8027E7E8 0027B728  7D 89 03 A6 */	mtctr r12
/* 8027E7EC 0027B72C  4E 80 04 21 */	bctrl 
/* 8027E7F0 0027B730  C0 02 D2 10 */	lfs f0, lbl_8051B570@sda21(r2)
/* 8027E7F4 0027B734  C0 5F 01 90 */	lfs f2, 0x190(r31)
/* 8027E7F8 0027B738  EC 00 08 2A */	fadds f0, f0, f1
/* 8027E7FC 0027B73C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8027E800 0027B740  40 81 00 0C */	ble .L_8027E80C
/* 8027E804 0027B744  38 60 00 07 */	li r3, 7
/* 8027E808 0027B748  48 00 00 10 */	b .L_8027E818
.L_8027E80C:
/* 8027E80C 0027B74C  38 60 00 05 */	li r3, 5
/* 8027E810 0027B750  48 00 00 08 */	b .L_8027E818
.L_8027E814:
/* 8027E814 0027B754  38 60 00 06 */	li r3, 6
.L_8027E818:
/* 8027E818 0027B758  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8027E81C 0027B75C  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8027E820 0027B760  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8027E824 0027B764  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8027E828 0027B768  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 8027E82C 0027B76C  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8027E830 0027B770  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 8027E834 0027B774  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 8027E838 0027B778  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 8027E83C 0027B77C  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 8027E840 0027B780  E3 41 00 48 */	psq_l f26, 72(r1), 0, qr0
/* 8027E844 0027B784  CB 41 00 40 */	lfd f26, 0x40(r1)
/* 8027E848 0027B788  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8027E84C 0027B78C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8027E850 0027B790  7C 08 03 A6 */	mtlr r0
/* 8027E854 0027B794  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8027E858 0027B798  4E 80 00 20 */	blr 
.endfn checkBreakOrMove__Q34Game5Armor3ObjFv

.fn isBreakBridge__Q34Game5Armor3ObjFv, global
/* 8027E85C 0027B79C  80 63 02 D8 */	lwz r3, 0x2d8(r3)
/* 8027E860 0027B7A0  28 03 00 00 */	cmplwi r3, 0
/* 8027E864 0027B7A4  41 82 00 18 */	beq .L_8027E87C
/* 8027E868 0027B7A8  80 03 02 18 */	lwz r0, 0x218(r3)
/* 8027E86C 0027B7AC  2C 00 00 00 */	cmpwi r0, 0
/* 8027E870 0027B7B0  41 82 00 0C */	beq .L_8027E87C
/* 8027E874 0027B7B4  38 60 00 01 */	li r3, 1
/* 8027E878 0027B7B8  4E 80 00 20 */	blr 
.L_8027E87C:
/* 8027E87C 0027B7BC  38 60 00 00 */	li r3, 0
/* 8027E880 0027B7C0  4E 80 00 20 */	blr 
.endfn isBreakBridge__Q34Game5Armor3ObjFv

.fn moveBridgeSide__Q34Game5Armor3ObjFv, global
/* 8027E884 0027B7C4  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8027E888 0027B7C8  7C 08 02 A6 */	mflr r0
/* 8027E88C 0027B7CC  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8027E890 0027B7D0  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8027E894 0027B7D4  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8027E898 0027B7D8  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8027E89C 0027B7DC  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 8027E8A0 0027B7E0  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8027E8A4 0027B7E4  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 8027E8A8 0027B7E8  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 8027E8AC 0027B7EC  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 8027E8B0 0027B7F0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8027E8B4 0027B7F4  7C 7F 1B 78 */	mr r31, r3
/* 8027E8B8 0027B7F8  38 61 00 44 */	addi r3, r1, 0x44
/* 8027E8BC 0027B7FC  80 9F 02 D8 */	lwz r4, 0x2d8(r31)
/* 8027E8C0 0027B800  4B F7 06 75 */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8027E8C4 0027B804  C3 A1 00 44 */	lfs f29, 0x44(r1)
/* 8027E8C8 0027B808  38 61 00 38 */	addi r3, r1, 0x38
/* 8027E8CC 0027B80C  C3 81 00 4C */	lfs f28, 0x4c(r1)
/* 8027E8D0 0027B810  80 9F 02 D8 */	lwz r4, 0x2d8(r31)
/* 8027E8D4 0027B814  4B F7 08 09 */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 8027E8D8 0027B818  C3 C1 00 38 */	lfs f30, 0x38(r1)
/* 8027E8DC 0027B81C  38 61 00 2C */	addi r3, r1, 0x2c
/* 8027E8E0 0027B820  C3 E1 00 40 */	lfs f31, 0x40(r1)
/* 8027E8E4 0027B824  80 9F 02 D8 */	lwz r4, 0x2d8(r31)
/* 8027E8E8 0027B828  4B F7 07 51 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 8027E8EC 0027B82C  C0 3F 02 E0 */	lfs f1, 0x2e0(r31)
/* 8027E8F0 0027B830  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 8027E8F4 0027B834  EF FF 00 72 */	fmuls f31, f31, f1
/* 8027E8F8 0027B838  C0 02 D2 14 */	lfs f0, lbl_8051B574@sda21(r2)
/* 8027E8FC 0027B83C  EF DE 00 72 */	fmuls f30, f30, f1
/* 8027E900 0027B840  C0 61 00 2C */	lfs f3, 0x2c(r1)
/* 8027E904 0027B844  EC 84 00 32 */	fmuls f4, f4, f0
/* 8027E908 0027B848  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8027E90C 0027B84C  EF 9C F8 2A */	fadds f28, f28, f31
/* 8027E910 0027B850  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8027E914 0027B854  EC 63 00 32 */	fmuls f3, f3, f0
/* 8027E918 0027B858  C0 02 D2 18 */	lfs f0, lbl_8051B578@sda21(r2)
/* 8027E91C 0027B85C  EF BD F0 2A */	fadds f29, f29, f30
/* 8027E920 0027B860  EF 9C 20 2A */	fadds f28, f28, f4
/* 8027E924 0027B864  EF BD 18 2A */	fadds f29, f29, f3
/* 8027E928 0027B868  EC 21 E0 28 */	fsubs f1, f1, f28
/* 8027E92C 0027B86C  EC 42 E8 28 */	fsubs f2, f2, f29
/* 8027E930 0027B870  EC 21 00 72 */	fmuls f1, f1, f1
/* 8027E934 0027B874  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8027E938 0027B878  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027E93C 0027B87C  40 80 00 80 */	bge .L_8027E9BC
/* 8027E940 0027B880  7F E3 FB 78 */	mr r3, r31
/* 8027E944 0027B884  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8027E948 0027B888  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027E94C 0027B88C  C0 22 D2 1C */	lfs f1, lbl_8051B57C@sda21(r2)
/* 8027E950 0027B890  C0 04 02 E4 */	lfs f0, 0x2e4(r4)
/* 8027E954 0027B894  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027E958 0027B898  EF C1 00 32 */	fmuls f30, f1, f0
/* 8027E95C 0027B89C  7D 89 03 A6 */	mtctr r12
/* 8027E960 0027B8A0  4E 80 04 21 */	bctrl 
/* 8027E964 0027B8A4  4B E5 0E B9 */	bl sin
/* 8027E968 0027B8A8  7F E3 FB 78 */	mr r3, r31
/* 8027E96C 0027B8AC  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8027E970 0027B8B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027E974 0027B8B4  FF A0 08 18 */	frsp f29, f1
/* 8027E978 0027B8B8  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 8027E97C 0027B8BC  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8027E980 0027B8C0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027E984 0027B8C4  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8027E988 0027B8C8  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 8027E98C 0027B8CC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8027E990 0027B8D0  7D 89 03 A6 */	mtctr r12
/* 8027E994 0027B8D4  4E 80 04 21 */	bctrl 
/* 8027E998 0027B8D8  4B E5 09 1D */	bl cos
/* 8027E99C 0027B8DC  EC 1E 07 72 */	fmuls f0, f30, f29
/* 8027E9A0 0027B8E0  38 60 00 01 */	li r3, 1
/* 8027E9A4 0027B8E4  FC 20 08 18 */	frsp f1, f1
/* 8027E9A8 0027B8E8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8027E9AC 0027B8EC  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8027E9B0 0027B8F0  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 8027E9B4 0027B8F4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8027E9B8 0027B8F8  48 00 01 40 */	b .L_8027EAF8
.L_8027E9BC:
/* 8027E9BC 0027B8FC  7F E4 FB 78 */	mr r4, r31
/* 8027E9C0 0027B900  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8027E9C4 0027B904  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027E9C8 0027B908  38 61 00 08 */	addi r3, r1, 8
/* 8027E9CC 0027B90C  C3 E5 03 34 */	lfs f31, 0x334(r5)
/* 8027E9D0 0027B910  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027E9D4 0027B914  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 8027E9D8 0027B918  7D 89 03 A6 */	mtctr r12
/* 8027E9DC 0027B91C  4E 80 04 21 */	bctrl 
/* 8027E9E0 0027B920  C0 21 00 08 */	lfs f1, 8(r1)
/* 8027E9E4 0027B924  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8027E9E8 0027B928  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8027E9EC 0027B92C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8027E9F0 0027B930  EC 3D 08 28 */	fsubs f1, f29, f1
/* 8027E9F4 0027B934  EC 5C 00 28 */	fsubs f2, f28, f0
/* 8027E9F8 0027B938  4B DB 67 11 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8027E9FC 0027B93C  48 19 31 D5 */	bl roundAng__Ff
/* 8027EA00 0027B940  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027EA04 0027B944  FF A0 08 90 */	fmr f29, f1
/* 8027EA08 0027B948  7F E3 FB 78 */	mr r3, r31
/* 8027EA0C 0027B94C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027EA10 0027B950  7D 89 03 A6 */	mtctr r12
/* 8027EA14 0027B954  4E 80 04 21 */	bctrl 
/* 8027EA18 0027B958  FC 40 08 90 */	fmr f2, f1
/* 8027EA1C 0027B95C  FC 20 E8 90 */	fmr f1, f29
/* 8027EA20 0027B960  48 19 31 DD */	bl angDist__Fff
/* 8027EA24 0027B964  EF C1 07 B2 */	fmuls f30, f1, f30
/* 8027EA28 0027B968  C0 02 D2 24 */	lfs f0, lbl_8051B584@sda21(r2)
/* 8027EA2C 0027B96C  C0 22 D2 20 */	lfs f1, lbl_8051B580@sda21(r2)
/* 8027EA30 0027B970  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8027EA34 0027B974  FC 40 F2 10 */	fabs f2, f30
/* 8027EA38 0027B978  EC 21 00 32 */	fmuls f1, f1, f0
/* 8027EA3C 0027B97C  FC 00 10 18 */	frsp f0, f2
/* 8027EA40 0027B980  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8027EA44 0027B984  40 81 00 1C */	ble .L_8027EA60
/* 8027EA48 0027B988  C0 02 D1 E0 */	lfs f0, lbl_8051B540@sda21(r2)
/* 8027EA4C 0027B98C  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8027EA50 0027B990  40 81 00 0C */	ble .L_8027EA5C
/* 8027EA54 0027B994  FF C0 08 90 */	fmr f30, f1
/* 8027EA58 0027B998  48 00 00 08 */	b .L_8027EA60
.L_8027EA5C:
/* 8027EA5C 0027B99C  FF C0 08 50 */	fneg f30, f1
.L_8027EA60:
/* 8027EA60 0027B9A0  7F E3 FB 78 */	mr r3, r31
/* 8027EA64 0027B9A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027EA68 0027B9A8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027EA6C 0027B9AC  7D 89 03 A6 */	mtctr r12
/* 8027EA70 0027B9B0  4E 80 04 21 */	bctrl 
/* 8027EA74 0027B9B4  EC 3E 08 2A */	fadds f1, f30, f1
/* 8027EA78 0027B9B8  48 19 31 59 */	bl roundAng__Ff
/* 8027EA7C 0027B9BC  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8027EA80 0027B9C0  7F E3 FB 78 */	mr r3, r31
/* 8027EA84 0027B9C4  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8027EA88 0027B9C8  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 8027EA8C 0027B9CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027EA90 0027B9D0  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8027EA94 0027B9D4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027EA98 0027B9D8  C3 C4 02 E4 */	lfs f30, 0x2e4(r4)
/* 8027EA9C 0027B9DC  7D 89 03 A6 */	mtctr r12
/* 8027EAA0 0027B9E0  4E 80 04 21 */	bctrl 
/* 8027EAA4 0027B9E4  4B E5 0D 79 */	bl sin
/* 8027EAA8 0027B9E8  7F E3 FB 78 */	mr r3, r31
/* 8027EAAC 0027B9EC  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8027EAB0 0027B9F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027EAB4 0027B9F4  FF A0 08 18 */	frsp f29, f1
/* 8027EAB8 0027B9F8  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 8027EABC 0027B9FC  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8027EAC0 0027BA00  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027EAC4 0027BA04  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8027EAC8 0027BA08  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 8027EACC 0027BA0C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8027EAD0 0027BA10  7D 89 03 A6 */	mtctr r12
/* 8027EAD4 0027BA14  4E 80 04 21 */	bctrl 
/* 8027EAD8 0027BA18  4B E5 07 DD */	bl cos
/* 8027EADC 0027BA1C  EC 1E 07 72 */	fmuls f0, f30, f29
/* 8027EAE0 0027BA20  38 60 00 00 */	li r3, 0
/* 8027EAE4 0027BA24  FC 20 08 18 */	frsp f1, f1
/* 8027EAE8 0027BA28  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8027EAEC 0027BA2C  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8027EAF0 0027BA30  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 8027EAF4 0027BA34  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_8027EAF8:
/* 8027EAF8 0027BA38  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8027EAFC 0027BA3C  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8027EB00 0027BA40  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8027EB04 0027BA44  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8027EB08 0027BA48  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 8027EB0C 0027BA4C  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8027EB10 0027BA50  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 8027EB14 0027BA54  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 8027EB18 0027BA58  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8027EB1C 0027BA5C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8027EB20 0027BA60  7C 08 03 A6 */	mtlr r0
/* 8027EB24 0027BA64  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8027EB28 0027BA68  4E 80 00 20 */	blr 
.endfn moveBridgeSide__Q34Game5Armor3ObjFv

.fn moveBridgeCentre__Q34Game5Armor3ObjFv, global
/* 8027EB2C 0027BA6C  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8027EB30 0027BA70  7C 08 02 A6 */	mflr r0
/* 8027EB34 0027BA74  90 01 00 94 */	stw r0, 0x94(r1)
/* 8027EB38 0027BA78  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8027EB3C 0027BA7C  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8027EB40 0027BA80  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8027EB44 0027BA84  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8027EB48 0027BA88  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8027EB4C 0027BA8C  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 8027EB50 0027BA90  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 8027EB54 0027BA94  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 8027EB58 0027BA98  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8027EB5C 0027BA9C  7C 7F 1B 78 */	mr r31, r3
/* 8027EB60 0027BAA0  38 61 00 38 */	addi r3, r1, 0x38
/* 8027EB64 0027BAA4  80 9F 02 D8 */	lwz r4, 0x2d8(r31)
/* 8027EB68 0027BAA8  4B F7 03 CD */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 8027EB6C 0027BAAC  C3 A1 00 38 */	lfs f29, 0x38(r1)
/* 8027EB70 0027BAB0  38 61 00 2C */	addi r3, r1, 0x2c
/* 8027EB74 0027BAB4  C3 81 00 40 */	lfs f28, 0x40(r1)
/* 8027EB78 0027BAB8  80 9F 02 D8 */	lwz r4, 0x2d8(r31)
/* 8027EB7C 0027BABC  4B F7 05 61 */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 8027EB80 0027BAC0  C0 22 D2 28 */	lfs f1, lbl_8051B588@sda21(r2)
/* 8027EB84 0027BAC4  C0 1F 02 DC */	lfs f0, 0x2dc(r31)
/* 8027EB88 0027BAC8  C0 A1 00 34 */	lfs f5, 0x34(r1)
/* 8027EB8C 0027BACC  EC 61 00 32 */	fmuls f3, f1, f0
/* 8027EB90 0027BAD0  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 8027EB94 0027BAD4  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8027EB98 0027BAD8  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8027EB9C 0027BADC  EC A5 00 F2 */	fmuls f5, f5, f3
/* 8027EBA0 0027BAE0  C0 02 D2 18 */	lfs f0, lbl_8051B578@sda21(r2)
/* 8027EBA4 0027BAE4  EC 84 00 F2 */	fmuls f4, f4, f3
/* 8027EBA8 0027BAE8  EF 9C 28 2A */	fadds f28, f28, f5
/* 8027EBAC 0027BAEC  EF BD 20 2A */	fadds f29, f29, f4
/* 8027EBB0 0027BAF0  EC 21 E0 28 */	fsubs f1, f1, f28
/* 8027EBB4 0027BAF4  EC 42 E8 28 */	fsubs f2, f2, f29
/* 8027EBB8 0027BAF8  EC 21 00 72 */	fmuls f1, f1, f1
/* 8027EBBC 0027BAFC  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8027EBC0 0027BB00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027EBC4 0027BB04  40 80 00 80 */	bge .L_8027EC44
/* 8027EBC8 0027BB08  7F E3 FB 78 */	mr r3, r31
/* 8027EBCC 0027BB0C  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8027EBD0 0027BB10  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027EBD4 0027BB14  C0 22 D2 1C */	lfs f1, lbl_8051B57C@sda21(r2)
/* 8027EBD8 0027BB18  C0 04 02 E4 */	lfs f0, 0x2e4(r4)
/* 8027EBDC 0027BB1C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027EBE0 0027BB20  EF C1 00 32 */	fmuls f30, f1, f0
/* 8027EBE4 0027BB24  7D 89 03 A6 */	mtctr r12
/* 8027EBE8 0027BB28  4E 80 04 21 */	bctrl 
/* 8027EBEC 0027BB2C  4B E5 0C 31 */	bl sin
/* 8027EBF0 0027BB30  7F E3 FB 78 */	mr r3, r31
/* 8027EBF4 0027BB34  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8027EBF8 0027BB38  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027EBFC 0027BB3C  FF A0 08 18 */	frsp f29, f1
/* 8027EC00 0027BB40  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 8027EC04 0027BB44  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8027EC08 0027BB48  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027EC0C 0027BB4C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8027EC10 0027BB50  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 8027EC14 0027BB54  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8027EC18 0027BB58  7D 89 03 A6 */	mtctr r12
/* 8027EC1C 0027BB5C  4E 80 04 21 */	bctrl 
/* 8027EC20 0027BB60  4B E5 06 95 */	bl cos
/* 8027EC24 0027BB64  EC 1E 07 72 */	fmuls f0, f30, f29
/* 8027EC28 0027BB68  38 60 00 01 */	li r3, 1
/* 8027EC2C 0027BB6C  FC 20 08 18 */	frsp f1, f1
/* 8027EC30 0027BB70  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8027EC34 0027BB74  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8027EC38 0027BB78  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 8027EC3C 0027BB7C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8027EC40 0027BB80  48 00 01 40 */	b .L_8027ED80
.L_8027EC44:
/* 8027EC44 0027BB84  7F E4 FB 78 */	mr r4, r31
/* 8027EC48 0027BB88  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8027EC4C 0027BB8C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027EC50 0027BB90  38 61 00 08 */	addi r3, r1, 8
/* 8027EC54 0027BB94  C3 E5 03 34 */	lfs f31, 0x334(r5)
/* 8027EC58 0027BB98  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027EC5C 0027BB9C  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 8027EC60 0027BBA0  7D 89 03 A6 */	mtctr r12
/* 8027EC64 0027BBA4  4E 80 04 21 */	bctrl 
/* 8027EC68 0027BBA8  C0 21 00 08 */	lfs f1, 8(r1)
/* 8027EC6C 0027BBAC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8027EC70 0027BBB0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8027EC74 0027BBB4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8027EC78 0027BBB8  EC 3D 08 28 */	fsubs f1, f29, f1
/* 8027EC7C 0027BBBC  EC 5C 00 28 */	fsubs f2, f28, f0
/* 8027EC80 0027BBC0  4B DB 64 89 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8027EC84 0027BBC4  48 19 2F 4D */	bl roundAng__Ff
/* 8027EC88 0027BBC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027EC8C 0027BBCC  FF A0 08 90 */	fmr f29, f1
/* 8027EC90 0027BBD0  7F E3 FB 78 */	mr r3, r31
/* 8027EC94 0027BBD4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027EC98 0027BBD8  7D 89 03 A6 */	mtctr r12
/* 8027EC9C 0027BBDC  4E 80 04 21 */	bctrl 
/* 8027ECA0 0027BBE0  FC 40 08 90 */	fmr f2, f1
/* 8027ECA4 0027BBE4  FC 20 E8 90 */	fmr f1, f29
/* 8027ECA8 0027BBE8  48 19 2F 55 */	bl angDist__Fff
/* 8027ECAC 0027BBEC  EF C1 07 B2 */	fmuls f30, f1, f30
/* 8027ECB0 0027BBF0  C0 02 D2 24 */	lfs f0, lbl_8051B584@sda21(r2)
/* 8027ECB4 0027BBF4  C0 22 D2 20 */	lfs f1, lbl_8051B580@sda21(r2)
/* 8027ECB8 0027BBF8  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8027ECBC 0027BBFC  FC 40 F2 10 */	fabs f2, f30
/* 8027ECC0 0027BC00  EC 21 00 32 */	fmuls f1, f1, f0
/* 8027ECC4 0027BC04  FC 00 10 18 */	frsp f0, f2
/* 8027ECC8 0027BC08  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8027ECCC 0027BC0C  40 81 00 1C */	ble .L_8027ECE8
/* 8027ECD0 0027BC10  C0 02 D1 E0 */	lfs f0, lbl_8051B540@sda21(r2)
/* 8027ECD4 0027BC14  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8027ECD8 0027BC18  40 81 00 0C */	ble .L_8027ECE4
/* 8027ECDC 0027BC1C  FF C0 08 90 */	fmr f30, f1
/* 8027ECE0 0027BC20  48 00 00 08 */	b .L_8027ECE8
.L_8027ECE4:
/* 8027ECE4 0027BC24  FF C0 08 50 */	fneg f30, f1
.L_8027ECE8:
/* 8027ECE8 0027BC28  7F E3 FB 78 */	mr r3, r31
/* 8027ECEC 0027BC2C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027ECF0 0027BC30  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027ECF4 0027BC34  7D 89 03 A6 */	mtctr r12
/* 8027ECF8 0027BC38  4E 80 04 21 */	bctrl 
/* 8027ECFC 0027BC3C  EC 3E 08 2A */	fadds f1, f30, f1
/* 8027ED00 0027BC40  48 19 2E D1 */	bl roundAng__Ff
/* 8027ED04 0027BC44  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8027ED08 0027BC48  7F E3 FB 78 */	mr r3, r31
/* 8027ED0C 0027BC4C  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8027ED10 0027BC50  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 8027ED14 0027BC54  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027ED18 0027BC58  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8027ED1C 0027BC5C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027ED20 0027BC60  C3 C4 02 E4 */	lfs f30, 0x2e4(r4)
/* 8027ED24 0027BC64  7D 89 03 A6 */	mtctr r12
/* 8027ED28 0027BC68  4E 80 04 21 */	bctrl 
/* 8027ED2C 0027BC6C  4B E5 0A F1 */	bl sin
/* 8027ED30 0027BC70  7F E3 FB 78 */	mr r3, r31
/* 8027ED34 0027BC74  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8027ED38 0027BC78  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027ED3C 0027BC7C  FF A0 08 18 */	frsp f29, f1
/* 8027ED40 0027BC80  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 8027ED44 0027BC84  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8027ED48 0027BC88  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027ED4C 0027BC8C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8027ED50 0027BC90  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 8027ED54 0027BC94  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8027ED58 0027BC98  7D 89 03 A6 */	mtctr r12
/* 8027ED5C 0027BC9C  4E 80 04 21 */	bctrl 
/* 8027ED60 0027BCA0  4B E5 05 55 */	bl cos
/* 8027ED64 0027BCA4  EC 1E 07 72 */	fmuls f0, f30, f29
/* 8027ED68 0027BCA8  38 60 00 00 */	li r3, 0
/* 8027ED6C 0027BCAC  FC 20 08 18 */	frsp f1, f1
/* 8027ED70 0027BCB0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8027ED74 0027BCB4  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8027ED78 0027BCB8  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 8027ED7C 0027BCBC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_8027ED80:
/* 8027ED80 0027BCC0  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 8027ED84 0027BCC4  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8027ED88 0027BCC8  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 8027ED8C 0027BCCC  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8027ED90 0027BCD0  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 8027ED94 0027BCD4  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 8027ED98 0027BCD8  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 8027ED9C 0027BCDC  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 8027EDA0 0027BCE0  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8027EDA4 0027BCE4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8027EDA8 0027BCE8  7C 08 03 A6 */	mtlr r0
/* 8027EDAC 0027BCEC  38 21 00 90 */	addi r1, r1, 0x90
/* 8027EDB0 0027BCF0  4E 80 00 20 */	blr 
.endfn moveBridgeCentre__Q34Game5Armor3ObjFv

.fn moveBridgeTop__Q34Game5Armor3ObjFv, global
/* 8027EDB4 0027BCF4  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8027EDB8 0027BCF8  7C 08 02 A6 */	mflr r0
/* 8027EDBC 0027BCFC  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8027EDC0 0027BD00  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8027EDC4 0027BD04  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 8027EDC8 0027BD08  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 8027EDCC 0027BD0C  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 8027EDD0 0027BD10  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 8027EDD4 0027BD14  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 8027EDD8 0027BD18  DB 81 00 80 */	stfd f28, 0x80(r1)
/* 8027EDDC 0027BD1C  F3 81 00 88 */	psq_st f28, 136(r1), 0, qr0
/* 8027EDE0 0027BD20  DB 61 00 70 */	stfd f27, 0x70(r1)
/* 8027EDE4 0027BD24  F3 61 00 78 */	psq_st f27, 120(r1), 0, qr0
/* 8027EDE8 0027BD28  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8027EDEC 0027BD2C  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8027EDF0 0027BD30  7C 7E 1B 78 */	mr r30, r3
/* 8027EDF4 0027BD34  38 61 00 50 */	addi r3, r1, 0x50
/* 8027EDF8 0027BD38  80 9E 02 D8 */	lwz r4, 0x2d8(r30)
/* 8027EDFC 0027BD3C  80 A4 02 18 */	lwz r5, 0x218(r4)
/* 8027EE00 0027BD40  3B E5 FF FF */	addi r31, r5, -1
/* 8027EE04 0027BD44  7F E5 FB 78 */	mr r5, r31
/* 8027EE08 0027BD48  4B F7 00 45 */	bl getStagePos__Q34Game10ItemBridge4ItemFi
/* 8027EE0C 0027BD4C  C3 E1 00 50 */	lfs f31, 0x50(r1)
/* 8027EE10 0027BD50  38 61 00 44 */	addi r3, r1, 0x44
/* 8027EE14 0027BD54  C3 C1 00 58 */	lfs f30, 0x58(r1)
/* 8027EE18 0027BD58  80 9E 02 D8 */	lwz r4, 0x2d8(r30)
/* 8027EE1C 0027BD5C  4B F7 02 C1 */	bl getBridgeXVec__Q34Game10ItemBridge4ItemFv
/* 8027EE20 0027BD60  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 8027EE24 0027BD64  2C 1F 00 00 */	cmpwi r31, 0
/* 8027EE28 0027BD68  C0 1E 02 DC */	lfs f0, 0x2dc(r30)
/* 8027EE2C 0027BD6C  C0 41 00 4C */	lfs f2, 0x4c(r1)
/* 8027EE30 0027BD70  EC 21 00 32 */	fmuls f1, f1, f0
/* 8027EE34 0027BD74  EC 42 00 32 */	fmuls f2, f2, f0
/* 8027EE38 0027BD78  EF FF 08 2A */	fadds f31, f31, f1
/* 8027EE3C 0027BD7C  EF DE 10 2A */	fadds f30, f30, f2
/* 8027EE40 0027BD80  40 81 00 30 */	ble .L_8027EE70
/* 8027EE44 0027BD84  80 9E 02 D8 */	lwz r4, 0x2d8(r30)
/* 8027EE48 0027BD88  38 61 00 38 */	addi r3, r1, 0x38
/* 8027EE4C 0027BD8C  4B F7 01 ED */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 8027EE50 0027BD90  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 8027EE54 0027BD94  C0 02 D2 14 */	lfs f0, lbl_8051B574@sda21(r2)
/* 8027EE58 0027BD98  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 8027EE5C 0027BD9C  EC 21 00 32 */	fmuls f1, f1, f0
/* 8027EE60 0027BDA0  EC 42 00 32 */	fmuls f2, f2, f0
/* 8027EE64 0027BDA4  EF FF 08 2A */	fadds f31, f31, f1
/* 8027EE68 0027BDA8  EF DE 10 2A */	fadds f30, f30, f2
/* 8027EE6C 0027BDAC  48 00 00 2C */	b .L_8027EE98
.L_8027EE70:
/* 8027EE70 0027BDB0  80 9E 02 D8 */	lwz r4, 0x2d8(r30)
/* 8027EE74 0027BDB4  38 61 00 2C */	addi r3, r1, 0x2c
/* 8027EE78 0027BDB8  4B F7 01 C1 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 8027EE7C 0027BDBC  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 8027EE80 0027BDC0  C0 02 D2 2C */	lfs f0, lbl_8051B58C@sda21(r2)
/* 8027EE84 0027BDC4  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 8027EE88 0027BDC8  EC 21 00 32 */	fmuls f1, f1, f0
/* 8027EE8C 0027BDCC  EC 42 00 32 */	fmuls f2, f2, f0
/* 8027EE90 0027BDD0  EF FF 08 2A */	fadds f31, f31, f1
/* 8027EE94 0027BDD4  EF DE 10 2A */	fadds f30, f30, f2
.L_8027EE98:
/* 8027EE98 0027BDD8  7F C4 F3 78 */	mr r4, r30
/* 8027EE9C 0027BDDC  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 8027EEA0 0027BDE0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027EEA4 0027BDE4  38 61 00 08 */	addi r3, r1, 8
/* 8027EEA8 0027BDE8  C3 85 03 34 */	lfs f28, 0x334(r5)
/* 8027EEAC 0027BDEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027EEB0 0027BDF0  C3 A5 03 0C */	lfs f29, 0x30c(r5)
/* 8027EEB4 0027BDF4  7D 89 03 A6 */	mtctr r12
/* 8027EEB8 0027BDF8  4E 80 04 21 */	bctrl 
/* 8027EEBC 0027BDFC  C0 21 00 08 */	lfs f1, 8(r1)
/* 8027EEC0 0027BE00  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8027EEC4 0027BE04  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8027EEC8 0027BE08  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8027EECC 0027BE0C  EC 3F 08 28 */	fsubs f1, f31, f1
/* 8027EED0 0027BE10  EC 5E 00 28 */	fsubs f2, f30, f0
/* 8027EED4 0027BE14  4B DB 62 35 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8027EED8 0027BE18  48 19 2C F9 */	bl roundAng__Ff
/* 8027EEDC 0027BE1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027EEE0 0027BE20  FF 60 08 90 */	fmr f27, f1
/* 8027EEE4 0027BE24  7F C3 F3 78 */	mr r3, r30
/* 8027EEE8 0027BE28  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027EEEC 0027BE2C  7D 89 03 A6 */	mtctr r12
/* 8027EEF0 0027BE30  4E 80 04 21 */	bctrl 
/* 8027EEF4 0027BE34  FC 40 08 90 */	fmr f2, f1
/* 8027EEF8 0027BE38  FC 20 D8 90 */	fmr f1, f27
/* 8027EEFC 0027BE3C  48 19 2D 01 */	bl angDist__Fff
/* 8027EF00 0027BE40  EF A1 07 72 */	fmuls f29, f1, f29
/* 8027EF04 0027BE44  C0 02 D2 24 */	lfs f0, lbl_8051B584@sda21(r2)
/* 8027EF08 0027BE48  C0 22 D2 20 */	lfs f1, lbl_8051B580@sda21(r2)
/* 8027EF0C 0027BE4C  EC 00 07 32 */	fmuls f0, f0, f28
/* 8027EF10 0027BE50  FC 40 EA 10 */	fabs f2, f29
/* 8027EF14 0027BE54  EC 21 00 32 */	fmuls f1, f1, f0
/* 8027EF18 0027BE58  FC 00 10 18 */	frsp f0, f2
/* 8027EF1C 0027BE5C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8027EF20 0027BE60  40 81 00 1C */	ble .L_8027EF3C
/* 8027EF24 0027BE64  C0 02 D1 E0 */	lfs f0, lbl_8051B540@sda21(r2)
/* 8027EF28 0027BE68  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8027EF2C 0027BE6C  40 81 00 0C */	ble .L_8027EF38
/* 8027EF30 0027BE70  FF A0 08 90 */	fmr f29, f1
/* 8027EF34 0027BE74  48 00 00 08 */	b .L_8027EF3C
.L_8027EF38:
/* 8027EF38 0027BE78  FF A0 08 50 */	fneg f29, f1
.L_8027EF3C:
/* 8027EF3C 0027BE7C  7F C3 F3 78 */	mr r3, r30
/* 8027EF40 0027BE80  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027EF44 0027BE84  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027EF48 0027BE88  7D 89 03 A6 */	mtctr r12
/* 8027EF4C 0027BE8C  4E 80 04 21 */	bctrl 
/* 8027EF50 0027BE90  EC 3D 08 2A */	fadds f1, f29, f1
/* 8027EF54 0027BE94  48 19 2C 7D */	bl roundAng__Ff
/* 8027EF58 0027BE98  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
/* 8027EF5C 0027BE9C  C0 02 D1 E4 */	lfs f0, lbl_8051B544@sda21(r2)
/* 8027EF60 0027BEA0  C0 3E 01 FC */	lfs f1, 0x1fc(r30)
/* 8027EF64 0027BEA4  D0 3E 01 A8 */	stfs f1, 0x1a8(r30)
/* 8027EF68 0027BEA8  C0 3E 01 94 */	lfs f1, 0x194(r30)
/* 8027EF6C 0027BEAC  C0 5E 01 8C */	lfs f2, 0x18c(r30)
/* 8027EF70 0027BEB0  EC 21 F0 28 */	fsubs f1, f1, f30
/* 8027EF74 0027BEB4  EC 42 F8 28 */	fsubs f2, f2, f31
/* 8027EF78 0027BEB8  EC 21 00 72 */	fmuls f1, f1, f1
/* 8027EF7C 0027BEBC  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8027EF80 0027BEC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027EF84 0027BEC4  40 80 00 1C */	bge .L_8027EFA0
/* 8027EF88 0027BEC8  C0 02 D1 E0 */	lfs f0, lbl_8051B540@sda21(r2)
/* 8027EF8C 0027BECC  38 60 00 01 */	li r3, 1
/* 8027EF90 0027BED0  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 8027EF94 0027BED4  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 8027EF98 0027BED8  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 8027EF9C 0027BEDC  48 00 00 F4 */	b .L_8027F090
.L_8027EFA0:
/* 8027EFA0 0027BEE0  C0 02 D2 30 */	lfs f0, lbl_8051B590@sda21(r2)
/* 8027EFA4 0027BEE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027EFA8 0027BEE8  40 80 00 78 */	bge .L_8027F020
/* 8027EFAC 0027BEEC  7F C3 F3 78 */	mr r3, r30
/* 8027EFB0 0027BEF0  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 8027EFB4 0027BEF4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027EFB8 0027BEF8  C3 84 02 E4 */	lfs f28, 0x2e4(r4)
/* 8027EFBC 0027BEFC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027EFC0 0027BF00  7D 89 03 A6 */	mtctr r12
/* 8027EFC4 0027BF04  4E 80 04 21 */	bctrl 
/* 8027EFC8 0027BF08  4B E5 08 55 */	bl sin
/* 8027EFCC 0027BF0C  7F C3 F3 78 */	mr r3, r30
/* 8027EFD0 0027BF10  C0 5E 01 D4 */	lfs f2, 0x1d4(r30)
/* 8027EFD4 0027BF14  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027EFD8 0027BF18  FF 60 08 18 */	frsp f27, f1
/* 8027EFDC 0027BF1C  C3 DE 01 D8 */	lfs f30, 0x1d8(r30)
/* 8027EFE0 0027BF20  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 8027EFE4 0027BF24  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027EFE8 0027BF28  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8027EFEC 0027BF2C  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 8027EFF0 0027BF30  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8027EFF4 0027BF34  7D 89 03 A6 */	mtctr r12
/* 8027EFF8 0027BF38  4E 80 04 21 */	bctrl 
/* 8027EFFC 0027BF3C  4B E5 02 B9 */	bl cos
/* 8027F000 0027BF40  EC 1C 06 F2 */	fmuls f0, f28, f27
/* 8027F004 0027BF44  38 60 00 01 */	li r3, 1
/* 8027F008 0027BF48  FC 20 08 18 */	frsp f1, f1
/* 8027F00C 0027BF4C  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 8027F010 0027BF50  EC 1C 00 72 */	fmuls f0, f28, f1
/* 8027F014 0027BF54  D3 DE 01 D8 */	stfs f30, 0x1d8(r30)
/* 8027F018 0027BF58  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 8027F01C 0027BF5C  48 00 00 74 */	b .L_8027F090
.L_8027F020:
/* 8027F020 0027BF60  7F C3 F3 78 */	mr r3, r30
/* 8027F024 0027BF64  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 8027F028 0027BF68  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027F02C 0027BF6C  C3 84 02 E4 */	lfs f28, 0x2e4(r4)
/* 8027F030 0027BF70  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027F034 0027BF74  7D 89 03 A6 */	mtctr r12
/* 8027F038 0027BF78  4E 80 04 21 */	bctrl 
/* 8027F03C 0027BF7C  4B E5 07 E1 */	bl sin
/* 8027F040 0027BF80  7F C3 F3 78 */	mr r3, r30
/* 8027F044 0027BF84  C0 5E 01 D4 */	lfs f2, 0x1d4(r30)
/* 8027F048 0027BF88  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027F04C 0027BF8C  FF 60 08 18 */	frsp f27, f1
/* 8027F050 0027BF90  C3 DE 01 D8 */	lfs f30, 0x1d8(r30)
/* 8027F054 0027BF94  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 8027F058 0027BF98  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027F05C 0027BF9C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8027F060 0027BFA0  D3 C1 00 18 */	stfs f30, 0x18(r1)
/* 8027F064 0027BFA4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8027F068 0027BFA8  7D 89 03 A6 */	mtctr r12
/* 8027F06C 0027BFAC  4E 80 04 21 */	bctrl 
/* 8027F070 0027BFB0  4B E5 02 45 */	bl cos
/* 8027F074 0027BFB4  EC 1C 06 F2 */	fmuls f0, f28, f27
/* 8027F078 0027BFB8  38 60 00 00 */	li r3, 0
/* 8027F07C 0027BFBC  FC 20 08 18 */	frsp f1, f1
/* 8027F080 0027BFC0  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 8027F084 0027BFC4  EC 1C 00 72 */	fmuls f0, f28, f1
/* 8027F088 0027BFC8  D3 DE 01 D8 */	stfs f30, 0x1d8(r30)
/* 8027F08C 0027BFCC  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
.L_8027F090:
/* 8027F090 0027BFD0  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 8027F094 0027BFD4  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 8027F098 0027BFD8  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 8027F09C 0027BFDC  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 8027F0A0 0027BFE0  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 8027F0A4 0027BFE4  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 8027F0A8 0027BFE8  E3 81 00 88 */	psq_l f28, 136(r1), 0, qr0
/* 8027F0AC 0027BFEC  CB 81 00 80 */	lfd f28, 0x80(r1)
/* 8027F0B0 0027BFF0  E3 61 00 78 */	psq_l f27, 120(r1), 0, qr0
/* 8027F0B4 0027BFF4  CB 61 00 70 */	lfd f27, 0x70(r1)
/* 8027F0B8 0027BFF8  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8027F0BC 0027BFFC  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8027F0C0 0027C000  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8027F0C4 0027C004  7C 08 03 A6 */	mtlr r0
/* 8027F0C8 0027C008  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8027F0CC 0027C00C  4E 80 00 20 */	blr 
.endfn moveBridgeTop__Q34Game5Armor3ObjFv

.fn breakTargetBridge__Q34Game5Armor3ObjFv, global
/* 8027F0D0 0027C010  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8027F0D4 0027C014  7C 08 02 A6 */	mflr r0
/* 8027F0D8 0027C018  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 8027F0DC 0027C01C  3C A0 80 4B */	lis r5, __vt__Q24Game19InteractBreakBridge@ha
/* 8027F0E0 0027C020  90 01 00 24 */	stw r0, 0x24(r1)
/* 8027F0E4 0027C024  38 C4 A3 00 */	addi r6, r4, __vt__Q24Game11Interaction@l
/* 8027F0E8 0027C028  38 05 74 9C */	addi r0, r5, __vt__Q24Game19InteractBreakBridge@l
/* 8027F0EC 0027C02C  38 81 00 08 */	addi r4, r1, 8
/* 8027F0F0 0027C030  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 8027F0F4 0027C034  C0 07 08 6C */	lfs f0, 0x86c(r7)
/* 8027F0F8 0027C038  90 C1 00 08 */	stw r6, 8(r1)
/* 8027F0FC 0027C03C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8027F100 0027C040  90 01 00 08 */	stw r0, 8(r1)
/* 8027F104 0027C044  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8027F108 0027C048  80 63 02 D8 */	lwz r3, 0x2d8(r3)
/* 8027F10C 0027C04C  81 83 00 00 */	lwz r12, 0(r3)
/* 8027F110 0027C050  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8027F114 0027C054  7D 89 03 A6 */	mtctr r12
/* 8027F118 0027C058  4E 80 04 21 */	bctrl 
/* 8027F11C 0027C05C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8027F120 0027C060  7C 08 03 A6 */	mtlr r0
/* 8027F124 0027C064  38 21 00 20 */	addi r1, r1, 0x20
/* 8027F128 0027C068  4E 80 00 20 */	blr 
.endfn breakTargetBridge__Q34Game5Armor3ObjFv

.fn createEffect__Q34Game5Armor3ObjFv, global
/* 8027F12C 0027C06C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027F130 0027C070  7C 08 02 A6 */	mflr r0
/* 8027F134 0027C074  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027F138 0027C078  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027F13C 0027C07C  7C 7F 1B 78 */	mr r31, r3
/* 8027F140 0027C080  38 60 00 14 */	li r3, 0x14
/* 8027F144 0027C084  4B DA 4D 61 */	bl __nw__FUl
/* 8027F148 0027C088  28 03 00 00 */	cmplwi r3, 0
/* 8027F14C 0027C08C  41 82 00 78 */	beq .L_8027F1C4
/* 8027F150 0027C090  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8027F154 0027C094  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8027F158 0027C098  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8027F15C 0027C09C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8027F160 0027C0A0  90 03 00 00 */	stw r0, 0(r3)
/* 8027F164 0027C0A4  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8027F168 0027C0A8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8027F16C 0027C0AC  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 8027F170 0027C0B0  90 03 00 04 */	stw r0, 4(r3)
/* 8027F174 0027C0B4  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 8027F178 0027C0B8  3C 80 80 4D */	lis r4, __vt__Q23efx12TYoroiAttack@ha
/* 8027F17C 0027C0BC  38 05 00 14 */	addi r0, r5, 0x14
/* 8027F180 0027C0C0  90 A3 00 00 */	stw r5, 0(r3)
/* 8027F184 0027C0C4  38 84 85 1C */	addi r4, r4, __vt__Q23efx12TYoroiAttack@l
/* 8027F188 0027C0C8  39 20 00 00 */	li r9, 0
/* 8027F18C 0027C0CC  39 00 02 B2 */	li r8, 0x2b2
/* 8027F190 0027C0D0  90 03 00 04 */	stw r0, 4(r3)
/* 8027F194 0027C0D4  38 C7 00 14 */	addi r6, r7, 0x14
/* 8027F198 0027C0D8  38 A0 01 EC */	li r5, 0x1ec
/* 8027F19C 0027C0DC  38 04 00 14 */	addi r0, r4, 0x14
/* 8027F1A0 0027C0E0  91 23 00 08 */	stw r9, 8(r3)
/* 8027F1A4 0027C0E4  B1 03 00 0C */	sth r8, 0xc(r3)
/* 8027F1A8 0027C0E8  99 23 00 0E */	stb r9, 0xe(r3)
/* 8027F1AC 0027C0EC  90 E3 00 00 */	stw r7, 0(r3)
/* 8027F1B0 0027C0F0  90 C3 00 04 */	stw r6, 4(r3)
/* 8027F1B4 0027C0F4  91 23 00 10 */	stw r9, 0x10(r3)
/* 8027F1B8 0027C0F8  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8027F1BC 0027C0FC  90 83 00 00 */	stw r4, 0(r3)
/* 8027F1C0 0027C100  90 03 00 04 */	stw r0, 4(r3)
.L_8027F1C4:
/* 8027F1C4 0027C104  90 7F 02 D4 */	stw r3, 0x2d4(r31)
/* 8027F1C8 0027C108  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027F1CC 0027C10C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027F1D0 0027C110  7C 08 03 A6 */	mtlr r0
/* 8027F1D4 0027C114  38 21 00 10 */	addi r1, r1, 0x10
/* 8027F1D8 0027C118  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game5Armor3ObjFv

.fn setupEffect__Q34Game5Armor3ObjFv, global
/* 8027F1DC 0027C11C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027F1E0 0027C120  7C 08 02 A6 */	mflr r0
/* 8027F1E4 0027C124  38 82 D1 F8 */	addi r4, r2, lbl_8051B558@sda21
/* 8027F1E8 0027C128  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027F1EC 0027C12C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027F1F0 0027C130  7C 7F 1B 78 */	mr r31, r3
/* 8027F1F4 0027C134  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8027F1F8 0027C138  48 1B FD ED */	bl getJoint__Q28SysShape5ModelFPc
/* 8027F1FC 0027C13C  48 1A A6 A5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8027F200 0027C140  80 9F 02 D4 */	lwz r4, 0x2d4(r31)
/* 8027F204 0027C144  90 64 00 10 */	stw r3, 0x10(r4)
/* 8027F208 0027C148  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027F20C 0027C14C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027F210 0027C150  7C 08 03 A6 */	mtlr r0
/* 8027F214 0027C154  38 21 00 10 */	addi r1, r1, 0x10
/* 8027F218 0027C158  4E 80 00 20 */	blr 
.endfn setupEffect__Q34Game5Armor3ObjFv

.fn createAttackEffect__Q34Game5Armor3ObjFv, global
/* 8027F21C 0027C15C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027F220 0027C160  7C 08 02 A6 */	mflr r0
/* 8027F224 0027C164  38 80 00 00 */	li r4, 0
/* 8027F228 0027C168  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027F22C 0027C16C  80 63 02 D4 */	lwz r3, 0x2d4(r3)
/* 8027F230 0027C170  81 83 00 00 */	lwz r12, 0(r3)
/* 8027F234 0027C174  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027F238 0027C178  7D 89 03 A6 */	mtctr r12
/* 8027F23C 0027C17C  4E 80 04 21 */	bctrl 
/* 8027F240 0027C180  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027F244 0027C184  7C 08 03 A6 */	mtlr r0
/* 8027F248 0027C188  38 21 00 10 */	addi r1, r1, 0x10
/* 8027F24C 0027C18C  4E 80 00 20 */	blr 
.endfn createAttackEffect__Q34Game5Armor3ObjFv

.fn createAppearEffect__Q34Game5Armor3ObjFv, global
/* 8027F250 0027C190  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8027F254 0027C194  7C 08 02 A6 */	mflr r0
/* 8027F258 0027C198  3C 80 80 48 */	lis r4, lbl_80487418@ha
/* 8027F25C 0027C19C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8027F260 0027C1A0  38 84 74 18 */	addi r4, r4, lbl_80487418@l
/* 8027F264 0027C1A4  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8027F268 0027C1A8  48 1B FD 7D */	bl getJoint__Q28SysShape5ModelFPc
/* 8027F26C 0027C1AC  48 1A A6 35 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8027F270 0027C1B0  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8027F274 0027C1B4  38 C0 00 00 */	li r6, 0
/* 8027F278 0027C1B8  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8027F27C 0027C1BC  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 8027F280 0027C1C0  90 01 00 08 */	stw r0, 8(r1)
/* 8027F284 0027C1C4  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 8027F288 0027C1C8  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 8027F28C 0027C1CC  3C 80 80 4D */	lis r4, __vt__Q23efx8TYoroiAp@ha
/* 8027F290 0027C1D0  90 01 00 08 */	stw r0, 8(r1)
/* 8027F294 0027C1D4  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 8027F298 0027C1D8  38 E0 01 EA */	li r7, 0x1ea
/* 8027F29C 0027C1DC  38 A0 01 EB */	li r5, 0x1eb
/* 8027F2A0 0027C1E0  90 01 00 08 */	stw r0, 8(r1)
/* 8027F2A4 0027C1E4  38 04 85 08 */	addi r0, r4, __vt__Q23efx8TYoroiAp@l
/* 8027F2A8 0027C1E8  38 80 00 00 */	li r4, 0
/* 8027F2AC 0027C1EC  90 61 00 18 */	stw r3, 0x18(r1)
/* 8027F2B0 0027C1F0  38 61 00 08 */	addi r3, r1, 8
/* 8027F2B4 0027C1F4  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 8027F2B8 0027C1F8  B0 A1 00 0E */	sth r5, 0xe(r1)
/* 8027F2BC 0027C1FC  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8027F2C0 0027C200  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8027F2C4 0027C204  90 01 00 08 */	stw r0, 8(r1)
/* 8027F2C8 0027C208  48 13 00 D1 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 8027F2CC 0027C20C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8027F2D0 0027C210  7C 08 03 A6 */	mtlr r0
/* 8027F2D4 0027C214  38 21 00 20 */	addi r1, r1, 0x20
/* 8027F2D8 0027C218  4E 80 00 20 */	blr 
.endfn createAppearEffect__Q34Game5Armor3ObjFv

.fn createDisAppearEffect__Q34Game5Armor3ObjFv, global
/* 8027F2DC 0027C21C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8027F2E0 0027C220  7C 08 02 A6 */	mflr r0
/* 8027F2E4 0027C224  3C 80 80 48 */	lis r4, lbl_80487418@ha
/* 8027F2E8 0027C228  90 01 00 24 */	stw r0, 0x24(r1)
/* 8027F2EC 0027C22C  38 84 74 18 */	addi r4, r4, lbl_80487418@l
/* 8027F2F0 0027C230  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8027F2F4 0027C234  48 1B FC F1 */	bl getJoint__Q28SysShape5ModelFPc
/* 8027F2F8 0027C238  48 1A A5 A9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8027F2FC 0027C23C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8027F300 0027C240  38 C0 00 00 */	li r6, 0
/* 8027F304 0027C244  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8027F308 0027C248  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 8027F30C 0027C24C  90 01 00 08 */	stw r0, 8(r1)
/* 8027F310 0027C250  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 8027F314 0027C254  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 8027F318 0027C258  3C 80 80 4D */	lis r4, __vt__Q23efx8TYoroiHd@ha
/* 8027F31C 0027C25C  90 01 00 08 */	stw r0, 8(r1)
/* 8027F320 0027C260  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 8027F324 0027C264  38 E0 01 EE */	li r7, 0x1ee
/* 8027F328 0027C268  38 A0 01 EF */	li r5, 0x1ef
/* 8027F32C 0027C26C  90 01 00 08 */	stw r0, 8(r1)
/* 8027F330 0027C270  38 04 84 F4 */	addi r0, r4, __vt__Q23efx8TYoroiHd@l
/* 8027F334 0027C274  38 80 00 00 */	li r4, 0
/* 8027F338 0027C278  90 61 00 18 */	stw r3, 0x18(r1)
/* 8027F33C 0027C27C  38 61 00 08 */	addi r3, r1, 8
/* 8027F340 0027C280  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 8027F344 0027C284  B0 A1 00 0E */	sth r5, 0xe(r1)
/* 8027F348 0027C288  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8027F34C 0027C28C  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8027F350 0027C290  90 01 00 08 */	stw r0, 8(r1)
/* 8027F354 0027C294  48 13 00 45 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 8027F358 0027C298  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8027F35C 0027C29C  7C 08 03 A6 */	mtlr r0
/* 8027F360 0027C2A0  38 21 00 20 */	addi r1, r1, 0x20
/* 8027F364 0027C2A4  4E 80 00 20 */	blr 
.endfn createDisAppearEffect__Q34Game5Armor3ObjFv

.fn createBridgeEffect__Q34Game5Armor3ObjFv, global
/* 8027F368 0027C2A8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8027F36C 0027C2AC  7C 08 02 A6 */	mflr r0
/* 8027F370 0027C2B0  38 82 D1 F8 */	addi r4, r2, lbl_8051B558@sda21
/* 8027F374 0027C2B4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8027F378 0027C2B8  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8027F37C 0027C2BC  48 1B FC 69 */	bl getJoint__Q28SysShape5ModelFPc
/* 8027F380 0027C2C0  48 1A A5 21 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8027F384 0027C2C4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8027F388 0027C2C8  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8027F38C 0027C2CC  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8027F390 0027C2D0  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 8027F394 0027C2D4  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8027F398 0027C2D8  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 8027F39C 0027C2DC  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 8027F3A0 0027C2E0  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 8027F3A4 0027C2E4  90 81 00 08 */	stw r4, 8(r1)
/* 8027F3A8 0027C2E8  3C 60 80 4D */	lis r3, __vt__Q23efx9TYoroiEat@ha
/* 8027F3AC 0027C2EC  38 85 A7 EC */	addi r4, r5, __vt__Q23efx3Arg@l
/* 8027F3B0 0027C2F0  38 C0 02 5F */	li r6, 0x25f
/* 8027F3B4 0027C2F4  38 A0 00 00 */	li r5, 0
/* 8027F3B8 0027C2F8  90 01 00 08 */	stw r0, 8(r1)
/* 8027F3BC 0027C2FC  38 03 84 E0 */	addi r0, r3, __vt__Q23efx9TYoroiEat@l
/* 8027F3C0 0027C300  38 61 00 08 */	addi r3, r1, 8
/* 8027F3C4 0027C304  90 81 00 14 */	stw r4, 0x14(r1)
/* 8027F3C8 0027C308  38 81 00 14 */	addi r4, r1, 0x14
/* 8027F3CC 0027C30C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8027F3D0 0027C310  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8027F3D4 0027C314  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8027F3D8 0027C318  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 8027F3DC 0027C31C  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8027F3E0 0027C320  90 01 00 08 */	stw r0, 8(r1)
/* 8027F3E4 0027C324  48 12 FB A1 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 8027F3E8 0027C328  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8027F3EC 0027C32C  7C 08 03 A6 */	mtlr r0
/* 8027F3F0 0027C330  38 21 00 30 */	addi r1, r1, 0x30
/* 8027F3F4 0027C334  4E 80 00 20 */	blr 
.endfn createBridgeEffect__Q34Game5Armor3ObjFv

.fn effectDrawOn__Q34Game5Armor3ObjFv, global
/* 8027F3F8 0027C338  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027F3FC 0027C33C  7C 08 02 A6 */	mflr r0
/* 8027F400 0027C340  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027F404 0027C344  80 63 02 D4 */	lwz r3, 0x2d4(r3)
/* 8027F408 0027C348  81 83 00 00 */	lwz r12, 0(r3)
/* 8027F40C 0027C34C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8027F410 0027C350  7D 89 03 A6 */	mtctr r12
/* 8027F414 0027C354  4E 80 04 21 */	bctrl 
/* 8027F418 0027C358  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027F41C 0027C35C  7C 08 03 A6 */	mtlr r0
/* 8027F420 0027C360  38 21 00 10 */	addi r1, r1, 0x10
/* 8027F424 0027C364  4E 80 00 20 */	blr 
.endfn effectDrawOn__Q34Game5Armor3ObjFv

.fn effectDrawOff__Q34Game5Armor3ObjFv, global
/* 8027F428 0027C368  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027F42C 0027C36C  7C 08 02 A6 */	mflr r0
/* 8027F430 0027C370  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027F434 0027C374  80 63 02 D4 */	lwz r3, 0x2d4(r3)
/* 8027F438 0027C378  81 83 00 00 */	lwz r12, 0(r3)
/* 8027F43C 0027C37C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8027F440 0027C380  7D 89 03 A6 */	mtctr r12
/* 8027F444 0027C384  4E 80 04 21 */	bctrl 
/* 8027F448 0027C388  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027F44C 0027C38C  7C 08 03 A6 */	mtlr r0
/* 8027F450 0027C390  38 21 00 10 */	addi r1, r1, 0x10
/* 8027F454 0027C394  4E 80 00 20 */	blr 
.endfn effectDrawOff__Q34Game5Armor3ObjFv

.fn __dt__Q23efx12TYoroiAttackFv, weak
/* 8027F458 0027C398  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027F45C 0027C39C  7C 08 02 A6 */	mflr r0
/* 8027F460 0027C3A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027F464 0027C3A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027F468 0027C3A8  7C 9F 23 78 */	mr r31, r4
/* 8027F46C 0027C3AC  93 C1 00 08 */	stw r30, 8(r1)
/* 8027F470 0027C3B0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8027F474 0027C3B4  41 82 00 64 */	beq .L_8027F4D8
/* 8027F478 0027C3B8  3C 60 80 4D */	lis r3, __vt__Q23efx12TYoroiAttack@ha
/* 8027F47C 0027C3BC  38 63 85 1C */	addi r3, r3, __vt__Q23efx12TYoroiAttack@l
/* 8027F480 0027C3C0  90 7E 00 00 */	stw r3, 0(r30)
/* 8027F484 0027C3C4  38 03 00 14 */	addi r0, r3, 0x14
/* 8027F488 0027C3C8  90 1E 00 04 */	stw r0, 4(r30)
/* 8027F48C 0027C3CC  41 82 00 3C */	beq .L_8027F4C8
/* 8027F490 0027C3D0  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 8027F494 0027C3D4  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 8027F498 0027C3D8  90 7E 00 00 */	stw r3, 0(r30)
/* 8027F49C 0027C3DC  38 03 00 14 */	addi r0, r3, 0x14
/* 8027F4A0 0027C3E0  90 1E 00 04 */	stw r0, 4(r30)
/* 8027F4A4 0027C3E4  41 82 00 24 */	beq .L_8027F4C8
/* 8027F4A8 0027C3E8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8027F4AC 0027C3EC  38 7E 00 04 */	addi r3, r30, 4
/* 8027F4B0 0027C3F0  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8027F4B4 0027C3F4  38 80 00 00 */	li r4, 0
/* 8027F4B8 0027C3F8  90 BE 00 00 */	stw r5, 0(r30)
/* 8027F4BC 0027C3FC  38 05 00 14 */	addi r0, r5, 0x14
/* 8027F4C0 0027C400  90 1E 00 04 */	stw r0, 4(r30)
/* 8027F4C4 0027C404  4B E1 07 D9 */	bl __dt__18JPAEmitterCallBackFv
.L_8027F4C8:
/* 8027F4C8 0027C408  7F E0 07 35 */	extsh. r0, r31
/* 8027F4CC 0027C40C  40 81 00 0C */	ble .L_8027F4D8
/* 8027F4D0 0027C410  7F C3 F3 78 */	mr r3, r30
/* 8027F4D4 0027C414  4B DA 4B E1 */	bl __dl__FPv
.L_8027F4D8:
/* 8027F4D8 0027C418  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027F4DC 0027C41C  7F C3 F3 78 */	mr r3, r30
/* 8027F4E0 0027C420  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027F4E4 0027C424  83 C1 00 08 */	lwz r30, 8(r1)
/* 8027F4E8 0027C428  7C 08 03 A6 */	mtlr r0
/* 8027F4EC 0027C42C  38 21 00 10 */	addi r1, r1, 0x10
/* 8027F4F0 0027C430  4E 80 00 20 */	blr 
.endfn __dt__Q23efx12TYoroiAttackFv

.fn getDownSmokeScale__Q34Game5Armor3ObjFv, weak
/* 8027F4F4 0027C434  C0 22 D2 34 */	lfs f1, lbl_8051B594@sda21(r2)
/* 8027F4F8 0027C438  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game5Armor3ObjFv

.fn getEnemyTypeID__Q34Game5Armor3ObjFv, weak
/* 8027F4FC 0027C43C  38 60 00 0F */	li r3, 0xf
/* 8027F500 0027C440  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game5Armor3ObjFv

.fn "@4@__dt__Q23efx12TYoroiAttackFv", weak
/* 8027F504 0027C444  38 63 FF FC */	addi r3, r3, -4
/* 8027F508 0027C448  4B FF FF 50 */	b __dt__Q23efx12TYoroiAttackFv
.endfn "@4@__dt__Q23efx12TYoroiAttackFv"
