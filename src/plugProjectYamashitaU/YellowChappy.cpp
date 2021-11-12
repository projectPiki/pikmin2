#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047C0A0
    lbl_8047C0A0:
        .asciz "YellowChappy.cpp"
        .skip 3
    .global lbl_8047C0B4
    lbl_8047C0B4:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global "__vt__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>"
    "__vt__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>":
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx10TChaseMtx3
    __vt__Q23efx10TChaseMtx3:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx13TKechappyTest
    __vt__Q23efx13TKechappyTest:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx12TKechappyOff
    __vt__Q23efx12TKechappyOff:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q34Game12YellowChappy3Obj
    __vt__Q34Game12YellowChappy3Obj:
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
        .4byte onInit__Q34Game12YellowChappy3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game12YellowChappy3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game10ChappyBase3ObjFR8Graphics
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
        .4byte collisionCallback__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game10ChappyBase3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game12YellowChappy3ObjFv
        .4byte "birth__Q34Game10ChappyBase3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game10ChappyBase3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game10ChappyBase3ObjFv
        .4byte doUpdateCommon__Q34Game12YellowChappy3ObjFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game10ChappyBase3ObjFR8Graphics
        .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
        .4byte doSimulationGround__Q24Game9EnemyBaseFf
        .4byte doSimulationFlying__Q24Game9EnemyBaseFf
        .4byte doSimulationStick__Q24Game9EnemyBaseFf
        .4byte changeMaterial__Q34Game12YellowChappy3ObjFv
        .4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getFitEffectPos__Q24Game9EnemyBaseFv
        .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q34Game10ChappyBase3ObjFv
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q34Game10ChappyBase3ObjFv
        .4byte initWalkSmokeEffect__Q34Game10ChappyBase3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game10ChappyBase3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game12YellowChappy3ObjFv
        .4byte getMouthSlots__Q34Game10ChappyBase3ObjFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte
   damageCallBack__Q34Game10ChappyBase3ObjFPQ24Game8CreaturefP8CollPart .4byte
   pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game10ChappyBase3ObjFv .4byte
   doFinishStoneState__Q34Game10ChappyBase3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game10ChappyBase3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q34Game12YellowChappy3ObjFv .4byte
   doFinishWaitingBirthTypeDrop__Q34Game12YellowChappy3ObjFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game10ChappyBase3ObjFv .4byte
   doStartMovie__Q34Game12YellowChappy3ObjFv .4byte
   doEndMovie__Q34Game12YellowChappy3ObjFv .4byte
   setFSM__Q34Game10ChappyBase3ObjFPQ34Game10ChappyBase3FSM .4byte
   isWakeup__Q34Game10ChappyBase3ObjFv .4byte
   setAnimationSpeed__Q34Game10ChappyBase3ObjFf .4byte
   flickAttackFail__Q34Game10ChappyBase3ObjFv .4byte
   flickStatePikmin__Q34Game10ChappyBase3ObjFv .4byte
   flickAttackBomb__Q34Game10ChappyBase3ObjFv .4byte
   eatAttackPikmin__Q34Game10ChappyBase3ObjFv .4byte
   resetUnderGround__Q34Game10ChappyBase3ObjFv .4byte
   setUnderGround__Q34Game10ChappyBase3ObjFv .4byte
   createEffect__Q34Game12YellowChappy3ObjFv .4byte
   setupEffect__Q34Game12YellowChappy3ObjFv .4byte
   startSleepEffect__Q34Game10ChappyBase3ObjFv .4byte
   finishSleepEffect__Q34Game10ChappyBase3ObjFv .4byte
   createFlickEffect__Q34Game10ChappyBase3ObjFv .4byte
   createSmokeEffect__Q34Game10ChappyBase3ObjFv .4byte 0 .4byte 0 .4byte
   viewGetBaseScale__Q24Game10PelletViewFv .4byte
   "@752@12@viewGetShape__Q24Game9EnemyBaseFv" .4byte
   viewGetCollTreeJointIndex__Q24Game10PelletViewFv .4byte
   viewGetCollTreeOffset__Q24Game10PelletViewFv .4byte
   "@752@12@view_start_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@752@12@view_finish_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@752@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@752@12@viewStartCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@752@12@viewOnPelletKilled__Q24Game9EnemyBaseFv" .4byte
   "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>" .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805180D0
    lbl_805180D0:
        .float 0.5
    .global lbl_805180D4
    lbl_805180D4:
        .4byte 0x626F6479
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8012C378
 * Size:	000154
 */
YellowChappy::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8012C3B8
	addi     r0, r31, 0x2f0
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2f0(r31)
	stw      r0, 0x2f4(r31)
	stw      r0, 0x2f8(r31)

lbl_8012C3B8:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q34Game10ChappyBase3ObjFv
	lis      r3, __vt__Q34Game12YellowChappy3Obj@ha
	addi     r5, r31, 0x2f0
	addi     r6, r3, __vt__Q34Game12YellowChappy3Obj@l
	li       r4, 0
	stw      r6, 0(r31)
	addi     r3, r6, 0x1b0
	addi     r7, r6, 0x334
	li       r0, 0xff
	stw      r3, 0x178(r31)
	li       r3, 0x2c
	lwz      r6, 0x17c(r31)
	stw      r7, 0(r6)
	lwz      r6, 0x17c(r31)
	subf     r5, r6, r5
	stw      r5, 0xc(r6)
	stw      r4, 0x2e4(r31)
	stb      r0, 0x2e8(r31)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8012C454
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game10ChappyBase14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game10ChappyBase14ProperAnimator@l
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

lbl_8012C454:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8012C488
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game10ChappyBase3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game10ChappyBase3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_8012C488:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x31c(r12)
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
 * Address:	8012C4CC
 * Size:	000048
 */
void YellowChappy::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q34Game10ChappyBase3ObjFPQ24Game15CreatureInitArg
	li       r3, 0xff
	li       r0, 1
	stb      r3, 0x2e8(r31)
	stb      r0, 0x2e9(r31)
	lwz      r3, 0x180(r31)
	addi     r0, r3, 0x50
	stw      r0, 0x2ec(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012C514
 * Size:	0001B0
 */
void YellowChappy::Obj::doUpdateCommon()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r30, r3
	bl       doUpdateCommon__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r30)
	lbz      r31, 0x2e8(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8012C554
	addi     r31, r31, -10
	b        lbl_8012C638

lbl_8012C554:
	lfs      f1, lbl_805180D0@sda21(r2)
	lfs      f0, 0x204(r30)
	lfs      f2, 0x200(r30)
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	bge      lbl_8012C634
	lbz      r0, 0x2e9(r30)
	cmplwi   r0, 0
	beq      lbl_8012C62C
	lwz      r3, 0x174(r30)
	addi     r4, r2, lbl_805180D4@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	or.      r29, r3, r3
	bne      lbl_8012C5A8
	lis      r3, lbl_8047C0A0@ha
	lis      r5, lbl_8047C0B4@ha
	addi     r3, r3, lbl_8047C0A0@l
	li       r4, 0x7c
	addi     r5, r5, lbl_8047C0B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8012C5A8:
	mr       r3, r29
	bl       getWorldMatrix__Q28SysShape5JointFv
	or.      r29, r3, r3
	bne      lbl_8012C5D4
	lis      r3, lbl_8047C0A0@ha
	lis      r5, lbl_8047C0B4@ha
	addi     r3, r3, lbl_8047C0A0@l
	li       r4, 0x7e
	addi     r5, r5, lbl_8047C0B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8012C5D4:
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r3, __vt__Q23efx12TKechappyOff@ha
	li       r6, 0x294
	stw      r0, 8(r1)
	addi     r4, r4, __vt__Q23efx11TSimpleMtx1@l
	li       r5, 0
	addi     r0, r3, __vt__Q23efx12TKechappyOff@l
	stw      r4, 8(r1)
	addi     r3, r1, 8
	li       r4, 0
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r29, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	li       r0, 0
	stb      r0, 0x2e9(r30)

lbl_8012C62C:
	addi     r31, r31, -50
	b        lbl_8012C638

lbl_8012C634:
	addi     r31, r31, 0xa

lbl_8012C638:
	cmpwi    r31, 0
	bge      lbl_8012C648
	li       r31, 0
	b        lbl_8012C65C

lbl_8012C648:
	cmpwi    r31, 0xff
	ble      lbl_8012C65C
	li       r0, 1
	li       r31, 0xff
	stb      r0, 0x2e9(r30)

lbl_8012C65C:
	stb      r31, 0x2e8(r30)
	lwz      r3, 0x2e4(r30)
	lbz      r4, 0x2e8(r30)
	bl       setGlobalAlpha__Q23efx13TKechappyTestFUc
	lwz      r3, 0x2e4(r30)
	addi     r4, r30, 0x168
	bl       "setGlobalDynamicsScale__Q23efx13TKechappyTestFR10Vector3<f>"
	mr       r3, r30
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	fmr      f31, f1
	mr       r3, r30
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	fmr      f1, f31
	mr       r5, r3
	lwz      r3, 0x2ec(r30)
	lwz      r4, 0x2e4(r30)
	bl       update__Q214EffectAnimator3MgrFPQ23efx13TKechappyTestif
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012C6C4
 * Size:	000040
 */
void YellowChappy::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	lwz      r3, 0x2e4(r31)
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
 * Address:	8012C704
 * Size:	000068
 */
void YellowChappy::Obj::createEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bl       createEffect__Q34Game10ChappyBase3ObjFv
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8012C750
	li       r4, 0
	li       r5, 0x283
	li       r6, 0x284
	li       r7, 0x285
	bl       __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs
	lis      r3, __vt__Q23efx13TKechappyTest@ha
	addi     r0, r3, __vt__Q23efx13TKechappyTest@l
	stw      r0, 0(r31)

lbl_8012C750:
	stw      r31, 0x2e4(r30)
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
 * Address:	8012C76C
 * Size:	0000B4
 */
void YellowChappy::Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bl       setupEffect__Q34Game10ChappyBase3ObjFv
	lwz      r3, 0x174(r30)
	addi     r4, r2, lbl_805180D4@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	or.      r31, r3, r3
	bne      lbl_8012C7B8
	lis      r3, lbl_8047C0A0@ha
	lis      r5, lbl_8047C0B4@ha
	addi     r3, r3, lbl_8047C0A0@l
	li       r4, 0xc0
	addi     r5, r5, lbl_8047C0B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8012C7B8:
	mr       r3, r31
	bl       getWorldMatrix__Q28SysShape5JointFv
	or.      r31, r3, r3
	bne      lbl_8012C7E4
	lis      r3, lbl_8047C0A0@ha
	lis      r5, lbl_8047C0B4@ha
	addi     r3, r3, lbl_8047C0A0@l
	li       r4, 0xc2
	addi     r5, r5, lbl_8047C0B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8012C7E4:
	lwz      r3, 0x2e4(r30)
	mr       r4, r31
	bl       setMtxptr__Q23efx10TChaseMtx3FPA4_f
	lwz      r3, 0x2e4(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
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
 * Address:	8012C820
 * Size:	000028
 */
void YellowChappy::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e4(r3)
	bl       setGlobalAlpha__Q23efx13TKechappyTestFUc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012C848
 * Size:	000004
 */
void YellowChappy::Obj::doEndMovie() { }

/*
 * --INFO--
 * Address:	8012C84C
 * Size:	0002B0
 */
void YellowChappy::Obj::changeMaterial()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lwz      r3, 0x180(r3)
	lwz      r4, 0x174(r27)
	lwz      r12, 0(r3)
	lwz      r28, 8(r4)
	lwz      r12, 0xe0(r12)
	lwz      r29, 4(r28)
	mtctr    r12
	bctrl
	mr       r30, r3
	lwz      r3, 0x180(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0xe4(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r27)
	lbz      r0, 0(r30)
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r4, 0x6c(r3)
	lwz      r3, 4(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r30)
	stb      r0, 1(r3)
	lhz      r0, 2(r30)
	sth      r0, 2(r3)
	lhz      r0, 4(r30)
	sth      r0, 4(r3)
	lbz      r0, 6(r30)
	stb      r0, 6(r3)
	lbz      r0, 7(r30)
	stb      r0, 7(r3)
	lbz      r0, 8(r30)
	stb      r0, 8(r3)
	lbz      r0, 9(r30)
	stb      r0, 9(r3)
	lhz      r0, 0xa(r30)
	sth      r0, 0xa(r3)
	lwz      r0, 0xc(r30)
	stw      r0, 0xc(r3)
	lbz      r0, 0x10(r30)
	stb      r0, 0x10(r3)
	lbz      r0, 0x11(r30)
	stb      r0, 0x11(r3)
	lbz      r0, 0x12(r30)
	stb      r0, 0x12(r3)
	lbz      r0, 0x13(r30)
	stb      r0, 0x13(r3)
	lbz      r0, 0x14(r30)
	stb      r0, 0x14(r3)
	lbz      r0, 0x15(r30)
	stb      r0, 0x15(r3)
	lbz      r0, 0x16(r30)
	stb      r0, 0x16(r3)
	lbz      r0, 0x17(r30)
	stb      r0, 0x17(r3)
	lbz      r0, 0x18(r30)
	stb      r0, 0x18(r3)
	lbz      r0, 0x19(r30)
	stb      r0, 0x19(r3)
	lha      r0, 0x1a(r30)
	sth      r0, 0x1a(r3)
	lwz      r0, 0x1c(r30)
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r4)
	lwz      r0, 0x1c(r3)
	add      r0, r30, r0
	subf     r0, r3, r0
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r4)
	lwz      r0, 0xc(r3)
	add      r0, r30, r0
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	lwz      r3, 0x174(r27)
	lbz      r0, 0(r31)
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r4, 0x6c(r3)
	lwz      r3, 4(r4)
	stb      r0, 0x20(r3)
	lbz      r0, 1(r31)
	stb      r0, 0x21(r3)
	lhz      r0, 2(r31)
	sth      r0, 0x22(r3)
	lhz      r0, 4(r31)
	sth      r0, 0x24(r3)
	lbz      r0, 6(r31)
	stb      r0, 0x26(r3)
	lbz      r0, 7(r31)
	stb      r0, 0x27(r3)
	lbz      r0, 8(r31)
	stb      r0, 0x28(r3)
	lbz      r0, 9(r31)
	stb      r0, 0x29(r3)
	lhz      r0, 0xa(r31)
	sth      r0, 0x2a(r3)
	lwz      r0, 0xc(r31)
	stw      r0, 0x2c(r3)
	lbz      r0, 0x10(r31)
	stb      r0, 0x30(r3)
	lbz      r0, 0x11(r31)
	stb      r0, 0x31(r3)
	lbz      r0, 0x12(r31)
	stb      r0, 0x32(r3)
	lbz      r0, 0x13(r31)
	stb      r0, 0x33(r3)
	lbz      r0, 0x14(r31)
	stb      r0, 0x34(r3)
	lbz      r0, 0x15(r31)
	stb      r0, 0x35(r3)
	lbz      r0, 0x16(r31)
	stb      r0, 0x36(r3)
	lbz      r0, 0x17(r31)
	lis      r5, j3dSys@ha
	addi     r27, r5, j3dSys@l
	li       r30, 0
	stb      r0, 0x37(r3)
	lbz      r0, 0x18(r31)
	stb      r0, 0x38(r3)
	lbz      r0, 0x19(r31)
	stb      r0, 0x39(r3)
	lha      r0, 0x1a(r31)
	sth      r0, 0x3a(r3)
	lwz      r0, 0x1c(r31)
	stw      r0, 0x3c(r3)
	lwz      r5, 4(r4)
	lwz      r0, 0x3c(r5)
	addi     r3, r5, 0x20
	add      r0, r31, r0
	subf     r0, r3, r0
	stw      r0, 0x3c(r5)
	lwz      r4, 4(r4)
	lwz      r0, 0x2c(r4)
	addi     r3, r4, 0x20
	add      r0, r31, r0
	subf     r0, r3, r0
	stw      r0, 0x2c(r4)
	b        lbl_8012CAD8

lbl_8012CAA0:
	lwz      r4, 0xc0(r28)
	rlwinm   r3, r30, 6, 0xa, 0x19
	rlwinm   r0, r30, 2, 0xe, 0x1d
	add      r4, r4, r3
	stw      r4, 0x3c(r27)
	lwz      r3, 0x60(r29)
	lwz      r4, 0x2c(r4)
	lwzx     r3, r3, r0
	lwz      r4, 0x34(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1

lbl_8012CAD8:
	lhz      r0, 0x5c(r29)
	clrlwi   r3, r30, 0x10
	cmplw    r3, r0
	blt      lbl_8012CAA0
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012CAFC
 * Size:	00004C
 */
void YellowChappy::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	lwz      r3, 0x2e4(r31)
	li       r4, 0
	bl       setGlobalAlpha__Q23efx13TKechappyTestFUc
	lwz      r3, 0x2e4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
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
 * Address:	8012CB48
 * Size:	00004C
 */
void YellowChappy::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	lwz      r3, 0x2e4(r31)
	li       r4, 0xff
	bl       setGlobalAlpha__Q23efx13TKechappyTestFUc
	lwz      r3, 0x2e4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
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
 * Address:	8012CB94
 * Size:	000004
 */
void TSimple1::forceKill() { }

/*
 * --INFO--
 * Address:	8012CB98
 * Size:	000004
 */
void TSimple1::fade() { }

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8012CB9C
 * Size:	000008
 */
u32 YellowChappy::Obj::getEnemyTypeID() { return 0x2B; }

/*
 * --INFO--
 * Address:	8012CBA4
 * Size:	000014
 */
void EnemyBase::@752 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -752
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8012CBB8
 * Size:	000014
 */
void EnemyBase::@752 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -752
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8012CBCC
 * Size:	000014
 */
void EnemyBase::@752 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -752
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8012CBE0
 * Size:	000014
 */
void EnemyBase::@752 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -752
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8012CBF4
 * Size:	000014
 */
void EnemyBase::@752 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -752
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8012CC08
 * Size:	000014
 */
void EnemyBase::@752 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -752
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}
} // namespace efx
