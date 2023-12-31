#include "Game/Entities/Fuefuki.h"
#include "Game/Interaction.h"
#include "Game/Footmark.h"
#include "Game/GameSystem.h"
#include "Game/Piki.h"
#include "Game/PikiMgr.h"
#include "Game/MapMgr.h"
#include "efx/TFuebugOnpa.h"
#include "Dolphin/rand.h"
#include "Radar.h"

namespace Game {

/**
 * @note Address: 0x8029C1C4
 * @note Size: 0x58
 */
bool InteractFuefukiTimerReset::actEnemy(EnemyBase* enemy)
{
	if (enemy->getEnemyTypeID() == EnemyTypeID::EnemyID_Fuefuki) {
		static_cast<Fuefuki::Obj*>(enemy)->mSquadTimer = 5.0f;
		return true;
	}

	return false;
}

namespace Fuefuki {

/**
 * @note Address: 0x8029C21C
 * @note Size: 0x140
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createFootmarks();
	createEffect();
}

/**
 * @note Address: 0x8029C35C
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x8029C360
 * @note Size: 0x30
 */
void Obj::birth(Vector3f& position, f32 angle)
{
	EnemyBase::birth(position, angle);
	if (Radar::mgr) {
		Radar::mgr->bornFuefuki();
	}
}

/**
 * @note Address: 0x8029C390
 * @note Size: 0x88
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	mDropGroup   = 0;
	mCanStruggle = false;
	resetAppearTimer();
	mStateTimer = 0.0f;
	resetWhisleTimer(true);
	mSquadTimer            = 0.0f;
	mWhistleRadiusModifier = 0.0f;

	mNextState = FUEFUKI_NULL;
	mFsm->start(this, FUEFUKI_Land, nullptr);
}

/**
 * @note Address: 0x8029C418
 * @note Size: 0x54
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishWhisleEffect();
	if (Radar::mgr) {
		Radar::mgr->dieFuefuki();
	}

	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x8029C46C
 * @note Size: 0x78
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mAppearTimer += sys->mDeltaTime;
	if (mSquadTimer > 0.0f) {
		mSquadTimer--;
	}

	updateFootmarks();
}

/**
 * @note Address: 0x8029C4E4
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x8029C4E8
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8029C508
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x8029C554
 * @note Size: 0xA4
 */
void Obj::getShadowParam(ShadowParam& param)
{
	Sys::Sphere sphere;
	getBoundingSphere(sphere);
	param.mPosition.x               = sphere.mPosition.x;
	param.mPosition.y               = mPosition.y + 5.0f;
	param.mPosition.z               = sphere.mPosition.z;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_Earthquake)) {
		param.mBoundingSphere.mRadius = 75.0f;
	} else {
		param.mBoundingSphere.mRadius = 50.0f;
	}

	param.mSize = 15.0f;
}

/**
 * @note Address: 0x8029C5F8
 * @note Size: 0x68
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && mCanStruggle && !isEvent(0, EB_Bittered)) {
		mFsm->transit(this, FUEFUKI_Struggle, nullptr);
		return false;
	}

	return true;
}

/**
 * @note Address: 0x8029C660
 * @note Size: 0x68
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && mCanStruggle && !isEvent(0, EB_Bittered)) {
		mFsm->transit(this, FUEFUKI_Struggle, nullptr);
		return false;
	}

	return true;
}

/**
 * @note Address: 0x8029C6C8
 * @note Size: 0x44
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	if (mWhistleRadiusModifier > 0.0f) {
		finishWhisleEffect();
	}
}

/**
 * @note Address: 0x8029C70C
 * @note Size: 0x44
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (mWhistleRadiusModifier > 0.0f) {
		startWhisle();
	}
}

/**
 * @note Address: 0x8029C750
 * @note Size: 0x44
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	if (mWhistleRadiusModifier > 0.0f) {
		finishWhisleEffect();
	}
}

/**
 * @note Address: 0x8029C794
 * @note Size: 0x44
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
	if (mWhistleRadiusModifier > 0.0f) {
		startWhisle();
	}
}

/**
 * @note Address: 0x8029C7D8
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x8029C80C
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x8029C840
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(FUEFUKIANIM_Carry, nullptr); }

/**
 * @note Address: 0x8029C868
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x8029C888
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x8029C8A8
 * @note Size: 0xC0
 */
Vector3f Obj::getOffsetForMapCollision()
{
	int stateID = getStateID();
	if (stateID == FUEFUKI_Dead || stateID == FUEFUKI_Struggle) {
		Sys::Sphere sphere;
		getBoundingSphere(sphere);
		sphere.mPosition.x -= mPosition.x;
		sphere.mPosition.y = 0.0f;
		sphere.mPosition.z -= mPosition.z;
		return sphere.mPosition;

	} else {
		return Vector3f::zero;
	}
}

/**
 * @note Address: 0x8029C968
 * @note Size: 0x78
 */
void Obj::resetAppearTimer()
{
	f32 weight   = C_PROPERPARMS.mMaxGroundTime.mValue - C_PROPERPARMS.mMinGroundTime.mValue;
	mAppearTimer = randWeightFloat(weight);
}

/**
 * @note Address: 0x8029C9E0
 * @note Size: 0x2C
 */
void Obj::resetWhisleTimer(bool check)
{
	if (check) {
		mWhistleTimer = C_PROPERPARMS.mMaxWhistleTimeNoSquad.mValue - C_PROPERPARMS.mMinWhistleTime.mValue;
	} else {
		mWhistleTimer = 0.0f;
	}
}

/**
 * @note Address: 0x8029CA0C
 * @note Size: 0x78
 */
bool Obj::isWhisleTimeMax()
{
	if (mSquadTimer > 0.0f) {
		if (mStuckPikminCount != 0) {
			if (mWhistleTimer > C_PROPERPARMS.mMaxWhistleTimeNoSquad.mValue) {
				return true;
			}
		} else if (mWhistleTimer > C_PROPERPARMS.mMaxWhistleTimeWithSquad.mValue) {
			return true;
		}
	} else if (mWhistleTimer > C_PROPERPARMS.mMaxWhistleTimeNoSquad.mValue) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8029CA84
 * @note Size: 0x38
 */
void Obj::startWhisle()
{
	disableEvent(0, EB_Cullable);
	mWhistleTimer          = 0.0f;
	mWhistleRadiusModifier = 0.0f;
	startWhisleEffect();
}

/**
 * @note Address: 0x8029CABC
 * @note Size: 0x324
 */
void Obj::updateWhisle()
{
	mWhistleRadiusModifier += sys->mDeltaTime;
	if (mWhistleRadiusModifier > 1.0f) {
		mWhistleRadiusModifier = 1.0f;
	}

	f32 whistleRadius = mWhistleRadiusModifier * C_GENERALPARMS.mAttackRadius.mValue;
	updateWhisleEffect(whistleRadius);

	f32 whistleDiameter = whistleRadius * whistleRadius;
	Iterator<Piki> iter(pikiMgr);

	CI_LOOP(iter)
	{
		Piki* currPiki = (*iter);
		if (currPiki->isAlive() && currPiki->isPikmin() && !currPiki->isStickToMouth() && !currPiki->isMyPikmin(this)) {
			Vector3f pikiPos = currPiki->getPosition();
			if (sqrDistanceXZ(mPosition, pikiPos) < whistleDiameter) {
				InteractFueFuki whistle(this);
				currPiki->stimulate(whistle);
			}
		}
	}

	if (Radar::mgr) {
		Radar::mgr->fuefuki();
	}
}

/**
 * @note Address: 0x8029CDE0
 * @note Size: 0x38
 */
void Obj::finishWhisle()
{
	enableEvent(0, EB_Cullable);
	mWhistleTimer          = 0.0f;
	mWhistleRadiusModifier = 0.0f;
	finishWhisleEffect();
}

/**
 * @note Address: 0x8029CE18
 * @note Size: 0x2A0
 */
void Obj::setTargetPosition(bool check)
{
	f32 randDist;
	f32 randAngle;
	if (check) {
		randAngle = randWeightFloat(TAU);
		if (gameSystem && gameSystem->mIsInCave) {
			randDist = randWeightFloat(25.0f) + 50.0f;
		} else {
			f32 range = (C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue);
			randDist  = C_GENERALPARMS.mHomeRadius.mValue + randWeightFloat(range);
		}
	} else {
		f32 range = (C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue);
		randDist  = C_GENERALPARMS.mHomeRadius.mValue + randWeightFloat(range);
		f32 ang1  = randWeightFloat(PI);
		f32 ang2  = JMath::atanTable_.atan2_(mPosition.x - mHomePosition.x, mPosition.z - mHomePosition.z);
		f32 ang3  = HALF_PI;
		randAngle = ang2 + ang1 + ang3; // dumb fix for regswap
	}

	mTargetPosition = Vector3f(randDist * sinf(randAngle) + mHomePosition.x, mHomePosition.y, randDist * cosf(randAngle) + mHomePosition.z);

	if (check) {
		mTargetPosition.y = mapMgr->getMinY(mTargetPosition);
	}
}

/**
 * @note Address: 0x8029D0B8
 * @note Size: 0x1E0
 */
bool Obj::isJumpAway()
{
	if (mAppearTimer > C_PROPERPARMS.mMaxGroundTime.mValue) {
		return true;
	}

	if (!(mSquadTimer > 0.0f)) {
		f32 privRad = C_GENERALPARMS.mPrivateRadius.mValue;
		Sys::Sphere sphere(mPosition, privRad);
		f32 privateDiameter = privRad * privRad;

		CellIteratorArg iterArg(sphere);
		iterArg.mOptimise = true;

		CellIterator iter(iterArg);

		CI_LOOP(iter)
		{
			Creature* creature = static_cast<Creature*>(*iter);
			if (creature->isAlive()) {
				bool creatureCheck = creature->isNavi();
				if (!creatureCheck) {
					if (creature->isPiki() && static_cast<FakePiki*>(creature)->isPikmin()
					    && !static_cast<Piki*>(creature)->isStickToMouth() && !static_cast<Piki*>(creature)->isMyPikmin(this)) {
						creatureCheck = true;
					}
				}

				if (creatureCheck) {
					Vector3f creaturePos = creature->getPosition();
					if (sqrDistanceXZ(mPosition, creaturePos) < privateDiameter) {
						mAppearTimer = C_PROPERPARMS.mMaxGroundTime.mValue;
						return true;
					}
				}
			}
		}
	}

	return false;
}

/**
 * @note Address: 0x8029D298
 * @note Size: 0x48
 */
bool Obj::isArriveTarget()
{
	if (mWallTriangle || sqrDistanceXZ(mPosition, mTargetPosition) < 625.0f) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8029D2E0
 * @note Size: 0x50
 */
void Obj::createFootmarks()
{
	mFootmarks = new Footmarks;
	mFootmarks->alloc(10);
}

/**
 * @note Address: 0x8029D330
 * @note Size: 0xBC
 */
void Obj::updateFootmarks()
{
	f32 timer = (mFootmarks->mLastUpdateTime - (int)gameSystem->mFrameTimer);

	timer = (timer > 0.0f) ? timer : -timer;

	if (timer > 2.5f) {
		Footmark mark;
		mark.mPosition = getPosition();
		mFootmarks->add(mark);
	}
}

/**
 * @note Address: 0x8029D3EC
 * @note Size: 0x19C
 */
void Obj::createEffect()
{
	mEfxWhistle = new efx::TCursor(PID_Cursor_NULL);
	mEfxWhistle->init(3, 10);
	mEfxOnpa = new efx::TFuebugOnpa;
}

/**
 * @note Address: 0x8029D588
 * @note Size: 0x9C
 */
void Obj::startWhisleEffect()
{
	efx::ArgCursor argCursor(mPosition, 0.0f);
	mEfxWhistle->create(&argCursor);

	mEfxOnpa->mPosition = &mPosition;
	mEfxOnpa->create(nullptr);
}

/**
 * @note Address: 0x8029D624
 * @note Size: 0x78
 */
void Obj::updateWhisleEffect(f32 scale)
{
	efx::ArgCursor argCursor(mPosition, scale);
	mEfxWhistle->update(&argCursor);
	mEfxWhistle->mAngleSpeed = C_GENERALPARMS.mAttackHitAngle.mValue;
}

/**
 * @note Address: 0x8029D69C
 * @note Size: 0x50
 */
void Obj::finishWhisleEffect()
{
	mEfxWhistle->fade();
	mEfxOnpa->fade();
}

/**
 * @note Address: 0x8029D718
 * @note Size: 0x78
 */
void Obj::createDownEffect(f32 scale)
{
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	Vector3f position(boundingSphere.mPosition.x, mPosition.y, boundingSphere.mPosition.z);
	createBounceEffect(position, scale);
}

/**
 * @note Address: 0x8029D790
 * @note Size: 0x48
 */
void Obj::createEfxHamon()
{
	if (!isFlying()) {
		EnemyBase::createEfxHamon();
	}
}

/**
 * @note Address: 0x8029D7D8
 * @note Size: 0x50
 */
void Obj::effectDrawOn()
{
	mEfxWhistle->mOneEmitter.endDemoDrawOn();
	mEfxOnpa->endDemoDrawOn();
}

/**
 * @note Address: 0x8029D844
 * @note Size: 0x50
 */
void Obj::effectDrawOff()
{
	mEfxWhistle->mOneEmitter.startDemoDrawOff();
	mEfxOnpa->startDemoDrawOff();
}

} // namespace Fuefuki
} // namespace Game
