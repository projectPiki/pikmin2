#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx13TDnkmsHoudenB
    __vt__Q23efx13TDnkmsHoudenB:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx13TDnkmsHoudenBFv"
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
        .4byte __dt__Q23efx13TDnkmsHoudenBFv
    .global __vt__Q23efx13TDnkmsHoudenA
    __vt__Q23efx13TDnkmsHoudenA:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx13TDnkmsHoudenAFv"
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
        .4byte __dt__Q23efx13TDnkmsHoudenAFv
    .global __vt__Q34Game7ElecBug3Obj
    __vt__Q34Game7ElecBug3Obj:
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
        .4byte onInit__Q34Game7ElecBug3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game7ElecBug3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game7ElecBug3ObjFR8Graphics
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
        .4byte collisionCallback__Q34Game7ElecBug3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game7ElecBug3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game7ElecBug3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game7ElecBug3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game7ElecBug3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game7ElecBug3ObjFR8Graphics .4byte
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
        .4byte getEnemyTypeID__Q34Game7ElecBug3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q34Game7ElecBug3ObjFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game7ElecBug3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q34Game7ElecBug3ObjFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game7ElecBug3ObjFv .4byte
   doFinishStoneState__Q34Game7ElecBug3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game7ElecBug3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q34Game7ElecBug3ObjFv .4byte
   doFinishWaitingBirthTypeDrop__Q34Game7ElecBug3ObjFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game7ElecBug3ObjFv .4byte
   doStartMovie__Q34Game7ElecBug3ObjFv .4byte doEndMovie__Q34Game7ElecBug3ObjFv
        .4byte setFSM__Q34Game7ElecBug3ObjFPQ34Game7ElecBug3FSM
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
    .global lbl_8051B4E0
    lbl_8051B4E0:
        .4byte 0x41200000
    .global lbl_8051B4E4
    lbl_8051B4E4:
        .4byte 0x47000000
    .global lbl_8051B4E8
    lbl_8051B4E8:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_8051B4F0
    lbl_8051B4F0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051B4F8
    lbl_8051B4F8:
        .4byte 0x626F6479
        .4byte 0x00000000
    .global lbl_8051B500
    lbl_8051B500:
        .4byte 0x40A00000
    .global lbl_8051B504
    lbl_8051B504:
        .float 1.0
    .global lbl_8051B508
    lbl_8051B508:
        .4byte 0x41700000
    .global lbl_8051B50C
    lbl_8051B50C:
        .4byte 0x40C90FDB
    .global lbl_8051B510
    lbl_8051B510:
        .4byte 0xC3A2F983
    .global lbl_8051B514
    lbl_8051B514:
        .4byte 0x43A2F983
    .global lbl_8051B518
    lbl_8051B518:
        .float 0.5
    .global lbl_8051B51C
    lbl_8051B51C:
        .4byte 0x3F0CCCCD
*/

namespace Game {

/*
 * --INFO--
 * Address:	8027AC88
 * Size:	000138
 */
ElecBug::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8027ACC8
	addi     r0, r31, 0x2e0
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2e0(r31)
	stw      r0, 0x2e4(r31)
	stw      r0, 0x2e8(r31)

lbl_8027ACC8:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game7ElecBug3Obj@ha
	addi     r0, r31, 0x2e0
	addi     r5, r3, __vt__Q34Game7ElecBug3Obj@l
	li       r3, 0x2c
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x2fc
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8027AD54
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game7ElecBug14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game7ElecBug14ProperAnimator@l
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

lbl_8027AD54:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8027AD88
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game7ElecBug3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game7ElecBug3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_8027AD88:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createEffect__Q34Game7ElecBug3ObjFv
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
 * Address:	8027ADC0
 * Size:	000004
 */
void ElecBug::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8027ADC4
 * Size:	0000A4
 */
void ElecBug::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r4, 0x4330
	stw      r0, 0xc(r1)
	li       r0, 0
	lfd      f3, lbl_8051B4F0@sda21(r2)
	mr       r3, r31
	stw      r4, 8(r1)
	lfs      f2, lbl_8051B4E0@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051B4E4@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051B4E8@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	stfs     f1, 0x2c0(r31)
	stfs     f0, 0x2c4(r31)
	stw      r0, 0x2d8(r31)
	bl       setupEffect__Q34Game7ElecBug3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027AE68
 * Size:	000044
 */
void ElecBug::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       finishPartnerAndEffect__Q34Game7ElecBug3ObjFv
	mr       r3, r30
	mr       r4, r31
	bl       onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
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
 * Address:	8027AEAC
 * Size:	000048
 */
void ElecBug::Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r5, sys@sda21(r13)
	lfs      f1, 0x2c0(r3)
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x2c0(r3)
	lwz      r3, 0x2bc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
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
 * Address:	8027AEF4
 * Size:	000004
 */
void ElecBug::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8027AEF8
 * Size:	000020
 */
void ElecBug::Obj::doDebugDraw(Graphics&)
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
 * Address:	8027AF18
 * Size:	00004C
 */
void ElecBug::Obj::setFSM(Game::ElecBug::FSM*)
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
 * Address:	8027AF64
 * Size:	000080
 */
void ElecBug::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r4, r2, lbl_8051B4F8@sda21
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	lfs      f3, lbl_8051B500@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f2, lbl_8051B4E8@sda21(r2)
	stfs     f1, 4(r31)
	lfs      f1, lbl_8051B504@sda21(r2)
	stfs     f4, 8(r31)
	lfs      f0, lbl_8051B508@sda21(r2)
	lfs      f4, 4(r31)
	fsubs    f3, f4, f3
	stfs     f3, 4(r31)
	stfs     f2, 0xc(r31)
	stfs     f1, 0x10(r31)
	stfs     f2, 0x14(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x1c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027AFE4
 * Size:	0001E4
 */
void ElecBug::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r4
	mr       r30, r3
	lwz      r0, 0(r4)
	cmplwi   r0, 0
	beq      lbl_8027B180
	lwz      r0, 0x1e0(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8027B180
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 5
	beq      lbl_8027B044
	cmpwi    r3, 7
	bne      lbl_8027B180

lbl_8027B044:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8027B07C
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027B180

lbl_8027B07C:
	lwz      r4, 0(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 8(r1)
	lfs      f1, 0x18c(r30)
	lfs      f4, 0x10(r1)
	lfs      f0, 0x194(r30)
	fsubs    f3, f3, f1
	lfs      f1, lbl_8051B4E8@sda21(r2)
	fsubs    f4, f4, f0
	fmadds   f0, f3, f3, f1
	fmuls    f2, f4, f4
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8027B0D4
	ble      lbl_8027B0D8
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8027B0D8

lbl_8027B0D4:
	fmr      f2, f1

lbl_8027B0D8:
	lfs      f0, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8027B0F4
	lfs      f0, lbl_8051B504@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_8027B0F4:
	lwz      r3, 0(r31)
	lwz      r4, 0xc0(r30)
	lwz      r12, 0(r3)
	lfs      f0, 0x44c(r4)
	lwz      r12, 0x1c(r12)
	fmuls    f30, f4, f0
	lfs      f29, 0x474(r4)
	fmuls    f31, f3, f0
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027B128
	lfs      f29, lbl_8051B4E8@sda21(r2)

lbl_8027B128:
	lwz      r6, 0xc0(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	lis      r3, __vt__Q24Game13InteractDenki@ha
	lfs      f0, 0x604(r6)
	addi     r6, r5, __vt__Q24Game11Interaction@l
	addi     r5, r4, __vt__Q24Game12InteractWind@l
	addi     r0, r3, __vt__Q24Game13InteractDenki@l
	stw      r6, 0x14(r1)
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stw      r30, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stfs     f31, 0x20(r1)
	stfs     f29, 0x24(r1)
	stfs     f30, 0x28(r1)
	stw      r0, 0x14(r1)
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8027B180:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x240(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x74(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B1C8
 * Size:	0001BC
 */
void ElecBug::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r4
	stw      r29, 0x34(r1)
	mr       r29, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027B364
	lwz      r0, 0x1e0(r29)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8027B364
	cmplwi   r30, 0
	beq      lbl_8027B364
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027B364
	mr       r3, r29
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r31, r3
	cmpwi    r31, 1
	blt      lbl_8027B364
	cmpwi    r31, 7
	bgt      lbl_8027B364
	lwz      r3, 0x2bc(r29)
	mr       r4, r29
	li       r5, 8
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmpwi    r31, 5
	beq      lbl_8027B27C
	cmpwi    r31, 7
	bne      lbl_8027B35C

lbl_8027B27C:
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, 8(r1)
	lfs      f1, 0x18c(r29)
	lfs      f5, 0x10(r1)
	lfs      f0, 0x194(r29)
	fsubs    f4, f4, f1
	lfs      f1, lbl_8051B4E8@sda21(r2)
	fsubs    f5, f5, f0
	fmadds   f0, f4, f4, f1
	fmuls    f2, f5, f5
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8027B2D4
	ble      lbl_8027B2D8
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8027B2D8

lbl_8027B2D4:
	fmr      f2, f1

lbl_8027B2D8:
	lfs      f0, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8027B2F4
	lfs      f0, lbl_8051B504@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0

lbl_8027B2F4:
	lwz      r7, 0xc0(r29)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	lis      r3, __vt__Q24Game13InteractDenki@ha
	lfs      f0, 0x44c(r7)
	addi     r6, r5, __vt__Q24Game11Interaction@l
	lfs      f1, 0x474(r7)
	addi     r5, r4, __vt__Q24Game12InteractWind@l
	lfs      f3, 0x604(r7)
	fmuls    f2, f5, f0
	fmuls    f0, f4, f0
	addi     r0, r3, __vt__Q24Game13InteractDenki@l
	stw      r6, 0x14(r1)
	mr       r3, r30
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stw      r29, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f2, 0x28(r1)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8027B35C:
	li       r3, 1
	b        lbl_8027B368

lbl_8027B364:
	li       r3, 0

lbl_8027B368:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B384
 * Size:	00002C
 */
void ElecBug::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x27c(r12)
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
 * Address:	8027B3B0
 * Size:	0000C0
 */
void ElecBug::Obj::earthquakeCallBack(Game::Creature*, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027B454
	lwz      r0, 0x1e0(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8027B454
	cmplwi   r31, 0
	beq      lbl_8027B454
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027B454
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	blt      lbl_8027B454
	cmpwi    r3, 7
	bgt      lbl_8027B454
	lwz      r3, 0x2bc(r30)
	mr       r4, r30
	li       r5, 8
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_8027B458

lbl_8027B454:
	li       r3, 0

lbl_8027B458:
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
 * Address:	8027B470
 * Size:	000040
 */
void ElecBug::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x1e0(r31)
	bl       finishPartnerAndEffect__Q34Game7ElecBug3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B4B0
 * Size:	000040
 */
void ElecBug::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 8
	beq      lbl_8027B4DC
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)

lbl_8027B4DC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B4F0
 * Size:	000034
 */
void ElecBug::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOff__Q34Game7ElecBug3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B524
 * Size:	000034
 */
void ElecBug::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOn__Q34Game7ElecBug3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B558
 * Size:	000028
 */
void ElecBug::Obj::startCarcassMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 7
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
 * Address:	8027B580
 * Size:	000020
 */
void ElecBug::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game7ElecBug3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B5A0
 * Size:	000020
 */
void ElecBug::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game7ElecBug3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B5C0
 * Size:	0001A4
 */
void ElecBug::Obj::setTargetPosition()
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
	stfd     f27, 0x40(r1)
	psq_st   f27, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lfs      f30, 0x198(r3)
	lfs      f29, 0x19c(r3)
	lfs      f28, 0x1a0(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 8(r1)
	lfd      f1, lbl_8051B4F0@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f3, lbl_8051B50C@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f2, lbl_8051B4E4@sda21(r2)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fmuls    f3, f3, f4
	fsubs    f27, f1, f0
	fdivs    f31, f3, f2
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 0x10(r1)
	lfd      f2, lbl_8051B4F0@sda21(r2)
	lfd      f1, 0x10(r1)
	lfs      f0, lbl_8051B4E8@sda21(r2)
	fsubs    f3, f1, f2
	lfs      f2, lbl_8051B4E4@sda21(r2)
	lfs      f1, 0x384(r3)
	fcmpo    cr0, f31, f0
	fmuls    f0, f27, f3
	fdivs    f0, f0, f2
	fadds    f2, f1, f0
	bge      lbl_8027B6B8
	lfs      f0, lbl_8051B510@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8027B6DC

lbl_8027B6B8:
	lfs      f0, lbl_8051B514@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8027B6DC:
	fmadds   f1, f2, f0, f30
	lfs      f0, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f31, f0
	stfs     f1, 0x2c8(r31)
	stfs     f29, 0x2cc(r31)
	bge      lbl_8027B6F8
	fneg     f31, f31

lbl_8027B6F8:
	lfs      f0, lbl_8051B514@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	fmadds   f0, f2, f0, f28
	stfs     f0, 0x2d0(r31)
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	psq_l    f27, 72(r1), 0, qr0
	lfd      f27, 0x40(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B764
 * Size:	00001C
 */
void ElecBug::Obj::resetPartnerPtr()
{
	/*
	lwz      r4, 0x2d8(r3)
	cmplwi   r4, 0
	beqlr
	li       r0, 0
	stw      r0, 0x2d8(r4)
	stw      r0, 0x2d8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B780
 * Size:	000070
 */
void ElecBug::Obj::isBecomeChargeState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027B7D8
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8027B7D8
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	blt      lbl_8027B7D8
	cmpwi    r3, 3
	bgt      lbl_8027B7D8
	li       r3, 1
	b        lbl_8027B7DC

lbl_8027B7D8:
	li       r3, 0

lbl_8027B7DC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B7F0
 * Size:	000030
 */
void ElecBug::Obj::startChargeState(Game::ElecBug::Obj*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	stw      r4, 0x2d8(r3)
	mr       r3, r4
	mr       r4, r5
	bl       startChildChargeState__Q34Game7ElecBug3ObjFPQ34Game7ElecBug3Obj
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B820
 * Size:	000044
 */
void ElecBug::Obj::startChildChargeState(Game::ElecBug::Obj*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 6
	li       r6, 0
	stw      r0, 0x14(r1)
	stw      r4, 0x2d8(r3)
	mr       r4, r3
	lwz      r3, 0x2bc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
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
 * Address:	8027B864
 * Size:	000044
 */
void ElecBug::Obj::createEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x74
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8027B890
	bl       __ct__Q23efx12TDnkmsEffectFv
	mr       r0, r3

lbl_8027B890:
	stw      r0, 0x2dc(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	8027B8A8
 * Size:	000168
 */
TDnkmsEffect::TDnkmsEffect()
{
	/*
	stwu     r1, -0x30(r1)
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r6, __vt__18JPAEmitterCallBack@ha
	lis      r5, __vt__Q23efx5TSync@ha
	stmw     r22, 8(r1)
	addi     r25, r4, __vt__Q23efx5TBase@l
	addi     r27, r5, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	addi     r30, r4, __vt__Q23efx9TChasePos@l
	addi     r26, r6, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx13TDnkmsHoudenA@ha
	addi     r24, r27, 0x14
	addi     r12, r4, __vt__Q23efx13TDnkmsHoudenA@l
	li       r28, 0
	lis      r4, __vt__Q23efx13TDnkmsHoudenB@ha
	li       r29, 0x2b2
	addi     r10, r4, __vt__Q23efx13TDnkmsHoudenB@l
	addi     r23, r30, 0x14
	lis      r4, __vt__Q23efx14TDnkmsThunderA@ha
	li       r31, 0x33
	addi     r7, r4, __vt__Q23efx14TDnkmsThunderA@l
	addi     r22, r12, 0x14
	lis      r4, __vt__Q23efx14TDnkmsThunderB@ha
	li       r11, 0x34
	addi     r4, r4, __vt__Q23efx14TDnkmsThunderB@l
	addi     r9, r10, 0x14
	li       r8, 0x35
	addi     r6, r7, 0x14
	stw      r25, 8(r3)
	li       r5, 0x36
	addi     r0, r4, 0x14
	stw      r26, 0xc(r3)
	stw      r27, 8(r3)
	stw      r24, 0xc(r3)
	stw      r28, 0x10(r3)
	sth      r29, 0x14(r3)
	stb      r28, 0x16(r3)
	stw      r30, 8(r3)
	stw      r23, 0xc(r3)
	stw      r28, 0x18(r3)
	sth      r31, 0x14(r3)
	stw      r12, 8(r3)
	stw      r22, 0xc(r3)
	stw      r25, 0x1c(r3)
	stw      r26, 0x20(r3)
	stw      r27, 0x1c(r3)
	stw      r24, 0x20(r3)
	stw      r28, 0x24(r3)
	sth      r29, 0x28(r3)
	stb      r28, 0x2a(r3)
	stw      r30, 0x1c(r3)
	stw      r23, 0x20(r3)
	stw      r28, 0x2c(r3)
	sth      r31, 0x28(r3)
	stw      r12, 0x1c(r3)
	stw      r22, 0x20(r3)
	stw      r25, 0x30(r3)
	stw      r26, 0x34(r3)
	stw      r27, 0x30(r3)
	stw      r24, 0x34(r3)
	stw      r28, 0x38(r3)
	sth      r29, 0x3c(r3)
	stb      r28, 0x3e(r3)
	stw      r30, 0x30(r3)
	stw      r23, 0x34(r3)
	stw      r28, 0x40(r3)
	sth      r11, 0x3c(r3)
	stw      r10, 0x30(r3)
	stw      r9, 0x34(r3)
	stw      r25, 0x44(r3)
	stw      r26, 0x48(r3)
	stw      r27, 0x44(r3)
	stw      r24, 0x48(r3)
	stw      r28, 0x4c(r3)
	sth      r8, 0x50(r3)
	stb      r28, 0x52(r3)
	stw      r7, 0x44(r3)
	stw      r6, 0x48(r3)
	stw      r25, 0x5c(r3)
	stw      r26, 0x60(r3)
	stw      r27, 0x5c(r3)
	stw      r24, 0x60(r3)
	stw      r28, 0x64(r3)
	sth      r5, 0x68(r3)
	stb      r28, 0x6a(r3)
	stw      r4, 0x5c(r3)
	stw      r0, 0x60(r3)
	lmw      r22, 8(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027BA10
 * Size:	000084
 */
TDnkmsThunderB::~TDnkmsThunderB()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8027BA78
	lis      r3, __vt__Q23efx14TDnkmsThunderB@ha
	addi     r3, r3, __vt__Q23efx14TDnkmsThunderB@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8027BA68
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8027BA68:
	extsh.   r0, r31
	ble      lbl_8027BA78
	mr       r3, r30
	bl       __dl__FPv

lbl_8027BA78:
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
 * Address:	8027BA94
 * Size:	000084
 */
TDnkmsThunderA::~TDnkmsThunderA()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8027BAFC
	lis      r3, __vt__Q23efx14TDnkmsThunderA@ha
	addi     r3, r3, __vt__Q23efx14TDnkmsThunderA@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8027BAEC
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8027BAEC:
	extsh.   r0, r31
	ble      lbl_8027BAFC
	mr       r3, r30
	bl       __dl__FPv

lbl_8027BAFC:
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
 * Address:	8027BB18
 * Size:	00009C
 */
TDnkmsHoudenB::~TDnkmsHoudenB()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8027BB98
	lis      r3, __vt__Q23efx13TDnkmsHoudenB@ha
	addi     r3, r3, __vt__Q23efx13TDnkmsHoudenB@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8027BB88
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8027BB88
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8027BB88:
	extsh.   r0, r31
	ble      lbl_8027BB98
	mr       r3, r30
	bl       __dl__FPv

lbl_8027BB98:
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
 * Address:	8027BBB4
 * Size:	00009C
 */
TDnkmsHoudenA::~TDnkmsHoudenA()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8027BC34
	lis      r3, __vt__Q23efx13TDnkmsHoudenA@ha
	addi     r3, r3, __vt__Q23efx13TDnkmsHoudenA@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8027BC24
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8027BC24
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8027BC24:
	extsh.   r0, r31
	ble      lbl_8027BC34
	mr       r3, r30
	bl       __dl__FPv

lbl_8027BC34:
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
 * Address:	8027BC50
 * Size:	000010
 */
void ElecBug::Obj::setupEffect()
{
	/*
	lwz      r4, 0x2dc(r3)
	addi     r0, r3, 0x18c
	stw      r0, 0(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027BC60
 * Size:	000040
 */
void ElecBug::Obj::startChargeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r5, 0x2dc(r3)
	lwz      r0, 0(r5)
	addi     r3, r5, 0x30
	stw      r0, 0x40(r5)
	lwz      r12, 0x30(r5)
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
 * Address:	8027BCA0
 * Size:	0000C0
 */
void ElecBug::Obj::startDischargeEffect(Game::ElecBug::Obj*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	addi     r0, r4, 0x18c
	li       r4, 0
	stw      r31, 0xc(r1)
	lwz      r31, 0x2dc(r3)
	stw      r0, 4(r31)
	addi     r3, r31, 8
	lwz      r0, 0(r31)
	stw      r0, 0x18(r31)
	lwz      r12, 8(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	addi     r3, r31, 0x1c
	li       r4, 0
	stw      r0, 0x2c(r31)
	lwz      r12, 0x1c(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 4(r31)
	addi     r3, r31, 0x44
	lwz      r0, 0(r31)
	li       r4, 0
	stw      r0, 0x54(r31)
	stw      r5, 0x58(r31)
	lwz      r5, 4(r31)
	lwz      r0, 0(r31)
	stw      r0, 0x6c(r31)
	stw      r5, 0x70(r31)
	lwz      r12, 0x44(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x5c
	li       r4, 0
	lwz      r12, 0x5c(r31)
	lwz      r12, 8(r12)
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
 * Address:	8027BD60
 * Size:	0000A4
 */
void ElecBug::Obj::finishPartnerAndEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r4, 0x2d8(r3)
	cmplwi   r4, 0
	beq      lbl_8027BD88
	li       r0, 0
	stw      r0, 0x2d8(r4)
	stw      r0, 0x2d8(r3)

lbl_8027BD88:
	lwz      r31, 0x2dc(r3)
	addi     r3, r31, 8
	lwz      r12, 8(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x1c
	lwz      r12, 0x1c(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x30
	lwz      r12, 0x30(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x44
	lwz      r12, 0x44(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x5c
	lwz      r12, 0x5c(r31)
	lwz      r12, 0x10(r12)
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
 * Address:	8027BE04
 * Size:	00008C
 */
void ElecBug::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x2dc(r3)
	lwz      r12, 8(r31)
	addi     r3, r31, 8
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x1c
	lwz      r12, 0x1c(r31)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x30
	lwz      r12, 0x30(r31)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x44
	lwz      r12, 0x44(r31)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x5c
	lwz      r12, 0x5c(r31)
	lwz      r12, 0x44(r12)
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
 * Address:	8027BE90
 * Size:	00008C
 */
void ElecBug::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x2dc(r3)
	lwz      r12, 8(r31)
	addi     r3, r31, 8
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x1c
	lwz      r12, 0x1c(r31)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x30
	lwz      r12, 0x30(r31)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x44
	lwz      r12, 0x44(r31)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x5c
	lwz      r12, 0x5c(r31)
	lwz      r12, 0x40(r12)
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
 * Address:	8027BF1C
 * Size:	0004D0
 */
void ElecBug::Obj::checkInteract(Game::ElecBug::Obj*)
{
	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	stw      r0, 0x1d4(r1)
	stfd     f31, 0x1c0(r1)
	psq_st   f31, 456(r1), 0, qr0
	stfd     f30, 0x1b0(r1)
	psq_st   f30, 440(r1), 0, qr0
	stfd     f29, 0x1a0(r1)
	psq_st   f29, 424(r1), 0, qr0
	stfd     f28, 0x190(r1)
	psq_st   f28, 408(r1), 0, qr0
	stfd     f27, 0x180(r1)
	psq_st   f27, 392(r1), 0, qr0
	stfd     f26, 0x170(r1)
	psq_st   f26, 376(r1), 0, qr0
	stfd     f25, 0x160(r1)
	psq_st   f25, 360(r1), 0, qr0
	stfd     f24, 0x150(r1)
	psq_st   f24, 344(r1), 0, qr0
	stfd     f23, 0x140(r1)
	psq_st   f23, 328(r1), 0, qr0
	stfd     f22, 0x130(r1)
	psq_st   f22, 312(r1), 0, qr0
	stfd     f21, 0x120(r1)
	psq_st   f21, 296(r1), 0, qr0
	stfd     f20, 0x110(r1)
	psq_st   f20, 280(r1), 0, qr0
	stfd     f19, 0x100(r1)
	psq_st   f19, 264(r1), 0, qr0
	stfd     f18, 0xf0(r1)
	psq_st   f18, 248(r1), 0, qr0
	stfd     f17, 0xe0(r1)
	psq_st   f17, 232(r1), 0, qr0
	stfd     f16, 0xd0(r1)
	psq_st   f16, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	mr       r30, r3
	mr       r31, r4
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f19, 0x20(r1)
	lwz      r12, 8(r12)
	lfs      f20, 0x24(r1)
	lfs      f22, 0x28(r1)
	mtctr    r12
	bctrl
	lfs      f2, 0x18(r1)
	lfs      f1, 0x14(r1)
	fsubs    f29, f2, f20
	lfs      f0, 0x1c(r1)
	fsubs    f30, f1, f19
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fsubs    f31, f0, f22
	fmuls    f4, f29, f29
	fmuls    f5, f31, f31
	fmadds   f4, f30, f30, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_8027C038
	ble      lbl_8027C03C
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_8027C03C

lbl_8027C038:
	fmr      f4, f3

lbl_8027C03C:
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_8027C05C
	lfs      f3, lbl_8051B504@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f30, f30, f3
	fmuls    f29, f29, f3
	fmuls    f31, f31, f3

lbl_8027C05C:
	lfs      f4, lbl_8051B4E8@sda21(r2)
	lfs      f5, lbl_8051B504@sda21(r2)
	fmuls    f3, f4, f31
	fmuls    f6, f4, f29
	fmsubs   f27, f4, f30, f3
	fnmsubs  f26, f5, f30, f6
	fmsubs   f28, f5, f31, f6
	fmuls    f3, f27, f27
	fmuls    f5, f26, f26
	fmadds   f3, f28, f28, f3
	fadds    f5, f5, f3
	fcmpo    cr0, f5, f4
	ble      lbl_8027C0A0
	ble      lbl_8027C0A4
	frsqrte  f3, f5
	fmuls    f5, f3, f5
	b        lbl_8027C0A4

lbl_8027C0A0:
	fmr      f5, f4

lbl_8027C0A4:
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f5, f3
	ble      lbl_8027C0C4
	lfs      f3, lbl_8051B504@sda21(r2)
	fdivs    f3, f3, f5
	fmuls    f28, f28, f3
	fmuls    f27, f27, f3
	fmuls    f26, f26, f3

lbl_8027C0C4:
	fmuls    f5, f30, f26
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fmuls    f6, f31, f27
	fmuls    f4, f29, f28
	fmsubs   f25, f31, f28, f5
	fmsubs   f23, f29, f26, f6
	fmsubs   f24, f30, f27, f4
	fmuls    f4, f25, f25
	fmuls    f5, f24, f24
	fmadds   f4, f23, f23, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_8027C108
	ble      lbl_8027C10C
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_8027C10C

lbl_8027C108:
	fmr      f4, f3

lbl_8027C10C:
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_8027C12C
	lfs      f3, lbl_8051B504@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f23, f23, f3
	fmuls    f25, f25, f3
	fmuls    f24, f24, f3

lbl_8027C12C:
	fsubs    f5, f20, f2
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fsubs    f4, f22, f0
	fsubs    f6, f19, f1
	fmuls    f5, f5, f5
	fmuls    f7, f4, f4
	fmadds   f4, f6, f6, f5
	fadds    f21, f7, f4
	fcmpo    cr0, f21, f3
	ble      lbl_8027C164
	ble      lbl_8027C168
	frsqrte  f3, f21
	fmuls    f21, f3, f21
	b        lbl_8027C168

lbl_8027C164:
	fmr      f21, f3

lbl_8027C168:
	fadds    f3, f19, f1
	lwz      r3, 0xc0(r30)
	lfs      f4, lbl_8051B518@sda21(r2)
	fadds    f1, f20, f2
	fadds    f0, f22, f0
	lfs      f5, 0x44c(r3)
	lfs      f17, 0x474(r3)
	fmuls    f2, f4, f3
	fmuls    f1, f4, f1
	addi     r3, r1, 0x54
	fmuls    f0, f4, f0
	stfs     f21, 0x38(r1)
	fmuls    f18, f26, f5
	fmuls    f16, f28, f5
	stfs     f2, 0x2c(r1)
	addi     r4, r1, 0x2c
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x74
	stb      r0, 0x70(r1)
	addi     r4, r1, 0x54
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x74
	bl       first__Q24Game12CellIteratorFv
	b        lbl_8027C344

lbl_8027C1D4:
	addi     r3, r1, 0x74
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027C33C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8027C230
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027C33C

lbl_8027C230:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 8(r1)
	fsubs    f1, f1, f20
	lfs      f2, 0x10(r1)
	fsubs    f0, f0, f19
	lfs      f4, lbl_8051B4E8@sda21(r2)
	fsubs    f2, f2, f22
	fmuls    f3, f27, f1
	fmadds   f3, f28, f0, f3
	fmadds   f3, f26, f2, f3
	fcmpo    cr0, f3, f4
	ble      lbl_8027C280
	fmr      f4, f3
	b        lbl_8027C284

lbl_8027C280:
	fneg     f4, f3

lbl_8027C284:
	lfs      f5, lbl_8051B4E0@sda21(r2)
	fcmpo    cr0, f4, f5
	bge      lbl_8027C33C
	fmuls    f5, f29, f1
	fmadds   f5, f30, f0, f5
	fmadds   f6, f31, f2, f5
	fcmpo    cr0, f6, f21
	bge      lbl_8027C33C
	lfs      f5, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f6, f5
	ble      lbl_8027C33C
	fmuls    f1, f25, f1
	fmadds   f0, f23, f0, f1
	fmadds   f1, f24, f2, f0
	fcmpo    cr0, f1, f5
	ble      lbl_8027C2C8
	b        lbl_8027C2CC

lbl_8027C2C8:
	fneg     f1, f1

lbl_8027C2CC:
	lfs      f0, lbl_8051B508@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8027C33C
	fdivs    f0, f3, f4
	lwz      r5, 0xc0(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	lfs      f2, 0x604(r5)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	fmuls    f1, f0, f16
	lis      r3, __vt__Q24Game13InteractDenki@ha
	fmuls    f0, f0, f18
	stw      r0, 0x3c(r1)
	addi     r4, r4, __vt__Q24Game12InteractWind@l
	addi     r0, r3, __vt__Q24Game13InteractDenki@l
	stw      r4, 0x3c(r1)
	mr       r3, r31
	addi     r4, r1, 0x3c
	stw      r30, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f17, 0x4c(r1)
	stfs     f0, 0x50(r1)
	stw      r0, 0x3c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8027C33C:
	addi     r3, r1, 0x74
	bl       next__Q24Game12CellIteratorFv

lbl_8027C344:
	addi     r3, r1, 0x74
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027C1D4
	psq_l    f31, 456(r1), 0, qr0
	lfd      f31, 0x1c0(r1)
	psq_l    f30, 440(r1), 0, qr0
	lfd      f30, 0x1b0(r1)
	psq_l    f29, 424(r1), 0, qr0
	lfd      f29, 0x1a0(r1)
	psq_l    f28, 408(r1), 0, qr0
	lfd      f28, 0x190(r1)
	psq_l    f27, 392(r1), 0, qr0
	lfd      f27, 0x180(r1)
	psq_l    f26, 376(r1), 0, qr0
	lfd      f26, 0x170(r1)
	psq_l    f25, 360(r1), 0, qr0
	lfd      f25, 0x160(r1)
	psq_l    f24, 344(r1), 0, qr0
	lfd      f24, 0x150(r1)
	psq_l    f23, 328(r1), 0, qr0
	lfd      f23, 0x140(r1)
	psq_l    f22, 312(r1), 0, qr0
	lfd      f22, 0x130(r1)
	psq_l    f21, 296(r1), 0, qr0
	lfd      f21, 0x120(r1)
	psq_l    f20, 280(r1), 0, qr0
	lfd      f20, 0x110(r1)
	psq_l    f19, 264(r1), 0, qr0
	lfd      f19, 0x100(r1)
	psq_l    f18, 248(r1), 0, qr0
	lfd      f18, 0xf0(r1)
	psq_l    f17, 232(r1), 0, qr0
	lfd      f17, 0xe0(r1)
	psq_l    f16, 216(r1), 0, qr0
	lfd      f16, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	lwz      r0, 0x1d4(r1)
	lwz      r30, 0xc8(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027C3EC
 * Size:	000008
 */
void ElecBug::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051B51C@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027C3F4
 * Size:	000008
 */
u32 ElecBug::Obj::getEnemyTypeID() { return 0x1C; }

namespace efx {

/*
 * --INFO--
 * Address:	8027C3FC
 * Size:	000008
 */
TDnkmsHoudenA::@4 @~TDnkmsHoudenA()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx13TDnkmsHoudenAFv
	*/
}

/*
 * --INFO--
 * Address:	8027C404
 * Size:	000008
 */
TDnkmsHoudenB::@4 @~TDnkmsHoudenB()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx13TDnkmsHoudenBFv
	*/
}
} // namespace efx

} // namespace efx
