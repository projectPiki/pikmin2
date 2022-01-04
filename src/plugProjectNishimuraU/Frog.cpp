#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_Frog_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C2450
    lbl_804C2450:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
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
        .4byte
   setInitialSetting__Q34Game4Frog3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game4Frog3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game4Frog3ObjFR8Graphics .4byte
   doSimpleDraw__Q24Game9EnemyBaseFP8Viewport .4byte
   doSimulationGround__Q24Game9EnemyBaseFf .4byte
   doSimulationFlying__Q34Game4Frog3ObjFf .4byte
   doSimulationStick__Q24Game9EnemyBaseFf .4byte
   changeMaterial__Q24Game9EnemyBaseFv .4byte
   "getCommonEffectPos__Q34Game4Frog3ObjFR10Vector3<f>" .4byte
   getFitEffectPos__Q24Game9EnemyBaseFv .4byte viewGetShape__Q24Game9EnemyBaseFv
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
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game4Frog3ObjFv .4byte
   doFinishStoneState__Q34Game4Frog3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q34Game4Frog3ObjFv .4byte
   doFinishEarthquakeFitState__Q34Game4Frog3ObjFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game4Frog3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q34Game4Frog3ObjFv .4byte
   doFinishWaitingBirthTypeDrop__Q34Game4Frog3ObjFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game4Frog3ObjFv .4byte doStartMovie__Q34Game4Frog3ObjFv
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
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515D38
    lbl_80515D38:
        .skip 0x4
    .global lbl_80515D3C
    lbl_80515D3C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051AAC8
    lbl_8051AAC8:
        .4byte 0x43000000
    .global lbl_8051AACC
    lbl_8051AACC:
        .4byte 0x00000000
    .global lbl_8051AAD0
    lbl_8051AAD0:
        .4byte 0x40000000
    .global lbl_8051AAD4
    lbl_8051AAD4:
        .4byte 0x40490FDB
    .global lbl_8051AAD8
    lbl_8051AAD8:
        .4byte 0x3BB60B61
    .global lbl_8051AADC
    lbl_8051AADC:
        .4byte 0x40A00000
    .global lbl_8051AAE0
    lbl_8051AAE0:
        .4byte 0x42960000
    .global lbl_8051AAE4
    lbl_8051AAE4:
        .4byte 0x42480000
    .global lbl_8051AAE8
    lbl_8051AAE8:
        .4byte 0x418C0000
    .global lbl_8051AAEC
    lbl_8051AAEC:
        .4byte 0x3F400000
    .global lbl_8051AAF0
    lbl_8051AAF0:
        .4byte 0x41B40000
    .global lbl_8051AAF4
    lbl_8051AAF4:
        .float 1.0
    .global lbl_8051AAF8
    lbl_8051AAF8:
        .4byte 0x41A00000
    .global lbl_8051AAFC
    lbl_8051AAFC:
        .4byte 0xC1700000
    .global lbl_8051AB00
    lbl_8051AB00:
        .4byte 0x43340000
    .global lbl_8051AB04
    lbl_8051AB04:
        .float 0.5
    .global lbl_8051AB08
    lbl_8051AB08:
        .4byte 0xC3A2F983
    .global lbl_8051AB0C
    lbl_8051AB0C:
        .4byte 0x43A2F983
    .global lbl_8051AB10
    lbl_8051AB10:
        .4byte 0xC47A0000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80258548
 * Size:	000138
 */
Frog::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_80258588
	addi     r0, r31, 0x2e0
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2e0(r31)
	stw      r0, 0x2e4(r31)
	stw      r0, 0x2e8(r31)

lbl_80258588:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game4Frog3Obj@ha
	addi     r0, r31, 0x2e0
	addi     r5, r3, __vt__Q34Game4Frog3Obj@l
	li       r3, 0x2c
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x304
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80258614
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game4Frog14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game4Frog14ProperAnimator@l
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

lbl_80258614:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80258648
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game4Frog3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game4Frog3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_80258648:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createEffect__Q34Game4Frog3ObjFv
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
 * Address:	80258680
 * Size:	000004
 */
void Frog::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80258684
 * Size:	000078
 */
void Frog::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lfs      f1, lbl_8051AAC8@sda21(r2)
	li       r4, -1
	lfs      f0, lbl_8051AACC@sda21(r2)
	li       r0, 0
	stfs     f1, 0x2c4(r31)
	mr       r3, r31
	stfs     f0, 0x2c0(r31)
	stw      r4, 0x2d4(r31)
	stb      r0, 0x2d8(r31)
	stb      r0, 0x2d9(r31)
	bl       setupEffect__Q34Game4Frog3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
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
 * Address:	802586FC
 * Size:	000044
 */
void Frog::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       finishJumpEffect__Q34Game4Frog3ObjFv
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
 * Address:	80258740
 * Size:	000044
 */
void Frog::Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       updateCaution__Q34Game4Frog3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
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
 * Address:	80258784
 * Size:	000280
 */
void Frog::Obj::doSimulationFlying(float)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lfs      f0, lbl_8051AACC@sda21(r2)
	lwz      r3, 0xc0(r3)
	lfs      f2, 0x2c0(r31)
	lfs      f3, 0x81c(r3)
	fsubs    f8, f3, f2
	fcmpo    cr0, f8, f0
	ble      lbl_802588AC
	lfs      f6, 0x1d0(r31)
	lfs      f5, 0x1c8(r31)
	fmuls    f2, f6, f6
	fmadds   f4, f5, f5, f2
	fcmpo    cr0, f4, f0
	ble      lbl_802587F4
	ble      lbl_802587F8
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_802587F8

lbl_802587F4:
	fmr      f4, f0

lbl_802587F8:
	lfs      f3, 0x2c8(r31)
	lfs      f2, 0x18c(r31)
	lfs      f0, lbl_8051AACC@sda21(r2)
	fsubs    f2, f3, f2
	stfs     f2, 0x1c8(r31)
	lfs      f3, 0x2d0(r31)
	lfs      f2, 0x194(r31)
	fsubs    f2, f3, f2
	stfs     f2, 0x1d0(r31)
	lfs      f7, 0x1c8(r31)
	lfs      f3, 0x1d0(r31)
	fmuls    f2, f7, f7
	fmuls    f3, f3, f3
	fadds    f2, f2, f3
	fcmpo    cr0, f2, f0
	ble      lbl_80258850
	fmadds   f2, f7, f7, f3
	fcmpo    cr0, f2, f0
	ble      lbl_80258854
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80258854

lbl_80258850:
	fmr      f2, f0

lbl_80258854:
	lfs      f0, lbl_8051AAD0@sda21(r2)
	fmuls    f0, f0, f2
	fdivs    f3, f0, f8
	fcmpo    cr0, f3, f4
	ble      lbl_80258874
	stfs     f5, 0x1c8(r31)
	stfs     f6, 0x1d0(r31)
	b        lbl_802588B4

lbl_80258874:
	lfs      f0, lbl_8051AACC@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_802588A0
	fdivs    f0, f7, f2
	fmuls    f0, f3, f0
	stfs     f0, 0x1c8(r31)
	lfs      f0, 0x1d0(r31)
	fdivs    f0, f0, f2
	fmuls    f0, f3, f0
	stfs     f0, 0x1d0(r31)
	b        lbl_802588B4

lbl_802588A0:
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1c8(r31)
	b        lbl_802588B4

lbl_802588AC:
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1c8(r31)

lbl_802588B4:
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lfs      f2, 0x1cc(r31)
	lfs      f3, 0x28(r3)
	lfs      f0, lbl_8051AACC@sda21(r2)
	fnmsubs  f1, f1, f3, f2
	stfs     f1, 0x1cc(r31)
	lfs      f1, 0x1cc(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_802589C0
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	lfs      f30, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x2d0(r31)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
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
	fmuls    f31, f1, f31
	lfs      f0, lbl_8051AAD8@sda21(r2)
	lfs      f1, lbl_8051AAD4@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80258994
	lfs      f0, lbl_8051AACC@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80258990
	fmr      f31, f1
	b        lbl_80258994

lbl_80258990:
	fneg     f31, f1

lbl_80258994:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	b        lbl_802589C4

lbl_802589C0:
	stfs     f0, 0x1cc(r31)

lbl_802589C4:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c0(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c0(r31)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258A04
 * Size:	000004
 */
void Frog::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80258A08
 * Size:	000020
 */
void Frog::Obj::doDebugDraw(Graphics&)
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
 * Address:	80258A28
 * Size:	00004C
 */
void Frog::Obj::setFSM(Game::Frog::FSM*)
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
 * Address:	80258A74
 * Size:	000110
 */
void Frog::Obj::getShadowParam(Game::ShadowParam&)
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
	lfs      f0, 8(r1)
	mr       r3, r30
	lfs      f1, lbl_8051AADC@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f0, 0x190(r30)
	fadds    f0, f1, f0
	stfs     f0, 4(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 8(r31)
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80258B48
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	beq      lbl_80258B10
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80258B04
	lfs      f0, lbl_8051AAE0@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_80258B50

lbl_80258B04:
	lfs      f0, lbl_8051AAE4@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_80258B50

lbl_80258B10:
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bne      lbl_80258B30
	lfs      f1, 4(r31)
	lfs      f0, lbl_8051AAE8@sda21(r2)
	fsubs    f0, f1, f0
	stfs     f0, 4(r31)

lbl_80258B30:
	lwz      r3, 0xc0(r30)
	lfs      f1, lbl_8051AAEC@sda21(r2)
	lfs      f0, 0x844(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x18(r31)
	b        lbl_80258B50

lbl_80258B48:
	lfs      f0, lbl_8051AAF0@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_80258B50:
	lfs      f2, lbl_8051AACC@sda21(r2)
	lfs      f1, lbl_8051AAF4@sda21(r2)
	stfs     f2, 0xc(r31)
	lfs      f0, lbl_8051AAE8@sda21(r2)
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
 * Address:	80258B84
 * Size:	000104
 */
void Frog::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r31, 0(r4)
	cmplwi   r31, 0
	beq      lbl_80258C54
	lwz      r0, 0x1e0(r29)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_80258C54
	lbz      r0, 0x2d9(r29)
	cmplwi   r0, 0
	beq      lbl_80258C54
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	beq      lbl_80258C54
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80258C0C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80258C54

lbl_80258C0C:
	lwz      r5, 0xc0(r29)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r5)
	addi     r5, r4, __vt__Q24Game11Interaction@l
	addi     r3, r3, __vt__Q24Game13InteractPress@l
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stw      r29, 0xc(r1)
	stw      r3, 8(r1)
	stfs     f0, 0x10(r1)
	stw      r0, 0x14(r1)
	lwz      r3, 0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80258C54:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x240(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258C88
 * Size:	000034
 */
void Frog::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishJumpEffect__Q34Game4Frog3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258CBC
 * Size:	000064
 */
void Frog::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	blt      lbl_80258D0C
	cmpwi    r3, 6
	bgt      lbl_80258D0C
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80258D0C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258D20
 * Size:	000034
 */
void Frog::Obj::doStartEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishJumpEffect__Q34Game4Frog3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258D54
 * Size:	00005C
 */
void Frog::Obj::doFinishEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	bne      lbl_80258D9C
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80258D9C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258DB0
 * Size:	000034
 */
void Frog::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOff__Q34Game4Frog3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258DE4
 * Size:	000034
 */
void Frog::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOn__Q34Game4Frog3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258E18
 * Size:	000028
 */
void Frog::Obj::startCarcassMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0xa
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
 * Address:	80258E40
 * Size:	00001C
 */
void Frog::Obj::viewGetCollTreeOffset()
{
	/*
	lfs      f0, lbl_8051AAF8@sda21(r2)
	lfs      f1, lbl_8051AAFC@sda21(r2)
	stfs     f0, 0(r3)
	lfs      f0, lbl_8051AACC@sda21(r2)
	stfs     f1, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258E5C
 * Size:	000020
 */
void Frog::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game4Frog3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258E7C
 * Size:	000020
 */
void Frog::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game4Frog3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258E9C
 * Size:	000088
 */
void Frog::Obj::getOffsetForMapCollision()
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
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	lfs      f1, 0x18c(r31)
	lfs      f0, lbl_8051AACC@sda21(r2)
	fsubs    f2, f2, f1
	lfs      f1, 0x10(r1)
	stfs     f0, 0xc(r1)
	stfs     f2, 8(r1)
	lfs      f0, 0x194(r31)
	fsubs    f0, f1, f0
	stfs     f0, 0x10(r1)
	stfs     f2, 0(r30)
	lfs      f0, 0xc(r1)
	stfs     f0, 4(r30)
	lfs      f0, 0x10(r1)
	stfs     f0, 8(r30)
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
 * Address:	80258F24
 * Size:	000054
 */
void Frog::Obj::getCommonEffectPos(Vector3f&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 8(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258F78
 * Size:	000050
 */
void Frog::Obj::updateCaution()
{
	/*
	lwz      r4, 0x1e0(r3)
	rlwinm.  r0, r4, 0, 0x1b, 0x1b
	bne      lbl_80258F98
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	bne      lbl_80258F98
	lwz      r0, 0x1f4(r3)
	cmpwi    r0, 0
	beq      lbl_80258FA0

lbl_80258F98:
	lfs      f0, lbl_8051AACC@sda21(r2)
	stfs     f0, 0x2c4(r3)

lbl_80258FA0:
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2c4(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bgelr
	lwz      r4, sys@sda21(r13)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258FC8
 * Size:	000024
 */
void Frog::Obj::getViewAngle()
{
	/*
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2c4(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_80258FE4
	lfs      f1, lbl_8051AB00@sda21(r2)
	blr

lbl_80258FE4:
	lfs      f1, 0x424(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258FEC
 * Size:	0000D8
 */
void Frog::Obj::startJumpAttack()
{
	/*
	lwz      r0, 0x1e0(r3)
	lfs      f2, lbl_8051AACC@sda21(r2)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r3)
	stfs     f2, 0x2c0(r3)
	lfs      f1, 0x2c8(r3)
	lfs      f0, 0x18c(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x1c8(r3)
	lfs      f1, 0x2d0(r3)
	lfs      f0, 0x194(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x1d0(r3)
	lfs      f3, 0x1c8(r3)
	lfs      f1, 0x1d0(r3)
	fmuls    f0, f3, f3
	fmuls    f1, f1, f1
	fadds    f0, f0, f1
	fcmpo    cr0, f0, f2
	ble      lbl_80259054
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f2
	ble      lbl_80259058
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80259058

lbl_80259054:
	fmr      f1, f2

lbl_80259058:
	lfs      f0, lbl_8051AACC@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80259080
	lfs      f0, 0x1c8(r3)
	fdivs    f0, f0, f1
	stfs     f0, 0x1c8(r3)
	lfs      f0, 0x1d0(r3)
	fdivs    f0, f0, f1
	stfs     f0, 0x1d0(r3)
	b        lbl_80259088

lbl_80259080:
	stfs     f0, 0x1d0(r3)
	stfs     f0, 0x1c8(r3)

lbl_80259088:
	lfs      f0, lbl_8051AAD0@sda21(r2)
	lwz      r4, 0xc0(r3)
	fmuls    f2, f0, f1
	lfs      f0, 0x1c8(r3)
	lfs      f1, 0x81c(r4)
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x1c8(r3)
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x844(r4)
	stfs     f0, 0x1cc(r3)
	lfs      f0, 0x1d0(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x1d0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802590C4
 * Size:	0000D8
 */
void Frog::Obj::resetHomePosition()
{
	/*
	stwu     r1, -0x20(r1)
	lfs      f2, lbl_8051AB04@sda21(r2)
	lwz      r4, 0xc0(r3)
	lfs      f3, 0x1fc(r3)
	lfs      f1, 0x384(r4)
	lfs      f0, lbl_8051AACC@sda21(r2)
	fmuls    f4, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_80259114
	lfs      f0, lbl_8051AB08@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_80259138

lbl_80259114:
	lfs      f0, lbl_8051AB0C@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_80259138:
	lfs      f1, 0x18c(r3)
	lfs      f0, lbl_8051AACC@sda21(r2)
	fmadds   f1, f4, f2, f1
	stfs     f1, 0x198(r3)
	lfs      f1, 0x190(r3)
	stfs     f1, 0x19c(r3)
	lfs      f2, 0x1fc(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_80259160
	fneg     f2, f2

lbl_80259160:
	lfs      f1, lbl_8051AB0C@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	lfs      f0, 0x194(r3)
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r4, r0
	lfs      f1, 4(r4)
	fmadds   f0, f4, f1, f0
	stfs     f0, 0x1a0(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025919C
 * Size:	00024C
 */
void Frog::Obj::pressOnGround()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	lfs      f4, lbl_8051AB10@sda21(r2)
	li       r4, 0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	lwz      r5, 0xc0(r3)
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lfs      f0, lbl_8051AACC@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 0x44
	stfs     f0, 0x20c(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x190(r31)
	lfs      f1, 0x44(r1)
	lfs      f0, 0x4c(r1)
	stfs     f1, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f0, 0x40(r1)
	lwz      r3, 0x280(r31)
	cmplwi   r3, 0
	beq      lbl_802592BC
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0(r3)
	lis      r3, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	li       r5, 0
	lis      r3, __vt__Q23efx8TSimple4@ha
	stw      r0, 0x54(r1)
	addi     r0, r3, __vt__Q23efx8TSimple4@l
	lfs      f1, 0x38(r1)
	lfs      f0, 0x40(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx9TFrogDive@ha
	li       r9, 0x5c
	addi     r10, r4, __vt__Q23efx3Arg@l
	li       r8, 0x5d
	li       r7, 0x5e
	li       r6, 0x5f
	stw      r0, 0x54(r1)
	addi     r0, r3, __vt__Q23efx9TFrogDive@l
	addi     r3, r1, 0x54
	addi     r4, r1, 0x28
	stfs     f2, 0x3c(r1)
	stw      r10, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f2, 0x30(r1)
	stfs     f0, 0x34(r1)
	sth      r9, 0x58(r1)
	sth      r8, 0x5a(r1)
	sth      r7, 0x5c(r1)
	sth      r6, 0x5e(r1)
	stw      r5, 0x60(r1)
	stw      r5, 0x64(r1)
	stw      r5, 0x68(r1)
	stw      r5, 0x6c(r1)
	stw      r0, 0x54(r1)
	bl       create__Q23efx8TSimple4FPQ23efx3Arg
	lfs      f1, lbl_8051AAF4@sda21(r2)
	mr       r3, r31
	bl       PSStartEnemyDownWatSE__FPQ24Game9EnemyBasef
	b        lbl_80259344

lbl_802592BC:
	lis      r3, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx13TFrogLanddrop@ha
	stw      r0, 8(r1)
	addi     r8, r4, __vt__Q23efx3Arg@l
	addi     r0, r3, __vt__Q23efx13TFrogLanddrop@l
	li       r7, 0x60
	li       r6, 0x61
	stfs     f2, 0x3c(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x18
	stw      r8, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f0, 0x24(r1)
	sth      r7, 0xc(r1)
	sth      r6, 0xe(r1)
	stw      r5, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x2ec(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 0x38
	bl       "createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"

lbl_80259344:
	lwz      r3, cameraMgr__4Game@sda21(r13)
	addi     r5, r1, 0x38
	li       r4, 6
	li       r6, 2
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x38
	li       r4, 0xe
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_802593A8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x582d
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802593D4

lbl_802593A8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5827
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802593D4:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802593E8
 * Size:	0000B0
 */
void Frog::Obj::createEffect()
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
	beq      lbl_80259480
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx9TFrogPota@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx9TFrogPota@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x62
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

lbl_80259480:
	stw      r3, 0x2dc(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80259498
 * Size:	000010
 */
void Frog::Obj::setupEffect()
{
	/*
	lwz      r4, 0x2dc(r3)
	addi     r0, r3, 0x18c
	stw      r0, 0x10(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802594A8
 * Size:	000034
 */
void Frog::Obj::startJumpEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2dc(r3)
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
 * Address:	802594DC
 * Size:	000030
 */
void Frog::Obj::finishJumpEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2dc(r3)
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
 * Address:	8025950C
 * Size:	0000C0
 */
void Frog::Obj::createDownEffect(float)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	lwz      r12, 0(r3)
	fmr      f31, f1
	mr       r31, r3
	addi     r4, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x190(r31)
	lfs      f1, 0x14(r1)
	lfs      f0, 0x1c(r1)
	stfs     f1, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_80259578
	fmr      f1, f31
	mr       r3, r31
	addi     r4, r1, 8
	bl       "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	b        lbl_80259588

lbl_80259578:
	fmr      f1, f31
	mr       r3, r31
	addi     r4, r1, 8
	bl       "createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"

lbl_80259588:
	lwz      r3, cameraMgr__4Game@sda21(r13)
	addi     r5, r31, 0x18c
	li       r4, 0
	li       r6, 2
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r31, 0x18c
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802595CC
 * Size:	000030
 */
void Frog::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2dc(r3)
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
 * Address:	802595FC
 * Size:	000030
 */
void Frog::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2dc(r3)
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
 * Address:	8025962C
 * Size:	00009C
 */
TFrogPota::~TFrogPota()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802596AC
	lis      r3, __vt__Q23efx9TFrogPota@ha
	addi     r3, r3, __vt__Q23efx9TFrogPota@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8025969C
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8025969C
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8025969C:
	extsh.   r0, r31
	ble      lbl_802596AC
	mr       r3, r30
	bl       __dl__FPv

lbl_802596AC:
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
 * Address:	802596C8
 * Size:	000004
 */
void TSimple4::forceKill() { }

/*
 * --INFO--
 * Address:	802596CC
 * Size:	000004
 */
void TSimple4::fade() { }

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	802596D0
 * Size:	000004
 */
void Frog::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	802596D4
 * Size:	000004
 */
void Frog::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	802596D8
 * Size:	000008
 */
u32 Frog::Obj::getEnemyTypeID() { return 0x11; }

} // namespace efx

/*
 * --INFO--
 * Address:	802596E0
 * Size:	000028
 */
void __sinit_Frog_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C2450@ha
	stw      r0, lbl_80515D38@sda21(r13)
	stfsu    f0, lbl_804C2450@l(r3)
	stfs     f0, lbl_80515D3C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80259708
 * Size:	000014
 */
void EnemyBase::@736 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -736
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8025971C
 * Size:	000014
 */
void EnemyBase::@736 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -736
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80259730
 * Size:	000014
 */
void EnemyBase::@736 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -736
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80259744
 * Size:	000014
 */
void EnemyBase::@736 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -736
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80259758
 * Size:	000014
 */
void EnemyBase::@736 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -736
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8025976C
 * Size:	000014
 */
void Frog::Obj::@736 @12 @viewGetCollTreeOffset()
{
	/*
	li       r11, 0xc
	lwzx     r11, r4, r11
	add      r4, r4, r11
	addi     r4, r4, -736
	b        viewGetCollTreeOffset__Q34Game4Frog3ObjFv
	*/
}

/*
 * --INFO--
 * Address:	80259780
 * Size:	000014
 */
void EnemyBase::@736 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -736
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	80259794
 * Size:	000008
 */
TFrogPota::@4 @~TFrogPota()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx9TFrogPotaFv
	*/
}
} // namespace efx

} // namespace Game
