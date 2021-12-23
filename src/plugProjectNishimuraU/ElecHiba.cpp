#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80486868
    lbl_80486868:
        .4byte 0x41726744
        .4byte 0x656E6B69
        .4byte 0x48696261
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx12ArgDenkiHiba
    __vt__Q23efx12ArgDenkiHiba:
        .4byte 0
        .4byte 0
        .4byte getName__Q23efx12ArgDenkiHibaFv
    .global __vt__Q23efx10TDenkiPole
    __vt__Q23efx10TDenkiPole:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
        .4byte "fade__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
        .4byte "startDemoDrawOff__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
        .4byte "endDemoDrawOn__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
    .global __vt__Q23efx14TDenkipoleSign
    __vt__Q23efx14TDenkipoleSign:
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
    .global __vt__Q34Game8ElecHiba3Obj
    __vt__Q34Game8ElecHiba3Obj:
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
        .4byte
   setInitialSetting__Q34Game8ElecHiba3ObjFPQ24Game21EnemyInitialParamBase
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
        .4byte
   doGetLifeGaugeParam__Q34Game8ElecHiba3ObjFRQ24Game14LifeGaugeParam .4byte
   throwupItem__Q24Game9EnemyBaseFv .4byte
   "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>" .4byte
   "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>" .4byte
   throwupItemInDeathProcedure__Q24Game9EnemyBaseFv .4byte
   setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere .4byte
   damageCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart .4byte
   pressCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q34Game8ElecHiba3ObjFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q24Game9EnemyBaseFv .4byte
   doFinishStoneState__Q24Game9EnemyBaseFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q34Game8ElecHiba3ObjFv .4byte
   startCarcassMotion__Q24Game9EnemyBaseFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
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

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B0E0
    lbl_8051B0E0:
        .4byte 0x00000000
    .global lbl_8051B0E4
    lbl_8051B0E4:
        .float 1.0
    .global lbl_8051B0E8
    lbl_8051B0E8:
        .4byte 0xBF800000
    .global lbl_8051B0EC
    lbl_8051B0EC:
        .4byte 0x47000000
    .global lbl_8051B0F0
    lbl_8051B0F0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051B0F8
    lbl_8051B0F8:
        .float 0.5
    .global lbl_8051B0FC
    lbl_8051B0FC:
        .4byte 0x41200000
    .global lbl_8051B100
    lbl_8051B100:
        .4byte 0x3FC90FDB
    .global lbl_8051B104
    lbl_8051B104:
        .4byte 0x43A2F983
    .global lbl_8051B108
    lbl_8051B108:
        .4byte 0xC3A2F983
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8026F258
 * Size:	000150
 */
ElecHiba::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8026F298
	addi     r0, r31, 0x304
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x304(r31)
	stw      r0, 0x308(r31)
	stw      r0, 0x30c(r31)

lbl_8026F298:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game8ElecHiba3Obj@ha
	addi     r30, r31, 0x2c8
	addi     r3, r3, __vt__Q34Game8ElecHiba3Obj@l
	addi     r0, r31, 0x304
	stw      r3, 0(r31)
	addi     r4, r3, 0x1b0
	addi     r5, r3, 0x2fc
	mr       r3, r30
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q34Game8ElecHiba8TeamList@ha
	li       r0, 0
	addi     r4, r3, __vt__Q34Game8ElecHiba8TeamList@l
	li       r3, 0x2c
	stw      r4, 0(r30)
	stw      r0, 0x18(r30)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8026F344
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game8ElecHiba14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game8ElecHiba14ProperAnimator@l
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

lbl_8026F344:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8026F378
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game8ElecHiba3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game8ElecHiba3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_8026F378:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
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
 * Address:	8026F3A8
 * Size:	000038
 */
void ElecHiba::Obj::birth(Vector3f&, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	lfs      f0, lbl_8051B0E0@sda21(r2)
	stfs     f0, 0x2c4(r31)
	stw      r31, 0x2e0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026F3E0
 * Size:	000080
 */
void ElecHiba::Obj::setInitialSetting(Game::EnemyInitialParamBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x2d8(r3)
	cmplwi   r0, 0
	beq      lbl_8026F440
	lfs      f1, lbl_8051B0E4@sda21(r2)
	bl
setElecHibaPosition__Q34Game8ElecHiba3ObjFPQ34Game8ElecHiba12InitialParamf lwz
r30, 0x2d8(r30) b        lbl_8026F434

lbl_8026F418:
	lwz      r3, 0x18(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x1c4(r12)
	mtctr    r12
	bctrl
	lwz      r30, 4(r30)

lbl_8026F434:
	cmplwi   r30, 0
	bne      lbl_8026F418
	b        lbl_8026F448

lbl_8026F440:
	lfs      f1, lbl_8051B0E8@sda21(r2)
	bl
setElecHibaPosition__Q34Game8ElecHiba3ObjFPQ34Game8ElecHiba12InitialParamf

lbl_8026F448:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026F460
 * Size:	000144
 */
void ElecHiba::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r0, 0x1e0(r30)
	mr       r3, r30
	rlwinm   r0, r0, 0, 0x14, 0x12
	stw      r0, 0x1e0(r30)
	lwz      r0, 0x1e0(r30)
	rlwinm   r0, r0, 0, 0x19, 0x17
	stw      r0, 0x1e0(r30)
	lwz      r0, 0x1e0(r30)
	rlwinm   r0, r0, 0, 0x18, 0x16
	stw      r0, 0x1e0(r30)
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r30)
	mr       r3, r30
	oris     r0, r0, 0x40
	stw      r0, 0x1e0(r30)
	bl       setEmotionNone__Q24Game9EnemyBaseFv
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r30
	bl       killShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lfs      f0, lbl_8051B0E0@sda21(r2)
	li       r0, 1
	mr       r3, r30
	stfs     f0, 0x2c4(r30)
	stb      r0, 0x2c0(r30)
	bl       setupLodParms__Q34Game8ElecHiba3ObjFv
	lwz      r0, 0x2d8(r30)
	cmplwi   r0, 0
	beq      lbl_8026F514
	mr       r31, r0
	b        lbl_8026F50C

lbl_8026F4FC:
	lwz      r3, 0x18(r31)
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r31, 4(r31)

lbl_8026F50C:
	cmplwi   r31, 0
	bne      lbl_8026F4FC

lbl_8026F514:
	mr       r3, r30
	bl       setVersusHibaOnOff__Q34Game8ElecHiba3ObjFv
	li       r0, 0
	mr       r3, r30
	stw      r0, 0x2f8(r30)
	bl       resetAttrHitCount__Q34Game8ElecHiba3ObjFv
	lwz      r3, 0xc0(r30)
	lfs      f31, 0x81c(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	mr       r4, r30
	lfd      f2, lbl_8051B0F0@sda21(r2)
	addi     r6, r1, 8
	stw      r0, 0x10(r1)
	li       r5, 1
	lfs      f0, lbl_8051B0EC@sda21(r2)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	stfs     f0, 8(r1)
	lwz      r3, 0x2bc(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026F5A4
 * Size:	000040
 */
void ElecHiba::Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r0, 0x2d8(r3)
	cmplwi   r0, 0
	beq      lbl_8026F5D4
	lwz      r3, 0x2bc(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8026F5D4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026F5E4
 * Size:	000004
 */
void ElecHiba::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8026F5E8
 * Size:	000020
 */
void ElecHiba::Obj::doDebugDraw(Graphics&)
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
 * Address:	8026F608
 * Size:	00004C
 */
void ElecHiba::Obj::setFSM(Game::ElecHiba::FSM*)
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
 * Address:	8026F654
 * Size:	000038
 */
void ElecHiba::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	lfs      f0, 0x18c(r3)
	lfs      f1, lbl_8051B0E0@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f0, lbl_8051B0E4@sda21(r2)
	lfs      f2, 0x190(r3)
	stfs     f2, 4(r4)
	lfs      f2, 0x194(r3)
	stfs     f2, 8(r4)
	stfs     f1, 0xc(r4)
	stfs     f0, 0x10(r4)
	stfs     f1, 0x14(r4)
	stfs     f0, 0x18(r4)
	stfs     f0, 0x1c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026F68C
 * Size:	0000CC
 */
void ElecHiba::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	or.      r31, r4, r4
	stw      r30, 0x10(r1)
	mr       r30, r3
	beq      lbl_8026F738
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8026F738
	lbz      r0, 0x2f4(r30)
	cmplwi   r0, 0
	beq      lbl_8026F724
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026F730
	lwz      r3, 0x2d4(r30)
	cmplwi   r3, 0
	beq      lbl_8026F714
	lwz      r3, 0x18(r3)
	mr       r4, r31
	bl       addAttrAttackCount__Q34Game8ElecHiba3ObjFPQ24Game4Piki
	b        lbl_8026F730

lbl_8026F714:
	mr       r3, r30
	mr       r4, r31
	bl       addAttrAttackCount__Q34Game8ElecHiba3ObjFPQ24Game4Piki
	b        lbl_8026F730

lbl_8026F724:
	fmr      f1, f31
	mr       r3, r30
	bl       addDamageMyself__Q34Game8ElecHiba3ObjFf

lbl_8026F730:
	li       r3, 1
	b        lbl_8026F73C

lbl_8026F738:
	li       r3, 0

lbl_8026F73C:
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026F758
 * Size:	000030
 */
void ElecHiba::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x278(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026F788
 * Size:	000030
 */
void ElecHiba::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x278(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026F7B8
 * Size:	000034
 */
void ElecHiba::Obj::bombCallBack(Game::Creature*, Vector3f&, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x278(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026F7EC
 * Size:	000100
 */
void ElecHiba::Obj::doGetLifeGaugeParam(Game::LifeGaugeParam&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	bl       getChildObjPtr__Q34Game8ElecHiba3ObjFv
	cmplwi   r3, 0
	beq      lbl_8026F8CC
	mr       r4, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	lfs      f2, lbl_8051B0F8@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f0, lbl_8051B0FC@sda21(r2)
	lfs      f1, 0xc(r1)
	stfs     f1, 4(r31)
	lfs      f1, 0x10(r1)
	stfs     f1, 8(r31)
	lfs      f3, 0(r31)
	lfs      f1, 0x18c(r30)
	fadds    f1, f3, f1
	stfs     f1, 0(r31)
	lfs      f3, 4(r31)
	lfs      f1, 0x190(r30)
	fadds    f1, f3, f1
	stfs     f1, 4(r31)
	lfs      f3, 8(r31)
	lfs      f1, 0x194(r30)
	fadds    f1, f3, f1
	stfs     f1, 8(r31)
	lfs      f1, 0(r31)
	fmuls    f1, f1, f2
	stfs     f1, 0(r31)
	lfs      f1, 4(r31)
	fmuls    f1, f1, f2
	stfs     f1, 4(r31)
	lfs      f1, 8(r31)
	fmuls    f1, f1, f2
	stfs     f1, 8(r31)
	lwz      r3, 0xc0(r30)
	lfs      f2, 4(r31)
	lfs      f1, 0x12c(r3)
	fadds    f1, f2, f1
	stfs     f1, 4(r31)
	lfs      f2, 0x200(r30)
	lfs      f1, 0x204(r30)
	fdivs    f1, f2, f1
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	b        lbl_8026F8D4

lbl_8026F8CC:
	li       r0, 0
	stb      r0, 0x14(r31)

lbl_8026F8D4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026F8EC
 * Size:	00004C
 */
bool ElecHiba::Obj::injure()
{
	/*
	lwz      r0, 0x1e0(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8026F91C
	lfs      f2, 0x200(r3)
	lfs      f1, 0x208(r3)
	lfs      f0, lbl_8051B0E0@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x200(r3)
	lfs      f1, 0x200(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_8026F91C
	stfs     f0, 0x200(r3)

lbl_8026F91C:
	lfs      f0, lbl_8051B0E0@sda21(r2)
	stfs     f0, 0x208(r3)
	lwz      r0, 0x1e0(r3)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stw      r0, 0x1e0(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026F938
 * Size:	00001C
 */
void ElecHiba::Obj::getChildObjPtr()
{
	/*
	lwz      r3, 0x2d8(r3)
	cmplwi   r3, 0
	beq      lbl_8026F94C
	lwz      r3, 0x18(r3)
	blr

lbl_8026F94C:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026F954
 * Size:	000170
 */
void ElecHiba::Obj::setElecHibaPosition(Game::ElecHiba::InitialParam*, float)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lwz      r12, 0(r3)
	mr       r30, r3
	fmr      f28, f1
	mr       r31, r4
	lwz      r12, 0x64(r12)
	lfs      f31, 0x2e4(r3)
	lfs      f30, 0x2e8(r3)
	lfs      f29, 0x2ec(r3)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051B100@sda21(r2)
	lfs      f2, 0(r31)
	fadds    f4, f0, f1
	lfs      f1, lbl_8051B0F8@sda21(r2)
	lfs      f0, lbl_8051B0E0@sda21(r2)
	fmuls    f3, f2, f1
	fmr      f1, f4
	fcmpo    cr0, f4, f0
	bge      lbl_8026F9D8
	fneg     f1, f4

lbl_8026F9D8:
	lfs      f2, lbl_8051B104@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051B0E0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f4, f0
	fmuls    f3, f28, f3
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f1, f3, f0, f29
	bge      lbl_8026FA38
	lfs      f0, lbl_8051B108@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8026FA50

lbl_8026FA38:
	fmuls    f0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8026FA50:
	fmadds   f0, f3, f0, f31
	stfs     f30, 0xc(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 8
	stfs     f1, 0x10(r1)
	stfs     f0, 8(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0xc(r1)
	mr       r3, r30
	addi     r4, r1, 8
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026FAC4
 * Size:	0005C8
 */
void ElecHiba::Obj::interactDenkiAttack(Vector3f&)
{
	/*
	stwu     r1, -0x210(r1)
	mflr     r0
	stw      r0, 0x214(r1)
	stfd     f31, 0x200(r1)
	psq_st   f31, 520(r1), 0, qr0
	stfd     f30, 0x1f0(r1)
	psq_st   f30, 504(r1), 0, qr0
	stfd     f29, 0x1e0(r1)
	psq_st   f29, 488(r1), 0, qr0
	stfd     f28, 0x1d0(r1)
	psq_st   f28, 472(r1), 0, qr0
	stfd     f27, 0x1c0(r1)
	psq_st   f27, 456(r1), 0, qr0
	stfd     f26, 0x1b0(r1)
	psq_st   f26, 440(r1), 0, qr0
	stfd     f25, 0x1a0(r1)
	psq_st   f25, 424(r1), 0, qr0
	stfd     f24, 0x190(r1)
	psq_st   f24, 408(r1), 0, qr0
	stfd     f23, 0x180(r1)
	psq_st   f23, 392(r1), 0, qr0
	stfd     f22, 0x170(r1)
	psq_st   f22, 376(r1), 0, qr0
	stfd     f21, 0x160(r1)
	psq_st   f21, 360(r1), 0, qr0
	stfd     f20, 0x150(r1)
	psq_st   f20, 344(r1), 0, qr0
	stfd     f19, 0x140(r1)
	psq_st   f19, 328(r1), 0, qr0
	stfd     f18, 0x130(r1)
	psq_st   f18, 312(r1), 0, qr0
	stfd     f17, 0x120(r1)
	psq_st   f17, 296(r1), 0, qr0
	stfd     f16, 0x110(r1)
	psq_st   f16, 280(r1), 0, qr0
	stfd     f15, 0x100(r1)
	psq_st   f15, 264(r1), 0, qr0
	stfd     f14, 0xf0(r1)
	psq_st   f14, 248(r1), 0, qr0
	stw      r31, 0xec(r1)
	stw      r30, 0xe8(r1)
	mr       r30, r3
	lfs      f8, 8(r4)
	lfs      f31, 0x194(r3)
	lfs      f9, 4(r4)
	lfs      f3, 0x190(r3)
	fadds    f2, f8, f31
	lfs      f4, lbl_8051B0F8@sda21(r2)
	fadds    f1, f9, f3
	lfs      f7, 0x1fc(r3)
	lfs      f0, lbl_8051B0E0@sda21(r2)
	fmuls    f2, f4, f2
	lfs      f10, 0(r4)
	fmr      f5, f7
	lfs      f30, 0x18c(r3)
	fcmpo    cr0, f7, f0
	fmuls    f1, f4, f1
	fadds    f0, f10, f30
	fmuls    f0, f4, f0
	bge      lbl_8026FBB8
	fneg     f5, f7

lbl_8026FBB8:
	lfs      f6, lbl_8051B104@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f4, lbl_8051B0E0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f5, f5, f6
	fcmpo    cr0, f7, f4
	fctiwz   f4, f5
	stfd     f4, 0xc0(r1)
	lwz      r0, 0xc4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f24, 4(r3)
	bge      lbl_8026FC10
	lfs      f4, lbl_8051B108@sda21(r2)
	fmuls    f4, f7, f4
	fctiwz   f4, f4
	stfd     f4, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f4, r4, r0
	fneg     f23, f4
	b        lbl_8026FC28

lbl_8026FC10:
	fmuls    f4, f7, f6
	fctiwz   f4, f4
	stfd     f4, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f23, r4, r0

lbl_8026FC28:
	fsubs    f5, f9, f3
	lfs      f7, lbl_8051B0E0@sda21(r2)
	fsubs    f6, f8, f31
	fsubs    f4, f10, f30
	fmuls    f8, f5, f5
	fmuls    f9, f6, f6
	fmr      f22, f4
	fmadds   f8, f4, f4, f8
	fmr      f21, f5
	fmr      f20, f6
	fadds    f8, f9, f8
	fcmpo    cr0, f8, f7
	ble      lbl_8026FC6C
	ble      lbl_8026FC70
	frsqrte  f7, f8
	fmuls    f8, f7, f8
	b        lbl_8026FC70

lbl_8026FC6C:
	fmr      f8, f7

lbl_8026FC70:
	lfs      f7, lbl_8051B0E0@sda21(r2)
	fcmpo    cr0, f8, f7
	ble      lbl_8026FC90
	lfs      f7, lbl_8051B0E4@sda21(r2)
	fdivs    f7, f7, f8
	fmuls    f22, f22, f7
	fmuls    f21, f21, f7
	fmuls    f20, f20, f7

lbl_8026FC90:
	fmuls    f8, f23, f20
	lfs      f10, lbl_8051B0E0@sda21(r2)
	fmuls    f9, f24, f21
	fmuls    f7, f10, f22
	fmsubs   f18, f24, f22, f8
	fmsubs   f19, f10, f20, f9
	fmsubs   f17, f23, f21, f7
	fmuls    f7, f18, f18
	fmuls    f8, f17, f17
	fmadds   f7, f19, f19, f7
	fadds    f8, f8, f7
	fcmpo    cr0, f8, f10
	ble      lbl_8026FCD4
	ble      lbl_8026FCD8
	frsqrte  f7, f8
	fmuls    f8, f7, f8
	b        lbl_8026FCD8

lbl_8026FCD4:
	fmr      f8, f10

lbl_8026FCD8:
	lfs      f7, lbl_8051B0E0@sda21(r2)
	fcmpo    cr0, f8, f7
	ble      lbl_8026FCF8
	lfs      f7, lbl_8051B0E4@sda21(r2)
	fdivs    f7, f7, f8
	fmuls    f19, f19, f7
	fmuls    f18, f18, f7
	fmuls    f17, f17, f7

lbl_8026FCF8:
	fmuls    f7, f5, f5
	lfs      f5, lbl_8051B0E0@sda21(r2)
	fmuls    f6, f6, f6
	fmadds   f4, f4, f4, f7
	fadds    f6, f6, f4
	fcmpo    cr0, f6, f5
	ble      lbl_8026FD24
	ble      lbl_8026FD28
	frsqrte  f4, f6
	fmuls    f6, f4, f6
	b        lbl_8026FD28

lbl_8026FD24:
	fmr      f6, f5

lbl_8026FD28:
	lwz      r5, 0xc0(r30)
	addi     r3, r1, 0x54
	lfs      f4, lbl_8051B0F8@sda21(r2)
	addi     r4, r1, 0x2c
	lfs      f7, 0x564(r5)
	lfs      f5, 0x44c(r5)
	fadds    f29, f6, f7
	lfs      f6, 0x58c(r5)
	lfs      f26, 0x474(r5)
	fneg     f28, f7
	fadds    f3, f3, f6
	stfs     f0, 0x2c(r1)
	fmuls    f25, f24, f5
	stfs     f3, 0xd8(r1)
	fsubs    f3, f29, f28
	fmuls    f27, f23, f5
	stfs     f1, 0x30(r1)
	fmuls    f0, f4, f3
	stfs     f2, 0x34(r1)
	stfs     f0, 0x38(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x74
	stb      r0, 0x70(r1)
	addi     r4, r1, 0x54
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x74
	bl       first__Q24Game12CellIteratorFv
	b        lbl_8026FFD4

lbl_8026FD9C:
	addi     r3, r1, 0x74
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026FFCC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8026FDF8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026FFCC

lbl_8026FDF8:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0xd8(r1)
	lfs      f2, 8(r1)
	fsubs    f4, f1, f0
	lfs      f1, lbl_8051B0E0@sda21(r2)
	lfs      f3, 0x10(r1)
	fsubs    f2, f2, f30
	fmuls    f0, f1, f4
	fsubs    f3, f3, f31
	fmadds   f0, f23, f2, f0
	fmadds   f5, f24, f3, f0
	fcmpo    cr0, f5, f1
	ble      lbl_8026FE4C
	fmr      f6, f5
	b        lbl_8026FE50

lbl_8026FE4C:
	fneg     f6, f5

lbl_8026FE50:
	lwz      r3, 0xc0(r30)
	lfs      f0, 0x5b4(r3)
	fcmpo    cr0, f6, f0
	bge      lbl_8026FFCC
	fmuls    f0, f21, f4
	fmadds   f0, f22, f2, f0
	fmadds   f0, f20, f3, f0
	fcmpo    cr0, f0, f29
	bge      lbl_8026FFCC
	fcmpo    cr0, f0, f28
	ble      lbl_8026FFCC
	fmuls    f1, f18, f4
	lfs      f0, lbl_8051B0E0@sda21(r2)
	fmadds   f1, f19, f2, f1
	fmadds   f1, f17, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8026FE98
	b        lbl_8026FE9C

lbl_8026FE98:
	fneg     f1, f1

lbl_8026FE9C:
	lfs      f0, 0x5dc(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_8026FFCC
	lwz      r0, 0x2f8(r30)
	cmpwi    r0, 0
	bne      lbl_8026FF40
	fdivs    f0, f5, f6
	mr       r3, r31
	lwz      r12, 0(r31)
	lfs      f16, lbl_8051B0E0@sda21(r2)
	lwz      r12, 0x18(r12)
	fmuls    f14, f0, f25
	fmuls    f15, f0, f27
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026FEE4
	fmr      f16, f26

lbl_8026FEE4:
	lwz      r6, 0xc0(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	lis      r3, __vt__Q24Game13InteractDenki@ha
	lfs      f0, 0x604(r6)
	addi     r6, r5, __vt__Q24Game11Interaction@l
	addi     r5, r4, __vt__Q24Game12InteractWind@l
	addi     r0, r3, __vt__Q24Game13InteractDenki@l
	stw      r6, 0x3c(r1)
	mr       r3, r31
	addi     r4, r1, 0x3c
	stw      r5, 0x3c(r1)
	stw      r30, 0x40(r1)
	stfs     f0, 0x44(r1)
	stfs     f15, 0x48(r1)
	stfs     f16, 0x4c(r1)
	stfs     f14, 0x50(r1)
	stw      r0, 0x3c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_8026FFCC

lbl_8026FF40:
	cmpwi    r0, 1
	bne      lbl_8026FF88
	lfs      f0, 0x604(r3)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game12InteractFire@ha
	stw      r0, 0x20(r1)
	addi     r0, r3, __vt__Q24Game12InteractFire@l
	mr       r3, r31
	addi     r4, r1, 0x20
	stw      r30, 0x24(r1)
	stw      r0, 0x20(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_8026FFCC

lbl_8026FF88:
	cmpwi    r0, 2
	bne      lbl_8026FFCC
	lfs      f0, 0x604(r3)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game14InteractBubble@ha
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q24Game14InteractBubble@l
	mr       r3, r31
	addi     r4, r1, 0x14
	stw      r30, 0x18(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8026FFCC:
	addi     r3, r1, 0x74
	bl       next__Q24Game12CellIteratorFv

lbl_8026FFD4:
	addi     r3, r1, 0x74
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026FD9C
	psq_l    f31, 520(r1), 0, qr0
	lfd      f31, 0x200(r1)
	psq_l    f30, 504(r1), 0, qr0
	lfd      f30, 0x1f0(r1)
	psq_l    f29, 488(r1), 0, qr0
	lfd      f29, 0x1e0(r1)
	psq_l    f28, 472(r1), 0, qr0
	lfd      f28, 0x1d0(r1)
	psq_l    f27, 456(r1), 0, qr0
	lfd      f27, 0x1c0(r1)
	psq_l    f26, 440(r1), 0, qr0
	lfd      f26, 0x1b0(r1)
	psq_l    f25, 424(r1), 0, qr0
	lfd      f25, 0x1a0(r1)
	psq_l    f24, 408(r1), 0, qr0
	lfd      f24, 0x190(r1)
	psq_l    f23, 392(r1), 0, qr0
	lfd      f23, 0x180(r1)
	psq_l    f22, 376(r1), 0, qr0
	lfd      f22, 0x170(r1)
	psq_l    f21, 360(r1), 0, qr0
	lfd      f21, 0x160(r1)
	psq_l    f20, 344(r1), 0, qr0
	lfd      f20, 0x150(r1)
	psq_l    f19, 328(r1), 0, qr0
	lfd      f19, 0x140(r1)
	psq_l    f18, 312(r1), 0, qr0
	lfd      f18, 0x130(r1)
	psq_l    f17, 296(r1), 0, qr0
	lfd      f17, 0x120(r1)
	psq_l    f16, 280(r1), 0, qr0
	lfd      f16, 0x110(r1)
	psq_l    f15, 264(r1), 0, qr0
	lfd      f15, 0x100(r1)
	psq_l    f14, 248(r1), 0, qr0
	lfd      f14, 0xf0(r1)
	lwz      r31, 0xec(r1)
	lwz      r0, 0x214(r1)
	lwz      r30, 0xe8(r1)
	mtlr     r0
	addi     r1, r1, 0x210
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027008C
 * Size:	00004C
 */
void ElecHiba::Obj::addDamageMyself(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x1e0(r3)
	clrlwi.  r0, r4, 0x1f
	bne      lbl_802700C8
	ori      r0, r4, 2
	stw      r0, 0x1e0(r3)
	lwz      r4, 0x2d4(r3)
	cmplwi   r4, 0
	beq      lbl_802700C4
	lwz      r3, 0x18(r4)
	bl       damageIncrement__Q34Game8ElecHiba3ObjFf
	b        lbl_802700C8

lbl_802700C4:
	bl       damageIncrement__Q34Game8ElecHiba3ObjFf

lbl_802700C8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802700D8
 * Size:	00002C
 */
void ElecHiba::Obj::damageIncrement(float)
{
	/*
	lfs      f0, 0x208(r3)
	fadds    f0, f0, f1
	stfs     f0, 0x208(r3)
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beqlr
	lfs      f1, 0x20c(r3)
	lfs      f0, lbl_8051B0E4@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x20c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80270104
 * Size:	000024
 */
void ElecHiba::Obj::setupLodParms()
{
	/*
	lwz      r4, 0xc0(r3)
	li       r0, 0
	lfs      f0, 0x8bc(r4)
	stfs     f0, 0x264(r3)
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x8e4(r4)
	stfs     f0, 0x268(r3)
	stb      r0, 0x26c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80270128
 * Size:	000038
 */
void ElecHiba::Obj::updateEfxLod()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x2f0(r3)
	cmplwi   r4, 0
	beq      lbl_80270150
	lbz      r0, 0xd8(r3)
	mr       r3, r4
	clrlwi   r4, r0, 0x1e
	bl       setRateLOD__Q23efx13TDenkiHibaMgrFi

lbl_80270150:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80270160
 * Size:	0000DC
 */
void ElecHiba::Obj::createEffect(bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi.  r0, r4, 0x18
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	beq      lbl_80270218
	li       r3, 0xb8
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80270210
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx13TDenkiHibaMgr@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	addi     r29, r30, 4
	stw      r0, 0(r30)
	addi     r0, r3, __vt__Q23efx13TDenkiHibaMgr@l
	li       r4, 0x2d
	mr       r3, r29
	stw      r0, 0(r30)
	li       r5, 0x2e
	li       r6, 0x2f
	bl       __ct__Q23efx9TForever3FUsUsUs
	lis      r3, __vt__Q23efx10TDenkiHiba@ha
	lis      r4, __ct__Q23efx10TDenkiPoleFv@ha
	addi     r0, r3, __vt__Q23efx10TDenkiHiba@l
	li       r6, 0x24
	lis      r3, __dt__Q23efx10TDenkiPoleFv@ha
	stw      r0, 0(r29)
	addi     r5, r3, __dt__Q23efx10TDenkiPoleFv@l
	addi     r4, r4, __ct__Q23efx10TDenkiPoleFv@l
	addi     r3, r30, 0x38
	li       r7, 2
	bl       __construct_array
	lis      r3, __ct__Q23efx14TDenkipoleSignFv@ha
	lis      r5, __dt__Q23efx14TDenkipoleSignFv@ha
	addi     r4, r3, __ct__Q23efx14TDenkipoleSignFv@l
	li       r6, 0x10
	addi     r3, r30, 0x80
	addi     r5, r5, __dt__Q23efx14TDenkipoleSignFv@l
	li       r7, 2
	bl       __construct_array

lbl_80270210:
	stw      r30, 0x2f0(r31)
	b        lbl_80270220

lbl_80270218:
	li       r0, 0
	stw      r0, 0x2f0(r31)

lbl_80270220:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	8027023C
 * Size:	00009C
 */
TDenkipoleSign::~TDenkipoleSign()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802702BC
	lis      r3, __vt__Q23efx14TDenkipoleSign@ha
	addi     r3, r3, __vt__Q23efx14TDenkipoleSign@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802702AC
	lis      r3, __vt__Q23efx8TForever@ha
	addi     r3, r3, __vt__Q23efx8TForever@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802702AC
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802702AC:
	extsh.   r0, r31
	ble      lbl_802702BC
	mr       r3, r30
	bl       __dl__FPv

lbl_802702BC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802702D8
 * Size:	00006C
 */
TDenkipoleSign::TDenkipoleSign()
{
	/*
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__Q23efx5TSync@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r6, __vt__18JPAEmitterCallBack@ha
	stw      r0, 0(r3)
	addi     r0, r6, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx8TForever@ha
	addi     r5, r5, __vt__Q23efx5TSync@l
	stw      r0, 4(r3)
	addi     r6, r4, __vt__Q23efx8TForever@l
	lis      r4, __vt__Q23efx14TDenkipoleSign@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	li       r8, 0
	li       r7, 0x32
	addi     r5, r6, 0x14
	stw      r0, 4(r3)
	addi     r4, r4, __vt__Q23efx14TDenkipoleSign@l
	addi     r0, r4, 0x14
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r5, 4(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80270344
 * Size:	000090
 */
TDenkiPole::~TDenkiPole()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802703B8
	lis      r3, __vt__Q23efx10TDenkiPole@ha
	addi     r0, r3, __vt__Q23efx10TDenkiPole@l
	stw      r0, 0(r30)
	beq      lbl_802703A8
	lis      r3, __vt__Q23efx9TForever2@ha
	addi     r0, r3, __vt__Q23efx9TForever2@l
	stw      r0, 0(r30)
	beq      lbl_802703A8
	lis      r3, "__vt__Q23efx28TSyncGroup2<Q23efx8TForever>"@ha
	lis      r4, __dt__Q23efx8TForeverFv@ha
	addi     r0, r3, "__vt__Q23efx28TSyncGroup2<Q23efx8TForever>"@l
	li       r5, 0x10
	stw      r0, 0(r30)
	addi     r3, r30, 4
	addi     r4, r4, __dt__Q23efx8TForeverFv@l
	li       r6, 2
	bl       __destroy_arr

lbl_802703A8:
	extsh.   r0, r31
	ble      lbl_802703B8
	mr       r3, r30
	bl       __dl__FPv

lbl_802703B8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802703D4
 * Size:	000044
 */
TDenkiPole::TDenkiPole()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x30
	li       r5, 0x31
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q23efx9TForever2FUsUs
	lis      r4, __vt__Q23efx10TDenkiPole@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q23efx10TDenkiPole@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	80270418
 * Size:	000110
 */
void ElecHiba::Obj::startChargeEffect(Game::Creature*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r3
	lwz      r0, 0x2f0(r3)
	cmplwi   r0, 0
	beq      lbl_80270514
	lwz      r12, 0(r4)
	addi     r3, r1, 0x20
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lfs      f1, 0x24(r1)
	lis      r3, "zero__10Vector3<f>"@ha
	lfs      f0, 0x28(r1)
	addi     r5, r3, "zero__10Vector3<f>"@l
	stfs     f2, 0x2c(r1)
	lis      r3, __vt__Q23efx12ArgDenkiHiba@ha
	lwz      r8, 0x18c(r31)
	addi     r6, r4, __vt__Q23efx3Arg@l
	stfs     f1, 0x30(r1)
	addi     r0, r3, __vt__Q23efx12ArgDenkiHiba@l
	lwz      r11, 0x2c(r1)
	addi     r4, r1, 0x38
	stfs     f0, 0x34(r1)
	lwz      r10, 0x30(r1)
	lwz      r9, 0x34(r1)
	lwz      r7, 0x190(r31)
	lwz      r3, 0x194(r31)
	stw      r11, 8(r1)
	lfs      f8, 0(r5)
	stw      r10, 0xc(r1)
	lfs      f7, 4(r5)
	stw      r9, 0x10(r1)
	lfs      f6, 8(r5)
	stw      r8, 0x14(r1)
	lfs      f2, 8(r1)
	stw      r7, 0x18(r1)
	lfs      f5, 0x14(r1)
	stw      r3, 0x1c(r1)
	lfs      f4, 0x18(r1)
	stw      r6, 0x38(r1)
	lfs      f3, 0x1c(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f8, 0x3c(r1)
	stfs     f7, 0x40(r1)
	stfs     f6, 0x44(r1)
	stw      r0, 0x38(r1)
	stfs     f5, 0x48(r1)
	stfs     f4, 0x4c(r1)
	stfs     f3, 0x50(r1)
	stfs     f2, 0x54(r1)
	stfs     f1, 0x58(r1)
	stfs     f0, 0x5c(r1)
	lwz      r3, 0x2f0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80270514:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80270528
 * Size:	000038
 */
void ElecHiba::Obj::finishChargeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f0(r3)
	cmplwi   r3, 0
	beq      lbl_80270550
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80270550:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80270560
 * Size:	000070
 */
void ElecHiba::Obj::startDisChargeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x2f0(r3)
	cmplwi   r0, 0
	beq      lbl_802705C0
	lwz      r3, 0x2f8(r3)
	cmpwi    r3, 0
	bne      lbl_80270594
	mr       r3, r0
	li       r4, 0
	bl       createHiba__Q23efx13TDenkiHibaMgrFi
	b        lbl_802705C0

lbl_80270594:
	cmpwi    r3, 1
	bne      lbl_802705AC
	mr       r3, r0
	li       r4, 1
	bl       createHiba__Q23efx13TDenkiHibaMgrFi
	b        lbl_802705C0

lbl_802705AC:
	cmpwi    r3, 2
	bne      lbl_802705C0
	mr       r3, r0
	li       r4, 2
	bl       createHiba__Q23efx13TDenkiHibaMgrFi

lbl_802705C0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802705D0
 * Size:	000038
 */
void ElecHiba::Obj::finishDisChargeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f0(r3)
	cmplwi   r3, 0
	beq      lbl_802705F8
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_802705F8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80270608
 * Size:	000044
 */
void ElecHiba::Obj::generatorKill()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0xc4(r3)
	cmplwi   r3, 0
	beq      lbl_80270638
	mr       r4, r31
	bl       informDeath__Q24Game9GeneratorFPQ24Game8Creature
	li       r0, 0
	stw      r0, 0xc4(r31)

lbl_80270638:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027064C
 * Size:	00006C
 */
void ElecHiba::Obj::setVersusHibaOnOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_8027069C
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	bne      lbl_8027069C
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8027069C
	bl       isVersusHiba__Q34Game4Cave10RandMapMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027069C
	li       r0, 1
	stb      r0, 0x2f4(r31)
	b        lbl_802706A4

lbl_8027069C:
	li       r0, 0
	stb      r0, 0x2f4(r31)

lbl_802706A4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802706B8
 * Size:	00002C
 */
void ElecHiba::Obj::setVersusHibaType()
{
	/*
	lwz      r4, 0x2fc(r3)
	lwz      r0, 0x300(r3)
	cmpw     r4, r0
	beqlr
	ble      lbl_802706D8
	li       r0, 1
	stw      r0, 0x2f8(r3)
	blr

lbl_802706D8:
	li       r0, 2
	stw      r0, 0x2f8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802706E4
 * Size:	000010
 */
void ElecHiba::Obj::resetAttrHitCount()
{
	/*
	li       r0, 0
	stw      r0, 0x2fc(r3)
	stw      r0, 0x300(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802706F4
 * Size:	000070
 */
void ElecHiba::Obj::addAttrAttackCount(Game::Piki*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x2b8(r4)
	cmpwi    r0, 1
	bne      lbl_80270724
	lwz      r3, 0x2fc(r31)
	addi     r0, r3, 1
	stw      r0, 0x2fc(r31)
	b        lbl_80270738

lbl_80270724:
	cmpwi    r0, 0
	bne      lbl_80270738
	lwz      r3, 0x300(r31)
	addi     r0, r3, 1
	stw      r0, 0x300(r31)

lbl_80270738:
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	bne      lbl_80270750
	lfs      f0, lbl_8051B0E0@sda21(r2)
	stfs     f0, 0x2c4(r31)

lbl_80270750:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80270764
 * Size:	000040
 */
void ElecHiba::Obj::isWaitFinish()
{
	/*
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2c4(r3)
	lfs      f0, 0x86c(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_8027079C
	lwz      r0, 0x2f8(r3)
	cmpwi    r0, 0
	bne      lbl_80270794
	lwz      r4, 0x2fc(r3)
	lwz      r0, 0x300(r3)
	cmpw     r4, r0
	beq      lbl_8027079C

lbl_80270794:
	li       r3, 1
	blr

lbl_8027079C:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802707A4
 * Size:	000058
 */
void ElecHiba::Obj::isAttackFinish()
{
	/*
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2c4(r3)
	lfs      f0, 0x86c(r4)
	fcmpo    cr0, f1, f0
	bgt      lbl_802707EC
	lwz      r5, 0x2f8(r3)
	cmpwi    r5, 1
	bne      lbl_802707D4
	lwz      r4, 0x300(r3)
	lwz      r0, 0x2fc(r3)
	cmpw     r4, r0
	bgt      lbl_802707EC

lbl_802707D4:
	cmpwi    r5, 2
	bne      lbl_802707F4
	lwz      r4, 0x2fc(r3)
	lwz      r0, 0x300(r3)
	cmpw     r4, r0
	ble      lbl_802707F4

lbl_802707EC:
	li       r3, 1
	blr

lbl_802707F4:
	li       r3, 0
	blr
	*/
}

} // namespace efx

namespace efx {

/*
 * --INFO--
 * Address:	802707FC
 * Size:	00000C
 */
void ArgDenkiHiba::getName()
{
	/*
	lis      r3, lbl_80486868@ha
	addi     r3, r3, lbl_80486868@l
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	80270808
 * Size:	000004
 */
void ElecHiba::Obj::doSimulation(float) { }

/*
 * --INFO--
 * Address:	8027080C
 * Size:	000004
 */
void ElecHiba::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	80270810
 * Size:	000004
 */
void ElecHiba::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	80270814
 * Size:	000008
 */
void ElecHiba::Obj::isLivingThing()
{
	/*
	lbz      r3, 0x2c0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027081C
 * Size:	000004
 */
void ElecHiba::Obj::lifeRecover() { }

/*
 * --INFO--
 * Address:	80270820
 * Size:	000014
 */
void EnemyBase::@772 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -772
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80270834
 * Size:	000014
 */
void EnemyBase::@772 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -772
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80270848
 * Size:	000014
 */
void EnemyBase::@772 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -772
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8027085C
 * Size:	000014
 */
void EnemyBase::@772 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -772
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80270870
 * Size:	000014
 */
void EnemyBase::@772 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -772
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80270884
 * Size:	000014
 */
void EnemyBase::@772 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -772
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}

namespace efx {

	/*
	 * --INFO--
	 * Address:	80270898
	 * Size:	000008
	 */
	TDenkipoleSign::@4 @~TDenkipoleSign()
	{
		/*
	addi     r3, r3, -4
	b        __dt__Q23efx14TDenkipoleSignFv
		*/
	}
} // namespace efx

} // namespace efx
