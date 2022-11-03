.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_Frog_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__Q23efx9TFrogPota
__vt__Q23efx9TFrogPota:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx9TFrogPotaFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx9TFrogPotaFv
.global __vt__Q23efx13TFrogLanddrop
__vt__Q23efx13TFrogLanddrop:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.global __vt__Q23efx9TFrogDive
__vt__Q23efx9TFrogDive:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple4FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.global __vt__Q34Game4Frog3Obj
__vt__Q34Game4Frog3Obj:
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
	.4byte onInit__Q34Game4Frog3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game4Frog3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game4Frog3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game4Frog3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game4Frog3ObjFv
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
	.4byte collisionCallback__Q34Game4Frog3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game4Frog3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game4Frog3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game4Frog3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game4Frog3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game4Frog3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q34Game4Frog3ObjFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q24Game9EnemyBaseFv
	.4byte "getCommonEffectPos__Q34Game4Frog3ObjFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q34Game4Frog3ObjFv
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
	.4byte getEnemyTypeID__Q34Game4Frog3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
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
	.4byte doStartStoneState__Q34Game4Frog3ObjFv
	.4byte doFinishStoneState__Q34Game4Frog3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q34Game4Frog3ObjFv
	.4byte doFinishEarthquakeFitState__Q34Game4Frog3ObjFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game4Frog3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q34Game4Frog3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game4Frog3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game4Frog3ObjFv
	.4byte doStartMovie__Q34Game4Frog3ObjFv
	.4byte doEndMovie__Q34Game4Frog3ObjFv
	.4byte setFSM__Q34Game4Frog3ObjFPQ34Game4Frog3FSM
	.4byte viewGetCollTreeOffset__Q34Game4Frog3ObjFv
	.4byte attackNaviPosition__Q34Game4Frog3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@736@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte "@736@12@viewGetCollTreeOffset__Q34Game4Frog3ObjFv"
	.4byte "@736@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@736@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@736@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@736@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@736@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051AAC8:
	.float 128.0
lbl_8051AACC:
	.float 0.0
lbl_8051AAD0:
	.float 2.0
lbl_8051AAD4: # pi
	.float 3.1415927
lbl_8051AAD8:
	.float 0.0055555557
lbl_8051AADC:
	.float 5.0
lbl_8051AAE0:
	.float 75.0
lbl_8051AAE4:
	.float 50.0
lbl_8051AAE8:
	.float 17.5
lbl_8051AAEC:
	.float 0.75
lbl_8051AAF0:
	.float 22.5
lbl_8051AAF4:
	.float 1.0
lbl_8051AAF8:
	.float 20.0
lbl_8051AAFC:
	.float -15.0
lbl_8051AB00:
	.float 180.0
lbl_8051AB04:
	.float 0.5
lbl_8051AB08:
	.float -325.9493
lbl_8051AB0C:
	.float 325.9493
lbl_8051AB10:
	.float -1000.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game4Frog3ObjFv
__ct__Q34Game4Frog3ObjFv:
/* 80258548 00255488  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025854C 0025548C  7C 08 02 A6 */	mflr r0
/* 80258550 00255490  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258554 00255494  7C 80 07 35 */	extsh. r0, r4
/* 80258558 00255498  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025855C 0025549C  7C 7F 1B 78 */	mr r31, r3
/* 80258560 002554A0  93 C1 00 08 */	stw r30, 8(r1)
/* 80258564 002554A4  41 82 00 24 */	beq .L_80258588
/* 80258568 002554A8  38 1F 02 E0 */	addi r0, r31, 0x2e0
/* 8025856C 002554AC  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 80258570 002554B0  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80258574 002554B4  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80258578 002554B8  38 00 00 00 */	li r0, 0
/* 8025857C 002554BC  90 7F 02 E0 */	stw r3, 0x2e0(r31)
/* 80258580 002554C0  90 1F 02 E4 */	stw r0, 0x2e4(r31)
/* 80258584 002554C4  90 1F 02 E8 */	stw r0, 0x2e8(r31)
.L_80258588:
/* 80258588 002554C8  7F E3 FB 78 */	mr r3, r31
/* 8025858C 002554CC  38 80 00 00 */	li r4, 0
/* 80258590 002554D0  4B EA 8E 11 */	bl __ct__Q24Game9EnemyBaseFv
/* 80258594 002554D4  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog3Obj@ha
/* 80258598 002554D8  38 1F 02 E0 */	addi r0, r31, 0x2e0
/* 8025859C 002554DC  38 A3 24 D0 */	addi r5, r3, __vt__Q34Game4Frog3Obj@l
/* 802585A0 002554E0  38 60 00 2C */	li r3, 0x2c
/* 802585A4 002554E4  90 BF 00 00 */	stw r5, 0(r31)
/* 802585A8 002554E8  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802585AC 002554EC  38 A5 03 04 */	addi r5, r5, 0x304
/* 802585B0 002554F0  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802585B4 002554F4  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802585B8 002554F8  90 A4 00 00 */	stw r5, 0(r4)
/* 802585BC 002554FC  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802585C0 00255500  7C 04 00 50 */	subf r0, r4, r0
/* 802585C4 00255504  90 04 00 0C */	stw r0, 0xc(r4)
/* 802585C8 00255508  4B DC B8 DD */	bl __nw__FUl
/* 802585CC 0025550C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802585D0 00255510  41 82 00 44 */	beq .L_80258614
/* 802585D4 00255514  4B EC F3 A1 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802585D8 00255518  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog14ProperAnimator@ha
/* 802585DC 0025551C  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802585E0 00255520  38 03 23 38 */	addi r0, r3, __vt__Q34Game4Frog14ProperAnimator@l
/* 802585E4 00255524  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802585E8 00255528  90 1E 00 00 */	stw r0, 0(r30)
/* 802585EC 0025552C  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802585F0 00255530  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802585F4 00255534  38 00 00 00 */	li r0, 0
/* 802585F8 00255538  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802585FC 0025553C  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80258600 00255540  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80258604 00255544  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80258608 00255548  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8025860C 0025554C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80258610 00255550  90 1E 00 20 */	stw r0, 0x20(r30)
.L_80258614:
/* 80258614 00255554  93 DF 01 84 */	stw r30, 0x184(r31)
/* 80258618 00255558  38 60 00 1C */	li r3, 0x1c
/* 8025861C 0025555C  4B DC B8 89 */	bl __nw__FUl
/* 80258620 00255560  7C 64 1B 79 */	or. r4, r3, r3
/* 80258624 00255564  41 82 00 24 */	beq .L_80258648
/* 80258628 00255568  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8025862C 0025556C  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog3FSM@ha
/* 80258630 00255570  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 80258634 00255574  38 A0 FF FF */	li r5, -1
/* 80258638 00255578  90 04 00 00 */	stw r0, 0(r4)
/* 8025863C 0025557C  38 03 23 14 */	addi r0, r3, __vt__Q34Game4Frog3FSM@l
/* 80258640 00255580  90 A4 00 18 */	stw r5, 0x18(r4)
/* 80258644 00255584  90 04 00 00 */	stw r0, 0(r4)
.L_80258648:
/* 80258648 00255588  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025864C 0025558C  7F E3 FB 78 */	mr r3, r31
/* 80258650 00255590  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 80258654 00255594  7D 89 03 A6 */	mtctr r12
/* 80258658 00255598  4E 80 04 21 */	bctrl 
/* 8025865C 0025559C  7F E3 FB 78 */	mr r3, r31
/* 80258660 002555A0  48 00 0D 89 */	bl createEffect__Q34Game4Frog3ObjFv
/* 80258664 002555A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258668 002555A8  7F E3 FB 78 */	mr r3, r31
/* 8025866C 002555AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80258670 002555B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80258674 002555B4  7C 08 03 A6 */	mtlr r0
/* 80258678 002555B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8025867C 002555BC  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game4Frog3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game4Frog3ObjFPQ24Game21EnemyInitialParamBase:
/* 80258680 002555C0  4E 80 00 20 */	blr 

.global onInit__Q34Game4Frog3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game4Frog3ObjFPQ24Game15CreatureInitArg:
/* 80258684 002555C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258688 002555C8  7C 08 02 A6 */	mflr r0
/* 8025868C 002555CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258690 002555D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80258694 002555D4  7C 7F 1B 78 */	mr r31, r3
/* 80258698 002555D8  4B EA 93 C1 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8025869C 002555DC  C0 22 C7 68 */	lfs f1, lbl_8051AAC8@sda21(r2)
/* 802586A0 002555E0  38 80 FF FF */	li r4, -1
/* 802586A4 002555E4  C0 02 C7 6C */	lfs f0, lbl_8051AACC@sda21(r2)
/* 802586A8 002555E8  38 00 00 00 */	li r0, 0
/* 802586AC 002555EC  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 802586B0 002555F0  7F E3 FB 78 */	mr r3, r31
/* 802586B4 002555F4  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802586B8 002555F8  90 9F 02 D4 */	stw r4, 0x2d4(r31)
/* 802586BC 002555FC  98 1F 02 D8 */	stb r0, 0x2d8(r31)
/* 802586C0 00255600  98 1F 02 D9 */	stb r0, 0x2d9(r31)
/* 802586C4 00255604  48 00 0D D5 */	bl setupEffect__Q34Game4Frog3ObjFv
/* 802586C8 00255608  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802586CC 0025560C  7F E4 FB 78 */	mr r4, r31
/* 802586D0 00255610  38 A0 00 01 */	li r5, 1
/* 802586D4 00255614  38 C0 00 00 */	li r6, 0
/* 802586D8 00255618  81 83 00 00 */	lwz r12, 0(r3)
/* 802586DC 0025561C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802586E0 00255620  7D 89 03 A6 */	mtctr r12
/* 802586E4 00255624  4E 80 04 21 */	bctrl 
/* 802586E8 00255628  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802586EC 0025562C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802586F0 00255630  7C 08 03 A6 */	mtlr r0
/* 802586F4 00255634  38 21 00 10 */	addi r1, r1, 0x10
/* 802586F8 00255638  4E 80 00 20 */	blr 

.global onKill__Q34Game4Frog3ObjFPQ24Game15CreatureKillArg
onKill__Q34Game4Frog3ObjFPQ24Game15CreatureKillArg:
/* 802586FC 0025563C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258700 00255640  7C 08 02 A6 */	mflr r0
/* 80258704 00255644  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258708 00255648  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025870C 0025564C  7C 9F 23 78 */	mr r31, r4
/* 80258710 00255650  93 C1 00 08 */	stw r30, 8(r1)
/* 80258714 00255654  7C 7E 1B 78 */	mr r30, r3
/* 80258718 00255658  48 00 0D C5 */	bl finishJumpEffect__Q34Game4Frog3ObjFv
/* 8025871C 0025565C  7F C3 F3 78 */	mr r3, r30
/* 80258720 00255660  7F E4 FB 78 */	mr r4, r31
/* 80258724 00255664  4B EA 97 C5 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 80258728 00255668  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025872C 0025566C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80258730 00255670  83 C1 00 08 */	lwz r30, 8(r1)
/* 80258734 00255674  7C 08 03 A6 */	mtlr r0
/* 80258738 00255678  38 21 00 10 */	addi r1, r1, 0x10
/* 8025873C 0025567C  4E 80 00 20 */	blr 

.global doUpdate__Q34Game4Frog3ObjFv
doUpdate__Q34Game4Frog3ObjFv:
/* 80258740 00255680  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258744 00255684  7C 08 02 A6 */	mflr r0
/* 80258748 00255688  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025874C 0025568C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80258750 00255690  7C 7F 1B 78 */	mr r31, r3
/* 80258754 00255694  48 00 08 25 */	bl updateCaution__Q34Game4Frog3ObjFv
/* 80258758 00255698  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8025875C 0025569C  7F E4 FB 78 */	mr r4, r31
/* 80258760 002556A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80258764 002556A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80258768 002556A8  7D 89 03 A6 */	mtctr r12
/* 8025876C 002556AC  4E 80 04 21 */	bctrl 
/* 80258770 002556B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258774 002556B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80258778 002556B8  7C 08 03 A6 */	mtlr r0
/* 8025877C 002556BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80258780 002556C0  4E 80 00 20 */	blr 

.global doSimulationFlying__Q34Game4Frog3ObjFf
doSimulationFlying__Q34Game4Frog3ObjFf:
/* 80258784 002556C4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80258788 002556C8  7C 08 02 A6 */	mflr r0
/* 8025878C 002556CC  90 01 00 64 */	stw r0, 0x64(r1)
/* 80258790 002556D0  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80258794 002556D4  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80258798 002556D8  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8025879C 002556DC  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 802587A0 002556E0  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 802587A4 002556E4  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 802587A8 002556E8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802587AC 002556EC  7C 7F 1B 78 */	mr r31, r3
/* 802587B0 002556F0  C0 02 C7 6C */	lfs f0, lbl_8051AACC@sda21(r2)
/* 802587B4 002556F4  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802587B8 002556F8  C0 5F 02 C0 */	lfs f2, 0x2c0(r31)
/* 802587BC 002556FC  C0 63 08 1C */	lfs f3, 0x81c(r3)
/* 802587C0 00255700  ED 03 10 28 */	fsubs f8, f3, f2
/* 802587C4 00255704  FC 08 00 40 */	fcmpo cr0, f8, f0
/* 802587C8 00255708  40 81 00 E4 */	ble .L_802588AC
/* 802587CC 0025570C  C0 DF 01 D0 */	lfs f6, 0x1d0(r31)
/* 802587D0 00255710  C0 BF 01 C8 */	lfs f5, 0x1c8(r31)
/* 802587D4 00255714  EC 46 01 B2 */	fmuls f2, f6, f6
/* 802587D8 00255718  EC 85 11 7A */	fmadds f4, f5, f5, f2
/* 802587DC 0025571C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802587E0 00255720  40 81 00 14 */	ble .L_802587F4
/* 802587E4 00255724  40 81 00 14 */	ble .L_802587F8
/* 802587E8 00255728  FC 00 20 34 */	frsqrte f0, f4
/* 802587EC 0025572C  EC 80 01 32 */	fmuls f4, f0, f4
/* 802587F0 00255730  48 00 00 08 */	b .L_802587F8
.L_802587F4:
/* 802587F4 00255734  FC 80 00 90 */	fmr f4, f0
.L_802587F8:
/* 802587F8 00255738  C0 7F 02 C8 */	lfs f3, 0x2c8(r31)
/* 802587FC 0025573C  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 80258800 00255740  C0 02 C7 6C */	lfs f0, lbl_8051AACC@sda21(r2)
/* 80258804 00255744  EC 43 10 28 */	fsubs f2, f3, f2
/* 80258808 00255748  D0 5F 01 C8 */	stfs f2, 0x1c8(r31)
/* 8025880C 0025574C  C0 7F 02 D0 */	lfs f3, 0x2d0(r31)
/* 80258810 00255750  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 80258814 00255754  EC 43 10 28 */	fsubs f2, f3, f2
/* 80258818 00255758  D0 5F 01 D0 */	stfs f2, 0x1d0(r31)
/* 8025881C 0025575C  C0 FF 01 C8 */	lfs f7, 0x1c8(r31)
/* 80258820 00255760  C0 7F 01 D0 */	lfs f3, 0x1d0(r31)
/* 80258824 00255764  EC 47 01 F2 */	fmuls f2, f7, f7
/* 80258828 00255768  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8025882C 0025576C  EC 42 18 2A */	fadds f2, f2, f3
/* 80258830 00255770  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80258834 00255774  40 81 00 1C */	ble .L_80258850
/* 80258838 00255778  EC 47 19 FA */	fmadds f2, f7, f7, f3
/* 8025883C 0025577C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80258840 00255780  40 81 00 14 */	ble .L_80258854
/* 80258844 00255784  FC 00 10 34 */	frsqrte f0, f2
/* 80258848 00255788  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8025884C 0025578C  48 00 00 08 */	b .L_80258854
.L_80258850:
/* 80258850 00255790  FC 40 00 90 */	fmr f2, f0
.L_80258854:
/* 80258854 00255794  C0 02 C7 70 */	lfs f0, lbl_8051AAD0@sda21(r2)
/* 80258858 00255798  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8025885C 0025579C  EC 60 40 24 */	fdivs f3, f0, f8
/* 80258860 002557A0  FC 03 20 40 */	fcmpo cr0, f3, f4
/* 80258864 002557A4  40 81 00 10 */	ble .L_80258874
/* 80258868 002557A8  D0 BF 01 C8 */	stfs f5, 0x1c8(r31)
/* 8025886C 002557AC  D0 DF 01 D0 */	stfs f6, 0x1d0(r31)
/* 80258870 002557B0  48 00 00 44 */	b .L_802588B4
.L_80258874:
/* 80258874 002557B4  C0 02 C7 6C */	lfs f0, lbl_8051AACC@sda21(r2)
/* 80258878 002557B8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8025887C 002557BC  40 81 00 24 */	ble .L_802588A0
/* 80258880 002557C0  EC 07 10 24 */	fdivs f0, f7, f2
/* 80258884 002557C4  EC 03 00 32 */	fmuls f0, f3, f0
/* 80258888 002557C8  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 8025888C 002557CC  C0 1F 01 D0 */	lfs f0, 0x1d0(r31)
/* 80258890 002557D0  EC 00 10 24 */	fdivs f0, f0, f2
/* 80258894 002557D4  EC 03 00 32 */	fmuls f0, f3, f0
/* 80258898 002557D8  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 8025889C 002557DC  48 00 00 18 */	b .L_802588B4
.L_802588A0:
/* 802588A0 002557E0  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 802588A4 002557E4  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 802588A8 002557E8  48 00 00 0C */	b .L_802588B4
.L_802588AC:
/* 802588AC 002557EC  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 802588B0 002557F0  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
.L_802588B4:
/* 802588B4 002557F4  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 802588B8 002557F8  C0 5F 01 CC */	lfs f2, 0x1cc(r31)
/* 802588BC 002557FC  C0 63 00 28 */	lfs f3, 0x28(r3)
/* 802588C0 00255800  C0 02 C7 6C */	lfs f0, lbl_8051AACC@sda21(r2)
/* 802588C4 00255804  EC 21 10 FC */	fnmsubs f1, f1, f3, f2
/* 802588C8 00255808  D0 3F 01 CC */	stfs f1, 0x1cc(r31)
/* 802588CC 0025580C  C0 3F 01 CC */	lfs f1, 0x1cc(r31)
/* 802588D0 00255810  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802588D4 00255814  40 81 00 EC */	ble .L_802589C0
/* 802588D8 00255818  7F E4 FB 78 */	mr r4, r31
/* 802588DC 0025581C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802588E0 00255820  81 9F 00 00 */	lwz r12, 0(r31)
/* 802588E4 00255824  38 61 00 14 */	addi r3, r1, 0x14
/* 802588E8 00255828  C3 C5 03 34 */	lfs f30, 0x334(r5)
/* 802588EC 0025582C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802588F0 00255830  C3 E5 03 0C */	lfs f31, 0x30c(r5)
/* 802588F4 00255834  7D 89 03 A6 */	mtctr r12
/* 802588F8 00255838  4E 80 04 21 */	bctrl 
/* 802588FC 0025583C  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 80258900 00255840  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80258904 00255844  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 80258908 00255848  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8025890C 0025584C  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 80258910 00255850  C0 1F 02 D0 */	lfs f0, 0x2d0(r31)
/* 80258914 00255854  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 80258918 00255858  EC 21 28 28 */	fsubs f1, f1, f5
/* 8025891C 0025585C  EC 40 18 28 */	fsubs f2, f0, f3
/* 80258920 00255860  D0 A1 00 08 */	stfs f5, 8(r1)
/* 80258924 00255864  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 80258928 00255868  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8025892C 0025586C  4B DD C7 DD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80258930 00255870  48 1B 92 A1 */	bl roundAng__Ff
/* 80258934 00255874  81 9F 00 00 */	lwz r12, 0(r31)
/* 80258938 00255878  FF A0 08 90 */	fmr f29, f1
/* 8025893C 0025587C  7F E3 FB 78 */	mr r3, r31
/* 80258940 00255880  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80258944 00255884  7D 89 03 A6 */	mtctr r12
/* 80258948 00255888  4E 80 04 21 */	bctrl 
/* 8025894C 0025588C  FC 40 08 90 */	fmr f2, f1
/* 80258950 00255890  FC 20 E8 90 */	fmr f1, f29
/* 80258954 00255894  48 1B 92 A9 */	bl angDist__Fff
/* 80258958 00255898  EF E1 07 F2 */	fmuls f31, f1, f31
/* 8025895C 0025589C  C0 02 C7 78 */	lfs f0, lbl_8051AAD8@sda21(r2)
/* 80258960 002558A0  C0 22 C7 74 */	lfs f1, lbl_8051AAD4@sda21(r2)
/* 80258964 002558A4  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80258968 002558A8  FC 40 FA 10 */	fabs f2, f31
/* 8025896C 002558AC  EC 21 00 32 */	fmuls f1, f1, f0
/* 80258970 002558B0  FC 00 10 18 */	frsp f0, f2
/* 80258974 002558B4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80258978 002558B8  40 81 00 1C */	ble .L_80258994
/* 8025897C 002558BC  C0 02 C7 6C */	lfs f0, lbl_8051AACC@sda21(r2)
/* 80258980 002558C0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80258984 002558C4  40 81 00 0C */	ble .L_80258990
/* 80258988 002558C8  FF E0 08 90 */	fmr f31, f1
/* 8025898C 002558CC  48 00 00 08 */	b .L_80258994
.L_80258990:
/* 80258990 002558D0  FF E0 08 50 */	fneg f31, f1
.L_80258994:
/* 80258994 002558D4  7F E3 FB 78 */	mr r3, r31
/* 80258998 002558D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025899C 002558DC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802589A0 002558E0  7D 89 03 A6 */	mtctr r12
/* 802589A4 002558E4  4E 80 04 21 */	bctrl 
/* 802589A8 002558E8  EC 3F 08 2A */	fadds f1, f31, f1
/* 802589AC 002558EC  48 1B 92 25 */	bl roundAng__Ff
/* 802589B0 002558F0  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802589B4 002558F4  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802589B8 002558F8  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802589BC 002558FC  48 00 00 08 */	b .L_802589C4
.L_802589C0:
/* 802589C0 00255900  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
.L_802589C4:
/* 802589C4 00255904  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802589C8 00255908  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802589CC 0025590C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802589D0 00255910  EC 01 00 2A */	fadds f0, f1, f0
/* 802589D4 00255914  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802589D8 00255918  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 802589DC 0025591C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 802589E0 00255920  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 802589E4 00255924  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 802589E8 00255928  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 802589EC 0025592C  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 802589F0 00255930  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802589F4 00255934  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802589F8 00255938  7C 08 03 A6 */	mtlr r0
/* 802589FC 0025593C  38 21 00 60 */	addi r1, r1, 0x60
/* 80258A00 00255940  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game4Frog3ObjFR8Graphics
doDirectDraw__Q34Game4Frog3ObjFR8Graphics:
/* 80258A04 00255944  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game4Frog3ObjFR8Graphics
doDebugDraw__Q34Game4Frog3ObjFR8Graphics:
/* 80258A08 00255948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258A0C 0025594C  7C 08 02 A6 */	mflr r0
/* 80258A10 00255950  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258A14 00255954  4B EA D4 59 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 80258A18 00255958  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258A1C 0025595C  7C 08 03 A6 */	mtlr r0
/* 80258A20 00255960  38 21 00 10 */	addi r1, r1, 0x10
/* 80258A24 00255964  4E 80 00 20 */	blr 

.global setFSM__Q34Game4Frog3ObjFPQ34Game4Frog3FSM
setFSM__Q34Game4Frog3ObjFPQ34Game4Frog3FSM:
/* 80258A28 00255968  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258A2C 0025596C  7C 08 02 A6 */	mflr r0
/* 80258A30 00255970  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258A34 00255974  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80258A38 00255978  7C 7F 1B 78 */	mr r31, r3
/* 80258A3C 0025597C  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 80258A40 00255980  7F E4 FB 78 */	mr r4, r31
/* 80258A44 00255984  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80258A48 00255988  81 83 00 00 */	lwz r12, 0(r3)
/* 80258A4C 0025598C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80258A50 00255990  7D 89 03 A6 */	mtctr r12
/* 80258A54 00255994  4E 80 04 21 */	bctrl 
/* 80258A58 00255998  38 00 00 00 */	li r0, 0
/* 80258A5C 0025599C  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80258A60 002559A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258A64 002559A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80258A68 002559A8  7C 08 03 A6 */	mtlr r0
/* 80258A6C 002559AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80258A70 002559B0  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game4Frog3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game4Frog3ObjFRQ24Game11ShadowParam:
/* 80258A74 002559B4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80258A78 002559B8  7C 08 02 A6 */	mflr r0
/* 80258A7C 002559BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80258A80 002559C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80258A84 002559C4  7C 9F 23 78 */	mr r31, r4
/* 80258A88 002559C8  38 81 00 08 */	addi r4, r1, 8
/* 80258A8C 002559CC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80258A90 002559D0  7C 7E 1B 78 */	mr r30, r3
/* 80258A94 002559D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80258A98 002559D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80258A9C 002559DC  7D 89 03 A6 */	mtctr r12
/* 80258AA0 002559E0  4E 80 04 21 */	bctrl 
/* 80258AA4 002559E4  C0 01 00 08 */	lfs f0, 8(r1)
/* 80258AA8 002559E8  7F C3 F3 78 */	mr r3, r30
/* 80258AAC 002559EC  C0 22 C7 7C */	lfs f1, lbl_8051AADC@sda21(r2)
/* 80258AB0 002559F0  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80258AB4 002559F4  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 80258AB8 002559F8  EC 01 00 2A */	fadds f0, f1, f0
/* 80258ABC 002559FC  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80258AC0 00255A00  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80258AC4 00255A04  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80258AC8 00255A08  81 9E 00 00 */	lwz r12, 0(r30)
/* 80258ACC 00255A0C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80258AD0 00255A10  7D 89 03 A6 */	mtctr r12
/* 80258AD4 00255A14  4E 80 04 21 */	bctrl 
/* 80258AD8 00255A18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80258ADC 00255A1C  41 82 00 6C */	beq .L_80258B48
/* 80258AE0 00255A20  80 1E 00 C8 */	lwz r0, 0xc8(r30)
/* 80258AE4 00255A24  28 00 00 00 */	cmplwi r0, 0
/* 80258AE8 00255A28  41 82 00 28 */	beq .L_80258B10
/* 80258AEC 00255A2C  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 80258AF0 00255A30  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80258AF4 00255A34  41 82 00 10 */	beq .L_80258B04
/* 80258AF8 00255A38  C0 02 C7 80 */	lfs f0, lbl_8051AAE0@sda21(r2)
/* 80258AFC 00255A3C  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80258B00 00255A40  48 00 00 50 */	b .L_80258B50
.L_80258B04:
/* 80258B04 00255A44  C0 02 C7 84 */	lfs f0, lbl_8051AAE4@sda21(r2)
/* 80258B08 00255A48  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80258B0C 00255A4C  48 00 00 44 */	b .L_80258B50
.L_80258B10:
/* 80258B10 00255A50  7F C3 F3 78 */	mr r3, r30
/* 80258B14 00255A54  4B EA E8 E1 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80258B18 00255A58  2C 03 00 04 */	cmpwi r3, 4
/* 80258B1C 00255A5C  40 82 00 14 */	bne .L_80258B30
/* 80258B20 00255A60  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80258B24 00255A64  C0 02 C7 88 */	lfs f0, lbl_8051AAE8@sda21(r2)
/* 80258B28 00255A68  EC 01 00 28 */	fsubs f0, f1, f0
/* 80258B2C 00255A6C  D0 1F 00 04 */	stfs f0, 4(r31)
.L_80258B30:
/* 80258B30 00255A70  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80258B34 00255A74  C0 22 C7 8C */	lfs f1, lbl_8051AAEC@sda21(r2)
/* 80258B38 00255A78  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 80258B3C 00255A7C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80258B40 00255A80  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80258B44 00255A84  48 00 00 0C */	b .L_80258B50
.L_80258B48:
/* 80258B48 00255A88  C0 02 C7 90 */	lfs f0, lbl_8051AAF0@sda21(r2)
/* 80258B4C 00255A8C  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_80258B50:
/* 80258B50 00255A90  C0 42 C7 6C */	lfs f2, lbl_8051AACC@sda21(r2)
/* 80258B54 00255A94  C0 22 C7 94 */	lfs f1, lbl_8051AAF4@sda21(r2)
/* 80258B58 00255A98  D0 5F 00 0C */	stfs f2, 0xc(r31)
/* 80258B5C 00255A9C  C0 02 C7 88 */	lfs f0, lbl_8051AAE8@sda21(r2)
/* 80258B60 00255AA0  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 80258B64 00255AA4  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 80258B68 00255AA8  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80258B6C 00255AAC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80258B70 00255AB0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80258B74 00255AB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80258B78 00255AB8  7C 08 03 A6 */	mtlr r0
/* 80258B7C 00255ABC  38 21 00 20 */	addi r1, r1, 0x20
/* 80258B80 00255AC0  4E 80 00 20 */	blr 

.global collisionCallback__Q34Game4Frog3ObjFRQ24Game9CollEvent
collisionCallback__Q34Game4Frog3ObjFRQ24Game9CollEvent:
/* 80258B84 00255AC4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80258B88 00255AC8  7C 08 02 A6 */	mflr r0
/* 80258B8C 00255ACC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80258B90 00255AD0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80258B94 00255AD4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80258B98 00255AD8  7C 9E 23 78 */	mr r30, r4
/* 80258B9C 00255ADC  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80258BA0 00255AE0  7C 7D 1B 78 */	mr r29, r3
/* 80258BA4 00255AE4  83 E4 00 00 */	lwz r31, 0(r4)
/* 80258BA8 00255AE8  28 1F 00 00 */	cmplwi r31, 0
/* 80258BAC 00255AEC  41 82 00 A8 */	beq .L_80258C54
/* 80258BB0 00255AF0  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 80258BB4 00255AF4  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80258BB8 00255AF8  40 82 00 9C */	bne .L_80258C54
/* 80258BBC 00255AFC  88 1D 02 D9 */	lbz r0, 0x2d9(r29)
/* 80258BC0 00255B00  28 00 00 00 */	cmplwi r0, 0
/* 80258BC4 00255B04  41 82 00 90 */	beq .L_80258C54
/* 80258BC8 00255B08  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 80258BCC 00255B0C  28 00 00 00 */	cmplwi r0, 0
/* 80258BD0 00255B10  41 82 00 84 */	beq .L_80258C54
/* 80258BD4 00255B14  7F E3 FB 78 */	mr r3, r31
/* 80258BD8 00255B18  81 9F 00 00 */	lwz r12, 0(r31)
/* 80258BDC 00255B1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80258BE0 00255B20  7D 89 03 A6 */	mtctr r12
/* 80258BE4 00255B24  4E 80 04 21 */	bctrl 
/* 80258BE8 00255B28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80258BEC 00255B2C  40 82 00 20 */	bne .L_80258C0C
/* 80258BF0 00255B30  7F E3 FB 78 */	mr r3, r31
/* 80258BF4 00255B34  81 9F 00 00 */	lwz r12, 0(r31)
/* 80258BF8 00255B38  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80258BFC 00255B3C  7D 89 03 A6 */	mtctr r12
/* 80258C00 00255B40  4E 80 04 21 */	bctrl 
/* 80258C04 00255B44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80258C08 00255B48  41 82 00 4C */	beq .L_80258C54
.L_80258C0C:
/* 80258C0C 00255B4C  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 80258C10 00255B50  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80258C14 00255B54  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractPress@ha
/* 80258C18 00255B58  38 00 00 00 */	li r0, 0
/* 80258C1C 00255B5C  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 80258C20 00255B60  38 A4 A3 00 */	addi r5, r4, __vt__Q24Game11Interaction@l
/* 80258C24 00255B64  38 63 B3 20 */	addi r3, r3, __vt__Q24Game13InteractPress@l
/* 80258C28 00255B68  38 81 00 08 */	addi r4, r1, 8
/* 80258C2C 00255B6C  90 A1 00 08 */	stw r5, 8(r1)
/* 80258C30 00255B70  93 A1 00 0C */	stw r29, 0xc(r1)
/* 80258C34 00255B74  90 61 00 08 */	stw r3, 8(r1)
/* 80258C38 00255B78  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80258C3C 00255B7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258C40 00255B80  80 7E 00 00 */	lwz r3, 0(r30)
/* 80258C44 00255B84  81 83 00 00 */	lwz r12, 0(r3)
/* 80258C48 00255B88  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80258C4C 00255B8C  7D 89 03 A6 */	mtctr r12
/* 80258C50 00255B90  4E 80 04 21 */	bctrl 
.L_80258C54:
/* 80258C54 00255B94  7F A3 EB 78 */	mr r3, r29
/* 80258C58 00255B98  7F C4 F3 78 */	mr r4, r30
/* 80258C5C 00255B9C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80258C60 00255BA0  81 8C 02 40 */	lwz r12, 0x240(r12)
/* 80258C64 00255BA4  7D 89 03 A6 */	mtctr r12
/* 80258C68 00255BA8  4E 80 04 21 */	bctrl 
/* 80258C6C 00255BAC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80258C70 00255BB0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80258C74 00255BB4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80258C78 00255BB8  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80258C7C 00255BBC  7C 08 03 A6 */	mtlr r0
/* 80258C80 00255BC0  38 21 00 30 */	addi r1, r1, 0x30
/* 80258C84 00255BC4  4E 80 00 20 */	blr 

.global doStartStoneState__Q34Game4Frog3ObjFv
doStartStoneState__Q34Game4Frog3ObjFv:
/* 80258C88 00255BC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258C8C 00255BCC  7C 08 02 A6 */	mflr r0
/* 80258C90 00255BD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258C94 00255BD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80258C98 00255BD8  7C 7F 1B 78 */	mr r31, r3
/* 80258C9C 00255BDC  4B EA A2 59 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 80258CA0 00255BE0  7F E3 FB 78 */	mr r3, r31
/* 80258CA4 00255BE4  48 00 08 39 */	bl finishJumpEffect__Q34Game4Frog3ObjFv
/* 80258CA8 00255BE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258CAC 00255BEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80258CB0 00255BF0  7C 08 03 A6 */	mtlr r0
/* 80258CB4 00255BF4  38 21 00 10 */	addi r1, r1, 0x10
/* 80258CB8 00255BF8  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game4Frog3ObjFv
doFinishStoneState__Q34Game4Frog3ObjFv:
/* 80258CBC 00255BFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258CC0 00255C00  7C 08 02 A6 */	mflr r0
/* 80258CC4 00255C04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258CC8 00255C08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80258CCC 00255C0C  7C 7F 1B 78 */	mr r31, r3
/* 80258CD0 00255C10  4B EA A2 39 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 80258CD4 00255C14  7F E3 FB 78 */	mr r3, r31
/* 80258CD8 00255C18  4B EA E7 1D */	bl getStateID__Q24Game9EnemyBaseFv
/* 80258CDC 00255C1C  2C 03 00 03 */	cmpwi r3, 3
/* 80258CE0 00255C20  41 80 00 2C */	blt .L_80258D0C
/* 80258CE4 00255C24  2C 03 00 06 */	cmpwi r3, 6
/* 80258CE8 00255C28  41 81 00 24 */	bgt .L_80258D0C
/* 80258CEC 00255C2C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80258CF0 00255C30  7F E4 FB 78 */	mr r4, r31
/* 80258CF4 00255C34  38 A0 00 02 */	li r5, 2
/* 80258CF8 00255C38  38 C0 00 00 */	li r6, 0
/* 80258CFC 00255C3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80258D00 00255C40  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80258D04 00255C44  7D 89 03 A6 */	mtctr r12
/* 80258D08 00255C48  4E 80 04 21 */	bctrl 
.L_80258D0C:
/* 80258D0C 00255C4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258D10 00255C50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80258D14 00255C54  7C 08 03 A6 */	mtlr r0
/* 80258D18 00255C58  38 21 00 10 */	addi r1, r1, 0x10
/* 80258D1C 00255C5C  4E 80 00 20 */	blr 

.global doStartEarthquakeFitState__Q34Game4Frog3ObjFv
doStartEarthquakeFitState__Q34Game4Frog3ObjFv:
/* 80258D20 00255C60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258D24 00255C64  7C 08 02 A6 */	mflr r0
/* 80258D28 00255C68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258D2C 00255C6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80258D30 00255C70  7C 7F 1B 78 */	mr r31, r3
/* 80258D34 00255C74  4B EA EC 31 */	bl doStartEarthquakeFitState__Q24Game9EnemyBaseFv
/* 80258D38 00255C78  7F E3 FB 78 */	mr r3, r31
/* 80258D3C 00255C7C  48 00 07 A1 */	bl finishJumpEffect__Q34Game4Frog3ObjFv
/* 80258D40 00255C80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258D44 00255C84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80258D48 00255C88  7C 08 03 A6 */	mtlr r0
/* 80258D4C 00255C8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80258D50 00255C90  4E 80 00 20 */	blr 

.global doFinishEarthquakeFitState__Q34Game4Frog3ObjFv
doFinishEarthquakeFitState__Q34Game4Frog3ObjFv:
/* 80258D54 00255C94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258D58 00255C98  7C 08 02 A6 */	mflr r0
/* 80258D5C 00255C9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258D60 00255CA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80258D64 00255CA4  7C 7F 1B 78 */	mr r31, r3
/* 80258D68 00255CA8  4B EA EC 01 */	bl doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
/* 80258D6C 00255CAC  7F E3 FB 78 */	mr r3, r31
/* 80258D70 00255CB0  4B EA E6 85 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80258D74 00255CB4  2C 03 00 03 */	cmpwi r3, 3
/* 80258D78 00255CB8  40 82 00 24 */	bne .L_80258D9C
/* 80258D7C 00255CBC  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80258D80 00255CC0  7F E4 FB 78 */	mr r4, r31
/* 80258D84 00255CC4  38 A0 00 02 */	li r5, 2
/* 80258D88 00255CC8  38 C0 00 00 */	li r6, 0
/* 80258D8C 00255CCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80258D90 00255CD0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80258D94 00255CD4  7D 89 03 A6 */	mtctr r12
/* 80258D98 00255CD8  4E 80 04 21 */	bctrl 
.L_80258D9C:
/* 80258D9C 00255CDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258DA0 00255CE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80258DA4 00255CE4  7C 08 03 A6 */	mtlr r0
/* 80258DA8 00255CE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80258DAC 00255CEC  4E 80 00 20 */	blr 

.global doStartWaitingBirthTypeDrop__Q34Game4Frog3ObjFv
doStartWaitingBirthTypeDrop__Q34Game4Frog3ObjFv:
/* 80258DB0 00255CF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258DB4 00255CF4  7C 08 02 A6 */	mflr r0
/* 80258DB8 00255CF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258DBC 00255CFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80258DC0 00255D00  7C 7F 1B 78 */	mr r31, r3
/* 80258DC4 00255D04  4B EA EB D5 */	bl doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 80258DC8 00255D08  7F E3 FB 78 */	mr r3, r31
/* 80258DCC 00255D0C  48 00 08 31 */	bl effectDrawOff__Q34Game4Frog3ObjFv
/* 80258DD0 00255D10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258DD4 00255D14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80258DD8 00255D18  7C 08 03 A6 */	mtlr r0
/* 80258DDC 00255D1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80258DE0 00255D20  4E 80 00 20 */	blr 

.global doFinishWaitingBirthTypeDrop__Q34Game4Frog3ObjFv
doFinishWaitingBirthTypeDrop__Q34Game4Frog3ObjFv:
/* 80258DE4 00255D24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258DE8 00255D28  7C 08 02 A6 */	mflr r0
/* 80258DEC 00255D2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258DF0 00255D30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80258DF4 00255D34  7C 7F 1B 78 */	mr r31, r3
/* 80258DF8 00255D38  4B EA EB D1 */	bl doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 80258DFC 00255D3C  7F E3 FB 78 */	mr r3, r31
/* 80258E00 00255D40  48 00 07 CD */	bl effectDrawOn__Q34Game4Frog3ObjFv
/* 80258E04 00255D44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258E08 00255D48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80258E0C 00255D4C  7C 08 03 A6 */	mtlr r0
/* 80258E10 00255D50  38 21 00 10 */	addi r1, r1, 0x10
/* 80258E14 00255D54  4E 80 00 20 */	blr 

.global startCarcassMotion__Q34Game4Frog3ObjFv
startCarcassMotion__Q34Game4Frog3ObjFv:
/* 80258E18 00255D58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258E1C 00255D5C  7C 08 02 A6 */	mflr r0
/* 80258E20 00255D60  38 80 00 0A */	li r4, 0xa
/* 80258E24 00255D64  38 A0 00 00 */	li r5, 0
/* 80258E28 00255D68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258E2C 00255D6C  4B EA C1 D9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80258E30 00255D70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258E34 00255D74  7C 08 03 A6 */	mtlr r0
/* 80258E38 00255D78  38 21 00 10 */	addi r1, r1, 0x10
/* 80258E3C 00255D7C  4E 80 00 20 */	blr 

.global viewGetCollTreeOffset__Q34Game4Frog3ObjFv
viewGetCollTreeOffset__Q34Game4Frog3ObjFv:
/* 80258E40 00255D80  C0 02 C7 98 */	lfs f0, lbl_8051AAF8@sda21(r2)
/* 80258E44 00255D84  C0 22 C7 9C */	lfs f1, lbl_8051AAFC@sda21(r2)
/* 80258E48 00255D88  D0 03 00 00 */	stfs f0, 0(r3)
/* 80258E4C 00255D8C  C0 02 C7 6C */	lfs f0, lbl_8051AACC@sda21(r2)
/* 80258E50 00255D90  D0 23 00 04 */	stfs f1, 4(r3)
/* 80258E54 00255D94  D0 03 00 08 */	stfs f0, 8(r3)
/* 80258E58 00255D98  4E 80 00 20 */	blr 

.global doStartMovie__Q34Game4Frog3ObjFv
doStartMovie__Q34Game4Frog3ObjFv:
/* 80258E5C 00255D9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258E60 00255DA0  7C 08 02 A6 */	mflr r0
/* 80258E64 00255DA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258E68 00255DA8  48 00 07 95 */	bl effectDrawOff__Q34Game4Frog3ObjFv
/* 80258E6C 00255DAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258E70 00255DB0  7C 08 03 A6 */	mtlr r0
/* 80258E74 00255DB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80258E78 00255DB8  4E 80 00 20 */	blr 

.global doEndMovie__Q34Game4Frog3ObjFv
doEndMovie__Q34Game4Frog3ObjFv:
/* 80258E7C 00255DBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80258E80 00255DC0  7C 08 02 A6 */	mflr r0
/* 80258E84 00255DC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80258E88 00255DC8  48 00 07 45 */	bl effectDrawOn__Q34Game4Frog3ObjFv
/* 80258E8C 00255DCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258E90 00255DD0  7C 08 03 A6 */	mtlr r0
/* 80258E94 00255DD4  38 21 00 10 */	addi r1, r1, 0x10
/* 80258E98 00255DD8  4E 80 00 20 */	blr 

.global getOffsetForMapCollision__Q34Game4Frog3ObjFv
getOffsetForMapCollision__Q34Game4Frog3ObjFv:
/* 80258E9C 00255DDC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80258EA0 00255DE0  7C 08 02 A6 */	mflr r0
/* 80258EA4 00255DE4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80258EA8 00255DE8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80258EAC 00255DEC  7C 9F 23 78 */	mr r31, r4
/* 80258EB0 00255DF0  38 81 00 08 */	addi r4, r1, 8
/* 80258EB4 00255DF4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80258EB8 00255DF8  7C 7E 1B 78 */	mr r30, r3
/* 80258EBC 00255DFC  7F E3 FB 78 */	mr r3, r31
/* 80258EC0 00255E00  81 9F 00 00 */	lwz r12, 0(r31)
/* 80258EC4 00255E04  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80258EC8 00255E08  7D 89 03 A6 */	mtctr r12
/* 80258ECC 00255E0C  4E 80 04 21 */	bctrl 
/* 80258ED0 00255E10  C0 41 00 08 */	lfs f2, 8(r1)
/* 80258ED4 00255E14  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 80258ED8 00255E18  C0 02 C7 6C */	lfs f0, lbl_8051AACC@sda21(r2)
/* 80258EDC 00255E1C  EC 42 08 28 */	fsubs f2, f2, f1
/* 80258EE0 00255E20  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80258EE4 00255E24  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80258EE8 00255E28  D0 41 00 08 */	stfs f2, 8(r1)
/* 80258EEC 00255E2C  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 80258EF0 00255E30  EC 01 00 28 */	fsubs f0, f1, f0
/* 80258EF4 00255E34  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80258EF8 00255E38  D0 5E 00 00 */	stfs f2, 0(r30)
/* 80258EFC 00255E3C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80258F00 00255E40  D0 1E 00 04 */	stfs f0, 4(r30)
/* 80258F04 00255E44  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80258F08 00255E48  D0 1E 00 08 */	stfs f0, 8(r30)
/* 80258F0C 00255E4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80258F10 00255E50  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80258F14 00255E54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80258F18 00255E58  7C 08 03 A6 */	mtlr r0
/* 80258F1C 00255E5C  38 21 00 20 */	addi r1, r1, 0x20
/* 80258F20 00255E60  4E 80 00 20 */	blr 

.global "getCommonEffectPos__Q34Game4Frog3ObjFR10Vector3<f>"
"getCommonEffectPos__Q34Game4Frog3ObjFR10Vector3<f>":
/* 80258F24 00255E64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80258F28 00255E68  7C 08 02 A6 */	mflr r0
/* 80258F2C 00255E6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80258F30 00255E70  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80258F34 00255E74  7C 9F 23 78 */	mr r31, r4
/* 80258F38 00255E78  38 81 00 08 */	addi r4, r1, 8
/* 80258F3C 00255E7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80258F40 00255E80  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80258F44 00255E84  7D 89 03 A6 */	mtctr r12
/* 80258F48 00255E88  4E 80 04 21 */	bctrl 
/* 80258F4C 00255E8C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80258F50 00255E90  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80258F54 00255E94  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80258F58 00255E98  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80258F5C 00255E9C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80258F60 00255EA0  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80258F64 00255EA4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80258F68 00255EA8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80258F6C 00255EAC  7C 08 03 A6 */	mtlr r0
/* 80258F70 00255EB0  38 21 00 20 */	addi r1, r1, 0x20
/* 80258F74 00255EB4  4E 80 00 20 */	blr 

.global updateCaution__Q34Game4Frog3ObjFv
updateCaution__Q34Game4Frog3ObjFv:
/* 80258F78 00255EB8  80 83 01 E0 */	lwz r4, 0x1e0(r3)
/* 80258F7C 00255EBC  54 80 06 F7 */	rlwinm. r0, r4, 0, 0x1b, 0x1b
/* 80258F80 00255EC0  40 82 00 18 */	bne .L_80258F98
/* 80258F84 00255EC4  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 80258F88 00255EC8  40 82 00 10 */	bne .L_80258F98
/* 80258F8C 00255ECC  80 03 01 F4 */	lwz r0, 0x1f4(r3)
/* 80258F90 00255ED0  2C 00 00 00 */	cmpwi r0, 0
/* 80258F94 00255ED4  41 82 00 0C */	beq .L_80258FA0
.L_80258F98:
/* 80258F98 00255ED8  C0 02 C7 6C */	lfs f0, lbl_8051AACC@sda21(r2)
/* 80258F9C 00255EDC  D0 03 02 C4 */	stfs f0, 0x2c4(r3)
.L_80258FA0:
/* 80258FA0 00255EE0  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80258FA4 00255EE4  C0 23 02 C4 */	lfs f1, 0x2c4(r3)
/* 80258FA8 00255EE8  C0 04 06 2C */	lfs f0, 0x62c(r4)
/* 80258FAC 00255EEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80258FB0 00255EF0  4C 80 00 20 */	bgelr 
/* 80258FB4 00255EF4  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80258FB8 00255EF8  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 80258FBC 00255EFC  EC 01 00 2A */	fadds f0, f1, f0
/* 80258FC0 00255F00  D0 03 02 C4 */	stfs f0, 0x2c4(r3)
/* 80258FC4 00255F04  4E 80 00 20 */	blr 

.global getViewAngle__Q34Game4Frog3ObjFv
getViewAngle__Q34Game4Frog3ObjFv:
/* 80258FC8 00255F08  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80258FCC 00255F0C  C0 23 02 C4 */	lfs f1, 0x2c4(r3)
/* 80258FD0 00255F10  C0 04 06 2C */	lfs f0, 0x62c(r4)
/* 80258FD4 00255F14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80258FD8 00255F18  40 80 00 0C */	bge .L_80258FE4
/* 80258FDC 00255F1C  C0 22 C7 A0 */	lfs f1, lbl_8051AB00@sda21(r2)
/* 80258FE0 00255F20  4E 80 00 20 */	blr 
.L_80258FE4:
/* 80258FE4 00255F24  C0 24 04 24 */	lfs f1, 0x424(r4)
/* 80258FE8 00255F28  4E 80 00 20 */	blr 

.global startJumpAttack__Q34Game4Frog3ObjFv
startJumpAttack__Q34Game4Frog3ObjFv:
/* 80258FEC 00255F2C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80258FF0 00255F30  C0 42 C7 6C */	lfs f2, lbl_8051AACC@sda21(r2)
/* 80258FF4 00255F34  60 00 00 04 */	ori r0, r0, 4
/* 80258FF8 00255F38  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 80258FFC 00255F3C  D0 43 02 C0 */	stfs f2, 0x2c0(r3)
/* 80259000 00255F40  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 80259004 00255F44  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 80259008 00255F48  EC 01 00 28 */	fsubs f0, f1, f0
/* 8025900C 00255F4C  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
/* 80259010 00255F50  C0 23 02 D0 */	lfs f1, 0x2d0(r3)
/* 80259014 00255F54  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 80259018 00255F58  EC 01 00 28 */	fsubs f0, f1, f0
/* 8025901C 00255F5C  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 80259020 00255F60  C0 63 01 C8 */	lfs f3, 0x1c8(r3)
/* 80259024 00255F64  C0 23 01 D0 */	lfs f1, 0x1d0(r3)
/* 80259028 00255F68  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8025902C 00255F6C  EC 21 00 72 */	fmuls f1, f1, f1
/* 80259030 00255F70  EC 00 08 2A */	fadds f0, f0, f1
/* 80259034 00255F74  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80259038 00255F78  40 81 00 1C */	ble .L_80259054
/* 8025903C 00255F7C  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 80259040 00255F80  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80259044 00255F84  40 81 00 14 */	ble .L_80259058
/* 80259048 00255F88  FC 00 08 34 */	frsqrte f0, f1
/* 8025904C 00255F8C  EC 20 00 72 */	fmuls f1, f0, f1
/* 80259050 00255F90  48 00 00 08 */	b .L_80259058
.L_80259054:
/* 80259054 00255F94  FC 20 10 90 */	fmr f1, f2
.L_80259058:
/* 80259058 00255F98  C0 02 C7 6C */	lfs f0, lbl_8051AACC@sda21(r2)
/* 8025905C 00255F9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80259060 00255FA0  40 81 00 20 */	ble .L_80259080
/* 80259064 00255FA4  C0 03 01 C8 */	lfs f0, 0x1c8(r3)
/* 80259068 00255FA8  EC 00 08 24 */	fdivs f0, f0, f1
/* 8025906C 00255FAC  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
/* 80259070 00255FB0  C0 03 01 D0 */	lfs f0, 0x1d0(r3)
/* 80259074 00255FB4  EC 00 08 24 */	fdivs f0, f0, f1
/* 80259078 00255FB8  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 8025907C 00255FBC  48 00 00 0C */	b .L_80259088
.L_80259080:
/* 80259080 00255FC0  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 80259084 00255FC4  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
.L_80259088:
/* 80259088 00255FC8  C0 02 C7 70 */	lfs f0, lbl_8051AAD0@sda21(r2)
/* 8025908C 00255FCC  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80259090 00255FD0  EC 40 00 72 */	fmuls f2, f0, f1
/* 80259094 00255FD4  C0 03 01 C8 */	lfs f0, 0x1c8(r3)
/* 80259098 00255FD8  C0 24 08 1C */	lfs f1, 0x81c(r4)
/* 8025909C 00255FDC  EC 22 08 24 */	fdivs f1, f2, f1
/* 802590A0 00255FE0  EC 00 00 72 */	fmuls f0, f0, f1
/* 802590A4 00255FE4  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
/* 802590A8 00255FE8  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802590AC 00255FEC  C0 04 08 44 */	lfs f0, 0x844(r4)
/* 802590B0 00255FF0  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 802590B4 00255FF4  C0 03 01 D0 */	lfs f0, 0x1d0(r3)
/* 802590B8 00255FF8  EC 00 00 72 */	fmuls f0, f0, f1
/* 802590BC 00255FFC  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 802590C0 00256000  4E 80 00 20 */	blr 

.global resetHomePosition__Q34Game4Frog3ObjFv
resetHomePosition__Q34Game4Frog3ObjFv:
/* 802590C4 00256004  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802590C8 00256008  C0 42 C7 A4 */	lfs f2, lbl_8051AB04@sda21(r2)
/* 802590CC 0025600C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802590D0 00256010  C0 63 01 FC */	lfs f3, 0x1fc(r3)
/* 802590D4 00256014  C0 24 03 84 */	lfs f1, 0x384(r4)
/* 802590D8 00256018  C0 02 C7 6C */	lfs f0, lbl_8051AACC@sda21(r2)
/* 802590DC 0025601C  EC 82 00 72 */	fmuls f4, f2, f1
/* 802590E0 00256020  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802590E4 00256024  40 80 00 30 */	bge .L_80259114
/* 802590E8 00256028  C0 02 C7 A8 */	lfs f0, lbl_8051AB08@sda21(r2)
/* 802590EC 0025602C  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 802590F0 00256030  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 802590F4 00256034  EC 03 00 32 */	fmuls f0, f3, f0
/* 802590F8 00256038  FC 00 00 1E */	fctiwz f0, f0
/* 802590FC 0025603C  D8 01 00 08 */	stfd f0, 8(r1)
/* 80259100 00256040  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80259104 00256044  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80259108 00256048  7C 04 04 2E */	lfsx f0, r4, r0
/* 8025910C 0025604C  FC 40 00 50 */	fneg f2, f0
/* 80259110 00256050  48 00 00 28 */	b .L_80259138
.L_80259114:
/* 80259114 00256054  C0 02 C7 AC */	lfs f0, lbl_8051AB0C@sda21(r2)
/* 80259118 00256058  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8025911C 0025605C  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 80259120 00256060  EC 03 00 32 */	fmuls f0, f3, f0
/* 80259124 00256064  FC 00 00 1E */	fctiwz f0, f0
/* 80259128 00256068  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8025912C 0025606C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80259130 00256070  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80259134 00256074  7C 44 04 2E */	lfsx f2, r4, r0
.L_80259138:
/* 80259138 00256078  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 8025913C 0025607C  C0 02 C7 6C */	lfs f0, lbl_8051AACC@sda21(r2)
/* 80259140 00256080  EC 24 08 BA */	fmadds f1, f4, f2, f1
/* 80259144 00256084  D0 23 01 98 */	stfs f1, 0x198(r3)
/* 80259148 00256088  C0 23 01 90 */	lfs f1, 0x190(r3)
/* 8025914C 0025608C  D0 23 01 9C */	stfs f1, 0x19c(r3)
/* 80259150 00256090  C0 43 01 FC */	lfs f2, 0x1fc(r3)
/* 80259154 00256094  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80259158 00256098  40 80 00 08 */	bge .L_80259160
/* 8025915C 0025609C  FC 40 10 50 */	fneg f2, f2
.L_80259160:
/* 80259160 002560A0  C0 22 C7 AC */	lfs f1, lbl_8051AB0C@sda21(r2)
/* 80259164 002560A4  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 80259168 002560A8  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 8025916C 002560AC  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 80259170 002560B0  EC 22 00 72 */	fmuls f1, f2, f1
/* 80259174 002560B4  FC 20 08 1E */	fctiwz f1, f1
/* 80259178 002560B8  D8 21 00 18 */	stfd f1, 0x18(r1)
/* 8025917C 002560BC  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80259180 002560C0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80259184 002560C4  7C 84 02 14 */	add r4, r4, r0
/* 80259188 002560C8  C0 24 00 04 */	lfs f1, 4(r4)
/* 8025918C 002560CC  EC 04 00 7A */	fmadds f0, f4, f1, f0
/* 80259190 002560D0  D0 03 01 A0 */	stfs f0, 0x1a0(r3)
/* 80259194 002560D4  38 21 00 20 */	addi r1, r1, 0x20
/* 80259198 002560D8  4E 80 00 20 */	blr 

.global pressOnGround__Q34Game4Frog3ObjFv
pressOnGround__Q34Game4Frog3ObjFv:
/* 8025919C 002560DC  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802591A0 002560E0  7C 08 02 A6 */	mflr r0
/* 802591A4 002560E4  C0 82 C7 B0 */	lfs f4, lbl_8051AB10@sda21(r2)
/* 802591A8 002560E8  38 80 00 00 */	li r4, 0
/* 802591AC 002560EC  90 01 00 84 */	stw r0, 0x84(r1)
/* 802591B0 002560F0  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 802591B4 002560F4  7C 7F 1B 78 */	mr r31, r3
/* 802591B8 002560F8  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802591BC 002560FC  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802591C0 00256100  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802591C4 00256104  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802591C8 00256108  4B EB 9F 55 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802591CC 0025610C  C0 02 C7 6C */	lfs f0, lbl_8051AACC@sda21(r2)
/* 802591D0 00256110  7F E3 FB 78 */	mr r3, r31
/* 802591D4 00256114  38 81 00 44 */	addi r4, r1, 0x44
/* 802591D8 00256118  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802591DC 0025611C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802591E0 00256120  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802591E4 00256124  7D 89 03 A6 */	mtctr r12
/* 802591E8 00256128  4E 80 04 21 */	bctrl 
/* 802591EC 0025612C  C0 5F 01 90 */	lfs f2, 0x190(r31)
/* 802591F0 00256130  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 802591F4 00256134  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 802591F8 00256138  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 802591FC 0025613C  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 80259200 00256140  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80259204 00256144  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 80259208 00256148  28 03 00 00 */	cmplwi r3, 0
/* 8025920C 0025614C  41 82 00 B0 */	beq .L_802592BC
/* 80259210 00256150  81 83 00 00 */	lwz r12, 0(r3)
/* 80259214 00256154  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80259218 00256158  7D 89 03 A6 */	mtctr r12
/* 8025921C 0025615C  4E 80 04 21 */	bctrl 
/* 80259220 00256160  C0 43 00 00 */	lfs f2, 0(r3)
/* 80259224 00256164  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80259228 00256168  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8025922C 0025616C  38 A0 00 00 */	li r5, 0
/* 80259230 00256170  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple4@ha
/* 80259234 00256174  90 01 00 54 */	stw r0, 0x54(r1)
/* 80259238 00256178  38 03 6A 3C */	addi r0, r3, __vt__Q23efx8TSimple4@l
/* 8025923C 0025617C  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80259240 00256180  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80259244 00256184  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80259248 00256188  3C 60 80 4C */	lis r3, __vt__Q23efx9TFrogDive@ha
/* 8025924C 0025618C  39 20 00 5C */	li r9, 0x5c
/* 80259250 00256190  39 44 A7 EC */	addi r10, r4, __vt__Q23efx3Arg@l
/* 80259254 00256194  39 00 00 5D */	li r8, 0x5d
/* 80259258 00256198  38 E0 00 5E */	li r7, 0x5e
/* 8025925C 0025619C  38 C0 00 5F */	li r6, 0x5f
/* 80259260 002561A0  90 01 00 54 */	stw r0, 0x54(r1)
/* 80259264 002561A4  38 03 24 BC */	addi r0, r3, __vt__Q23efx9TFrogDive@l
/* 80259268 002561A8  38 61 00 54 */	addi r3, r1, 0x54
/* 8025926C 002561AC  38 81 00 28 */	addi r4, r1, 0x28
/* 80259270 002561B0  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 80259274 002561B4  91 41 00 28 */	stw r10, 0x28(r1)
/* 80259278 002561B8  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 8025927C 002561BC  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 80259280 002561C0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80259284 002561C4  B1 21 00 58 */	sth r9, 0x58(r1)
/* 80259288 002561C8  B1 01 00 5A */	sth r8, 0x5a(r1)
/* 8025928C 002561CC  B0 E1 00 5C */	sth r7, 0x5c(r1)
/* 80259290 002561D0  B0 C1 00 5E */	sth r6, 0x5e(r1)
/* 80259294 002561D4  90 A1 00 60 */	stw r5, 0x60(r1)
/* 80259298 002561D8  90 A1 00 64 */	stw r5, 0x64(r1)
/* 8025929C 002561DC  90 A1 00 68 */	stw r5, 0x68(r1)
/* 802592A0 002561E0  90 A1 00 6C */	stw r5, 0x6c(r1)
/* 802592A4 002561E4  90 01 00 54 */	stw r0, 0x54(r1)
/* 802592A8 002561E8  48 15 5E BD */	bl create__Q23efx8TSimple4FPQ23efx3Arg
/* 802592AC 002561EC  C0 22 C7 94 */	lfs f1, lbl_8051AAF4@sda21(r2)
/* 802592B0 002561F0  7F E3 FB 78 */	mr r3, r31
/* 802592B4 002561F4  48 21 55 8D */	bl PSStartEnemyDownWatSE__FPQ24Game9EnemyBasef
/* 802592B8 002561F8  48 00 00 8C */	b .L_80259344
.L_802592BC:
/* 802592BC 002561FC  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802592C0 00256200  38 A0 00 00 */	li r5, 0
/* 802592C4 00256204  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802592C8 00256208  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 802592CC 0025620C  90 01 00 08 */	stw r0, 8(r1)
/* 802592D0 00256210  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 802592D4 00256214  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802592D8 00256218  3C 60 80 4C */	lis r3, __vt__Q23efx13TFrogLanddrop@ha
/* 802592DC 0025621C  90 01 00 08 */	stw r0, 8(r1)
/* 802592E0 00256220  39 04 A7 EC */	addi r8, r4, __vt__Q23efx3Arg@l
/* 802592E4 00256224  38 03 24 A8 */	addi r0, r3, __vt__Q23efx13TFrogLanddrop@l
/* 802592E8 00256228  38 E0 00 60 */	li r7, 0x60
/* 802592EC 0025622C  38 C0 00 61 */	li r6, 0x61
/* 802592F0 00256230  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 802592F4 00256234  38 61 00 08 */	addi r3, r1, 8
/* 802592F8 00256238  38 81 00 18 */	addi r4, r1, 0x18
/* 802592FC 0025623C  91 01 00 18 */	stw r8, 0x18(r1)
/* 80259300 00256240  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80259304 00256244  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80259308 00256248  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8025930C 0025624C  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 80259310 00256250  B0 C1 00 0E */	sth r6, 0xe(r1)
/* 80259314 00256254  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80259318 00256258  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8025931C 0025625C  90 01 00 08 */	stw r0, 8(r1)
/* 80259320 00256260  48 15 5C F5 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 80259324 00256264  7F E3 FB 78 */	mr r3, r31
/* 80259328 00256268  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025932C 0025626C  81 8C 02 EC */	lwz r12, 0x2ec(r12)
/* 80259330 00256270  7D 89 03 A6 */	mtctr r12
/* 80259334 00256274  4E 80 04 21 */	bctrl 
/* 80259338 00256278  7F E3 FB 78 */	mr r3, r31
/* 8025933C 0025627C  38 81 00 38 */	addi r4, r1, 0x38
/* 80259340 00256280  4B EA A6 01 */	bl "createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
.L_80259344:
/* 80259344 00256284  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80259348 00256288  38 A1 00 38 */	addi r5, r1, 0x38
/* 8025934C 0025628C  38 80 00 06 */	li r4, 6
/* 80259350 00256290  38 C0 00 02 */	li r6, 2
/* 80259354 00256294  4B FF 8E E9 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80259358 00256298  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8025935C 0025629C  38 A1 00 38 */	addi r5, r1, 0x38
/* 80259360 002562A0  38 80 00 0E */	li r4, 0xe
/* 80259364 002562A4  38 C0 00 02 */	li r6, 2
/* 80259368 002562A8  4B FF A4 19 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 8025936C 002562AC  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 80259370 002562B0  28 00 00 00 */	cmplwi r0, 0
/* 80259374 002562B4  41 82 00 34 */	beq .L_802593A8
/* 80259378 002562B8  7F E3 FB 78 */	mr r3, r31
/* 8025937C 002562BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80259380 002562C0  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 80259384 002562C4  7D 89 03 A6 */	mtctr r12
/* 80259388 002562C8  4E 80 04 21 */	bctrl 
/* 8025938C 002562CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80259390 002562D0  38 80 58 2D */	li r4, 0x582d
/* 80259394 002562D4  38 A0 00 00 */	li r5, 0
/* 80259398 002562D8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8025939C 002562DC  7D 89 03 A6 */	mtctr r12
/* 802593A0 002562E0  4E 80 04 21 */	bctrl 
/* 802593A4 002562E4  48 00 00 30 */	b .L_802593D4
.L_802593A8:
/* 802593A8 002562E8  7F E3 FB 78 */	mr r3, r31
/* 802593AC 002562EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802593B0 002562F0  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802593B4 002562F4  7D 89 03 A6 */	mtctr r12
/* 802593B8 002562F8  4E 80 04 21 */	bctrl 
/* 802593BC 002562FC  81 83 00 00 */	lwz r12, 0(r3)
/* 802593C0 00256300  38 80 58 27 */	li r4, 0x5827
/* 802593C4 00256304  38 A0 00 00 */	li r5, 0
/* 802593C8 00256308  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802593CC 0025630C  7D 89 03 A6 */	mtctr r12
/* 802593D0 00256310  4E 80 04 21 */	bctrl 
.L_802593D4:
/* 802593D4 00256314  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802593D8 00256318  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 802593DC 0025631C  7C 08 03 A6 */	mtlr r0
/* 802593E0 00256320  38 21 00 80 */	addi r1, r1, 0x80
/* 802593E4 00256324  4E 80 00 20 */	blr 

.global createEffect__Q34Game4Frog3ObjFv
createEffect__Q34Game4Frog3ObjFv:
/* 802593E8 00256328  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802593EC 0025632C  7C 08 02 A6 */	mflr r0
/* 802593F0 00256330  90 01 00 14 */	stw r0, 0x14(r1)
/* 802593F4 00256334  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802593F8 00256338  7C 7F 1B 78 */	mr r31, r3
/* 802593FC 0025633C  38 60 00 14 */	li r3, 0x14
/* 80259400 00256340  4B DC AA A5 */	bl __nw__FUl
/* 80259404 00256344  28 03 00 00 */	cmplwi r3, 0
/* 80259408 00256348  41 82 00 78 */	beq .L_80259480
/* 8025940C 0025634C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80259410 00256350  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 80259414 00256354  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80259418 00256358  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8025941C 0025635C  90 03 00 00 */	stw r0, 0(r3)
/* 80259420 00256360  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 80259424 00256364  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80259428 00256368  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 8025942C 0025636C  90 03 00 04 */	stw r0, 4(r3)
/* 80259430 00256370  38 E4 69 40 */	addi r7, r4, __vt__Q23efx9TChasePos@l
/* 80259434 00256374  3C 80 80 4C */	lis r4, __vt__Q23efx9TFrogPota@ha
/* 80259438 00256378  38 05 00 14 */	addi r0, r5, 0x14
/* 8025943C 0025637C  90 A3 00 00 */	stw r5, 0(r3)
/* 80259440 00256380  38 84 24 5C */	addi r4, r4, __vt__Q23efx9TFrogPota@l
/* 80259444 00256384  39 20 00 00 */	li r9, 0
/* 80259448 00256388  39 00 02 B2 */	li r8, 0x2b2
/* 8025944C 0025638C  90 03 00 04 */	stw r0, 4(r3)
/* 80259450 00256390  38 C7 00 14 */	addi r6, r7, 0x14
/* 80259454 00256394  38 A0 00 62 */	li r5, 0x62
/* 80259458 00256398  38 04 00 14 */	addi r0, r4, 0x14
/* 8025945C 0025639C  91 23 00 08 */	stw r9, 8(r3)
/* 80259460 002563A0  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80259464 002563A4  99 23 00 0E */	stb r9, 0xe(r3)
/* 80259468 002563A8  90 E3 00 00 */	stw r7, 0(r3)
/* 8025946C 002563AC  90 C3 00 04 */	stw r6, 4(r3)
/* 80259470 002563B0  91 23 00 10 */	stw r9, 0x10(r3)
/* 80259474 002563B4  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 80259478 002563B8  90 83 00 00 */	stw r4, 0(r3)
/* 8025947C 002563BC  90 03 00 04 */	stw r0, 4(r3)
.L_80259480:
/* 80259480 002563C0  90 7F 02 DC */	stw r3, 0x2dc(r31)
/* 80259484 002563C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80259488 002563C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025948C 002563CC  7C 08 03 A6 */	mtlr r0
/* 80259490 002563D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80259494 002563D4  4E 80 00 20 */	blr 

.global setupEffect__Q34Game4Frog3ObjFv
setupEffect__Q34Game4Frog3ObjFv:
/* 80259498 002563D8  80 83 02 DC */	lwz r4, 0x2dc(r3)
/* 8025949C 002563DC  38 03 01 8C */	addi r0, r3, 0x18c
/* 802594A0 002563E0  90 04 00 10 */	stw r0, 0x10(r4)
/* 802594A4 002563E4  4E 80 00 20 */	blr 

.global startJumpEffect__Q34Game4Frog3ObjFv
startJumpEffect__Q34Game4Frog3ObjFv:
/* 802594A8 002563E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802594AC 002563EC  7C 08 02 A6 */	mflr r0
/* 802594B0 002563F0  38 80 00 00 */	li r4, 0
/* 802594B4 002563F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802594B8 002563F8  80 63 02 DC */	lwz r3, 0x2dc(r3)
/* 802594BC 002563FC  81 83 00 00 */	lwz r12, 0(r3)
/* 802594C0 00256400  81 8C 00 08 */	lwz r12, 8(r12)
/* 802594C4 00256404  7D 89 03 A6 */	mtctr r12
/* 802594C8 00256408  4E 80 04 21 */	bctrl 
/* 802594CC 0025640C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802594D0 00256410  7C 08 03 A6 */	mtlr r0
/* 802594D4 00256414  38 21 00 10 */	addi r1, r1, 0x10
/* 802594D8 00256418  4E 80 00 20 */	blr 

.global finishJumpEffect__Q34Game4Frog3ObjFv
finishJumpEffect__Q34Game4Frog3ObjFv:
/* 802594DC 0025641C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802594E0 00256420  7C 08 02 A6 */	mflr r0
/* 802594E4 00256424  90 01 00 14 */	stw r0, 0x14(r1)
/* 802594E8 00256428  80 63 02 DC */	lwz r3, 0x2dc(r3)
/* 802594EC 0025642C  81 83 00 00 */	lwz r12, 0(r3)
/* 802594F0 00256430  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802594F4 00256434  7D 89 03 A6 */	mtctr r12
/* 802594F8 00256438  4E 80 04 21 */	bctrl 
/* 802594FC 0025643C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80259500 00256440  7C 08 03 A6 */	mtlr r0
/* 80259504 00256444  38 21 00 10 */	addi r1, r1, 0x10
/* 80259508 00256448  4E 80 00 20 */	blr 

.global createDownEffect__Q34Game4Frog3ObjFf
createDownEffect__Q34Game4Frog3ObjFf:
/* 8025950C 0025644C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80259510 00256450  7C 08 02 A6 */	mflr r0
/* 80259514 00256454  90 01 00 44 */	stw r0, 0x44(r1)
/* 80259518 00256458  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8025951C 0025645C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80259520 00256460  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80259524 00256464  81 83 00 00 */	lwz r12, 0(r3)
/* 80259528 00256468  FF E0 08 90 */	fmr f31, f1
/* 8025952C 0025646C  7C 7F 1B 78 */	mr r31, r3
/* 80259530 00256470  38 81 00 14 */	addi r4, r1, 0x14
/* 80259534 00256474  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80259538 00256478  7D 89 03 A6 */	mtctr r12
/* 8025953C 0025647C  4E 80 04 21 */	bctrl 
/* 80259540 00256480  C0 5F 01 90 */	lfs f2, 0x190(r31)
/* 80259544 00256484  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80259548 00256488  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8025954C 0025648C  D0 21 00 08 */	stfs f1, 8(r1)
/* 80259550 00256490  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80259554 00256494  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80259558 00256498  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 8025955C 0025649C  28 00 00 00 */	cmplwi r0, 0
/* 80259560 002564A0  41 82 00 18 */	beq .L_80259578
/* 80259564 002564A4  FC 20 F8 90 */	fmr f1, f31
/* 80259568 002564A8  7F E3 FB 78 */	mr r3, r31
/* 8025956C 002564AC  38 81 00 08 */	addi r4, r1, 8
/* 80259570 002564B0  4B EA A4 89 */	bl "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 80259574 002564B4  48 00 00 14 */	b .L_80259588
.L_80259578:
/* 80259578 002564B8  FC 20 F8 90 */	fmr f1, f31
/* 8025957C 002564BC  7F E3 FB 78 */	mr r3, r31
/* 80259580 002564C0  38 81 00 08 */	addi r4, r1, 8
/* 80259584 002564C4  4B EA A3 BD */	bl "createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
.L_80259588:
/* 80259588 002564C8  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8025958C 002564CC  38 BF 01 8C */	addi r5, r31, 0x18c
/* 80259590 002564D0  38 80 00 00 */	li r4, 0
/* 80259594 002564D4  38 C0 00 02 */	li r6, 2
/* 80259598 002564D8  4B FF 8C A5 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 8025959C 002564DC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802595A0 002564E0  38 BF 01 8C */	addi r5, r31, 0x18c
/* 802595A4 002564E4  38 80 00 0B */	li r4, 0xb
/* 802595A8 002564E8  38 C0 00 02 */	li r6, 2
/* 802595AC 002564EC  4B FF A1 D5 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802595B0 002564F0  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802595B4 002564F4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802595B8 002564F8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802595BC 002564FC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802595C0 00256500  7C 08 03 A6 */	mtlr r0
/* 802595C4 00256504  38 21 00 40 */	addi r1, r1, 0x40
/* 802595C8 00256508  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game4Frog3ObjFv
effectDrawOn__Q34Game4Frog3ObjFv:
/* 802595CC 0025650C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802595D0 00256510  7C 08 02 A6 */	mflr r0
/* 802595D4 00256514  90 01 00 14 */	stw r0, 0x14(r1)
/* 802595D8 00256518  80 63 02 DC */	lwz r3, 0x2dc(r3)
/* 802595DC 0025651C  81 83 00 00 */	lwz r12, 0(r3)
/* 802595E0 00256520  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802595E4 00256524  7D 89 03 A6 */	mtctr r12
/* 802595E8 00256528  4E 80 04 21 */	bctrl 
/* 802595EC 0025652C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802595F0 00256530  7C 08 03 A6 */	mtlr r0
/* 802595F4 00256534  38 21 00 10 */	addi r1, r1, 0x10
/* 802595F8 00256538  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game4Frog3ObjFv
effectDrawOff__Q34Game4Frog3ObjFv:
/* 802595FC 0025653C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80259600 00256540  7C 08 02 A6 */	mflr r0
/* 80259604 00256544  90 01 00 14 */	stw r0, 0x14(r1)
/* 80259608 00256548  80 63 02 DC */	lwz r3, 0x2dc(r3)
/* 8025960C 0025654C  81 83 00 00 */	lwz r12, 0(r3)
/* 80259610 00256550  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80259614 00256554  7D 89 03 A6 */	mtctr r12
/* 80259618 00256558  4E 80 04 21 */	bctrl 
/* 8025961C 0025655C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80259620 00256560  7C 08 03 A6 */	mtlr r0
/* 80259624 00256564  38 21 00 10 */	addi r1, r1, 0x10
/* 80259628 00256568  4E 80 00 20 */	blr 

.global __dt__Q23efx9TFrogPotaFv
__dt__Q23efx9TFrogPotaFv:
/* 8025962C 0025656C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80259630 00256570  7C 08 02 A6 */	mflr r0
/* 80259634 00256574  90 01 00 14 */	stw r0, 0x14(r1)
/* 80259638 00256578  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025963C 0025657C  7C 9F 23 78 */	mr r31, r4
/* 80259640 00256580  93 C1 00 08 */	stw r30, 8(r1)
/* 80259644 00256584  7C 7E 1B 79 */	or. r30, r3, r3
/* 80259648 00256588  41 82 00 64 */	beq .L_802596AC
/* 8025964C 0025658C  3C 60 80 4C */	lis r3, __vt__Q23efx9TFrogPota@ha
/* 80259650 00256590  38 63 24 5C */	addi r3, r3, __vt__Q23efx9TFrogPota@l
/* 80259654 00256594  90 7E 00 00 */	stw r3, 0(r30)
/* 80259658 00256598  38 03 00 14 */	addi r0, r3, 0x14
/* 8025965C 0025659C  90 1E 00 04 */	stw r0, 4(r30)
/* 80259660 002565A0  41 82 00 3C */	beq .L_8025969C
/* 80259664 002565A4  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 80259668 002565A8  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 8025966C 002565AC  90 7E 00 00 */	stw r3, 0(r30)
/* 80259670 002565B0  38 03 00 14 */	addi r0, r3, 0x14
/* 80259674 002565B4  90 1E 00 04 */	stw r0, 4(r30)
/* 80259678 002565B8  41 82 00 24 */	beq .L_8025969C
/* 8025967C 002565BC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80259680 002565C0  38 7E 00 04 */	addi r3, r30, 4
/* 80259684 002565C4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80259688 002565C8  38 80 00 00 */	li r4, 0
/* 8025968C 002565CC  90 BE 00 00 */	stw r5, 0(r30)
/* 80259690 002565D0  38 05 00 14 */	addi r0, r5, 0x14
/* 80259694 002565D4  90 1E 00 04 */	stw r0, 4(r30)
/* 80259698 002565D8  4B E3 66 05 */	bl __dt__18JPAEmitterCallBackFv
.L_8025969C:
/* 8025969C 002565DC  7F E0 07 35 */	extsh. r0, r31
/* 802596A0 002565E0  40 81 00 0C */	ble .L_802596AC
/* 802596A4 002565E4  7F C3 F3 78 */	mr r3, r30
/* 802596A8 002565E8  4B DC AA 0D */	bl __dl__FPv
.L_802596AC:
/* 802596AC 002565EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802596B0 002565F0  7F C3 F3 78 */	mr r3, r30
/* 802596B4 002565F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802596B8 002565F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802596BC 002565FC  7C 08 03 A6 */	mtlr r0
/* 802596C0 00256600  38 21 00 10 */	addi r1, r1, 0x10
/* 802596C4 00256604  4E 80 00 20 */	blr 

.global forceKill__Q23efx8TSimple4Fv
forceKill__Q23efx8TSimple4Fv:
/* 802596C8 00256608  4E 80 00 20 */	blr 

.global fade__Q23efx8TSimple4Fv
fade__Q23efx8TSimple4Fv:
/* 802596CC 0025660C  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game4Frog3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game4Frog3ObjFPQ24Game8WaterBox:
/* 802596D0 00256610  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game4Frog3ObjFv
outWaterCallback__Q34Game4Frog3ObjFv:
/* 802596D4 00256614  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game4Frog3ObjFv
getEnemyTypeID__Q34Game4Frog3ObjFv:
/* 802596D8 00256618  38 60 00 11 */	li r3, 0x11
/* 802596DC 0025661C  4E 80 00 20 */	blr 

__sinit_Frog_cpp: # static initializer
/* 802596E0 00256620  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802596E4 00256624  38 00 FF FF */	li r0, -1
/* 802596E8 00256628  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802596EC 0025662C  3C 60 80 4C */	lis r3, govNAN___Q24Game5P2JST@ha
/* 802596F0 00256630  90 0D 96 B8 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 802596F4 00256634  D4 03 24 50 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 802596F8 00256638  D0 0D 96 BC */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 802596FC 0025663C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80259700 00256640  D0 03 00 08 */	stfs f0, 8(r3)
/* 80259704 00256644  4E 80 00 20 */	blr 

.global "@736@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
"@736@12@viewOnPelletKilled__Q24Game9EnemyBaseFv":
/* 80259708 00256648  39 60 00 0C */	li r11, 0xc
/* 8025970C 0025664C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80259710 00256650  7C 63 5A 14 */	add r3, r3, r11
/* 80259714 00256654  38 63 FD 20 */	addi r3, r3, -736
/* 80259718 00256658  4B EA D2 04 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv

.global "@736@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
"@736@12@viewStartCarryMotion__Q24Game9EnemyBaseFv":
/* 8025971C 0025665C  39 60 00 0C */	li r11, 0xc
/* 80259720 00256660  7D 63 58 2E */	lwzx r11, r3, r11
/* 80259724 00256664  7C 63 5A 14 */	add r3, r3, r11
/* 80259728 00256668  38 63 FD 20 */	addi r3, r3, -736
/* 8025972C 0025666C  4B EA CF 7C */	b viewStartCarryMotion__Q24Game9EnemyBaseFv

.global "@736@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
"@736@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv":
/* 80259730 00256670  39 60 00 0C */	li r11, 0xc
/* 80259734 00256674  7D 63 58 2E */	lwzx r11, r3, r11
/* 80259738 00256678  7C 63 5A 14 */	add r3, r3, r11
/* 8025973C 0025667C  38 63 FD 20 */	addi r3, r3, -736
/* 80259740 00256680  4B EA CF 88 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv

.global "@736@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
"@736@12@view_finish_carrymotion__Q24Game9EnemyBaseFv":
/* 80259744 00256684  39 60 00 0C */	li r11, 0xc
/* 80259748 00256688  7D 63 58 2E */	lwzx r11, r3, r11
/* 8025974C 0025668C  7C 63 5A 14 */	add r3, r3, r11
/* 80259750 00256690  38 63 FD 20 */	addi r3, r3, -736
/* 80259754 00256694  4B EA D3 24 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv

.global "@736@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
"@736@12@view_start_carrymotion__Q24Game9EnemyBaseFv":
/* 80259758 00256698  39 60 00 0C */	li r11, 0xc
/* 8025975C 0025669C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80259760 002566A0  7C 63 5A 14 */	add r3, r3, r11
/* 80259764 002566A4  38 63 FD 20 */	addi r3, r3, -736
/* 80259768 002566A8  4B EA D2 E4 */	b view_start_carrymotion__Q24Game9EnemyBaseFv

.global "@736@12@viewGetCollTreeOffset__Q34Game4Frog3ObjFv"
"@736@12@viewGetCollTreeOffset__Q34Game4Frog3ObjFv":
/* 8025976C 002566AC  39 60 00 0C */	li r11, 0xc
/* 80259770 002566B0  7D 64 58 2E */	lwzx r11, r4, r11
/* 80259774 002566B4  7C 84 5A 14 */	add r4, r4, r11
/* 80259778 002566B8  38 84 FD 20 */	addi r4, r4, -736
/* 8025977C 002566BC  4B FF F6 C4 */	b viewGetCollTreeOffset__Q34Game4Frog3ObjFv

.global "@736@12@viewGetShape__Q24Game9EnemyBaseFv"
"@736@12@viewGetShape__Q24Game9EnemyBaseFv":
/* 80259780 002566C0  39 60 00 0C */	li r11, 0xc
/* 80259784 002566C4  7D 63 58 2E */	lwzx r11, r3, r11
/* 80259788 002566C8  7C 63 5A 14 */	add r3, r3, r11
/* 8025978C 002566CC  38 63 FD 20 */	addi r3, r3, -736
/* 80259790 002566D0  4B EA CF 10 */	b viewGetShape__Q24Game9EnemyBaseFv

.global "@4@__dt__Q23efx9TFrogPotaFv"
"@4@__dt__Q23efx9TFrogPotaFv":
/* 80259794 002566D4  38 63 FF FC */	addi r3, r3, -4
/* 80259798 002566D8  4B FF FE 94 */	b __dt__Q23efx9TFrogPotaFv
