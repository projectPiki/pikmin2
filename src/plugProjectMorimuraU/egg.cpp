#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game3Egg3Obj
    __vt__Q34Game3Egg3Obj:
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
        .4byte onInit__Q34Game3Egg3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q34Game3Egg3ObjFf
        .4byte doDirectDraw__Q34Game3Egg3ObjFR8Graphics
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
        .4byte onStartCapture__Q34Game3Egg3ObjFv
        .4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
        .4byte onEndCapture__Q34Game3Egg3ObjFv
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
        .4byte isLivingThing__Q34Game3Egg3ObjFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q34Game3Egg3ObjFPQ23Sys8Triangle
        .4byte collisionCallback__Q34Game3Egg3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game3Egg3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q34Game3Egg3ObjFv
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
        .4byte __dt__Q34Game3Egg3ObjFv
        .4byte "birth__Q34Game3Egg3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game3Egg3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game3Egg3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q34Game3Egg3ObjFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game3Egg3ObjFR8Graphics .4byte
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
        .4byte setParameters__Q34Game3Egg3ObjFv
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
        .4byte getEnemyTypeID__Q34Game3Egg3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q34Game3Egg3ObjFPQ24Game8CreaturefP8CollPart
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
   doStartStoneState__Q24Game9EnemyBaseFv .4byte
   doFinishStoneState__Q24Game9EnemyBaseFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
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
   getDownSmokeScale__Q34Game3Egg3ObjFv .4byte doStartMovie__Q24Game9EnemyBaseFv
        .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game3Egg3ObjFPQ34Game3Egg3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@708@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@708@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@708@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@708@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@708@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@708@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E388
    lbl_8051E388:
        .4byte 0x41A00000
    .global lbl_8051E38C
    lbl_8051E38C:
        .4byte 0x00000000
    .global lbl_8051E390
    lbl_8051E390:
        .4byte 0x40000000
    .global lbl_8051E394
    lbl_8051E394:
        .float 1.0
    .global lbl_8051E398
    lbl_8051E398:
        .4byte 0x41200000
    .global lbl_8051E39C
    lbl_8051E39C:
        .4byte 0x437A0000
    .global lbl_8051E3A0
    lbl_8051E3A0:
        .4byte 0x47000000
    .global lbl_8051E3A4
    lbl_8051E3A4:
        .4byte 0x40400000
    .global lbl_8051E3A8
    lbl_8051E3A8:
        .4byte 0x40C90FDB
    .global lbl_8051E3AC
    lbl_8051E3AC:
        .4byte 0x40490FDB
    .global lbl_8051E3B0
    lbl_8051E3B0:
        .4byte 0x42480000
    .global lbl_8051E3B4
    lbl_8051E3B4:
        .4byte 0xC3A2F983
    .global lbl_8051E3B8
    lbl_8051E3B8:
        .4byte 0x43A2F983
    .global lbl_8051E3BC
    lbl_8051E3BC:
        .4byte 0x43480000
    .global lbl_8051E3C0
    lbl_8051E3C0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051E3C8
    lbl_8051E3C8:
        .float 0.4
*/

namespace Game {

/*
 * --INFO--
 * Address:	8034BB30
 * Size:	000020
 */
void Egg::Obj::setParameters(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       setParameters__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8034BB50
 * Size:	000020
 */
void birth__Q34Game3Egg3ObjFR10Vector3f f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8034BB70
 * Size:	000150
 */
void Egg::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x19, 0x17
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x18, 0x16
	stw      r0, 0x1e0(r31)
	bl       setEmotionNone__Q24Game9EnemyBaseFv
	lwz      r3, 0x1e0(r31)
	li       r0, 0
	mr       r4, r31
	li       r5, 0
	oris     r3, r3, 0x40
	li       r6, 0
	stw      r3, 0x1e0(r31)
	stb      r0, 0x2bc(r31)
	lwz      r3, 0x2c0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       isBirthTypeDropGroup__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034BCAC
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x400
	stw      r0, 0x1e0(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8034BC4C
	lfs      f1, 0x18c(r31)
	addi     r4, r1, 8
	lfs      f0, lbl_8051E388@sda21(r2)
	stfs     f1, 8(r1)
	lfs      f1, 0x190(r31)
	stfs     f1, 0xc(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x194(r31)
	stfs     f1, 0x10(r1)
	stfs     f0, 0xc(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x190(r31)

lbl_8034BC4C:
	lwz      r4, 0x188(r31)
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x24(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x138
	addi     r4, r31, 0x168
	addi     r5, r31, 0x1a4
	addi     r6, r31, 0x18c
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8034BCAC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034BCC0
 * Size:	000138
 */
Egg::Obj::Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8034BD00
	addi     r0, r31, 0x2c4
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2c4(r31)
	stw      r0, 0x2c8(r31)
	stw      r0, 0x2cc(r31)

lbl_8034BD00:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game3Egg3Obj@ha
	addi     r4, r31, 0x2c4
	addi     r3, r3, __vt__Q34Game3Egg3Obj@l
	li       r0, 0
	stw      r3, 0(r31)
	addi     r5, r3, 0x1b0
	addi     r6, r3, 0x2fc
	li       r3, 0x2c
	stw      r5, 0x178(r31)
	lwz      r5, 0x17c(r31)
	stw      r6, 0(r5)
	lwz      r5, 0x17c(r31)
	subf     r4, r5, r4
	stw      r4, 0xc(r5)
	stw      r0, 0x2c0(r31)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8034BD94
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game3Egg14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game3Egg14ProperAnimator@l
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

lbl_8034BD94:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8034BDC8
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game3Egg3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game3Egg3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_8034BDC8:
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
 * Address:	8034BDF8
 * Size:	00004C
 */
void Egg::Obj::setFSM(Game::Egg::FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x2c0(r3)
	mr       r4, r31
	lwz      r3, 0x2c0(r3)
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
 * Address:	8034BE44
 * Size:	00006C
 */
void Egg::Obj::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r0, 0xc8(r3)
	cmplwi   r0, 0
	beq      lbl_8034BE74
	lfs      f0, lbl_8051E38C@sda21(r2)
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	b        lbl_8034BE8C

lbl_8034BE74:
	lfs      f0, 0x1c8(r4)
	stfs     f0, 0x1d4(r4)
	lfs      f0, 0x1cc(r4)
	stfs     f0, 0x1d8(r4)
	lfs      f0, 0x1d0(r4)
	stfs     f0, 0x1dc(r4)

lbl_8034BE8C:
	lwz      r3, 0x2c0(r4)
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
 * Address:	8034BEB0
 * Size:	000004
 */
void Egg::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8034BEB4
 * Size:	000020
 */
void Egg::Obj::doDebugDraw(Graphics&)
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
 * Address:	8034BED4
 * Size:	00004C
 */
void Egg::Obj::doSimulation(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0xb8(r3)
	cmplwi   r4, 0
	beq      lbl_8034BF0C
	lfs      f2, 0x2c(r4)
	lfs      f1, 0x1c(r4)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x18c(r3)
	stfs     f1, 0x190(r3)
	stfs     f2, 0x194(r3)
	bl       updateSpheres__Q24Game9EnemyBaseFv
	b        lbl_8034BF10

lbl_8034BF0C:
	bl       doSimulation__Q24Game9EnemyBaseFf

lbl_8034BF10:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034BF20
 * Size:	000128
 */
void Egg::Obj::doAnimationCullingOff(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 0x188(r3)
	stb      r0, 0x24(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb8(r30)
	lfs      f3, 0x164(r30)
	cmplwi   r3, 0
	lfs      f2, 0x154(r30)
	lfs      f1, 0x144(r30)
	beq      lbl_8034BFA4
	lfs      f0, 0xc(r3)
	li       r31, 0
	lfs      f4, 0x2c(r3)
	fcmpu    cr0, f1, f0
	lfs      f0, 0x1c(r3)
	bne      lbl_8034BF94
	fcmpu    cr0, f2, f0
	bne      lbl_8034BF94
	fcmpu    cr0, f3, f4
	beq      lbl_8034BFE4

lbl_8034BF94:
	addi     r4, r30, 0x138
	li       r31, 1
	bl       PSMTXCopy
	b        lbl_8034BFE4

lbl_8034BFA4:
	lfs      f0, 0x18c(r30)
	li       r31, 0
	fcmpu    cr0, f0, f1
	bne      lbl_8034BFCC
	lfs      f0, 0x190(r30)
	fcmpu    cr0, f0, f2
	bne      lbl_8034BFCC
	lfs      f0, 0x194(r30)
	fcmpu    cr0, f0, f3
	beq      lbl_8034BFE4

lbl_8034BFCC:
	addi     r3, r30, 0x138
	addi     r4, r30, 0x168
	addi     r5, r30, 0x1a4
	addi     r6, r30, 0x18c
	li       r31, 1
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"

lbl_8034BFE4:
	clrlwi.  r0, r31, 0x18
	bne      lbl_8034BFFC
	mr       r3, r30
	bl       isStopMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034C030

lbl_8034BFFC:
	lwz      r4, 0x174(r30)
	addi     r3, r30, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r30)
	bl       update__8CollTreeFv

lbl_8034C030:
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
 * Address:	8034C048
 * Size:	000008
 */
u32 Egg::Obj::pressCallBack(Game::Creature*, float, CollPart*) { return 0x0; }

/*
 * --INFO--
 * Address:	8034C050
 * Size:	000054
 */
void Egg::Obj::bounceCallback(Sys::Triangle*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x2bc(r3)
	cmplwi   r0, 0
	bne      lbl_8034C07C
	bl       isBirthTypeDropGroup__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034C090

lbl_8034C07C:
	lwz      r0, 0x1e0(r31)
	lfs      f0, lbl_8051E38C@sda21(r2)
	ori      r0, r0, 0x800
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x200(r31)

lbl_8034C090:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034C0A4
 * Size:	000090
 */
void Egg::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
	mr       r3, r30
	bl       isBirthTypeDropGroup__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034C11C
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_8034C11C
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034C11C
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	bne      lbl_8034C11C
	lwz      r0, 0x1e0(r30)
	lfs      f0, lbl_8051E38C@sda21(r2)
	ori      r0, r0, 0x800
	stw      r0, 0x1e0(r30)
	stfs     f0, 0x200(r30)

lbl_8034C11C:
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
 * Address:	8034C134
 * Size:	000050
 */
void Egg::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	lfs      f0, 0x18c(r3)
	lfs      f5, lbl_8051E390@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f3, lbl_8051E38C@sda21(r2)
	lfs      f0, 0x190(r3)
	lfs      f2, lbl_8051E394@sda21(r2)
	stfs     f0, 4(r4)
	lfs      f1, lbl_8051E388@sda21(r2)
	lfs      f4, 0x194(r3)
	lfs      f0, lbl_8051E398@sda21(r2)
	stfs     f4, 8(r4)
	lfs      f4, 0x190(r3)
	fadds    f4, f5, f4
	stfs     f4, 4(r4)
	stfs     f3, 0xc(r4)
	stfs     f2, 0x10(r4)
	stfs     f3, 0x14(r4)
	stfs     f1, 0x18(r4)
	stfs     f0, 0x1c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034C184
 * Size:	000048
 */
void Egg::Obj::needShadow(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       needShadow__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034C1AC
	li       r3, 0
	b        lbl_8034C1B8

lbl_8034C1AC:
	lwz      r0, 0xb8(r31)
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_8034C1B8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034C1CC
 * Size:	0000A0
 */
void Egg::Obj::onStartCapture(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r5, 0xb8(r3)
	cmplwi   r5, 0
	beq      lbl_8034C258
	lfs      f2, 0x2c(r5)
	addi     r4, r1, 8
	lfs      f1, 0x1c(r5)
	lfs      f0, 0xc(r5)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051E38C@sda21(r2)
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x400
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)

lbl_8034C258:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034C26C
 * Size:	000040
 */
void Egg::Obj::onEndCapture(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       constraintOff__Q24Game9EnemyBaseFv
	li       r0, 1
	stb      r0, 0x2bc(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034C2AC
 * Size:	0005F4
 */
void Egg::Obj::genItem(void)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	lfs      f2, lbl_8051E38C@sda21(r2)
	mr       r29, r3
	lfs      f1, lbl_8051E39C@sda21(r2)
	li       r30, 2
	stfs     f2, 0x20(r1)
	lfs      f0, lbl_8051E390@sda21(r2)
	stfs     f1, 0x24(r1)
	stfs     f2, 0x28(r1)
	lfs      f1, 0x18c(r3)
	stfs     f1, 0x14(r1)
	lfs      f1, 0x190(r3)
	stfs     f1, 0x18(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x194(r3)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x18(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xb4(r1)
	lwz      r3, 0xc0(r29)
	stw      r0, 0xb0(r1)
	lfd      f2, lbl_8051E3C0@sda21(r2)
	lfd      f1, 0xb0(r1)
	lfs      f0, lbl_8051E3A0@sda21(r2)
	fsubs    f1, f1, f2
	lfs      f2, 0x81c(r3)
	fdivs    f1, f1, f0
	fcmpo    cr0, f1, f2
	bge      lbl_8034C34C
	li       r30, 2
	b        lbl_8034C3A8

lbl_8034C34C:
	lfs      f0, 0x844(r3)
	fadds    f2, f2, f0
	fcmpo    cr0, f1, f2
	bge      lbl_8034C364
	li       r30, 3
	b        lbl_8034C3A8

lbl_8034C364:
	lfs      f0, 0x86c(r3)
	fadds    f2, f2, f0
	fcmpo    cr0, f1, f2
	bge      lbl_8034C37C
	li       r30, 4
	b        lbl_8034C3A8

lbl_8034C37C:
	lfs      f0, 0x894(r3)
	fadds    f2, f2, f0
	fcmpo    cr0, f1, f2
	bge      lbl_8034C394
	li       r30, 5
	b        lbl_8034C3A8

lbl_8034C394:
	lfs      f0, 0x8bc(r3)
	fadds    f2, f2, f0
	fcmpo    cr0, f1, f2
	bge      lbl_8034C3A8
	li       r30, 6

lbl_8034C3A8:
	lbz      r4, 0x8d0(r3)
	cmplwi   r4, 0
	beq      lbl_8034C3B8
	addi     r30, r4, -1

lbl_8034C3B8:
	lbz      r0, 0x8d1(r3)
	cmplwi   r0, 0
	beq      lbl_8034C408
	cmpwi    r30, 5
	bne      lbl_8034C3E8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1d
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034C408
	li       r30, 2
	b        lbl_8034C408

lbl_8034C3E8:
	cmpwi    r30, 6
	bne      lbl_8034C408
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1e
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034C408
	li       r30, 2

lbl_8034C408:
	cmpwi    r30, 3
	li       r31, 0
	beq      lbl_8034C5A0
	bge      lbl_8034C430
	cmpwi    r30, 1
	beq      lbl_8034C4C4
	bge      lbl_8034C544
	cmpwi    r30, 0
	bge      lbl_8034C444
	b        lbl_8034C87C

lbl_8034C430:
	cmpwi    r30, 7
	bge      lbl_8034C87C
	cmpwi    r30, 5
	bge      lbl_8034C814
	b        lbl_8034C728

lbl_8034C444:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xb4(r1)
	addi     r3, r1, 0x88
	lfd      f3, lbl_8051E3C0@sda21(r2)
	li       r4, 1
	stw      r0, 0xb0(r1)
	lfs      f1, lbl_8051E3A0@sda21(r2)
	lfd      f2, 0xb0(r1)
	lfs      f0, lbl_8051E3A4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r5, 0xbc(r1)
	bl       __ct__Q24Game19PelletNumberInitArgFii
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x88
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	addi     r4, r1, 0x14
	mr       r30, r3
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	addi     r4, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	b        lbl_8034C87C

lbl_8034C4C4:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xbc(r1)
	addi     r3, r1, 0x60
	lfd      f3, lbl_8051E3C0@sda21(r2)
	li       r4, 5
	stw      r0, 0xb8(r1)
	lfs      f1, lbl_8051E3A0@sda21(r2)
	lfd      f2, 0xb8(r1)
	lfs      f0, lbl_8051E3A4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r5, 0xb4(r1)
	bl       __ct__Q24Game19PelletNumberInitArgFii
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x60
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	addi     r4, r1, 0x14
	mr       r31, r3
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r31
	addi     r4, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	b        lbl_8034C87C

lbl_8034C544:
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r0, r3, r3
	beq      lbl_8034C87C
	mr       r30, r0
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x1e0(r30)
	addi     r4, r1, 0x14
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	addi     r4, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	b        lbl_8034C87C

lbl_8034C5A0:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xbc(r1)
	li       r31, 0
	lfd      f3, lbl_8051E3C0@sda21(r2)
	stw      r0, 0xb8(r1)
	lfs      f1, lbl_8051E3A0@sda21(r2)
	lfd      f2, 0xb8(r1)
	lfs      f0, lbl_8051E3A8@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f31, f0, f1

lbl_8034C5D4:
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	cmplwi   r3, 0
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	beq      lbl_8034C718
	xoris    r4, r31, 0x8000
	lis      r0, 0x4330
	stw      r4, 0xbc(r1)
	mr       r30, r3
	lfd      f2, lbl_8051E3C0@sda21(r2)
	stw      r0, 0xb8(r1)
	lfs      f3, lbl_8051E3AC@sda21(r2)
	lfd      f1, 0xb8(r1)
	lfs      f0, lbl_8051E38C@sda21(r2)
	fsubs    f2, f1, f2
	lfs      f1, lbl_8051E3B0@sda21(r2)
	fmadds   f2, f3, f2, f31
	fcmpo    cr0, f2, f0
	bge      lbl_8034C66C
	lfs      f0, lbl_8051E3B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8034C690

lbl_8034C66C:
	lfs      f0, lbl_8051E3B8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0xc0(r1)
	lwz      r0, 0xc4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8034C690:
	fmuls    f1, f1, f0
	lfs      f0, lbl_8051E38C@sda21(r2)
	fcmpo    cr0, f2, f0
	stfs     f1, 8(r1)
	bge      lbl_8034C6A8
	fneg     f2, f2

lbl_8034C6A8:
	lfs      f0, lbl_8051E3B8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r0, r3, sincosTable___5JMath@l
	lfs      f1, lbl_8051E3B0@sda21(r2)
	fmuls    f0, f2, f0
	mr       r3, r30
	li       r4, 0
	fctiwz   f0, f0
	stfd     f0, 0xc8(r1)
	lwz      r5, 0xcc(r1)
	rlwinm   r5, r5, 3, 0x12, 0x1c
	add      r5, r0, r5
	lfs      f0, 4(r5)
	fmuls    f0, f1, f0
	stfs     f0, 0x10(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x1e0(r30)
	addi     r4, r1, 0x14
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	addi     r4, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8034C718:
	addi     r31, r31, 1
	cmpwi    r31, 2
	blt      lbl_8034C5D4
	b        lbl_8034C87C

lbl_8034C728:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x44
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r30, r3, r3
	beq      lbl_8034C7B0
	addi     r3, r1, 0x2c
	bl       __ct__Q24Game13EnemyBirthArgFv
	lfs      f0, 0x18c(r29)
	stfs     f0, 0x2c(r1)
	lfs      f0, 0x190(r29)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x194(r29)
	stfs     f0, 0x34(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xcc(r1)
	mr       r3, r30
	lfs      f0, lbl_8051E3BC@sda21(r2)
	addi     r4, r1, 0x2c
	stw      r0, 0xc8(r1)
	addi     r6, r1, 0x20
	lfd      f3, lbl_8051E3C0@sda21(r2)
	li       r5, 0xa
	lfd      f1, 0xc8(r1)
	lfs      f2, lbl_8051E3A0@sda21(r2)
	fsubs    f3, f1, f3
	lfs      f1, lbl_8051E3A8@sda21(r2)
	stfs     f0, 0x24(r1)
	fdivs    f0, f3, f2
	fmuls    f0, f1, f0
	stfs     f0, 0x38(r1)
	bl
"createGroup__Q34Game11TamagoMushi3MgrFRQ24Game13EnemyBirthArgiR10Vector3<f>" mr
r31, r3

lbl_8034C7B0:
	cmplwi   r31, 0
	bne      lbl_8034C87C
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r0, r3, r3
	beq      lbl_8034C87C
	mr       r30, r0
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x1e0(r30)
	addi     r4, r1, 0x14
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	addi     r4, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	b        lbl_8034C87C

lbl_8034C814:
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r0, r3, r3
	beq      lbl_8034C87C
	mr       r31, r0
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	li       r0, 1
	cmpwi    r30, 6
	stb      r0, 0x1e0(r31)
	bne      lbl_8034C854
	li       r0, 2
	stb      r0, 0x1e0(r31)

lbl_8034C854:
	mr       r3, r31
	addi     r4, r1, 0x14
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r31
	addi     r4, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8034C87C:
	psq_l    f31, 232(r1), 0, qr0
	lwz      r0, 0xf4(r1)
	lfd      f31, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r29, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034C8A0
 * Size:	000004
 */
void Egg::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8034C8A4
 * Size:	000010
 */
void Egg::Obj::isLivingThing(void)
{
	/*
	lwz      r0, 0xb8(r3)
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034C8B4
 * Size:	000008
 */
u32 Egg::Obj::getEnemyTypeID(void) { return 0x25; }

/*
 * --INFO--
 * Address:	8034C8BC
 * Size:	000008
 */
void Egg::Obj::getDownSmokeScale(void)
{
	/*
	lfs      f1, lbl_8051E3C8@sda21(r2)
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8034C8C4
 * Size:	000014
 */
void @708 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -708
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8034C8D8
 * Size:	000014
 */
void @708 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -708
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8034C8EC
 * Size:	000014
 */
void @708 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -708
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8034C900
 * Size:	000014
 */
void @708 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -708
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8034C914
 * Size:	000014
 */
void @708 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -708
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	8034C928
 * Size:	000014
 */
void @708 @12 @Game::EnemyBase::viewGetShape(void)
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -708
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}
