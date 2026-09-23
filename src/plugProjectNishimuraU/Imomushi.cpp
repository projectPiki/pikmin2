#include "Game/Entities/Imomushi.h"
#include "Game/Entities/ItemPlant.h"
#include "efx/TUjinko.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Imomushi {

/**
 * @note Address: 0x802BC138
 * @note Size: 0x138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM());
	createEffect();
}

/**
 * @note Address: 0x802BC270
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
}

/**
 * @note Address: 0x802BC274
 * @note Size: 0xE8
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LifegaugeVisible);
	disableEvent(0, EB_Cullable);
	disableEvent(0, EB_DeathEffectEnabled);
	mIsUnderground = false;
	mNextState     = IMOMUSHI_NULL;
	mStateTimer    = 0.0f;
	resetStickDiff();
	setupEffect();

	if (gameSystem && gameSystem->isZukanMode()) {
		mFsm->start(this, IMOMUSHI_ZukanStay, nullptr);
	} else {
		mFsm->start(this, IMOMUSHI_Stay, nullptr);
		doAnimationCullingOff();
	}
}

/**
 * @note Address: 0x802BC35C
 * @note Size: 0x44
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishMoveTraceEffect();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x802BC3A0
 * @note Size: 0x34
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
}

/**
 * @note Address: 0x802BC3D4
 * @note Size: 0x4D0
 */
void Obj::doAnimationStick()
{
	CollPart* stuckPart = mStuckCollPart;
	Vector3f crossVec;
	if (stuckPart->mPartType == COLLTYPE_SPHERE) {
		Vector3f sep = mPosition - stuckPart->mPosition;
		sep.normalise();
		sep *= C_PROPERPARMS.mRotationCorrection.mValue;

		mClimbRotation += sep;

		crossVec        = mClimbRotation.cross(mClimbDirection);
		mClimbDirection = crossVec.cross(mClimbRotation);
	} else {
		Vector3f sep = mClimbAxis - mClimbDirection;
		sep *= C_PROPERPARMS.mRotationCorrection.mValue;

		mClimbDirection += sep;

		Vector3f cv    = mClimbRotation.cross(mClimbDirection);
		crossVec       = cv;
		mClimbRotation = mClimbDirection.cross(crossVec);
	}

	mClimbDirection.normalise();
	crossVec.normalise();
	mClimbRotation.normalise();

	mBaseTrMatrix.setColumn(0, crossVec);
	mBaseTrMatrix.setColumn(1, mClimbRotation);
	mBaseTrMatrix.setColumn(2, mClimbDirection);

	if (mStickDiffEnabled) {
		Vector3f pos = mPosition;
		if (mIsStickDiffRunning) {
			bool check = false;

			f32 xDiff = mPosition.x - mClimbingXPos;
			f32 zDiff = mPosition.z - mClimbingZPos;

			f32 absX = absVal(xDiff);
			f32 absZ = absVal(zDiff);

			if (absX > C_PROPERPARMS.mTranslationCorrection()) {
				check = true;
				pos.x = (xDiff / absX) * C_PROPERPARMS.mTranslationCorrection() + mClimbingXPos;
			}

			if (absZ > C_PROPERPARMS.mTranslationCorrection()) {
				check = true;
				pos.z = (zDiff / absZ) * C_PROPERPARMS.mTranslationCorrection() + mClimbingZPos;
			}
			mStickDiffEnabled = check;

			mClimbingXPos = pos.x;
			mClimbingZPos = pos.z;
		}

		mIsStickDiffRunning = true;
		mBaseTrMatrix.newTranslation(pos);
	} else {
		mBaseTrMatrix.newTranslation(mPosition);
	}

	mFaceDir    = JMAAtan2Radian(mClimbDirection.x, mClimbDirection.z);
	mRotation.y = mFaceDir;
}

/**
 * @note Address: 0x802BC8A4
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x802BC8A8
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x802BC8C8
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802BC914
 * @note Size: 0xD0
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition = mModel->getJoint("koshi1jnt")->getWorldMatrix()->getColumn(3);
	param.mPosition.y -= 5.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isStickTo()) {
		param.mBoundingSphere.mRadius = 0.1f;
		param.mSize                   = 0.1f;
		return;
	}

	if (isEvent(1, EB2_Earthquake)) {
		param.mBoundingSphere.mRadius = 50.0f;
	} else {
		param.mBoundingSphere.mRadius = 15.0f;
	}

	param.mSize = 7.0f;
}

/**
 * @note Address: 0x802BC9E4
 * @note Size: 0x64
 */
bool Obj::earthquakeCallBack(Creature* creature, f32 damage)
{
	if (isStickTo()) {
		return false;
	}

	return EnemyBase::earthquakeCallBack(creature, damage);
}

/**
 * @note Address: 0x802BCA48
 * @note Size: 0x80
 */
bool Obj::dropCallBack(Creature* creature)
{
	if (mSticker && !isEvent(0, EB_Bittered)) {
		int stateID = getStateID();
		if (stateID == IMOMUSHI_Wait || stateID == IMOMUSHI_Attack) {
			mFsm->transit(this, IMOMUSHI_FallDive, nullptr);
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x802BCAC8
 * @note Size: 0x34
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishMoveTraceEffect();
}

/**
 * @note Address: 0x802BCAFC
 * @note Size: 0x4C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	int stateID = getStateID();
	if (stateID == IMOMUSHI_Move || stateID == IMOMUSHI_GoHome) {
		startMoveTraceEffect();
	}
}

/**
 * @note Address: 0x802BCB48
 * @note Size: 0x34
 */
void Obj::doStartEarthquakeState(f32 yVelScale)
{
	EnemyBase::doStartEarthquakeState(yVelScale);
	finishMoveTraceEffect();
}

/**
 * @note Address: 0x802BCB7C
 * @note Size: 0x4C
 */
void Obj::doFinishEarthquakeState()
{
	EnemyBase::doFinishEarthquakeState();
	int stateID = getStateID();
	if (stateID == IMOMUSHI_Move || stateID == IMOMUSHI_GoHome) {
		startMoveTraceEffect();
	}
}

/**
 * @note Address: 0x802BCBC8
 * @note Size: 0x34
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	finishMoveTraceEffect();
}

/**
 * @note Address: 0x802BCBFC
 * @note Size: 0x4C
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
	int stateID = getStateID();
	if (stateID == IMOMUSHI_Move || stateID == IMOMUSHI_GoHome) {
		startMoveTraceEffect();
	}
}

/**
 * @note Address: 0x802BCC48
 * @note Size: 0x28
 */
void Obj::startCarcassMotion()
{
	startMotion(IMOMUSHIANIM_Carry, nullptr);
}

/**
 * @note Address: 0x802BCC70
 * @note Size: 0x20
 */
void Obj::doStartMovie()
{
	effectDrawOff();
}

/**
 * @note Address: 0x802BCC90
 * @note Size: 0x20
 */
void Obj::doEndMovie()
{
	effectDrawOn();
}

/**
 * @note Address: 0x802BCCB0
 * @note Size: 0x24
 */
void Obj::lifeIncrement()
{
	mInstantDamage = 0.0f;
	disableEvent(0, EB_TakingDamage);
	mHealth = C_GENERALPARMS.mHealth();
}

/**
 * @note Address: 0x802BCCD4
 * @note Size: 0xAC
 */
void Obj::resetZukanStateTimer()
{
	f32 randVal = randWeightFloat(0.5f);
	mStateTimer = 5.0f - (0.5f * getCreatureID() + randVal);
}

/**
 * @note Address: 0x802BCD80
 * @note Size: 0x10
 */
void Obj::resetStickDiff()
{
	mIsStickDiffRunning = false;
	mStickDiffEnabled   = false;
}

/**
 * @note Address: 0x802BCD90
 * @note Size: 0x1C
 */
void Obj::setStickDiff(f32 x, f32 z)
{
	mStickDiffEnabled   = true;
	mIsStickDiffRunning = false;
	mClimbingXPos       = x;
	mClimbingZPos       = z;
}

/**
 * @note Address: 0x802BCDAC
 * @note Size: 0x31C
 */
Creature* Obj::getRandFruitsPlant()
{
	int counter = 0;
	ItemPlant::Plant* plantList[32];
	f32 rad = SQUARE(C_GENERALPARMS.mTerritoryRadius());
	Iterator<BaseItem> iter(ItemPlant::mgr);

	CI_LOOP(iter)
	{
		BaseItem* item          = *iter;
		ItemPlant::Plant* plant = static_cast<ItemPlant::Plant*>(item);
		if (plant->isAlive() && plant->hasFruits()) {
			Vector3f plantPos = plant->getPosition();
			if (mHomePosition.sqrDistance2D(plantPos) < rad) {
				plantList[counter] = plant;
				counter++;
			}
		}
	}

	if (counter != 0) {
		return plantList[randInt(counter)];
	}

	return nullptr;
}

/**
 * @note Address: 0x802BD0C8
 * @note Size: 0xC8
 */
void Obj::startClimbPlant(CollPart* part)
{
	endStick();
	if (!part) {
		return;
	}

	startStick(mTargetCreature, part);
	Sys::Tube tube;
	part->getTube(tube);
	tube.getAxisVector(mClimbAxis);

	f32 len              = tube.mStartPos.distance(tube.mEndPos);
	mClimbStartMoveRatio = 1.0f / len;
}

/**
 * @note Address: 0x802BD190
 * @note Size: 0x30
 */
void Obj::moveStickTube()
{
	Vector3f pos = mClimbAxis;
	pos *= C_PROPERPARMS.mPlantClimbingSpeed();
	mTargetVelocity = pos;
}

/**
 * @note Address: 0x802BD1C0
 * @note Size: 0xCC
 */
void Obj::moveStickSphere()
{
	Creature* sticker = mSticker;
	CollPart* part    = mStuckCollPart;
	endStick();
	Vector3f vel = mClimbDirection;
	vel *= C_PROPERPARMS.mSeedCirculationSpeed();
	mTargetVelocity = vel;

	doSimulationStick(sys->mDeltaTime);
	mPosition += mCurrentVelocity;
	startStick(sticker, part);
}

/**
 * @note Address: 0x802BD28C
 * @note Size: 0x19C
 */
void Obj::eatTsuyukusa()
{
	if (mSticker) {
		ItemPlant::Plant* plant = static_cast<ItemPlant::Plant*>(mSticker);
		if (plant->isAlive() && plant->hasFruits()) {
			Pellet* fruit = plant->getNearestFruit(mPosition);
			if (fruit) {
				if (fruit->mPelletColor == PELCOLOR_SPICY) {
					efx::ArgImoEat fxArg(this);
					fxArg.mType = PELCOLOR_SPICY;
					mEfxEat->create(&fxArg);
				} else {
					efx::ArgImoEat fxArg(this);
					fxArg.mType = PELCOLOR_BITTER;
					mEfxEat->create(&fxArg);
				}
			}

			if (mStateTimer > C_PROPERPARMS.mEatingTime()) {
				InteractEat eat(this, PelletType::Berry);
				plant->stimulate(eat);
				mStateTimer = 0.0f;
			}
		}
	}
}

/**
 * @note Address: 0x802BD428
 * @note Size: 0x74
 */
bool Obj::isAttackable()
{

	if (mTargetCreature) {
		ItemPlant::Item* target = static_cast<ItemPlant::Item*>(mTargetCreature);
		if (target->isAlive() && static_cast<ItemPlant::Item*>(target)->hasFruits()) {
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x802BD49C
 * @note Size: 0x4C
 */
bool Obj::isStickToFall()
{
	if (mSticker && !mSticker->isAlive()) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802BD4E8
 * @note Size: 0x188
 */
void Obj::setZukanTargetPosition()
{
	f32 randDist  = 50.0f + randWeightFloat(150.0f);
	f32 angleDist = JMAAtan2Radian(mPosition.x - mHomePosition.x, mPosition.z - mHomePosition.z);

	f32 randAngle = (angleDist + randWeightFloat(PI)) + HALF_PI;
	Vector3f pos  = Vector3f(randDist * sinf(randAngle) + mHomePosition.x, mHomePosition.y, randDist * cosf(randAngle) + mHomePosition.z);

	mZukanTargetPosition = pos;
}

/**
 * @note Address: 0x802BD670
 * @note Size: 0x34
 */
bool Obj::isInZukanTargetArea()
{
	return (mPosition.sqrDistance2D(mZukanTargetPosition) < 500.0f);
}

/**
 * @note Address: 0x802BD6A4
 * @note Size: 0x13C
 */
void Obj::createEffect()
{
	mEfxEat   = new efx::TImoEat();
	mEfxSmoke = new efx::TImoSmoke(&mPosition);
}

/**
 * @note Address: 0x802BD7E0
 * @note Size: 0x40
 */
void Obj::setupEffect()
{
	mEfxEat->mMtx = mModel->getJoint("headjnt")->getWorldMatrix();
}

/**
 * @note Address: 0x802BD820
 * @note Size: 0x8C
 */
void Obj::createAppearEffect()
{
	efx::TUjinkoAp_Imo appearFX(mModel->getJoint("imomushi")->getWorldMatrix());
	appearFX.create(nullptr);
}

/**
 * @note Address: 0x802BD8AC
 * @note Size: 0x8C
 */
void Obj::createDisAppearEffect()
{
	efx::TUjinkoHd_Imo hideFX(mModel->getJoint("imomushi")->getWorldMatrix());
	hideFX.create(nullptr);
}

/**
 * @note Address: 0x802BD938
 * @note Size: 0x84
 */
void Obj::startMoveTraceEffect()
{
	efx::ArgScale fxArg(mPosition, 1.0f);
	mEfxSmoke->create(&fxArg);
}

/**
 * @note Address: 0x802BD9BC
 * @note Size: 0x30
 */
void Obj::finishMoveTraceEffect()
{
	mEfxSmoke->fade();
}

/**
 * @note Address: 0x802BD9EC
 * @note Size: 0x50
 */
void Obj::effectDrawOn()
{
	mEfxEat->endDemoDrawOn();
	mEfxSmoke->endDemoDrawOn();
}

/**
 * @note Address: 0x802BDA3C
 * @note Size: 0x50
 */
void Obj::effectDrawOff()
{
	mEfxEat->startDemoDrawOff();
	mEfxSmoke->startDemoDrawOff();
}
} // namespace Imomushi
} // namespace Game
