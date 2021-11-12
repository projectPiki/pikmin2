#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global "__vt__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>"
    "__vt__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>":
        .4byte 0
        .4byte 0
        .4byte "first__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv"
        .4byte "next__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv"
        .4byte "isDone__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv"
        .4byte "__ml__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>Fv"
    .global __vt__Q34Game12KumaKochappy3Obj
    __vt__Q34Game12KumaKochappy3Obj:
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
        .4byte onInit__Q34Game12KumaKochappy3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game12KumaKochappy3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game12KumaKochappy3ObjFR8Graphics
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
        .4byte getShadowParam__Q34Game12KumaKochappy3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game12KumaKochappy3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game12KumaKochappy3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game12KumaKochappy3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game12KumaKochappy3ObjFR8Graphics
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
        .4byte initMouthSlots__Q34Game12KumaKochappy3ObjFv
        .4byte initWalkSmokeEffect__Q34Game12KumaKochappy3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game12KumaKochappy3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game12KumaKochappy3ObjFv
        .4byte getMouthSlots__Q34Game12KumaKochappy3ObjFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte
   pressCallBack__Q34Game12KumaKochappy3ObjFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game12KumaKochappy3ObjFPQ24Game8CreaturefP8CollPart
        .4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
        .4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
        .4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
        .4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
        .4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
        .4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
        .4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
        .4byte doStartStoneState__Q24Game9EnemyBaseFv
        .4byte doFinishStoneState__Q24Game9EnemyBaseFv
        .4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
        .4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
        .4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
        .4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
        .4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
        .4byte lifeRecover__Q24Game9EnemyBaseFv
        .4byte startCarcassMotion__Q34Game12KumaKochappy3ObjFv
        .4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
        .4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
        .4byte doBecomeCarcass__Q24Game9EnemyBaseFv
        .4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
        .4byte getDownSmokeScale__Q34Game12KumaKochappy3ObjFv
        .4byte doStartMovie__Q24Game9EnemyBaseFv
        .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game12KumaKochappy3ObjFPQ34Game12KumaKochappy3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@744@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@744@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@744@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@744@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@744@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@744@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051CEC0
    lbl_8051CEC0:
        .4byte 0x61676F00
    .global lbl_8051CEC4
    lbl_8051CEC4:
        .4byte 0x40A00000
    .global lbl_8051CEC8
    lbl_8051CEC8:
        .4byte 0x00000000
    .global lbl_8051CECC
    lbl_8051CECC:
        .float 1.0
    .global lbl_8051CED0
    lbl_8051CED0:
        .4byte 0x42480000
    .global lbl_8051CED4
    lbl_8051CED4:
        .4byte 0x41A00000
    .global lbl_8051CED8
    lbl_8051CED8:
        .4byte 0x41200000
    .global lbl_8051CEDC
    lbl_8051CEDC:
        .4byte 0x6B616D75
        .4byte 0x00000000
    .global lbl_8051CEE4
    lbl_8051CEE4:
        .4byte 0x41700000
    .global lbl_8051CEE8
    lbl_8051CEE8:
        .4byte 0x6173694C
        .4byte 0x00000000
    .global lbl_8051CEF0
    lbl_8051CEF0:
        .4byte 0x40800000
    .global lbl_8051CEF4
    lbl_8051CEF4:
        .4byte 0x61736952
        .4byte 0x00000000
    .global lbl_8051CEFC
    lbl_8051CEFC:
        .4byte 0x47000000
    .global lbl_8051CF00
    lbl_8051CF00:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051CF08
    lbl_8051CF08:
        .4byte 0x3ECCCCCD
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802E7050
 * Size:	000148
 */
KumaKochappy::Obj::Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802E7090
	addi     r0, r31, 0x2e8
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2e8(r31)
	stw      r0, 0x2ec(r31)
	stw      r0, 0x2f0(r31)

lbl_802E7090:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game12KumaKochappy3Obj@ha
	addi     r0, r31, 0x2e8
	addi     r5, r3, __vt__Q34Game12KumaKochappy3Obj@l
	addi     r3, r31, 0x2c0
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x2fc
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __ct__Q34Game15WalkSmokeEffect3MgrFv
	addi     r3, r31, 0x2d0
	bl       __ct__10MouthSlotsFv
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802E712C
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game12KumaKochappy14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game12KumaKochappy14ProperAnimator@l
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

lbl_802E712C:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802E7160
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game12KumaKochappy3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game12KumaKochappy3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802E7160:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createChappyRelation__Q34Game12KumaKochappy3ObjFv
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
 * Address:	802E7198
 * Size:	000004
 */
void KumaKochappy::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802E719C
 * Size:	000068
 */
void KumaKochappy::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	bl       setNearestParent__Q34Game12KumaKochappy3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       resetZukanAnimationFrame__Q34Game12KumaKochappy3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E7204
 * Size:	000044
 */
void KumaKochappy::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       releaseParent__Q34Game12KumaKochappy3ObjFv
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
 * Address:	802E7248
 * Size:	00004C
 */
void KumaKochappy::Obj::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       updateHomePosition__Q34Game12KumaKochappy3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x2d0
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
 * Address:	802E7294
 * Size:	000004
 */
void KumaKochappy::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802E7298
 * Size:	000020
 */
void KumaKochappy::Obj::doDebugDraw(Graphics&)
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
 * Address:	802E72B8
 * Size:	00004C
 */
void KumaKochappy::Obj::setFSM(Game::KumaKochappy::FSM*)
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
 * Address:	802E7304
 * Size:	0000A8
 */
void KumaKochappy::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r4, r2, lbl_8051CEC0@sda21
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f2, 0x1c(r3)
	lfs      f0, 0xc(r3)
	lfs      f3, lbl_8051CEC4@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051CEC8@sda21(r2)
	stfs     f2, 4(r31)
	lfs      f0, lbl_8051CECC@sda21(r2)
	stfs     f4, 8(r31)
	lfs      f2, 0x190(r30)
	fadds    f2, f3, f2
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802E7384
	lfs      f0, lbl_8051CED0@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802E738C

lbl_802E7384:
	lfs      f0, lbl_8051CED4@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802E738C:
	lfs      f0, lbl_8051CED8@sda21(r2)
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
 * Address:	802E73AC
 * Size:	000088
 */
void KumaKochappy::Obj::pressCallBack(Game::Creature*, float, CollPart*)
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
	beq      lbl_802E741C
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_802E741C
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	ble      lbl_802E741C
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_802E7420

lbl_802E741C:
	li       r3, 0

lbl_802E7420:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E7434
 * Size:	00002C
 */
void KumaKochappy::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
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
 * Address:	802E7460
 * Size:	000028
 */
void KumaKochappy::Obj::startCarcassMotion(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 5
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
 * Address:	802E7488
 * Size:	00008C
 */
void KumaKochappy::Obj::initMouthSlots(void)
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
	addi     r3, r30, 0x2d0
	bl       alloc__10MouthSlotsFi
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2d0
	li       r4, 0
	addi     r6, r2, lbl_8051CEDC@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lfs      f31, lbl_8051CEE4@sda21(r2)
	li       r31, 0
	b        lbl_802E74E8

lbl_802E74D4:
	mr       r4, r31
	addi     r3, r30, 0x2d0
	bl       getSlot__10MouthSlotsFi
	stfs     f31, 0x1c(r3)
	addi     r31, r31, 1

lbl_802E74E8:
	lwz      r0, 0x2d0(r30)
	cmpw     r31, r0
	blt      lbl_802E74D4
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
 * Address:	802E7514
 * Size:	000064
 */
void KumaKochappy::Obj::initWalkSmokeEffect(void)
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
	lfs      f1, lbl_8051CEF0@sda21(r2)
	li       r4, 0
	addi     r6, r2, lbl_8051CEE8@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c0
	lfs      f1, lbl_8051CEF0@sda21(r2)
	li       r4, 1
	addi     r6, r2, lbl_8051CEF4@sda21
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
 * Address:	802E7578
 * Size:	000008
 */
void KumaKochappy::Obj::getWalkSmokeEffectMgr(void)
{
	/*
	addi     r3, r3, 0x2c0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E7580
 * Size:	000078
 */
void KumaKochappy::Obj::resetZukanAnimationFrame(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_802E75E4
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	bne      lbl_802E75E4
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	mr       r3, r31
	lfd      f3, lbl_8051CF00@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051CED0@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_8051CEFC@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f1, f1, f0
	bl       setMotionFrame__Q24Game9EnemyBaseFf

lbl_802E75E4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E75F8
 * Size:	000380
 */
void KumaKochappy::Obj::setNearestParent(void)
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
	mr       r30, r3
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r31, 0
	li       r4, 0x23
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	cmplwi   r3, 0
	beq      lbl_802E7934
	lwz      r4, 0xc0(r30)
	lfs      f0, 0x44c(r4)
	lfs      f31, 0x49c(r4)
	fmuls    f30, f0, f0
	beq      lbl_802E765C
	addi     r3, r3, 4

lbl_802E765C:
	li       r0, 0
	lis      r4, "__vt__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>"@ha
	addi     r4, r4, "__vt__Q24Game38EnemyIterator<Q34Game10KumaChappy3Obj>"@l
	stw      r0, 0x50(r1)
	cmplwi   r0, 0
	stw      r4, 0x44(r1)
	stw      r0, 0x48(r1)
	stw      r3, 0x4c(r1)
	bne      lbl_802E7698
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_802E7914

lbl_802E7698:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_802E7704

lbl_802E76B0:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802E7914
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

lbl_802E7704:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E76B0
	b        lbl_802E7914

lbl_802E7724:
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	mr       r29, r0
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E7858
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f29, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_802E7858
	mr       r4, r29
	addi     r3, r1, 0x38
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x194(r30)
	lfs      f0, 0x40(r1)
	lfs      f2, 0x18c(r30)
	fsubs    f1, f1, f0
	lfs      f0, 0x38(r1)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f30
	bge      lbl_802E7858
	mr       r31, r29
	fmr      f30, f0

lbl_802E7858:
	lwz      r0, 0x50(r1)
	cmplwi   r0, 0
	bne      lbl_802E7884
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_802E7914

lbl_802E7884:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_802E78F8

lbl_802E78A4:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802E7914
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

lbl_802E78F8:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E78A4

lbl_802E7914:
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x48(r1)
	cmplw    r4, r3
	bne      lbl_802E7724

lbl_802E7934:
	mr       r3, r30
	mr       r4, r31
	bl       addParentEnemy__Q34Game12KumaKochappy3ObjFPQ34Game10KumaChappy3Obj
	mr       r3, r31
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r0, 0xa4(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	802E7978
 * Size:	00004C
 */
void isDone__Q24Game38EnemyIterator<Game::KumaChappy::Obj> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	subf     r0, r0, r3
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	802E79C4
 * Size:	0001A8
 */
void KumaKochappy::Obj::setTargetParentPosition(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	bl       setNearestParent__Q34Game12KumaKochappy3ObjFv
	lwz      r3, 0x2e4(r30)
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	beq      lbl_802E7B50
	mr       r3, r30
	bl       getParentRelation__Q34Game12KumaKochappy3ObjFv
	lwz      r31, 0x18(r3)
	cmplwi   r31, 0
	beq      lbl_802E7B50
	li       r0, 0
	mr       r3, r30
	stw      r0, 8(r1)
	addi     r4, r1, 8
	bl       getEnemyIndex__Q34Game12KumaKochappy3ObjFRi
	mr       r4, r31
	addi     r3, r1, 0xc
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r1)
	lfs      f1, 0x18c(r30)
	lfs      f0, 0x10(r1)
	fsubs    f3, f1, f2
	lfs      f1, 0x14(r1)
	lfs      f4, lbl_8051CEC8@sda21(r2)
	stfs     f3, 0x2d8(r30)
	stfs     f4, 0x2dc(r30)
	lfs      f3, 0x194(r30)
	fsubs    f3, f3, f1
	stfs     f3, 0x2e0(r30)
	lfs      f6, 0x2d8(r30)
	lfs      f5, 0x2dc(r30)
	lfs      f7, 0x2e0(r30)
	fmuls    f3, f6, f6
	fmuls    f5, f5, f5
	fmuls    f7, f7, f7
	fadds    f3, f3, f5
	fadds    f3, f7, f3
	fcmpo    cr0, f3, f4
	ble      lbl_802E7AA0
	fmadds   f3, f6, f6, f5
	fadds    f5, f7, f3
	fcmpo    cr0, f5, f4
	ble      lbl_802E7AA4
	frsqrte  f3, f5
	fmuls    f5, f3, f5
	b        lbl_802E7AA4

lbl_802E7AA0:
	fmr      f5, f4

lbl_802E7AA4:
	lfs      f3, lbl_8051CEC8@sda21(r2)
	fcmpo    cr0, f5, f3
	ble      lbl_802E7ADC
	lfs      f4, lbl_8051CECC@sda21(r2)
	lfs      f3, 0x2d8(r30)
	fdivs    f4, f4, f5
	fmuls    f3, f3, f4
	stfs     f3, 0x2d8(r30)
	lfs      f3, 0x2dc(r30)
	fmuls    f3, f3, f4
	stfs     f3, 0x2dc(r30)
	lfs      f3, 0x2e0(r30)
	fmuls    f3, f3, f4
	stfs     f3, 0x2e0(r30)

lbl_802E7ADC:
	lwz      r4, 8(r1)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	addi     r3, r30, 0x2d8
	xoris    r0, r4, 0x8000
	lfd      f5, lbl_8051CF00@sda21(r2)
	stw      r0, 0x1c(r1)
	lfs      f6, lbl_8051CED8@sda21(r2)
	lfd      f3, 0x18(r1)
	lfs      f4, lbl_8051CEE4@sda21(r2)
	fsubs    f5, f3, f5
	lfs      f3, 0x2d8(r30)
	fmadds   f4, f6, f5, f4
	fmuls    f3, f3, f4
	stfs     f3, 0x2d8(r30)
	lfs      f3, 0x2dc(r30)
	fmuls    f3, f3, f4
	stfs     f3, 0x2dc(r30)
	lfs      f3, 0x2e0(r30)
	fmuls    f3, f3, f4
	stfs     f3, 0x2e0(r30)
	lfs      f3, 0x2d8(r30)
	fadds    f2, f3, f2
	stfs     f2, 0x2d8(r30)
	stfs     f0, 0x2dc(r30)
	lfs      f0, 0x2e0(r30)
	fadds    f0, f0, f1
	stfs     f0, 0x2e0(r30)
	b        lbl_802E7B54

lbl_802E7B50:
	li       r3, 0

lbl_802E7B54:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E7B6C
 * Size:	00001C
 */
void KumaKochappy::Obj::updateHomePosition(void)
{
	/*
	lfs      f0, 0x18c(r3)
	stfs     f0, 0x198(r3)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x19c(r3)
	lfs      f0, 0x194(r3)
	stfs     f0, 0x1a0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E7B88
 * Size:	000038
 */
void KumaKochappy::Obj::getSearchedTarget(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	li       r5, 0
	stw      r0, 0x14(r1)
	li       r6, 0
	lwz      r7, 0xc0(r3)
	lfs      f1, 0x424(r7)
	lfs      f2, 0x3d4(r7)
	bl
	"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E7BC0
 * Size:	000070
 */
void KumaKochappy::Obj::createChappyRelation(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_802E7BFC
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game14ChappyRelation@ha
	addi     r0, r3, __vt__Q24Game14ChappyRelation@l
	stw      r0, 0(r31)
	stw      r30, 0x18(r31)

lbl_802E7BFC:
	stw      r31, 0x2e4(r30)
	li       r0, 0
	lwz      r3, 0x2e4(r30)
	stw      r0, 0x10(r3)
	stw      r0, 0xc(r3)
	stw      r0, 8(r3)
	stw      r0, 4(r3)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E7C30
 * Size:	000024
 */
void KumaKochappy::Obj::releaseParent(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e4(r3)
	bl       del__5CNodeFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E7C54
 * Size:	00000C
 */
void KumaKochappy::Obj::getParentRelation(void)
{
	/*
	lwz      r3, 0x2e4(r3)
	lwz      r3, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E7C60
 * Size:	00003C
 */
void KumaKochappy::Obj::getEnemyIndex(int&)
{
	/*
	lwz      r5, 0x2e4(r3)
	li       r6, 0
	lwz      r5, 0xc(r5)
	lwz      r5, 0x10(r5)
	b        lbl_802E7C8C

lbl_802E7C74:
	lwz      r0, 0x2e4(r3)
	cmplw    r5, r0
	bne      lbl_802E7C84
	stw      r6, 0(r4)

lbl_802E7C84:
	lwz      r5, 4(r5)
	addi     r6, r6, 1

lbl_802E7C8C:
	cmplwi   r5, 0
	bne      lbl_802E7C74
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E7C9C
 * Size:	0000A0
 */
void KumaKochappy::Obj::addParentEnemy(Game::KumaChappy::Obj*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	beq      lbl_802E7D0C
	mr       r3, r30
	lwz      r4, 0x2e4(r29)
	lwz      r12, 0(r30)
	lwz      r31, 0xc(r4)
	lwz      r12, 0x300(r12)
	mtctr    r12
	bctrl
	cmplw    r3, r31
	beq      lbl_802E7D20
	lwz      r3, 0x2e4(r29)
	bl       del__5CNodeFv
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x300(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2e4(r29)
	bl       add__5CNodeFP5CNode
	b        lbl_802E7D20

lbl_802E7D0C:
	lwz      r3, 0x2e4(r29)
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	beq      lbl_802E7D20
	bl       del__5CNodeFv

lbl_802E7D20:
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

/*
 * --INFO--
 * Address:	802E7D3C
 * Size:	000038
 */
void __ml__Q24Game38EnemyIterator<Game::KumaChappy::Obj> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	lwz      r4, 4(r4)
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
 * Address:	802E7D74
 * Size:	0000E4
 */
void next__Q24Game38EnemyIterator<Game::KumaChappy::Obj> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_802E7DB4
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_802E7E44

lbl_802E7DB4:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_802E7E28

lbl_802E7DD4:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802E7E44
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_802E7E28:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E7DD4

lbl_802E7E44:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E7E58
 * Size:	0000DC
 */
void first__Q24Game38EnemyIterator<Game::KumaChappy::Obj> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_802E7E94
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_802E7F20

lbl_802E7E94:
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_802E7F04

lbl_802E7EB0:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802E7F20
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_802E7F04:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E7EB0

lbl_802E7F20:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	802E7F34
 * Size:	000008
 */
void KumaKochappy::Obj::getMouthSlots(void)
{
	/*
	addi     r3, r3, 0x2d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E7F3C
 * Size:	000008
 */
void KumaKochappy::Obj::getDownSmokeScale(void)
{
	/*
	lfs      f1, lbl_8051CF08@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E7F44
 * Size:	000008
 */
u32 KumaKochappy::Obj::getEnemyTypeID(void) { return 0x4C; }
} // namespace Game
