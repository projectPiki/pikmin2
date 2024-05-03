#include "types.h"
#include "Game/Entities/Sarai.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/Stickers.h"
#include "Game/PikiMgr.h"
#include "JSystem/JMath.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Sarai {

/**
 * @note Address: 0x80272BC4
 * @note Size: 0x138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/**
 * @note Address: 0x80272CFC
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x80272D00
 * @note Size: 0x78
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);

	enableEvent(0, EB_Untargetable);

	mGeneralTimer = 0.0f;
	resetAttackableTimer(12800.0f);

	mFsm->start(this, SARAI_Move, nullptr);
}

/**
 * @note Address: 0x80272D78
 * @note Size: 0x48
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mMouthSlots.update();
}

/**
 * @note Address: 0x80272DC0
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x80272E0C
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x80272E10
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x80272E30
 * @note Size: 0x140
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* bodyMtx      = mModel->getJoint("bodyjnt")->getWorldMatrix();
	shadowParam.mPosition = bodyMtx->getColumn(3);

	if (isAlive()) {
		s32 stateId = getStateID();

		if (stateId == SARAI_Fall || stateId == SARAI_Damage || stateId == SARAI_TakeOff) {
			shadowParam.mPosition.y -= 5.0f;
			shadowParam.mBoundingSphere.mRadius = 100.0f + C_PROPERPARMS.mNormalFlightHeight.mValue;
		} else if (mFloorTriangle) {
			shadowParam.mPosition.y -= 5.0f;
			shadowParam.mBoundingSphere.mRadius = 50.0f;
		} else {
			shadowParam.mPosition.y -= 20.0f;
			shadowParam.mBoundingSphere.mRadius = 100.0f + C_PROPERPARMS.mNormalFlightHeight.mValue;
		}
	} else {
		shadowParam.mPosition.y             = 2.5f + mPosition.y;
		shadowParam.mBoundingSphere.mRadius = 25.0f;
	}

	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mSize                     = 12.5f;
}

/**
 * @note Address: 0x80272F70
 * @note Size: 0x34
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	flickStickTarget();
}

/**
 * @note Address: 0x80272FA4
 * @note Size: 0x5C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();

	s32 stateId = getStateID();
	if (stateId >= SARAI_TakeOff) {
		mFsm->transit(this, SARAI_TakeOff, nullptr);
	}
}

/**
 * @note Address: 0x80273000
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { EnemyBase::startMotion(SARAIANIM_Carry, nullptr); }

/**
 * @note Address: 0x80273028
 * @note Size: 0xA8
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(2);
	mMouthSlots.setup(0, mModel, "rkamujnt");
	mMouthSlots.setup(1, mModel, "lkamujnt");

	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.getSlot(i)->mRadius = 15.0f;
	}
}

/**
 * @note Address: 0x802730D0
 * @note Size: 0x108
 */
f32 Obj::setHeightVelocity()
{
	// The maximum amount of Pikmin that can have an effect on the upward velocity of the Sarai
#define MAX_PIKMIN_STUCK_FACTOR 5

	// Calculate the weight factor based on Pikmin stuck
	int pikminWeightFactor
	    = (mStuckPikminCount < 0) ? (0) : (mStuckPikminCount <= MAX_PIKMIN_STUCK_FACTOR ? (mStuckPikminCount) : (MAX_PIKMIN_STUCK_FACTOR));

	f32 riseFactor     = C_PROPERPARMS.mClimbingFactor0.mValue;
	f32 climbingFactor = C_PROPERPARMS.mClimbingFactor5.mValue;
	f32 weight         = pikminWeightFactor;

	// Custom linear interpolation (https://en.wikipedia.org/wiki/Linear_interpolation)
	// lerp v0, v1, t -> (1 - t) * v0 + t * v1
	f32 velFactor = (((MAX_PIKMIN_STUCK_FACTOR - weight) / MAX_PIKMIN_STUCK_FACTOR) * riseFactor)
	              + (weight / MAX_PIKMIN_STUCK_FACTOR) * climbingFactor;

	// Get the Y position of the map model (equivalent to a downwards raycast)
	f32 mapPosY = mapMgr->getMinY(mPosition);

	// Get intended flight height
	f32 flightHeight = getCatchTargetNum() ? C_PROPERPARMS.mGrabFlightHeight.mValue    // Grab flight height
	                                       : C_PROPERPARMS.mNormalFlightHeight.mValue; // Normal flight height

	// Upward velocity is offset by map height
	mCurrentVelocity.y = velFactor * ((mapPosY + flightHeight) - mPosition.y);

	return mPosition.y - mapPosY;
}

/**
 * @note Address: 0x802731D8
 * @note Size: 0x230
 */
void Obj::setRandTarget()
{
	// Set's a random target near the home radius, if in a cave then completely random
	f32 radius;
	if (getCatchTargetNum()) {
		radius = randWeightFloat(C_GENERALPARMS.mHomeRadius.mValue);
	} else if (gameSystem && gameSystem->mIsInCave) {
		radius = 50.0f + randWeightFloat(50.0f);
	} else {
		radius = C_GENERALPARMS.mHomeRadius.mValue
		       + randWeightFloat(C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue);
	}

	// Get the direction from the home position towards our position
	f32 dirToSarai = JMath::atanTable_.atan2_(mPosition.x - mHomePosition.x, mPosition.z - mHomePosition.z);

	// Randomise the angle a bit and set the target position
	f32 rngAngle = HALF_PI + (dirToSarai + randWeightFloat(PI));
	mTargetPos   = Vector3f((radius * sinf(rngAngle)) + mHomePosition.x, mHomePosition.y, (radius * cosf(rngAngle)) + mHomePosition.z);
}

/**
 * @note Address: 0x80273408
 * @note Size: 0x294
 */
void Obj::fallMeckGround()
{
	Stickers sticker(this);
	Iterator<Creature> iterator(&sticker);

	CI_LOOP(iterator)
	{
		Creature* c = iterator.mContainer->get(iterator.mIndex);

		if (!c->isStickToMouth()) {
			continue;
		}

		InteractFallMeck fallMeck(this, C_GENERALPARMS.mAttackDamage.mValue);
		if (!c->stimulate(fallMeck)) {
			continue;
		}

		Vector3f fallVelocity = Vector3f(0.0f);

		const f32 fallMeckSpeed = C_PROPERPARMS.mFallMeckSpeed.mValue;
		fallVelocity.y -= fallMeckSpeed;
		c->setVelocity(fallVelocity);
	}
}

/**
 * @note Address: 0x8027369C
 * @note Size: 0x7C
 */
int Obj::getCatchTargetNum()
{
	int max   = mMouthSlots.mMax;
	int count = 0;
	for (int i = 0; i < max; i++) {
		if (mMouthSlots.getSlot(i)->mStuckCreature != nullptr) {
			count++;
		}
	}

	return count;
}

/**
 * @note Address: 0x80273718
 * @note Size: 0x144
 * TODO
 */
int Obj::getNextStateOnHeight()
{
	if (mHealth <= 0.0f) {
		return SARAI_Fall;
	}

	int stuckPiki = getStickPikminNum();
	if (stuckPiki) {
		if (EnemyFunc::getStickPikminColorNum(this, Purple) > 0) {
			return SARAI_Fall;
		}

		int v1;
		if (stuckPiki - 1 < 0) {
			v1 = 0;
		} else {
			v1 = 4;
			if (stuckPiki - 1 <= 4) {
				v1 = stuckPiki - 1;
			}
		}

		f32 va1 = C_PROPERPARMS.mPayoffProbability1.mValue;
		f32 va2 = C_PROPERPARMS.mPayoffProbability5.mValue;

		f32 fv1 = v1;
		f32 f4  = (4.0f - fv1) / 4;
		f32 f5  = (fv1 / 4);

		f32 fallChance = (f4 * va1) + (f5 * va2);

		if (randWeightFloat(1.0f) < fallChance) {
			return SARAI_Flick;
		} else {
			return SARAI_Fall;
		}
	}

	return SARAI_NULL;
}

/**
 * @note Address: 0x8027385C
 * @note Size: 0xB0
 */
void Obj::flickStickTarget()
{
	int max = mMouthSlots.mMax;
	for (int i = 0; i < max; i++) {
		Creature* creature = mMouthSlots.getSlot(i)->mStuckCreature;

		if (creature) {
			InteractFlick flick(this, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE);
			creature->stimulate(flick);
		}
	}
}

/**
 * @note Address: 0x8027390C
 * @note Size: 0x80
 */
int Obj::getStickPikminNum() { return mStuckPikminCount - getCatchTargetNum(); }

/**
 * @note Address: 0x8027398C
 * @note Size: 0x3D0
 */
FakePiki* Obj::getAttackableTarget()
{

	if (sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(C_GENERALPARMS.mTerritoryRadius())) {
		f32 maxAngle = PI * (DEG2RAD * C_GENERALPARMS.mViewAngle());
		f32 maxDist  = SQUARE(C_GENERALPARMS.mSightRadius());

		Iterator<Piki> iterator(pikiMgr);
		iterator.first();
		while (!iterator.isDone()) {
			Piki* c = iterator.mContainer->get(iterator.mIndex);

			if (c->isAlive() && c->isPikmin() && !c->isStickToMouth() && c->mSticker != this && c->mFloorTriangle) {
				f32 ang = getAngDist(c);
				if (FABS(ang) <= maxAngle) {
					Vector3f pos = c->getPosition();
					if (sqrDistanceXZ(mPosition, pos) < maxDist) {
						return c;
					}
				}
			}
			iterator.next();
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x80273D5C
 * @note Size: 0x24
 */
int Obj::catchTarget() { EnemyFunc::eatPikmin(this, nullptr); }

/**
 * @note Address: 0x80273D80
 * @note Size: 0x44
 */
void Obj::createDownEffect() { EnemyBase::createBounceEffect(mPosition, getDownSmokeScale()); }
} // namespace Sarai
} // namespace Game
