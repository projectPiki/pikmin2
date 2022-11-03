.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80488FA8
lbl_80488FA8:
	.asciz "ArgCursor"
	.skip 2

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23efx9ArgCursor
__vt__Q23efx9ArgCursor:
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx9ArgCursorFv
.global __vt__Q23efx11TFuebugOnpa
__vt__Q23efx11TFuebugOnpa:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx11TFuebugOnpaFv"
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
	.4byte __dt__Q23efx11TFuebugOnpaFv
.global __vt__Q34Game7Fuefuki3Obj
__vt__Q34Game7Fuefuki3Obj:
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
	.4byte onInit__Q34Game7Fuefuki3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game7Fuefuki3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game7Fuefuki3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game7Fuefuki3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game7Fuefuki3ObjFv
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
	.4byte getShadowParam__Q34Game7Fuefuki3ObjFRQ24Game11ShadowParam
	.4byte needShadow__Q24Game9EnemyBaseFv
	.4byte getLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte getLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
	.4byte startPick__Q24Game8CreatureFv
	.4byte endPick__Q24Game8CreatureFb
	.4byte getMabiki__Q24Game8CreatureFv
	.4byte getFootmarks__Q34Game7Fuefuki3ObjFv
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
	.4byte __dt__Q34Game7Fuefuki3ObjFv
	.4byte "birth__Q34Game7Fuefuki3ObjFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game7Fuefuki3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game7Fuefuki3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game7Fuefuki3ObjFR8Graphics
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
	.4byte getOffsetForMapCollision__Q34Game7Fuefuki3ObjFv
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
	.4byte createEfxHamon__Q34Game7Fuefuki3ObjFv
	.4byte fadeEfxHamon__Q24Game9EnemyBaseFv
	.4byte getEnemyTypeID__Q34Game7Fuefuki3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q34Game7Fuefuki3ObjFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q34Game7Fuefuki3ObjFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game7Fuefuki3ObjFv
	.4byte doFinishStoneState__Q34Game7Fuefuki3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q34Game7Fuefuki3ObjFv
	.4byte doFinishEarthquakeFitState__Q34Game7Fuefuki3ObjFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game7Fuefuki3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q34Game7Fuefuki3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game7Fuefuki3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q24Game9EnemyBaseFv
	.4byte doStartMovie__Q34Game7Fuefuki3ObjFv
	.4byte doEndMovie__Q34Game7Fuefuki3ObjFv
	.4byte setFSM__Q34Game7Fuefuki3ObjFPQ34Game7Fuefuki3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@756@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@756@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@756@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@756@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@756@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@756@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.global __vt__Q24Game25InteractFuefukiTimerReset
__vt__Q24Game25InteractFuefukiTimerReset:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
	.4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
	.4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
	.4byte actEnemy__Q24Game25InteractFuefukiTimerResetFPQ24Game9EnemyBase
	.4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
	.4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
	.4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051BC98
lbl_8051BC98:
	.4byte 0x40A00000
.global lbl_8051BC9C
lbl_8051BC9C:
	.4byte 0x00000000
.global lbl_8051BCA0
lbl_8051BCA0:
	.float 1.0
.global lbl_8051BCA4
lbl_8051BCA4:
	.4byte 0x42960000
.global lbl_8051BCA8
lbl_8051BCA8:
	.4byte 0x42480000
.global lbl_8051BCAC
lbl_8051BCAC:
	.4byte 0x41700000
.global lbl_8051BCB0
lbl_8051BCB0:
	.4byte 0x47000000
	.4byte 0x00000000
.global lbl_8051BCB8
lbl_8051BCB8:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051BCC0
lbl_8051BCC0:
	.4byte 0x40C90FDB
.global lbl_8051BCC4
lbl_8051BCC4:
	.4byte 0x41C80000
.global lbl_8051BCC8
lbl_8051BCC8:
	.4byte 0x40490FDB
.global lbl_8051BCCC
lbl_8051BCCC:
	.4byte 0x3FC90FDB
.global lbl_8051BCD0
lbl_8051BCD0:
	.4byte 0x43A2F983
.global lbl_8051BCD4
lbl_8051BCD4:
	.4byte 0xC3A2F983
.global lbl_8051BCD8
lbl_8051BCD8:
	.4byte 0x441C4000
.global lbl_8051BCDC
lbl_8051BCDC:
	.4byte 0x40200000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global actEnemy__Q24Game25InteractFuefukiTimerResetFPQ24Game9EnemyBase
actEnemy__Q24Game25InteractFuefukiTimerResetFPQ24Game9EnemyBase:
/* 8029C1C4 00299104  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C1C8 00299108  7C 08 02 A6 */	mflr r0
/* 8029C1CC 0029910C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C1D0 00299110  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029C1D4 00299114  7C 9F 23 78 */	mr r31, r4
/* 8029C1D8 00299118  7F E3 FB 78 */	mr r3, r31
/* 8029C1DC 0029911C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029C1E0 00299120  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8029C1E4 00299124  7D 89 03 A6 */	mtctr r12
/* 8029C1E8 00299128  4E 80 04 21 */	bctrl 
/* 8029C1EC 0029912C  2C 03 00 29 */	cmpwi r3, 0x29
/* 8029C1F0 00299130  40 82 00 14 */	bne .L_8029C204
/* 8029C1F4 00299134  C0 02 D9 38 */	lfs f0, lbl_8051BC98@sda21(r2)
/* 8029C1F8 00299138  38 60 00 01 */	li r3, 1
/* 8029C1FC 0029913C  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 8029C200 00299140  48 00 00 08 */	b .L_8029C208
.L_8029C204:
/* 8029C204 00299144  38 60 00 00 */	li r3, 0
.L_8029C208:
/* 8029C208 00299148  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C20C 0029914C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029C210 00299150  7C 08 03 A6 */	mtlr r0
/* 8029C214 00299154  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C218 00299158  4E 80 00 20 */	blr 

.global __ct__Q34Game7Fuefuki3ObjFv
__ct__Q34Game7Fuefuki3ObjFv:
/* 8029C21C 0029915C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C220 00299160  7C 08 02 A6 */	mflr r0
/* 8029C224 00299164  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C228 00299168  7C 80 07 35 */	extsh. r0, r4
/* 8029C22C 0029916C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029C230 00299170  7C 7F 1B 78 */	mr r31, r3
/* 8029C234 00299174  93 C1 00 08 */	stw r30, 8(r1)
/* 8029C238 00299178  41 82 00 24 */	beq .L_8029C25C
/* 8029C23C 0029917C  38 1F 02 F4 */	addi r0, r31, 0x2f4
/* 8029C240 00299180  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8029C244 00299184  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8029C248 00299188  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8029C24C 0029918C  38 00 00 00 */	li r0, 0
/* 8029C250 00299190  90 7F 02 F4 */	stw r3, 0x2f4(r31)
/* 8029C254 00299194  90 1F 02 F8 */	stw r0, 0x2f8(r31)
/* 8029C258 00299198  90 1F 02 FC */	stw r0, 0x2fc(r31)
.L_8029C25C:
/* 8029C25C 0029919C  7F E3 FB 78 */	mr r3, r31
/* 8029C260 002991A0  38 80 00 00 */	li r4, 0
/* 8029C264 002991A4  4B E6 51 3D */	bl __ct__Q24Game9EnemyBaseFv
/* 8029C268 002991A8  3C 60 80 4D */	lis r3, __vt__Q34Game7Fuefuki3Obj@ha
/* 8029C26C 002991AC  38 1F 02 F4 */	addi r0, r31, 0x2f4
/* 8029C270 002991B0  38 A3 C2 D8 */	addi r5, r3, __vt__Q34Game7Fuefuki3Obj@l
/* 8029C274 002991B4  38 60 00 2C */	li r3, 0x2c
/* 8029C278 002991B8  90 BF 00 00 */	stw r5, 0(r31)
/* 8029C27C 002991BC  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8029C280 002991C0  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 8029C284 002991C4  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8029C288 002991C8  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8029C28C 002991CC  90 A4 00 00 */	stw r5, 0(r4)
/* 8029C290 002991D0  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8029C294 002991D4  7C 04 00 50 */	subf r0, r4, r0
/* 8029C298 002991D8  90 04 00 0C */	stw r0, 0xc(r4)
/* 8029C29C 002991DC  4B D8 7C 09 */	bl __nw__FUl
/* 8029C2A0 002991E0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8029C2A4 002991E4  41 82 00 44 */	beq .L_8029C2E8
/* 8029C2A8 002991E8  4B E8 B6 CD */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8029C2AC 002991EC  3C 60 80 4D */	lis r3, __vt__Q34Game7Fuefuki14ProperAnimator@ha
/* 8029C2B0 002991F0  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8029C2B4 002991F4  38 03 C1 68 */	addi r0, r3, __vt__Q34Game7Fuefuki14ProperAnimator@l
/* 8029C2B8 002991F8  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 8029C2BC 002991FC  90 1E 00 00 */	stw r0, 0(r30)
/* 8029C2C0 00299200  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8029C2C4 00299204  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 8029C2C8 00299208  38 00 00 00 */	li r0, 0
/* 8029C2CC 0029920C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8029C2D0 00299210  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8029C2D4 00299214  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8029C2D8 00299218  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8029C2DC 0029921C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8029C2E0 00299220  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8029C2E4 00299224  90 1E 00 20 */	stw r0, 0x20(r30)
.L_8029C2E8:
/* 8029C2E8 00299228  93 DF 01 84 */	stw r30, 0x184(r31)
/* 8029C2EC 0029922C  38 60 00 1C */	li r3, 0x1c
/* 8029C2F0 00299230  4B D8 7B B5 */	bl __nw__FUl
/* 8029C2F4 00299234  7C 64 1B 79 */	or. r4, r3, r3
/* 8029C2F8 00299238  41 82 00 24 */	beq .L_8029C31C
/* 8029C2FC 0029923C  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 8029C300 00299240  3C 60 80 4D */	lis r3, __vt__Q34Game7Fuefuki3FSM@ha
/* 8029C304 00299244  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 8029C308 00299248  38 A0 FF FF */	li r5, -1
/* 8029C30C 0029924C  90 04 00 00 */	stw r0, 0(r4)
/* 8029C310 00299250  38 03 C1 40 */	addi r0, r3, __vt__Q34Game7Fuefuki3FSM@l
/* 8029C314 00299254  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8029C318 00299258  90 04 00 00 */	stw r0, 0(r4)
.L_8029C31C:
/* 8029C31C 0029925C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029C320 00299260  7F E3 FB 78 */	mr r3, r31
/* 8029C324 00299264  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 8029C328 00299268  7D 89 03 A6 */	mtctr r12
/* 8029C32C 0029926C  4E 80 04 21 */	bctrl 
/* 8029C330 00299270  7F E3 FB 78 */	mr r3, r31
/* 8029C334 00299274  48 00 0F AD */	bl createFootmarks__Q34Game7Fuefuki3ObjFv
/* 8029C338 00299278  7F E3 FB 78 */	mr r3, r31
/* 8029C33C 0029927C  48 00 10 B1 */	bl createEffect__Q34Game7Fuefuki3ObjFv
/* 8029C340 00299280  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C344 00299284  7F E3 FB 78 */	mr r3, r31
/* 8029C348 00299288  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029C34C 0029928C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029C350 00299290  7C 08 03 A6 */	mtlr r0
/* 8029C354 00299294  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C358 00299298  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game7Fuefuki3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game7Fuefuki3ObjFPQ24Game21EnemyInitialParamBase:
/* 8029C35C 0029929C  4E 80 00 20 */	blr 

.global "birth__Q34Game7Fuefuki3ObjFR10Vector3<f>f"
"birth__Q34Game7Fuefuki3ObjFR10Vector3<f>f":
/* 8029C360 002992A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C364 002992A4  7C 08 02 A6 */	mflr r0
/* 8029C368 002992A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C36C 002992AC  4B E6 66 95 */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 8029C370 002992B0  80 6D 95 B0 */	lwz r3, mgr__5Radar@sda21(r13)
/* 8029C374 002992B4  28 03 00 00 */	cmplwi r3, 0
/* 8029C378 002992B8  41 82 00 08 */	beq .L_8029C380
/* 8029C37C 002992BC  4B F8 21 D1 */	bl bornFuefuki__Q25Radar3MgrFv
.L_8029C380:
/* 8029C380 002992C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C384 002992C4  7C 08 03 A6 */	mtlr r0
/* 8029C388 002992C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C38C 002992CC  4E 80 00 20 */	blr 

.global onInit__Q34Game7Fuefuki3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game7Fuefuki3ObjFPQ24Game15CreatureInitArg:
/* 8029C390 002992D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C394 002992D4  7C 08 02 A6 */	mflr r0
/* 8029C398 002992D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C39C 002992DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029C3A0 002992E0  7C 7F 1B 78 */	mr r31, r3
/* 8029C3A4 002992E4  4B E6 56 B5 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8029C3A8 002992E8  38 00 00 00 */	li r0, 0
/* 8029C3AC 002992EC  7F E3 FB 78 */	mr r3, r31
/* 8029C3B0 002992F0  98 1F 02 B0 */	stb r0, 0x2b0(r31)
/* 8029C3B4 002992F4  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 8029C3B8 002992F8  48 00 05 B1 */	bl resetAppearTimer__Q34Game7Fuefuki3ObjFv
/* 8029C3BC 002992FC  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029C3C0 00299300  7F E3 FB 78 */	mr r3, r31
/* 8029C3C4 00299304  38 80 00 01 */	li r4, 1
/* 8029C3C8 00299308  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 8029C3CC 0029930C  48 00 06 15 */	bl resetWhisleTimer__Q34Game7Fuefuki3ObjFb
/* 8029C3D0 00299310  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029C3D4 00299314  38 00 FF FF */	li r0, -1
/* 8029C3D8 00299318  7F E4 FB 78 */	mr r4, r31
/* 8029C3DC 0029931C  38 A0 00 02 */	li r5, 2
/* 8029C3E0 00299320  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 8029C3E4 00299324  38 C0 00 00 */	li r6, 0
/* 8029C3E8 00299328  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 8029C3EC 0029932C  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 8029C3F0 00299330  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8029C3F4 00299334  81 83 00 00 */	lwz r12, 0(r3)
/* 8029C3F8 00299338  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8029C3FC 0029933C  7D 89 03 A6 */	mtctr r12
/* 8029C400 00299340  4E 80 04 21 */	bctrl 
/* 8029C404 00299344  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C408 00299348  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029C40C 0029934C  7C 08 03 A6 */	mtlr r0
/* 8029C410 00299350  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C414 00299354  4E 80 00 20 */	blr 

.global onKill__Q34Game7Fuefuki3ObjFPQ24Game15CreatureKillArg
onKill__Q34Game7Fuefuki3ObjFPQ24Game15CreatureKillArg:
/* 8029C418 00299358  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C41C 0029935C  7C 08 02 A6 */	mflr r0
/* 8029C420 00299360  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C424 00299364  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029C428 00299368  7C 9F 23 78 */	mr r31, r4
/* 8029C42C 0029936C  93 C1 00 08 */	stw r30, 8(r1)
/* 8029C430 00299370  7C 7E 1B 78 */	mr r30, r3
/* 8029C434 00299374  48 00 12 69 */	bl finishWhisleEffect__Q34Game7Fuefuki3ObjFv
/* 8029C438 00299378  80 6D 95 B0 */	lwz r3, mgr__5Radar@sda21(r13)
/* 8029C43C 0029937C  28 03 00 00 */	cmplwi r3, 0
/* 8029C440 00299380  41 82 00 08 */	beq .L_8029C448
/* 8029C444 00299384  4B F8 21 19 */	bl dieFuefuki__Q25Radar3MgrFv
.L_8029C448:
/* 8029C448 00299388  7F C3 F3 78 */	mr r3, r30
/* 8029C44C 0029938C  7F E4 FB 78 */	mr r4, r31
/* 8029C450 00299390  4B E6 5A 99 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 8029C454 00299394  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C458 00299398  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029C45C 0029939C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029C460 002993A0  7C 08 03 A6 */	mtlr r0
/* 8029C464 002993A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C468 002993A8  4E 80 00 20 */	blr 

.global doUpdate__Q34Game7Fuefuki3ObjFv
doUpdate__Q34Game7Fuefuki3ObjFv:
/* 8029C46C 002993AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C470 002993B0  7C 08 02 A6 */	mflr r0
/* 8029C474 002993B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C478 002993B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029C47C 002993BC  7C 7F 1B 78 */	mr r31, r3
/* 8029C480 002993C0  7F E4 FB 78 */	mr r4, r31
/* 8029C484 002993C4  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8029C488 002993C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8029C48C 002993CC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029C490 002993D0  7D 89 03 A6 */	mtctr r12
/* 8029C494 002993D4  4E 80 04 21 */	bctrl 
/* 8029C498 002993D8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8029C49C 002993DC  C0 5F 02 C4 */	lfs f2, 0x2c4(r31)
/* 8029C4A0 002993E0  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8029C4A4 002993E4  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029C4A8 002993E8  EC 22 08 2A */	fadds f1, f2, f1
/* 8029C4AC 002993EC  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 8029C4B0 002993F0  C0 3F 02 D4 */	lfs f1, 0x2d4(r31)
/* 8029C4B4 002993F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029C4B8 002993F8  40 81 00 10 */	ble .L_8029C4C8
/* 8029C4BC 002993FC  C0 02 D9 40 */	lfs f0, lbl_8051BCA0@sda21(r2)
/* 8029C4C0 00299400  EC 01 00 28 */	fsubs f0, f1, f0
/* 8029C4C4 00299404  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
.L_8029C4C8:
/* 8029C4C8 00299408  7F E3 FB 78 */	mr r3, r31
/* 8029C4CC 0029940C  48 00 0E 65 */	bl updateFootmarks__Q34Game7Fuefuki3ObjFv
/* 8029C4D0 00299410  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C4D4 00299414  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029C4D8 00299418  7C 08 03 A6 */	mtlr r0
/* 8029C4DC 0029941C  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C4E0 00299420  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game7Fuefuki3ObjFR8Graphics
doDirectDraw__Q34Game7Fuefuki3ObjFR8Graphics:
/* 8029C4E4 00299424  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game7Fuefuki3ObjFR8Graphics
doDebugDraw__Q34Game7Fuefuki3ObjFR8Graphics:
/* 8029C4E8 00299428  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C4EC 0029942C  7C 08 02 A6 */	mflr r0
/* 8029C4F0 00299430  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C4F4 00299434  4B E6 99 79 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 8029C4F8 00299438  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C4FC 0029943C  7C 08 03 A6 */	mtlr r0
/* 8029C500 00299440  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C504 00299444  4E 80 00 20 */	blr 

.global setFSM__Q34Game7Fuefuki3ObjFPQ34Game7Fuefuki3FSM
setFSM__Q34Game7Fuefuki3ObjFPQ34Game7Fuefuki3FSM:
/* 8029C508 00299448  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C50C 0029944C  7C 08 02 A6 */	mflr r0
/* 8029C510 00299450  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C514 00299454  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029C518 00299458  7C 7F 1B 78 */	mr r31, r3
/* 8029C51C 0029945C  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 8029C520 00299460  7F E4 FB 78 */	mr r4, r31
/* 8029C524 00299464  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8029C528 00299468  81 83 00 00 */	lwz r12, 0(r3)
/* 8029C52C 0029946C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029C530 00299470  7D 89 03 A6 */	mtctr r12
/* 8029C534 00299474  4E 80 04 21 */	bctrl 
/* 8029C538 00299478  38 00 00 00 */	li r0, 0
/* 8029C53C 0029947C  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8029C540 00299480  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C544 00299484  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029C548 00299488  7C 08 03 A6 */	mtlr r0
/* 8029C54C 0029948C  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C550 00299490  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game7Fuefuki3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game7Fuefuki3ObjFRQ24Game11ShadowParam:
/* 8029C554 00299494  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8029C558 00299498  7C 08 02 A6 */	mflr r0
/* 8029C55C 0029949C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8029C560 002994A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8029C564 002994A4  7C 9F 23 78 */	mr r31, r4
/* 8029C568 002994A8  38 81 00 08 */	addi r4, r1, 8
/* 8029C56C 002994AC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8029C570 002994B0  7C 7E 1B 78 */	mr r30, r3
/* 8029C574 002994B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8029C578 002994B8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029C57C 002994BC  7D 89 03 A6 */	mtctr r12
/* 8029C580 002994C0  4E 80 04 21 */	bctrl 
/* 8029C584 002994C4  C0 01 00 08 */	lfs f0, 8(r1)
/* 8029C588 002994C8  C0 62 D9 38 */	lfs f3, lbl_8051BC98@sda21(r2)
/* 8029C58C 002994CC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8029C590 002994D0  C0 22 D9 3C */	lfs f1, lbl_8051BC9C@sda21(r2)
/* 8029C594 002994D4  C0 5E 01 90 */	lfs f2, 0x190(r30)
/* 8029C598 002994D8  C0 02 D9 40 */	lfs f0, lbl_8051BCA0@sda21(r2)
/* 8029C59C 002994DC  EC 43 10 2A */	fadds f2, f3, f2
/* 8029C5A0 002994E0  D0 5F 00 04 */	stfs f2, 4(r31)
/* 8029C5A4 002994E4  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8029C5A8 002994E8  D0 5F 00 08 */	stfs f2, 8(r31)
/* 8029C5AC 002994EC  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 8029C5B0 002994F0  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8029C5B4 002994F4  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 8029C5B8 002994F8  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 8029C5BC 002994FC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8029C5C0 00299500  41 82 00 10 */	beq .L_8029C5D0
/* 8029C5C4 00299504  C0 02 D9 44 */	lfs f0, lbl_8051BCA4@sda21(r2)
/* 8029C5C8 00299508  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 8029C5CC 0029950C  48 00 00 0C */	b .L_8029C5D8
.L_8029C5D0:
/* 8029C5D0 00299510  C0 02 D9 48 */	lfs f0, lbl_8051BCA8@sda21(r2)
/* 8029C5D4 00299514  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_8029C5D8:
/* 8029C5D8 00299518  C0 02 D9 4C */	lfs f0, lbl_8051BCAC@sda21(r2)
/* 8029C5DC 0029951C  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8029C5E0 00299520  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8029C5E4 00299524  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8029C5E8 00299528  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8029C5EC 0029952C  7C 08 03 A6 */	mtlr r0
/* 8029C5F0 00299530  38 21 00 20 */	addi r1, r1, 0x20
/* 8029C5F4 00299534  4E 80 00 20 */	blr 

.global pressCallBack__Q34Game7Fuefuki3ObjFPQ24Game8CreaturefP8CollPart
pressCallBack__Q34Game7Fuefuki3ObjFPQ24Game8CreaturefP8CollPart:
/* 8029C5F8 00299538  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C5FC 0029953C  7C 08 02 A6 */	mflr r0
/* 8029C600 00299540  28 04 00 00 */	cmplwi r4, 0
/* 8029C604 00299544  7C 64 1B 78 */	mr r4, r3
/* 8029C608 00299548  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C60C 0029954C  41 82 00 40 */	beq .L_8029C64C
/* 8029C610 00299550  88 04 02 C0 */	lbz r0, 0x2c0(r4)
/* 8029C614 00299554  28 00 00 00 */	cmplwi r0, 0
/* 8029C618 00299558  41 82 00 34 */	beq .L_8029C64C
/* 8029C61C 0029955C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8029C620 00299560  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8029C624 00299564  40 82 00 28 */	bne .L_8029C64C
/* 8029C628 00299568  80 64 02 BC */	lwz r3, 0x2bc(r4)
/* 8029C62C 0029956C  38 A0 00 08 */	li r5, 8
/* 8029C630 00299570  38 C0 00 00 */	li r6, 0
/* 8029C634 00299574  81 83 00 00 */	lwz r12, 0(r3)
/* 8029C638 00299578  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8029C63C 0029957C  7D 89 03 A6 */	mtctr r12
/* 8029C640 00299580  4E 80 04 21 */	bctrl 
/* 8029C644 00299584  38 60 00 00 */	li r3, 0
/* 8029C648 00299588  48 00 00 08 */	b .L_8029C650
.L_8029C64C:
/* 8029C64C 0029958C  38 60 00 01 */	li r3, 1
.L_8029C650:
/* 8029C650 00299590  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C654 00299594  7C 08 03 A6 */	mtlr r0
/* 8029C658 00299598  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C65C 0029959C  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game7Fuefuki3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game7Fuefuki3ObjFPQ24Game8CreaturefP8CollPart:
/* 8029C660 002995A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C664 002995A4  7C 08 02 A6 */	mflr r0
/* 8029C668 002995A8  28 04 00 00 */	cmplwi r4, 0
/* 8029C66C 002995AC  7C 64 1B 78 */	mr r4, r3
/* 8029C670 002995B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C674 002995B4  41 82 00 40 */	beq .L_8029C6B4
/* 8029C678 002995B8  88 04 02 C0 */	lbz r0, 0x2c0(r4)
/* 8029C67C 002995BC  28 00 00 00 */	cmplwi r0, 0
/* 8029C680 002995C0  41 82 00 34 */	beq .L_8029C6B4
/* 8029C684 002995C4  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8029C688 002995C8  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8029C68C 002995CC  40 82 00 28 */	bne .L_8029C6B4
/* 8029C690 002995D0  80 64 02 BC */	lwz r3, 0x2bc(r4)
/* 8029C694 002995D4  38 A0 00 08 */	li r5, 8
/* 8029C698 002995D8  38 C0 00 00 */	li r6, 0
/* 8029C69C 002995DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8029C6A0 002995E0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8029C6A4 002995E4  7D 89 03 A6 */	mtctr r12
/* 8029C6A8 002995E8  4E 80 04 21 */	bctrl 
/* 8029C6AC 002995EC  38 60 00 00 */	li r3, 0
/* 8029C6B0 002995F0  48 00 00 08 */	b .L_8029C6B8
.L_8029C6B4:
/* 8029C6B4 002995F4  38 60 00 01 */	li r3, 1
.L_8029C6B8:
/* 8029C6B8 002995F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C6BC 002995FC  7C 08 03 A6 */	mtlr r0
/* 8029C6C0 00299600  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C6C4 00299604  4E 80 00 20 */	blr 

.global doStartStoneState__Q34Game7Fuefuki3ObjFv
doStartStoneState__Q34Game7Fuefuki3ObjFv:
/* 8029C6C8 00299608  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C6CC 0029960C  7C 08 02 A6 */	mflr r0
/* 8029C6D0 00299610  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C6D4 00299614  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029C6D8 00299618  7C 7F 1B 78 */	mr r31, r3
/* 8029C6DC 0029961C  4B E6 68 19 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 8029C6E0 00299620  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 8029C6E4 00299624  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029C6E8 00299628  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029C6EC 0029962C  40 81 00 0C */	ble .L_8029C6F8
/* 8029C6F0 00299630  7F E3 FB 78 */	mr r3, r31
/* 8029C6F4 00299634  48 00 0F A9 */	bl finishWhisleEffect__Q34Game7Fuefuki3ObjFv
.L_8029C6F8:
/* 8029C6F8 00299638  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C6FC 0029963C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029C700 00299640  7C 08 03 A6 */	mtlr r0
/* 8029C704 00299644  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C708 00299648  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game7Fuefuki3ObjFv
doFinishStoneState__Q34Game7Fuefuki3ObjFv:
/* 8029C70C 0029964C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C710 00299650  7C 08 02 A6 */	mflr r0
/* 8029C714 00299654  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C718 00299658  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029C71C 0029965C  7C 7F 1B 78 */	mr r31, r3
/* 8029C720 00299660  4B E6 67 E9 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 8029C724 00299664  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 8029C728 00299668  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029C72C 0029966C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029C730 00299670  40 81 00 0C */	ble .L_8029C73C
/* 8029C734 00299674  7F E3 FB 78 */	mr r3, r31
/* 8029C738 00299678  48 00 03 4D */	bl startWhisle__Q34Game7Fuefuki3ObjFv
.L_8029C73C:
/* 8029C73C 0029967C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C740 00299680  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029C744 00299684  7C 08 03 A6 */	mtlr r0
/* 8029C748 00299688  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C74C 0029968C  4E 80 00 20 */	blr 

.global doStartEarthquakeFitState__Q34Game7Fuefuki3ObjFv
doStartEarthquakeFitState__Q34Game7Fuefuki3ObjFv:
/* 8029C750 00299690  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C754 00299694  7C 08 02 A6 */	mflr r0
/* 8029C758 00299698  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C75C 0029969C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029C760 002996A0  7C 7F 1B 78 */	mr r31, r3
/* 8029C764 002996A4  4B E6 B2 01 */	bl doStartEarthquakeFitState__Q24Game9EnemyBaseFv
/* 8029C768 002996A8  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 8029C76C 002996AC  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029C770 002996B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029C774 002996B4  40 81 00 0C */	ble .L_8029C780
/* 8029C778 002996B8  7F E3 FB 78 */	mr r3, r31
/* 8029C77C 002996BC  48 00 0F 21 */	bl finishWhisleEffect__Q34Game7Fuefuki3ObjFv
.L_8029C780:
/* 8029C780 002996C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C784 002996C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029C788 002996C8  7C 08 03 A6 */	mtlr r0
/* 8029C78C 002996CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C790 002996D0  4E 80 00 20 */	blr 

.global doFinishEarthquakeFitState__Q34Game7Fuefuki3ObjFv
doFinishEarthquakeFitState__Q34Game7Fuefuki3ObjFv:
/* 8029C794 002996D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C798 002996D8  7C 08 02 A6 */	mflr r0
/* 8029C79C 002996DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C7A0 002996E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029C7A4 002996E4  7C 7F 1B 78 */	mr r31, r3
/* 8029C7A8 002996E8  4B E6 B1 C1 */	bl doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
/* 8029C7AC 002996EC  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 8029C7B0 002996F0  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029C7B4 002996F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029C7B8 002996F8  40 81 00 0C */	ble .L_8029C7C4
/* 8029C7BC 002996FC  7F E3 FB 78 */	mr r3, r31
/* 8029C7C0 00299700  48 00 02 C5 */	bl startWhisle__Q34Game7Fuefuki3ObjFv
.L_8029C7C4:
/* 8029C7C4 00299704  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C7C8 00299708  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029C7CC 0029970C  7C 08 03 A6 */	mtlr r0
/* 8029C7D0 00299710  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C7D4 00299714  4E 80 00 20 */	blr 

.global doStartWaitingBirthTypeDrop__Q34Game7Fuefuki3ObjFv
doStartWaitingBirthTypeDrop__Q34Game7Fuefuki3ObjFv:
/* 8029C7D8 00299718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C7DC 0029971C  7C 08 02 A6 */	mflr r0
/* 8029C7E0 00299720  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C7E4 00299724  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029C7E8 00299728  7C 7F 1B 78 */	mr r31, r3
/* 8029C7EC 0029972C  4B E6 B1 AD */	bl doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 8029C7F0 00299730  7F E3 FB 78 */	mr r3, r31
/* 8029C7F4 00299734  48 00 10 51 */	bl effectDrawOff__Q34Game7Fuefuki3ObjFv
/* 8029C7F8 00299738  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C7FC 0029973C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029C800 00299740  7C 08 03 A6 */	mtlr r0
/* 8029C804 00299744  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C808 00299748  4E 80 00 20 */	blr 

.global doFinishWaitingBirthTypeDrop__Q34Game7Fuefuki3ObjFv
doFinishWaitingBirthTypeDrop__Q34Game7Fuefuki3ObjFv:
/* 8029C80C 0029974C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C810 00299750  7C 08 02 A6 */	mflr r0
/* 8029C814 00299754  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C818 00299758  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029C81C 0029975C  7C 7F 1B 78 */	mr r31, r3
/* 8029C820 00299760  4B E6 B1 A9 */	bl doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 8029C824 00299764  7F E3 FB 78 */	mr r3, r31
/* 8029C828 00299768  48 00 0F B1 */	bl effectDrawOn__Q34Game7Fuefuki3ObjFv
/* 8029C82C 0029976C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C830 00299770  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029C834 00299774  7C 08 03 A6 */	mtlr r0
/* 8029C838 00299778  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C83C 0029977C  4E 80 00 20 */	blr 

.global startCarcassMotion__Q34Game7Fuefuki3ObjFv
startCarcassMotion__Q34Game7Fuefuki3ObjFv:
/* 8029C840 00299780  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C844 00299784  7C 08 02 A6 */	mflr r0
/* 8029C848 00299788  38 80 00 09 */	li r4, 9
/* 8029C84C 0029978C  38 A0 00 00 */	li r5, 0
/* 8029C850 00299790  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C854 00299794  4B E6 87 B1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8029C858 00299798  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C85C 0029979C  7C 08 03 A6 */	mtlr r0
/* 8029C860 002997A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C864 002997A4  4E 80 00 20 */	blr 

.global doStartMovie__Q34Game7Fuefuki3ObjFv
doStartMovie__Q34Game7Fuefuki3ObjFv:
/* 8029C868 002997A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C86C 002997AC  7C 08 02 A6 */	mflr r0
/* 8029C870 002997B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C874 002997B4  48 00 0F D1 */	bl effectDrawOff__Q34Game7Fuefuki3ObjFv
/* 8029C878 002997B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C87C 002997BC  7C 08 03 A6 */	mtlr r0
/* 8029C880 002997C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C884 002997C4  4E 80 00 20 */	blr 

.global doEndMovie__Q34Game7Fuefuki3ObjFv
doEndMovie__Q34Game7Fuefuki3ObjFv:
/* 8029C888 002997C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029C88C 002997CC  7C 08 02 A6 */	mflr r0
/* 8029C890 002997D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029C894 002997D4  48 00 0F 45 */	bl effectDrawOn__Q34Game7Fuefuki3ObjFv
/* 8029C898 002997D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029C89C 002997DC  7C 08 03 A6 */	mtlr r0
/* 8029C8A0 002997E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8029C8A4 002997E4  4E 80 00 20 */	blr 

.global getOffsetForMapCollision__Q34Game7Fuefuki3ObjFv
getOffsetForMapCollision__Q34Game7Fuefuki3ObjFv:
/* 8029C8A8 002997E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8029C8AC 002997EC  7C 08 02 A6 */	mflr r0
/* 8029C8B0 002997F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8029C8B4 002997F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8029C8B8 002997F8  7C 9F 23 78 */	mr r31, r4
/* 8029C8BC 002997FC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8029C8C0 00299800  7C 7E 1B 78 */	mr r30, r3
/* 8029C8C4 00299804  7F E3 FB 78 */	mr r3, r31
/* 8029C8C8 00299808  4B E6 AB 2D */	bl getStateID__Q24Game9EnemyBaseFv
/* 8029C8CC 0029980C  2C 03 00 00 */	cmpwi r3, 0
/* 8029C8D0 00299810  41 82 00 0C */	beq .L_8029C8DC
/* 8029C8D4 00299814  2C 03 00 08 */	cmpwi r3, 8
/* 8029C8D8 00299818  40 82 00 5C */	bne .L_8029C934
.L_8029C8DC:
/* 8029C8DC 0029981C  7F E3 FB 78 */	mr r3, r31
/* 8029C8E0 00299820  38 81 00 08 */	addi r4, r1, 8
/* 8029C8E4 00299824  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029C8E8 00299828  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029C8EC 0029982C  7D 89 03 A6 */	mtctr r12
/* 8029C8F0 00299830  4E 80 04 21 */	bctrl 
/* 8029C8F4 00299834  C0 41 00 08 */	lfs f2, 8(r1)
/* 8029C8F8 00299838  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8029C8FC 0029983C  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029C900 00299840  EC 42 08 28 */	fsubs f2, f2, f1
/* 8029C904 00299844  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8029C908 00299848  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8029C90C 0029984C  D0 41 00 08 */	stfs f2, 8(r1)
/* 8029C910 00299850  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8029C914 00299854  EC 01 00 28 */	fsubs f0, f1, f0
/* 8029C918 00299858  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8029C91C 0029985C  D0 5E 00 00 */	stfs f2, 0(r30)
/* 8029C920 00299860  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8029C924 00299864  D0 1E 00 04 */	stfs f0, 4(r30)
/* 8029C928 00299868  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8029C92C 0029986C  D0 1E 00 08 */	stfs f0, 8(r30)
/* 8029C930 00299870  48 00 00 20 */	b .L_8029C950
.L_8029C934:
/* 8029C934 00299874  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 8029C938 00299878  C4 03 41 E4 */	lfsu f0, "zero__10Vector3<f>"@l(r3)
/* 8029C93C 0029987C  D0 1E 00 00 */	stfs f0, 0(r30)
/* 8029C940 00299880  C0 03 00 04 */	lfs f0, 4(r3)
/* 8029C944 00299884  D0 1E 00 04 */	stfs f0, 4(r30)
/* 8029C948 00299888  C0 03 00 08 */	lfs f0, 8(r3)
/* 8029C94C 0029988C  D0 1E 00 08 */	stfs f0, 8(r30)
.L_8029C950:
/* 8029C950 00299890  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8029C954 00299894  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8029C958 00299898  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8029C95C 0029989C  7C 08 03 A6 */	mtlr r0
/* 8029C960 002998A0  38 21 00 20 */	addi r1, r1, 0x20
/* 8029C964 002998A4  4E 80 00 20 */	blr 

.global resetAppearTimer__Q34Game7Fuefuki3ObjFv
resetAppearTimer__Q34Game7Fuefuki3ObjFv:
/* 8029C968 002998A8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8029C96C 002998AC  7C 08 02 A6 */	mflr r0
/* 8029C970 002998B0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8029C974 002998B4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8029C978 002998B8  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8029C97C 002998BC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8029C980 002998C0  7C 7F 1B 78 */	mr r31, r3
/* 8029C984 002998C4  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8029C988 002998C8  C0 23 08 1C */	lfs f1, 0x81c(r3)
/* 8029C98C 002998CC  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 8029C990 002998D0  EF E1 00 28 */	fsubs f31, f1, f0
/* 8029C994 002998D4  4B E2 CC 0D */	bl rand
/* 8029C998 002998D8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8029C99C 002998DC  3C 00 43 30 */	lis r0, 0x4330
/* 8029C9A0 002998E0  90 61 00 0C */	stw r3, 0xc(r1)
/* 8029C9A4 002998E4  C8 42 D9 58 */	lfd f2, lbl_8051BCB8@sda21(r2)
/* 8029C9A8 002998E8  90 01 00 08 */	stw r0, 8(r1)
/* 8029C9AC 002998EC  C0 02 D9 50 */	lfs f0, lbl_8051BCB0@sda21(r2)
/* 8029C9B0 002998F0  C8 21 00 08 */	lfd f1, 8(r1)
/* 8029C9B4 002998F4  EC 21 10 28 */	fsubs f1, f1, f2
/* 8029C9B8 002998F8  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8029C9BC 002998FC  EC 01 00 24 */	fdivs f0, f1, f0
/* 8029C9C0 00299900  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8029C9C4 00299904  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8029C9C8 00299908  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8029C9CC 0029990C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8029C9D0 00299910  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8029C9D4 00299914  7C 08 03 A6 */	mtlr r0
/* 8029C9D8 00299918  38 21 00 30 */	addi r1, r1, 0x30
/* 8029C9DC 0029991C  4E 80 00 20 */	blr 

.global resetWhisleTimer__Q34Game7Fuefuki3ObjFb
resetWhisleTimer__Q34Game7Fuefuki3ObjFb:
/* 8029C9E0 00299920  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8029C9E4 00299924  41 82 00 1C */	beq .L_8029CA00
/* 8029C9E8 00299928  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8029C9EC 0029992C  C0 24 08 BC */	lfs f1, 0x8bc(r4)
/* 8029C9F0 00299930  C0 04 08 94 */	lfs f0, 0x894(r4)
/* 8029C9F4 00299934  EC 01 00 28 */	fsubs f0, f1, f0
/* 8029C9F8 00299938  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 8029C9FC 0029993C  4E 80 00 20 */	blr 
.L_8029CA00:
/* 8029CA00 00299940  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029CA04 00299944  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 8029CA08 00299948  4E 80 00 20 */	blr 

.global isWhisleTimeMax__Q34Game7Fuefuki3ObjFv
isWhisleTimeMax__Q34Game7Fuefuki3ObjFv:
/* 8029CA0C 0029994C  C0 23 02 D4 */	lfs f1, 0x2d4(r3)
/* 8029CA10 00299950  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029CA14 00299954  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029CA18 00299958  40 81 00 48 */	ble .L_8029CA60
/* 8029CA1C 0029995C  80 03 01 F4 */	lwz r0, 0x1f4(r3)
/* 8029CA20 00299960  2C 00 00 00 */	cmpwi r0, 0
/* 8029CA24 00299964  41 82 00 20 */	beq .L_8029CA44
/* 8029CA28 00299968  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8029CA2C 0029996C  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 8029CA30 00299970  C0 04 08 BC */	lfs f0, 0x8bc(r4)
/* 8029CA34 00299974  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029CA38 00299978  40 81 00 44 */	ble .L_8029CA7C
/* 8029CA3C 0029997C  38 60 00 01 */	li r3, 1
/* 8029CA40 00299980  4E 80 00 20 */	blr 
.L_8029CA44:
/* 8029CA44 00299984  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8029CA48 00299988  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 8029CA4C 0029998C  C0 04 08 E4 */	lfs f0, 0x8e4(r4)
/* 8029CA50 00299990  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029CA54 00299994  40 81 00 28 */	ble .L_8029CA7C
/* 8029CA58 00299998  38 60 00 01 */	li r3, 1
/* 8029CA5C 0029999C  4E 80 00 20 */	blr 
.L_8029CA60:
/* 8029CA60 002999A0  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8029CA64 002999A4  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 8029CA68 002999A8  C0 04 08 BC */	lfs f0, 0x8bc(r4)
/* 8029CA6C 002999AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029CA70 002999B0  40 81 00 0C */	ble .L_8029CA7C
/* 8029CA74 002999B4  38 60 00 01 */	li r3, 1
/* 8029CA78 002999B8  4E 80 00 20 */	blr 
.L_8029CA7C:
/* 8029CA7C 002999BC  38 60 00 00 */	li r3, 0
/* 8029CA80 002999C0  4E 80 00 20 */	blr 

.global startWhisle__Q34Game7Fuefuki3ObjFv
startWhisle__Q34Game7Fuefuki3ObjFv:
/* 8029CA84 002999C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029CA88 002999C8  7C 08 02 A6 */	mflr r0
/* 8029CA8C 002999CC  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029CA90 002999D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029CA94 002999D4  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8029CA98 002999D8  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8029CA9C 002999DC  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 8029CAA0 002999E0  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 8029CAA4 002999E4  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 8029CAA8 002999E8  48 00 0A E1 */	bl startWhisleEffect__Q34Game7Fuefuki3ObjFv
/* 8029CAAC 002999EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029CAB0 002999F0  7C 08 03 A6 */	mtlr r0
/* 8029CAB4 002999F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8029CAB8 002999F8  4E 80 00 20 */	blr 

.global updateWhisle__Q34Game7Fuefuki3ObjFv
updateWhisle__Q34Game7Fuefuki3ObjFv:
/* 8029CABC 002999FC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8029CAC0 00299A00  7C 08 02 A6 */	mflr r0
/* 8029CAC4 00299A04  90 01 00 54 */	stw r0, 0x54(r1)
/* 8029CAC8 00299A08  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8029CACC 00299A0C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8029CAD0 00299A10  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8029CAD4 00299A14  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8029CAD8 00299A18  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8029CADC 00299A1C  7C 7F 1B 78 */	mr r31, r3
/* 8029CAE0 00299A20  C0 43 02 D0 */	lfs f2, 0x2d0(r3)
/* 8029CAE4 00299A24  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 8029CAE8 00299A28  C0 02 D9 40 */	lfs f0, lbl_8051BCA0@sda21(r2)
/* 8029CAEC 00299A2C  EC 22 08 2A */	fadds f1, f2, f1
/* 8029CAF0 00299A30  D0 23 02 D0 */	stfs f1, 0x2d0(r3)
/* 8029CAF4 00299A34  C0 23 02 D0 */	lfs f1, 0x2d0(r3)
/* 8029CAF8 00299A38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029CAFC 00299A3C  40 81 00 08 */	ble .L_8029CB04
/* 8029CB00 00299A40  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
.L_8029CB04:
/* 8029CB04 00299A44  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8029CB08 00299A48  7F E3 FB 78 */	mr r3, r31
/* 8029CB0C 00299A4C  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 8029CB10 00299A50  C0 04 05 B4 */	lfs f0, 0x5b4(r4)
/* 8029CB14 00299A54  EF E1 00 32 */	fmuls f31, f1, f0
/* 8029CB18 00299A58  FC 20 F8 90 */	fmr f1, f31
/* 8029CB1C 00299A5C  48 00 0B 09 */	bl updateWhisleEffect__Q34Game7Fuefuki3ObjFf
/* 8029CB20 00299A60  38 00 00 00 */	li r0, 0
/* 8029CB24 00299A64  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8029CB28 00299A68  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 8029CB2C 00299A6C  EF FF 07 F2 */	fmuls f31, f31, f31
/* 8029CB30 00299A70  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 8029CB34 00299A74  28 00 00 00 */	cmplwi r0, 0
/* 8029CB38 00299A78  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8029CB3C 00299A7C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8029CB40 00299A80  90 01 00 20 */	stw r0, 0x20(r1)
/* 8029CB44 00299A84  90 61 00 24 */	stw r3, 0x24(r1)
/* 8029CB48 00299A88  40 82 00 1C */	bne .L_8029CB64
/* 8029CB4C 00299A8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8029CB50 00299A90  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8029CB54 00299A94  7D 89 03 A6 */	mtctr r12
/* 8029CB58 00299A98  4E 80 04 21 */	bctrl 
/* 8029CB5C 00299A9C  90 61 00 20 */	stw r3, 0x20(r1)
/* 8029CB60 00299AA0  48 00 02 30 */	b .L_8029CD90
.L_8029CB64:
/* 8029CB64 00299AA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8029CB68 00299AA8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8029CB6C 00299AAC  7D 89 03 A6 */	mtctr r12
/* 8029CB70 00299AB0  4E 80 04 21 */	bctrl 
/* 8029CB74 00299AB4  90 61 00 20 */	stw r3, 0x20(r1)
/* 8029CB78 00299AB8  48 00 00 58 */	b .L_8029CBD0
.L_8029CB7C:
/* 8029CB7C 00299ABC  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8029CB80 00299AC0  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8029CB84 00299AC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8029CB88 00299AC8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8029CB8C 00299ACC  7D 89 03 A6 */	mtctr r12
/* 8029CB90 00299AD0  4E 80 04 21 */	bctrl 
/* 8029CB94 00299AD4  7C 64 1B 78 */	mr r4, r3
/* 8029CB98 00299AD8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8029CB9C 00299ADC  81 83 00 00 */	lwz r12, 0(r3)
/* 8029CBA0 00299AE0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029CBA4 00299AE4  7D 89 03 A6 */	mtctr r12
/* 8029CBA8 00299AE8  4E 80 04 21 */	bctrl 
/* 8029CBAC 00299AEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029CBB0 00299AF0  40 82 01 E0 */	bne .L_8029CD90
/* 8029CBB4 00299AF4  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8029CBB8 00299AF8  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8029CBBC 00299AFC  81 83 00 00 */	lwz r12, 0(r3)
/* 8029CBC0 00299B00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8029CBC4 00299B04  7D 89 03 A6 */	mtctr r12
/* 8029CBC8 00299B08  4E 80 04 21 */	bctrl 
/* 8029CBCC 00299B0C  90 61 00 20 */	stw r3, 0x20(r1)
.L_8029CBD0:
/* 8029CBD0 00299B10  81 81 00 1C */	lwz r12, 0x1c(r1)
/* 8029CBD4 00299B14  38 61 00 1C */	addi r3, r1, 0x1c
/* 8029CBD8 00299B18  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029CBDC 00299B1C  7D 89 03 A6 */	mtctr r12
/* 8029CBE0 00299B20  4E 80 04 21 */	bctrl 
/* 8029CBE4 00299B24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029CBE8 00299B28  41 82 FF 94 */	beq .L_8029CB7C
/* 8029CBEC 00299B2C  48 00 01 A4 */	b .L_8029CD90
.L_8029CBF0:
/* 8029CBF0 00299B30  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8029CBF4 00299B34  81 83 00 00 */	lwz r12, 0(r3)
/* 8029CBF8 00299B38  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8029CBFC 00299B3C  7D 89 03 A6 */	mtctr r12
/* 8029CC00 00299B40  4E 80 04 21 */	bctrl 
/* 8029CC04 00299B44  81 83 00 00 */	lwz r12, 0(r3)
/* 8029CC08 00299B48  7C 7E 1B 78 */	mr r30, r3
/* 8029CC0C 00299B4C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8029CC10 00299B50  7D 89 03 A6 */	mtctr r12
/* 8029CC14 00299B54  4E 80 04 21 */	bctrl 
/* 8029CC18 00299B58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029CC1C 00299B5C  41 82 00 B8 */	beq .L_8029CCD4
/* 8029CC20 00299B60  7F C3 F3 78 */	mr r3, r30
/* 8029CC24 00299B64  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029CC28 00299B68  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 8029CC2C 00299B6C  7D 89 03 A6 */	mtctr r12
/* 8029CC30 00299B70  4E 80 04 21 */	bctrl 
/* 8029CC34 00299B74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029CC38 00299B78  41 82 00 9C */	beq .L_8029CCD4
/* 8029CC3C 00299B7C  7F C3 F3 78 */	mr r3, r30
/* 8029CC40 00299B80  4B F0 29 49 */	bl isStickToMouth__Q24Game8CreatureFv
/* 8029CC44 00299B84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029CC48 00299B88  40 82 00 8C */	bne .L_8029CCD4
/* 8029CC4C 00299B8C  7F C3 F3 78 */	mr r3, r30
/* 8029CC50 00299B90  7F E4 FB 78 */	mr r4, r31
/* 8029CC54 00299B94  4B EA D5 B5 */	bl isMyPikmin__Q24Game4PikiFPQ24Game8Creature
/* 8029CC58 00299B98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029CC5C 00299B9C  40 82 00 78 */	bne .L_8029CCD4
/* 8029CC60 00299BA0  7F C4 F3 78 */	mr r4, r30
/* 8029CC64 00299BA4  38 61 00 10 */	addi r3, r1, 0x10
/* 8029CC68 00299BA8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029CC6C 00299BAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029CC70 00299BB0  7D 89 03 A6 */	mtctr r12
/* 8029CC74 00299BB4  4E 80 04 21 */	bctrl 
/* 8029CC78 00299BB8  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 8029CC7C 00299BBC  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8029CC80 00299BC0  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 8029CC84 00299BC4  EC 21 00 28 */	fsubs f1, f1, f0
/* 8029CC88 00299BC8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8029CC8C 00299BCC  EC 42 00 28 */	fsubs f2, f2, f0
/* 8029CC90 00299BD0  EC 01 00 72 */	fmuls f0, f1, f1
/* 8029CC94 00299BD4  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 8029CC98 00299BD8  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8029CC9C 00299BDC  40 80 00 38 */	bge .L_8029CCD4
/* 8029CCA0 00299BE0  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 8029CCA4 00299BE4  3C 60 80 4B */	lis r3, __vt__Q24Game15InteractFueFuki@ha
/* 8029CCA8 00299BE8  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 8029CCAC 00299BEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029CCB0 00299BF0  38 03 49 E0 */	addi r0, r3, __vt__Q24Game15InteractFueFuki@l
/* 8029CCB4 00299BF4  7F C3 F3 78 */	mr r3, r30
/* 8029CCB8 00299BF8  90 81 00 08 */	stw r4, 8(r1)
/* 8029CCBC 00299BFC  38 81 00 08 */	addi r4, r1, 8
/* 8029CCC0 00299C00  90 01 00 08 */	stw r0, 8(r1)
/* 8029CCC4 00299C04  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029CCC8 00299C08  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8029CCCC 00299C0C  7D 89 03 A6 */	mtctr r12
/* 8029CCD0 00299C10  4E 80 04 21 */	bctrl 
.L_8029CCD4:
/* 8029CCD4 00299C14  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8029CCD8 00299C18  28 00 00 00 */	cmplwi r0, 0
/* 8029CCDC 00299C1C  40 82 00 24 */	bne .L_8029CD00
/* 8029CCE0 00299C20  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8029CCE4 00299C24  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8029CCE8 00299C28  81 83 00 00 */	lwz r12, 0(r3)
/* 8029CCEC 00299C2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8029CCF0 00299C30  7D 89 03 A6 */	mtctr r12
/* 8029CCF4 00299C34  4E 80 04 21 */	bctrl 
/* 8029CCF8 00299C38  90 61 00 20 */	stw r3, 0x20(r1)
/* 8029CCFC 00299C3C  48 00 00 94 */	b .L_8029CD90
.L_8029CD00:
/* 8029CD00 00299C40  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8029CD04 00299C44  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8029CD08 00299C48  81 83 00 00 */	lwz r12, 0(r3)
/* 8029CD0C 00299C4C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8029CD10 00299C50  7D 89 03 A6 */	mtctr r12
/* 8029CD14 00299C54  4E 80 04 21 */	bctrl 
/* 8029CD18 00299C58  90 61 00 20 */	stw r3, 0x20(r1)
/* 8029CD1C 00299C5C  48 00 00 58 */	b .L_8029CD74
.L_8029CD20:
/* 8029CD20 00299C60  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8029CD24 00299C64  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8029CD28 00299C68  81 83 00 00 */	lwz r12, 0(r3)
/* 8029CD2C 00299C6C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8029CD30 00299C70  7D 89 03 A6 */	mtctr r12
/* 8029CD34 00299C74  4E 80 04 21 */	bctrl 
/* 8029CD38 00299C78  7C 64 1B 78 */	mr r4, r3
/* 8029CD3C 00299C7C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8029CD40 00299C80  81 83 00 00 */	lwz r12, 0(r3)
/* 8029CD44 00299C84  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029CD48 00299C88  7D 89 03 A6 */	mtctr r12
/* 8029CD4C 00299C8C  4E 80 04 21 */	bctrl 
/* 8029CD50 00299C90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029CD54 00299C94  40 82 00 3C */	bne .L_8029CD90
/* 8029CD58 00299C98  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8029CD5C 00299C9C  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8029CD60 00299CA0  81 83 00 00 */	lwz r12, 0(r3)
/* 8029CD64 00299CA4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8029CD68 00299CA8  7D 89 03 A6 */	mtctr r12
/* 8029CD6C 00299CAC  4E 80 04 21 */	bctrl 
/* 8029CD70 00299CB0  90 61 00 20 */	stw r3, 0x20(r1)
.L_8029CD74:
/* 8029CD74 00299CB4  81 81 00 1C */	lwz r12, 0x1c(r1)
/* 8029CD78 00299CB8  38 61 00 1C */	addi r3, r1, 0x1c
/* 8029CD7C 00299CBC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029CD80 00299CC0  7D 89 03 A6 */	mtctr r12
/* 8029CD84 00299CC4  4E 80 04 21 */	bctrl 
/* 8029CD88 00299CC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029CD8C 00299CCC  41 82 FF 94 */	beq .L_8029CD20
.L_8029CD90:
/* 8029CD90 00299CD0  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8029CD94 00299CD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8029CD98 00299CD8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029CD9C 00299CDC  7D 89 03 A6 */	mtctr r12
/* 8029CDA0 00299CE0  4E 80 04 21 */	bctrl 
/* 8029CDA4 00299CE4  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8029CDA8 00299CE8  7C 04 18 40 */	cmplw r4, r3
/* 8029CDAC 00299CEC  40 82 FE 44 */	bne .L_8029CBF0
/* 8029CDB0 00299CF0  80 6D 95 B0 */	lwz r3, mgr__5Radar@sda21(r13)
/* 8029CDB4 00299CF4  28 03 00 00 */	cmplwi r3, 0
/* 8029CDB8 00299CF8  41 82 00 08 */	beq .L_8029CDC0
/* 8029CDBC 00299CFC  4B F8 17 B9 */	bl fuefuki__Q25Radar3MgrFv
.L_8029CDC0:
/* 8029CDC0 00299D00  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8029CDC4 00299D04  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8029CDC8 00299D08  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8029CDCC 00299D0C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8029CDD0 00299D10  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8029CDD4 00299D14  7C 08 03 A6 */	mtlr r0
/* 8029CDD8 00299D18  38 21 00 50 */	addi r1, r1, 0x50
/* 8029CDDC 00299D1C  4E 80 00 20 */	blr 

.global finishWhisle__Q34Game7Fuefuki3ObjFv
finishWhisle__Q34Game7Fuefuki3ObjFv:
/* 8029CDE0 00299D20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029CDE4 00299D24  7C 08 02 A6 */	mflr r0
/* 8029CDE8 00299D28  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029CDEC 00299D2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029CDF0 00299D30  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8029CDF4 00299D34  60 00 00 40 */	ori r0, r0, 0x40
/* 8029CDF8 00299D38  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 8029CDFC 00299D3C  D0 03 02 CC */	stfs f0, 0x2cc(r3)
/* 8029CE00 00299D40  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 8029CE04 00299D44  48 00 08 99 */	bl finishWhisleEffect__Q34Game7Fuefuki3ObjFv
/* 8029CE08 00299D48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029CE0C 00299D4C  7C 08 03 A6 */	mtlr r0
/* 8029CE10 00299D50  38 21 00 10 */	addi r1, r1, 0x10
/* 8029CE14 00299D54  4E 80 00 20 */	blr 

.global setTargetPosition__Q34Game7Fuefuki3ObjFb
setTargetPosition__Q34Game7Fuefuki3ObjFb:
/* 8029CE18 00299D58  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8029CE1C 00299D5C  7C 08 02 A6 */	mflr r0
/* 8029CE20 00299D60  90 01 00 54 */	stw r0, 0x54(r1)
/* 8029CE24 00299D64  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8029CE28 00299D68  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8029CE2C 00299D6C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8029CE30 00299D70  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8029CE34 00299D74  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8029CE38 00299D78  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8029CE3C 00299D7C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8029CE40 00299D80  7C 9F 23 78 */	mr r31, r4
/* 8029CE44 00299D84  7C 7E 1B 78 */	mr r30, r3
/* 8029CE48 00299D88  41 82 00 D8 */	beq .L_8029CF20
/* 8029CE4C 00299D8C  4B E2 C7 55 */	bl rand
/* 8029CE50 00299D90  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8029CE54 00299D94  3C 00 43 30 */	lis r0, 0x4330
/* 8029CE58 00299D98  90 61 00 0C */	stw r3, 0xc(r1)
/* 8029CE5C 00299D9C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8029CE60 00299DA0  90 01 00 08 */	stw r0, 8(r1)
/* 8029CE64 00299DA4  C8 42 D9 58 */	lfd f2, lbl_8051BCB8@sda21(r2)
/* 8029CE68 00299DA8  28 03 00 00 */	cmplwi r3, 0
/* 8029CE6C 00299DAC  C8 01 00 08 */	lfd f0, 8(r1)
/* 8029CE70 00299DB0  C0 22 D9 60 */	lfs f1, lbl_8051BCC0@sda21(r2)
/* 8029CE74 00299DB4  EC 40 10 28 */	fsubs f2, f0, f2
/* 8029CE78 00299DB8  C0 02 D9 50 */	lfs f0, lbl_8051BCB0@sda21(r2)
/* 8029CE7C 00299DBC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8029CE80 00299DC0  EC 01 00 24 */	fdivs f0, f1, f0
/* 8029CE84 00299DC4  FF C0 00 90 */	fmr f30, f0
/* 8029CE88 00299DC8  41 82 00 4C */	beq .L_8029CED4
/* 8029CE8C 00299DCC  88 03 00 48 */	lbz r0, 0x48(r3)
/* 8029CE90 00299DD0  28 00 00 00 */	cmplwi r0, 0
/* 8029CE94 00299DD4  41 82 00 40 */	beq .L_8029CED4
/* 8029CE98 00299DD8  4B E2 C7 09 */	bl rand
/* 8029CE9C 00299DDC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8029CEA0 00299DE0  3C 00 43 30 */	lis r0, 0x4330
/* 8029CEA4 00299DE4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8029CEA8 00299DE8  C8 62 D9 58 */	lfd f3, lbl_8051BCB8@sda21(r2)
/* 8029CEAC 00299DEC  90 01 00 08 */	stw r0, 8(r1)
/* 8029CEB0 00299DF0  C0 42 D9 64 */	lfs f2, lbl_8051BCC4@sda21(r2)
/* 8029CEB4 00299DF4  C8 01 00 08 */	lfd f0, 8(r1)
/* 8029CEB8 00299DF8  C0 22 D9 50 */	lfs f1, lbl_8051BCB0@sda21(r2)
/* 8029CEBC 00299DFC  EC 60 18 28 */	fsubs f3, f0, f3
/* 8029CEC0 00299E00  C0 02 D9 48 */	lfs f0, lbl_8051BCA8@sda21(r2)
/* 8029CEC4 00299E04  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8029CEC8 00299E08  EC 22 08 24 */	fdivs f1, f2, f1
/* 8029CECC 00299E0C  EF E0 08 2A */	fadds f31, f0, f1
/* 8029CED0 00299E10  48 00 00 F8 */	b .L_8029CFC8
.L_8029CED4:
/* 8029CED4 00299E14  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8029CED8 00299E18  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 8029CEDC 00299E1C  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 8029CEE0 00299E20  EF E1 00 28 */	fsubs f31, f1, f0
/* 8029CEE4 00299E24  4B E2 C6 BD */	bl rand
/* 8029CEE8 00299E28  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8029CEEC 00299E2C  3C 00 43 30 */	lis r0, 0x4330
/* 8029CEF0 00299E30  90 61 00 0C */	stw r3, 0xc(r1)
/* 8029CEF4 00299E34  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8029CEF8 00299E38  90 01 00 08 */	stw r0, 8(r1)
/* 8029CEFC 00299E3C  C8 42 D9 58 */	lfd f2, lbl_8051BCB8@sda21(r2)
/* 8029CF00 00299E40  C8 01 00 08 */	lfd f0, 8(r1)
/* 8029CF04 00299E44  C0 22 D9 50 */	lfs f1, lbl_8051BCB0@sda21(r2)
/* 8029CF08 00299E48  EC 40 10 28 */	fsubs f2, f0, f2
/* 8029CF0C 00299E4C  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 8029CF10 00299E50  EC 5F 00 B2 */	fmuls f2, f31, f2
/* 8029CF14 00299E54  EC 22 08 24 */	fdivs f1, f2, f1
/* 8029CF18 00299E58  EF E0 08 2A */	fadds f31, f0, f1
/* 8029CF1C 00299E5C  48 00 00 AC */	b .L_8029CFC8
.L_8029CF20:
/* 8029CF20 00299E60  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8029CF24 00299E64  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 8029CF28 00299E68  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 8029CF2C 00299E6C  EF C1 00 28 */	fsubs f30, f1, f0
/* 8029CF30 00299E70  4B E2 C6 71 */	bl rand
/* 8029CF34 00299E74  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8029CF38 00299E78  3C 00 43 30 */	lis r0, 0x4330
/* 8029CF3C 00299E7C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8029CF40 00299E80  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8029CF44 00299E84  90 01 00 08 */	stw r0, 8(r1)
/* 8029CF48 00299E88  C8 42 D9 58 */	lfd f2, lbl_8051BCB8@sda21(r2)
/* 8029CF4C 00299E8C  C8 01 00 08 */	lfd f0, 8(r1)
/* 8029CF50 00299E90  C0 22 D9 50 */	lfs f1, lbl_8051BCB0@sda21(r2)
/* 8029CF54 00299E94  EC 40 10 28 */	fsubs f2, f0, f2
/* 8029CF58 00299E98  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 8029CF5C 00299E9C  EC 5E 00 B2 */	fmuls f2, f30, f2
/* 8029CF60 00299EA0  EC 22 08 24 */	fdivs f1, f2, f1
/* 8029CF64 00299EA4  EF E0 08 2A */	fadds f31, f0, f1
/* 8029CF68 00299EA8  4B E2 C6 39 */	bl rand
/* 8029CF6C 00299EAC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8029CF70 00299EB0  3C 00 43 30 */	lis r0, 0x4330
/* 8029CF74 00299EB4  90 61 00 14 */	stw r3, 0x14(r1)
/* 8029CF78 00299EB8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8029CF7C 00299EBC  C8 42 D9 58 */	lfd f2, lbl_8051BCB8@sda21(r2)
/* 8029CF80 00299EC0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8029CF84 00299EC4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8029CF88 00299EC8  C0 02 D9 68 */	lfs f0, lbl_8051BCC8@sda21(r2)
/* 8029CF8C 00299ECC  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8029CF90 00299ED0  C0 82 D9 50 */	lfs f4, lbl_8051BCB0@sda21(r2)
/* 8029CF94 00299ED4  EC A1 10 28 */	fsubs f5, f1, f2
/* 8029CF98 00299ED8  C0 7E 01 8C */	lfs f3, 0x18c(r30)
/* 8029CF9C 00299EDC  C0 3E 01 98 */	lfs f1, 0x198(r30)
/* 8029CFA0 00299EE0  C0 5E 01 94 */	lfs f2, 0x194(r30)
/* 8029CFA4 00299EE4  EC A0 01 72 */	fmuls f5, f0, f5
/* 8029CFA8 00299EE8  C0 1E 01 A0 */	lfs f0, 0x1a0(r30)
/* 8029CFAC 00299EEC  EC 23 08 28 */	fsubs f1, f3, f1
/* 8029CFB0 00299EF0  EC 42 00 28 */	fsubs f2, f2, f0
/* 8029CFB4 00299EF4  EF C5 20 24 */	fdivs f30, f5, f4
/* 8029CFB8 00299EF8  4B D9 81 51 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8029CFBC 00299EFC  EC 01 F0 2A */	fadds f0, f1, f30
/* 8029CFC0 00299F00  C0 22 D9 6C */	lfs f1, lbl_8051BCCC@sda21(r2)
/* 8029CFC4 00299F04  EF C1 00 2A */	fadds f30, f1, f0
.L_8029CFC8:
/* 8029CFC8 00299F08  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029CFCC 00299F0C  FC 20 F0 90 */	fmr f1, f30
/* 8029CFD0 00299F10  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8029CFD4 00299F14  40 80 00 08 */	bge .L_8029CFDC
/* 8029CFD8 00299F18  FC 20 F0 50 */	fneg f1, f30
.L_8029CFDC:
/* 8029CFDC 00299F1C  C0 62 D9 70 */	lfs f3, lbl_8051BCD0@sda21(r2)
/* 8029CFE0 00299F20  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8029CFE4 00299F24  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029CFE8 00299F28  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8029CFEC 00299F2C  EC 41 00 F2 */	fmuls f2, f1, f3
/* 8029CFF0 00299F30  C0 3E 01 A0 */	lfs f1, 0x1a0(r30)
/* 8029CFF4 00299F34  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8029CFF8 00299F38  C0 9E 01 9C */	lfs f4, 0x19c(r30)
/* 8029CFFC 00299F3C  FC 00 10 1E */	fctiwz f0, f2
/* 8029D000 00299F40  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8029D004 00299F44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029D008 00299F48  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8029D00C 00299F4C  7C 64 02 14 */	add r3, r4, r0
/* 8029D010 00299F50  C0 03 00 04 */	lfs f0, 4(r3)
/* 8029D014 00299F54  EC 5F 08 3A */	fmadds f2, f31, f0, f1
/* 8029D018 00299F58  40 80 00 28 */	bge .L_8029D040
/* 8029D01C 00299F5C  C0 02 D9 74 */	lfs f0, lbl_8051BCD4@sda21(r2)
/* 8029D020 00299F60  EC 1E 00 32 */	fmuls f0, f30, f0
/* 8029D024 00299F64  FC 00 00 1E */	fctiwz f0, f0
/* 8029D028 00299F68  D8 01 00 08 */	stfd f0, 8(r1)
/* 8029D02C 00299F6C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8029D030 00299F70  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8029D034 00299F74  7C 04 04 2E */	lfsx f0, r4, r0
/* 8029D038 00299F78  FC 20 00 50 */	fneg f1, f0
/* 8029D03C 00299F7C  48 00 00 1C */	b .L_8029D058
.L_8029D040:
/* 8029D040 00299F80  EC 1E 00 F2 */	fmuls f0, f30, f3
/* 8029D044 00299F84  FC 00 00 1E */	fctiwz f0, f0
/* 8029D048 00299F88  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8029D04C 00299F8C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8029D050 00299F90  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8029D054 00299F94  7C 24 04 2E */	lfsx f1, r4, r0
.L_8029D058:
/* 8029D058 00299F98  C0 1E 01 98 */	lfs f0, 0x198(r30)
/* 8029D05C 00299F9C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8029D060 00299FA0  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 8029D064 00299FA4  D0 1E 02 DC */	stfs f0, 0x2dc(r30)
/* 8029D068 00299FA8  D0 9E 02 E0 */	stfs f4, 0x2e0(r30)
/* 8029D06C 00299FAC  D0 5E 02 E4 */	stfs f2, 0x2e4(r30)
/* 8029D070 00299FB0  41 82 00 20 */	beq .L_8029D090
/* 8029D074 00299FB4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8029D078 00299FB8  38 9E 02 DC */	addi r4, r30, 0x2dc
/* 8029D07C 00299FBC  81 83 00 04 */	lwz r12, 4(r3)
/* 8029D080 00299FC0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8029D084 00299FC4  7D 89 03 A6 */	mtctr r12
/* 8029D088 00299FC8  4E 80 04 21 */	bctrl 
/* 8029D08C 00299FCC  D0 3E 02 E0 */	stfs f1, 0x2e0(r30)
.L_8029D090:
/* 8029D090 00299FD0  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8029D094 00299FD4  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8029D098 00299FD8  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8029D09C 00299FDC  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8029D0A0 00299FE0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8029D0A4 00299FE4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8029D0A8 00299FE8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8029D0AC 00299FEC  7C 08 03 A6 */	mtlr r0
/* 8029D0B0 00299FF0  38 21 00 50 */	addi r1, r1, 0x50
/* 8029D0B4 00299FF4  4E 80 00 20 */	blr 

.global isJumpAway__Q34Game7Fuefuki3ObjFv
isJumpAway__Q34Game7Fuefuki3ObjFv:
/* 8029D0B8 00299FF8  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8029D0BC 00299FFC  7C 08 02 A6 */	mflr r0
/* 8029D0C0 0029A000  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8029D0C4 0029A004  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8029D0C8 0029A008  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 8029D0CC 0029A00C  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8029D0D0 0029A010  93 C1 00 98 */	stw r30, 0x98(r1)
/* 8029D0D4 0029A014  93 A1 00 94 */	stw r29, 0x94(r1)
/* 8029D0D8 0029A018  7C 7D 1B 78 */	mr r29, r3
/* 8029D0DC 0029A01C  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8029D0E0 0029A020  C0 3D 02 C4 */	lfs f1, 0x2c4(r29)
/* 8029D0E4 0029A024  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 8029D0E8 0029A028  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029D0EC 0029A02C  40 81 00 0C */	ble .L_8029D0F8
/* 8029D0F0 0029A030  38 60 00 01 */	li r3, 1
/* 8029D0F4 0029A034  48 00 01 80 */	b .L_8029D274
.L_8029D0F8:
/* 8029D0F8 0029A038  C0 3D 02 D4 */	lfs f1, 0x2d4(r29)
/* 8029D0FC 0029A03C  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029D100 0029A040  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029D104 0029A044  41 81 01 6C */	bgt .L_8029D270
/* 8029D108 0029A048  C0 23 03 AC */	lfs f1, 0x3ac(r3)
/* 8029D10C 0029A04C  38 61 00 24 */	addi r3, r1, 0x24
/* 8029D110 0029A050  C0 1D 01 8C */	lfs f0, 0x18c(r29)
/* 8029D114 0029A054  38 81 00 14 */	addi r4, r1, 0x14
/* 8029D118 0029A058  EF E1 00 72 */	fmuls f31, f1, f1
/* 8029D11C 0029A05C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8029D120 0029A060  C0 1D 01 90 */	lfs f0, 0x190(r29)
/* 8029D124 0029A064  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8029D128 0029A068  C0 1D 01 94 */	lfs f0, 0x194(r29)
/* 8029D12C 0029A06C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8029D130 0029A070  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8029D134 0029A074  4B F9 12 6D */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 8029D138 0029A078  38 00 00 01 */	li r0, 1
/* 8029D13C 0029A07C  38 61 00 44 */	addi r3, r1, 0x44
/* 8029D140 0029A080  98 01 00 40 */	stb r0, 0x40(r1)
/* 8029D144 0029A084  38 81 00 24 */	addi r4, r1, 0x24
/* 8029D148 0029A088  4B F9 12 99 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 8029D14C 0029A08C  38 61 00 44 */	addi r3, r1, 0x44
/* 8029D150 0029A090  4B F9 13 0D */	bl first__Q24Game12CellIteratorFv
/* 8029D154 0029A094  48 00 01 0C */	b .L_8029D260
.L_8029D158:
/* 8029D158 0029A098  38 61 00 44 */	addi r3, r1, 0x44
/* 8029D15C 0029A09C  4B F9 13 E9 */	bl __ml__Q24Game12CellIteratorFv
/* 8029D160 0029A0A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8029D164 0029A0A4  7C 7F 1B 78 */	mr r31, r3
/* 8029D168 0029A0A8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8029D16C 0029A0AC  7D 89 03 A6 */	mtctr r12
/* 8029D170 0029A0B0  4E 80 04 21 */	bctrl 
/* 8029D174 0029A0B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029D178 0029A0B8  41 82 00 E0 */	beq .L_8029D258
/* 8029D17C 0029A0BC  7F E3 FB 78 */	mr r3, r31
/* 8029D180 0029A0C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029D184 0029A0C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029D188 0029A0C8  7D 89 03 A6 */	mtctr r12
/* 8029D18C 0029A0CC  4E 80 04 21 */	bctrl 
/* 8029D190 0029A0D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029D194 0029A0D4  7C 7E 1B 78 */	mr r30, r3
/* 8029D198 0029A0D8  40 82 00 64 */	bne .L_8029D1FC
/* 8029D19C 0029A0DC  7F E3 FB 78 */	mr r3, r31
/* 8029D1A0 0029A0E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029D1A4 0029A0E4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8029D1A8 0029A0E8  7D 89 03 A6 */	mtctr r12
/* 8029D1AC 0029A0EC  4E 80 04 21 */	bctrl 
/* 8029D1B0 0029A0F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029D1B4 0029A0F4  41 82 00 48 */	beq .L_8029D1FC
/* 8029D1B8 0029A0F8  7F E3 FB 78 */	mr r3, r31
/* 8029D1BC 0029A0FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029D1C0 0029A100  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 8029D1C4 0029A104  7D 89 03 A6 */	mtctr r12
/* 8029D1C8 0029A108  4E 80 04 21 */	bctrl 
/* 8029D1CC 0029A10C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029D1D0 0029A110  41 82 00 2C */	beq .L_8029D1FC
/* 8029D1D4 0029A114  7F E3 FB 78 */	mr r3, r31
/* 8029D1D8 0029A118  4B F0 23 B1 */	bl isStickToMouth__Q24Game8CreatureFv
/* 8029D1DC 0029A11C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029D1E0 0029A120  40 82 00 1C */	bne .L_8029D1FC
/* 8029D1E4 0029A124  7F E3 FB 78 */	mr r3, r31
/* 8029D1E8 0029A128  7F A4 EB 78 */	mr r4, r29
/* 8029D1EC 0029A12C  4B EA D0 1D */	bl isMyPikmin__Q24Game4PikiFPQ24Game8Creature
/* 8029D1F0 0029A130  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029D1F4 0029A134  40 82 00 08 */	bne .L_8029D1FC
/* 8029D1F8 0029A138  3B C0 00 01 */	li r30, 1
.L_8029D1FC:
/* 8029D1FC 0029A13C  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8029D200 0029A140  41 82 00 58 */	beq .L_8029D258
/* 8029D204 0029A144  7F E4 FB 78 */	mr r4, r31
/* 8029D208 0029A148  38 61 00 08 */	addi r3, r1, 8
/* 8029D20C 0029A14C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029D210 0029A150  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029D214 0029A154  7D 89 03 A6 */	mtctr r12
/* 8029D218 0029A158  4E 80 04 21 */	bctrl 
/* 8029D21C 0029A15C  C0 3D 01 94 */	lfs f1, 0x194(r29)
/* 8029D220 0029A160  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8029D224 0029A164  C0 5D 01 8C */	lfs f2, 0x18c(r29)
/* 8029D228 0029A168  EC 21 00 28 */	fsubs f1, f1, f0
/* 8029D22C 0029A16C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8029D230 0029A170  EC 42 00 28 */	fsubs f2, f2, f0
/* 8029D234 0029A174  EC 01 00 72 */	fmuls f0, f1, f1
/* 8029D238 0029A178  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 8029D23C 0029A17C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8029D240 0029A180  40 80 00 18 */	bge .L_8029D258
/* 8029D244 0029A184  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 8029D248 0029A188  38 60 00 01 */	li r3, 1
/* 8029D24C 0029A18C  C0 04 08 1C */	lfs f0, 0x81c(r4)
/* 8029D250 0029A190  D0 1D 02 C4 */	stfs f0, 0x2c4(r29)
/* 8029D254 0029A194  48 00 00 20 */	b .L_8029D274
.L_8029D258:
/* 8029D258 0029A198  38 61 00 44 */	addi r3, r1, 0x44
/* 8029D25C 0029A19C  4B F9 12 A5 */	bl next__Q24Game12CellIteratorFv
.L_8029D260:
/* 8029D260 0029A1A0  38 61 00 44 */	addi r3, r1, 0x44
/* 8029D264 0029A1A4  4B F9 12 D1 */	bl isDone__Q24Game12CellIteratorFv
/* 8029D268 0029A1A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029D26C 0029A1AC  41 82 FE EC */	beq .L_8029D158
.L_8029D270:
/* 8029D270 0029A1B0  38 60 00 00 */	li r3, 0
.L_8029D274:
/* 8029D274 0029A1B4  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 8029D278 0029A1B8  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8029D27C 0029A1BC  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8029D280 0029A1C0  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8029D284 0029A1C4  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 8029D288 0029A1C8  83 A1 00 94 */	lwz r29, 0x94(r1)
/* 8029D28C 0029A1CC  7C 08 03 A6 */	mtlr r0
/* 8029D290 0029A1D0  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8029D294 0029A1D4  4E 80 00 20 */	blr 

.global isArriveTarget__Q34Game7Fuefuki3ObjFv
isArriveTarget__Q34Game7Fuefuki3ObjFv:
/* 8029D298 0029A1D8  80 03 02 88 */	lwz r0, 0x288(r3)
/* 8029D29C 0029A1DC  28 00 00 00 */	cmplwi r0, 0
/* 8029D2A0 0029A1E0  40 82 00 30 */	bne .L_8029D2D0
/* 8029D2A4 0029A1E4  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 8029D2A8 0029A1E8  C0 03 02 E4 */	lfs f0, 0x2e4(r3)
/* 8029D2AC 0029A1EC  C0 43 01 8C */	lfs f2, 0x18c(r3)
/* 8029D2B0 0029A1F0  EC 61 00 28 */	fsubs f3, f1, f0
/* 8029D2B4 0029A1F4  C0 23 02 DC */	lfs f1, 0x2dc(r3)
/* 8029D2B8 0029A1F8  C0 02 D9 78 */	lfs f0, lbl_8051BCD8@sda21(r2)
/* 8029D2BC 0029A1FC  EC 42 08 28 */	fsubs f2, f2, f1
/* 8029D2C0 0029A200  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8029D2C4 0029A204  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8029D2C8 0029A208  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029D2CC 0029A20C  40 80 00 0C */	bge .L_8029D2D8
.L_8029D2D0:
/* 8029D2D0 0029A210  38 60 00 01 */	li r3, 1
/* 8029D2D4 0029A214  4E 80 00 20 */	blr 
.L_8029D2D8:
/* 8029D2D8 0029A218  38 60 00 00 */	li r3, 0
/* 8029D2DC 0029A21C  4E 80 00 20 */	blr 

.global createFootmarks__Q34Game7Fuefuki3ObjFv
createFootmarks__Q34Game7Fuefuki3ObjFv:
/* 8029D2E0 0029A220  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029D2E4 0029A224  7C 08 02 A6 */	mflr r0
/* 8029D2E8 0029A228  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029D2EC 0029A22C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029D2F0 0029A230  7C 7F 1B 78 */	mr r31, r3
/* 8029D2F4 0029A234  38 60 00 20 */	li r3, 0x20
/* 8029D2F8 0029A238  4B D8 6B AD */	bl __nw__FUl
/* 8029D2FC 0029A23C  7C 60 1B 79 */	or. r0, r3, r3
/* 8029D300 0029A240  41 82 00 0C */	beq .L_8029D30C
/* 8029D304 0029A244  4B F1 74 AD */	bl __ct__Q24Game9FootmarksFv
/* 8029D308 0029A248  7C 60 1B 78 */	mr r0, r3
.L_8029D30C:
/* 8029D30C 0029A24C  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 8029D310 0029A250  38 80 00 0A */	li r4, 0xa
/* 8029D314 0029A254  80 7F 02 E8 */	lwz r3, 0x2e8(r31)
/* 8029D318 0029A258  4B F1 74 B5 */	bl alloc__Q24Game9FootmarksFi
/* 8029D31C 0029A25C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029D320 0029A260  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029D324 0029A264  7C 08 03 A6 */	mtlr r0
/* 8029D328 0029A268  38 21 00 10 */	addi r1, r1, 0x10
/* 8029D32C 0029A26C  4E 80 00 20 */	blr 

.global updateFootmarks__Q34Game7Fuefuki3ObjFv
updateFootmarks__Q34Game7Fuefuki3ObjFv:
/* 8029D330 0029A270  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8029D334 0029A274  7C 08 02 A6 */	mflr r0
/* 8029D338 0029A278  C8 42 D9 58 */	lfd f2, lbl_8051BCB8@sda21(r2)
/* 8029D33C 0029A27C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8029D340 0029A280  3C 00 43 30 */	lis r0, 0x4330
/* 8029D344 0029A284  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029D348 0029A288  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8029D34C 0029A28C  7C 7F 1B 78 */	mr r31, r3
/* 8029D350 0029A290  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8029D354 0029A294  80 63 02 E8 */	lwz r3, 0x2e8(r3)
/* 8029D358 0029A298  80 84 00 50 */	lwz r4, 0x50(r4)
/* 8029D35C 0029A29C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8029D360 0029A2A0  90 01 00 28 */	stw r0, 0x28(r1)
/* 8029D364 0029A2A4  7C 04 18 50 */	subf r0, r4, r3
/* 8029D368 0029A2A8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8029D36C 0029A2AC  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8029D370 0029A2B0  C8 21 00 28 */	lfd f1, 0x28(r1)
/* 8029D374 0029A2B4  EC 21 10 28 */	fsubs f1, f1, f2
/* 8029D378 0029A2B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029D37C 0029A2BC  40 81 00 08 */	ble .L_8029D384
/* 8029D380 0029A2C0  48 00 00 08 */	b .L_8029D388
.L_8029D384:
/* 8029D384 0029A2C4  FC 20 08 50 */	fneg f1, f1
.L_8029D388:
/* 8029D388 0029A2C8  C0 02 D9 7C */	lfs f0, lbl_8051BCDC@sda21(r2)
/* 8029D38C 0029A2CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029D390 0029A2D0  40 81 00 48 */	ble .L_8029D3D8
/* 8029D394 0029A2D4  38 61 00 14 */	addi r3, r1, 0x14
/* 8029D398 0029A2D8  4B F1 73 FD */	bl __ct__Q24Game8FootmarkFv
/* 8029D39C 0029A2DC  7F E4 FB 78 */	mr r4, r31
/* 8029D3A0 0029A2E0  38 61 00 08 */	addi r3, r1, 8
/* 8029D3A4 0029A2E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029D3A8 0029A2E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029D3AC 0029A2EC  7D 89 03 A6 */	mtctr r12
/* 8029D3B0 0029A2F0  4E 80 04 21 */	bctrl 
/* 8029D3B4 0029A2F4  C0 41 00 08 */	lfs f2, 8(r1)
/* 8029D3B8 0029A2F8  38 81 00 14 */	addi r4, r1, 0x14
/* 8029D3BC 0029A2FC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8029D3C0 0029A300  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8029D3C4 0029A304  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8029D3C8 0029A308  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8029D3CC 0029A30C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8029D3D0 0029A310  80 7F 02 E8 */	lwz r3, 0x2e8(r31)
/* 8029D3D4 0029A314  4B F1 74 65 */	bl add__Q24Game9FootmarksFRQ24Game8Footmark
.L_8029D3D8:
/* 8029D3D8 0029A318  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8029D3DC 0029A31C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8029D3E0 0029A320  7C 08 03 A6 */	mtlr r0
/* 8029D3E4 0029A324  38 21 00 40 */	addi r1, r1, 0x40
/* 8029D3E8 0029A328  4E 80 00 20 */	blr 

.global createEffect__Q34Game7Fuefuki3ObjFv
createEffect__Q34Game7Fuefuki3ObjFv:
/* 8029D3EC 0029A32C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8029D3F0 0029A330  7C 08 02 A6 */	mflr r0
/* 8029D3F4 0029A334  90 01 00 24 */	stw r0, 0x24(r1)
/* 8029D3F8 0029A338  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8029D3FC 0029A33C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8029D400 0029A340  7C 7E 1B 78 */	mr r30, r3
/* 8029D404 0029A344  38 60 02 90 */	li r3, 0x290
/* 8029D408 0029A348  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8029D40C 0029A34C  4B D8 6A 99 */	bl __nw__FUl
/* 8029D410 0029A350  7C 7F 1B 79 */	or. r31, r3, r3
/* 8029D414 0029A354  41 82 00 BC */	beq .L_8029D4D0
/* 8029D418 0029A358  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8029D41C 0029A35C  3C 60 80 4E */	lis r3, __vt__Q23efx7TCursor@ha
/* 8029D420 0029A360  38 A4 A7 F8 */	addi r5, r4, __vt__Q23efx5TBase@l
/* 8029D424 0029A364  3B BF 00 14 */	addi r29, r31, 0x14
/* 8029D428 0029A368  90 BF 00 00 */	stw r5, 0(r31)
/* 8029D42C 0029A36C  38 03 72 B8 */	addi r0, r3, __vt__Q23efx7TCursor@l
/* 8029D430 0029A370  3C 60 80 4E */	lis r3, __vt__Q23efx11TOneEmitter@ha
/* 8029D434 0029A374  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 8029D438 0029A378  90 1F 00 00 */	stw r0, 0(r31)
/* 8029D43C 0029A37C  38 C3 6B 0C */	addi r6, r3, __vt__Q23efx11TOneEmitter@l
/* 8029D440 0029A380  38 64 E2 7C */	addi r3, r4, __vt__18JPAEmitterCallBack@l
/* 8029D444 0029A384  38 80 00 00 */	li r4, 0
/* 8029D448 0029A388  90 BF 00 04 */	stw r5, 4(r31)
/* 8029D44C 0029A38C  38 A6 00 14 */	addi r5, r6, 0x14
/* 8029D450 0029A390  38 00 00 19 */	li r0, 0x19
/* 8029D454 0029A394  90 7F 00 08 */	stw r3, 8(r31)
/* 8029D458 0029A398  7F A3 EB 78 */	mr r3, r29
/* 8029D45C 0029A39C  90 DF 00 04 */	stw r6, 4(r31)
/* 8029D460 0029A3A0  90 BF 00 08 */	stw r5, 8(r31)
/* 8029D464 0029A3A4  90 9F 00 0C */	stw r4, 0xc(r31)
/* 8029D468 0029A3A8  B0 1F 00 10 */	sth r0, 0x10(r31)
/* 8029D46C 0029A3AC  48 17 3F 25 */	bl __ct__5CNodeFv
/* 8029D470 0029A3B0  3C 60 80 4B */	lis r3, __vt__Q23efx7Context@ha
/* 8029D474 0029A3B4  3C 80 80 14 */	lis r4, __ct__Q23efx7ContextFv@ha
/* 8029D478 0029A3B8  38 03 08 B8 */	addi r0, r3, __vt__Q23efx7Context@l
/* 8029D47C 0029A3BC  38 C0 00 24 */	li r6, 0x24
/* 8029D480 0029A3C0  90 1D 00 00 */	stw r0, 0(r29)
/* 8029D484 0029A3C4  38 00 00 00 */	li r0, 0
/* 8029D488 0029A3C8  3C 60 80 14 */	lis r3, __dt__Q23efx7ContextFv@ha
/* 8029D48C 0029A3CC  38 84 FC 84 */	addi r4, r4, __ct__Q23efx7ContextFv@l
/* 8029D490 0029A3D0  90 1D 00 10 */	stw r0, 0x10(r29)
/* 8029D494 0029A3D4  38 A3 FD 60 */	addi r5, r3, __dt__Q23efx7ContextFv@l
/* 8029D498 0029A3D8  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8029D49C 0029A3DC  38 E0 00 10 */	li r7, 0x10
/* 8029D4A0 0029A3E0  90 1D 00 0C */	stw r0, 0xc(r29)
/* 8029D4A4 0029A3E4  90 1D 00 08 */	stw r0, 8(r29)
/* 8029D4A8 0029A3E8  90 1D 00 04 */	stw r0, 4(r29)
/* 8029D4AC 0029A3EC  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8029D4B0 0029A3F0  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8029D4B4 0029A3F4  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8029D4B8 0029A3F8  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8029D4BC 0029A3FC  4B E2 43 81 */	bl __construct_array
/* 8029D4C0 0029A400  7F E3 FB 78 */	mr r3, r31
/* 8029D4C4 0029A404  38 80 00 00 */	li r4, 0
/* 8029D4C8 0029A408  38 A0 00 10 */	li r5, 0x10
/* 8029D4CC 0029A40C  48 11 95 75 */	bl init__Q23efx7TCursorFll
.L_8029D4D0:
/* 8029D4D0 0029A410  93 FE 02 EC */	stw r31, 0x2ec(r30)
/* 8029D4D4 0029A414  38 80 00 03 */	li r4, 3
/* 8029D4D8 0029A418  38 A0 00 0A */	li r5, 0xa
/* 8029D4DC 0029A41C  80 7E 02 EC */	lwz r3, 0x2ec(r30)
/* 8029D4E0 0029A420  48 11 95 61 */	bl init__Q23efx7TCursorFll
/* 8029D4E4 0029A424  38 60 00 14 */	li r3, 0x14
/* 8029D4E8 0029A428  4B D8 69 BD */	bl __nw__FUl
/* 8029D4EC 0029A42C  28 03 00 00 */	cmplwi r3, 0
/* 8029D4F0 0029A430  41 82 00 78 */	beq .L_8029D568
/* 8029D4F4 0029A434  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8029D4F8 0029A438  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8029D4FC 0029A43C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8029D500 0029A440  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8029D504 0029A444  90 03 00 00 */	stw r0, 0(r3)
/* 8029D508 0029A448  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8029D50C 0029A44C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8029D510 0029A450  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 8029D514 0029A454  90 03 00 04 */	stw r0, 4(r3)
/* 8029D518 0029A458  38 E4 69 40 */	addi r7, r4, __vt__Q23efx9TChasePos@l
/* 8029D51C 0029A45C  3C 80 80 4D */	lis r4, __vt__Q23efx11TFuebugOnpa@ha
/* 8029D520 0029A460  38 05 00 14 */	addi r0, r5, 0x14
/* 8029D524 0029A464  90 A3 00 00 */	stw r5, 0(r3)
/* 8029D528 0029A468  38 84 C2 8C */	addi r4, r4, __vt__Q23efx11TFuebugOnpa@l
/* 8029D52C 0029A46C  39 20 00 00 */	li r9, 0
/* 8029D530 0029A470  39 00 02 B2 */	li r8, 0x2b2
/* 8029D534 0029A474  90 03 00 04 */	stw r0, 4(r3)
/* 8029D538 0029A478  38 C7 00 14 */	addi r6, r7, 0x14
/* 8029D53C 0029A47C  38 A0 00 6B */	li r5, 0x6b
/* 8029D540 0029A480  38 04 00 14 */	addi r0, r4, 0x14
/* 8029D544 0029A484  91 23 00 08 */	stw r9, 8(r3)
/* 8029D548 0029A488  B1 03 00 0C */	sth r8, 0xc(r3)
/* 8029D54C 0029A48C  99 23 00 0E */	stb r9, 0xe(r3)
/* 8029D550 0029A490  90 E3 00 00 */	stw r7, 0(r3)
/* 8029D554 0029A494  90 C3 00 04 */	stw r6, 4(r3)
/* 8029D558 0029A498  91 23 00 10 */	stw r9, 0x10(r3)
/* 8029D55C 0029A49C  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8029D560 0029A4A0  90 83 00 00 */	stw r4, 0(r3)
/* 8029D564 0029A4A4  90 03 00 04 */	stw r0, 4(r3)
.L_8029D568:
/* 8029D568 0029A4A8  90 7E 02 F0 */	stw r3, 0x2f0(r30)
/* 8029D56C 0029A4AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8029D570 0029A4B0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8029D574 0029A4B4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8029D578 0029A4B8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8029D57C 0029A4BC  7C 08 03 A6 */	mtlr r0
/* 8029D580 0029A4C0  38 21 00 20 */	addi r1, r1, 0x20
/* 8029D584 0029A4C4  4E 80 00 20 */	blr 

.global startWhisleEffect__Q34Game7Fuefuki3ObjFv
startWhisleEffect__Q34Game7Fuefuki3ObjFv:
/* 8029D588 0029A4C8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8029D58C 0029A4CC  7C 08 02 A6 */	mflr r0
/* 8029D590 0029A4D0  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 8029D594 0029A4D4  3C 80 80 4D */	lis r4, __vt__Q23efx9ArgCursor@ha
/* 8029D598 0029A4D8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8029D59C 0029A4DC  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 8029D5A0 0029A4E0  C0 02 D9 3C */	lfs f0, lbl_8051BC9C@sda21(r2)
/* 8029D5A4 0029A4E4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8029D5A8 0029A4E8  7C 7F 1B 78 */	mr r31, r3
/* 8029D5AC 0029A4EC  90 01 00 08 */	stw r0, 8(r1)
/* 8029D5B0 0029A4F0  38 04 C2 80 */	addi r0, r4, __vt__Q23efx9ArgCursor@l
/* 8029D5B4 0029A4F4  38 81 00 08 */	addi r4, r1, 8
/* 8029D5B8 0029A4F8  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 8029D5BC 0029A4FC  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8029D5C0 0029A500  C0 23 01 90 */	lfs f1, 0x190(r3)
/* 8029D5C4 0029A504  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8029D5C8 0029A508  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 8029D5CC 0029A50C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8029D5D0 0029A510  90 01 00 08 */	stw r0, 8(r1)
/* 8029D5D4 0029A514  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8029D5D8 0029A518  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 8029D5DC 0029A51C  81 83 00 00 */	lwz r12, 0(r3)
/* 8029D5E0 0029A520  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029D5E4 0029A524  7D 89 03 A6 */	mtctr r12
/* 8029D5E8 0029A528  4E 80 04 21 */	bctrl 
/* 8029D5EC 0029A52C  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 8029D5F0 0029A530  38 1F 01 8C */	addi r0, r31, 0x18c
/* 8029D5F4 0029A534  38 80 00 00 */	li r4, 0
/* 8029D5F8 0029A538  90 03 00 10 */	stw r0, 0x10(r3)
/* 8029D5FC 0029A53C  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 8029D600 0029A540  81 83 00 00 */	lwz r12, 0(r3)
/* 8029D604 0029A544  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029D608 0029A548  7D 89 03 A6 */	mtctr r12
/* 8029D60C 0029A54C  4E 80 04 21 */	bctrl 
/* 8029D610 0029A550  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8029D614 0029A554  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8029D618 0029A558  7C 08 03 A6 */	mtlr r0
/* 8029D61C 0029A55C  38 21 00 30 */	addi r1, r1, 0x30
/* 8029D620 0029A560  4E 80 00 20 */	blr 

.global updateWhisleEffect__Q34Game7Fuefuki3ObjFf
updateWhisleEffect__Q34Game7Fuefuki3ObjFf:
/* 8029D624 0029A564  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8029D628 0029A568  7C 08 02 A6 */	mflr r0
/* 8029D62C 0029A56C  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 8029D630 0029A570  3C 80 80 4D */	lis r4, __vt__Q23efx9ArgCursor@ha
/* 8029D634 0029A574  90 01 00 34 */	stw r0, 0x34(r1)
/* 8029D638 0029A578  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 8029D63C 0029A57C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8029D640 0029A580  7C 7F 1B 78 */	mr r31, r3
/* 8029D644 0029A584  90 01 00 08 */	stw r0, 8(r1)
/* 8029D648 0029A588  38 04 C2 80 */	addi r0, r4, __vt__Q23efx9ArgCursor@l
/* 8029D64C 0029A58C  38 81 00 08 */	addi r4, r1, 8
/* 8029D650 0029A590  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 8029D654 0029A594  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8029D658 0029A598  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 8029D65C 0029A59C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8029D660 0029A5A0  C0 03 01 94 */	lfs f0, 0x194(r3)
/* 8029D664 0029A5A4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8029D668 0029A5A8  90 01 00 08 */	stw r0, 8(r1)
/* 8029D66C 0029A5AC  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8029D670 0029A5B0  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 8029D674 0029A5B4  48 11 95 99 */	bl update__Q23efx7TCursorFPQ23efx3Arg
/* 8029D678 0029A5B8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8029D67C 0029A5BC  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8029D680 0029A5C0  C0 04 05 DC */	lfs f0, 0x5dc(r4)
/* 8029D684 0029A5C4  D0 03 02 8C */	stfs f0, 0x28c(r3)
/* 8029D688 0029A5C8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8029D68C 0029A5CC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8029D690 0029A5D0  7C 08 03 A6 */	mtlr r0
/* 8029D694 0029A5D4  38 21 00 30 */	addi r1, r1, 0x30
/* 8029D698 0029A5D8  4E 80 00 20 */	blr 

.global finishWhisleEffect__Q34Game7Fuefuki3ObjFv
finishWhisleEffect__Q34Game7Fuefuki3ObjFv:
/* 8029D69C 0029A5DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029D6A0 0029A5E0  7C 08 02 A6 */	mflr r0
/* 8029D6A4 0029A5E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029D6A8 0029A5E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029D6AC 0029A5EC  7C 7F 1B 78 */	mr r31, r3
/* 8029D6B0 0029A5F0  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 8029D6B4 0029A5F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8029D6B8 0029A5F8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029D6BC 0029A5FC  7D 89 03 A6 */	mtctr r12
/* 8029D6C0 0029A600  4E 80 04 21 */	bctrl 
/* 8029D6C4 0029A604  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 8029D6C8 0029A608  81 83 00 00 */	lwz r12, 0(r3)
/* 8029D6CC 0029A60C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029D6D0 0029A610  7D 89 03 A6 */	mtctr r12
/* 8029D6D4 0029A614  4E 80 04 21 */	bctrl 
/* 8029D6D8 0029A618  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029D6DC 0029A61C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029D6E0 0029A620  7C 08 03 A6 */	mtlr r0
/* 8029D6E4 0029A624  38 21 00 10 */	addi r1, r1, 0x10
/* 8029D6E8 0029A628  4E 80 00 20 */	blr 

.global fade__Q23efx7TCursorFv
fade__Q23efx7TCursorFv:
/* 8029D6EC 0029A62C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029D6F0 0029A630  7C 08 02 A6 */	mflr r0
/* 8029D6F4 0029A634  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029D6F8 0029A638  85 83 00 04 */	lwzu r12, 4(r3)
/* 8029D6FC 0029A63C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029D700 0029A640  7D 89 03 A6 */	mtctr r12
/* 8029D704 0029A644  4E 80 04 21 */	bctrl 
/* 8029D708 0029A648  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029D70C 0029A64C  7C 08 03 A6 */	mtlr r0
/* 8029D710 0029A650  38 21 00 10 */	addi r1, r1, 0x10
/* 8029D714 0029A654  4E 80 00 20 */	blr 

.global createDownEffect__Q34Game7Fuefuki3ObjFf
createDownEffect__Q34Game7Fuefuki3ObjFf:
/* 8029D718 0029A658  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8029D71C 0029A65C  7C 08 02 A6 */	mflr r0
/* 8029D720 0029A660  90 01 00 44 */	stw r0, 0x44(r1)
/* 8029D724 0029A664  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8029D728 0029A668  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8029D72C 0029A66C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8029D730 0029A670  81 83 00 00 */	lwz r12, 0(r3)
/* 8029D734 0029A674  FF E0 08 90 */	fmr f31, f1
/* 8029D738 0029A678  7C 7F 1B 78 */	mr r31, r3
/* 8029D73C 0029A67C  38 81 00 14 */	addi r4, r1, 0x14
/* 8029D740 0029A680  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029D744 0029A684  7D 89 03 A6 */	mtctr r12
/* 8029D748 0029A688  4E 80 04 21 */	bctrl 
/* 8029D74C 0029A68C  C0 7F 01 90 */	lfs f3, 0x190(r31)
/* 8029D750 0029A690  FC 20 F8 90 */	fmr f1, f31
/* 8029D754 0029A694  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8029D758 0029A698  7F E3 FB 78 */	mr r3, r31
/* 8029D75C 0029A69C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8029D760 0029A6A0  38 81 00 08 */	addi r4, r1, 8
/* 8029D764 0029A6A4  D0 41 00 08 */	stfs f2, 8(r1)
/* 8029D768 0029A6A8  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 8029D76C 0029A6AC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8029D770 0029A6B0  4B E6 63 E1 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 8029D774 0029A6B4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8029D778 0029A6B8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8029D77C 0029A6BC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8029D780 0029A6C0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8029D784 0029A6C4  7C 08 03 A6 */	mtlr r0
/* 8029D788 0029A6C8  38 21 00 40 */	addi r1, r1, 0x40
/* 8029D78C 0029A6CC  4E 80 00 20 */	blr 

.global createEfxHamon__Q34Game7Fuefuki3ObjFv
createEfxHamon__Q34Game7Fuefuki3ObjFv:
/* 8029D790 0029A6D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029D794 0029A6D4  7C 08 02 A6 */	mflr r0
/* 8029D798 0029A6D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029D79C 0029A6DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029D7A0 0029A6E0  7C 7F 1B 78 */	mr r31, r3
/* 8029D7A4 0029A6E4  81 83 00 00 */	lwz r12, 0(r3)
/* 8029D7A8 0029A6E8  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 8029D7AC 0029A6EC  7D 89 03 A6 */	mtctr r12
/* 8029D7B0 0029A6F0  4E 80 04 21 */	bctrl 
/* 8029D7B4 0029A6F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029D7B8 0029A6F8  40 82 00 0C */	bne .L_8029D7C4
/* 8029D7BC 0029A6FC  7F E3 FB 78 */	mr r3, r31
/* 8029D7C0 0029A700  4B E6 41 45 */	bl createEfxHamon__Q24Game9EnemyBaseFv
.L_8029D7C4:
/* 8029D7C4 0029A704  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029D7C8 0029A708  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029D7CC 0029A70C  7C 08 03 A6 */	mtlr r0
/* 8029D7D0 0029A710  38 21 00 10 */	addi r1, r1, 0x10
/* 8029D7D4 0029A714  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game7Fuefuki3ObjFv
effectDrawOn__Q34Game7Fuefuki3ObjFv:
/* 8029D7D8 0029A718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029D7DC 0029A71C  7C 08 02 A6 */	mflr r0
/* 8029D7E0 0029A720  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029D7E4 0029A724  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029D7E8 0029A728  7C 7F 1B 78 */	mr r31, r3
/* 8029D7EC 0029A72C  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 8029D7F0 0029A730  85 83 00 04 */	lwzu r12, 4(r3)
/* 8029D7F4 0029A734  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8029D7F8 0029A738  7D 89 03 A6 */	mtctr r12
/* 8029D7FC 0029A73C  4E 80 04 21 */	bctrl 
/* 8029D800 0029A740  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 8029D804 0029A744  81 83 00 00 */	lwz r12, 0(r3)
/* 8029D808 0029A748  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8029D80C 0029A74C  7D 89 03 A6 */	mtctr r12
/* 8029D810 0029A750  4E 80 04 21 */	bctrl 
/* 8029D814 0029A754  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029D818 0029A758  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029D81C 0029A75C  7C 08 03 A6 */	mtlr r0
/* 8029D820 0029A760  38 21 00 10 */	addi r1, r1, 0x10
/* 8029D824 0029A764  4E 80 00 20 */	blr 

.global endDemoDrawOn__Q23efx11TOneEmitterFv
endDemoDrawOn__Q23efx11TOneEmitterFv:
/* 8029D828 0029A768  80 63 00 08 */	lwz r3, 8(r3)
/* 8029D82C 0029A76C  28 03 00 00 */	cmplwi r3, 0
/* 8029D830 0029A770  4D 82 00 20 */	beqlr 
/* 8029D834 0029A774  80 03 00 F4 */	lwz r0, 0xf4(r3)
/* 8029D838 0029A778  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 8029D83C 0029A77C  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 8029D840 0029A780  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game7Fuefuki3ObjFv
effectDrawOff__Q34Game7Fuefuki3ObjFv:
/* 8029D844 0029A784  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029D848 0029A788  7C 08 02 A6 */	mflr r0
/* 8029D84C 0029A78C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029D850 0029A790  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029D854 0029A794  7C 7F 1B 78 */	mr r31, r3
/* 8029D858 0029A798  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 8029D85C 0029A79C  85 83 00 04 */	lwzu r12, 4(r3)
/* 8029D860 0029A7A0  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8029D864 0029A7A4  7D 89 03 A6 */	mtctr r12
/* 8029D868 0029A7A8  4E 80 04 21 */	bctrl 
/* 8029D86C 0029A7AC  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 8029D870 0029A7B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8029D874 0029A7B4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8029D878 0029A7B8  7D 89 03 A6 */	mtctr r12
/* 8029D87C 0029A7BC  4E 80 04 21 */	bctrl 
/* 8029D880 0029A7C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029D884 0029A7C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029D888 0029A7C8  7C 08 03 A6 */	mtlr r0
/* 8029D88C 0029A7CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8029D890 0029A7D0  4E 80 00 20 */	blr 

.global startDemoDrawOff__Q23efx11TOneEmitterFv
startDemoDrawOff__Q23efx11TOneEmitterFv:
/* 8029D894 0029A7D4  80 63 00 08 */	lwz r3, 8(r3)
/* 8029D898 0029A7D8  28 03 00 00 */	cmplwi r3, 0
/* 8029D89C 0029A7DC  4D 82 00 20 */	beqlr 
/* 8029D8A0 0029A7E0  80 03 00 F4 */	lwz r0, 0xf4(r3)
/* 8029D8A4 0029A7E4  60 00 00 04 */	ori r0, r0, 4
/* 8029D8A8 0029A7E8  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 8029D8AC 0029A7EC  4E 80 00 20 */	blr 

.global getName__Q23efx9ArgCursorFv
getName__Q23efx9ArgCursorFv:
/* 8029D8B0 0029A7F0  3C 60 80 49 */	lis r3, lbl_80488FA8@ha
/* 8029D8B4 0029A7F4  38 63 8F A8 */	addi r3, r3, lbl_80488FA8@l
/* 8029D8B8 0029A7F8  4E 80 00 20 */	blr 

.global __dt__Q23efx11TFuebugOnpaFv
__dt__Q23efx11TFuebugOnpaFv:
/* 8029D8BC 0029A7FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029D8C0 0029A800  7C 08 02 A6 */	mflr r0
/* 8029D8C4 0029A804  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029D8C8 0029A808  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029D8CC 0029A80C  7C 9F 23 78 */	mr r31, r4
/* 8029D8D0 0029A810  93 C1 00 08 */	stw r30, 8(r1)
/* 8029D8D4 0029A814  7C 7E 1B 79 */	or. r30, r3, r3
/* 8029D8D8 0029A818  41 82 00 64 */	beq .L_8029D93C
/* 8029D8DC 0029A81C  3C 60 80 4D */	lis r3, __vt__Q23efx11TFuebugOnpa@ha
/* 8029D8E0 0029A820  38 63 C2 8C */	addi r3, r3, __vt__Q23efx11TFuebugOnpa@l
/* 8029D8E4 0029A824  90 7E 00 00 */	stw r3, 0(r30)
/* 8029D8E8 0029A828  38 03 00 14 */	addi r0, r3, 0x14
/* 8029D8EC 0029A82C  90 1E 00 04 */	stw r0, 4(r30)
/* 8029D8F0 0029A830  41 82 00 3C */	beq .L_8029D92C
/* 8029D8F4 0029A834  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 8029D8F8 0029A838  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 8029D8FC 0029A83C  90 7E 00 00 */	stw r3, 0(r30)
/* 8029D900 0029A840  38 03 00 14 */	addi r0, r3, 0x14
/* 8029D904 0029A844  90 1E 00 04 */	stw r0, 4(r30)
/* 8029D908 0029A848  41 82 00 24 */	beq .L_8029D92C
/* 8029D90C 0029A84C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8029D910 0029A850  38 7E 00 04 */	addi r3, r30, 4
/* 8029D914 0029A854  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8029D918 0029A858  38 80 00 00 */	li r4, 0
/* 8029D91C 0029A85C  90 BE 00 00 */	stw r5, 0(r30)
/* 8029D920 0029A860  38 05 00 14 */	addi r0, r5, 0x14
/* 8029D924 0029A864  90 1E 00 04 */	stw r0, 4(r30)
/* 8029D928 0029A868  4B DF 23 75 */	bl __dt__18JPAEmitterCallBackFv
.L_8029D92C:
/* 8029D92C 0029A86C  7F E0 07 35 */	extsh. r0, r31
/* 8029D930 0029A870  40 81 00 0C */	ble .L_8029D93C
/* 8029D934 0029A874  7F C3 F3 78 */	mr r3, r30
/* 8029D938 0029A878  4B D8 67 7D */	bl __dl__FPv
.L_8029D93C:
/* 8029D93C 0029A87C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029D940 0029A880  7F C3 F3 78 */	mr r3, r30
/* 8029D944 0029A884  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029D948 0029A888  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029D94C 0029A88C  7C 08 03 A6 */	mtlr r0
/* 8029D950 0029A890  38 21 00 10 */	addi r1, r1, 0x10
/* 8029D954 0029A894  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game7Fuefuki3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game7Fuefuki3ObjFPQ24Game8WaterBox:
/* 8029D958 0029A898  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game7Fuefuki3ObjFv
outWaterCallback__Q34Game7Fuefuki3ObjFv:
/* 8029D95C 0029A89C  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game7Fuefuki3ObjFv
getEnemyTypeID__Q34Game7Fuefuki3ObjFv:
/* 8029D960 0029A8A0  38 60 00 29 */	li r3, 0x29
/* 8029D964 0029A8A4  4E 80 00 20 */	blr 

.global getFootmarks__Q34Game7Fuefuki3ObjFv
getFootmarks__Q34Game7Fuefuki3ObjFv:
/* 8029D968 0029A8A8  80 63 02 E8 */	lwz r3, 0x2e8(r3)
/* 8029D96C 0029A8AC  4E 80 00 20 */	blr 

.global "@756@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
"@756@12@viewOnPelletKilled__Q24Game9EnemyBaseFv":
/* 8029D970 0029A8B0  39 60 00 0C */	li r11, 0xc
/* 8029D974 0029A8B4  7D 63 58 2E */	lwzx r11, r3, r11
/* 8029D978 0029A8B8  7C 63 5A 14 */	add r3, r3, r11
/* 8029D97C 0029A8BC  38 63 FD 0C */	addi r3, r3, -756
/* 8029D980 0029A8C0  4B E6 8F 9C */	b viewOnPelletKilled__Q24Game9EnemyBaseFv

.global "@756@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
"@756@12@viewStartCarryMotion__Q24Game9EnemyBaseFv":
/* 8029D984 0029A8C4  39 60 00 0C */	li r11, 0xc
/* 8029D988 0029A8C8  7D 63 58 2E */	lwzx r11, r3, r11
/* 8029D98C 0029A8CC  7C 63 5A 14 */	add r3, r3, r11
/* 8029D990 0029A8D0  38 63 FD 0C */	addi r3, r3, -756
/* 8029D994 0029A8D4  4B E6 8D 14 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv

.global "@756@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
"@756@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv":
/* 8029D998 0029A8D8  39 60 00 0C */	li r11, 0xc
/* 8029D99C 0029A8DC  7D 63 58 2E */	lwzx r11, r3, r11
/* 8029D9A0 0029A8E0  7C 63 5A 14 */	add r3, r3, r11
/* 8029D9A4 0029A8E4  38 63 FD 0C */	addi r3, r3, -756
/* 8029D9A8 0029A8E8  4B E6 8D 20 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv

.global "@756@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
"@756@12@view_finish_carrymotion__Q24Game9EnemyBaseFv":
/* 8029D9AC 0029A8EC  39 60 00 0C */	li r11, 0xc
/* 8029D9B0 0029A8F0  7D 63 58 2E */	lwzx r11, r3, r11
/* 8029D9B4 0029A8F4  7C 63 5A 14 */	add r3, r3, r11
/* 8029D9B8 0029A8F8  38 63 FD 0C */	addi r3, r3, -756
/* 8029D9BC 0029A8FC  4B E6 90 BC */	b view_finish_carrymotion__Q24Game9EnemyBaseFv

.global "@756@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
"@756@12@view_start_carrymotion__Q24Game9EnemyBaseFv":
/* 8029D9C0 0029A900  39 60 00 0C */	li r11, 0xc
/* 8029D9C4 0029A904  7D 63 58 2E */	lwzx r11, r3, r11
/* 8029D9C8 0029A908  7C 63 5A 14 */	add r3, r3, r11
/* 8029D9CC 0029A90C  38 63 FD 0C */	addi r3, r3, -756
/* 8029D9D0 0029A910  4B E6 90 7C */	b view_start_carrymotion__Q24Game9EnemyBaseFv

.global "@756@12@viewGetShape__Q24Game9EnemyBaseFv"
"@756@12@viewGetShape__Q24Game9EnemyBaseFv":
/* 8029D9D4 0029A914  39 60 00 0C */	li r11, 0xc
/* 8029D9D8 0029A918  7D 63 58 2E */	lwzx r11, r3, r11
/* 8029D9DC 0029A91C  7C 63 5A 14 */	add r3, r3, r11
/* 8029D9E0 0029A920  38 63 FD 0C */	addi r3, r3, -756
/* 8029D9E4 0029A924  4B E6 8C BC */	b viewGetShape__Q24Game9EnemyBaseFv

.global "@4@__dt__Q23efx11TFuebugOnpaFv"
"@4@__dt__Q23efx11TFuebugOnpaFv":
/* 8029D9E8 0029A928  38 63 FF FC */	addi r3, r3, -4
/* 8029D9EC 0029A92C  4B FF FE D0 */	b __dt__Q23efx11TFuebugOnpaFv
