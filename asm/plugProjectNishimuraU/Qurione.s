.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80485760
lbl_80485760:
	.4byte 0x626F6479
	.4byte 0x5F6A6E74
	.4byte 0x32000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23efx8TQuriHit
__vt__Q23efx8TQuriHit:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.global __vt__Q23efx10TQuriDisap
__vt__Q23efx10TQuriDisap:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx10TQuriDisapFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx10TChaseMtxTFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx10TQuriDisapFv
.global __vt__Q23efx8TQuriApp
__vt__Q23efx8TQuriApp:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx8TQuriAppFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx10TChaseMtxTFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx8TQuriAppFv
.global __vt__Q23efx9TQuriGlow
__vt__Q23efx9TQuriGlow:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx9TQuriGlowFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx10TChaseMtxTFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx9TQuriGlowFv
.global __vt__Q34Game7Qurione3Obj
__vt__Q34Game7Qurione3Obj:
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
	.4byte onInit__Q34Game7Qurione3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game7Qurione3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game7Qurione3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game7Qurione3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game7Qurione3ObjFv
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
	.4byte getShadowParam__Q34Game7Qurione3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game7Qurione3ObjFv
	.4byte "birth__Q34Game7Qurione3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game7Qurione3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game7Qurione3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game7Qurione3ObjFR8Graphics
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
	.4byte getEnemyTypeID__Q34Game7Qurione3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q34Game7Qurione3ObjFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
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
	.4byte startCarcassMotion__Q24Game9EnemyBaseFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q34Game7Qurione3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game7Qurione3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q24Game9EnemyBaseFv
	.4byte doStartMovie__Q34Game7Qurione3ObjFv
	.4byte doEndMovie__Q34Game7Qurione3ObjFv
	.4byte setFSM__Q34Game7Qurione3ObjFPQ34Game7Qurione3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@764@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@764@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@764@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@764@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@764@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@764@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
	.4byte 0

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051ACF0
lbl_8051ACF0:
	.4byte 0x43480000
.global lbl_8051ACF4
lbl_8051ACF4:
	.4byte 0x41F00000
.global lbl_8051ACF8
lbl_8051ACF8:
	.4byte 0x00000000
.global lbl_8051ACFC
lbl_8051ACFC:
	.4byte 0x41C80000
.global lbl_8051AD00
lbl_8051AD00:
	.float 1.0
.global lbl_8051AD04
lbl_8051AD04:
	.4byte 0x40F00000
.global lbl_8051AD08
lbl_8051AD08:
	.4byte 0xC3A2F983
.global lbl_8051AD0C
lbl_8051AD0C:
	.4byte 0x43A2F983
.global lbl_8051AD10
lbl_8051AD10:
	.4byte 0x3FC90FDB
.global lbl_8051AD14
lbl_8051AD14:
	.4byte 0x40200000
.global lbl_8051AD18
lbl_8051AD18:
	.4byte 0x40C90FDB
.global lbl_8051AD1C
lbl_8051AD1C:
	.4byte 0x40000000
.global lbl_8051AD20
lbl_8051AD20:
	.4byte 0x47000000
	.4byte 0x00000000
.global lbl_8051AD28
lbl_8051AD28:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051AD30
lbl_8051AD30:
	.4byte 0x77617465
	.4byte 0x72000000
.global lbl_8051AD38
lbl_8051AD38:
	.4byte 0x3FA99999
	.4byte 0x9999999A

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game7Qurione3ObjFv
__ct__Q34Game7Qurione3ObjFv:
/* 80260178 0025D0B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026017C 0025D0BC  7C 08 02 A6 */	mflr r0
/* 80260180 0025D0C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260184 0025D0C4  7C 80 07 35 */	extsh. r0, r4
/* 80260188 0025D0C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026018C 0025D0CC  7C 7F 1B 78 */	mr r31, r3
/* 80260190 0025D0D0  93 C1 00 08 */	stw r30, 8(r1)
/* 80260194 0025D0D4  41 82 00 24 */	beq .L_802601B8
/* 80260198 0025D0D8  38 1F 02 FC */	addi r0, r31, 0x2fc
/* 8026019C 0025D0DC  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802601A0 0025D0E0  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802601A4 0025D0E4  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802601A8 0025D0E8  38 00 00 00 */	li r0, 0
/* 802601AC 0025D0EC  90 7F 02 FC */	stw r3, 0x2fc(r31)
/* 802601B0 0025D0F0  90 1F 03 00 */	stw r0, 0x300(r31)
/* 802601B4 0025D0F4  90 1F 03 04 */	stw r0, 0x304(r31)
.L_802601B8:
/* 802601B8 0025D0F8  7F E3 FB 78 */	mr r3, r31
/* 802601BC 0025D0FC  38 80 00 00 */	li r4, 0
/* 802601C0 0025D100  4B EA 11 E1 */	bl __ct__Q24Game9EnemyBaseFv
/* 802601C4 0025D104  3C 80 80 4C */	lis r4, __vt__Q34Game7Qurione3Obj@ha
/* 802601C8 0025D108  38 1F 02 FC */	addi r0, r31, 0x2fc
/* 802601CC 0025D10C  38 C4 37 48 */	addi r6, r4, __vt__Q34Game7Qurione3Obj@l
/* 802601D0 0025D110  3C 60 80 12 */	lis r3, "__ct__10Vector3<f>Fv"@ha
/* 802601D4 0025D114  90 DF 00 00 */	stw r6, 0(r31)
/* 802601D8 0025D118  38 A6 01 B0 */	addi r5, r6, 0x1b0
/* 802601DC 0025D11C  39 26 02 FC */	addi r9, r6, 0x2fc
/* 802601E0 0025D120  38 83 F3 48 */	addi r4, r3, "__ct__10Vector3<f>Fv"@l
/* 802601E4 0025D124  90 BF 01 78 */	stw r5, 0x178(r31)
/* 802601E8 0025D128  38 7F 02 D4 */	addi r3, r31, 0x2d4
/* 802601EC 0025D12C  38 A0 00 00 */	li r5, 0
/* 802601F0 0025D130  38 C0 00 0C */	li r6, 0xc
/* 802601F4 0025D134  81 1F 01 7C */	lwz r8, 0x17c(r31)
/* 802601F8 0025D138  38 E0 00 02 */	li r7, 2
/* 802601FC 0025D13C  91 28 00 00 */	stw r9, 0(r8)
/* 80260200 0025D140  81 1F 01 7C */	lwz r8, 0x17c(r31)
/* 80260204 0025D144  7C 08 00 50 */	subf r0, r8, r0
/* 80260208 0025D148  90 08 00 0C */	stw r0, 0xc(r8)
/* 8026020C 0025D14C  4B E6 16 31 */	bl __construct_array
/* 80260210 0025D150  38 60 00 2C */	li r3, 0x2c
/* 80260214 0025D154  4B DC 3C 91 */	bl __nw__FUl
/* 80260218 0025D158  7C 7E 1B 79 */	or. r30, r3, r3
/* 8026021C 0025D15C  41 82 00 44 */	beq .L_80260260
/* 80260220 0025D160  4B EC 77 55 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80260224 0025D164  3C 60 80 4C */	lis r3, __vt__Q34Game7Qurione14ProperAnimator@ha
/* 80260228 0025D168  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8026022C 0025D16C  38 03 3A 78 */	addi r0, r3, __vt__Q34Game7Qurione14ProperAnimator@l
/* 80260230 0025D170  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80260234 0025D174  90 1E 00 00 */	stw r0, 0(r30)
/* 80260238 0025D178  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8026023C 0025D17C  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 80260240 0025D180  38 00 00 00 */	li r0, 0
/* 80260244 0025D184  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80260248 0025D188  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8026024C 0025D18C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80260250 0025D190  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80260254 0025D194  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80260258 0025D198  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8026025C 0025D19C  90 1E 00 20 */	stw r0, 0x20(r30)
.L_80260260:
/* 80260260 0025D1A0  93 DF 01 84 */	stw r30, 0x184(r31)
/* 80260264 0025D1A4  38 60 00 1C */	li r3, 0x1c
/* 80260268 0025D1A8  4B DC 3C 3D */	bl __nw__FUl
/* 8026026C 0025D1AC  7C 64 1B 79 */	or. r4, r3, r3
/* 80260270 0025D1B0  41 82 00 24 */	beq .L_80260294
/* 80260274 0025D1B4  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 80260278 0025D1B8  3C 60 80 4C */	lis r3, __vt__Q34Game7Qurione3FSM@ha
/* 8026027C 0025D1BC  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 80260280 0025D1C0  38 A0 FF FF */	li r5, -1
/* 80260284 0025D1C4  90 04 00 00 */	stw r0, 0(r4)
/* 80260288 0025D1C8  38 03 35 1C */	addi r0, r3, __vt__Q34Game7Qurione3FSM@l
/* 8026028C 0025D1CC  90 A4 00 18 */	stw r5, 0x18(r4)
/* 80260290 0025D1D0  90 04 00 00 */	stw r0, 0(r4)
.L_80260294:
/* 80260294 0025D1D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80260298 0025D1D8  7F E3 FB 78 */	mr r3, r31
/* 8026029C 0025D1DC  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802602A0 0025D1E0  7D 89 03 A6 */	mtctr r12
/* 802602A4 0025D1E4  4E 80 04 21 */	bctrl 
/* 802602A8 0025D1E8  7F E3 FB 78 */	mr r3, r31
/* 802602AC 0025D1EC  48 00 09 A1 */	bl createEffect__Q34Game7Qurione3ObjFv
/* 802602B0 0025D1F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802602B4 0025D1F4  7F E3 FB 78 */	mr r3, r31
/* 802602B8 0025D1F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802602BC 0025D1FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802602C0 0025D200  7C 08 03 A6 */	mtlr r0
/* 802602C4 0025D204  38 21 00 10 */	addi r1, r1, 0x10
/* 802602C8 0025D208  4E 80 00 20 */	blr 

.global "birth__Q34Game7Qurione3ObjFR10Vector3<f>f"
"birth__Q34Game7Qurione3ObjFR10Vector3<f>f":
/* 802602CC 0025D20C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802602D0 0025D210  7C 08 02 A6 */	mflr r0
/* 802602D4 0025D214  90 01 00 24 */	stw r0, 0x24(r1)
/* 802602D8 0025D218  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802602DC 0025D21C  7C 7F 1B 78 */	mr r31, r3
/* 802602E0 0025D220  4B EA 27 21 */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 802602E4 0025D224  7F E3 FB 78 */	mr r3, r31
/* 802602E8 0025D228  48 00 08 1D */	bl attachItem__Q34Game7Qurione3ObjFv
/* 802602EC 0025D22C  C0 22 C9 90 */	lfs f1, lbl_8051ACF0@sda21(r2)
/* 802602F0 0025D230  7F E3 FB 78 */	mr r3, r31
/* 802602F4 0025D234  C0 02 C9 94 */	lfs f0, lbl_8051ACF4@sda21(r2)
/* 802602F8 0025D238  38 81 00 08 */	addi r4, r1, 8
/* 802602FC 0025D23C  D0 21 00 08 */	stfs f1, 8(r1)
/* 80260300 0025D240  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80260304 0025D244  81 9F 00 00 */	lwz r12, 0(r31)
/* 80260308 0025D248  81 8C 01 C4 */	lwz r12, 0x1c4(r12)
/* 8026030C 0025D24C  7D 89 03 A6 */	mtctr r12
/* 80260310 0025D250  4E 80 04 21 */	bctrl 
/* 80260314 0025D254  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80260318 0025D258  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8026031C 0025D25C  7C 08 03 A6 */	mtlr r0
/* 80260320 0025D260  38 21 00 20 */	addi r1, r1, 0x20
/* 80260324 0025D264  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game7Qurione3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game7Qurione3ObjFPQ24Game21EnemyInitialParamBase:
/* 80260328 0025D268  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026032C 0025D26C  7C 08 02 A6 */	mflr r0
/* 80260330 0025D270  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260334 0025D274  C0 04 00 00 */	lfs f0, 0(r4)
/* 80260338 0025D278  D0 03 02 C4 */	stfs f0, 0x2c4(r3)
/* 8026033C 0025D27C  C0 24 00 04 */	lfs f1, 4(r4)
/* 80260340 0025D280  48 00 03 75 */	bl setQurioneStartPos__Q34Game7Qurione3ObjFf
/* 80260344 0025D284  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260348 0025D288  7C 08 03 A6 */	mtlr r0
/* 8026034C 0025D28C  38 21 00 10 */	addi r1, r1, 0x10
/* 80260350 0025D290  4E 80 00 20 */	blr 

.global onInit__Q34Game7Qurione3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game7Qurione3ObjFPQ24Game15CreatureInitArg:
/* 80260354 0025D294  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260358 0025D298  7C 08 02 A6 */	mflr r0
/* 8026035C 0025D29C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260360 0025D2A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80260364 0025D2A4  7C 7F 1B 78 */	mr r31, r3
/* 80260368 0025D2A8  4B EA 16 F1 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8026036C 0025D2AC  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 80260370 0025D2B0  38 00 00 00 */	li r0, 0
/* 80260374 0025D2B4  C0 02 C9 98 */	lfs f0, lbl_8051ACF8@sda21(r2)
/* 80260378 0025D2B8  7F E3 FB 78 */	mr r3, r31
/* 8026037C 0025D2BC  60 84 00 04 */	ori r4, r4, 4
/* 80260380 0025D2C0  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 80260384 0025D2C4  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 80260388 0025D2C8  60 84 00 01 */	ori r4, r4, 1
/* 8026038C 0025D2CC  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 80260390 0025D2D0  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 80260394 0025D2D4  54 84 05 24 */	rlwinm r4, r4, 0, 0x14, 0x12
/* 80260398 0025D2D8  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8026039C 0025D2DC  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802603A0 0025D2E0  54 84 07 76 */	rlwinm r4, r4, 0, 0x1d, 0x1b
/* 802603A4 0025D2E4  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802603A8 0025D2E8  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802603AC 0025D2EC  54 84 06 6E */	rlwinm r4, r4, 0, 0x19, 0x17
/* 802603B0 0025D2F0  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802603B4 0025D2F4  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802603B8 0025D2F8  54 84 06 2C */	rlwinm r4, r4, 0, 0x18, 0x16
/* 802603BC 0025D2FC  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802603C0 0025D300  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802603C4 0025D304  54 84 05 66 */	rlwinm r4, r4, 0, 0x15, 0x13
/* 802603C8 0025D308  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802603CC 0025D30C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802603D0 0025D310  64 84 00 40 */	oris r4, r4, 0x40
/* 802603D4 0025D314  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802603D8 0025D318  98 1F 02 B0 */	stb r0, 0x2b0(r31)
/* 802603DC 0025D31C  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802603E0 0025D320  90 1F 02 D0 */	stw r0, 0x2d0(r31)
/* 802603E4 0025D324  48 00 05 FD */	bl resetUtilityTimer__Q34Game7Qurione3ObjFv
/* 802603E8 0025D328  C0 02 C9 98 */	lfs f0, lbl_8051ACF8@sda21(r2)
/* 802603EC 0025D32C  7F E3 FB 78 */	mr r3, r31
/* 802603F0 0025D330  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802603F4 0025D334  48 00 0A 19 */	bl setupEffect__Q34Game7Qurione3ObjFv
/* 802603F8 0025D338  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802603FC 0025D33C  7F E4 FB 78 */	mr r4, r31
/* 80260400 0025D340  38 A0 00 00 */	li r5, 0
/* 80260404 0025D344  38 C0 00 00 */	li r6, 0
/* 80260408 0025D348  81 83 00 00 */	lwz r12, 0(r3)
/* 8026040C 0025D34C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80260410 0025D350  7D 89 03 A6 */	mtctr r12
/* 80260414 0025D354  4E 80 04 21 */	bctrl 
/* 80260418 0025D358  7F E3 FB 78 */	mr r3, r31
/* 8026041C 0025D35C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80260420 0025D360  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 80260424 0025D364  7D 89 03 A6 */	mtctr r12
/* 80260428 0025D368  4E 80 04 21 */	bctrl 
/* 8026042C 0025D36C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260430 0025D370  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80260434 0025D374  7C 08 03 A6 */	mtlr r0
/* 80260438 0025D378  38 21 00 10 */	addi r1, r1, 0x10
/* 8026043C 0025D37C  4E 80 00 20 */	blr 

.global onKill__Q34Game7Qurione3ObjFPQ24Game15CreatureKillArg
onKill__Q34Game7Qurione3ObjFPQ24Game15CreatureKillArg:
/* 80260440 0025D380  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260444 0025D384  7C 08 02 A6 */	mflr r0
/* 80260448 0025D388  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026044C 0025D38C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80260450 0025D390  7C 9F 23 78 */	mr r31, r4
/* 80260454 0025D394  93 C1 00 08 */	stw r30, 8(r1)
/* 80260458 0025D398  7C 7E 1B 78 */	mr r30, r3
/* 8026045C 0025D39C  48 00 0B 1D */	bl finishGlowEffect__Q34Game7Qurione3ObjFv
/* 80260460 0025D3A0  7F C3 F3 78 */	mr r3, r30
/* 80260464 0025D3A4  7F E4 FB 78 */	mr r4, r31
/* 80260468 0025D3A8  4B EA 1A 81 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 8026046C 0025D3AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260470 0025D3B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80260474 0025D3B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80260478 0025D3B8  7C 08 03 A6 */	mtlr r0
/* 8026047C 0025D3BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80260480 0025D3C0  4E 80 00 20 */	blr 

.global doUpdate__Q34Game7Qurione3ObjFv
doUpdate__Q34Game7Qurione3ObjFv:
/* 80260484 0025D3C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260488 0025D3C8  7C 08 02 A6 */	mflr r0
/* 8026048C 0025D3CC  7C 64 1B 78 */	mr r4, r3
/* 80260490 0025D3D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260494 0025D3D4  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80260498 0025D3D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026049C 0025D3DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802604A0 0025D3E0  7D 89 03 A6 */	mtctr r12
/* 802604A4 0025D3E4  4E 80 04 21 */	bctrl 
/* 802604A8 0025D3E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802604AC 0025D3EC  7C 08 03 A6 */	mtlr r0
/* 802604B0 0025D3F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802604B4 0025D3F4  4E 80 00 20 */	blr 

.global setFSM__Q34Game7Qurione3ObjFPQ34Game7Qurione3FSM
setFSM__Q34Game7Qurione3ObjFPQ34Game7Qurione3FSM:
/* 802604B8 0025D3F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802604BC 0025D3FC  7C 08 02 A6 */	mflr r0
/* 802604C0 0025D400  90 01 00 14 */	stw r0, 0x14(r1)
/* 802604C4 0025D404  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802604C8 0025D408  7C 7F 1B 78 */	mr r31, r3
/* 802604CC 0025D40C  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802604D0 0025D410  7F E4 FB 78 */	mr r4, r31
/* 802604D4 0025D414  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802604D8 0025D418  81 83 00 00 */	lwz r12, 0(r3)
/* 802604DC 0025D41C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802604E0 0025D420  7D 89 03 A6 */	mtctr r12
/* 802604E4 0025D424  4E 80 04 21 */	bctrl 
/* 802604E8 0025D428  38 00 00 00 */	li r0, 0
/* 802604EC 0025D42C  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802604F0 0025D430  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802604F4 0025D434  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802604F8 0025D438  7C 08 03 A6 */	mtlr r0
/* 802604FC 0025D43C  38 21 00 10 */	addi r1, r1, 0x10
/* 80260500 0025D440  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game7Qurione3ObjFR8Graphics
doDirectDraw__Q34Game7Qurione3ObjFR8Graphics:
/* 80260504 0025D444  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game7Qurione3ObjFR8Graphics
doDebugDraw__Q34Game7Qurione3ObjFR8Graphics:
/* 80260508 0025D448  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026050C 0025D44C  7C 08 02 A6 */	mflr r0
/* 80260510 0025D450  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260514 0025D454  4B EA 59 59 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 80260518 0025D458  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026051C 0025D45C  7C 08 03 A6 */	mtlr r0
/* 80260520 0025D460  38 21 00 10 */	addi r1, r1, 0x10
/* 80260524 0025D464  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game7Qurione3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game7Qurione3ObjFRQ24Game11ShadowParam:
/* 80260528 0025D468  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8026052C 0025D46C  C0 22 C9 9C */	lfs f1, lbl_8051ACFC@sda21(r2)
/* 80260530 0025D470  D0 04 00 00 */	stfs f0, 0(r4)
/* 80260534 0025D474  C0 42 C9 98 */	lfs f2, lbl_8051ACF8@sda21(r2)
/* 80260538 0025D478  C0 63 01 90 */	lfs f3, 0x190(r3)
/* 8026053C 0025D47C  C0 02 C9 A0 */	lfs f0, lbl_8051AD00@sda21(r2)
/* 80260540 0025D480  EC 63 08 28 */	fsubs f3, f3, f1
/* 80260544 0025D484  C0 22 C9 A4 */	lfs f1, lbl_8051AD04@sda21(r2)
/* 80260548 0025D488  D0 64 00 04 */	stfs f3, 4(r4)
/* 8026054C 0025D48C  C0 63 01 94 */	lfs f3, 0x194(r3)
/* 80260550 0025D490  D0 64 00 08 */	stfs f3, 8(r4)
/* 80260554 0025D494  D0 44 00 0C */	stfs f2, 0xc(r4)
/* 80260558 0025D498  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8026055C 0025D49C  D0 44 00 14 */	stfs f2, 0x14(r4)
/* 80260560 0025D4A0  C0 03 02 C0 */	lfs f0, 0x2c0(r3)
/* 80260564 0025D4A4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80260568 0025D4A8  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 8026056C 0025D4AC  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80260570 0025D4B0  C0 23 08 1C */	lfs f1, 0x81c(r3)
/* 80260574 0025D4B4  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 80260578 0025D4B8  EC 01 00 2A */	fadds f0, f1, f0
/* 8026057C 0025D4BC  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 80260580 0025D4C0  4E 80 00 20 */	blr 

.global flyCollisionCallBack__Q34Game7Qurione3ObjFPQ24Game8CreaturefP8CollPart
flyCollisionCallBack__Q34Game7Qurione3ObjFPQ24Game8CreaturefP8CollPart:
/* 80260584 0025D4C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260588 0025D4C8  7C 08 02 A6 */	mflr r0
/* 8026058C 0025D4CC  28 04 00 00 */	cmplwi r4, 0
/* 80260590 0025D4D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260594 0025D4D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80260598 0025D4D8  7C 7F 1B 78 */	mr r31, r3
/* 8026059C 0025D4DC  41 82 00 58 */	beq .L_802605F4
/* 802605A0 0025D4E0  7C 83 23 78 */	mr r3, r4
/* 802605A4 0025D4E4  81 84 00 00 */	lwz r12, 0(r4)
/* 802605A8 0025D4E8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802605AC 0025D4EC  7D 89 03 A6 */	mtctr r12
/* 802605B0 0025D4F0  4E 80 04 21 */	bctrl 
/* 802605B4 0025D4F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802605B8 0025D4F8  41 82 00 3C */	beq .L_802605F4
/* 802605BC 0025D4FC  7F E3 FB 78 */	mr r3, r31
/* 802605C0 0025D500  4B EA 6E 35 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802605C4 0025D504  2C 03 00 03 */	cmpwi r3, 3
/* 802605C8 0025D508  40 82 00 2C */	bne .L_802605F4
/* 802605CC 0025D50C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802605D0 0025D510  7F E4 FB 78 */	mr r4, r31
/* 802605D4 0025D514  38 A0 00 04 */	li r5, 4
/* 802605D8 0025D518  38 C0 00 00 */	li r6, 0
/* 802605DC 0025D51C  81 83 00 00 */	lwz r12, 0(r3)
/* 802605E0 0025D520  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802605E4 0025D524  7D 89 03 A6 */	mtctr r12
/* 802605E8 0025D528  4E 80 04 21 */	bctrl 
/* 802605EC 0025D52C  38 60 00 01 */	li r3, 1
/* 802605F0 0025D530  48 00 00 08 */	b .L_802605F8
.L_802605F4:
/* 802605F4 0025D534  38 60 00 00 */	li r3, 0
.L_802605F8:
/* 802605F8 0025D538  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802605FC 0025D53C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80260600 0025D540  7C 08 03 A6 */	mtlr r0
/* 80260604 0025D544  38 21 00 10 */	addi r1, r1, 0x10
/* 80260608 0025D548  4E 80 00 20 */	blr 

.global doStartWaitingBirthTypeDrop__Q34Game7Qurione3ObjFv
doStartWaitingBirthTypeDrop__Q34Game7Qurione3ObjFv:
/* 8026060C 0025D54C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260610 0025D550  7C 08 02 A6 */	mflr r0
/* 80260614 0025D554  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260618 0025D558  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026061C 0025D55C  7C 7F 1B 78 */	mr r31, r3
/* 80260620 0025D560  4B EA 73 79 */	bl doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 80260624 0025D564  7F E3 FB 78 */	mr r3, r31
/* 80260628 0025D568  48 00 0A 4D */	bl effectDrawOff__Q34Game7Qurione3ObjFv
/* 8026062C 0025D56C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260630 0025D570  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80260634 0025D574  7C 08 03 A6 */	mtlr r0
/* 80260638 0025D578  38 21 00 10 */	addi r1, r1, 0x10
/* 8026063C 0025D57C  4E 80 00 20 */	blr 

.global doFinishWaitingBirthTypeDrop__Q34Game7Qurione3ObjFv
doFinishWaitingBirthTypeDrop__Q34Game7Qurione3ObjFv:
/* 80260640 0025D580  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260644 0025D584  7C 08 02 A6 */	mflr r0
/* 80260648 0025D588  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026064C 0025D58C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80260650 0025D590  7C 7F 1B 78 */	mr r31, r3
/* 80260654 0025D594  4B EA 73 75 */	bl doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 80260658 0025D598  7F E3 FB 78 */	mr r3, r31
/* 8026065C 0025D59C  48 00 09 B5 */	bl effectDrawOn__Q34Game7Qurione3ObjFv
/* 80260660 0025D5A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260664 0025D5A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80260668 0025D5A8  7C 08 03 A6 */	mtlr r0
/* 8026066C 0025D5AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80260670 0025D5B0  4E 80 00 20 */	blr 

.global doStartMovie__Q34Game7Qurione3ObjFv
doStartMovie__Q34Game7Qurione3ObjFv:
/* 80260674 0025D5B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260678 0025D5B8  7C 08 02 A6 */	mflr r0
/* 8026067C 0025D5BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260680 0025D5C0  48 00 09 F5 */	bl effectDrawOff__Q34Game7Qurione3ObjFv
/* 80260684 0025D5C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260688 0025D5C8  7C 08 03 A6 */	mtlr r0
/* 8026068C 0025D5CC  38 21 00 10 */	addi r1, r1, 0x10
/* 80260690 0025D5D0  4E 80 00 20 */	blr 

.global doEndMovie__Q34Game7Qurione3ObjFv
doEndMovie__Q34Game7Qurione3ObjFv:
/* 80260694 0025D5D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260698 0025D5D8  7C 08 02 A6 */	mflr r0
/* 8026069C 0025D5DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802606A0 0025D5E0  48 00 09 71 */	bl effectDrawOn__Q34Game7Qurione3ObjFv
/* 802606A4 0025D5E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802606A8 0025D5E8  7C 08 03 A6 */	mtlr r0
/* 802606AC 0025D5EC  38 21 00 10 */	addi r1, r1, 0x10
/* 802606B0 0025D5F0  4E 80 00 20 */	blr 

.global setQurioneStartPos__Q34Game7Qurione3ObjFf
setQurioneStartPos__Q34Game7Qurione3ObjFf:
/* 802606B4 0025D5F4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802606B8 0025D5F8  C0 02 C9 98 */	lfs f0, lbl_8051ACF8@sda21(r2)
/* 802606BC 0025D5FC  C0 43 01 8C */	lfs f2, 0x18c(r3)
/* 802606C0 0025D600  D0 43 02 D4 */	stfs f2, 0x2d4(r3)
/* 802606C4 0025D604  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802606C8 0025D608  C0 63 01 90 */	lfs f3, 0x190(r3)
/* 802606CC 0025D60C  C0 44 08 1C */	lfs f2, 0x81c(r4)
/* 802606D0 0025D610  EC 43 10 2A */	fadds f2, f3, f2
/* 802606D4 0025D614  D0 43 02 D8 */	stfs f2, 0x2d8(r3)
/* 802606D8 0025D618  C0 43 01 94 */	lfs f2, 0x194(r3)
/* 802606DC 0025D61C  D0 43 02 DC */	stfs f2, 0x2dc(r3)
/* 802606E0 0025D620  C0 A3 01 FC */	lfs f5, 0x1fc(r3)
/* 802606E4 0025D624  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802606E8 0025D628  40 80 00 30 */	bge .L_80260718
/* 802606EC 0025D62C  C0 02 C9 A8 */	lfs f0, lbl_8051AD08@sda21(r2)
/* 802606F0 0025D630  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 802606F4 0025D634  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 802606F8 0025D638  EC 05 00 32 */	fmuls f0, f5, f0
/* 802606FC 0025D63C  FC 00 00 1E */	fctiwz f0, f0
/* 80260700 0025D640  D8 01 00 08 */	stfd f0, 8(r1)
/* 80260704 0025D644  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80260708 0025D648  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8026070C 0025D64C  7C 04 04 2E */	lfsx f0, r4, r0
/* 80260710 0025D650  FC 40 00 50 */	fneg f2, f0
/* 80260714 0025D654  48 00 00 28 */	b .L_8026073C
.L_80260718:
/* 80260718 0025D658  C0 02 C9 AC */	lfs f0, lbl_8051AD0C@sda21(r2)
/* 8026071C 0025D65C  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 80260720 0025D660  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 80260724 0025D664  EC 05 00 32 */	fmuls f0, f5, f0
/* 80260728 0025D668  FC 00 00 1E */	fctiwz f0, f0
/* 8026072C 0025D66C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80260730 0025D670  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260734 0025D674  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80260738 0025D678  7C 44 04 2E */	lfsx f2, r4, r0
.L_8026073C:
/* 8026073C 0025D67C  C0 C3 02 C4 */	lfs f6, 0x2c4(r3)
/* 80260740 0025D680  FC 80 28 90 */	fmr f4, f5
/* 80260744 0025D684  C0 02 C9 98 */	lfs f0, lbl_8051ACF8@sda21(r2)
/* 80260748 0025D688  EC E6 00 B2 */	fmuls f7, f6, f2
/* 8026074C 0025D68C  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80260750 0025D690  40 80 00 08 */	bge .L_80260758
/* 80260754 0025D694  FC 80 28 50 */	fneg f4, f5
.L_80260758:
/* 80260758 0025D698  C0 62 C9 AC */	lfs f3, lbl_8051AD0C@sda21(r2)
/* 8026075C 0025D69C  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 80260760 0025D6A0  C0 02 C9 B0 */	lfs f0, lbl_8051AD10@sda21(r2)
/* 80260764 0025D6A4  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 80260768 0025D6A8  EC 44 00 F2 */	fmuls f2, f4, f3
/* 8026076C 0025D6AC  38 A4 00 04 */	addi r5, r4, 4
/* 80260770 0025D6B0  EC A5 00 28 */	fsubs f5, f5, f0
/* 80260774 0025D6B4  C0 02 C9 98 */	lfs f0, lbl_8051ACF8@sda21(r2)
/* 80260778 0025D6B8  FC 40 10 1E */	fctiwz f2, f2
/* 8026077C 0025D6BC  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80260780 0025D6C0  D8 41 00 18 */	stfd f2, 0x18(r1)
/* 80260784 0025D6C4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80260788 0025D6C8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8026078C 0025D6CC  7C 05 04 2E */	lfsx f0, r5, r0
/* 80260790 0025D6D0  EC 86 00 32 */	fmuls f4, f6, f0
/* 80260794 0025D6D4  40 80 00 28 */	bge .L_802607BC
/* 80260798 0025D6D8  C0 02 C9 A8 */	lfs f0, lbl_8051AD08@sda21(r2)
/* 8026079C 0025D6DC  EC 05 00 32 */	fmuls f0, f5, f0
/* 802607A0 0025D6E0  FC 00 00 1E */	fctiwz f0, f0
/* 802607A4 0025D6E4  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802607A8 0025D6E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802607AC 0025D6EC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802607B0 0025D6F0  7C 04 04 2E */	lfsx f0, r4, r0
/* 802607B4 0025D6F4  FC 40 00 50 */	fneg f2, f0
/* 802607B8 0025D6F8  48 00 00 1C */	b .L_802607D4
.L_802607BC:
/* 802607BC 0025D6FC  EC 05 00 F2 */	fmuls f0, f5, f3
/* 802607C0 0025D700  FC 00 00 1E */	fctiwz f0, f0
/* 802607C4 0025D704  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802607C8 0025D708  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802607CC 0025D70C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802607D0 0025D710  7C 44 04 2E */	lfsx f2, r4, r0
.L_802607D4:
/* 802607D4 0025D714  C0 02 C9 98 */	lfs f0, lbl_8051ACF8@sda21(r2)
/* 802607D8 0025D718  FC 60 28 90 */	fmr f3, f5
/* 802607DC 0025D71C  EC C1 00 B2 */	fmuls f6, f1, f2
/* 802607E0 0025D720  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802607E4 0025D724  40 80 00 08 */	bge .L_802607EC
/* 802607E8 0025D728  FC 60 28 50 */	fneg f3, f5
.L_802607EC:
/* 802607EC 0025D72C  C0 42 C9 AC */	lfs f2, lbl_8051AD0C@sda21(r2)
/* 802607F0 0025D730  C0 03 02 D4 */	lfs f0, 0x2d4(r3)
/* 802607F4 0025D734  EC 43 00 B2 */	fmuls f2, f3, f2
/* 802607F8 0025D738  EC 00 38 2A */	fadds f0, f0, f7
/* 802607FC 0025D73C  FC 40 10 1E */	fctiwz f2, f2
/* 80260800 0025D740  EC 06 00 2A */	fadds f0, f6, f0
/* 80260804 0025D744  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 80260808 0025D748  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8026080C 0025D74C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80260810 0025D750  7C 45 04 2E */	lfsx f2, r5, r0
/* 80260814 0025D754  D0 03 02 E0 */	stfs f0, 0x2e0(r3)
/* 80260818 0025D758  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8026081C 0025D75C  C0 03 02 D8 */	lfs f0, 0x2d8(r3)
/* 80260820 0025D760  D0 03 02 E4 */	stfs f0, 0x2e4(r3)
/* 80260824 0025D764  C0 03 02 DC */	lfs f0, 0x2dc(r3)
/* 80260828 0025D768  EC 00 20 2A */	fadds f0, f0, f4
/* 8026082C 0025D76C  EC 01 00 2A */	fadds f0, f1, f0
/* 80260830 0025D770  D0 03 02 E8 */	stfs f0, 0x2e8(r3)
/* 80260834 0025D774  38 21 00 40 */	addi r1, r1, 0x40
/* 80260838 0025D778  4E 80 00 20 */	blr 

.global moveFaceDir__Q34Game7Qurione3ObjFv
moveFaceDir__Q34Game7Qurione3ObjFv:
/* 8026083C 0025D77C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80260840 0025D780  7C 08 02 A6 */	mflr r0
/* 80260844 0025D784  90 01 00 64 */	stw r0, 0x64(r1)
/* 80260848 0025D788  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8026084C 0025D78C  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80260850 0025D790  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80260854 0025D794  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 80260858 0025D798  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 8026085C 0025D79C  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 80260860 0025D7A0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80260864 0025D7A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80260868 0025D7A8  7C 7F 1B 78 */	mr r31, r3
/* 8026086C 0025D7AC  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80260870 0025D7B0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80260874 0025D7B4  C3 C4 02 E4 */	lfs f30, 0x2e4(r4)
/* 80260878 0025D7B8  7D 89 03 A6 */	mtctr r12
/* 8026087C 0025D7BC  4E 80 04 21 */	bctrl 
/* 80260880 0025D7C0  4B E6 EF 9D */	bl sin
/* 80260884 0025D7C4  7F E3 FB 78 */	mr r3, r31
/* 80260888 0025D7C8  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8026088C 0025D7CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80260890 0025D7D0  FF A0 08 18 */	frsp f29, f1
/* 80260894 0025D7D4  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 80260898 0025D7D8  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8026089C 0025D7DC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802608A0 0025D7E0  D0 41 00 08 */	stfs f2, 8(r1)
/* 802608A4 0025D7E4  D3 E1 00 0C */	stfs f31, 0xc(r1)
/* 802608A8 0025D7E8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802608AC 0025D7EC  7D 89 03 A6 */	mtctr r12
/* 802608B0 0025D7F0  4E 80 04 21 */	bctrl 
/* 802608B4 0025D7F4  4B E6 EA 01 */	bl cos
/* 802608B8 0025D7F8  EC 1E 07 72 */	fmuls f0, f30, f29
/* 802608BC 0025D7FC  38 9F 01 8C */	addi r4, r31, 0x18c
/* 802608C0 0025D800  FC 20 08 18 */	frsp f1, f1
/* 802608C4 0025D804  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802608C8 0025D808  EC 1E 00 72 */	fmuls f0, f30, f1
/* 802608CC 0025D80C  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 802608D0 0025D810  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802608D4 0025D814  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802608D8 0025D818  81 83 00 04 */	lwz r12, 4(r3)
/* 802608DC 0025D81C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802608E0 0025D820  7D 89 03 A6 */	mtctr r12
/* 802608E4 0025D824  4E 80 04 21 */	bctrl 
/* 802608E8 0025D828  FF E0 08 90 */	fmr f31, f1
/* 802608EC 0025D82C  7F E3 FB 78 */	mr r3, r31
/* 802608F0 0025D830  48 00 00 B9 */	bl addPitchRatio__Q34Game7Qurione3ObjFv
/* 802608F4 0025D834  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802608F8 0025D838  C0 02 C9 98 */	lfs f0, lbl_8051ACF8@sda21(r2)
/* 802608FC 0025D83C  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80260900 0025D840  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80260904 0025D844  C0 82 C9 B4 */	lfs f4, lbl_8051AD14@sda21(r2)
/* 80260908 0025D848  C0 64 08 6C */	lfs f3, 0x86c(r4)
/* 8026090C 0025D84C  40 80 00 30 */	bge .L_8026093C
/* 80260910 0025D850  C0 02 C9 A8 */	lfs f0, lbl_8051AD08@sda21(r2)
/* 80260914 0025D854  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80260918 0025D858  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8026091C 0025D85C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80260920 0025D860  FC 00 00 1E */	fctiwz f0, f0
/* 80260924 0025D864  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80260928 0025D868  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8026092C 0025D86C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80260930 0025D870  7C 03 04 2E */	lfsx f0, r3, r0
/* 80260934 0025D874  FC 40 00 50 */	fneg f2, f0
/* 80260938 0025D878  48 00 00 28 */	b .L_80260960
.L_8026093C:
/* 8026093C 0025D87C  C0 02 C9 AC */	lfs f0, lbl_8051AD0C@sda21(r2)
/* 80260940 0025D880  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80260944 0025D884  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80260948 0025D888  EC 01 00 32 */	fmuls f0, f1, f0
/* 8026094C 0025D88C  FC 00 00 1E */	fctiwz f0, f0
/* 80260950 0025D890  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80260954 0025D894  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80260958 0025D898  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8026095C 0025D89C  7C 43 04 2E */	lfsx f2, r3, r0
.L_80260960:
/* 80260960 0025D8A0  C0 24 08 1C */	lfs f1, 0x81c(r4)
/* 80260964 0025D8A4  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 80260968 0025D8A8  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 8026096C 0025D8AC  EC 3F 08 2A */	fadds f1, f31, f1
/* 80260970 0025D8B0  EC 01 00 28 */	fsubs f0, f1, f0
/* 80260974 0025D8B4  EC 04 00 32 */	fmuls f0, f4, f0
/* 80260978 0025D8B8  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 8026097C 0025D8BC  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80260980 0025D8C0  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80260984 0025D8C4  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 80260988 0025D8C8  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8026098C 0025D8CC  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 80260990 0025D8D0  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80260994 0025D8D4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80260998 0025D8D8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8026099C 0025D8DC  7C 08 03 A6 */	mtlr r0
/* 802609A0 0025D8E0  38 21 00 60 */	addi r1, r1, 0x60
/* 802609A4 0025D8E4  4E 80 00 20 */	blr 

.global addPitchRatio__Q34Game7Qurione3ObjFv
addPitchRatio__Q34Game7Qurione3ObjFv:
/* 802609A8 0025D8E8  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802609AC 0025D8EC  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802609B0 0025D8F0  C0 65 08 44 */	lfs f3, 0x844(r5)
/* 802609B4 0025D8F4  C0 44 00 54 */	lfs f2, 0x54(r4)
/* 802609B8 0025D8F8  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 802609BC 0025D8FC  C0 02 C9 B8 */	lfs f0, lbl_8051AD18@sda21(r2)
/* 802609C0 0025D900  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 802609C4 0025D904  D0 23 02 C8 */	stfs f1, 0x2c8(r3)
/* 802609C8 0025D908  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 802609CC 0025D90C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802609D0 0025D910  4C 81 00 20 */	blelr 
/* 802609D4 0025D914  EC 01 00 28 */	fsubs f0, f1, f0
/* 802609D8 0025D918  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 802609DC 0025D91C  4E 80 00 20 */	blr 

.global resetUtilityTimer__Q34Game7Qurione3ObjFv
resetUtilityTimer__Q34Game7Qurione3ObjFv:
/* 802609E0 0025D920  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802609E4 0025D924  7C 08 02 A6 */	mflr r0
/* 802609E8 0025D928  90 01 00 24 */	stw r0, 0x24(r1)
/* 802609EC 0025D92C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802609F0 0025D930  7C 7F 1B 78 */	mr r31, r3
/* 802609F4 0025D934  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802609F8 0025D938  28 04 00 00 */	cmplwi r4, 0
/* 802609FC 0025D93C  41 82 00 50 */	beq .L_80260A4C
/* 80260A00 0025D940  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80260A04 0025D944  2C 00 00 04 */	cmpwi r0, 4
/* 80260A08 0025D948  40 82 00 44 */	bne .L_80260A4C
/* 80260A0C 0025D94C  4B E6 8B 95 */	bl rand
/* 80260A10 0025D950  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80260A14 0025D954  3C 00 43 30 */	lis r0, 0x4330
/* 80260A18 0025D958  90 61 00 0C */	stw r3, 0xc(r1)
/* 80260A1C 0025D95C  C8 62 C9 C8 */	lfd f3, lbl_8051AD28@sda21(r2)
/* 80260A20 0025D960  90 01 00 08 */	stw r0, 8(r1)
/* 80260A24 0025D964  C0 42 C9 BC */	lfs f2, lbl_8051AD1C@sda21(r2)
/* 80260A28 0025D968  C8 01 00 08 */	lfd f0, 8(r1)
/* 80260A2C 0025D96C  C0 22 C9 C0 */	lfs f1, lbl_8051AD20@sda21(r2)
/* 80260A30 0025D970  EC 60 18 28 */	fsubs f3, f0, f3
/* 80260A34 0025D974  C0 02 C9 A0 */	lfs f0, lbl_8051AD00@sda21(r2)
/* 80260A38 0025D978  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80260A3C 0025D97C  EC 22 08 24 */	fdivs f1, f2, f1
/* 80260A40 0025D980  EC 00 08 28 */	fsubs f0, f0, f1
/* 80260A44 0025D984  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 80260A48 0025D988  48 00 00 0C */	b .L_80260A54
.L_80260A4C:
/* 80260A4C 0025D98C  C0 02 C9 98 */	lfs f0, lbl_8051ACF8@sda21(r2)
/* 80260A50 0025D990  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
.L_80260A54:
/* 80260A54 0025D994  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80260A58 0025D998  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80260A5C 0025D99C  7C 08 03 A6 */	mtlr r0
/* 80260A60 0025D9A0  38 21 00 20 */	addi r1, r1, 0x20
/* 80260A64 0025D9A4  4E 80 00 20 */	blr 

.global isAppear__Q34Game7Qurione3ObjFv
isAppear__Q34Game7Qurione3ObjFv:
/* 80260A68 0025D9A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260A6C 0025D9AC  7C 08 02 A6 */	mflr r0
/* 80260A70 0025D9B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260A74 0025D9B4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80260A78 0025D9B8  28 04 00 00 */	cmplwi r4, 0
/* 80260A7C 0025D9BC  41 82 00 18 */	beq .L_80260A94
/* 80260A80 0025D9C0  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80260A84 0025D9C4  2C 00 00 04 */	cmpwi r0, 4
/* 80260A88 0025D9C8  40 82 00 0C */	bne .L_80260A94
/* 80260A8C 0025D9CC  38 60 00 01 */	li r3, 1
/* 80260A90 0025D9D0  48 00 00 34 */	b .L_80260AC4
.L_80260A94:
/* 80260A94 0025D9D4  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 80260A98 0025D9D8  38 80 00 00 */	li r4, 0
/* 80260A9C 0025D9DC  38 A0 00 00 */	li r5, 0
/* 80260AA0 0025D9E0  38 C0 00 00 */	li r6, 0
/* 80260AA4 0025D9E4  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 80260AA8 0025D9E8  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 80260AAC 0025D9EC  4B EB 25 A5 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80260AB0 0025D9F0  28 03 00 00 */	cmplwi r3, 0
/* 80260AB4 0025D9F4  41 82 00 0C */	beq .L_80260AC0
/* 80260AB8 0025D9F8  38 60 00 01 */	li r3, 1
/* 80260ABC 0025D9FC  48 00 00 08 */	b .L_80260AC4
.L_80260AC0:
/* 80260AC0 0025DA00  38 60 00 00 */	li r3, 0
.L_80260AC4:
/* 80260AC4 0025DA04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260AC8 0025DA08  7C 08 03 A6 */	mtlr r0
/* 80260ACC 0025DA0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80260AD0 0025DA10  4E 80 00 20 */	blr 

.global isFlyKill__Q34Game7Qurione3ObjFv
isFlyKill__Q34Game7Qurione3ObjFv:
/* 80260AD4 0025DA14  88 03 00 D8 */	lbz r0, 0xd8(r3)
/* 80260AD8 0025DA18  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80260ADC 0025DA1C  41 82 00 18 */	beq .L_80260AF4
/* 80260AE0 0025DA20  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80260AE4 0025DA24  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 80260AE8 0025DA28  C0 04 08 BC */	lfs f0, 0x8bc(r4)
/* 80260AEC 0025DA2C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80260AF0 0025DA30  40 81 00 0C */	ble .L_80260AFC
.L_80260AF4:
/* 80260AF4 0025DA34  38 60 00 01 */	li r3, 1
/* 80260AF8 0025DA38  4E 80 00 20 */	blr 
.L_80260AFC:
/* 80260AFC 0025DA3C  38 60 00 00 */	li r3, 0
/* 80260B00 0025DA40  4E 80 00 20 */	blr 

.global attachItem__Q34Game7Qurione3ObjFv
attachItem__Q34Game7Qurione3ObjFv:
/* 80260B04 0025DA44  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80260B08 0025DA48  7C 08 02 A6 */	mflr r0
/* 80260B0C 0025DA4C  38 82 C9 D0 */	addi r4, r2, lbl_8051AD30@sda21
/* 80260B10 0025DA50  90 01 00 54 */	stw r0, 0x54(r1)
/* 80260B14 0025DA54  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80260B18 0025DA58  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80260B1C 0025DA5C  7C 7E 1B 78 */	mr r30, r3
/* 80260B20 0025DA60  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80260B24 0025DA64  48 1D E4 C1 */	bl getJoint__Q28SysShape5ModelFPc
/* 80260B28 0025DA68  48 1C 8D 79 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80260B2C 0025DA6C  7C 60 1B 78 */	mr r0, r3
/* 80260B30 0025DA70  38 61 00 08 */	addi r3, r1, 8
/* 80260B34 0025DA74  7C 1F 03 78 */	mr r31, r0
/* 80260B38 0025DA78  4B EC E0 ED */	bl __ct__Q24Game13EnemyBirthArgFv
/* 80260B3C 0025DA7C  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 80260B40 0025DA80  38 A1 00 08 */	addi r5, r1, 8
/* 80260B44 0025DA84  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 80260B48 0025DA88  38 80 00 25 */	li r4, 0x25
/* 80260B4C 0025DA8C  D0 01 00 08 */	stfs f0, 8(r1)
/* 80260B50 0025DA90  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 80260B54 0025DA94  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80260B58 0025DA98  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 80260B5C 0025DA9C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80260B60 0025DAA0  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 80260B64 0025DAA4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80260B68 0025DAA8  4B EA C9 59 */	bl birth__Q24Game15GeneralEnemyMgrFiRQ24Game13EnemyBirthArg
/* 80260B6C 0025DAAC  90 7E 02 EC */	stw r3, 0x2ec(r30)
/* 80260B70 0025DAB0  80 7E 02 EC */	lwz r3, 0x2ec(r30)
/* 80260B74 0025DAB4  28 03 00 00 */	cmplwi r3, 0
/* 80260B78 0025DAB8  41 82 00 18 */	beq .L_80260B90
/* 80260B7C 0025DABC  38 80 00 00 */	li r4, 0
/* 80260B80 0025DAC0  4B ED A4 49 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 80260B84 0025DAC4  80 7E 02 EC */	lwz r3, 0x2ec(r30)
/* 80260B88 0025DAC8  7F E4 FB 78 */	mr r4, r31
/* 80260B8C 0025DACC  4B F3 EF 1D */	bl startCapture__Q24Game8CreatureFP7Matrixf
.L_80260B90:
/* 80260B90 0025DAD0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80260B94 0025DAD4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80260B98 0025DAD8  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80260B9C 0025DADC  7C 08 03 A6 */	mtlr r0
/* 80260BA0 0025DAE0  38 21 00 50 */	addi r1, r1, 0x50
/* 80260BA4 0025DAE4  4E 80 00 20 */	blr 

.global dropItem__Q34Game7Qurione3ObjFv
dropItem__Q34Game7Qurione3ObjFv:
/* 80260BA8 0025DAE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260BAC 0025DAEC  7C 08 02 A6 */	mflr r0
/* 80260BB0 0025DAF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260BB4 0025DAF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80260BB8 0025DAF8  7C 7F 1B 78 */	mr r31, r3
/* 80260BBC 0025DAFC  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 80260BC0 0025DB00  28 03 00 00 */	cmplwi r3, 0
/* 80260BC4 0025DB04  41 82 00 10 */	beq .L_80260BD4
/* 80260BC8 0025DB08  4B F3 EF D5 */	bl endCapture__Q24Game8CreatureFv
/* 80260BCC 0025DB0C  38 00 00 00 */	li r0, 0
/* 80260BD0 0025DB10  90 1F 02 EC */	stw r0, 0x2ec(r31)
.L_80260BD4:
/* 80260BD4 0025DB14  7F E3 FB 78 */	mr r3, r31
/* 80260BD8 0025DB18  38 80 00 00 */	li r4, 0
/* 80260BDC 0025DB1C  4B EA 1D 45 */	bl setZukanVisible__Q24Game9EnemyBaseFb
/* 80260BE0 0025DB20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260BE4 0025DB24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80260BE8 0025DB28  7C 08 03 A6 */	mtlr r0
/* 80260BEC 0025DB2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80260BF0 0025DB30  4E 80 00 20 */	blr 

.global addQurioneScale__Q34Game7Qurione3ObjFv
addQurioneScale__Q34Game7Qurione3ObjFv:
/* 80260BF4 0025DB34  C0 43 02 C0 */	lfs f2, 0x2c0(r3)
/* 80260BF8 0025DB38  C8 22 C9 D8 */	lfd f1, lbl_8051AD38@sda21(r2)
/* 80260BFC 0025DB3C  C0 02 C9 A0 */	lfs f0, lbl_8051AD00@sda21(r2)
/* 80260C00 0025DB40  FC 22 08 2A */	fadd f1, f2, f1
/* 80260C04 0025DB44  FC 20 08 18 */	frsp f1, f1
/* 80260C08 0025DB48  D0 23 02 C0 */	stfs f1, 0x2c0(r3)
/* 80260C0C 0025DB4C  C0 23 02 C0 */	lfs f1, 0x2c0(r3)
/* 80260C10 0025DB50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80260C14 0025DB54  4C 81 00 20 */	blelr 
/* 80260C18 0025DB58  D0 03 02 C0 */	stfs f0, 0x2c0(r3)
/* 80260C1C 0025DB5C  4E 80 00 20 */	blr 

.global subQurioneScale__Q34Game7Qurione3ObjFv
subQurioneScale__Q34Game7Qurione3ObjFv:
/* 80260C20 0025DB60  C0 43 02 C0 */	lfs f2, 0x2c0(r3)
/* 80260C24 0025DB64  C8 22 C9 D8 */	lfd f1, lbl_8051AD38@sda21(r2)
/* 80260C28 0025DB68  C0 02 C9 98 */	lfs f0, lbl_8051ACF8@sda21(r2)
/* 80260C2C 0025DB6C  FC 22 08 28 */	fsub f1, f2, f1
/* 80260C30 0025DB70  FC 20 08 18 */	frsp f1, f1
/* 80260C34 0025DB74  D0 23 02 C0 */	stfs f1, 0x2c0(r3)
/* 80260C38 0025DB78  C0 23 02 C0 */	lfs f1, 0x2c0(r3)
/* 80260C3C 0025DB7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80260C40 0025DB80  4C 80 00 20 */	bgelr 
/* 80260C44 0025DB84  D0 03 02 C0 */	stfs f0, 0x2c0(r3)
/* 80260C48 0025DB88  4E 80 00 20 */	blr 

.global createEffect__Q34Game7Qurione3ObjFv
createEffect__Q34Game7Qurione3ObjFv:
/* 80260C4C 0025DB8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260C50 0025DB90  7C 08 02 A6 */	mflr r0
/* 80260C54 0025DB94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260C58 0025DB98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80260C5C 0025DB9C  7C 7F 1B 78 */	mr r31, r3
/* 80260C60 0025DBA0  38 60 00 14 */	li r3, 0x14
/* 80260C64 0025DBA4  4B DC 32 41 */	bl __nw__FUl
/* 80260C68 0025DBA8  28 03 00 00 */	cmplwi r3, 0
/* 80260C6C 0025DBAC  41 82 00 78 */	beq .L_80260CE4
/* 80260C70 0025DBB0  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80260C74 0025DBB4  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 80260C78 0025DBB8  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80260C7C 0025DBBC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80260C80 0025DBC0  90 03 00 00 */	stw r0, 0(r3)
/* 80260C84 0025DBC4  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 80260C88 0025DBC8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80260C8C 0025DBCC  3C 80 80 4E */	lis r4, __vt__Q23efx10TChaseMtxT@ha
/* 80260C90 0025DBD0  90 03 00 04 */	stw r0, 4(r3)
/* 80260C94 0025DBD4  38 E4 68 5C */	addi r7, r4, __vt__Q23efx10TChaseMtxT@l
/* 80260C98 0025DBD8  3C 80 80 4C */	lis r4, __vt__Q23efx9TQuriGlow@ha
/* 80260C9C 0025DBDC  38 05 00 14 */	addi r0, r5, 0x14
/* 80260CA0 0025DBE0  90 A3 00 00 */	stw r5, 0(r3)
/* 80260CA4 0025DBE4  38 84 36 FC */	addi r4, r4, __vt__Q23efx9TQuriGlow@l
/* 80260CA8 0025DBE8  39 20 00 00 */	li r9, 0
/* 80260CAC 0025DBEC  39 00 02 B2 */	li r8, 0x2b2
/* 80260CB0 0025DBF0  90 03 00 04 */	stw r0, 4(r3)
/* 80260CB4 0025DBF4  38 C7 00 14 */	addi r6, r7, 0x14
/* 80260CB8 0025DBF8  38 A0 01 A3 */	li r5, 0x1a3
/* 80260CBC 0025DBFC  38 04 00 14 */	addi r0, r4, 0x14
/* 80260CC0 0025DC00  91 23 00 08 */	stw r9, 8(r3)
/* 80260CC4 0025DC04  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80260CC8 0025DC08  99 23 00 0E */	stb r9, 0xe(r3)
/* 80260CCC 0025DC0C  90 E3 00 00 */	stw r7, 0(r3)
/* 80260CD0 0025DC10  90 C3 00 04 */	stw r6, 4(r3)
/* 80260CD4 0025DC14  91 23 00 10 */	stw r9, 0x10(r3)
/* 80260CD8 0025DC18  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 80260CDC 0025DC1C  90 83 00 00 */	stw r4, 0(r3)
/* 80260CE0 0025DC20  90 03 00 04 */	stw r0, 4(r3)
.L_80260CE4:
/* 80260CE4 0025DC24  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 80260CE8 0025DC28  38 60 00 14 */	li r3, 0x14
/* 80260CEC 0025DC2C  4B DC 31 B9 */	bl __nw__FUl
/* 80260CF0 0025DC30  28 03 00 00 */	cmplwi r3, 0
/* 80260CF4 0025DC34  41 82 00 78 */	beq .L_80260D6C
/* 80260CF8 0025DC38  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80260CFC 0025DC3C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 80260D00 0025DC40  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80260D04 0025DC44  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80260D08 0025DC48  90 03 00 00 */	stw r0, 0(r3)
/* 80260D0C 0025DC4C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 80260D10 0025DC50  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80260D14 0025DC54  3C 80 80 4E */	lis r4, __vt__Q23efx10TChaseMtxT@ha
/* 80260D18 0025DC58  90 03 00 04 */	stw r0, 4(r3)
/* 80260D1C 0025DC5C  38 E4 68 5C */	addi r7, r4, __vt__Q23efx10TChaseMtxT@l
/* 80260D20 0025DC60  3C 80 80 4C */	lis r4, __vt__Q23efx8TQuriApp@ha
/* 80260D24 0025DC64  38 05 00 14 */	addi r0, r5, 0x14
/* 80260D28 0025DC68  90 A3 00 00 */	stw r5, 0(r3)
/* 80260D2C 0025DC6C  38 84 36 B0 */	addi r4, r4, __vt__Q23efx8TQuriApp@l
/* 80260D30 0025DC70  39 20 00 00 */	li r9, 0
/* 80260D34 0025DC74  39 00 02 B2 */	li r8, 0x2b2
/* 80260D38 0025DC78  90 03 00 04 */	stw r0, 4(r3)
/* 80260D3C 0025DC7C  38 C7 00 14 */	addi r6, r7, 0x14
/* 80260D40 0025DC80  38 A0 01 A1 */	li r5, 0x1a1
/* 80260D44 0025DC84  38 04 00 14 */	addi r0, r4, 0x14
/* 80260D48 0025DC88  91 23 00 08 */	stw r9, 8(r3)
/* 80260D4C 0025DC8C  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80260D50 0025DC90  99 23 00 0E */	stb r9, 0xe(r3)
/* 80260D54 0025DC94  90 E3 00 00 */	stw r7, 0(r3)
/* 80260D58 0025DC98  90 C3 00 04 */	stw r6, 4(r3)
/* 80260D5C 0025DC9C  91 23 00 10 */	stw r9, 0x10(r3)
/* 80260D60 0025DCA0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 80260D64 0025DCA4  90 83 00 00 */	stw r4, 0(r3)
/* 80260D68 0025DCA8  90 03 00 04 */	stw r0, 4(r3)
.L_80260D6C:
/* 80260D6C 0025DCAC  90 7F 02 F4 */	stw r3, 0x2f4(r31)
/* 80260D70 0025DCB0  38 60 00 14 */	li r3, 0x14
/* 80260D74 0025DCB4  4B DC 31 31 */	bl __nw__FUl
/* 80260D78 0025DCB8  28 03 00 00 */	cmplwi r3, 0
/* 80260D7C 0025DCBC  41 82 00 78 */	beq .L_80260DF4
/* 80260D80 0025DCC0  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80260D84 0025DCC4  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 80260D88 0025DCC8  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80260D8C 0025DCCC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80260D90 0025DCD0  90 03 00 00 */	stw r0, 0(r3)
/* 80260D94 0025DCD4  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 80260D98 0025DCD8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80260D9C 0025DCDC  3C 80 80 4E */	lis r4, __vt__Q23efx10TChaseMtxT@ha
/* 80260DA0 0025DCE0  90 03 00 04 */	stw r0, 4(r3)
/* 80260DA4 0025DCE4  38 E4 68 5C */	addi r7, r4, __vt__Q23efx10TChaseMtxT@l
/* 80260DA8 0025DCE8  3C 80 80 4C */	lis r4, __vt__Q23efx10TQuriDisap@ha
/* 80260DAC 0025DCEC  38 05 00 14 */	addi r0, r5, 0x14
/* 80260DB0 0025DCF0  90 A3 00 00 */	stw r5, 0(r3)
/* 80260DB4 0025DCF4  38 84 36 64 */	addi r4, r4, __vt__Q23efx10TQuriDisap@l
/* 80260DB8 0025DCF8  39 20 00 00 */	li r9, 0
/* 80260DBC 0025DCFC  39 00 02 B2 */	li r8, 0x2b2
/* 80260DC0 0025DD00  90 03 00 04 */	stw r0, 4(r3)
/* 80260DC4 0025DD04  38 C7 00 14 */	addi r6, r7, 0x14
/* 80260DC8 0025DD08  38 A0 01 A2 */	li r5, 0x1a2
/* 80260DCC 0025DD0C  38 04 00 14 */	addi r0, r4, 0x14
/* 80260DD0 0025DD10  91 23 00 08 */	stw r9, 8(r3)
/* 80260DD4 0025DD14  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80260DD8 0025DD18  99 23 00 0E */	stb r9, 0xe(r3)
/* 80260DDC 0025DD1C  90 E3 00 00 */	stw r7, 0(r3)
/* 80260DE0 0025DD20  90 C3 00 04 */	stw r6, 4(r3)
/* 80260DE4 0025DD24  91 23 00 10 */	stw r9, 0x10(r3)
/* 80260DE8 0025DD28  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 80260DEC 0025DD2C  90 83 00 00 */	stw r4, 0(r3)
/* 80260DF0 0025DD30  90 03 00 04 */	stw r0, 4(r3)
.L_80260DF4:
/* 80260DF4 0025DD34  90 7F 02 F8 */	stw r3, 0x2f8(r31)
/* 80260DF8 0025DD38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260DFC 0025DD3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80260E00 0025DD40  7C 08 03 A6 */	mtlr r0
/* 80260E04 0025DD44  38 21 00 10 */	addi r1, r1, 0x10
/* 80260E08 0025DD48  4E 80 00 20 */	blr 

.global setupEffect__Q34Game7Qurione3ObjFv
setupEffect__Q34Game7Qurione3ObjFv:
/* 80260E0C 0025DD4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260E10 0025DD50  7C 08 02 A6 */	mflr r0
/* 80260E14 0025DD54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260E18 0025DD58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80260E1C 0025DD5C  7C 7F 1B 78 */	mr r31, r3
/* 80260E20 0025DD60  3C 60 80 48 */	lis r3, lbl_80485760@ha
/* 80260E24 0025DD64  38 83 57 60 */	addi r4, r3, lbl_80485760@l
/* 80260E28 0025DD68  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80260E2C 0025DD6C  48 1D E1 B9 */	bl getJoint__Q28SysShape5ModelFPc
/* 80260E30 0025DD70  48 1C 8A 71 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80260E34 0025DD74  80 9F 02 F0 */	lwz r4, 0x2f0(r31)
/* 80260E38 0025DD78  90 64 00 10 */	stw r3, 0x10(r4)
/* 80260E3C 0025DD7C  80 9F 02 F4 */	lwz r4, 0x2f4(r31)
/* 80260E40 0025DD80  90 64 00 10 */	stw r3, 0x10(r4)
/* 80260E44 0025DD84  80 9F 02 F8 */	lwz r4, 0x2f8(r31)
/* 80260E48 0025DD88  90 64 00 10 */	stw r3, 0x10(r4)
/* 80260E4C 0025DD8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80260E50 0025DD90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260E54 0025DD94  7C 08 03 A6 */	mtlr r0
/* 80260E58 0025DD98  38 21 00 10 */	addi r1, r1, 0x10
/* 80260E5C 0025DD9C  4E 80 00 20 */	blr 

.global createHitEffect__Q34Game7Qurione3ObjFv
createHitEffect__Q34Game7Qurione3ObjFv:
/* 80260E60 0025DDA0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80260E64 0025DDA4  7C 08 02 A6 */	mflr r0
/* 80260E68 0025DDA8  3C 80 80 48 */	lis r4, lbl_80485760@ha
/* 80260E6C 0025DDAC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80260E70 0025DDB0  38 84 57 60 */	addi r4, r4, lbl_80485760@l
/* 80260E74 0025DDB4  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80260E78 0025DDB8  48 1D E1 6D */	bl getJoint__Q28SysShape5ModelFPc
/* 80260E7C 0025DDBC  48 1C 8A 25 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80260E80 0025DDC0  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80260E84 0025DDC4  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 80260E88 0025DDC8  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80260E8C 0025DDCC  38 84 A7 F8 */	addi r4, r4, __vt__Q23efx5TBase@l
/* 80260E90 0025DDD0  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80260E94 0025DDD4  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 80260E98 0025DDD8  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 80260E9C 0025DDDC  38 A0 00 00 */	li r5, 0
/* 80260EA0 0025DDE0  90 81 00 08 */	stw r4, 8(r1)
/* 80260EA4 0025DDE4  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80260EA8 0025DDE8  3C 60 80 4C */	lis r3, __vt__Q23efx8TQuriHit@ha
/* 80260EAC 0025DDEC  38 E0 01 A4 */	li r7, 0x1a4
/* 80260EB0 0025DDF0  39 04 A7 EC */	addi r8, r4, __vt__Q23efx3Arg@l
/* 80260EB4 0025DDF4  38 C0 01 A5 */	li r6, 0x1a5
/* 80260EB8 0025DDF8  90 01 00 08 */	stw r0, 8(r1)
/* 80260EBC 0025DDFC  38 03 36 50 */	addi r0, r3, __vt__Q23efx8TQuriHit@l
/* 80260EC0 0025DE00  38 61 00 08 */	addi r3, r1, 8
/* 80260EC4 0025DE04  38 81 00 18 */	addi r4, r1, 0x18
/* 80260EC8 0025DE08  91 01 00 18 */	stw r8, 0x18(r1)
/* 80260ECC 0025DE0C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80260ED0 0025DE10  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80260ED4 0025DE14  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80260ED8 0025DE18  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 80260EDC 0025DE1C  B0 C1 00 0E */	sth r6, 0xe(r1)
/* 80260EE0 0025DE20  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80260EE4 0025DE24  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80260EE8 0025DE28  90 01 00 08 */	stw r0, 8(r1)
/* 80260EEC 0025DE2C  48 14 E1 29 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 80260EF0 0025DE30  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80260EF4 0025DE34  7C 08 03 A6 */	mtlr r0
/* 80260EF8 0025DE38  38 21 00 30 */	addi r1, r1, 0x30
/* 80260EFC 0025DE3C  4E 80 00 20 */	blr 

.global startGlowEffect__Q34Game7Qurione3ObjFv
startGlowEffect__Q34Game7Qurione3ObjFv:
/* 80260F00 0025DE40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260F04 0025DE44  7C 08 02 A6 */	mflr r0
/* 80260F08 0025DE48  38 80 00 00 */	li r4, 0
/* 80260F0C 0025DE4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260F10 0025DE50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80260F14 0025DE54  7C 7F 1B 78 */	mr r31, r3
/* 80260F18 0025DE58  80 63 02 F0 */	lwz r3, 0x2f0(r3)
/* 80260F1C 0025DE5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80260F20 0025DE60  81 8C 00 08 */	lwz r12, 8(r12)
/* 80260F24 0025DE64  7D 89 03 A6 */	mtctr r12
/* 80260F28 0025DE68  4E 80 04 21 */	bctrl 
/* 80260F2C 0025DE6C  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 80260F30 0025DE70  C0 22 C9 98 */	lfs f1, lbl_8051ACF8@sda21(r2)
/* 80260F34 0025DE74  48 15 2B 51 */	bl setGlobalScale__Q23efx9TQuriGlowFf
/* 80260F38 0025DE78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260F3C 0025DE7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80260F40 0025DE80  7C 08 03 A6 */	mtlr r0
/* 80260F44 0025DE84  38 21 00 10 */	addi r1, r1, 0x10
/* 80260F48 0025DE88  4E 80 00 20 */	blr 

.global setGlowEffectScale__Q34Game7Qurione3ObjFv
setGlowEffectScale__Q34Game7Qurione3ObjFv:
/* 80260F4C 0025DE8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260F50 0025DE90  7C 08 02 A6 */	mflr r0
/* 80260F54 0025DE94  7C 64 1B 78 */	mr r4, r3
/* 80260F58 0025DE98  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260F5C 0025DE9C  80 63 02 F0 */	lwz r3, 0x2f0(r3)
/* 80260F60 0025DEA0  C0 24 02 C0 */	lfs f1, 0x2c0(r4)
/* 80260F64 0025DEA4  48 15 2B 21 */	bl setGlobalScale__Q23efx9TQuriGlowFf
/* 80260F68 0025DEA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260F6C 0025DEAC  7C 08 03 A6 */	mtlr r0
/* 80260F70 0025DEB0  38 21 00 10 */	addi r1, r1, 0x10
/* 80260F74 0025DEB4  4E 80 00 20 */	blr 

.global finishGlowEffect__Q34Game7Qurione3ObjFv
finishGlowEffect__Q34Game7Qurione3ObjFv:
/* 80260F78 0025DEB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260F7C 0025DEBC  7C 08 02 A6 */	mflr r0
/* 80260F80 0025DEC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260F84 0025DEC4  80 63 02 F0 */	lwz r3, 0x2f0(r3)
/* 80260F88 0025DEC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80260F8C 0025DECC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80260F90 0025DED0  7D 89 03 A6 */	mtctr r12
/* 80260F94 0025DED4  4E 80 04 21 */	bctrl 
/* 80260F98 0025DED8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260F9C 0025DEDC  7C 08 03 A6 */	mtlr r0
/* 80260FA0 0025DEE0  38 21 00 10 */	addi r1, r1, 0x10
/* 80260FA4 0025DEE4  4E 80 00 20 */	blr 

.global createAppearEffect__Q34Game7Qurione3ObjFv
createAppearEffect__Q34Game7Qurione3ObjFv:
/* 80260FA8 0025DEE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260FAC 0025DEEC  7C 08 02 A6 */	mflr r0
/* 80260FB0 0025DEF0  38 80 00 00 */	li r4, 0
/* 80260FB4 0025DEF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260FB8 0025DEF8  80 63 02 F4 */	lwz r3, 0x2f4(r3)
/* 80260FBC 0025DEFC  81 83 00 00 */	lwz r12, 0(r3)
/* 80260FC0 0025DF00  81 8C 00 08 */	lwz r12, 8(r12)
/* 80260FC4 0025DF04  7D 89 03 A6 */	mtctr r12
/* 80260FC8 0025DF08  4E 80 04 21 */	bctrl 
/* 80260FCC 0025DF0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80260FD0 0025DF10  7C 08 03 A6 */	mtlr r0
/* 80260FD4 0025DF14  38 21 00 10 */	addi r1, r1, 0x10
/* 80260FD8 0025DF18  4E 80 00 20 */	blr 

.global createDisppearEffect__Q34Game7Qurione3ObjFv
createDisppearEffect__Q34Game7Qurione3ObjFv:
/* 80260FDC 0025DF1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80260FE0 0025DF20  7C 08 02 A6 */	mflr r0
/* 80260FE4 0025DF24  38 80 00 00 */	li r4, 0
/* 80260FE8 0025DF28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80260FEC 0025DF2C  80 63 02 F8 */	lwz r3, 0x2f8(r3)
/* 80260FF0 0025DF30  81 83 00 00 */	lwz r12, 0(r3)
/* 80260FF4 0025DF34  81 8C 00 08 */	lwz r12, 8(r12)
/* 80260FF8 0025DF38  7D 89 03 A6 */	mtctr r12
/* 80260FFC 0025DF3C  4E 80 04 21 */	bctrl 
/* 80261000 0025DF40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80261004 0025DF44  7C 08 03 A6 */	mtlr r0
/* 80261008 0025DF48  38 21 00 10 */	addi r1, r1, 0x10
/* 8026100C 0025DF4C  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game7Qurione3ObjFv
effectDrawOn__Q34Game7Qurione3ObjFv:
/* 80261010 0025DF50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261014 0025DF54  7C 08 02 A6 */	mflr r0
/* 80261018 0025DF58  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026101C 0025DF5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80261020 0025DF60  7C 7F 1B 78 */	mr r31, r3
/* 80261024 0025DF64  80 63 02 F0 */	lwz r3, 0x2f0(r3)
/* 80261028 0025DF68  81 83 00 00 */	lwz r12, 0(r3)
/* 8026102C 0025DF6C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80261030 0025DF70  7D 89 03 A6 */	mtctr r12
/* 80261034 0025DF74  4E 80 04 21 */	bctrl 
/* 80261038 0025DF78  80 7F 02 F4 */	lwz r3, 0x2f4(r31)
/* 8026103C 0025DF7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80261040 0025DF80  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80261044 0025DF84  7D 89 03 A6 */	mtctr r12
/* 80261048 0025DF88  4E 80 04 21 */	bctrl 
/* 8026104C 0025DF8C  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 80261050 0025DF90  81 83 00 00 */	lwz r12, 0(r3)
/* 80261054 0025DF94  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80261058 0025DF98  7D 89 03 A6 */	mtctr r12
/* 8026105C 0025DF9C  4E 80 04 21 */	bctrl 
/* 80261060 0025DFA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80261064 0025DFA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80261068 0025DFA8  7C 08 03 A6 */	mtlr r0
/* 8026106C 0025DFAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80261070 0025DFB0  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game7Qurione3ObjFv
effectDrawOff__Q34Game7Qurione3ObjFv:
/* 80261074 0025DFB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261078 0025DFB8  7C 08 02 A6 */	mflr r0
/* 8026107C 0025DFBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80261080 0025DFC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80261084 0025DFC4  7C 7F 1B 78 */	mr r31, r3
/* 80261088 0025DFC8  80 63 02 F0 */	lwz r3, 0x2f0(r3)
/* 8026108C 0025DFCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80261090 0025DFD0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80261094 0025DFD4  7D 89 03 A6 */	mtctr r12
/* 80261098 0025DFD8  4E 80 04 21 */	bctrl 
/* 8026109C 0025DFDC  80 7F 02 F4 */	lwz r3, 0x2f4(r31)
/* 802610A0 0025DFE0  81 83 00 00 */	lwz r12, 0(r3)
/* 802610A4 0025DFE4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802610A8 0025DFE8  7D 89 03 A6 */	mtctr r12
/* 802610AC 0025DFEC  4E 80 04 21 */	bctrl 
/* 802610B0 0025DFF0  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 802610B4 0025DFF4  81 83 00 00 */	lwz r12, 0(r3)
/* 802610B8 0025DFF8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802610BC 0025DFFC  7D 89 03 A6 */	mtctr r12
/* 802610C0 0025E000  4E 80 04 21 */	bctrl 
/* 802610C4 0025E004  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802610C8 0025E008  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802610CC 0025E00C  7C 08 03 A6 */	mtlr r0
/* 802610D0 0025E010  38 21 00 10 */	addi r1, r1, 0x10
/* 802610D4 0025E014  4E 80 00 20 */	blr 

.global __dt__Q23efx10TQuriDisapFv
__dt__Q23efx10TQuriDisapFv:
/* 802610D8 0025E018  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802610DC 0025E01C  7C 08 02 A6 */	mflr r0
/* 802610E0 0025E020  90 01 00 14 */	stw r0, 0x14(r1)
/* 802610E4 0025E024  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802610E8 0025E028  7C 9F 23 78 */	mr r31, r4
/* 802610EC 0025E02C  93 C1 00 08 */	stw r30, 8(r1)
/* 802610F0 0025E030  7C 7E 1B 79 */	or. r30, r3, r3
/* 802610F4 0025E034  41 82 00 64 */	beq .L_80261158
/* 802610F8 0025E038  3C 60 80 4C */	lis r3, __vt__Q23efx10TQuriDisap@ha
/* 802610FC 0025E03C  38 63 36 64 */	addi r3, r3, __vt__Q23efx10TQuriDisap@l
/* 80261100 0025E040  90 7E 00 00 */	stw r3, 0(r30)
/* 80261104 0025E044  38 03 00 14 */	addi r0, r3, 0x14
/* 80261108 0025E048  90 1E 00 04 */	stw r0, 4(r30)
/* 8026110C 0025E04C  41 82 00 3C */	beq .L_80261148
/* 80261110 0025E050  3C 60 80 4E */	lis r3, __vt__Q23efx10TChaseMtxT@ha
/* 80261114 0025E054  38 63 68 5C */	addi r3, r3, __vt__Q23efx10TChaseMtxT@l
/* 80261118 0025E058  90 7E 00 00 */	stw r3, 0(r30)
/* 8026111C 0025E05C  38 03 00 14 */	addi r0, r3, 0x14
/* 80261120 0025E060  90 1E 00 04 */	stw r0, 4(r30)
/* 80261124 0025E064  41 82 00 24 */	beq .L_80261148
/* 80261128 0025E068  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8026112C 0025E06C  38 7E 00 04 */	addi r3, r30, 4
/* 80261130 0025E070  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80261134 0025E074  38 80 00 00 */	li r4, 0
/* 80261138 0025E078  90 BE 00 00 */	stw r5, 0(r30)
/* 8026113C 0025E07C  38 05 00 14 */	addi r0, r5, 0x14
/* 80261140 0025E080  90 1E 00 04 */	stw r0, 4(r30)
/* 80261144 0025E084  4B E2 EB 59 */	bl __dt__18JPAEmitterCallBackFv
.L_80261148:
/* 80261148 0025E088  7F E0 07 35 */	extsh. r0, r31
/* 8026114C 0025E08C  40 81 00 0C */	ble .L_80261158
/* 80261150 0025E090  7F C3 F3 78 */	mr r3, r30
/* 80261154 0025E094  4B DC 2F 61 */	bl __dl__FPv
.L_80261158:
/* 80261158 0025E098  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026115C 0025E09C  7F C3 F3 78 */	mr r3, r30
/* 80261160 0025E0A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80261164 0025E0A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80261168 0025E0A8  7C 08 03 A6 */	mtlr r0
/* 8026116C 0025E0AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80261170 0025E0B0  4E 80 00 20 */	blr 

.global __dt__Q23efx8TQuriAppFv
__dt__Q23efx8TQuriAppFv:
/* 80261174 0025E0B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261178 0025E0B8  7C 08 02 A6 */	mflr r0
/* 8026117C 0025E0BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80261180 0025E0C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80261184 0025E0C4  7C 9F 23 78 */	mr r31, r4
/* 80261188 0025E0C8  93 C1 00 08 */	stw r30, 8(r1)
/* 8026118C 0025E0CC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80261190 0025E0D0  41 82 00 64 */	beq .L_802611F4
/* 80261194 0025E0D4  3C 60 80 4C */	lis r3, __vt__Q23efx8TQuriApp@ha
/* 80261198 0025E0D8  38 63 36 B0 */	addi r3, r3, __vt__Q23efx8TQuriApp@l
/* 8026119C 0025E0DC  90 7E 00 00 */	stw r3, 0(r30)
/* 802611A0 0025E0E0  38 03 00 14 */	addi r0, r3, 0x14
/* 802611A4 0025E0E4  90 1E 00 04 */	stw r0, 4(r30)
/* 802611A8 0025E0E8  41 82 00 3C */	beq .L_802611E4
/* 802611AC 0025E0EC  3C 60 80 4E */	lis r3, __vt__Q23efx10TChaseMtxT@ha
/* 802611B0 0025E0F0  38 63 68 5C */	addi r3, r3, __vt__Q23efx10TChaseMtxT@l
/* 802611B4 0025E0F4  90 7E 00 00 */	stw r3, 0(r30)
/* 802611B8 0025E0F8  38 03 00 14 */	addi r0, r3, 0x14
/* 802611BC 0025E0FC  90 1E 00 04 */	stw r0, 4(r30)
/* 802611C0 0025E100  41 82 00 24 */	beq .L_802611E4
/* 802611C4 0025E104  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802611C8 0025E108  38 7E 00 04 */	addi r3, r30, 4
/* 802611CC 0025E10C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802611D0 0025E110  38 80 00 00 */	li r4, 0
/* 802611D4 0025E114  90 BE 00 00 */	stw r5, 0(r30)
/* 802611D8 0025E118  38 05 00 14 */	addi r0, r5, 0x14
/* 802611DC 0025E11C  90 1E 00 04 */	stw r0, 4(r30)
/* 802611E0 0025E120  4B E2 EA BD */	bl __dt__18JPAEmitterCallBackFv
.L_802611E4:
/* 802611E4 0025E124  7F E0 07 35 */	extsh. r0, r31
/* 802611E8 0025E128  40 81 00 0C */	ble .L_802611F4
/* 802611EC 0025E12C  7F C3 F3 78 */	mr r3, r30
/* 802611F0 0025E130  4B DC 2E C5 */	bl __dl__FPv
.L_802611F4:
/* 802611F4 0025E134  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802611F8 0025E138  7F C3 F3 78 */	mr r3, r30
/* 802611FC 0025E13C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80261200 0025E140  83 C1 00 08 */	lwz r30, 8(r1)
/* 80261204 0025E144  7C 08 03 A6 */	mtlr r0
/* 80261208 0025E148  38 21 00 10 */	addi r1, r1, 0x10
/* 8026120C 0025E14C  4E 80 00 20 */	blr 

.global __dt__Q23efx9TQuriGlowFv
__dt__Q23efx9TQuriGlowFv:
/* 80261210 0025E150  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261214 0025E154  7C 08 02 A6 */	mflr r0
/* 80261218 0025E158  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026121C 0025E15C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80261220 0025E160  7C 9F 23 78 */	mr r31, r4
/* 80261224 0025E164  93 C1 00 08 */	stw r30, 8(r1)
/* 80261228 0025E168  7C 7E 1B 79 */	or. r30, r3, r3
/* 8026122C 0025E16C  41 82 00 64 */	beq .L_80261290
/* 80261230 0025E170  3C 60 80 4C */	lis r3, __vt__Q23efx9TQuriGlow@ha
/* 80261234 0025E174  38 63 36 FC */	addi r3, r3, __vt__Q23efx9TQuriGlow@l
/* 80261238 0025E178  90 7E 00 00 */	stw r3, 0(r30)
/* 8026123C 0025E17C  38 03 00 14 */	addi r0, r3, 0x14
/* 80261240 0025E180  90 1E 00 04 */	stw r0, 4(r30)
/* 80261244 0025E184  41 82 00 3C */	beq .L_80261280
/* 80261248 0025E188  3C 60 80 4E */	lis r3, __vt__Q23efx10TChaseMtxT@ha
/* 8026124C 0025E18C  38 63 68 5C */	addi r3, r3, __vt__Q23efx10TChaseMtxT@l
/* 80261250 0025E190  90 7E 00 00 */	stw r3, 0(r30)
/* 80261254 0025E194  38 03 00 14 */	addi r0, r3, 0x14
/* 80261258 0025E198  90 1E 00 04 */	stw r0, 4(r30)
/* 8026125C 0025E19C  41 82 00 24 */	beq .L_80261280
/* 80261260 0025E1A0  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80261264 0025E1A4  38 7E 00 04 */	addi r3, r30, 4
/* 80261268 0025E1A8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8026126C 0025E1AC  38 80 00 00 */	li r4, 0
/* 80261270 0025E1B0  90 BE 00 00 */	stw r5, 0(r30)
/* 80261274 0025E1B4  38 05 00 14 */	addi r0, r5, 0x14
/* 80261278 0025E1B8  90 1E 00 04 */	stw r0, 4(r30)
/* 8026127C 0025E1BC  4B E2 EA 21 */	bl __dt__18JPAEmitterCallBackFv
.L_80261280:
/* 80261280 0025E1C0  7F E0 07 35 */	extsh. r0, r31
/* 80261284 0025E1C4  40 81 00 0C */	ble .L_80261290
/* 80261288 0025E1C8  7F C3 F3 78 */	mr r3, r30
/* 8026128C 0025E1CC  4B DC 2E 29 */	bl __dl__FPv
.L_80261290:
/* 80261290 0025E1D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80261294 0025E1D4  7F C3 F3 78 */	mr r3, r30
/* 80261298 0025E1D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026129C 0025E1DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802612A0 0025E1E0  7C 08 03 A6 */	mtlr r0
/* 802612A4 0025E1E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802612A8 0025E1E8  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game7Qurione3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game7Qurione3ObjFPQ24Game8WaterBox:
/* 802612AC 0025E1EC  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game7Qurione3ObjFv
outWaterCallback__Q34Game7Qurione3ObjFv:
/* 802612B0 0025E1F0  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game7Qurione3ObjFv
getEnemyTypeID__Q34Game7Qurione3ObjFv:
/* 802612B4 0025E1F4  38 60 00 10 */	li r3, 0x10
/* 802612B8 0025E1F8  4E 80 00 20 */	blr 

.global "@764@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
"@764@12@viewOnPelletKilled__Q24Game9EnemyBaseFv":
/* 802612BC 0025E1FC  39 60 00 0C */	li r11, 0xc
/* 802612C0 0025E200  7D 63 58 2E */	lwzx r11, r3, r11
/* 802612C4 0025E204  7C 63 5A 14 */	add r3, r3, r11
/* 802612C8 0025E208  38 63 FD 04 */	addi r3, r3, -764
/* 802612CC 0025E20C  4B EA 56 50 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv

.global "@764@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
"@764@12@viewStartCarryMotion__Q24Game9EnemyBaseFv":
/* 802612D0 0025E210  39 60 00 0C */	li r11, 0xc
/* 802612D4 0025E214  7D 63 58 2E */	lwzx r11, r3, r11
/* 802612D8 0025E218  7C 63 5A 14 */	add r3, r3, r11
/* 802612DC 0025E21C  38 63 FD 04 */	addi r3, r3, -764
/* 802612E0 0025E220  4B EA 53 C8 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv

.global "@764@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
"@764@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv":
/* 802612E4 0025E224  39 60 00 0C */	li r11, 0xc
/* 802612E8 0025E228  7D 63 58 2E */	lwzx r11, r3, r11
/* 802612EC 0025E22C  7C 63 5A 14 */	add r3, r3, r11
/* 802612F0 0025E230  38 63 FD 04 */	addi r3, r3, -764
/* 802612F4 0025E234  4B EA 53 D4 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv

.global "@764@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
"@764@12@view_finish_carrymotion__Q24Game9EnemyBaseFv":
/* 802612F8 0025E238  39 60 00 0C */	li r11, 0xc
/* 802612FC 0025E23C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80261300 0025E240  7C 63 5A 14 */	add r3, r3, r11
/* 80261304 0025E244  38 63 FD 04 */	addi r3, r3, -764
/* 80261308 0025E248  4B EA 57 70 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv

.global "@764@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
"@764@12@view_start_carrymotion__Q24Game9EnemyBaseFv":
/* 8026130C 0025E24C  39 60 00 0C */	li r11, 0xc
/* 80261310 0025E250  7D 63 58 2E */	lwzx r11, r3, r11
/* 80261314 0025E254  7C 63 5A 14 */	add r3, r3, r11
/* 80261318 0025E258  38 63 FD 04 */	addi r3, r3, -764
/* 8026131C 0025E25C  4B EA 57 30 */	b view_start_carrymotion__Q24Game9EnemyBaseFv

.global "@764@12@viewGetShape__Q24Game9EnemyBaseFv"
"@764@12@viewGetShape__Q24Game9EnemyBaseFv":
/* 80261320 0025E260  39 60 00 0C */	li r11, 0xc
/* 80261324 0025E264  7D 63 58 2E */	lwzx r11, r3, r11
/* 80261328 0025E268  7C 63 5A 14 */	add r3, r3, r11
/* 8026132C 0025E26C  38 63 FD 04 */	addi r3, r3, -764
/* 80261330 0025E270  4B EA 53 70 */	b viewGetShape__Q24Game9EnemyBaseFv

.global "@4@__dt__Q23efx9TQuriGlowFv"
"@4@__dt__Q23efx9TQuriGlowFv":
/* 80261334 0025E274  38 63 FF FC */	addi r3, r3, -4
/* 80261338 0025E278  4B FF FE D8 */	b __dt__Q23efx9TQuriGlowFv

.global "@4@__dt__Q23efx8TQuriAppFv"
"@4@__dt__Q23efx8TQuriAppFv":
/* 8026133C 0025E27C  38 63 FF FC */	addi r3, r3, -4
/* 80261340 0025E280  4B FF FE 34 */	b __dt__Q23efx8TQuriAppFv

.global "@4@__dt__Q23efx10TQuriDisapFv"
"@4@__dt__Q23efx10TQuriDisapFv":
/* 80261344 0025E284  38 63 FF FC */	addi r3, r3, -4
/* 80261348 0025E288  4B FF FD 90 */	b __dt__Q23efx10TQuriDisapFv
