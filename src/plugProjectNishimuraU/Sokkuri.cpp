#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048D1B0
    lbl_8048D1B0:
        .asciz "leaf_joint1"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx10TJgmBubble
    __vt__Q23efx10TJgmBubble:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q34Game7Sokkuri3Obj
    __vt__Q34Game7Sokkuri3Obj:
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
        .4byte onInit__Q34Game7Sokkuri3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game7Sokkuri3ObjFR8Graphics
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
        .4byte isUnderground__Q34Game7Sokkuri3ObjFv
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
        .4byte getShadowParam__Q34Game7Sokkuri3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game7Sokkuri3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game7Sokkuri3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game7Sokkuri3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game7Sokkuri3ObjFR8Graphics .4byte
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
        .4byte getOffsetForMapCollision__Q34Game7Sokkuri3ObjFv
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
        .4byte createEfxHamon__Q34Game7Sokkuri3ObjFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game7Sokkuri3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q34Game7Sokkuri3ObjFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game7Sokkuri3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game7Sokkuri3ObjFv .4byte
   doFinishStoneState__Q34Game7Sokkuri3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game7Sokkuri3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q34Game7Sokkuri3ObjFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game7Sokkuri3ObjFv .4byte
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game7Sokkuri3ObjFPQ34Game7Sokkuri3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@732@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@732@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@732@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@732@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@732@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@732@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D120
    lbl_8051D120:
        .4byte 0x00000000
    .global lbl_8051D124
    lbl_8051D124:
        .4byte 0x40200000
    .global lbl_8051D128
    lbl_8051D128:
        .float 1.0
    .global lbl_8051D12C
    lbl_8051D12C:
        .4byte 0x42480000
    .global lbl_8051D130
    lbl_8051D130:
        .4byte 0x40F00000
    .global lbl_8051D134
    lbl_8051D134:
        .4byte 0x41200000
    .global lbl_8051D138
    lbl_8051D138:
        .float 0.1
    .global lbl_8051D13C
    lbl_8051D13C:
        .4byte 0x447A0000
    .global lbl_8051D140
    lbl_8051D140:
        .4byte 0x47000000
    .global lbl_8051D144
    lbl_8051D144:
        .4byte 0x40490FDB
    .global lbl_8051D148
    lbl_8051D148:
        .4byte 0x3BB60B61
    .global lbl_8051D14C
    lbl_8051D14C:
        .float 0.5
    .global lbl_8051D150
    lbl_8051D150:
        .4byte 0xC3A2F983
    .global lbl_8051D154
    lbl_8051D154:
        .4byte 0x43A2F983
    .global lbl_8051D158
    lbl_8051D158:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051D160
    lbl_8051D160:
        .4byte 0x40A00000
    .global lbl_8051D164
    lbl_8051D164:
        .4byte 0x41C80000
    .global lbl_8051D168
    lbl_8051D168:
        .4byte 0x41B00000
    .global lbl_8051D16C
    lbl_8051D16C:
        .4byte 0x3F0CCCCD
*/

namespace Game {

/*
 * --INFO--
 * Address:	802F1264
 * Size:	000130
 */
Sokkuri::Obj::Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802F12A4
	addi     r0, r31, 0x2dc
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2dc(r31)
	stw      r0, 0x2e0(r31)
	stw      r0, 0x2e4(r31)

lbl_802F12A4:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game7Sokkuri3Obj@ha
	addi     r0, r31, 0x2dc
	addi     r5, r3, __vt__Q34Game7Sokkuri3Obj@l
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
	beq      lbl_802F1330
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game7Sokkuri14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game7Sokkuri14ProperAnimator@l
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

lbl_802F1330:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802F1364
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game7Sokkuri3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game7Sokkuri3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802F1364:
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
 * Address:	802F1394
 * Size:	000004
 */
void Sokkuri::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802F1398
 * Size:	00008C
 */
void Sokkuri::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r3, 0x1e0(r31)
	li       r4, 1
	lfs      f0, lbl_8051D120@sda21(r2)
	li       r0, -1
	rlwinm   r5, r3, 0, 0x15, 0x13
	mr       r3, r31
	stw      r5, 0x1e0(r31)
	stb      r4, 0x2c0(r31)
	stfs     f0, 0x2c4(r31)
	stw      r0, 0x2c8(r31)
	bl       resetMoveVelocity__Q34Game7Sokkuri3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
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
 * Address:	802F1424
 * Size:	000034
 */
void Sokkuri::Obj::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
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
 * Address:	802F1458
 * Size:	000004
 */
void Sokkuri::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802F145C
 * Size:	000020
 */
void Sokkuri::Obj::doDebugDraw(Graphics&)
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
 * Address:	802F147C
 * Size:	00004C
 */
void Sokkuri::Obj::setFSM(Game::Sokkuri::FSM*)
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
 * Address:	802F14C8
 * Size:	000118
 */
void Sokkuri::Obj::getShadowParam(Game::ShadowParam&)
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
	beq      lbl_802F1590
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F1590
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	beq      lbl_802F1590
	lfs      f0, 0x18c(r30)
	lfs      f2, lbl_8051D124@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051D120@sda21(r2)
	lfs      f3, 0x190(r30)
	lfs      f0, lbl_8051D128@sda21(r2)
	stfs     f3, 4(r31)
	lfs      f3, 0x194(r30)
	stfs     f3, 8(r31)
	lfs      f3, 4(r31)
	fadds    f2, f3, f2
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802F157C
	lfs      f0, lbl_8051D12C@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802F1584

lbl_802F157C:
	lfs      f0, lbl_8051D130@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802F1584:
	lfs      f0, lbl_8051D134@sda21(r2)
	stfs     f0, 0x1c(r31)
	b        lbl_802F15C8

lbl_802F1590:
	lfs      f0, 0x18c(r30)
	lfs      f2, lbl_8051D120@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051D128@sda21(r2)
	lfs      f3, 0x190(r30)
	lfs      f0, lbl_8051D138@sda21(r2)
	stfs     f3, 4(r31)
	lfs      f3, 0x194(r30)
	stfs     f3, 8(r31)
	stfs     f2, 0xc(r31)
	stfs     f1, 0x10(r31)
	stfs     f2, 0x14(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x1c(r31)

lbl_802F15C8:
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
 * Address:	802F15E0
 * Size:	000008
 */
void Sokkuri::Obj::isUnderground(void)
{
	/*
	lbz      r3, 0x2c0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F15E8
 * Size:	00009C
 */
void Sokkuri::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_802F166C
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F166C
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_802F166C
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	beq      lbl_802F166C
	cmpwi    r3, 1
	beq      lbl_802F166C
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_802F1670

lbl_802F166C:
	li       r3, 0

lbl_802F1670:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1684
 * Size:	00009C
 */
void Sokkuri::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_802F1708
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F1708
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_802F1708
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	beq      lbl_802F1708
	cmpwi    r3, 1
	beq      lbl_802F1708
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_802F170C

lbl_802F1708:
	li       r3, 0

lbl_802F170C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1720
 * Size:	0000FC
 */
void Sokkuri::Obj::wallCallback(Game::MoveInfo const&)
{
	/*
	lfs      f0, 0x5c(r4)
	lfs      f1, 0x60(r4)
	stfs     f0, 0x2d0(r3)
	lfs      f0, 0x64(r4)
	stfs     f1, 0x2d4(r3)
	lfs      f1, lbl_8051D120@sda21(r2)
	stfs     f0, 0x2d8(r3)
	stfs     f1, 0x2d4(r3)
	lfs      f3, 0x2d0(r3)
	lfs      f2, 0x2d4(r3)
	fmuls    f0, f3, f3
	lfs      f4, 0x2d8(r3)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802F1784
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802F1788
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_802F1788

lbl_802F1784:
	fmr      f2, f1

lbl_802F1788:
	lfs      f0, lbl_8051D120@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_802F17C0
	lfs      f1, lbl_8051D128@sda21(r2)
	lfs      f0, 0x2d0(r3)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x2d0(r3)
	lfs      f0, 0x2d4(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x2d4(r3)
	lfs      f0, 0x2d8(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x2d8(r3)

lbl_802F17C0:
	lfs      f0, 0x2d0(r3)
	lfs      f1, lbl_8051D13C@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x2d0(r3)
	lfs      f0, 0x2d4(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x2d4(r3)
	lfs      f0, 0x2d8(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x2d8(r3)
	lfs      f1, 0x2d0(r3)
	lfs      f0, 0x18c(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2d0(r3)
	lfs      f1, 0x2d4(r3)
	lfs      f0, 0x190(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2d4(r3)
	lfs      f1, 0x2d8(r3)
	lfs      f0, 0x194(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2d8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F181C
 * Size:	000040
 */
void Sokkuri::Obj::doStartStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	lwz      r3, 0x1e0(r31)
	li       r0, 0
	ori      r3, r3, 0x800
	stw      r3, 0x1e0(r31)
	stb      r0, 0x2c0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F185C
 * Size:	000020
 */
void Sokkuri::Obj::doFinishStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F187C
 * Size:	000028
 */
void Sokkuri::Obj::startCarcassMotion(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 8
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
 * Address:	802F18A4
 * Size:	0000AC
 */
void Sokkuri::Obj::getOffsetForMapCollision(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F18FC
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0(r30)
	lfs      f0, 4(r3)
	stfs     f0, 4(r30)
	lfs      f0, 8(r3)
	stfs     f0, 8(r30)
	b        lbl_802F1938

lbl_802F18FC:
	lis      r4, lbl_8048D1B0@ha
	lwz      r3, 0x174(r31)
	addi     r4, r4, lbl_8048D1B0@l
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0xc(r3)
	lfs      f0, 0x18c(r31)
	lfs      f3, 0x2c(r3)
	lfs      f1, 0x194(r31)
	fsubs    f2, f2, f0
	lfs      f0, lbl_8051D120@sda21(r2)
	fsubs    f3, f3, f1
	stfs     f2, 0(r30)
	stfs     f0, 4(r30)
	stfs     f3, 8(r30)

lbl_802F1938:
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
 * Address:	........
 * Size:	000068
 */
void Sokkuri::Obj::getSearchedTarget(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F1950
 * Size:	00007C
 */
void Sokkuri::Obj::isAppear(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_802F1990
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	bne      lbl_802F1990
	lwz      r6, 0xc0(r3)
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x424(r6)
	lfs      f2, 0x3d4(r6)
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	b        lbl_802F19A8

lbl_802F1990:
	lwz      r6, 0xc0(r3)
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x424(r6)
	lfs      f2, 0x3d4(r6)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"

lbl_802F19A8:
	cmplwi   r3, 0
	beq      lbl_802F19B8
	li       r3, 1
	b        lbl_802F19BC

lbl_802F19B8:
	li       r3, 0

lbl_802F19BC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F19CC
 * Size:	0000A8
 */
void Sokkuri::Obj::isDisappear(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lfs      f1, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lfs      f2, 0x18c(r3)
	fsubs    f3, f1, f0
	lfs      f1, 0x198(r3)
	lwz      r5, 0xc0(r3)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	lfs      f0, 0x384(r5)
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F1A60
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_802F1A3C
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	bne      lbl_802F1A3C
	lfs      f1, 0x424(r5)
	li       r4, 0
	lfs      f2, 0x3d4(r5)
	li       r5, 0
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	b        lbl_802F1A50

lbl_802F1A3C:
	lfs      f1, 0x424(r5)
	li       r4, 0
	lfs      f2, 0x3d4(r5)
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"

lbl_802F1A50:
	cmplwi   r3, 0
	bne      lbl_802F1A60
	li       r3, 1
	b        lbl_802F1A64

lbl_802F1A60:
	li       r3, 0

lbl_802F1A64:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1A74
 * Size:	0001E0
 */
void Sokkuri::Obj::setNextMoveInfo(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x81c(r3)
	lfs      f0, 0x844(r3)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_8051D158@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_8051D140@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x86c(r3)
	lfs      f0, 0x894(r3)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 0x10(r1)
	lfd      f1, lbl_8051D158@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f3, lbl_8051D140@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f0, 0x894(r3)
	lfs      f1, lbl_8051D148@sda21(r2)
	lfs      f2, lbl_8051D144@sda21(r2)
	fmuls    f4, f31, f4
	fdivs    f3, f4, f3
	fadds    f0, f3, f0
	fmuls    f0, f1, f0
	fmuls    f31, f2, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f3, lbl_8051D158@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f2, lbl_8051D128@sda21(r2)
	lfd      f0, 0x18(r1)
	lfs      f1, lbl_8051D140@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D14C@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F1B70
	lfs      f0, 0x1fc(r31)
	fadds    f31, f31, f0
	b        lbl_802F1B78

lbl_802F1B70:
	lfs      f0, 0x1fc(r31)
	fsubs    f31, f31, f0

lbl_802F1B78:
	lfs      f0, lbl_8051D120@sda21(r2)
	lfs      f3, lbl_8051D13C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_802F1BB4
	lfs      f0, lbl_8051D150@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_802F1BD8

lbl_802F1BB4:
	lfs      f0, lbl_8051D154@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_802F1BD8:
	lfs      f1, 0x18c(r31)
	fmr      f4, f31
	lfs      f0, lbl_8051D120@sda21(r2)
	fmadds   f1, f3, f2, f1
	fcmpo    cr0, f31, f0
	stfs     f1, 0x2d0(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2d4(r31)
	bge      lbl_802F1C00
	fneg     f4, f31

lbl_802F1C00:
	lfs      f0, lbl_8051D154@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f2, lbl_8051D13C@sda21(r2)
	fmuls    f1, f4, f0
	lfs      f0, 0x194(r31)
	fctiwz   f1, f1
	stfd     f1, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2d8(r31)
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1C54
 * Size:	00016C
 */
void Sokkuri::Obj::updateMoveState(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lfs      f1, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lfs      f4, 0x198(r31)
	fsubs    f2, f1, f0
	lfs      f1, 0x18c(r31)
	lwz      r3, 0xc0(r3)
	fsubs    f3, f1, f4
	fmuls    f1, f2, f2
	lfs      f0, 0x35c(r3)
	fmuls    f0, f0, f0
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802F1CB0
	stfs     f4, 0x2d0(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2d4(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2d8(r31)

lbl_802F1CB0:
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_802F1D60
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r1)
	mr       r3, r31
	lfs      f0, lbl_8051D160@sda21(r2)
	addi     r4, r1, 0x14
	lfs      f3, 8(r1)
	lfs      f1, 0x10(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x18(r1)
	stfs     f3, 0x14(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x18(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2cc(r31)
	lfs      f2, 0x934(r3)
	lfs      f0, lbl_8051D120@sda21(r2)
	fsubs    f3, f1, f2
	fcmpo    cr0, f3, f0
	ble      lbl_802F1D30
	b        lbl_802F1D34

lbl_802F1D30:
	fneg     f3, f3

lbl_802F1D34:
	lfs      f0, lbl_8051D134@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_802F1D44
	b        lbl_802F1D58

lbl_802F1D44:
	fcmpo    cr0, f1, f2
	bge      lbl_802F1D54
	fadds    f2, f1, f0
	b        lbl_802F1D58

lbl_802F1D54:
	fsubs    f2, f1, f0

lbl_802F1D58:
	stfs     f2, 0x2cc(r31)
	b        lbl_802F1DAC

lbl_802F1D60:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2cc(r31)
	lfs      f2, 0x2e4(r3)
	lfs      f0, lbl_8051D120@sda21(r2)
	fsubs    f3, f1, f2
	fcmpo    cr0, f3, f0
	ble      lbl_802F1D80
	b        lbl_802F1D84

lbl_802F1D80:
	fneg     f3, f3

lbl_802F1D84:
	lfs      f0, lbl_8051D164@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_802F1D94
	b        lbl_802F1DA8

lbl_802F1D94:
	fcmpo    cr0, f1, f2
	bge      lbl_802F1DA4
	fadds    f2, f1, f0
	b        lbl_802F1DA8

lbl_802F1DA4:
	fsubs    f2, f1, f0

lbl_802F1DA8:
	stfs     f2, 0x2cc(r31)

lbl_802F1DAC:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1DC0
 * Size:	00002C
 */
void Sokkuri::Obj::resetMoveVelocity(void)
{
	/*
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	beq      lbl_802F1DDC
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x934(r4)
	stfs     f0, 0x2cc(r3)
	blr

lbl_802F1DDC:
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x2e4(r4)
	stfs     f0, 0x2cc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1DEC
 * Size:	000078
 */
void Sokkuri::Obj::setNextWaitInfo(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x8e4(r3)
	lfs      f0, 0x90c(r3)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_8051D158@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_8051D140@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1E64
 * Size:	0000C4
 */
void Sokkuri::Obj::createDownEffect(float, float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	fmr      f31, f2
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	beq      lbl_802F1EF8
	lfs      f0, lbl_8051D120@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_802F1F0C
	lfs      f0, 0x18c(r31)
	mr       r3, r0
	stfs     f0, 8(r1)
	lfs      f0, 0x190(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0(r3)
	lfs      f0, lbl_8051D168@sda21(r2)
	stfs     f2, 0xc(r1)
	lfs      f1, 0x190(r31)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F1F0C
	fmr      f1, f31
	mr       r3, r31
	addi     r4, r1, 8
	bl       "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	b        lbl_802F1F0C

lbl_802F1EF8:
	lfs      f0, lbl_8051D120@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802F1F0C
	addi     r4, r31, 0x18c
	bl       "createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"

lbl_802F1F0C:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1F28
 * Size:	0000C0
 */
void Sokkuri::Obj::createBubbleEffect(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x280(r3)
	cmplwi   r3, 0
	beq      lbl_802F1FD4
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0(r3)
	lfs      f1, 0x190(r31)
	lfs      f0, lbl_8051D134@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802F1FD4
	lis      r3, __vt__Q23efx3Arg@ha
	lis      r5, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx3Arg@l
	lis      r4, __vt__Q23efx8TSimple1@ha
	stw      r0, 0x14(r1)
	lis      r3, __vt__Q23efx10TJgmBubble@ha
	addi     r8, r5, __vt__Q23efx5TBase@l
	addi     r7, r4, __vt__Q23efx8TSimple1@l
	lfs      f0, 0x18c(r31)
	addi     r0, r3, __vt__Q23efx10TJgmBubble@l
	li       r6, 0xc1
	li       r5, 0
	stfs     f0, 0x18(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x14
	lfs      f0, 0x190(r31)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x194(r31)
	stw      r8, 8(r1)
	stw      r7, 8(r1)
	stfs     f0, 0x20(r1)
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg

lbl_802F1FD4:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1FE8
 * Size:	000048
 */
void Sokkuri::Obj::createEfxHamon(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F201C
	mr       r3, r31
	bl       createEfxHamon__Q24Game9EnemyBaseFv

lbl_802F201C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F2030
 * Size:	000008
 */
void Sokkuri::Obj::getDownSmokeScale(void)
{
	/*
	lfs      f1, lbl_8051D16C@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F2038
 * Size:	000008
 */
u32 Sokkuri::Obj::getEnemyTypeID(void) { return 0x4F; }
} // namespace Game
