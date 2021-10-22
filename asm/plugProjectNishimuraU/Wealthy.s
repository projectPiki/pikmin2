.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q23efx11TOoganeKira
__vt__Q23efx11TOoganeKira:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx11TOoganeKiraFv"
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
	.4byte __dt__Q23efx11TOoganeKiraFv
.global __vt__Q34Game7Wealthy3Obj
__vt__Q34Game7Wealthy3Obj:
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
	.4byte onInit__Q34Game6Kogane3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game6Kogane3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game6Kogane3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game6Kogane3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game6Kogane3ObjFv
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
	.4byte getShadowParam__Q34Game6Kogane3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game7Wealthy3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game6Kogane3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game6Kogane3ObjFv
	.4byte doUpdateCommon__Q34Game6Kogane3ObjFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game6Kogane3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q34Game7Wealthy3ObjFv
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
	.4byte getEnemyTypeID__Q34Game7Wealthy3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game6Kogane3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game6Kogane3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q34Game6Kogane3ObjFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game6Kogane3ObjFv
	.4byte doFinishStoneState__Q34Game6Kogane3ObjFv
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
	.4byte wallCallback__Q34Game6Kogane3ObjFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q24Game9EnemyBaseFv
	.4byte doStartMovie__Q34Game6Kogane3ObjFv
	.4byte doEndMovie__Q34Game6Kogane3ObjFv
	.4byte setFSM__Q34Game6Kogane3ObjFPQ34Game6Kogane3FSM
	.4byte createItem__Q34Game7Wealthy3ObjFv
	.4byte resetFartTimer__Q34Game6Kogane3ObjFv
	.4byte startBodyEffect__Q34Game7Wealthy3ObjFv
	.4byte finishBodyEffect__Q34Game7Wealthy3ObjFv
	.4byte createFartEffect__Q34Game6Kogane3ObjFv
	.4byte effectDrawOn__Q34Game7Wealthy3ObjFv
	.4byte effectDrawOff__Q34Game7Wealthy3ObjFv
	.4byte createPressSENormal__Q34Game7Wealthy3ObjFv
	.4byte createPressSESpecial__Q34Game6Kogane3ObjFv
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@736@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@736@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@736@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@736@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@736@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@736@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
	.4byte 0

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 0x8
.global lbl_8051B6F0
lbl_8051B6F0:
	.4byte 0x6B617261
	.4byte 0x64610000
.global lbl_8051B6F8
lbl_8051B6F8:
	.4byte 0x46480000
.global lbl_8051B6FC
lbl_8051B6FC:
	.4byte 0x626F6479
	.4byte 0x00000000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game7Wealthy3ObjFv
__ct__Q34Game7Wealthy3ObjFv:
/* 80284A9C 002819DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80284AA0 002819E0  7C 08 02 A6 */	mflr r0
/* 80284AA4 002819E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80284AA8 002819E8  7C 80 07 35 */	extsh. r0, r4
/* 80284AAC 002819EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80284AB0 002819F0  7C 7F 1B 78 */	mr r31, r3
/* 80284AB4 002819F4  41 82 00 24 */	beq lbl_80284AD8
/* 80284AB8 002819F8  38 1F 02 E0 */	addi r0, r31, 0x2e0
/* 80284ABC 002819FC  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 80284AC0 00281A00  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80284AC4 00281A04  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80284AC8 00281A08  38 00 00 00 */	li r0, 0
/* 80284ACC 00281A0C  90 7F 02 E0 */	stw r3, 0x2e0(r31)
/* 80284AD0 00281A10  90 1F 02 E4 */	stw r0, 0x2e4(r31)
/* 80284AD4 00281A14  90 1F 02 E8 */	stw r0, 0x2e8(r31)
lbl_80284AD8:
/* 80284AD8 00281A18  7F E3 FB 78 */	mr r3, r31
/* 80284ADC 00281A1C  38 80 00 00 */	li r4, 0
/* 80284AE0 00281A20  4B FD 91 AD */	bl __ct__Q34Game6Kogane3ObjFv
/* 80284AE4 00281A24  3C 60 80 4D */	lis r3, __vt__Q34Game7Wealthy3Obj@ha
/* 80284AE8 00281A28  38 1F 02 E0 */	addi r0, r31, 0x2e0
/* 80284AEC 00281A2C  38 A3 90 C4 */	addi r5, r3, __vt__Q34Game7Wealthy3Obj@l
/* 80284AF0 00281A30  7F E3 FB 78 */	mr r3, r31
/* 80284AF4 00281A34  90 BF 00 00 */	stw r5, 0(r31)
/* 80284AF8 00281A38  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80284AFC 00281A3C  38 A5 03 20 */	addi r5, r5, 0x320
/* 80284B00 00281A40  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80284B04 00281A44  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80284B08 00281A48  90 A4 00 00 */	stw r5, 0(r4)
/* 80284B0C 00281A4C  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80284B10 00281A50  7C 04 00 50 */	subf r0, r4, r0
/* 80284B14 00281A54  90 04 00 0C */	stw r0, 0xc(r4)
/* 80284B18 00281A58  48 00 03 51 */	bl createEffect__Q34Game7Wealthy3ObjFv
/* 80284B1C 00281A5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80284B20 00281A60  7F E3 FB 78 */	mr r3, r31
/* 80284B24 00281A64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80284B28 00281A68  7C 08 03 A6 */	mtlr r0
/* 80284B2C 00281A6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80284B30 00281A70  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game7Wealthy3ObjFv
changeMaterial__Q34Game7Wealthy3ObjFv:
/* 80284B34 00281A74  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80284B38 00281A78  7C 08 02 A6 */	mflr r0
/* 80284B3C 00281A7C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80284B40 00281A80  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 80284B44 00281A84  7C 7B 1B 78 */	mr r27, r3
/* 80284B48 00281A88  80 63 01 80 */	lwz r3, 0x180(r3)
/* 80284B4C 00281A8C  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 80284B50 00281A90  81 83 00 00 */	lwz r12, 0(r3)
/* 80284B54 00281A94  83 A4 00 08 */	lwz r29, 8(r4)
/* 80284B58 00281A98  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 80284B5C 00281A9C  83 DD 00 04 */	lwz r30, 4(r29)
/* 80284B60 00281AA0  7D 89 03 A6 */	mtctr r12
/* 80284B64 00281AA4  4E 80 04 21 */	bctrl 
/* 80284B68 00281AA8  7C 7F 1B 78 */	mr r31, r3
/* 80284B6C 00281AAC  80 7E 00 64 */	lwz r3, 0x64(r30)
/* 80284B70 00281AB0  38 82 D3 90 */	addi r4, r2, lbl_8051B6F0@sda21
/* 80284B74 00281AB4  4B DA A2 11 */	bl getIndex__10JUTNameTabCFPCc
/* 80284B78 00281AB8  80 BE 00 60 */	lwz r5, 0x60(r30)
/* 80284B7C 00281ABC  54 64 13 BA */	rlwinm r4, r3, 2, 0xe, 0x1d
/* 80284B80 00281AC0  38 60 00 64 */	li r3, 0x64
/* 80284B84 00281AC4  38 00 00 FF */	li r0, 0xff
/* 80284B88 00281AC8  7C C5 20 2E */	lwzx r6, r5, r4
/* 80284B8C 00281ACC  38 A1 00 08 */	addi r5, r1, 8
/* 80284B90 00281AD0  38 80 00 00 */	li r4, 0
/* 80284B94 00281AD4  98 61 00 08 */	stb r3, 8(r1)
/* 80284B98 00281AD8  98 61 00 09 */	stb r3, 9(r1)
/* 80284B9C 00281ADC  98 61 00 0A */	stb r3, 0xa(r1)
/* 80284BA0 00281AE0  98 01 00 0B */	stb r0, 0xb(r1)
/* 80284BA4 00281AE4  80 66 00 2C */	lwz r3, 0x2c(r6)
/* 80284BA8 00281AE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80284BAC 00281AEC  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 80284BB0 00281AF0  7D 89 03 A6 */	mtctr r12
/* 80284BB4 00281AF4  4E 80 04 21 */	bctrl 
/* 80284BB8 00281AF8  7F A3 EB 78 */	mr r3, r29
/* 80284BBC 00281AFC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80284BC0 00281B00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80284BC4 00281B04  7D 89 03 A6 */	mtctr r12
/* 80284BC8 00281B08  4E 80 04 21 */	bctrl 
/* 80284BCC 00281B0C  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 80284BD0 00281B10  3C 60 80 51 */	lis r3, j3dSys@ha
/* 80284BD4 00281B14  88 1F 00 00 */	lbz r0, 0(r31)
/* 80284BD8 00281B18  3B 63 F2 30 */	addi r27, r3, j3dSys@l
/* 80284BDC 00281B1C  80 64 00 08 */	lwz r3, 8(r4)
/* 80284BE0 00281B20  3B 80 00 00 */	li r28, 0
/* 80284BE4 00281B24  80 63 00 04 */	lwz r3, 4(r3)
/* 80284BE8 00281B28  80 83 00 6C */	lwz r4, 0x6c(r3)
/* 80284BEC 00281B2C  80 64 00 04 */	lwz r3, 4(r4)
/* 80284BF0 00281B30  98 03 00 00 */	stb r0, 0(r3)
/* 80284BF4 00281B34  88 1F 00 01 */	lbz r0, 1(r31)
/* 80284BF8 00281B38  98 03 00 01 */	stb r0, 1(r3)
/* 80284BFC 00281B3C  A0 1F 00 02 */	lhz r0, 2(r31)
/* 80284C00 00281B40  B0 03 00 02 */	sth r0, 2(r3)
/* 80284C04 00281B44  A0 1F 00 04 */	lhz r0, 4(r31)
/* 80284C08 00281B48  B0 03 00 04 */	sth r0, 4(r3)
/* 80284C0C 00281B4C  88 1F 00 06 */	lbz r0, 6(r31)
/* 80284C10 00281B50  98 03 00 06 */	stb r0, 6(r3)
/* 80284C14 00281B54  88 1F 00 07 */	lbz r0, 7(r31)
/* 80284C18 00281B58  98 03 00 07 */	stb r0, 7(r3)
/* 80284C1C 00281B5C  88 1F 00 08 */	lbz r0, 8(r31)
/* 80284C20 00281B60  98 03 00 08 */	stb r0, 8(r3)
/* 80284C24 00281B64  88 1F 00 09 */	lbz r0, 9(r31)
/* 80284C28 00281B68  98 03 00 09 */	stb r0, 9(r3)
/* 80284C2C 00281B6C  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 80284C30 00281B70  B0 03 00 0A */	sth r0, 0xa(r3)
/* 80284C34 00281B74  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80284C38 00281B78  90 03 00 0C */	stw r0, 0xc(r3)
/* 80284C3C 00281B7C  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 80284C40 00281B80  98 03 00 10 */	stb r0, 0x10(r3)
/* 80284C44 00281B84  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 80284C48 00281B88  98 03 00 11 */	stb r0, 0x11(r3)
/* 80284C4C 00281B8C  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 80284C50 00281B90  98 03 00 12 */	stb r0, 0x12(r3)
/* 80284C54 00281B94  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 80284C58 00281B98  98 03 00 13 */	stb r0, 0x13(r3)
/* 80284C5C 00281B9C  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 80284C60 00281BA0  98 03 00 14 */	stb r0, 0x14(r3)
/* 80284C64 00281BA4  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 80284C68 00281BA8  98 03 00 15 */	stb r0, 0x15(r3)
/* 80284C6C 00281BAC  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 80284C70 00281BB0  98 03 00 16 */	stb r0, 0x16(r3)
/* 80284C74 00281BB4  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 80284C78 00281BB8  98 03 00 17 */	stb r0, 0x17(r3)
/* 80284C7C 00281BBC  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 80284C80 00281BC0  98 03 00 18 */	stb r0, 0x18(r3)
/* 80284C84 00281BC4  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 80284C88 00281BC8  98 03 00 19 */	stb r0, 0x19(r3)
/* 80284C8C 00281BCC  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 80284C90 00281BD0  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 80284C94 00281BD4  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80284C98 00281BD8  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80284C9C 00281BDC  80 64 00 04 */	lwz r3, 4(r4)
/* 80284CA0 00281BE0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80284CA4 00281BE4  7C 1F 02 14 */	add r0, r31, r0
/* 80284CA8 00281BE8  7C 03 00 50 */	subf r0, r3, r0
/* 80284CAC 00281BEC  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80284CB0 00281BF0  80 64 00 04 */	lwz r3, 4(r4)
/* 80284CB4 00281BF4  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80284CB8 00281BF8  7C 1F 02 14 */	add r0, r31, r0
/* 80284CBC 00281BFC  7C 03 00 50 */	subf r0, r3, r0
/* 80284CC0 00281C00  90 03 00 0C */	stw r0, 0xc(r3)
/* 80284CC4 00281C04  48 00 00 3C */	b lbl_80284D00
lbl_80284CC8:
/* 80284CC8 00281C08  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 80284CCC 00281C0C  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 80284CD0 00281C10  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 80284CD4 00281C14  7C 84 1A 14 */	add r4, r4, r3
/* 80284CD8 00281C18  90 9B 00 3C */	stw r4, 0x3c(r27)
/* 80284CDC 00281C1C  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 80284CE0 00281C20  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 80284CE4 00281C24  7C 63 00 2E */	lwzx r3, r3, r0
/* 80284CE8 00281C28  80 84 00 34 */	lwz r4, 0x34(r4)
/* 80284CEC 00281C2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80284CF0 00281C30  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80284CF4 00281C34  7D 89 03 A6 */	mtctr r12
/* 80284CF8 00281C38  4E 80 04 21 */	bctrl 
/* 80284CFC 00281C3C  3B 9C 00 01 */	addi r28, r28, 1
lbl_80284D00:
/* 80284D00 00281C40  A0 1E 00 5C */	lhz r0, 0x5c(r30)
/* 80284D04 00281C44  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 80284D08 00281C48  7C 03 00 40 */	cmplw r3, r0
/* 80284D0C 00281C4C  41 80 FF BC */	blt lbl_80284CC8
/* 80284D10 00281C50  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 80284D14 00281C54  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80284D18 00281C58  7C 08 03 A6 */	mtlr r0
/* 80284D1C 00281C5C  38 21 00 30 */	addi r1, r1, 0x30
/* 80284D20 00281C60  4E 80 00 20 */	blr 

.global createItem__Q34Game7Wealthy3ObjFv
createItem__Q34Game7Wealthy3ObjFv:
/* 80284D24 00281C64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80284D28 00281C68  7C 08 02 A6 */	mflr r0
/* 80284D2C 00281C6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80284D30 00281C70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80284D34 00281C74  93 C1 00 08 */	stw r30, 8(r1)
/* 80284D38 00281C78  7C 7E 1B 78 */	mr r30, r3
/* 80284D3C 00281C7C  4B FD 9C 15 */	bl createTreasureItem__Q34Game6Kogane3ObjFv
/* 80284D40 00281C80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80284D44 00281C84  40 82 01 0C */	bne lbl_80284E50
/* 80284D48 00281C88  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80284D4C 00281C8C  3B E0 00 01 */	li r31, 1
/* 80284D50 00281C90  38 80 00 00 */	li r4, 0
/* 80284D54 00281C94  38 A0 00 00 */	li r5, 0
/* 80284D58 00281C98  2C 00 00 01 */	cmpwi r0, 1
/* 80284D5C 00281C9C  41 82 00 54 */	beq lbl_80284DB0
/* 80284D60 00281CA0  40 80 00 10 */	bge lbl_80284D70
/* 80284D64 00281CA4  2C 00 00 00 */	cmpwi r0, 0
/* 80284D68 00281CA8  40 80 00 14 */	bge lbl_80284D7C
/* 80284D6C 00281CAC  48 00 00 B8 */	b lbl_80284E24
lbl_80284D70:
/* 80284D70 00281CB0  2C 00 00 03 */	cmpwi r0, 3
/* 80284D74 00281CB4  40 80 00 B0 */	bge lbl_80284E24
/* 80284D78 00281CB8  48 00 00 70 */	b lbl_80284DE8
lbl_80284D7C:
/* 80284D7C 00281CBC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80284D80 00281CC0  28 03 00 00 */	cmplwi r3, 0
/* 80284D84 00281CC4  41 82 00 20 */	beq lbl_80284DA4
/* 80284D88 00281CC8  88 03 00 48 */	lbz r0, 0x48(r3)
/* 80284D8C 00281CCC  28 00 00 00 */	cmplwi r0, 0
/* 80284D90 00281CD0  41 82 00 14 */	beq lbl_80284DA4
/* 80284D94 00281CD4  3B E0 00 00 */	li r31, 0
/* 80284D98 00281CD8  38 80 00 00 */	li r4, 0
/* 80284D9C 00281CDC  38 A0 00 03 */	li r5, 3
/* 80284DA0 00281CE0  48 00 00 84 */	b lbl_80284E24
lbl_80284DA4:
/* 80284DA4 00281CE4  38 80 00 05 */	li r4, 5
/* 80284DA8 00281CE8  38 A0 00 03 */	li r5, 3
/* 80284DAC 00281CEC  48 00 00 78 */	b lbl_80284E24
lbl_80284DB0:
/* 80284DB0 00281CF0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80284DB4 00281CF4  3B E0 00 00 */	li r31, 0
/* 80284DB8 00281CF8  28 03 00 00 */	cmplwi r3, 0
/* 80284DBC 00281CFC  41 82 00 20 */	beq lbl_80284DDC
/* 80284DC0 00281D00  38 80 00 1D */	li r4, 0x1d
/* 80284DC4 00281D04  4B F6 26 1D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80284DC8 00281D08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80284DCC 00281D0C  41 82 00 10 */	beq lbl_80284DDC
/* 80284DD0 00281D10  38 80 00 01 */	li r4, 1
/* 80284DD4 00281D14  38 A0 00 01 */	li r5, 1
/* 80284DD8 00281D18  48 00 00 4C */	b lbl_80284E24
lbl_80284DDC:
/* 80284DDC 00281D1C  38 80 00 00 */	li r4, 0
/* 80284DE0 00281D20  38 A0 00 03 */	li r5, 3
/* 80284DE4 00281D24  48 00 00 40 */	b lbl_80284E24
lbl_80284DE8:
/* 80284DE8 00281D28  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80284DEC 00281D2C  3B E0 00 00 */	li r31, 0
/* 80284DF0 00281D30  28 03 00 00 */	cmplwi r3, 0
/* 80284DF4 00281D34  41 82 00 20 */	beq lbl_80284E14
/* 80284DF8 00281D38  38 80 00 1D */	li r4, 0x1d
/* 80284DFC 00281D3C  4B F6 25 E5 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80284E00 00281D40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80284E04 00281D44  41 82 00 10 */	beq lbl_80284E14
/* 80284E08 00281D48  38 80 00 01 */	li r4, 1
/* 80284E0C 00281D4C  38 A0 00 01 */	li r5, 1
/* 80284E10 00281D50  48 00 00 0C */	b lbl_80284E1C
lbl_80284E14:
/* 80284E14 00281D54  38 80 00 00 */	li r4, 0
/* 80284E18 00281D58  38 A0 00 03 */	li r5, 3
lbl_80284E1C:
/* 80284E1C 00281D5C  C0 02 D3 98 */	lfs f0, lbl_8051B6F8@sda21(r2)
/* 80284E20 00281D60  D0 1E 02 C4 */	stfs f0, 0x2c4(r30)
lbl_80284E24:
/* 80284E24 00281D64  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80284E28 00281D68  41 82 00 10 */	beq lbl_80284E38
/* 80284E2C 00281D6C  7F C3 F3 78 */	mr r3, r30
/* 80284E30 00281D70  4B FD 9C B5 */	bl createPellet__Q34Game6Kogane3ObjFii
/* 80284E34 00281D74  48 00 00 10 */	b lbl_80284E44
lbl_80284E38:
/* 80284E38 00281D78  7F C3 F3 78 */	mr r3, r30
/* 80284E3C 00281D7C  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 80284E40 00281D80  4B FD 9F 39 */	bl createDoping__Q34Game6Kogane3ObjFUci
lbl_80284E44:
/* 80284E44 00281D84  80 7E 02 C0 */	lwz r3, 0x2c0(r30)
/* 80284E48 00281D88  38 03 00 01 */	addi r0, r3, 1
/* 80284E4C 00281D8C  90 1E 02 C0 */	stw r0, 0x2c0(r30)
lbl_80284E50:
/* 80284E50 00281D90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80284E54 00281D94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80284E58 00281D98  83 C1 00 08 */	lwz r30, 8(r1)
/* 80284E5C 00281D9C  7C 08 03 A6 */	mtlr r0
/* 80284E60 00281DA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80284E64 00281DA4  4E 80 00 20 */	blr 

.global createEffect__Q34Game7Wealthy3ObjFv
createEffect__Q34Game7Wealthy3ObjFv:
/* 80284E68 00281DA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80284E6C 00281DAC  7C 08 02 A6 */	mflr r0
/* 80284E70 00281DB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80284E74 00281DB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80284E78 00281DB8  7C 7F 1B 78 */	mr r31, r3
/* 80284E7C 00281DBC  38 60 00 14 */	li r3, 0x14
/* 80284E80 00281DC0  4B D9 F0 25 */	bl __nw__FUl
/* 80284E84 00281DC4  28 03 00 00 */	cmplwi r3, 0
/* 80284E88 00281DC8  41 82 00 78 */	beq lbl_80284F00
/* 80284E8C 00281DCC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80284E90 00281DD0  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 80284E94 00281DD4  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80284E98 00281DD8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80284E9C 00281DDC  90 03 00 00 */	stw r0, 0(r3)
/* 80284EA0 00281DE0  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 80284EA4 00281DE4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80284EA8 00281DE8  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 80284EAC 00281DEC  90 03 00 04 */	stw r0, 4(r3)
/* 80284EB0 00281DF0  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 80284EB4 00281DF4  3C 80 80 4D */	lis r4, __vt__Q23efx11TOoganeKira@ha
/* 80284EB8 00281DF8  38 05 00 14 */	addi r0, r5, 0x14
/* 80284EBC 00281DFC  90 A3 00 00 */	stw r5, 0(r3)
/* 80284EC0 00281E00  38 84 90 78 */	addi r4, r4, __vt__Q23efx11TOoganeKira@l
/* 80284EC4 00281E04  39 20 00 00 */	li r9, 0
/* 80284EC8 00281E08  39 00 02 B2 */	li r8, 0x2b2
/* 80284ECC 00281E0C  90 03 00 04 */	stw r0, 4(r3)
/* 80284ED0 00281E10  38 C7 00 14 */	addi r6, r7, 0x14
/* 80284ED4 00281E14  38 A0 02 5A */	li r5, 0x25a
/* 80284ED8 00281E18  38 04 00 14 */	addi r0, r4, 0x14
/* 80284EDC 00281E1C  91 23 00 08 */	stw r9, 8(r3)
/* 80284EE0 00281E20  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80284EE4 00281E24  99 23 00 0E */	stb r9, 0xe(r3)
/* 80284EE8 00281E28  90 E3 00 00 */	stw r7, 0(r3)
/* 80284EEC 00281E2C  90 C3 00 04 */	stw r6, 4(r3)
/* 80284EF0 00281E30  91 23 00 10 */	stw r9, 0x10(r3)
/* 80284EF4 00281E34  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 80284EF8 00281E38  90 83 00 00 */	stw r4, 0(r3)
/* 80284EFC 00281E3C  90 03 00 04 */	stw r0, 4(r3)
lbl_80284F00:
/* 80284F00 00281E40  90 7F 02 DC */	stw r3, 0x2dc(r31)
/* 80284F04 00281E44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80284F08 00281E48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80284F0C 00281E4C  7C 08 03 A6 */	mtlr r0
/* 80284F10 00281E50  38 21 00 10 */	addi r1, r1, 0x10
/* 80284F14 00281E54  4E 80 00 20 */	blr 

.global startBodyEffect__Q34Game7Wealthy3ObjFv
startBodyEffect__Q34Game7Wealthy3ObjFv:
/* 80284F18 00281E58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80284F1C 00281E5C  7C 08 02 A6 */	mflr r0
/* 80284F20 00281E60  38 82 D3 9C */	addi r4, r2, lbl_8051B6FC@sda21
/* 80284F24 00281E64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80284F28 00281E68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80284F2C 00281E6C  7C 7F 1B 78 */	mr r31, r3
/* 80284F30 00281E70  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80284F34 00281E74  48 1B A0 B1 */	bl getJoint__Q28SysShape5ModelFPc
/* 80284F38 00281E78  48 1A 49 69 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80284F3C 00281E7C  80 BF 02 DC */	lwz r5, 0x2dc(r31)
/* 80284F40 00281E80  38 80 00 00 */	li r4, 0
/* 80284F44 00281E84  90 65 00 10 */	stw r3, 0x10(r5)
/* 80284F48 00281E88  80 7F 02 DC */	lwz r3, 0x2dc(r31)
/* 80284F4C 00281E8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80284F50 00281E90  81 8C 00 08 */	lwz r12, 8(r12)
/* 80284F54 00281E94  7D 89 03 A6 */	mtctr r12
/* 80284F58 00281E98  4E 80 04 21 */	bctrl 
/* 80284F5C 00281E9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80284F60 00281EA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80284F64 00281EA4  7C 08 03 A6 */	mtlr r0
/* 80284F68 00281EA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80284F6C 00281EAC  4E 80 00 20 */	blr 

.global finishBodyEffect__Q34Game7Wealthy3ObjFv
finishBodyEffect__Q34Game7Wealthy3ObjFv:
/* 80284F70 00281EB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80284F74 00281EB4  7C 08 02 A6 */	mflr r0
/* 80284F78 00281EB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80284F7C 00281EBC  80 63 02 DC */	lwz r3, 0x2dc(r3)
/* 80284F80 00281EC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80284F84 00281EC4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80284F88 00281EC8  7D 89 03 A6 */	mtctr r12
/* 80284F8C 00281ECC  4E 80 04 21 */	bctrl 
/* 80284F90 00281ED0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80284F94 00281ED4  7C 08 03 A6 */	mtlr r0
/* 80284F98 00281ED8  38 21 00 10 */	addi r1, r1, 0x10
/* 80284F9C 00281EDC  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game7Wealthy3ObjFv
effectDrawOn__Q34Game7Wealthy3ObjFv:
/* 80284FA0 00281EE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80284FA4 00281EE4  7C 08 02 A6 */	mflr r0
/* 80284FA8 00281EE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80284FAC 00281EEC  80 63 02 DC */	lwz r3, 0x2dc(r3)
/* 80284FB0 00281EF0  81 83 00 00 */	lwz r12, 0(r3)
/* 80284FB4 00281EF4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80284FB8 00281EF8  7D 89 03 A6 */	mtctr r12
/* 80284FBC 00281EFC  4E 80 04 21 */	bctrl 
/* 80284FC0 00281F00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80284FC4 00281F04  7C 08 03 A6 */	mtlr r0
/* 80284FC8 00281F08  38 21 00 10 */	addi r1, r1, 0x10
/* 80284FCC 00281F0C  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game7Wealthy3ObjFv
effectDrawOff__Q34Game7Wealthy3ObjFv:
/* 80284FD0 00281F10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80284FD4 00281F14  7C 08 02 A6 */	mflr r0
/* 80284FD8 00281F18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80284FDC 00281F1C  80 63 02 DC */	lwz r3, 0x2dc(r3)
/* 80284FE0 00281F20  81 83 00 00 */	lwz r12, 0(r3)
/* 80284FE4 00281F24  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80284FE8 00281F28  7D 89 03 A6 */	mtctr r12
/* 80284FEC 00281F2C  4E 80 04 21 */	bctrl 
/* 80284FF0 00281F30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80284FF4 00281F34  7C 08 03 A6 */	mtlr r0
/* 80284FF8 00281F38  38 21 00 10 */	addi r1, r1, 0x10
/* 80284FFC 00281F3C  4E 80 00 20 */	blr 

.global createPressSENormal__Q34Game7Wealthy3ObjFv
createPressSENormal__Q34Game7Wealthy3ObjFv:
/* 80285000 00281F40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80285004 00281F44  7C 08 02 A6 */	mflr r0
/* 80285008 00281F48  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028500C 00281F4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80285010 00281F50  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 80285014 00281F54  7D 89 03 A6 */	mtctr r12
/* 80285018 00281F58  4E 80 04 21 */	bctrl 
/* 8028501C 00281F5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80285020 00281F60  38 80 58 80 */	li r4, 0x5880
/* 80285024 00281F64  38 A0 00 00 */	li r5, 0
/* 80285028 00281F68  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8028502C 00281F6C  7D 89 03 A6 */	mtctr r12
/* 80285030 00281F70  4E 80 04 21 */	bctrl 
/* 80285034 00281F74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80285038 00281F78  7C 08 03 A6 */	mtlr r0
/* 8028503C 00281F7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80285040 00281F80  4E 80 00 20 */	blr 

.global __dt__Q23efx11TOoganeKiraFv
__dt__Q23efx11TOoganeKiraFv:
/* 80285044 00281F84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80285048 00281F88  7C 08 02 A6 */	mflr r0
/* 8028504C 00281F8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80285050 00281F90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80285054 00281F94  7C 9F 23 78 */	mr r31, r4
/* 80285058 00281F98  93 C1 00 08 */	stw r30, 8(r1)
/* 8028505C 00281F9C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80285060 00281FA0  41 82 00 64 */	beq lbl_802850C4
/* 80285064 00281FA4  3C 60 80 4D */	lis r3, __vt__Q23efx11TOoganeKira@ha
/* 80285068 00281FA8  38 63 90 78 */	addi r3, r3, __vt__Q23efx11TOoganeKira@l
/* 8028506C 00281FAC  90 7E 00 00 */	stw r3, 0(r30)
/* 80285070 00281FB0  38 03 00 14 */	addi r0, r3, 0x14
/* 80285074 00281FB4  90 1E 00 04 */	stw r0, 4(r30)
/* 80285078 00281FB8  41 82 00 3C */	beq lbl_802850B4
/* 8028507C 00281FBC  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 80285080 00281FC0  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 80285084 00281FC4  90 7E 00 00 */	stw r3, 0(r30)
/* 80285088 00281FC8  38 03 00 14 */	addi r0, r3, 0x14
/* 8028508C 00281FCC  90 1E 00 04 */	stw r0, 4(r30)
/* 80285090 00281FD0  41 82 00 24 */	beq lbl_802850B4
/* 80285094 00281FD4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80285098 00281FD8  38 7E 00 04 */	addi r3, r30, 4
/* 8028509C 00281FDC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802850A0 00281FE0  38 80 00 00 */	li r4, 0
/* 802850A4 00281FE4  90 BE 00 00 */	stw r5, 0(r30)
/* 802850A8 00281FE8  38 05 00 14 */	addi r0, r5, 0x14
/* 802850AC 00281FEC  90 1E 00 04 */	stw r0, 4(r30)
/* 802850B0 00281FF0  4B E0 AB ED */	bl __dt__18JPAEmitterCallBackFv
lbl_802850B4:
/* 802850B4 00281FF4  7F E0 07 35 */	extsh. r0, r31
/* 802850B8 00281FF8  40 81 00 0C */	ble lbl_802850C4
/* 802850BC 00281FFC  7F C3 F3 78 */	mr r3, r30
/* 802850C0 00282000  4B D9 EF F5 */	bl __dl__FPv
lbl_802850C4:
/* 802850C4 00282004  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802850C8 00282008  7F C3 F3 78 */	mr r3, r30
/* 802850CC 0028200C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802850D0 00282010  83 C1 00 08 */	lwz r30, 8(r1)
/* 802850D4 00282014  7C 08 03 A6 */	mtlr r0
/* 802850D8 00282018  38 21 00 10 */	addi r1, r1, 0x10
/* 802850DC 0028201C  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game7Wealthy3ObjFv
getEnemyTypeID__Q34Game7Wealthy3ObjFv:
/* 802850E0 00282020  38 60 00 0A */	li r3, 0xa
/* 802850E4 00282024  4E 80 00 20 */	blr 

.global "@4@__dt__Q23efx11TOoganeKiraFv"
"@4@__dt__Q23efx11TOoganeKiraFv":
/* 802850E8 00282028  38 63 FF FC */	addi r3, r3, -4
/* 802850EC 0028202C  4B FF FF 58 */	b __dt__Q23efx11TOoganeKiraFv
