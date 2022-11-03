.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8048A250
lbl_8048A250:
	.4byte 0x3234362D
	.4byte 0x426F6D62
	.4byte 0x53617261
	.4byte 0x69000000
.global lbl_8048A260
lbl_8048A260:
	.4byte 0x626F6479
	.4byte 0x5F6A6F69
	.4byte 0x6E743100
.global lbl_8048A26C
lbl_8048A26C:
	.4byte 0x6B616D75
	.4byte 0x5F6A6E74
	.4byte 0x31000000
.global lbl_8048A278
lbl_8048A278:
	.4byte 0x6B757469
	.4byte 0x5F6A6F69
	.4byte 0x6E743100
	.4byte 0x62616C6C
	.4byte 0x6F6F6E31
	.4byte 0x00000000
	.4byte 0x62616C6C
	.4byte 0x6F6F6E32
	.4byte 0x00000000
	.4byte 0x62616C6C
	.4byte 0x6F6F6E33
	.4byte 0x00000000
	.4byte 0x62616C6C
	.4byte 0x6F6F6E34
	.4byte 0x00000000
	.4byte 0x62616C6C
	.4byte 0x6F6F6E35
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23efx11TBsaraiDead
__vt__Q23efx11TBsaraiDead:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.global __vt__Q23efx12TBsaraiSupli
__vt__Q23efx12TBsaraiSupli:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx12TBsaraiSupliFv"
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
	.4byte __dt__Q23efx12TBsaraiSupliFv
.global __vt__Q34Game9BombSarai3Obj
__vt__Q34Game9BombSarai3Obj:
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
	.4byte onInit__Q34Game9BombSarai3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game9BombSarai3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game9BombSarai3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game9BombSarai3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game9BombSarai3ObjFv
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
	.4byte getShadowParam__Q34Game9BombSarai3ObjFRQ24Game11ShadowParam
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
	.4byte __dt__Q34Game9BombSarai3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game9BombSarai3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game9BombSarai3ObjFv
	.4byte doUpdateCommon__Q24Game9EnemyBaseFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game9BombSarai3ObjFR8Graphics
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
	.4byte getEnemyTypeID__Q34Game9BombSarai3ObjFv
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
	.4byte "bombCallBack__Q34Game9BombSarai3ObjFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q24Game9EnemyBaseFv
	.4byte doFinishStoneState__Q34Game9BombSarai3ObjFv
	.4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game9BombSarai3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q34Game9BombSarai3ObjFv
	.4byte doFinishWaitingBirthTypeDrop__Q34Game9BombSarai3ObjFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q34Game9BombSarai3ObjFv
	.4byte doStartMovie__Q34Game9BombSarai3ObjFv
	.4byte doEndMovie__Q34Game9BombSarai3ObjFv
	.4byte setFSM__Q34Game9BombSarai3ObjFPQ34Game9BombSarai3FSM
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
	.4byte 0

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051C1F8
lbl_8051C1F8:
	.4byte 0x00000000
.global lbl_8051C1FC
lbl_8051C1FC:
	.4byte 0x41700000
.global lbl_8051C200
lbl_8051C200:
	.4byte 0x40A00000
.global lbl_8051C204
lbl_8051C204:
	.float 1.0
.global lbl_8051C208
lbl_8051C208:
	.4byte 0x42480000
.global lbl_8051C20C
lbl_8051C20C:
	.4byte 0x418C0000
.global lbl_8051C210
lbl_8051C210:
	.float 0.5
.global lbl_8051C214
lbl_8051C214:
	.4byte 0x40C00000
.global lbl_8051C218
lbl_8051C218:
	.4byte 0xC3A2F983
.global lbl_8051C21C
lbl_8051C21C:
	.4byte 0x43A2F983
.global lbl_8051C220
lbl_8051C220:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051C228
lbl_8051C228:
	.4byte 0x47000000
.global lbl_8051C22C
lbl_8051C22C:
	.4byte 0x40490FDB
.global lbl_8051C230
lbl_8051C230:
	.4byte 0x3FC90FDB
.global lbl_8051C234
lbl_8051C234:
	.4byte 0x40C90FDB
.global lbl_8051C238
lbl_8051C238:
	.4byte 0x40800000
.global lbl_8051C23C
lbl_8051C23C:
	.float 0.25
.global lbl_8051C240
lbl_8051C240:
	.4byte 0x3F666666
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game9BombSarai3ObjFv
__ct__Q34Game9BombSarai3ObjFv:
/* 802B27CC 002AF70C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B27D0 002AF710  7C 08 02 A6 */	mflr r0
/* 802B27D4 002AF714  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B27D8 002AF718  7C 80 07 35 */	extsh. r0, r4
/* 802B27DC 002AF71C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B27E0 002AF720  7C 7F 1B 78 */	mr r31, r3
/* 802B27E4 002AF724  93 C1 00 08 */	stw r30, 8(r1)
/* 802B27E8 002AF728  41 82 00 24 */	beq .L_802B280C
/* 802B27EC 002AF72C  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 802B27F0 002AF730  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802B27F4 002AF734  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802B27F8 002AF738  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802B27FC 002AF73C  38 00 00 00 */	li r0, 0
/* 802B2800 002AF740  90 7F 02 E4 */	stw r3, 0x2e4(r31)
/* 802B2804 002AF744  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 802B2808 002AF748  90 1F 02 EC */	stw r0, 0x2ec(r31)
.L_802B280C:
/* 802B280C 002AF74C  7F E3 FB 78 */	mr r3, r31
/* 802B2810 002AF750  38 80 00 00 */	li r4, 0
/* 802B2814 002AF754  4B E4 EB 8D */	bl __ct__Q24Game9EnemyBaseFv
/* 802B2818 002AF758  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai3Obj@ha
/* 802B281C 002AF75C  38 1F 02 E4 */	addi r0, r31, 0x2e4
/* 802B2820 002AF760  38 A3 E9 F8 */	addi r5, r3, __vt__Q34Game9BombSarai3Obj@l
/* 802B2824 002AF764  38 60 00 2C */	li r3, 0x2c
/* 802B2828 002AF768  90 BF 00 00 */	stw r5, 0(r31)
/* 802B282C 002AF76C  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 802B2830 002AF770  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 802B2834 002AF774  90 9F 01 78 */	stw r4, 0x178(r31)
/* 802B2838 002AF778  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802B283C 002AF77C  90 A4 00 00 */	stw r5, 0(r4)
/* 802B2840 002AF780  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 802B2844 002AF784  7C 04 00 50 */	subf r0, r4, r0
/* 802B2848 002AF788  90 04 00 0C */	stw r0, 0xc(r4)
/* 802B284C 002AF78C  4B D7 16 59 */	bl __nw__FUl
/* 802B2850 002AF790  7C 7E 1B 79 */	or. r30, r3, r3
/* 802B2854 002AF794  41 82 00 44 */	beq .L_802B2898
/* 802B2858 002AF798  4B E7 51 1D */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802B285C 002AF79C  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai14ProperAnimator@ha
/* 802B2860 002AF7A0  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802B2864 002AF7A4  38 03 E8 80 */	addi r0, r3, __vt__Q34Game9BombSarai14ProperAnimator@l
/* 802B2868 002AF7A8  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802B286C 002AF7AC  90 1E 00 00 */	stw r0, 0(r30)
/* 802B2870 002AF7B0  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802B2874 002AF7B4  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802B2878 002AF7B8  38 00 00 00 */	li r0, 0
/* 802B287C 002AF7BC  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802B2880 002AF7C0  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802B2884 002AF7C4  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802B2888 002AF7C8  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802B288C 002AF7CC  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802B2890 002AF7D0  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802B2894 002AF7D4  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802B2898:
/* 802B2898 002AF7D8  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802B289C 002AF7DC  38 60 00 1C */	li r3, 0x1c
/* 802B28A0 002AF7E0  4B D7 16 05 */	bl __nw__FUl
/* 802B28A4 002AF7E4  7C 64 1B 79 */	or. r4, r3, r3
/* 802B28A8 002AF7E8  41 82 00 24 */	beq .L_802B28CC
/* 802B28AC 002AF7EC  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802B28B0 002AF7F0  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai3FSM@ha
/* 802B28B4 002AF7F4  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802B28B8 002AF7F8  38 A0 FF FF */	li r5, -1
/* 802B28BC 002AF7FC  90 04 00 00 */	stw r0, 0(r4)
/* 802B28C0 002AF800  38 03 E8 5C */	addi r0, r3, __vt__Q34Game9BombSarai3FSM@l
/* 802B28C4 002AF804  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802B28C8 002AF808  90 04 00 00 */	stw r0, 0(r4)
.L_802B28CC:
/* 802B28CC 002AF80C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B28D0 002AF810  7F E3 FB 78 */	mr r3, r31
/* 802B28D4 002AF814  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802B28D8 002AF818  7D 89 03 A6 */	mtctr r12
/* 802B28DC 002AF81C  4E 80 04 21 */	bctrl 
/* 802B28E0 002AF820  7F E3 FB 78 */	mr r3, r31
/* 802B28E4 002AF824  48 00 0B 41 */	bl createEffect__Q34Game9BombSarai3ObjFv
/* 802B28E8 002AF828  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B28EC 002AF82C  7F E3 FB 78 */	mr r3, r31
/* 802B28F0 002AF830  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B28F4 002AF834  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B28F8 002AF838  7C 08 03 A6 */	mtlr r0
/* 802B28FC 002AF83C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2900 002AF840  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game9BombSarai3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game9BombSarai3ObjFPQ24Game21EnemyInitialParamBase:
/* 802B2904 002AF844  4E 80 00 20 */	blr 

.global onInit__Q34Game9BombSarai3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game9BombSarai3ObjFPQ24Game15CreatureInitArg:
/* 802B2908 002AF848  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B290C 002AF84C  7C 08 02 A6 */	mflr r0
/* 802B2910 002AF850  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B2914 002AF854  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B2918 002AF858  7C 7F 1B 78 */	mr r31, r3
/* 802B291C 002AF85C  4B E4 F1 3D */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802B2920 002AF860  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802B2924 002AF864  28 03 00 00 */	cmplwi r3, 0
/* 802B2928 002AF868  41 82 00 1C */	beq .L_802B2944
/* 802B292C 002AF86C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802B2930 002AF870  2C 00 00 04 */	cmpwi r0, 4
/* 802B2934 002AF874  40 82 00 10 */	bne .L_802B2944
/* 802B2938 002AF878  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B293C 002AF87C  60 00 00 01 */	ori r0, r0, 1
/* 802B2940 002AF880  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_802B2944:
/* 802B2944 002AF884  38 00 FF FF */	li r0, -1
/* 802B2948 002AF888  C0 02 DE 98 */	lfs f0, lbl_8051C1F8@sda21(r2)
/* 802B294C 002AF88C  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B2950 002AF890  38 00 00 00 */	li r0, 0
/* 802B2954 002AF894  7F E3 FB 78 */	mr r3, r31
/* 802B2958 002AF898  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802B295C 002AF89C  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802B2960 002AF8A0  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802B2964 002AF8A4  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 802B2968 002AF8A8  48 00 0B 6D */	bl setupEffect__Q34Game9BombSarai3ObjFv
/* 802B296C 002AF8AC  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802B2970 002AF8B0  7F E4 FB 78 */	mr r4, r31
/* 802B2974 002AF8B4  38 A0 00 02 */	li r5, 2
/* 802B2978 002AF8B8  38 C0 00 00 */	li r6, 0
/* 802B297C 002AF8BC  81 83 00 00 */	lwz r12, 0(r3)
/* 802B2980 002AF8C0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802B2984 002AF8C4  7D 89 03 A6 */	mtctr r12
/* 802B2988 002AF8C8  4E 80 04 21 */	bctrl 
/* 802B298C 002AF8CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2990 002AF8D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B2994 002AF8D4  7C 08 03 A6 */	mtlr r0
/* 802B2998 002AF8D8  38 21 00 10 */	addi r1, r1, 0x10
/* 802B299C 002AF8DC  4E 80 00 20 */	blr 

.global onKill__Q34Game9BombSarai3ObjFPQ24Game15CreatureKillArg
onKill__Q34Game9BombSarai3ObjFPQ24Game15CreatureKillArg:
/* 802B29A0 002AF8E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B29A4 002AF8E4  7C 08 02 A6 */	mflr r0
/* 802B29A8 002AF8E8  3C A0 80 51 */	lis r5, "zero__10Vector3<f>"@ha
/* 802B29AC 002AF8EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B29B0 002AF8F0  38 05 41 E4 */	addi r0, r5, "zero__10Vector3<f>"@l
/* 802B29B4 002AF8F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B29B8 002AF8F8  7C 9F 23 78 */	mr r31, r4
/* 802B29BC 002AF8FC  7C 04 03 78 */	mr r4, r0
/* 802B29C0 002AF900  93 C1 00 08 */	stw r30, 8(r1)
/* 802B29C4 002AF904  7C 7E 1B 78 */	mr r30, r3
/* 802B29C8 002AF908  48 00 08 31 */	bl "throwBomb__Q34Game9BombSarai3ObjFR10Vector3<f>"
/* 802B29CC 002AF90C  7F C3 F3 78 */	mr r3, r30
/* 802B29D0 002AF910  7F E4 FB 78 */	mr r4, r31
/* 802B29D4 002AF914  4B E4 F5 15 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 802B29D8 002AF918  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B29DC 002AF91C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B29E0 002AF920  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B29E4 002AF924  7C 08 03 A6 */	mtlr r0
/* 802B29E8 002AF928  38 21 00 10 */	addi r1, r1, 0x10
/* 802B29EC 002AF92C  4E 80 00 20 */	blr 

.global doUpdate__Q34Game9BombSarai3ObjFv
doUpdate__Q34Game9BombSarai3ObjFv:
/* 802B29F0 002AF930  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B29F4 002AF934  7C 08 02 A6 */	mflr r0
/* 802B29F8 002AF938  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B29FC 002AF93C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B2A00 002AF940  7C 7F 1B 78 */	mr r31, r3
/* 802B2A04 002AF944  7F E4 FB 78 */	mr r4, r31
/* 802B2A08 002AF948  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802B2A0C 002AF94C  81 83 00 00 */	lwz r12, 0(r3)
/* 802B2A10 002AF950  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802B2A14 002AF954  7D 89 03 A6 */	mtctr r12
/* 802B2A18 002AF958  4E 80 04 21 */	bctrl 
/* 802B2A1C 002AF95C  7F E3 FB 78 */	mr r3, r31
/* 802B2A20 002AF960  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B2A24 002AF964  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802B2A28 002AF968  7D 89 03 A6 */	mtctr r12
/* 802B2A2C 002AF96C  4E 80 04 21 */	bctrl 
/* 802B2A30 002AF970  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B2A34 002AF974  41 82 00 4C */	beq .L_802B2A80
/* 802B2A38 002AF978  7F E3 FB 78 */	mr r3, r31
/* 802B2A3C 002AF97C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B2A40 002AF980  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802B2A44 002AF984  7D 89 03 A6 */	mtctr r12
/* 802B2A48 002AF988  4E 80 04 21 */	bctrl 
/* 802B2A4C 002AF98C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B2A50 002AF990  41 82 00 30 */	beq .L_802B2A80
/* 802B2A54 002AF994  7F E3 FB 78 */	mr r3, r31
/* 802B2A58 002AF998  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B2A5C 002AF99C  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802B2A60 002AF9A0  7D 89 03 A6 */	mtctr r12
/* 802B2A64 002AF9A4  4E 80 04 21 */	bctrl 
/* 802B2A68 002AF9A8  81 83 00 00 */	lwz r12, 0(r3)
/* 802B2A6C 002AF9AC  38 80 50 E5 */	li r4, 0x50e5
/* 802B2A70 002AF9B0  38 A0 00 00 */	li r5, 0
/* 802B2A74 002AF9B4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802B2A78 002AF9B8  7D 89 03 A6 */	mtctr r12
/* 802B2A7C 002AF9BC  4E 80 04 21 */	bctrl 
.L_802B2A80:
/* 802B2A80 002AF9C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2A84 002AF9C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B2A88 002AF9C8  7C 08 03 A6 */	mtlr r0
/* 802B2A8C 002AF9CC  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2A90 002AF9D0  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game9BombSarai3ObjFR8Graphics
doDirectDraw__Q34Game9BombSarai3ObjFR8Graphics:
/* 802B2A94 002AF9D4  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game9BombSarai3ObjFR8Graphics
doDebugDraw__Q34Game9BombSarai3ObjFR8Graphics:
/* 802B2A98 002AF9D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B2A9C 002AF9DC  7C 08 02 A6 */	mflr r0
/* 802B2AA0 002AF9E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B2AA4 002AF9E4  4B E5 33 C9 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802B2AA8 002AF9E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2AAC 002AF9EC  7C 08 03 A6 */	mtlr r0
/* 802B2AB0 002AF9F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2AB4 002AF9F4  4E 80 00 20 */	blr 

.global setFSM__Q34Game9BombSarai3ObjFPQ34Game9BombSarai3FSM
setFSM__Q34Game9BombSarai3ObjFPQ34Game9BombSarai3FSM:
/* 802B2AB8 002AF9F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B2ABC 002AF9FC  7C 08 02 A6 */	mflr r0
/* 802B2AC0 002AFA00  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B2AC4 002AFA04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B2AC8 002AFA08  7C 7F 1B 78 */	mr r31, r3
/* 802B2ACC 002AFA0C  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802B2AD0 002AFA10  7F E4 FB 78 */	mr r4, r31
/* 802B2AD4 002AFA14  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802B2AD8 002AFA18  81 83 00 00 */	lwz r12, 0(r3)
/* 802B2ADC 002AFA1C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B2AE0 002AFA20  7D 89 03 A6 */	mtctr r12
/* 802B2AE4 002AFA24  4E 80 04 21 */	bctrl 
/* 802B2AE8 002AFA28  38 00 00 00 */	li r0, 0
/* 802B2AEC 002AFA2C  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802B2AF0 002AFA30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2AF4 002AFA34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B2AF8 002AFA38  7C 08 03 A6 */	mtlr r0
/* 802B2AFC 002AFA3C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2B00 002AFA40  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game9BombSarai3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game9BombSarai3ObjFRQ24Game11ShadowParam:
/* 802B2B04 002AFA44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B2B08 002AFA48  7C 08 02 A6 */	mflr r0
/* 802B2B0C 002AFA4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B2B10 002AFA50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B2B14 002AFA54  7C 9F 23 78 */	mr r31, r4
/* 802B2B18 002AFA58  93 C1 00 08 */	stw r30, 8(r1)
/* 802B2B1C 002AFA5C  7C 7E 1B 78 */	mr r30, r3
/* 802B2B20 002AFA60  3C 60 80 49 */	lis r3, lbl_8048A260@ha
/* 802B2B24 002AFA64  38 03 A2 60 */	addi r0, r3, lbl_8048A260@l
/* 802B2B28 002AFA68  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802B2B2C 002AFA6C  7C 04 03 78 */	mr r4, r0
/* 802B2B30 002AFA70  48 18 C4 B5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802B2B34 002AFA74  48 17 6D 6D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B2B38 002AFA78  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802B2B3C 002AFA7C  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802B2B40 002AFA80  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802B2B44 002AFA84  7F C3 F3 78 */	mr r3, r30
/* 802B2B48 002AFA88  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802B2B4C 002AFA8C  D0 3F 00 04 */	stfs f1, 4(r31)
/* 802B2B50 002AFA90  D0 5F 00 08 */	stfs f2, 8(r31)
/* 802B2B54 002AFA94  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B2B58 002AFA98  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802B2B5C 002AFA9C  7D 89 03 A6 */	mtctr r12
/* 802B2B60 002AFAA0  4E 80 04 21 */	bctrl 
/* 802B2B64 002AFAA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B2B68 002AFAA8  41 82 00 18 */	beq .L_802B2B80
/* 802B2B6C 002AFAAC  C0 3F 00 04 */	lfs f1, 4(r31)
/* 802B2B70 002AFAB0  C0 02 DE 9C */	lfs f0, lbl_8051C1FC@sda21(r2)
/* 802B2B74 002AFAB4  EC 01 00 28 */	fsubs f0, f1, f0
/* 802B2B78 002AFAB8  D0 1F 00 04 */	stfs f0, 4(r31)
/* 802B2B7C 002AFABC  48 00 00 14 */	b .L_802B2B90
.L_802B2B80:
/* 802B2B80 002AFAC0  C0 22 DE A0 */	lfs f1, lbl_8051C200@sda21(r2)
/* 802B2B84 002AFAC4  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 802B2B88 002AFAC8  EC 01 00 2A */	fadds f0, f1, f0
/* 802B2B8C 002AFACC  D0 1F 00 04 */	stfs f0, 4(r31)
.L_802B2B90:
/* 802B2B90 002AFAD0  C0 22 DE 98 */	lfs f1, lbl_8051C1F8@sda21(r2)
/* 802B2B94 002AFAD4  C0 02 DE A4 */	lfs f0, lbl_8051C204@sda21(r2)
/* 802B2B98 002AFAD8  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 802B2B9C 002AFADC  C0 42 DE A8 */	lfs f2, lbl_8051C208@sda21(r2)
/* 802B2BA0 002AFAE0  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 802B2BA4 002AFAE4  C0 02 DE AC */	lfs f0, lbl_8051C20C@sda21(r2)
/* 802B2BA8 002AFAE8  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 802B2BAC 002AFAEC  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802B2BB0 002AFAF0  C0 23 08 1C */	lfs f1, 0x81c(r3)
/* 802B2BB4 002AFAF4  EC 22 08 2A */	fadds f1, f2, f1
/* 802B2BB8 002AFAF8  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 802B2BBC 002AFAFC  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802B2BC0 002AFB00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B2BC4 002AFB04  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B2BC8 002AFB08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2BCC 002AFB0C  7C 08 03 A6 */	mtlr r0
/* 802B2BD0 002AFB10  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2BD4 002AFB14  4E 80 00 20 */	blr 

.global "bombCallBack__Q34Game9BombSarai3ObjFPQ24Game8CreatureR10Vector3<f>f"
"bombCallBack__Q34Game9BombSarai3ObjFPQ24Game8CreatureR10Vector3<f>f":
/* 802B2BD8 002AFB18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B2BDC 002AFB1C  7C 08 02 A6 */	mflr r0
/* 802B2BE0 002AFB20  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B2BE4 002AFB24  80 03 00 C8 */	lwz r0, 0xc8(r3)
/* 802B2BE8 002AFB28  28 00 00 00 */	cmplwi r0, 0
/* 802B2BEC 002AFB2C  41 82 00 14 */	beq .L_802B2C00
/* 802B2BF0 002AFB30  C0 42 DE A4 */	lfs f2, lbl_8051C204@sda21(r2)
/* 802B2BF4 002AFB34  4B E5 34 39 */	bl addDamage__Q24Game9EnemyBaseFff
/* 802B2BF8 002AFB38  38 60 00 01 */	li r3, 1
/* 802B2BFC 002AFB3C  48 00 00 08 */	b .L_802B2C04
.L_802B2C00:
/* 802B2C00 002AFB40  38 60 00 00 */	li r3, 0
.L_802B2C04:
/* 802B2C04 002AFB44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2C08 002AFB48  7C 08 03 A6 */	mtlr r0
/* 802B2C0C 002AFB4C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2C10 002AFB50  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game9BombSarai3ObjFv
doFinishStoneState__Q34Game9BombSarai3ObjFv:
/* 802B2C14 002AFB54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B2C18 002AFB58  7C 08 02 A6 */	mflr r0
/* 802B2C1C 002AFB5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B2C20 002AFB60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B2C24 002AFB64  7C 7F 1B 78 */	mr r31, r3
/* 802B2C28 002AFB68  4B E5 02 E1 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802B2C2C 002AFB6C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B2C30 002AFB70  C0 22 DE B0 */	lfs f1, lbl_8051C210@sda21(r2)
/* 802B2C34 002AFB74  C0 03 01 04 */	lfs f0, 0x104(r3)
/* 802B2C38 002AFB78  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 802B2C3C 002AFB7C  EC 01 00 32 */	fmuls f0, f1, f0
/* 802B2C40 002AFB80  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802B2C44 002AFB84  40 81 00 28 */	ble .L_802B2C6C
/* 802B2C48 002AFB88  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802B2C4C 002AFB8C  7F E4 FB 78 */	mr r4, r31
/* 802B2C50 002AFB90  38 A0 00 09 */	li r5, 9
/* 802B2C54 002AFB94  38 C0 00 00 */	li r6, 0
/* 802B2C58 002AFB98  81 83 00 00 */	lwz r12, 0(r3)
/* 802B2C5C 002AFB9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802B2C60 002AFBA0  7D 89 03 A6 */	mtctr r12
/* 802B2C64 002AFBA4  4E 80 04 21 */	bctrl 
/* 802B2C68 002AFBA8  48 00 00 24 */	b .L_802B2C8C
.L_802B2C6C:
/* 802B2C6C 002AFBAC  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802B2C70 002AFBB0  7F E4 FB 78 */	mr r4, r31
/* 802B2C74 002AFBB4  38 A0 00 0A */	li r5, 0xa
/* 802B2C78 002AFBB8  38 C0 00 00 */	li r6, 0
/* 802B2C7C 002AFBBC  81 83 00 00 */	lwz r12, 0(r3)
/* 802B2C80 002AFBC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802B2C84 002AFBC4  7D 89 03 A6 */	mtctr r12
/* 802B2C88 002AFBC8  4E 80 04 21 */	bctrl 
.L_802B2C8C:
/* 802B2C8C 002AFBCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2C90 002AFBD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B2C94 002AFBD4  7C 08 03 A6 */	mtlr r0
/* 802B2C98 002AFBD8  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2C9C 002AFBDC  4E 80 00 20 */	blr 

.global doStartWaitingBirthTypeDrop__Q34Game9BombSarai3ObjFv
doStartWaitingBirthTypeDrop__Q34Game9BombSarai3ObjFv:
/* 802B2CA0 002AFBE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B2CA4 002AFBE4  7C 08 02 A6 */	mflr r0
/* 802B2CA8 002AFBE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B2CAC 002AFBEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B2CB0 002AFBF0  7C 7F 1B 78 */	mr r31, r3
/* 802B2CB4 002AFBF4  4B E5 4C E5 */	bl doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 802B2CB8 002AFBF8  7F E3 FB 78 */	mr r3, r31
/* 802B2CBC 002AFBFC  48 00 0A 01 */	bl effectDrawOff__Q34Game9BombSarai3ObjFv
/* 802B2CC0 002AFC00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2CC4 002AFC04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B2CC8 002AFC08  7C 08 03 A6 */	mtlr r0
/* 802B2CCC 002AFC0C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2CD0 002AFC10  4E 80 00 20 */	blr 

.global doFinishWaitingBirthTypeDrop__Q34Game9BombSarai3ObjFv
doFinishWaitingBirthTypeDrop__Q34Game9BombSarai3ObjFv:
/* 802B2CD4 002AFC14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B2CD8 002AFC18  7C 08 02 A6 */	mflr r0
/* 802B2CDC 002AFC1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B2CE0 002AFC20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B2CE4 002AFC24  7C 7F 1B 78 */	mr r31, r3
/* 802B2CE8 002AFC28  4B E5 4C E1 */	bl doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
/* 802B2CEC 002AFC2C  7F E3 FB 78 */	mr r3, r31
/* 802B2CF0 002AFC30  48 00 09 9D */	bl effectDrawOn__Q34Game9BombSarai3ObjFv
/* 802B2CF4 002AFC34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2CF8 002AFC38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B2CFC 002AFC3C  7C 08 03 A6 */	mtlr r0
/* 802B2D00 002AFC40  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2D04 002AFC44  4E 80 00 20 */	blr 

.global startCarcassMotion__Q34Game9BombSarai3ObjFv
startCarcassMotion__Q34Game9BombSarai3ObjFv:
/* 802B2D08 002AFC48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B2D0C 002AFC4C  7C 08 02 A6 */	mflr r0
/* 802B2D10 002AFC50  38 80 00 0B */	li r4, 0xb
/* 802B2D14 002AFC54  38 A0 00 00 */	li r5, 0
/* 802B2D18 002AFC58  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B2D1C 002AFC5C  4B E5 22 E9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B2D20 002AFC60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2D24 002AFC64  7C 08 03 A6 */	mtlr r0
/* 802B2D28 002AFC68  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2D2C 002AFC6C  4E 80 00 20 */	blr 

.global doStartMovie__Q34Game9BombSarai3ObjFv
doStartMovie__Q34Game9BombSarai3ObjFv:
/* 802B2D30 002AFC70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B2D34 002AFC74  7C 08 02 A6 */	mflr r0
/* 802B2D38 002AFC78  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B2D3C 002AFC7C  48 00 09 81 */	bl effectDrawOff__Q34Game9BombSarai3ObjFv
/* 802B2D40 002AFC80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2D44 002AFC84  7C 08 03 A6 */	mtlr r0
/* 802B2D48 002AFC88  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2D4C 002AFC8C  4E 80 00 20 */	blr 

.global doEndMovie__Q34Game9BombSarai3ObjFv
doEndMovie__Q34Game9BombSarai3ObjFv:
/* 802B2D50 002AFC90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B2D54 002AFC94  7C 08 02 A6 */	mflr r0
/* 802B2D58 002AFC98  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B2D5C 002AFC9C  48 00 09 31 */	bl effectDrawOn__Q34Game9BombSarai3ObjFv
/* 802B2D60 002AFCA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2D64 002AFCA4  7C 08 03 A6 */	mtlr r0
/* 802B2D68 002AFCA8  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2D6C 002AFCAC  4E 80 00 20 */	blr 

.global setHeightVelocity__Q34Game9BombSarai3ObjFb
setHeightVelocity__Q34Game9BombSarai3ObjFb:
/* 802B2D70 002AFCB0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802B2D74 002AFCB4  7C 08 02 A6 */	mflr r0
/* 802B2D78 002AFCB8  90 01 00 54 */	stw r0, 0x54(r1)
/* 802B2D7C 002AFCBC  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802B2D80 002AFCC0  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802B2D84 002AFCC4  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 802B2D88 002AFCC8  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 802B2D8C 002AFCCC  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 802B2D90 002AFCD0  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 802B2D94 002AFCD4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802B2D98 002AFCD8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802B2D9C 002AFCDC  7C 7F 1B 78 */	mr r31, r3
/* 802B2DA0 002AFCE0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802B2DA4 002AFCE4  7C 9E 23 78 */	mr r30, r4
/* 802B2DA8 002AFCE8  81 83 00 04 */	lwz r12, 4(r3)
/* 802B2DAC 002AFCEC  38 9F 01 8C */	addi r4, r31, 0x18c
/* 802B2DB0 002AFCF0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802B2DB4 002AFCF4  7D 89 03 A6 */	mtctr r12
/* 802B2DB8 002AFCF8  4E 80 04 21 */	bctrl 
/* 802B2DBC 002AFCFC  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 802B2DC0 002AFD00  FF E0 08 90 */	fmr f31, f1
/* 802B2DC4 002AFD04  C3 C2 DE B4 */	lfs f30, lbl_8051C214@sda21(r2)
/* 802B2DC8 002AFD08  40 82 00 68 */	bne .L_802B2E30
/* 802B2DCC 002AFD0C  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 802B2DD0 002AFD10  2C 03 00 00 */	cmpwi r3, 0
/* 802B2DD4 002AFD14  40 80 00 0C */	bge .L_802B2DE0
/* 802B2DD8 002AFD18  38 00 00 00 */	li r0, 0
/* 802B2DDC 002AFD1C  48 00 00 14 */	b .L_802B2DF0
.L_802B2DE0:
/* 802B2DE0 002AFD20  2C 03 00 05 */	cmpwi r3, 5
/* 802B2DE4 002AFD24  38 00 00 05 */	li r0, 5
/* 802B2DE8 002AFD28  41 81 00 08 */	bgt .L_802B2DF0
/* 802B2DEC 002AFD2C  7C 60 1B 78 */	mr r0, r3
.L_802B2DF0:
/* 802B2DF0 002AFD30  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 802B2DF4 002AFD34  3C 00 43 30 */	lis r0, 0x4330
/* 802B2DF8 002AFD38  90 61 00 0C */	stw r3, 0xc(r1)
/* 802B2DFC 002AFD3C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B2E00 002AFD40  90 01 00 08 */	stw r0, 8(r1)
/* 802B2E04 002AFD44  C8 22 DE C0 */	lfd f1, lbl_8051C220@sda21(r2)
/* 802B2E08 002AFD48  C8 01 00 08 */	lfd f0, 8(r1)
/* 802B2E0C 002AFD4C  C0 82 DE A0 */	lfs f4, lbl_8051C200@sda21(r2)
/* 802B2E10 002AFD50  EC 20 08 28 */	fsubs f1, f0, f1
/* 802B2E14 002AFD54  C0 03 08 E4 */	lfs f0, 0x8e4(r3)
/* 802B2E18 002AFD58  C0 43 08 BC */	lfs f2, 0x8bc(r3)
/* 802B2E1C 002AFD5C  EC 64 08 28 */	fsubs f3, f4, f1
/* 802B2E20 002AFD60  EC 21 20 24 */	fdivs f1, f1, f4
/* 802B2E24 002AFD64  EC 63 20 24 */	fdivs f3, f3, f4
/* 802B2E28 002AFD68  EC 01 00 32 */	fmuls f0, f1, f0
/* 802B2E2C 002AFD6C  EF C3 00 BA */	fmadds f30, f3, f2, f0
.L_802B2E30:
/* 802B2E30 002AFD70  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B2E34 002AFD74  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 802B2E38 002AFD78  C3 A3 08 1C */	lfs f29, 0x81c(r3)
/* 802B2E3C 002AFD7C  C0 03 08 94 */	lfs f0, 0x894(r3)
/* 802B2E40 002AFD80  EC 21 F8 28 */	fsubs f1, f1, f31
/* 802B2E44 002AFD84  EC 1D 00 28 */	fsubs f0, f29, f0
/* 802B2E48 002AFD88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B2E4C 002AFD8C  40 81 00 78 */	ble .L_802B2EC4
/* 802B2E50 002AFD90  7F E3 FB 78 */	mr r3, r31
/* 802B2E54 002AFD94  48 00 02 A5 */	bl addPitchRatio__Q34Game9BombSarai3ObjFv
/* 802B2E58 002AFD98  C0 5F 02 C0 */	lfs f2, 0x2c0(r31)
/* 802B2E5C 002AFD9C  C0 02 DE 98 */	lfs f0, lbl_8051C1F8@sda21(r2)
/* 802B2E60 002AFDA0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B2E64 002AFDA4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802B2E68 002AFDA8  C0 23 08 94 */	lfs f1, 0x894(r3)
/* 802B2E6C 002AFDAC  40 80 00 30 */	bge .L_802B2E9C
/* 802B2E70 002AFDB0  C0 02 DE B8 */	lfs f0, lbl_8051C218@sda21(r2)
/* 802B2E74 002AFDB4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802B2E78 002AFDB8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802B2E7C 002AFDBC  EC 02 00 32 */	fmuls f0, f2, f0
/* 802B2E80 002AFDC0  FC 00 00 1E */	fctiwz f0, f0
/* 802B2E84 002AFDC4  D8 01 00 08 */	stfd f0, 8(r1)
/* 802B2E88 002AFDC8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802B2E8C 002AFDCC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802B2E90 002AFDD0  7C 03 04 2E */	lfsx f0, r3, r0
/* 802B2E94 002AFDD4  FC 00 00 50 */	fneg f0, f0
/* 802B2E98 002AFDD8  48 00 00 28 */	b .L_802B2EC0
.L_802B2E9C:
/* 802B2E9C 002AFDDC  C0 02 DE BC */	lfs f0, lbl_8051C21C@sda21(r2)
/* 802B2EA0 002AFDE0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802B2EA4 002AFDE4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802B2EA8 002AFDE8  EC 02 00 32 */	fmuls f0, f2, f0
/* 802B2EAC 002AFDEC  FC 00 00 1E */	fctiwz f0, f0
/* 802B2EB0 002AFDF0  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 802B2EB4 002AFDF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2EB8 002AFDF8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802B2EBC 002AFDFC  7C 03 04 2E */	lfsx f0, r3, r0
.L_802B2EC0:
/* 802B2EC0 002AFE00  EF A1 E8 3A */	fmadds f29, f1, f0, f29
.L_802B2EC4:
/* 802B2EC4 002AFE04  EC 3F E8 2A */	fadds f1, f31, f29
/* 802B2EC8 002AFE08  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802B2ECC 002AFE0C  EC 01 00 28 */	fsubs f0, f1, f0
/* 802B2ED0 002AFE10  EC 1E 00 32 */	fmuls f0, f30, f0
/* 802B2ED4 002AFE14  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 802B2ED8 002AFE18  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802B2EDC 002AFE1C  EC 20 F8 28 */	fsubs f1, f0, f31
/* 802B2EE0 002AFE20  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802B2EE4 002AFE24  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802B2EE8 002AFE28  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 802B2EEC 002AFE2C  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 802B2EF0 002AFE30  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 802B2EF4 002AFE34  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 802B2EF8 002AFE38  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802B2EFC 002AFE3C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802B2F00 002AFE40  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802B2F04 002AFE44  7C 08 03 A6 */	mtlr r0
/* 802B2F08 002AFE48  38 21 00 50 */	addi r1, r1, 0x50
/* 802B2F0C 002AFE4C  4E 80 00 20 */	blr 

.global setRandTarget__Q34Game9BombSarai3ObjFv
setRandTarget__Q34Game9BombSarai3ObjFv:
/* 802B2F10 002AFE50  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802B2F14 002AFE54  7C 08 02 A6 */	mflr r0
/* 802B2F18 002AFE58  90 01 00 54 */	stw r0, 0x54(r1)
/* 802B2F1C 002AFE5C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802B2F20 002AFE60  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802B2F24 002AFE64  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 802B2F28 002AFE68  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 802B2F2C 002AFE6C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802B2F30 002AFE70  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802B2F34 002AFE74  7C 7F 1B 78 */	mr r31, r3
/* 802B2F38 002AFE78  28 04 00 00 */	cmplwi r4, 0
/* 802B2F3C 002AFE7C  41 82 00 48 */	beq .L_802B2F84
/* 802B2F40 002AFE80  88 04 00 48 */	lbz r0, 0x48(r4)
/* 802B2F44 002AFE84  28 00 00 00 */	cmplwi r0, 0
/* 802B2F48 002AFE88  41 82 00 3C */	beq .L_802B2F84
/* 802B2F4C 002AFE8C  4B E1 66 55 */	bl rand
/* 802B2F50 002AFE90  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802B2F54 002AFE94  3C 00 43 30 */	lis r0, 0x4330
/* 802B2F58 002AFE98  90 61 00 0C */	stw r3, 0xc(r1)
/* 802B2F5C 002AFE9C  C8 62 DE C0 */	lfd f3, lbl_8051C220@sda21(r2)
/* 802B2F60 002AFEA0  90 01 00 08 */	stw r0, 8(r1)
/* 802B2F64 002AFEA4  C0 42 DE A8 */	lfs f2, lbl_8051C208@sda21(r2)
/* 802B2F68 002AFEA8  C8 21 00 08 */	lfd f1, 8(r1)
/* 802B2F6C 002AFEAC  C0 02 DE C8 */	lfs f0, lbl_8051C228@sda21(r2)
/* 802B2F70 002AFEB0  EC 21 18 28 */	fsubs f1, f1, f3
/* 802B2F74 002AFEB4  EC 22 00 72 */	fmuls f1, f2, f1
/* 802B2F78 002AFEB8  EC 01 00 24 */	fdivs f0, f1, f0
/* 802B2F7C 002AFEBC  EF E2 00 2A */	fadds f31, f2, f0
/* 802B2F80 002AFEC0  48 00 00 4C */	b .L_802B2FCC
.L_802B2F84:
/* 802B2F84 002AFEC4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B2F88 002AFEC8  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 802B2F8C 002AFECC  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802B2F90 002AFED0  EF C1 00 28 */	fsubs f30, f1, f0
/* 802B2F94 002AFED4  4B E1 66 0D */	bl rand
/* 802B2F98 002AFED8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802B2F9C 002AFEDC  3C 00 43 30 */	lis r0, 0x4330
/* 802B2FA0 002AFEE0  90 61 00 0C */	stw r3, 0xc(r1)
/* 802B2FA4 002AFEE4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B2FA8 002AFEE8  90 01 00 08 */	stw r0, 8(r1)
/* 802B2FAC 002AFEEC  C8 42 DE C0 */	lfd f2, lbl_8051C220@sda21(r2)
/* 802B2FB0 002AFEF0  C8 01 00 08 */	lfd f0, 8(r1)
/* 802B2FB4 002AFEF4  C0 22 DE C8 */	lfs f1, lbl_8051C228@sda21(r2)
/* 802B2FB8 002AFEF8  EC 40 10 28 */	fsubs f2, f0, f2
/* 802B2FBC 002AFEFC  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802B2FC0 002AFF00  EC 5E 00 B2 */	fmuls f2, f30, f2
/* 802B2FC4 002AFF04  EC 22 08 24 */	fdivs f1, f2, f1
/* 802B2FC8 002AFF08  EF E0 08 2A */	fadds f31, f0, f1
.L_802B2FCC:
/* 802B2FCC 002AFF0C  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 802B2FD0 002AFF10  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802B2FD4 002AFF14  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 802B2FD8 002AFF18  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802B2FDC 002AFF1C  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 802B2FE0 002AFF20  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802B2FE4 002AFF24  EC 23 08 28 */	fsubs f1, f3, f1
/* 802B2FE8 002AFF28  EC 42 00 28 */	fsubs f2, f2, f0
/* 802B2FEC 002AFF2C  4B D8 21 1D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802B2FF0 002AFF30  FF C0 08 90 */	fmr f30, f1
/* 802B2FF4 002AFF34  4B E1 65 AD */	bl rand
/* 802B2FF8 002AFF38  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802B2FFC 002AFF3C  3C 00 43 30 */	lis r0, 0x4330
/* 802B3000 002AFF40  90 61 00 0C */	stw r3, 0xc(r1)
/* 802B3004 002AFF44  C8 42 DE C0 */	lfd f2, lbl_8051C220@sda21(r2)
/* 802B3008 002AFF48  90 01 00 08 */	stw r0, 8(r1)
/* 802B300C 002AFF4C  C0 62 DE CC */	lfs f3, lbl_8051C22C@sda21(r2)
/* 802B3010 002AFF50  C8 01 00 08 */	lfd f0, 8(r1)
/* 802B3014 002AFF54  C0 22 DE C8 */	lfs f1, lbl_8051C228@sda21(r2)
/* 802B3018 002AFF58  EC 80 10 28 */	fsubs f4, f0, f2
/* 802B301C 002AFF5C  C0 42 DE D0 */	lfs f2, lbl_8051C230@sda21(r2)
/* 802B3020 002AFF60  C0 02 DE 98 */	lfs f0, lbl_8051C1F8@sda21(r2)
/* 802B3024 002AFF64  EC 63 01 32 */	fmuls f3, f3, f4
/* 802B3028 002AFF68  EC 23 08 24 */	fdivs f1, f3, f1
/* 802B302C 002AFF6C  EC 3E 08 2A */	fadds f1, f30, f1
/* 802B3030 002AFF70  EC A2 08 2A */	fadds f5, f2, f1
/* 802B3034 002AFF74  FC 20 28 90 */	fmr f1, f5
/* 802B3038 002AFF78  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802B303C 002AFF7C  40 80 00 08 */	bge .L_802B3044
/* 802B3040 002AFF80  FC 20 28 50 */	fneg f1, f5
.L_802B3044:
/* 802B3044 002AFF84  C0 62 DE BC */	lfs f3, lbl_8051C21C@sda21(r2)
/* 802B3048 002AFF88  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802B304C 002AFF8C  C0 02 DE 98 */	lfs f0, lbl_8051C1F8@sda21(r2)
/* 802B3050 002AFF90  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802B3054 002AFF94  EC 41 00 F2 */	fmuls f2, f1, f3
/* 802B3058 002AFF98  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 802B305C 002AFF9C  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802B3060 002AFFA0  C0 9F 01 9C */	lfs f4, 0x19c(r31)
/* 802B3064 002AFFA4  FC 00 10 1E */	fctiwz f0, f2
/* 802B3068 002AFFA8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 802B306C 002AFFAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B3070 002AFFB0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802B3074 002AFFB4  7C 64 02 14 */	add r3, r4, r0
/* 802B3078 002AFFB8  C0 03 00 04 */	lfs f0, 4(r3)
/* 802B307C 002AFFBC  EC 5F 08 3A */	fmadds f2, f31, f0, f1
/* 802B3080 002AFFC0  40 80 00 28 */	bge .L_802B30A8
/* 802B3084 002AFFC4  C0 02 DE B8 */	lfs f0, lbl_8051C218@sda21(r2)
/* 802B3088 002AFFC8  EC 05 00 32 */	fmuls f0, f5, f0
/* 802B308C 002AFFCC  FC 00 00 1E */	fctiwz f0, f0
/* 802B3090 002AFFD0  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802B3094 002AFFD4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802B3098 002AFFD8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802B309C 002AFFDC  7C 04 04 2E */	lfsx f0, r4, r0
/* 802B30A0 002AFFE0  FC 20 00 50 */	fneg f1, f0
/* 802B30A4 002AFFE4  48 00 00 1C */	b .L_802B30C0
.L_802B30A8:
/* 802B30A8 002AFFE8  EC 05 00 F2 */	fmuls f0, f5, f3
/* 802B30AC 002AFFEC  FC 00 00 1E */	fctiwz f0, f0
/* 802B30B0 002AFFF0  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802B30B4 002AFFF4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B30B8 002AFFF8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802B30BC 002AFFFC  7C 24 04 2E */	lfsx f1, r4, r0
.L_802B30C0:
/* 802B30C0 002B0000  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 802B30C4 002B0004  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 802B30C8 002B0008  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802B30CC 002B000C  D0 9F 02 D0 */	stfs f4, 0x2d0(r31)
/* 802B30D0 002B0010  D0 5F 02 D4 */	stfs f2, 0x2d4(r31)
/* 802B30D4 002B0014  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802B30D8 002B0018  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802B30DC 002B001C  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 802B30E0 002B0020  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 802B30E4 002B0024  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802B30E8 002B0028  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802B30EC 002B002C  7C 08 03 A6 */	mtlr r0
/* 802B30F0 002B0030  38 21 00 50 */	addi r1, r1, 0x50
/* 802B30F4 002B0034  4E 80 00 20 */	blr 

.global addPitchRatio__Q34Game9BombSarai3ObjFv
addPitchRatio__Q34Game9BombSarai3ObjFv:
/* 802B30F8 002B0038  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802B30FC 002B003C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802B3100 002B0040  C0 65 08 6C */	lfs f3, 0x86c(r5)
/* 802B3104 002B0044  C0 44 00 54 */	lfs f2, 0x54(r4)
/* 802B3108 002B0048  C0 23 02 C0 */	lfs f1, 0x2c0(r3)
/* 802B310C 002B004C  C0 02 DE D4 */	lfs f0, lbl_8051C234@sda21(r2)
/* 802B3110 002B0050  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 802B3114 002B0054  D0 23 02 C0 */	stfs f1, 0x2c0(r3)
/* 802B3118 002B0058  C0 23 02 C0 */	lfs f1, 0x2c0(r3)
/* 802B311C 002B005C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B3120 002B0060  4C 81 00 20 */	blelr 
/* 802B3124 002B0064  EC 01 00 28 */	fsubs f0, f1, f0
/* 802B3128 002B0068  D0 03 02 C0 */	stfs f0, 0x2c0(r3)
/* 802B312C 002B006C  4E 80 00 20 */	blr 

.global supplyBomb__Q34Game9BombSarai3ObjFv
supplyBomb__Q34Game9BombSarai3ObjFv:
/* 802B3130 002B0070  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802B3134 002B0074  7C 08 02 A6 */	mflr r0
/* 802B3138 002B0078  90 01 00 54 */	stw r0, 0x54(r1)
/* 802B313C 002B007C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802B3140 002B0080  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802B3144 002B0084  7C 7E 1B 78 */	mr r30, r3
/* 802B3148 002B0088  80 03 02 D8 */	lwz r0, 0x2d8(r3)
/* 802B314C 002B008C  28 00 00 00 */	cmplwi r0, 0
/* 802B3150 002B0090  40 82 00 90 */	bne .L_802B31E0
/* 802B3154 002B0094  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802B3158 002B0098  38 80 00 24 */	li r4, 0x24
/* 802B315C 002B009C  4B E5 AB 49 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 802B3160 002B00A0  7C 7F 1B 79 */	or. r31, r3, r3
/* 802B3164 002B00A4  41 82 00 7C */	beq .L_802B31E0
/* 802B3168 002B00A8  38 61 00 08 */	addi r3, r1, 8
/* 802B316C 002B00AC  4B E7 BA B9 */	bl __ct__Q24Game13EnemyBirthArgFv
/* 802B3170 002B00B0  7F C3 F3 78 */	mr r3, r30
/* 802B3174 002B00B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B3178 002B00B8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802B317C 002B00BC  7D 89 03 A6 */	mtctr r12
/* 802B3180 002B00C0  4E 80 04 21 */	bctrl 
/* 802B3184 002B00C4  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 802B3188 002B00C8  7F E3 FB 78 */	mr r3, r31
/* 802B318C 002B00CC  38 81 00 08 */	addi r4, r1, 8
/* 802B3190 002B00D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B3194 002B00D4  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 802B3198 002B00D8  7D 89 03 A6 */	mtctr r12
/* 802B319C 002B00DC  4E 80 04 21 */	bctrl 
/* 802B31A0 002B00E0  28 03 00 00 */	cmplwi r3, 0
/* 802B31A4 002B00E4  41 82 00 3C */	beq .L_802B31E0
/* 802B31A8 002B00E8  90 7E 02 D8 */	stw r3, 0x2d8(r30)
/* 802B31AC 002B00EC  38 80 00 00 */	li r4, 0
/* 802B31B0 002B00F0  80 7E 02 D8 */	lwz r3, 0x2d8(r30)
/* 802B31B4 002B00F4  4B E8 7E 15 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 802B31B8 002B00F8  3C 80 80 49 */	lis r4, lbl_8048A26C@ha
/* 802B31BC 002B00FC  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 802B31C0 002B0100  38 84 A2 6C */	addi r4, r4, lbl_8048A26C@l
/* 802B31C4 002B0104  48 18 BE 21 */	bl getJoint__Q28SysShape5ModelFPc
/* 802B31C8 002B0108  48 17 66 D9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B31CC 002B010C  7C 64 1B 78 */	mr r4, r3
/* 802B31D0 002B0110  80 7E 02 D8 */	lwz r3, 0x2d8(r30)
/* 802B31D4 002B0114  4B EE C8 D5 */	bl startCapture__Q24Game8CreatureFP7Matrixf
/* 802B31D8 002B0118  80 7E 02 D8 */	lwz r3, 0x2d8(r30)
/* 802B31DC 002B011C  93 C3 02 CC */	stw r30, 0x2cc(r3)
.L_802B31E0:
/* 802B31E0 002B0120  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802B31E4 002B0124  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802B31E8 002B0128  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802B31EC 002B012C  7C 08 03 A6 */	mtlr r0
/* 802B31F0 002B0130  38 21 00 50 */	addi r1, r1, 0x50
/* 802B31F4 002B0134  4E 80 00 20 */	blr 

.global "throwBomb__Q34Game9BombSarai3ObjFR10Vector3<f>"
"throwBomb__Q34Game9BombSarai3ObjFR10Vector3<f>":
/* 802B31F8 002B0138  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B31FC 002B013C  7C 08 02 A6 */	mflr r0
/* 802B3200 002B0140  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B3204 002B0144  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B3208 002B0148  7C 9F 23 78 */	mr r31, r4
/* 802B320C 002B014C  93 C1 00 08 */	stw r30, 8(r1)
/* 802B3210 002B0150  7C 7E 1B 78 */	mr r30, r3
/* 802B3214 002B0154  80 63 02 D8 */	lwz r3, 0x2d8(r3)
/* 802B3218 002B0158  28 03 00 00 */	cmplwi r3, 0
/* 802B321C 002B015C  41 82 00 34 */	beq .L_802B3250
/* 802B3220 002B0160  4B EE C9 7D */	bl endCapture__Q24Game8CreatureFv
/* 802B3224 002B0164  80 7E 02 D8 */	lwz r3, 0x2d8(r30)
/* 802B3228 002B0168  7F E4 FB 78 */	mr r4, r31
/* 802B322C 002B016C  81 83 00 00 */	lwz r12, 0(r3)
/* 802B3230 002B0170  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 802B3234 002B0174  7D 89 03 A6 */	mtctr r12
/* 802B3238 002B0178  4E 80 04 21 */	bctrl 
/* 802B323C 002B017C  80 7E 02 D8 */	lwz r3, 0x2d8(r30)
/* 802B3240 002B0180  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 802B3244 002B0184  D0 03 01 FC */	stfs f0, 0x1fc(r3)
/* 802B3248 002B0188  C0 03 01 FC */	lfs f0, 0x1fc(r3)
/* 802B324C 002B018C  D0 03 01 A8 */	stfs f0, 0x1a8(r3)
.L_802B3250:
/* 802B3250 002B0190  38 00 00 00 */	li r0, 0
/* 802B3254 002B0194  90 1E 02 D8 */	stw r0, 0x2d8(r30)
/* 802B3258 002B0198  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B325C 002B019C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B3260 002B01A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B3264 002B01A4  7C 08 03 A6 */	mtlr r0
/* 802B3268 002B01A8  38 21 00 10 */	addi r1, r1, 0x10
/* 802B326C 002B01AC  4E 80 00 20 */	blr 

.global getAttackablePikmin__Q34Game9BombSarai3ObjFv
getAttackablePikmin__Q34Game9BombSarai3ObjFv:
/* 802B3270 002B01B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B3274 002B01B4  7C 08 02 A6 */	mflr r0
/* 802B3278 002B01B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B327C 002B01BC  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802B3280 002B01C0  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 802B3284 002B01C4  C0 43 01 8C */	lfs f2, 0x18c(r3)
/* 802B3288 002B01C8  EC 61 00 28 */	fsubs f3, f1, f0
/* 802B328C 002B01CC  C0 23 01 98 */	lfs f1, 0x198(r3)
/* 802B3290 002B01D0  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802B3294 002B01D4  EC 42 08 28 */	fsubs f2, f2, f1
/* 802B3298 002B01D8  EC 23 00 F2 */	fmuls f1, f3, f3
/* 802B329C 002B01DC  C0 05 03 5C */	lfs f0, 0x35c(r5)
/* 802B32A0 002B01E0  EC 00 00 32 */	fmuls f0, f0, f0
/* 802B32A4 002B01E4  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802B32A8 002B01E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B32AC 002B01EC  40 80 00 20 */	bge .L_802B32CC
/* 802B32B0 002B01F0  C0 25 04 24 */	lfs f1, 0x424(r5)
/* 802B32B4 002B01F4  38 80 00 00 */	li r4, 0
/* 802B32B8 002B01F8  C0 45 03 D4 */	lfs f2, 0x3d4(r5)
/* 802B32BC 002B01FC  38 A0 00 00 */	li r5, 0
/* 802B32C0 002B0200  38 C0 00 00 */	li r6, 0
/* 802B32C4 002B0204  4B E5 FD 8D */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 802B32C8 002B0208  48 00 00 08 */	b .L_802B32D0
.L_802B32CC:
/* 802B32CC 002B020C  38 60 00 00 */	li r3, 0
.L_802B32D0:
/* 802B32D0 002B0210  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B32D4 002B0214  7C 08 03 A6 */	mtlr r0
/* 802B32D8 002B0218  38 21 00 10 */	addi r1, r1, 0x10
/* 802B32DC 002B021C  4E 80 00 20 */	blr 

.global getNextStateOnHeight__Q34Game9BombSarai3ObjFv
getNextStateOnHeight__Q34Game9BombSarai3ObjFv:
/* 802B32E0 002B0220  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802B32E4 002B0224  7C 08 02 A6 */	mflr r0
/* 802B32E8 002B0228  90 01 00 34 */	stw r0, 0x34(r1)
/* 802B32EC 002B022C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802B32F0 002B0230  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802B32F4 002B0234  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802B32F8 002B0238  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802B32FC 002B023C  7C 7E 1B 78 */	mr r30, r3
/* 802B3300 002B0240  C0 02 DE 98 */	lfs f0, lbl_8051C1F8@sda21(r2)
/* 802B3304 002B0244  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 802B3308 002B0248  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B330C 002B024C  4C 40 13 82 */	cror 2, 0, 2
/* 802B3310 002B0250  40 82 00 0C */	bne .L_802B331C
/* 802B3314 002B0254  38 60 00 08 */	li r3, 8
/* 802B3318 002B0258  48 00 00 EC */	b .L_802B3404
.L_802B331C:
/* 802B331C 002B025C  83 FE 01 F4 */	lwz r31, 0x1f4(r30)
/* 802B3320 002B0260  2C 1F 00 00 */	cmpwi r31, 0
/* 802B3324 002B0264  41 82 00 DC */	beq .L_802B3400
/* 802B3328 002B0268  38 80 00 03 */	li r4, 3
/* 802B332C 002B026C  4B E6 1E 89 */	bl getStickPikminColorNum__Q24Game9EnemyFuncFPQ24Game8Creaturei
/* 802B3330 002B0270  2C 03 00 00 */	cmpwi r3, 0
/* 802B3334 002B0274  40 81 00 0C */	ble .L_802B3340
/* 802B3338 002B0278  38 60 00 08 */	li r3, 8
/* 802B333C 002B027C  48 00 00 C8 */	b .L_802B3404
.L_802B3340:
/* 802B3340 002B0280  34 1F FF FF */	addic. r0, r31, -1
/* 802B3344 002B0284  40 80 00 0C */	bge .L_802B3350
/* 802B3348 002B0288  38 60 00 00 */	li r3, 0
/* 802B334C 002B028C  48 00 00 18 */	b .L_802B3364
.L_802B3350:
/* 802B3350 002B0290  38 1F FF FF */	addi r0, r31, -1
/* 802B3354 002B0294  38 60 00 04 */	li r3, 4
/* 802B3358 002B0298  2C 00 00 04 */	cmpwi r0, 4
/* 802B335C 002B029C  41 81 00 08 */	bgt .L_802B3364
/* 802B3360 002B02A0  7C 03 03 78 */	mr r3, r0
.L_802B3364:
/* 802B3364 002B02A4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802B3368 002B02A8  3C 00 43 30 */	lis r0, 0x4330
/* 802B336C 002B02AC  90 61 00 0C */	stw r3, 0xc(r1)
/* 802B3370 002B02B0  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 802B3374 002B02B4  90 01 00 08 */	stw r0, 8(r1)
/* 802B3378 002B02B8  C8 42 DE C0 */	lfd f2, lbl_8051C220@sda21(r2)
/* 802B337C 002B02BC  C8 01 00 08 */	lfd f0, 8(r1)
/* 802B3380 002B02C0  C0 22 DE D8 */	lfs f1, lbl_8051C238@sda21(r2)
/* 802B3384 002B02C4  EC A0 10 28 */	fsubs f5, f0, f2
/* 802B3388 002B02C8  C0 62 DE DC */	lfs f3, lbl_8051C23C@sda21(r2)
/* 802B338C 002B02CC  C0 03 09 34 */	lfs f0, 0x934(r3)
/* 802B3390 002B02D0  C0 43 09 0C */	lfs f2, 0x90c(r3)
/* 802B3394 002B02D4  EC 81 28 28 */	fsubs f4, f1, f5
/* 802B3398 002B02D8  EC 25 00 F2 */	fmuls f1, f5, f3
/* 802B339C 002B02DC  EC 64 00 F2 */	fmuls f3, f4, f3
/* 802B33A0 002B02E0  EC 01 00 32 */	fmuls f0, f1, f0
/* 802B33A4 002B02E4  EF E3 00 BA */	fmadds f31, f3, f2, f0
/* 802B33A8 002B02E8  4B E1 61 F9 */	bl rand
/* 802B33AC 002B02EC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802B33B0 002B02F0  3C 00 43 30 */	lis r0, 0x4330
/* 802B33B4 002B02F4  90 61 00 14 */	stw r3, 0x14(r1)
/* 802B33B8 002B02F8  C8 62 DE C0 */	lfd f3, lbl_8051C220@sda21(r2)
/* 802B33BC 002B02FC  90 01 00 10 */	stw r0, 0x10(r1)
/* 802B33C0 002B0300  C0 22 DE A4 */	lfs f1, lbl_8051C204@sda21(r2)
/* 802B33C4 002B0304  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 802B33C8 002B0308  C0 02 DE C8 */	lfs f0, lbl_8051C228@sda21(r2)
/* 802B33CC 002B030C  EC 42 18 28 */	fsubs f2, f2, f3
/* 802B33D0 002B0310  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802B33D4 002B0314  EC 01 00 24 */	fdivs f0, f1, f0
/* 802B33D8 002B0318  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802B33DC 002B031C  40 80 00 1C */	bge .L_802B33F8
/* 802B33E0 002B0320  80 7E 02 D8 */	lwz r3, 0x2d8(r30)
/* 802B33E4 002B0324  7C 03 00 D0 */	neg r0, r3
/* 802B33E8 002B0328  7C 00 1B 78 */	or r0, r0, r3
/* 802B33EC 002B032C  54 03 0F FE */	srwi r3, r0, 0x1f
/* 802B33F0 002B0330  38 63 00 0B */	addi r3, r3, 0xb
/* 802B33F4 002B0334  48 00 00 10 */	b .L_802B3404
.L_802B33F8:
/* 802B33F8 002B0338  38 60 00 08 */	li r3, 8
/* 802B33FC 002B033C  48 00 00 08 */	b .L_802B3404
.L_802B3400:
/* 802B3400 002B0340  38 60 FF FF */	li r3, -1
.L_802B3404:
/* 802B3404 002B0344  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802B3408 002B0348  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802B340C 002B034C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802B3410 002B0350  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802B3414 002B0354  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802B3418 002B0358  7C 08 03 A6 */	mtlr r0
/* 802B341C 002B035C  38 21 00 30 */	addi r1, r1, 0x30
/* 802B3420 002B0360  4E 80 00 20 */	blr 

.global createEffect__Q34Game9BombSarai3ObjFv
createEffect__Q34Game9BombSarai3ObjFv:
/* 802B3424 002B0364  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B3428 002B0368  7C 08 02 A6 */	mflr r0
/* 802B342C 002B036C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B3430 002B0370  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B3434 002B0374  7C 7F 1B 78 */	mr r31, r3
/* 802B3438 002B0378  38 60 00 14 */	li r3, 0x14
/* 802B343C 002B037C  4B D7 0A 69 */	bl __nw__FUl
/* 802B3440 002B0380  28 03 00 00 */	cmplwi r3, 0
/* 802B3444 002B0384  41 82 00 78 */	beq .L_802B34BC
/* 802B3448 002B0388  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802B344C 002B038C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 802B3450 002B0390  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802B3454 002B0394  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802B3458 002B0398  90 03 00 00 */	stw r0, 0(r3)
/* 802B345C 002B039C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 802B3460 002B03A0  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802B3464 002B03A4  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 802B3468 002B03A8  90 03 00 04 */	stw r0, 4(r3)
/* 802B346C 002B03AC  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 802B3470 002B03B0  3C 80 80 4D */	lis r4, __vt__Q23efx12TBsaraiSupli@ha
/* 802B3474 002B03B4  38 05 00 14 */	addi r0, r5, 0x14
/* 802B3478 002B03B8  90 A3 00 00 */	stw r5, 0(r3)
/* 802B347C 002B03BC  38 84 E9 AC */	addi r4, r4, __vt__Q23efx12TBsaraiSupli@l
/* 802B3480 002B03C0  39 20 00 00 */	li r9, 0
/* 802B3484 002B03C4  39 00 02 B2 */	li r8, 0x2b2
/* 802B3488 002B03C8  90 03 00 04 */	stw r0, 4(r3)
/* 802B348C 002B03CC  38 C7 00 14 */	addi r6, r7, 0x14
/* 802B3490 002B03D0  38 A0 00 14 */	li r5, 0x14
/* 802B3494 002B03D4  38 04 00 14 */	addi r0, r4, 0x14
/* 802B3498 002B03D8  91 23 00 08 */	stw r9, 8(r3)
/* 802B349C 002B03DC  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802B34A0 002B03E0  99 23 00 0E */	stb r9, 0xe(r3)
/* 802B34A4 002B03E4  90 E3 00 00 */	stw r7, 0(r3)
/* 802B34A8 002B03E8  90 C3 00 04 */	stw r6, 4(r3)
/* 802B34AC 002B03EC  91 23 00 10 */	stw r9, 0x10(r3)
/* 802B34B0 002B03F0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802B34B4 002B03F4  90 83 00 00 */	stw r4, 0(r3)
/* 802B34B8 002B03F8  90 03 00 04 */	stw r0, 4(r3)
.L_802B34BC:
/* 802B34BC 002B03FC  90 7F 02 E0 */	stw r3, 0x2e0(r31)
/* 802B34C0 002B0400  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B34C4 002B0404  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B34C8 002B0408  7C 08 03 A6 */	mtlr r0
/* 802B34CC 002B040C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B34D0 002B0410  4E 80 00 20 */	blr 

.global setupEffect__Q34Game9BombSarai3ObjFv
setupEffect__Q34Game9BombSarai3ObjFv:
/* 802B34D4 002B0414  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B34D8 002B0418  7C 08 02 A6 */	mflr r0
/* 802B34DC 002B041C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B34E0 002B0420  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B34E4 002B0424  7C 7F 1B 78 */	mr r31, r3
/* 802B34E8 002B0428  3C 60 80 49 */	lis r3, lbl_8048A278@ha
/* 802B34EC 002B042C  38 83 A2 78 */	addi r4, r3, lbl_8048A278@l
/* 802B34F0 002B0430  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802B34F4 002B0434  48 18 BA F1 */	bl getJoint__Q28SysShape5ModelFPc
/* 802B34F8 002B0438  48 17 63 A9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B34FC 002B043C  80 9F 02 E0 */	lwz r4, 0x2e0(r31)
/* 802B3500 002B0440  90 64 00 10 */	stw r3, 0x10(r4)
/* 802B3504 002B0444  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B3508 002B0448  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B350C 002B044C  7C 08 03 A6 */	mtlr r0
/* 802B3510 002B0450  38 21 00 10 */	addi r1, r1, 0x10
/* 802B3514 002B0454  4E 80 00 20 */	blr 

.global createSupliEffect__Q34Game9BombSarai3ObjFv
createSupliEffect__Q34Game9BombSarai3ObjFv:
/* 802B3518 002B0458  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B351C 002B045C  7C 08 02 A6 */	mflr r0
/* 802B3520 002B0460  38 80 00 00 */	li r4, 0
/* 802B3524 002B0464  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B3528 002B0468  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802B352C 002B046C  81 83 00 00 */	lwz r12, 0(r3)
/* 802B3530 002B0470  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B3534 002B0474  7D 89 03 A6 */	mtctr r12
/* 802B3538 002B0478  4E 80 04 21 */	bctrl 
/* 802B353C 002B047C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B3540 002B0480  7C 08 03 A6 */	mtlr r0
/* 802B3544 002B0484  38 21 00 10 */	addi r1, r1, 0x10
/* 802B3548 002B0488  4E 80 00 20 */	blr 

.global createBalloonEffect__Q34Game9BombSarai3ObjFi
createBalloonEffect__Q34Game9BombSarai3ObjFi:
/* 802B354C 002B048C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802B3550 002B0490  7C 08 02 A6 */	mflr r0
/* 802B3554 002B0494  2C 04 00 00 */	cmpwi r4, 0
/* 802B3558 002B0498  3C A0 80 49 */	lis r5, lbl_8048A250@ha
/* 802B355C 002B049C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802B3560 002B04A0  38 A5 A2 50 */	addi r5, r5, lbl_8048A250@l
/* 802B3564 002B04A4  40 82 00 18 */	bne .L_802B357C
/* 802B3568 002B04A8  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802B356C 002B04AC  38 85 00 34 */	addi r4, r5, 0x34
/* 802B3570 002B04B0  48 18 BA 75 */	bl getJoint__Q28SysShape5ModelFPc
/* 802B3574 002B04B4  48 17 63 2D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B3578 002B04B8  48 00 00 68 */	b .L_802B35E0
.L_802B357C:
/* 802B357C 002B04BC  2C 04 00 01 */	cmpwi r4, 1
/* 802B3580 002B04C0  40 82 00 18 */	bne .L_802B3598
/* 802B3584 002B04C4  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802B3588 002B04C8  38 85 00 40 */	addi r4, r5, 0x40
/* 802B358C 002B04CC  48 18 BA 59 */	bl getJoint__Q28SysShape5ModelFPc
/* 802B3590 002B04D0  48 17 63 11 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B3594 002B04D4  48 00 00 4C */	b .L_802B35E0
.L_802B3598:
/* 802B3598 002B04D8  2C 04 00 02 */	cmpwi r4, 2
/* 802B359C 002B04DC  40 82 00 18 */	bne .L_802B35B4
/* 802B35A0 002B04E0  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802B35A4 002B04E4  38 85 00 4C */	addi r4, r5, 0x4c
/* 802B35A8 002B04E8  48 18 BA 3D */	bl getJoint__Q28SysShape5ModelFPc
/* 802B35AC 002B04EC  48 17 62 F5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B35B0 002B04F0  48 00 00 30 */	b .L_802B35E0
.L_802B35B4:
/* 802B35B4 002B04F4  2C 04 00 03 */	cmpwi r4, 3
/* 802B35B8 002B04F8  40 82 00 18 */	bne .L_802B35D0
/* 802B35BC 002B04FC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802B35C0 002B0500  38 85 00 58 */	addi r4, r5, 0x58
/* 802B35C4 002B0504  48 18 BA 21 */	bl getJoint__Q28SysShape5ModelFPc
/* 802B35C8 002B0508  48 17 62 D9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802B35CC 002B050C  48 00 00 14 */	b .L_802B35E0
.L_802B35D0:
/* 802B35D0 002B0510  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802B35D4 002B0514  38 85 00 64 */	addi r4, r5, 0x64
/* 802B35D8 002B0518  48 18 BA 0D */	bl getJoint__Q28SysShape5ModelFPc
/* 802B35DC 002B051C  48 17 62 C5 */	bl getWorldMatrix__Q28SysShape5JointFv
.L_802B35E0:
/* 802B35E0 002B0520  28 03 00 00 */	cmplwi r3, 0
/* 802B35E4 002B0524  41 82 00 74 */	beq .L_802B3658
/* 802B35E8 002B0528  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802B35EC 002B052C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802B35F0 002B0530  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802B35F4 002B0534  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802B35F8 002B0538  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802B35FC 002B053C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 802B3600 002B0540  38 A3 6A 64 */	addi r5, r3, __vt__Q23efx8TSimple2@l
/* 802B3604 002B0544  38 C0 00 00 */	li r6, 0
/* 802B3608 002B0548  90 01 00 18 */	stw r0, 0x18(r1)
/* 802B360C 002B054C  3C 80 80 4D */	lis r4, __vt__Q23efx11TBsaraiDead@ha
/* 802B3610 002B0550  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 802B3614 002B0554  39 00 00 12 */	li r8, 0x12
/* 802B3618 002B0558  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 802B361C 002B055C  38 E0 00 13 */	li r7, 0x13
/* 802B3620 002B0560  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802B3624 002B0564  38 A4 E9 98 */	addi r5, r4, __vt__Q23efx11TBsaraiDead@l
/* 802B3628 002B0568  38 61 00 18 */	addi r3, r1, 0x18
/* 802B362C 002B056C  38 81 00 08 */	addi r4, r1, 8
/* 802B3630 002B0570  B1 01 00 1C */	sth r8, 0x1c(r1)
/* 802B3634 002B0574  B0 E1 00 1E */	sth r7, 0x1e(r1)
/* 802B3638 002B0578  90 C1 00 20 */	stw r6, 0x20(r1)
/* 802B363C 002B057C  90 C1 00 24 */	stw r6, 0x24(r1)
/* 802B3640 002B0580  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802B3644 002B0584  90 01 00 08 */	stw r0, 8(r1)
/* 802B3648 002B0588  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802B364C 002B058C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 802B3650 002B0590  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802B3654 002B0594  48 0F B9 C1 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
.L_802B3658:
/* 802B3658 002B0598  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802B365C 002B059C  7C 08 03 A6 */	mtlr r0
/* 802B3660 002B05A0  38 21 00 30 */	addi r1, r1, 0x30
/* 802B3664 002B05A4  4E 80 00 20 */	blr 

.global createDownEffect__Q34Game9BombSarai3ObjFf
createDownEffect__Q34Game9BombSarai3ObjFf:
/* 802B3668 002B05A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B366C 002B05AC  7C 08 02 A6 */	mflr r0
/* 802B3670 002B05B0  38 83 01 8C */	addi r4, r3, 0x18c
/* 802B3674 002B05B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B3678 002B05B8  4B E5 04 D9 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 802B367C 002B05BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B3680 002B05C0  7C 08 03 A6 */	mtlr r0
/* 802B3684 002B05C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B3688 002B05C8  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game9BombSarai3ObjFv
effectDrawOn__Q34Game9BombSarai3ObjFv:
/* 802B368C 002B05CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B3690 002B05D0  7C 08 02 A6 */	mflr r0
/* 802B3694 002B05D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B3698 002B05D8  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802B369C 002B05DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802B36A0 002B05E0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802B36A4 002B05E4  7D 89 03 A6 */	mtctr r12
/* 802B36A8 002B05E8  4E 80 04 21 */	bctrl 
/* 802B36AC 002B05EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B36B0 002B05F0  7C 08 03 A6 */	mtlr r0
/* 802B36B4 002B05F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B36B8 002B05F8  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game9BombSarai3ObjFv
effectDrawOff__Q34Game9BombSarai3ObjFv:
/* 802B36BC 002B05FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B36C0 002B0600  7C 08 02 A6 */	mflr r0
/* 802B36C4 002B0604  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B36C8 002B0608  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802B36CC 002B060C  81 83 00 00 */	lwz r12, 0(r3)
/* 802B36D0 002B0610  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802B36D4 002B0614  7D 89 03 A6 */	mtctr r12
/* 802B36D8 002B0618  4E 80 04 21 */	bctrl 
/* 802B36DC 002B061C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B36E0 002B0620  7C 08 03 A6 */	mtlr r0
/* 802B36E4 002B0624  38 21 00 10 */	addi r1, r1, 0x10
/* 802B36E8 002B0628  4E 80 00 20 */	blr 

.global __dt__Q23efx12TBsaraiSupliFv
__dt__Q23efx12TBsaraiSupliFv:
/* 802B36EC 002B062C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B36F0 002B0630  7C 08 02 A6 */	mflr r0
/* 802B36F4 002B0634  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B36F8 002B0638  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B36FC 002B063C  7C 9F 23 78 */	mr r31, r4
/* 802B3700 002B0640  93 C1 00 08 */	stw r30, 8(r1)
/* 802B3704 002B0644  7C 7E 1B 79 */	or. r30, r3, r3
/* 802B3708 002B0648  41 82 00 64 */	beq .L_802B376C
/* 802B370C 002B064C  3C 60 80 4D */	lis r3, __vt__Q23efx12TBsaraiSupli@ha
/* 802B3710 002B0650  38 63 E9 AC */	addi r3, r3, __vt__Q23efx12TBsaraiSupli@l
/* 802B3714 002B0654  90 7E 00 00 */	stw r3, 0(r30)
/* 802B3718 002B0658  38 03 00 14 */	addi r0, r3, 0x14
/* 802B371C 002B065C  90 1E 00 04 */	stw r0, 4(r30)
/* 802B3720 002B0660  41 82 00 3C */	beq .L_802B375C
/* 802B3724 002B0664  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802B3728 002B0668  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802B372C 002B066C  90 7E 00 00 */	stw r3, 0(r30)
/* 802B3730 002B0670  38 03 00 14 */	addi r0, r3, 0x14
/* 802B3734 002B0674  90 1E 00 04 */	stw r0, 4(r30)
/* 802B3738 002B0678  41 82 00 24 */	beq .L_802B375C
/* 802B373C 002B067C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802B3740 002B0680  38 7E 00 04 */	addi r3, r30, 4
/* 802B3744 002B0684  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802B3748 002B0688  38 80 00 00 */	li r4, 0
/* 802B374C 002B068C  90 BE 00 00 */	stw r5, 0(r30)
/* 802B3750 002B0690  38 05 00 14 */	addi r0, r5, 0x14
/* 802B3754 002B0694  90 1E 00 04 */	stw r0, 4(r30)
/* 802B3758 002B0698  4B DD C5 45 */	bl __dt__18JPAEmitterCallBackFv
.L_802B375C:
/* 802B375C 002B069C  7F E0 07 35 */	extsh. r0, r31
/* 802B3760 002B06A0  40 81 00 0C */	ble .L_802B376C
/* 802B3764 002B06A4  7F C3 F3 78 */	mr r3, r30
/* 802B3768 002B06A8  4B D7 09 4D */	bl __dl__FPv
.L_802B376C:
/* 802B376C 002B06AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B3770 002B06B0  7F C3 F3 78 */	mr r3, r30
/* 802B3774 002B06B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B3778 002B06B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B377C 002B06BC  7C 08 03 A6 */	mtlr r0
/* 802B3780 002B06C0  38 21 00 10 */	addi r1, r1, 0x10
/* 802B3784 002B06C4  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game9BombSarai3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game9BombSarai3ObjFPQ24Game8WaterBox:
/* 802B3788 002B06C8  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game9BombSarai3ObjFv
outWaterCallback__Q34Game9BombSarai3ObjFv:
/* 802B378C 002B06CC  4E 80 00 20 */	blr 

.global getDownSmokeScale__Q34Game9BombSarai3ObjFv
getDownSmokeScale__Q34Game9BombSarai3ObjFv:
/* 802B3790 002B06D0  C0 22 DE E0 */	lfs f1, lbl_8051C240@sda21(r2)
/* 802B3794 002B06D4  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game9BombSarai3ObjFv
getEnemyTypeID__Q34Game9BombSarai3ObjFv:
/* 802B3798 002B06D8  38 60 00 3A */	li r3, 0x3a
/* 802B379C 002B06DC  4E 80 00 20 */	blr 

.global "@4@__dt__Q23efx12TBsaraiSupliFv"
"@4@__dt__Q23efx12TBsaraiSupliFv":
/* 802B37A0 002B06E0  38 63 FF FC */	addi r3, r3, -4
/* 802B37A4 002B06E4  4B FF FF 48 */	b __dt__Q23efx12TBsaraiSupliFv
