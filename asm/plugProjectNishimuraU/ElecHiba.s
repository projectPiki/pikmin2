.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80486868, local
	.asciz "ArgDenkiHiba"
.endobj lbl_80486868

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx12ArgDenkiHiba, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx12ArgDenkiHibaFv
.endobj __vt__Q23efx12ArgDenkiHiba
.obj __vt__Q23efx10TDenkiPole, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "fade__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "startDemoDrawOff__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "endDemoDrawOn__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
.endobj __vt__Q23efx10TDenkiPole
.obj __vt__Q23efx14TDenkipoleSign, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TDenkipoleSignFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx8TForeverFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx14TDenkipoleSignFv
.endobj __vt__Q23efx14TDenkipoleSign
.obj __vt__Q34Game8ElecHiba3Obj, global
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
	.4byte onInit__Q34Game8ElecHiba3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q34Game8ElecHiba3ObjFf
	.4byte doDirectDraw__Q34Game8ElecHiba3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game8ElecHiba3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game8ElecHiba3ObjFv
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
	.4byte isLivingThing__Q34Game8ElecHiba3ObjFv
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
	.4byte getShadowParam__Q34Game8ElecHiba3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game8ElecHiba3ObjFv
	.4byte "birth__Q34Game8ElecHiba3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game8ElecHiba3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game8ElecHiba3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game8ElecHiba3ObjFR8Graphics
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
	.4byte injure__Q34Game8ElecHiba3ObjFv
	.4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
	.4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
	.4byte updateEfxHamon__Q24Game9EnemyBaseFv
	.4byte createEfxHamon__Q24Game9EnemyBaseFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game8ElecHiba3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q34Game8ElecHiba3ObjFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreatureR10Vector3<f>f"
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
	.4byte lifeRecover__Q34Game8ElecHiba3ObjFv
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
	.4byte setFSM__Q34Game8ElecHiba3ObjFPQ34Game8ElecHiba3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@772@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@772@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@772@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@772@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@772@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@772@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game8ElecHiba3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051B0E0, local
	.float 0.0
.endobj lbl_8051B0E0
.obj lbl_8051B0E4, local
	.float 1.0
.endobj lbl_8051B0E4
.obj lbl_8051B0E8, local
	.float -1.0
.endobj lbl_8051B0E8
.obj lbl_8051B0EC, local
	.float 32768.0
.endobj lbl_8051B0EC
.balign 8
.obj lbl_8051B0F0, local
	.8byte 0x4330000080000000
.endobj lbl_8051B0F0
.obj lbl_8051B0F8, local
	.float 0.5
.endobj lbl_8051B0F8
.obj lbl_8051B0FC, local
	.float 10.0
.endobj lbl_8051B0FC
.obj lbl_8051B100, local
	.float 1.5707964
.endobj lbl_8051B100
.obj lbl_8051B104, local
	.float 325.9493
.endobj lbl_8051B104
.obj lbl_8051B108, local
	.float -325.9493
.endobj lbl_8051B108

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game8ElecHiba3ObjFv, global
/* 8026F258 0026C198  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026F25C 0026C19C  7C 08 02 A6 */	mflr r0
/* 8026F260 0026C1A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026F264 0026C1A4  7C 80 07 35 */	extsh. r0, r4
/* 8026F268 0026C1A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026F26C 0026C1AC  7C 7F 1B 78 */	mr r31, r3
/* 8026F270 0026C1B0  93 C1 00 08 */	stw r30, 8(r1)
/* 8026F274 0026C1B4  41 82 00 24 */	beq .L_8026F298
/* 8026F278 0026C1B8  38 1F 03 04 */	addi r0, r31, 0x304
/* 8026F27C 0026C1BC  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8026F280 0026C1C0  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8026F284 0026C1C4  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8026F288 0026C1C8  38 00 00 00 */	li r0, 0
/* 8026F28C 0026C1CC  90 7F 03 04 */	stw r3, 0x304(r31)
/* 8026F290 0026C1D0  90 1F 03 08 */	stw r0, 0x308(r31)
/* 8026F294 0026C1D4  90 1F 03 0C */	stw r0, 0x30c(r31)
.L_8026F298:
/* 8026F298 0026C1D8  7F E3 FB 78 */	mr r3, r31
/* 8026F29C 0026C1DC  38 80 00 00 */	li r4, 0
/* 8026F2A0 0026C1E0  4B E9 21 01 */	bl __ct__Q24Game9EnemyBaseFv
/* 8026F2A4 0026C1E4  3C 60 80 4C */	lis r3, __vt__Q34Game8ElecHiba3Obj@ha
/* 8026F2A8 0026C1E8  3B DF 02 C8 */	addi r30, r31, 0x2c8
/* 8026F2AC 0026C1EC  38 63 5F 9C */	addi r3, r3, __vt__Q34Game8ElecHiba3Obj@l
/* 8026F2B0 0026C1F0  38 1F 03 04 */	addi r0, r31, 0x304
/* 8026F2B4 0026C1F4  90 7F 00 00 */	stw r3, 0(r31)
/* 8026F2B8 0026C1F8  38 83 01 B0 */	addi r4, r3, 0x1b0
/* 8026F2BC 0026C1FC  38 A3 02 FC */	addi r5, r3, 0x2fc
/* 8026F2C0 0026C200  7F C3 F3 78 */	mr r3, r30
/* 8026F2C4 0026C204  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8026F2C8 0026C208  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8026F2CC 0026C20C  90 A4 00 00 */	stw r5, 0(r4)
/* 8026F2D0 0026C210  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8026F2D4 0026C214  7C 04 00 50 */	subf r0, r4, r0
/* 8026F2D8 0026C218  90 04 00 0C */	stw r0, 0xc(r4)
/* 8026F2DC 0026C21C  48 1A 20 B5 */	bl __ct__5CNodeFv
/* 8026F2E0 0026C220  3C 60 80 4C */	lis r3, __vt__Q34Game8ElecHiba8TeamList@ha
/* 8026F2E4 0026C224  38 00 00 00 */	li r0, 0
/* 8026F2E8 0026C228  38 83 5E E8 */	addi r4, r3, __vt__Q34Game8ElecHiba8TeamList@l
/* 8026F2EC 0026C22C  38 60 00 2C */	li r3, 0x2c
/* 8026F2F0 0026C230  90 9E 00 00 */	stw r4, 0(r30)
/* 8026F2F4 0026C234  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8026F2F8 0026C238  4B DB 4B AD */	bl __nw__FUl
/* 8026F2FC 0026C23C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8026F300 0026C240  41 82 00 44 */	beq .L_8026F344
/* 8026F304 0026C244  4B EB 86 71 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8026F308 0026C248  3C 60 80 4C */	lis r3, __vt__Q34Game8ElecHiba14ProperAnimator@ha
/* 8026F30C 0026C24C  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8026F310 0026C250  38 03 5D E0 */	addi r0, r3, __vt__Q34Game8ElecHiba14ProperAnimator@l
/* 8026F314 0026C254  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8026F318 0026C258  90 1E 00 00 */	stw r0, 0(r30)
/* 8026F31C 0026C25C  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8026F320 0026C260  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8026F324 0026C264  38 00 00 00 */	li r0, 0
/* 8026F328 0026C268  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8026F32C 0026C26C  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8026F330 0026C270  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8026F334 0026C274  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8026F338 0026C278  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8026F33C 0026C27C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8026F340 0026C280  90 1E 00 20 */	stw r0, 0x20(r30)
.L_8026F344:
/* 8026F344 0026C284  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8026F348 0026C288  38 60 00 1C */	li r3, 0x1c
/* 8026F34C 0026C28C  4B DB 4B 59 */	bl __nw__FUl
/* 8026F350 0026C290  7C 64 1B 79 */	or. r4, r3, r3
/* 8026F354 0026C294  41 82 00 24 */	beq .L_8026F378
/* 8026F358 0026C298  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8026F35C 0026C29C  3C 60 80 4C */	lis r3, __vt__Q34Game8ElecHiba3FSM@ha
/* 8026F360 0026C2A0  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8026F364 0026C2A4  38 A0 FF FF */	li r5, -1
/* 8026F368 0026C2A8  90 04 00 00 */	stw r0, 0(r4)
/* 8026F36C 0026C2AC  38 03 5D BC */	addi r0, r3, __vt__Q34Game8ElecHiba3FSM@l
/* 8026F370 0026C2B0  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8026F374 0026C2B4  90 04 00 00 */	stw r0, 0(r4)
.L_8026F378:
/* 8026F378 0026C2B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026F37C 0026C2BC  7F E3 FB 78 */	mr r3, r31
/* 8026F380 0026C2C0  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8026F384 0026C2C4  7D 89 03 A6 */	mtctr r12
/* 8026F388 0026C2C8  4E 80 04 21 */	bctrl 
/* 8026F38C 0026C2CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026F390 0026C2D0  7F E3 FB 78 */	mr r3, r31
/* 8026F394 0026C2D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026F398 0026C2D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026F39C 0026C2DC  7C 08 03 A6 */	mtlr r0
/* 8026F3A0 0026C2E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8026F3A4 0026C2E4  4E 80 00 20 */	blr 
.endfn __ct__Q34Game8ElecHiba3ObjFv

.fn "birth__Q34Game8ElecHiba3ObjFR10Vector3<f>f", global
/* 8026F3A8 0026C2E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026F3AC 0026C2EC  7C 08 02 A6 */	mflr r0
/* 8026F3B0 0026C2F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026F3B4 0026C2F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026F3B8 0026C2F8  7C 7F 1B 78 */	mr r31, r3
/* 8026F3BC 0026C2FC  4B E9 36 45 */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 8026F3C0 0026C300  C0 02 CD 80 */	lfs f0, lbl_8051B0E0@sda21(r2)
/* 8026F3C4 0026C304  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8026F3C8 0026C308  93 FF 02 E0 */	stw r31, 0x2e0(r31)
/* 8026F3CC 0026C30C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026F3D0 0026C310  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026F3D4 0026C314  7C 08 03 A6 */	mtlr r0
/* 8026F3D8 0026C318  38 21 00 10 */	addi r1, r1, 0x10
/* 8026F3DC 0026C31C  4E 80 00 20 */	blr 
.endfn "birth__Q34Game8ElecHiba3ObjFR10Vector3<f>f"

.fn setInitialSetting__Q34Game8ElecHiba3ObjFPQ24Game21EnemyInitialParamBase, global
/* 8026F3E0 0026C320  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026F3E4 0026C324  7C 08 02 A6 */	mflr r0
/* 8026F3E8 0026C328  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026F3EC 0026C32C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026F3F0 0026C330  7C 9F 23 78 */	mr r31, r4
/* 8026F3F4 0026C334  93 C1 00 08 */	stw r30, 8(r1)
/* 8026F3F8 0026C338  7C 7E 1B 78 */	mr r30, r3
/* 8026F3FC 0026C33C  80 03 02 D8 */	lwz r0, 0x2d8(r3)
/* 8026F400 0026C340  28 00 00 00 */	cmplwi r0, 0
/* 8026F404 0026C344  41 82 00 3C */	beq .L_8026F440
/* 8026F408 0026C348  C0 22 CD 84 */	lfs f1, lbl_8051B0E4@sda21(r2)
/* 8026F40C 0026C34C  48 00 05 49 */	bl setElecHibaPosition__Q34Game8ElecHiba3ObjFPQ34Game8ElecHiba12InitialParamf
/* 8026F410 0026C350  83 DE 02 D8 */	lwz r30, 0x2d8(r30)
/* 8026F414 0026C354  48 00 00 20 */	b .L_8026F434
.L_8026F418:
/* 8026F418 0026C358  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 8026F41C 0026C35C  7F E4 FB 78 */	mr r4, r31
/* 8026F420 0026C360  81 83 00 00 */	lwz r12, 0(r3)
/* 8026F424 0026C364  81 8C 01 C4 */	lwz r12, 0x1c4(r12)
/* 8026F428 0026C368  7D 89 03 A6 */	mtctr r12
/* 8026F42C 0026C36C  4E 80 04 21 */	bctrl 
/* 8026F430 0026C370  83 DE 00 04 */	lwz r30, 4(r30)
.L_8026F434:
/* 8026F434 0026C374  28 1E 00 00 */	cmplwi r30, 0
/* 8026F438 0026C378  40 82 FF E0 */	bne .L_8026F418
/* 8026F43C 0026C37C  48 00 00 0C */	b .L_8026F448
.L_8026F440:
/* 8026F440 0026C380  C0 22 CD 88 */	lfs f1, lbl_8051B0E8@sda21(r2)
/* 8026F444 0026C384  48 00 05 11 */	bl setElecHibaPosition__Q34Game8ElecHiba3ObjFPQ34Game8ElecHiba12InitialParamf
.L_8026F448:
/* 8026F448 0026C388  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026F44C 0026C38C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026F450 0026C390  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026F454 0026C394  7C 08 03 A6 */	mtlr r0
/* 8026F458 0026C398  38 21 00 10 */	addi r1, r1, 0x10
/* 8026F45C 0026C39C  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game8ElecHiba3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game8ElecHiba3ObjFPQ24Game15CreatureInitArg, global
/* 8026F460 0026C3A0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8026F464 0026C3A4  7C 08 02 A6 */	mflr r0
/* 8026F468 0026C3A8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8026F46C 0026C3AC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8026F470 0026C3B0  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8026F474 0026C3B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8026F478 0026C3B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8026F47C 0026C3BC  7C 7E 1B 78 */	mr r30, r3
/* 8026F480 0026C3C0  4B E9 25 D9 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8026F484 0026C3C4  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 8026F488 0026C3C8  7F C3 F3 78 */	mr r3, r30
/* 8026F48C 0026C3CC  54 00 05 24 */	rlwinm r0, r0, 0, 0x14, 0x12
/* 8026F490 0026C3D0  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 8026F494 0026C3D4  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 8026F498 0026C3D8  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 8026F49C 0026C3DC  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 8026F4A0 0026C3E0  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 8026F4A4 0026C3E4  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 8026F4A8 0026C3E8  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 8026F4AC 0026C3EC  4B E9 82 D1 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 8026F4B0 0026C3F0  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 8026F4B4 0026C3F4  7F C3 F3 78 */	mr r3, r30
/* 8026F4B8 0026C3F8  64 00 00 40 */	oris r0, r0, 0x40
/* 8026F4BC 0026C3FC  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 8026F4C0 0026C400  4B E9 25 49 */	bl setEmotionNone__Q24Game9EnemyBaseFv
/* 8026F4C4 0026C404  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8026F4C8 0026C408  7F C4 F3 78 */	mr r4, r30
/* 8026F4CC 0026C40C  4B FD 27 9D */	bl killShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 8026F4D0 0026C410  C0 02 CD 80 */	lfs f0, lbl_8051B0E0@sda21(r2)
/* 8026F4D4 0026C414  38 00 00 01 */	li r0, 1
/* 8026F4D8 0026C418  7F C3 F3 78 */	mr r3, r30
/* 8026F4DC 0026C41C  D0 1E 02 C4 */	stfs f0, 0x2c4(r30)
/* 8026F4E0 0026C420  98 1E 02 C0 */	stb r0, 0x2c0(r30)
/* 8026F4E4 0026C424  48 00 0C 21 */	bl setupLodParms__Q34Game8ElecHiba3ObjFv
/* 8026F4E8 0026C428  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 8026F4EC 0026C42C  28 00 00 00 */	cmplwi r0, 0
/* 8026F4F0 0026C430  41 82 00 24 */	beq .L_8026F514
/* 8026F4F4 0026C434  7C 1F 03 78 */	mr r31, r0
/* 8026F4F8 0026C438  48 00 00 14 */	b .L_8026F50C
.L_8026F4FC:
/* 8026F4FC 0026C43C  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 8026F500 0026C440  38 80 00 00 */	li r4, 0
/* 8026F504 0026C444  4B EC BA C5 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8026F508 0026C448  83 FF 00 04 */	lwz r31, 4(r31)
.L_8026F50C:
/* 8026F50C 0026C44C  28 1F 00 00 */	cmplwi r31, 0
/* 8026F510 0026C450  40 82 FF EC */	bne .L_8026F4FC
.L_8026F514:
/* 8026F514 0026C454  7F C3 F3 78 */	mr r3, r30
/* 8026F518 0026C458  48 00 11 35 */	bl setVersusHibaOnOff__Q34Game8ElecHiba3ObjFv
/* 8026F51C 0026C45C  38 00 00 00 */	li r0, 0
/* 8026F520 0026C460  7F C3 F3 78 */	mr r3, r30
/* 8026F524 0026C464  90 1E 02 F8 */	stw r0, 0x2f8(r30)
/* 8026F528 0026C468  48 00 11 BD */	bl resetAttrHitCount__Q34Game8ElecHiba3ObjFv
/* 8026F52C 0026C46C  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8026F530 0026C470  C3 E3 08 1C */	lfs f31, 0x81c(r3)
/* 8026F534 0026C474  4B E5 A0 6D */	bl rand
/* 8026F538 0026C478  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8026F53C 0026C47C  3C 00 43 30 */	lis r0, 0x4330
/* 8026F540 0026C480  90 61 00 14 */	stw r3, 0x14(r1)
/* 8026F544 0026C484  7F C4 F3 78 */	mr r4, r30
/* 8026F548 0026C488  C8 42 CD 90 */	lfd f2, lbl_8051B0F0@sda21(r2)
/* 8026F54C 0026C48C  38 C1 00 08 */	addi r6, r1, 8
/* 8026F550 0026C490  90 01 00 10 */	stw r0, 0x10(r1)
/* 8026F554 0026C494  38 A0 00 01 */	li r5, 1
/* 8026F558 0026C498  C0 02 CD 8C */	lfs f0, lbl_8051B0EC@sda21(r2)
/* 8026F55C 0026C49C  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8026F560 0026C4A0  EC 21 10 28 */	fsubs f1, f1, f2
/* 8026F564 0026C4A4  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8026F568 0026C4A8  EC 01 00 24 */	fdivs f0, f1, f0
/* 8026F56C 0026C4AC  D0 01 00 08 */	stfs f0, 8(r1)
/* 8026F570 0026C4B0  80 7E 02 BC */	lwz r3, 0x2bc(r30)
/* 8026F574 0026C4B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8026F578 0026C4B8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8026F57C 0026C4BC  7D 89 03 A6 */	mtctr r12
/* 8026F580 0026C4C0  4E 80 04 21 */	bctrl 
/* 8026F584 0026C4C4  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8026F588 0026C4C8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8026F58C 0026C4CC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8026F590 0026C4D0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8026F594 0026C4D4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8026F598 0026C4D8  7C 08 03 A6 */	mtlr r0
/* 8026F59C 0026C4DC  38 21 00 30 */	addi r1, r1, 0x30
/* 8026F5A0 0026C4E0  4E 80 00 20 */	blr 
.endfn onInit__Q34Game8ElecHiba3ObjFPQ24Game15CreatureInitArg

.fn doUpdate__Q34Game8ElecHiba3ObjFv, global
/* 8026F5A4 0026C4E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026F5A8 0026C4E8  7C 08 02 A6 */	mflr r0
/* 8026F5AC 0026C4EC  7C 64 1B 78 */	mr r4, r3
/* 8026F5B0 0026C4F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026F5B4 0026C4F4  80 03 02 D8 */	lwz r0, 0x2d8(r3)
/* 8026F5B8 0026C4F8  28 00 00 00 */	cmplwi r0, 0
/* 8026F5BC 0026C4FC  41 82 00 18 */	beq .L_8026F5D4
/* 8026F5C0 0026C500  80 64 02 BC */	lwz r3, 0x2bc(r4)
/* 8026F5C4 0026C504  81 83 00 00 */	lwz r12, 0(r3)
/* 8026F5C8 0026C508  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8026F5CC 0026C50C  7D 89 03 A6 */	mtctr r12
/* 8026F5D0 0026C510  4E 80 04 21 */	bctrl 
.L_8026F5D4:
/* 8026F5D4 0026C514  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026F5D8 0026C518  7C 08 03 A6 */	mtlr r0
/* 8026F5DC 0026C51C  38 21 00 10 */	addi r1, r1, 0x10
/* 8026F5E0 0026C520  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game8ElecHiba3ObjFv

.fn doDirectDraw__Q34Game8ElecHiba3ObjFR8Graphics, global
/* 8026F5E4 0026C524  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game8ElecHiba3ObjFR8Graphics

.fn doDebugDraw__Q34Game8ElecHiba3ObjFR8Graphics, global
/* 8026F5E8 0026C528  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026F5EC 0026C52C  7C 08 02 A6 */	mflr r0
/* 8026F5F0 0026C530  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026F5F4 0026C534  4B E9 68 79 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 8026F5F8 0026C538  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026F5FC 0026C53C  7C 08 03 A6 */	mtlr r0
/* 8026F600 0026C540  38 21 00 10 */	addi r1, r1, 0x10
/* 8026F604 0026C544  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game8ElecHiba3ObjFR8Graphics

.fn setFSM__Q34Game8ElecHiba3ObjFPQ34Game8ElecHiba3FSM, global
/* 8026F608 0026C548  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026F60C 0026C54C  7C 08 02 A6 */	mflr r0
/* 8026F610 0026C550  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026F614 0026C554  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026F618 0026C558  7C 7F 1B 78 */	mr r31, r3
/* 8026F61C 0026C55C  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 8026F620 0026C560  7F E4 FB 78 */	mr r4, r31
/* 8026F624 0026C564  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8026F628 0026C568  81 83 00 00 */	lwz r12, 0(r3)
/* 8026F62C 0026C56C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026F630 0026C570  7D 89 03 A6 */	mtctr r12
/* 8026F634 0026C574  4E 80 04 21 */	bctrl 
/* 8026F638 0026C578  38 00 00 00 */	li r0, 0
/* 8026F63C 0026C57C  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8026F640 0026C580  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026F644 0026C584  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026F648 0026C588  7C 08 03 A6 */	mtlr r0
/* 8026F64C 0026C58C  38 21 00 10 */	addi r1, r1, 0x10
/* 8026F650 0026C590  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game8ElecHiba3ObjFPQ34Game8ElecHiba3FSM

.fn getShadowParam__Q34Game8ElecHiba3ObjFRQ24Game11ShadowParam, global
/* 8026F654 0026C594  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8026F658 0026C598  C0 22 CD 80 */	lfs f1, lbl_8051B0E0@sda21(r2)
/* 8026F65C 0026C59C  D0 04 00 00 */	stfs f0, 0(r4)
/* 8026F660 0026C5A0  C0 02 CD 84 */	lfs f0, lbl_8051B0E4@sda21(r2)
/* 8026F664 0026C5A4  C0 43 01 90 */	lfs f2, 0x190(r3)
/* 8026F668 0026C5A8  D0 44 00 04 */	stfs f2, 4(r4)
/* 8026F66C 0026C5AC  C0 43 01 94 */	lfs f2, 0x194(r3)
/* 8026F670 0026C5B0  D0 44 00 08 */	stfs f2, 8(r4)
/* 8026F674 0026C5B4  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 8026F678 0026C5B8  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8026F67C 0026C5BC  D0 24 00 14 */	stfs f1, 0x14(r4)
/* 8026F680 0026C5C0  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 8026F684 0026C5C4  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 8026F688 0026C5C8  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game8ElecHiba3ObjFRQ24Game11ShadowParam

.fn damageCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart, global
/* 8026F68C 0026C5CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8026F690 0026C5D0  7C 08 02 A6 */	mflr r0
/* 8026F694 0026C5D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8026F698 0026C5D8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8026F69C 0026C5DC  FF E0 08 90 */	fmr f31, f1
/* 8026F6A0 0026C5E0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8026F6A4 0026C5E4  7C 9F 23 79 */	or. r31, r4, r4
/* 8026F6A8 0026C5E8  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8026F6AC 0026C5EC  7C 7E 1B 78 */	mr r30, r3
/* 8026F6B0 0026C5F0  41 82 00 88 */	beq .L_8026F738
/* 8026F6B4 0026C5F4  7F E3 FB 78 */	mr r3, r31
/* 8026F6B8 0026C5F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026F6BC 0026C5FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026F6C0 0026C600  7D 89 03 A6 */	mtctr r12
/* 8026F6C4 0026C604  4E 80 04 21 */	bctrl 
/* 8026F6C8 0026C608  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026F6CC 0026C60C  40 82 00 6C */	bne .L_8026F738
/* 8026F6D0 0026C610  88 1E 02 F4 */	lbz r0, 0x2f4(r30)
/* 8026F6D4 0026C614  28 00 00 00 */	cmplwi r0, 0
/* 8026F6D8 0026C618  41 82 00 4C */	beq .L_8026F724
/* 8026F6DC 0026C61C  7F E3 FB 78 */	mr r3, r31
/* 8026F6E0 0026C620  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026F6E4 0026C624  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8026F6E8 0026C628  7D 89 03 A6 */	mtctr r12
/* 8026F6EC 0026C62C  4E 80 04 21 */	bctrl 
/* 8026F6F0 0026C630  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026F6F4 0026C634  41 82 00 3C */	beq .L_8026F730
/* 8026F6F8 0026C638  80 7E 02 D4 */	lwz r3, 0x2d4(r30)
/* 8026F6FC 0026C63C  28 03 00 00 */	cmplwi r3, 0
/* 8026F700 0026C640  41 82 00 14 */	beq .L_8026F714
/* 8026F704 0026C644  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8026F708 0026C648  7F E4 FB 78 */	mr r4, r31
/* 8026F70C 0026C64C  48 00 0F E9 */	bl addAttrAttackCount__Q34Game8ElecHiba3ObjFPQ24Game4Piki
/* 8026F710 0026C650  48 00 00 20 */	b .L_8026F730
.L_8026F714:
/* 8026F714 0026C654  7F C3 F3 78 */	mr r3, r30
/* 8026F718 0026C658  7F E4 FB 78 */	mr r4, r31
/* 8026F71C 0026C65C  48 00 0F D9 */	bl addAttrAttackCount__Q34Game8ElecHiba3ObjFPQ24Game4Piki
/* 8026F720 0026C660  48 00 00 10 */	b .L_8026F730
.L_8026F724:
/* 8026F724 0026C664  FC 20 F8 90 */	fmr f1, f31
/* 8026F728 0026C668  7F C3 F3 78 */	mr r3, r30
/* 8026F72C 0026C66C  48 00 09 61 */	bl addDamageMyself__Q34Game8ElecHiba3ObjFf
.L_8026F730:
/* 8026F730 0026C670  38 60 00 01 */	li r3, 1
/* 8026F734 0026C674  48 00 00 08 */	b .L_8026F73C
.L_8026F738:
/* 8026F738 0026C678  38 60 00 00 */	li r3, 0
.L_8026F73C:
/* 8026F73C 0026C67C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026F740 0026C680  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8026F744 0026C684  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8026F748 0026C688  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8026F74C 0026C68C  7C 08 03 A6 */	mtlr r0
/* 8026F750 0026C690  38 21 00 20 */	addi r1, r1, 0x20
/* 8026F754 0026C694  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart

.fn pressCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart, global
/* 8026F758 0026C698  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026F75C 0026C69C  7C 08 02 A6 */	mflr r0
/* 8026F760 0026C6A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026F764 0026C6A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8026F768 0026C6A8  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 8026F76C 0026C6AC  7D 89 03 A6 */	mtctr r12
/* 8026F770 0026C6B0  4E 80 04 21 */	bctrl 
/* 8026F774 0026C6B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026F778 0026C6B8  38 60 00 01 */	li r3, 1
/* 8026F77C 0026C6BC  7C 08 03 A6 */	mtlr r0
/* 8026F780 0026C6C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8026F784 0026C6C4  4E 80 00 20 */	blr 
.endfn pressCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart

.fn hipdropCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart, global
/* 8026F788 0026C6C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026F78C 0026C6CC  7C 08 02 A6 */	mflr r0
/* 8026F790 0026C6D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026F794 0026C6D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8026F798 0026C6D8  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 8026F79C 0026C6DC  7D 89 03 A6 */	mtctr r12
/* 8026F7A0 0026C6E0  4E 80 04 21 */	bctrl 
/* 8026F7A4 0026C6E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026F7A8 0026C6E8  38 60 00 01 */	li r3, 1
/* 8026F7AC 0026C6EC  7C 08 03 A6 */	mtlr r0
/* 8026F7B0 0026C6F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8026F7B4 0026C6F4  4E 80 00 20 */	blr 
.endfn hipdropCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart

.fn "bombCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreatureR10Vector3<f>f", global
/* 8026F7B8 0026C6F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026F7BC 0026C6FC  7C 08 02 A6 */	mflr r0
/* 8026F7C0 0026C700  38 A0 00 00 */	li r5, 0
/* 8026F7C4 0026C704  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026F7C8 0026C708  81 83 00 00 */	lwz r12, 0(r3)
/* 8026F7CC 0026C70C  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 8026F7D0 0026C710  7D 89 03 A6 */	mtctr r12
/* 8026F7D4 0026C714  4E 80 04 21 */	bctrl 
/* 8026F7D8 0026C718  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026F7DC 0026C71C  38 60 00 01 */	li r3, 1
/* 8026F7E0 0026C720  7C 08 03 A6 */	mtlr r0
/* 8026F7E4 0026C724  38 21 00 10 */	addi r1, r1, 0x10
/* 8026F7E8 0026C728  4E 80 00 20 */	blr 
.endfn "bombCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreatureR10Vector3<f>f"

.fn doGetLifeGaugeParam__Q34Game8ElecHiba3ObjFRQ24Game14LifeGaugeParam, global
/* 8026F7EC 0026C72C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8026F7F0 0026C730  7C 08 02 A6 */	mflr r0
/* 8026F7F4 0026C734  90 01 00 24 */	stw r0, 0x24(r1)
/* 8026F7F8 0026C738  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8026F7FC 0026C73C  7C 9F 23 78 */	mr r31, r4
/* 8026F800 0026C740  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8026F804 0026C744  7C 7E 1B 78 */	mr r30, r3
/* 8026F808 0026C748  48 00 01 31 */	bl getChildObjPtr__Q34Game8ElecHiba3ObjFv
/* 8026F80C 0026C74C  28 03 00 00 */	cmplwi r3, 0
/* 8026F810 0026C750  41 82 00 BC */	beq .L_8026F8CC
/* 8026F814 0026C754  7C 64 1B 78 */	mr r4, r3
/* 8026F818 0026C758  38 61 00 08 */	addi r3, r1, 8
/* 8026F81C 0026C75C  81 84 00 00 */	lwz r12, 0(r4)
/* 8026F820 0026C760  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026F824 0026C764  7D 89 03 A6 */	mtctr r12
/* 8026F828 0026C768  4E 80 04 21 */	bctrl 
/* 8026F82C 0026C76C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8026F830 0026C770  C0 42 CD 98 */	lfs f2, lbl_8051B0F8@sda21(r2)
/* 8026F834 0026C774  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8026F838 0026C778  C0 02 CD 9C */	lfs f0, lbl_8051B0FC@sda21(r2)
/* 8026F83C 0026C77C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8026F840 0026C780  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8026F844 0026C784  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8026F848 0026C788  D0 3F 00 08 */	stfs f1, 8(r31)
/* 8026F84C 0026C78C  C0 7F 00 00 */	lfs f3, 0(r31)
/* 8026F850 0026C790  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 8026F854 0026C794  EC 23 08 2A */	fadds f1, f3, f1
/* 8026F858 0026C798  D0 3F 00 00 */	stfs f1, 0(r31)
/* 8026F85C 0026C79C  C0 7F 00 04 */	lfs f3, 4(r31)
/* 8026F860 0026C7A0  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 8026F864 0026C7A4  EC 23 08 2A */	fadds f1, f3, f1
/* 8026F868 0026C7A8  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8026F86C 0026C7AC  C0 7F 00 08 */	lfs f3, 8(r31)
/* 8026F870 0026C7B0  C0 3E 01 94 */	lfs f1, 0x194(r30)
/* 8026F874 0026C7B4  EC 23 08 2A */	fadds f1, f3, f1
/* 8026F878 0026C7B8  D0 3F 00 08 */	stfs f1, 8(r31)
/* 8026F87C 0026C7BC  C0 3F 00 00 */	lfs f1, 0(r31)
/* 8026F880 0026C7C0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8026F884 0026C7C4  D0 3F 00 00 */	stfs f1, 0(r31)
/* 8026F888 0026C7C8  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8026F88C 0026C7CC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8026F890 0026C7D0  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8026F894 0026C7D4  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8026F898 0026C7D8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8026F89C 0026C7DC  D0 3F 00 08 */	stfs f1, 8(r31)
/* 8026F8A0 0026C7E0  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8026F8A4 0026C7E4  C0 5F 00 04 */	lfs f2, 4(r31)
/* 8026F8A8 0026C7E8  C0 23 01 2C */	lfs f1, 0x12c(r3)
/* 8026F8AC 0026C7EC  EC 22 08 2A */	fadds f1, f2, f1
/* 8026F8B0 0026C7F0  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8026F8B4 0026C7F4  C0 5E 02 00 */	lfs f2, 0x200(r30)
/* 8026F8B8 0026C7F8  C0 3E 02 04 */	lfs f1, 0x204(r30)
/* 8026F8BC 0026C7FC  EC 22 08 24 */	fdivs f1, f2, f1
/* 8026F8C0 0026C800  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 8026F8C4 0026C804  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8026F8C8 0026C808  48 00 00 0C */	b .L_8026F8D4
.L_8026F8CC:
/* 8026F8CC 0026C80C  38 00 00 00 */	li r0, 0
/* 8026F8D0 0026C810  98 1F 00 14 */	stb r0, 0x14(r31)
.L_8026F8D4:
/* 8026F8D4 0026C814  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026F8D8 0026C818  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8026F8DC 0026C81C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8026F8E0 0026C820  7C 08 03 A6 */	mtlr r0
/* 8026F8E4 0026C824  38 21 00 20 */	addi r1, r1, 0x20
/* 8026F8E8 0026C828  4E 80 00 20 */	blr 
.endfn doGetLifeGaugeParam__Q34Game8ElecHiba3ObjFRQ24Game14LifeGaugeParam

.fn injure__Q34Game8ElecHiba3ObjFv, global
/* 8026F8EC 0026C82C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8026F8F0 0026C830  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8026F8F4 0026C834  40 82 00 28 */	bne .L_8026F91C
/* 8026F8F8 0026C838  C0 43 02 00 */	lfs f2, 0x200(r3)
/* 8026F8FC 0026C83C  C0 23 02 08 */	lfs f1, 0x208(r3)
/* 8026F900 0026C840  C0 02 CD 80 */	lfs f0, lbl_8051B0E0@sda21(r2)
/* 8026F904 0026C844  EC 22 08 28 */	fsubs f1, f2, f1
/* 8026F908 0026C848  D0 23 02 00 */	stfs f1, 0x200(r3)
/* 8026F90C 0026C84C  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 8026F910 0026C850  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026F914 0026C854  40 80 00 08 */	bge .L_8026F91C
/* 8026F918 0026C858  D0 03 02 00 */	stfs f0, 0x200(r3)
.L_8026F91C:
/* 8026F91C 0026C85C  C0 02 CD 80 */	lfs f0, lbl_8051B0E0@sda21(r2)
/* 8026F920 0026C860  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 8026F924 0026C864  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8026F928 0026C868  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8026F92C 0026C86C  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 8026F930 0026C870  38 60 00 01 */	li r3, 1
/* 8026F934 0026C874  4E 80 00 20 */	blr 
.endfn injure__Q34Game8ElecHiba3ObjFv

.fn getChildObjPtr__Q34Game8ElecHiba3ObjFv, global
/* 8026F938 0026C878  80 63 02 D8 */	lwz r3, 0x2d8(r3)
/* 8026F93C 0026C87C  28 03 00 00 */	cmplwi r3, 0
/* 8026F940 0026C880  41 82 00 0C */	beq .L_8026F94C
/* 8026F944 0026C884  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8026F948 0026C888  4E 80 00 20 */	blr 
.L_8026F94C:
/* 8026F94C 0026C88C  38 60 00 00 */	li r3, 0
/* 8026F950 0026C890  4E 80 00 20 */	blr 
.endfn getChildObjPtr__Q34Game8ElecHiba3ObjFv

.fn setElecHibaPosition__Q34Game8ElecHiba3ObjFPQ34Game8ElecHiba12InitialParamf, global
/* 8026F954 0026C894  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8026F958 0026C898  7C 08 02 A6 */	mflr r0
/* 8026F95C 0026C89C  90 01 00 84 */	stw r0, 0x84(r1)
/* 8026F960 0026C8A0  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8026F964 0026C8A4  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8026F968 0026C8A8  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 8026F96C 0026C8AC  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 8026F970 0026C8B0  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 8026F974 0026C8B4  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 8026F978 0026C8B8  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 8026F97C 0026C8BC  F3 81 00 48 */	psq_st f28, 72(r1), 0, qr0
/* 8026F980 0026C8C0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8026F984 0026C8C4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8026F988 0026C8C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026F98C 0026C8CC  7C 7E 1B 78 */	mr r30, r3
/* 8026F990 0026C8D0  FF 80 08 90 */	fmr f28, f1
/* 8026F994 0026C8D4  7C 9F 23 78 */	mr r31, r4
/* 8026F998 0026C8D8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8026F99C 0026C8DC  C3 E3 02 E4 */	lfs f31, 0x2e4(r3)
/* 8026F9A0 0026C8E0  C3 C3 02 E8 */	lfs f30, 0x2e8(r3)
/* 8026F9A4 0026C8E4  C3 A3 02 EC */	lfs f29, 0x2ec(r3)
/* 8026F9A8 0026C8E8  7D 89 03 A6 */	mtctr r12
/* 8026F9AC 0026C8EC  4E 80 04 21 */	bctrl 
/* 8026F9B0 0026C8F0  C0 02 CD A0 */	lfs f0, lbl_8051B100@sda21(r2)
/* 8026F9B4 0026C8F4  C0 5F 00 00 */	lfs f2, 0(r31)
/* 8026F9B8 0026C8F8  EC 80 08 2A */	fadds f4, f0, f1
/* 8026F9BC 0026C8FC  C0 22 CD 98 */	lfs f1, lbl_8051B0F8@sda21(r2)
/* 8026F9C0 0026C900  C0 02 CD 80 */	lfs f0, lbl_8051B0E0@sda21(r2)
/* 8026F9C4 0026C904  EC 62 00 72 */	fmuls f3, f2, f1
/* 8026F9C8 0026C908  FC 20 20 90 */	fmr f1, f4
/* 8026F9CC 0026C90C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8026F9D0 0026C910  40 80 00 08 */	bge .L_8026F9D8
/* 8026F9D4 0026C914  FC 20 20 50 */	fneg f1, f4
.L_8026F9D8:
/* 8026F9D8 0026C918  C0 42 CD A4 */	lfs f2, lbl_8051B104@sda21(r2)
/* 8026F9DC 0026C91C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8026F9E0 0026C920  C0 02 CD 80 */	lfs f0, lbl_8051B0E0@sda21(r2)
/* 8026F9E4 0026C924  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8026F9E8 0026C928  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8026F9EC 0026C92C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8026F9F0 0026C930  EC 7C 00 F2 */	fmuls f3, f28, f3
/* 8026F9F4 0026C934  FC 00 08 1E */	fctiwz f0, f1
/* 8026F9F8 0026C938  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8026F9FC 0026C93C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8026FA00 0026C940  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8026FA04 0026C944  7C 64 02 14 */	add r3, r4, r0
/* 8026FA08 0026C948  C0 03 00 04 */	lfs f0, 4(r3)
/* 8026FA0C 0026C94C  EC 23 E8 3A */	fmadds f1, f3, f0, f29
/* 8026FA10 0026C950  40 80 00 28 */	bge .L_8026FA38
/* 8026FA14 0026C954  C0 02 CD A8 */	lfs f0, lbl_8051B108@sda21(r2)
/* 8026FA18 0026C958  EC 04 00 32 */	fmuls f0, f4, f0
/* 8026FA1C 0026C95C  FC 00 00 1E */	fctiwz f0, f0
/* 8026FA20 0026C960  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8026FA24 0026C964  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026FA28 0026C968  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8026FA2C 0026C96C  7C 04 04 2E */	lfsx f0, r4, r0
/* 8026FA30 0026C970  FC 00 00 50 */	fneg f0, f0
/* 8026FA34 0026C974  48 00 00 1C */	b .L_8026FA50
.L_8026FA38:
/* 8026FA38 0026C978  EC 04 00 B2 */	fmuls f0, f4, f2
/* 8026FA3C 0026C97C  FC 00 00 1E */	fctiwz f0, f0
/* 8026FA40 0026C980  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8026FA44 0026C984  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8026FA48 0026C988  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8026FA4C 0026C98C  7C 04 04 2E */	lfsx f0, r4, r0
.L_8026FA50:
/* 8026FA50 0026C990  EC 03 F8 3A */	fmadds f0, f3, f0, f31
/* 8026FA54 0026C994  D3 C1 00 0C */	stfs f30, 0xc(r1)
/* 8026FA58 0026C998  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8026FA5C 0026C99C  38 81 00 08 */	addi r4, r1, 8
/* 8026FA60 0026C9A0  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8026FA64 0026C9A4  D0 01 00 08 */	stfs f0, 8(r1)
/* 8026FA68 0026C9A8  81 83 00 04 */	lwz r12, 4(r3)
/* 8026FA6C 0026C9AC  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8026FA70 0026C9B0  7D 89 03 A6 */	mtctr r12
/* 8026FA74 0026C9B4  4E 80 04 21 */	bctrl 
/* 8026FA78 0026C9B8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8026FA7C 0026C9BC  7F C3 F3 78 */	mr r3, r30
/* 8026FA80 0026C9C0  38 81 00 08 */	addi r4, r1, 8
/* 8026FA84 0026C9C4  38 A0 00 00 */	li r5, 0
/* 8026FA88 0026C9C8  4B EC B7 21 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8026FA8C 0026C9CC  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8026FA90 0026C9D0  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8026FA94 0026C9D4  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 8026FA98 0026C9D8  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 8026FA9C 0026C9DC  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 8026FAA0 0026C9E0  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 8026FAA4 0026C9E4  E3 81 00 48 */	psq_l f28, 72(r1), 0, qr0
/* 8026FAA8 0026C9E8  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 8026FAAC 0026C9EC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8026FAB0 0026C9F0  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8026FAB4 0026C9F4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8026FAB8 0026C9F8  7C 08 03 A6 */	mtlr r0
/* 8026FABC 0026C9FC  38 21 00 80 */	addi r1, r1, 0x80
/* 8026FAC0 0026CA00  4E 80 00 20 */	blr 
.endfn setElecHibaPosition__Q34Game8ElecHiba3ObjFPQ34Game8ElecHiba12InitialParamf

.fn "interactDenkiAttack__Q34Game8ElecHiba3ObjFR10Vector3<f>", global
/* 8026FAC4 0026CA04  94 21 FD F0 */	stwu r1, -0x210(r1)
/* 8026FAC8 0026CA08  7C 08 02 A6 */	mflr r0
/* 8026FACC 0026CA0C  90 01 02 14 */	stw r0, 0x214(r1)
/* 8026FAD0 0026CA10  DB E1 02 00 */	stfd f31, 0x200(r1)
/* 8026FAD4 0026CA14  F3 E1 02 08 */	psq_st f31, 520(r1), 0, qr0
/* 8026FAD8 0026CA18  DB C1 01 F0 */	stfd f30, 0x1f0(r1)
/* 8026FADC 0026CA1C  F3 C1 01 F8 */	psq_st f30, 504(r1), 0, qr0
/* 8026FAE0 0026CA20  DB A1 01 E0 */	stfd f29, 0x1e0(r1)
/* 8026FAE4 0026CA24  F3 A1 01 E8 */	psq_st f29, 488(r1), 0, qr0
/* 8026FAE8 0026CA28  DB 81 01 D0 */	stfd f28, 0x1d0(r1)
/* 8026FAEC 0026CA2C  F3 81 01 D8 */	psq_st f28, 472(r1), 0, qr0
/* 8026FAF0 0026CA30  DB 61 01 C0 */	stfd f27, 0x1c0(r1)
/* 8026FAF4 0026CA34  F3 61 01 C8 */	psq_st f27, 456(r1), 0, qr0
/* 8026FAF8 0026CA38  DB 41 01 B0 */	stfd f26, 0x1b0(r1)
/* 8026FAFC 0026CA3C  F3 41 01 B8 */	psq_st f26, 440(r1), 0, qr0
/* 8026FB00 0026CA40  DB 21 01 A0 */	stfd f25, 0x1a0(r1)
/* 8026FB04 0026CA44  F3 21 01 A8 */	psq_st f25, 424(r1), 0, qr0
/* 8026FB08 0026CA48  DB 01 01 90 */	stfd f24, 0x190(r1)
/* 8026FB0C 0026CA4C  F3 01 01 98 */	psq_st f24, 408(r1), 0, qr0
/* 8026FB10 0026CA50  DA E1 01 80 */	stfd f23, 0x180(r1)
/* 8026FB14 0026CA54  F2 E1 01 88 */	psq_st f23, 392(r1), 0, qr0
/* 8026FB18 0026CA58  DA C1 01 70 */	stfd f22, 0x170(r1)
/* 8026FB1C 0026CA5C  F2 C1 01 78 */	psq_st f22, 376(r1), 0, qr0
/* 8026FB20 0026CA60  DA A1 01 60 */	stfd f21, 0x160(r1)
/* 8026FB24 0026CA64  F2 A1 01 68 */	psq_st f21, 360(r1), 0, qr0
/* 8026FB28 0026CA68  DA 81 01 50 */	stfd f20, 0x150(r1)
/* 8026FB2C 0026CA6C  F2 81 01 58 */	psq_st f20, 344(r1), 0, qr0
/* 8026FB30 0026CA70  DA 61 01 40 */	stfd f19, 0x140(r1)
/* 8026FB34 0026CA74  F2 61 01 48 */	psq_st f19, 328(r1), 0, qr0
/* 8026FB38 0026CA78  DA 41 01 30 */	stfd f18, 0x130(r1)
/* 8026FB3C 0026CA7C  F2 41 01 38 */	psq_st f18, 312(r1), 0, qr0
/* 8026FB40 0026CA80  DA 21 01 20 */	stfd f17, 0x120(r1)
/* 8026FB44 0026CA84  F2 21 01 28 */	psq_st f17, 296(r1), 0, qr0
/* 8026FB48 0026CA88  DA 01 01 10 */	stfd f16, 0x110(r1)
/* 8026FB4C 0026CA8C  F2 01 01 18 */	psq_st f16, 280(r1), 0, qr0
/* 8026FB50 0026CA90  D9 E1 01 00 */	stfd f15, 0x100(r1)
/* 8026FB54 0026CA94  F1 E1 01 08 */	psq_st f15, 264(r1), 0, qr0
/* 8026FB58 0026CA98  D9 C1 00 F0 */	stfd f14, 0xf0(r1)
/* 8026FB5C 0026CA9C  F1 C1 00 F8 */	psq_st f14, 248(r1), 0, qr0
/* 8026FB60 0026CAA0  93 E1 00 EC */	stw r31, 0xec(r1)
/* 8026FB64 0026CAA4  93 C1 00 E8 */	stw r30, 0xe8(r1)
/* 8026FB68 0026CAA8  7C 7E 1B 78 */	mr r30, r3
/* 8026FB6C 0026CAAC  C1 04 00 08 */	lfs f8, 8(r4)
/* 8026FB70 0026CAB0  C3 E3 01 94 */	lfs f31, 0x194(r3)
/* 8026FB74 0026CAB4  C1 24 00 04 */	lfs f9, 4(r4)
/* 8026FB78 0026CAB8  C0 63 01 90 */	lfs f3, 0x190(r3)
/* 8026FB7C 0026CABC  EC 48 F8 2A */	fadds f2, f8, f31
/* 8026FB80 0026CAC0  C0 82 CD 98 */	lfs f4, lbl_8051B0F8@sda21(r2)
/* 8026FB84 0026CAC4  EC 29 18 2A */	fadds f1, f9, f3
/* 8026FB88 0026CAC8  C0 E3 01 FC */	lfs f7, 0x1fc(r3)
/* 8026FB8C 0026CACC  C0 02 CD 80 */	lfs f0, lbl_8051B0E0@sda21(r2)
/* 8026FB90 0026CAD0  EC 44 00 B2 */	fmuls f2, f4, f2
/* 8026FB94 0026CAD4  C1 44 00 00 */	lfs f10, 0(r4)
/* 8026FB98 0026CAD8  FC A0 38 90 */	fmr f5, f7
/* 8026FB9C 0026CADC  C3 C3 01 8C */	lfs f30, 0x18c(r3)
/* 8026FBA0 0026CAE0  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 8026FBA4 0026CAE4  EC 24 00 72 */	fmuls f1, f4, f1
/* 8026FBA8 0026CAE8  EC 0A F0 2A */	fadds f0, f10, f30
/* 8026FBAC 0026CAEC  EC 04 00 32 */	fmuls f0, f4, f0
/* 8026FBB0 0026CAF0  40 80 00 08 */	bge .L_8026FBB8
/* 8026FBB4 0026CAF4  FC A0 38 50 */	fneg f5, f7
.L_8026FBB8:
/* 8026FBB8 0026CAF8  C0 C2 CD A4 */	lfs f6, lbl_8051B104@sda21(r2)
/* 8026FBBC 0026CAFC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8026FBC0 0026CB00  C0 82 CD 80 */	lfs f4, lbl_8051B0E0@sda21(r2)
/* 8026FBC4 0026CB04  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8026FBC8 0026CB08  EC A5 01 B2 */	fmuls f5, f5, f6
/* 8026FBCC 0026CB0C  FC 07 20 40 */	fcmpo cr0, f7, f4
/* 8026FBD0 0026CB10  FC 80 28 1E */	fctiwz f4, f5
/* 8026FBD4 0026CB14  D8 81 00 C0 */	stfd f4, 0xc0(r1)
/* 8026FBD8 0026CB18  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8026FBDC 0026CB1C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8026FBE0 0026CB20  7C 64 02 14 */	add r3, r4, r0
/* 8026FBE4 0026CB24  C3 03 00 04 */	lfs f24, 4(r3)
/* 8026FBE8 0026CB28  40 80 00 28 */	bge .L_8026FC10
/* 8026FBEC 0026CB2C  C0 82 CD A8 */	lfs f4, lbl_8051B108@sda21(r2)
/* 8026FBF0 0026CB30  EC 87 01 32 */	fmuls f4, f7, f4
/* 8026FBF4 0026CB34  FC 80 20 1E */	fctiwz f4, f4
/* 8026FBF8 0026CB38  D8 81 00 C8 */	stfd f4, 0xc8(r1)
/* 8026FBFC 0026CB3C  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 8026FC00 0026CB40  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8026FC04 0026CB44  7C 84 04 2E */	lfsx f4, r4, r0
/* 8026FC08 0026CB48  FE E0 20 50 */	fneg f23, f4
/* 8026FC0C 0026CB4C  48 00 00 1C */	b .L_8026FC28
.L_8026FC10:
/* 8026FC10 0026CB50  EC 87 01 B2 */	fmuls f4, f7, f6
/* 8026FC14 0026CB54  FC 80 20 1E */	fctiwz f4, f4
/* 8026FC18 0026CB58  D8 81 00 D0 */	stfd f4, 0xd0(r1)
/* 8026FC1C 0026CB5C  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 8026FC20 0026CB60  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8026FC24 0026CB64  7E E4 04 2E */	lfsx f23, r4, r0
.L_8026FC28:
/* 8026FC28 0026CB68  EC A9 18 28 */	fsubs f5, f9, f3
/* 8026FC2C 0026CB6C  C0 E2 CD 80 */	lfs f7, lbl_8051B0E0@sda21(r2)
/* 8026FC30 0026CB70  EC C8 F8 28 */	fsubs f6, f8, f31
/* 8026FC34 0026CB74  EC 8A F0 28 */	fsubs f4, f10, f30
/* 8026FC38 0026CB78  ED 05 01 72 */	fmuls f8, f5, f5
/* 8026FC3C 0026CB7C  ED 26 01 B2 */	fmuls f9, f6, f6
/* 8026FC40 0026CB80  FE C0 20 90 */	fmr f22, f4
/* 8026FC44 0026CB84  ED 04 41 3A */	fmadds f8, f4, f4, f8
/* 8026FC48 0026CB88  FE A0 28 90 */	fmr f21, f5
/* 8026FC4C 0026CB8C  FE 80 30 90 */	fmr f20, f6
/* 8026FC50 0026CB90  ED 09 40 2A */	fadds f8, f9, f8
/* 8026FC54 0026CB94  FC 08 38 40 */	fcmpo cr0, f8, f7
/* 8026FC58 0026CB98  40 81 00 14 */	ble .L_8026FC6C
/* 8026FC5C 0026CB9C  40 81 00 14 */	ble .L_8026FC70
/* 8026FC60 0026CBA0  FC E0 40 34 */	frsqrte f7, f8
/* 8026FC64 0026CBA4  ED 07 02 32 */	fmuls f8, f7, f8
/* 8026FC68 0026CBA8  48 00 00 08 */	b .L_8026FC70
.L_8026FC6C:
/* 8026FC6C 0026CBAC  FD 00 38 90 */	fmr f8, f7
.L_8026FC70:
/* 8026FC70 0026CBB0  C0 E2 CD 80 */	lfs f7, lbl_8051B0E0@sda21(r2)
/* 8026FC74 0026CBB4  FC 08 38 40 */	fcmpo cr0, f8, f7
/* 8026FC78 0026CBB8  40 81 00 18 */	ble .L_8026FC90
/* 8026FC7C 0026CBBC  C0 E2 CD 84 */	lfs f7, lbl_8051B0E4@sda21(r2)
/* 8026FC80 0026CBC0  EC E7 40 24 */	fdivs f7, f7, f8
/* 8026FC84 0026CBC4  EE D6 01 F2 */	fmuls f22, f22, f7
/* 8026FC88 0026CBC8  EE B5 01 F2 */	fmuls f21, f21, f7
/* 8026FC8C 0026CBCC  EE 94 01 F2 */	fmuls f20, f20, f7
.L_8026FC90:
/* 8026FC90 0026CBD0  ED 17 05 32 */	fmuls f8, f23, f20
/* 8026FC94 0026CBD4  C1 42 CD 80 */	lfs f10, lbl_8051B0E0@sda21(r2)
/* 8026FC98 0026CBD8  ED 38 05 72 */	fmuls f9, f24, f21
/* 8026FC9C 0026CBDC  EC EA 05 B2 */	fmuls f7, f10, f22
/* 8026FCA0 0026CBE0  EE 58 45 B8 */	fmsubs f18, f24, f22, f8
/* 8026FCA4 0026CBE4  EE 6A 4D 38 */	fmsubs f19, f10, f20, f9
/* 8026FCA8 0026CBE8  EE 37 3D 78 */	fmsubs f17, f23, f21, f7
/* 8026FCAC 0026CBEC  EC F2 04 B2 */	fmuls f7, f18, f18
/* 8026FCB0 0026CBF0  ED 11 04 72 */	fmuls f8, f17, f17
/* 8026FCB4 0026CBF4  EC F3 3C FA */	fmadds f7, f19, f19, f7
/* 8026FCB8 0026CBF8  ED 08 38 2A */	fadds f8, f8, f7
/* 8026FCBC 0026CBFC  FC 08 50 40 */	fcmpo cr0, f8, f10
/* 8026FCC0 0026CC00  40 81 00 14 */	ble .L_8026FCD4
/* 8026FCC4 0026CC04  40 81 00 14 */	ble .L_8026FCD8
/* 8026FCC8 0026CC08  FC E0 40 34 */	frsqrte f7, f8
/* 8026FCCC 0026CC0C  ED 07 02 32 */	fmuls f8, f7, f8
/* 8026FCD0 0026CC10  48 00 00 08 */	b .L_8026FCD8
.L_8026FCD4:
/* 8026FCD4 0026CC14  FD 00 50 90 */	fmr f8, f10
.L_8026FCD8:
/* 8026FCD8 0026CC18  C0 E2 CD 80 */	lfs f7, lbl_8051B0E0@sda21(r2)
/* 8026FCDC 0026CC1C  FC 08 38 40 */	fcmpo cr0, f8, f7
/* 8026FCE0 0026CC20  40 81 00 18 */	ble .L_8026FCF8
/* 8026FCE4 0026CC24  C0 E2 CD 84 */	lfs f7, lbl_8051B0E4@sda21(r2)
/* 8026FCE8 0026CC28  EC E7 40 24 */	fdivs f7, f7, f8
/* 8026FCEC 0026CC2C  EE 73 01 F2 */	fmuls f19, f19, f7
/* 8026FCF0 0026CC30  EE 52 01 F2 */	fmuls f18, f18, f7
/* 8026FCF4 0026CC34  EE 31 01 F2 */	fmuls f17, f17, f7
.L_8026FCF8:
/* 8026FCF8 0026CC38  EC E5 01 72 */	fmuls f7, f5, f5
/* 8026FCFC 0026CC3C  C0 A2 CD 80 */	lfs f5, lbl_8051B0E0@sda21(r2)
/* 8026FD00 0026CC40  EC C6 01 B2 */	fmuls f6, f6, f6
/* 8026FD04 0026CC44  EC 84 39 3A */	fmadds f4, f4, f4, f7
/* 8026FD08 0026CC48  EC C6 20 2A */	fadds f6, f6, f4
/* 8026FD0C 0026CC4C  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 8026FD10 0026CC50  40 81 00 14 */	ble .L_8026FD24
/* 8026FD14 0026CC54  40 81 00 14 */	ble .L_8026FD28
/* 8026FD18 0026CC58  FC 80 30 34 */	frsqrte f4, f6
/* 8026FD1C 0026CC5C  EC C4 01 B2 */	fmuls f6, f4, f6
/* 8026FD20 0026CC60  48 00 00 08 */	b .L_8026FD28
.L_8026FD24:
/* 8026FD24 0026CC64  FC C0 28 90 */	fmr f6, f5
.L_8026FD28:
/* 8026FD28 0026CC68  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 8026FD2C 0026CC6C  38 61 00 54 */	addi r3, r1, 0x54
/* 8026FD30 0026CC70  C0 82 CD 98 */	lfs f4, lbl_8051B0F8@sda21(r2)
/* 8026FD34 0026CC74  38 81 00 2C */	addi r4, r1, 0x2c
/* 8026FD38 0026CC78  C0 E5 05 64 */	lfs f7, 0x564(r5)
/* 8026FD3C 0026CC7C  C0 A5 04 4C */	lfs f5, 0x44c(r5)
/* 8026FD40 0026CC80  EF A6 38 2A */	fadds f29, f6, f7
/* 8026FD44 0026CC84  C0 C5 05 8C */	lfs f6, 0x58c(r5)
/* 8026FD48 0026CC88  C3 45 04 74 */	lfs f26, 0x474(r5)
/* 8026FD4C 0026CC8C  FF 80 38 50 */	fneg f28, f7
/* 8026FD50 0026CC90  EC 63 30 2A */	fadds f3, f3, f6
/* 8026FD54 0026CC94  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8026FD58 0026CC98  EF 38 01 72 */	fmuls f25, f24, f5
/* 8026FD5C 0026CC9C  D0 61 00 D8 */	stfs f3, 0xd8(r1)
/* 8026FD60 0026CCA0  EC 7D E0 28 */	fsubs f3, f29, f28
/* 8026FD64 0026CCA4  EF 77 01 72 */	fmuls f27, f23, f5
/* 8026FD68 0026CCA8  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8026FD6C 0026CCAC  EC 04 00 F2 */	fmuls f0, f4, f3
/* 8026FD70 0026CCB0  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8026FD74 0026CCB4  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8026FD78 0026CCB8  4B FB E6 29 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 8026FD7C 0026CCBC  38 00 00 01 */	li r0, 1
/* 8026FD80 0026CCC0  38 61 00 74 */	addi r3, r1, 0x74
/* 8026FD84 0026CCC4  98 01 00 70 */	stb r0, 0x70(r1)
/* 8026FD88 0026CCC8  38 81 00 54 */	addi r4, r1, 0x54
/* 8026FD8C 0026CCCC  4B FB E6 55 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 8026FD90 0026CCD0  38 61 00 74 */	addi r3, r1, 0x74
/* 8026FD94 0026CCD4  4B FB E6 C9 */	bl first__Q24Game12CellIteratorFv
/* 8026FD98 0026CCD8  48 00 02 3C */	b .L_8026FFD4
.L_8026FD9C:
/* 8026FD9C 0026CCDC  38 61 00 74 */	addi r3, r1, 0x74
/* 8026FDA0 0026CCE0  4B FB E7 A5 */	bl __ml__Q24Game12CellIteratorFv
/* 8026FDA4 0026CCE4  81 83 00 00 */	lwz r12, 0(r3)
/* 8026FDA8 0026CCE8  7C 7F 1B 78 */	mr r31, r3
/* 8026FDAC 0026CCEC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8026FDB0 0026CCF0  7D 89 03 A6 */	mtctr r12
/* 8026FDB4 0026CCF4  4E 80 04 21 */	bctrl 
/* 8026FDB8 0026CCF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026FDBC 0026CCFC  41 82 02 10 */	beq .L_8026FFCC
/* 8026FDC0 0026CD00  7F E3 FB 78 */	mr r3, r31
/* 8026FDC4 0026CD04  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026FDC8 0026CD08  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026FDCC 0026CD0C  7D 89 03 A6 */	mtctr r12
/* 8026FDD0 0026CD10  4E 80 04 21 */	bctrl 
/* 8026FDD4 0026CD14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026FDD8 0026CD18  40 82 00 20 */	bne .L_8026FDF8
/* 8026FDDC 0026CD1C  7F E3 FB 78 */	mr r3, r31
/* 8026FDE0 0026CD20  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026FDE4 0026CD24  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8026FDE8 0026CD28  7D 89 03 A6 */	mtctr r12
/* 8026FDEC 0026CD2C  4E 80 04 21 */	bctrl 
/* 8026FDF0 0026CD30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026FDF4 0026CD34  41 82 01 D8 */	beq .L_8026FFCC
.L_8026FDF8:
/* 8026FDF8 0026CD38  7F E4 FB 78 */	mr r4, r31
/* 8026FDFC 0026CD3C  38 61 00 08 */	addi r3, r1, 8
/* 8026FE00 0026CD40  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026FE04 0026CD44  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026FE08 0026CD48  7D 89 03 A6 */	mtctr r12
/* 8026FE0C 0026CD4C  4E 80 04 21 */	bctrl 
/* 8026FE10 0026CD50  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8026FE14 0026CD54  C0 01 00 D8 */	lfs f0, 0xd8(r1)
/* 8026FE18 0026CD58  C0 41 00 08 */	lfs f2, 8(r1)
/* 8026FE1C 0026CD5C  EC 81 00 28 */	fsubs f4, f1, f0
/* 8026FE20 0026CD60  C0 22 CD 80 */	lfs f1, lbl_8051B0E0@sda21(r2)
/* 8026FE24 0026CD64  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8026FE28 0026CD68  EC 42 F0 28 */	fsubs f2, f2, f30
/* 8026FE2C 0026CD6C  EC 01 01 32 */	fmuls f0, f1, f4
/* 8026FE30 0026CD70  EC 63 F8 28 */	fsubs f3, f3, f31
/* 8026FE34 0026CD74  EC 17 00 BA */	fmadds f0, f23, f2, f0
/* 8026FE38 0026CD78  EC B8 00 FA */	fmadds f5, f24, f3, f0
/* 8026FE3C 0026CD7C  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8026FE40 0026CD80  40 81 00 0C */	ble .L_8026FE4C
/* 8026FE44 0026CD84  FC C0 28 90 */	fmr f6, f5
/* 8026FE48 0026CD88  48 00 00 08 */	b .L_8026FE50
.L_8026FE4C:
/* 8026FE4C 0026CD8C  FC C0 28 50 */	fneg f6, f5
.L_8026FE50:
/* 8026FE50 0026CD90  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8026FE54 0026CD94  C0 03 05 B4 */	lfs f0, 0x5b4(r3)
/* 8026FE58 0026CD98  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 8026FE5C 0026CD9C  40 80 01 70 */	bge .L_8026FFCC
/* 8026FE60 0026CDA0  EC 15 01 32 */	fmuls f0, f21, f4
/* 8026FE64 0026CDA4  EC 16 00 BA */	fmadds f0, f22, f2, f0
/* 8026FE68 0026CDA8  EC 14 00 FA */	fmadds f0, f20, f3, f0
/* 8026FE6C 0026CDAC  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 8026FE70 0026CDB0  40 80 01 5C */	bge .L_8026FFCC
/* 8026FE74 0026CDB4  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 8026FE78 0026CDB8  40 81 01 54 */	ble .L_8026FFCC
/* 8026FE7C 0026CDBC  EC 32 01 32 */	fmuls f1, f18, f4
/* 8026FE80 0026CDC0  C0 02 CD 80 */	lfs f0, lbl_8051B0E0@sda21(r2)
/* 8026FE84 0026CDC4  EC 33 08 BA */	fmadds f1, f19, f2, f1
/* 8026FE88 0026CDC8  EC 31 08 FA */	fmadds f1, f17, f3, f1
/* 8026FE8C 0026CDCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026FE90 0026CDD0  40 81 00 08 */	ble .L_8026FE98
/* 8026FE94 0026CDD4  48 00 00 08 */	b .L_8026FE9C
.L_8026FE98:
/* 8026FE98 0026CDD8  FC 20 08 50 */	fneg f1, f1
.L_8026FE9C:
/* 8026FE9C 0026CDDC  C0 03 05 DC */	lfs f0, 0x5dc(r3)
/* 8026FEA0 0026CDE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026FEA4 0026CDE4  40 80 01 28 */	bge .L_8026FFCC
/* 8026FEA8 0026CDE8  80 1E 02 F8 */	lwz r0, 0x2f8(r30)
/* 8026FEAC 0026CDEC  2C 00 00 00 */	cmpwi r0, 0
/* 8026FEB0 0026CDF0  40 82 00 90 */	bne .L_8026FF40
/* 8026FEB4 0026CDF4  EC 05 30 24 */	fdivs f0, f5, f6
/* 8026FEB8 0026CDF8  7F E3 FB 78 */	mr r3, r31
/* 8026FEBC 0026CDFC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026FEC0 0026CE00  C2 02 CD 80 */	lfs f16, lbl_8051B0E0@sda21(r2)
/* 8026FEC4 0026CE04  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8026FEC8 0026CE08  ED C0 06 72 */	fmuls f14, f0, f25
/* 8026FECC 0026CE0C  ED E0 06 F2 */	fmuls f15, f0, f27
/* 8026FED0 0026CE10  7D 89 03 A6 */	mtctr r12
/* 8026FED4 0026CE14  4E 80 04 21 */	bctrl 
/* 8026FED8 0026CE18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026FEDC 0026CE1C  41 82 00 08 */	beq .L_8026FEE4
/* 8026FEE0 0026CE20  FE 00 D0 90 */	fmr f16, f26
.L_8026FEE4:
/* 8026FEE4 0026CE24  80 DE 00 C0 */	lwz r6, 0xc0(r30)
/* 8026FEE8 0026CE28  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 8026FEEC 0026CE2C  3C 80 80 4B */	lis r4, __vt__Q24Game12InteractWind@ha
/* 8026FEF0 0026CE30  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractDenki@ha
/* 8026FEF4 0026CE34  C0 06 06 04 */	lfs f0, 0x604(r6)
/* 8026FEF8 0026CE38  38 C5 A3 00 */	addi r6, r5, __vt__Q24Game11Interaction@l
/* 8026FEFC 0026CE3C  38 A4 49 74 */	addi r5, r4, __vt__Q24Game12InteractWind@l
/* 8026FF00 0026CE40  38 03 49 08 */	addi r0, r3, __vt__Q24Game13InteractDenki@l
/* 8026FF04 0026CE44  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 8026FF08 0026CE48  7F E3 FB 78 */	mr r3, r31
/* 8026FF0C 0026CE4C  38 81 00 3C */	addi r4, r1, 0x3c
/* 8026FF10 0026CE50  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 8026FF14 0026CE54  93 C1 00 40 */	stw r30, 0x40(r1)
/* 8026FF18 0026CE58  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8026FF1C 0026CE5C  D1 E1 00 48 */	stfs f15, 0x48(r1)
/* 8026FF20 0026CE60  D2 01 00 4C */	stfs f16, 0x4c(r1)
/* 8026FF24 0026CE64  D1 C1 00 50 */	stfs f14, 0x50(r1)
/* 8026FF28 0026CE68  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8026FF2C 0026CE6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026FF30 0026CE70  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8026FF34 0026CE74  7D 89 03 A6 */	mtctr r12
/* 8026FF38 0026CE78  4E 80 04 21 */	bctrl 
/* 8026FF3C 0026CE7C  48 00 00 90 */	b .L_8026FFCC
.L_8026FF40:
/* 8026FF40 0026CE80  2C 00 00 01 */	cmpwi r0, 1
/* 8026FF44 0026CE84  40 82 00 44 */	bne .L_8026FF88
/* 8026FF48 0026CE88  C0 03 06 04 */	lfs f0, 0x604(r3)
/* 8026FF4C 0026CE8C  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 8026FF50 0026CE90  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 8026FF54 0026CE94  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractFire@ha
/* 8026FF58 0026CE98  90 01 00 20 */	stw r0, 0x20(r1)
/* 8026FF5C 0026CE9C  38 03 48 78 */	addi r0, r3, __vt__Q24Game12InteractFire@l
/* 8026FF60 0026CEA0  7F E3 FB 78 */	mr r3, r31
/* 8026FF64 0026CEA4  38 81 00 20 */	addi r4, r1, 0x20
/* 8026FF68 0026CEA8  93 C1 00 24 */	stw r30, 0x24(r1)
/* 8026FF6C 0026CEAC  90 01 00 20 */	stw r0, 0x20(r1)
/* 8026FF70 0026CEB0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8026FF74 0026CEB4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026FF78 0026CEB8  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8026FF7C 0026CEBC  7D 89 03 A6 */	mtctr r12
/* 8026FF80 0026CEC0  4E 80 04 21 */	bctrl 
/* 8026FF84 0026CEC4  48 00 00 48 */	b .L_8026FFCC
.L_8026FF88:
/* 8026FF88 0026CEC8  2C 00 00 02 */	cmpwi r0, 2
/* 8026FF8C 0026CECC  40 82 00 40 */	bne .L_8026FFCC
/* 8026FF90 0026CED0  C0 03 06 04 */	lfs f0, 0x604(r3)
/* 8026FF94 0026CED4  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 8026FF98 0026CED8  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 8026FF9C 0026CEDC  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractBubble@ha
/* 8026FFA0 0026CEE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026FFA4 0026CEE4  38 03 48 30 */	addi r0, r3, __vt__Q24Game14InteractBubble@l
/* 8026FFA8 0026CEE8  7F E3 FB 78 */	mr r3, r31
/* 8026FFAC 0026CEEC  38 81 00 14 */	addi r4, r1, 0x14
/* 8026FFB0 0026CEF0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8026FFB4 0026CEF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026FFB8 0026CEF8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8026FFBC 0026CEFC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026FFC0 0026CF00  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8026FFC4 0026CF04  7D 89 03 A6 */	mtctr r12
/* 8026FFC8 0026CF08  4E 80 04 21 */	bctrl 
.L_8026FFCC:
/* 8026FFCC 0026CF0C  38 61 00 74 */	addi r3, r1, 0x74
/* 8026FFD0 0026CF10  4B FB E5 31 */	bl next__Q24Game12CellIteratorFv
.L_8026FFD4:
/* 8026FFD4 0026CF14  38 61 00 74 */	addi r3, r1, 0x74
/* 8026FFD8 0026CF18  4B FB E5 5D */	bl isDone__Q24Game12CellIteratorFv
/* 8026FFDC 0026CF1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026FFE0 0026CF20  41 82 FD BC */	beq .L_8026FD9C
/* 8026FFE4 0026CF24  E3 E1 02 08 */	psq_l f31, 520(r1), 0, qr0
/* 8026FFE8 0026CF28  CB E1 02 00 */	lfd f31, 0x200(r1)
/* 8026FFEC 0026CF2C  E3 C1 01 F8 */	psq_l f30, 504(r1), 0, qr0
/* 8026FFF0 0026CF30  CB C1 01 F0 */	lfd f30, 0x1f0(r1)
/* 8026FFF4 0026CF34  E3 A1 01 E8 */	psq_l f29, 488(r1), 0, qr0
/* 8026FFF8 0026CF38  CB A1 01 E0 */	lfd f29, 0x1e0(r1)
/* 8026FFFC 0026CF3C  E3 81 01 D8 */	psq_l f28, 472(r1), 0, qr0
/* 80270000 0026CF40  CB 81 01 D0 */	lfd f28, 0x1d0(r1)
/* 80270004 0026CF44  E3 61 01 C8 */	psq_l f27, 456(r1), 0, qr0
/* 80270008 0026CF48  CB 61 01 C0 */	lfd f27, 0x1c0(r1)
/* 8027000C 0026CF4C  E3 41 01 B8 */	psq_l f26, 440(r1), 0, qr0
/* 80270010 0026CF50  CB 41 01 B0 */	lfd f26, 0x1b0(r1)
/* 80270014 0026CF54  E3 21 01 A8 */	psq_l f25, 424(r1), 0, qr0
/* 80270018 0026CF58  CB 21 01 A0 */	lfd f25, 0x1a0(r1)
/* 8027001C 0026CF5C  E3 01 01 98 */	psq_l f24, 408(r1), 0, qr0
/* 80270020 0026CF60  CB 01 01 90 */	lfd f24, 0x190(r1)
/* 80270024 0026CF64  E2 E1 01 88 */	psq_l f23, 392(r1), 0, qr0
/* 80270028 0026CF68  CA E1 01 80 */	lfd f23, 0x180(r1)
/* 8027002C 0026CF6C  E2 C1 01 78 */	psq_l f22, 376(r1), 0, qr0
/* 80270030 0026CF70  CA C1 01 70 */	lfd f22, 0x170(r1)
/* 80270034 0026CF74  E2 A1 01 68 */	psq_l f21, 360(r1), 0, qr0
/* 80270038 0026CF78  CA A1 01 60 */	lfd f21, 0x160(r1)
/* 8027003C 0026CF7C  E2 81 01 58 */	psq_l f20, 344(r1), 0, qr0
/* 80270040 0026CF80  CA 81 01 50 */	lfd f20, 0x150(r1)
/* 80270044 0026CF84  E2 61 01 48 */	psq_l f19, 328(r1), 0, qr0
/* 80270048 0026CF88  CA 61 01 40 */	lfd f19, 0x140(r1)
/* 8027004C 0026CF8C  E2 41 01 38 */	psq_l f18, 312(r1), 0, qr0
/* 80270050 0026CF90  CA 41 01 30 */	lfd f18, 0x130(r1)
/* 80270054 0026CF94  E2 21 01 28 */	psq_l f17, 296(r1), 0, qr0
/* 80270058 0026CF98  CA 21 01 20 */	lfd f17, 0x120(r1)
/* 8027005C 0026CF9C  E2 01 01 18 */	psq_l f16, 280(r1), 0, qr0
/* 80270060 0026CFA0  CA 01 01 10 */	lfd f16, 0x110(r1)
/* 80270064 0026CFA4  E1 E1 01 08 */	psq_l f15, 264(r1), 0, qr0
/* 80270068 0026CFA8  C9 E1 01 00 */	lfd f15, 0x100(r1)
/* 8027006C 0026CFAC  E1 C1 00 F8 */	psq_l f14, 248(r1), 0, qr0
/* 80270070 0026CFB0  C9 C1 00 F0 */	lfd f14, 0xf0(r1)
/* 80270074 0026CFB4  83 E1 00 EC */	lwz r31, 0xec(r1)
/* 80270078 0026CFB8  80 01 02 14 */	lwz r0, 0x214(r1)
/* 8027007C 0026CFBC  83 C1 00 E8 */	lwz r30, 0xe8(r1)
/* 80270080 0026CFC0  7C 08 03 A6 */	mtlr r0
/* 80270084 0026CFC4  38 21 02 10 */	addi r1, r1, 0x210
/* 80270088 0026CFC8  4E 80 00 20 */	blr 
.endfn "interactDenkiAttack__Q34Game8ElecHiba3ObjFR10Vector3<f>"

.fn addDamageMyself__Q34Game8ElecHiba3ObjFf, global
/* 8027008C 0026CFCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80270090 0026CFD0  7C 08 02 A6 */	mflr r0
/* 80270094 0026CFD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270098 0026CFD8  80 83 01 E0 */	lwz r4, 0x1e0(r3)
/* 8027009C 0026CFDC  54 80 07 FF */	clrlwi. r0, r4, 0x1f
/* 802700A0 0026CFE0  40 82 00 28 */	bne .L_802700C8
/* 802700A4 0026CFE4  60 80 00 02 */	ori r0, r4, 2
/* 802700A8 0026CFE8  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 802700AC 0026CFEC  80 83 02 D4 */	lwz r4, 0x2d4(r3)
/* 802700B0 0026CFF0  28 04 00 00 */	cmplwi r4, 0
/* 802700B4 0026CFF4  41 82 00 10 */	beq .L_802700C4
/* 802700B8 0026CFF8  80 64 00 18 */	lwz r3, 0x18(r4)
/* 802700BC 0026CFFC  48 00 00 1D */	bl damageIncrement__Q34Game8ElecHiba3ObjFf
/* 802700C0 0026D000  48 00 00 08 */	b .L_802700C8
.L_802700C4:
/* 802700C4 0026D004  48 00 00 15 */	bl damageIncrement__Q34Game8ElecHiba3ObjFf
.L_802700C8:
/* 802700C8 0026D008  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802700CC 0026D00C  7C 08 03 A6 */	mtlr r0
/* 802700D0 0026D010  38 21 00 10 */	addi r1, r1, 0x10
/* 802700D4 0026D014  4E 80 00 20 */	blr 
.endfn addDamageMyself__Q34Game8ElecHiba3ObjFf

.fn damageIncrement__Q34Game8ElecHiba3ObjFf, global
/* 802700D8 0026D018  C0 03 02 08 */	lfs f0, 0x208(r3)
/* 802700DC 0026D01C  EC 00 08 2A */	fadds f0, f0, f1
/* 802700E0 0026D020  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 802700E4 0026D024  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802700E8 0026D028  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 802700EC 0026D02C  4D 82 00 20 */	beqlr 
/* 802700F0 0026D030  C0 23 02 0C */	lfs f1, 0x20c(r3)
/* 802700F4 0026D034  C0 02 CD 84 */	lfs f0, lbl_8051B0E4@sda21(r2)
/* 802700F8 0026D038  EC 01 00 2A */	fadds f0, f1, f0
/* 802700FC 0026D03C  D0 03 02 0C */	stfs f0, 0x20c(r3)
/* 80270100 0026D040  4E 80 00 20 */	blr 
.endfn damageIncrement__Q34Game8ElecHiba3ObjFf

.fn setupLodParms__Q34Game8ElecHiba3ObjFv, global
/* 80270104 0026D044  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80270108 0026D048  38 00 00 00 */	li r0, 0
/* 8027010C 0026D04C  C0 04 08 BC */	lfs f0, 0x8bc(r4)
/* 80270110 0026D050  D0 03 02 64 */	stfs f0, 0x264(r3)
/* 80270114 0026D054  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80270118 0026D058  C0 04 08 E4 */	lfs f0, 0x8e4(r4)
/* 8027011C 0026D05C  D0 03 02 68 */	stfs f0, 0x268(r3)
/* 80270120 0026D060  98 03 02 6C */	stb r0, 0x26c(r3)
/* 80270124 0026D064  4E 80 00 20 */	blr 
.endfn setupLodParms__Q34Game8ElecHiba3ObjFv

.fn updateEfxLod__Q34Game8ElecHiba3ObjFv, global
/* 80270128 0026D068  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027012C 0026D06C  7C 08 02 A6 */	mflr r0
/* 80270130 0026D070  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270134 0026D074  80 83 02 F0 */	lwz r4, 0x2f0(r3)
/* 80270138 0026D078  28 04 00 00 */	cmplwi r4, 0
/* 8027013C 0026D07C  41 82 00 14 */	beq .L_80270150
/* 80270140 0026D080  88 03 00 D8 */	lbz r0, 0xd8(r3)
/* 80270144 0026D084  7C 83 23 78 */	mr r3, r4
/* 80270148 0026D088  54 04 07 BE */	clrlwi r4, r0, 0x1e
/* 8027014C 0026D08C  48 14 50 49 */	bl setRateLOD__Q23efx13TDenkiHibaMgrFi
.L_80270150:
/* 80270150 0026D090  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80270154 0026D094  7C 08 03 A6 */	mtlr r0
/* 80270158 0026D098  38 21 00 10 */	addi r1, r1, 0x10
/* 8027015C 0026D09C  4E 80 00 20 */	blr 
.endfn updateEfxLod__Q34Game8ElecHiba3ObjFv

.fn createEffect__Q34Game8ElecHiba3ObjFb, global
/* 80270160 0026D0A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80270164 0026D0A4  7C 08 02 A6 */	mflr r0
/* 80270168 0026D0A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8027016C 0026D0AC  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80270170 0026D0B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80270174 0026D0B4  7C 7F 1B 78 */	mr r31, r3
/* 80270178 0026D0B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8027017C 0026D0BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80270180 0026D0C0  41 82 00 98 */	beq .L_80270218
/* 80270184 0026D0C4  38 60 00 B8 */	li r3, 0xb8
/* 80270188 0026D0C8  4B DB 3D 1D */	bl __nw__FUl
/* 8027018C 0026D0CC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80270190 0026D0D0  41 82 00 80 */	beq .L_80270210
/* 80270194 0026D0D4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80270198 0026D0D8  3C 60 80 4E */	lis r3, __vt__Q23efx13TDenkiHibaMgr@ha
/* 8027019C 0026D0DC  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802701A0 0026D0E0  3B BE 00 04 */	addi r29, r30, 4
/* 802701A4 0026D0E4  90 1E 00 00 */	stw r0, 0(r30)
/* 802701A8 0026D0E8  38 03 6B 68 */	addi r0, r3, __vt__Q23efx13TDenkiHibaMgr@l
/* 802701AC 0026D0EC  38 80 00 2D */	li r4, 0x2d
/* 802701B0 0026D0F0  7F A3 EB 78 */	mr r3, r29
/* 802701B4 0026D0F4  90 1E 00 00 */	stw r0, 0(r30)
/* 802701B8 0026D0F8  38 A0 00 2E */	li r5, 0x2e
/* 802701BC 0026D0FC  38 C0 00 2F */	li r6, 0x2f
/* 802701C0 0026D100  48 13 FF 41 */	bl __ct__Q23efx9TForever3FUsUsUs
/* 802701C4 0026D104  3C 60 80 4E */	lis r3, __vt__Q23efx10TDenkiHiba@ha
/* 802701C8 0026D108  3C 80 80 27 */	lis r4, __ct__Q23efx10TDenkiPoleFv@ha
/* 802701CC 0026D10C  38 03 6B 7C */	addi r0, r3, __vt__Q23efx10TDenkiHiba@l
/* 802701D0 0026D110  38 C0 00 24 */	li r6, 0x24
/* 802701D4 0026D114  3C 60 80 27 */	lis r3, __dt__Q23efx10TDenkiPoleFv@ha
/* 802701D8 0026D118  90 1D 00 00 */	stw r0, 0(r29)
/* 802701DC 0026D11C  38 A3 03 44 */	addi r5, r3, __dt__Q23efx10TDenkiPoleFv@l
/* 802701E0 0026D120  38 84 03 D4 */	addi r4, r4, __ct__Q23efx10TDenkiPoleFv@l
/* 802701E4 0026D124  38 7E 00 38 */	addi r3, r30, 0x38
/* 802701E8 0026D128  38 E0 00 02 */	li r7, 2
/* 802701EC 0026D12C  4B E5 16 51 */	bl __construct_array
/* 802701F0 0026D130  3C 60 80 27 */	lis r3, __ct__Q23efx14TDenkipoleSignFv@ha
/* 802701F4 0026D134  3C A0 80 27 */	lis r5, __dt__Q23efx14TDenkipoleSignFv@ha
/* 802701F8 0026D138  38 83 02 D8 */	addi r4, r3, __ct__Q23efx14TDenkipoleSignFv@l
/* 802701FC 0026D13C  38 C0 00 10 */	li r6, 0x10
/* 80270200 0026D140  38 7E 00 80 */	addi r3, r30, 0x80
/* 80270204 0026D144  38 A5 02 3C */	addi r5, r5, __dt__Q23efx14TDenkipoleSignFv@l
/* 80270208 0026D148  38 E0 00 02 */	li r7, 2
/* 8027020C 0026D14C  4B E5 16 31 */	bl __construct_array
.L_80270210:
/* 80270210 0026D150  93 DF 02 F0 */	stw r30, 0x2f0(r31)
/* 80270214 0026D154  48 00 00 0C */	b .L_80270220
.L_80270218:
/* 80270218 0026D158  38 00 00 00 */	li r0, 0
/* 8027021C 0026D15C  90 1F 02 F0 */	stw r0, 0x2f0(r31)
.L_80270220:
/* 80270220 0026D160  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80270224 0026D164  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80270228 0026D168  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8027022C 0026D16C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80270230 0026D170  7C 08 03 A6 */	mtlr r0
/* 80270234 0026D174  38 21 00 20 */	addi r1, r1, 0x20
/* 80270238 0026D178  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game8ElecHiba3ObjFb

.fn __dt__Q23efx14TDenkipoleSignFv, weak
/* 8027023C 0026D17C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80270240 0026D180  7C 08 02 A6 */	mflr r0
/* 80270244 0026D184  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270248 0026D188  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027024C 0026D18C  7C 9F 23 78 */	mr r31, r4
/* 80270250 0026D190  93 C1 00 08 */	stw r30, 8(r1)
/* 80270254 0026D194  7C 7E 1B 79 */	or. r30, r3, r3
/* 80270258 0026D198  41 82 00 64 */	beq .L_802702BC
/* 8027025C 0026D19C  3C 60 80 4C */	lis r3, __vt__Q23efx14TDenkipoleSign@ha
/* 80270260 0026D1A0  38 63 5F 50 */	addi r3, r3, __vt__Q23efx14TDenkipoleSign@l
/* 80270264 0026D1A4  90 7E 00 00 */	stw r3, 0(r30)
/* 80270268 0026D1A8  38 03 00 14 */	addi r0, r3, 0x14
/* 8027026C 0026D1AC  90 1E 00 04 */	stw r0, 4(r30)
/* 80270270 0026D1B0  41 82 00 3C */	beq .L_802702AC
/* 80270274 0026D1B4  3C 60 80 4B */	lis r3, __vt__Q23efx8TForever@ha
/* 80270278 0026D1B8  38 63 2C 24 */	addi r3, r3, __vt__Q23efx8TForever@l
/* 8027027C 0026D1BC  90 7E 00 00 */	stw r3, 0(r30)
/* 80270280 0026D1C0  38 03 00 14 */	addi r0, r3, 0x14
/* 80270284 0026D1C4  90 1E 00 04 */	stw r0, 4(r30)
/* 80270288 0026D1C8  41 82 00 24 */	beq .L_802702AC
/* 8027028C 0026D1CC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80270290 0026D1D0  38 7E 00 04 */	addi r3, r30, 4
/* 80270294 0026D1D4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80270298 0026D1D8  38 80 00 00 */	li r4, 0
/* 8027029C 0026D1DC  90 BE 00 00 */	stw r5, 0(r30)
/* 802702A0 0026D1E0  38 05 00 14 */	addi r0, r5, 0x14
/* 802702A4 0026D1E4  90 1E 00 04 */	stw r0, 4(r30)
/* 802702A8 0026D1E8  4B E1 F9 F5 */	bl __dt__18JPAEmitterCallBackFv
.L_802702AC:
/* 802702AC 0026D1EC  7F E0 07 35 */	extsh. r0, r31
/* 802702B0 0026D1F0  40 81 00 0C */	ble .L_802702BC
/* 802702B4 0026D1F4  7F C3 F3 78 */	mr r3, r30
/* 802702B8 0026D1F8  4B DB 3D FD */	bl __dl__FPv
.L_802702BC:
/* 802702BC 0026D1FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802702C0 0026D200  7F C3 F3 78 */	mr r3, r30
/* 802702C4 0026D204  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802702C8 0026D208  83 C1 00 08 */	lwz r30, 8(r1)
/* 802702CC 0026D20C  7C 08 03 A6 */	mtlr r0
/* 802702D0 0026D210  38 21 00 10 */	addi r1, r1, 0x10
/* 802702D4 0026D214  4E 80 00 20 */	blr 
.endfn __dt__Q23efx14TDenkipoleSignFv

.fn __ct__Q23efx14TDenkipoleSignFv, weak
/* 802702D8 0026D218  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802702DC 0026D21C  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 802702E0 0026D220  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802702E4 0026D224  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 802702E8 0026D228  90 03 00 00 */	stw r0, 0(r3)
/* 802702EC 0026D22C  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 802702F0 0026D230  3C 80 80 4B */	lis r4, __vt__Q23efx8TForever@ha
/* 802702F4 0026D234  38 A5 69 8C */	addi r5, r5, __vt__Q23efx5TSync@l
/* 802702F8 0026D238  90 03 00 04 */	stw r0, 4(r3)
/* 802702FC 0026D23C  38 C4 2C 24 */	addi r6, r4, __vt__Q23efx8TForever@l
/* 80270300 0026D240  3C 80 80 4C */	lis r4, __vt__Q23efx14TDenkipoleSign@ha
/* 80270304 0026D244  38 05 00 14 */	addi r0, r5, 0x14
/* 80270308 0026D248  90 A3 00 00 */	stw r5, 0(r3)
/* 8027030C 0026D24C  39 00 00 00 */	li r8, 0
/* 80270310 0026D250  38 E0 00 32 */	li r7, 0x32
/* 80270314 0026D254  38 A6 00 14 */	addi r5, r6, 0x14
/* 80270318 0026D258  90 03 00 04 */	stw r0, 4(r3)
/* 8027031C 0026D25C  38 84 5F 50 */	addi r4, r4, __vt__Q23efx14TDenkipoleSign@l
/* 80270320 0026D260  38 04 00 14 */	addi r0, r4, 0x14
/* 80270324 0026D264  91 03 00 08 */	stw r8, 8(r3)
/* 80270328 0026D268  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 8027032C 0026D26C  99 03 00 0E */	stb r8, 0xe(r3)
/* 80270330 0026D270  90 C3 00 00 */	stw r6, 0(r3)
/* 80270334 0026D274  90 A3 00 04 */	stw r5, 4(r3)
/* 80270338 0026D278  90 83 00 00 */	stw r4, 0(r3)
/* 8027033C 0026D27C  90 03 00 04 */	stw r0, 4(r3)
/* 80270340 0026D280  4E 80 00 20 */	blr 
.endfn __ct__Q23efx14TDenkipoleSignFv

.fn __dt__Q23efx10TDenkiPoleFv, weak
/* 80270344 0026D284  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80270348 0026D288  7C 08 02 A6 */	mflr r0
/* 8027034C 0026D28C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270350 0026D290  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80270354 0026D294  7C 9F 23 78 */	mr r31, r4
/* 80270358 0026D298  93 C1 00 08 */	stw r30, 8(r1)
/* 8027035C 0026D29C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80270360 0026D2A0  41 82 00 58 */	beq .L_802703B8
/* 80270364 0026D2A4  3C 60 80 4C */	lis r3, __vt__Q23efx10TDenkiPole@ha
/* 80270368 0026D2A8  38 03 5F 34 */	addi r0, r3, __vt__Q23efx10TDenkiPole@l
/* 8027036C 0026D2AC  90 1E 00 00 */	stw r0, 0(r30)
/* 80270370 0026D2B0  41 82 00 38 */	beq .L_802703A8
/* 80270374 0026D2B4  3C 60 80 4B */	lis r3, __vt__Q23efx9TForever2@ha
/* 80270378 0026D2B8  38 03 29 98 */	addi r0, r3, __vt__Q23efx9TForever2@l
/* 8027037C 0026D2BC  90 1E 00 00 */	stw r0, 0(r30)
/* 80270380 0026D2C0  41 82 00 28 */	beq .L_802703A8
/* 80270384 0026D2C4  3C 60 80 4B */	lis r3, "__vt__Q23efx28TSyncGroup2<Q23efx8TForever>"@ha
/* 80270388 0026D2C8  3C 80 80 17 */	lis r4, __dt__Q23efx8TForeverFv@ha
/* 8027038C 0026D2CC  38 03 29 7C */	addi r0, r3, "__vt__Q23efx28TSyncGroup2<Q23efx8TForever>"@l
/* 80270390 0026D2D0  38 A0 00 10 */	li r5, 0x10
/* 80270394 0026D2D4  90 1E 00 00 */	stw r0, 0(r30)
/* 80270398 0026D2D8  38 7E 00 04 */	addi r3, r30, 4
/* 8027039C 0026D2DC  38 84 5C C8 */	addi r4, r4, __dt__Q23efx8TForeverFv@l
/* 802703A0 0026D2E0  38 C0 00 02 */	li r6, 2
/* 802703A4 0026D2E4  4B E5 14 21 */	bl __destroy_arr
.L_802703A8:
/* 802703A8 0026D2E8  7F E0 07 35 */	extsh. r0, r31
/* 802703AC 0026D2EC  40 81 00 0C */	ble .L_802703B8
/* 802703B0 0026D2F0  7F C3 F3 78 */	mr r3, r30
/* 802703B4 0026D2F4  4B DB 3D 01 */	bl __dl__FPv
.L_802703B8:
/* 802703B8 0026D2F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802703BC 0026D2FC  7F C3 F3 78 */	mr r3, r30
/* 802703C0 0026D300  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802703C4 0026D304  83 C1 00 08 */	lwz r30, 8(r1)
/* 802703C8 0026D308  7C 08 03 A6 */	mtlr r0
/* 802703CC 0026D30C  38 21 00 10 */	addi r1, r1, 0x10
/* 802703D0 0026D310  4E 80 00 20 */	blr 
.endfn __dt__Q23efx10TDenkiPoleFv

.fn __ct__Q23efx10TDenkiPoleFv, weak
/* 802703D4 0026D314  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802703D8 0026D318  7C 08 02 A6 */	mflr r0
/* 802703DC 0026D31C  38 80 00 30 */	li r4, 0x30
/* 802703E0 0026D320  38 A0 00 31 */	li r5, 0x31
/* 802703E4 0026D324  90 01 00 14 */	stw r0, 0x14(r1)
/* 802703E8 0026D328  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802703EC 0026D32C  7C 7F 1B 78 */	mr r31, r3
/* 802703F0 0026D330  48 13 FC 21 */	bl __ct__Q23efx9TForever2FUsUs
/* 802703F4 0026D334  3C 80 80 4C */	lis r4, __vt__Q23efx10TDenkiPole@ha
/* 802703F8 0026D338  7F E3 FB 78 */	mr r3, r31
/* 802703FC 0026D33C  38 04 5F 34 */	addi r0, r4, __vt__Q23efx10TDenkiPole@l
/* 80270400 0026D340  90 1F 00 00 */	stw r0, 0(r31)
/* 80270404 0026D344  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80270408 0026D348  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027040C 0026D34C  7C 08 03 A6 */	mtlr r0
/* 80270410 0026D350  38 21 00 10 */	addi r1, r1, 0x10
/* 80270414 0026D354  4E 80 00 20 */	blr 
.endfn __ct__Q23efx10TDenkiPoleFv

.fn startChargeEffect__Q34Game8ElecHiba3ObjFPQ24Game8Creature, global
/* 80270418 0026D358  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8027041C 0026D35C  7C 08 02 A6 */	mflr r0
/* 80270420 0026D360  90 01 00 74 */	stw r0, 0x74(r1)
/* 80270424 0026D364  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80270428 0026D368  7C 7F 1B 78 */	mr r31, r3
/* 8027042C 0026D36C  80 03 02 F0 */	lwz r0, 0x2f0(r3)
/* 80270430 0026D370  28 00 00 00 */	cmplwi r0, 0
/* 80270434 0026D374  41 82 00 E0 */	beq .L_80270514
/* 80270438 0026D378  81 84 00 00 */	lwz r12, 0(r4)
/* 8027043C 0026D37C  38 61 00 20 */	addi r3, r1, 0x20
/* 80270440 0026D380  81 8C 00 08 */	lwz r12, 8(r12)
/* 80270444 0026D384  7D 89 03 A6 */	mtctr r12
/* 80270448 0026D388  4E 80 04 21 */	bctrl 
/* 8027044C 0026D38C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80270450 0026D390  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80270454 0026D394  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80270458 0026D398  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 8027045C 0026D39C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80270460 0026D3A0  38 A3 41 E4 */	addi r5, r3, "zero__10Vector3<f>"@l
/* 80270464 0026D3A4  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80270468 0026D3A8  3C 60 80 4C */	lis r3, __vt__Q23efx12ArgDenkiHiba@ha
/* 8027046C 0026D3AC  81 1F 01 8C */	lwz r8, 0x18c(r31)
/* 80270470 0026D3B0  38 C4 A7 EC */	addi r6, r4, __vt__Q23efx3Arg@l
/* 80270474 0026D3B4  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80270478 0026D3B8  38 03 5F 28 */	addi r0, r3, __vt__Q23efx12ArgDenkiHiba@l
/* 8027047C 0026D3BC  81 61 00 2C */	lwz r11, 0x2c(r1)
/* 80270480 0026D3C0  38 81 00 38 */	addi r4, r1, 0x38
/* 80270484 0026D3C4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80270488 0026D3C8  81 41 00 30 */	lwz r10, 0x30(r1)
/* 8027048C 0026D3CC  81 21 00 34 */	lwz r9, 0x34(r1)
/* 80270490 0026D3D0  80 FF 01 90 */	lwz r7, 0x190(r31)
/* 80270494 0026D3D4  80 7F 01 94 */	lwz r3, 0x194(r31)
/* 80270498 0026D3D8  91 61 00 08 */	stw r11, 8(r1)
/* 8027049C 0026D3DC  C1 05 00 00 */	lfs f8, 0(r5)
/* 802704A0 0026D3E0  91 41 00 0C */	stw r10, 0xc(r1)
/* 802704A4 0026D3E4  C0 E5 00 04 */	lfs f7, 4(r5)
/* 802704A8 0026D3E8  91 21 00 10 */	stw r9, 0x10(r1)
/* 802704AC 0026D3EC  C0 C5 00 08 */	lfs f6, 8(r5)
/* 802704B0 0026D3F0  91 01 00 14 */	stw r8, 0x14(r1)
/* 802704B4 0026D3F4  C0 41 00 08 */	lfs f2, 8(r1)
/* 802704B8 0026D3F8  90 E1 00 18 */	stw r7, 0x18(r1)
/* 802704BC 0026D3FC  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 802704C0 0026D400  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802704C4 0026D404  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 802704C8 0026D408  90 C1 00 38 */	stw r6, 0x38(r1)
/* 802704CC 0026D40C  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 802704D0 0026D410  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802704D4 0026D414  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802704D8 0026D418  D1 01 00 3C */	stfs f8, 0x3c(r1)
/* 802704DC 0026D41C  D0 E1 00 40 */	stfs f7, 0x40(r1)
/* 802704E0 0026D420  D0 C1 00 44 */	stfs f6, 0x44(r1)
/* 802704E4 0026D424  90 01 00 38 */	stw r0, 0x38(r1)
/* 802704E8 0026D428  D0 A1 00 48 */	stfs f5, 0x48(r1)
/* 802704EC 0026D42C  D0 81 00 4C */	stfs f4, 0x4c(r1)
/* 802704F0 0026D430  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 802704F4 0026D434  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 802704F8 0026D438  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 802704FC 0026D43C  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80270500 0026D440  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 80270504 0026D444  81 83 00 00 */	lwz r12, 0(r3)
/* 80270508 0026D448  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027050C 0026D44C  7D 89 03 A6 */	mtctr r12
/* 80270510 0026D450  4E 80 04 21 */	bctrl 
.L_80270514:
/* 80270514 0026D454  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80270518 0026D458  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8027051C 0026D45C  7C 08 03 A6 */	mtlr r0
/* 80270520 0026D460  38 21 00 70 */	addi r1, r1, 0x70
/* 80270524 0026D464  4E 80 00 20 */	blr 
.endfn startChargeEffect__Q34Game8ElecHiba3ObjFPQ24Game8Creature

.fn finishChargeEffect__Q34Game8ElecHiba3ObjFv, global
/* 80270528 0026D468  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027052C 0026D46C  7C 08 02 A6 */	mflr r0
/* 80270530 0026D470  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270534 0026D474  80 63 02 F0 */	lwz r3, 0x2f0(r3)
/* 80270538 0026D478  28 03 00 00 */	cmplwi r3, 0
/* 8027053C 0026D47C  41 82 00 14 */	beq .L_80270550
/* 80270540 0026D480  81 83 00 00 */	lwz r12, 0(r3)
/* 80270544 0026D484  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80270548 0026D488  7D 89 03 A6 */	mtctr r12
/* 8027054C 0026D48C  4E 80 04 21 */	bctrl 
.L_80270550:
/* 80270550 0026D490  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80270554 0026D494  7C 08 03 A6 */	mtlr r0
/* 80270558 0026D498  38 21 00 10 */	addi r1, r1, 0x10
/* 8027055C 0026D49C  4E 80 00 20 */	blr 
.endfn finishChargeEffect__Q34Game8ElecHiba3ObjFv

.fn startDisChargeEffect__Q34Game8ElecHiba3ObjFv, global
/* 80270560 0026D4A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80270564 0026D4A4  7C 08 02 A6 */	mflr r0
/* 80270568 0026D4A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027056C 0026D4AC  80 03 02 F0 */	lwz r0, 0x2f0(r3)
/* 80270570 0026D4B0  28 00 00 00 */	cmplwi r0, 0
/* 80270574 0026D4B4  41 82 00 4C */	beq .L_802705C0
/* 80270578 0026D4B8  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 8027057C 0026D4BC  2C 03 00 00 */	cmpwi r3, 0
/* 80270580 0026D4C0  40 82 00 14 */	bne .L_80270594
/* 80270584 0026D4C4  7C 03 03 78 */	mr r3, r0
/* 80270588 0026D4C8  38 80 00 00 */	li r4, 0
/* 8027058C 0026D4CC  48 14 49 79 */	bl createHiba__Q23efx13TDenkiHibaMgrFi
/* 80270590 0026D4D0  48 00 00 30 */	b .L_802705C0
.L_80270594:
/* 80270594 0026D4D4  2C 03 00 01 */	cmpwi r3, 1
/* 80270598 0026D4D8  40 82 00 14 */	bne .L_802705AC
/* 8027059C 0026D4DC  7C 03 03 78 */	mr r3, r0
/* 802705A0 0026D4E0  38 80 00 01 */	li r4, 1
/* 802705A4 0026D4E4  48 14 49 61 */	bl createHiba__Q23efx13TDenkiHibaMgrFi
/* 802705A8 0026D4E8  48 00 00 18 */	b .L_802705C0
.L_802705AC:
/* 802705AC 0026D4EC  2C 03 00 02 */	cmpwi r3, 2
/* 802705B0 0026D4F0  40 82 00 10 */	bne .L_802705C0
/* 802705B4 0026D4F4  7C 03 03 78 */	mr r3, r0
/* 802705B8 0026D4F8  38 80 00 02 */	li r4, 2
/* 802705BC 0026D4FC  48 14 49 49 */	bl createHiba__Q23efx13TDenkiHibaMgrFi
.L_802705C0:
/* 802705C0 0026D500  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802705C4 0026D504  7C 08 03 A6 */	mtlr r0
/* 802705C8 0026D508  38 21 00 10 */	addi r1, r1, 0x10
/* 802705CC 0026D50C  4E 80 00 20 */	blr 
.endfn startDisChargeEffect__Q34Game8ElecHiba3ObjFv

.fn finishDisChargeEffect__Q34Game8ElecHiba3ObjFv, global
/* 802705D0 0026D510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802705D4 0026D514  7C 08 02 A6 */	mflr r0
/* 802705D8 0026D518  90 01 00 14 */	stw r0, 0x14(r1)
/* 802705DC 0026D51C  80 63 02 F0 */	lwz r3, 0x2f0(r3)
/* 802705E0 0026D520  28 03 00 00 */	cmplwi r3, 0
/* 802705E4 0026D524  41 82 00 14 */	beq .L_802705F8
/* 802705E8 0026D528  81 83 00 00 */	lwz r12, 0(r3)
/* 802705EC 0026D52C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802705F0 0026D530  7D 89 03 A6 */	mtctr r12
/* 802705F4 0026D534  4E 80 04 21 */	bctrl 
.L_802705F8:
/* 802705F8 0026D538  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802705FC 0026D53C  7C 08 03 A6 */	mtlr r0
/* 80270600 0026D540  38 21 00 10 */	addi r1, r1, 0x10
/* 80270604 0026D544  4E 80 00 20 */	blr 
.endfn finishDisChargeEffect__Q34Game8ElecHiba3ObjFv

.fn generatorKill__Q34Game8ElecHiba3ObjFv, global
/* 80270608 0026D548  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027060C 0026D54C  7C 08 02 A6 */	mflr r0
/* 80270610 0026D550  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270614 0026D554  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80270618 0026D558  7C 7F 1B 78 */	mr r31, r3
/* 8027061C 0026D55C  80 63 00 C4 */	lwz r3, 0xc4(r3)
/* 80270620 0026D560  28 03 00 00 */	cmplwi r3, 0
/* 80270624 0026D564  41 82 00 14 */	beq .L_80270638
/* 80270628 0026D568  7F E4 FB 78 */	mr r4, r31
/* 8027062C 0026D56C  4B F3 A6 C9 */	bl informDeath__Q24Game9GeneratorFPQ24Game8Creature
/* 80270630 0026D570  38 00 00 00 */	li r0, 0
/* 80270634 0026D574  90 1F 00 C4 */	stw r0, 0xc4(r31)
.L_80270638:
/* 80270638 0026D578  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027063C 0026D57C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80270640 0026D580  7C 08 03 A6 */	mtlr r0
/* 80270644 0026D584  38 21 00 10 */	addi r1, r1, 0x10
/* 80270648 0026D588  4E 80 00 20 */	blr 
.endfn generatorKill__Q34Game8ElecHiba3ObjFv

.fn setVersusHibaOnOff__Q34Game8ElecHiba3ObjFv, global
/* 8027064C 0026D58C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80270650 0026D590  7C 08 02 A6 */	mflr r0
/* 80270654 0026D594  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270658 0026D598  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027065C 0026D59C  7C 7F 1B 78 */	mr r31, r3
/* 80270660 0026D5A0  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80270664 0026D5A4  28 04 00 00 */	cmplwi r4, 0
/* 80270668 0026D5A8  41 82 00 34 */	beq .L_8027069C
/* 8027066C 0026D5AC  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80270670 0026D5B0  2C 00 00 01 */	cmpwi r0, 1
/* 80270674 0026D5B4  40 82 00 28 */	bne .L_8027069C
/* 80270678 0026D5B8  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 8027067C 0026D5BC  28 03 00 00 */	cmplwi r3, 0
/* 80270680 0026D5C0  41 82 00 1C */	beq .L_8027069C
/* 80270684 0026D5C4  4B FD 48 2D */	bl isVersusHiba__Q34Game4Cave10RandMapMgrFv
/* 80270688 0026D5C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027068C 0026D5CC  41 82 00 10 */	beq .L_8027069C
/* 80270690 0026D5D0  38 00 00 01 */	li r0, 1
/* 80270694 0026D5D4  98 1F 02 F4 */	stb r0, 0x2f4(r31)
/* 80270698 0026D5D8  48 00 00 0C */	b .L_802706A4
.L_8027069C:
/* 8027069C 0026D5DC  38 00 00 00 */	li r0, 0
/* 802706A0 0026D5E0  98 1F 02 F4 */	stb r0, 0x2f4(r31)
.L_802706A4:
/* 802706A4 0026D5E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802706A8 0026D5E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802706AC 0026D5EC  7C 08 03 A6 */	mtlr r0
/* 802706B0 0026D5F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802706B4 0026D5F4  4E 80 00 20 */	blr 
.endfn setVersusHibaOnOff__Q34Game8ElecHiba3ObjFv

.fn setVersusHibaType__Q34Game8ElecHiba3ObjFv, global
/* 802706B8 0026D5F8  80 83 02 FC */	lwz r4, 0x2fc(r3)
/* 802706BC 0026D5FC  80 03 03 00 */	lwz r0, 0x300(r3)
/* 802706C0 0026D600  7C 04 00 00 */	cmpw r4, r0
/* 802706C4 0026D604  4D 82 00 20 */	beqlr 
/* 802706C8 0026D608  40 81 00 10 */	ble .L_802706D8
/* 802706CC 0026D60C  38 00 00 01 */	li r0, 1
/* 802706D0 0026D610  90 03 02 F8 */	stw r0, 0x2f8(r3)
/* 802706D4 0026D614  4E 80 00 20 */	blr 
.L_802706D8:
/* 802706D8 0026D618  38 00 00 02 */	li r0, 2
/* 802706DC 0026D61C  90 03 02 F8 */	stw r0, 0x2f8(r3)
/* 802706E0 0026D620  4E 80 00 20 */	blr 
.endfn setVersusHibaType__Q34Game8ElecHiba3ObjFv

.fn resetAttrHitCount__Q34Game8ElecHiba3ObjFv, global
/* 802706E4 0026D624  38 00 00 00 */	li r0, 0
/* 802706E8 0026D628  90 03 02 FC */	stw r0, 0x2fc(r3)
/* 802706EC 0026D62C  90 03 03 00 */	stw r0, 0x300(r3)
/* 802706F0 0026D630  4E 80 00 20 */	blr 
.endfn resetAttrHitCount__Q34Game8ElecHiba3ObjFv

.fn addAttrAttackCount__Q34Game8ElecHiba3ObjFPQ24Game4Piki, global
/* 802706F4 0026D634  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802706F8 0026D638  7C 08 02 A6 */	mflr r0
/* 802706FC 0026D63C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270700 0026D640  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80270704 0026D644  7C 7F 1B 78 */	mr r31, r3
/* 80270708 0026D648  88 04 02 B8 */	lbz r0, 0x2b8(r4)
/* 8027070C 0026D64C  2C 00 00 01 */	cmpwi r0, 1
/* 80270710 0026D650  40 82 00 14 */	bne .L_80270724
/* 80270714 0026D654  80 7F 02 FC */	lwz r3, 0x2fc(r31)
/* 80270718 0026D658  38 03 00 01 */	addi r0, r3, 1
/* 8027071C 0026D65C  90 1F 02 FC */	stw r0, 0x2fc(r31)
/* 80270720 0026D660  48 00 00 18 */	b .L_80270738
.L_80270724:
/* 80270724 0026D664  2C 00 00 00 */	cmpwi r0, 0
/* 80270728 0026D668  40 82 00 10 */	bne .L_80270738
/* 8027072C 0026D66C  80 7F 03 00 */	lwz r3, 0x300(r31)
/* 80270730 0026D670  38 03 00 01 */	addi r0, r3, 1
/* 80270734 0026D674  90 1F 03 00 */	stw r0, 0x300(r31)
.L_80270738:
/* 80270738 0026D678  7F E3 FB 78 */	mr r3, r31
/* 8027073C 0026D67C  4B E9 6C B9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80270740 0026D680  2C 03 00 03 */	cmpwi r3, 3
/* 80270744 0026D684  40 82 00 0C */	bne .L_80270750
/* 80270748 0026D688  C0 02 CD 80 */	lfs f0, lbl_8051B0E0@sda21(r2)
/* 8027074C 0026D68C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
.L_80270750:
/* 80270750 0026D690  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80270754 0026D694  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80270758 0026D698  7C 08 03 A6 */	mtlr r0
/* 8027075C 0026D69C  38 21 00 10 */	addi r1, r1, 0x10
/* 80270760 0026D6A0  4E 80 00 20 */	blr 
.endfn addAttrAttackCount__Q34Game8ElecHiba3ObjFPQ24Game4Piki

.fn isWaitFinish__Q34Game8ElecHiba3ObjFv, global
/* 80270764 0026D6A4  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80270768 0026D6A8  C0 23 02 C4 */	lfs f1, 0x2c4(r3)
/* 8027076C 0026D6AC  C0 04 08 6C */	lfs f0, 0x86c(r4)
/* 80270770 0026D6B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80270774 0026D6B4  40 81 00 28 */	ble .L_8027079C
/* 80270778 0026D6B8  80 03 02 F8 */	lwz r0, 0x2f8(r3)
/* 8027077C 0026D6BC  2C 00 00 00 */	cmpwi r0, 0
/* 80270780 0026D6C0  40 82 00 14 */	bne .L_80270794
/* 80270784 0026D6C4  80 83 02 FC */	lwz r4, 0x2fc(r3)
/* 80270788 0026D6C8  80 03 03 00 */	lwz r0, 0x300(r3)
/* 8027078C 0026D6CC  7C 04 00 00 */	cmpw r4, r0
/* 80270790 0026D6D0  41 82 00 0C */	beq .L_8027079C
.L_80270794:
/* 80270794 0026D6D4  38 60 00 01 */	li r3, 1
/* 80270798 0026D6D8  4E 80 00 20 */	blr 
.L_8027079C:
/* 8027079C 0026D6DC  38 60 00 00 */	li r3, 0
/* 802707A0 0026D6E0  4E 80 00 20 */	blr 
.endfn isWaitFinish__Q34Game8ElecHiba3ObjFv

.fn isAttackFinish__Q34Game8ElecHiba3ObjFv, global
/* 802707A4 0026D6E4  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802707A8 0026D6E8  C0 23 02 C4 */	lfs f1, 0x2c4(r3)
/* 802707AC 0026D6EC  C0 04 08 6C */	lfs f0, 0x86c(r4)
/* 802707B0 0026D6F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802707B4 0026D6F4  41 81 00 38 */	bgt .L_802707EC
/* 802707B8 0026D6F8  80 A3 02 F8 */	lwz r5, 0x2f8(r3)
/* 802707BC 0026D6FC  2C 05 00 01 */	cmpwi r5, 1
/* 802707C0 0026D700  40 82 00 14 */	bne .L_802707D4
/* 802707C4 0026D704  80 83 03 00 */	lwz r4, 0x300(r3)
/* 802707C8 0026D708  80 03 02 FC */	lwz r0, 0x2fc(r3)
/* 802707CC 0026D70C  7C 04 00 00 */	cmpw r4, r0
/* 802707D0 0026D710  41 81 00 1C */	bgt .L_802707EC
.L_802707D4:
/* 802707D4 0026D714  2C 05 00 02 */	cmpwi r5, 2
/* 802707D8 0026D718  40 82 00 1C */	bne .L_802707F4
/* 802707DC 0026D71C  80 83 02 FC */	lwz r4, 0x2fc(r3)
/* 802707E0 0026D720  80 03 03 00 */	lwz r0, 0x300(r3)
/* 802707E4 0026D724  7C 04 00 00 */	cmpw r4, r0
/* 802707E8 0026D728  40 81 00 0C */	ble .L_802707F4
.L_802707EC:
/* 802707EC 0026D72C  38 60 00 01 */	li r3, 1
/* 802707F0 0026D730  4E 80 00 20 */	blr 
.L_802707F4:
/* 802707F4 0026D734  38 60 00 00 */	li r3, 0
/* 802707F8 0026D738  4E 80 00 20 */	blr 
.endfn isAttackFinish__Q34Game8ElecHiba3ObjFv

.fn getName__Q23efx12ArgDenkiHibaFv, weak
/* 802707FC 0026D73C  3C 60 80 48 */	lis r3, lbl_80486868@ha
/* 80270800 0026D740  38 63 68 68 */	addi r3, r3, lbl_80486868@l
/* 80270804 0026D744  4E 80 00 20 */	blr 
.endfn getName__Q23efx12ArgDenkiHibaFv

.fn doSimulation__Q34Game8ElecHiba3ObjFf, weak
/* 80270808 0026D748  4E 80 00 20 */	blr 
.endfn doSimulation__Q34Game8ElecHiba3ObjFf

.fn inWaterCallback__Q34Game8ElecHiba3ObjFPQ24Game8WaterBox, weak
/* 8027080C 0026D74C  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q34Game8ElecHiba3ObjFPQ24Game8WaterBox

.fn outWaterCallback__Q34Game8ElecHiba3ObjFv, weak
/* 80270810 0026D750  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q34Game8ElecHiba3ObjFv

.fn isLivingThing__Q34Game8ElecHiba3ObjFv, weak
/* 80270814 0026D754  88 63 02 C0 */	lbz r3, 0x2c0(r3)
/* 80270818 0026D758  4E 80 00 20 */	blr 
.endfn isLivingThing__Q34Game8ElecHiba3ObjFv

.fn lifeRecover__Q34Game8ElecHiba3ObjFv, weak
/* 8027081C 0026D75C  4E 80 00 20 */	blr 
.endfn lifeRecover__Q34Game8ElecHiba3ObjFv

.fn "@772@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 80270820 0026D760  39 60 00 0C */	li r11, 0xc
/* 80270824 0026D764  7D 63 58 2E */	lwzx r11, r3, r11
/* 80270828 0026D768  7C 63 5A 14 */	add r3, r3, r11
/* 8027082C 0026D76C  38 63 FC FC */	addi r3, r3, -772
/* 80270830 0026D770  4B E9 60 EC */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@772@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@772@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 80270834 0026D774  39 60 00 0C */	li r11, 0xc
/* 80270838 0026D778  7D 63 58 2E */	lwzx r11, r3, r11
/* 8027083C 0026D77C  7C 63 5A 14 */	add r3, r3, r11
/* 80270840 0026D780  38 63 FC FC */	addi r3, r3, -772
/* 80270844 0026D784  4B E9 5E 64 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@772@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@772@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 80270848 0026D788  39 60 00 0C */	li r11, 0xc
/* 8027084C 0026D78C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80270850 0026D790  7C 63 5A 14 */	add r3, r3, r11
/* 80270854 0026D794  38 63 FC FC */	addi r3, r3, -772
/* 80270858 0026D798  4B E9 5E 70 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@772@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@772@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 8027085C 0026D79C  39 60 00 0C */	li r11, 0xc
/* 80270860 0026D7A0  7D 63 58 2E */	lwzx r11, r3, r11
/* 80270864 0026D7A4  7C 63 5A 14 */	add r3, r3, r11
/* 80270868 0026D7A8  38 63 FC FC */	addi r3, r3, -772
/* 8027086C 0026D7AC  4B E9 62 0C */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@772@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@772@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 80270870 0026D7B0  39 60 00 0C */	li r11, 0xc
/* 80270874 0026D7B4  7D 63 58 2E */	lwzx r11, r3, r11
/* 80270878 0026D7B8  7C 63 5A 14 */	add r3, r3, r11
/* 8027087C 0026D7BC  38 63 FC FC */	addi r3, r3, -772
/* 80270880 0026D7C0  4B E9 61 CC */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@772@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@772@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 80270884 0026D7C4  39 60 00 0C */	li r11, 0xc
/* 80270888 0026D7C8  7D 63 58 2E */	lwzx r11, r3, r11
/* 8027088C 0026D7CC  7C 63 5A 14 */	add r3, r3, r11
/* 80270890 0026D7D0  38 63 FC FC */	addi r3, r3, -772
/* 80270894 0026D7D4  4B E9 5E 0C */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@772@12@viewGetShape__Q24Game9EnemyBaseFv"

.fn "@4@__dt__Q23efx14TDenkipoleSignFv", weak
/* 80270898 0026D7D8  38 63 FF FC */	addi r3, r3, -4
/* 8027089C 0026D7DC  4B FF F9 A0 */	b __dt__Q23efx14TDenkipoleSignFv
.endfn "@4@__dt__Q23efx14TDenkipoleSignFv"
