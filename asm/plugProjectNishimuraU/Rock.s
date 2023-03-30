.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx9TRockDead, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple3FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.endobj __vt__Q23efx9TRockDead
.obj "__vt__Q23efx29TSyncGroup3<Q23efx9TChasePos>", weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup3<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
.endobj "__vt__Q23efx29TSyncGroup3<Q23efx9TChasePos>"
.obj __vt__Q23efx10TChasePos3, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup3<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
.endobj __vt__Q23efx10TChasePos3
.obj __vt__Q23efx17TRockWRunChasePos, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup3<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
.endobj __vt__Q23efx17TRockWRunChasePos
.obj __vt__Q23efx9TRockWRun, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx9TRockWRunFPQ23efx3Arg
	.4byte forceKill__Q23efx9TRockWRunFv
	.4byte fade__Q23efx9TRockWRunFv
.endobj __vt__Q23efx9TRockWRun
.obj __vt__Q23efx10TRockGrRun, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx10TRockGrRunFv"
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
	.4byte __dt__Q23efx10TRockGrRunFv
.endobj __vt__Q23efx10TRockGrRun
.obj __vt__Q23efx8TRockRun, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx8TRockRunFv"
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
	.4byte __dt__Q23efx8TRockRunFv
.endobj __vt__Q23efx8TRockRun
.obj __vt__Q34Game4Rock3Obj, global
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
	.4byte onInit__Q34Game4Rock3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game4Rock3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game4Rock3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game4Rock3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game4Rock3ObjFv
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
	.4byte isLivingThing__Q34Game4Rock3ObjFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
	.4byte collisionCallback__Q34Game4Rock3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game4Rock3ObjFRQ24Game11ShadowParam
	.4byte needShadow__Q34Game4Rock3ObjFv
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
	.4byte ignoreAtari__Q34Game4Rock3ObjFPQ24Game8Creature
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
	.4byte __dt__Q34Game4Rock3ObjFv
	.4byte "birth__Q34Game4Rock3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game4Rock3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game4Rock3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game4Rock3ObjFR8Graphics
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
	.4byte getEnemyTypeID__Q34Game4Rock3ObjFv
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
	.4byte hipdropCallBack__Q34Game4Rock3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q34Game4Rock3ObjFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q24Game9EnemyBaseFv
	.4byte doStartMovie__Q34Game4Rock3ObjFv
	.4byte doEndMovie__Q34Game4Rock3ObjFv
	.4byte setFSM__Q34Game4Rock3ObjFPQ34Game4Rock3FSM
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
.endobj __vt__Q34Game4Rock3Obj

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051ADA0, local
	.float 100.0
.endobj lbl_8051ADA0
.obj lbl_8051ADA4, local
	.float 500.0
.endobj lbl_8051ADA4
.obj lbl_8051ADA8, local
	.float 0.4
.endobj lbl_8051ADA8
.obj lbl_8051ADAC, local
	.float 1.0E-4
.endobj lbl_8051ADAC
.obj lbl_8051ADB0, local
	.float 0.0
.endobj lbl_8051ADB0
.obj lbl_8051ADB4, local
	.float 1.5
.endobj lbl_8051ADB4
.obj lbl_8051ADB8, local
	.float 32768.0
.endobj lbl_8051ADB8
.balign 8
.obj lbl_8051ADC0, local
	.8byte 0x4330000080000000
.endobj lbl_8051ADC0
.obj lbl_8051ADC8, local
	.float 50.0
.endobj lbl_8051ADC8
.obj lbl_8051ADCC, local
	.float 5.0
.endobj lbl_8051ADCC
.obj lbl_8051ADD0, local
	.float 20.0
.endobj lbl_8051ADD0
.obj lbl_8051ADD4, local
	.float 1.0
.endobj lbl_8051ADD4
.obj lbl_8051ADD8, local
	.float 25.0
.endobj lbl_8051ADD8
.obj lbl_8051ADDC, local
	.float 250.0
.endobj lbl_8051ADDC
.obj lbl_8051ADE0, local
	.float 325.9493
.endobj lbl_8051ADE0
.obj lbl_8051ADE4, local
	.float -325.9493
.endobj lbl_8051ADE4
.obj lbl_8051ADE8, local
	.float 180.0
.endobj lbl_8051ADE8
.obj lbl_8051ADEC, local # pi
	.float 3.1415927
.endobj lbl_8051ADEC
.obj lbl_8051ADF0, local
	.float 0.0055555557
.endobj lbl_8051ADF0
.obj lbl_8051ADF4, local
	.float 0.01
.endobj lbl_8051ADF4
.obj lbl_8051ADF8, local
	.float 0.99
.endobj lbl_8051ADF8
.obj lbl_8051ADFC, local
	.float 8.0
.endobj lbl_8051ADFC
.obj lbl_8051AE00, local
	.float 45.0
.endobj lbl_8051AE00

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game4Rock3ObjFv, global
/* 80262FF0 0025FF30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80262FF4 0025FF34  7C 08 02 A6 */	mflr r0
/* 80262FF8 0025FF38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80262FFC 0025FF3C  7C 80 07 35 */	extsh. r0, r4
/* 80263000 0025FF40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80263004 0025FF44  7C 7F 1B 78 */	mr r31, r3
/* 80263008 0025FF48  93 C1 00 08 */	stw r30, 8(r1)
/* 8026300C 0025FF4C  41 82 00 24 */	beq .L_80263030
/* 80263010 0025FF50  38 1F 02 E8 */	addi r0, r31, 0x2e8
/* 80263014 0025FF54  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 80263018 0025FF58  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8026301C 0025FF5C  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80263020 0025FF60  38 00 00 00 */	li r0, 0
/* 80263024 0025FF64  90 7F 02 E8 */	stw r3, 0x2e8(r31)
/* 80263028 0025FF68  90 1F 02 EC */	stw r0, 0x2ec(r31)
/* 8026302C 0025FF6C  90 1F 02 F0 */	stw r0, 0x2f0(r31)
.L_80263030:
/* 80263030 0025FF70  7F E3 FB 78 */	mr r3, r31
/* 80263034 0025FF74  38 80 00 00 */	li r4, 0
/* 80263038 0025FF78  4B E9 E3 69 */	bl __ct__Q24Game9EnemyBaseFv
/* 8026303C 0025FF7C  3C 60 80 4C */	lis r3, __vt__Q34Game4Rock3Obj@ha
/* 80263040 0025FF80  38 1F 02 E8 */	addi r0, r31, 0x2e8
/* 80263044 0025FF84  38 A3 42 34 */	addi r5, r3, __vt__Q34Game4Rock3Obj@l
/* 80263048 0025FF88  38 60 00 2C */	li r3, 0x2c
/* 8026304C 0025FF8C  90 BF 00 00 */	stw r5, 0(r31)
/* 80263050 0025FF90  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80263054 0025FF94  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 80263058 0025FF98  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8026305C 0025FF9C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80263060 0025FFA0  90 A4 00 00 */	stw r5, 0(r4)
/* 80263064 0025FFA4  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80263068 0025FFA8  7C 04 00 50 */	subf r0, r4, r0
/* 8026306C 0025FFAC  90 04 00 0C */	stw r0, 0xc(r4)
/* 80263070 0025FFB0  4B DC 0E 35 */	bl __nw__FUl
/* 80263074 0025FFB4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80263078 0025FFB8  41 82 00 44 */	beq .L_802630BC
/* 8026307C 0025FFBC  4B EC 48 F9 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80263080 0025FFC0  3C 60 80 4C */	lis r3, __vt__Q34Game4Rock14ProperAnimator@ha
/* 80263084 0025FFC4  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 80263088 0025FFC8  38 03 3F E8 */	addi r0, r3, __vt__Q34Game4Rock14ProperAnimator@l
/* 8026308C 0025FFCC  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80263090 0025FFD0  90 1E 00 00 */	stw r0, 0(r30)
/* 80263094 0025FFD4  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 80263098 0025FFD8  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8026309C 0025FFDC  38 00 00 00 */	li r0, 0
/* 802630A0 0025FFE0  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802630A4 0025FFE4  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802630A8 0025FFE8  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802630AC 0025FFEC  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802630B0 0025FFF0  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802630B4 0025FFF4  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802630B8 0025FFF8  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802630BC:
/* 802630BC 0025FFFC  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802630C0 00260000  38 60 00 1C */	li r3, 0x1c
/* 802630C4 00260004  4B DC 0D E1 */	bl __nw__FUl
/* 802630C8 00260008  7C 64 1B 79 */	or. r4, r3, r3
/* 802630CC 0026000C  41 82 00 24 */	beq .L_802630F0
/* 802630D0 00260010  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802630D4 00260014  3C 60 80 4C */	lis r3, __vt__Q34Game4Rock3FSM@ha
/* 802630D8 00260018  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802630DC 0026001C  38 A0 FF FF */	li r5, -1
/* 802630E0 00260020  90 04 00 00 */	stw r0, 0(r4)
/* 802630E4 00260024  38 03 3F C0 */	addi r0, r3, __vt__Q34Game4Rock3FSM@l
/* 802630E8 00260028  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802630EC 0026002C  90 04 00 00 */	stw r0, 0(r4)
.L_802630F0:
/* 802630F0 00260030  81 9F 00 00 */	lwz r12, 0(r31)
/* 802630F4 00260034  7F E3 FB 78 */	mr r3, r31
/* 802630F8 00260038  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802630FC 0026003C  7D 89 03 A6 */	mtctr r12
/* 80263100 00260040  4E 80 04 21 */	bctrl 
/* 80263104 00260044  7F E3 FB 78 */	mr r3, r31
/* 80263108 00260048  48 00 0E 19 */	bl createEffect__Q34Game4Rock3ObjFv
/* 8026310C 0026004C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80263110 00260050  7F E3 FB 78 */	mr r3, r31
/* 80263114 00260054  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80263118 00260058  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026311C 0026005C  7C 08 03 A6 */	mtlr r0
/* 80263120 00260060  38 21 00 10 */	addi r1, r1, 0x10
/* 80263124 00260064  4E 80 00 20 */	blr 
.endfn __ct__Q34Game4Rock3ObjFv

.fn "birth__Q34Game4Rock3ObjFR10Vector3<f>f", global
/* 80263128 00260068  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8026312C 0026006C  7C 08 02 A6 */	mflr r0
/* 80263130 00260070  90 01 00 24 */	stw r0, 0x24(r1)
/* 80263134 00260074  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80263138 00260078  7C 7F 1B 78 */	mr r31, r3
/* 8026313C 0026007C  4B E9 F8 C5 */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 80263140 00260080  C0 42 CA 40 */	lfs f2, lbl_8051ADA0@sda21(r2)
/* 80263144 00260084  7F E3 FB 78 */	mr r3, r31
/* 80263148 00260088  C0 22 CA 44 */	lfs f1, lbl_8051ADA4@sda21(r2)
/* 8026314C 0026008C  38 81 00 08 */	addi r4, r1, 8
/* 80263150 00260090  C0 02 CA 48 */	lfs f0, lbl_8051ADA8@sda21(r2)
/* 80263154 00260094  D0 41 00 08 */	stfs f2, 8(r1)
/* 80263158 00260098  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8026315C 0026009C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80263160 002600A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80263164 002600A4  81 8C 01 C4 */	lwz r12, 0x1c4(r12)
/* 80263168 002600A8  7D 89 03 A6 */	mtctr r12
/* 8026316C 002600AC  4E 80 04 21 */	bctrl 
/* 80263170 002600B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80263174 002600B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80263178 002600B8  7C 08 03 A6 */	mtlr r0
/* 8026317C 002600BC  38 21 00 20 */	addi r1, r1, 0x20
/* 80263180 002600C0  4E 80 00 20 */	blr 
.endfn "birth__Q34Game4Rock3ObjFR10Vector3<f>f"

.fn setInitialSetting__Q34Game4Rock3ObjFPQ24Game21EnemyInitialParamBase, global
/* 80263184 002600C4  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80263188 002600C8  C0 04 04 4C */	lfs f0, 0x44c(r4)
/* 8026318C 002600CC  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 80263190 002600D0  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80263194 002600D4  C0 04 04 74 */	lfs f0, 0x474(r4)
/* 80263198 002600D8  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 8026319C 002600DC  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802631A0 002600E0  C0 04 04 9C */	lfs f0, 0x49c(r4)
/* 802631A4 002600E4  D0 03 02 D4 */	stfs f0, 0x2d4(r3)
/* 802631A8 002600E8  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game4Rock3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game4Rock3ObjFPQ24Game15CreatureInitArg, global
/* 802631AC 002600EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802631B0 002600F0  7C 08 02 A6 */	mflr r0
/* 802631B4 002600F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802631B8 002600F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802631BC 002600FC  7C 7F 1B 78 */	mr r31, r3
/* 802631C0 00260100  4B E9 E8 99 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802631C4 00260104  88 1F 02 B0 */	lbz r0, 0x2b0(r31)
/* 802631C8 00260108  7C 00 07 75 */	extsb. r0, r0
/* 802631CC 0026010C  40 82 00 24 */	bne .L_802631F0
/* 802631D0 00260110  C0 22 CA 4C */	lfs f1, lbl_8051ADAC@sda21(r2)
/* 802631D4 00260114  D0 3F 01 F8 */	stfs f1, 0x1f8(r31)
/* 802631D8 00260118  D0 3F 01 68 */	stfs f1, 0x168(r31)
/* 802631DC 0026011C  D0 3F 01 6C */	stfs f1, 0x16c(r31)
/* 802631E0 00260120  D0 3F 01 70 */	stfs f1, 0x170(r31)
/* 802631E4 00260124  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 802631E8 00260128  80 63 00 00 */	lwz r3, 0(r3)
/* 802631EC 0026012C  4B ED 4C 21 */	bl setScale__8CollPartFf
.L_802631F0:
/* 802631F0 00260130  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802631F4 00260134  7F E3 FB 78 */	mr r3, r31
/* 802631F8 00260138  60 00 00 01 */	ori r0, r0, 1
/* 802631FC 0026013C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80263200 00260140  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80263204 00260144  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 80263208 00260148  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026320C 0026014C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80263210 00260150  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 80263214 00260154  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80263218 00260158  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8026321C 0026015C  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 80263220 00260160  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80263224 00260164  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80263228 00260168  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 8026322C 0026016C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80263230 00260170  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80263234 00260174  64 00 00 40 */	oris r0, r0, 0x40
/* 80263238 00260178  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026323C 0026017C  4B E9 E7 CD */	bl setEmotionNone__Q24Game9EnemyBaseFv
/* 80263240 00260180  7F E3 FB 78 */	mr r3, r31
/* 80263244 00260184  48 00 0E 81 */	bl setupEffect__Q34Game4Rock3ObjFv
/* 80263248 00260188  C0 02 CA 50 */	lfs f0, lbl_8051ADB0@sda21(r2)
/* 8026324C 0026018C  38 00 00 00 */	li r0, 0
/* 80263250 00260190  7F E3 FB 78 */	mr r3, r31
/* 80263254 00260194  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 80263258 00260198  98 1F 02 C4 */	stb r0, 0x2c4(r31)
/* 8026325C 0026019C  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 80263260 002601A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80263264 002601A4  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80263268 002601A8  7D 89 03 A6 */	mtctr r12
/* 8026326C 002601AC  4E 80 04 21 */	bctrl 
/* 80263270 002601B0  2C 03 00 13 */	cmpwi r3, 0x13
/* 80263274 002601B4  40 82 00 C8 */	bne .L_8026333C
/* 80263278 002601B8  C0 22 CA 50 */	lfs f1, lbl_8051ADB0@sda21(r2)
/* 8026327C 002601BC  C0 1F 02 AC */	lfs f0, 0x2ac(r31)
/* 80263280 002601C0  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80263284 002601C4  41 82 00 44 */	beq .L_802632C8
/* 80263288 002601C8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8026328C 002601CC  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80263290 002601D0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80263294 002601D4  4B E6 63 0D */	bl rand
/* 80263298 002601D8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8026329C 002601DC  3C 00 43 30 */	lis r0, 0x4330
/* 802632A0 002601E0  90 61 00 0C */	stw r3, 0xc(r1)
/* 802632A4 002601E4  C8 62 CA 60 */	lfd f3, lbl_8051ADC0@sda21(r2)
/* 802632A8 002601E8  90 01 00 08 */	stw r0, 8(r1)
/* 802632AC 002601EC  C0 22 CA 54 */	lfs f1, lbl_8051ADB4@sda21(r2)
/* 802632B0 002601F0  C8 41 00 08 */	lfd f2, 8(r1)
/* 802632B4 002601F4  C0 02 CA 58 */	lfs f0, lbl_8051ADB8@sda21(r2)
/* 802632B8 002601F8  EC 42 18 28 */	fsubs f2, f2, f3
/* 802632BC 002601FC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802632C0 00260200  EC 01 00 24 */	fdivs f0, f1, f0
/* 802632C4 00260204  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
.L_802632C8:
/* 802632C8 00260208  88 1F 02 B0 */	lbz r0, 0x2b0(r31)
/* 802632CC 0026020C  7C 00 07 75 */	extsb. r0, r0
/* 802632D0 00260210  40 82 00 3C */	bne .L_8026330C
/* 802632D4 00260214  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802632D8 00260218  7F E4 FB 78 */	mr r4, r31
/* 802632DC 0026021C  38 A0 00 00 */	li r5, 0
/* 802632E0 00260220  38 C0 00 00 */	li r6, 0
/* 802632E4 00260224  81 83 00 00 */	lwz r12, 0(r3)
/* 802632E8 00260228  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802632EC 0026022C  7D 89 03 A6 */	mtctr r12
/* 802632F0 00260230  4E 80 04 21 */	bctrl 
/* 802632F4 00260234  7F E3 FB 78 */	mr r3, r31
/* 802632F8 00260238  81 9F 00 00 */	lwz r12, 0(r31)
/* 802632FC 0026023C  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 80263300 00260240  7D 89 03 A6 */	mtctr r12
/* 80263304 00260244  4E 80 04 21 */	bctrl 
/* 80263308 00260248  48 00 00 24 */	b .L_8026332C
.L_8026330C:
/* 8026330C 0026024C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80263310 00260250  7F E4 FB 78 */	mr r4, r31
/* 80263314 00260254  38 A0 00 02 */	li r5, 2
/* 80263318 00260258  38 C0 00 00 */	li r6, 0
/* 8026331C 0026025C  81 83 00 00 */	lwz r12, 0(r3)
/* 80263320 00260260  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80263324 00260264  7D 89 03 A6 */	mtctr r12
/* 80263328 00260268  4E 80 04 21 */	bctrl 
.L_8026332C:
/* 8026332C 0026026C  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 80263330 00260270  7F E4 FB 78 */	mr r4, r31
/* 80263334 00260274  4B FD E9 BD */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 80263338 00260278  48 00 00 40 */	b .L_80263378
.L_8026333C:
/* 8026333C 0026027C  7F E3 FB 78 */	mr r3, r31
/* 80263340 00260280  48 00 07 41 */	bl initMoveVelocity__Q34Game4Rock3ObjFv
/* 80263344 00260284  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80263348 00260288  7F E4 FB 78 */	mr r4, r31
/* 8026334C 0026028C  38 A0 00 04 */	li r5, 4
/* 80263350 00260290  38 C0 00 00 */	li r6, 0
/* 80263354 00260294  81 83 00 00 */	lwz r12, 0(r3)
/* 80263358 00260298  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8026335C 0026029C  7D 89 03 A6 */	mtctr r12
/* 80263360 002602A0  4E 80 04 21 */	bctrl 
/* 80263364 002602A4  7F E3 FB 78 */	mr r3, r31
/* 80263368 002602A8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026336C 002602AC  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 80263370 002602B0  7D 89 03 A6 */	mtctr r12
/* 80263374 002602B4  4E 80 04 21 */	bctrl 
.L_80263378:
/* 80263378 002602B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026337C 002602BC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80263380 002602C0  7C 08 03 A6 */	mtlr r0
/* 80263384 002602C4  38 21 00 20 */	addi r1, r1, 0x20
/* 80263388 002602C8  4E 80 00 20 */	blr 
.endfn onInit__Q34Game4Rock3ObjFPQ24Game15CreatureInitArg

.fn getEnemyTypeID__Q34Game4Rock3ObjFv, weak
/* 8026338C 002602CC  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 80263390 002602D0  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game4Rock3ObjFv

.fn onKill__Q34Game4Rock3ObjFPQ24Game15CreatureKillArg, global
/* 80263394 002602D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80263398 002602D8  7C 08 02 A6 */	mflr r0
/* 8026339C 002602DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802633A0 002602E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802633A4 002602E4  7C 9F 23 78 */	mr r31, r4
/* 802633A8 002602E8  93 C1 00 08 */	stw r30, 8(r1)
/* 802633AC 002602EC  7C 7E 1B 78 */	mr r30, r3
/* 802633B0 002602F0  48 00 0D 61 */	bl finishFallEffect__Q34Game4Rock3ObjFv
/* 802633B4 002602F4  7F C3 F3 78 */	mr r3, r30
/* 802633B8 002602F8  48 00 0D BD */	bl finishRollingGroundEffect__Q34Game4Rock3ObjFv
/* 802633BC 002602FC  7F C3 F3 78 */	mr r3, r30
/* 802633C0 00260300  48 00 0E DD */	bl finishRollingWaterEffect__Q34Game4Rock3ObjFv
/* 802633C4 00260304  7F C3 F3 78 */	mr r3, r30
/* 802633C8 00260308  7F E4 FB 78 */	mr r4, r31
/* 802633CC 0026030C  4B E9 EB 1D */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 802633D0 00260310  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802633D4 00260314  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802633D8 00260318  83 C1 00 08 */	lwz r30, 8(r1)
/* 802633DC 0026031C  7C 08 03 A6 */	mtlr r0
/* 802633E0 00260320  38 21 00 10 */	addi r1, r1, 0x10
/* 802633E4 00260324  4E 80 00 20 */	blr 
.endfn onKill__Q34Game4Rock3ObjFPQ24Game15CreatureKillArg

.fn doUpdate__Q34Game4Rock3ObjFv, global
/* 802633E8 00260328  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802633EC 0026032C  7C 08 02 A6 */	mflr r0
/* 802633F0 00260330  7C 64 1B 78 */	mr r4, r3
/* 802633F4 00260334  90 01 00 14 */	stw r0, 0x14(r1)
/* 802633F8 00260338  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802633FC 0026033C  81 83 00 00 */	lwz r12, 0(r3)
/* 80263400 00260340  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80263404 00260344  7D 89 03 A6 */	mtctr r12
/* 80263408 00260348  4E 80 04 21 */	bctrl 
/* 8026340C 0026034C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80263410 00260350  7C 08 03 A6 */	mtlr r0
/* 80263414 00260354  38 21 00 10 */	addi r1, r1, 0x10
/* 80263418 00260358  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game4Rock3ObjFv

.fn setFSM__Q34Game4Rock3ObjFPQ34Game4Rock3FSM, global
/* 8026341C 0026035C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80263420 00260360  7C 08 02 A6 */	mflr r0
/* 80263424 00260364  90 01 00 14 */	stw r0, 0x14(r1)
/* 80263428 00260368  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026342C 0026036C  7C 7F 1B 78 */	mr r31, r3
/* 80263430 00260370  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 80263434 00260374  7F E4 FB 78 */	mr r4, r31
/* 80263438 00260378  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8026343C 0026037C  81 83 00 00 */	lwz r12, 0(r3)
/* 80263440 00260380  81 8C 00 08 */	lwz r12, 8(r12)
/* 80263444 00260384  7D 89 03 A6 */	mtctr r12
/* 80263448 00260388  4E 80 04 21 */	bctrl 
/* 8026344C 0026038C  38 00 00 00 */	li r0, 0
/* 80263450 00260390  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80263454 00260394  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80263458 00260398  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026345C 0026039C  7C 08 03 A6 */	mtlr r0
/* 80263460 002603A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80263464 002603A4  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game4Rock3ObjFPQ34Game4Rock3FSM

.fn doDirectDraw__Q34Game4Rock3ObjFR8Graphics, global
/* 80263468 002603A8  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game4Rock3ObjFR8Graphics

.fn doDebugDraw__Q34Game4Rock3ObjFR8Graphics, global
/* 8026346C 002603AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80263470 002603B0  7C 08 02 A6 */	mflr r0
/* 80263474 002603B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80263478 002603B8  4B EA 29 F5 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 8026347C 002603BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80263480 002603C0  7C 08 03 A6 */	mtlr r0
/* 80263484 002603C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80263488 002603C8  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game4Rock3ObjFR8Graphics

.fn getShadowParam__Q34Game4Rock3ObjFRQ24Game11ShadowParam, global
/* 8026348C 002603CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80263490 002603D0  7C 08 02 A6 */	mflr r0
/* 80263494 002603D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80263498 002603D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026349C 002603DC  7C 9F 23 78 */	mr r31, r4
/* 802634A0 002603E0  93 C1 00 08 */	stw r30, 8(r1)
/* 802634A4 002603E4  7C 7E 1B 78 */	mr r30, r3
/* 802634A8 002603E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802634AC 002603EC  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802634B0 002603F0  7D 89 03 A6 */	mtctr r12
/* 802634B4 002603F4  4E 80 04 21 */	bctrl 
/* 802634B8 002603F8  2C 03 00 13 */	cmpwi r3, 0x13
/* 802634BC 002603FC  40 82 00 38 */	bne .L_802634F4
/* 802634C0 00260400  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 802634C4 00260404  C0 42 CA 68 */	lfs f2, lbl_8051ADC8@sda21(r2)
/* 802634C8 00260408  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802634CC 0026040C  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 802634D0 00260410  D0 1F 00 04 */	stfs f0, 4(r31)
/* 802634D4 00260414  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 802634D8 00260418  D0 1F 00 08 */	stfs f0, 8(r31)
/* 802634DC 0026041C  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 802634E0 00260420  C0 1E 01 9C */	lfs f0, 0x19c(r30)
/* 802634E4 00260424  EC 01 00 28 */	fsubs f0, f1, f0
/* 802634E8 00260428  EC 02 00 2A */	fadds f0, f2, f0
/* 802634EC 0026042C  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 802634F0 00260430  48 00 00 44 */	b .L_80263534
.L_802634F4:
/* 802634F4 00260434  C0 42 CA 6C */	lfs f2, lbl_8051ADCC@sda21(r2)
/* 802634F8 00260438  C0 3E 01 90 */	lfs f1, 0x190(r30)
/* 802634FC 0026043C  C0 7E 01 94 */	lfs f3, 0x194(r30)
/* 80263500 00260440  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 80263504 00260444  EC 22 08 2A */	fadds f1, f2, f1
/* 80263508 00260448  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8026350C 0026044C  D0 3F 00 04 */	stfs f1, 4(r31)
/* 80263510 00260450  D0 7F 00 08 */	stfs f3, 8(r31)
/* 80263514 00260454  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 80263518 00260458  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8026351C 0026045C  41 82 00 10 */	beq .L_8026352C
/* 80263520 00260460  C0 02 CA 68 */	lfs f0, lbl_8051ADC8@sda21(r2)
/* 80263524 00260464  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80263528 00260468  48 00 00 0C */	b .L_80263534
.L_8026352C:
/* 8026352C 0026046C  C0 02 CA 70 */	lfs f0, lbl_8051ADD0@sda21(r2)
/* 80263530 00260470  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_80263534:
/* 80263534 00260474  C0 42 CA 50 */	lfs f2, lbl_8051ADB0@sda21(r2)
/* 80263538 00260478  C0 02 CA 74 */	lfs f0, lbl_8051ADD4@sda21(r2)
/* 8026353C 0026047C  D0 5F 00 0C */	stfs f2, 0xc(r31)
/* 80263540 00260480  C0 22 CA 78 */	lfs f1, lbl_8051ADD8@sda21(r2)
/* 80263544 00260484  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80263548 00260488  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 8026354C 0026048C  C0 1E 01 F8 */	lfs f0, 0x1f8(r30)
/* 80263550 00260490  EC 01 00 32 */	fmuls f0, f1, f0
/* 80263554 00260494  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80263558 00260498  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026355C 0026049C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80263560 002604A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80263564 002604A4  7C 08 03 A6 */	mtlr r0
/* 80263568 002604A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8026356C 002604AC  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game4Rock3ObjFRQ24Game11ShadowParam

.fn needShadow__Q34Game4Rock3ObjFv, global
/* 80263570 002604B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80263574 002604B4  7C 08 02 A6 */	mflr r0
/* 80263578 002604B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026357C 002604BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80263580 002604C0  7C 7F 1B 78 */	mr r31, r3
/* 80263584 002604C4  4B EA 3E 8D */	bl needShadow__Q24Game9EnemyBaseFv
/* 80263588 002604C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026358C 002604CC  41 82 00 0C */	beq .L_80263598
/* 80263590 002604D0  38 60 00 01 */	li r3, 1
/* 80263594 002604D4  48 00 00 28 */	b .L_802635BC
.L_80263598:
/* 80263598 002604D8  7F E3 FB 78 */	mr r3, r31
/* 8026359C 002604DC  4B EA 3E 59 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802635A0 002604E0  2C 03 00 01 */	cmpwi r3, 1
/* 802635A4 002604E4  41 82 00 0C */	beq .L_802635B0
/* 802635A8 002604E8  2C 03 00 03 */	cmpwi r3, 3
/* 802635AC 002604EC  40 82 00 0C */	bne .L_802635B8
.L_802635B0:
/* 802635B0 002604F0  38 60 00 01 */	li r3, 1
/* 802635B4 002604F4  48 00 00 08 */	b .L_802635BC
.L_802635B8:
/* 802635B8 002604F8  38 60 00 00 */	li r3, 0
.L_802635BC:
/* 802635BC 002604FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802635C0 00260500  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802635C4 00260504  7C 08 03 A6 */	mtlr r0
/* 802635C8 00260508  38 21 00 10 */	addi r1, r1, 0x10
/* 802635CC 0026050C  4E 80 00 20 */	blr 
.endfn needShadow__Q34Game4Rock3ObjFv

.fn hipdropCallBack__Q34Game4Rock3ObjFPQ24Game8CreaturefP8CollPart, global
/* 802635D0 00260510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802635D4 00260514  7C 08 02 A6 */	mflr r0
/* 802635D8 00260518  90 01 00 14 */	stw r0, 0x14(r1)
/* 802635DC 0026051C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802635E0 00260520  7C 7F 1B 78 */	mr r31, r3
/* 802635E4 00260524  81 83 00 00 */	lwz r12, 0(r3)
/* 802635E8 00260528  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802635EC 0026052C  7D 89 03 A6 */	mtctr r12
/* 802635F0 00260530  4E 80 04 21 */	bctrl 
/* 802635F4 00260534  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802635F8 00260538  41 82 00 48 */	beq .L_80263640
/* 802635FC 0026053C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80263600 00260540  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80263604 00260544  40 82 00 3C */	bne .L_80263640
/* 80263608 00260548  7F E3 FB 78 */	mr r3, r31
/* 8026360C 0026054C  4B EA 3D E9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80263610 00260550  2C 03 00 04 */	cmpwi r3, 4
/* 80263614 00260554  40 82 00 2C */	bne .L_80263640
/* 80263618 00260558  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8026361C 0026055C  7F E4 FB 78 */	mr r4, r31
/* 80263620 00260560  38 A0 00 05 */	li r5, 5
/* 80263624 00260564  38 C0 00 00 */	li r6, 0
/* 80263628 00260568  81 83 00 00 */	lwz r12, 0(r3)
/* 8026362C 0026056C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80263630 00260570  7D 89 03 A6 */	mtctr r12
/* 80263634 00260574  4E 80 04 21 */	bctrl 
/* 80263638 00260578  38 60 00 01 */	li r3, 1
/* 8026363C 0026057C  48 00 00 08 */	b .L_80263644
.L_80263640:
/* 80263640 00260580  38 60 00 00 */	li r3, 0
.L_80263644:
/* 80263644 00260584  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80263648 00260588  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026364C 0026058C  7C 08 03 A6 */	mtlr r0
/* 80263650 00260590  38 21 00 10 */	addi r1, r1, 0x10
/* 80263654 00260594  4E 80 00 20 */	blr 
.endfn hipdropCallBack__Q34Game4Rock3ObjFPQ24Game8CreaturefP8CollPart

.fn collisionCallback__Q34Game4Rock3ObjFRQ24Game9CollEvent, global
/* 80263658 00260598  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8026365C 0026059C  7C 08 02 A6 */	mflr r0
/* 80263660 002605A0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80263664 002605A4  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 80263668 002605A8  7C 9D 23 78 */	mr r29, r4
/* 8026366C 002605AC  7C 7C 1B 78 */	mr r28, r3
/* 80263670 002605B0  83 64 00 00 */	lwz r27, 0(r4)
/* 80263674 002605B4  28 1B 00 00 */	cmplwi r27, 0
/* 80263678 002605B8  41 82 01 70 */	beq .L_802637E8
/* 8026367C 002605BC  7F 63 DB 78 */	mr r3, r27
/* 80263680 002605C0  3B E0 00 01 */	li r31, 1
/* 80263684 002605C4  81 9B 00 00 */	lwz r12, 0(r27)
/* 80263688 002605C8  3B C0 00 01 */	li r30, 1
/* 8026368C 002605CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80263690 002605D0  7D 89 03 A6 */	mtctr r12
/* 80263694 002605D4  4E 80 04 21 */	bctrl 
/* 80263698 002605D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026369C 002605DC  40 82 00 20 */	bne .L_802636BC
/* 802636A0 002605E0  7F 63 DB 78 */	mr r3, r27
/* 802636A4 002605E4  81 9B 00 00 */	lwz r12, 0(r27)
/* 802636A8 002605E8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802636AC 002605EC  7D 89 03 A6 */	mtctr r12
/* 802636B0 002605F0  4E 80 04 21 */	bctrl 
/* 802636B4 002605F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802636B8 002605F8  41 82 00 74 */	beq .L_8026372C
.L_802636BC:
/* 802636BC 002605FC  80 1B 00 C8 */	lwz r0, 0xc8(r27)
/* 802636C0 00260600  3B E0 00 00 */	li r31, 0
/* 802636C4 00260604  28 00 00 00 */	cmplwi r0, 0
/* 802636C8 00260608  41 82 00 F0 */	beq .L_802637B8
/* 802636CC 0026060C  80 1C 02 C0 */	lwz r0, 0x2c0(r28)
/* 802636D0 00260610  7F 86 E3 78 */	mr r6, r28
/* 802636D4 00260614  28 00 00 00 */	cmplwi r0, 0
/* 802636D8 00260618  41 82 00 08 */	beq .L_802636E0
/* 802636DC 0026061C  7C 06 03 78 */	mr r6, r0
.L_802636E0:
/* 802636E0 00260620  80 BC 00 C0 */	lwz r5, 0xc0(r28)
/* 802636E4 00260624  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 802636E8 00260628  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractPress@ha
/* 802636EC 0026062C  38 00 00 00 */	li r0, 0
/* 802636F0 00260630  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 802636F4 00260634  38 A4 A3 00 */	addi r5, r4, __vt__Q24Game11Interaction@l
/* 802636F8 00260638  38 63 B3 20 */	addi r3, r3, __vt__Q24Game13InteractPress@l
/* 802636FC 0026063C  38 81 00 18 */	addi r4, r1, 0x18
/* 80263700 00260640  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80263704 00260644  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80263708 00260648  90 61 00 18 */	stw r3, 0x18(r1)
/* 8026370C 0026064C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80263710 00260650  90 01 00 24 */	stw r0, 0x24(r1)
/* 80263714 00260654  80 7D 00 00 */	lwz r3, 0(r29)
/* 80263718 00260658  81 83 00 00 */	lwz r12, 0(r3)
/* 8026371C 0026065C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80263720 00260660  7D 89 03 A6 */	mtctr r12
/* 80263724 00260664  4E 80 04 21 */	bctrl 
/* 80263728 00260668  48 00 00 90 */	b .L_802637B8
.L_8026372C:
/* 8026372C 0026066C  7F 63 DB 78 */	mr r3, r27
/* 80263730 00260670  81 9B 00 00 */	lwz r12, 0(r27)
/* 80263734 00260674  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80263738 00260678  7D 89 03 A6 */	mtctr r12
/* 8026373C 0026067C  4E 80 04 21 */	bctrl 
/* 80263740 00260680  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80263744 00260684  41 82 00 74 */	beq .L_802637B8
/* 80263748 00260688  80 BD 00 04 */	lwz r5, 4(r29)
/* 8026374C 0026068C  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 80263750 00260690  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 80263754 00260694  C0 02 CA 7C */	lfs f0, lbl_8051ADDC@sda21(r2)
/* 80263758 00260698  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAttack@ha
/* 8026375C 0026069C  90 01 00 08 */	stw r0, 8(r1)
/* 80263760 002606A0  38 03 4D E0 */	addi r0, r3, __vt__Q24Game14InteractAttack@l
/* 80263764 002606A4  7F 63 DB 78 */	mr r3, r27
/* 80263768 002606A8  93 81 00 0C */	stw r28, 0xc(r1)
/* 8026376C 002606AC  38 81 00 08 */	addi r4, r1, 8
/* 80263770 002606B0  90 01 00 08 */	stw r0, 8(r1)
/* 80263774 002606B4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80263778 002606B8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8026377C 002606BC  81 9B 00 00 */	lwz r12, 0(r27)
/* 80263780 002606C0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80263784 002606C4  7D 89 03 A6 */	mtctr r12
/* 80263788 002606C8  4E 80 04 21 */	bctrl 
/* 8026378C 002606CC  80 1C 02 E4 */	lwz r0, 0x2e4(r28)
/* 80263790 002606D0  2C 00 00 13 */	cmpwi r0, 0x13
/* 80263794 002606D4  40 82 00 24 */	bne .L_802637B8
/* 80263798 002606D8  7F 63 DB 78 */	mr r3, r27
/* 8026379C 002606DC  81 9B 00 00 */	lwz r12, 0(r27)
/* 802637A0 002606E0  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802637A4 002606E4  7D 89 03 A6 */	mtctr r12
/* 802637A8 002606E8  4E 80 04 21 */	bctrl 
/* 802637AC 002606EC  2C 03 00 13 */	cmpwi r3, 0x13
/* 802637B0 002606F0  40 82 00 08 */	bne .L_802637B8
/* 802637B4 002606F4  3B C0 00 00 */	li r30, 0
.L_802637B8:
/* 802637B8 002606F8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802637BC 002606FC  41 82 00 0C */	beq .L_802637C8
/* 802637C0 00260700  C0 02 CA 50 */	lfs f0, lbl_8051ADB0@sda21(r2)
/* 802637C4 00260704  D0 1C 02 00 */	stfs f0, 0x200(r28)
.L_802637C8:
/* 802637C8 00260708  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 802637CC 0026070C  41 82 00 1C */	beq .L_802637E8
/* 802637D0 00260710  7F 83 E3 78 */	mr r3, r28
/* 802637D4 00260714  7F A4 EB 78 */	mr r4, r29
/* 802637D8 00260718  81 9C 00 00 */	lwz r12, 0(r28)
/* 802637DC 0026071C  81 8C 02 40 */	lwz r12, 0x240(r12)
/* 802637E0 00260720  7D 89 03 A6 */	mtctr r12
/* 802637E4 00260724  4E 80 04 21 */	bctrl 
.L_802637E8:
/* 802637E8 00260728  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 802637EC 0026072C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802637F0 00260730  7C 08 03 A6 */	mtlr r0
/* 802637F4 00260734  38 21 00 40 */	addi r1, r1, 0x40
/* 802637F8 00260738  4E 80 00 20 */	blr 
.endfn collisionCallback__Q34Game4Rock3ObjFRQ24Game9CollEvent

.fn wallCallback__Q34Game4Rock3ObjFRCQ24Game8MoveInfo, global
/* 802637FC 0026073C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80263800 00260740  7C 08 02 A6 */	mflr r0
/* 80263804 00260744  90 01 00 14 */	stw r0, 0x14(r1)
/* 80263808 00260748  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026380C 0026074C  7C 7F 1B 78 */	mr r31, r3
/* 80263810 00260750  4B EA 3B E5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80263814 00260754  2C 03 00 04 */	cmpwi r3, 4
/* 80263818 00260758  40 82 00 24 */	bne .L_8026383C
/* 8026381C 0026075C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80263820 00260760  7F E4 FB 78 */	mr r4, r31
/* 80263824 00260764  38 A0 00 05 */	li r5, 5
/* 80263828 00260768  38 C0 00 00 */	li r6, 0
/* 8026382C 0026076C  81 83 00 00 */	lwz r12, 0(r3)
/* 80263830 00260770  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80263834 00260774  7D 89 03 A6 */	mtctr r12
/* 80263838 00260778  4E 80 04 21 */	bctrl 
.L_8026383C:
/* 8026383C 0026077C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80263840 00260780  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80263844 00260784  7C 08 03 A6 */	mtlr r0
/* 80263848 00260788  38 21 00 10 */	addi r1, r1, 0x10
/* 8026384C 0026078C  4E 80 00 20 */	blr 
.endfn wallCallback__Q34Game4Rock3ObjFRCQ24Game8MoveInfo

.fn inWaterCallback__Q34Game4Rock3ObjFPQ24Game8WaterBox, global
/* 80263850 00260790  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80263854 00260794  7C 08 02 A6 */	mflr r0
/* 80263858 00260798  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026385C 0026079C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80263860 002607A0  7C 7F 1B 78 */	mr r31, r3
/* 80263864 002607A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80263868 002607A8  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8026386C 002607AC  7D 89 03 A6 */	mtctr r12
/* 80263870 002607B0  4E 80 04 21 */	bctrl 
/* 80263874 002607B4  2C 03 00 4A */	cmpwi r3, 0x4a
/* 80263878 002607B8  40 82 00 30 */	bne .L_802638A8
/* 8026387C 002607BC  7F E3 FB 78 */	mr r3, r31
/* 80263880 002607C0  4B EA 3B 75 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80263884 002607C4  2C 03 00 04 */	cmpwi r3, 4
/* 80263888 002607C8  40 82 00 20 */	bne .L_802638A8
/* 8026388C 002607CC  7F E3 FB 78 */	mr r3, r31
/* 80263890 002607D0  48 00 08 E5 */	bl finishRollingGroundEffect__Q34Game4Rock3ObjFv
/* 80263894 002607D4  7F E3 FB 78 */	mr r3, r31
/* 80263898 002607D8  48 00 09 0D */	bl startRollingWaterEffect__Q34Game4Rock3ObjFv
/* 8026389C 002607DC  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 802638A0 002607E0  7F E3 FB 78 */	mr r3, r31
/* 802638A4 002607E4  48 20 AF 9D */	bl PSStartEnemyDownWatSE__FPQ24Game9EnemyBasef
.L_802638A8:
/* 802638A8 002607E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802638AC 002607EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802638B0 002607F0  7C 08 03 A6 */	mtlr r0
/* 802638B4 002607F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802638B8 002607F8  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q34Game4Rock3ObjFPQ24Game8WaterBox

.fn outWaterCallback__Q34Game4Rock3ObjFv, global
/* 802638BC 002607FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802638C0 00260800  7C 08 02 A6 */	mflr r0
/* 802638C4 00260804  90 01 00 14 */	stw r0, 0x14(r1)
/* 802638C8 00260808  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802638CC 0026080C  7C 7F 1B 78 */	mr r31, r3
/* 802638D0 00260810  81 83 00 00 */	lwz r12, 0(r3)
/* 802638D4 00260814  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802638D8 00260818  7D 89 03 A6 */	mtctr r12
/* 802638DC 0026081C  4E 80 04 21 */	bctrl 
/* 802638E0 00260820  2C 03 00 4A */	cmpwi r3, 0x4a
/* 802638E4 00260824  40 82 00 24 */	bne .L_80263908
/* 802638E8 00260828  7F E3 FB 78 */	mr r3, r31
/* 802638EC 0026082C  4B EA 3B 09 */	bl getStateID__Q24Game9EnemyBaseFv
/* 802638F0 00260830  2C 03 00 04 */	cmpwi r3, 4
/* 802638F4 00260834  40 82 00 14 */	bne .L_80263908
/* 802638F8 00260838  7F E3 FB 78 */	mr r3, r31
/* 802638FC 0026083C  48 00 09 A1 */	bl finishRollingWaterEffect__Q34Game4Rock3ObjFv
/* 80263900 00260840  7F E3 FB 78 */	mr r3, r31
/* 80263904 00260844  48 00 08 3D */	bl startRollingGroundEffect__Q34Game4Rock3ObjFv
.L_80263908:
/* 80263908 00260848  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026390C 0026084C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80263910 00260850  7C 08 03 A6 */	mtlr r0
/* 80263914 00260854  38 21 00 10 */	addi r1, r1, 0x10
/* 80263918 00260858  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q34Game4Rock3ObjFv

.fn doStartMovie__Q34Game4Rock3ObjFv, global
/* 8026391C 0026085C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80263920 00260860  7C 08 02 A6 */	mflr r0
/* 80263924 00260864  90 01 00 14 */	stw r0, 0x14(r1)
/* 80263928 00260868  48 00 0B 89 */	bl effectDrawOff__Q34Game4Rock3ObjFv
/* 8026392C 0026086C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80263930 00260870  7C 08 03 A6 */	mtlr r0
/* 80263934 00260874  38 21 00 10 */	addi r1, r1, 0x10
/* 80263938 00260878  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game4Rock3ObjFv

.fn doEndMovie__Q34Game4Rock3ObjFv, global
/* 8026393C 0026087C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80263940 00260880  7C 08 02 A6 */	mflr r0
/* 80263944 00260884  90 01 00 14 */	stw r0, 0x14(r1)
/* 80263948 00260888  48 00 0B 05 */	bl effectDrawOn__Q34Game4Rock3ObjFv
/* 8026394C 0026088C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80263950 00260890  7C 08 03 A6 */	mtlr r0
/* 80263954 00260894  38 21 00 10 */	addi r1, r1, 0x10
/* 80263958 00260898  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game4Rock3ObjFv

.fn ignoreAtari__Q34Game4Rock3ObjFPQ24Game8Creature, global
/* 8026395C 0026089C  80 03 02 C0 */	lwz r0, 0x2c0(r3)
/* 80263960 002608A0  7C 04 00 40 */	cmplw r4, r0
/* 80263964 002608A4  40 82 00 1C */	bne .L_80263980
/* 80263968 002608A8  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 8026396C 002608AC  C0 02 CA 74 */	lfs f0, lbl_8051ADD4@sda21(r2)
/* 80263970 002608B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80263974 002608B4  40 80 00 0C */	bge .L_80263980
/* 80263978 002608B8  38 60 00 01 */	li r3, 1
/* 8026397C 002608BC  4E 80 00 20 */	blr 
.L_80263980:
/* 80263980 002608C0  38 60 00 00 */	li r3, 0
/* 80263984 002608C4  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q34Game4Rock3ObjFPQ24Game8Creature

.fn fallRockScaleUp__Q34Game4Rock3ObjFv, global
/* 80263988 002608C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026398C 002608CC  7C 08 02 A6 */	mflr r0
/* 80263990 002608D0  C0 42 CA 74 */	lfs f2, lbl_8051ADD4@sda21(r2)
/* 80263994 002608D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80263998 002608D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026399C 002608DC  3B E0 00 00 */	li r31, 0
/* 802639A0 002608E0  C0 63 01 F8 */	lfs f3, 0x1f8(r3)
/* 802639A4 002608E4  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 802639A8 002608E8  40 80 00 44 */	bge .L_802639EC
/* 802639AC 002608EC  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802639B0 002608F0  C0 23 02 D4 */	lfs f1, 0x2d4(r3)
/* 802639B4 002608F4  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 802639B8 002608F8  EC 21 18 3A */	fmadds f1, f1, f0, f3
/* 802639BC 002608FC  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 802639C0 00260900  4C 41 13 82 */	cror 2, 1, 2
/* 802639C4 00260904  40 82 00 0C */	bne .L_802639D0
/* 802639C8 00260908  3B E0 00 01 */	li r31, 1
/* 802639CC 0026090C  FC 20 10 90 */	fmr f1, f2
.L_802639D0:
/* 802639D0 00260910  D0 23 01 F8 */	stfs f1, 0x1f8(r3)
/* 802639D4 00260914  D0 23 01 68 */	stfs f1, 0x168(r3)
/* 802639D8 00260918  D0 23 01 6C */	stfs f1, 0x16c(r3)
/* 802639DC 0026091C  D0 23 01 70 */	stfs f1, 0x170(r3)
/* 802639E0 00260920  80 63 01 14 */	lwz r3, 0x114(r3)
/* 802639E4 00260924  80 63 00 00 */	lwz r3, 0(r3)
/* 802639E8 00260928  4B ED 44 25 */	bl setScale__8CollPartFf
.L_802639EC:
/* 802639EC 0026092C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802639F0 00260930  7F E3 FB 78 */	mr r3, r31
/* 802639F4 00260934  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802639F8 00260938  7C 08 03 A6 */	mtlr r0
/* 802639FC 0026093C  38 21 00 10 */	addi r1, r1, 0x10
/* 80263A00 00260940  4E 80 00 20 */	blr 
.endfn fallRockScaleUp__Q34Game4Rock3ObjFv

.fn moveRockScaleUp__Q34Game4Rock3ObjFv, global
/* 80263A04 00260944  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80263A08 00260948  7C 08 02 A6 */	mflr r0
/* 80263A0C 0026094C  C0 42 CA 74 */	lfs f2, lbl_8051ADD4@sda21(r2)
/* 80263A10 00260950  90 01 00 14 */	stw r0, 0x14(r1)
/* 80263A14 00260954  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80263A18 00260958  3B E0 00 00 */	li r31, 0
/* 80263A1C 0026095C  C0 63 01 F8 */	lfs f3, 0x1f8(r3)
/* 80263A20 00260960  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 80263A24 00260964  40 80 00 44 */	bge .L_80263A68
/* 80263A28 00260968  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80263A2C 0026096C  C0 22 CA 6C */	lfs f1, lbl_8051ADCC@sda21(r2)
/* 80263A30 00260970  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 80263A34 00260974  EC 21 18 3A */	fmadds f1, f1, f0, f3
/* 80263A38 00260978  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80263A3C 0026097C  4C 41 13 82 */	cror 2, 1, 2
/* 80263A40 00260980  40 82 00 0C */	bne .L_80263A4C
/* 80263A44 00260984  3B E0 00 01 */	li r31, 1
/* 80263A48 00260988  FC 20 10 90 */	fmr f1, f2
.L_80263A4C:
/* 80263A4C 0026098C  D0 23 01 F8 */	stfs f1, 0x1f8(r3)
/* 80263A50 00260990  D0 23 01 68 */	stfs f1, 0x168(r3)
/* 80263A54 00260994  D0 23 01 6C */	stfs f1, 0x16c(r3)
/* 80263A58 00260998  D0 23 01 70 */	stfs f1, 0x170(r3)
/* 80263A5C 0026099C  80 63 01 14 */	lwz r3, 0x114(r3)
/* 80263A60 002609A0  80 63 00 00 */	lwz r3, 0(r3)
/* 80263A64 002609A4  4B ED 43 A9 */	bl setScale__8CollPartFf
.L_80263A68:
/* 80263A68 002609A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80263A6C 002609AC  7F E3 FB 78 */	mr r3, r31
/* 80263A70 002609B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80263A74 002609B4  7C 08 03 A6 */	mtlr r0
/* 80263A78 002609B8  38 21 00 10 */	addi r1, r1, 0x10
/* 80263A7C 002609BC  4E 80 00 20 */	blr 
.endfn moveRockScaleUp__Q34Game4Rock3ObjFv

.fn initMoveVelocity__Q34Game4Rock3ObjFv, global
/* 80263A80 002609C0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80263A84 002609C4  7C 08 02 A6 */	mflr r0
/* 80263A88 002609C8  C0 02 CA 50 */	lfs f0, lbl_8051ADB0@sda21(r2)
/* 80263A8C 002609CC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80263A90 002609D0  C0 63 01 FC */	lfs f3, 0x1fc(r3)
/* 80263A94 002609D4  FC 20 18 90 */	fmr f1, f3
/* 80263A98 002609D8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80263A9C 002609DC  40 80 00 08 */	bge .L_80263AA4
/* 80263AA0 002609E0  FC 20 18 50 */	fneg f1, f3
.L_80263AA4:
/* 80263AA4 002609E4  C0 42 CA 80 */	lfs f2, lbl_8051ADE0@sda21(r2)
/* 80263AA8 002609E8  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 80263AAC 002609EC  C0 02 CA 50 */	lfs f0, lbl_8051ADB0@sda21(r2)
/* 80263AB0 002609F0  38 A4 71 A0 */	addi r5, r4, sincosTable___5JMath@l
/* 80263AB4 002609F4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80263AB8 002609F8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80263ABC 002609FC  FC 00 08 1E */	fctiwz f0, f1
/* 80263AC0 00260A00  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80263AC4 00260A04  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80263AC8 00260A08  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80263ACC 00260A0C  7C 85 02 14 */	add r4, r5, r0
/* 80263AD0 00260A10  C0 84 00 04 */	lfs f4, 4(r4)
/* 80263AD4 00260A14  40 80 00 28 */	bge .L_80263AFC
/* 80263AD8 00260A18  C0 02 CA 84 */	lfs f0, lbl_8051ADE4@sda21(r2)
/* 80263ADC 00260A1C  EC 03 00 32 */	fmuls f0, f3, f0
/* 80263AE0 00260A20  FC 00 00 1E */	fctiwz f0, f0
/* 80263AE4 00260A24  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80263AE8 00260A28  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80263AEC 00260A2C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80263AF0 00260A30  7C 05 04 2E */	lfsx f0, r5, r0
/* 80263AF4 00260A34  FC 40 00 50 */	fneg f2, f0
/* 80263AF8 00260A38  48 00 00 1C */	b .L_80263B14
.L_80263AFC:
/* 80263AFC 00260A3C  EC 03 00 B2 */	fmuls f0, f3, f2
/* 80263B00 00260A40  FC 00 00 1E */	fctiwz f0, f0
/* 80263B04 00260A44  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80263B08 00260A48  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80263B0C 00260A4C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80263B10 00260A50  7C 45 04 2E */	lfsx f2, r5, r0
.L_80263B14:
/* 80263B14 00260A54  C0 22 CA 50 */	lfs f1, lbl_8051ADB0@sda21(r2)
/* 80263B18 00260A58  FC 00 10 18 */	frsp f0, f2
/* 80263B1C 00260A5C  D0 41 00 08 */	stfs f2, 8(r1)
/* 80263B20 00260A60  38 81 00 08 */	addi r4, r1, 8
/* 80263B24 00260A64  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80263B28 00260A68  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 80263B2C 00260A6C  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 80263B30 00260A70  C0 65 02 E4 */	lfs f3, 0x2e4(r5)
/* 80263B34 00260A74  EC 40 00 F2 */	fmuls f2, f0, f3
/* 80263B38 00260A78  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80263B3C 00260A7C  EC 04 00 F2 */	fmuls f0, f4, f3
/* 80263B40 00260A80  D0 41 00 08 */	stfs f2, 8(r1)
/* 80263B44 00260A84  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80263B48 00260A88  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80263B4C 00260A8C  D0 43 01 D4 */	stfs f2, 0x1d4(r3)
/* 80263B50 00260A90  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80263B54 00260A94  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 80263B58 00260A98  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80263B5C 00260A9C  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 80263B60 00260AA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80263B64 00260AA4  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80263B68 00260AA8  7D 89 03 A6 */	mtctr r12
/* 80263B6C 00260AAC  4E 80 04 21 */	bctrl 
/* 80263B70 00260AB0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80263B74 00260AB4  7C 08 03 A6 */	mtlr r0
/* 80263B78 00260AB8  38 21 00 30 */	addi r1, r1, 0x30
/* 80263B7C 00260ABC  4E 80 00 20 */	blr 
.endfn initMoveVelocity__Q34Game4Rock3ObjFv

.fn updateMoveVelocity__Q34Game4Rock3ObjFv, global
/* 80263B80 00260AC0  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80263B84 00260AC4  7C 08 02 A6 */	mflr r0
/* 80263B88 00260AC8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80263B8C 00260ACC  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80263B90 00260AD0  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80263B94 00260AD4  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80263B98 00260AD8  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 80263B9C 00260ADC  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 80263BA0 00260AE0  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 80263BA4 00260AE4  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 80263BA8 00260AE8  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 80263BAC 00260AEC  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80263BB0 00260AF0  7C 7F 1B 78 */	mr r31, r3
/* 80263BB4 00260AF4  88 03 02 C4 */	lbz r0, 0x2c4(r3)
/* 80263BB8 00260AF8  28 00 00 00 */	cmplwi r0, 0
/* 80263BBC 00260AFC  41 82 01 F8 */	beq .L_80263DB4
/* 80263BC0 00260B00  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80263BC4 00260B04  38 60 00 00 */	li r3, 0
/* 80263BC8 00260B08  28 04 00 00 */	cmplwi r4, 0
/* 80263BCC 00260B0C  41 82 00 30 */	beq .L_80263BFC
/* 80263BD0 00260B10  80 84 00 44 */	lwz r4, 0x44(r4)
/* 80263BD4 00260B14  38 00 00 00 */	li r0, 0
/* 80263BD8 00260B18  2C 04 00 01 */	cmpwi r4, 1
/* 80263BDC 00260B1C  41 82 00 0C */	beq .L_80263BE8
/* 80263BE0 00260B20  2C 04 00 03 */	cmpwi r4, 3
/* 80263BE4 00260B24  40 82 00 08 */	bne .L_80263BEC
.L_80263BE8:
/* 80263BE8 00260B28  38 00 00 01 */	li r0, 1
.L_80263BEC:
/* 80263BEC 00260B2C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80263BF0 00260B30  40 82 00 0C */	bne .L_80263BFC
/* 80263BF4 00260B34  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80263BF8 00260B38  4B EF 70 29 */	bl getActiveNavi__Q24Game7NaviMgrFv
.L_80263BFC:
/* 80263BFC 00260B3C  28 03 00 00 */	cmplwi r3, 0
/* 80263C00 00260B40  40 82 00 24 */	bne .L_80263C24
/* 80263C04 00260B44  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80263C08 00260B48  7F E3 FB 78 */	mr r3, r31
/* 80263C0C 00260B4C  C0 22 CA 88 */	lfs f1, lbl_8051ADE8@sda21(r2)
/* 80263C10 00260B50  38 80 00 00 */	li r4, 0
/* 80263C14 00260B54  C0 45 03 D4 */	lfs f2, 0x3d4(r5)
/* 80263C18 00260B58  38 A0 00 00 */	li r5, 0
/* 80263C1C 00260B5C  38 C0 00 00 */	li r6, 0
/* 80263C20 00260B60  4B EA F4 31 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
.L_80263C24:
/* 80263C24 00260B64  28 03 00 00 */	cmplwi r3, 0
/* 80263C28 00260B68  41 82 00 28 */	beq .L_80263C50
/* 80263C2C 00260B6C  7C 64 1B 78 */	mr r4, r3
/* 80263C30 00260B70  38 61 00 44 */	addi r3, r1, 0x44
/* 80263C34 00260B74  81 84 00 00 */	lwz r12, 0(r4)
/* 80263C38 00260B78  81 8C 00 08 */	lwz r12, 8(r12)
/* 80263C3C 00260B7C  7D 89 03 A6 */	mtctr r12
/* 80263C40 00260B80  4E 80 04 21 */	bctrl 
/* 80263C44 00260B84  C3 81 00 44 */	lfs f28, 0x44(r1)
/* 80263C48 00260B88  C3 A1 00 4C */	lfs f29, 0x4c(r1)
/* 80263C4C 00260B8C  48 00 00 1C */	b .L_80263C68
.L_80263C50:
/* 80263C50 00260B90  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 80263C54 00260B94  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 80263C58 00260B98  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 80263C5C 00260B9C  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 80263C60 00260BA0  EF 83 10 2A */	fadds f28, f3, f2
/* 80263C64 00260BA4  EF A1 00 2A */	fadds f29, f1, f0
.L_80263C68:
/* 80263C68 00260BA8  7F E4 FB 78 */	mr r4, r31
/* 80263C6C 00260BAC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80263C70 00260BB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80263C74 00260BB4  38 61 00 2C */	addi r3, r1, 0x2c
/* 80263C78 00260BB8  C3 C5 03 34 */	lfs f30, 0x334(r5)
/* 80263C7C 00260BBC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80263C80 00260BC0  C3 E5 03 0C */	lfs f31, 0x30c(r5)
/* 80263C84 00260BC4  7D 89 03 A6 */	mtctr r12
/* 80263C88 00260BC8  4E 80 04 21 */	bctrl 
/* 80263C8C 00260BCC  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 80263C90 00260BD0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80263C94 00260BD4  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80263C98 00260BD8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80263C9C 00260BDC  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 80263CA0 00260BE0  EC 3C 20 28 */	fsubs f1, f28, f4
/* 80263CA4 00260BE4  EC 5D 00 28 */	fsubs f2, f29, f0
/* 80263CA8 00260BE8  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 80263CAC 00260BEC  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 80263CB0 00260BF0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80263CB4 00260BF4  4B DD 14 55 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80263CB8 00260BF8  48 1A DF 19 */	bl roundAng__Ff
/* 80263CBC 00260BFC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80263CC0 00260C00  FF 80 08 90 */	fmr f28, f1
/* 80263CC4 00260C04  7F E3 FB 78 */	mr r3, r31
/* 80263CC8 00260C08  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80263CCC 00260C0C  7D 89 03 A6 */	mtctr r12
/* 80263CD0 00260C10  4E 80 04 21 */	bctrl 
/* 80263CD4 00260C14  FC 40 08 90 */	fmr f2, f1
/* 80263CD8 00260C18  FC 20 E0 90 */	fmr f1, f28
/* 80263CDC 00260C1C  48 1A DF 21 */	bl angDist__Fff
/* 80263CE0 00260C20  EF E1 07 F2 */	fmuls f31, f1, f31
/* 80263CE4 00260C24  C0 02 CA 90 */	lfs f0, lbl_8051ADF0@sda21(r2)
/* 80263CE8 00260C28  C0 22 CA 8C */	lfs f1, lbl_8051ADEC@sda21(r2)
/* 80263CEC 00260C2C  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80263CF0 00260C30  FC 40 FA 10 */	fabs f2, f31
/* 80263CF4 00260C34  EC 21 00 32 */	fmuls f1, f1, f0
/* 80263CF8 00260C38  FC 00 10 18 */	frsp f0, f2
/* 80263CFC 00260C3C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80263D00 00260C40  40 81 00 1C */	ble .L_80263D1C
/* 80263D04 00260C44  C0 02 CA 50 */	lfs f0, lbl_8051ADB0@sda21(r2)
/* 80263D08 00260C48  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80263D0C 00260C4C  40 81 00 0C */	ble .L_80263D18
/* 80263D10 00260C50  FF E0 08 90 */	fmr f31, f1
/* 80263D14 00260C54  48 00 00 08 */	b .L_80263D1C
.L_80263D18:
/* 80263D18 00260C58  FF E0 08 50 */	fneg f31, f1
.L_80263D1C:
/* 80263D1C 00260C5C  7F E3 FB 78 */	mr r3, r31
/* 80263D20 00260C60  81 9F 00 00 */	lwz r12, 0(r31)
/* 80263D24 00260C64  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80263D28 00260C68  7D 89 03 A6 */	mtctr r12
/* 80263D2C 00260C6C  4E 80 04 21 */	bctrl 
/* 80263D30 00260C70  EC 3F 08 2A */	fadds f1, f31, f1
/* 80263D34 00260C74  48 1A DE 9D */	bl roundAng__Ff
/* 80263D38 00260C78  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80263D3C 00260C7C  7F E3 FB 78 */	mr r3, r31
/* 80263D40 00260C80  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80263D44 00260C84  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80263D48 00260C88  81 9F 00 00 */	lwz r12, 0(r31)
/* 80263D4C 00260C8C  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80263D50 00260C90  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80263D54 00260C94  C3 C4 08 1C */	lfs f30, 0x81c(r4)
/* 80263D58 00260C98  7D 89 03 A6 */	mtctr r12
/* 80263D5C 00260C9C  4E 80 04 21 */	bctrl 
/* 80263D60 00260CA0  4B E6 BA BD */	bl sin
/* 80263D64 00260CA4  7F E3 FB 78 */	mr r3, r31
/* 80263D68 00260CA8  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 80263D6C 00260CAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80263D70 00260CB0  FF 80 08 18 */	frsp f28, f1
/* 80263D74 00260CB4  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 80263D78 00260CB8  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 80263D7C 00260CBC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80263D80 00260CC0  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80263D84 00260CC4  D3 E1 00 3C */	stfs f31, 0x3c(r1)
/* 80263D88 00260CC8  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80263D8C 00260CCC  7D 89 03 A6 */	mtctr r12
/* 80263D90 00260CD0  4E 80 04 21 */	bctrl 
/* 80263D94 00260CD4  4B E6 B5 21 */	bl cos
/* 80263D98 00260CD8  EC 1E 07 32 */	fmuls f0, f30, f28
/* 80263D9C 00260CDC  FC 20 08 18 */	frsp f1, f1
/* 80263DA0 00260CE0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80263DA4 00260CE4  EC 1E 00 72 */	fmuls f0, f30, f1
/* 80263DA8 00260CE8  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 80263DAC 00260CEC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80263DB0 00260CF0  48 00 01 3C */	b .L_80263EEC
.L_80263DB4:
/* 80263DB4 00260CF4  C0 42 CA 98 */	lfs f2, lbl_8051ADF8@sda21(r2)
/* 80263DB8 00260CF8  7F E4 FB 78 */	mr r4, r31
/* 80263DBC 00260CFC  C0 1F 01 D4 */	lfs f0, 0x1d4(r31)
/* 80263DC0 00260D00  38 61 00 14 */	addi r3, r1, 0x14
/* 80263DC4 00260D04  C0 62 CA 94 */	lfs f3, lbl_8051ADF4@sda21(r2)
/* 80263DC8 00260D08  EC 02 00 32 */	fmuls f0, f2, f0
/* 80263DCC 00260D0C  C0 3F 01 C8 */	lfs f1, 0x1c8(r31)
/* 80263DD0 00260D10  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 80263DD4 00260D14  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80263DD8 00260D18  C0 1F 01 D8 */	lfs f0, 0x1d8(r31)
/* 80263DDC 00260D1C  C0 3F 01 CC */	lfs f1, 0x1cc(r31)
/* 80263DE0 00260D20  EC 02 00 32 */	fmuls f0, f2, f0
/* 80263DE4 00260D24  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 80263DE8 00260D28  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80263DEC 00260D2C  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 80263DF0 00260D30  C0 3F 01 D0 */	lfs f1, 0x1d0(r31)
/* 80263DF4 00260D34  EC 02 00 32 */	fmuls f0, f2, f0
/* 80263DF8 00260D38  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 80263DFC 00260D3C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80263E00 00260D40  81 9F 00 00 */	lwz r12, 0(r31)
/* 80263E04 00260D44  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80263E08 00260D48  C0 7F 01 94 */	lfs f3, 0x194(r31)
/* 80263E0C 00260D4C  C0 5F 01 DC */	lfs f2, 0x1dc(r31)
/* 80263E10 00260D50  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 80263E14 00260D54  C0 1F 01 D4 */	lfs f0, 0x1d4(r31)
/* 80263E18 00260D58  EF 83 10 2A */	fadds f28, f3, f2
/* 80263E1C 00260D5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80263E20 00260D60  EF A1 00 2A */	fadds f29, f1, f0
/* 80263E24 00260D64  C3 E5 03 34 */	lfs f31, 0x334(r5)
/* 80263E28 00260D68  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 80263E2C 00260D6C  7D 89 03 A6 */	mtctr r12
/* 80263E30 00260D70  4E 80 04 21 */	bctrl 
/* 80263E34 00260D74  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 80263E38 00260D78  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80263E3C 00260D7C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80263E40 00260D80  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80263E44 00260D84  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 80263E48 00260D88  EC 3D 20 28 */	fsubs f1, f29, f4
/* 80263E4C 00260D8C  EC 5C 00 28 */	fsubs f2, f28, f0
/* 80263E50 00260D90  D0 81 00 08 */	stfs f4, 8(r1)
/* 80263E54 00260D94  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 80263E58 00260D98  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80263E5C 00260D9C  4B DD 12 AD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80263E60 00260DA0  48 1A DD 71 */	bl roundAng__Ff
/* 80263E64 00260DA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80263E68 00260DA8  FF 80 08 90 */	fmr f28, f1
/* 80263E6C 00260DAC  7F E3 FB 78 */	mr r3, r31
/* 80263E70 00260DB0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80263E74 00260DB4  7D 89 03 A6 */	mtctr r12
/* 80263E78 00260DB8  4E 80 04 21 */	bctrl 
/* 80263E7C 00260DBC  FC 40 08 90 */	fmr f2, f1
/* 80263E80 00260DC0  FC 20 E0 90 */	fmr f1, f28
/* 80263E84 00260DC4  48 1A DD 79 */	bl angDist__Fff
/* 80263E88 00260DC8  EF C1 07 B2 */	fmuls f30, f1, f30
/* 80263E8C 00260DCC  C0 02 CA 90 */	lfs f0, lbl_8051ADF0@sda21(r2)
/* 80263E90 00260DD0  C0 22 CA 8C */	lfs f1, lbl_8051ADEC@sda21(r2)
/* 80263E94 00260DD4  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80263E98 00260DD8  FC 40 F2 10 */	fabs f2, f30
/* 80263E9C 00260DDC  EC 21 00 32 */	fmuls f1, f1, f0
/* 80263EA0 00260DE0  FC 00 10 18 */	frsp f0, f2
/* 80263EA4 00260DE4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80263EA8 00260DE8  40 81 00 1C */	ble .L_80263EC4
/* 80263EAC 00260DEC  C0 02 CA 50 */	lfs f0, lbl_8051ADB0@sda21(r2)
/* 80263EB0 00260DF0  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80263EB4 00260DF4  40 81 00 0C */	ble .L_80263EC0
/* 80263EB8 00260DF8  FF C0 08 90 */	fmr f30, f1
/* 80263EBC 00260DFC  48 00 00 08 */	b .L_80263EC4
.L_80263EC0:
/* 80263EC0 00260E00  FF C0 08 50 */	fneg f30, f1
.L_80263EC4:
/* 80263EC4 00260E04  7F E3 FB 78 */	mr r3, r31
/* 80263EC8 00260E08  81 9F 00 00 */	lwz r12, 0(r31)
/* 80263ECC 00260E0C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80263ED0 00260E10  7D 89 03 A6 */	mtctr r12
/* 80263ED4 00260E14  4E 80 04 21 */	bctrl 
/* 80263ED8 00260E18  EC 3E 08 2A */	fadds f1, f30, f1
/* 80263EDC 00260E1C  48 1A DC F5 */	bl roundAng__Ff
/* 80263EE0 00260E20  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80263EE4 00260E24  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80263EE8 00260E28  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
.L_80263EEC:
/* 80263EEC 00260E2C  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80263EF0 00260E30  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80263EF4 00260E34  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 80263EF8 00260E38  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 80263EFC 00260E3C  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 80263F00 00260E40  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 80263F04 00260E44  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 80263F08 00260E48  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 80263F0C 00260E4C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80263F10 00260E50  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80263F14 00260E54  7C 08 03 A6 */	mtlr r0
/* 80263F18 00260E58  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80263F1C 00260E5C  4E 80 00 20 */	blr 
.endfn updateMoveVelocity__Q34Game4Rock3ObjFv

.fn createEffect__Q34Game4Rock3ObjFv, global
/* 80263F20 00260E60  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80263F24 00260E64  7C 08 02 A6 */	mflr r0
/* 80263F28 00260E68  90 01 00 24 */	stw r0, 0x24(r1)
/* 80263F2C 00260E6C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80263F30 00260E70  7C 7F 1B 78 */	mr r31, r3
/* 80263F34 00260E74  38 60 00 14 */	li r3, 0x14
/* 80263F38 00260E78  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80263F3C 00260E7C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80263F40 00260E80  4B DB FF 65 */	bl __nw__FUl
/* 80263F44 00260E84  28 03 00 00 */	cmplwi r3, 0
/* 80263F48 00260E88  41 82 00 78 */	beq .L_80263FC0
/* 80263F4C 00260E8C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80263F50 00260E90  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 80263F54 00260E94  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80263F58 00260E98  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80263F5C 00260E9C  90 03 00 00 */	stw r0, 0(r3)
/* 80263F60 00260EA0  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 80263F64 00260EA4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80263F68 00260EA8  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 80263F6C 00260EAC  90 03 00 04 */	stw r0, 4(r3)
/* 80263F70 00260EB0  38 E4 69 40 */	addi r7, r4, __vt__Q23efx9TChasePos@l
/* 80263F74 00260EB4  3C 80 80 4C */	lis r4, __vt__Q23efx8TRockRun@ha
/* 80263F78 00260EB8  38 05 00 14 */	addi r0, r5, 0x14
/* 80263F7C 00260EBC  90 A3 00 00 */	stw r5, 0(r3)
/* 80263F80 00260EC0  38 84 41 E8 */	addi r4, r4, __vt__Q23efx8TRockRun@l
/* 80263F84 00260EC4  39 20 00 00 */	li r9, 0
/* 80263F88 00260EC8  39 00 02 B2 */	li r8, 0x2b2
/* 80263F8C 00260ECC  90 03 00 04 */	stw r0, 4(r3)
/* 80263F90 00260ED0  38 C7 00 14 */	addi r6, r7, 0x14
/* 80263F94 00260ED4  38 A0 01 AA */	li r5, 0x1aa
/* 80263F98 00260ED8  38 04 00 14 */	addi r0, r4, 0x14
/* 80263F9C 00260EDC  91 23 00 08 */	stw r9, 8(r3)
/* 80263FA0 00260EE0  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80263FA4 00260EE4  99 23 00 0E */	stb r9, 0xe(r3)
/* 80263FA8 00260EE8  90 E3 00 00 */	stw r7, 0(r3)
/* 80263FAC 00260EEC  90 C3 00 04 */	stw r6, 4(r3)
/* 80263FB0 00260EF0  91 23 00 10 */	stw r9, 0x10(r3)
/* 80263FB4 00260EF4  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 80263FB8 00260EF8  90 83 00 00 */	stw r4, 0(r3)
/* 80263FBC 00260EFC  90 03 00 04 */	stw r0, 4(r3)
.L_80263FC0:
/* 80263FC0 00260F00  90 7F 02 D8 */	stw r3, 0x2d8(r31)
/* 80263FC4 00260F04  38 60 00 14 */	li r3, 0x14
/* 80263FC8 00260F08  4B DB FE DD */	bl __nw__FUl
/* 80263FCC 00260F0C  28 03 00 00 */	cmplwi r3, 0
/* 80263FD0 00260F10  41 82 00 78 */	beq .L_80264048
/* 80263FD4 00260F14  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80263FD8 00260F18  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 80263FDC 00260F1C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80263FE0 00260F20  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80263FE4 00260F24  90 03 00 00 */	stw r0, 0(r3)
/* 80263FE8 00260F28  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 80263FEC 00260F2C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80263FF0 00260F30  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 80263FF4 00260F34  90 03 00 04 */	stw r0, 4(r3)
/* 80263FF8 00260F38  38 E4 69 40 */	addi r7, r4, __vt__Q23efx9TChasePos@l
/* 80263FFC 00260F3C  3C 80 80 4C */	lis r4, __vt__Q23efx10TRockGrRun@ha
/* 80264000 00260F40  38 05 00 14 */	addi r0, r5, 0x14
/* 80264004 00260F44  90 A3 00 00 */	stw r5, 0(r3)
/* 80264008 00260F48  38 84 41 9C */	addi r4, r4, __vt__Q23efx10TRockGrRun@l
/* 8026400C 00260F4C  39 20 00 00 */	li r9, 0
/* 80264010 00260F50  39 00 02 B2 */	li r8, 0x2b2
/* 80264014 00260F54  90 03 00 04 */	stw r0, 4(r3)
/* 80264018 00260F58  38 C7 00 14 */	addi r6, r7, 0x14
/* 8026401C 00260F5C  38 A0 01 A9 */	li r5, 0x1a9
/* 80264020 00260F60  38 04 00 14 */	addi r0, r4, 0x14
/* 80264024 00260F64  91 23 00 08 */	stw r9, 8(r3)
/* 80264028 00260F68  B1 03 00 0C */	sth r8, 0xc(r3)
/* 8026402C 00260F6C  99 23 00 0E */	stb r9, 0xe(r3)
/* 80264030 00260F70  90 E3 00 00 */	stw r7, 0(r3)
/* 80264034 00260F74  90 C3 00 04 */	stw r6, 4(r3)
/* 80264038 00260F78  91 23 00 10 */	stw r9, 0x10(r3)
/* 8026403C 00260F7C  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 80264040 00260F80  90 83 00 00 */	stw r4, 0(r3)
/* 80264044 00260F84  90 03 00 04 */	stw r0, 4(r3)
.L_80264048:
/* 80264048 00260F88  90 7F 02 DC */	stw r3, 0x2dc(r31)
/* 8026404C 00260F8C  38 60 00 58 */	li r3, 0x58
/* 80264050 00260F90  4B DB FE 55 */	bl __nw__FUl
/* 80264054 00260F94  7C 7E 1B 79 */	or. r30, r3, r3
/* 80264058 00260F98  41 82 00 4C */	beq .L_802640A4
/* 8026405C 00260F9C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80264060 00260FA0  3C 60 80 4C */	lis r3, __vt__Q23efx9TRockWRun@ha
/* 80264064 00260FA4  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80264068 00260FA8  3B BE 00 04 */	addi r29, r30, 4
/* 8026406C 00260FAC  90 1E 00 00 */	stw r0, 0(r30)
/* 80264070 00260FB0  38 03 41 88 */	addi r0, r3, __vt__Q23efx9TRockWRun@l
/* 80264074 00260FB4  7F A3 EB 78 */	mr r3, r29
/* 80264078 00260FB8  38 9E 00 48 */	addi r4, r30, 0x48
/* 8026407C 00260FBC  90 1E 00 00 */	stw r0, 0(r30)
/* 80264080 00260FC0  38 A0 02 8E */	li r5, 0x28e
/* 80264084 00260FC4  38 C0 02 8F */	li r6, 0x28f
/* 80264088 00260FC8  38 E0 02 90 */	li r7, 0x290
/* 8026408C 00260FCC  48 14 C2 C5 */	bl "__ct__Q23efx10TChasePos3FP10Vector3<f>UsUsUs"
/* 80264090 00260FD0  3C 60 80 4C */	lis r3, __vt__Q23efx17TRockWRunChasePos@ha
/* 80264094 00260FD4  38 00 00 00 */	li r0, 0
/* 80264098 00260FD8  38 63 41 6C */	addi r3, r3, __vt__Q23efx17TRockWRunChasePos@l
/* 8026409C 00260FDC  90 7D 00 00 */	stw r3, 0(r29)
/* 802640A0 00260FE0  98 1E 00 54 */	stb r0, 0x54(r30)
.L_802640A4:
/* 802640A4 00260FE4  93 DF 02 E0 */	stw r30, 0x2e0(r31)
/* 802640A8 00260FE8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802640AC 00260FEC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802640B0 00260FF0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802640B4 00260FF4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802640B8 00260FF8  7C 08 03 A6 */	mtlr r0
/* 802640BC 00260FFC  38 21 00 20 */	addi r1, r1, 0x20
/* 802640C0 00261000  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game4Rock3ObjFv

.fn setupEffect__Q34Game4Rock3ObjFv, global
/* 802640C4 00261004  80 83 02 D8 */	lwz r4, 0x2d8(r3)
/* 802640C8 00261008  38 03 01 8C */	addi r0, r3, 0x18c
/* 802640CC 0026100C  90 04 00 10 */	stw r0, 0x10(r4)
/* 802640D0 00261010  80 63 02 DC */	lwz r3, 0x2dc(r3)
/* 802640D4 00261014  90 03 00 10 */	stw r0, 0x10(r3)
/* 802640D8 00261018  4E 80 00 20 */	blr 
.endfn setupEffect__Q34Game4Rock3ObjFv

.fn startFallEffect__Q34Game4Rock3ObjFv, global
/* 802640DC 0026101C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802640E0 00261020  7C 08 02 A6 */	mflr r0
/* 802640E4 00261024  38 80 00 00 */	li r4, 0
/* 802640E8 00261028  90 01 00 14 */	stw r0, 0x14(r1)
/* 802640EC 0026102C  80 63 02 D8 */	lwz r3, 0x2d8(r3)
/* 802640F0 00261030  81 83 00 00 */	lwz r12, 0(r3)
/* 802640F4 00261034  81 8C 00 08 */	lwz r12, 8(r12)
/* 802640F8 00261038  7D 89 03 A6 */	mtctr r12
/* 802640FC 0026103C  4E 80 04 21 */	bctrl 
/* 80264100 00261040  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264104 00261044  7C 08 03 A6 */	mtlr r0
/* 80264108 00261048  38 21 00 10 */	addi r1, r1, 0x10
/* 8026410C 0026104C  4E 80 00 20 */	blr 
.endfn startFallEffect__Q34Game4Rock3ObjFv

.fn finishFallEffect__Q34Game4Rock3ObjFv, global
/* 80264110 00261050  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264114 00261054  7C 08 02 A6 */	mflr r0
/* 80264118 00261058  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026411C 0026105C  80 63 02 D8 */	lwz r3, 0x2d8(r3)
/* 80264120 00261060  81 83 00 00 */	lwz r12, 0(r3)
/* 80264124 00261064  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80264128 00261068  7D 89 03 A6 */	mtctr r12
/* 8026412C 0026106C  4E 80 04 21 */	bctrl 
/* 80264130 00261070  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264134 00261074  7C 08 03 A6 */	mtlr r0
/* 80264138 00261078  38 21 00 10 */	addi r1, r1, 0x10
/* 8026413C 0026107C  4E 80 00 20 */	blr 
.endfn finishFallEffect__Q34Game4Rock3ObjFv

.fn startRollingGroundEffect__Q34Game4Rock3ObjFv, global
/* 80264140 00261080  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264144 00261084  7C 08 02 A6 */	mflr r0
/* 80264148 00261088  38 80 00 00 */	li r4, 0
/* 8026414C 0026108C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264150 00261090  80 63 02 DC */	lwz r3, 0x2dc(r3)
/* 80264154 00261094  81 83 00 00 */	lwz r12, 0(r3)
/* 80264158 00261098  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026415C 0026109C  7D 89 03 A6 */	mtctr r12
/* 80264160 002610A0  4E 80 04 21 */	bctrl 
/* 80264164 002610A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264168 002610A8  7C 08 03 A6 */	mtlr r0
/* 8026416C 002610AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80264170 002610B0  4E 80 00 20 */	blr 
.endfn startRollingGroundEffect__Q34Game4Rock3ObjFv

.fn finishRollingGroundEffect__Q34Game4Rock3ObjFv, global
/* 80264174 002610B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264178 002610B8  7C 08 02 A6 */	mflr r0
/* 8026417C 002610BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264180 002610C0  80 63 02 DC */	lwz r3, 0x2dc(r3)
/* 80264184 002610C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80264188 002610C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8026418C 002610CC  7D 89 03 A6 */	mtctr r12
/* 80264190 002610D0  4E 80 04 21 */	bctrl 
/* 80264194 002610D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264198 002610D8  7C 08 03 A6 */	mtlr r0
/* 8026419C 002610DC  38 21 00 10 */	addi r1, r1, 0x10
/* 802641A0 002610E0  4E 80 00 20 */	blr 
.endfn finishRollingGroundEffect__Q34Game4Rock3ObjFv

.fn startRollingWaterEffect__Q34Game4Rock3ObjFv, global
/* 802641A4 002610E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802641A8 002610E8  7C 08 02 A6 */	mflr r0
/* 802641AC 002610EC  C0 02 CA 50 */	lfs f0, lbl_8051ADB0@sda21(r2)
/* 802641B0 002610F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802641B4 002610F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802641B8 002610F8  7C 7F 1B 78 */	mr r31, r3
/* 802641BC 002610FC  80 63 02 80 */	lwz r3, 0x280(r3)
/* 802641C0 00261100  28 03 00 00 */	cmplwi r3, 0
/* 802641C4 00261104  41 82 00 18 */	beq .L_802641DC
/* 802641C8 00261108  81 83 00 00 */	lwz r12, 0(r3)
/* 802641CC 0026110C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802641D0 00261110  7D 89 03 A6 */	mtctr r12
/* 802641D4 00261114  4E 80 04 21 */	bctrl 
/* 802641D8 00261118  C0 03 00 00 */	lfs f0, 0(r3)
.L_802641DC:
/* 802641DC 0026111C  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802641E0 00261120  38 80 00 00 */	li r4, 0
/* 802641E4 00261124  D0 03 00 44 */	stfs f0, 0x44(r3)
/* 802641E8 00261128  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802641EC 0026112C  81 83 00 00 */	lwz r12, 0(r3)
/* 802641F0 00261130  81 8C 00 08 */	lwz r12, 8(r12)
/* 802641F4 00261134  7D 89 03 A6 */	mtctr r12
/* 802641F8 00261138  4E 80 04 21 */	bctrl 
/* 802641FC 0026113C  80 BF 02 E0 */	lwz r5, 0x2e0(r31)
/* 80264200 00261140  88 05 00 54 */	lbz r0, 0x54(r5)
/* 80264204 00261144  28 00 00 00 */	cmplwi r0, 0
/* 80264208 00261148  41 82 00 70 */	beq .L_80264278
/* 8026420C 0026114C  C0 45 00 44 */	lfs f2, 0x44(r5)
/* 80264210 00261150  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 80264214 00261154  C0 02 CA 9C */	lfs f0, lbl_8051ADFC@sda21(r2)
/* 80264218 00261158  EC 22 08 28 */	fsubs f1, f2, f1
/* 8026421C 0026115C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80264220 00261160  4C 40 13 82 */	cror 2, 0, 2
/* 80264224 00261164  40 82 00 40 */	bne .L_80264264
/* 80264228 00261168  C0 02 CA A0 */	lfs f0, lbl_8051AE00@sda21(r2)
/* 8026422C 0026116C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80264230 00261170  40 80 00 34 */	bge .L_80264264
/* 80264234 00261174  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 80264238 00261178  38 65 00 04 */	addi r3, r5, 4
/* 8026423C 0026117C  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 80264240 00261180  38 80 00 00 */	li r4, 0
/* 80264244 00261184  D0 05 00 48 */	stfs f0, 0x48(r5)
/* 80264248 00261188  D0 45 00 4C */	stfs f2, 0x4c(r5)
/* 8026424C 0026118C  D0 25 00 50 */	stfs f1, 0x50(r5)
/* 80264250 00261190  81 85 00 04 */	lwz r12, 4(r5)
/* 80264254 00261194  81 8C 00 08 */	lwz r12, 8(r12)
/* 80264258 00261198  7D 89 03 A6 */	mtctr r12
/* 8026425C 0026119C  4E 80 04 21 */	bctrl 
/* 80264260 002611A0  48 00 00 18 */	b .L_80264278
.L_80264264:
/* 80264264 002611A4  38 65 00 04 */	addi r3, r5, 4
/* 80264268 002611A8  81 85 00 04 */	lwz r12, 4(r5)
/* 8026426C 002611AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80264270 002611B0  7D 89 03 A6 */	mtctr r12
/* 80264274 002611B4  4E 80 04 21 */	bctrl 
.L_80264278:
/* 80264278 002611B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026427C 002611BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80264280 002611C0  7C 08 03 A6 */	mtlr r0
/* 80264284 002611C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80264288 002611C8  4E 80 00 20 */	blr 
.endfn startRollingWaterEffect__Q34Game4Rock3ObjFv

.fn create__Q23efx9TRockWRunFPQ23efx3Arg, weak
/* 8026428C 002611CC  38 00 00 01 */	li r0, 1
/* 80264290 002611D0  98 03 00 54 */	stb r0, 0x54(r3)
/* 80264294 002611D4  38 60 00 01 */	li r3, 1
/* 80264298 002611D8  4E 80 00 20 */	blr 
.endfn create__Q23efx9TRockWRunFPQ23efx3Arg

.fn finishRollingWaterEffect__Q34Game4Rock3ObjFv, global
/* 8026429C 002611DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802642A0 002611E0  7C 08 02 A6 */	mflr r0
/* 802642A4 002611E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802642A8 002611E8  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802642AC 002611EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802642B0 002611F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802642B4 002611F4  7D 89 03 A6 */	mtctr r12
/* 802642B8 002611F8  4E 80 04 21 */	bctrl 
/* 802642BC 002611FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802642C0 00261200  7C 08 03 A6 */	mtlr r0
/* 802642C4 00261204  38 21 00 10 */	addi r1, r1, 0x10
/* 802642C8 00261208  4E 80 00 20 */	blr 
.endfn finishRollingWaterEffect__Q34Game4Rock3ObjFv

.fn fade__Q23efx9TRockWRunFv, weak
/* 802642CC 0026120C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802642D0 00261210  7C 08 02 A6 */	mflr r0
/* 802642D4 00261214  90 01 00 14 */	stw r0, 0x14(r1)
/* 802642D8 00261218  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802642DC 0026121C  7C 7F 1B 78 */	mr r31, r3
/* 802642E0 00261220  38 7F 00 04 */	addi r3, r31, 4
/* 802642E4 00261224  81 9F 00 04 */	lwz r12, 4(r31)
/* 802642E8 00261228  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802642EC 0026122C  7D 89 03 A6 */	mtctr r12
/* 802642F0 00261230  4E 80 04 21 */	bctrl 
/* 802642F4 00261234  38 00 00 00 */	li r0, 0
/* 802642F8 00261238  98 1F 00 54 */	stb r0, 0x54(r31)
/* 802642FC 0026123C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264300 00261240  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80264304 00261244  7C 08 03 A6 */	mtlr r0
/* 80264308 00261248  38 21 00 10 */	addi r1, r1, 0x10
/* 8026430C 0026124C  4E 80 00 20 */	blr 
.endfn fade__Q23efx9TRockWRunFv

.fn updateWaterEffectPosition__Q34Game4Rock3ObjFv, global
/* 80264310 00261250  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264314 00261254  7C 08 02 A6 */	mflr r0
/* 80264318 00261258  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026431C 0026125C  80 03 02 80 */	lwz r0, 0x280(r3)
/* 80264320 00261260  28 00 00 00 */	cmplwi r0, 0
/* 80264324 00261264  41 82 00 80 */	beq .L_802643A4
/* 80264328 00261268  80 A3 02 E0 */	lwz r5, 0x2e0(r3)
/* 8026432C 0026126C  88 05 00 54 */	lbz r0, 0x54(r5)
/* 80264330 00261270  28 00 00 00 */	cmplwi r0, 0
/* 80264334 00261274  41 82 00 70 */	beq .L_802643A4
/* 80264338 00261278  C0 45 00 44 */	lfs f2, 0x44(r5)
/* 8026433C 0026127C  C0 23 01 90 */	lfs f1, 0x190(r3)
/* 80264340 00261280  C0 02 CA 9C */	lfs f0, lbl_8051ADFC@sda21(r2)
/* 80264344 00261284  EC 22 08 28 */	fsubs f1, f2, f1
/* 80264348 00261288  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8026434C 0026128C  4C 40 13 82 */	cror 2, 0, 2
/* 80264350 00261290  40 82 00 40 */	bne .L_80264390
/* 80264354 00261294  C0 02 CA A0 */	lfs f0, lbl_8051AE00@sda21(r2)
/* 80264358 00261298  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026435C 0026129C  40 80 00 34 */	bge .L_80264390
/* 80264360 002612A0  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 80264364 002612A4  38 80 00 00 */	li r4, 0
/* 80264368 002612A8  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8026436C 002612AC  38 65 00 04 */	addi r3, r5, 4
/* 80264370 002612B0  D0 05 00 48 */	stfs f0, 0x48(r5)
/* 80264374 002612B4  D0 45 00 4C */	stfs f2, 0x4c(r5)
/* 80264378 002612B8  D0 25 00 50 */	stfs f1, 0x50(r5)
/* 8026437C 002612BC  81 85 00 04 */	lwz r12, 4(r5)
/* 80264380 002612C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80264384 002612C4  7D 89 03 A6 */	mtctr r12
/* 80264388 002612C8  4E 80 04 21 */	bctrl 
/* 8026438C 002612CC  48 00 00 18 */	b .L_802643A4
.L_80264390:
/* 80264390 002612D0  38 65 00 04 */	addi r3, r5, 4
/* 80264394 002612D4  81 85 00 04 */	lwz r12, 4(r5)
/* 80264398 002612D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8026439C 002612DC  7D 89 03 A6 */	mtctr r12
/* 802643A0 002612E0  4E 80 04 21 */	bctrl 
.L_802643A4:
/* 802643A4 002612E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802643A8 002612E8  7C 08 03 A6 */	mtlr r0
/* 802643AC 002612EC  38 21 00 10 */	addi r1, r1, 0x10
/* 802643B0 002612F0  4E 80 00 20 */	blr 
.endfn updateWaterEffectPosition__Q34Game4Rock3ObjFv

.fn createRockDeadEffect__Q34Game4Rock3ObjFv, global
/* 802643B4 002612F4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802643B8 002612F8  7C 08 02 A6 */	mflr r0
/* 802643BC 002612FC  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 802643C0 00261300  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple3@ha
/* 802643C4 00261304  90 01 00 34 */	stw r0, 0x34(r1)
/* 802643C8 00261308  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802643CC 0026130C  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 802643D0 00261310  39 46 A7 F8 */	addi r10, r6, __vt__Q23efx5TBase@l
/* 802643D4 00261314  90 01 00 08 */	stw r0, 8(r1)
/* 802643D8 00261318  39 25 6A 50 */	addi r9, r5, __vt__Q23efx8TSimple3@l
/* 802643DC 0026131C  3C 80 80 4C */	lis r4, __vt__Q23efx9TRockDead@ha
/* 802643E0 00261320  39 00 01 A6 */	li r8, 0x1a6
/* 802643E4 00261324  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802643E8 00261328  38 04 41 20 */	addi r0, r4, __vt__Q23efx9TRockDead@l
/* 802643EC 0026132C  38 E0 01 A7 */	li r7, 0x1a7
/* 802643F0 00261330  38 C0 01 A8 */	li r6, 0x1a8
/* 802643F4 00261334  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802643F8 00261338  38 A0 00 00 */	li r5, 0
/* 802643FC 0026133C  38 81 00 08 */	addi r4, r1, 8
/* 80264400 00261340  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 80264404 00261344  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80264408 00261348  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 8026440C 0026134C  38 61 00 18 */	addi r3, r1, 0x18
/* 80264410 00261350  91 41 00 18 */	stw r10, 0x18(r1)
/* 80264414 00261354  91 21 00 18 */	stw r9, 0x18(r1)
/* 80264418 00261358  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8026441C 0026135C  B1 01 00 1C */	sth r8, 0x1c(r1)
/* 80264420 00261360  B0 E1 00 1E */	sth r7, 0x1e(r1)
/* 80264424 00261364  B0 C1 00 20 */	sth r6, 0x20(r1)
/* 80264428 00261368  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8026442C 0026136C  90 A1 00 28 */	stw r5, 0x28(r1)
/* 80264430 00261370  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80264434 00261374  90 01 00 18 */	stw r0, 0x18(r1)
/* 80264438 00261378  48 14 AC 85 */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 8026443C 0026137C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80264440 00261380  7C 08 03 A6 */	mtlr r0
/* 80264444 00261384  38 21 00 30 */	addi r1, r1, 0x30
/* 80264448 00261388  4E 80 00 20 */	blr 
.endfn createRockDeadEffect__Q34Game4Rock3ObjFv

.fn effectDrawOn__Q34Game4Rock3ObjFv, global
/* 8026444C 0026138C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264450 00261390  7C 08 02 A6 */	mflr r0
/* 80264454 00261394  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264458 00261398  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026445C 0026139C  7C 7F 1B 78 */	mr r31, r3
/* 80264460 002613A0  80 63 02 D8 */	lwz r3, 0x2d8(r3)
/* 80264464 002613A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80264468 002613A8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8026446C 002613AC  7D 89 03 A6 */	mtctr r12
/* 80264470 002613B0  4E 80 04 21 */	bctrl 
/* 80264474 002613B4  80 7F 02 DC */	lwz r3, 0x2dc(r31)
/* 80264478 002613B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026447C 002613BC  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80264480 002613C0  7D 89 03 A6 */	mtctr r12
/* 80264484 002613C4  4E 80 04 21 */	bctrl 
/* 80264488 002613C8  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 8026448C 002613CC  85 83 00 04 */	lwzu r12, 4(r3)
/* 80264490 002613D0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80264494 002613D4  7D 89 03 A6 */	mtctr r12
/* 80264498 002613D8  4E 80 04 21 */	bctrl 
/* 8026449C 002613DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802644A0 002613E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802644A4 002613E4  7C 08 03 A6 */	mtlr r0
/* 802644A8 002613E8  38 21 00 10 */	addi r1, r1, 0x10
/* 802644AC 002613EC  4E 80 00 20 */	blr 
.endfn effectDrawOn__Q34Game4Rock3ObjFv

.fn effectDrawOff__Q34Game4Rock3ObjFv, global
/* 802644B0 002613F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802644B4 002613F4  7C 08 02 A6 */	mflr r0
/* 802644B8 002613F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802644BC 002613FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802644C0 00261400  7C 7F 1B 78 */	mr r31, r3
/* 802644C4 00261404  80 63 02 D8 */	lwz r3, 0x2d8(r3)
/* 802644C8 00261408  81 83 00 00 */	lwz r12, 0(r3)
/* 802644CC 0026140C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802644D0 00261410  7D 89 03 A6 */	mtctr r12
/* 802644D4 00261414  4E 80 04 21 */	bctrl 
/* 802644D8 00261418  80 7F 02 DC */	lwz r3, 0x2dc(r31)
/* 802644DC 0026141C  81 83 00 00 */	lwz r12, 0(r3)
/* 802644E0 00261420  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802644E4 00261424  7D 89 03 A6 */	mtctr r12
/* 802644E8 00261428  4E 80 04 21 */	bctrl 
/* 802644EC 0026142C  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802644F0 00261430  85 83 00 04 */	lwzu r12, 4(r3)
/* 802644F4 00261434  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802644F8 00261438  7D 89 03 A6 */	mtctr r12
/* 802644FC 0026143C  4E 80 04 21 */	bctrl 
/* 80264500 00261440  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264504 00261444  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80264508 00261448  7C 08 03 A6 */	mtlr r0
/* 8026450C 0026144C  38 21 00 10 */	addi r1, r1, 0x10
/* 80264510 00261450  4E 80 00 20 */	blr 
.endfn effectDrawOff__Q34Game4Rock3ObjFv

.fn forceKill__Q23efx9TRockWRunFv, weak
/* 80264514 00261454  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264518 00261458  7C 08 02 A6 */	mflr r0
/* 8026451C 0026145C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264520 00261460  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80264524 00261464  7C 7F 1B 78 */	mr r31, r3
/* 80264528 00261468  38 7F 00 04 */	addi r3, r31, 4
/* 8026452C 0026146C  81 9F 00 04 */	lwz r12, 4(r31)
/* 80264530 00261470  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80264534 00261474  7D 89 03 A6 */	mtctr r12
/* 80264538 00261478  4E 80 04 21 */	bctrl 
/* 8026453C 0026147C  38 00 00 00 */	li r0, 0
/* 80264540 00261480  98 1F 00 54 */	stb r0, 0x54(r31)
/* 80264544 00261484  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264548 00261488  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026454C 0026148C  7C 08 03 A6 */	mtlr r0
/* 80264550 00261490  38 21 00 10 */	addi r1, r1, 0x10
/* 80264554 00261494  4E 80 00 20 */	blr 
.endfn forceKill__Q23efx9TRockWRunFv

.fn __dt__Q23efx10TRockGrRunFv, weak
/* 80264558 00261498  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026455C 0026149C  7C 08 02 A6 */	mflr r0
/* 80264560 002614A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264564 002614A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80264568 002614A8  7C 9F 23 78 */	mr r31, r4
/* 8026456C 002614AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80264570 002614B0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80264574 002614B4  41 82 00 64 */	beq .L_802645D8
/* 80264578 002614B8  3C 60 80 4C */	lis r3, __vt__Q23efx10TRockGrRun@ha
/* 8026457C 002614BC  38 63 41 9C */	addi r3, r3, __vt__Q23efx10TRockGrRun@l
/* 80264580 002614C0  90 7E 00 00 */	stw r3, 0(r30)
/* 80264584 002614C4  38 03 00 14 */	addi r0, r3, 0x14
/* 80264588 002614C8  90 1E 00 04 */	stw r0, 4(r30)
/* 8026458C 002614CC  41 82 00 3C */	beq .L_802645C8
/* 80264590 002614D0  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 80264594 002614D4  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 80264598 002614D8  90 7E 00 00 */	stw r3, 0(r30)
/* 8026459C 002614DC  38 03 00 14 */	addi r0, r3, 0x14
/* 802645A0 002614E0  90 1E 00 04 */	stw r0, 4(r30)
/* 802645A4 002614E4  41 82 00 24 */	beq .L_802645C8
/* 802645A8 002614E8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802645AC 002614EC  38 7E 00 04 */	addi r3, r30, 4
/* 802645B0 002614F0  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802645B4 002614F4  38 80 00 00 */	li r4, 0
/* 802645B8 002614F8  90 BE 00 00 */	stw r5, 0(r30)
/* 802645BC 002614FC  38 05 00 14 */	addi r0, r5, 0x14
/* 802645C0 00261500  90 1E 00 04 */	stw r0, 4(r30)
/* 802645C4 00261504  4B E2 B6 D9 */	bl __dt__18JPAEmitterCallBackFv
.L_802645C8:
/* 802645C8 00261508  7F E0 07 35 */	extsh. r0, r31
/* 802645CC 0026150C  40 81 00 0C */	ble .L_802645D8
/* 802645D0 00261510  7F C3 F3 78 */	mr r3, r30
/* 802645D4 00261514  4B DB FA E1 */	bl __dl__FPv
.L_802645D8:
/* 802645D8 00261518  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802645DC 0026151C  7F C3 F3 78 */	mr r3, r30
/* 802645E0 00261520  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802645E4 00261524  83 C1 00 08 */	lwz r30, 8(r1)
/* 802645E8 00261528  7C 08 03 A6 */	mtlr r0
/* 802645EC 0026152C  38 21 00 10 */	addi r1, r1, 0x10
/* 802645F0 00261530  4E 80 00 20 */	blr 
.endfn __dt__Q23efx10TRockGrRunFv

.fn __dt__Q23efx8TRockRunFv, weak
/* 802645F4 00261534  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802645F8 00261538  7C 08 02 A6 */	mflr r0
/* 802645FC 0026153C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264600 00261540  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80264604 00261544  7C 9F 23 78 */	mr r31, r4
/* 80264608 00261548  93 C1 00 08 */	stw r30, 8(r1)
/* 8026460C 0026154C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80264610 00261550  41 82 00 64 */	beq .L_80264674
/* 80264614 00261554  3C 60 80 4C */	lis r3, __vt__Q23efx8TRockRun@ha
/* 80264618 00261558  38 63 41 E8 */	addi r3, r3, __vt__Q23efx8TRockRun@l
/* 8026461C 0026155C  90 7E 00 00 */	stw r3, 0(r30)
/* 80264620 00261560  38 03 00 14 */	addi r0, r3, 0x14
/* 80264624 00261564  90 1E 00 04 */	stw r0, 4(r30)
/* 80264628 00261568  41 82 00 3C */	beq .L_80264664
/* 8026462C 0026156C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 80264630 00261570  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 80264634 00261574  90 7E 00 00 */	stw r3, 0(r30)
/* 80264638 00261578  38 03 00 14 */	addi r0, r3, 0x14
/* 8026463C 0026157C  90 1E 00 04 */	stw r0, 4(r30)
/* 80264640 00261580  41 82 00 24 */	beq .L_80264664
/* 80264644 00261584  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80264648 00261588  38 7E 00 04 */	addi r3, r30, 4
/* 8026464C 0026158C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80264650 00261590  38 80 00 00 */	li r4, 0
/* 80264654 00261594  90 BE 00 00 */	stw r5, 0(r30)
/* 80264658 00261598  38 05 00 14 */	addi r0, r5, 0x14
/* 8026465C 0026159C  90 1E 00 04 */	stw r0, 4(r30)
/* 80264660 002615A0  4B E2 B6 3D */	bl __dt__18JPAEmitterCallBackFv
.L_80264664:
/* 80264664 002615A4  7F E0 07 35 */	extsh. r0, r31
/* 80264668 002615A8  40 81 00 0C */	ble .L_80264674
/* 8026466C 002615AC  7F C3 F3 78 */	mr r3, r30
/* 80264670 002615B0  4B DB FA 45 */	bl __dl__FPv
.L_80264674:
/* 80264674 002615B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264678 002615B8  7F C3 F3 78 */	mr r3, r30
/* 8026467C 002615BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80264680 002615C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80264684 002615C4  7C 08 03 A6 */	mtlr r0
/* 80264688 002615C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8026468C 002615CC  4E 80 00 20 */	blr 
.endfn __dt__Q23efx8TRockRunFv

.fn isLivingThing__Q34Game4Rock3ObjFv, weak
/* 80264690 002615D0  38 60 00 00 */	li r3, 0
/* 80264694 002615D4  4E 80 00 20 */	blr 
.endfn isLivingThing__Q34Game4Rock3ObjFv

.fn "@744@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 80264698 002615D8  39 60 00 0C */	li r11, 0xc
/* 8026469C 002615DC  7D 63 58 2E */	lwzx r11, r3, r11
/* 802646A0 002615E0  7C 63 5A 14 */	add r3, r3, r11
/* 802646A4 002615E4  38 63 FD 18 */	addi r3, r3, -744
/* 802646A8 002615E8  4B EA 22 74 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@744@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@744@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 802646AC 002615EC  39 60 00 0C */	li r11, 0xc
/* 802646B0 002615F0  7D 63 58 2E */	lwzx r11, r3, r11
/* 802646B4 002615F4  7C 63 5A 14 */	add r3, r3, r11
/* 802646B8 002615F8  38 63 FD 18 */	addi r3, r3, -744
/* 802646BC 002615FC  4B EA 1F EC */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@744@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@744@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 802646C0 00261600  39 60 00 0C */	li r11, 0xc
/* 802646C4 00261604  7D 63 58 2E */	lwzx r11, r3, r11
/* 802646C8 00261608  7C 63 5A 14 */	add r3, r3, r11
/* 802646CC 0026160C  38 63 FD 18 */	addi r3, r3, -744
/* 802646D0 00261610  4B EA 1F F8 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@744@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@744@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 802646D4 00261614  39 60 00 0C */	li r11, 0xc
/* 802646D8 00261618  7D 63 58 2E */	lwzx r11, r3, r11
/* 802646DC 0026161C  7C 63 5A 14 */	add r3, r3, r11
/* 802646E0 00261620  38 63 FD 18 */	addi r3, r3, -744
/* 802646E4 00261624  4B EA 23 94 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@744@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@744@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 802646E8 00261628  39 60 00 0C */	li r11, 0xc
/* 802646EC 0026162C  7D 63 58 2E */	lwzx r11, r3, r11
/* 802646F0 00261630  7C 63 5A 14 */	add r3, r3, r11
/* 802646F4 00261634  38 63 FD 18 */	addi r3, r3, -744
/* 802646F8 00261638  4B EA 23 54 */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@744@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@744@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 802646FC 0026163C  39 60 00 0C */	li r11, 0xc
/* 80264700 00261640  7D 63 58 2E */	lwzx r11, r3, r11
/* 80264704 00261644  7C 63 5A 14 */	add r3, r3, r11
/* 80264708 00261648  38 63 FD 18 */	addi r3, r3, -744
/* 8026470C 0026164C  4B EA 1F 94 */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@744@12@viewGetShape__Q24Game9EnemyBaseFv"

.fn "@4@__dt__Q23efx8TRockRunFv", weak
/* 80264710 00261650  38 63 FF FC */	addi r3, r3, -4
/* 80264714 00261654  4B FF FE E0 */	b __dt__Q23efx8TRockRunFv
.endfn "@4@__dt__Q23efx8TRockRunFv"

.fn "@4@__dt__Q23efx10TRockGrRunFv", weak
/* 80264718 00261658  38 63 FF FC */	addi r3, r3, -4
/* 8026471C 0026165C  4B FF FE 3C */	b __dt__Q23efx10TRockGrRunFv
.endfn "@4@__dt__Q23efx10TRockGrRunFv"
