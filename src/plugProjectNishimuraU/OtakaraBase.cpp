#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game30ConditionNotStickClientAndItem
    __vt__Q24Game30ConditionNotStickClientAndItem:
        .4byte 0
        .4byte 0
        .4byte satisfy__Q24Game30ConditionNotStickClientAndItemFPQ24Game4Piki
    .global __vt__Q34Game11OtakaraBase3Obj
    __vt__Q34Game11OtakaraBase3Obj:
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
        .4byte onInit__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game11OtakaraBase3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game11OtakaraBase3ObjFR8Graphics
        .4byte getBodyRadius__Q24Game9EnemyBaseFv
        .4byte getCellRadius__Q34Game11OtakaraBase3ObjFv
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
        .4byte getShadowParam__Q34Game11OtakaraBase3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game11OtakaraBase3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game11OtakaraBase3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game11OtakaraBase3ObjFv
        .4byte doUpdateCommon__Q34Game11OtakaraBase3ObjFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q34Game11OtakaraBase3ObjFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game11OtakaraBase3ObjFR8Graphics
        .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
        .4byte doSimulationGround__Q24Game9EnemyBaseFf
        .4byte doSimulationFlying__Q24Game9EnemyBaseFf
        .4byte doSimulationStick__Q24Game9EnemyBaseFf
        .4byte 0
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
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game11OtakaraBase3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte
   damageCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreaturefP8CollPart .4byte
   pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q34Game11OtakaraBase3ObjFPQ24Game8CreatureR10Vector3<f>f"
        .4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
        .4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
        .4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
        .4byte doStartStoneState__Q34Game11OtakaraBase3ObjFv
        .4byte doFinishStoneState__Q34Game11OtakaraBase3ObjFv
        .4byte getDamageCoeStoneState__Q24Game9EnemyBaseFv
        .4byte doStartEarthquakeState__Q34Game11OtakaraBase3ObjFf
        .4byte doFinishEarthquakeState__Q34Game11OtakaraBase3ObjFv
        .4byte doStartEarthquakeFitState__Q34Game11OtakaraBase3ObjFv
        .4byte doFinishEarthquakeFitState__Q34Game11OtakaraBase3ObjFv
        .4byte lifeRecover__Q24Game9EnemyBaseFv
        .4byte startCarcassMotion__Q34Game11OtakaraBase3ObjFv
        .4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
        .4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
        .4byte doBecomeCarcass__Q24Game9EnemyBaseFv
        .4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
        .4byte doStartWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv
        .4byte doFinishWaitingBirthTypeDrop__Q34Game11OtakaraBase3ObjFv
        .4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
        .4byte getDownSmokeScale__Q34Game11OtakaraBase3ObjFv
        .4byte doStartMovie__Q34Game11OtakaraBase3ObjFv
        .4byte doEndMovie__Q34Game11OtakaraBase3ObjFv
        .4byte setFSM__Q34Game11OtakaraBase3ObjFPQ34Game11OtakaraBase3FSM
        .4byte interactCreature__Q34Game11OtakaraBase3ObjFPQ24Game8Creature
        .4byte createEffect__Q34Game11OtakaraBase3ObjFv
        .4byte setupEffect__Q34Game11OtakaraBase3ObjFv
        .4byte startChargeEffect__Q34Game11OtakaraBase3ObjFv
        .4byte finishChargeEffect__Q34Game11OtakaraBase3ObjFv
        .4byte createDisChargeEffect__Q34Game11OtakaraBase3ObjFv
        .4byte effectDrawOn__Q34Game11OtakaraBase3ObjFv
        .4byte effectDrawOff__Q34Game11OtakaraBase3ObjFv
        .4byte startEscapeSE__Q34Game11OtakaraBase3ObjFv
        .4byte startDisChargeSE__Q34Game11OtakaraBase3ObjFv
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@756@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@756@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@756@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@756@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@756@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@756@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051C290
    lbl_8051C290:
        .4byte 0x00000000
    .global lbl_8051C294
    lbl_8051C294:
        .4byte 0x46480000
    .global lbl_8051C298
    lbl_8051C298:
        .float 1.0
    .global lbl_8051C29C
    lbl_8051C29C:
        .4byte 0x6F74616B
        .4byte 0x61726100
    .global lbl_8051C2A4
    lbl_8051C2A4:
        .4byte 0x40A00000
    .global lbl_8051C2A8
    lbl_8051C2A8:
        .4byte 0x41F00000
    .global lbl_8051C2AC
    lbl_8051C2AC:
        .4byte 0x42480000
    .global lbl_8051C2B0
    lbl_8051C2B0:
        .4byte 0x41C80000
    .global lbl_8051C2B4
    lbl_8051C2B4:
        .4byte 0x41480000
    .global lbl_8051C2B8
    lbl_8051C2B8:
        .4byte 0x41200000
    .global lbl_8051C2BC
    lbl_8051C2BC:
        .4byte 0x41A00000
    .global lbl_8051C2C0
    lbl_8051C2C0:
        .4byte 0xC47A0000
    .global lbl_8051C2C4
    lbl_8051C2C4:
        .float 0.5
    .global lbl_8051C2C8
    lbl_8051C2C8:
        .4byte 0x42C80000
    .global lbl_8051C2CC
    lbl_8051C2CC:
        .4byte 0x63656E74
        .4byte 0x65720000
    .global lbl_8051C2D4
    lbl_8051C2D4:
        .4byte 0x3CE978D5
    .global lbl_8051C2D8
    lbl_8051C2D8:
        .4byte 0x40400000
    .global lbl_8051C2DC
    lbl_8051C2DC:
        .4byte 0x41700000
    .global lbl_8051C2E0
    lbl_8051C2E0:
        .4byte 0x3FC00000
    .global lbl_8051C2E4
    lbl_8051C2E4:
        .float 0.7
*/

namespace Game {

/*
 * --INFO--
 * Address:	802B624C
 * Size:	000130
 */
OtakaraBase::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802B628C
	addi     r0, r31, 0x2f4
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2f4(r31)
	stw      r0, 0x2f8(r31)
	stw      r0, 0x2fc(r31)

lbl_802B628C:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game11OtakaraBase3Obj@ha
	addi     r0, r31, 0x2f4
	addi     r5, r3, __vt__Q34Game11OtakaraBase3Obj@l
	li       r3, 0x2c
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x324
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802B6318
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game11OtakaraBase14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game11OtakaraBase14ProperAnimator@l
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

lbl_802B6318:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802B634C
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game11OtakaraBase3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game11OtakaraBase3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802B634C:
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
 * Address:	802B637C
 * Size:	000004
 */
void OtakaraBase::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802B6380
 * Size:	000104
 */
void OtakaraBase::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	li       r0, -1
	lfs      f0, lbl_8051C290@sda21(r2)
	stw      r0, 0x2c0(r31)
	mr       r3, r31
	stfs     f0, 0x2c4(r31)
	bl       resetTreasure__Q34Game11OtakaraBase3ObjFv
	li       r0, 0
	lfs      f1, lbl_8051C294@sda21(r2)
	stb      r0, 0x2d0(r31)
	mr       r3, r31
	lfs      f0, lbl_8051C290@sda21(r2)
	stfs     f1, 0x2c8(r31)
	stfs     f0, 0x2cc(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x304(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x5d
	bne      lbl_802B6448
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x15, 0x13
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x19, 0x17
	stw      r0, 0x1e0(r31)
	lbz      r0, 0x2b0(r31)
	extsb.   r0, r0
	bne      lbl_802B6424
	mr       r3, r31
	bl       initBombOtakara__Q34Game11OtakaraBase3ObjFv

lbl_802B6424:
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 0xb
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802B6470

lbl_802B6448:
	lfs      f0, lbl_8051C294@sda21(r2)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	stfs     f0, 0x2e8(r31)
	lwz      r3, 0x2bc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802B6470:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B6484
 * Size:	000008
 */
u32 OtakaraBase::Obj::getEnemyTypeID() { return 0x3B; }

/*
 * --INFO--
 * Address:	802B648C
 * Size:	000004
 */
void OtakaraBase::Obj::setupEffect() { }

/*
 * --INFO--
 * Address:	802B6490
 * Size:	00005C
 */
void OtakaraBase::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 1
	stw      r30, 8(r1)
	mr       r30, r3
	bl       fallTreasure__Q34Game11OtakaraBase3ObjFb
	mr       r3, r30
	lwz      r12, 0(r30)
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
 * Address:	802B64EC
 * Size:	000034
 */
void OtakaraBase::Obj::doUpdate()
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
 * Address:	802B6520
 * Size:	0000F0
 */
void OtakaraBase::Obj::doUpdateCommon()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doUpdateCommon__Q24Game9EnemyBaseFv
	lfs      f1, 0x2c8(r31)
	lfs      f0, lbl_8051C298@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802B6574
	lwz      r4, sys@sda21(r13)
	mr       r3, r31
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x320(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       attackTarget__Q34Game11OtakaraBase3ObjFv

lbl_802B6574:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x5d
	bne      lbl_802B65FC
	lwz      r3, 0x230(r31)
	cmplwi   r3, 0
	beq      lbl_802B65F4
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802B65C8
	li       r0, 0
	lfs      f0, lbl_8051C290@sda21(r2)
	stw      r0, 0x230(r31)
	stfs     f0, 0x200(r31)
	b        lbl_802B65FC

lbl_802B65C8:
	lwz      r3, 0x230(r31)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B65FC
	lwz      r3, 0x230(r31)
	bl       endCapture__Q24Game8CreatureFv
	li       r0, 0
	lfs      f0, lbl_8051C290@sda21(r2)
	stw      r0, 0x230(r31)
	stfs     f0, 0x200(r31)
	b        lbl_802B65FC

lbl_802B65F4:
	lfs      f0, lbl_8051C290@sda21(r2)
	stfs     f0, 0x200(r31)

lbl_802B65FC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B6610
 * Size:	000004
 */
void OtakaraBase::Obj::startDisChargeSE() { }

/*
 * --INFO--
 * Address:	802B6614
 * Size:	00007C
 */
void OtakaraBase::Obj::doAnimationCullingOff()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	bl       doAnimationCullingOff__Q24Game9EnemyBaseFv
	lwz      r3, 0x2e0(r31)
	cmplwi   r3, 0
	beq      lbl_802B667C
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802B6660
	mr       r3, r31
	li       r4, 0
	bl       fallTreasure__Q34Game11OtakaraBase3ObjFb
	b        lbl_802B667C

lbl_802B6660:
	addi     r3, r1, 8
	bl       PSMTXIdentity
	lfs      f0, 0x2ec(r31)
	addi     r4, r1, 8
	stfs     f0, 0x24(r1)
	lwz      r3, 0x2e0(r31)
	bl       updateCapture__Q24Game8CreatureFR7Matrixf

lbl_802B667C:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B6690
 * Size:	000004
 */
void OtakaraBase::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802B6694
 * Size:	000020
 */
void OtakaraBase::Obj::doDebugDraw(Graphics&)
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
 * Address:	802B66B4
 * Size:	00004C
 */
void OtakaraBase::Obj::setFSM(Game::OtakaraBase::FSM*)
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
 * Address:	802B6700
 * Size:	0000EC
 */
void OtakaraBase::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r4, r2, lbl_8051C29C@sda21
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f3, 0x1c(r3)
	lfs      f0, 0xc(r3)
	lfs      f2, lbl_8051C2A4@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051C290@sda21(r2)
	stfs     f3, 4(r31)
	lfs      f0, lbl_8051C298@sda21(r2)
	stfs     f4, 8(r31)
	lfs      f3, 4(r31)
	fsubs    f2, f3, f2
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r0, 0x2e0(r30)
	cmplwi   r0, 0
	beq      lbl_802B6780
	lfs      f0, lbl_8051C2A8@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802B6788

lbl_802B6780:
	lfs      f0, lbl_8051C2AC@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802B6788:
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802B67A4
	lfs      f1, 0x18(r31)
	lfs      f0, lbl_8051C2B0@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x18(r31)

lbl_802B67A4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x5d
	bne      lbl_802B67CC
	lfs      f0, lbl_8051C2B4@sda21(r2)
	stfs     f0, 0x1c(r31)
	b        lbl_802B67D4

lbl_802B67CC:
	lfs      f0, lbl_8051C2A4@sda21(r2)
	stfs     f0, 0x1c(r31)

lbl_802B67D4:
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
 * Address:	802B67EC
 * Size:	000034
 */
void OtakaraBase::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	beq      lbl_802B680C
	bl       damageTreasure__Q34Game11OtakaraBase3ObjFf
	li       r3, 1
	b        lbl_802B6810

lbl_802B680C:
	li       r3, 0

lbl_802B6810:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B6820
 * Size:	000078
 */
void OtakaraBase::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	or.      r31, r5, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	beq      lbl_802B6868
	lwz      r0, 0x2e0(r29)
	cmplwi   r0, 0
	beq      lbl_802B6864
	lwz      r4, 0xc0(r29)
	lfs      f1, 0x81c(r4)
	bl       damageTreasure__Q34Game11OtakaraBase3ObjFf
	b        lbl_802B6868

lbl_802B6864:
	bl       damageTreasure__Q34Game11OtakaraBase3ObjFf

lbl_802B6868:
	lfs      f1, lbl_8051C290@sda21(r2)
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B6898
 * Size:	000070
 */
void OtakaraBase::Obj::earthquakeCallBack(Game::Creature*, float)
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
	fmr      f31, f1
	lwz      r0, 0x2e0(r3)
	mr       r31, r4
	cmplwi   r0, 0
	beq      lbl_802B68D8
	lwz      r4, 0xc0(r30)
	lfs      f1, 0x81c(r4)
	bl       damageTreasure__Q34Game11OtakaraBase3ObjFf

lbl_802B68D8:
	fmr      f1, f31
	mr       r3, r30
	mr       r4, r31
	bl       earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
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
 * Address:	802B6908
 * Size:	000024
 */
void OtakaraBase::Obj::bombCallBack(Game::Creature*, Vector3f&, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       damageTreasure__Q34Game11OtakaraBase3ObjFf
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B692C
 * Size:	00004C
 */
void OtakaraBase::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 1
	bl       fallTreasure__Q34Game11OtakaraBase3ObjFb
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30c(r12)
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
 * Address:	802B6978
 * Size:	00004C
 */
void OtakaraBase::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lbz      r0, 0x2d0(r31)
	cmplwi   r0, 0
	beq      lbl_802B69B0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x308(r12)
	mtctr    r12
	bctrl

lbl_802B69B0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B69C4
 * Size:	00004C
 */
void OtakaraBase::Obj::doStartEarthquakeState(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartEarthquakeState__Q24Game9EnemyBaseFf
	mr       r3, r31
	li       r4, 1
	bl       fallTreasure__Q34Game11OtakaraBase3ObjFb
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30c(r12)
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
 * Address:	802B6A10
 * Size:	00004C
 */
void OtakaraBase::Obj::doFinishEarthquakeState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishEarthquakeState__Q24Game9EnemyBaseFv
	lbz      r0, 0x2d0(r31)
	cmplwi   r0, 0
	beq      lbl_802B6A48
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x308(r12)
	mtctr    r12
	bctrl

lbl_802B6A48:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B6A5C
 * Size:	00004C
 */
void OtakaraBase::Obj::doStartEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 1
	bl       fallTreasure__Q34Game11OtakaraBase3ObjFb
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30c(r12)
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
 * Address:	802B6AA8
 * Size:	00004C
 */
void OtakaraBase::Obj::doFinishEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	lbz      r0, 0x2d0(r31)
	cmplwi   r0, 0
	beq      lbl_802B6AE0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x308(r12)
	mtctr    r12
	bctrl

lbl_802B6AE0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B6AF4
 * Size:	000040
 */
void OtakaraBase::Obj::doStartWaitingBirthTypeDrop()
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
	lwz      r12, 0x318(r12)
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
 * Address:	802B6B34
 * Size:	000004
 */
void OtakaraBase::Obj::effectDrawOff() { }

/*
 * --INFO--
 * Address:	802B6B38
 * Size:	000064
 */
void OtakaraBase::Obj::doFinishWaitingBirthTypeDrop()
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
	lwz      r12, 0x314(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x5d
	bne      lbl_802B6B88
	mr       r3, r31
	bl       initBombOtakara__Q34Game11OtakaraBase3ObjFv

lbl_802B6B88:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B6B9C
 * Size:	000004
 */
void OtakaraBase::Obj::effectDrawOn() { }

/*
 * --INFO--
 * Address:	802B6BA0
 * Size:	000028
 */
void OtakaraBase::Obj::startCarcassMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0xb
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
 * Address:	802B6BC8
 * Size:	00002C
 */
void OtakaraBase::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x318(r12)
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
 * Address:	802B6BF4
 * Size:	00002C
 */
void OtakaraBase::Obj::doEndMovie()
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
 * Address:	802B6C20
 * Size:	000140
 */
void OtakaraBase::Obj::isMovePositionSet(bool)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	clrlwi.  r0, r4, 0x18
	stw      r31, 0x3c(r1)
	li       r31, 0
	stw      r30, 0x38(r1)
	mr       r30, r3
	bne      lbl_802B6C64
	lwz      r4, 0xc0(r30)
	lfs      f1, 0x2e8(r30)
	lfs      f0, 0x894(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802B6C64
	bl       getNearestTreasure__Q34Game11OtakaraBase3ObjFv
	mr       r31, r3
	b        lbl_802B6C78

lbl_802B6C64:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2e8(r30)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2e8(r30)

lbl_802B6C78:
	cmplwi   r31, 0
	beq      lbl_802B6CB8
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x14(r1)
	stfs     f0, 0x2d4(r30)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x2d8(r30)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x2dc(r30)
	stw      r31, 0x230(r30)
	b        lbl_802B6D34

lbl_802B6CB8:
	lwz      r7, 0x2e0(r30)
	lis      r3, "__vt__23Condition<Q24Game4Piki>"@ha
	addi     r0, r3, "__vt__23Condition<Q24Game4Piki>"@l
	lis      r3, __vt__Q24Game30ConditionNotStickClientAndItem@ha
	stw      r0, 0x20(r1)
	addi     r0, r3, __vt__Q24Game30ConditionNotStickClientAndItem@l
	mr       r3, r30
	addi     r6, r1, 0x20
	stw      r0, 0x20(r1)
	li       r4, 0
	li       r5, 0
	stw      r30, 0x24(r1)
	stw      r7, 0x28(r1)
	lwz      r7, 0xc0(r30)
	lfs      f1, 0x424(r7)
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	or.      r31, r3, r3
	beq      lbl_802B6D2C
	mr       r4, r30
	mr       r5, r31
	addi     r3, r1, 8
	bl       getTargetPosition__Q34Game11OtakaraBase3ObjFPQ24Game8Creature
	lfs      f0, 8(r1)
	stfs     f0, 0x2d4(r30)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2d8(r30)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2dc(r30)

lbl_802B6D2C:
	li       r0, 0
	stw      r0, 0x230(r30)

lbl_802B6D34:
	cmplwi   r31, 0
	beq      lbl_802B6D44
	li       r3, 1
	b        lbl_802B6D48

lbl_802B6D44:
	li       r3, 0

lbl_802B6D48:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B6D60
 * Size:	000148
 */
void OtakaraBase::Obj::getNearestTreasure()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r29, r3
	addi     r3, r1, 0x14
	lwz      r4, 0xc0(r29)
	li       r31, 0
	lfs      f0, 0x3d4(r4)
	fmuls    f31, f0, f0
	bl       __ct__Q24Game14PelletIteratorFv
	addi     r3, r1, 0x14
	bl       first__Q24Game14PelletIteratorFv
	b        lbl_802B6E70

lbl_802B6DA8:
	addi     r3, r1, 0x14
	bl       __ml__Q24Game14PelletIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B6E68
	lwz      r0, 0xb8(r30)
	cmplwi   r0, 0
	bne      lbl_802B6E68
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1e4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B6E68
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, 0x10(r1)
	lfs      f0, 0x1a0(r29)
	lwz      r3, 0xc0(r29)
	fsubs    f2, f4, f0
	lfs      f5, 8(r1)
	lfs      f1, 0x198(r29)
	lfs      f0, 0x35c(r3)
	fsubs    f3, f5, f1
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802B6E68
	lfs      f0, 0x194(r29)
	lfs      f1, 0x18c(r29)
	fsubs    f0, f0, f4
	fsubs    f1, f1, f5
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_802B6E68
	mr       r31, r30
	fmr      f31, f0

lbl_802B6E68:
	addi     r3, r1, 0x14
	bl       next__Q24Game14PelletIteratorFv

lbl_802B6E70:
	addi     r3, r1, 0x14
	bl       isDone__Q24Game14PelletIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B6DA8
	mr       r3, r31
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B6EA8
 * Size:	0001C8
 */
void OtakaraBase::Obj::getTargetPosition(Game::Creature*)
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
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	lwz      r12, 0(r4)
	mr       r29, r3
	mr       r30, r4
	mr       r31, r5
	lwz      r12, 8(r12)
	addi     r3, r1, 0x14
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f30, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f31, 0x18(r1)
	lfs      f29, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	lfs      f2, 8(r1)
	fsubs    f1, f29, f0
	lfs      f0, lbl_8051C290@sda21(r2)
	fsubs    f8, f30, f2
	lfs      f5, 0x198(r30)
	lfs      f6, 0x19c(r30)
	fmuls    f3, f1, f1
	fmadds   f2, f8, f8, f0
	lfs      f7, 0x1a0(r30)
	fadds    f3, f3, f2
	fcmpo    cr0, f3, f0
	ble      lbl_802B6F60
	ble      lbl_802B6F64
	frsqrte  f2, f3
	fmuls    f3, f2, f3
	b        lbl_802B6F64

lbl_802B6F60:
	fmr      f3, f0

lbl_802B6F64:
	lfs      f2, lbl_8051C290@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_802B6F84
	lfs      f2, lbl_8051C298@sda21(r2)
	fdivs    f2, f2, f3
	fmuls    f8, f8, f2
	fmuls    f0, f0, f2
	fmuls    f1, f1, f2

lbl_802B6F84:
	lwz      r3, 0xc0(r30)
	lfs      f2, 0x2e4(r3)
	lfs      f9, 0x35c(r3)
	fmuls    f1, f1, f2
	fmuls    f8, f8, f2
	fmuls    f0, f0, f2
	fadds    f1, f1, f29
	fadds    f8, f8, f30
	fmuls    f2, f9, f9
	fsubs    f3, f1, f7
	fsubs    f4, f8, f5
	fadds    f0, f0, f31
	fmuls    f3, f3, f3
	fmadds   f3, f4, f4, f3
	fcmpo    cr0, f3, f2
	ble      lbl_802B7030
	fsubs    f1, f1, f7
	lfs      f0, lbl_8051C290@sda21(r2)
	fsubs    f8, f8, f5
	fmuls    f3, f1, f1
	fmadds   f2, f8, f8, f0
	fadds    f3, f3, f2
	fcmpo    cr0, f3, f0
	ble      lbl_802B6FF4
	ble      lbl_802B6FF8
	frsqrte  f2, f3
	fmuls    f3, f2, f3
	b        lbl_802B6FF8

lbl_802B6FF4:
	fmr      f3, f0

lbl_802B6FF8:
	lfs      f2, lbl_8051C290@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_802B7018
	lfs      f2, lbl_8051C298@sda21(r2)
	fdivs    f2, f2, f3
	fmuls    f8, f8, f2
	fmuls    f0, f0, f2
	fmuls    f1, f1, f2

lbl_802B7018:
	fmuls    f8, f8, f9
	fmuls    f0, f0, f9
	fmuls    f1, f1, f9
	fadds    f8, f8, f5
	fadds    f0, f0, f6
	fadds    f1, f1, f7

lbl_802B7030:
	stfs     f8, 0(r29)
	stfs     f0, 4(r29)
	stfs     f1, 8(r29)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r0, 0x64(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B7070
 * Size:	000094
 */
void OtakaraBase::Obj::resetTreasure()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C290@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0x2e0(r3)
	lis      r3, 0x626F6479@ha
	addi     r4, r3, 0x626F6479@l
	stfs     f0, 0x2e4(r31)
	stfs     f0, 0x2ec(r31)
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x1cc(r3)
	stfs     f0, 0x2f0(r31)
	lwz      r3, 0x114(r31)
	bl       getCollPart__8CollTreeFUl
	lfs      f0, lbl_8051C2B8@sda21(r2)
	li       r4, 0
	lfs      f2, lbl_8051C290@sda21(r2)
	stfs     f0, 0x1c(r3)
	lfs      f0, lbl_8051C2BC@sda21(r2)
	fmr      f3, f2
	stfs     f2, 0x24(r3)
	mr       r3, r31
	lfs      f1, lbl_8051C298@sda21(r2)
	lwz      r5, 0x114(r31)
	lfs      f4, lbl_8051C2C0@sda21(r2)
	lwz      r5, 0(r5)
	stfs     f0, 0x1c(r5)
	stfs     f2, 0x24(r5)
	bl
	"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B7104
 * Size:	00010C
 */
void OtakaraBase::Obj::isTakeTreasure()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r31, 0x230(r3)
	cmplwi   r31, 0
	beq      lbl_802B71DC
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 8(r1)
	mr       r3, r31
	lfs      f30, 0xc(r1)
	lfs      f29, 0x10(r1)
	bl       getPickRadius__Q24Game6PelletFv
	lfs      f2, lbl_8051C2BC@sda21(r2)
	lfs      f0, lbl_8051C2AC@sda21(r2)
	fadds    f5, f2, f1
	fcmpo    cr0, f5, f0
	bge      lbl_802B7184
	fmr      f5, f0

lbl_802B7184:
	lfs      f0, 0x190(r30)
	lfs      f2, 0x18c(r30)
	fsubs    f3, f30, f0
	lfs      f1, 0x194(r30)
	fsubs    f2, f31, f2
	lfs      f0, lbl_8051C290@sda21(r2)
	fsubs    f1, f29, f1
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802B71C8
	ble      lbl_802B71CC
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802B71CC

lbl_802B71C8:
	fmr      f1, f0

lbl_802B71CC:
	fcmpo    cr0, f1, f5
	bge      lbl_802B71DC
	li       r3, 1
	b        lbl_802B71E0

lbl_802B71DC:
	li       r3, 0

lbl_802B71E0:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B7210
 * Size:	00024C
 */
void OtakaraBase::Obj::takeTreasure()
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
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r30, 0x230(r3)
	cmplwi   r30, 0
	beq      lbl_802B7424
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B73F4
	lwz      r0, 0xb8(r30)
	cmplwi   r0, 0
	bne      lbl_802B73F4
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B73F4
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1e4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B73F4
	lwz      r31, 0x230(r29)
	cmplwi   r31, 0
	beq      lbl_802B7358
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 8(r1)
	mr       r3, r31
	lfs      f30, 0xc(r1)
	lfs      f29, 0x10(r1)
	bl       getPickRadius__Q24Game6PelletFv
	lfs      f2, lbl_8051C2BC@sda21(r2)
	lfs      f0, lbl_8051C2AC@sda21(r2)
	fadds    f3, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_802B7300
	fmr      f3, f0

lbl_802B7300:
	lfs      f0, 0x190(r29)
	lfs      f2, 0x18c(r29)
	fsubs    f4, f30, f0
	lfs      f1, 0x194(r29)
	fsubs    f2, f31, f2
	lfs      f0, lbl_8051C290@sda21(r2)
	fsubs    f1, f29, f1
	fmuls    f4, f4, f4
	fmuls    f5, f1, f1
	fmadds   f1, f2, f2, f4
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802B7344
	ble      lbl_802B7348
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802B7348

lbl_802B7344:
	fmr      f1, f0

lbl_802B7348:
	fcmpo    cr0, f1, f3
	bge      lbl_802B7358
	li       r0, 1
	b        lbl_802B735C

lbl_802B7358:
	li       r0, 0

lbl_802B735C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_802B73F4
	stw      r30, 0x2e0(r29)
	mr       r3, r30
	lwz      r4, 0xc0(r29)
	lfs      f0, 0x81c(r4)
	stfs     f0, 0x2e4(r29)
	bl       getCylinderHeight__Q24Game6PelletFv
	lfs      f0, lbl_8051C2C4@sda21(r2)
	mr       r3, r30
	fmuls    f0, f0, f1
	stfs     f0, 0x2ec(r29)
	bl       getPickRadius__Q24Game6PelletFv
	stfs     f1, 0x2f0(r29)
	lis      r3, 0x626F6479@ha
	addi     r4, r3, 0x626F6479@l
	lwz      r3, 0x114(r29)
	bl       getCollPart__8CollTreeFUl
	mr       r31, r3
	mr       r3, r30
	bl       getPickRadius__Q24Game6PelletFv
	stfs     f1, 0x1c(r31)
	mr       r3, r30
	lfs      f0, 0x2ec(r29)
	stfs     f0, 0x24(r31)
	lwz      r4, 0x114(r29)
	lwz      r30, 0(r4)
	bl       getPickRadius__Q24Game6PelletFv
	lfs      f2, lbl_8051C2B8@sda21(r2)
	li       r0, 1
	fadds    f0, f2, f1
	stfs     f0, 0x1c(r30)
	lfs      f0, 0x2ec(r29)
	stfs     f0, 0x24(r30)
	lfs      f0, 0x2f0(r29)
	fadds    f0, f0, f2
	stfs     f0, 0x2f0(r29)
	b        lbl_802B73F8

lbl_802B73F4:
	li       r0, 0

lbl_802B73F8:
	clrlwi.  r0, r0, 0x18
	beq      lbl_802B7424
	lwz      r3, 0x174(r29)
	addi     r4, r2, lbl_8051C29C@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r4, r3
	lwz      r3, 0x2e0(r29)
	bl       startCapture__Q24Game8CreatureFP7Matrixf
	li       r3, 1
	b        lbl_802B7428

lbl_802B7424:
	li       r3, 0

lbl_802B7428:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r0, 0x64(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B745C
 * Size:	0000F8
 */
void OtakaraBase::Obj::fallTreasure(bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x2e0(r3)
	cmplwi   r3, 0
	beq      lbl_802B7538
	bl       endCapture__Q24Game8CreatureFv
	clrlwi.  r0, r31, 0x18
	beq      lbl_802B74BC
	lfs      f1, lbl_8051C290@sda21(r2)
	addi     r4, r1, 8
	lfs      f0, lbl_8051C2C8@sda21(r2)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	lwz      r3, 0x2e0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_802B74BC:
	mr       r3, r30
	bl       createTreasureFallEffect__Q34Game11OtakaraBase3ObjFv
	li       r0, 0
	lis      r3, 0x626F6479@ha
	stw      r0, 0x2e0(r30)
	addi     r4, r3, 0x626F6479@l
	lfs      f0, lbl_8051C290@sda21(r2)
	stfs     f0, 0x2e4(r30)
	stfs     f0, 0x2ec(r30)
	lwz      r3, 0xc0(r30)
	lfs      f0, 0x1cc(r3)
	stfs     f0, 0x2f0(r30)
	lwz      r3, 0x114(r30)
	bl       getCollPart__8CollTreeFUl
	lfs      f0, lbl_8051C2B8@sda21(r2)
	li       r4, 0
	lfs      f2, lbl_8051C290@sda21(r2)
	stfs     f0, 0x1c(r3)
	lfs      f0, lbl_8051C2BC@sda21(r2)
	fmr      f3, f2
	stfs     f2, 0x24(r3)
	mr       r3, r30
	lfs      f1, lbl_8051C298@sda21(r2)
	lwz      r5, 0x114(r30)
	lfs      f4, lbl_8051C2C0@sda21(r2)
	lwz      r5, 0(r5)
	stfs     f0, 0x1c(r5)
	stfs     f2, 0x24(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	li       r3, 1
	b        lbl_802B753C

lbl_802B7538:
	li       r3, 0

lbl_802B753C:
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
 * Address:	802B7554
 * Size:	000028
 */
void OtakaraBase::Obj::isDropTreasure()
{
	/*
	lfs      f1, 0x2e4(r3)
	lfs      f0, lbl_8051C290@sda21(r2)
	fcmpu    cr0, f1, f0
	beq      lbl_802B7574
	fcmpo    cr0, f1, f0
	ble      lbl_802B7574
	li       r3, 0
	blr

lbl_802B7574:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B757C
 * Size:	000054
 */
void OtakaraBase::Obj::damageTreasure(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x2e0(r3)
	cmplwi   r0, 0
	beq      lbl_802B75B8
	lfs      f2, 0x2e4(r3)
	lfs      f0, lbl_8051C290@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x2e4(r3)
	lfs      f1, 0x2e4(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802B75C0
	stfs     f0, 0x2e4(r3)
	b        lbl_802B75C0

lbl_802B75B8:
	lfs      f2, lbl_8051C298@sda21(r2)
	bl       addDamage__Q24Game9EnemyBaseFff

lbl_802B75C0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B75D0
 * Size:	0001A8
 */
void OtakaraBase::Obj::attackTarget()
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	mr       r30, r3
	addi     r3, r1, 0x24
	lwz      r5, 0xc0(r30)
	addi     r4, r1, 0x14
	lfs      f2, 0x190(r30)
	lfs      f0, 0x564(r5)
	lfs      f1, 0x58c(r5)
	lfs      f3, 0x5b4(r5)
	fadds    f31, f2, f0
	lfs      f0, 0x18c(r30)
	fsubs    f30, f2, f1
	fmuls    f29, f3, f3
	stfs     f0, 0x14(r1)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x1c(r1)
	stfs     f3, 0x20(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x44
	stb      r0, 0x40(r1)
	addi     r4, r1, 0x24
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x44
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802B7738

lbl_802B7668:
	addi     r3, r1, 0x44
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B7730
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802B76C4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B7730

lbl_802B76C4:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 8(r1)
	fcmpo    cr0, f31, f0
	lfs      f3, 0x10(r1)
	ble      lbl_802B7730
	fcmpo    cr0, f30, f0
	bge      lbl_802B7730
	lfs      f0, 0x194(r30)
	lfs      f1, 0x18c(r30)
	fsubs    f0, f0, f3
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f29
	bge      lbl_802B7730
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x2fc(r12)
	mtctr    r12
	bctrl

lbl_802B7730:
	addi     r3, r1, 0x44
	bl       next__Q24Game12CellIteratorFv

lbl_802B7738:
	addi     r3, r1, 0x44
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B7668
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B7778
 * Size:	000004
 */
void OtakaraBase::Obj::interactCreature(Game::Creature*) { }

/*
 * --INFO--
 * Address:	802B777C
 * Size:	000134
 */
void OtakaraBase::Obj::createTreasureFallEffect()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	addi     r4, r2, lbl_8051C2CC@sda21
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f1, 0x2f0(r31)
	lfs      f0, lbl_8051C2B8@sda21(r2)
	lfs      f4, 0xc(r3)
	fsubs    f0, f1, f0
	lfs      f1, lbl_8051C2D4@sda21(r2)
	lfs      f3, 0x1c(r3)
	lfs      f2, 0x2c(r3)
	fmuls    f5, f1, f0
	lfs      f0, lbl_8051C298@sda21(r2)
	stfs     f4, 0x20(r1)
	fcmpo    cr0, f5, f0
	stfs     f3, 0x24(r1)
	stfs     f2, 0x28(r1)
	bge      lbl_802B77E4
	fadds    f0, f0, f5
	lfs      f1, lbl_8051C2C4@sda21(r2)
	fmuls    f5, f1, f0

lbl_802B77E4:
	lwz      r4, 0x20(r1)
	lis      r3, __vt__Q23efx5TBase@ha
	lwz      r6, 0x24(r1)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lwz      r5, 0x28(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	stw      r4, 8(r1)
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r9, r3, __vt__Q23efx3Arg@l
	lis      r8, __vt__Q23efx8ArgScale@ha
	stw      r6, 0xc(r1)
	lis      r3, __vt__Q23efx12TOtaPartsoff@ha
	lfs      f2, 8(r1)
	li       r6, 0x27f
	stw      r5, 0x10(r1)
	li       r5, 0
	lfs      f1, 0xc(r1)
	addi     r7, r4, __vt__Q23efx8TSimple1@l
	stw      r0, 0x14(r1)
	addi     r8, r8, __vt__Q23efx8ArgScale@l
	lfs      f0, 0x10(r1)
	addi     r0, r3, __vt__Q23efx12TOtaPartsoff@l
	stw      r9, 0x2c(r1)
	addi     r3, r1, 0x14
	addi     r4, r1, 0x2c
	stw      r7, 0x14(r1)
	stfs     f2, 0x30(r1)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	stw      r8, 0x2c(r1)
	stfs     f5, 0x3c(r1)
	sth      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x14(r1)
	bl       create__Q23efx12TOtaPartsoffFPQ23efx3Arg
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5967
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B78B0
 * Size:	000088
 */
void OtakaraBase::Obj::startEscapeSE()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x230(r3)
	cmplwi   r0, 0
	bne      lbl_802B7924
	lfs      f1, 0x2cc(r31)
	lfs      f0, lbl_8051C2D8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802B7914
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x58f0
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051C290@sda21(r2)
	stfs     f0, 0x2cc(r31)
	b        lbl_802B7924

lbl_802B7914:
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2cc(r31)

lbl_802B7924:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B7938
 * Size:	0000FC
 */
void OtakaraBase::Obj::initBombOtakara()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r0, 0x230(r3)
	cmplwi   r0, 0
	bne      lbl_802B7A1C
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x24
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r31, r3, r3
	beq      lbl_802B7A1C
	addi     r3, r1, 8
	bl       __ct__Q24Game13EnemyBirthArgFv
	lfs      f0, 0x1fc(r30)
	mr       r3, r31
	addi     r4, r1, 8
	stfs     f0, 0x14(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x230(r30)
	lwz      r3, 0x230(r30)
	cmplwi   r3, 0
	beq      lbl_802B7A1C
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r3, 0x174(r30)
	addi     r4, r2, lbl_8051C29C@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r4, r3
	lwz      r3, 0x230(r30)
	bl       startCapture__Q24Game8CreatureFP7Matrixf
	lwz      r5, 0x230(r30)
	lis      r3, 0x626F6479@ha
	lfs      f1, lbl_8051C2B8@sda21(r2)
	addi     r4, r3, 0x626F6479@l
	stw      r30, 0x2cc(r5)
	lfs      f0, lbl_8051C2B0@sda21(r2)
	stfs     f1, 0x2ec(r30)
	stfs     f0, 0x2f0(r30)
	lwz      r3, 0x114(r30)
	bl       getCollPart__8CollTreeFUl
	lfs      f1, lbl_8051C2DC@sda21(r2)
	lfs      f0, lbl_8051C2B0@sda21(r2)
	stfs     f1, 0x1c(r3)
	lfs      f1, 0x2ec(r30)
	stfs     f1, 0x24(r3)
	lwz      r3, 0x114(r30)
	lwz      r3, 0(r3)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x2ec(r30)
	stfs     f0, 0x24(r3)

lbl_802B7A1C:
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
 * Address:	802B7A34
 * Size:	000068
 */
void OtakaraBase::Obj::isTransitChaseState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x1e0(r3)
	rlwinm.  r0, r4, 0, 0x1b, 0x1b
	bne      lbl_802B7A60
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	bne      lbl_802B7A60
	lwz      r0, 0x1f4(r3)
	cmpwi    r0, 0
	beq      lbl_802B7A68

lbl_802B7A60:
	li       r3, 1
	b        lbl_802B7A8C

lbl_802B7A68:
	lwz      r6, 0xc0(r3)
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x424(r6)
	lfs      f2, 0x3d4(r6)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f

lbl_802B7A8C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B7A9C
 * Size:	00008C
 */
void OtakaraBase::Obj::stimulateBomb()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C2E0@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0x2e8(r3)
	lfs      f1, 0x54(r4)
	fadds    f1, f2, f1
	stfs     f1, 0x2e8(r3)
	lfs      f1, 0x2e8(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802B7B0C
	lwz      r3, 0x230(r31)
	cmplwi   r3, 0
	beq      lbl_802B7B0C
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B7B0C
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	lwz      r3, 0x230(r31)
	bl       forceBomb__Q34Game4Bomb3ObjFv

lbl_802B7B0C:
	lwz      r0, 0x1e0(r31)
	lwz      r31, 0xc(r1)
	rlwinm   r3, r0, 0x1a, 0x1f, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B7B28
 * Size:	000038
 */
void OtakaraBase::Obj::getChaseTargetCreature()
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
 * Address:	802B7B60
 * Size:	00009C
 */
void ConditionNotStickClientAndItem::satisfy(Game::Piki*)
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
	beq      lbl_802B7BE0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B7BE0
	lwz      r3, 0xf4(r31)
	lwz      r0, 4(r30)
	cmplw    r3, r0
	beq      lbl_802B7BE0
	lwz      r0, 8(r30)
	cmplwi   r0, 0
	beq      lbl_802B7BD8
	cmplw    r3, r0
	beq      lbl_802B7BE0

lbl_802B7BD8:
	li       r3, 1
	b        lbl_802B7BE4

lbl_802B7BE0:
	li       r3, 0

lbl_802B7BE4:
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
 * Address:	802B7BFC
 * Size:	0000BC
 */
OtakaraBase::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_802B7C9C
	lis      r3, __vt__Q34Game11OtakaraBase3Obj@ha
	addi     r0, r31, 0x2f4
	addi     r4, r3, __vt__Q34Game11OtakaraBase3Obj@l
	stw      r4, 0(r31)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x324
	stw      r3, 0x178(r31)
	lwz      r3, 0x17c(r31)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r31)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_802B7C8C
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

lbl_802B7C8C:
	extsh.   r0, r30
	ble      lbl_802B7C9C
	mr       r3, r31
	bl       __dl__FPv

lbl_802B7C9C:
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
 * Address:	802B7CB8
 * Size:	000008
 */
void OtakaraBase::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051C2E4@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B7CC0
 * Size:	000008
 */
void OtakaraBase::Obj::getCellRadius()
{
	/*
	lfs      f1, 0x2f0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B7CC8
 * Size:	000004
 */
void OtakaraBase::Obj::createEffect() { }
} // namespace Game
