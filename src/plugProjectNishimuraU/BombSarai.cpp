#include "Game/Entities/BombSarai.h"
#include "Game/Entities/Bomb.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Game/MapMgr.h"
#include "Dolphin/rand.h"

static const char bombSaraiName[] = "246-BombSarai";

namespace Game {

/*
 * --INFO--
 * Address:	802B27CC
 * Size:	000138
 */
BombSarai::Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM());
	createEffect();
}

/*
 * --INFO--
 * Address:	802B2904
 * Size:	000004
 */
void BombSarai::Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802B2908
 * Size:	000098
 */
void BombSarai::Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	if (gameSystem && gameSystem->isZukanMode()) {
		enableEvent(0, EB_Invulnerable);
	}

	mNextState      = BOMBSARAI_NULL;
	mStateTimer     = 0.0f;
	mBombCarryTimer = 0.0f;
	mPitchRatio     = 0.0f;
	mHeldBomb       = nullptr;

	setupEffect();

	mFsm->start(this, BOMBSARAI_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	802B29A0
 * Size:	000050
 */
void BombSarai::Obj::onKill(CreatureKillArg* killArg)
{
	throwBomb(Vector3f::zero);
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802B29F0
 * Size:	0000A4
 */
void BombSarai::Obj::doUpdate()
{
	mFsm->exec(this);
	if (isAlive() && isFlying()) {
		getJAIObject()->startSound(PSSE_EN_BOMBSARAI_AIR, 0);
	}
}

/*
 * --INFO--
 * Address:	802B2A94
 * Size:	000004
 */
void BombSarai::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802B2A98
 * Size:	000020
 */
void BombSarai::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802B2AB8
 * Size:	00004C
 */
void BombSarai::Obj::setFSM(BombSarai::FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	802B2B04
 * Size:	0000D4
 */
void BombSarai::Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* worldMat     = mModel->getJoint("body_joint1")->getWorldMatrix();
	shadowParam.mPosition = worldMat->getBasis(3);

	if (isFlying()) {
		shadowParam.mPosition.y -= 15.0f;
	} else {
		shadowParam.mPosition.y = 5.0f + mPosition.y;
	}

	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 50.0f + C_PROPERPARMS.mFlightHeight.mValue;
	shadowParam.mSize                     = 17.5f;
}

/*
 * --INFO--
 * Address:	802B2BD8
 * Size:	00003C
 */
bool BombSarai::Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage)
{
	if (mBounceTriangle) {
		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802B2C14
 * Size:	00008C
 */
void BombSarai::Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (mHealth > 0.5f * C_PARMS->mGeneral.mHealth.mValue) {
		mFsm->transit(this, BOMBSARAI_TakeOff1, nullptr);
	} else {
		mFsm->transit(this, BOMBSARAI_TakeOff2, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802B2CA0
 * Size:	000034
 */
void BombSarai::Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	802B2CD4
 * Size:	000034
 */
void BombSarai::Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	802B2D08
 * Size:	000028
 */
void BombSarai::Obj::startCarcassMotion() { startMotion(BOMBSARAIANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	802B2D30
 * Size:	000020
 */
void BombSarai::Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802B2D50
 * Size:	000020
 */
void BombSarai::Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802B2D70
 * Size:	0001A0
 */
f32 BombSarai::Obj::setHeightVelocity(bool isFastTakeOff)
{
	f32 minY       = mapMgr->getMinY(mPosition);
	f32 riseFactor = 6.0f;
	if (!isFastTakeOff) {
		int pikiCount = (mStuckPikminCount < 0) ? 0 : (mStuckPikminCount <= 5) ? mStuckPikminCount : 5;

		f32 pikiCountF = (f32)pikiCount;
		riseFactor
		    = (5.0f - pikiCountF) / 5.0f * C_PROPERPARMS.mFreeRiseFactor.mValue + pikiCountF / 5.0f * C_PROPERPARMS.mLadenRiseFactor.mValue;
	}

	f32 newHeight = C_PROPERPARMS.mFlightHeight.mValue;
	if (mPosition.y - minY > newHeight - C_PROPERPARMS.mPitchAmp.mValue) {
		addPitchRatio();

		newHeight += C_PROPERPARMS.mPitchAmp.mValue * sinf(mPitchRatio);
	}

	mCurrentVelocity.y = riseFactor * ((minY + newHeight) - mPosition.y);

	return mPosition.y - minY;
}

/*
 * --INFO--
 * Address:	802B2F10
 * Size:	0001E8
 */
void BombSarai::Obj::setRandTarget()
{
	f32 randAmp;
	if (gameSystem && gameSystem->mIsInCave) {
		randAmp = 50.0f + randWeightFloat(50.0f);
	} else {
		randAmp = C_PARMS->mGeneral.mHomeRadius.mValue
		        + randWeightFloat(C_PARMS->mGeneral.mTerritoryRadius.mValue - C_PARMS->mGeneral.mHomeRadius.mValue);
	}

	f32 angleToHome = JMAAtan2Radian(mPosition.x - mHomePosition.x, mPosition.z - mHomePosition.z);

	f32 theta = HALF_PI + (angleToHome + randWeightFloat(PI));

	mTargetPosition = Vector3f(randAmp * sinf(theta) + mHomePosition.x, mHomePosition.y, randAmp * cosf(theta) + mHomePosition.z);
}

/*
 * --INFO--
 * Address:	802B30F8
 * Size:	000038
 */
void BombSarai::Obj::addPitchRatio()
{
	mPitchRatio += C_PROPERPARMS.mPitchRate.mValue * sys->mDeltaTime;
	if (mPitchRatio > TAU) {
		mPitchRatio -= TAU;
	}
}

/*
 * --INFO--
 * Address:	802B3130
 * Size:	0000C8
 */
void BombSarai::Obj::supplyBomb()
{
	if (!mHeldBomb) {
		Bomb::Mgr* bombMgr = static_cast<Bomb::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Bomb));
		if (bombMgr) {
			EnemyBirthArg birthArg;
			birthArg.mFaceDir = getFaceDir();
			Bomb::Obj* bomb   = static_cast<Bomb::Obj*>(bombMgr->birth(birthArg));
			if (bomb) {
				mHeldBomb = bomb;
				mHeldBomb->init(nullptr);
				mHeldBomb->startCapture(mModel->getJoint("kamu_jnt1")->getWorldMatrix());
				mHeldBomb->mCarrier = this;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802B31F8
 * Size:	000078
 */
void BombSarai::Obj::throwBomb(Vector3f& velocity)
{
	if (mHeldBomb) {
		mHeldBomb->endCapture();
		mHeldBomb->setVelocity(velocity);
		mHeldBomb->updateFaceDir(mFaceDir);
	}

	mHeldBomb = nullptr;
}

/*
 * --INFO--
 * Address:	802B3270
 * Size:	000070
 */
Creature* BombSarai::Obj::getAttackablePikmin()
{
	if (sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(C_PARMS->mGeneral.mTerritoryRadius())) {
		return EnemyFunc::getNearestPikminOrNavi(this, C_PARMS->mGeneral.mViewAngle.mValue, C_PARMS->mGeneral.mSightRadius.mValue, nullptr,
		                                         nullptr, nullptr);
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	802B32E0
 * Size:	000144
 */
BombSarai::StateID BombSarai::Obj::getNextStateOnHeight()
{
	if (mHealth <= 0.0f) {
		return BOMBSARAI_Fall;
	}

	int pikiCount = mStuckPikminCount;
	if (pikiCount != 0) {
		if (EnemyFunc::getStickPikminColorNum(this, Purple) > 0) {
			return BOMBSARAI_Fall;
		}

		int popCount = (pikiCount - 1 < 0) ? 0 : (pikiCount - 1 <= 4) ? pikiCount - 1 : 4;

		f32 popCountF = (f32)popCount;
		f32 limit
		    = (4.0f - popCountF) / 4.0f * C_PROPERPARMS.mFreeFlickChance.mValue + popCountF / 4.0f * C_PROPERPARMS.mLadenFlickChance.mValue;

		if (randWeightFloat(1.0f) < limit) {
			return (StateID)((int)BOMBSARAI_Flick + (StateID)(mHeldBomb != nullptr));
		}

		return BOMBSARAI_Fall;
	}

	return BOMBSARAI_NULL;
}

/*
 * --INFO--
 * Address:	802B3424
 * Size:	0000B0
 */
void BombSarai::Obj::createEffect() { mEfxSupli = new efx::TBsaraiSupli(); }

/*
 * --INFO--
 * Address:	802B34D4
 * Size:	000044
 */
void BombSarai::Obj::setupEffect() { mEfxSupli->mMtx = mModel->getJoint("kuti_joint1")->getWorldMatrix(); }

/*
 * --INFO--
 * Address:	802B3518
 * Size:	000034
 */
void BombSarai::Obj::createSupliEffect() { mEfxSupli->create(nullptr); }

/*
 * --INFO--
 * Address:	802B354C
 * Size:	00011C
 */
void BombSarai::Obj::createBalloonEffect(int balloon)
{
	Matrixf* worldMat;
	if (balloon == 0) {
		worldMat = mModel->getJoint("balloon1")->getWorldMatrix();

	} else if (balloon == 1) {
		worldMat = mModel->getJoint("balloon2")->getWorldMatrix();

	} else if (balloon == 2) {
		worldMat = mModel->getJoint("balloon3")->getWorldMatrix();

	} else if (balloon == 3) {
		worldMat = mModel->getJoint("balloon4")->getWorldMatrix();

	} else {
		worldMat = mModel->getJoint("balloon5")->getWorldMatrix();
	}

	if (worldMat) {
		Vector3f pos;
		worldMat->getTranslation(pos);

		efx::TBsaraiDead deadFX;
		efx::Arg fxArg(pos);

		deadFX.create(&fxArg);
	}
}

/*
 * --INFO--
 * Address:	802B3668
 * Size:	000024
 */
void BombSarai::Obj::createDownEffect(f32 p1) { createBounceEffect(mPosition, p1); }

/*
 * --INFO--
 * Address:	802B368C
 * Size:	000030
 */
void BombSarai::Obj::effectDrawOn() { mEfxSupli->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	802B36BC
 * Size:	000030
 */
void BombSarai::Obj::effectDrawOff() { mEfxSupli->startDemoDrawOff(); }

} // namespace Game
