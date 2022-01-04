#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80487418
    lbl_80487418:
        .asciz "yoroimushi"
        .skip 1

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx9TYoroiEat
    __vt__Q23efx9TYoroiEat:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx8TYoroiHd
    __vt__Q23efx8TYoroiHd:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx8TYoroiAp
    __vt__Q23efx8TYoroiAp:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx12TYoroiAttack
    __vt__Q23efx12TYoroiAttack:
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
    .global __vt__Q23efx15TYoroiAttackhit
    __vt__Q23efx15TYoroiAttackhit:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q34Game5Armor3Obj
    __vt__Q34Game5Armor3Obj:
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
        .4byte
   setInitialSetting__Q34Game5Armor3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game5Armor3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game5Armor3ObjFR8Graphics .4byte
   doSimpleDraw__Q24Game9EnemyBaseFP8Viewport .4byte
   doSimulationGround__Q24Game9EnemyBaseFf .4byte
   doSimulationFlying__Q24Game9EnemyBaseFf .4byte
   doSimulationStick__Q24Game9EnemyBaseFf .4byte
   changeMaterial__Q24Game9EnemyBaseFv .4byte
   "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>" .4byte
   getFitEffectPos__Q24Game9EnemyBaseFv .4byte viewGetShape__Q24Game9EnemyBaseFv
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
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game5Armor3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game5Armor3ObjFv .4byte
   doFinishStoneState__Q34Game5Armor3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game5Armor3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game5Armor3ObjFv .4byte
   doStartMovie__Q34Game5Armor3ObjFv .4byte doEndMovie__Q34Game5Armor3ObjFv
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

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B540
    lbl_8051B540:
        .4byte 0x00000000
    .global lbl_8051B544
    lbl_8051B544:
        .4byte 0x42480000
    .global lbl_8051B548
    lbl_8051B548:
        .4byte 0x40200000
    .global lbl_8051B54C
    lbl_8051B54C:
        .4byte 0x41C80000
    .global lbl_8051B550
    lbl_8051B550:
        .float 1.0
    .global lbl_8051B554
    lbl_8051B554:
        .4byte 0xC47A0000
    .global lbl_8051B558
    lbl_8051B558:
        .4byte 0x6B616D75
        .4byte 0x6A6E7400
    .global lbl_8051B560
    lbl_8051B560:
        .4byte 0x47000000
    .global lbl_8051B564
    lbl_8051B564:
        .float 0.5
    .global lbl_8051B568
    lbl_8051B568:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051B570
    lbl_8051B570:
        .4byte 0x40A00000
    .global lbl_8051B574
    lbl_8051B574:
        .4byte 0xC2480000
    .global lbl_8051B578
    lbl_8051B578:
        .4byte 0x437A0000
    .global lbl_8051B57C
    lbl_8051B57C:
        .4byte 0x3F400000
    .global lbl_8051B580
    lbl_8051B580:
        .4byte 0x40490FDB
    .global lbl_8051B584
    lbl_8051B584:
        .4byte 0x3BB60B61
    .global lbl_8051B588
    lbl_8051B588:
        .float 0.7
    .global lbl_8051B58C
    lbl_8051B58C:
        .4byte 0xC1C80000
    .global lbl_8051B590
    lbl_8051B590:
        .4byte 0x443B8000
    .global lbl_8051B594
    lbl_8051B594:
        .4byte 0x3F666666
*/

namespace Game {

/*
 * --INFO--
 * Address:	8027D69C
 * Size:	000140
 */
Armor::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8027D6DC
	addi     r0, r31, 0x2e4
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2e4(r31)
	stw      r0, 0x2e8(r31)
	stw      r0, 0x2ec(r31)

lbl_8027D6DC:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game5Armor3Obj@ha
	addi     r0, r31, 0x2e4
	addi     r5, r3, __vt__Q34Game5Armor3Obj@l
	addi     r3, r31, 0x2cc
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x2fc
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __ct__10MouthSlotsFv
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8027D770
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game5Armor14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game5Armor14ProperAnimator@l
	lis      r3, __vt__Q28SysShape8Animator@ha
	stw      r0, 0(r30)
	addi     r4, r4, __vt__Q28SysShape12BaseAnimator@l
	addi     r3, r3, __vt__Q28SysShape8Animator@l
	li       r0, 0
	stw      r4, 0x10(r30)
	stw      r3, 0x10(r30)
	stb      r0, 0x28(r30)
	stw      r0, 0x1c(r30)
	stw      r0, 0x14(r30)
	stb      r0, 0x28(r30)
	stw      r0, 0x20(r30)

lbl_8027D770:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8027D7A4
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game5Armor3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game5Armor3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_8027D7A4:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createEffect__Q34Game5Armor3ObjFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027D7DC
 * Size:	000004
 */
void Armor::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8027D7E0
 * Size:	000098
 */
void Armor::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r4, 0x1e0(r31)
	li       r0, -1
	lfs      f0, lbl_8051B540@sda21(r2)
	mr       r3, r31
	rlwinm   r4, r4, 0, 0x15, 0x13
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	rlwinm   r4, r4, 0, 0x1a, 0x18
	stw      r4, 0x1e0(r31)
	stw      r0, 0x2c4(r31)
	stfs     f0, 0x2c8(r31)
	bl       resetBridgeSearch__Q34Game5Armor3ObjFv
	mr       r3, r31
	bl       setupEffect__Q34Game5Armor3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1dc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027D878
 * Size:	000048
 */
void Armor::Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, 0x2bc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x2cc
	bl       update__10MouthSlotsFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027D8C0
 * Size:	000004
 */
void Armor::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8027D8C4
 * Size:	000020
 */
void Armor::Obj::doDebugDraw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doDebugDraw__Q24Game9EnemyBaseFR8Graphics
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027D8E4
 * Size:	00004C
 */
void Armor::Obj::setFSM(Game::Armor::FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x2bc(r3)
	mr       r4, r31
	lwz      r3, 0x2bc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x2b4(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027D930
 * Size:	0000EC
 */
void Armor::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	addi     r4, r1, 8
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1e0(r30)
	li       r3, 0
	rlwinm.  r0, r4, 0, 0x15, 0x15
	bne      lbl_8027D978
	rlwinm.  r0, r4, 0, 0xd, 0xd
	beq      lbl_8027D97C

lbl_8027D978:
	li       r3, 1

lbl_8027D97C:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027D9A8
	lfs      f1, 8(r1)
	lfs      f0, lbl_8051B544@sda21(r2)
	stfs     f1, 0(r31)
	lfs      f1, 0xc(r1)
	stfs     f1, 4(r31)
	lfs      f1, 0x10(r1)
	stfs     f1, 8(r31)
	stfs     f0, 0x18(r31)
	b        lbl_8027D9E8

lbl_8027D9A8:
	lfs      f0, 8(r1)
	lfs      f1, lbl_8051B548@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f0, 0x190(r30)
	fadds    f0, f1, f0
	stfs     f0, 4(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 8(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8027D9E0
	lfs      f0, lbl_8051B544@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_8027D9E8

lbl_8027D9E0:
	lfs      f0, lbl_8051B54C@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_8027D9E8:
	lfs      f2, lbl_8051B540@sda21(r2)
	lfs      f1, lbl_8051B550@sda21(r2)
	stfs     f2, 0xc(r31)
	lfs      f0, lbl_8051B54C@sda21(r2)
	stfs     f1, 0x10(r31)
	stfs     f2, 0x14(r31)
	stfs     f0, 0x1c(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027DA1C
 * Size:	000094
 */
void Armor::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lwz      r0, 0x1e0(r3)
	fmr      f31, f1
	mr       r31, r3
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8027DA58
	lfs      f2, lbl_8051B550@sda21(r2)
	bl       addDamage__Q24Game9EnemyBaseFff
	li       r3, 1
	b        lbl_8027DA94

lbl_8027DA58:
	cmplwi   r5, 0
	beq      lbl_8027DA90
	lis      r4, 0x646D6731@ha
	addi     r3, r5, 0x30
	addi     r4, r4, 0x646D6731@l
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027DA90
	fmr      f1, f31
	lfs      f2, lbl_8051B550@sda21(r2)
	mr       r3, r31
	bl       addDamage__Q24Game9EnemyBaseFff
	li       r3, 1
	b        lbl_8027DA94

lbl_8027DA90:
	li       r3, 0

lbl_8027DA94:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027DAB0
 * Size:	000068
 */
void Armor::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r6, 0xc0(r3)
	lwz      r12, 0x278(r12)
	lfs      f1, 0x67c(r6)
	mtctr    r12
	bctrl
	lwz      r4, 0x1e0(r31)
	rlwinm.  r0, r4, 0, 0x16, 0x16
	bne      lbl_8027DAF8
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027DAF8
	oris     r0, r4, 8
	stw      r0, 0x1e0(r31)

lbl_8027DAF8:
	clrlwi   r0, r3, 0x18
	lwz      r31, 0xc(r1)
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027DB18
 * Size:	000260
 */
void Armor::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stw      r30, 0x48(r1)
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r4, r31
	addi     r3, r1, 0x2c
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x2c
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8027DB80
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8027DD34

lbl_8027DB80:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8027DBEC

lbl_8027DB98:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8027DD34
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8027DBEC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027DB98
	b        lbl_8027DD34

lbl_8027DC0C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027DC78
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f1, lbl_8051B540@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051B554@sda21(r2)
	lis      r3, __vt__Q24Game13InteractFlick@ha
	stw      r0, 0x18(r1)
	addi     r0, r3, __vt__Q24Game13InteractFlick@l
	mr       r3, r30
	stw      r31, 0x1c(r1)
	addi     r4, r1, 0x18
	stw      r0, 0x18(r1)
	stfs     f1, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8027DC78:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8027DCA4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8027DD34

lbl_8027DCA4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8027DD18

lbl_8027DCC4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8027DD34
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8027DD18:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027DCC4

lbl_8027DD34:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8027DC0C
	addi     r3, r1, 0x2c
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027DD78
 * Size:	000034
 */
void Armor::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051B540@sda21(r2)
	stfs     f0, 0x20c(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027DDAC
 * Size:	000028
 */
void Armor::Obj::startCarcassMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 9
	li       r5, 0
	stw      r0, 0x14(r1)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027DDD4
 * Size:	000020
 */
void Armor::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game5Armor3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027DDF4
 * Size:	000020
 */
void Armor::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game5Armor3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027DE14
 * Size:	00008C
 */
void Armor::Obj::initMouthSlots()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r4, 1
	addi     r3, r30, 0x2cc
	bl       alloc__10MouthSlotsFi
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2cc
	li       r4, 0
	addi     r6, r2, lbl_8051B558@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lfs      f31, lbl_8051B54C@sda21(r2)
	li       r31, 0
	b        lbl_8027DE74

lbl_8027DE60:
	mr       r4, r31
	addi     r3, r30, 0x2cc
	bl       getSlot__10MouthSlotsFi
	stfs     f31, 0x1c(r3)
	addi     r31, r31, 1

lbl_8027DE74:
	lwz      r0, 0x2cc(r30)
	cmpw     r31, r0
	blt      lbl_8027DE60
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027DEA0
 * Size:	000030
 */
void Armor::Obj::lifeIncrement()
{
	/*
	lfs      f1, lbl_8051B540@sda21(r2)
	stfs     f1, 0x208(r3)
	lwz      r0, 0x1e0(r3)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stw      r0, 0x1e0(r3)
	lfs      f0, 0x200(r3)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bnelr
	lfs      f0, lbl_8051B550@sda21(r2)
	stfs     f0, 0x200(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027DED0
 * Size:	0003EC
 */
void Armor::Obj::attackPikmin()
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	stw      r28, 0x60(r1)
	li       r4, 0
	lwz      r0, pikiMgr__4Game@sda21(r13)
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r4, 0x48(r1)
	addi     r5, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r4, 0
	stw      r5, 0x3c(r1)
	mr       r31, r3
	stw      r4, 0x40(r1)
	stw      r0, 0x44(r1)
	bne      lbl_8027DF4C
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_8027E264

lbl_8027DF4C:
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_8027DFBC

lbl_8027DF68:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8027E264
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_8027DFBC:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027DF68
	b        lbl_8027E264

lbl_8027DFDC:
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027E1A8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027E1A8
	lwz      r0, 0xf4(r29)
	cmplw    r0, r31
	beq      lbl_8027E1A8
	li       r28, 0
	b        lbl_8027E19C

lbl_8027E03C:
	mr       r4, r28
	addi     r3, r31, 0x2cc
	bl       getSlot__10MouthSlotsFi
	mr       r30, r3
	lwz      r0, 0x64(r3)
	cmplwi   r0, 0
	bne      lbl_8027E198
	addi     r4, r1, 0x30
	bl       "getPosition__13MouthCollPartFR10Vector3<f>"
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0xc(r1)
	lfs      f0, 0x34(r1)
	lfs      f29, 8(r1)
	fsubs    f2, f0, f31
	lfs      f1, 0x30(r1)
	lfs      f30, 0x10(r1)
	lfs      f0, 0x38(r1)
	fsubs    f1, f1, f29
	fmuls    f3, f2, f2
	fsubs    f2, f0, f30
	lfs      f0, lbl_8051B540@sda21(r2)
	fmadds   f1, f1, f1, f3
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8027E0C8
	ble      lbl_8027E0CC
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8027E0CC

lbl_8027E0C8:
	fmr      f1, f0

lbl_8027E0CC:
	lfs      f0, 0x1c(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_8027E198
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game14InteractAttack@ha
	addi     r0, r4, __vt__Q24Game11Interaction@l
	li       r4, 0
	stw      r0, 0x4c(r1)
	addi     r0, r3, __vt__Q24Game14InteractAttack@l
	lfs      f0, lbl_8051B550@sda21(r2)
	lis      r3, __vt__Q24Game15InteractSwallow@ha
	stw      r0, 0x4c(r1)
	addi     r5, r3, __vt__Q24Game15InteractSwallow@l
	li       r0, 1
	mr       r3, r29
	stw      r4, 0x5c(r1)
	addi     r4, r1, 0x4c
	stw      r31, 0x50(r1)
	stfs     f0, 0x54(r1)
	stw      r30, 0x58(r1)
	stw      r5, 0x4c(r1)
	stw      r0, 0x5c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027E198
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx3Arg@ha
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r3, __vt__Q23efx15TYoroiAttackhit@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx15TYoroiAttackhit@l
	li       r6, 0x1ed
	li       r5, 0
	stw      r4, 0x20(r1)
	addi     r3, r1, 0x14
	addi     r4, r1, 0x20
	stfs     f29, 0x24(r1)
	stfs     f31, 0x28(r1)
	stfs     f30, 0x2c(r1)
	sth      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x14(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	b        lbl_8027E1A8

lbl_8027E198:
	addi     r28, r28, 1

lbl_8027E19C:
	lwz      r0, 0x2cc(r31)
	cmpw     r28, r0
	blt      lbl_8027E03C

lbl_8027E1A8:
	lwz      r0, 0x48(r1)
	cmplwi   r0, 0
	bne      lbl_8027E1D4
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_8027E264

lbl_8027E1D4:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_8027E248

lbl_8027E1F4:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8027E264
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_8027E248:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027E1F4

lbl_8027E264:
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x40(r1)
	cmplw    r4, r3
	bne      lbl_8027DFDC
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r0, 0xa4(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027E2BC
 * Size:	00008C
 */
void Armor::Obj::getSlotPikiNum()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x25c(r12)
	mtctr    r12
	bctrl
	lwz      r31, 0(r3)
	li       r28, 0
	mr       r29, r3
	b        lbl_8027E31C

lbl_8027E2FC:
	mr       r3, r29
	mr       r4, r28
	bl       getSlot__10MouthSlotsFi
	lwz      r0, 0x64(r3)
	cmplwi   r0, 0
	beq      lbl_8027E318
	addi     r30, r30, 1

lbl_8027E318:
	addi     r28, r28, 1

lbl_8027E31C:
	cmpw     r28, r31
	blt      lbl_8027E2FC
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027E348
 * Size:	000008
 */
void Armor::Obj::getMouthSlots()
{
	/*
	addi     r3, r3, 0x2cc
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027E350
 * Size:	00002C
 */
void Armor::Obj::killSlotPiki()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r5, 0xc0(r3)
	lfs      f1, 0x81c(r5)
	bl
	"swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027E37C
 * Size:	000020
 */
void Armor::Obj::resetBridgeSearch()
{
	/*
	li       r4, 1
	li       r0, 0
	stb      r4, 0x2c0(r3)
	lfs      f0, lbl_8051B540@sda21(r2)
	stw      r0, 0x2d8(r3)
	stfs     f0, 0x2dc(r3)
	stfs     f0, 0x2e0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027E39C
 * Size:	000048
 */
void Armor::Obj::setBridgeSearch()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x2c0(r3)
	cmplwi   r0, 0
	beq      lbl_8027E3D0
	li       r0, 0
	stb      r0, 0x2c0(r31)
	bl       setNearestBridge__Q34Game5Armor3ObjFv
	mr       r3, r31
	bl       setCullingCheck__Q34Game5Armor3ObjFv

lbl_8027E3D0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027E3E4
 * Size:	0002C0
 */
void Armor::Obj::setNearestBridge()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r3
	li       r0, 0
	stw      r0, 0x2d8(r3)
	lfs      f0, lbl_8051B540@sda21(r2)
	stfs     f0, 0x2dc(r3)
	stfs     f0, 0x2e0(r3)
	lwz      r3, mgr__Q24Game10ItemBridge@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8027E634
	lwz      r4, 0xc0(r31)
	lfs      f0, 0x35c(r4)
	fmuls    f31, f0, f0
	beq      lbl_8027E438
	addi     r3, r3, 0x30

lbl_8027E438:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x20(r1)
	cmplwi   r0, 0
	stw      r4, 0x14(r1)
	stw      r0, 0x18(r1)
	stw      r3, 0x1c(r1)
	bne      lbl_8027E474
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8027E614

lbl_8027E474:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8027E4E0

lbl_8027E48C:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8027E614
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_8027E4E0:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027E48C
	b        lbl_8027E614

lbl_8027E500:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	addi     r3, r1, 8
	mr       r30, r0
	mr       r4, r30
	bl       getStartPos__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x194(r31)
	lfs      f0, 0x10(r1)
	lfs      f2, 0x18c(r31)
	fsubs    f1, f1, f0
	lfs      f0, 8(r1)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f31
	bge      lbl_8027E558
	stw      r30, 0x2d8(r31)
	fmr      f31, f0

lbl_8027E558:
	lwz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_8027E584
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8027E614

lbl_8027E584:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8027E5F8

lbl_8027E5A4:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8027E614
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_8027E5F8:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027E5A4

lbl_8027E614:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	cmplw    r4, r3
	bne      lbl_8027E500

lbl_8027E634:
	lwz      r3, 0x2d8(r31)
	cmplwi   r3, 0
	beq      lbl_8027E684
	bl       getStageWidth__Q34Game10ItemBridge4ItemFv
	lfs      f0, lbl_8051B544@sda21(r2)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c(r1)
	lfd      f3, lbl_8051B568@sda21(r2)
	stw      r0, 0x28(r1)
	lfs      f1, lbl_8051B560@sda21(r2)
	lfd      f2, 0x28(r1)
	lfs      f0, lbl_8051B564@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f2, f31, f2
	fdivs    f1, f2, f1
	fnmsubs  f0, f0, f31, f1
	stfs     f0, 0x2dc(r31)

lbl_8027E684:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027E6A4
 * Size:	000004
 */
void Armor::Obj::setCullingCheck() { }

/*
 * --INFO--
 * Address:	8027E6A8
 * Size:	0001B4
 */
void Armor::Obj::checkBreakOrMove()
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stfd     f27, 0x50(r1)
	psq_st   f27, 88(r1), 0, qr0
	stfd     f26, 0x40(r1)
	psq_st   f26, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r4, 0x2d8(r3)
	cmplwi   r4, 0
	beq      lbl_8027E814
	addi     r3, r1, 0x20
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f28, 0x20(r1)
	addi     r3, r1, 0x14
	lfs      f29, 0x24(r1)
	lfs      f27, 0x28(r1)
	lwz      r4, 0x2d8(r31)
	bl       getStartPos__Q34Game10ItemBridge4ItemFv
	lfs      f2, 0x18(r1)
	lfs      f0, 0x190(r31)
	lfs      f1, 0x14(r1)
	fsubs    f30, f2, f0
	lfs      f0, 0x18c(r31)
	lfs      f2, 0x1c(r1)
	fsubs    f31, f1, f0
	lfs      f0, 0x194(r31)
	fmuls    f1, f29, f30
	fsubs    f29, f2, f0
	lfs      f0, lbl_8051B540@sda21(r2)
	fmadds   f1, f28, f31, f1
	fmadds   f1, f27, f29, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8027E75C
	li       r3, 6
	b        lbl_8027E818

lbl_8027E75C:
	lwz      r4, 0x2d8(r31)
	addi     r3, r1, 8
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f27, 8(r1)
	lfs      f28, 0xc(r1)
	lfs      f26, 0x10(r1)
	lwz      r3, 0x2d8(r31)
	bl       getStageWidth__Q34Game10ItemBridge4ItemFv
	fmuls    f3, f28, f30
	lfs      f0, lbl_8051B564@sda21(r2)
	lfs      f2, lbl_8051B544@sda21(r2)
	fmuls    f4, f0, f1
	lfs      f0, lbl_8051B540@sda21(r2)
	fmadds   f1, f27, f31, f3
	fadds    f2, f2, f4
	fmadds   f1, f26, f29, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8027E7AC
	stfs     f2, 0x2e0(r31)
	b        lbl_8027E7B4

lbl_8027E7AC:
	fneg     f0, f2
	stfs     f0, 0x2e0(r31)

lbl_8027E7B4:
	lfs      f0, lbl_8051B540@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8027E7C4
	b        lbl_8027E7C8

lbl_8027E7C4:
	fneg     f1, f1

lbl_8027E7C8:
	fcmpo    cr0, f1, f4
	ble      lbl_8027E7D8
	li       r3, 5
	b        lbl_8027E818

lbl_8027E7D8:
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r31, 0x18c
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051B570@sda21(r2)
	lfs      f2, 0x190(r31)
	fadds    f0, f0, f1
	fcmpo    cr0, f2, f0
	ble      lbl_8027E80C
	li       r3, 7
	b        lbl_8027E818

lbl_8027E80C:
	li       r3, 5
	b        lbl_8027E818

lbl_8027E814:
	li       r3, 6

lbl_8027E818:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	psq_l    f27, 88(r1), 0, qr0
	lfd      f27, 0x50(r1)
	psq_l    f26, 72(r1), 0, qr0
	lfd      f26, 0x40(r1)
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027E85C
 * Size:	000028
 */
void Armor::Obj::isBreakBridge()
{
	/*
	lwz      r3, 0x2d8(r3)
	cmplwi   r3, 0
	beq      lbl_8027E87C
	lwz      r0, 0x218(r3)
	cmpwi    r0, 0
	beq      lbl_8027E87C
	li       r3, 1
	blr

lbl_8027E87C:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027E884
 * Size:	0002A8
 */
void Armor::Obj::moveBridgeSide()
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	mr       r31, r3
	addi     r3, r1, 0x44
	lwz      r4, 0x2d8(r31)
	bl       getStartPos__Q34Game10ItemBridge4ItemFv
	lfs      f29, 0x44(r1)
	addi     r3, r1, 0x38
	lfs      f28, 0x4c(r1)
	lwz      r4, 0x2d8(r31)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f30, 0x38(r1)
	addi     r3, r1, 0x2c
	lfs      f31, 0x40(r1)
	lwz      r4, 0x2d8(r31)
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x2e0(r31)
	lfs      f4, 0x34(r1)
	fmuls    f31, f31, f1
	lfs      f0, lbl_8051B574@sda21(r2)
	fmuls    f30, f30, f1
	lfs      f3, 0x2c(r1)
	fmuls    f4, f4, f0
	lfs      f1, 0x194(r31)
	fadds    f28, f28, f31
	lfs      f2, 0x18c(r31)
	fmuls    f3, f3, f0
	lfs      f0, lbl_8051B578@sda21(r2)
	fadds    f29, f29, f30
	fadds    f28, f28, f4
	fadds    f29, f29, f3
	fsubs    f1, f1, f28
	fsubs    f2, f2, f29
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8027E9BC
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f1, lbl_8051B57C@sda21(r2)
	lfs      f0, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	fmuls    f30, f1, f0
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f31, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 1
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_8027EAF8

lbl_8027E9BC:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f31, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f29, f1
	fsubs    f2, f28, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051B584@sda21(r2)
	lfs      f1, lbl_8051B580@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8027EA60
	lfs      f0, lbl_8051B540@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8027EA5C
	fmr      f30, f1
	b        lbl_8027EA60

lbl_8027EA5C:
	fneg     f30, f1

lbl_8027EA60:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x2e4(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f31, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 0
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_8027EAF8:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027EB2C
 * Size:	000288
 */
void Armor::Obj::moveBridgeCentre()
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	addi     r3, r1, 0x38
	lwz      r4, 0x2d8(r31)
	bl       getStartPos__Q34Game10ItemBridge4ItemFv
	lfs      f29, 0x38(r1)
	addi     r3, r1, 0x2c
	lfs      f28, 0x40(r1)
	lwz      r4, 0x2d8(r31)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, lbl_8051B588@sda21(r2)
	lfs      f0, 0x2dc(r31)
	lfs      f5, 0x34(r1)
	fmuls    f3, f1, f0
	lfs      f4, 0x2c(r1)
	lfs      f1, 0x194(r31)
	lfs      f2, 0x18c(r31)
	fmuls    f5, f5, f3
	lfs      f0, lbl_8051B578@sda21(r2)
	fmuls    f4, f4, f3
	fadds    f28, f28, f5
	fadds    f29, f29, f4
	fsubs    f1, f1, f28
	fsubs    f2, f2, f29
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8027EC44
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f1, lbl_8051B57C@sda21(r2)
	lfs      f0, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	fmuls    f30, f1, f0
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f31, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 1
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_8027ED80

lbl_8027EC44:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f31, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f29, f1
	fsubs    f2, f28, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051B584@sda21(r2)
	lfs      f1, lbl_8051B580@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8027ECE8
	lfs      f0, lbl_8051B540@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8027ECE4
	fmr      f30, f1
	b        lbl_8027ECE8

lbl_8027ECE4:
	fneg     f30, f1

lbl_8027ECE8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x2e4(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f31, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 0
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_8027ED80:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027EDB4
 * Size:	00031C
 */
void Armor::Obj::moveBridgeTop()
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stfd     f27, 0x70(r1)
	psq_st   f27, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r30, r3
	addi     r3, r1, 0x50
	lwz      r4, 0x2d8(r30)
	lwz      r5, 0x218(r4)
	addi     r31, r5, -1
	mr       r5, r31
	bl       getStagePos__Q34Game10ItemBridge4ItemFi
	lfs      f31, 0x50(r1)
	addi     r3, r1, 0x44
	lfs      f30, 0x58(r1)
	lwz      r4, 0x2d8(r30)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x44(r1)
	cmpwi    r31, 0
	lfs      f0, 0x2dc(r30)
	lfs      f2, 0x4c(r1)
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0
	fadds    f31, f31, f1
	fadds    f30, f30, f2
	ble      lbl_8027EE70
	lwz      r4, 0x2d8(r30)
	addi     r3, r1, 0x38
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x38(r1)
	lfs      f0, lbl_8051B574@sda21(r2)
	lfs      f2, 0x40(r1)
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0
	fadds    f31, f31, f1
	fadds    f30, f30, f2
	b        lbl_8027EE98

lbl_8027EE70:
	lwz      r4, 0x2d8(r30)
	addi     r3, r1, 0x2c
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x2c(r1)
	lfs      f0, lbl_8051B58C@sda21(r2)
	lfs      f2, 0x34(r1)
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0
	fadds    f31, f31, f1
	fadds    f30, f30, f2

lbl_8027EE98:
	mr       r4, r30
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r30)
	addi     r3, r1, 8
	lfs      f28, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f29, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f31, f1
	fsubs    f2, f30, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f27, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f27
	bl       angDist__Fff
	fmuls    f29, f1, f29
	lfs      f0, lbl_8051B584@sda21(r2)
	lfs      f1, lbl_8051B580@sda21(r2)
	fmuls    f0, f0, f28
	fabs     f2, f29
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8027EF3C
	lfs      f0, lbl_8051B540@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_8027EF38
	fmr      f29, f1
	b        lbl_8027EF3C

lbl_8027EF38:
	fneg     f29, f1

lbl_8027EF3C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f0, lbl_8051B544@sda21(r2)
	lfs      f1, 0x1fc(r30)
	stfs     f1, 0x1a8(r30)
	lfs      f1, 0x194(r30)
	lfs      f2, 0x18c(r30)
	fsubs    f1, f1, f30
	fsubs    f2, f2, f31
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8027EFA0
	lfs      f0, lbl_8051B540@sda21(r2)
	li       r3, 1
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	b        lbl_8027F090

lbl_8027EFA0:
	lfs      f0, lbl_8051B590@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8027F020
	mr       r3, r30
	lwz      r4, 0xc0(r30)
	lwz      r12, 0(r30)
	lfs      f28, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r30
	lfs      f2, 0x1d4(r30)
	lwz      r12, 0(r30)
	frsp     f27, f1
	lfs      f30, 0x1d8(r30)
	lfs      f0, 0x1dc(r30)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f30, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f27
	li       r3, 1
	frsp     f1, f1
	stfs     f0, 0x1d4(r30)
	fmuls    f0, f28, f1
	stfs     f30, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	b        lbl_8027F090

lbl_8027F020:
	mr       r3, r30
	lwz      r4, 0xc0(r30)
	lwz      r12, 0(r30)
	lfs      f28, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r30
	lfs      f2, 0x1d4(r30)
	lwz      r12, 0(r30)
	frsp     f27, f1
	lfs      f30, 0x1d8(r30)
	lfs      f0, 0x1dc(r30)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f30, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f27
	li       r3, 0
	frsp     f1, f1
	stfs     f0, 0x1d4(r30)
	fmuls    f0, f28, f1
	stfs     f30, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)

lbl_8027F090:
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	psq_l    f27, 120(r1), 0, qr0
	lfd      f27, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0xc4(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027F0D0
 * Size:	00005C
 */
void Armor::Obj::breakTargetBridge()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r5, __vt__Q24Game19InteractBreakBridge@ha
	stw      r0, 0x24(r1)
	addi     r6, r4, __vt__Q24Game11Interaction@l
	addi     r0, r5, __vt__Q24Game19InteractBreakBridge@l
	addi     r4, r1, 8
	lwz      r7, 0xc0(r3)
	lfs      f0, 0x86c(r7)
	stw      r6, 8(r1)
	stw      r3, 0xc(r1)
	stw      r0, 8(r1)
	stfs     f0, 0x10(r1)
	lwz      r3, 0x2d8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027F12C
 * Size:	0000B0
 */
void Armor::Obj::createEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8027F1C4
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx12TYoroiAttack@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx12TYoroiAttack@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x1ec
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_8027F1C4:
	stw      r3, 0x2d4(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027F1DC
 * Size:	000040
 */
void Armor::Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_8051B558@sda21
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x2d4(r31)
	stw      r3, 0x10(r4)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027F21C
 * Size:	000034
 */
void Armor::Obj::createAttackEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2d4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027F250
 * Size:	00008C
 */
void Armor::Obj::createAppearEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80487418@ha
	stw      r0, 0x24(r1)
	addi     r4, r4, lbl_80487418@l
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx8TYoroiAp@ha
	stw      r0, 8(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x1ea
	li       r5, 0x1eb
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TYoroiAp@l
	li       r4, 0
	stw      r3, 0x18(r1)
	addi     r3, r1, 8
	sth      r7, 0xc(r1)
	sth      r5, 0xe(r1)
	stw      r6, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027F2DC
 * Size:	00008C
 */
void Armor::Obj::createDisAppearEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80487418@ha
	stw      r0, 0x24(r1)
	addi     r4, r4, lbl_80487418@l
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx8TYoroiHd@ha
	stw      r0, 8(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x1ee
	li       r5, 0x1ef
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TYoroiHd@l
	li       r4, 0
	stw      r3, 0x18(r1)
	addi     r3, r1, 8
	sth      r7, 0xc(r1)
	sth      r5, 0xe(r1)
	stw      r6, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027F368
 * Size:	000090
 */
void Armor::Obj::createBridgeEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	addi     r4, r2, lbl_8051B558@sda21
	stw      r0, 0x34(r1)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	addi     r4, r4, __vt__Q23efx5TBase@l
	lfs      f0, 0xc(r3)
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r5, __vt__Q23efx3Arg@ha
	stw      r4, 8(r1)
	lis      r3, __vt__Q23efx9TYoroiEat@ha
	addi     r4, r5, __vt__Q23efx3Arg@l
	li       r6, 0x25f
	li       r5, 0
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx9TYoroiEat@l
	addi     r3, r1, 8
	stw      r4, 0x14(r1)
	addi     r4, r1, 0x14
	stfs     f0, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f2, 0x20(r1)
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027F3F8
 * Size:	000030
 */
void Armor::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2d4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027F428
 * Size:	000030
 */
void Armor::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2d4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	8027F458
 * Size:	00009C
 */
TYoroiAttack::~TYoroiAttack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8027F4D8
	lis      r3, __vt__Q23efx12TYoroiAttack@ha
	addi     r3, r3, __vt__Q23efx12TYoroiAttack@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8027F4C8
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8027F4C8
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8027F4C8:
	extsh.   r0, r31
	ble      lbl_8027F4D8
	mr       r3, r30
	bl       __dl__FPv

lbl_8027F4D8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8027F4F4
 * Size:	000008
 */
void Armor::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051B594@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027F4FC
 * Size:	000008
 */
u32 Armor::Obj::getEnemyTypeID() { return 0xF; }

namespace efx {

/*
 * --INFO--
 * Address:	8027F504
 * Size:	000008
 */
TYoroiAttack::@4 @~TYoroiAttack()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx12TYoroiAttackFv
	*/
}
} // namespace efx

} // namespace efx
