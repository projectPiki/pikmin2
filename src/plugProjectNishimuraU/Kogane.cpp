#include "Game/Entities/Kogane.h"
#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "Game/EnemyFunc.h"
#include "Game/gamePlayData.h"
#include "Radar.h"
#include "Game/Entities/ItemHoney.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804853D8
    lbl_804853D8:
        .4byte 0x00000001
        .4byte 0x00000001
        .4byte 0x00000001
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game6Kogane3Obj
    __vt__Q34Game6Kogane3Obj:
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
        .4byte onInit__Q34Game6Kogane3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game6Kogane3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game6Kogane3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game6Kogane3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game6Kogane3ObjFv
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
        .4byte getShadowParam__Q34Game6Kogane3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game6Kogane3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game6Kogane3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game6Kogane3ObjFv .4byte
   doUpdateCommon__Q34Game6Kogane3ObjFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game6Kogane3ObjFR8Graphics .4byte
   doSimpleDraw__Q24Game9EnemyBaseFP8Viewport .4byte
   doSimulationGround__Q24Game9EnemyBaseFf .4byte
   doSimulationFlying__Q24Game9EnemyBaseFf .4byte
   doSimulationStick__Q24Game9EnemyBaseFf .4byte 0 .4byte
   "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>" .4byte
   getFitEffectPos__Q24Game9EnemyBaseFv .4byte viewGetShape__Q24Game9EnemyBaseFv
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
        .4byte getEnemyTypeID__Q34Game6Kogane3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q34Game6Kogane3ObjFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game6Kogane3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q34Game6Kogane3ObjFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game6Kogane3ObjFv .4byte
   doFinishStoneState__Q34Game6Kogane3ObjFv .4byte
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
   wallCallback__Q34Game6Kogane3ObjFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q34Game6Kogane3ObjFv .4byte doEndMovie__Q34Game6Kogane3ObjFv
        .4byte setFSM__Q34Game6Kogane3ObjFPQ34Game6Kogane3FSM
        .4byte createItem__Q34Game6Kogane3ObjFv
        .4byte resetFartTimer__Q34Game6Kogane3ObjFv
        .4byte startBodyEffect__Q34Game6Kogane3ObjFv
        .4byte finishBodyEffect__Q34Game6Kogane3ObjFv
        .4byte createFartEffect__Q34Game6Kogane3ObjFv
        .4byte effectDrawOn__Q34Game6Kogane3ObjFv
        .4byte effectDrawOff__Q34Game6Kogane3ObjFv
        .4byte createPressSENormal__Q34Game6Kogane3ObjFv
        .4byte createPressSESpecial__Q34Game6Kogane3ObjFv
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
    .global lbl_8051AC28
    lbl_8051AC28:
        .4byte 0x38D1B717
    .global lbl_8051AC2C
    lbl_8051AC2C:
        .4byte 0x00000000
    .global lbl_8051AC30
    lbl_8051AC30:
        .4byte 0xC6480000
    .global lbl_8051AC34
    lbl_8051AC34:
        .4byte 0x40A00000
    .global lbl_8051AC38
    lbl_8051AC38:
        .float 1.0
    .global lbl_8051AC3C
    lbl_8051AC3C:
        .4byte 0x41700000
    .global lbl_8051AC40
    lbl_8051AC40:
        .4byte 0x626F6479
        .4byte 0x00000000
    .global lbl_8051AC48
    lbl_8051AC48:
        .4byte 0x41200000
    .global lbl_8051AC4C
    lbl_8051AC4C:
        .4byte 0x447A0000
    .global lbl_8051AC50
    lbl_8051AC50:
        .float 0.1
    .global lbl_8051AC54
    lbl_8051AC54:
        .4byte 0x40000000
    .global lbl_8051AC58
    lbl_8051AC58:
        .4byte 0x47000000
    .global lbl_8051AC5C
    lbl_8051AC5C:
        .4byte 0x40490FDB
    .global lbl_8051AC60
    lbl_8051AC60:
        .4byte 0x3BB60B61
    .global lbl_8051AC64
    lbl_8051AC64:
        .4byte 0xC3A2F983
    .global lbl_8051AC68
    lbl_8051AC68:
        .4byte 0x43A2F983
        .4byte 0x00000000
    .global lbl_8051AC70
    lbl_8051AC70:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051AC78
    lbl_8051AC78:
        .4byte 0x437A0000
    .global lbl_8051AC7C
    lbl_8051AC7C:
        .4byte 0x46480000
    .global lbl_8051AC80
    lbl_8051AC80:
        .4byte 0x40060A92
    .global lbl_8051AC84
    lbl_8051AC84:
        .4byte 0x42480000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8025DC8C
 * Size:	000130
 */
Kogane::Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	8025DDBC
 * Size:	000004
 */
void Kogane::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8025DDC0
 * Size:	000130
 */
void Kogane::Obj::onInit(Game::CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	enableEvent(0, EB_IsVulnerable);
	disableEvent(0, EB_ToLeaveCarcass);
	disableEvent(0, EB_IsDeathEffectEnabled);
	setEmotionNone();
	mScaleModifier = 0.0001f;
	mScale         = 0.0001f;
	mCollTree->mPart->setScale(mScaleModifier);
	mHitCount = 0;
	resetAppearTimer();
	resetMoveTimer(0.0f, 0.0f);
	mScaleTimer = 0.0001f;
	resetFartTimer();
	mFsm->start(this, KOGANE_Appear, nullptr);
	if (gameSystem && gameSystem->mMode == GSM_PIKLOPEDIA) {
		mAppearTimer = -12800.0f;
		mFsm->transit(this, KOGANE_Move, nullptr);
	} else {
		doAnimationCullingOff();
	}
}

/*
 * --INFO--
 * Address:	8025DEF0
 * Size:	000004
 */
void Kogane::Obj::resetFartTimer() { }

/*
 * --INFO--
 * Address:	8025DEF4
 * Size:	000050
 */
void Kogane::Obj::onKill(Game::CreatureKillArg* arg)
{
	finishBodyEffect();
	EnemyBase::onKill(arg);
}

/*
 * --INFO--
 * Address:	8025DF44
 * Size:	000034
 */
void Kogane::Obj::doUpdate() { mFsm->exec(this); }

/*
 * --INFO--
 * Address:	8025DF78
 * Size:	000020
 */
void Kogane::Obj::doUpdateCommon() { EnemyBase::doUpdateCommon(); }

/*
 * --INFO--
 * Address:	8025DF98
 * Size:	000004
 */
void Kogane::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8025DF9C
 * Size:	000020
 */
void Kogane::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8025DFBC
 * Size:	00004C
 */
void Kogane::Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	8025E008
 * Size:	0000A0
 */
void Kogane::Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition = getBodyJointPos();
	param.mPosition.y -= 5.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = param.mPosition.y - mPosition.y + 15.0f;
	param.mSize                     = mScaleTimer * 15.0f;
}

/*
 * --INFO--
 * Address:	8025E0A8
 * Size:	00006C
 */
bool Kogane::Obj::pressCallBack(Creature* obj, f32 dmg, CollPart*)
{
	if (obj && obj->isPiki()) {
		return transitDamageState(dmg);
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	8025E114
 * Size:	00003C
 */
void Kogane::Obj::wallCallback(const MoveInfo& info)
{
	Vector3f pos = info.mReflectPosition;
	setTargetPosition(&pos);
}

/*
 * --INFO--
 * Address:	8025E150
 * Size:	000060
 */
bool Kogane::Obj::earthquakeCallBack(Creature* obj, f32)
{
	if (obj && obj->isPiki()) {
		return transitDamageState(0.0f);
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	8025E1B0
 * Size:	00006C
 */
bool Kogane::Obj::hipdropCallBack(Creature* obj, f32 dmg, CollPart*)
{
	if (obj && obj->isPiki()) {
		return transitDamageState(dmg);
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	8025E21C
 * Size:	000050
 */
void Kogane::Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	disableEvent(0, EB_IsVulnerable);
	enableEvent(0, EB_IsDeathEffectEnabled);
	enableEvent(0, EB_LifegaugeVisible);
}

/*
 * --INFO--
 * Address:	8025E26C
 * Size:	000050
 */
void Kogane::Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	enableEvent(0, EB_IsVulnerable);
	disableEvent(0, EB_IsDeathEffectEnabled);
	disableEvent(0, EB_LifegaugeVisible);
}

/*
 * --INFO--
 * Address:	8025E2BC
 * Size:	00002C
 */
void Kogane::Obj::doStartMovie()
{
	effectDrawOff();
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
 * Address:	8025E2E8
 * Size:	000004
 */
void Kogane::Obj::effectDrawOff() { }

/*
 * --INFO--
 * Address:	8025E2EC
 * Size:	00002C
 */
void Kogane::Obj::doEndMovie()
{
	effectDrawOn();
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
 * Address:	8025E318
 * Size:	000004
 */
void Kogane::Obj::effectDrawOn() { }

/*
 * --INFO--
 * Address:	8025E31C
 * Size:	000084
 */
bool Kogane::Obj::transitDamageState(f32 dmg)
{
	if (isEvent(0, EB_IsBittered)) {
		addDamage(dmg, 1.0f);
		return true;
	} else {
		int id = getStateID();
		if (id == KOGANE_Move || id == KOGANE_Wait) {
			mFsm->transit(this, KOGANE_Press, nullptr);
			return true;
		} else {
			return false;
		}
	}
}

/*
 * --INFO--
 * Address:	8025E3A0
 * Size:	000108
 */
bool Kogane::Obj::transitDisappear()
{
	finishBodyEffect();
	if (mHitCount == 0 && gameSystem && gameSystem->mIsInCave && Cave::randMapMgr) {
		PelletInitArg arg;
		if (pelletMgr->makePelletInitArg(arg, mPelletDropCode)) {
			Cave::randMapMgr->getBaseGenData(&mPosition, &mFaceDir);
			mHomePosition = mPosition;
			return false;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	8025E4A8
 * Size:	000050
 */
Vector3f Kogane::Obj::getBodyJointPos()
{
	Matrixf* mtx = mModel->getJoint("body")->getWorldMatrix();
	return Vector3f(mtx->mMatrix.structView.tx, mtx->mMatrix.structView.ty, mtx->mMatrix.structView.tz);
}

/*
 * --INFO--
 * Address:	8025E4F8
 * Size:	0000A4
 */
bool Kogane::Obj::koganeScaleUp()
{
	bool check = false;
	if (mScaleTimer < C_PARMS->mProperParms.mFp40.mValue) {
		mScaleTimer += sys->mDeltaTime * 10.0f;

		if (C_PARMS->mProperParms.mFp40.mValue >= mScaleTimer) {
			check       = true;
			mScaleTimer = C_PARMS->mProperParms.mFp40.mValue;
			disableEvent(0, EB_IsEnemyNotBitter);
		}
		f32 scale      = mScaleTimer;
		mScaleModifier = scale;
		mScale         = scale;
		mCollTree->mPart->setScale(mScaleTimer);
	}
	return check;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r4, 0xc0(r3)
	lfs      f2, 0x2cc(r3)
	lfs      f0, 0x934(r4)
	fcmpo    cr0, f2, f0
	bge      lbl_8025E584
	lwz      r4, sys@sda21(r13)
	lfs      f1, lbl_8051AC48@sda21(r2)
	lfs      f0, 0x54(r4)
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x2cc(r3)
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2cc(r3)
	lfs      f0, 0x934(r4)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8025E560
	stfs     f0, 0x2cc(r3)
	li       r31, 1
	lwz      r0, 0x1e0(r3)
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r3)

lbl_8025E560:
	lfs      f0, 0x2cc(r3)
	stfs     f0, 0x1f8(r3)
	stfs     f0, 0x168(r3)
	stfs     f0, 0x16c(r3)
	stfs     f0, 0x170(r3)
	lwz      r4, 0x114(r3)
	lfs      f1, 0x2cc(r3)
	lwz      r3, 0(r4)
	bl       setScale__8CollPartFf

lbl_8025E584:
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
 * Address:	8025E59C
 * Size:	00008C
 */
bool Kogane::Obj::koganeScaleDown()
{
	bool check = false;
	if (mScaleTimer > 0.0001f) {
		mScaleTimer += -(sys->mDeltaTime * 10.0f);

		if (mScaleTimer <= 0.0001f) {
			mScaleTimer = 0.0001f;
			check       = true;
		}
		f32 scale      = mScaleTimer;
		mScaleModifier = scale;
		mScale         = scale;
		mCollTree->mPart->setScale(mScaleTimer);
	}
	return check;
}

/*
 * --INFO--
 * Address:	8025E628
 * Size:	0001AC
 */
void Kogane::Obj::setTargetPosition(Vector3f* goal)
{
	if (goal) {
		mTargetPosition.x = goal->x * 1000.0f + mPosition.x;
		mTargetPosition.y = mPosition.y;
		mTargetPosition.z = goal->z * 1000.0f + mPosition.z;
	} else {
		f32 angle = 0.0f;
		if (mScaleTimer > 0.1f) {
			angle = (C_PARMS->mProperParms.mFp30.mValue * 2.0f);
			angle *= randFloat();
			angle -= C_PARMS->mProperParms.mFp30.mValue;
		}
		angle *= DEG2RAD * PI + getFaceDir();
		mTargetPosition.x = 1000.0f * pikmin2_sinf(angle) + mPosition.x;
		mTargetPosition.y = mPosition.y;
		mTargetPosition.z = 1000.0f * pikmin2_cosf(angle) + mPosition.z;
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	cmplwi   r4, 0
	mr       r31, r3
	beq      lbl_8025E67C
	lfs      f2, lbl_8051AC4C@sda21(r2)
	lfs      f1, 0(r4)
	lfs      f0, 0x18c(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2d4(r31)
	lfs      f1, 8(r4)
	lfs      f0, 0x194(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2d8(r31)
	b        lbl_8025E7B8

lbl_8025E67C:
	lfs      f1, 0x2cc(r31)
	lfs      f0, lbl_8051AC50@sda21(r2)
	lfs      f31, lbl_8051AC2C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8025E6D8
	lwz      r3, 0xc0(r31)
	lfs      f1, lbl_8051AC54@sda21(r2)
	lfs      f0, 0x90c(r3)
	fmuls    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051AC70@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051AC58@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, 0x90c(r3)
	fmuls    f2, f31, f2
	fdivs    f1, f2, f1
	fsubs    f31, f1, f0

lbl_8025E6D8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051AC60@sda21(r2)
	lfs      f4, lbl_8051AC5C@sda21(r2)
	fmuls    f2, f0, f31
	lfs      f0, lbl_8051AC2C@sda21(r2)
	lfs      f3, lbl_8051AC4C@sda21(r2)
	fmadds   f4, f4, f2, f1
	fcmpo    cr0, f4, f0
	bge      lbl_8025E738
	lfs      f0, lbl_8051AC64@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8025E75C

lbl_8025E738:
	lfs      f0, lbl_8051AC68@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8025E75C:
	lfs      f1, 0x18c(r31)
	lfs      f0, lbl_8051AC2C@sda21(r2)
	fmadds   f1, f3, f2, f1
	fcmpo    cr0, f4, f0
	stfs     f1, 0x2d0(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2d4(r31)
	bge      lbl_8025E780
	fneg     f4, f4

lbl_8025E780:
	lfs      f0, lbl_8051AC68@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f2, lbl_8051AC4C@sda21(r2)
	fmuls    f1, f4, f0
	lfs      f0, 0x194(r31)
	fctiwz   f1, f1
	stfd     f1, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2d8(r31)

lbl_8025E7B8:
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
 * Address:	8025E7D4
 * Size:	000078
 */
void Kogane::Obj::resetAppearTimer()
{
	f32 time     = C_PARMS->mProperParms.mFp02.mValue - C_PARMS->mProperParms.mFp01.mValue;
	mAppearTimer = randWeightFloat(time);
}

/*
 * --INFO--
 * Address:	8025E84C
 * Size:	000080
 */
bool Kogane::Obj::isAppear()
{
	f32 rad = C_PARMS->mGeneral.mSightRadius.mValue;

	if (EnemyFunc::isThereOlimar(this, rad, nullptr) || EnemyFunc::isTherePikmin(this, rad, nullptr)) {
		return true;
	} else {
		return false;
	}
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
	lfs      f31, 0x3d4(r5)
	fmr      f1, f31
	bl
"isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025E88C
	li       r3, 1
	b        lbl_8025E8B0

lbl_8025E88C:
	fmr      f1, f31
	mr       r3, r31
	li       r4, 0
	bl
"isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025E8AC
	li       r3, 1
	b        lbl_8025E8B0

lbl_8025E8AC:
	li       r3, 0

lbl_8025E8B0:
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
 * Address:	8025E8CC
 * Size:	000084
 */
void Kogane::Obj::resetMoveTimer(f32 min, f32 max)
{
	f32 time   = max - min;
	mMoveTimer = randWeightFloat(time);
}

/*
 * --INFO--
 * Address:	8025E950
 * Size:	000194
 */
bool Kogane::Obj::createTreasureItem()
{
	if (mHitCount == 0) {
		PelletInitArg arg;
		if (pelletMgr->makePelletInitArg(arg, mPelletDropCode)) {
			arg.mState = 2;
			if (Pellet::sFromTekiEnable)
				arg.mFromEnemy = true;

			mHeldPellet = pelletMgr->birth(&arg);
			if (mHeldPellet) {
				Vector3f velocity(0.0f, 250.0f, 0.0f);

				Matrixf* mtx = mModel->getJoint("body")->getWorldMatrix();
				Vector3f offs(mtx->mMatrix.structView.tx, mtx->mMatrix.structView.ty, mtx->mMatrix.structView.tz);
				mHeldPellet->setPosition(offs, false);

				mHeldPellet->setVelocity(velocity);
				mHeldPellet->createKiraEffect(offs);
				Radar::mgr->exit(this);
				mSoundObj->startSound(PSSE_EN_ENEMY_LOOSE_ITEM, 0);
				mAppearTimer = 12800.0f;
				mHitCount    = 12800;
				return true;
			}
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	8025EAE4
 * Size:	000294
 */
void Kogane::Obj::createPellet(int type, int num)
{
	int colors       = 0;
	int hasColors[3] = { 1, 1, 1 };
	for (int i = 0; i < 3; i++) {
		if (playData->hasMetPikmin(i)) {
			hasColors[colors] = i;
			colors++;
		}
	}

	f32 angle = getFaceDir() + 2.094395f;
	f32 offs  = 2.094395f / (f32)num;

	Matrixf* mtx = mModel->getJoint("body")->getWorldMatrix();
	Vector3f pos(mtx->mMatrix.structView.tx, mtx->mMatrix.structView.ty, mtx->mMatrix.structView.tz);

	for (int i = 0; i < num; i++) {
		int id = randWeightFloat(colors);
		PelletNumberInitArg arg(type, hasColors[id]);
		Pellet* pelt = pelletMgr->birth(&arg);
		if (pelt) {
			pelt->init(&arg);
			pelt->onSetPosition(pos);

			Vector3f vel;
			f32 newangle = angle + offs;
			vel.z        = 1000.0f * pikmin2_cosf(newangle) * 50.0f;
			vel.x        = 1000.0f * pikmin2_sinf(newangle) * 50.0f;
			vel.y        = 250.0f;
			pelt->setVelocity(vel);
		}
	}
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
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stmw     r25, 0x74(r1)
	lis      r6, lbl_804853D8@ha
	mr       r29, r4
	lwzu     r4, lbl_804853D8@l(r6)
	mr       r25, r3
	mr       r30, r5
	addi     r26, r1, 0x20
	lwz      r3, 4(r6)
	li       r27, 0
	lwz      r0, 8(r6)
	li       r28, 0
	stw      r4, 0x20(r1)
	stw      r3, 0x24(r1)
	stw      r0, 0x28(r1)

lbl_8025EB48:
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r28
	bl       hasMetPikmin__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025EB68
	stw      r28, 0(r26)
	addi     r26, r26, 4
	addi     r27, r27, 1

lbl_8025EB68:
	addi     r28, r28, 1
	cmpwi    r28, 3
	blt      lbl_8025EB48
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 1
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	lfs      f3, lbl_8051AC80@sda21(r2)
	stw      r3, 0x5c(r1)
	addi     r4, r2, lbl_8051AC40@sda21
	lfd      f2, lbl_8051AC70@sda21(r2)
	fadds    f29, f3, f1
	stw      r0, 0x58(r1)
	lwz      r3, 0x174(r25)
	lfd      f0, 0x58(r1)
	fsubs    f0, f0, f2
	fdivs    f28, f3, f0
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	xoris    r27, r27, 0x8000
	lfs      f1, 0x1c(r3)
	addi     r28, r1, 0x20
	lfs      f0, 0xc(r3)
	li       r31, 0
	lfd      f30, lbl_8051AC70@sda21(r2)
	lis      r26, 0x4330
	stfs     f0, 0x14(r1)
	lfs      f31, lbl_8051AC58@sda21(r2)
	stfs     f1, 0x18(r1)
	stfs     f2, 0x1c(r1)
	b        lbl_8025ED3C

lbl_8025EBF8:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r26, 0x58(r1)
	mr       r4, r29
	addi     r3, r1, 0x2c
	stw      r0, 0x5c(r1)
	lfd      f0, 0x58(r1)
	stw      r27, 0x64(r1)
	fsubs    f0, f0, f30
	stw      r26, 0x60(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x60(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	slwi     r0, r0, 2
	lwzx     r5, r28, r0
	bl       __ct__Q24Game19PelletNumberInitArgFii
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x2c
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	or.      r25, r3, r3
	beq      lbl_8025ED38
	addi     r4, r1, 0x2c
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r25
	addi     r4, r1, 0x14
	lwz      r12, 0(r25)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	fadds    f29, f29, f28
	lfs      f0, lbl_8051AC2C@sda21(r2)
	fmr      f1, f29
	fcmpo    cr0, f29, f0
	bge      lbl_8025EC94
	fneg     f1, f29

lbl_8025EC94:
	lfs      f2, lbl_8051AC68@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051AC2C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_8051AC84@sda21(r2)
	fcmpo    cr0, f29, f0
	fctiwz   f0, f1
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f4, f3, f0
	bge      lbl_8025ECF4
	lfs      f0, lbl_8051AC64@sda21(r2)
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8025ED0C

lbl_8025ECF4:
	fmuls    f0, f29, f2
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8025ED0C:
	fmuls    f1, f3, f0
	lfs      f0, lbl_8051AC78@sda21(r2)
	stfs     f4, 0x10(r1)
	mr       r3, r25
	addi     r4, r1, 8
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r12, 0(r25)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8025ED38:
	addi     r31, r31, 1

lbl_8025ED3C:
	cmpw     r31, r30
	blt      lbl_8025EBF8
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	lmw      r25, 0x74(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025ED78
 * Size:	0001DC
 */
void Kogane::Obj::createDoping(u8 type, int num)
{
	f32 angle = getFaceDir() + 2.094395f;
	f32 offs  = 2.094395f / (f32)num;

	Matrixf* mtx = mModel->getJoint("body")->getWorldMatrix();
	Vector3f pos(mtx->mMatrix.structView.tx, mtx->mMatrix.structView.ty, mtx->mMatrix.structView.tz);

	for (int i = 0; i < num; i++) {
		ItemHoney::InitArg arg(type, 0);
		BaseItem* honey = ItemHoney::mgr->birth();
		if (honey) {
			honey->init(&arg);
			honey->setPosition(pos, false);

			Vector3f vel;
			f32 newangle = angle + offs;
			vel.z        = 1000.0f * pikmin2_cosf(newangle) * 50.0f;
			vel.x        = 1000.0f * pikmin2_sinf(newangle) * 50.0f;
			vel.y        = 250.0f;
			honey->setVelocity(vel);
		}
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stmw     r26, 0x48(r1)
	lwz      r12, 0(r3)
	mr       r26, r3
	mr       r30, r4
	mr       r31, r5
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 1
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	lfs      f3, lbl_8051AC80@sda21(r2)
	stw      r3, 0x2c(r1)
	addi     r4, r2, lbl_8051AC40@sda21
	lfd      f2, lbl_8051AC70@sda21(r2)
	fadds    f31, f3, f1
	stw      r0, 0x28(r1)
	lwz      r3, 0x174(r26)
	lfd      f0, 0x28(r1)
	fsubs    f0, f0, f2
	fdivs    f30, f3, f0
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	lfs      f1, 0x1c(r3)
	lis      r4, __vt__Q34Game9ItemHoney7InitArg@ha
	lfs      f0, 0xc(r3)
	addi     r28, r5, __vt__Q24Game15CreatureInitArg@l
	addi     r29, r4, __vt__Q34Game9ItemHoney7InitArg@l
	li       r27, 0
	stfs     f0, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f2, 0x24(r1)
	b        lbl_8025EF28

lbl_8025EE20:
	stw      r28, 8(r1)
	li       r0, 0
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	stw      r29, 8(r1)
	stb      r30, 0xc(r1)
	stb      r0, 0xd(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r26, r3, r3
	beq      lbl_8025EF24
	addi     r4, r1, 8
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r26
	addi     r4, r1, 0x1c
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	fadds    f31, f31, f30
	lfs      f0, lbl_8051AC2C@sda21(r2)
	fmr      f1, f31
	fcmpo    cr0, f31, f0
	bge      lbl_8025EE80
	fneg     f1, f31

lbl_8025EE80:
	lfs      f2, lbl_8051AC68@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051AC2C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_8051AC84@sda21(r2)
	fcmpo    cr0, f31, f0
	fctiwz   f0, f1
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f4, f3, f0
	bge      lbl_8025EEE0
	lfs      f0, lbl_8051AC64@sda21(r2)
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8025EEF8

lbl_8025EEE0:
	fmuls    f0, f31, f2
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8025EEF8:
	fmuls    f1, f3, f0
	lfs      f0, lbl_8051AC78@sda21(r2)
	stfs     f4, 0x18(r1)
	mr       r3, r26
	addi     r4, r1, 0x10
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8025EF24:
	addi     r27, r27, 1

lbl_8025EF28:
	cmpw     r27, r31
	blt      lbl_8025EE20
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	lmw      r26, 0x48(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025EF54
 * Size:	0000BC
 */
// Kogane::Obj::~Obj()
//{
//}

/*
 * --INFO--
 * Address:	8025F010
 * Size:	000004
 */
void Kogane::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	8025F014
 * Size:	000004
 */
void Kogane::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	8025F018
 * Size:	000008
 */
EnemyTypeID::EEnemyTypeID Kogane::Obj::getEnemyTypeID() { return EnemyTypeID::EnemyID_Kogane; }
} // namespace Game
