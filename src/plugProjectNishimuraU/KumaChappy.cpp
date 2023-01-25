#include "Game/Entities/KumaChappy.h"
#include "LifeGaugeMgr.h"
#include "Game/generalEnemyMgr.h"
#include "Game/routeMgr.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "Game/ChappyRelation.h"
#include "Game/rumble.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game14ChappyRelation
    __vt__Q24Game14ChappyRelation:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game14ChappyRelationFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q34Game10KumaChappy3Obj
    __vt__Q34Game10KumaChappy3Obj:
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
        .4byte doDirectDraw__Q34Game10KumaChappy3ObjFR8Graphics
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
        .4byte getShadowParam__Q34Game10KumaChappy3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game10KumaChappy3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game10KumaChappy3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game10KumaChappy3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q34Game10KumaChappy3ObjFv
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
        .4byte initMouthSlots__Q34Game10KumaChappy3ObjFv
        .4byte initWalkSmokeEffect__Q34Game10KumaChappy3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game10KumaChappy3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game10KumaChappy3ObjFv
        .4byte getMouthSlots__Q34Game10KumaChappy3ObjFv
        .4byte
   doGetLifeGaugeParam__Q34Game10KumaChappy3ObjFRQ24Game14LifeGaugeParam .4byte
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
   doBecomeCarcass__Q34Game10KumaChappy3ObjFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game10KumaChappy3ObjFv .4byte
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game10KumaChappy3ObjFPQ34Game10KumaChappy3FSM
        .4byte createChappyRelation__Q34Game10KumaChappy3ObjFv
        .4byte getChappyRelation__Q34Game10KumaChappy3ObjFv
        .4byte startEnemyRumble__Q34Game10KumaChappy3ObjFv
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@760@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@760@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@760@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@760@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@760@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@760@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051BB68
    lbl_8051BB68:
        .4byte 0x00000000
    .global lbl_8051BB6C
    lbl_8051BB6C:
        .4byte 0x61676F00
    .global lbl_8051BB70
    lbl_8051BB70:
        .4byte 0x418C0000
    .global lbl_8051BB74
    lbl_8051BB74:
        .4byte 0x40A00000
    .global lbl_8051BB78
    lbl_8051BB78:
        .float 1.0
    .global lbl_8051BB7C
    lbl_8051BB7C:
        .4byte 0x42C80000
    .global lbl_8051BB80
    lbl_8051BB80:
        .4byte 0x42960000
    .global lbl_8051BB84
    lbl_8051BB84:
        .4byte 0x41F00000
    .global lbl_8051BB88
    lbl_8051BB88:
        .float 0.1
    .global lbl_8051BB8C
    lbl_8051BB8C:
        .4byte 0x6B616D75
        .4byte 0x31000000
    .global lbl_8051BB94
    lbl_8051BB94:
        .4byte 0x6B616D75
        .4byte 0x32000000
    .global lbl_8051BB9C
    lbl_8051BB9C:
        .4byte 0x6B616D75
        .4byte 0x33000000
    .global lbl_8051BBA4
    lbl_8051BBA4:
        .4byte 0x6B616D75
        .4byte 0x34000000
    .global lbl_8051BBAC
    lbl_8051BBAC:
        .4byte 0x6B616D75
        .4byte 0x35000000
    .global lbl_8051BBB4
    lbl_8051BBB4:
        .4byte 0x420C0000
    .global lbl_8051BBB8
    lbl_8051BBB8:
        .4byte 0x6173694C
        .4byte 0x00000000
    .global lbl_8051BBC0
    lbl_8051BBC0:
        .4byte 0x41200000
    .global lbl_8051BBC4
    lbl_8051BBC4:
        .4byte 0x61736952
        .4byte 0x00000000
    .global lbl_8051BBCC
    lbl_8051BBCC:
        .4byte 0x42480000
    .global lbl_8051BBD0
    lbl_8051BBD0:
        .4byte 0x43340000
    .global lbl_8051BBD4
    lbl_8051BBD4:
        .4byte 0x47000000
    .global lbl_8051BBD8
    lbl_8051BBD8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051BBE0
    lbl_8051BBE0:
        .4byte 0x43A2F983
    .global lbl_8051BBE4
    lbl_8051BBE4:
        .4byte 0xC3A2F983
    .global lbl_8051BBE8
    lbl_8051BBE8:
        .4byte 0x3F400000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802996A0
 * Size:	000154
 */
KumaChappy::Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createChappyRelation();
}

/*
 * --INFO--
 * Address:	802997F4
 * Size:	000004
 */
void KumaChappy::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802997F8
 * Size:	00007C
 */
void KumaChappy::Obj::onInit(Game::CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	disableEvent(0, EB_IsCullable);
	mReviveTimer = 0.0f;
	mTimer       = 0.0f;
	mNextState   = -1;
	resetWayPoint();
	setNearestWayPoint();
	mFsm->start(this, KUMACHAPPY_TurnPath, nullptr);
}

/*
 * --INFO--
 * Address:	80299874
 * Size:	000060
 */
void KumaChappy::Obj::doUpdate()
{
	mReviveTimer += sys->mDeltaTime;
	updateTargetDistance();
	mFsm->exec(this);
	mMouthSlots.update();
}

/*
 * --INFO--
 * Address:	802998D4
 * Size:	000004
 */
void KumaChappy::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802998D8
 * Size:	000020
 */
void KumaChappy::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802998F8
 * Size:	00004C
 */
void KumaChappy::Obj::setFSM(Game::KumaChappy::FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	80299944
 * Size:	0000C4
 */
void KumaChappy::Obj::getShadowParam(Game::ShadowParam& param)
{
	Matrixf* mtx    = mModel->getJoint("ago")->getWorldMatrix();
	param.mPosition = Vector3f(mtx->mMatrix.structView.tx, mtx->mMatrix.structView.ty, mtx->mMatrix.structView.tz);
	param.mPosition.y -= 17.5f;

	f32 temp = mPosition.y + 5.0f;
	if (param.mPosition.y < temp) {
		param.mPosition.y = temp;
	}

	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_IsEarthquake)) {
		param.mBoundingSphere.mRadius = 100.0f;
	} else {
		param.mBoundingSphere.mRadius = 75.0f;
	}
	param.mSize = 30.0f;
}

/*
 * --INFO--
 * Address:	80299A08
 * Size:	000038
 */
bool KumaChappy::Obj::damageCallBack(Game::Creature*, f32 dmg, CollPart* part)
{
	if (!part) {
		dmg *= 0.1f;
	}
	EnemyBase::addDamage(dmg, 1.0f);
	return true;
}

/*
 * --INFO--
 * Address:	80299A40
 * Size:	000028
 */
void KumaChappy::Obj::startCarcassMotion() { startMotion(4, nullptr); }

/*
 * --INFO--
 * Address:	80299A68
 * Size:	0000A8
 */
Vector3f KumaChappy::Obj::getOffsetForMapCollision()
{
	if (isAlive()) {
		return Vector3f(Vector3f::zero);
	} else {
		Matrixf* mtx = mModel->getJoint("ago")->getWorldMatrix();
		return Vector3f(mtx->mMatrix.structView.tx - mPosition.x, 0.0f, mtx->mMatrix.structView.tz - mPosition.z);
	}
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
	beq      lbl_80299AC0
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0(r30)
	lfs      f0, 4(r3)
	stfs     f0, 4(r30)
	lfs      f0, 8(r3)
	stfs     f0, 8(r30)
	b        lbl_80299AF8

lbl_80299AC0:
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051BB6C@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0xc(r3)
	lfs      f0, 0x18c(r31)
	lfs      f3, 0x2c(r3)
	lfs      f1, 0x194(r31)
	fsubs    f2, f2, f0
	lfs      f0, lbl_8051BB68@sda21(r2)
	fsubs    f3, f3, f1
	stfs     f2, 0(r30)
	stfs     f0, 4(r30)
	stfs     f3, 8(r30)

lbl_80299AF8:
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
 * Address:	80299B10
 * Size:	0000DC
 */
void KumaChappy::Obj::initMouthSlots()
{
	mMouthSlots.alloc(5);
	mMouthSlots.setup(0, mModel, "kamu1");
	mMouthSlots.setup(1, mModel, "kamu2");
	mMouthSlots.setup(2, mModel, "kamu3");
	mMouthSlots.setup(3, mModel, "kamu4");
	mMouthSlots.setup(4, mModel, "kamu5");
	f32 size = 35.0f;
	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.getSlot(i)->mRadius = size;
	}
}

/*
 * --INFO--
 * Address:	80299BEC
 * Size:	000064
 */
void KumaChappy::Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "asiL", 10.0f);
	mWalkSmokeMgr.setup(1, mModel, "asiR", 10.0f);
}

/*
 * --INFO--
 * Address:	80299C50
 * Size:	000008
 */
WalkSmokeEffect::Mgr* KumaChappy::Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/*
 * --INFO--
 * Address:	80299C58
 * Size:	000014
 */
bool KumaChappy::Obj::doBecomeCarcass()
{
	mReviveTimer = 0.0f;
	mHealth      = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	80299C6C
 * Size:	0001FC
 */
void KumaChappy::Obj::doUpdateCarcass()
{
	if (mPellet->isAlive()) {
		if (mReviveTimer < C_PARMS->mProperParms.mFp11) {
			mReviveTimer += sys->mDeltaTime;
			if (lifeGaugeMgr && mReviveTimer >= C_PARMS->mProperParms.mFp11) {
				lifeGaugeMgr->activeLifeGauge(this, 0.0f);
			}
		} else {
			if (mHealth < mMaxHealth) {
				mHealth += (mMaxHealth / C_PARMS->mProperParms.mFp12.mValue) * sys->mDeltaTime;
				if (mHealth >= mMaxHealth) {
					mPellet->kill(nullptr);
					f32 x = mObjMatrix.mMatrix.structView.zx;
					f32 z = mObjMatrix.mMatrix.structView.zz;
					EnemyBirthArg arg;
					arg.mPosition        = mPosition;
					arg.mFaceDir         = JMath::atanTable_.atan2_(x, z);
					arg.mExistenceLength = mExistDuration;
					arg.mIsInPiklopedia  = (u8)mInPiklopedia;
					EnemyBase* obj       = generalEnemyMgr->birth(getEnemyTypeID(), arg);
					if (obj) {
						obj->init(nullptr);
						mFsm->transit(this, KUMACHAPPY_Dead, nullptr);
					}
				}
			}
		}
	} else {
		if (lifeGaugeMgr && mReviveTimer >= C_PARMS->mProperParms.mFp11) {
			mReviveTimer = 0.0f;
			mHealth      = 0.0f;
			lifeGaugeMgr->inactiveLifeGauge(this);
		}
	}
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r3, 0x17c(r3)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80299E08
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x844(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80299D08
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	lwz      r3, lifeGaugeMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80299E44
	lwz      r4, 0xc0(r31)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x844(r4)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80299E44
	lfs      f1, lbl_8051BB68@sda21(r2)
	mr       r4, r31
	bl       activeLifeGauge__12LifeGaugeMgrFPQ24Game8Creaturef
	b        lbl_80299E44

lbl_80299D08:
	lfs      f2, 0x200(r31)
	lfs      f1, 0x204(r31)
	fcmpo    cr0, f2, f1
	bge      lbl_80299E44
	lfs      f0, 0x86c(r3)
	lwz      r3, sys@sda21(r13)
	fdivs    f1, f1, f0
	lfs      f0, 0x54(r3)
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x200(r31)
	lfs      f1, 0x200(r31)
	lfs      f0, 0x204(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80299E44
	lwz      r3, 0x17c(r31)
	li       r4, 0
	lwz      r3, 4(r3)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	lfs      f31, 0x140(r31)
	addi     r3, r1, 8
	lfs      f30, 0x160(r31)
	bl       __ct__Q24Game13EnemyBirthArgFv
	lfs      f0, 0x18c(r31)
	lis      r3, atanTable___5JMath@ha
	fmr      f1, f31
	addi     r3, r3, atanTable___5JMath@l
	stfs     f0, 8(r1)
	fmr      f2, f30
	lfs      f0, 0x190(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	stfs     f1, 0x14(r1)
	mr       r3, r31
	lfs      f0, 0x2ac(r31)
	stfs     f0, 0x34(r1)
	lbz      r4, 0x1f3(r31)
	neg      r0, r4
	or       r0, r0, r4
	srwi     r0, r0, 0x1f
	stb      r0, 0x38(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	addi     r5, r1, 8
	bl       birth__Q24Game15GeneralEnemyMgrFiRQ24Game13EnemyBirthArg
	cmplwi   r3, 0
	beq      lbl_80299E44
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_80299E44

lbl_80299E08:
	lwz      r0, lifeGaugeMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80299E44
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x844(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80299E44
	lfs      f0, lbl_8051BB68@sda21(r2)
	mr       r4, r31
	stfs     f0, 0x2c8(r31)
	stfs     f0, 0x200(r31)
	lwz      r3, lifeGaugeMgr@sda21(r13)
	bl       inactiveLifeGauge__12LifeGaugeMgrFPQ24Game8Creature

lbl_80299E44:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80299E68
 * Size:	000064
 */
void KumaChappy::Obj::doGetLifeGaugeParam(Game::LifeGaugeParam& param)
{
	param.mPosition.x = mPosition.x;
	if (mPellet) {
		param.mPosition.y = mPosition.y + 50.0f;
	} else {
		param.mPosition.y = mPosition.y + C_PARMS->mGeneral.mLifeMeterHeight.mValue;
	}
	param.mPosition.z          = mPosition.z;
	param.mCurHealthPercentage = mHealth / mMaxHealth;
	param.mRadius              = 10.0f;
}

/*
 * --INFO--
 * Address:	80299ECC
 * Size:	000024
 */
f32 KumaChappy::Obj::getViewAngle()
{
	Parms* parms = C_PARMS;
	if (mReviveTimer < parms->mGeneral.mAlertDuration) {
		return 180.0f;
	}
	return parms->mGeneral.mViewAngle;
}

/*
 * --INFO--
 * Address:	80299EF0
 * Size:	000010
 */
void KumaChappy::Obj::resetWayPoint()
{
	mCurrWP = nullptr;
	mPrevWP = nullptr;
	/*
	li       r0, 0
	stw      r0, 0x2ec(r3)
	stw      r0, 0x2f0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80299F00
 * Size:	0000B0
 */
void KumaChappy::Obj::setNearestWayPoint()
{
	mPrevWP = mCurrWP;
	WPSearchArg arg(mPosition, nullptr, false, 10.0f);

	mCurrWP = mapMgr->mRouteMgr->getNearestWayPoint(arg);

	WayPoint* wp = mCurrWP;
	if (wp) {
		mTargetPos = Vector3f(wp->mPosition);
	} else {
		mTargetPos = mHomePosition;
	}
}

/*
 * --INFO--
 * Address:	80299FB0
 * Size:	000260
 */
void KumaChappy::Obj::setLinkWayPoint()
{
	if (mCurrWP) {
		int wpNum = 0;
		int wpID  = -1;
		if (mPrevWP) {
			wpID = mPrevWP->mIndex;
		}
		// create collection of all children of the current WP
		WayPoint* wpList[9];
		WayPointIterator it(mCurrWP, true);
		CI_LOOP(it)
		{
			int id = *it;
			if (id != wpID) {
				WayPoint* wp = mapMgr->mRouteMgr->getWayPoint(id);
				if (wp && !(wp->mFlags & WPF_Closed)) {
					wpList[wpNum] = wp;
					wpNum++;
				}
			}
		}

		// children of the current waypoint were found
		if (wpNum) {
			mPrevWP    = mCurrWP;
			int id     = randWeightFloat(wpNum);
			mCurrWP    = wpList[id];
			mTargetPos = Vector3f(mCurrWP->mPosition);
			return;
		}

		// no children at current waypoint, backtrack to previous point
		if (wpID >= 0) {
			WayPoint* wp = mapMgr->mRouteMgr->getWayPoint(wpID);
			if (wp && !(wp->mFlags & WPF_Closed)) {
				mPrevWP    = mCurrWP;
				mCurrWP    = wp;
				mTargetPos = Vector3f(mCurrWP->mPosition);
				return;
			}
		}
	}
	// no waypoints found, default to searching for nearest
	setNearestWayPoint();

	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	stw      r28, 0x70(r1)
	lwz      r4, 0x2ec(r3)
	cmplwi   r4, 0
	beq      lbl_8029A168
	lwz      r3, 0x2f0(r31)
	li       r29, 0
	li       r28, -1
	cmplwi   r3, 0
	beq      lbl_80299FF4
	lha      r28, 0x36(r3)

lbl_80299FF4:
	addi     r3, r1, 8
	li       r5, 1
	bl       __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
	addi     r3, r1, 8
	bl       first__Q24Game16WayPointIteratorFv
	addi     r30, r1, 0x2c
	b        lbl_8029A068

lbl_8029A010:
	addi     r3, r1, 8
	bl       __ml__Q24Game16WayPointIteratorFv
	extsh    r0, r3
	cmpw     r0, r28
	beq      lbl_8029A060
	lwz      r5, mapMgr__4Game@sda21(r13)
	mr       r4, r3
	lwz      r3, 8(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8029A060
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8029A060
	stw      r3, 0(r30)
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_8029A060:
	addi     r3, r1, 8
	bl       next__Q24Game16WayPointIteratorFv

lbl_8029A068:
	addi     r3, r1, 8
	bl       isDone__Q24Game16WayPointIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029A010
	cmpwi    r29, 0
	beq      lbl_8029A104
	lwz      r0, 0x2ec(r31)
	stw      r0, 0x2f0(r31)
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x54(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051BBD8@sda21(r2)
	addi     r3, r1, 0x2c
	stw      r4, 0x50(r1)
	lfs      f0, lbl_8051BBD4@sda21(r2)
	lfd      f1, 0x50(r1)
	stw      r0, 0x5c(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x58(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x58(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	stw      r0, 0x2ec(r31)
	lwz      r3, 0x2ec(r31)
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2e0(r31)
	stfs     f1, 0x2e4(r31)
	stfs     f2, 0x2e8(r31)
	b        lbl_8029A1F0

lbl_8029A104:
	cmpwi    r28, 0
	blt      lbl_8029A168
	lwz      r3, mapMgr__4Game@sda21(r13)
	extsh    r4, r28
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8029A168
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8029A168
	lwz      r0, 0x2ec(r31)
	stw      r0, 0x2f0(r31)
	stw      r3, 0x2ec(r31)
	lwz      r3, 0x2ec(r31)
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2e0(r31)
	stfs     f1, 0x2e4(r31)
	stfs     f2, 0x2e8(r31)
	b        lbl_8029A1F0

lbl_8029A168:
	lwz      r3, 0x2ec(r31)
	li       r0, 0
	lfs      f0, lbl_8051BBC0@sda21(r2)
	addi     r4, r1, 0x14
	stw      r3, 0x2f0(r31)
	lfs      f1, 0x18c(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x14(r1)
	lfs      f1, 0x190(r31)
	stfs     f1, 0x18(r1)
	lfs      f1, 0x194(r31)
	stfs     f1, 0x1c(r1)
	stw      r0, 0x20(r1)
	stb      r0, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r3, 8(r3)
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	stw      r3, 0x2ec(r31)
	lwz      r3, 0x2ec(r31)
	cmplwi   r3, 0
	beq      lbl_8029A1D8
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2e0(r31)
	stfs     f1, 0x2e4(r31)
	stfs     f2, 0x2e8(r31)
	b        lbl_8029A1F0

lbl_8029A1D8:
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2e0(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2e8(r31)

lbl_8029A1F0:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r28, 0x70(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029A210
 * Size:	00006C
 */
void KumaChappy::Obj::getSearchedTarget()
{
	f32 angle = getViewAngle();

	Creature* target = EnemyFunc::getNearestPikminOrNavi(this, angle, C_PARMS->mGeneral.mSightRadius, nullptr, nullptr, nullptr);
	if (target) {
		mReviveTimer = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8029A27C
 * Size:	000128
 */
void KumaChappy::Obj::updateTargetDistance()
{
	f32 radius;
	if (mCurrWP) {
		radius = mCurrWP->mRadius;
	} else {
		radius = C_PARMS->mGeneral.mHomeRadius;
	}

	if (sqrDistanceXZ(mPosition, mTargetPos) < radius * radius) {
		setLinkWayPoint();
		mTimer = 0.0f;
	}

	if (mTimer > 5.0f) {
		mTimer = 0.0f;
		setNearestWayPoint();
		updateHomePosition();
	}
}

/*
 * --INFO--
 * Address:	8029A3A4
 * Size:	0000BC
 */
void KumaChappy::Obj::updateHomePosition()
{
	mHomePosition = Vector3f(pikmin2_sinf(mFaceDir) * C_PARMS->mGeneral.mHomeRadius.mValue + mPosition.x, mPosition.y,
	                         pikmin2_cosf(mFaceDir) * C_PARMS->mGeneral.mHomeRadius.mValue + mPosition.z);
	/*
	stwu     r1, -0x20(r1)
	lfs      f0, lbl_8051BB68@sda21(r2)
	lfs      f5, 0x1fc(r3)
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_8029A3C0
	fneg     f1, f5

lbl_8029A3C0:
	lfs      f3, lbl_8051BBE0@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	lfs      f0, lbl_8051BB68@sda21(r2)
	addi     r5, r5, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lwz      r4, 0xc0(r3)
	fcmpo    cr0, f5, f0
	lfs      f1, 0x194(r3)
	lfs      f6, 0x384(r4)
	fctiwz   f0, f2
	lfs      f2, 0x190(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r5, r0
	lfs      f0, 4(r4)
	fmadds   f4, f0, f6, f1
	bge      lbl_8029A42C
	lfs      f0, lbl_8051BBE4@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f1, f0
	b        lbl_8029A444

lbl_8029A42C:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r5, r0

lbl_8029A444:
	lfs      f0, 0x18c(r3)
	fmadds   f0, f1, f6, f0
	stfs     f0, 0x198(r3)
	stfs     f2, 0x19c(r3)
	stfs     f4, 0x1a0(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029A460
 * Size:	000070
 */
void KumaChappy::Obj::createChappyRelation()
{
	mChappyRelation = new ChappyRelation(this);
	mChappyRelation->clearRelations();
}

/*
 * --INFO--
 * Address:	8029A4D0
 * Size:	00007C
 */
void KumaChappy::Obj::startEnemyRumble()
{
	Matrixf* mtx = mModel->getJoint("ago")->getWorldMatrix();
	Vector3f vec(mtx->mMatrix.structView.tx, mtx->mMatrix.structView.ty, mtx->mMatrix.structView.tz);
	vec.y = mPosition.y;

	rumbleMgr->startRumble(11, vec, 2);
	createBounceEffect(vec, 0.75f);
}

/*
 * --INFO--
 * Address:	8029A54C
 * Size:	000060
 */
// ChappyRelation::~ChappyRelation()
//{
//}

/*
 * --INFO--
 * Address:	8029A5AC
 * Size:	000008
 */
MouthSlots* KumaChappy::Obj::getMouthSlots() { return &mMouthSlots; }

/*
 * --INFO--
 * Address:	8029A5B4
 * Size:	000008
 */
f32 KumaChappy::Obj::getDownSmokeScale() { return 1.0f; }

/*
 * --INFO--
 * Address:	8029A5BC
 * Size:	000008
 */
ChappyRelation* KumaChappy::Obj::getChappyRelation() { return mChappyRelation; }

/*
 * --INFO--
 * Address:	8029A5C4
 * Size:	000014
 */
// void EnemyBase::@760 @12 @viewOnPelletKilled()
//{
/*
li       r11, 0xc
lwzx     r11, r3, r11
add      r3, r3, r11
addi     r3, r3, -760
b        viewOnPelletKilled__Q24Game9EnemyBaseFv
*/
//}

/*
 * --INFO--
 * Address:	8029A5D8
 * Size:	000014
 */
// void EnemyBase::@760 @12 @viewStartCarryMotion()
//{
/*
li       r11, 0xc
lwzx     r11, r3, r11
add      r3, r3, r11
addi     r3, r3, -760
b        viewStartCarryMotion__Q24Game9EnemyBaseFv
*/
//}

/*
 * --INFO--
 * Address:	8029A5EC
 * Size:	000014
 */
// void EnemyBase::@760 @12 @viewStartPreCarryMotion()
//{
/*
li       r11, 0xc
lwzx     r11, r3, r11
add      r3, r3, r11
addi     r3, r3, -760
b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
*/
//}

/*
 * --INFO--
 * Address:	8029A600
 * Size:	000014
 */
// void EnemyBase::@760 @12 @view_finish_carrymotion()
//{
/*
li       r11, 0xc
lwzx     r11, r3, r11
add      r3, r3, r11
addi     r3, r3, -760
b        view_finish_carrymotion__Q24Game9EnemyBaseFv
*/
//}

/*
 * --INFO--
 * Address:	8029A614
 * Size:	000014
 */
// void EnemyBase::@760 @12 @view_start_carrymotion()
//{
/*
li       r11, 0xc
lwzx     r11, r3, r11
add      r3, r3, r11
addi     r3, r3, -760
b        view_start_carrymotion__Q24Game9EnemyBaseFv
*/
//}

/*
 * --INFO--
 * Address:	8029A628
 * Size:	000014
 */
// void EnemyBase::@760 @12 @viewGetShape()
//{
/*
li       r11, 0xc
lwzx     r11, r3, r11
add      r3, r3, r11
addi     r3, r3, -760
b        viewGetShape__Q24Game9EnemyBaseFv
*/
//}
} // namespace Game
