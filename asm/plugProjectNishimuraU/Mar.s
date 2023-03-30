.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx9TFusenSui, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx9TFusenSuiFv"
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
	.4byte __dt__Q23efx9TFusenSuiFv
.endobj __vt__Q23efx9TFusenSui
.obj __vt__Q23efx9TFusenAir, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
.endobj __vt__Q23efx9TFusenAir
.obj __vt__Q23efx12TFusenAirhit, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "fade__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "startDemoDrawOff__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "endDemoDrawOn__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
.endobj __vt__Q23efx12TFusenAirhit
.obj __vt__Q23efx10TFusenDead, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
.endobj __vt__Q23efx10TFusenDead
.obj __vt__Q34Game3Mar3Obj, global
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
	.4byte onInit__Q34Game3Mar3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game3Mar3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game3Mar3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game3Mar3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game3Mar3ObjFv
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
	.4byte getShadowParam__Q34Game3Mar3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game3Mar3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game3Mar3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game3Mar3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game3Mar3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game3Mar3ObjFv
	.4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q34Game3Mar3ObjFv
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
	.4byte getEnemyTypeID__Q34Game3Mar3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q34Game3Mar3ObjFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q34Game3Mar3ObjFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q34Game3Mar3ObjFv
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
	.4byte doStartStoneState__Q34Game3Mar3ObjFv
	.4byte doFinishStoneState__Q34Game3Mar3ObjFv
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
	.4byte doStartWaitingBirthTypeDrop__Q34Game3Mar3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game3Mar3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game3Mar3ObjFv
	.4byte doStartMovie__Q34Game3Mar3ObjFv
	.4byte doEndMovie__Q34Game3Mar3ObjFv
	.4byte setFSM__Q34Game3Mar3ObjFPQ34Game3Mar3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@804@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@804@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@804@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@804@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@804@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@804@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game3Mar3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051B598, local
	.float 0.0
.endobj lbl_8051B598
.balign 4
.obj lbl_8051B59C, local
	.asciz "hana3"
.endobj lbl_8051B59C
.balign 4
.obj lbl_8051B5A4, local
	.float 30.0
.endobj lbl_8051B5A4
.balign 4
.obj lbl_8051B5A8, local
	.asciz "mune"
.endobj lbl_8051B5A8
.balign 4
.obj lbl_8051B5B0, local
	.float 1.0
.endobj lbl_8051B5B0
.obj lbl_8051B5B4, local
	.float 100.0
.endobj lbl_8051B5B4
.obj lbl_8051B5B8, local
	.float 50.0
.endobj lbl_8051B5B8
.obj lbl_8051B5BC, local
	.float -10.0
.endobj lbl_8051B5BC
.obj lbl_8051B5C0, local
	.float 500.0
.endobj lbl_8051B5C0
.balign 4
.obj lbl_8051B5C4, local
	.asciz "head"
.endobj lbl_8051B5C4
.balign 4
.obj lbl_8051B5CC, local
	.float -325.9493
.endobj lbl_8051B5CC
.obj lbl_8051B5D0, local
	.float 325.9493
.endobj lbl_8051B5D0
.obj lbl_8051B5D4, local
	.float 32768.0
.endobj lbl_8051B5D4
.obj lbl_8051B5D8, local # pi
	.float 3.1415927
.endobj lbl_8051B5D8
.obj lbl_8051B5DC, local # pi/2
	.float 1.5707964
.endobj lbl_8051B5DC
.balign 8
.obj lbl_8051B5E0, local
	.8byte 0x4330000080000000
.endobj lbl_8051B5E0
.obj lbl_8051B5E8, local
	.float 10.0
.endobj lbl_8051B5E8
.obj lbl_8051B5EC, local
	.float 40.0
.endobj lbl_8051B5EC
.obj lbl_8051B5F0, local
	.float 1.5
.endobj lbl_8051B5F0
.obj lbl_8051B5F4, local # tau
	.float 6.2831855
.endobj lbl_8051B5F4
.obj lbl_8051B5F8, local
	.float 0.0055555557
.endobj lbl_8051B5F8
.obj lbl_8051B5FC, local
	.float 180.0
.endobj lbl_8051B5FC
.obj lbl_8051B600, local
	.float 12800.0
.endobj lbl_8051B600
.obj lbl_8051B604, local
	.float -0.85
.endobj lbl_8051B604
.obj lbl_8051B608, local
	.float 25.0
.endobj lbl_8051B608
.obj lbl_8051B60C, local
	.float 3.0
.endobj lbl_8051B60C
.obj lbl_8051B610, local
	.float 15.0
.endobj lbl_8051B610
.obj lbl_8051B614, local
	.float 1.15
.endobj lbl_8051B614

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game3Mar3ObjFv, global
/* 8027F50C 0027C44C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027F510 0027C450  7C 08 02 A6 */	mflr r0
/* 8027F514 0027C454  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027F518 0027C458  7C 80 07 35 */	extsh. r0, r4
/* 8027F51C 0027C45C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027F520 0027C460  7C 7F 1B 78 */	mr r31, r3
/* 8027F524 0027C464  93 C1 00 08 */	stw r30, 8(r1)
/* 8027F528 0027C468  41 82 00 24 */	beq .L_8027F54C
/* 8027F52C 0027C46C  38 1F 03 24 */	addi r0, r31, 0x324
/* 8027F530 0027C470  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8027F534 0027C474  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8027F538 0027C478  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8027F53C 0027C47C  38 00 00 00 */	li r0, 0
/* 8027F540 0027C480  90 7F 03 24 */	stw r3, 0x324(r31)
/* 8027F544 0027C484  90 1F 03 28 */	stw r0, 0x328(r31)
/* 8027F548 0027C488  90 1F 03 2C */	stw r0, 0x32c(r31)
.L_8027F54C:
/* 8027F54C 0027C48C  7F E3 FB 78 */	mr r3, r31
/* 8027F550 0027C490  38 80 00 00 */	li r4, 0
/* 8027F554 0027C494  4B E8 1E 4D */	bl __ct__Q24Game9EnemyBaseFv
/* 8027F558 0027C498  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar3Obj@ha
/* 8027F55C 0027C49C  38 1F 03 24 */	addi r0, r31, 0x324
/* 8027F560 0027C4A0  38 A3 89 48 */	addi r5, r3, __vt__Q34Game3Mar3Obj@l
/* 8027F564 0027C4A4  38 60 00 2C */	li r3, 0x2c
/* 8027F568 0027C4A8  90 BF 00 00 */	stw r5, 0(r31)
/* 8027F56C 0027C4AC  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8027F570 0027C4B0  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 8027F574 0027C4B4  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8027F578 0027C4B8  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8027F57C 0027C4BC  90 A4 00 00 */	stw r5, 0(r4)
/* 8027F580 0027C4C0  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8027F584 0027C4C4  7C 04 00 50 */	subf r0, r4, r0
/* 8027F588 0027C4C8  90 04 00 0C */	stw r0, 0xc(r4)
/* 8027F58C 0027C4CC  4B DA 49 19 */	bl __nw__FUl
/* 8027F590 0027C4D0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8027F594 0027C4D4  41 82 00 44 */	beq .L_8027F5D8
/* 8027F598 0027C4D8  4B EA 83 DD */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8027F59C 0027C4DC  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar14ProperAnimator@ha
/* 8027F5A0 0027C4E0  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8027F5A4 0027C4E4  38 03 8C 78 */	addi r0, r3, __vt__Q34Game3Mar14ProperAnimator@l
/* 8027F5A8 0027C4E8  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8027F5AC 0027C4EC  90 1E 00 00 */	stw r0, 0(r30)
/* 8027F5B0 0027C4F0  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8027F5B4 0027C4F4  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8027F5B8 0027C4F8  38 00 00 00 */	li r0, 0
/* 8027F5BC 0027C4FC  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8027F5C0 0027C500  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8027F5C4 0027C504  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8027F5C8 0027C508  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8027F5CC 0027C50C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8027F5D0 0027C510  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8027F5D4 0027C514  90 1E 00 20 */	stw r0, 0x20(r30)
.L_8027F5D8:
/* 8027F5D8 0027C518  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8027F5DC 0027C51C  38 60 00 1C */	li r3, 0x1c
/* 8027F5E0 0027C520  4B DA 48 C5 */	bl __nw__FUl
/* 8027F5E4 0027C524  7C 64 1B 79 */	or. r4, r3, r3
/* 8027F5E8 0027C528  41 82 00 24 */	beq .L_8027F60C
/* 8027F5EC 0027C52C  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8027F5F0 0027C530  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar3FSM@ha
/* 8027F5F4 0027C534  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8027F5F8 0027C538  38 A0 FF FF */	li r5, -1
/* 8027F5FC 0027C53C  90 04 00 00 */	stw r0, 0(r4)
/* 8027F600 0027C540  38 03 8F 64 */	addi r0, r3, __vt__Q34Game3Mar3FSM@l
/* 8027F604 0027C544  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8027F608 0027C548  90 04 00 00 */	stw r0, 0(r4)
.L_8027F60C:
/* 8027F60C 0027C54C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027F610 0027C550  7F E3 FB 78 */	mr r3, r31
/* 8027F614 0027C554  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8027F618 0027C558  7D 89 03 A6 */	mtctr r12
/* 8027F61C 0027C55C  4E 80 04 21 */	bctrl 
/* 8027F620 0027C560  7F E3 FB 78 */	mr r3, r31
/* 8027F624 0027C564  48 00 21 CD */	bl createEffect__Q34Game3Mar3ObjFv
/* 8027F628 0027C568  38 60 00 28 */	li r3, 0x28
/* 8027F62C 0027C56C  4B DA 49 81 */	bl __nwa__FUl
/* 8027F630 0027C570  3C 80 80 16 */	lis r4, __ct__Q23Sys15MatLoopAnimatorFv@ha
/* 8027F634 0027C574  38 A0 00 00 */	li r5, 0
/* 8027F638 0027C578  38 84 38 EC */	addi r4, r4, __ct__Q23Sys15MatLoopAnimatorFv@l
/* 8027F63C 0027C57C  38 C0 00 0C */	li r6, 0xc
/* 8027F640 0027C580  38 E0 00 02 */	li r7, 2
/* 8027F644 0027C584  4B E4 23 AD */	bl __construct_new_array
/* 8027F648 0027C588  90 7F 03 20 */	stw r3, 0x320(r31)
/* 8027F64C 0027C58C  7F E3 FB 78 */	mr r3, r31
/* 8027F650 0027C590  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027F654 0027C594  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027F658 0027C598  83 C1 00 08 */	lwz r30, 8(r1)
/* 8027F65C 0027C59C  7C 08 03 A6 */	mtlr r0
/* 8027F660 0027C5A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8027F664 0027C5A4  4E 80 00 20 */	blr 
.endfn __ct__Q34Game3Mar3ObjFv

.fn setInitialSetting__Q34Game3Mar3ObjFPQ24Game21EnemyInitialParamBase, global
/* 8027F668 0027C5A8  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game3Mar3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game3Mar3ObjFPQ24Game15CreatureInitArg, global
/* 8027F66C 0027C5AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027F670 0027C5B0  7C 08 02 A6 */	mflr r0
/* 8027F674 0027C5B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027F678 0027C5B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027F67C 0027C5BC  7C 7F 1B 78 */	mr r31, r3
/* 8027F680 0027C5C0  4B E8 23 D9 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8027F684 0027C5C4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8027F688 0027C5C8  7F E3 FB 78 */	mr r3, r31
/* 8027F68C 0027C5CC  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 8027F690 0027C5D0  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 8027F694 0027C5D4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8027F698 0027C5D8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8027F69C 0027C5DC  60 00 00 04 */	ori r0, r0, 4
/* 8027F6A0 0027C5E0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8027F6A4 0027C5E4  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 8027F6A8 0027C5E8  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8027F6AC 0027C5EC  48 00 08 E5 */	bl resetShadowOffset__Q34Game3Mar3ObjFv
/* 8027F6B0 0027C5F0  7F E3 FB 78 */	mr r3, r31
/* 8027F6B4 0027C5F4  48 00 09 45 */	bl resetShadowRadius__Q34Game3Mar3ObjFv
/* 8027F6B8 0027C5F8  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 8027F6BC 0027C5FC  38 00 00 00 */	li r0, 0
/* 8027F6C0 0027C600  38 82 D2 3C */	addi r4, r2, lbl_8051B59C@sda21
/* 8027F6C4 0027C604  D0 1F 03 0C */	stfs f0, 0x30c(r31)
/* 8027F6C8 0027C608  98 1F 03 08 */	stb r0, 0x308(r31)
/* 8027F6CC 0027C60C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8027F6D0 0027C610  48 1B F9 15 */	bl getJoint__Q28SysShape5ModelFPc
/* 8027F6D4 0027C614  48 1A A1 CD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8027F6D8 0027C618  90 7F 02 DC */	stw r3, 0x2dc(r31)
/* 8027F6DC 0027C61C  7F E3 FB 78 */	mr r3, r31
/* 8027F6E0 0027C620  48 00 22 61 */	bl setupEffect__Q34Game3Mar3ObjFv
/* 8027F6E4 0027C624  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 8027F6E8 0027C628  7F E4 FB 78 */	mr r4, r31
/* 8027F6EC 0027C62C  38 A0 00 01 */	li r5, 1
/* 8027F6F0 0027C630  38 C0 00 00 */	li r6, 0
/* 8027F6F4 0027C634  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 8027F6F8 0027C638  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8027F6FC 0027C63C  81 83 00 00 */	lwz r12, 0(r3)
/* 8027F700 0027C640  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8027F704 0027C644  7D 89 03 A6 */	mtctr r12
/* 8027F708 0027C648  4E 80 04 21 */	bctrl 
/* 8027F70C 0027C64C  80 7F 03 20 */	lwz r3, 0x320(r31)
/* 8027F710 0027C650  80 9F 01 80 */	lwz r4, 0x180(r31)
/* 8027F714 0027C654  81 83 00 00 */	lwz r12, 0(r3)
/* 8027F718 0027C658  80 84 00 44 */	lwz r4, 0x44(r4)
/* 8027F71C 0027C65C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027F720 0027C660  7D 89 03 A6 */	mtctr r12
/* 8027F724 0027C664  4E 80 04 21 */	bctrl 
/* 8027F728 0027C668  80 7F 03 20 */	lwz r3, 0x320(r31)
/* 8027F72C 0027C66C  85 83 00 0C */	lwzu r12, 0xc(r3)
/* 8027F730 0027C670  80 9F 01 80 */	lwz r4, 0x180(r31)
/* 8027F734 0027C674  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027F738 0027C678  80 84 00 48 */	lwz r4, 0x48(r4)
/* 8027F73C 0027C67C  7D 89 03 A6 */	mtctr r12
/* 8027F740 0027C680  4E 80 04 21 */	bctrl 
/* 8027F744 0027C684  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027F748 0027C688  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027F74C 0027C68C  7C 08 03 A6 */	mtlr r0
/* 8027F750 0027C690  38 21 00 10 */	addi r1, r1, 0x10
/* 8027F754 0027C694  4E 80 00 20 */	blr 
.endfn onInit__Q34Game3Mar3ObjFPQ24Game15CreatureInitArg

.fn onKill__Q34Game3Mar3ObjFPQ24Game15CreatureKillArg, global
/* 8027F758 0027C698  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027F75C 0027C69C  7C 08 02 A6 */	mflr r0
/* 8027F760 0027C6A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027F764 0027C6A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027F768 0027C6A8  7C 9F 23 78 */	mr r31, r4
/* 8027F76C 0027C6AC  93 C1 00 08 */	stw r30, 8(r1)
/* 8027F770 0027C6B0  7C 7E 1B 78 */	mr r30, r3
/* 8027F774 0027C6B4  48 00 23 59 */	bl finishWindEffect__Q34Game3Mar3ObjFv
/* 8027F778 0027C6B8  7F C3 F3 78 */	mr r3, r30
/* 8027F77C 0027C6BC  7F E4 FB 78 */	mr r4, r31
/* 8027F780 0027C6C0  4B E8 27 69 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 8027F784 0027C6C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027F788 0027C6C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027F78C 0027C6CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8027F790 0027C6D0  7C 08 03 A6 */	mtlr r0
/* 8027F794 0027C6D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8027F798 0027C6D8  4E 80 00 20 */	blr 
.endfn onKill__Q34Game3Mar3ObjFPQ24Game15CreatureKillArg

.fn doUpdate__Q34Game3Mar3ObjFv, global
/* 8027F79C 0027C6DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027F7A0 0027C6E0  7C 08 02 A6 */	mflr r0
/* 8027F7A4 0027C6E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027F7A8 0027C6E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027F7AC 0027C6EC  7C 7F 1B 78 */	mr r31, r3
/* 8027F7B0 0027C6F0  7F E4 FB 78 */	mr r4, r31
/* 8027F7B4 0027C6F4  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8027F7B8 0027C6F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8027F7BC 0027C6FC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8027F7C0 0027C700  7D 89 03 A6 */	mtctr r12
/* 8027F7C4 0027C704  4E 80 04 21 */	bctrl 
/* 8027F7C8 0027C708  7F E3 FB 78 */	mr r3, r31
/* 8027F7CC 0027C70C  48 00 08 69 */	bl updateFallTimer__Q34Game3Mar3ObjFv
/* 8027F7D0 0027C710  7F E3 FB 78 */	mr r3, r31
/* 8027F7D4 0027C714  48 00 13 95 */	bl updateEmit__Q34Game3Mar3ObjFv
/* 8027F7D8 0027C718  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027F7DC 0027C71C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027F7E0 0027C720  7C 08 03 A6 */	mtlr r0
/* 8027F7E4 0027C724  38 21 00 10 */	addi r1, r1, 0x10
/* 8027F7E8 0027C728  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game3Mar3ObjFv

.fn changeMaterial__Q34Game3Mar3ObjFv, global
/* 8027F7EC 0027C72C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8027F7F0 0027C730  7C 08 02 A6 */	mflr r0
/* 8027F7F4 0027C734  90 01 00 24 */	stw r0, 0x24(r1)
/* 8027F7F8 0027C738  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8027F7FC 0027C73C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8027F800 0027C740  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8027F804 0027C744  93 81 00 10 */	stw r28, 0x10(r1)
/* 8027F808 0027C748  7C 7C 1B 78 */	mr r28, r3
/* 8027F80C 0027C74C  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8027F810 0027C750  83 A3 00 08 */	lwz r29, 8(r3)
/* 8027F814 0027C754  81 9D 00 00 */	lwz r12, 0(r29)
/* 8027F818 0027C758  7F A3 EB 78 */	mr r3, r29
/* 8027F81C 0027C75C  83 DD 00 04 */	lwz r30, 4(r29)
/* 8027F820 0027C760  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027F824 0027C764  7D 89 03 A6 */	mtctr r12
/* 8027F828 0027C768  4E 80 04 21 */	bctrl 
/* 8027F82C 0027C76C  80 7C 03 20 */	lwz r3, 0x320(r28)
/* 8027F830 0027C770  C0 22 D2 44 */	lfs f1, lbl_8051B5A4@sda21(r2)
/* 8027F834 0027C774  48 1B 4D 19 */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 8027F838 0027C778  80 7C 03 20 */	lwz r3, 0x320(r28)
/* 8027F83C 0027C77C  C0 22 D2 44 */	lfs f1, lbl_8051B5A4@sda21(r2)
/* 8027F840 0027C780  38 63 00 0C */	addi r3, r3, 0xc
/* 8027F844 0027C784  48 1B 4D 09 */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 8027F848 0027C788  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8027F84C 0027C78C  3B 80 00 00 */	li r28, 0
/* 8027F850 0027C790  3B E3 F2 30 */	addi r31, r3, j3dSys@l
/* 8027F854 0027C794  48 00 00 3C */	b .L_8027F890
.L_8027F858:
/* 8027F858 0027C798  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 8027F85C 0027C79C  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 8027F860 0027C7A0  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 8027F864 0027C7A4  7C 84 1A 14 */	add r4, r4, r3
/* 8027F868 0027C7A8  90 9F 00 3C */	stw r4, 0x3c(r31)
/* 8027F86C 0027C7AC  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 8027F870 0027C7B0  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8027F874 0027C7B4  7C 63 00 2E */	lwzx r3, r3, r0
/* 8027F878 0027C7B8  80 84 00 34 */	lwz r4, 0x34(r4)
/* 8027F87C 0027C7BC  81 83 00 00 */	lwz r12, 0(r3)
/* 8027F880 0027C7C0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8027F884 0027C7C4  7D 89 03 A6 */	mtctr r12
/* 8027F888 0027C7C8  4E 80 04 21 */	bctrl 
/* 8027F88C 0027C7CC  3B 9C 00 01 */	addi r28, r28, 1
.L_8027F890:
/* 8027F890 0027C7D0  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 8027F894 0027C7D4  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 8027F898 0027C7D8  7C 03 00 40 */	cmplw r3, r0
/* 8027F89C 0027C7DC  41 80 FF BC */	blt .L_8027F858
/* 8027F8A0 0027C7E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8027F8A4 0027C7E4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8027F8A8 0027C7E8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8027F8AC 0027C7EC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8027F8B0 0027C7F0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8027F8B4 0027C7F4  7C 08 03 A6 */	mtlr r0
/* 8027F8B8 0027C7F8  38 21 00 20 */	addi r1, r1, 0x20
/* 8027F8BC 0027C7FC  4E 80 00 20 */	blr 
.endfn changeMaterial__Q34Game3Mar3ObjFv

.fn setFSM__Q34Game3Mar3ObjFPQ34Game3Mar3FSM, global
/* 8027F8C0 0027C800  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027F8C4 0027C804  7C 08 02 A6 */	mflr r0
/* 8027F8C8 0027C808  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027F8CC 0027C80C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027F8D0 0027C810  7C 7F 1B 78 */	mr r31, r3
/* 8027F8D4 0027C814  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 8027F8D8 0027C818  7F E4 FB 78 */	mr r4, r31
/* 8027F8DC 0027C81C  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8027F8E0 0027C820  81 83 00 00 */	lwz r12, 0(r3)
/* 8027F8E4 0027C824  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027F8E8 0027C828  7D 89 03 A6 */	mtctr r12
/* 8027F8EC 0027C82C  4E 80 04 21 */	bctrl 
/* 8027F8F0 0027C830  38 00 00 00 */	li r0, 0
/* 8027F8F4 0027C834  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8027F8F8 0027C838  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027F8FC 0027C83C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027F900 0027C840  7C 08 03 A6 */	mtlr r0
/* 8027F904 0027C844  38 21 00 10 */	addi r1, r1, 0x10
/* 8027F908 0027C848  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game3Mar3ObjFPQ34Game3Mar3FSM

.fn doDirectDraw__Q34Game3Mar3ObjFR8Graphics, global
/* 8027F90C 0027C84C  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game3Mar3ObjFR8Graphics

.fn doDebugDraw__Q34Game3Mar3ObjFR8Graphics, global
/* 8027F910 0027C850  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027F914 0027C854  7C 08 02 A6 */	mflr r0
/* 8027F918 0027C858  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027F91C 0027C85C  4B E8 65 51 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 8027F920 0027C860  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027F924 0027C864  7C 08 03 A6 */	mtlr r0
/* 8027F928 0027C868  38 21 00 10 */	addi r1, r1, 0x10
/* 8027F92C 0027C86C  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game3Mar3ObjFR8Graphics

.fn getShadowParam__Q34Game3Mar3ObjFRQ24Game11ShadowParam, global
/* 8027F930 0027C870  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027F934 0027C874  7C 08 02 A6 */	mflr r0
/* 8027F938 0027C878  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027F93C 0027C87C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027F940 0027C880  7C 9F 23 78 */	mr r31, r4
/* 8027F944 0027C884  38 82 D2 48 */	addi r4, r2, lbl_8051B5A8@sda21
/* 8027F948 0027C888  93 C1 00 08 */	stw r30, 8(r1)
/* 8027F94C 0027C88C  7C 7E 1B 78 */	mr r30, r3
/* 8027F950 0027C890  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8027F954 0027C894  48 1B F6 91 */	bl getJoint__Q28SysShape5ModelFPc
/* 8027F958 0027C898  48 1A 9F 49 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8027F95C 0027C89C  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 8027F960 0027C8A0  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 8027F964 0027C8A4  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8027F968 0027C8A8  7F C3 F3 78 */	mr r3, r30
/* 8027F96C 0027C8AC  C0 22 D2 38 */	lfs f1, lbl_8051B598@sda21(r2)
/* 8027F970 0027C8B0  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8027F974 0027C8B4  C0 02 D2 50 */	lfs f0, lbl_8051B5B0@sda21(r2)
/* 8027F978 0027C8B8  D0 5F 00 04 */	stfs f2, 4(r31)
/* 8027F97C 0027C8BC  D0 7F 00 08 */	stfs f3, 8(r31)
/* 8027F980 0027C8C0  C0 7E 01 90 */	lfs f3, 0x190(r30)
/* 8027F984 0027C8C4  C0 5E 02 C8 */	lfs f2, 0x2c8(r30)
/* 8027F988 0027C8C8  EC 43 10 2A */	fadds f2, f3, f2
/* 8027F98C 0027C8CC  D0 5F 00 04 */	stfs f2, 4(r31)
/* 8027F990 0027C8D0  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 8027F994 0027C8D4  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8027F998 0027C8D8  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 8027F99C 0027C8DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027F9A0 0027C8E0  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 8027F9A4 0027C8E4  7D 89 03 A6 */	mtctr r12
/* 8027F9A8 0027C8E8  4E 80 04 21 */	bctrl 
/* 8027F9AC 0027C8EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027F9B0 0027C8F0  40 82 00 10 */	bne .L_8027F9C0
/* 8027F9B4 0027C8F4  80 1E 00 C8 */	lwz r0, 0xc8(r30)
/* 8027F9B8 0027C8F8  28 00 00 00 */	cmplwi r0, 0
/* 8027F9BC 0027C8FC  40 82 00 1C */	bne .L_8027F9D8
.L_8027F9C0:
/* 8027F9C0 0027C900  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8027F9C4 0027C904  C0 22 D2 54 */	lfs f1, lbl_8051B5B4@sda21(r2)
/* 8027F9C8 0027C908  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 8027F9CC 0027C90C  EC 01 00 2A */	fadds f0, f1, f0
/* 8027F9D0 0027C910  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 8027F9D4 0027C914  48 00 00 0C */	b .L_8027F9E0
.L_8027F9D8:
/* 8027F9D8 0027C918  C0 02 D2 58 */	lfs f0, lbl_8051B5B8@sda21(r2)
/* 8027F9DC 0027C91C  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_8027F9E0:
/* 8027F9E0 0027C920  C0 1E 02 CC */	lfs f0, 0x2cc(r30)
/* 8027F9E4 0027C924  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8027F9E8 0027C928  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027F9EC 0027C92C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027F9F0 0027C930  83 C1 00 08 */	lwz r30, 8(r1)
/* 8027F9F4 0027C934  7C 08 03 A6 */	mtlr r0
/* 8027F9F8 0027C938  38 21 00 10 */	addi r1, r1, 0x10
/* 8027F9FC 0027C93C  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game3Mar3ObjFRQ24Game11ShadowParam

.fn doStartStoneState__Q34Game3Mar3ObjFv, global
/* 8027FA00 0027C940  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027FA04 0027C944  7C 08 02 A6 */	mflr r0
/* 8027FA08 0027C948  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027FA0C 0027C94C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027FA10 0027C950  7C 7F 1B 78 */	mr r31, r3
/* 8027FA14 0027C954  4B E8 34 E1 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 8027FA18 0027C958  7F E3 FB 78 */	mr r3, r31
/* 8027FA1C 0027C95C  48 00 20 B1 */	bl finishWindEffect__Q34Game3Mar3ObjFv
/* 8027FA20 0027C960  7F E3 FB 78 */	mr r3, r31
/* 8027FA24 0027C964  48 00 05 79 */	bl setShadowOffsetMax__Q34Game3Mar3ObjFv
/* 8027FA28 0027C968  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027FA2C 0027C96C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027FA30 0027C970  7C 08 03 A6 */	mtlr r0
/* 8027FA34 0027C974  38 21 00 10 */	addi r1, r1, 0x10
/* 8027FA38 0027C978  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game3Mar3ObjFv

.fn doFinishStoneState__Q34Game3Mar3ObjFv, global
/* 8027FA3C 0027C97C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027FA40 0027C980  7C 08 02 A6 */	mflr r0
/* 8027FA44 0027C984  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027FA48 0027C988  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027FA4C 0027C98C  7C 7F 1B 78 */	mr r31, r3
/* 8027FA50 0027C990  4B E8 34 B9 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 8027FA54 0027C994  7F E3 FB 78 */	mr r3, r31
/* 8027FA58 0027C998  4B E8 79 9D */	bl getStateID__Q24Game9EnemyBaseFv
/* 8027FA5C 0027C99C  2C 03 00 01 */	cmpwi r3, 1
/* 8027FA60 0027C9A0  41 80 00 0C */	blt .L_8027FA6C
/* 8027FA64 0027C9A4  2C 03 00 06 */	cmpwi r3, 6
/* 8027FA68 0027C9A8  40 81 00 14 */	ble .L_8027FA7C
.L_8027FA6C:
/* 8027FA6C 0027C9AC  2C 03 00 09 */	cmpwi r3, 9
/* 8027FA70 0027C9B0  41 80 00 2C */	blt .L_8027FA9C
/* 8027FA74 0027C9B4  2C 03 00 0A */	cmpwi r3, 0xa
/* 8027FA78 0027C9B8  41 81 00 24 */	bgt .L_8027FA9C
.L_8027FA7C:
/* 8027FA7C 0027C9BC  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8027FA80 0027C9C0  7F E4 FB 78 */	mr r4, r31
/* 8027FA84 0027C9C4  38 A0 00 09 */	li r5, 9
/* 8027FA88 0027C9C8  38 C0 00 00 */	li r6, 0
/* 8027FA8C 0027C9CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8027FA90 0027C9D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8027FA94 0027C9D4  7D 89 03 A6 */	mtctr r12
/* 8027FA98 0027C9D8  4E 80 04 21 */	bctrl 
.L_8027FA9C:
/* 8027FA9C 0027C9DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027FAA0 0027C9E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027FAA4 0027C9E4  7C 08 03 A6 */	mtlr r0
/* 8027FAA8 0027C9E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8027FAAC 0027C9EC  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game3Mar3ObjFv

.fn doStartWaitingBirthTypeDrop__Q34Game3Mar3ObjFv, global
/* 8027FAB0 0027C9F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027FAB4 0027C9F4  7C 08 02 A6 */	mflr r0
/* 8027FAB8 0027C9F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027FABC 0027C9FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027FAC0 0027CA00  7C 7F 1B 78 */	mr r31, r3
/* 8027FAC4 0027CA04  4B E8 7E D5 */	bl doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 8027FAC8 0027CA08  7F E3 FB 78 */	mr r3, r31
/* 8027FACC 0027CA0C  48 00 21 6D */	bl effectDrawOff__Q34Game3Mar3ObjFv
/* 8027FAD0 0027CA10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027FAD4 0027CA14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027FAD8 0027CA18  7C 08 03 A6 */	mtlr r0
/* 8027FADC 0027CA1C  38 21 00 10 */	addi r1, r1, 0x10
/* 8027FAE0 0027CA20  4E 80 00 20 */	blr 
.endfn doStartWaitingBirthTypeDrop__Q34Game3Mar3ObjFv

.fn doFinishWaitingBirthTypeDrop__Q34Game3Mar3ObjFv, global
/* 8027FAE4 0027CA24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027FAE8 0027CA28  7C 08 02 A6 */	mflr r0
/* 8027FAEC 0027CA2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027FAF0 0027CA30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027FAF4 0027CA34  7C 7F 1B 78 */	mr r31, r3
/* 8027FAF8 0027CA38  4B E8 7E D1 */	bl doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 8027FAFC 0027CA3C  7F E3 FB 78 */	mr r3, r31
/* 8027FB00 0027CA40  48 00 20 C1 */	bl effectDrawOn__Q34Game3Mar3ObjFv
/* 8027FB04 0027CA44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027FB08 0027CA48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027FB0C 0027CA4C  7C 08 03 A6 */	mtlr r0
/* 8027FB10 0027CA50  38 21 00 10 */	addi r1, r1, 0x10
/* 8027FB14 0027CA54  4E 80 00 20 */	blr 
.endfn doFinishWaitingBirthTypeDrop__Q34Game3Mar3ObjFv

.fn doStartMovie__Q34Game3Mar3ObjFv, global
/* 8027FB18 0027CA58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027FB1C 0027CA5C  7C 08 02 A6 */	mflr r0
/* 8027FB20 0027CA60  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027FB24 0027CA64  48 00 21 15 */	bl effectDrawOff__Q34Game3Mar3ObjFv
/* 8027FB28 0027CA68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027FB2C 0027CA6C  7C 08 03 A6 */	mtlr r0
/* 8027FB30 0027CA70  38 21 00 10 */	addi r1, r1, 0x10
/* 8027FB34 0027CA74  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game3Mar3ObjFv

.fn doEndMovie__Q34Game3Mar3ObjFv, global
/* 8027FB38 0027CA78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027FB3C 0027CA7C  7C 08 02 A6 */	mflr r0
/* 8027FB40 0027CA80  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027FB44 0027CA84  48 00 20 7D */	bl effectDrawOn__Q34Game3Mar3ObjFv
/* 8027FB48 0027CA88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027FB4C 0027CA8C  7C 08 03 A6 */	mtlr r0
/* 8027FB50 0027CA90  38 21 00 10 */	addi r1, r1, 0x10
/* 8027FB54 0027CA94  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game3Mar3ObjFv

.fn getOffsetForMapCollision__Q34Game3Mar3ObjFv, global
/* 8027FB58 0027CA98  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8027FB5C 0027CA9C  7C 08 02 A6 */	mflr r0
/* 8027FB60 0027CAA0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8027FB64 0027CAA4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8027FB68 0027CAA8  7C 9F 23 78 */	mr r31, r4
/* 8027FB6C 0027CAAC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8027FB70 0027CAB0  7C 7E 1B 78 */	mr r30, r3
/* 8027FB74 0027CAB4  38 61 00 08 */	addi r3, r1, 8
/* 8027FB78 0027CAB8  48 00 00 D5 */	bl getHeadJointPos__Q34Game3Mar3ObjFv
/* 8027FB7C 0027CABC  C0 41 00 08 */	lfs f2, 8(r1)
/* 8027FB80 0027CAC0  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8027FB84 0027CAC4  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8027FB88 0027CAC8  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8027FB8C 0027CACC  EC 42 00 28 */	fsubs f2, f2, f0
/* 8027FB90 0027CAD0  C0 02 D2 5C */	lfs f0, lbl_8051B5BC@sda21(r2)
/* 8027FB94 0027CAD4  EC 63 08 28 */	fsubs f3, f3, f1
/* 8027FB98 0027CAD8  D0 5E 00 00 */	stfs f2, 0(r30)
/* 8027FB9C 0027CADC  D0 1E 00 04 */	stfs f0, 4(r30)
/* 8027FBA0 0027CAE0  D0 7E 00 08 */	stfs f3, 8(r30)
/* 8027FBA4 0027CAE4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8027FBA8 0027CAE8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8027FBAC 0027CAEC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8027FBB0 0027CAF0  7C 08 03 A6 */	mtlr r0
/* 8027FBB4 0027CAF4  38 21 00 20 */	addi r1, r1, 0x20
/* 8027FBB8 0027CAF8  4E 80 00 20 */	blr 
.endfn getOffsetForMapCollision__Q34Game3Mar3ObjFv

.fn "getThrowupItemPosition__Q34Game3Mar3ObjFP10Vector3<f>", global
/* 8027FBBC 0027CAFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027FBC0 0027CB00  7C 08 02 A6 */	mflr r0
/* 8027FBC4 0027CB04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027FBC8 0027CB08  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8027FBCC 0027CB0C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8027FBD0 0027CB10  41 82 00 0C */	beq .L_8027FBDC
/* 8027FBD4 0027CB14  4B E8 5D 79 */	bl "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
/* 8027FBD8 0027CB18  48 00 00 24 */	b .L_8027FBFC
.L_8027FBDC:
/* 8027FBDC 0027CB1C  C0 42 D2 60 */	lfs f2, lbl_8051B5C0@sda21(r2)
/* 8027FBE0 0027CB20  C0 23 01 90 */	lfs f1, 0x190(r3)
/* 8027FBE4 0027CB24  C0 63 01 94 */	lfs f3, 0x194(r3)
/* 8027FBE8 0027CB28  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8027FBEC 0027CB2C  EC 22 08 2A */	fadds f1, f2, f1
/* 8027FBF0 0027CB30  D0 04 00 00 */	stfs f0, 0(r4)
/* 8027FBF4 0027CB34  D0 24 00 04 */	stfs f1, 4(r4)
/* 8027FBF8 0027CB38  D0 64 00 08 */	stfs f3, 8(r4)
.L_8027FBFC:
/* 8027FBFC 0027CB3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027FC00 0027CB40  7C 08 03 A6 */	mtlr r0
/* 8027FC04 0027CB44  38 21 00 10 */	addi r1, r1, 0x10
/* 8027FC08 0027CB48  4E 80 00 20 */	blr 
.endfn "getThrowupItemPosition__Q34Game3Mar3ObjFP10Vector3<f>"

.fn "getThrowupItemVelocity__Q34Game3Mar3ObjFP10Vector3<f>", global
/* 8027FC0C 0027CB4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027FC10 0027CB50  7C 08 02 A6 */	mflr r0
/* 8027FC14 0027CB54  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027FC18 0027CB58  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8027FC1C 0027CB5C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8027FC20 0027CB60  41 82 00 0C */	beq .L_8027FC2C
/* 8027FC24 0027CB64  4B E8 5D 7D */	bl "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
/* 8027FC28 0027CB68  48 00 00 14 */	b .L_8027FC3C
.L_8027FC2C:
/* 8027FC2C 0027CB6C  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 8027FC30 0027CB70  D0 04 00 08 */	stfs f0, 8(r4)
/* 8027FC34 0027CB74  D0 04 00 04 */	stfs f0, 4(r4)
/* 8027FC38 0027CB78  D0 04 00 00 */	stfs f0, 0(r4)
.L_8027FC3C:
/* 8027FC3C 0027CB7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027FC40 0027CB80  7C 08 03 A6 */	mtlr r0
/* 8027FC44 0027CB84  38 21 00 10 */	addi r1, r1, 0x10
/* 8027FC48 0027CB88  4E 80 00 20 */	blr 
.endfn "getThrowupItemVelocity__Q34Game3Mar3ObjFP10Vector3<f>"

.fn getHeadJointPos__Q34Game3Mar3ObjFv, global
/* 8027FC4C 0027CB8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027FC50 0027CB90  7C 08 02 A6 */	mflr r0
/* 8027FC54 0027CB94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027FC58 0027CB98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027FC5C 0027CB9C  7C 7F 1B 78 */	mr r31, r3
/* 8027FC60 0027CBA0  80 64 01 74 */	lwz r3, 0x174(r4)
/* 8027FC64 0027CBA4  38 82 D2 64 */	addi r4, r2, lbl_8051B5C4@sda21
/* 8027FC68 0027CBA8  48 1B F3 7D */	bl getJoint__Q28SysShape5ModelFPc
/* 8027FC6C 0027CBAC  48 1A 9C 35 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8027FC70 0027CBB0  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8027FC74 0027CBB4  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8027FC78 0027CBB8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8027FC7C 0027CBBC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8027FC80 0027CBC0  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8027FC84 0027CBC4  D0 5F 00 08 */	stfs f2, 8(r31)
/* 8027FC88 0027CBC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027FC8C 0027CBCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027FC90 0027CBD0  7C 08 03 A6 */	mtlr r0
/* 8027FC94 0027CBD4  38 21 00 10 */	addi r1, r1, 0x10
/* 8027FC98 0027CBD8  4E 80 00 20 */	blr 
.endfn getHeadJointPos__Q34Game3Mar3ObjFv

.fn setHeightVelocity__Q34Game3Mar3ObjFv, global
/* 8027FC9C 0027CBDC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8027FCA0 0027CBE0  7C 08 02 A6 */	mflr r0
/* 8027FCA4 0027CBE4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8027FCA8 0027CBE8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8027FCAC 0027CBEC  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8027FCB0 0027CBF0  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8027FCB4 0027CBF4  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8027FCB8 0027CBF8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8027FCBC 0027CBFC  7C 7F 1B 78 */	mr r31, r3
/* 8027FCC0 0027CC00  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8027FCC4 0027CC04  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8027FCC8 0027CC08  81 83 00 04 */	lwz r12, 4(r3)
/* 8027FCCC 0027CC0C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8027FCD0 0027CC10  7D 89 03 A6 */	mtctr r12
/* 8027FCD4 0027CC14  4E 80 04 21 */	bctrl 
/* 8027FCD8 0027CC18  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8027FCDC 0027CC1C  FF E0 08 90 */	fmr f31, f1
/* 8027FCE0 0027CC20  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8027FCE4 0027CC24  C3 C3 08 1C */	lfs f30, 0x81c(r3)
/* 8027FCE8 0027CC28  C0 03 09 34 */	lfs f0, 0x934(r3)
/* 8027FCEC 0027CC2C  EC 21 F8 28 */	fsubs f1, f1, f31
/* 8027FCF0 0027CC30  EC 1E 00 28 */	fsubs f0, f30, f0
/* 8027FCF4 0027CC34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027FCF8 0027CC38  40 81 00 78 */	ble .L_8027FD70
/* 8027FCFC 0027CC3C  7F E3 FB 78 */	mr r3, r31
/* 8027FD00 0027CC40  48 00 04 09 */	bl addPitchRatio__Q34Game3Mar3ObjFv
/* 8027FD04 0027CC44  C0 5F 03 0C */	lfs f2, 0x30c(r31)
/* 8027FD08 0027CC48  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 8027FD0C 0027CC4C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8027FD10 0027CC50  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8027FD14 0027CC54  C0 23 09 34 */	lfs f1, 0x934(r3)
/* 8027FD18 0027CC58  40 80 00 30 */	bge .L_8027FD48
/* 8027FD1C 0027CC5C  C0 02 D2 6C */	lfs f0, lbl_8051B5CC@sda21(r2)
/* 8027FD20 0027CC60  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8027FD24 0027CC64  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8027FD28 0027CC68  EC 02 00 32 */	fmuls f0, f2, f0
/* 8027FD2C 0027CC6C  FC 00 00 1E */	fctiwz f0, f0
/* 8027FD30 0027CC70  D8 01 00 08 */	stfd f0, 8(r1)
/* 8027FD34 0027CC74  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8027FD38 0027CC78  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8027FD3C 0027CC7C  7C 03 04 2E */	lfsx f0, r3, r0
/* 8027FD40 0027CC80  FC 00 00 50 */	fneg f0, f0
/* 8027FD44 0027CC84  48 00 00 28 */	b .L_8027FD6C
.L_8027FD48:
/* 8027FD48 0027CC88  C0 02 D2 70 */	lfs f0, lbl_8051B5D0@sda21(r2)
/* 8027FD4C 0027CC8C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8027FD50 0027CC90  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8027FD54 0027CC94  EC 02 00 32 */	fmuls f0, f2, f0
/* 8027FD58 0027CC98  FC 00 00 1E */	fctiwz f0, f0
/* 8027FD5C 0027CC9C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8027FD60 0027CCA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027FD64 0027CCA4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8027FD68 0027CCA8  7C 03 04 2E */	lfsx f0, r3, r0
.L_8027FD6C:
/* 8027FD6C 0027CCAC  EF C1 F0 3A */	fmadds f30, f1, f0, f30
.L_8027FD70:
/* 8027FD70 0027CCB0  EC 3F F0 2A */	fadds f1, f31, f30
/* 8027FD74 0027CCB4  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8027FD78 0027CCB8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8027FD7C 0027CCBC  EC 21 00 28 */	fsubs f1, f1, f0
/* 8027FD80 0027CCC0  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 8027FD84 0027CCC4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8027FD88 0027CCC8  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 8027FD8C 0027CCCC  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8027FD90 0027CCD0  EC 20 F8 28 */	fsubs f1, f0, f31
/* 8027FD94 0027CCD4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8027FD98 0027CCD8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8027FD9C 0027CCDC  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8027FDA0 0027CCE0  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8027FDA4 0027CCE4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8027FDA8 0027CCE8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8027FDAC 0027CCEC  7C 08 03 A6 */	mtlr r0
/* 8027FDB0 0027CCF0  38 21 00 40 */	addi r1, r1, 0x40
/* 8027FDB4 0027CCF4  4E 80 00 20 */	blr 
.endfn setHeightVelocity__Q34Game3Mar3ObjFv

.fn setRandTarget__Q34Game3Mar3ObjFv, global
/* 8027FDB8 0027CCF8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8027FDBC 0027CCFC  7C 08 02 A6 */	mflr r0
/* 8027FDC0 0027CD00  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8027FDC4 0027CD04  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8027FDC8 0027CD08  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8027FDCC 0027CD0C  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8027FDD0 0027CD10  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 8027FDD4 0027CD14  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8027FDD8 0027CD18  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 8027FDDC 0027CD1C  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 8027FDE0 0027CD20  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 8027FDE4 0027CD24  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 8027FDE8 0027CD28  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 8027FDEC 0027CD2C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8027FDF0 0027CD30  7C 7F 1B 78 */	mr r31, r3
/* 8027FDF4 0027CD34  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8027FDF8 0027CD38  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 8027FDFC 0027CD3C  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 8027FE00 0027CD40  EF 61 00 28 */	fsubs f27, f1, f0
/* 8027FE04 0027CD44  4B E4 97 9D */	bl rand
/* 8027FE08 0027CD48  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8027FE0C 0027CD4C  3C 00 43 30 */	lis r0, 0x4330
/* 8027FE10 0027CD50  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8027FE14 0027CD54  7F E4 FB 78 */	mr r4, r31
/* 8027FE18 0027CD58  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8027FE1C 0027CD5C  38 61 00 08 */	addi r3, r1, 8
/* 8027FE20 0027CD60  90 01 00 18 */	stw r0, 0x18(r1)
/* 8027FE24 0027CD64  C8 22 D2 80 */	lfd f1, lbl_8051B5E0@sda21(r2)
/* 8027FE28 0027CD68  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8027FE2C 0027CD6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027FE30 0027CD70  EC 40 08 28 */	fsubs f2, f0, f1
/* 8027FE34 0027CD74  C0 22 D2 74 */	lfs f1, lbl_8051B5D4@sda21(r2)
/* 8027FE38 0027CD78  C0 05 03 84 */	lfs f0, 0x384(r5)
/* 8027FE3C 0027CD7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027FE40 0027CD80  EC 5B 00 B2 */	fmuls f2, f27, f2
/* 8027FE44 0027CD84  EC 22 08 24 */	fdivs f1, f2, f1
/* 8027FE48 0027CD88  EF 80 08 2A */	fadds f28, f0, f1
/* 8027FE4C 0027CD8C  7D 89 03 A6 */	mtctr r12
/* 8027FE50 0027CD90  4E 80 04 21 */	bctrl 
/* 8027FE54 0027CD94  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 8027FE58 0027CD98  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8027FE5C 0027CD9C  C0 21 00 08 */	lfs f1, 8(r1)
/* 8027FE60 0027CDA0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8027FE64 0027CDA4  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 8027FE68 0027CDA8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8027FE6C 0027CDAC  EC 21 F8 28 */	fsubs f1, f1, f31
/* 8027FE70 0027CDB0  C3 DF 01 9C */	lfs f30, 0x19c(r31)
/* 8027FE74 0027CDB4  EC 40 E8 28 */	fsubs f2, f0, f29
/* 8027FE78 0027CDB8  4B DB 52 91 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8027FE7C 0027CDBC  FF 60 08 90 */	fmr f27, f1
/* 8027FE80 0027CDC0  4B E4 97 21 */	bl rand
/* 8027FE84 0027CDC4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8027FE88 0027CDC8  3C 00 43 30 */	lis r0, 0x4330
/* 8027FE8C 0027CDCC  90 61 00 24 */	stw r3, 0x24(r1)
/* 8027FE90 0027CDD0  C8 42 D2 80 */	lfd f2, lbl_8051B5E0@sda21(r2)
/* 8027FE94 0027CDD4  90 01 00 20 */	stw r0, 0x20(r1)
/* 8027FE98 0027CDD8  C0 62 D2 78 */	lfs f3, lbl_8051B5D8@sda21(r2)
/* 8027FE9C 0027CDDC  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8027FEA0 0027CDE0  C0 22 D2 74 */	lfs f1, lbl_8051B5D4@sda21(r2)
/* 8027FEA4 0027CDE4  EC 80 10 28 */	fsubs f4, f0, f2
/* 8027FEA8 0027CDE8  C0 42 D2 7C */	lfs f2, lbl_8051B5DC@sda21(r2)
/* 8027FEAC 0027CDEC  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 8027FEB0 0027CDF0  EC 63 01 32 */	fmuls f3, f3, f4
/* 8027FEB4 0027CDF4  EC 23 08 24 */	fdivs f1, f3, f1
/* 8027FEB8 0027CDF8  EC 3B 08 2A */	fadds f1, f27, f1
/* 8027FEBC 0027CDFC  EC 62 08 2A */	fadds f3, f2, f1
/* 8027FEC0 0027CE00  FC 20 18 90 */	fmr f1, f3
/* 8027FEC4 0027CE04  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8027FEC8 0027CE08  40 80 00 08 */	bge .L_8027FED0
/* 8027FECC 0027CE0C  FC 20 18 50 */	fneg f1, f3
.L_8027FED0:
/* 8027FED0 0027CE10  C0 42 D2 70 */	lfs f2, lbl_8051B5D0@sda21(r2)
/* 8027FED4 0027CE14  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8027FED8 0027CE18  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 8027FEDC 0027CE1C  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8027FEE0 0027CE20  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8027FEE4 0027CE24  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8027FEE8 0027CE28  FC 00 08 1E */	fctiwz f0, f1
/* 8027FEEC 0027CE2C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8027FEF0 0027CE30  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8027FEF4 0027CE34  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8027FEF8 0027CE38  7C 64 02 14 */	add r3, r4, r0
/* 8027FEFC 0027CE3C  C0 03 00 04 */	lfs f0, 4(r3)
/* 8027FF00 0027CE40  EC 3C E8 3A */	fmadds f1, f28, f0, f29
/* 8027FF04 0027CE44  40 80 00 28 */	bge .L_8027FF2C
/* 8027FF08 0027CE48  C0 02 D2 6C */	lfs f0, lbl_8051B5CC@sda21(r2)
/* 8027FF0C 0027CE4C  EC 03 00 32 */	fmuls f0, f3, f0
/* 8027FF10 0027CE50  FC 00 00 1E */	fctiwz f0, f0
/* 8027FF14 0027CE54  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8027FF18 0027CE58  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8027FF1C 0027CE5C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8027FF20 0027CE60  7C 04 04 2E */	lfsx f0, r4, r0
/* 8027FF24 0027CE64  FC 00 00 50 */	fneg f0, f0
/* 8027FF28 0027CE68  48 00 00 1C */	b .L_8027FF44
.L_8027FF2C:
/* 8027FF2C 0027CE6C  EC 03 00 B2 */	fmuls f0, f3, f2
/* 8027FF30 0027CE70  FC 00 00 1E */	fctiwz f0, f0
/* 8027FF34 0027CE74  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8027FF38 0027CE78  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8027FF3C 0027CE7C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8027FF40 0027CE80  7C 04 04 2E */	lfsx f0, r4, r0
.L_8027FF44:
/* 8027FF44 0027CE84  EC 1C F8 3A */	fmadds f0, f28, f0, f31
/* 8027FF48 0027CE88  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 8027FF4C 0027CE8C  D3 DF 02 D4 */	stfs f30, 0x2d4(r31)
/* 8027FF50 0027CE90  D0 3F 02 D8 */	stfs f1, 0x2d8(r31)
/* 8027FF54 0027CE94  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8027FF58 0027CE98  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8027FF5C 0027CE9C  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8027FF60 0027CEA0  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8027FF64 0027CEA4  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 8027FF68 0027CEA8  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8027FF6C 0027CEAC  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 8027FF70 0027CEB0  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 8027FF74 0027CEB4  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 8027FF78 0027CEB8  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 8027FF7C 0027CEBC  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8027FF80 0027CEC0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8027FF84 0027CEC4  7C 08 03 A6 */	mtlr r0
/* 8027FF88 0027CEC8  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8027FF8C 0027CECC  4E 80 00 20 */	blr 
.endfn setRandTarget__Q34Game3Mar3ObjFv

.fn resetShadowOffset__Q34Game3Mar3ObjFv, global
/* 8027FF90 0027CED0  C0 02 D2 5C */	lfs f0, lbl_8051B5BC@sda21(r2)
/* 8027FF94 0027CED4  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8027FF98 0027CED8  4E 80 00 20 */	blr 
.endfn resetShadowOffset__Q34Game3Mar3ObjFv

.fn setShadowOffsetMax__Q34Game3Mar3ObjFv, global
/* 8027FF9C 0027CEDC  C0 02 D2 88 */	lfs f0, lbl_8051B5E8@sda21(r2)
/* 8027FFA0 0027CEE0  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8027FFA4 0027CEE4  4E 80 00 20 */	blr 
.endfn setShadowOffsetMax__Q34Game3Mar3ObjFv

.fn addShadowOffset__Q34Game3Mar3ObjFv, global
/* 8027FFA8 0027CEE8  C0 43 02 C8 */	lfs f2, 0x2c8(r3)
/* 8027FFAC 0027CEEC  C0 22 D2 50 */	lfs f1, lbl_8051B5B0@sda21(r2)
/* 8027FFB0 0027CEF0  C0 02 D2 88 */	lfs f0, lbl_8051B5E8@sda21(r2)
/* 8027FFB4 0027CEF4  EC 22 08 2A */	fadds f1, f2, f1
/* 8027FFB8 0027CEF8  D0 23 02 C8 */	stfs f1, 0x2c8(r3)
/* 8027FFBC 0027CEFC  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 8027FFC0 0027CF00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027FFC4 0027CF04  4C 81 00 20 */	blelr 
/* 8027FFC8 0027CF08  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8027FFCC 0027CF0C  4E 80 00 20 */	blr 
.endfn addShadowOffset__Q34Game3Mar3ObjFv

.fn subShadowOffset__Q34Game3Mar3ObjFv, global
/* 8027FFD0 0027CF10  C0 43 02 C8 */	lfs f2, 0x2c8(r3)
/* 8027FFD4 0027CF14  C0 22 D2 50 */	lfs f1, lbl_8051B5B0@sda21(r2)
/* 8027FFD8 0027CF18  C0 02 D2 5C */	lfs f0, lbl_8051B5BC@sda21(r2)
/* 8027FFDC 0027CF1C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8027FFE0 0027CF20  D0 23 02 C8 */	stfs f1, 0x2c8(r3)
/* 8027FFE4 0027CF24  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 8027FFE8 0027CF28  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027FFEC 0027CF2C  4C 80 00 20 */	bgelr 
/* 8027FFF0 0027CF30  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8027FFF4 0027CF34  4E 80 00 20 */	blr 
.endfn subShadowOffset__Q34Game3Mar3ObjFv

.fn resetShadowRadius__Q34Game3Mar3ObjFv, global
/* 8027FFF8 0027CF38  C0 02 D2 8C */	lfs f0, lbl_8051B5EC@sda21(r2)
/* 8027FFFC 0027CF3C  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 80280000 0027CF40  4E 80 00 20 */	blr 
.endfn resetShadowRadius__Q34Game3Mar3ObjFv

.fn subShadowRadius__Q34Game3Mar3ObjFv, global
/* 80280004 0027CF44  C0 43 02 CC */	lfs f2, 0x2cc(r3)
/* 80280008 0027CF48  C0 22 D2 50 */	lfs f1, lbl_8051B5B0@sda21(r2)
/* 8028000C 0027CF4C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80280010 0027CF50  4C 81 00 20 */	blelr 
/* 80280014 0027CF54  C0 02 D2 90 */	lfs f0, lbl_8051B5F0@sda21(r2)
/* 80280018 0027CF58  EC 02 00 28 */	fsubs f0, f2, f0
/* 8028001C 0027CF5C  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 80280020 0027CF60  C0 03 02 CC */	lfs f0, 0x2cc(r3)
/* 80280024 0027CF64  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80280028 0027CF68  4C 80 00 20 */	bgelr 
/* 8028002C 0027CF6C  D0 23 02 CC */	stfs f1, 0x2cc(r3)
/* 80280030 0027CF70  4E 80 00 20 */	blr 
.endfn subShadowRadius__Q34Game3Mar3ObjFv

.fn updateFallTimer__Q34Game3Mar3ObjFv, global
/* 80280034 0027CF74  80 03 01 F4 */	lwz r0, 0x1f4(r3)
/* 80280038 0027CF78  2C 00 00 00 */	cmpwi r0, 0
/* 8028003C 0027CF7C  41 82 00 1C */	beq .L_80280058
/* 80280040 0027CF80  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80280044 0027CF84  C0 23 02 C4 */	lfs f1, 0x2c4(r3)
/* 80280048 0027CF88  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8028004C 0027CF8C  EC 01 00 2A */	fadds f0, f1, f0
/* 80280050 0027CF90  D0 03 02 C4 */	stfs f0, 0x2c4(r3)
/* 80280054 0027CF94  4E 80 00 20 */	blr 
.L_80280058:
/* 80280058 0027CF98  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 8028005C 0027CF9C  D0 03 02 C4 */	stfs f0, 0x2c4(r3)
/* 80280060 0027CFA0  4E 80 00 20 */	blr 
.endfn updateFallTimer__Q34Game3Mar3ObjFv

.fn getFlyingNextState__Q34Game3Mar3ObjFv, global
/* 80280064 0027CFA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80280068 0027CFA8  7C 08 02 A6 */	mflr r0
/* 8028006C 0027CFAC  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 80280070 0027CFB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80280074 0027CFB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80280078 0027CFB8  7C 7F 1B 78 */	mr r31, r3
/* 8028007C 0027CFBC  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 80280080 0027CFC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80280084 0027CFC4  4C 40 13 82 */	cror 2, 0, 2
/* 80280088 0027CFC8  40 82 00 0C */	bne .L_80280094
/* 8028008C 0027CFCC  38 60 00 00 */	li r3, 0
/* 80280090 0027CFD0  48 00 00 64 */	b .L_802800F4
.L_80280094:
/* 80280094 0027CFD4  38 80 00 03 */	li r4, 3
/* 80280098 0027CFD8  4B E9 51 1D */	bl getStickPikminColorNum__Q24Game9EnemyFuncFPQ24Game8Creaturei
/* 8028009C 0027CFDC  2C 03 00 00 */	cmpwi r3, 0
/* 802800A0 0027CFE0  40 81 00 0C */	ble .L_802800AC
/* 802800A4 0027CFE4  38 60 00 06 */	li r3, 6
/* 802800A8 0027CFE8  48 00 00 4C */	b .L_802800F4
.L_802800AC:
/* 802800AC 0027CFEC  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802800B0 0027CFF0  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802800B4 0027CFF4  C0 04 08 BC */	lfs f0, 0x8bc(r4)
/* 802800B8 0027CFF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802800BC 0027CFFC  41 81 00 14 */	bgt .L_802800D0
/* 802800C0 0027D000  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 802800C4 0027D004  80 04 08 E4 */	lwz r0, 0x8e4(r4)
/* 802800C8 0027D008  7C 03 00 00 */	cmpw r3, r0
/* 802800CC 0027D00C  41 80 00 24 */	blt .L_802800F0
.L_802800D0:
/* 802800D0 0027D010  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 802800D4 0027D014  80 04 08 E4 */	lwz r0, 0x8e4(r4)
/* 802800D8 0027D018  7C 03 00 00 */	cmpw r3, r0
/* 802800DC 0027D01C  40 80 00 0C */	bge .L_802800E8
/* 802800E0 0027D020  38 60 00 0A */	li r3, 0xa
/* 802800E4 0027D024  48 00 00 10 */	b .L_802800F4
.L_802800E8:
/* 802800E8 0027D028  38 60 00 06 */	li r3, 6
/* 802800EC 0027D02C  48 00 00 08 */	b .L_802800F4
.L_802800F0:
/* 802800F0 0027D030  38 60 FF FF */	li r3, -1
.L_802800F4:
/* 802800F4 0027D034  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802800F8 0027D038  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802800FC 0027D03C  7C 08 03 A6 */	mtlr r0
/* 80280100 0027D040  38 21 00 10 */	addi r1, r1, 0x10
/* 80280104 0027D044  4E 80 00 20 */	blr 
.endfn getFlyingNextState__Q34Game3Mar3ObjFv

.fn addPitchRatio__Q34Game3Mar3ObjFv, global
/* 80280108 0027D048  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 8028010C 0027D04C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80280110 0027D050  C0 65 09 0C */	lfs f3, 0x90c(r5)
/* 80280114 0027D054  C0 44 00 54 */	lfs f2, 0x54(r4)
/* 80280118 0027D058  C0 23 03 0C */	lfs f1, 0x30c(r3)
/* 8028011C 0027D05C  C0 02 D2 94 */	lfs f0, lbl_8051B5F4@sda21(r2)
/* 80280120 0027D060  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 80280124 0027D064  D0 23 03 0C */	stfs f1, 0x30c(r3)
/* 80280128 0027D068  C0 23 03 0C */	lfs f1, 0x30c(r3)
/* 8028012C 0027D06C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80280130 0027D070  4C 81 00 20 */	blelr 
/* 80280134 0027D074  EC 01 00 28 */	fsubs f0, f1, f0
/* 80280138 0027D078  D0 03 03 0C */	stfs f0, 0x30c(r3)
/* 8028013C 0027D07C  4E 80 00 20 */	blr 
.endfn addPitchRatio__Q34Game3Mar3ObjFv

.fn getSearchedPikmin__Q34Game3Mar3ObjFv, global
/* 80280140 0027D080  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80280144 0027D084  7C 08 02 A6 */	mflr r0
/* 80280148 0027D088  90 01 00 94 */	stw r0, 0x94(r1)
/* 8028014C 0027D08C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80280150 0027D090  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80280154 0027D094  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80280158 0027D098  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8028015C 0027D09C  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80280160 0027D0A0  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 80280164 0027D0A4  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80280168 0027D0A8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8028016C 0027D0AC  7C 7F 1B 78 */	mr r31, r3
/* 80280170 0027D0B0  C3 E2 D2 78 */	lfs f31, lbl_8051B5D8@sda21(r2)
/* 80280174 0027D0B4  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80280178 0027D0B8  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 8028017C 0027D0BC  C0 03 03 D4 */	lfs f0, 0x3d4(r3)
/* 80280180 0027D0C0  2C 00 00 00 */	cmpwi r0, 0
/* 80280184 0027D0C4  EF C0 00 32 */	fmuls f30, f0, f0
/* 80280188 0027D0C8  40 82 00 14 */	bne .L_8028019C
/* 8028018C 0027D0CC  C0 22 D2 98 */	lfs f1, lbl_8051B5F8@sda21(r2)
/* 80280190 0027D0D0  C0 03 04 24 */	lfs f0, 0x424(r3)
/* 80280194 0027D0D4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80280198 0027D0D8  EF FF 00 32 */	fmuls f31, f31, f0
.L_8028019C:
/* 8028019C 0027D0DC  38 00 00 00 */	li r0, 0
/* 802801A0 0027D0E0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802801A4 0027D0E4  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802801A8 0027D0E8  90 01 00 50 */	stw r0, 0x50(r1)
/* 802801AC 0027D0EC  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802801B0 0027D0F0  28 00 00 00 */	cmplwi r0, 0
/* 802801B4 0027D0F4  90 81 00 44 */	stw r4, 0x44(r1)
/* 802801B8 0027D0F8  90 01 00 48 */	stw r0, 0x48(r1)
/* 802801BC 0027D0FC  90 61 00 4C */	stw r3, 0x4c(r1)
/* 802801C0 0027D100  40 82 00 1C */	bne .L_802801DC
/* 802801C4 0027D104  81 83 00 00 */	lwz r12, 0(r3)
/* 802801C8 0027D108  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802801CC 0027D10C  7D 89 03 A6 */	mtctr r12
/* 802801D0 0027D110  4E 80 04 21 */	bctrl 
/* 802801D4 0027D114  90 61 00 48 */	stw r3, 0x48(r1)
/* 802801D8 0027D118  48 00 02 C0 */	b .L_80280498
.L_802801DC:
/* 802801DC 0027D11C  81 83 00 00 */	lwz r12, 0(r3)
/* 802801E0 0027D120  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802801E4 0027D124  7D 89 03 A6 */	mtctr r12
/* 802801E8 0027D128  4E 80 04 21 */	bctrl 
/* 802801EC 0027D12C  90 61 00 48 */	stw r3, 0x48(r1)
/* 802801F0 0027D130  48 00 00 58 */	b .L_80280248
.L_802801F4:
/* 802801F4 0027D134  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802801F8 0027D138  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802801FC 0027D13C  81 83 00 00 */	lwz r12, 0(r3)
/* 80280200 0027D140  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80280204 0027D144  7D 89 03 A6 */	mtctr r12
/* 80280208 0027D148  4E 80 04 21 */	bctrl 
/* 8028020C 0027D14C  7C 64 1B 78 */	mr r4, r3
/* 80280210 0027D150  80 61 00 50 */	lwz r3, 0x50(r1)
/* 80280214 0027D154  81 83 00 00 */	lwz r12, 0(r3)
/* 80280218 0027D158  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028021C 0027D15C  7D 89 03 A6 */	mtctr r12
/* 80280220 0027D160  4E 80 04 21 */	bctrl 
/* 80280224 0027D164  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80280228 0027D168  40 82 02 70 */	bne .L_80280498
/* 8028022C 0027D16C  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80280230 0027D170  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80280234 0027D174  81 83 00 00 */	lwz r12, 0(r3)
/* 80280238 0027D178  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028023C 0027D17C  7D 89 03 A6 */	mtctr r12
/* 80280240 0027D180  4E 80 04 21 */	bctrl 
/* 80280244 0027D184  90 61 00 48 */	stw r3, 0x48(r1)
.L_80280248:
/* 80280248 0027D188  81 81 00 44 */	lwz r12, 0x44(r1)
/* 8028024C 0027D18C  38 61 00 44 */	addi r3, r1, 0x44
/* 80280250 0027D190  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80280254 0027D194  7D 89 03 A6 */	mtctr r12
/* 80280258 0027D198  4E 80 04 21 */	bctrl 
/* 8028025C 0027D19C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80280260 0027D1A0  41 82 FF 94 */	beq .L_802801F4
/* 80280264 0027D1A4  48 00 02 34 */	b .L_80280498
.L_80280268:
/* 80280268 0027D1A8  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 8028026C 0027D1AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80280270 0027D1B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80280274 0027D1B4  7D 89 03 A6 */	mtctr r12
/* 80280278 0027D1B8  4E 80 04 21 */	bctrl 
/* 8028027C 0027D1BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80280280 0027D1C0  7C 7E 1B 78 */	mr r30, r3
/* 80280284 0027D1C4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80280288 0027D1C8  7D 89 03 A6 */	mtctr r12
/* 8028028C 0027D1CC  4E 80 04 21 */	bctrl 
/* 80280290 0027D1D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80280294 0027D1D4  41 82 01 48 */	beq .L_802803DC
/* 80280298 0027D1D8  7F C3 F3 78 */	mr r3, r30
/* 8028029C 0027D1DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802802A0 0027D1E0  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802802A4 0027D1E4  7D 89 03 A6 */	mtctr r12
/* 802802A8 0027D1E8  4E 80 04 21 */	bctrl 
/* 802802AC 0027D1EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802802B0 0027D1F0  41 82 01 2C */	beq .L_802803DC
/* 802802B4 0027D1F4  80 1E 00 C8 */	lwz r0, 0xc8(r30)
/* 802802B8 0027D1F8  28 00 00 00 */	cmplwi r0, 0
/* 802802BC 0027D1FC  41 82 01 20 */	beq .L_802803DC
/* 802802C0 0027D200  7F C3 F3 78 */	mr r3, r30
/* 802802C4 0027D204  4B F1 F2 C5 */	bl isStickToMouth__Q24Game8CreatureFv
/* 802802C8 0027D208  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802802CC 0027D20C  40 82 01 10 */	bne .L_802803DC
/* 802802D0 0027D210  80 1E 00 F4 */	lwz r0, 0xf4(r30)
/* 802802D4 0027D214  7C 00 F8 40 */	cmplw r0, r31
/* 802802D8 0027D218  41 82 01 04 */	beq .L_802803DC
/* 802802DC 0027D21C  7F C4 F3 78 */	mr r4, r30
/* 802802E0 0027D220  38 61 00 20 */	addi r3, r1, 0x20
/* 802802E4 0027D224  81 9E 00 00 */	lwz r12, 0(r30)
/* 802802E8 0027D228  81 8C 00 08 */	lwz r12, 8(r12)
/* 802802EC 0027D22C  7D 89 03 A6 */	mtctr r12
/* 802802F0 0027D230  4E 80 04 21 */	bctrl 
/* 802802F4 0027D234  7F E4 FB 78 */	mr r4, r31
/* 802802F8 0027D238  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802802FC 0027D23C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80280300 0027D240  38 61 00 2C */	addi r3, r1, 0x2c
/* 80280304 0027D244  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80280308 0027D248  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8028030C 0027D24C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80280310 0027D250  D0 41 00 08 */	stfs f2, 8(r1)
/* 80280314 0027D254  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80280318 0027D258  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8028031C 0027D25C  7D 89 03 A6 */	mtctr r12
/* 80280320 0027D260  4E 80 04 21 */	bctrl 
/* 80280324 0027D264  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 80280328 0027D268  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8028032C 0027D26C  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 80280330 0027D270  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80280334 0027D274  C0 21 00 08 */	lfs f1, 8(r1)
/* 80280338 0027D278  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8028033C 0027D27C  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 80280340 0027D280  EC 21 28 28 */	fsubs f1, f1, f5
/* 80280344 0027D284  EC 40 18 28 */	fsubs f2, f0, f3
/* 80280348 0027D288  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 8028034C 0027D28C  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 80280350 0027D290  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80280354 0027D294  4B DB 4D B5 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80280358 0027D298  48 19 18 79 */	bl roundAng__Ff
/* 8028035C 0027D29C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80280360 0027D2A0  FF A0 08 90 */	fmr f29, f1
/* 80280364 0027D2A4  7F E3 FB 78 */	mr r3, r31
/* 80280368 0027D2A8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8028036C 0027D2AC  7D 89 03 A6 */	mtctr r12
/* 80280370 0027D2B0  4E 80 04 21 */	bctrl 
/* 80280374 0027D2B4  FC 40 08 90 */	fmr f2, f1
/* 80280378 0027D2B8  FC 20 E8 90 */	fmr f1, f29
/* 8028037C 0027D2BC  48 19 18 81 */	bl angDist__Fff
/* 80280380 0027D2C0  FC 00 0A 10 */	fabs f0, f1
/* 80280384 0027D2C4  FC 00 00 18 */	frsp f0, f0
/* 80280388 0027D2C8  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8028038C 0027D2CC  4C 40 13 82 */	cror 2, 0, 2
/* 80280390 0027D2D0  40 82 00 4C */	bne .L_802803DC
/* 80280394 0027D2D4  7F C4 F3 78 */	mr r4, r30
/* 80280398 0027D2D8  38 61 00 38 */	addi r3, r1, 0x38
/* 8028039C 0027D2DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802803A0 0027D2E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802803A4 0027D2E4  7D 89 03 A6 */	mtctr r12
/* 802803A8 0027D2E8  4E 80 04 21 */	bctrl 
/* 802803AC 0027D2EC  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 802803B0 0027D2F0  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802803B4 0027D2F4  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 802803B8 0027D2F8  EC 21 00 28 */	fsubs f1, f1, f0
/* 802803BC 0027D2FC  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 802803C0 0027D300  EC 42 00 28 */	fsubs f2, f2, f0
/* 802803C4 0027D304  EC 01 00 72 */	fmuls f0, f1, f1
/* 802803C8 0027D308  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 802803CC 0027D30C  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 802803D0 0027D310  40 80 00 0C */	bge .L_802803DC
/* 802803D4 0027D314  7F C3 F3 78 */	mr r3, r30
/* 802803D8 0027D318  48 00 00 E4 */	b .L_802804BC
.L_802803DC:
/* 802803DC 0027D31C  80 01 00 50 */	lwz r0, 0x50(r1)
/* 802803E0 0027D320  28 00 00 00 */	cmplwi r0, 0
/* 802803E4 0027D324  40 82 00 24 */	bne .L_80280408
/* 802803E8 0027D328  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 802803EC 0027D32C  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802803F0 0027D330  81 83 00 00 */	lwz r12, 0(r3)
/* 802803F4 0027D334  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802803F8 0027D338  7D 89 03 A6 */	mtctr r12
/* 802803FC 0027D33C  4E 80 04 21 */	bctrl 
/* 80280400 0027D340  90 61 00 48 */	stw r3, 0x48(r1)
/* 80280404 0027D344  48 00 00 94 */	b .L_80280498
.L_80280408:
/* 80280408 0027D348  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 8028040C 0027D34C  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80280410 0027D350  81 83 00 00 */	lwz r12, 0(r3)
/* 80280414 0027D354  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80280418 0027D358  7D 89 03 A6 */	mtctr r12
/* 8028041C 0027D35C  4E 80 04 21 */	bctrl 
/* 80280420 0027D360  90 61 00 48 */	stw r3, 0x48(r1)
/* 80280424 0027D364  48 00 00 58 */	b .L_8028047C
.L_80280428:
/* 80280428 0027D368  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 8028042C 0027D36C  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80280430 0027D370  81 83 00 00 */	lwz r12, 0(r3)
/* 80280434 0027D374  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80280438 0027D378  7D 89 03 A6 */	mtctr r12
/* 8028043C 0027D37C  4E 80 04 21 */	bctrl 
/* 80280440 0027D380  7C 64 1B 78 */	mr r4, r3
/* 80280444 0027D384  80 61 00 50 */	lwz r3, 0x50(r1)
/* 80280448 0027D388  81 83 00 00 */	lwz r12, 0(r3)
/* 8028044C 0027D38C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80280450 0027D390  7D 89 03 A6 */	mtctr r12
/* 80280454 0027D394  4E 80 04 21 */	bctrl 
/* 80280458 0027D398  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028045C 0027D39C  40 82 00 3C */	bne .L_80280498
/* 80280460 0027D3A0  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80280464 0027D3A4  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80280468 0027D3A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8028046C 0027D3AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80280470 0027D3B0  7D 89 03 A6 */	mtctr r12
/* 80280474 0027D3B4  4E 80 04 21 */	bctrl 
/* 80280478 0027D3B8  90 61 00 48 */	stw r3, 0x48(r1)
.L_8028047C:
/* 8028047C 0027D3BC  81 81 00 44 */	lwz r12, 0x44(r1)
/* 80280480 0027D3C0  38 61 00 44 */	addi r3, r1, 0x44
/* 80280484 0027D3C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80280488 0027D3C8  7D 89 03 A6 */	mtctr r12
/* 8028048C 0027D3CC  4E 80 04 21 */	bctrl 
/* 80280490 0027D3D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80280494 0027D3D4  41 82 FF 94 */	beq .L_80280428
.L_80280498:
/* 80280498 0027D3D8  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 8028049C 0027D3DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802804A0 0027D3E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802804A4 0027D3E4  7D 89 03 A6 */	mtctr r12
/* 802804A8 0027D3E8  4E 80 04 21 */	bctrl 
/* 802804AC 0027D3EC  80 81 00 48 */	lwz r4, 0x48(r1)
/* 802804B0 0027D3F0  7C 04 18 40 */	cmplw r4, r3
/* 802804B4 0027D3F4  40 82 FD B4 */	bne .L_80280268
/* 802804B8 0027D3F8  38 60 00 00 */	li r3, 0
.L_802804BC:
/* 802804BC 0027D3FC  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 802804C0 0027D400  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 802804C4 0027D404  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 802804C8 0027D408  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 802804CC 0027D40C  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 802804D0 0027D410  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 802804D4 0027D414  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802804D8 0027D418  80 01 00 94 */	lwz r0, 0x94(r1)
/* 802804DC 0027D41C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802804E0 0027D420  7C 08 03 A6 */	mtlr r0
/* 802804E4 0027D424  38 21 00 90 */	addi r1, r1, 0x90
/* 802804E8 0027D428  4E 80 00 20 */	blr 
.endfn getSearchedPikmin__Q34Game3Mar3ObjFv

.fn isTargetLost__Q34Game3Mar3ObjFv, global
/* 802804EC 0027D42C  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 802804F0 0027D430  7C 08 02 A6 */	mflr r0
/* 802804F4 0027D434  90 01 01 04 */	stw r0, 0x104(r1)
/* 802804F8 0027D438  DB E1 00 F0 */	stfd f31, 0xf0(r1)
/* 802804FC 0027D43C  F3 E1 00 F8 */	psq_st f31, 248(r1), 0, qr0
/* 80280500 0027D440  DB C1 00 E0 */	stfd f30, 0xe0(r1)
/* 80280504 0027D444  F3 C1 00 E8 */	psq_st f30, 232(r1), 0, qr0
/* 80280508 0027D448  DB A1 00 D0 */	stfd f29, 0xd0(r1)
/* 8028050C 0027D44C  F3 A1 00 D8 */	psq_st f29, 216(r1), 0, qr0
/* 80280510 0027D450  DB 81 00 C0 */	stfd f28, 0xc0(r1)
/* 80280514 0027D454  F3 81 00 C8 */	psq_st f28, 200(r1), 0, qr0
/* 80280518 0027D458  DB 61 00 B0 */	stfd f27, 0xb0(r1)
/* 8028051C 0027D45C  F3 61 00 B8 */	psq_st f27, 184(r1), 0, qr0
/* 80280520 0027D460  DB 41 00 A0 */	stfd f26, 0xa0(r1)
/* 80280524 0027D464  F3 41 00 A8 */	psq_st f26, 168(r1), 0, qr0
/* 80280528 0027D468  DB 21 00 90 */	stfd f25, 0x90(r1)
/* 8028052C 0027D46C  F3 21 00 98 */	psq_st f25, 152(r1), 0, qr0
/* 80280530 0027D470  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80280534 0027D474  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80280538 0027D478  7C 7E 1B 78 */	mr r30, r3
/* 8028053C 0027D47C  83 E3 02 30 */	lwz r31, 0x230(r3)
/* 80280540 0027D480  28 1F 00 00 */	cmplwi r31, 0
/* 80280544 0027D484  41 82 02 44 */	beq .L_80280788
/* 80280548 0027D488  7F E3 FB 78 */	mr r3, r31
/* 8028054C 0027D48C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80280550 0027D490  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80280554 0027D494  7D 89 03 A6 */	mtctr r12
/* 80280558 0027D498  4E 80 04 21 */	bctrl 
/* 8028055C 0027D49C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80280560 0027D4A0  41 82 02 28 */	beq .L_80280788
/* 80280564 0027D4A4  7F E3 FB 78 */	mr r3, r31
/* 80280568 0027D4A8  4B F1 F0 21 */	bl isStickToMouth__Q24Game8CreatureFv
/* 8028056C 0027D4AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80280570 0027D4B0  40 82 02 18 */	bne .L_80280788
/* 80280574 0027D4B4  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 80280578 0027D4B8  7C 00 F0 40 */	cmplw r0, r30
/* 8028057C 0027D4BC  41 82 02 0C */	beq .L_80280788
/* 80280580 0027D4C0  80 1E 01 F4 */	lwz r0, 0x1f4(r30)
/* 80280584 0027D4C4  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 80280588 0027D4C8  2C 00 00 00 */	cmpwi r0, 0
/* 8028058C 0027D4CC  C3 A5 04 24 */	lfs f29, 0x424(r5)
/* 80280590 0027D4D0  41 82 00 08 */	beq .L_80280598
/* 80280594 0027D4D4  C3 A2 D2 9C */	lfs f29, lbl_8051B5FC@sda21(r2)
.L_80280598:
/* 80280598 0027D4D8  7F E4 FB 78 */	mr r4, r31
/* 8028059C 0027D4DC  38 61 00 20 */	addi r3, r1, 0x20
/* 802805A0 0027D4E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802805A4 0027D4E4  C3 C5 03 D4 */	lfs f30, 0x3d4(r5)
/* 802805A8 0027D4E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802805AC 0027D4EC  C3 E5 03 AC */	lfs f31, 0x3ac(r5)
/* 802805B0 0027D4F0  7D 89 03 A6 */	mtctr r12
/* 802805B4 0027D4F4  4E 80 04 21 */	bctrl 
/* 802805B8 0027D4F8  7F C4 F3 78 */	mr r4, r30
/* 802805BC 0027D4FC  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802805C0 0027D500  81 9E 00 00 */	lwz r12, 0(r30)
/* 802805C4 0027D504  38 61 00 2C */	addi r3, r1, 0x2c
/* 802805C8 0027D508  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802805CC 0027D50C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802805D0 0027D510  81 8C 00 08 */	lwz r12, 8(r12)
/* 802805D4 0027D514  D0 41 00 08 */	stfs f2, 8(r1)
/* 802805D8 0027D518  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802805DC 0027D51C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802805E0 0027D520  7D 89 03 A6 */	mtctr r12
/* 802805E4 0027D524  4E 80 04 21 */	bctrl 
/* 802805E8 0027D528  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 802805EC 0027D52C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802805F0 0027D530  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 802805F4 0027D534  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802805F8 0027D538  C0 21 00 08 */	lfs f1, 8(r1)
/* 802805FC 0027D53C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80280600 0027D540  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 80280604 0027D544  EC 21 28 28 */	fsubs f1, f1, f5
/* 80280608 0027D548  EC 40 18 28 */	fsubs f2, f0, f3
/* 8028060C 0027D54C  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 80280610 0027D550  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 80280614 0027D554  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80280618 0027D558  4B DB 4A F1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8028061C 0027D55C  48 19 15 B5 */	bl roundAng__Ff
/* 80280620 0027D560  81 9E 00 00 */	lwz r12, 0(r30)
/* 80280624 0027D564  FF 20 08 90 */	fmr f25, f1
/* 80280628 0027D568  7F C3 F3 78 */	mr r3, r30
/* 8028062C 0027D56C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80280630 0027D570  7D 89 03 A6 */	mtctr r12
/* 80280634 0027D574  4E 80 04 21 */	bctrl 
/* 80280638 0027D578  FC 40 08 90 */	fmr f2, f1
/* 8028063C 0027D57C  FC 20 C8 90 */	fmr f1, f25
/* 80280640 0027D580  48 19 15 BD */	bl angDist__Fff
/* 80280644 0027D584  7F C4 F3 78 */	mr r4, r30
/* 80280648 0027D588  FF 60 08 90 */	fmr f27, f1
/* 8028064C 0027D58C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80280650 0027D590  38 61 00 44 */	addi r3, r1, 0x44
/* 80280654 0027D594  81 8C 00 08 */	lwz r12, 8(r12)
/* 80280658 0027D598  7D 89 03 A6 */	mtctr r12
/* 8028065C 0027D59C  4E 80 04 21 */	bctrl 
/* 80280660 0027D5A0  7F E4 FB 78 */	mr r4, r31
/* 80280664 0027D5A4  38 61 00 38 */	addi r3, r1, 0x38
/* 80280668 0027D5A8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028066C 0027D5AC  C3 81 00 44 */	lfs f28, 0x44(r1)
/* 80280670 0027D5B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80280674 0027D5B4  7D 89 03 A6 */	mtctr r12
/* 80280678 0027D5B8  4E 80 04 21 */	bctrl 
/* 8028067C 0027D5BC  7F C4 F3 78 */	mr r4, r30
/* 80280680 0027D5C0  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80280684 0027D5C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80280688 0027D5C8  38 61 00 5C */	addi r3, r1, 0x5c
/* 8028068C 0027D5CC  EF 20 E0 28 */	fsubs f25, f0, f28
/* 80280690 0027D5D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80280694 0027D5D4  7D 89 03 A6 */	mtctr r12
/* 80280698 0027D5D8  4E 80 04 21 */	bctrl 
/* 8028069C 0027D5DC  7F E4 FB 78 */	mr r4, r31
/* 802806A0 0027D5E0  38 61 00 50 */	addi r3, r1, 0x50
/* 802806A4 0027D5E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802806A8 0027D5E8  C3 81 00 60 */	lfs f28, 0x60(r1)
/* 802806AC 0027D5EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802806B0 0027D5F0  7D 89 03 A6 */	mtctr r12
/* 802806B4 0027D5F4  4E 80 04 21 */	bctrl 
/* 802806B8 0027D5F8  7F C4 F3 78 */	mr r4, r30
/* 802806BC 0027D5FC  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 802806C0 0027D600  81 9E 00 00 */	lwz r12, 0(r30)
/* 802806C4 0027D604  38 61 00 74 */	addi r3, r1, 0x74
/* 802806C8 0027D608  EF 40 E0 28 */	fsubs f26, f0, f28
/* 802806CC 0027D60C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802806D0 0027D610  7D 89 03 A6 */	mtctr r12
/* 802806D4 0027D614  4E 80 04 21 */	bctrl 
/* 802806D8 0027D618  7F E4 FB 78 */	mr r4, r31
/* 802806DC 0027D61C  38 61 00 68 */	addi r3, r1, 0x68
/* 802806E0 0027D620  81 9F 00 00 */	lwz r12, 0(r31)
/* 802806E4 0027D624  C3 81 00 7C */	lfs f28, 0x7c(r1)
/* 802806E8 0027D628  81 8C 00 08 */	lwz r12, 8(r12)
/* 802806EC 0027D62C  7D 89 03 A6 */	mtctr r12
/* 802806F0 0027D630  4E 80 04 21 */	bctrl 
/* 802806F4 0027D634  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 802806F8 0027D638  EC 3F 07 F2 */	fmuls f1, f31, f31
/* 802806FC 0027D63C  EC 5E 07 B2 */	fmuls f2, f30, f30
/* 80280700 0027D640  38 60 00 01 */	li r3, 1
/* 80280704 0027D644  EC 00 E0 28 */	fsubs f0, f0, f28
/* 80280708 0027D648  38 80 00 00 */	li r4, 0
/* 8028070C 0027D64C  EC 00 00 32 */	fmuls f0, f0, f0
/* 80280710 0027D650  EC 19 06 7A */	fmadds f0, f25, f25, f0
/* 80280714 0027D654  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80280718 0027D658  40 81 00 34 */	ble .L_8028074C
/* 8028071C 0027D65C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80280720 0027D660  7C 80 23 78 */	mr r0, r4
/* 80280724 0027D664  40 81 00 1C */	ble .L_80280740
/* 80280728 0027D668  FC 20 D2 10 */	fabs f1, f26
/* 8028072C 0027D66C  C0 02 D2 A0 */	lfs f0, lbl_8051B600@sda21(r2)
/* 80280730 0027D670  FC 20 08 18 */	frsp f1, f1
/* 80280734 0027D674  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80280738 0027D678  40 80 00 08 */	bge .L_80280740
/* 8028073C 0027D67C  7C 60 1B 78 */	mr r0, r3
.L_80280740:
/* 80280740 0027D680  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80280744 0027D684  41 82 00 08 */	beq .L_8028074C
/* 80280748 0027D688  38 80 00 01 */	li r4, 1
.L_8028074C:
/* 8028074C 0027D68C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80280750 0027D690  40 82 00 3C */	bne .L_8028078C
/* 80280754 0027D694  C0 02 D2 98 */	lfs f0, lbl_8051B5F8@sda21(r2)
/* 80280758 0027D698  FC 40 DA 10 */	fabs f2, f27
/* 8028075C 0027D69C  C0 22 D2 78 */	lfs f1, lbl_8051B5D8@sda21(r2)
/* 80280760 0027D6A0  EC 00 07 72 */	fmuls f0, f0, f29
/* 80280764 0027D6A4  FC 40 10 18 */	frsp f2, f2
/* 80280768 0027D6A8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8028076C 0027D6AC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80280770 0027D6B0  4C 40 13 82 */	cror 2, 0, 2
/* 80280774 0027D6B4  7C 00 00 26 */	mfcr r0
/* 80280778 0027D6B8  54 00 1F FF */	rlwinm. r0, r0, 3, 0x1f, 0x1f
/* 8028077C 0027D6BC  41 82 00 10 */	beq .L_8028078C
/* 80280780 0027D6C0  38 60 00 00 */	li r3, 0
/* 80280784 0027D6C4  48 00 00 08 */	b .L_8028078C
.L_80280788:
/* 80280788 0027D6C8  38 60 00 01 */	li r3, 1
.L_8028078C:
/* 8028078C 0027D6CC  E3 E1 00 F8 */	psq_l f31, 248(r1), 0, qr0
/* 80280790 0027D6D0  CB E1 00 F0 */	lfd f31, 0xf0(r1)
/* 80280794 0027D6D4  E3 C1 00 E8 */	psq_l f30, 232(r1), 0, qr0
/* 80280798 0027D6D8  CB C1 00 E0 */	lfd f30, 0xe0(r1)
/* 8028079C 0027D6DC  E3 A1 00 D8 */	psq_l f29, 216(r1), 0, qr0
/* 802807A0 0027D6E0  CB A1 00 D0 */	lfd f29, 0xd0(r1)
/* 802807A4 0027D6E4  E3 81 00 C8 */	psq_l f28, 200(r1), 0, qr0
/* 802807A8 0027D6E8  CB 81 00 C0 */	lfd f28, 0xc0(r1)
/* 802807AC 0027D6EC  E3 61 00 B8 */	psq_l f27, 184(r1), 0, qr0
/* 802807B0 0027D6F0  CB 61 00 B0 */	lfd f27, 0xb0(r1)
/* 802807B4 0027D6F4  E3 41 00 A8 */	psq_l f26, 168(r1), 0, qr0
/* 802807B8 0027D6F8  CB 41 00 A0 */	lfd f26, 0xa0(r1)
/* 802807BC 0027D6FC  E3 21 00 98 */	psq_l f25, 152(r1), 0, qr0
/* 802807C0 0027D700  CB 21 00 90 */	lfd f25, 0x90(r1)
/* 802807C4 0027D704  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 802807C8 0027D708  80 01 01 04 */	lwz r0, 0x104(r1)
/* 802807CC 0027D70C  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 802807D0 0027D710  7C 08 03 A6 */	mtlr r0
/* 802807D4 0027D714  38 21 01 00 */	addi r1, r1, 0x100
/* 802807D8 0027D718  4E 80 00 20 */	blr 
.endfn isTargetLost__Q34Game3Mar3ObjFv

.fn isAttackable__Q34Game3Mar3ObjFv, global
/* 802807DC 0027D71C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802807E0 0027D720  7C 08 02 A6 */	mflr r0
/* 802807E4 0027D724  90 01 00 84 */	stw r0, 0x84(r1)
/* 802807E8 0027D728  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 802807EC 0027D72C  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802807F0 0027D730  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 802807F4 0027D734  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 802807F8 0027D738  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 802807FC 0027D73C  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 80280800 0027D740  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80280804 0027D744  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80280808 0027D748  81 83 00 00 */	lwz r12, 0(r3)
/* 8028080C 0027D74C  7C 7F 1B 78 */	mr r31, r3
/* 80280810 0027D750  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80280814 0027D754  7D 89 03 A6 */	mtctr r12
/* 80280818 0027D758  4E 80 04 21 */	bctrl 
/* 8028081C 0027D75C  FC 40 08 90 */	fmr f2, f1
/* 80280820 0027D760  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 80280824 0027D764  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80280828 0027D768  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8028082C 0027D76C  40 80 00 08 */	bge .L_80280834
/* 80280830 0027D770  FC 40 10 50 */	fneg f2, f2
.L_80280834:
/* 80280834 0027D774  C0 62 D2 70 */	lfs f3, lbl_8051B5D0@sda21(r2)
/* 80280838 0027D778  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8028083C 0027D77C  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 80280840 0027D780  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80280844 0027D784  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80280848 0027D788  C0 85 05 64 */	lfs f4, 0x564(r5)
/* 8028084C 0027D78C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80280850 0027D790  FC 00 10 1E */	fctiwz f0, f2
/* 80280854 0027D794  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80280858 0027D798  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8028085C 0027D79C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80280860 0027D7A0  7C 64 02 14 */	add r3, r4, r0
/* 80280864 0027D7A4  C0 03 00 04 */	lfs f0, 4(r3)
/* 80280868 0027D7A8  EF E4 00 32 */	fmuls f31, f4, f0
/* 8028086C 0027D7AC  40 80 00 28 */	bge .L_80280894
/* 80280870 0027D7B0  C0 02 D2 6C */	lfs f0, lbl_8051B5CC@sda21(r2)
/* 80280874 0027D7B4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80280878 0027D7B8  FC 00 00 1E */	fctiwz f0, f0
/* 8028087C 0027D7BC  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 80280880 0027D7C0  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80280884 0027D7C4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80280888 0027D7C8  7C 04 04 2E */	lfsx f0, r4, r0
/* 8028088C 0027D7CC  FC 00 00 50 */	fneg f0, f0
/* 80280890 0027D7D0  48 00 00 1C */	b .L_802808AC
.L_80280894:
/* 80280894 0027D7D4  EC 01 00 F2 */	fmuls f0, f1, f3
/* 80280898 0027D7D8  FC 00 00 1E */	fctiwz f0, f0
/* 8028089C 0027D7DC  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 802808A0 0027D7E0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802808A4 0027D7E4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802808A8 0027D7E8  7C 04 04 2E */	lfsx f0, r4, r0
.L_802808AC:
/* 802808AC 0027D7EC  7F E4 FB 78 */	mr r4, r31
/* 802808B0 0027D7F0  EF C4 00 32 */	fmuls f30, f4, f0
/* 802808B4 0027D7F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802808B8 0027D7F8  38 61 00 14 */	addi r3, r1, 0x14
/* 802808BC 0027D7FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802808C0 0027D800  7D 89 03 A6 */	mtctr r12
/* 802808C4 0027D804  4E 80 04 21 */	bctrl 
/* 802808C8 0027D808  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802808CC 0027D80C  3C 60 80 4B */	lis r3, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802808D0 0027D810  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802808D4 0027D814  38 00 00 00 */	li r0, 0
/* 802808D8 0027D818  C0 04 05 8C */	lfs f0, 0x58c(r4)
/* 802808DC 0027D81C  38 83 BC 9C */	addi r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802808E0 0027D820  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 802808E4 0027D824  28 00 00 00 */	cmplwi r0, 0
/* 802808E8 0027D828  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802808EC 0027D82C  EF DE 10 2A */	fadds f30, f30, f2
/* 802808F0 0027D830  EF FF 08 2A */	fadds f31, f31, f1
/* 802808F4 0027D834  90 81 00 20 */	stw r4, 0x20(r1)
/* 802808F8 0027D838  EF A0 00 32 */	fmuls f29, f0, f0
/* 802808FC 0027D83C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80280900 0027D840  90 01 00 24 */	stw r0, 0x24(r1)
/* 80280904 0027D844  90 61 00 28 */	stw r3, 0x28(r1)
/* 80280908 0027D848  40 82 00 1C */	bne .L_80280924
/* 8028090C 0027D84C  81 83 00 00 */	lwz r12, 0(r3)
/* 80280910 0027D850  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80280914 0027D854  7D 89 03 A6 */	mtctr r12
/* 80280918 0027D858  4E 80 04 21 */	bctrl 
/* 8028091C 0027D85C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80280920 0027D860  48 00 01 F4 */	b .L_80280B14
.L_80280924:
/* 80280924 0027D864  81 83 00 00 */	lwz r12, 0(r3)
/* 80280928 0027D868  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028092C 0027D86C  7D 89 03 A6 */	mtctr r12
/* 80280930 0027D870  4E 80 04 21 */	bctrl 
/* 80280934 0027D874  90 61 00 24 */	stw r3, 0x24(r1)
/* 80280938 0027D878  48 00 00 58 */	b .L_80280990
.L_8028093C:
/* 8028093C 0027D87C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80280940 0027D880  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80280944 0027D884  81 83 00 00 */	lwz r12, 0(r3)
/* 80280948 0027D888  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8028094C 0027D88C  7D 89 03 A6 */	mtctr r12
/* 80280950 0027D890  4E 80 04 21 */	bctrl 
/* 80280954 0027D894  7C 64 1B 78 */	mr r4, r3
/* 80280958 0027D898  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8028095C 0027D89C  81 83 00 00 */	lwz r12, 0(r3)
/* 80280960 0027D8A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80280964 0027D8A4  7D 89 03 A6 */	mtctr r12
/* 80280968 0027D8A8  4E 80 04 21 */	bctrl 
/* 8028096C 0027D8AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80280970 0027D8B0  40 82 01 A4 */	bne .L_80280B14
/* 80280974 0027D8B4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80280978 0027D8B8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8028097C 0027D8BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80280980 0027D8C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80280984 0027D8C4  7D 89 03 A6 */	mtctr r12
/* 80280988 0027D8C8  4E 80 04 21 */	bctrl 
/* 8028098C 0027D8CC  90 61 00 24 */	stw r3, 0x24(r1)
.L_80280990:
/* 80280990 0027D8D0  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80280994 0027D8D4  38 61 00 20 */	addi r3, r1, 0x20
/* 80280998 0027D8D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028099C 0027D8DC  7D 89 03 A6 */	mtctr r12
/* 802809A0 0027D8E0  4E 80 04 21 */	bctrl 
/* 802809A4 0027D8E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802809A8 0027D8E8  41 82 FF 94 */	beq .L_8028093C
/* 802809AC 0027D8EC  48 00 01 68 */	b .L_80280B14
.L_802809B0:
/* 802809B0 0027D8F0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802809B4 0027D8F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802809B8 0027D8F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802809BC 0027D8FC  7D 89 03 A6 */	mtctr r12
/* 802809C0 0027D900  4E 80 04 21 */	bctrl 
/* 802809C4 0027D904  81 83 00 00 */	lwz r12, 0(r3)
/* 802809C8 0027D908  7C 7E 1B 78 */	mr r30, r3
/* 802809CC 0027D90C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802809D0 0027D910  7D 89 03 A6 */	mtctr r12
/* 802809D4 0027D914  4E 80 04 21 */	bctrl 
/* 802809D8 0027D918  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802809DC 0027D91C  41 82 00 7C */	beq .L_80280A58
/* 802809E0 0027D920  7F C3 F3 78 */	mr r3, r30
/* 802809E4 0027D924  81 9E 00 00 */	lwz r12, 0(r30)
/* 802809E8 0027D928  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802809EC 0027D92C  7D 89 03 A6 */	mtctr r12
/* 802809F0 0027D930  4E 80 04 21 */	bctrl 
/* 802809F4 0027D934  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802809F8 0027D938  41 82 00 60 */	beq .L_80280A58
/* 802809FC 0027D93C  7F C3 F3 78 */	mr r3, r30
/* 80280A00 0027D940  4B F1 EB 89 */	bl isStickToMouth__Q24Game8CreatureFv
/* 80280A04 0027D944  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80280A08 0027D948  40 82 00 50 */	bne .L_80280A58
/* 80280A0C 0027D94C  80 1E 00 F4 */	lwz r0, 0xf4(r30)
/* 80280A10 0027D950  7C 00 F8 40 */	cmplw r0, r31
/* 80280A14 0027D954  41 82 00 44 */	beq .L_80280A58
/* 80280A18 0027D958  7F C4 F3 78 */	mr r4, r30
/* 80280A1C 0027D95C  38 61 00 08 */	addi r3, r1, 8
/* 80280A20 0027D960  81 9E 00 00 */	lwz r12, 0(r30)
/* 80280A24 0027D964  81 8C 00 08 */	lwz r12, 8(r12)
/* 80280A28 0027D968  7D 89 03 A6 */	mtctr r12
/* 80280A2C 0027D96C  4E 80 04 21 */	bctrl 
/* 80280A30 0027D970  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80280A34 0027D974  C0 21 00 08 */	lfs f1, 8(r1)
/* 80280A38 0027D978  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80280A3C 0027D97C  EC 21 F0 28 */	fsubs f1, f1, f30
/* 80280A40 0027D980  EC 00 00 32 */	fmuls f0, f0, f0
/* 80280A44 0027D984  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 80280A48 0027D988  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 80280A4C 0027D98C  40 80 00 0C */	bge .L_80280A58
/* 80280A50 0027D990  7F C3 F3 78 */	mr r3, r30
/* 80280A54 0027D994  48 00 00 E4 */	b .L_80280B38
.L_80280A58:
/* 80280A58 0027D998  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80280A5C 0027D99C  28 00 00 00 */	cmplwi r0, 0
/* 80280A60 0027D9A0  40 82 00 24 */	bne .L_80280A84
/* 80280A64 0027D9A4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80280A68 0027D9A8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80280A6C 0027D9AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80280A70 0027D9B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80280A74 0027D9B4  7D 89 03 A6 */	mtctr r12
/* 80280A78 0027D9B8  4E 80 04 21 */	bctrl 
/* 80280A7C 0027D9BC  90 61 00 24 */	stw r3, 0x24(r1)
/* 80280A80 0027D9C0  48 00 00 94 */	b .L_80280B14
.L_80280A84:
/* 80280A84 0027D9C4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80280A88 0027D9C8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80280A8C 0027D9CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80280A90 0027D9D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80280A94 0027D9D4  7D 89 03 A6 */	mtctr r12
/* 80280A98 0027D9D8  4E 80 04 21 */	bctrl 
/* 80280A9C 0027D9DC  90 61 00 24 */	stw r3, 0x24(r1)
/* 80280AA0 0027D9E0  48 00 00 58 */	b .L_80280AF8
.L_80280AA4:
/* 80280AA4 0027D9E4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80280AA8 0027D9E8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80280AAC 0027D9EC  81 83 00 00 */	lwz r12, 0(r3)
/* 80280AB0 0027D9F0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80280AB4 0027D9F4  7D 89 03 A6 */	mtctr r12
/* 80280AB8 0027D9F8  4E 80 04 21 */	bctrl 
/* 80280ABC 0027D9FC  7C 64 1B 78 */	mr r4, r3
/* 80280AC0 0027DA00  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80280AC4 0027DA04  81 83 00 00 */	lwz r12, 0(r3)
/* 80280AC8 0027DA08  81 8C 00 08 */	lwz r12, 8(r12)
/* 80280ACC 0027DA0C  7D 89 03 A6 */	mtctr r12
/* 80280AD0 0027DA10  4E 80 04 21 */	bctrl 
/* 80280AD4 0027DA14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80280AD8 0027DA18  40 82 00 3C */	bne .L_80280B14
/* 80280ADC 0027DA1C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80280AE0 0027DA20  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80280AE4 0027DA24  81 83 00 00 */	lwz r12, 0(r3)
/* 80280AE8 0027DA28  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80280AEC 0027DA2C  7D 89 03 A6 */	mtctr r12
/* 80280AF0 0027DA30  4E 80 04 21 */	bctrl 
/* 80280AF4 0027DA34  90 61 00 24 */	stw r3, 0x24(r1)
.L_80280AF8:
/* 80280AF8 0027DA38  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80280AFC 0027DA3C  38 61 00 20 */	addi r3, r1, 0x20
/* 80280B00 0027DA40  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80280B04 0027DA44  7D 89 03 A6 */	mtctr r12
/* 80280B08 0027DA48  4E 80 04 21 */	bctrl 
/* 80280B0C 0027DA4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80280B10 0027DA50  41 82 FF 94 */	beq .L_80280AA4
.L_80280B14:
/* 80280B14 0027DA54  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80280B18 0027DA58  81 83 00 00 */	lwz r12, 0(r3)
/* 80280B1C 0027DA5C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80280B20 0027DA60  7D 89 03 A6 */	mtctr r12
/* 80280B24 0027DA64  4E 80 04 21 */	bctrl 
/* 80280B28 0027DA68  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80280B2C 0027DA6C  7C 04 18 40 */	cmplw r4, r3
/* 80280B30 0027DA70  40 82 FE 80 */	bne .L_802809B0
/* 80280B34 0027DA74  38 60 00 00 */	li r3, 0
.L_80280B38:
/* 80280B38 0027DA78  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80280B3C 0027DA7C  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80280B40 0027DA80  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 80280B44 0027DA84  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 80280B48 0027DA88  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 80280B4C 0027DA8C  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 80280B50 0027DA90  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80280B54 0027DA94  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80280B58 0027DA98  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80280B5C 0027DA9C  7C 08 03 A6 */	mtlr r0
/* 80280B60 0027DAA0  38 21 00 80 */	addi r1, r1, 0x80
/* 80280B64 0027DAA4  4E 80 00 20 */	blr 
.endfn isAttackable__Q34Game3Mar3ObjFv

.fn updateEmit__Q34Game3Mar3ObjFv, global
/* 80280B68 0027DAA8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80280B6C 0027DAAC  7C 08 02 A6 */	mflr r0
/* 80280B70 0027DAB0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80280B74 0027DAB4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80280B78 0027DAB8  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80280B7C 0027DABC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80280B80 0027DAC0  7C 7F 1B 78 */	mr r31, r3
/* 80280B84 0027DAC4  80 63 02 DC */	lwz r3, 0x2dc(r3)
/* 80280B88 0027DAC8  28 03 00 00 */	cmplwi r3, 0
/* 80280B8C 0027DACC  41 82 00 1C */	beq .L_80280BA8
/* 80280B90 0027DAD0  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80280B94 0027DAD4  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 80280B98 0027DAD8  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80280B9C 0027DADC  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 80280BA0 0027DAE0  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 80280BA4 0027DAE4  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
.L_80280BA8:
/* 80280BA8 0027DAE8  7F E3 FB 78 */	mr r3, r31
/* 80280BAC 0027DAEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80280BB0 0027DAF0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80280BB4 0027DAF4  7D 89 03 A6 */	mtctr r12
/* 80280BB8 0027DAF8  4E 80 04 21 */	bctrl 
/* 80280BBC 0027DAFC  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 80280BC0 0027DB00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80280BC4 0027DB04  40 80 00 08 */	bge .L_80280BCC
/* 80280BC8 0027DB08  FC 20 08 50 */	fneg f1, f1
.L_80280BCC:
/* 80280BCC 0027DB0C  C0 02 D2 70 */	lfs f0, lbl_8051B5D0@sda21(r2)
/* 80280BD0 0027DB10  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 80280BD4 0027DB14  81 9F 00 00 */	lwz r12, 0(r31)
/* 80280BD8 0027DB18  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 80280BDC 0027DB1C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80280BE0 0027DB20  7F E3 FB 78 */	mr r3, r31
/* 80280BE4 0027DB24  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80280BE8 0027DB28  FC 00 00 1E */	fctiwz f0, f0
/* 80280BEC 0027DB2C  D8 01 00 08 */	stfd f0, 8(r1)
/* 80280BF0 0027DB30  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80280BF4 0027DB34  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80280BF8 0027DB38  7C 84 02 14 */	add r4, r4, r0
/* 80280BFC 0027DB3C  C3 E4 00 04 */	lfs f31, 4(r4)
/* 80280C00 0027DB40  7D 89 03 A6 */	mtctr r12
/* 80280C04 0027DB44  4E 80 04 21 */	bctrl 
/* 80280C08 0027DB48  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 80280C0C 0027DB4C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80280C10 0027DB50  40 80 00 30 */	bge .L_80280C40
/* 80280C14 0027DB54  C0 02 D2 6C */	lfs f0, lbl_8051B5CC@sda21(r2)
/* 80280C18 0027DB58  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80280C1C 0027DB5C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80280C20 0027DB60  EC 01 00 32 */	fmuls f0, f1, f0
/* 80280C24 0027DB64  FC 00 00 1E */	fctiwz f0, f0
/* 80280C28 0027DB68  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80280C2C 0027DB6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80280C30 0027DB70  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80280C34 0027DB74  7C 03 04 2E */	lfsx f0, r3, r0
/* 80280C38 0027DB78  FC 00 00 50 */	fneg f0, f0
/* 80280C3C 0027DB7C  48 00 00 28 */	b .L_80280C64
.L_80280C40:
/* 80280C40 0027DB80  C0 02 D2 70 */	lfs f0, lbl_8051B5D0@sda21(r2)
/* 80280C44 0027DB84  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80280C48 0027DB88  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80280C4C 0027DB8C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80280C50 0027DB90  FC 00 00 1E */	fctiwz f0, f0
/* 80280C54 0027DB94  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80280C58 0027DB98  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80280C5C 0027DB9C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80280C60 0027DBA0  7C 03 04 2E */	lfsx f0, r3, r0
.L_80280C64:
/* 80280C64 0027DBA4  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 80280C68 0027DBA8  C0 02 D2 A4 */	lfs f0, lbl_8051B604@sda21(r2)
/* 80280C6C 0027DBAC  C0 22 D2 38 */	lfs f1, lbl_8051B598@sda21(r2)
/* 80280C70 0027DBB0  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
/* 80280C74 0027DBB4  D3 FF 02 F4 */	stfs f31, 0x2f4(r31)
/* 80280C78 0027DBB8  C0 7F 02 EC */	lfs f3, 0x2ec(r31)
/* 80280C7C 0027DBBC  C0 5F 02 F0 */	lfs f2, 0x2f0(r31)
/* 80280C80 0027DBC0  C0 9F 02 F4 */	lfs f4, 0x2f4(r31)
/* 80280C84 0027DBC4  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80280C88 0027DBC8  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80280C8C 0027DBCC  EC 84 01 32 */	fmuls f4, f4, f4
/* 80280C90 0027DBD0  EC 00 10 2A */	fadds f0, f0, f2
/* 80280C94 0027DBD4  EC 04 00 2A */	fadds f0, f4, f0
/* 80280C98 0027DBD8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80280C9C 0027DBDC  40 81 00 20 */	ble .L_80280CBC
/* 80280CA0 0027DBE0  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 80280CA4 0027DBE4  EC 44 00 2A */	fadds f2, f4, f0
/* 80280CA8 0027DBE8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80280CAC 0027DBEC  40 81 00 14 */	ble .L_80280CC0
/* 80280CB0 0027DBF0  FC 00 10 34 */	frsqrte f0, f2
/* 80280CB4 0027DBF4  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80280CB8 0027DBF8  48 00 00 08 */	b .L_80280CC0
.L_80280CBC:
/* 80280CBC 0027DBFC  FC 40 08 90 */	fmr f2, f1
.L_80280CC0:
/* 80280CC0 0027DC00  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 80280CC4 0027DC04  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80280CC8 0027DC08  40 81 00 30 */	ble .L_80280CF8
/* 80280CCC 0027DC0C  C0 22 D2 50 */	lfs f1, lbl_8051B5B0@sda21(r2)
/* 80280CD0 0027DC10  C0 1F 02 EC */	lfs f0, 0x2ec(r31)
/* 80280CD4 0027DC14  EC 21 10 24 */	fdivs f1, f1, f2
/* 80280CD8 0027DC18  EC 00 00 72 */	fmuls f0, f0, f1
/* 80280CDC 0027DC1C  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 80280CE0 0027DC20  C0 1F 02 F0 */	lfs f0, 0x2f0(r31)
/* 80280CE4 0027DC24  EC 00 00 72 */	fmuls f0, f0, f1
/* 80280CE8 0027DC28  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
/* 80280CEC 0027DC2C  C0 1F 02 F4 */	lfs f0, 0x2f4(r31)
/* 80280CF0 0027DC30  EC 00 00 72 */	fmuls f0, f0, f1
/* 80280CF4 0027DC34  D0 1F 02 F4 */	stfs f0, 0x2f4(r31)
.L_80280CF8:
/* 80280CF8 0027DC38  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80280CFC 0027DC3C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80280D00 0027DC40  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80280D04 0027DC44  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80280D08 0027DC48  7C 08 03 A6 */	mtlr r0
/* 80280D0C 0027DC4C  38 21 00 40 */	addi r1, r1, 0x40
/* 80280D10 0027DC50  4E 80 00 20 */	blr 
.endfn updateEmit__Q34Game3Mar3ObjFv

.fn getAttackPosition__Q34Game3Mar3ObjFv, global
/* 80280D14 0027DC54  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80280D18 0027DC58  7C 08 02 A6 */	mflr r0
/* 80280D1C 0027DC5C  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80280D20 0027DC60  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 80280D24 0027DC64  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 80280D28 0027DC68  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 80280D2C 0027DC6C  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 80280D30 0027DC70  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 80280D34 0027DC74  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 80280D38 0027DC78  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 80280D3C 0027DC7C  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 80280D40 0027DC80  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 80280D44 0027DC84  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 80280D48 0027DC88  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 80280D4C 0027DC8C  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 80280D50 0027DC90  DB 21 00 70 */	stfd f25, 0x70(r1)
/* 80280D54 0027DC94  F3 21 00 78 */	psq_st f25, 120(r1), 0, qr0
/* 80280D58 0027DC98  DB 01 00 60 */	stfd f24, 0x60(r1)
/* 80280D5C 0027DC9C  F3 01 00 68 */	psq_st f24, 104(r1), 0, qr0
/* 80280D60 0027DCA0  DA E1 00 50 */	stfd f23, 0x50(r1)
/* 80280D64 0027DCA4  F2 E1 00 58 */	psq_st f23, 88(r1), 0, qr0
/* 80280D68 0027DCA8  DA C1 00 40 */	stfd f22, 0x40(r1)
/* 80280D6C 0027DCAC  F2 C1 00 48 */	psq_st f22, 72(r1), 0, qr0
/* 80280D70 0027DCB0  DA A1 00 30 */	stfd f21, 0x30(r1)
/* 80280D74 0027DCB4  F2 A1 00 38 */	psq_st f21, 56(r1), 0, qr0
/* 80280D78 0027DCB8  DA 81 00 20 */	stfd f20, 0x20(r1)
/* 80280D7C 0027DCBC  F2 81 00 28 */	psq_st f20, 40(r1), 0, qr0
/* 80280D80 0027DCC0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80280D84 0027DCC4  80 A4 00 C0 */	lwz r5, 0xc0(r4)
/* 80280D88 0027DCC8  7C 7F 1B 78 */	mr r31, r3
/* 80280D8C 0027DCCC  C0 02 D2 54 */	lfs f0, lbl_8051B5B4@sda21(r2)
/* 80280D90 0027DCD0  C0 45 05 B4 */	lfs f2, 0x5b4(r5)
/* 80280D94 0027DCD4  C0 22 D2 A8 */	lfs f1, lbl_8051B608@sda21(r2)
/* 80280D98 0027DCD8  EC 60 10 24 */	fdivs f3, f0, f2
/* 80280D9C 0027DCDC  C3 64 02 EC */	lfs f27, 0x2ec(r4)
/* 80280DA0 0027DCE0  C3 44 02 F0 */	lfs f26, 0x2f0(r4)
/* 80280DA4 0027DCE4  C3 24 02 F4 */	lfs f25, 0x2f4(r4)
/* 80280DA8 0027DCE8  C3 E2 D2 50 */	lfs f31, lbl_8051B5B0@sda21(r2)
/* 80280DAC 0027DCEC  C3 C4 02 E0 */	lfs f30, 0x2e0(r4)
/* 80280DB0 0027DCF0  EF 7B 00 B2 */	fmuls f27, f27, f2
/* 80280DB4 0027DCF4  C3 A4 02 E4 */	lfs f29, 0x2e4(r4)
/* 80280DB8 0027DCF8  EF 5A 00 B2 */	fmuls f26, f26, f2
/* 80280DBC 0027DCFC  C3 84 02 E8 */	lfs f28, 0x2e8(r4)
/* 80280DC0 0027DD00  EF 39 00 B2 */	fmuls f25, f25, f2
/* 80280DC4 0027DD04  EF 7B F0 2A */	fadds f27, f27, f30
/* 80280DC8 0027DD08  EF 5A E8 2A */	fadds f26, f26, f29
/* 80280DCC 0027DD0C  EF 39 E0 2A */	fadds f25, f25, f28
/* 80280DD0 0027DD10  EE A1 10 24 */	fdivs f21, f1, f2
/* 80280DD4 0027DD14  EC 9F 18 28 */	fsubs f4, f31, f3
/* 80280DD8 0027DD18  EC 5B 00 F2 */	fmuls f2, f27, f3
/* 80280DDC 0027DD1C  EC 3A 00 F2 */	fmuls f1, f26, f3
/* 80280DE0 0027DD20  EC 19 00 F2 */	fmuls f0, f25, f3
/* 80280DE4 0027DD24  FE 80 18 90 */	fmr f20, f3
/* 80280DE8 0027DD28  EF 1E 11 3A */	fmadds f24, f30, f4, f2
/* 80280DEC 0027DD2C  EE FD 09 3A */	fmadds f23, f29, f4, f1
/* 80280DF0 0027DD30  EE DC 01 3A */	fmadds f22, f28, f4, f0
/* 80280DF4 0027DD34  48 00 00 74 */	b .L_80280E68
.L_80280DF8:
/* 80280DF8 0027DD38  EC 7F A0 28 */	fsubs f3, f31, f20
/* 80280DFC 0027DD3C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80280E00 0027DD40  EC 5B 05 32 */	fmuls f2, f27, f20
/* 80280E04 0027DD44  38 81 00 08 */	addi r4, r1, 8
/* 80280E08 0027DD48  EC 3A 05 32 */	fmuls f1, f26, f20
/* 80280E0C 0027DD4C  EC 19 05 32 */	fmuls f0, f25, f20
/* 80280E10 0027DD50  EC 5E 10 FA */	fmadds f2, f30, f3, f2
/* 80280E14 0027DD54  EC 3D 08 FA */	fmadds f1, f29, f3, f1
/* 80280E18 0027DD58  EC 1C 00 FA */	fmadds f0, f28, f3, f0
/* 80280E1C 0027DD5C  D0 41 00 08 */	stfs f2, 8(r1)
/* 80280E20 0027DD60  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80280E24 0027DD64  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80280E28 0027DD68  81 83 00 04 */	lwz r12, 4(r3)
/* 80280E2C 0027DD6C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80280E30 0027DD70  7D 89 03 A6 */	mtctr r12
/* 80280E34 0027DD74  4E 80 04 21 */	bctrl 
/* 80280E38 0027DD78  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80280E3C 0027DD7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80280E40 0027DD80  40 81 00 14 */	ble .L_80280E54
/* 80280E44 0027DD84  D3 1F 00 00 */	stfs f24, 0(r31)
/* 80280E48 0027DD88  D2 FF 00 04 */	stfs f23, 4(r31)
/* 80280E4C 0027DD8C  D2 DF 00 08 */	stfs f22, 8(r31)
/* 80280E50 0027DD90  48 00 00 38 */	b .L_80280E88
.L_80280E54:
/* 80280E54 0027DD94  FE E0 08 18 */	frsp f23, f1
/* 80280E58 0027DD98  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80280E5C 0027DD9C  EE 94 A8 2A */	fadds f20, f20, f21
/* 80280E60 0027DDA0  C3 01 00 08 */	lfs f24, 8(r1)
/* 80280E64 0027DDA4  C2 C1 00 10 */	lfs f22, 0x10(r1)
.L_80280E68:
/* 80280E68 0027DDA8  FC 14 F8 40 */	fcmpo cr0, f20, f31
/* 80280E6C 0027DDAC  41 80 FF 8C */	blt .L_80280DF8
/* 80280E70 0027DDB0  C0 01 00 08 */	lfs f0, 8(r1)
/* 80280E74 0027DDB4  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80280E78 0027DDB8  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80280E7C 0027DDBC  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80280E80 0027DDC0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80280E84 0027DDC4  D0 1F 00 08 */	stfs f0, 8(r31)
.L_80280E88:
/* 80280E88 0027DDC8  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 80280E8C 0027DDCC  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 80280E90 0027DDD0  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 80280E94 0027DDD4  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 80280E98 0027DDD8  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 80280E9C 0027DDDC  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 80280EA0 0027DDE0  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 80280EA4 0027DDE4  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 80280EA8 0027DDE8  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 80280EAC 0027DDEC  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 80280EB0 0027DDF0  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 80280EB4 0027DDF4  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 80280EB8 0027DDF8  E3 21 00 78 */	psq_l f25, 120(r1), 0, qr0
/* 80280EBC 0027DDFC  CB 21 00 70 */	lfd f25, 0x70(r1)
/* 80280EC0 0027DE00  E3 01 00 68 */	psq_l f24, 104(r1), 0, qr0
/* 80280EC4 0027DE04  CB 01 00 60 */	lfd f24, 0x60(r1)
/* 80280EC8 0027DE08  E2 E1 00 58 */	psq_l f23, 88(r1), 0, qr0
/* 80280ECC 0027DE0C  CA E1 00 50 */	lfd f23, 0x50(r1)
/* 80280ED0 0027DE10  E2 C1 00 48 */	psq_l f22, 72(r1), 0, qr0
/* 80280ED4 0027DE14  CA C1 00 40 */	lfd f22, 0x40(r1)
/* 80280ED8 0027DE18  E2 A1 00 38 */	psq_l f21, 56(r1), 0, qr0
/* 80280EDC 0027DE1C  CA A1 00 30 */	lfd f21, 0x30(r1)
/* 80280EE0 0027DE20  E2 81 00 28 */	psq_l f20, 40(r1), 0, qr0
/* 80280EE4 0027DE24  CA 81 00 20 */	lfd f20, 0x20(r1)
/* 80280EE8 0027DE28  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80280EEC 0027DE2C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80280EF0 0027DE30  7C 08 03 A6 */	mtlr r0
/* 80280EF4 0027DE34  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80280EF8 0027DE38  4E 80 00 20 */	blr 
.endfn getAttackPosition__Q34Game3Mar3ObjFv

.fn windTarget__Q34Game3Mar3ObjFv, global
/* 80280EFC 0027DE3C  94 21 FE 70 */	stwu r1, -0x190(r1)
/* 80280F00 0027DE40  7C 08 02 A6 */	mflr r0
/* 80280F04 0027DE44  90 01 01 94 */	stw r0, 0x194(r1)
/* 80280F08 0027DE48  DB E1 01 80 */	stfd f31, 0x180(r1)
/* 80280F0C 0027DE4C  F3 E1 01 88 */	psq_st f31, 392(r1), 0, qr0
/* 80280F10 0027DE50  DB C1 01 70 */	stfd f30, 0x170(r1)
/* 80280F14 0027DE54  F3 C1 01 78 */	psq_st f30, 376(r1), 0, qr0
/* 80280F18 0027DE58  DB A1 01 60 */	stfd f29, 0x160(r1)
/* 80280F1C 0027DE5C  F3 A1 01 68 */	psq_st f29, 360(r1), 0, qr0
/* 80280F20 0027DE60  DB 81 01 50 */	stfd f28, 0x150(r1)
/* 80280F24 0027DE64  F3 81 01 58 */	psq_st f28, 344(r1), 0, qr0
/* 80280F28 0027DE68  DB 61 01 40 */	stfd f27, 0x140(r1)
/* 80280F2C 0027DE6C  F3 61 01 48 */	psq_st f27, 328(r1), 0, qr0
/* 80280F30 0027DE70  DB 41 01 30 */	stfd f26, 0x130(r1)
/* 80280F34 0027DE74  F3 41 01 38 */	psq_st f26, 312(r1), 0, qr0
/* 80280F38 0027DE78  DB 21 01 20 */	stfd f25, 0x120(r1)
/* 80280F3C 0027DE7C  F3 21 01 28 */	psq_st f25, 296(r1), 0, qr0
/* 80280F40 0027DE80  DB 01 01 10 */	stfd f24, 0x110(r1)
/* 80280F44 0027DE84  F3 01 01 18 */	psq_st f24, 280(r1), 0, qr0
/* 80280F48 0027DE88  DA E1 01 00 */	stfd f23, 0x100(r1)
/* 80280F4C 0027DE8C  F2 E1 01 08 */	psq_st f23, 264(r1), 0, qr0
/* 80280F50 0027DE90  DA C1 00 F0 */	stfd f22, 0xf0(r1)
/* 80280F54 0027DE94  F2 C1 00 F8 */	psq_st f22, 248(r1), 0, qr0
/* 80280F58 0027DE98  DA A1 00 E0 */	stfd f21, 0xe0(r1)
/* 80280F5C 0027DE9C  F2 A1 00 E8 */	psq_st f21, 232(r1), 0, qr0
/* 80280F60 0027DEA0  DA 81 00 D0 */	stfd f20, 0xd0(r1)
/* 80280F64 0027DEA4  F2 81 00 D8 */	psq_st f20, 216(r1), 0, qr0
/* 80280F68 0027DEA8  DA 61 00 C0 */	stfd f19, 0xc0(r1)
/* 80280F6C 0027DEAC  F2 61 00 C8 */	psq_st f19, 200(r1), 0, qr0
/* 80280F70 0027DEB0  DA 41 00 B0 */	stfd f18, 0xb0(r1)
/* 80280F74 0027DEB4  F2 41 00 B8 */	psq_st f18, 184(r1), 0, qr0
/* 80280F78 0027DEB8  DA 21 00 A0 */	stfd f17, 0xa0(r1)
/* 80280F7C 0027DEBC  F2 21 00 A8 */	psq_st f17, 168(r1), 0, qr0
/* 80280F80 0027DEC0  DA 01 00 90 */	stfd f16, 0x90(r1)
/* 80280F84 0027DEC4  F2 01 00 98 */	psq_st f16, 152(r1), 0, qr0
/* 80280F88 0027DEC8  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80280F8C 0027DECC  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80280F90 0027DED0  7C 7F 1B 78 */	mr r31, r3
/* 80280F94 0027DED4  C0 42 D2 50 */	lfs f2, lbl_8051B5B0@sda21(r2)
/* 80280F98 0027DED8  C0 63 03 04 */	lfs f3, 0x304(r3)
/* 80280F9C 0027DEDC  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 80280FA0 0027DEE0  40 80 00 28 */	bge .L_80280FC8
/* 80280FA4 0027DEE4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80280FA8 0027DEE8  C0 22 D2 AC */	lfs f1, lbl_8051B60C@sda21(r2)
/* 80280FAC 0027DEEC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80280FB0 0027DEF0  EC 01 18 3A */	fmadds f0, f1, f0, f3
/* 80280FB4 0027DEF4  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 80280FB8 0027DEF8  C0 1F 03 04 */	lfs f0, 0x304(r31)
/* 80280FBC 0027DEFC  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80280FC0 0027DF00  40 81 00 08 */	ble .L_80280FC8
/* 80280FC4 0027DF04  D0 5F 03 04 */	stfs f2, 0x304(r31)
.L_80280FC8:
/* 80280FC8 0027DF08  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80280FCC 0027DF0C  C0 22 D2 98 */	lfs f1, lbl_8051B5F8@sda21(r2)
/* 80280FD0 0027DF10  C0 03 05 DC */	lfs f0, 0x5dc(r3)
/* 80280FD4 0027DF14  C0 7F 03 04 */	lfs f3, 0x304(r31)
/* 80280FD8 0027DF18  EC 01 00 32 */	fmuls f0, f1, f0
/* 80280FDC 0027DF1C  C0 43 05 B4 */	lfs f2, 0x5b4(r3)
/* 80280FE0 0027DF20  C0 22 D2 78 */	lfs f1, lbl_8051B5D8@sda21(r2)
/* 80280FE4 0027DF24  EE 63 00 B2 */	fmuls f19, f3, f2
/* 80280FE8 0027DF28  C2 1F 02 E0 */	lfs f16, 0x2e0(r31)
/* 80280FEC 0027DF2C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80280FF0 0027DF30  C2 3F 02 E4 */	lfs f17, 0x2e4(r31)
/* 80280FF4 0027DF34  C2 5F 02 E8 */	lfs f18, 0x2e8(r31)
/* 80280FF8 0027DF38  C3 BF 02 EC */	lfs f29, 0x2ec(r31)
/* 80280FFC 0027DF3C  C2 BF 02 F0 */	lfs f21, 0x2f0(r31)
/* 80281000 0027DF40  C3 9F 02 F4 */	lfs f28, 0x2f4(r31)
/* 80281004 0027DF44  4B E4 E8 F1 */	bl tan
/* 80281008 0027DF48  FF 60 E0 50 */	fneg f27, f28
/* 8028100C 0027DF4C  C3 E2 D2 38 */	lfs f31, lbl_8051B598@sda21(r2)
/* 80281010 0027DF50  EC 1D 07 72 */	fmuls f0, f29, f29
/* 80281014 0027DF54  FF C0 E8 90 */	fmr f30, f29
/* 80281018 0027DF58  EC 5B FE FA */	fmadds f2, f27, f27, f31
/* 8028101C 0027DF5C  FE 80 08 18 */	frsp f20, f1
/* 80281020 0027DF60  EC 40 10 2A */	fadds f2, f0, f2
/* 80281024 0027DF64  FC 02 F8 40 */	fcmpo cr0, f2, f31
/* 80281028 0027DF68  40 81 00 14 */	ble .L_8028103C
/* 8028102C 0027DF6C  40 81 00 14 */	ble .L_80281040
/* 80281030 0027DF70  FC 20 10 34 */	frsqrte f1, f2
/* 80281034 0027DF74  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80281038 0027DF78  48 00 00 08 */	b .L_80281040
.L_8028103C:
/* 8028103C 0027DF7C  FC 40 F8 90 */	fmr f2, f31
.L_80281040:
/* 80281040 0027DF80  C0 22 D2 38 */	lfs f1, lbl_8051B598@sda21(r2)
/* 80281044 0027DF84  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80281048 0027DF88  40 81 00 18 */	ble .L_80281060
/* 8028104C 0027DF8C  C0 22 D2 50 */	lfs f1, lbl_8051B5B0@sda21(r2)
/* 80281050 0027DF90  EC 21 10 24 */	fdivs f1, f1, f2
/* 80281054 0027DF94  EF 7B 00 72 */	fmuls f27, f27, f1
/* 80281058 0027DF98  EF FF 00 72 */	fmuls f31, f31, f1
/* 8028105C 0027DF9C  EF DE 00 72 */	fmuls f30, f30, f1
.L_80281060:
/* 80281060 0027DFA0  EC 7B 07 32 */	fmuls f3, f27, f28
/* 80281064 0027DFA4  C0 22 D2 38 */	lfs f1, lbl_8051B598@sda21(r2)
/* 80281068 0027DFA8  EC 9E 05 72 */	fmuls f4, f30, f21
/* 8028106C 0027DFAC  EC 5F 07 72 */	fmuls f2, f31, f29
/* 80281070 0027DFB0  EF 3E 1F 78 */	fmsubs f25, f30, f29, f3
/* 80281074 0027DFB4  EF 5F 27 38 */	fmsubs f26, f31, f28, f4
/* 80281078 0027DFB8  EF 1B 15 78 */	fmsubs f24, f27, f21, f2
/* 8028107C 0027DFBC  EC 59 06 72 */	fmuls f2, f25, f25
/* 80281080 0027DFC0  EC 78 06 32 */	fmuls f3, f24, f24
/* 80281084 0027DFC4  EC 5A 16 BA */	fmadds f2, f26, f26, f2
/* 80281088 0027DFC8  EC 43 10 2A */	fadds f2, f3, f2
/* 8028108C 0027DFCC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80281090 0027DFD0  40 81 00 14 */	ble .L_802810A4
/* 80281094 0027DFD4  40 81 00 14 */	ble .L_802810A8
/* 80281098 0027DFD8  FC 20 10 34 */	frsqrte f1, f2
/* 8028109C 0027DFDC  EC 41 00 B2 */	fmuls f2, f1, f2
/* 802810A0 0027DFE0  48 00 00 08 */	b .L_802810A8
.L_802810A4:
/* 802810A4 0027DFE4  FC 40 08 90 */	fmr f2, f1
.L_802810A8:
/* 802810A8 0027DFE8  C0 22 D2 38 */	lfs f1, lbl_8051B598@sda21(r2)
/* 802810AC 0027DFEC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802810B0 0027DFF0  40 81 00 18 */	ble .L_802810C8
/* 802810B4 0027DFF4  C0 22 D2 50 */	lfs f1, lbl_8051B5B0@sda21(r2)
/* 802810B8 0027DFF8  EC 21 10 24 */	fdivs f1, f1, f2
/* 802810BC 0027DFFC  EF 5A 00 72 */	fmuls f26, f26, f1
/* 802810C0 0027E000  EF 39 00 72 */	fmuls f25, f25, f1
/* 802810C4 0027E004  EF 18 00 72 */	fmuls f24, f24, f1
.L_802810C8:
/* 802810C8 0027E008  C0 22 D2 38 */	lfs f1, lbl_8051B598@sda21(r2)
/* 802810CC 0027E00C  EC 5C 07 32 */	fmuls f2, f28, f28
/* 802810D0 0027E010  FE C0 E8 90 */	fmr f22, f29
/* 802810D4 0027E014  EC 00 08 2A */	fadds f0, f0, f1
/* 802810D8 0027E018  FE E0 E0 90 */	fmr f23, f28
/* 802810DC 0027E01C  EC 02 00 2A */	fadds f0, f2, f0
/* 802810E0 0027E020  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802810E4 0027E024  40 81 00 20 */	ble .L_80281104
/* 802810E8 0027E028  EC 1D 0F 7A */	fmadds f0, f29, f29, f1
/* 802810EC 0027E02C  EC 42 00 2A */	fadds f2, f2, f0
/* 802810F0 0027E030  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802810F4 0027E034  40 81 00 14 */	ble .L_80281108
/* 802810F8 0027E038  FC 00 10 34 */	frsqrte f0, f2
/* 802810FC 0027E03C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80281100 0027E040  48 00 00 08 */	b .L_80281108
.L_80281104:
/* 80281104 0027E044  FC 40 08 90 */	fmr f2, f1
.L_80281108:
/* 80281108 0027E048  C0 02 D2 38 */	lfs f0, lbl_8051B598@sda21(r2)
/* 8028110C 0027E04C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80281110 0027E050  40 81 00 14 */	ble .L_80281124
/* 80281114 0027E054  C0 02 D2 50 */	lfs f0, lbl_8051B5B0@sda21(r2)
/* 80281118 0027E058  EC 00 10 24 */	fdivs f0, f0, f2
/* 8028111C 0027E05C  EE D6 00 32 */	fmuls f22, f22, f0
/* 80281120 0027E060  EE F7 00 32 */	fmuls f23, f23, f0
.L_80281124:
/* 80281124 0027E064  38 00 00 00 */	li r0, 0
/* 80281128 0027E068  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8028112C 0027E06C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 80281130 0027E070  90 01 00 48 */	stw r0, 0x48(r1)
/* 80281134 0027E074  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 80281138 0027E078  28 00 00 00 */	cmplwi r0, 0
/* 8028113C 0027E07C  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80281140 0027E080  90 01 00 40 */	stw r0, 0x40(r1)
/* 80281144 0027E084  90 61 00 44 */	stw r3, 0x44(r1)
/* 80281148 0027E088  40 82 00 1C */	bne .L_80281164
/* 8028114C 0027E08C  81 83 00 00 */	lwz r12, 0(r3)
/* 80281150 0027E090  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80281154 0027E094  7D 89 03 A6 */	mtctr r12
/* 80281158 0027E098  4E 80 04 21 */	bctrl 
/* 8028115C 0027E09C  90 61 00 40 */	stw r3, 0x40(r1)
/* 80281160 0027E0A0  48 00 02 94 */	b .L_802813F4
.L_80281164:
/* 80281164 0027E0A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80281168 0027E0A8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028116C 0027E0AC  7D 89 03 A6 */	mtctr r12
/* 80281170 0027E0B0  4E 80 04 21 */	bctrl 
/* 80281174 0027E0B4  90 61 00 40 */	stw r3, 0x40(r1)
/* 80281178 0027E0B8  48 00 00 58 */	b .L_802811D0
.L_8028117C:
/* 8028117C 0027E0BC  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80281180 0027E0C0  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80281184 0027E0C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80281188 0027E0C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8028118C 0027E0CC  7D 89 03 A6 */	mtctr r12
/* 80281190 0027E0D0  4E 80 04 21 */	bctrl 
/* 80281194 0027E0D4  7C 64 1B 78 */	mr r4, r3
/* 80281198 0027E0D8  80 61 00 48 */	lwz r3, 0x48(r1)
/* 8028119C 0027E0DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802811A0 0027E0E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802811A4 0027E0E4  7D 89 03 A6 */	mtctr r12
/* 802811A8 0027E0E8  4E 80 04 21 */	bctrl 
/* 802811AC 0027E0EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802811B0 0027E0F0  40 82 02 44 */	bne .L_802813F4
/* 802811B4 0027E0F4  80 61 00 44 */	lwz r3, 0x44(r1)
/* 802811B8 0027E0F8  80 81 00 40 */	lwz r4, 0x40(r1)
/* 802811BC 0027E0FC  81 83 00 00 */	lwz r12, 0(r3)
/* 802811C0 0027E100  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802811C4 0027E104  7D 89 03 A6 */	mtctr r12
/* 802811C8 0027E108  4E 80 04 21 */	bctrl 
/* 802811CC 0027E10C  90 61 00 40 */	stw r3, 0x40(r1)
.L_802811D0:
/* 802811D0 0027E110  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 802811D4 0027E114  38 61 00 3C */	addi r3, r1, 0x3c
/* 802811D8 0027E118  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802811DC 0027E11C  7D 89 03 A6 */	mtctr r12
/* 802811E0 0027E120  4E 80 04 21 */	bctrl 
/* 802811E4 0027E124  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802811E8 0027E128  41 82 FF 94 */	beq .L_8028117C
/* 802811EC 0027E12C  48 00 02 08 */	b .L_802813F4
.L_802811F0:
/* 802811F0 0027E130  80 61 00 44 */	lwz r3, 0x44(r1)
/* 802811F4 0027E134  81 83 00 00 */	lwz r12, 0(r3)
/* 802811F8 0027E138  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802811FC 0027E13C  7D 89 03 A6 */	mtctr r12
/* 80281200 0027E140  4E 80 04 21 */	bctrl 
/* 80281204 0027E144  81 83 00 00 */	lwz r12, 0(r3)
/* 80281208 0027E148  7C 7E 1B 78 */	mr r30, r3
/* 8028120C 0027E14C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80281210 0027E150  7D 89 03 A6 */	mtctr r12
/* 80281214 0027E154  4E 80 04 21 */	bctrl 
/* 80281218 0027E158  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028121C 0027E15C  41 82 01 1C */	beq .L_80281338
/* 80281220 0027E160  7F C4 F3 78 */	mr r4, r30
/* 80281224 0027E164  38 61 00 20 */	addi r3, r1, 0x20
/* 80281228 0027E168  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028122C 0027E16C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80281230 0027E170  7D 89 03 A6 */	mtctr r12
/* 80281234 0027E174  4E 80 04 21 */	bctrl 
/* 80281238 0027E178  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8028123C 0027E17C  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80281240 0027E180  EC 41 88 28 */	fsubs f2, f1, f17
/* 80281244 0027E184  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 80281248 0027E188  EC 80 80 28 */	fsubs f4, f0, f16
/* 8028124C 0027E18C  EC 01 90 28 */	fsubs f0, f1, f18
/* 80281250 0027E190  EC 35 00 B2 */	fmuls f1, f21, f2
/* 80281254 0027E194  EC 3D 09 3A */	fmadds f1, f29, f4, f1
/* 80281258 0027E198  EC BC 08 3A */	fmadds f5, f28, f0, f1
/* 8028125C 0027E19C  FC 05 98 40 */	fcmpo cr0, f5, f19
/* 80281260 0027E1A0  40 80 00 D8 */	bge .L_80281338
/* 80281264 0027E1A4  C0 C2 D2 38 */	lfs f6, lbl_8051B598@sda21(r2)
/* 80281268 0027E1A8  FC 05 30 40 */	fcmpo cr0, f5, f6
/* 8028126C 0027E1AC  40 81 00 CC */	ble .L_80281338
/* 80281270 0027E1B0  EC 79 00 B2 */	fmuls f3, f25, f2
/* 80281274 0027E1B4  EC 3F 00 B2 */	fmuls f1, f31, f2
/* 80281278 0027E1B8  EC 45 05 32 */	fmuls f2, f5, f20
/* 8028127C 0027E1BC  EC BA 19 3A */	fmadds f5, f26, f4, f3
/* 80281280 0027E1C0  EC 9B 09 3A */	fmadds f4, f27, f4, f1
/* 80281284 0027E1C4  EC 62 00 B2 */	fmuls f3, f2, f2
/* 80281288 0027E1C8  EC 38 28 3A */	fmadds f1, f24, f0, f5
/* 8028128C 0027E1CC  EC 1E 20 3A */	fmadds f0, f30, f0, f4
/* 80281290 0027E1D0  EC 81 00 72 */	fmuls f4, f1, f1
/* 80281294 0027E1D4  EC 80 20 3A */	fmadds f4, f0, f0, f4
/* 80281298 0027E1D8  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 8028129C 0027E1DC  40 80 00 9C */	bge .L_80281338
/* 802812A0 0027E1E0  FC 04 30 40 */	fcmpo cr0, f4, f6
/* 802812A4 0027E1E4  40 81 00 18 */	ble .L_802812BC
/* 802812A8 0027E1E8  40 81 00 10 */	ble .L_802812B8
/* 802812AC 0027E1EC  FC 60 20 34 */	frsqrte f3, f4
/* 802812B0 0027E1F0  EC C3 01 32 */	fmuls f6, f3, f4
/* 802812B4 0027E1F4  48 00 00 08 */	b .L_802812BC
.L_802812B8:
/* 802812B8 0027E1F8  FC C0 20 90 */	fmr f6, f4
.L_802812BC:
/* 802812BC 0027E1FC  EC E6 10 24 */	fdivs f7, f6, f2
/* 802812C0 0027E200  C0 42 D2 50 */	lfs f2, lbl_8051B5B0@sda21(r2)
/* 802812C4 0027E204  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802812C8 0027E208  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 802812CC 0027E20C  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractWind@ha
/* 802812D0 0027E210  C0 A2 D2 88 */	lfs f5, lbl_8051B5E8@sda21(r2)
/* 802812D4 0027E214  EC 82 38 28 */	fsubs f4, f2, f7
/* 802812D8 0027E218  C0 C5 06 04 */	lfs f6, 0x604(r5)
/* 802812DC 0027E21C  EC 7B 00 32 */	fmuls f3, f27, f0
/* 802812E0 0027E220  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 802812E4 0027E224  EC 1E 00 32 */	fmuls f0, f30, f0
/* 802812E8 0027E228  C0 42 D2 38 */	lfs f2, lbl_8051B598@sda21(r2)
/* 802812EC 0027E22C  EC 85 39 3A */	fmadds f4, f5, f4, f7
/* 802812F0 0027E230  90 01 00 64 */	stw r0, 0x64(r1)
/* 802812F4 0027E234  EC 76 18 7A */	fmadds f3, f22, f1, f3
/* 802812F8 0027E238  38 03 49 74 */	addi r0, r3, __vt__Q24Game12InteractWind@l
/* 802812FC 0027E23C  EC 17 00 7A */	fmadds f0, f23, f1, f0
/* 80281300 0027E240  93 E1 00 68 */	stw r31, 0x68(r1)
/* 80281304 0027E244  EC 24 00 F2 */	fmuls f1, f4, f3
/* 80281308 0027E248  90 01 00 64 */	stw r0, 0x64(r1)
/* 8028130C 0027E24C  EC 04 00 32 */	fmuls f0, f4, f0
/* 80281310 0027E250  7F C3 F3 78 */	mr r3, r30
/* 80281314 0027E254  D0 C1 00 6C */	stfs f6, 0x6c(r1)
/* 80281318 0027E258  38 81 00 64 */	addi r4, r1, 0x64
/* 8028131C 0027E25C  D0 21 00 70 */	stfs f1, 0x70(r1)
/* 80281320 0027E260  D0 41 00 74 */	stfs f2, 0x74(r1)
/* 80281324 0027E264  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 80281328 0027E268  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028132C 0027E26C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80281330 0027E270  7D 89 03 A6 */	mtctr r12
/* 80281334 0027E274  4E 80 04 21 */	bctrl 
.L_80281338:
/* 80281338 0027E278  80 01 00 48 */	lwz r0, 0x48(r1)
/* 8028133C 0027E27C  28 00 00 00 */	cmplwi r0, 0
/* 80281340 0027E280  40 82 00 24 */	bne .L_80281364
/* 80281344 0027E284  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80281348 0027E288  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8028134C 0027E28C  81 83 00 00 */	lwz r12, 0(r3)
/* 80281350 0027E290  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80281354 0027E294  7D 89 03 A6 */	mtctr r12
/* 80281358 0027E298  4E 80 04 21 */	bctrl 
/* 8028135C 0027E29C  90 61 00 40 */	stw r3, 0x40(r1)
/* 80281360 0027E2A0  48 00 00 94 */	b .L_802813F4
.L_80281364:
/* 80281364 0027E2A4  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80281368 0027E2A8  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8028136C 0027E2AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80281370 0027E2B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80281374 0027E2B4  7D 89 03 A6 */	mtctr r12
/* 80281378 0027E2B8  4E 80 04 21 */	bctrl 
/* 8028137C 0027E2BC  90 61 00 40 */	stw r3, 0x40(r1)
/* 80281380 0027E2C0  48 00 00 58 */	b .L_802813D8
.L_80281384:
/* 80281384 0027E2C4  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80281388 0027E2C8  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8028138C 0027E2CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80281390 0027E2D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80281394 0027E2D4  7D 89 03 A6 */	mtctr r12
/* 80281398 0027E2D8  4E 80 04 21 */	bctrl 
/* 8028139C 0027E2DC  7C 64 1B 78 */	mr r4, r3
/* 802813A0 0027E2E0  80 61 00 48 */	lwz r3, 0x48(r1)
/* 802813A4 0027E2E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802813A8 0027E2E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802813AC 0027E2EC  7D 89 03 A6 */	mtctr r12
/* 802813B0 0027E2F0  4E 80 04 21 */	bctrl 
/* 802813B4 0027E2F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802813B8 0027E2F8  40 82 00 3C */	bne .L_802813F4
/* 802813BC 0027E2FC  80 61 00 44 */	lwz r3, 0x44(r1)
/* 802813C0 0027E300  80 81 00 40 */	lwz r4, 0x40(r1)
/* 802813C4 0027E304  81 83 00 00 */	lwz r12, 0(r3)
/* 802813C8 0027E308  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802813CC 0027E30C  7D 89 03 A6 */	mtctr r12
/* 802813D0 0027E310  4E 80 04 21 */	bctrl 
/* 802813D4 0027E314  90 61 00 40 */	stw r3, 0x40(r1)
.L_802813D8:
/* 802813D8 0027E318  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 802813DC 0027E31C  38 61 00 3C */	addi r3, r1, 0x3c
/* 802813E0 0027E320  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802813E4 0027E324  7D 89 03 A6 */	mtctr r12
/* 802813E8 0027E328  4E 80 04 21 */	bctrl 
/* 802813EC 0027E32C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802813F0 0027E330  41 82 FF 94 */	beq .L_80281384
.L_802813F4:
/* 802813F4 0027E334  80 61 00 44 */	lwz r3, 0x44(r1)
/* 802813F8 0027E338  81 83 00 00 */	lwz r12, 0(r3)
/* 802813FC 0027E33C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80281400 0027E340  7D 89 03 A6 */	mtctr r12
/* 80281404 0027E344  4E 80 04 21 */	bctrl 
/* 80281408 0027E348  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8028140C 0027E34C  7C 04 18 40 */	cmplw r4, r3
/* 80281410 0027E350  40 82 FD E0 */	bne .L_802811F0
/* 80281414 0027E354  38 00 00 00 */	li r0, 0
/* 80281418 0027E358  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8028141C 0027E35C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80281420 0027E360  90 01 00 38 */	stw r0, 0x38(r1)
/* 80281424 0027E364  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80281428 0027E368  28 00 00 00 */	cmplwi r0, 0
/* 8028142C 0027E36C  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80281430 0027E370  90 01 00 30 */	stw r0, 0x30(r1)
/* 80281434 0027E374  90 61 00 34 */	stw r3, 0x34(r1)
/* 80281438 0027E378  40 82 00 1C */	bne .L_80281454
/* 8028143C 0027E37C  81 83 00 00 */	lwz r12, 0(r3)
/* 80281440 0027E380  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80281444 0027E384  7D 89 03 A6 */	mtctr r12
/* 80281448 0027E388  4E 80 04 21 */	bctrl 
/* 8028144C 0027E38C  90 61 00 30 */	stw r3, 0x30(r1)
/* 80281450 0027E390  48 00 02 C4 */	b .L_80281714
.L_80281454:
/* 80281454 0027E394  81 83 00 00 */	lwz r12, 0(r3)
/* 80281458 0027E398  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028145C 0027E39C  7D 89 03 A6 */	mtctr r12
/* 80281460 0027E3A0  4E 80 04 21 */	bctrl 
/* 80281464 0027E3A4  90 61 00 30 */	stw r3, 0x30(r1)
/* 80281468 0027E3A8  48 00 00 58 */	b .L_802814C0
.L_8028146C:
/* 8028146C 0027E3AC  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80281470 0027E3B0  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80281474 0027E3B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80281478 0027E3B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8028147C 0027E3BC  7D 89 03 A6 */	mtctr r12
/* 80281480 0027E3C0  4E 80 04 21 */	bctrl 
/* 80281484 0027E3C4  7C 64 1B 78 */	mr r4, r3
/* 80281488 0027E3C8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8028148C 0027E3CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80281490 0027E3D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80281494 0027E3D4  7D 89 03 A6 */	mtctr r12
/* 80281498 0027E3D8  4E 80 04 21 */	bctrl 
/* 8028149C 0027E3DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802814A0 0027E3E0  40 82 02 74 */	bne .L_80281714
/* 802814A4 0027E3E4  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802814A8 0027E3E8  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802814AC 0027E3EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802814B0 0027E3F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802814B4 0027E3F4  7D 89 03 A6 */	mtctr r12
/* 802814B8 0027E3F8  4E 80 04 21 */	bctrl 
/* 802814BC 0027E3FC  90 61 00 30 */	stw r3, 0x30(r1)
.L_802814C0:
/* 802814C0 0027E400  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 802814C4 0027E404  38 61 00 2C */	addi r3, r1, 0x2c
/* 802814C8 0027E408  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802814CC 0027E40C  7D 89 03 A6 */	mtctr r12
/* 802814D0 0027E410  4E 80 04 21 */	bctrl 
/* 802814D4 0027E414  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802814D8 0027E418  41 82 FF 94 */	beq .L_8028146C
/* 802814DC 0027E41C  48 00 02 38 */	b .L_80281714
.L_802814E0:
/* 802814E0 0027E420  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802814E4 0027E424  81 83 00 00 */	lwz r12, 0(r3)
/* 802814E8 0027E428  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802814EC 0027E42C  7D 89 03 A6 */	mtctr r12
/* 802814F0 0027E430  4E 80 04 21 */	bctrl 
/* 802814F4 0027E434  81 83 00 00 */	lwz r12, 0(r3)
/* 802814F8 0027E438  7C 7E 1B 78 */	mr r30, r3
/* 802814FC 0027E43C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80281500 0027E440  7D 89 03 A6 */	mtctr r12
/* 80281504 0027E444  4E 80 04 21 */	bctrl 
/* 80281508 0027E448  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028150C 0027E44C  41 82 01 4C */	beq .L_80281658
/* 80281510 0027E450  7F C3 F3 78 */	mr r3, r30
/* 80281514 0027E454  81 9E 00 00 */	lwz r12, 0(r30)
/* 80281518 0027E458  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 8028151C 0027E45C  7D 89 03 A6 */	mtctr r12
/* 80281520 0027E460  4E 80 04 21 */	bctrl 
/* 80281524 0027E464  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80281528 0027E468  41 82 01 30 */	beq .L_80281658
/* 8028152C 0027E46C  7F C4 F3 78 */	mr r4, r30
/* 80281530 0027E470  38 61 00 14 */	addi r3, r1, 0x14
/* 80281534 0027E474  81 9E 00 00 */	lwz r12, 0(r30)
/* 80281538 0027E478  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028153C 0027E47C  7D 89 03 A6 */	mtctr r12
/* 80281540 0027E480  4E 80 04 21 */	bctrl 
/* 80281544 0027E484  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80281548 0027E488  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8028154C 0027E48C  EC 41 88 28 */	fsubs f2, f1, f17
/* 80281550 0027E490  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80281554 0027E494  EC 60 80 28 */	fsubs f3, f0, f16
/* 80281558 0027E498  EC 81 90 28 */	fsubs f4, f1, f18
/* 8028155C 0027E49C  EC 15 00 B2 */	fmuls f0, f21, f2
/* 80281560 0027E4A0  EC 1D 00 FA */	fmadds f0, f29, f3, f0
/* 80281564 0027E4A4  EC DC 01 3A */	fmadds f6, f28, f4, f0
/* 80281568 0027E4A8  FC 06 98 40 */	fcmpo cr0, f6, f19
/* 8028156C 0027E4AC  40 80 00 EC */	bge .L_80281658
/* 80281570 0027E4B0  C0 A2 D2 38 */	lfs f5, lbl_8051B598@sda21(r2)
/* 80281574 0027E4B4  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 80281578 0027E4B8  40 81 00 E0 */	ble .L_80281658
/* 8028157C 0027E4BC  EC 39 00 B2 */	fmuls f1, f25, f2
/* 80281580 0027E4C0  EC 1F 00 B2 */	fmuls f0, f31, f2
/* 80281584 0027E4C4  EC 46 05 32 */	fmuls f2, f6, f20
/* 80281588 0027E4C8  EC 3A 08 FA */	fmadds f1, f26, f3, f1
/* 8028158C 0027E4CC  EC 1B 00 FA */	fmadds f0, f27, f3, f0
/* 80281590 0027E4D0  EC 62 00 B2 */	fmuls f3, f2, f2
/* 80281594 0027E4D4  EC 38 09 3A */	fmadds f1, f24, f4, f1
/* 80281598 0027E4D8  EC 1E 01 3A */	fmadds f0, f30, f4, f0
/* 8028159C 0027E4DC  EC 81 00 72 */	fmuls f4, f1, f1
/* 802815A0 0027E4E0  EC 80 20 3A */	fmadds f4, f0, f0, f4
/* 802815A4 0027E4E4  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802815A8 0027E4E8  40 80 00 B0 */	bge .L_80281658
/* 802815AC 0027E4EC  FC 04 28 40 */	fcmpo cr0, f4, f5
/* 802815B0 0027E4F0  40 81 00 14 */	ble .L_802815C4
/* 802815B4 0027E4F4  40 81 00 14 */	ble .L_802815C8
/* 802815B8 0027E4F8  FC 60 20 34 */	frsqrte f3, f4
/* 802815BC 0027E4FC  EC 83 01 32 */	fmuls f4, f3, f4
/* 802815C0 0027E500  48 00 00 08 */	b .L_802815C8
.L_802815C4:
/* 802815C4 0027E504  FC 80 28 90 */	fmr f4, f5
.L_802815C8:
/* 802815C8 0027E508  ED 24 10 24 */	fdivs f9, f4, f2
/* 802815CC 0027E50C  C0 42 D2 50 */	lfs f2, lbl_8051B5B0@sda21(r2)
/* 802815D0 0027E510  C0 E2 D2 90 */	lfs f7, lbl_8051B5F0@sda21(r2)
/* 802815D4 0027E514  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 802815D8 0027E518  C0 82 D2 58 */	lfs f4, lbl_8051B5B8@sda21(r2)
/* 802815DC 0027E51C  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractWind@ha
/* 802815E0 0027E520  EC DB 00 32 */	fmuls f6, f27, f0
/* 802815E4 0027E524  C1 02 D2 B0 */	lfs f8, lbl_8051B610@sda21(r2)
/* 802815E8 0027E528  EC 7E 00 32 */	fmuls f3, f30, f0
/* 802815EC 0027E52C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802815F0 0027E530  EC 42 48 28 */	fsubs f2, f2, f9
/* 802815F4 0027E534  C0 A2 D2 60 */	lfs f5, lbl_8051B5C0@sda21(r2)
/* 802815F8 0027E538  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 802815FC 0027E53C  EC E7 02 72 */	fmuls f7, f7, f9
/* 80281600 0027E540  EC 84 02 72 */	fmuls f4, f4, f9
/* 80281604 0027E544  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 80281608 0027E548  EC D6 30 7A */	fmadds f6, f22, f1, f6
/* 8028160C 0027E54C  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80281610 0027E550  EC E8 38 BA */	fmadds f7, f8, f2, f7
/* 80281614 0027E554  EC 37 18 7A */	fmadds f1, f23, f1, f3
/* 80281618 0027E558  EC 45 20 BA */	fmadds f2, f5, f2, f4
/* 8028161C 0027E55C  38 03 49 74 */	addi r0, r3, __vt__Q24Game12InteractWind@l
/* 80281620 0027E560  EC 67 01 B2 */	fmuls f3, f7, f6
/* 80281624 0027E564  93 E1 00 50 */	stw r31, 0x50(r1)
/* 80281628 0027E568  EC 27 00 72 */	fmuls f1, f7, f1
/* 8028162C 0027E56C  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80281630 0027E570  7F C3 F3 78 */	mr r3, r30
/* 80281634 0027E574  38 81 00 4C */	addi r4, r1, 0x4c
/* 80281638 0027E578  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 8028163C 0027E57C  D0 61 00 58 */	stfs f3, 0x58(r1)
/* 80281640 0027E580  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 80281644 0027E584  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 80281648 0027E588  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028164C 0027E58C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80281650 0027E590  7D 89 03 A6 */	mtctr r12
/* 80281654 0027E594  4E 80 04 21 */	bctrl 
.L_80281658:
/* 80281658 0027E598  80 01 00 38 */	lwz r0, 0x38(r1)
/* 8028165C 0027E59C  28 00 00 00 */	cmplwi r0, 0
/* 80281660 0027E5A0  40 82 00 24 */	bne .L_80281684
/* 80281664 0027E5A4  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80281668 0027E5A8  80 81 00 30 */	lwz r4, 0x30(r1)
/* 8028166C 0027E5AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80281670 0027E5B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80281674 0027E5B4  7D 89 03 A6 */	mtctr r12
/* 80281678 0027E5B8  4E 80 04 21 */	bctrl 
/* 8028167C 0027E5BC  90 61 00 30 */	stw r3, 0x30(r1)
/* 80281680 0027E5C0  48 00 00 94 */	b .L_80281714
.L_80281684:
/* 80281684 0027E5C4  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80281688 0027E5C8  80 81 00 30 */	lwz r4, 0x30(r1)
/* 8028168C 0027E5CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80281690 0027E5D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80281694 0027E5D4  7D 89 03 A6 */	mtctr r12
/* 80281698 0027E5D8  4E 80 04 21 */	bctrl 
/* 8028169C 0027E5DC  90 61 00 30 */	stw r3, 0x30(r1)
/* 802816A0 0027E5E0  48 00 00 58 */	b .L_802816F8
.L_802816A4:
/* 802816A4 0027E5E4  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802816A8 0027E5E8  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802816AC 0027E5EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802816B0 0027E5F0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802816B4 0027E5F4  7D 89 03 A6 */	mtctr r12
/* 802816B8 0027E5F8  4E 80 04 21 */	bctrl 
/* 802816BC 0027E5FC  7C 64 1B 78 */	mr r4, r3
/* 802816C0 0027E600  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802816C4 0027E604  81 83 00 00 */	lwz r12, 0(r3)
/* 802816C8 0027E608  81 8C 00 08 */	lwz r12, 8(r12)
/* 802816CC 0027E60C  7D 89 03 A6 */	mtctr r12
/* 802816D0 0027E610  4E 80 04 21 */	bctrl 
/* 802816D4 0027E614  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802816D8 0027E618  40 82 00 3C */	bne .L_80281714
/* 802816DC 0027E61C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802816E0 0027E620  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802816E4 0027E624  81 83 00 00 */	lwz r12, 0(r3)
/* 802816E8 0027E628  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802816EC 0027E62C  7D 89 03 A6 */	mtctr r12
/* 802816F0 0027E630  4E 80 04 21 */	bctrl 
/* 802816F4 0027E634  90 61 00 30 */	stw r3, 0x30(r1)
.L_802816F8:
/* 802816F8 0027E638  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 802816FC 0027E63C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80281700 0027E640  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80281704 0027E644  7D 89 03 A6 */	mtctr r12
/* 80281708 0027E648  4E 80 04 21 */	bctrl 
/* 8028170C 0027E64C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80281710 0027E650  41 82 FF 94 */	beq .L_802816A4
.L_80281714:
/* 80281714 0027E654  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80281718 0027E658  81 83 00 00 */	lwz r12, 0(r3)
/* 8028171C 0027E65C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80281720 0027E660  7D 89 03 A6 */	mtctr r12
/* 80281724 0027E664  4E 80 04 21 */	bctrl 
/* 80281728 0027E668  80 81 00 30 */	lwz r4, 0x30(r1)
/* 8028172C 0027E66C  7C 04 18 40 */	cmplw r4, r3
/* 80281730 0027E670  40 82 FD B0 */	bne .L_802814E0
/* 80281734 0027E674  7F E4 FB 78 */	mr r4, r31
/* 80281738 0027E678  38 61 00 08 */	addi r3, r1, 8
/* 8028173C 0027E67C  4B FF F5 D9 */	bl getAttackPosition__Q34Game3Mar3ObjFv
/* 80281740 0027E680  C0 01 00 08 */	lfs f0, 8(r1)
/* 80281744 0027E684  D0 1F 02 F8 */	stfs f0, 0x2f8(r31)
/* 80281748 0027E688  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8028174C 0027E68C  D0 1F 02 FC */	stfs f0, 0x2fc(r31)
/* 80281750 0027E690  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80281754 0027E694  D0 1F 03 00 */	stfs f0, 0x300(r31)
/* 80281758 0027E698  E3 E1 01 88 */	psq_l f31, 392(r1), 0, qr0
/* 8028175C 0027E69C  CB E1 01 80 */	lfd f31, 0x180(r1)
/* 80281760 0027E6A0  E3 C1 01 78 */	psq_l f30, 376(r1), 0, qr0
/* 80281764 0027E6A4  CB C1 01 70 */	lfd f30, 0x170(r1)
/* 80281768 0027E6A8  E3 A1 01 68 */	psq_l f29, 360(r1), 0, qr0
/* 8028176C 0027E6AC  CB A1 01 60 */	lfd f29, 0x160(r1)
/* 80281770 0027E6B0  E3 81 01 58 */	psq_l f28, 344(r1), 0, qr0
/* 80281774 0027E6B4  CB 81 01 50 */	lfd f28, 0x150(r1)
/* 80281778 0027E6B8  E3 61 01 48 */	psq_l f27, 328(r1), 0, qr0
/* 8028177C 0027E6BC  CB 61 01 40 */	lfd f27, 0x140(r1)
/* 80281780 0027E6C0  E3 41 01 38 */	psq_l f26, 312(r1), 0, qr0
/* 80281784 0027E6C4  CB 41 01 30 */	lfd f26, 0x130(r1)
/* 80281788 0027E6C8  E3 21 01 28 */	psq_l f25, 296(r1), 0, qr0
/* 8028178C 0027E6CC  CB 21 01 20 */	lfd f25, 0x120(r1)
/* 80281790 0027E6D0  E3 01 01 18 */	psq_l f24, 280(r1), 0, qr0
/* 80281794 0027E6D4  CB 01 01 10 */	lfd f24, 0x110(r1)
/* 80281798 0027E6D8  E2 E1 01 08 */	psq_l f23, 264(r1), 0, qr0
/* 8028179C 0027E6DC  CA E1 01 00 */	lfd f23, 0x100(r1)
/* 802817A0 0027E6E0  E2 C1 00 F8 */	psq_l f22, 248(r1), 0, qr0
/* 802817A4 0027E6E4  CA C1 00 F0 */	lfd f22, 0xf0(r1)
/* 802817A8 0027E6E8  E2 A1 00 E8 */	psq_l f21, 232(r1), 0, qr0
/* 802817AC 0027E6EC  CA A1 00 E0 */	lfd f21, 0xe0(r1)
/* 802817B0 0027E6F0  E2 81 00 D8 */	psq_l f20, 216(r1), 0, qr0
/* 802817B4 0027E6F4  CA 81 00 D0 */	lfd f20, 0xd0(r1)
/* 802817B8 0027E6F8  E2 61 00 C8 */	psq_l f19, 200(r1), 0, qr0
/* 802817BC 0027E6FC  CA 61 00 C0 */	lfd f19, 0xc0(r1)
/* 802817C0 0027E700  E2 41 00 B8 */	psq_l f18, 184(r1), 0, qr0
/* 802817C4 0027E704  CA 41 00 B0 */	lfd f18, 0xb0(r1)
/* 802817C8 0027E708  E2 21 00 A8 */	psq_l f17, 168(r1), 0, qr0
/* 802817CC 0027E70C  CA 21 00 A0 */	lfd f17, 0xa0(r1)
/* 802817D0 0027E710  E2 01 00 98 */	psq_l f16, 152(r1), 0, qr0
/* 802817D4 0027E714  CA 01 00 90 */	lfd f16, 0x90(r1)
/* 802817D8 0027E718  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 802817DC 0027E71C  80 01 01 94 */	lwz r0, 0x194(r1)
/* 802817E0 0027E720  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 802817E4 0027E724  7C 08 03 A6 */	mtlr r0
/* 802817E8 0027E728  38 21 01 90 */	addi r1, r1, 0x190
/* 802817EC 0027E72C  4E 80 00 20 */	blr 
.endfn windTarget__Q34Game3Mar3ObjFv

.fn createEffect__Q34Game3Mar3ObjFv, global
/* 802817F0 0027E730  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802817F4 0027E734  7C 08 02 A6 */	mflr r0
/* 802817F8 0027E738  90 01 00 14 */	stw r0, 0x14(r1)
/* 802817FC 0027E73C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80281800 0027E740  7C 7F 1B 78 */	mr r31, r3
/* 80281804 0027E744  38 60 00 2C */	li r3, 0x2c
/* 80281808 0027E748  93 C1 00 08 */	stw r30, 8(r1)
/* 8028180C 0027E74C  4B DA 26 99 */	bl __nw__FUl
/* 80281810 0027E750  7C 7E 1B 79 */	or. r30, r3, r3
/* 80281814 0027E754  41 82 00 20 */	beq .L_80281834
/* 80281818 0027E758  38 80 00 00 */	li r4, 0
/* 8028181C 0027E75C  38 A0 00 71 */	li r5, 0x71
/* 80281820 0027E760  38 C0 00 72 */	li r6, 0x72
/* 80281824 0027E764  48 12 EC 79 */	bl __ct__Q23efx10TChaseMtx2FPA4_fUsUs
/* 80281828 0027E768  3C 60 80 4D */	lis r3, __vt__Q23efx10TFusenDead@ha
/* 8028182C 0027E76C  38 03 89 2C */	addi r0, r3, __vt__Q23efx10TFusenDead@l
/* 80281830 0027E770  90 1E 00 00 */	stw r0, 0(r30)
.L_80281834:
/* 80281834 0027E774  93 DF 03 10 */	stw r30, 0x310(r31)
/* 80281838 0027E778  38 60 00 34 */	li r3, 0x34
/* 8028183C 0027E77C  4B DA 26 69 */	bl __nw__FUl
/* 80281840 0027E780  7C 7E 1B 79 */	or. r30, r3, r3
/* 80281844 0027E784  41 82 00 24 */	beq .L_80281868
/* 80281848 0027E788  38 9F 02 F8 */	addi r4, r31, 0x2f8
/* 8028184C 0027E78C  38 BF 01 FC */	addi r5, r31, 0x1fc
/* 80281850 0027E790  38 C0 00 6C */	li r6, 0x6c
/* 80281854 0027E794  38 E0 00 6D */	li r7, 0x6d
/* 80281858 0027E798  48 12 F1 75 */	bl "__ct__Q23efx14TChasePosYRot2FP10Vector3<f>PfUsUs"
/* 8028185C 0027E79C  3C 60 80 4D */	lis r3, __vt__Q23efx12TFusenAirhit@ha
/* 80281860 0027E7A0  38 03 89 10 */	addi r0, r3, __vt__Q23efx12TFusenAirhit@l
/* 80281864 0027E7A4  90 1E 00 00 */	stw r0, 0(r30)
.L_80281868:
/* 80281868 0027E7A8  93 DF 03 14 */	stw r30, 0x314(r31)
/* 8028186C 0027E7AC  38 60 00 40 */	li r3, 0x40
/* 80281870 0027E7B0  4B DA 26 35 */	bl __nw__FUl
/* 80281874 0027E7B4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80281878 0027E7B8  41 82 00 24 */	beq .L_8028189C
/* 8028187C 0027E7BC  38 80 00 00 */	li r4, 0
/* 80281880 0027E7C0  38 A0 00 6E */	li r5, 0x6e
/* 80281884 0027E7C4  38 C0 00 6F */	li r6, 0x6f
/* 80281888 0027E7C8  38 E0 00 70 */	li r7, 0x70
/* 8028188C 0027E7CC  48 12 ED 21 */	bl __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs
/* 80281890 0027E7D0  3C 60 80 4D */	lis r3, __vt__Q23efx9TFusenAir@ha
/* 80281894 0027E7D4  38 03 88 F4 */	addi r0, r3, __vt__Q23efx9TFusenAir@l
/* 80281898 0027E7D8  90 1E 00 00 */	stw r0, 0(r30)
.L_8028189C:
/* 8028189C 0027E7DC  93 DF 03 18 */	stw r30, 0x318(r31)
/* 802818A0 0027E7E0  38 60 00 14 */	li r3, 0x14
/* 802818A4 0027E7E4  4B DA 26 01 */	bl __nw__FUl
/* 802818A8 0027E7E8  28 03 00 00 */	cmplwi r3, 0
/* 802818AC 0027E7EC  41 82 00 78 */	beq .L_80281924
/* 802818B0 0027E7F0  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802818B4 0027E7F4  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802818B8 0027E7F8  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802818BC 0027E7FC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802818C0 0027E800  90 03 00 00 */	stw r0, 0(r3)
/* 802818C4 0027E804  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802818C8 0027E808  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802818CC 0027E80C  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 802818D0 0027E810  90 03 00 04 */	stw r0, 4(r3)
/* 802818D4 0027E814  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 802818D8 0027E818  3C 80 80 4D */	lis r4, __vt__Q23efx9TFusenSui@ha
/* 802818DC 0027E81C  38 05 00 14 */	addi r0, r5, 0x14
/* 802818E0 0027E820  90 A3 00 00 */	stw r5, 0(r3)
/* 802818E4 0027E824  38 84 88 A8 */	addi r4, r4, __vt__Q23efx9TFusenSui@l
/* 802818E8 0027E828  39 20 00 00 */	li r9, 0
/* 802818EC 0027E82C  39 00 02 B2 */	li r8, 0x2b2
/* 802818F0 0027E830  90 03 00 04 */	stw r0, 4(r3)
/* 802818F4 0027E834  38 C7 00 14 */	addi r6, r7, 0x14
/* 802818F8 0027E838  38 A0 00 73 */	li r5, 0x73
/* 802818FC 0027E83C  38 04 00 14 */	addi r0, r4, 0x14
/* 80281900 0027E840  91 23 00 08 */	stw r9, 8(r3)
/* 80281904 0027E844  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80281908 0027E848  99 23 00 0E */	stb r9, 0xe(r3)
/* 8028190C 0027E84C  90 E3 00 00 */	stw r7, 0(r3)
/* 80281910 0027E850  90 C3 00 04 */	stw r6, 4(r3)
/* 80281914 0027E854  91 23 00 10 */	stw r9, 0x10(r3)
/* 80281918 0027E858  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8028191C 0027E85C  90 83 00 00 */	stw r4, 0(r3)
/* 80281920 0027E860  90 03 00 04 */	stw r0, 4(r3)
.L_80281924:
/* 80281924 0027E864  90 7F 03 1C */	stw r3, 0x31c(r31)
/* 80281928 0027E868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028192C 0027E86C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80281930 0027E870  83 C1 00 08 */	lwz r30, 8(r1)
/* 80281934 0027E874  7C 08 03 A6 */	mtlr r0
/* 80281938 0027E878  38 21 00 10 */	addi r1, r1, 0x10
/* 8028193C 0027E87C  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game3Mar3ObjFv

.fn setupEffect__Q34Game3Mar3ObjFv, global
/* 80281940 0027E880  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80281944 0027E884  7C 08 02 A6 */	mflr r0
/* 80281948 0027E888  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028194C 0027E88C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80281950 0027E890  7C 7F 1B 78 */	mr r31, r3
/* 80281954 0027E894  80 63 03 10 */	lwz r3, 0x310(r3)
/* 80281958 0027E898  80 9F 02 DC */	lwz r4, 0x2dc(r31)
/* 8028195C 0027E89C  48 12 EC 45 */	bl setMtxptr__Q23efx10TChaseMtx2FPA4_f
/* 80281960 0027E8A0  80 7F 03 18 */	lwz r3, 0x318(r31)
/* 80281964 0027E8A4  80 9F 02 DC */	lwz r4, 0x2dc(r31)
/* 80281968 0027E8A8  48 12 EC E5 */	bl setMtxptr__Q23efx10TChaseMtx3FPA4_f
/* 8028196C 0027E8AC  80 1F 02 DC */	lwz r0, 0x2dc(r31)
/* 80281970 0027E8B0  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 80281974 0027E8B4  90 03 00 10 */	stw r0, 0x10(r3)
/* 80281978 0027E8B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028197C 0027E8BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80281980 0027E8C0  7C 08 03 A6 */	mtlr r0
/* 80281984 0027E8C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80281988 0027E8C8  4E 80 00 20 */	blr 
.endfn setupEffect__Q34Game3Mar3ObjFv

.fn startDeadEffect__Q34Game3Mar3ObjFv, global
/* 8028198C 0027E8CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80281990 0027E8D0  7C 08 02 A6 */	mflr r0
/* 80281994 0027E8D4  38 80 00 00 */	li r4, 0
/* 80281998 0027E8D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028199C 0027E8DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802819A0 0027E8E0  7C 7F 1B 78 */	mr r31, r3
/* 802819A4 0027E8E4  80 63 03 10 */	lwz r3, 0x310(r3)
/* 802819A8 0027E8E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802819AC 0027E8EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802819B0 0027E8F0  7D 89 03 A6 */	mtctr r12
/* 802819B4 0027E8F4  4E 80 04 21 */	bctrl 
/* 802819B8 0027E8F8  80 7F 03 14 */	lwz r3, 0x314(r31)
/* 802819BC 0027E8FC  81 83 00 00 */	lwz r12, 0(r3)
/* 802819C0 0027E900  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802819C4 0027E904  7D 89 03 A6 */	mtctr r12
/* 802819C8 0027E908  4E 80 04 21 */	bctrl 
/* 802819CC 0027E90C  80 7F 03 18 */	lwz r3, 0x318(r31)
/* 802819D0 0027E910  81 83 00 00 */	lwz r12, 0(r3)
/* 802819D4 0027E914  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802819D8 0027E918  7D 89 03 A6 */	mtctr r12
/* 802819DC 0027E91C  4E 80 04 21 */	bctrl 
/* 802819E0 0027E920  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 802819E4 0027E924  81 83 00 00 */	lwz r12, 0(r3)
/* 802819E8 0027E928  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802819EC 0027E92C  7D 89 03 A6 */	mtctr r12
/* 802819F0 0027E930  4E 80 04 21 */	bctrl 
/* 802819F4 0027E934  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802819F8 0027E938  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802819FC 0027E93C  7C 08 03 A6 */	mtlr r0
/* 80281A00 0027E940  38 21 00 10 */	addi r1, r1, 0x10
/* 80281A04 0027E944  4E 80 00 20 */	blr 
.endfn startDeadEffect__Q34Game3Mar3ObjFv

.fn createSuckEffect__Q34Game3Mar3ObjFv, global
/* 80281A08 0027E948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80281A0C 0027E94C  7C 08 02 A6 */	mflr r0
/* 80281A10 0027E950  38 80 00 00 */	li r4, 0
/* 80281A14 0027E954  90 01 00 14 */	stw r0, 0x14(r1)
/* 80281A18 0027E958  80 63 03 1C */	lwz r3, 0x31c(r3)
/* 80281A1C 0027E95C  81 83 00 00 */	lwz r12, 0(r3)
/* 80281A20 0027E960  81 8C 00 08 */	lwz r12, 8(r12)
/* 80281A24 0027E964  7D 89 03 A6 */	mtctr r12
/* 80281A28 0027E968  4E 80 04 21 */	bctrl 
/* 80281A2C 0027E96C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80281A30 0027E970  7C 08 03 A6 */	mtlr r0
/* 80281A34 0027E974  38 21 00 10 */	addi r1, r1, 0x10
/* 80281A38 0027E978  4E 80 00 20 */	blr 
.endfn createSuckEffect__Q34Game3Mar3ObjFv

.fn startWindEffect__Q34Game3Mar3ObjFv, global
/* 80281A3C 0027E97C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80281A40 0027E980  7C 08 02 A6 */	mflr r0
/* 80281A44 0027E984  90 01 00 24 */	stw r0, 0x24(r1)
/* 80281A48 0027E988  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80281A4C 0027E98C  7C 7F 1B 78 */	mr r31, r3
/* 80281A50 0027E990  38 61 00 08 */	addi r3, r1, 8
/* 80281A54 0027E994  7F E4 FB 78 */	mr r4, r31
/* 80281A58 0027E998  4B FF F2 BD */	bl getAttackPosition__Q34Game3Mar3ObjFv
/* 80281A5C 0027E99C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80281A60 0027E9A0  D0 1F 02 F8 */	stfs f0, 0x2f8(r31)
/* 80281A64 0027E9A4  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80281A68 0027E9A8  D0 1F 02 FC */	stfs f0, 0x2fc(r31)
/* 80281A6C 0027E9AC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80281A70 0027E9B0  D0 1F 03 00 */	stfs f0, 0x300(r31)
/* 80281A74 0027E9B4  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 80281A78 0027E9B8  81 83 00 00 */	lwz r12, 0(r3)
/* 80281A7C 0027E9BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80281A80 0027E9C0  7D 89 03 A6 */	mtctr r12
/* 80281A84 0027E9C4  4E 80 04 21 */	bctrl 
/* 80281A88 0027E9C8  80 7F 03 18 */	lwz r3, 0x318(r31)
/* 80281A8C 0027E9CC  38 80 00 00 */	li r4, 0
/* 80281A90 0027E9D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80281A94 0027E9D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80281A98 0027E9D8  7D 89 03 A6 */	mtctr r12
/* 80281A9C 0027E9DC  4E 80 04 21 */	bctrl 
/* 80281AA0 0027E9E0  80 7F 03 14 */	lwz r3, 0x314(r31)
/* 80281AA4 0027E9E4  38 80 00 00 */	li r4, 0
/* 80281AA8 0027E9E8  81 83 00 00 */	lwz r12, 0(r3)
/* 80281AAC 0027E9EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80281AB0 0027E9F0  7D 89 03 A6 */	mtctr r12
/* 80281AB4 0027E9F4  4E 80 04 21 */	bctrl 
/* 80281AB8 0027E9F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80281ABC 0027E9FC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80281AC0 0027EA00  7C 08 03 A6 */	mtlr r0
/* 80281AC4 0027EA04  38 21 00 20 */	addi r1, r1, 0x20
/* 80281AC8 0027EA08  4E 80 00 20 */	blr 
.endfn startWindEffect__Q34Game3Mar3ObjFv

.fn finishWindEffect__Q34Game3Mar3ObjFv, global
/* 80281ACC 0027EA0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80281AD0 0027EA10  7C 08 02 A6 */	mflr r0
/* 80281AD4 0027EA14  90 01 00 14 */	stw r0, 0x14(r1)
/* 80281AD8 0027EA18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80281ADC 0027EA1C  7C 7F 1B 78 */	mr r31, r3
/* 80281AE0 0027EA20  80 63 03 10 */	lwz r3, 0x310(r3)
/* 80281AE4 0027EA24  81 83 00 00 */	lwz r12, 0(r3)
/* 80281AE8 0027EA28  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80281AEC 0027EA2C  7D 89 03 A6 */	mtctr r12
/* 80281AF0 0027EA30  4E 80 04 21 */	bctrl 
/* 80281AF4 0027EA34  80 7F 03 14 */	lwz r3, 0x314(r31)
/* 80281AF8 0027EA38  81 83 00 00 */	lwz r12, 0(r3)
/* 80281AFC 0027EA3C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80281B00 0027EA40  7D 89 03 A6 */	mtctr r12
/* 80281B04 0027EA44  4E 80 04 21 */	bctrl 
/* 80281B08 0027EA48  80 7F 03 18 */	lwz r3, 0x318(r31)
/* 80281B0C 0027EA4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80281B10 0027EA50  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80281B14 0027EA54  7D 89 03 A6 */	mtctr r12
/* 80281B18 0027EA58  4E 80 04 21 */	bctrl 
/* 80281B1C 0027EA5C  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 80281B20 0027EA60  81 83 00 00 */	lwz r12, 0(r3)
/* 80281B24 0027EA64  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80281B28 0027EA68  7D 89 03 A6 */	mtctr r12
/* 80281B2C 0027EA6C  4E 80 04 21 */	bctrl 
/* 80281B30 0027EA70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80281B34 0027EA74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80281B38 0027EA78  7C 08 03 A6 */	mtlr r0
/* 80281B3C 0027EA7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80281B40 0027EA80  4E 80 00 20 */	blr 
.endfn finishWindEffect__Q34Game3Mar3ObjFv

.fn createDownEffect__Q34Game3Mar3ObjFv, global
/* 80281B44 0027EA84  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80281B48 0027EA88  7C 08 02 A6 */	mflr r0
/* 80281B4C 0027EA8C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80281B50 0027EA90  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80281B54 0027EA94  7C 7F 1B 78 */	mr r31, r3
/* 80281B58 0027EA98  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 80281B5C 0027EA9C  C0 03 02 48 */	lfs f0, 0x248(r3)
/* 80281B60 0027EAA0  C0 63 01 90 */	lfs f3, 0x190(r3)
/* 80281B64 0027EAA4  EC 81 00 2A */	fadds f4, f1, f0
/* 80281B68 0027EAA8  C0 43 02 44 */	lfs f2, 0x244(r3)
/* 80281B6C 0027EAAC  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 80281B70 0027EAB0  C0 03 02 40 */	lfs f0, 0x240(r3)
/* 80281B74 0027EAB4  EC 43 10 2A */	fadds f2, f3, f2
/* 80281B78 0027EAB8  EC 01 00 2A */	fadds f0, f1, f0
/* 80281B7C 0027EABC  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 80281B80 0027EAC0  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80281B84 0027EAC4  D0 01 00 08 */	stfs f0, 8(r1)
/* 80281B88 0027EAC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80281B8C 0027EACC  81 8C 02 EC */	lwz r12, 0x2ec(r12)
/* 80281B90 0027EAD0  7D 89 03 A6 */	mtctr r12
/* 80281B94 0027EAD4  4E 80 04 21 */	bctrl 
/* 80281B98 0027EAD8  7F E3 FB 78 */	mr r3, r31
/* 80281B9C 0027EADC  38 81 00 08 */	addi r4, r1, 8
/* 80281BA0 0027EAE0  4B E8 1F B1 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 80281BA4 0027EAE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80281BA8 0027EAE8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80281BAC 0027EAEC  7C 08 03 A6 */	mtlr r0
/* 80281BB0 0027EAF0  38 21 00 20 */	addi r1, r1, 0x20
/* 80281BB4 0027EAF4  4E 80 00 20 */	blr 
.endfn createDownEffect__Q34Game3Mar3ObjFv

.fn getDownSmokeScale__Q34Game3Mar3ObjFv, weak
/* 80281BB8 0027EAF8  C0 22 D2 B4 */	lfs f1, lbl_8051B614@sda21(r2)
/* 80281BBC 0027EAFC  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game3Mar3ObjFv

.fn effectDrawOn__Q34Game3Mar3ObjFv, global
/* 80281BC0 0027EB00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80281BC4 0027EB04  7C 08 02 A6 */	mflr r0
/* 80281BC8 0027EB08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80281BCC 0027EB0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80281BD0 0027EB10  7C 7F 1B 78 */	mr r31, r3
/* 80281BD4 0027EB14  80 63 03 10 */	lwz r3, 0x310(r3)
/* 80281BD8 0027EB18  81 83 00 00 */	lwz r12, 0(r3)
/* 80281BDC 0027EB1C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80281BE0 0027EB20  7D 89 03 A6 */	mtctr r12
/* 80281BE4 0027EB24  4E 80 04 21 */	bctrl 
/* 80281BE8 0027EB28  80 7F 03 14 */	lwz r3, 0x314(r31)
/* 80281BEC 0027EB2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80281BF0 0027EB30  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80281BF4 0027EB34  7D 89 03 A6 */	mtctr r12
/* 80281BF8 0027EB38  4E 80 04 21 */	bctrl 
/* 80281BFC 0027EB3C  80 7F 03 18 */	lwz r3, 0x318(r31)
/* 80281C00 0027EB40  81 83 00 00 */	lwz r12, 0(r3)
/* 80281C04 0027EB44  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80281C08 0027EB48  7D 89 03 A6 */	mtctr r12
/* 80281C0C 0027EB4C  4E 80 04 21 */	bctrl 
/* 80281C10 0027EB50  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 80281C14 0027EB54  81 83 00 00 */	lwz r12, 0(r3)
/* 80281C18 0027EB58  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80281C1C 0027EB5C  7D 89 03 A6 */	mtctr r12
/* 80281C20 0027EB60  4E 80 04 21 */	bctrl 
/* 80281C24 0027EB64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80281C28 0027EB68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80281C2C 0027EB6C  7C 08 03 A6 */	mtlr r0
/* 80281C30 0027EB70  38 21 00 10 */	addi r1, r1, 0x10
/* 80281C34 0027EB74  4E 80 00 20 */	blr 
.endfn effectDrawOn__Q34Game3Mar3ObjFv

.fn effectDrawOff__Q34Game3Mar3ObjFv, global
/* 80281C38 0027EB78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80281C3C 0027EB7C  7C 08 02 A6 */	mflr r0
/* 80281C40 0027EB80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80281C44 0027EB84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80281C48 0027EB88  7C 7F 1B 78 */	mr r31, r3
/* 80281C4C 0027EB8C  80 63 03 10 */	lwz r3, 0x310(r3)
/* 80281C50 0027EB90  81 83 00 00 */	lwz r12, 0(r3)
/* 80281C54 0027EB94  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80281C58 0027EB98  7D 89 03 A6 */	mtctr r12
/* 80281C5C 0027EB9C  4E 80 04 21 */	bctrl 
/* 80281C60 0027EBA0  80 7F 03 14 */	lwz r3, 0x314(r31)
/* 80281C64 0027EBA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80281C68 0027EBA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80281C6C 0027EBAC  7D 89 03 A6 */	mtctr r12
/* 80281C70 0027EBB0  4E 80 04 21 */	bctrl 
/* 80281C74 0027EBB4  80 7F 03 18 */	lwz r3, 0x318(r31)
/* 80281C78 0027EBB8  81 83 00 00 */	lwz r12, 0(r3)
/* 80281C7C 0027EBBC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80281C80 0027EBC0  7D 89 03 A6 */	mtctr r12
/* 80281C84 0027EBC4  4E 80 04 21 */	bctrl 
/* 80281C88 0027EBC8  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 80281C8C 0027EBCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80281C90 0027EBD0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80281C94 0027EBD4  7D 89 03 A6 */	mtctr r12
/* 80281C98 0027EBD8  4E 80 04 21 */	bctrl 
/* 80281C9C 0027EBDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80281CA0 0027EBE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80281CA4 0027EBE4  7C 08 03 A6 */	mtlr r0
/* 80281CA8 0027EBE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80281CAC 0027EBEC  4E 80 00 20 */	blr 
.endfn effectDrawOff__Q34Game3Mar3ObjFv

.fn __dt__Q23efx9TFusenSuiFv, weak
/* 80281CB0 0027EBF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80281CB4 0027EBF4  7C 08 02 A6 */	mflr r0
/* 80281CB8 0027EBF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80281CBC 0027EBFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80281CC0 0027EC00  7C 9F 23 78 */	mr r31, r4
/* 80281CC4 0027EC04  93 C1 00 08 */	stw r30, 8(r1)
/* 80281CC8 0027EC08  7C 7E 1B 79 */	or. r30, r3, r3
/* 80281CCC 0027EC0C  41 82 00 64 */	beq .L_80281D30
/* 80281CD0 0027EC10  3C 60 80 4D */	lis r3, __vt__Q23efx9TFusenSui@ha
/* 80281CD4 0027EC14  38 63 88 A8 */	addi r3, r3, __vt__Q23efx9TFusenSui@l
/* 80281CD8 0027EC18  90 7E 00 00 */	stw r3, 0(r30)
/* 80281CDC 0027EC1C  38 03 00 14 */	addi r0, r3, 0x14
/* 80281CE0 0027EC20  90 1E 00 04 */	stw r0, 4(r30)
/* 80281CE4 0027EC24  41 82 00 3C */	beq .L_80281D20
/* 80281CE8 0027EC28  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 80281CEC 0027EC2C  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 80281CF0 0027EC30  90 7E 00 00 */	stw r3, 0(r30)
/* 80281CF4 0027EC34  38 03 00 14 */	addi r0, r3, 0x14
/* 80281CF8 0027EC38  90 1E 00 04 */	stw r0, 4(r30)
/* 80281CFC 0027EC3C  41 82 00 24 */	beq .L_80281D20
/* 80281D00 0027EC40  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80281D04 0027EC44  38 7E 00 04 */	addi r3, r30, 4
/* 80281D08 0027EC48  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80281D0C 0027EC4C  38 80 00 00 */	li r4, 0
/* 80281D10 0027EC50  90 BE 00 00 */	stw r5, 0(r30)
/* 80281D14 0027EC54  38 05 00 14 */	addi r0, r5, 0x14
/* 80281D18 0027EC58  90 1E 00 04 */	stw r0, 4(r30)
/* 80281D1C 0027EC5C  4B E0 DF 81 */	bl __dt__18JPAEmitterCallBackFv
.L_80281D20:
/* 80281D20 0027EC60  7F E0 07 35 */	extsh. r0, r31
/* 80281D24 0027EC64  40 81 00 0C */	ble .L_80281D30
/* 80281D28 0027EC68  7F C3 F3 78 */	mr r3, r30
/* 80281D2C 0027EC6C  4B DA 23 89 */	bl __dl__FPv
.L_80281D30:
/* 80281D30 0027EC70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80281D34 0027EC74  7F C3 F3 78 */	mr r3, r30
/* 80281D38 0027EC78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80281D3C 0027EC7C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80281D40 0027EC80  7C 08 03 A6 */	mtlr r0
/* 80281D44 0027EC84  38 21 00 10 */	addi r1, r1, 0x10
/* 80281D48 0027EC88  4E 80 00 20 */	blr 
.endfn __dt__Q23efx9TFusenSuiFv

.fn __dt__Q34Game3Mar3ObjFv, weak
/* 80281D4C 0027EC8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80281D50 0027EC90  7C 08 02 A6 */	mflr r0
/* 80281D54 0027EC94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80281D58 0027EC98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80281D5C 0027EC9C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80281D60 0027ECA0  93 C1 00 08 */	stw r30, 8(r1)
/* 80281D64 0027ECA4  7C 9E 23 78 */	mr r30, r4
/* 80281D68 0027ECA8  41 82 00 84 */	beq .L_80281DEC
/* 80281D6C 0027ECAC  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar3Obj@ha
/* 80281D70 0027ECB0  38 1F 03 24 */	addi r0, r31, 0x324
/* 80281D74 0027ECB4  38 83 89 48 */	addi r4, r3, __vt__Q34Game3Mar3Obj@l
/* 80281D78 0027ECB8  90 9F 00 00 */	stw r4, 0(r31)
/* 80281D7C 0027ECBC  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 80281D80 0027ECC0  38 84 02 FC */	addi r4, r4, 0x2fc
/* 80281D84 0027ECC4  90 7F 01 78 */	stw r3, 0x178(r31)
/* 80281D88 0027ECC8  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 80281D8C 0027ECCC  90 83 00 00 */	stw r4, 0(r3)
/* 80281D90 0027ECD0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 80281D94 0027ECD4  7C 03 00 50 */	subf r0, r3, r0
/* 80281D98 0027ECD8  90 03 00 0C */	stw r0, 0xc(r3)
/* 80281D9C 0027ECDC  41 82 00 40 */	beq .L_80281DDC
/* 80281DA0 0027ECE0  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 80281DA4 0027ECE4  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 80281DA8 0027ECE8  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 80281DAC 0027ECEC  38 7F 02 90 */	addi r3, r31, 0x290
/* 80281DB0 0027ECF0  90 9F 00 00 */	stw r4, 0(r31)
/* 80281DB4 0027ECF4  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 80281DB8 0027ECF8  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 80281DBC 0027ECFC  38 80 FF FF */	li r4, -1
/* 80281DC0 0027ED00  90 BF 01 78 */	stw r5, 0x178(r31)
/* 80281DC4 0027ED04  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 80281DC8 0027ED08  90 C5 00 00 */	stw r6, 0(r5)
/* 80281DCC 0027ED0C  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 80281DD0 0027ED10  7C 05 00 50 */	subf r0, r5, r0
/* 80281DD4 0027ED14  90 05 00 0C */	stw r0, 0xc(r5)
/* 80281DD8 0027ED18  48 18 F7 B1 */	bl __dt__5CNodeFv
.L_80281DDC:
/* 80281DDC 0027ED1C  7F C0 07 35 */	extsh. r0, r30
/* 80281DE0 0027ED20  40 81 00 0C */	ble .L_80281DEC
/* 80281DE4 0027ED24  7F E3 FB 78 */	mr r3, r31
/* 80281DE8 0027ED28  4B DA 22 CD */	bl __dl__FPv
.L_80281DEC:
/* 80281DEC 0027ED2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80281DF0 0027ED30  7F E3 FB 78 */	mr r3, r31
/* 80281DF4 0027ED34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80281DF8 0027ED38  83 C1 00 08 */	lwz r30, 8(r1)
/* 80281DFC 0027ED3C  7C 08 03 A6 */	mtlr r0
/* 80281E00 0027ED40  38 21 00 10 */	addi r1, r1, 0x10
/* 80281E04 0027ED44  4E 80 00 20 */	blr 
.endfn __dt__Q34Game3Mar3ObjFv

.fn inWaterCallback__Q34Game3Mar3ObjFPQ24Game8WaterBox, weak
/* 80281E08 0027ED48  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q34Game3Mar3ObjFPQ24Game8WaterBox

.fn outWaterCallback__Q34Game3Mar3ObjFv, weak
/* 80281E0C 0027ED4C  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q34Game3Mar3ObjFv

.fn throwupItemInDeathProcedure__Q34Game3Mar3ObjFv, weak
/* 80281E10 0027ED50  4E 80 00 20 */	blr 
.endfn throwupItemInDeathProcedure__Q34Game3Mar3ObjFv

.fn getEnemyTypeID__Q34Game3Mar3ObjFv, weak
/* 80281E14 0027ED54  38 60 00 1D */	li r3, 0x1d
/* 80281E18 0027ED58  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game3Mar3ObjFv

.fn "@804@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 80281E1C 0027ED5C  39 60 00 0C */	li r11, 0xc
/* 80281E20 0027ED60  7D 63 58 2E */	lwzx r11, r3, r11
/* 80281E24 0027ED64  7C 63 5A 14 */	add r3, r3, r11
/* 80281E28 0027ED68  38 63 FC DC */	addi r3, r3, -804
/* 80281E2C 0027ED6C  4B E8 4A F0 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@804@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@804@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 80281E30 0027ED70  39 60 00 0C */	li r11, 0xc
/* 80281E34 0027ED74  7D 63 58 2E */	lwzx r11, r3, r11
/* 80281E38 0027ED78  7C 63 5A 14 */	add r3, r3, r11
/* 80281E3C 0027ED7C  38 63 FC DC */	addi r3, r3, -804
/* 80281E40 0027ED80  4B E8 48 68 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@804@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@804@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 80281E44 0027ED84  39 60 00 0C */	li r11, 0xc
/* 80281E48 0027ED88  7D 63 58 2E */	lwzx r11, r3, r11
/* 80281E4C 0027ED8C  7C 63 5A 14 */	add r3, r3, r11
/* 80281E50 0027ED90  38 63 FC DC */	addi r3, r3, -804
/* 80281E54 0027ED94  4B E8 48 74 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@804@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@804@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 80281E58 0027ED98  39 60 00 0C */	li r11, 0xc
/* 80281E5C 0027ED9C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80281E60 0027EDA0  7C 63 5A 14 */	add r3, r3, r11
/* 80281E64 0027EDA4  38 63 FC DC */	addi r3, r3, -804
/* 80281E68 0027EDA8  4B E8 4C 10 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@804@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@804@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 80281E6C 0027EDAC  39 60 00 0C */	li r11, 0xc
/* 80281E70 0027EDB0  7D 63 58 2E */	lwzx r11, r3, r11
/* 80281E74 0027EDB4  7C 63 5A 14 */	add r3, r3, r11
/* 80281E78 0027EDB8  38 63 FC DC */	addi r3, r3, -804
/* 80281E7C 0027EDBC  4B E8 4B D0 */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@804@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@804@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 80281E80 0027EDC0  39 60 00 0C */	li r11, 0xc
/* 80281E84 0027EDC4  7D 63 58 2E */	lwzx r11, r3, r11
/* 80281E88 0027EDC8  7C 63 5A 14 */	add r3, r3, r11
/* 80281E8C 0027EDCC  38 63 FC DC */	addi r3, r3, -804
/* 80281E90 0027EDD0  4B E8 48 10 */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@804@12@viewGetShape__Q24Game9EnemyBaseFv"

.fn "@4@__dt__Q23efx9TFusenSuiFv", weak
/* 80281E94 0027EDD4  38 63 FF FC */	addi r3, r3, -4
/* 80281E98 0027EDD8  4B FF FE 18 */	b __dt__Q23efx9TFusenSuiFv
.endfn "@4@__dt__Q23efx9TFusenSuiFv"
