#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_Hana_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804D53A8
    lbl_804D53A8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game21ConditionNotStickSlot
    __vt__Q24Game21ConditionNotStickSlot:
        .4byte 0
        .4byte 0
        .4byte satisfy__Q24Game21ConditionNotStickSlotFPQ24Game4Piki
    .global __vt__Q23efx9THanaMiss
    __vt__Q23efx9THanaMiss:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q34Game4Hana3Obj
    __vt__Q34Game4Hana3Obj:
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
        .4byte onInit__Q34Game4Hana3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game4Hana3ObjFR8Graphics
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
        .4byte isUnderground__Q34Game4Hana3ObjFv
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
        .4byte getShadowParam__Q34Game4Hana3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game4Hana3ObjFv
        .4byte "birth__Q34Game10ChappyBase3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game10ChappyBase3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game10ChappyBase3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
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
        .4byte changeMaterial__Q34Game4Hana3ObjFv
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
        .4byte initMouthSlots__Q34Game4Hana3ObjFv
        .4byte initWalkSmokeEffect__Q34Game4Hana3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game4Hana3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game4Hana3ObjFv
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
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game4Hana3ObjFv .4byte
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game10ChappyBase3ObjFPQ34Game10ChappyBase3FSM
        .4byte isWakeup__Q34Game4Hana3ObjFv
        .4byte setAnimationSpeed__Q34Game4Hana3ObjFf
        .4byte flickAttackFail__Q34Game4Hana3ObjFv
        .4byte flickStatePikmin__Q34Game4Hana3ObjFv
        .4byte flickAttackBomb__Q34Game4Hana3ObjFv
        .4byte eatAttackPikmin__Q34Game4Hana3ObjFv
        .4byte resetUnderGround__Q34Game4Hana3ObjFv
        .4byte setUnderGround__Q34Game4Hana3ObjFv
        .4byte createEffect__Q34Game4Hana3ObjFv
        .4byte setupEffect__Q34Game4Hana3ObjFv
        .4byte startSleepEffect__Q34Game4Hana3ObjFv
        .4byte finishSleepEffect__Q34Game4Hana3ObjFv
        .4byte createFlickEffect__Q34Game10ChappyBase3ObjFv
        .4byte createSmokeEffect__Q34Game4Hana3ObjFv
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

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515E00
    lbl_80515E00:
        .skip 0x4
    .global lbl_80515E04
    lbl_80515E04:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D1A0
    lbl_8051D1A0:
        .4byte 0x6B6F7369
        .4byte 0x00000000
    .global lbl_8051D1A8
    lbl_8051D1A8:
        .4byte 0x00000000
    .global lbl_8051D1AC
    lbl_8051D1AC:
        .float 1.0
    .global lbl_8051D1B0
    lbl_8051D1B0:
        .float 0.1
    .global lbl_8051D1B4
    lbl_8051D1B4:
        .4byte 0x41200000
    .global lbl_8051D1B8
    lbl_8051D1B8:
        .4byte 0x42960000
    .global lbl_8051D1BC
    lbl_8051D1BC:
        .4byte 0x42480000
    .global lbl_8051D1C0
    lbl_8051D1C0:
        .4byte 0x41C80000
    .global lbl_8051D1C4
    lbl_8051D1C4:
        .4byte 0x6B616D75
        .4byte 0x31000000
    .global lbl_8051D1CC
    lbl_8051D1CC:
        .4byte 0x6B616D75
        .4byte 0x32000000
    .global lbl_8051D1D4
    lbl_8051D1D4:
        .4byte 0x6B616D75
        .4byte 0x33000000
    .global lbl_8051D1DC
    lbl_8051D1DC:
        .4byte 0x41F00000
    .global lbl_8051D1E0
    lbl_8051D1E0:
        .4byte 0xC47A0000
    .global lbl_8051D1E4
    lbl_8051D1E4:
        .4byte 0x6B757469
        .4byte 0x32000000
    .global lbl_8051D1EC
    lbl_8051D1EC:
        .4byte 0x42700000
    .global lbl_8051D1F0
    lbl_8051D1F0:
        .4byte 0x43A2F983
    .global lbl_8051D1F4
    lbl_8051D1F4:
        .4byte 0xC3A2F983
    .global lbl_8051D1F8
    lbl_8051D1F8:
        .4byte 0x3F99999A
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802F3138
 * Size:	0000A4
 */
Hana::Obj::Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_802F3174
	addi     r0, r31, 0x2e8
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2e8(r31)
	stw      r0, 0x2ec(r31)
	stw      r0, 0x2f0(r31)

lbl_802F3174:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q34Game10ChappyBase3ObjFv
	lis      r3, __vt__Q34Game4Hana3Obj@ha
	addi     r0, r31, 0x2e8
	addi     r5, r3, __vt__Q34Game4Hana3Obj@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x334
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x31c(r12)
	mtctr    r12
	bctrl
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
 * Address:	802F31DC
 * Size:	000004
 */
void Hana::Obj::createEffect(void) { }

/*
 * --INFO--
 * Address:	802F31E0
 * Size:	000064
 */
void Hana::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q34Game10ChappyBase3ObjFPQ24Game15CreatureInitArg
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051D1A0@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x2c8(r31)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x318(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x320(r12)
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
 * Address:	802F3244
 * Size:	000004
 */
void Hana::Obj::setupEffect(void) { }

/*
 * --INFO--
 * Address:	802F3248
 * Size:	000004
 */
void Hana::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802F324C
 * Size:	0000E8
 */
void Hana::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 7
	bne      lbl_802F32B0
	lfs      f0, 0x18c(r30)
	lfs      f2, lbl_8051D1A8@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051D1AC@sda21(r2)
	lfs      f3, 0x190(r30)
	lfs      f0, lbl_8051D1B0@sda21(r2)
	stfs     f3, 4(r31)
	lfs      f3, 0x194(r30)
	stfs     f3, 8(r31)
	stfs     f2, 0xc(r31)
	stfs     f1, 0x10(r31)
	stfs     f2, 0x14(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x1c(r31)
	b        lbl_802F331C

lbl_802F32B0:
	lwz      r3, 0x2c8(r30)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f2, 0x1c(r3)
	lfs      f0, 0xc(r3)
	lfs      f3, lbl_8051D1B4@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051D1A8@sda21(r2)
	stfs     f2, 4(r31)
	lfs      f0, lbl_8051D1AC@sda21(r2)
	stfs     f4, 8(r31)
	lfs      f2, 0x190(r30)
	fadds    f2, f3, f2
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802F330C
	lfs      f0, lbl_8051D1B8@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802F3314

lbl_802F330C:
	lfs      f0, lbl_8051D1BC@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802F3314:
	lfs      f0, lbl_8051D1C0@sda21(r2)
	stfs     f0, 0x1c(r31)

lbl_802F331C:
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
 * Address:	802F3334
 * Size:	0000B4
 */
void Hana::Obj::initMouthSlots(void)
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
	addi     r3, r30, 0x2c0
	bl       alloc__10MouthSlotsFi
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2c0
	li       r4, 0
	addi     r6, r2, lbl_8051D1C4@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2c0
	li       r4, 1
	addi     r6, r2, lbl_8051D1CC@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lwz      r5, 0x174(r30)
	addi     r3, r30, 0x2c0
	li       r4, 2
	addi     r6, r2, lbl_8051D1D4@sda21
	bl       setup__10MouthSlotsFiPQ28SysShape5ModelPc
	lfs      f31, lbl_8051D1DC@sda21(r2)
	li       r31, 0
	b        lbl_802F33BC

lbl_802F33A8:
	mr       r4, r31
	addi     r3, r30, 0x2c0
	bl       getSlot__10MouthSlotsFi
	stfs     f31, 0x1c(r3)
	addi     r31, r31, 1

lbl_802F33BC:
	lwz      r0, 0x2c0(r30)
	cmpw     r31, r0
	blt      lbl_802F33A8
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
 * Address:	802F33E8
 * Size:	000080
 */
void Hana::Obj::isWakeup(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r4, 0
	lwz      r5, 0xc0(r3)
	lfs      f31, 0x3ac(r5)
	fmr      f1, f31
	bl
"isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F3428
	li       r3, 1
	b        lbl_802F344C

lbl_802F3428:
	fmr      f1, f31
	mr       r3, r31
	li       r4, 0
	bl
"isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F3448
	li       r3, 1
	b        lbl_802F344C

lbl_802F3448:
	li       r3, 0

lbl_802F344C:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F3468
 * Size:	000084
 */
void Hana::Obj::flickStatePikmin(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f4, lbl_8051D1E0@sda21(r2)
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r5, 0xc0(r3)
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
	"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051D1E0@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
	"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051D1E0@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
	"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F34EC
 * Size:	0000F0
 */
void Hana::Obj::flickAttackBomb(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f4, lbl_8051D1E0@sda21(r2)
	li       r4, 0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r5, 0xc0(r3)
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
	"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051D1E4@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx9THanaMiss@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x258
	li       r5, 0x259
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q23efx9THanaMiss@l
	li       r4, 0
	stw      r3, 0x24(r1)
	addi     r3, r1, 0x14
	sth      r7, 0x18(r1)
	sth      r5, 0x1a(r1)
	stw      r6, 0x1c(r1)
	stw      r6, 0x20(r1)
	stw      r0, 0x14(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lfs      f0, 0x18c(r31)
	addi     r5, r1, 8
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 0x1c
	stfs     f0, 8(r1)
	li       r6, 2
	lfs      f0, 0x190(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x10(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 8
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F35DC
 * Size:	00003C
 */
void Hana::Obj::eatAttackPikmin(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, "__vt__23Condition<Q24Game4Piki>"@ha
	lis      r5, __vt__Q24Game21ConditionNotStickSlot@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, "__vt__23Condition<Q24Game4Piki>"@l
	addi     r4, r1, 8
	stw      r0, 8(r1)
	addi     r0, r5, __vt__Q24Game21ConditionNotStickSlot@l
	stw      r0, 8(r1)
	bl
	"eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F3618
 * Size:	000070
 */
void Hana::Obj::resetUnderGround(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stb      r0, 0x2e4(r3)
	lwz      r0, 0x1e0(r3)
	rlwinm   r0, r0, 0, 0xa, 8
	stw      r0, 0x1e0(r3)
	lwz      r0, 0x1e0(r3)
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r3)
	bl       hardConstraintOff__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	li       r4, 1
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x1e0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
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
 * Address:	802F3688
 * Size:	000084
 */
void Hana::Obj::setUnderGround(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f4, lbl_8051D1E0@sda21(r2)
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r5, 0xc0(r3)
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
	"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x2e4(r31)
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x40
	stw      r0, 0x1e0(r31)
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	li       r4, 0
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
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
 * Address:	802F370C
 * Size:	0001C0
 */
void Hana::Obj::createSmokeEffect(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lfs      f0, 0x18c(r3)
	stfs     f0, 8(r1)
	lfs      f0, 0x190(r3)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x194(r3)
	stfs     f0, 0x10(r1)
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 8
	bne      lbl_802F382C
	lfs      f6, 0x1fc(r31)
	lfs      f0, lbl_8051D1A8@sda21(r2)
	fmr      f1, f6
	fcmpo    cr0, f6, f0
	bge      lbl_802F375C
	fneg     f1, f6

lbl_802F375C:
	lfs      f2, lbl_8051D1F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051D1A8@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_8051D1EC@sda21(r2)
	fcmpo    cr0, f6, f0
	lfs      f4, 8(r1)
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f5, f3, f0
	bge      lbl_802F37C0
	lfs      f0, lbl_8051D1F4@sda21(r2)
	fmuls    f0, f6, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802F37D8

lbl_802F37C0:
	fmuls    f0, f6, f2
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802F37D8:
	fmuls    f3, f3, f0
	lfs      f0, 0x10(r1)
	lfs      f2, 0xc(r1)
	addi     r5, r1, 8
	lfs      f1, lbl_8051D1A8@sda21(r2)
	fsubs    f0, f0, f5
	fsubs    f3, f4, f3
	lwz      r3, cameraMgr__4Game@sda21(r13)
	fsubs    f1, f2, f1
	stfs     f0, 0x10(r1)
	li       r4, 3
	li       r6, 2
	stfs     f3, 8(r1)
	stfs     f1, 0xc(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 8
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802F38A8

lbl_802F382C:
	cmpwi    r3, 4
	bne      lbl_802F38B8
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051D1E0@sda21(r2)
	li       r4, 0
	lfs      f1, 0x3ac(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051D1E0@sda21(r2)
	li       r4, 0
	lfs      f1, 0x3ac(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 8
	li       r4, 0xa
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802F38A8
	b        lbl_802F38B8

lbl_802F38A8:
	lfs      f1, lbl_8051D1AC@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 8
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"

lbl_802F38B8:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F38CC
 * Size:	00007C
 */
void ConditionNotStickSlot::satisfy(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F3930
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F3930
	mr       r3, r31
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F3930
	li       r3, 1
	b        lbl_802F3934

lbl_802F3930:
	li       r3, 0

lbl_802F3934:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F3948
 * Size:	000004
 */
void Hana::Obj::changeMaterial(void) { }

/*
 * --INFO--
 * Address:	802F394C
 * Size:	000008
 */
void Hana::Obj::isUnderground(void)
{
	/*
	lbz      r3, 0x2e4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F3954
 * Size:	000004
 */
void Hana::Obj::initWalkSmokeEffect(void) { }

/*
 * --INFO--
 * Address:	802F3958
 * Size:	000008
 */
u32 Hana::Obj::getWalkSmokeEffectMgr(void) { return 0x0; }

/*
 * --INFO--
 * Address:	802F3960
 * Size:	000008
 */
void Hana::Obj::getDownSmokeScale(void)
{
	/*
	lfs      f1, lbl_8051D1F8@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F3968
 * Size:	000008
 */
u32 Hana::Obj::getEnemyTypeID(void) { return 0x54; }

/*
 * --INFO--
 * Address:	802F3970
 * Size:	000004
 */
void Hana::Obj::setAnimationSpeed(float) { }

/*
 * --INFO--
 * Address:	802F3974
 * Size:	000004
 */
void Hana::Obj::flickAttackFail(void) { }

/*
 * --INFO--
 * Address:	802F3978
 * Size:	000004
 */
void Hana::Obj::startSleepEffect(void) { }

/*
 * --INFO--
 * Address:	802F397C
 * Size:	000004
 */
void Hana::Obj::finishSleepEffect(void) { }

} // namespace Game

/*
 * --INFO--
 * Address:	802F3980
 * Size:	000028
 */
void __sinit_Hana_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804D53A8@ha
	stw      r0, lbl_80515E00@sda21(r13)
	stfsu    f0, lbl_804D53A8@l(r3)
	stfs     f0, lbl_80515E04@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
