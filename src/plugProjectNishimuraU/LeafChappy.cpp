#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game10LeafChappy3Obj
    __vt__Q34Game10LeafChappy3Obj:
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
        .4byte onInit__Q34Game10KumaChappy3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game10LeafChappy3ObjFR8Graphics
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
        .4byte getShadowParam__Q34Game10LeafChappy3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q24Game9EnemyBaseFv
        .4byte getLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte getLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
        .4byte startPick__Q24Game8CreatureFv
        .4byte endPick__Q24Game8CreatureFb
        .4byte getMabiki__Q24Game8CreatureFv
        .4byte getFootmarks__Q34Game10LeafChappy3ObjFv
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
        .4byte __dt__Q34Game10LeafChappy3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game10KumaChappy3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game10LeafChappy3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q34Game10LeafChappy3ObjFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game10KumaChappy3ObjFR8Graphics
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
        .4byte getOffsetForMapCollision__Q34Game10KumaChappy3ObjFv
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q34Game10LeafChappy3ObjFv
        .4byte initWalkSmokeEffect__Q34Game10LeafChappy3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game10KumaChappy3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game10LeafChappy3ObjFv
        .4byte getMouthSlots__Q34Game10KumaChappy3ObjFv
        .4byte
   doGetLifeGaugeParam__Q34Game10LeafChappy3ObjFRQ24Game14LifeGaugeParam .4byte
   throwupItem__Q24Game9EnemyBaseFv .4byte
   "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>" .4byte
   "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>" .4byte
   throwupItemInDeathProcedure__Q24Game9EnemyBaseFv .4byte
   setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere .4byte
   damageCallBack__Q34Game10KumaChappy3ObjFPQ24Game8CreaturefP8CollPart .4byte
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
   doStartStoneState__Q24Game9EnemyBaseFv .4byte
   doFinishStoneState__Q24Game9EnemyBaseFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game10KumaChappy3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q34Game10LeafChappy3ObjFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game10LeafChappy3ObjFv .4byte
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game10KumaChappy3ObjFPQ34Game10KumaChappy3FSM
        .4byte createChappyRelation__Q34Game10LeafChappy3ObjFv
        .4byte getChappyRelation__Q34Game10LeafChappy3ObjFv
        .4byte startEnemyRumble__Q34Game10LeafChappy3ObjFv
        .4byte resetChappyRelation__Q34Game10LeafChappy3ObjFv
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@764@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@764@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@764@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@764@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@764@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@764@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051C5F8
    lbl_8051C5F8:
        .4byte 0x00000000
    .global lbl_8051C5FC
    lbl_8051C5FC:
        .4byte 0x40200000
    .global lbl_8051C600
    lbl_8051C600:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051C608
    lbl_8051C608:
        .4byte 0x61676F00
    .global lbl_8051C60C
    lbl_8051C60C:
        .4byte 0x40E00000
    .global lbl_8051C610
    lbl_8051C610:
        .4byte 0x40A00000
    .global lbl_8051C614
    lbl_8051C614:
        .float 1.0
    .global lbl_8051C618
    lbl_8051C618:
        .4byte 0x42480000
    .global lbl_8051C61C
    lbl_8051C61C:
        .4byte 0x41F00000
    .global lbl_8051C620
    lbl_8051C620:
        .4byte 0x41480000
    .global lbl_8051C624
    lbl_8051C624:
        .4byte 0x6B616D75
        .4byte 0x31000000
    .global lbl_8051C62C
    lbl_8051C62C:
        .4byte 0x6B616D75
        .4byte 0x32000000
    .global lbl_8051C634
    lbl_8051C634:
        .4byte 0x6B616D75
        .4byte 0x33000000
    .global lbl_8051C63C
    lbl_8051C63C:
        .4byte 0x6173694C
        .4byte 0x00000000
    .global lbl_8051C644
    lbl_8051C644:
        .4byte 0x61736952
        .4byte 0x00000000
    .global lbl_8051C64C
    lbl_8051C64C:
        .4byte 0x40490FDB
    .global lbl_8051C650
    lbl_8051C650:
        .4byte 0x43A2F983
    .global lbl_8051C654
    lbl_8051C654:
        .4byte 0xC3A2F983
    .global lbl_8051C658
    lbl_8051C658:
        .4byte 0x418C0000
    .global lbl_8051C65C
    lbl_8051C65C:
        .4byte 0x3ECCCCCD
    .global lbl_8051C660
    lbl_8051C660:
        .4byte 0x3F0CCCCD
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802C5C18
 * Size:	000098
 */
LeafChappy::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_802C5C54
	addi     r0, r31, 0x2fc
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2fc(r31)
	stw      r0, 0x300(r31)
	stw      r0, 0x304(r31)

lbl_802C5C54:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q34Game10KumaChappy3ObjFv
	lis      r3, __vt__Q34Game10LeafChappy3Obj@ha
	addi     r0, r31, 0x2fc
	addi     r5, r3, __vt__Q34Game10LeafChappy3Obj@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x30c
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       createFootmarks__Q34Game10LeafChappy3ObjFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C5CB0
 * Size:	0000C0
 */
void LeafChappy::Obj::doUpdate()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	bl       doUpdate__Q34Game10KumaChappy3ObjFv
	lwz      r4, gameSystem__4Game@sda21(r13)
	lis      r0, 0x4330
	lwz      r3, 0x2f8(r31)
	lwz      r4, 0x50(r4)
	lwz      r3, 0x10(r3)
	stw      r0, 0x28(r1)
	subf     r0, r4, r3
	lfd      f2, lbl_8051C600@sda21(r2)
	xoris    r0, r0, 0x8000
	lfs      f0, lbl_8051C5F8@sda21(r2)
	stw      r0, 0x2c(r1)
	lfd      f1, 0x28(r1)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_802C5D08
	b        lbl_802C5D0C

lbl_802C5D08:
	fneg     f1, f1

lbl_802C5D0C:
	lfs      f0, lbl_8051C5FC@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802C5D5C
	addi     r3, r1, 0x14
	bl       __ct__Q24Game8FootmarkFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r4, r1, 0x14
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0x2f8(r31)
	bl       add__Q24Game9FootmarksFRQ24Game8Footmark

lbl_802C5D5C:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C5D70
 * Size:	000004
 */
void LeafChappy::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802C5D74
 * Size:	0000C4
 */
void LeafChappy::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r4, r2, lbl_8051C608@sda21
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f3, 0x1c(r3)
	lfs      f1, 0xc(r3)
	lfs      f0, lbl_8051C60C@sda21(r2)
	stfs     f1, 0(r31)
	lfs      f2, lbl_8051C610@sda21(r2)
	stfs     f3, 4(r31)
	stfs     f4, 8(r31)
	lfs      f1, 4(r31)
	fsubs    f0, f1, f0
	stfs     f0, 4(r31)
	lfs      f1, 0x190(r30)
	lfs      f0, 4(r31)
	fadds    f1, f2, f1
	fcmpo    cr0, f0, f1
	bge      lbl_802C5DE4
	stfs     f1, 4(r31)

lbl_802C5DE4:
	lfs      f1, lbl_8051C5F8@sda21(r2)
	lfs      f0, lbl_8051C614@sda21(r2)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802C5E10
	lfs      f0, lbl_8051C618@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802C5E18

lbl_802C5E10:
	lfs      f0, lbl_8051C61C@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802C5E18:
	lfs      f0, lbl_8051C620@sda21(r2)
	stfs     f0, 0x1c(r31)
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
 * Address:	802C5E38
 * Size:	0000B4
 */
void LeafChappy::Obj::initMouthSlots()
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
	li       r4, 3
	addi     r3, r30, 0x2d8
	bl       alloc__10MouthSlotsFi
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2d8
	li       r4, 0
	addi     r6, r2, lbl_8051C624@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2d8
	li       r4, 1
	addi     r6, r2, lbl_8051C62C@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2d8
	li       r4, 2
	addi     r6, r2, lbl_8051C634@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lfs      f31, lbl_8051C61C@sda21(r2)
	li       r31, 0
	b        lbl_802C5EC0

lbl_802C5EAC:
	mr       r4, r31
	addi     r3, r30, 0x2d8
	bl       getSlot__10MouthSlotsFi
	stfs     f31, 0x1c(r3)
	addi     r31, r31, 1

lbl_802C5EC0:
	lwz      r0, 0x2d8(r30)
	cmpw     r31, r0
	blt      lbl_802C5EAC
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
 * Address:	802C5EEC
 * Size:	000064
 */
void LeafChappy::Obj::initWalkSmokeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 2
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x2c0
	bl       alloc__Q34Game15WalkSmokeEffect3MgrFi
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c0
	lfs      f1, lbl_8051C610@sda21(r2)
	li       r4, 0
	addi     r6, r2, lbl_8051C63C@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c0
	lfs      f1, lbl_8051C610@sda21(r2)
	li       r4, 1
	addi     r6, r2, lbl_8051C644@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C5F50
 * Size:	000020
 */
void LeafChappy::Obj::doBecomeCarcass()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doBecomeCarcass__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C5F70
 * Size:	000020
 */
void LeafChappy::Obj::doUpdateCarcass()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doUpdateCarcass__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C5F90
 * Size:	000020
 */
void LeafChappy::Obj::doGetLifeGaugeParam(Game::LifeGaugeParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C5FB0
 * Size:	000244
 */
void LeafChappy::Obj::birthChildren(Game::EnemyBirthArg&)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stfd     f25, 0x70(r1)
	psq_st   f25, 120(r1), 0, qr0
	stfd     f24, 0x60(r1)
	psq_st   f24, 104(r1), 0, qr0
	stfd     f23, 0x50(r1)
	psq_st   f23, 88(r1), 0, qr0
	stmw     r26, 0x38(r1)
	lfs      f2, lbl_8051C64C@sda21(r2)
	mr       r31, r3
	lfs      f1, 0xc(r4)
	lfs      f0, lbl_8051C5F8@sda21(r2)
	fadds    f3, f2, f1
	lfs      f27, 0(r4)
	lfs      f26, 4(r4)
	lfs      f25, 8(r4)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802C6038
	fneg     f1, f3

lbl_802C6038:
	lfs      f2, lbl_8051C650@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C5F8@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f28, 4(r3)
	bge      lbl_802C6090
	lfs      f0, lbl_8051C654@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f29, f0
	b        lbl_802C60A8

lbl_802C6090:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f29, r4, r0

lbl_802C60A8:
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	lis      r3, __vt__Q24Game11PikiInitArg@ha
	lfs      f30, lbl_8051C5FC@sda21(r2)
	addi     r29, r4, __vt__Q24Game15CreatureInitArg@l
	lfd      f31, lbl_8051C600@sda21(r2)
	addi     r30, r3, __vt__Q24Game11PikiInitArg@l
	lfs      f23, lbl_8051C658@sda21(r2)
	li       r27, 0
	lfs      f24, lbl_8051C5F8@sda21(r2)
	lis      r28, 0x4330

lbl_802C60D0:
	xoris    r0, r27, 0x8000
	stw      r28, 0x30(r1)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	stw      r0, 0x34(r1)
	lfd      f0, 0x30(r1)
	stfs     f24, 0x18(r1)
	fsubs    f0, f0, f31
	fmadds   f0, f30, f0, f23
	fmuls    f1, f0, f29
	fmuls    f0, f0, f28
	stfs     f1, 0x14(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r29, 8(r1)
	li       r4, -1
	or.      r26, r3, r3
	stw      r0, 0x10(r1)
	stw      r30, 8(r1)
	stw      r4, 0xc(r1)
	stw      r31, 0x10(r1)
	beq      lbl_802C618C
	addi     r4, r1, 8
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lfs      f2, 0x14(r1)
	addi     r4, r1, 0x14
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fadds    f2, f2, f27
	fadds    f1, f1, f26
	lwz      r3, mapMgr__4Game@sda21(r13)
	fadds    f0, f0, f25
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x18(r1)
	mr       r3, r26
	addi     r4, r1, 0x14
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_802C618C:
	addi     r27, r27, 1
	cmpwi    r27, 0xa
	blt      lbl_802C60D0
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	psq_l    f25, 120(r1), 0, qr0
	lfd      f25, 0x70(r1)
	psq_l    f24, 104(r1), 0, qr0
	lfd      f24, 0x60(r1)
	psq_l    f23, 88(r1), 0, qr0
	lfd      f23, 0x50(r1)
	lmw      r26, 0x38(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C61F4
 * Size:	00007C
 */
void LeafChappy::Obj::startEnemyRumble()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	addi     r4, r2, lbl_8051C608@sda21
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	addi     r5, r1, 8
	lfs      f1, 0x1c(r3)
	li       r4, 8
	lfs      f0, 0xc(r3)
	li       r6, 2
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	lfs      f0, 0x190(r31)
	stfs     f0, 0xc(r1)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lfs      f1, lbl_8051C65C@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 8
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C6270
 * Size:	000050
 */
void LeafChappy::Obj::createFootmarks()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802C629C
	bl       __ct__Q24Game9FootmarksFv
	mr       r0, r3

lbl_802C629C:
	stw      r0, 0x2f8(r31)
	li       r4, 0xa
	lwz      r3, 0x2f8(r31)
	bl       alloc__Q24Game9FootmarksFi
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C62C0
 * Size:	000008
 */
void LeafChappy::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051C660@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C62C8
 * Size:	000008
 */
u32 LeafChappy::Obj::getEnemyTypeID() { return 0x43; }

/*
 * --INFO--
 * Address:	802C62D0
 * Size:	000004
 */
void LeafChappy::Obj::createChappyRelation() { }

/*
 * --INFO--
 * Address:	802C62D4
 * Size:	000004
 */
void LeafChappy::Obj::resetChappyRelation() { }

/*
 * --INFO--
 * Address:	802C62D8
 * Size:	000008
 */
u32 LeafChappy::Obj::getChappyRelation() { return 0x0; }

/*
 * --INFO--
 * Address:	802C62E0
 * Size:	000008
 */
void LeafChappy::Obj::getFootmarks()
{
	/*
	lwz      r3, 0x2f8(r3)
	blr
	*/
}
} // namespace Game
