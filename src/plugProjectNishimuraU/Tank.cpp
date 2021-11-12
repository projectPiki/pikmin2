#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Tank3Obj
    __vt__Q34Game4Tank3Obj:
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
        .4byte onInit__Q34Game4Tank3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game4Tank3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game4Tank3ObjFR8Graphics
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
        .4byte getShadowParam__Q34Game4Tank3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game4Tank3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game4Tank3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game4Tank3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game4Tank3ObjFR8Graphics .4byte
   doSimpleDraw__Q24Game9EnemyBaseFP8Viewport .4byte
   doSimulationGround__Q24Game9EnemyBaseFf .4byte
   doSimulationFlying__Q24Game9EnemyBaseFf .4byte
   doSimulationStick__Q24Game9EnemyBaseFf .4byte 0 .4byte
   "getCommonEffectPos__Q34Game4Tank3ObjFR10Vector3<f>" .4byte
   getFitEffectPos__Q24Game9EnemyBaseFv .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q34Game4Tank3ObjFv
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q24Game9EnemyBaseFv
        .4byte initWalkSmokeEffect__Q34Game4Tank3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game4Tank3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game4Tank3ObjFv
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
   doStartStoneState__Q34Game4Tank3ObjFv .4byte
   doFinishStoneState__Q34Game4Tank3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q34Game4Tank3ObjFv .4byte
   doFinishEarthquakeFitState__Q34Game4Tank3ObjFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game4Tank3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q34Game4Tank3ObjFv .4byte
   doFinishWaitingBirthTypeDrop__Q34Game4Tank3ObjFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game4Tank3ObjFv .4byte doStartMovie__Q34Game4Tank3ObjFv
        .4byte doEndMovie__Q34Game4Tank3ObjFv
        .4byte setFSM__Q34Game4Tank3ObjFPQ34Game4Tank3FSM
        .4byte createEffect__Q34Game4Tank3ObjFv
        .4byte setupEffect__Q34Game4Tank3ObjFv
        .4byte startEffect__Q34Game4Tank3ObjFv
        .4byte startYodare__Q34Game4Tank3ObjFv
        .4byte finishEffect__Q34Game4Tank3ObjFv
        .4byte effectDrawOn__Q34Game4Tank3ObjFv
        .4byte effectDrawOff__Q34Game4Tank3ObjFv
        .4byte interactCreature__Q34Game4Tank3ObjFPQ24Game8Creature
        .4byte stopEffectRadius__Q34Game4Tank3ObjFf
        .4byte createChargeSE__Q34Game4Tank3ObjFv
        .4byte createDisChargeSE__Q34Game4Tank3ObjFv
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@776@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@776@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@776@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@776@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@776@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@776@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B2E8
    lbl_8051B2E8:
        .4byte 0x43000000
    .global lbl_8051B2EC
    lbl_8051B2EC:
        .4byte 0x686F7070
        .4byte 0x65000000
    .global lbl_8051B2F4
    lbl_8051B2F4:
        .4byte 0x00000000
    .global lbl_8051B2F8
    lbl_8051B2F8:
        .float 1.0
    .global lbl_8051B2FC
    lbl_8051B2FC:
        .4byte 0x40200000
    .global lbl_8051B300
    lbl_8051B300:
        .4byte 0x42480000
    .global lbl_8051B304
    lbl_8051B304:
        .4byte 0x41A00000
    .global lbl_8051B308
    lbl_8051B308:
        .4byte 0x41700000
    .global lbl_8051B30C
    lbl_8051B30C:
        .4byte 0x7273756E
        .4byte 0x65520000
    .global lbl_8051B314
    lbl_8051B314:
        .4byte 0x40000000
    .global lbl_8051B318
    lbl_8051B318:
        .4byte 0x7273756E
        .4byte 0x654C0000
    .global lbl_8051B320
    lbl_8051B320:
        .4byte 0x6673756E
        .4byte 0x65520000
    .global lbl_8051B328
    lbl_8051B328:
        .4byte 0x40400000
    .global lbl_8051B32C
    lbl_8051B32C:
        .4byte 0x6673756E
        .4byte 0x654C0000
    .global lbl_8051B334
    lbl_8051B334:
        .4byte 0x43A2F983
    .global lbl_8051B338
    lbl_8051B338:
        .4byte 0xC3A2F983
    .global lbl_8051B33C
    lbl_8051B33C:
        .float 0.5
    .global lbl_8051B340
    lbl_8051B340:
        .4byte 0x3A83126F
    .global lbl_8051B344
    lbl_8051B344:
        .4byte 0x41200000
    .global lbl_8051B348
    lbl_8051B348:
        .4byte 0x3F19999A
    .global lbl_8051B34C
    lbl_8051B34C:
        .4byte 0x40A00000
    .global lbl_8051B350
    lbl_8051B350:
        .4byte 0x43340000
    .global lbl_8051B354
    lbl_8051B354:
        .4byte 0x3F0CCCCD
*/

namespace Game {

/*
 * --INFO--
 * Address:	80275D8C
 * Size:	000138
 */
Tank::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_80275DCC
	addi     r0, r31, 0x308
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x308(r31)
	stw      r0, 0x30c(r31)
	stw      r0, 0x310(r31)

lbl_80275DCC:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game4Tank3Obj@ha
	addi     r0, r31, 0x308
	addi     r5, r3, __vt__Q34Game4Tank3Obj@l
	addi     r3, r31, 0x2c4
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x328
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __ct__Q34Game15WalkSmokeEffect3MgrFv
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80275E60
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game4Tank14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game4Tank14ProperAnimator@l
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

lbl_80275E60:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80275E94
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game4Tank3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game4Tank3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_80275E94:
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
 * Address:	80275EC4
 * Size:	000004
 */
void Tank::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80275EC8
 * Size:	00009C
 */
void Tank::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lfs      f0, lbl_8051B2E8@sda21(r2)
	addi     r4, r2, lbl_8051B2EC@sda21
	stfs     f0, 0x2ec(r31)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x2c0(r31)
	li       r0, 0
	lfs      f1, lbl_8051B2F4@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_8051B2F8@sda21(r2)
	stfs     f1, 0x2f0(r31)
	stfs     f1, 0x2ec(r31)
	stb      r0, 0x304(r31)
	stfs     f1, 0x2e4(r31)
	stfs     f0, 0x2e8(r31)
	stfs     f1, 0x2f4(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x300(r12)
	mtctr    r12
	bctrl
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
 * Address:	80275F64
 * Size:	000004
 */
void Tank::Obj::setupEffect() { }

/*
 * --INFO--
 * Address:	80275F68
 * Size:	000050
 */
void Tank::Obj::onKill(Game::CreatureKillArg*)
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
	lwz      r12, 0x30c(r12)
	mtctr    r12
	bctrl
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
 * Address:	80275FB8
 * Size:	00004C
 */
void Tank::Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       updateCaution__Q34Game4Tank3ObjFv
	mr       r3, r31
	bl       updateEmit__Q34Game4Tank3ObjFv
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
 * Address:	80276004
 * Size:	000004
 */
void Tank::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80276008
 * Size:	000020
 */
void Tank::Obj::doDebugDraw(Graphics&)
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
 * Address:	80276028
 * Size:	00004C
 */
void Tank::Obj::setFSM(Game::Tank::FSM*)
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
 * Address:	80276074
 * Size:	000090
 */
void Tank::Obj::getShadowParam(Game::ShadowParam&)
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
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_8051B2FC@sda21(r2)
	lfs      f0, 0x190(r30)
	lfs      f1, lbl_8051B2F4@sda21(r2)
	fadds    f2, f2, f0
	lfs      f0, lbl_8051B2F8@sda21(r2)
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802760DC
	lfs      f0, lbl_8051B300@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802760E4

lbl_802760DC:
	lfs      f0, lbl_8051B304@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802760E4:
	lfs      f0, lbl_8051B308@sda21(r2)
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
 * Address:	80276104
 * Size:	000054
 */
void Tank::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	lbz      r0, 0x304(r31)
	cmplwi   r0, 0
	beq      lbl_80276144
	lfs      f0, lbl_8051B2F4@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x2e4(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x30c(r12)
	mtctr    r12
	bctrl

lbl_80276144:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80276158
 * Size:	00004C
 */
void Tank::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lbz      r0, 0x304(r31)
	cmplwi   r0, 0
	beq      lbl_80276190
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x304(r12)
	mtctr    r12
	bctrl

lbl_80276190:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802761A4
 * Size:	000054
 */
void Tank::Obj::doStartEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	lbz      r0, 0x304(r31)
	cmplwi   r0, 0
	beq      lbl_802761E4
	lfs      f0, lbl_8051B2F4@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x2e4(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x30c(r12)
	mtctr    r12
	bctrl

lbl_802761E4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802761F8
 * Size:	00004C
 */
void Tank::Obj::doFinishEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	lbz      r0, 0x304(r31)
	cmplwi   r0, 0
	beq      lbl_80276230
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x304(r12)
	mtctr    r12
	bctrl

lbl_80276230:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80276244
 * Size:	000040
 */
void Tank::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x314(r12)
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
 * Address:	80276284
 * Size:	000004
 */
void Tank::Obj::effectDrawOff() { }

/*
 * --INFO--
 * Address:	80276288
 * Size:	000040
 */
void Tank::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x310(r12)
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
 * Address:	802762C8
 * Size:	000004
 */
void Tank::Obj::effectDrawOn() { }

/*
 * --INFO--
 * Address:	802762CC
 * Size:	000028
 */
void Tank::Obj::startCarcassMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 6
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
 * Address:	802762F4
 * Size:	00002C
 */
void Tank::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x314(r12)
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
 * Address:	80276320
 * Size:	00002C
 */
void Tank::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x310(r12)
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
 * Address:	8027634C
 * Size:	0000C4
 */
void Tank::Obj::getOffsetForMapCollision()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802763A4
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0(r30)
	lfs      f0, 4(r3)
	stfs     f0, 4(r30)
	lfs      f0, 8(r3)
	stfs     f0, 8(r30)
	b        lbl_802763F8

lbl_802763A4:
	mr       r3, r31
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	lfs      f1, 0x18c(r31)
	lfs      f0, lbl_8051B2F4@sda21(r2)
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

lbl_802763F8:
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
 * Address:	80276410
 * Size:	000094
 */
void Tank::Obj::initWalkSmokeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 4
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x2c4
	bl       alloc__Q34Game15WalkSmokeEffect3MgrFi
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c4
	lfs      f1, lbl_8051B314@sda21(r2)
	li       r4, 0
	addi     r6, r2, lbl_8051B30C@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c4
	lfs      f1, lbl_8051B314@sda21(r2)
	li       r4, 1
	addi     r6, r2, lbl_8051B318@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c4
	lfs      f1, lbl_8051B328@sda21(r2)
	li       r4, 2
	addi     r6, r2, lbl_8051B320@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c4
	lfs      f1, lbl_8051B328@sda21(r2)
	li       r4, 3
	addi     r6, r2, lbl_8051B32C@sda21
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
 * Address:	802764A4
 * Size:	000008
 */
void Tank::Obj::getWalkSmokeEffectMgr()
{
	/*
	addi     r3, r3, 0x2c4
	blr
	*/
}

/*
 * --INFO--
 * Address:	802764AC
 * Size:	000054
 */
void Tank::Obj::getCommonEffectPos(Vector3f&)
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
 * Address:	80276500
 * Size:	000338
 */
void Tank::Obj::isAttackable(bool)
{
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stfd     f31, 0xf0(r1)
	psq_st   f31, 248(r1), 0, qr0
	stfd     f30, 0xe0(r1)
	psq_st   f30, 232(r1), 0, qr0
	stfd     f29, 0xd0(r1)
	psq_st   f29, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	stw      r29, 0xc4(r1)
	mr       r30, r3
	mr       r31, r4
	lfs      f1, 0x2d0(r3)
	lfs      f2, 0x2d4(r3)
	lfs      f0, 0x2cc(r3)
	stfs     f0, 0x30(r1)
	stfs     f1, 0x34(r1)
	stfs     f2, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	lfs      f0, lbl_8051B2F4@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_80276574
	fneg     f2, f2

lbl_80276574:
	lfs      f3, lbl_8051B334@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051B2F4@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0xa8(r1)
	lwz      r0, 0xac(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f2, 4(r3)
	bge      lbl_802765CC
	lfs      f0, lbl_8051B338@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_802765E4

lbl_802765CC:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_802765E4:
	lfs      f0, lbl_8051B2F4@sda21(r2)
	clrlwi.  r0, r31, 0x18
	stfs     f1, 0x24(r1)
	frsp     f30, f1
	fneg     f31, f2
	stfs     f0, 0x28(r1)
	stfs     f2, 0x2c(r1)
	lwz      r3, 0xc0(r30)
	lfs      f29, 0x564(r3)
	beq      lbl_80276624
	fmr      f1, f29
	mr       r3, r30
	addi     r4, r1, 0x24
	addi     r5, r1, 0x30
	bl       "emitCollideRatio__Q34Game4Tank3ObjFR10Vector3<f>R10Vector3<f>f"
	fmr      f29, f1

lbl_80276624:
	lfs      f0, lbl_8051B33C@sda21(r2)
	addi     r3, r1, 0x3c
	lfs      f4, 0x34(r1)
	addi     r4, r1, 0x14
	fmuls    f5, f0, f29
	lfs      f3, 0x2c(r1)
	lfs      f2, 0x38(r1)
	lfs      f1, 0x24(r1)
	lfs      f0, 0x30(r1)
	fmadds   f2, f3, f5, f2
	stfs     f4, 0x18(r1)
	fmadds   f0, f1, f5, f0
	stfs     f2, 0x1c(r1)
	stfs     f0, 0x14(r1)
	stfs     f5, 0x20(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x5c
	stb      r0, 0x58(r1)
	addi     r4, r1, 0x3c
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x5c
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802767F0

lbl_80276684:
	addi     r3, r1, 0x5c
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802767E8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802766FC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802767E8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802767E8

lbl_802766FC:
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0x34(r1)
	lfs      f4, 0x10(r1)
	lfs      f3, 0x38(r1)
	fsubs    f5, f1, f0
	lfs      f0, lbl_8051B2F4@sda21(r2)
	lfs      f2, 8(r1)
	fsubs    f4, f4, f3
	lfs      f1, 0x30(r1)
	fcmpo    cr0, f5, f0
	lwz      r3, 0xc0(r30)
	fsubs    f3, f2, f1
	ble      lbl_80276750
	fmr      f1, f5
	b        lbl_80276754

lbl_80276750:
	fneg     f1, f5

lbl_80276754:
	lfs      f0, 0x5b4(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802767E8
	lfs      f1, lbl_8051B2F4@sda21(r2)
	fmuls    f0, f1, f5
	fmadds   f0, f31, f3, f0
	fmadds   f2, f30, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8027677C
	b        lbl_80276780

lbl_8027677C:
	fneg     f2, f2

lbl_80276780:
	lfs      f0, 0x5b4(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_802767E8
	lfs      f0, 0x28(r1)
	lfs      f1, 0x24(r1)
	fmuls    f0, f0, f5
	lfs      f2, 0x2c(r1)
	fmadds   f0, f1, f3, f0
	fmadds   f1, f2, f4, f0
	fcmpo    cr0, f1, f29
	bge      lbl_802767E8
	lfs      f0, lbl_8051B2F4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802767E8
	clrlwi.  r0, r31, 0x18
	beq      lbl_802767DC
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0x318(r12)
	mtctr    r12
	bctrl
	b        lbl_802767E8

lbl_802767DC:
	stw      r29, 0x230(r30)
	li       r3, 1
	b        lbl_80276804

lbl_802767E8:
	addi     r3, r1, 0x5c
	bl       next__Q24Game12CellIteratorFv

lbl_802767F0:
	addi     r3, r1, 0x5c
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80276684
	mr       r3, r31

lbl_80276804:
	psq_l    f31, 248(r1), 0, qr0
	lfd      f31, 0xf0(r1)
	psq_l    f30, 232(r1), 0, qr0
	lfd      f30, 0xe0(r1)
	psq_l    f29, 216(r1), 0, qr0
	lfd      f29, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	lwz      r30, 0xc8(r1)
	lwz      r0, 0x104(r1)
	lwz      r29, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/*
 * --INFO--
 * Address:	80276838
 * Size:	000004
 */
void Tank::Obj::interactCreature(Game::Creature*) { }

/*
 * --INFO--
 * Address:	8027683C
 * Size:	000228
 */
void Tank::Obj::emitCollideRatio(Vector3f&, Vector3f&, float)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	mr       r31, r3
	lfs      f0, lbl_8051B2F4@sda21(r2)
	lfs      f2, 0x2e4(r3)
	fcmpu    cr0, f0, f2
	fmuls    f31, f1, f2
	bne      lbl_8027687C
	lfs      f1, lbl_8051B340@sda21(r2)
	lfs      f0, lbl_8051B2F8@sda21(r2)
	stfs     f1, 0x2e4(r31)
	stfs     f0, 0x2e8(r31)

lbl_8027687C:
	lfs      f1, 0x2e4(r31)
	lfs      f0, 0x2e8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80276A28
	lfs      f5, 4(r4)
	lis      r3, sincosTable___5JMath@ha
	lfs      f3, 0(r4)
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f5, f5, f31
	lfs      f6, 8(r4)
	lfs      f1, 4(r5)
	fmuls    f3, f3, f31
	lfs      f2, 0(r5)
	fmuls    f6, f6, f31
	lfs      f0, 8(r5)
	fadds    f5, f5, f1
	lfs      f1, lbl_8051B344@sda21(r2)
	fadds    f3, f3, f2
	fadds    f6, f6, f0
	lfs      f0, lbl_8051B2FC@sda21(r2)
	fadds    f5, f5, f1
	stfs     f3, 0x14(r1)
	li       r6, 0
	lfs      f4, lbl_8051B314@sda21(r2)
	stfs     f5, 0x18(r1)
	addi     r8, r1, 0x14
	lfs      f2, lbl_8051B2F4@sda21(r2)
	addi     r7, r1, 8
	stfs     f6, 0x1c(r1)
	li       r0, -1
	lfs      f1, 0x800(r3)
	stfs     f0, 0x20(r1)
	lfs      f0, lbl_8051B348@sda21(r2)
	lfs      f5, 0(r4)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f5, 8(r1)
	lwz      r5, sys@sda21(r13)
	lfs      f7, 4(r4)
	stfs     f7, 0xc(r1)
	lfs      f6, 8(r4)
	addi     r4, r1, 0x24
	stfs     f6, 0x10(r1)
	lwz      r9, 0xc0(r31)
	lfs      f3, 0x564(r9)
	fmuls    f3, f4, f3
	fmuls    f5, f5, f3
	fmuls    f4, f7, f3
	fmuls    f3, f6, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	lfs      f3, 0x4c(r9)
	stw      r6, 0x38(r1)
	stw      r8, 0x24(r1)
	stw      r7, 0x28(r1)
	stfs     f3, 0x2c(r1)
	stfs     f2, 0x30(r1)
	stw      r6, 0x34(r1)
	stw      r6, 0x68(r1)
	stb      r6, 0x98(r1)
	stb      r6, 0x3d(r1)
	stb      r6, 0x3c(r1)
	stw      r6, 0x6c(r1)
	stb      r6, 0xb4(r1)
	stw      r6, 0xb8(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	stw      r0, 0xbc(r1)
	stw      r6, 0x70(r1)
	stb      r6, 0x3e(r1)
	stw      r31, 0x38(r1)
	lwz      r12, 4(r3)
	lfs      f1, 0x54(r5)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x68(r1)
	cmplwi   r0, 0
	bne      lbl_802769C4
	lwz      r0, 0x6c(r1)
	cmplwi   r0, 0
	beq      lbl_802769D0

lbl_802769C4:
	lfs      f0, 0x2e4(r31)
	stfs     f0, 0x2e8(r31)
	b        lbl_802769FC

lbl_802769D0:
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_8051B314@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x2e4(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x2e4(r31)
	lfs      f1, 0x2e8(r31)
	fcmpo    cr0, f0, f1
	ble      lbl_802769FC
	stfs     f1, 0x2e4(r31)

lbl_802769FC:
	lfs      f1, 0x2e8(r31)
	lfs      f0, lbl_8051B2F8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80276A28
	mr       r3, r31
	lfs      f0, lbl_8051B34C@sda21(r2)
	lwz      r12, 0(r31)
	fadds    f1, f0, f31
	lwz      r12, 0x31c(r12)
	mtctr    r12
	bctrl

lbl_80276A28:
	lfs      f1, 0x2e8(r31)
	lfs      f0, lbl_8051B2F8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80276A44
	lfs      f0, lbl_8051B2FC@sda21(r2)
	fadds    f1, f0, f31
	b        lbl_80276A48

lbl_80276A44:
	fmr      f1, f31

lbl_80276A48:
	psq_l    f31, 216(r1), 0, qr0
	lwz      r0, 0xe4(r1)
	lfd      f31, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80276A64
 * Size:	000004
 */
void Tank::Obj::stopEffectRadius(float) { }

/*
 * --INFO--
 * Address:	80276A68
 * Size:	000130
 */
void Tank::Obj::updateEmit()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2c0(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	cmplwi   r3, 0
	beq      lbl_80276B84
	lfs      f0, 0xc(r3)
	lfs      f1, lbl_8051B2F4@sda21(r2)
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x2c(r3)
	stfs     f0, 0x2d4(r31)
	lfs      f0, 0(r3)
	stfs     f0, 0x2d8(r31)
	lfs      f0, 0x10(r3)
	stfs     f0, 0x2dc(r31)
	lfs      f0, 0x20(r3)
	stfs     f0, 0x2e0(r31)
	lfs      f3, 0x2d8(r31)
	lfs      f2, 0x2dc(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0x2e0(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80276B04
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80276B08
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80276B08

lbl_80276B04:
	fmr      f2, f1

lbl_80276B08:
	lfs      f0, lbl_8051B2F4@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80276B40
	lfs      f1, lbl_8051B2F8@sda21(r2)
	lfs      f0, 0x2d8(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x2d8(r31)
	lfs      f0, 0x2dc(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2dc(r31)
	lfs      f0, 0x2e0(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2e0(r31)

lbl_80276B40:
	lfs      f2, 0x2d8(r31)
	lfs      f1, lbl_8051B344@sda21(r2)
	lfs      f3, 0x2dc(r31)
	fmuls    f2, f2, f1
	lfs      f0, 0x2cc(r31)
	fmuls    f3, f3, f1
	lfs      f4, 0x2e0(r31)
	fadds    f0, f0, f2
	fsubs    f3, f3, f1
	fmuls    f4, f4, f1
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x2d0(r31)
	fadds    f0, f0, f3
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x2d4(r31)
	fadds    f0, f0, f4
	stfs     f0, 0x2d4(r31)

lbl_80276B84:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80276B98
 * Size:	000050
 */
void Tank::Obj::updateCaution()
{
	/*
	lwz      r4, 0x1e0(r3)
	rlwinm.  r0, r4, 0, 0x1b, 0x1b
	bne      lbl_80276BB8
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	bne      lbl_80276BB8
	lwz      r0, 0x1f4(r3)
	cmpwi    r0, 0
	beq      lbl_80276BC0

lbl_80276BB8:
	lfs      f0, lbl_8051B2F4@sda21(r2)
	stfs     f0, 0x2ec(r3)

lbl_80276BC0:
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2ec(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bgelr
	lwz      r4, sys@sda21(r13)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2ec(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80276BE8
 * Size:	000024
 */
void Tank::Obj::getViewAngle()
{
	/*
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2ec(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_80276C04
	lfs      f1, lbl_8051B350@sda21(r2)
	blr

lbl_80276C04:
	lfs      f1, 0x424(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80276C0C
 * Size:	0000BC
 */
Tank::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_80276CAC
	lis      r3, __vt__Q34Game4Tank3Obj@ha
	addi     r0, r31, 0x308
	addi     r4, r3, __vt__Q34Game4Tank3Obj@l
	stw      r4, 0(r31)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x328
	stw      r3, 0x178(r31)
	lwz      r3, 0x17c(r31)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r31)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_80276C9C
	lis      r3, __vt__Q24Game9EnemyBase@ha
	addi     r0, r31, 0x2bc
	addi     r4, r3, __vt__Q24Game9EnemyBase@l
	addi     r3, r31, 0x290
	stw      r4, 0(r31)
	addi     r5, r4, 0x1b0
	addi     r6, r4, 0x2f8
	li       r4, -1
	stw      r5, 0x178(r31)
	lwz      r5, 0x17c(r31)
	stw      r6, 0(r5)
	lwz      r5, 0x17c(r31)
	subf     r0, r5, r0
	stw      r0, 0xc(r5)
	bl       __dt__5CNodeFv

lbl_80276C9C:
	extsh.   r0, r30
	ble      lbl_80276CAC
	mr       r3, r31
	bl       __dl__FPv

lbl_80276CAC:
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
 * Address:	80276CC8
 * Size:	000008
 */
void Tank::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051B354@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80276CD0
 * Size:	000008
 */
u32 Tank::Obj::getEnemyTypeID() { return 0x18; }

/*
 * --INFO--
 * Address:	80276CD8
 * Size:	000004
 */
void Tank::Obj::createEffect() { }

/*
 * --INFO--
 * Address:	80276CDC
 * Size:	000014
 */
void EnemyBase::@776 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -776
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80276CF0
 * Size:	000014
 */
void EnemyBase::@776 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -776
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80276D04
 * Size:	000014
 */
void EnemyBase::@776 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -776
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80276D18
 * Size:	000014
 */
void EnemyBase::@776 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -776
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80276D2C
 * Size:	000014
 */
void EnemyBase::@776 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -776
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	80276D40
 * Size:	000014
 */
void EnemyBase::@776 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -776
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}
} // namespace Game
