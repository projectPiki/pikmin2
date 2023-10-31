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

/*
 * --INFO--
 * Address:	8029C1C4
 * Size:	000058
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

/*
 * --INFO--
 * Address:	8029C21C
 * Size:	000140
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createFootmarks();
	createEffect();
}

/*
 * --INFO--
 * Address:	8029C35C
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8029C360
 * Size:	000030
 */
void Obj::birth(Vector3f& position, f32 angle)
{
	EnemyBase::birth(position, angle);
	if (Radar::mgr) {
		Radar::mgr->bornFuefuki();
	}
}

/*
 * --INFO--
 * Address:	8029C390
 * Size:	000088
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

/*
 * --INFO--
 * Address:	8029C418
 * Size:	000054
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishWhisleEffect();
	if (Radar::mgr) {
		Radar::mgr->dieFuefuki();
	}

	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	8029C46C
 * Size:	000078
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

/*
 * --INFO--
 * Address:	8029C4E4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8029C4E8
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8029C508
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	8029C554
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	8029C5F8
 * Size:	000068
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && mCanStruggle && !isEvent(0, EB_Bittered)) {
		mFsm->transit(this, FUEFUKI_Struggle, nullptr);
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	8029C660
 * Size:	000068
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && mCanStruggle && !isEvent(0, EB_Bittered)) {
		mFsm->transit(this, FUEFUKI_Struggle, nullptr);
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	8029C6C8
 * Size:	000044
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	if (mWhistleRadiusModifier > 0.0f) {
		finishWhisleEffect();
	}
}

/*
 * --INFO--
 * Address:	8029C70C
 * Size:	000044
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (mWhistleRadiusModifier > 0.0f) {
		startWhisle();
	}
}

/*
 * --INFO--
 * Address:	8029C750
 * Size:	000044
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	if (mWhistleRadiusModifier > 0.0f) {
		finishWhisleEffect();
	}
}

/*
 * --INFO--
 * Address:	8029C794
 * Size:	000044
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
	if (mWhistleRadiusModifier > 0.0f) {
		startWhisle();
	}
}

/*
 * --INFO--
 * Address:	8029C7D8
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	8029C80C
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	8029C840
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(FUEFUKIANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	8029C868
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	8029C888
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8029C8A8
 * Size:	0000C0
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

/*
 * --INFO--
 * Address:	8029C968
 * Size:	000078
 */
void Obj::resetAppearTimer()
{
	f32 weight   = C_PROPERPARMS.mMaxGroundTime.mValue - C_PROPERPARMS.mMinGroundTime.mValue;
	mAppearTimer = randWeightFloat(weight);
}

/*
 * --INFO--
 * Address:	8029C9E0
 * Size:	00002C
 */
void Obj::resetWhisleTimer(bool check)
{
	if (check) {
		mWhistleTimer = C_PROPERPARMS.mMaxWhistleTimeNoSquad.mValue - C_PROPERPARMS.mMinWhistleTime.mValue;
	} else {
		mWhistleTimer = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8029CA0C
 * Size:	000078
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

/*
 * --INFO--
 * Address:	8029CA84
 * Size:	000038
 */
void Obj::startWhisle()
{
	disableEvent(0, EB_Cullable);
	mWhistleTimer          = 0.0f;
	mWhistleRadiusModifier = 0.0f;
	startWhisleEffect();
}

/*
 * --INFO--
 * Address:	8029CABC
 * Size:	000324
 */
void Obj::updateWhisle()
{
	mWhistleRadiusModifier += sys->mDeltaTime;
	if (mWhistleRadiusModifier > 1.0f) {
		mWhistleRadiusModifier = 1.0f;
	}

	f32 whistleRadius = mWhistleRadiusModifier * C_PARMS->mGeneral.mAttackRadius.mValue;
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

/*
 * --INFO--
 * Address:	8029CDE0
 * Size:	000038
 */
void Obj::finishWhisle()
{
	enableEvent(0, EB_Cullable);
	mWhistleTimer          = 0.0f;
	mWhistleRadiusModifier = 0.0f;
	finishWhisleEffect();
}

/*
 * --INFO--
 * Address:	8029CE18
 * Size:	0002A0
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
			f32 range = (C_PARMS->mGeneral.mTerritoryRadius.mValue - C_PARMS->mGeneral.mHomeRadius.mValue);
			randDist  = C_PARMS->mGeneral.mHomeRadius.mValue + randWeightFloat(range);
		}
	} else {
		f32 range = (C_PARMS->mGeneral.mTerritoryRadius.mValue - C_PARMS->mGeneral.mHomeRadius.mValue);
		randDist  = C_PARMS->mGeneral.mHomeRadius.mValue + randWeightFloat(range);
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

/*
 * --INFO--
 * Address:	8029D0B8
 * Size:	0001E0
 */
bool Obj::isJumpAway()
{
	if (mAppearTimer > C_PROPERPARMS.mMaxGroundTime.mValue) {
		return true;
	}

	if (!(mSquadTimer > 0.0f)) {
		f32 privRad = C_PARMS->mGeneral.mPrivateRadius.mValue;
		Sys::Sphere sphere(mPosition, privRad);
		f32 privateDiameter = privRad * privRad;

		CellIteratorArg iterArg(sphere);
		iterArg.mIsSphereCollisionDisabled = true;

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

/*
 * --INFO--
 * Address:	8029D298
 * Size:	000048
 */
bool Obj::isArriveTarget()
{
	if (mWallTriangle || sqrDistanceXZ(mPosition, mTargetPosition) < 625.0f) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8029D2E0
 * Size:	000050
 */
void Obj::createFootmarks()
{
	mFootmarks = new Footmarks;
	mFootmarks->alloc(10);
}

/*
 * --INFO--
 * Address:	8029D330
 * Size:	0000BC
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

/*
 * --INFO--
 * Address:	8029D3EC
 * Size:	00019C
 */
void Obj::createEffect()
{
	mEfxWhistle = new efx::TCursor(PID_Cursor_NULL);
	mEfxWhistle->init(3, 10);
	mEfxOnpa = new efx::TFuebugOnpa;
}

/*
 * --INFO--
 * Address:	8029D588
 * Size:	00009C
 */
void Obj::startWhisleEffect()
{
	efx::ArgCursor argCursor(mPosition, 0.0f);
	mEfxWhistle->create(&argCursor);

	mEfxOnpa->mPosition = &mPosition;
	mEfxOnpa->create(nullptr);
}

/*
 * --INFO--
 * Address:	8029D624
 * Size:	000078
 */
void Obj::updateWhisleEffect(f32 scale)
{
	efx::ArgCursor argCursor(mPosition, scale);
	mEfxWhistle->update(&argCursor);
	mEfxWhistle->mAngleSpeed = C_PARMS->mGeneral.mAttackHitAngle.mValue;
}

/*
 * --INFO--
 * Address:	8029D69C
 * Size:	000050
 */
void Obj::finishWhisleEffect()
{
	mEfxWhistle->fade();
	mEfxOnpa->fade();
}

/*
 * --INFO--
 * Address:	8029D718
 * Size:	000078
 */
void Obj::createDownEffect(f32 scale)
{
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	Vector3f position(boundingSphere.mPosition.x, mPosition.y, boundingSphere.mPosition.z);
	createBounceEffect(position, scale);
}

/*
 * --INFO--
 * Address:	8029D790
 * Size:	000048
 */
void Obj::createEfxHamon()
{
	if (!isFlying()) {
		EnemyBase::createEfxHamon();
	}
}

/*
 * --INFO--
 * Address:	8029D7D8
 * Size:	000050
 */
void Obj::effectDrawOn()
{
	mEfxWhistle->mOneEmitter.endDemoDrawOn();
	mEfxOnpa->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	8029D844
 * Size:	000050
 */
void Obj::effectDrawOff()
{
	mEfxWhistle->mOneEmitter.startDemoDrawOff();
	mEfxOnpa->startDemoDrawOff();
}

} // namespace Fuefuki
} // namespace Game
