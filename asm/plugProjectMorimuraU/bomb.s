.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23efx14TBombrockLight
__vt__Q23efx14TBombrockLight:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TBombrockLightFv"
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
	.4byte __dt__Q23efx14TBombrockLightFv
.global __vt__Q34Game4Bomb3Obj
__vt__Q34Game4Bomb3Obj:
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
	.4byte onInit__Q34Game4Bomb3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game4Bomb3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q34Game4Bomb3ObjFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q34Game4Bomb3ObjFf
	.4byte doDirectDraw__Q34Game4Bomb3ObjFR8Graphics
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
	.4byte onStartCapture__Q34Game4Bomb3ObjFv
	.4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
	.4byte onEndCapture__Q34Game4Bomb3ObjFv
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
	.4byte isUnderground__Q34Game4Bomb3ObjFv
	.4byte isLivingThing__Q34Game4Bomb3ObjFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte bounceCallback__Q34Game4Bomb3ObjFPQ23Sys8Triangle
	.4byte collisionCallback__Q34Game4Bomb3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game4Bomb3ObjFRQ24Game11ShadowParam
	.4byte needShadow__Q34Game4Bomb3ObjFv
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
	.4byte __dt__Q34Game4Bomb3ObjFv
	.4byte "birth__Q34Game4Bomb3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game4Bomb3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game4Bomb3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game4Bomb3ObjFv
	.4byte doAnimationCullingOn__Q34Game4Bomb3ObjFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game4Bomb3ObjFR8Graphics
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
	.4byte setParameters__Q34Game4Bomb3ObjFv
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
	.4byte getEnemyTypeID__Q34Game4Bomb3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game4Bomb3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game4Bomb3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q34Game4Bomb3ObjFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game4Bomb3ObjFv
	.4byte doFinishStoneState__Q34Game4Bomb3ObjFv
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
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q24Game9EnemyBaseFv
	.4byte doStartMovie__Q34Game4Bomb3ObjFv
	.4byte doEndMovie__Q34Game4Bomb3ObjFv
	.4byte setFSM__Q34Game4Bomb3ObjFPQ34Game4Bomb3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@728@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@728@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@728@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@728@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@728@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@728@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051E330:
	.float 0.0
lbl_8051E334:
	.float 20.0
.balign 4
lbl_8051E338:
	.asciz "core1"
.balign 4
lbl_8051E340:
	.float 0.9
lbl_8051E344:
	.float 4.0
lbl_8051E348:
	.float 325.9493
lbl_8051E34C:
	.float -325.9493
lbl_8051E350:
	.float 2.0
lbl_8051E354:
	.float 1.0
lbl_8051E358:
	.float 30.0
lbl_8051E35C:
	.float 10.0
.balign 8
lbl_8051E360:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_8051E368:
	.float 0.5
lbl_8051E36C:
	.float 1.3

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setParameters__Q34Game4Bomb3ObjFv
setParameters__Q34Game4Bomb3ObjFv:
/* 8034A21C 0034715C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034A220 00347160  7C 08 02 A6 */	mflr r0
/* 8034A224 00347164  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034A228 00347168  4B DB 89 B1 */	bl setParameters__Q24Game9EnemyBaseFv
/* 8034A22C 0034716C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034A230 00347170  7C 08 03 A6 */	mtlr r0
/* 8034A234 00347174  38 21 00 10 */	addi r1, r1, 0x10
/* 8034A238 00347178  4E 80 00 20 */	blr 

.global onStartCapture__Q34Game4Bomb3ObjFv
onStartCapture__Q34Game4Bomb3ObjFv:
/* 8034A23C 0034717C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8034A240 00347180  7C 08 02 A6 */	mflr r0
/* 8034A244 00347184  38 A0 00 00 */	li r5, 0
/* 8034A248 00347188  38 C0 00 00 */	li r6, 0
/* 8034A24C 0034718C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8034A250 00347190  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8034A254 00347194  7C 7F 1B 78 */	mr r31, r3
/* 8034A258 00347198  7F E4 FB 78 */	mr r4, r31
/* 8034A25C 0034719C  80 63 02 D0 */	lwz r3, 0x2d0(r3)
/* 8034A260 003471A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8034A264 003471A4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8034A268 003471A8  7D 89 03 A6 */	mtctr r12
/* 8034A26C 003471AC  4E 80 04 21 */	bctrl 
/* 8034A270 003471B0  80 BF 00 B8 */	lwz r5, 0xb8(r31)
/* 8034A274 003471B4  28 05 00 00 */	cmplwi r5, 0
/* 8034A278 003471B8  41 82 00 9C */	beq .L_8034A314
/* 8034A27C 003471BC  C0 45 00 2C */	lfs f2, 0x2c(r5)
/* 8034A280 003471C0  7F E3 FB 78 */	mr r3, r31
/* 8034A284 003471C4  C0 25 00 1C */	lfs f1, 0x1c(r5)
/* 8034A288 003471C8  38 81 00 08 */	addi r4, r1, 8
/* 8034A28C 003471CC  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 8034A290 003471D0  D0 01 00 08 */	stfs f0, 8(r1)
/* 8034A294 003471D4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8034A298 003471D8  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8034A29C 003471DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8034A2A0 003471E0  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8034A2A4 003471E4  7D 89 03 A6 */	mtctr r12
/* 8034A2A8 003471E8  4E 80 04 21 */	bctrl 
/* 8034A2AC 003471EC  C0 02 FF D0 */	lfs f0, lbl_8051E330@sda21(r2)
/* 8034A2B0 003471F0  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 8034A2B4 003471F4  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 8034A2B8 003471F8  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 8034A2BC 003471FC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8034A2C0 00347200  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8034A2C4 00347204  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8034A2C8 00347208  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8034A2CC 0034720C  60 00 04 00 */	ori r0, r0, 0x400
/* 8034A2D0 00347210  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8034A2D4 00347214  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8034A2D8 00347218  28 03 00 00 */	cmplwi r3, 0
/* 8034A2DC 0034721C  41 82 00 20 */	beq .L_8034A2FC
/* 8034A2E0 00347220  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8034A2E4 00347224  2C 00 00 01 */	cmpwi r0, 1
/* 8034A2E8 00347228  40 82 00 14 */	bne .L_8034A2FC
/* 8034A2EC 0034722C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8034A2F0 00347230  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 8034A2F4 00347234  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8034A2F8 00347238  48 00 00 10 */	b .L_8034A308
.L_8034A2FC:
/* 8034A2FC 0034723C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8034A300 00347240  60 00 00 01 */	ori r0, r0, 1
/* 8034A304 00347244  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_8034A308:
/* 8034A308 00347248  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8034A30C 0034724C  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8034A310 00347250  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_8034A314:
/* 8034A314 00347254  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8034A318 00347258  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8034A31C 0034725C  7C 08 03 A6 */	mtlr r0
/* 8034A320 00347260  38 21 00 20 */	addi r1, r1, 0x20
/* 8034A324 00347264  4E 80 00 20 */	blr 

.global onEndCapture__Q34Game4Bomb3ObjFv
onEndCapture__Q34Game4Bomb3ObjFv:
/* 8034A328 00347268  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034A32C 0034726C  7C 08 02 A6 */	mflr r0
/* 8034A330 00347270  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034A334 00347274  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034A338 00347278  7C 7F 1B 78 */	mr r31, r3
/* 8034A33C 0034727C  4B DB D4 31 */	bl constraintOff__Q24Game9EnemyBaseFv
/* 8034A340 00347280  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8034A344 00347284  38 60 00 01 */	li r3, 1
/* 8034A348 00347288  38 00 00 00 */	li r0, 0
/* 8034A34C 0034728C  54 84 00 3C */	rlwinm r4, r4, 0, 0, 0x1e
/* 8034A350 00347290  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8034A354 00347294  98 7F 02 BC */	stb r3, 0x2bc(r31)
/* 8034A358 00347298  90 1F 00 B8 */	stw r0, 0xb8(r31)
/* 8034A35C 0034729C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034A360 003472A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034A364 003472A4  7C 08 03 A6 */	mtlr r0
/* 8034A368 003472A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8034A36C 003472AC  4E 80 00 20 */	blr 

.global "birth__Q34Game4Bomb3ObjFR10Vector3<f>f"
"birth__Q34Game4Bomb3ObjFR10Vector3<f>f":
/* 8034A370 003472B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034A374 003472B4  7C 08 02 A6 */	mflr r0
/* 8034A378 003472B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034A37C 003472BC  4B DB 86 85 */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 8034A380 003472C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034A384 003472C4  7C 08 03 A6 */	mtlr r0
/* 8034A388 003472C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8034A38C 003472CC  4E 80 00 20 */	blr 

.global onInit__Q34Game4Bomb3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game4Bomb3ObjFPQ24Game15CreatureInitArg:
/* 8034A390 003472D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8034A394 003472D4  7C 08 02 A6 */	mflr r0
/* 8034A398 003472D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8034A39C 003472DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8034A3A0 003472E0  7C 7F 1B 78 */	mr r31, r3
/* 8034A3A4 003472E4  4B DB 76 B5 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8034A3A8 003472E8  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 8034A3AC 003472EC  38 00 00 00 */	li r0, 0
/* 8034A3B0 003472F0  7F E4 FB 78 */	mr r4, r31
/* 8034A3B4 003472F4  38 A0 00 00 */	li r5, 0
/* 8034A3B8 003472F8  54 63 06 6E */	rlwinm r3, r3, 0, 0x19, 0x17
/* 8034A3BC 003472FC  38 C0 00 00 */	li r6, 0
/* 8034A3C0 00347300  90 7F 01 E0 */	stw r3, 0x1e0(r31)
/* 8034A3C4 00347304  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 8034A3C8 00347308  54 63 07 76 */	rlwinm r3, r3, 0, 0x1d, 0x1b
/* 8034A3CC 0034730C  90 7F 01 E0 */	stw r3, 0x1e0(r31)
/* 8034A3D0 00347310  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 8034A3D4 00347314  54 63 06 2C */	rlwinm r3, r3, 0, 0x18, 0x16
/* 8034A3D8 00347318  90 7F 01 E0 */	stw r3, 0x1e0(r31)
/* 8034A3DC 0034731C  98 1F 02 BC */	stb r0, 0x2bc(r31)
/* 8034A3E0 00347320  98 1F 02 BD */	stb r0, 0x2bd(r31)
/* 8034A3E4 00347324  98 1F 02 C8 */	stb r0, 0x2c8(r31)
/* 8034A3E8 00347328  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 8034A3EC 0034732C  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8034A3F0 00347330  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 8034A3F4 00347334  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 8034A3F8 00347338  81 83 00 00 */	lwz r12, 0(r3)
/* 8034A3FC 0034733C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8034A400 00347340  7D 89 03 A6 */	mtctr r12
/* 8034A404 00347344  4E 80 04 21 */	bctrl 
/* 8034A408 00347348  7F E3 FB 78 */	mr r3, r31
/* 8034A40C 0034734C  4B DB D6 21 */	bl isBirthTypeDropGroup__Q24Game9EnemyBaseFv
/* 8034A410 00347350  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034A414 00347354  40 82 00 58 */	bne .L_8034A46C
/* 8034A418 00347358  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8034A41C 0034735C  60 00 04 00 */	ori r0, r0, 0x400
/* 8034A420 00347360  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8034A424 00347364  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8034A428 00347368  28 03 00 00 */	cmplwi r3, 0
/* 8034A42C 0034736C  41 82 00 40 */	beq .L_8034A46C
/* 8034A430 00347370  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8034A434 00347374  38 81 00 08 */	addi r4, r1, 8
/* 8034A438 00347378  C0 02 FF D4 */	lfs f0, lbl_8051E334@sda21(r2)
/* 8034A43C 0034737C  D0 21 00 08 */	stfs f1, 8(r1)
/* 8034A440 00347380  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8034A444 00347384  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8034A448 00347388  EC 01 00 2A */	fadds f0, f1, f0
/* 8034A44C 0034738C  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8034A450 00347390  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8034A454 00347394  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8034A458 00347398  81 83 00 04 */	lwz r12, 4(r3)
/* 8034A45C 0034739C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8034A460 003473A0  7D 89 03 A6 */	mtctr r12
/* 8034A464 003473A4  4E 80 04 21 */	bctrl 
/* 8034A468 003473A8  D0 3F 01 90 */	stfs f1, 0x190(r31)
.L_8034A46C:
/* 8034A46C 003473AC  80 9F 01 88 */	lwz r4, 0x188(r31)
/* 8034A470 003473B0  38 00 00 00 */	li r0, 0
/* 8034A474 003473B4  7F E3 FB 78 */	mr r3, r31
/* 8034A478 003473B8  98 04 00 24 */	stb r0, 0x24(r4)
/* 8034A47C 003473BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8034A480 003473C0  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 8034A484 003473C4  7D 89 03 A6 */	mtctr r12
/* 8034A488 003473C8  4E 80 04 21 */	bctrl 
/* 8034A48C 003473CC  38 7F 01 38 */	addi r3, r31, 0x138
/* 8034A490 003473D0  38 9F 01 68 */	addi r4, r31, 0x168
/* 8034A494 003473D4  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 8034A498 003473D8  38 DF 01 8C */	addi r6, r31, 0x18c
/* 8034A49C 003473DC  48 0D DE 3D */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 8034A4A0 003473E0  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 8034A4A4 003473E4  38 7F 01 38 */	addi r3, r31, 0x138
/* 8034A4A8 003473E8  80 84 00 08 */	lwz r4, 8(r4)
/* 8034A4AC 003473EC  38 84 00 24 */	addi r4, r4, 0x24
/* 8034A4B0 003473F0  4B D9 FE 1D */	bl PSMTXCopy
/* 8034A4B4 003473F4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8034A4B8 003473F8  80 63 00 08 */	lwz r3, 8(r3)
/* 8034A4BC 003473FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8034A4C0 00347400  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8034A4C4 00347404  7D 89 03 A6 */	mtctr r12
/* 8034A4C8 00347408  4E 80 04 21 */	bctrl 
/* 8034A4CC 0034740C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8034A4D0 00347410  38 82 FF D8 */	addi r4, r2, lbl_8051E338@sda21
/* 8034A4D4 00347414  48 0F 4B 11 */	bl getJoint__Q28SysShape5ModelFPc
/* 8034A4D8 00347418  48 0D F3 C9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8034A4DC 0034741C  80 9F 02 D4 */	lwz r4, 0x2d4(r31)
/* 8034A4E0 00347420  90 64 00 10 */	stw r3, 0x10(r4)
/* 8034A4E4 00347424  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8034A4E8 00347428  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8034A4EC 0034742C  7C 08 03 A6 */	mtlr r0
/* 8034A4F0 00347430  38 21 00 20 */	addi r1, r1, 0x20
/* 8034A4F4 00347434  4E 80 00 20 */	blr 

.global __ct__Q34Game4Bomb3ObjFv
__ct__Q34Game4Bomb3ObjFv:
/* 8034A4F8 00347438  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034A4FC 0034743C  7C 08 02 A6 */	mflr r0
/* 8034A500 00347440  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034A504 00347444  7C 80 07 35 */	extsh. r0, r4
/* 8034A508 00347448  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034A50C 0034744C  7C 7F 1B 78 */	mr r31, r3
/* 8034A510 00347450  93 C1 00 08 */	stw r30, 8(r1)
/* 8034A514 00347454  41 82 00 24 */	beq .L_8034A538
/* 8034A518 00347458  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 8034A51C 0034745C  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8034A520 00347460  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8034A524 00347464  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8034A528 00347468  38 00 00 00 */	li r0, 0
/* 8034A52C 0034746C  90 7F 02 D8 */	stw r3, 0x2d8(r31)
/* 8034A530 00347470  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 8034A534 00347474  90 1F 02 E0 */	stw r0, 0x2e0(r31)
.L_8034A538:
/* 8034A538 00347478  7F E3 FB 78 */	mr r3, r31
/* 8034A53C 0034747C  38 80 00 00 */	li r4, 0
/* 8034A540 00347480  4B DB 6E 61 */	bl __ct__Q24Game9EnemyBaseFv
/* 8034A544 00347484  3C 60 80 4E */	lis r3, __vt__Q34Game4Bomb3Obj@ha
/* 8034A548 00347488  38 9F 02 D8 */	addi r4, r31, 0x2d8
/* 8034A54C 0034748C  38 63 BB B4 */	addi r3, r3, __vt__Q34Game4Bomb3Obj@l
/* 8034A550 00347490  38 00 00 00 */	li r0, 0
/* 8034A554 00347494  90 7F 00 00 */	stw r3, 0(r31)
/* 8034A558 00347498  38 A3 01 B0 */	addi r5, r3, 0x1b0
/* 8034A55C 0034749C  38 C3 02 FC */	addi r6, r3, 0x2fc
/* 8034A560 003474A0  38 60 00 2C */	li r3, 0x2c
/* 8034A564 003474A4  90 BF 01 78 */	stw r5, 0x178(r31)
/* 8034A568 003474A8  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 8034A56C 003474AC  90 C5 00 00 */	stw r6, 0(r5)
/* 8034A570 003474B0  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 8034A574 003474B4  7C 85 20 50 */	subf r4, r5, r4
/* 8034A578 003474B8  90 85 00 0C */	stw r4, 0xc(r5)
/* 8034A57C 003474BC  98 1F 02 BC */	stb r0, 0x2bc(r31)
/* 8034A580 003474C0  98 1F 02 BD */	stb r0, 0x2bd(r31)
/* 8034A584 003474C4  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 8034A588 003474C8  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8034A58C 003474CC  98 1F 02 C8 */	stb r0, 0x2c8(r31)
/* 8034A590 003474D0  98 1F 02 C9 */	stb r0, 0x2c9(r31)
/* 8034A594 003474D4  90 1F 02 D0 */	stw r0, 0x2d0(r31)
/* 8034A598 003474D8  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 8034A59C 003474DC  4B CD 99 09 */	bl __nw__FUl
/* 8034A5A0 003474E0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8034A5A4 003474E4  41 82 00 44 */	beq .L_8034A5E8
/* 8034A5A8 003474E8  4B DD D3 CD */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8034A5AC 003474EC  3C 60 80 4E */	lis r3, __vt__Q34Game4Bomb14ProperAnimator@ha
/* 8034A5B0 003474F0  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8034A5B4 003474F4  38 03 BA 50 */	addi r0, r3, __vt__Q34Game4Bomb14ProperAnimator@l
/* 8034A5B8 003474F8  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8034A5BC 003474FC  90 1E 00 00 */	stw r0, 0(r30)
/* 8034A5C0 00347500  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8034A5C4 00347504  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8034A5C8 00347508  38 00 00 00 */	li r0, 0
/* 8034A5CC 0034750C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8034A5D0 00347510  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8034A5D4 00347514  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8034A5D8 00347518  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8034A5DC 0034751C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8034A5E0 00347520  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8034A5E4 00347524  90 1E 00 20 */	stw r0, 0x20(r30)
.L_8034A5E8:
/* 8034A5E8 00347528  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8034A5EC 0034752C  38 60 00 1C */	li r3, 0x1c
/* 8034A5F0 00347530  4B CD 98 B5 */	bl __nw__FUl
/* 8034A5F4 00347534  7C 64 1B 79 */	or. r4, r3, r3
/* 8034A5F8 00347538  41 82 00 24 */	beq .L_8034A61C
/* 8034A5FC 0034753C  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8034A600 00347540  3C 60 80 4E */	lis r3, __vt__Q34Game4Bomb3FSM@ha
/* 8034A604 00347544  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8034A608 00347548  38 A0 FF FF */	li r5, -1
/* 8034A60C 0034754C  90 04 00 00 */	stw r0, 0(r4)
/* 8034A610 00347550  38 03 BA 2C */	addi r0, r3, __vt__Q34Game4Bomb3FSM@l
/* 8034A614 00347554  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8034A618 00347558  90 04 00 00 */	stw r0, 0(r4)
.L_8034A61C:
/* 8034A61C 0034755C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8034A620 00347560  7F E3 FB 78 */	mr r3, r31
/* 8034A624 00347564  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8034A628 00347568  7D 89 03 A6 */	mtctr r12
/* 8034A62C 0034756C  4E 80 04 21 */	bctrl 
/* 8034A630 00347570  38 60 00 14 */	li r3, 0x14
/* 8034A634 00347574  4B CD 98 71 */	bl __nw__FUl
/* 8034A638 00347578  28 03 00 00 */	cmplwi r3, 0
/* 8034A63C 0034757C  41 82 00 78 */	beq .L_8034A6B4
/* 8034A640 00347580  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8034A644 00347584  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8034A648 00347588  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8034A64C 0034758C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8034A650 00347590  90 03 00 00 */	stw r0, 0(r3)
/* 8034A654 00347594  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8034A658 00347598  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8034A65C 0034759C  3C 80 80 4E */	lis r4, __vt__Q23efx10TChaseMtxT@ha
/* 8034A660 003475A0  90 03 00 04 */	stw r0, 4(r3)
/* 8034A664 003475A4  38 E4 68 5C */	addi r7, r4, __vt__Q23efx10TChaseMtxT@l
/* 8034A668 003475A8  3C 80 80 4E */	lis r4, __vt__Q23efx14TBombrockLight@ha
/* 8034A66C 003475AC  38 05 00 14 */	addi r0, r5, 0x14
/* 8034A670 003475B0  90 A3 00 00 */	stw r5, 0(r3)
/* 8034A674 003475B4  38 84 BB 68 */	addi r4, r4, __vt__Q23efx14TBombrockLight@l
/* 8034A678 003475B8  39 20 00 00 */	li r9, 0
/* 8034A67C 003475BC  39 00 02 B2 */	li r8, 0x2b2
/* 8034A680 003475C0  90 03 00 04 */	stw r0, 4(r3)
/* 8034A684 003475C4  38 C7 00 14 */	addi r6, r7, 0x14
/* 8034A688 003475C8  38 A0 02 60 */	li r5, 0x260
/* 8034A68C 003475CC  38 04 00 14 */	addi r0, r4, 0x14
/* 8034A690 003475D0  91 23 00 08 */	stw r9, 8(r3)
/* 8034A694 003475D4  B1 03 00 0C */	sth r8, 0xc(r3)
/* 8034A698 003475D8  99 23 00 0E */	stb r9, 0xe(r3)
/* 8034A69C 003475DC  90 E3 00 00 */	stw r7, 0(r3)
/* 8034A6A0 003475E0  90 C3 00 04 */	stw r6, 4(r3)
/* 8034A6A4 003475E4  91 23 00 10 */	stw r9, 0x10(r3)
/* 8034A6A8 003475E8  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8034A6AC 003475EC  90 83 00 00 */	stw r4, 0(r3)
/* 8034A6B0 003475F0  90 03 00 04 */	stw r0, 4(r3)
.L_8034A6B4:
/* 8034A6B4 003475F4  90 7F 02 D4 */	stw r3, 0x2d4(r31)
/* 8034A6B8 003475F8  7F E3 FB 78 */	mr r3, r31
/* 8034A6BC 003475FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034A6C0 00347600  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034A6C4 00347604  83 C1 00 08 */	lwz r30, 8(r1)
/* 8034A6C8 00347608  7C 08 03 A6 */	mtlr r0
/* 8034A6CC 0034760C  38 21 00 10 */	addi r1, r1, 0x10
/* 8034A6D0 00347610  4E 80 00 20 */	blr 

.global setFSM__Q34Game4Bomb3ObjFPQ34Game4Bomb3FSM
setFSM__Q34Game4Bomb3ObjFPQ34Game4Bomb3FSM:
/* 8034A6D4 00347614  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034A6D8 00347618  7C 08 02 A6 */	mflr r0
/* 8034A6DC 0034761C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034A6E0 00347620  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034A6E4 00347624  7C 7F 1B 78 */	mr r31, r3
/* 8034A6E8 00347628  90 83 02 D0 */	stw r4, 0x2d0(r3)
/* 8034A6EC 0034762C  7F E4 FB 78 */	mr r4, r31
/* 8034A6F0 00347630  80 63 02 D0 */	lwz r3, 0x2d0(r3)
/* 8034A6F4 00347634  81 83 00 00 */	lwz r12, 0(r3)
/* 8034A6F8 00347638  81 8C 00 08 */	lwz r12, 8(r12)
/* 8034A6FC 0034763C  7D 89 03 A6 */	mtctr r12
/* 8034A700 00347640  4E 80 04 21 */	bctrl 
/* 8034A704 00347644  38 00 00 00 */	li r0, 0
/* 8034A708 00347648  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8034A70C 0034764C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034A710 00347650  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034A714 00347654  7C 08 03 A6 */	mtlr r0
/* 8034A718 00347658  38 21 00 10 */	addi r1, r1, 0x10
/* 8034A71C 0034765C  4E 80 00 20 */	blr 

.global doUpdate__Q34Game4Bomb3ObjFv
doUpdate__Q34Game4Bomb3ObjFv:
/* 8034A720 00347660  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034A724 00347664  7C 08 02 A6 */	mflr r0
/* 8034A728 00347668  7C 64 1B 78 */	mr r4, r3
/* 8034A72C 0034766C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034A730 00347670  88 03 02 C9 */	lbz r0, 0x2c9(r3)
/* 8034A734 00347674  28 00 00 00 */	cmplwi r0, 0
/* 8034A738 00347678  41 82 00 60 */	beq .L_8034A798
/* 8034A73C 0034767C  C0 24 01 1C */	lfs f1, 0x11c(r4)
/* 8034A740 00347680  C0 42 FF E0 */	lfs f2, lbl_8051E340@sda21(r2)
/* 8034A744 00347684  C0 02 FF D0 */	lfs f0, lbl_8051E330@sda21(r2)
/* 8034A748 00347688  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8034A74C 0034768C  D0 24 01 1C */	stfs f1, 0x11c(r4)
/* 8034A750 00347690  C0 24 01 20 */	lfs f1, 0x120(r4)
/* 8034A754 00347694  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8034A758 00347698  D0 24 01 20 */	stfs f1, 0x120(r4)
/* 8034A75C 0034769C  C0 24 01 24 */	lfs f1, 0x124(r4)
/* 8034A760 003476A0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8034A764 003476A4  D0 24 01 24 */	stfs f1, 0x124(r4)
/* 8034A768 003476A8  C0 24 01 C8 */	lfs f1, 0x1c8(r4)
/* 8034A76C 003476AC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8034A770 003476B0  D0 24 01 C8 */	stfs f1, 0x1c8(r4)
/* 8034A774 003476B4  C0 24 01 CC */	lfs f1, 0x1cc(r4)
/* 8034A778 003476B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8034A77C 003476BC  40 81 00 0C */	ble .L_8034A788
/* 8034A780 003476C0  EC 01 00 B2 */	fmuls f0, f1, f2
/* 8034A784 003476C4  D0 04 01 CC */	stfs f0, 0x1cc(r4)
.L_8034A788:
/* 8034A788 003476C8  C0 24 01 D0 */	lfs f1, 0x1d0(r4)
/* 8034A78C 003476CC  C0 02 FF E0 */	lfs f0, lbl_8051E340@sda21(r2)
/* 8034A790 003476D0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8034A794 003476D4  D0 04 01 D0 */	stfs f0, 0x1d0(r4)
.L_8034A798:
/* 8034A798 003476D8  80 04 00 C8 */	lwz r0, 0xc8(r4)
/* 8034A79C 003476DC  28 00 00 00 */	cmplwi r0, 0
/* 8034A7A0 003476E0  41 82 00 18 */	beq .L_8034A7B8
/* 8034A7A4 003476E4  C0 02 FF D0 */	lfs f0, lbl_8051E330@sda21(r2)
/* 8034A7A8 003476E8  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 8034A7AC 003476EC  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 8034A7B0 003476F0  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 8034A7B4 003476F4  48 00 00 1C */	b .L_8034A7D0
.L_8034A7B8:
/* 8034A7B8 003476F8  C0 04 01 C8 */	lfs f0, 0x1c8(r4)
/* 8034A7BC 003476FC  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 8034A7C0 00347700  C0 04 01 CC */	lfs f0, 0x1cc(r4)
/* 8034A7C4 00347704  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 8034A7C8 00347708  C0 04 01 D0 */	lfs f0, 0x1d0(r4)
/* 8034A7CC 0034770C  D0 04 01 DC */	stfs f0, 0x1dc(r4)
.L_8034A7D0:
/* 8034A7D0 00347710  80 64 02 D0 */	lwz r3, 0x2d0(r4)
/* 8034A7D4 00347714  81 83 00 00 */	lwz r12, 0(r3)
/* 8034A7D8 00347718  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8034A7DC 0034771C  7D 89 03 A6 */	mtctr r12
/* 8034A7E0 00347720  4E 80 04 21 */	bctrl 
/* 8034A7E4 00347724  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034A7E8 00347728  7C 08 03 A6 */	mtlr r0
/* 8034A7EC 0034772C  38 21 00 10 */	addi r1, r1, 0x10
/* 8034A7F0 00347730  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game4Bomb3ObjFR8Graphics
doDirectDraw__Q34Game4Bomb3ObjFR8Graphics:
/* 8034A7F4 00347734  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game4Bomb3ObjFR8Graphics
doDebugDraw__Q34Game4Bomb3ObjFR8Graphics:
/* 8034A7F8 00347738  4E 80 00 20 */	blr 

.global doEntry__Q34Game4Bomb3ObjFv
doEntry__Q34Game4Bomb3ObjFv:
/* 8034A7FC 0034773C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034A800 00347740  7C 08 02 A6 */	mflr r0
/* 8034A804 00347744  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034A808 00347748  88 03 02 BD */	lbz r0, 0x2bd(r3)
/* 8034A80C 0034774C  28 00 00 00 */	cmplwi r0, 0
/* 8034A810 00347750  40 82 00 08 */	bne .L_8034A818
/* 8034A814 00347754  4B DB 8E 39 */	bl doEntry__Q24Game9EnemyBaseFv
.L_8034A818:
/* 8034A818 00347758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034A81C 0034775C  7C 08 03 A6 */	mtlr r0
/* 8034A820 00347760  38 21 00 10 */	addi r1, r1, 0x10
/* 8034A824 00347764  4E 80 00 20 */	blr 

.global doAnimationCullingOff__Q34Game4Bomb3ObjFv
doAnimationCullingOff__Q34Game4Bomb3ObjFv:
/* 8034A828 00347768  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8034A82C 0034776C  7C 08 02 A6 */	mflr r0
/* 8034A830 00347770  90 01 00 54 */	stw r0, 0x54(r1)
/* 8034A834 00347774  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8034A838 00347778  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8034A83C 0034777C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8034A840 00347780  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8034A844 00347784  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 8034A848 00347788  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 8034A84C 0034778C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8034A850 00347790  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8034A854 00347794  7C 7F 1B 78 */	mr r31, r3
/* 8034A858 00347798  38 00 00 00 */	li r0, 0
/* 8034A85C 0034779C  80 83 01 88 */	lwz r4, 0x188(r3)
/* 8034A860 003477A0  98 04 00 24 */	stb r0, 0x24(r4)
/* 8034A864 003477A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8034A868 003477A8  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 8034A86C 003477AC  7D 89 03 A6 */	mtctr r12
/* 8034A870 003477B0  4E 80 04 21 */	bctrl 
/* 8034A874 003477B4  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 8034A878 003477B8  3B C0 00 01 */	li r30, 1
/* 8034A87C 003477BC  C3 BF 01 64 */	lfs f29, 0x164(r31)
/* 8034A880 003477C0  28 03 00 00 */	cmplwi r3, 0
/* 8034A884 003477C4  C3 DF 01 54 */	lfs f30, 0x154(r31)
/* 8034A888 003477C8  C3 FF 01 44 */	lfs f31, 0x144(r31)
/* 8034A88C 003477CC  41 82 00 38 */	beq .L_8034A8C4
/* 8034A890 003477D0  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8034A894 003477D4  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8034A898 003477D8  FC 1F 00 00 */	fcmpu cr0, f31, f0
/* 8034A89C 003477DC  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 8034A8A0 003477E0  40 82 00 14 */	bne .L_8034A8B4
/* 8034A8A4 003477E4  FC 1E 00 00 */	fcmpu cr0, f30, f0
/* 8034A8A8 003477E8  40 82 00 0C */	bne .L_8034A8B4
/* 8034A8AC 003477EC  FC 1D 08 00 */	fcmpu cr0, f29, f1
/* 8034A8B0 003477F0  41 82 00 70 */	beq .L_8034A920
.L_8034A8B4:
/* 8034A8B4 003477F4  38 9F 01 38 */	addi r4, r31, 0x138
/* 8034A8B8 003477F8  3B C0 00 01 */	li r30, 1
/* 8034A8BC 003477FC  4B D9 FA 11 */	bl PSMTXCopy
/* 8034A8C0 00347800  48 00 00 60 */	b .L_8034A920
.L_8034A8C4:
/* 8034A8C4 00347804  7F E3 FB 78 */	mr r3, r31
/* 8034A8C8 00347808  3B C0 00 00 */	li r30, 0
/* 8034A8CC 0034780C  4B E5 4C BD */	bl isStickToMouth__Q24Game8CreatureFv
/* 8034A8D0 00347810  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034A8D4 00347814  40 82 00 34 */	bne .L_8034A908
/* 8034A8D8 00347818  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8034A8DC 0034781C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8034A8E0 00347820  40 82 00 28 */	bne .L_8034A908
/* 8034A8E4 00347824  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8034A8E8 00347828  FC 00 F8 00 */	fcmpu cr0, f0, f31
/* 8034A8EC 0034782C  40 82 00 1C */	bne .L_8034A908
/* 8034A8F0 00347830  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8034A8F4 00347834  FC 00 F0 00 */	fcmpu cr0, f0, f30
/* 8034A8F8 00347838  40 82 00 10 */	bne .L_8034A908
/* 8034A8FC 0034783C  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8034A900 00347840  FC 00 E8 00 */	fcmpu cr0, f0, f29
/* 8034A904 00347844  41 82 00 1C */	beq .L_8034A920
.L_8034A908:
/* 8034A908 00347848  38 7F 01 38 */	addi r3, r31, 0x138
/* 8034A90C 0034784C  38 9F 01 68 */	addi r4, r31, 0x168
/* 8034A910 00347850  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 8034A914 00347854  38 DF 01 8C */	addi r6, r31, 0x18c
/* 8034A918 00347858  3B C0 00 01 */	li r30, 1
/* 8034A91C 0034785C  48 0D D9 BD */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
.L_8034A920:
/* 8034A920 00347860  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8034A924 00347864  40 82 00 14 */	bne .L_8034A938
/* 8034A928 00347868  7F E3 FB 78 */	mr r3, r31
/* 8034A92C 0034786C  4B DB CA 0D */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 8034A930 00347870  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034A934 00347874  40 82 00 38 */	bne .L_8034A96C
.L_8034A938:
/* 8034A938 00347878  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 8034A93C 0034787C  38 7F 01 38 */	addi r3, r31, 0x138
/* 8034A940 00347880  80 84 00 08 */	lwz r4, 8(r4)
/* 8034A944 00347884  38 84 00 24 */	addi r4, r4, 0x24
/* 8034A948 00347888  4B D9 F9 85 */	bl PSMTXCopy
/* 8034A94C 0034788C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8034A950 00347890  80 63 00 08 */	lwz r3, 8(r3)
/* 8034A954 00347894  81 83 00 00 */	lwz r12, 0(r3)
/* 8034A958 00347898  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8034A95C 0034789C  7D 89 03 A6 */	mtctr r12
/* 8034A960 003478A0  4E 80 04 21 */	bctrl 
/* 8034A964 003478A4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8034A968 003478A8  4B DE B1 35 */	bl update__8CollTreeFv
.L_8034A96C:
/* 8034A96C 003478AC  7F E3 FB 78 */	mr r3, r31
/* 8034A970 003478B0  4B E5 4C 05 */	bl isStickTo__Q24Game8CreatureFv
/* 8034A974 003478B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034A978 003478B8  40 82 00 74 */	bne .L_8034A9EC
/* 8034A97C 003478BC  7F E3 FB 78 */	mr r3, r31
/* 8034A980 003478C0  4B DB C9 B9 */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 8034A984 003478C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034A988 003478C8  40 82 00 64 */	bne .L_8034A9EC
/* 8034A98C 003478CC  88 1F 02 C8 */	lbz r0, 0x2c8(r31)
/* 8034A990 003478D0  28 00 00 00 */	cmplwi r0, 0
/* 8034A994 003478D4  40 82 00 58 */	bne .L_8034A9EC
/* 8034A998 003478D8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8034A99C 003478DC  C0 02 FF E4 */	lfs f0, lbl_8051E344@sda21(r2)
/* 8034A9A0 003478E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8034A9A4 003478E4  40 80 00 48 */	bge .L_8034A9EC
/* 8034A9A8 003478E8  38 00 00 01 */	li r0, 1
/* 8034A9AC 003478EC  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 8034A9B0 003478F0  98 1F 02 C8 */	stb r0, 0x2c8(r31)
/* 8034A9B4 003478F4  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 8034A9B8 003478F8  38 81 00 08 */	addi r4, r1, 8
/* 8034A9BC 003478FC  90 01 00 08 */	stw r0, 8(r1)
/* 8034A9C0 00347900  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8034A9C4 00347904  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8034A9C8 00347908  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8034A9CC 0034790C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8034A9D0 00347910  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8034A9D4 00347914  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8034A9D8 00347918  80 7F 02 D4 */	lwz r3, 0x2d4(r31)
/* 8034A9DC 0034791C  81 83 00 00 */	lwz r12, 0(r3)
/* 8034A9E0 00347920  81 8C 00 08 */	lwz r12, 8(r12)
/* 8034A9E4 00347924  7D 89 03 A6 */	mtctr r12
/* 8034A9E8 00347928  4E 80 04 21 */	bctrl 
.L_8034A9EC:
/* 8034A9EC 0034792C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8034A9F0 00347930  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8034A9F4 00347934  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8034A9F8 00347938  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8034A9FC 0034793C  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 8034AA00 00347940  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 8034AA04 00347944  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8034AA08 00347948  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8034AA0C 0034794C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8034AA10 00347950  7C 08 03 A6 */	mtlr r0
/* 8034AA14 00347954  38 21 00 50 */	addi r1, r1, 0x50
/* 8034AA18 00347958  4E 80 00 20 */	blr 

.global doAnimationCullingOn__Q34Game4Bomb3ObjFv
doAnimationCullingOn__Q34Game4Bomb3ObjFv:
/* 8034AA1C 0034795C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034AA20 00347960  7C 08 02 A6 */	mflr r0
/* 8034AA24 00347964  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034AA28 00347968  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034AA2C 0034796C  7C 7F 1B 78 */	mr r31, r3
/* 8034AA30 00347970  48 00 07 85 */	bl isAnimStart__Q34Game4Bomb3ObjFv
/* 8034AA34 00347974  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034AA38 00347978  41 82 00 14 */	beq .L_8034AA4C
/* 8034AA3C 0034797C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8034AA40 00347980  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8034AA44 00347984  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8034AA48 00347988  48 00 00 0C */	b .L_8034AA54
.L_8034AA4C:
/* 8034AA4C 0034798C  7F E3 FB 78 */	mr r3, r31
/* 8034AA50 00347990  4B DB 88 C9 */	bl doAnimationCullingOn__Q24Game9EnemyBaseFv
.L_8034AA54:
/* 8034AA54 00347994  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034AA58 00347998  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034AA5C 0034799C  7C 08 03 A6 */	mtlr r0
/* 8034AA60 003479A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8034AA64 003479A4  4E 80 00 20 */	blr 

.global doSimulation__Q34Game4Bomb3ObjFf
doSimulation__Q34Game4Bomb3ObjFf:
/* 8034AA68 003479A8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8034AA6C 003479AC  7C 08 02 A6 */	mflr r0
/* 8034AA70 003479B0  90 01 00 54 */	stw r0, 0x54(r1)
/* 8034AA74 003479B4  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8034AA78 003479B8  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8034AA7C 003479BC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8034AA80 003479C0  7C 7F 1B 78 */	mr r31, r3
/* 8034AA84 003479C4  FF E0 08 90 */	fmr f31, f1
/* 8034AA88 003479C8  4B E5 4A ED */	bl isStickTo__Q24Game8CreatureFv
/* 8034AA8C 003479CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034AA90 003479D0  41 82 00 B4 */	beq .L_8034AB44
/* 8034AA94 003479D4  C0 9F 01 FC */	lfs f4, 0x1fc(r31)
/* 8034AA98 003479D8  C0 02 FF D0 */	lfs f0, lbl_8051E330@sda21(r2)
/* 8034AA9C 003479DC  FC 20 20 90 */	fmr f1, f4
/* 8034AAA0 003479E0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8034AAA4 003479E4  40 80 00 08 */	bge .L_8034AAAC
/* 8034AAA8 003479E8  FC 20 20 50 */	fneg f1, f4
.L_8034AAAC:
/* 8034AAAC 003479EC  C0 42 FF E8 */	lfs f2, lbl_8051E348@sda21(r2)
/* 8034AAB0 003479F0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8034AAB4 003479F4  C0 02 FF D0 */	lfs f0, lbl_8051E330@sda21(r2)
/* 8034AAB8 003479F8  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8034AABC 003479FC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8034AAC0 00347A00  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8034AAC4 00347A04  FC 00 08 1E */	fctiwz f0, f1
/* 8034AAC8 00347A08  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8034AACC 00347A0C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8034AAD0 00347A10  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8034AAD4 00347A14  7C 64 02 14 */	add r3, r4, r0
/* 8034AAD8 00347A18  C0 63 00 04 */	lfs f3, 4(r3)
/* 8034AADC 00347A1C  40 80 00 28 */	bge .L_8034AB04
/* 8034AAE0 00347A20  C0 02 FF EC */	lfs f0, lbl_8051E34C@sda21(r2)
/* 8034AAE4 00347A24  EC 04 00 32 */	fmuls f0, f4, f0
/* 8034AAE8 00347A28  FC 00 00 1E */	fctiwz f0, f0
/* 8034AAEC 00347A2C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8034AAF0 00347A30  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8034AAF4 00347A34  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8034AAF8 00347A38  7C 04 04 2E */	lfsx f0, r4, r0
/* 8034AAFC 00347A3C  FC 20 00 50 */	fneg f1, f0
/* 8034AB00 00347A40  48 00 00 1C */	b .L_8034AB1C
.L_8034AB04:
/* 8034AB04 00347A44  EC 04 00 B2 */	fmuls f0, f4, f2
/* 8034AB08 00347A48  FC 00 00 1E */	fctiwz f0, f0
/* 8034AB0C 00347A4C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8034AB10 00347A50  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8034AB14 00347A54  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8034AB18 00347A58  7C 24 04 2E */	lfsx f1, r4, r0
.L_8034AB1C:
/* 8034AB1C 00347A5C  C0 02 FF D0 */	lfs f0, lbl_8051E330@sda21(r2)
/* 8034AB20 00347A60  7F E3 FB 78 */	mr r3, r31
/* 8034AB24 00347A64  D0 21 00 08 */	stfs f1, 8(r1)
/* 8034AB28 00347A68  38 81 00 08 */	addi r4, r1, 8
/* 8034AB2C 00347A6C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8034AB30 00347A70  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8034AB34 00347A74  4B E5 4A B5 */	bl "updateStick__Q24Game8CreatureFR10Vector3<f>"
/* 8034AB38 00347A78  7F E3 FB 78 */	mr r3, r31
/* 8034AB3C 00347A7C  4B DF 12 2D */	bl updateCell__Q24Game8CreatureFv
/* 8034AB40 00347A80  48 00 00 40 */	b .L_8034AB80
.L_8034AB44:
/* 8034AB44 00347A84  80 9F 00 B8 */	lwz r4, 0xb8(r31)
/* 8034AB48 00347A88  28 04 00 00 */	cmplwi r4, 0
/* 8034AB4C 00347A8C  41 82 00 28 */	beq .L_8034AB74
/* 8034AB50 00347A90  C0 44 00 2C */	lfs f2, 0x2c(r4)
/* 8034AB54 00347A94  7F E3 FB 78 */	mr r3, r31
/* 8034AB58 00347A98  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 8034AB5C 00347A9C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8034AB60 00347AA0  D0 1F 01 8C */	stfs f0, 0x18c(r31)
/* 8034AB64 00347AA4  D0 3F 01 90 */	stfs f1, 0x190(r31)
/* 8034AB68 00347AA8  D0 5F 01 94 */	stfs f2, 0x194(r31)
/* 8034AB6C 00347AAC  4B DB 8D 65 */	bl updateSpheres__Q24Game9EnemyBaseFv
/* 8034AB70 00347AB0  48 00 00 10 */	b .L_8034AB80
.L_8034AB74:
/* 8034AB74 00347AB4  FC 20 F8 90 */	fmr f1, f31
/* 8034AB78 00347AB8  7F E3 FB 78 */	mr r3, r31
/* 8034AB7C 00347ABC  4B DB 9E DD */	bl doSimulation__Q24Game9EnemyBaseFf
.L_8034AB80:
/* 8034AB80 00347AC0  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8034AB84 00347AC4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8034AB88 00347AC8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8034AB8C 00347ACC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8034AB90 00347AD0  7C 08 03 A6 */	mtlr r0
/* 8034AB94 00347AD4  38 21 00 50 */	addi r1, r1, 0x50
/* 8034AB98 00347AD8  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game4Bomb3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game4Bomb3ObjFRQ24Game11ShadowParam:
/* 8034AB9C 00347ADC  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8034ABA0 00347AE0  C0 A2 FF F0 */	lfs f5, lbl_8051E350@sda21(r2)
/* 8034ABA4 00347AE4  D0 04 00 00 */	stfs f0, 0(r4)
/* 8034ABA8 00347AE8  C0 62 FF D0 */	lfs f3, lbl_8051E330@sda21(r2)
/* 8034ABAC 00347AEC  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 8034ABB0 00347AF0  C0 42 FF F4 */	lfs f2, lbl_8051E354@sda21(r2)
/* 8034ABB4 00347AF4  D0 04 00 04 */	stfs f0, 4(r4)
/* 8034ABB8 00347AF8  C0 22 FF F8 */	lfs f1, lbl_8051E358@sda21(r2)
/* 8034ABBC 00347AFC  C0 83 01 94 */	lfs f4, 0x194(r3)
/* 8034ABC0 00347B00  C0 02 FF FC */	lfs f0, lbl_8051E35C@sda21(r2)
/* 8034ABC4 00347B04  D0 84 00 08 */	stfs f4, 8(r4)
/* 8034ABC8 00347B08  C0 83 01 90 */	lfs f4, 0x190(r3)
/* 8034ABCC 00347B0C  EC 85 20 2A */	fadds f4, f5, f4
/* 8034ABD0 00347B10  D0 84 00 04 */	stfs f4, 4(r4)
/* 8034ABD4 00347B14  D0 64 00 0C */	stfs f3, 0xc(r4)
/* 8034ABD8 00347B18  D0 44 00 10 */	stfs f2, 0x10(r4)
/* 8034ABDC 00347B1C  D0 64 00 14 */	stfs f3, 0x14(r4)
/* 8034ABE0 00347B20  D0 24 00 18 */	stfs f1, 0x18(r4)
/* 8034ABE4 00347B24  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 8034ABE8 00347B28  4E 80 00 20 */	blr 

.global needShadow__Q34Game4Bomb3ObjFv
needShadow__Q34Game4Bomb3ObjFv:
/* 8034ABEC 00347B2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034ABF0 00347B30  7C 08 02 A6 */	mflr r0
/* 8034ABF4 00347B34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034ABF8 00347B38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034ABFC 00347B3C  7C 7F 1B 78 */	mr r31, r3
/* 8034AC00 00347B40  4B DB C8 11 */	bl needShadow__Q24Game9EnemyBaseFv
/* 8034AC04 00347B44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034AC08 00347B48  40 82 00 0C */	bne .L_8034AC14
/* 8034AC0C 00347B4C  38 60 00 00 */	li r3, 0
/* 8034AC10 00347B50  48 00 00 10 */	b .L_8034AC20
.L_8034AC14:
/* 8034AC14 00347B54  80 1F 00 B8 */	lwz r0, 0xb8(r31)
/* 8034AC18 00347B58  7C 00 00 34 */	cntlzw r0, r0
/* 8034AC1C 00347B5C  54 03 D9 7E */	srwi r3, r0, 5
.L_8034AC20:
/* 8034AC20 00347B60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034AC24 00347B64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034AC28 00347B68  7C 08 03 A6 */	mtlr r0
/* 8034AC2C 00347B6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8034AC30 00347B70  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game4Bomb3ObjFv
doFinishStoneState__Q34Game4Bomb3ObjFv:
/* 8034AC34 00347B74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034AC38 00347B78  7C 08 02 A6 */	mflr r0
/* 8034AC3C 00347B7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034AC40 00347B80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034AC44 00347B84  7C 7F 1B 78 */	mr r31, r3
/* 8034AC48 00347B88  4B DB 82 C1 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 8034AC4C 00347B8C  7F E3 FB 78 */	mr r3, r31
/* 8034AC50 00347B90  4B DB C7 A5 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8034AC54 00347B94  2C 03 00 00 */	cmpwi r3, 0
/* 8034AC58 00347B98  40 82 00 2C */	bne .L_8034AC84
/* 8034AC5C 00347B9C  7F E3 FB 78 */	mr r3, r31
/* 8034AC60 00347BA0  4B DB A6 0D */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 8034AC64 00347BA4  C0 02 FF D0 */	lfs f0, lbl_8051E330@sda21(r2)
/* 8034AC68 00347BA8  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8034AC6C 00347BAC  40 82 00 18 */	bne .L_8034AC84
/* 8034AC70 00347BB0  88 1F 02 BC */	lbz r0, 0x2bc(r31)
/* 8034AC74 00347BB4  28 00 00 00 */	cmplwi r0, 0
/* 8034AC78 00347BB8  40 82 00 0C */	bne .L_8034AC84
/* 8034AC7C 00347BBC  7F E3 FB 78 */	mr r3, r31
/* 8034AC80 00347BC0  4B DB C6 61 */	bl stopMotion__Q24Game9EnemyBaseFv
.L_8034AC84:
/* 8034AC84 00347BC4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8034AC88 00347BC8  C0 02 FF D0 */	lfs f0, lbl_8051E330@sda21(r2)
/* 8034AC8C 00347BCC  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 8034AC90 00347BD0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8034AC94 00347BD4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8034AC98 00347BD8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8034AC9C 00347BDC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8034ACA0 00347BE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034ACA4 00347BE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034ACA8 00347BE8  7C 08 03 A6 */	mtlr r0
/* 8034ACAC 00347BEC  38 21 00 10 */	addi r1, r1, 0x10
/* 8034ACB0 00347BF0  4E 80 00 20 */	blr 

.global doStartStoneState__Q34Game4Bomb3ObjFv
doStartStoneState__Q34Game4Bomb3ObjFv:
/* 8034ACB4 00347BF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034ACB8 00347BF8  7C 08 02 A6 */	mflr r0
/* 8034ACBC 00347BFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034ACC0 00347C00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034ACC4 00347C04  7C 7F 1B 78 */	mr r31, r3
/* 8034ACC8 00347C08  4B DB 82 2D */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 8034ACCC 00347C0C  80 7F 02 D4 */	lwz r3, 0x2d4(r31)
/* 8034ACD0 00347C10  81 83 00 00 */	lwz r12, 0(r3)
/* 8034ACD4 00347C14  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8034ACD8 00347C18  7D 89 03 A6 */	mtctr r12
/* 8034ACDC 00347C1C  4E 80 04 21 */	bctrl 
/* 8034ACE0 00347C20  38 00 00 00 */	li r0, 0
/* 8034ACE4 00347C24  98 1F 02 C8 */	stb r0, 0x2c8(r31)
/* 8034ACE8 00347C28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034ACEC 00347C2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034ACF0 00347C30  7C 08 03 A6 */	mtlr r0
/* 8034ACF4 00347C34  38 21 00 10 */	addi r1, r1, 0x10
/* 8034ACF8 00347C38  4E 80 00 20 */	blr 

.global onKill__Q34Game4Bomb3ObjFPQ24Game15CreatureKillArg
onKill__Q34Game4Bomb3ObjFPQ24Game15CreatureKillArg:
/* 8034ACFC 00347C3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034AD00 00347C40  7C 08 02 A6 */	mflr r0
/* 8034AD04 00347C44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034AD08 00347C48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034AD0C 00347C4C  7C 9F 23 78 */	mr r31, r4
/* 8034AD10 00347C50  93 C1 00 08 */	stw r30, 8(r1)
/* 8034AD14 00347C54  7C 7E 1B 78 */	mr r30, r3
/* 8034AD18 00347C58  80 63 02 CC */	lwz r3, 0x2cc(r3)
/* 8034AD1C 00347C5C  28 03 00 00 */	cmplwi r3, 0
/* 8034AD20 00347C60  41 82 00 28 */	beq .L_8034AD48
/* 8034AD24 00347C64  81 83 00 00 */	lwz r12, 0(r3)
/* 8034AD28 00347C68  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8034AD2C 00347C6C  7D 89 03 A6 */	mtctr r12
/* 8034AD30 00347C70  4E 80 04 21 */	bctrl 
/* 8034AD34 00347C74  2C 03 00 5D */	cmpwi r3, 0x5d
/* 8034AD38 00347C78  40 82 00 10 */	bne .L_8034AD48
/* 8034AD3C 00347C7C  80 7E 02 CC */	lwz r3, 0x2cc(r30)
/* 8034AD40 00347C80  38 00 00 00 */	li r0, 0
/* 8034AD44 00347C84  90 03 02 30 */	stw r0, 0x230(r3)
.L_8034AD48:
/* 8034AD48 00347C88  80 7E 02 D4 */	lwz r3, 0x2d4(r30)
/* 8034AD4C 00347C8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8034AD50 00347C90  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8034AD54 00347C94  7D 89 03 A6 */	mtctr r12
/* 8034AD58 00347C98  4E 80 04 21 */	bctrl 
/* 8034AD5C 00347C9C  7F C3 F3 78 */	mr r3, r30
/* 8034AD60 00347CA0  7F E4 FB 78 */	mr r4, r31
/* 8034AD64 00347CA4  4B DB 71 85 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 8034AD68 00347CA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034AD6C 00347CAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034AD70 00347CB0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8034AD74 00347CB4  7C 08 03 A6 */	mtlr r0
/* 8034AD78 00347CB8  38 21 00 10 */	addi r1, r1, 0x10
/* 8034AD7C 00347CBC  4E 80 00 20 */	blr 

.global doStartMovie__Q34Game4Bomb3ObjFv
doStartMovie__Q34Game4Bomb3ObjFv:
/* 8034AD80 00347CC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034AD84 00347CC4  7C 08 02 A6 */	mflr r0
/* 8034AD88 00347CC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034AD8C 00347CCC  80 63 02 D4 */	lwz r3, 0x2d4(r3)
/* 8034AD90 00347CD0  81 83 00 00 */	lwz r12, 0(r3)
/* 8034AD94 00347CD4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8034AD98 00347CD8  7D 89 03 A6 */	mtctr r12
/* 8034AD9C 00347CDC  4E 80 04 21 */	bctrl 
/* 8034ADA0 00347CE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034ADA4 00347CE4  7C 08 03 A6 */	mtlr r0
/* 8034ADA8 00347CE8  38 21 00 10 */	addi r1, r1, 0x10
/* 8034ADAC 00347CEC  4E 80 00 20 */	blr 

.global doEndMovie__Q34Game4Bomb3ObjFv
doEndMovie__Q34Game4Bomb3ObjFv:
/* 8034ADB0 00347CF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034ADB4 00347CF4  7C 08 02 A6 */	mflr r0
/* 8034ADB8 00347CF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034ADBC 00347CFC  80 63 02 D4 */	lwz r3, 0x2d4(r3)
/* 8034ADC0 00347D00  81 83 00 00 */	lwz r12, 0(r3)
/* 8034ADC4 00347D04  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8034ADC8 00347D08  7D 89 03 A6 */	mtctr r12
/* 8034ADCC 00347D0C  4E 80 04 21 */	bctrl 
/* 8034ADD0 00347D10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034ADD4 00347D14  7C 08 03 A6 */	mtlr r0
/* 8034ADD8 00347D18  38 21 00 10 */	addi r1, r1, 0x10
/* 8034ADDC 00347D1C  4E 80 00 20 */	blr 

.global damageCallBack__Q34Game4Bomb3ObjFPQ24Game8CreaturefP8CollPart
damageCallBack__Q34Game4Bomb3ObjFPQ24Game8CreaturefP8CollPart:
/* 8034ADE0 00347D20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034ADE4 00347D24  7C 08 02 A6 */	mflr r0
/* 8034ADE8 00347D28  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034ADEC 00347D2C  88 03 02 BC */	lbz r0, 0x2bc(r3)
/* 8034ADF0 00347D30  28 00 00 00 */	cmplwi r0, 0
/* 8034ADF4 00347D34  41 82 00 10 */	beq .L_8034AE04
/* 8034ADF8 00347D38  80 03 00 C8 */	lwz r0, 0xc8(r3)
/* 8034ADFC 00347D3C  28 00 00 00 */	cmplwi r0, 0
/* 8034AE00 00347D40  41 82 00 40 */	beq .L_8034AE40
.L_8034AE04:
/* 8034AE04 00347D44  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8034AE08 00347D48  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8034AE0C 00347D4C  41 82 00 2C */	beq .L_8034AE38
/* 8034AE10 00347D50  80 83 02 C4 */	lwz r4, 0x2c4(r3)
/* 8034AE14 00347D54  38 04 00 01 */	addi r0, r4, 1
/* 8034AE18 00347D58  90 03 02 C4 */	stw r0, 0x2c4(r3)
/* 8034AE1C 00347D5C  80 03 02 C4 */	lwz r0, 0x2c4(r3)
/* 8034AE20 00347D60  2C 00 00 04 */	cmpwi r0, 4
/* 8034AE24 00347D64  40 81 00 0C */	ble .L_8034AE30
/* 8034AE28 00347D68  38 80 00 00 */	li r4, 0
/* 8034AE2C 00347D6C  4B DF 02 C5 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8034AE30:
/* 8034AE30 00347D70  38 60 00 01 */	li r3, 1
/* 8034AE34 00347D74  48 00 00 10 */	b .L_8034AE44
.L_8034AE38:
/* 8034AE38 00347D78  C0 22 FF D0 */	lfs f1, lbl_8051E330@sda21(r2)
/* 8034AE3C 00347D7C  4B DB B2 31 */	bl damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
.L_8034AE40:
/* 8034AE40 00347D80  38 60 00 00 */	li r3, 0
.L_8034AE44:
/* 8034AE44 00347D84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034AE48 00347D88  7C 08 03 A6 */	mtlr r0
/* 8034AE4C 00347D8C  38 21 00 10 */	addi r1, r1, 0x10
/* 8034AE50 00347D90  4E 80 00 20 */	blr 

.global "bombCallBack__Q34Game4Bomb3ObjFPQ24Game8CreatureR10Vector3<f>f"
"bombCallBack__Q34Game4Bomb3ObjFPQ24Game8CreatureR10Vector3<f>f":
/* 8034AE54 00347D94  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8034AE58 00347D98  7C 08 02 A6 */	mflr r0
/* 8034AE5C 00347D9C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8034AE60 00347DA0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8034AE64 00347DA4  7C 9F 23 78 */	mr r31, r4
/* 8034AE68 00347DA8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8034AE6C 00347DAC  7C 7E 1B 78 */	mr r30, r3
/* 8034AE70 00347DB0  80 03 00 B8 */	lwz r0, 0xb8(r3)
/* 8034AE74 00347DB4  28 00 00 00 */	cmplwi r0, 0
/* 8034AE78 00347DB8  40 82 01 20 */	bne .L_8034AF98
/* 8034AE7C 00347DBC  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 8034AE80 00347DC0  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8034AE84 00347DC4  40 82 01 14 */	bne .L_8034AF98
/* 8034AE88 00347DC8  7F E3 FB 78 */	mr r3, r31
/* 8034AE8C 00347DCC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8034AE90 00347DD0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8034AE94 00347DD4  7D 89 03 A6 */	mtctr r12
/* 8034AE98 00347DD8  4E 80 04 21 */	bctrl 
/* 8034AE9C 00347DDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034AEA0 00347DE0  41 82 00 F8 */	beq .L_8034AF98
/* 8034AEA4 00347DE4  7F E3 FB 78 */	mr r3, r31
/* 8034AEA8 00347DE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8034AEAC 00347DEC  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8034AEB0 00347DF0  7D 89 03 A6 */	mtctr r12
/* 8034AEB4 00347DF4  4E 80 04 21 */	bctrl 
/* 8034AEB8 00347DF8  2C 03 00 24 */	cmpwi r3, 0x24
/* 8034AEBC 00347DFC  40 82 00 AC */	bne .L_8034AF68
/* 8034AEC0 00347E00  7F C3 F3 78 */	mr r3, r30
/* 8034AEC4 00347E04  4B DB C5 31 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8034AEC8 00347E08  2C 03 00 00 */	cmpwi r3, 0
/* 8034AECC 00347E0C  40 82 00 BC */	bne .L_8034AF88
/* 8034AED0 00347E10  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 8034AED4 00347E14  2C 00 00 00 */	cmpwi r0, 0
/* 8034AED8 00347E18  40 82 00 B0 */	bne .L_8034AF88
/* 8034AEDC 00347E1C  7F E4 FB 78 */	mr r4, r31
/* 8034AEE0 00347E20  38 61 00 08 */	addi r3, r1, 8
/* 8034AEE4 00347E24  81 9F 00 00 */	lwz r12, 0(r31)
/* 8034AEE8 00347E28  81 8C 00 08 */	lwz r12, 8(r12)
/* 8034AEEC 00347E2C  7D 89 03 A6 */	mtctr r12
/* 8034AEF0 00347E30  4E 80 04 21 */	bctrl 
/* 8034AEF4 00347E34  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8034AEF8 00347E38  3C 00 43 30 */	lis r0, 0x4330
/* 8034AEFC 00347E3C  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 8034AF00 00347E40  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8034AF04 00347E44  EC 41 00 28 */	fsubs f2, f1, f0
/* 8034AF08 00347E48  C0 21 00 08 */	lfs f1, 8(r1)
/* 8034AF0C 00347E4C  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 8034AF10 00347E50  C0 83 05 B4 */	lfs f4, 0x5b4(r3)
/* 8034AF14 00347E54  EC 21 00 28 */	fsubs f1, f1, f0
/* 8034AF18 00347E58  80 63 08 94 */	lwz r3, 0x894(r3)
/* 8034AF1C 00347E5C  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8034AF20 00347E60  90 01 00 18 */	stw r0, 0x18(r1)
/* 8034AF24 00347E64  EC 84 01 32 */	fmuls f4, f4, f4
/* 8034AF28 00347E68  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8034AF2C 00347E6C  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 8034AF30 00347E70  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8034AF34 00347E74  C0 62 FF F4 */	lfs f3, lbl_8051E354@sda21(r2)
/* 8034AF38 00347E78  C8 22 00 00 */	lfd f1, lbl_8051E360@sda21(r2)
/* 8034AF3C 00347E7C  EC 40 20 24 */	fdivs f2, f0, f4
/* 8034AF40 00347E80  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8034AF44 00347E84  EC 43 10 28 */	fsubs f2, f3, f2
/* 8034AF48 00347E88  EC 00 08 28 */	fsubs f0, f0, f1
/* 8034AF4C 00347E8C  EC 02 00 32 */	fmuls f0, f2, f0
/* 8034AF50 00347E90  FC 00 00 1E */	fctiwz f0, f0
/* 8034AF54 00347E94  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8034AF58 00347E98  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8034AF5C 00347E9C  38 03 00 01 */	addi r0, r3, 1
/* 8034AF60 00347EA0  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 8034AF64 00347EA4  48 00 00 24 */	b .L_8034AF88
.L_8034AF68:
/* 8034AF68 00347EA8  7F C3 F3 78 */	mr r3, r30
/* 8034AF6C 00347EAC  7F E4 FB 78 */	mr r4, r31
/* 8034AF70 00347EB0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8034AF74 00347EB4  38 A0 00 00 */	li r5, 0
/* 8034AF78 00347EB8  C0 22 FF D0 */	lfs f1, lbl_8051E330@sda21(r2)
/* 8034AF7C 00347EBC  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 8034AF80 00347EC0  7D 89 03 A6 */	mtctr r12
/* 8034AF84 00347EC4  4E 80 04 21 */	bctrl 
.L_8034AF88:
/* 8034AF88 00347EC8  C0 02 FF D0 */	lfs f0, lbl_8051E330@sda21(r2)
/* 8034AF8C 00347ECC  38 60 00 01 */	li r3, 1
/* 8034AF90 00347ED0  D0 1E 02 0C */	stfs f0, 0x20c(r30)
/* 8034AF94 00347ED4  48 00 00 08 */	b .L_8034AF9C
.L_8034AF98:
/* 8034AF98 00347ED8  38 60 00 00 */	li r3, 0
.L_8034AF9C:
/* 8034AF9C 00347EDC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8034AFA0 00347EE0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8034AFA4 00347EE4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8034AFA8 00347EE8  7C 08 03 A6 */	mtlr r0
/* 8034AFAC 00347EEC  38 21 00 30 */	addi r1, r1, 0x30
/* 8034AFB0 00347EF0  4E 80 00 20 */	blr 

.global pressCallBack__Q34Game4Bomb3ObjFPQ24Game8CreaturefP8CollPart
pressCallBack__Q34Game4Bomb3ObjFPQ24Game8CreaturefP8CollPart:
/* 8034AFB4 00347EF4  38 60 00 00 */	li r3, 0
/* 8034AFB8 00347EF8  4E 80 00 20 */	blr 

.global bounceCallback__Q34Game4Bomb3ObjFPQ23Sys8Triangle
bounceCallback__Q34Game4Bomb3ObjFPQ23Sys8Triangle:
/* 8034AFBC 00347EFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034AFC0 00347F00  7C 08 02 A6 */	mflr r0
/* 8034AFC4 00347F04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034AFC8 00347F08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034AFCC 00347F0C  7C 7F 1B 78 */	mr r31, r3
/* 8034AFD0 00347F10  88 03 02 BC */	lbz r0, 0x2bc(r3)
/* 8034AFD4 00347F14  28 00 00 00 */	cmplwi r0, 0
/* 8034AFD8 00347F18  41 82 00 14 */	beq .L_8034AFEC
/* 8034AFDC 00347F1C  C0 22 00 08 */	lfs f1, lbl_8051E368@sda21(r2)
/* 8034AFE0 00347F20  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8034AFE4 00347F24  4B DB 8B 6D */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 8034AFE8 00347F28  48 00 00 38 */	b .L_8034B020
.L_8034AFEC:
/* 8034AFEC 00347F2C  4B DB CA 41 */	bl isBirthTypeDropGroup__Q24Game9EnemyBaseFv
/* 8034AFF0 00347F30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034AFF4 00347F34  41 82 00 2C */	beq .L_8034B020
/* 8034AFF8 00347F38  7F E3 FB 78 */	mr r3, r31
/* 8034AFFC 00347F3C  4B DB C3 F9 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8034B000 00347F40  2C 03 00 00 */	cmpwi r3, 0
/* 8034B004 00347F44  40 82 00 1C */	bne .L_8034B020
/* 8034B008 00347F48  C0 22 00 08 */	lfs f1, lbl_8051E368@sda21(r2)
/* 8034B00C 00347F4C  7F E3 FB 78 */	mr r3, r31
/* 8034B010 00347F50  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8034B014 00347F54  4B DB 8B 3D */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 8034B018 00347F58  7F E3 FB 78 */	mr r3, r31
/* 8034B01C 00347F5C  48 00 00 B5 */	bl forceBomb__Q34Game4Bomb3ObjFv
.L_8034B020:
/* 8034B020 00347F60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034B024 00347F64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034B028 00347F68  7C 08 03 A6 */	mtlr r0
/* 8034B02C 00347F6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8034B030 00347F70  4E 80 00 20 */	blr 

.global collisionCallback__Q34Game4Bomb3ObjFRQ24Game9CollEvent
collisionCallback__Q34Game4Bomb3ObjFRQ24Game9CollEvent:
/* 8034B034 00347F74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034B038 00347F78  7C 08 02 A6 */	mflr r0
/* 8034B03C 00347F7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034B040 00347F80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034B044 00347F84  7C 9F 23 78 */	mr r31, r4
/* 8034B048 00347F88  93 C1 00 08 */	stw r30, 8(r1)
/* 8034B04C 00347F8C  7C 7E 1B 78 */	mr r30, r3
/* 8034B050 00347F90  4B DB B5 C1 */	bl collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
/* 8034B054 00347F94  7F C3 F3 78 */	mr r3, r30
/* 8034B058 00347F98  4B DB C9 D5 */	bl isBirthTypeDropGroup__Q24Game9EnemyBaseFv
/* 8034B05C 00347F9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034B060 00347FA0  41 82 00 58 */	beq .L_8034B0B8
/* 8034B064 00347FA4  80 7F 00 00 */	lwz r3, 0(r31)
/* 8034B068 00347FA8  28 03 00 00 */	cmplwi r3, 0
/* 8034B06C 00347FAC  41 82 00 4C */	beq .L_8034B0B8
/* 8034B070 00347FB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8034B074 00347FB4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8034B078 00347FB8  7D 89 03 A6 */	mtctr r12
/* 8034B07C 00347FBC  4E 80 04 21 */	bctrl 
/* 8034B080 00347FC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034B084 00347FC4  40 82 00 34 */	bne .L_8034B0B8
/* 8034B088 00347FC8  7F C3 F3 78 */	mr r3, r30
/* 8034B08C 00347FCC  4B DB C3 69 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8034B090 00347FD0  2C 03 00 00 */	cmpwi r3, 0
/* 8034B094 00347FD4  40 82 00 24 */	bne .L_8034B0B8
/* 8034B098 00347FD8  C0 22 00 08 */	lfs f1, lbl_8051E368@sda21(r2)
/* 8034B09C 00347FDC  7F C3 F3 78 */	mr r3, r30
/* 8034B0A0 00347FE0  38 9E 01 8C */	addi r4, r30, 0x18c
/* 8034B0A4 00347FE4  4B DB 8A AD */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 8034B0A8 00347FE8  7F C3 F3 78 */	mr r3, r30
/* 8034B0AC 00347FEC  48 00 00 25 */	bl forceBomb__Q34Game4Bomb3ObjFv
/* 8034B0B0 00347FF0  38 00 00 01 */	li r0, 1
/* 8034B0B4 00347FF4  98 1E 02 C9 */	stb r0, 0x2c9(r30)
.L_8034B0B8:
/* 8034B0B8 00347FF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034B0BC 00347FFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034B0C0 00348000  83 C1 00 08 */	lwz r30, 8(r1)
/* 8034B0C4 00348004  7C 08 03 A6 */	mtlr r0
/* 8034B0C8 00348008  38 21 00 10 */	addi r1, r1, 0x10
/* 8034B0CC 0034800C  4E 80 00 20 */	blr 

.global forceBomb__Q34Game4Bomb3ObjFv
forceBomb__Q34Game4Bomb3ObjFv:
/* 8034B0D0 00348010  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034B0D4 00348014  7C 08 02 A6 */	mflr r0
/* 8034B0D8 00348018  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034B0DC 0034801C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034B0E0 00348020  7C 7F 1B 78 */	mr r31, r3
/* 8034B0E4 00348024  4B DB C3 11 */	bl getStateID__Q24Game9EnemyBaseFv
/* 8034B0E8 00348028  2C 03 00 00 */	cmpwi r3, 0
/* 8034B0EC 0034802C  40 82 00 30 */	bne .L_8034B11C
/* 8034B0F0 00348030  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8034B0F4 00348034  7F E4 FB 78 */	mr r4, r31
/* 8034B0F8 00348038  38 A0 00 01 */	li r5, 1
/* 8034B0FC 0034803C  38 C0 00 00 */	li r6, 0
/* 8034B100 00348040  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 8034B104 00348044  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8034B108 00348048  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 8034B10C 0034804C  81 83 00 00 */	lwz r12, 0(r3)
/* 8034B110 00348050  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8034B114 00348054  7D 89 03 A6 */	mtctr r12
/* 8034B118 00348058  4E 80 04 21 */	bctrl 
.L_8034B11C:
/* 8034B11C 0034805C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034B120 00348060  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034B124 00348064  7C 08 03 A6 */	mtlr r0
/* 8034B128 00348068  38 21 00 10 */	addi r1, r1, 0x10
/* 8034B12C 0034806C  4E 80 00 20 */	blr 

.global bombEffInWater__Q34Game4Bomb3ObjFv
bombEffInWater__Q34Game4Bomb3ObjFv:
/* 8034B130 00348070  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034B134 00348074  7C 08 02 A6 */	mflr r0
/* 8034B138 00348078  C0 22 00 0C */	lfs f1, lbl_8051E36C@sda21(r2)
/* 8034B13C 0034807C  38 83 01 8C */	addi r4, r3, 0x18c
/* 8034B140 00348080  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034B144 00348084  4B DB 88 B5 */	bl "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 8034B148 00348088  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034B14C 0034808C  7C 08 03 A6 */	mtlr r0
/* 8034B150 00348090  38 21 00 10 */	addi r1, r1, 0x10
/* 8034B154 00348094  4E 80 00 20 */	blr 

.global canEat__Q34Game4Bomb3ObjFv
canEat__Q34Game4Bomb3ObjFv:
/* 8034B158 00348098  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034B15C 0034809C  7C 08 02 A6 */	mflr r0
/* 8034B160 003480A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034B164 003480A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034B168 003480A8  7C 7F 1B 78 */	mr r31, r3
/* 8034B16C 003480AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8034B170 003480B0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8034B174 003480B4  7D 89 03 A6 */	mtctr r12
/* 8034B178 003480B8  4E 80 04 21 */	bctrl 
/* 8034B17C 003480BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034B180 003480C0  41 82 00 1C */	beq .L_8034B19C
/* 8034B184 003480C4  7F E3 FB 78 */	mr r3, r31
/* 8034B188 003480C8  4B DB C2 6D */	bl getStateID__Q24Game9EnemyBaseFv
/* 8034B18C 003480CC  2C 03 00 00 */	cmpwi r3, 0
/* 8034B190 003480D0  40 82 00 0C */	bne .L_8034B19C
/* 8034B194 003480D4  38 60 00 01 */	li r3, 1
/* 8034B198 003480D8  48 00 00 08 */	b .L_8034B1A0
.L_8034B19C:
/* 8034B19C 003480DC  38 60 00 00 */	li r3, 0
.L_8034B1A0:
/* 8034B1A0 003480E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034B1A4 003480E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034B1A8 003480E8  7C 08 03 A6 */	mtlr r0
/* 8034B1AC 003480EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8034B1B0 003480F0  4E 80 00 20 */	blr 

.global isAnimStart__Q34Game4Bomb3ObjFv
isAnimStart__Q34Game4Bomb3ObjFv:
/* 8034B1B4 003480F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8034B1B8 003480F8  7C 08 02 A6 */	mflr r0
/* 8034B1BC 003480FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8034B1C0 00348100  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8034B1C4 00348104  7C 7F 1B 78 */	mr r31, r3
/* 8034B1C8 00348108  4B DB C8 65 */	bl isBirthTypeDropGroup__Q24Game9EnemyBaseFv
/* 8034B1CC 0034810C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034B1D0 00348110  40 82 00 38 */	bne .L_8034B208
/* 8034B1D4 00348114  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8034B1D8 00348118  3C 00 43 30 */	lis r0, 0x4330
/* 8034B1DC 0034811C  90 01 00 08 */	stw r0, 8(r1)
/* 8034B1E0 00348120  80 03 08 6C */	lwz r0, 0x86c(r3)
/* 8034B1E4 00348124  C8 22 00 00 */	lfd f1, lbl_8051E360@sda21(r2)
/* 8034B1E8 00348128  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8034B1EC 0034812C  C0 5F 02 0C */	lfs f2, 0x20c(r31)
/* 8034B1F0 00348130  90 01 00 0C */	stw r0, 0xc(r1)
/* 8034B1F4 00348134  C8 01 00 08 */	lfd f0, 8(r1)
/* 8034B1F8 00348138  EC 00 08 28 */	fsubs f0, f0, f1
/* 8034B1FC 0034813C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8034B200 00348140  4C 41 13 82 */	cror 2, 1, 2
/* 8034B204 00348144  41 82 00 68 */	beq .L_8034B26C
.L_8034B208:
/* 8034B208 00348148  88 1F 02 BC */	lbz r0, 0x2bc(r31)
/* 8034B20C 0034814C  28 00 00 00 */	cmplwi r0, 0
/* 8034B210 00348150  41 82 00 10 */	beq .L_8034B220
/* 8034B214 00348154  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 8034B218 00348158  28 00 00 00 */	cmplwi r0, 0
/* 8034B21C 0034815C  40 82 00 50 */	bne .L_8034B26C
.L_8034B220:
/* 8034B220 00348160  80 7F 02 C0 */	lwz r3, 0x2c0(r31)
/* 8034B224 00348164  2C 03 00 00 */	cmpwi r3, 0
/* 8034B228 00348168  40 82 00 0C */	bne .L_8034B234
/* 8034B22C 0034816C  38 60 00 00 */	li r3, 0
/* 8034B230 00348170  48 00 00 34 */	b .L_8034B264
.L_8034B234:
/* 8034B234 00348174  38 03 00 01 */	addi r0, r3, 1
/* 8034B238 00348178  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 8034B23C 0034817C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8034B240 00348180  80 9F 02 C0 */	lwz r4, 0x2c0(r31)
/* 8034B244 00348184  80 03 08 94 */	lwz r0, 0x894(r3)
/* 8034B248 00348188  7C 04 00 00 */	cmpw r4, r0
/* 8034B24C 0034818C  40 81 00 14 */	ble .L_8034B260
/* 8034B250 00348190  38 00 00 00 */	li r0, 0
/* 8034B254 00348194  38 60 00 01 */	li r3, 1
/* 8034B258 00348198  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 8034B25C 0034819C  48 00 00 08 */	b .L_8034B264
.L_8034B260:
/* 8034B260 003481A0  38 60 00 00 */	li r3, 0
.L_8034B264:
/* 8034B264 003481A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034B268 003481A8  41 82 00 0C */	beq .L_8034B274
.L_8034B26C:
/* 8034B26C 003481AC  38 60 00 01 */	li r3, 1
/* 8034B270 003481B0  48 00 00 08 */	b .L_8034B278
.L_8034B274:
/* 8034B274 003481B4  38 60 00 00 */	li r3, 0
.L_8034B278:
/* 8034B278 003481B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8034B27C 003481BC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8034B280 003481C0  7C 08 03 A6 */	mtlr r0
/* 8034B284 003481C4  38 21 00 20 */	addi r1, r1, 0x20
/* 8034B288 003481C8  4E 80 00 20 */	blr 

.global __dt__Q23efx14TBombrockLightFv
__dt__Q23efx14TBombrockLightFv:
/* 8034B28C 003481CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034B290 003481D0  7C 08 02 A6 */	mflr r0
/* 8034B294 003481D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034B298 003481D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034B29C 003481DC  7C 9F 23 78 */	mr r31, r4
/* 8034B2A0 003481E0  93 C1 00 08 */	stw r30, 8(r1)
/* 8034B2A4 003481E4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8034B2A8 003481E8  41 82 00 64 */	beq .L_8034B30C
/* 8034B2AC 003481EC  3C 60 80 4E */	lis r3, __vt__Q23efx14TBombrockLight@ha
/* 8034B2B0 003481F0  38 63 BB 68 */	addi r3, r3, __vt__Q23efx14TBombrockLight@l
/* 8034B2B4 003481F4  90 7E 00 00 */	stw r3, 0(r30)
/* 8034B2B8 003481F8  38 03 00 14 */	addi r0, r3, 0x14
/* 8034B2BC 003481FC  90 1E 00 04 */	stw r0, 4(r30)
/* 8034B2C0 00348200  41 82 00 3C */	beq .L_8034B2FC
/* 8034B2C4 00348204  3C 60 80 4E */	lis r3, __vt__Q23efx10TChaseMtxT@ha
/* 8034B2C8 00348208  38 63 68 5C */	addi r3, r3, __vt__Q23efx10TChaseMtxT@l
/* 8034B2CC 0034820C  90 7E 00 00 */	stw r3, 0(r30)
/* 8034B2D0 00348210  38 03 00 14 */	addi r0, r3, 0x14
/* 8034B2D4 00348214  90 1E 00 04 */	stw r0, 4(r30)
/* 8034B2D8 00348218  41 82 00 24 */	beq .L_8034B2FC
/* 8034B2DC 0034821C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8034B2E0 00348220  38 7E 00 04 */	addi r3, r30, 4
/* 8034B2E4 00348224  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8034B2E8 00348228  38 80 00 00 */	li r4, 0
/* 8034B2EC 0034822C  90 BE 00 00 */	stw r5, 0(r30)
/* 8034B2F0 00348230  38 05 00 14 */	addi r0, r5, 0x14
/* 8034B2F4 00348234  90 1E 00 04 */	stw r0, 4(r30)
/* 8034B2F8 00348238  4B D4 49 A5 */	bl __dt__18JPAEmitterCallBackFv
.L_8034B2FC:
/* 8034B2FC 0034823C  7F E0 07 35 */	extsh. r0, r31
/* 8034B300 00348240  40 81 00 0C */	ble .L_8034B30C
/* 8034B304 00348244  7F C3 F3 78 */	mr r3, r30
/* 8034B308 00348248  4B CD 8D AD */	bl __dl__FPv
.L_8034B30C:
/* 8034B30C 0034824C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034B310 00348250  7F C3 F3 78 */	mr r3, r30
/* 8034B314 00348254  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034B318 00348258  83 C1 00 08 */	lwz r30, 8(r1)
/* 8034B31C 0034825C  7C 08 03 A6 */	mtlr r0
/* 8034B320 00348260  38 21 00 10 */	addi r1, r1, 0x10
/* 8034B324 00348264  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game4Bomb3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game4Bomb3ObjFPQ24Game21EnemyInitialParamBase:
/* 8034B328 00348268  4E 80 00 20 */	blr 

.global isLivingThing__Q34Game4Bomb3ObjFv
isLivingThing__Q34Game4Bomb3ObjFv:
/* 8034B32C 0034826C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034B330 00348270  7C 08 02 A6 */	mflr r0
/* 8034B334 00348274  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034B338 00348278  80 03 00 B8 */	lwz r0, 0xb8(r3)
/* 8034B33C 0034827C  28 00 00 00 */	cmplwi r0, 0
/* 8034B340 00348280  40 82 00 10 */	bne .L_8034B350
/* 8034B344 00348284  4B DB BF F5 */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 8034B348 00348288  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034B34C 0034828C  40 82 00 0C */	bne .L_8034B358
.L_8034B350:
/* 8034B350 00348290  38 60 00 00 */	li r3, 0
/* 8034B354 00348294  48 00 00 08 */	b .L_8034B35C
.L_8034B358:
/* 8034B358 00348298  38 60 00 01 */	li r3, 1
.L_8034B35C:
/* 8034B35C 0034829C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034B360 003482A0  7C 08 03 A6 */	mtlr r0
/* 8034B364 003482A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8034B368 003482A8  4E 80 00 20 */	blr 

.global isUnderground__Q34Game4Bomb3ObjFv
isUnderground__Q34Game4Bomb3ObjFv:
/* 8034B36C 003482AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034B370 003482B0  7C 08 02 A6 */	mflr r0
/* 8034B374 003482B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034B378 003482B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034B37C 003482BC  3B E0 00 00 */	li r31, 0
/* 8034B380 003482C0  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8034B384 003482C4  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8034B388 003482C8  40 82 00 14 */	bne .L_8034B39C
/* 8034B38C 003482CC  4B DB BF AD */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 8034B390 003482D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8034B394 003482D4  40 82 00 08 */	bne .L_8034B39C
/* 8034B398 003482D8  3B E0 00 01 */	li r31, 1
.L_8034B39C:
/* 8034B39C 003482DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034B3A0 003482E0  7F E3 FB 78 */	mr r3, r31
/* 8034B3A4 003482E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034B3A8 003482E8  7C 08 03 A6 */	mtlr r0
/* 8034B3AC 003482EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8034B3B0 003482F0  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game4Bomb3ObjFv
getEnemyTypeID__Q34Game4Bomb3ObjFv:
/* 8034B3B4 003482F4  38 60 00 24 */	li r3, 0x24
/* 8034B3B8 003482F8  4E 80 00 20 */	blr 

.global "@4@__dt__Q23efx14TBombrockLightFv"
"@4@__dt__Q23efx14TBombrockLightFv":
/* 8034B3BC 003482FC  38 63 FF FC */	addi r3, r3, -4
/* 8034B3C0 00348300  4B FF FE CC */	b __dt__Q23efx14TBombrockLightFv
