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

/*
 * --INFO--
 * Address:	80272BC4
 * Size:	000138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	80272CFC
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80272D00
 * Size:	000078
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);

	enableEvent(0, EB_Untargetable);

	_2C0 = 0.0f;
	resetAttackableTimer(12800.0f);

	mFsm->start(this, SARAI_Move, nullptr);
}

/*
 * --INFO--
 * Address:	80272D78
 * Size:	000048
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mMouthSlots.update();
}

/*
 * --INFO--
 * Address:	80272DC0
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
 * Address:	80272E0C
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80272E10
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80272E30
 * Size:	000140
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* bodyMtx      = mModel->getJoint("bodyjnt")->getWorldMatrix();
	shadowParam.mPosition = bodyMtx->getBasis(3);

	if (isAlive()) {
		s32 stateId = getStateID();

		if (stateId == SARAI_Fall || stateId == SARAI_Damage || stateId == SARAI_TakeOff) {
			shadowParam.mPosition.y -= 5.0f;
			shadowParam.mBoundingSphere.mRadius = 100.0f + static_cast<Parms*>(mParms)->mProperParms.mFp01.mValue;
		} else if (mBounceTriangle) {
			shadowParam.mPosition.y -= 5.0f;
			shadowParam.mBoundingSphere.mRadius = 50.0f;
		} else {
			shadowParam.mPosition.y -= 20.0f;
			shadowParam.mBoundingSphere.mRadius = 100.0f + static_cast<Parms*>(mParms)->mProperParms.mFp01.mValue;
		}
	} else {
		shadowParam.mPosition.y             = 2.5f + mPosition.y;
		shadowParam.mBoundingSphere.mRadius = 25.0f;
	}

	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mSize                     = 12.5f;
}

/*
 * --INFO--
 * Address:	80272F70
 * Size:	000034
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	flickStickTarget();
}

/*
 * --INFO--
 * Address:	80272FA4
 * Size:	00005C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();

	s32 stateId = getStateID();
	if (stateId >= SARAI_TakeOff) {
		mFsm->transit(this, SARAI_TakeOff, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80273000
 * Size:	000028
 */
void Obj::startCarcassMotion() { EnemyBase::startMotion(SARAIANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	80273028
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	802730D0
 * Size:	000108
 */
f32 Obj::setHeightVelocity()
{
	// The maximum amount of Pikmin that can have an effect on the upward velocity of the Sarai
#define MAX_PIKMIN_STUCK_FACTOR 5

	// Calculate the weight factor based on Pikmin stuck
	int pikminWeightFactor
	    = (mStuckPikminCount < 0) ? (0) : (mStuckPikminCount <= MAX_PIKMIN_STUCK_FACTOR ? (mStuckPikminCount) : (MAX_PIKMIN_STUCK_FACTOR));

	f32 riseFactor     = static_cast<Parms*>(mParms)->mProperParms.mFp11.mValue;
	f32 climbingFactor = static_cast<Parms*>(mParms)->mProperParms.mFp12.mValue;
	f32 weight         = pikminWeightFactor;

	// Custom linear interpolation (https://en.wikipedia.org/wiki/Linear_interpolation)
	// lerp v0, v1, t -> (1 - t) * v0 + t * v1
	f32 velFactor = (((MAX_PIKMIN_STUCK_FACTOR - weight) / MAX_PIKMIN_STUCK_FACTOR) * riseFactor)
	              + (weight / MAX_PIKMIN_STUCK_FACTOR) * climbingFactor;

	// Get the Y position of the map model (equivalent to a downwards raycast)
	f32 mapPosY = mapMgr->getMinY(mPosition);

	// Get intended flight height
	f32 flightHeight = getCatchTargetNum() ? static_cast<Parms*>(mParms)->mProperParms.mFp02.mValue  // Grab flight height
	                                       : static_cast<Parms*>(mParms)->mProperParms.mFp01.mValue; // Normal flight height

	// Upward velocity is offset by map height
	mCurrentVelocity.y = velFactor * ((mapPosY + flightHeight) - mPosition.y);

	return mPosition.y - mapPosY;
}

/*
 * --INFO--
 * Address:	802731D8
 * Size:	000230
 */
void Obj::setRandTarget()
{
	// Set's a random target near the home radius, if in a cave then completely random
	f32 radius;
	if (getCatchTargetNum()) {
		radius = randWeightFloat(static_cast<Parms*>(mParms)->mGeneral.mHomeRadius.mValue);
	} else if (gameSystem && gameSystem->mIsInCave) {
		radius = 50.0f + randWeightFloat(50.0f);
	} else {
		radius = static_cast<Parms*>(mParms)->mGeneral.mHomeRadius.mValue
		       + randWeightFloat(static_cast<Parms*>(mParms)->mGeneral.mTerritoryRadius.mValue
		                         - static_cast<Parms*>(mParms)->mGeneral.mHomeRadius.mValue);
	}

	// Get the direction from the home position towards our position
	f32 dirToSarai = JMath::atanTable_.atan2_(mPosition.x - mHomePosition.x, mPosition.z - mHomePosition.z);

	// Randomise the angle a bit and set the target position
	f32 rngAngle = HALF_PI + (dirToSarai + randWeightFloat(PI));
	mTargetPos   = Vector3f((radius * sinf(rngAngle)) + mHomePosition.x, mHomePosition.y, (radius * cosf(rngAngle)) + mHomePosition.z);
}

/*
 * --INFO--
 * Address:	80273408
 * Size:	000294
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

		InteractFallMeck fallMeck(this, static_cast<Parms*>(mParms)->mGeneral.mAttackDamage.mValue);
		if (!c->stimulate(fallMeck)) {
			continue;
		}

		Vector3f fallVelocity = Vector3f(0.0f);

		const f32 fallMeckSpeed = static_cast<Parms*>(mParms)->mProperParms.mFp41.mValue;
		fallVelocity.y -= fallMeckSpeed;
		c->setVelocity(fallVelocity);
	}
}

/*
 * --INFO--
 * Address:	8027369C
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	80273718
 * Size:	000144
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

		f32 va1 = static_cast<Parms*>(mParms)->mProperParms.mFp21.mValue;
		f32 va2 = static_cast<Parms*>(mParms)->mProperParms.mFp22.mValue;

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

/*
 * --INFO--
 * Address:	8027385C
 * Size:	0000B0
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

/*
 * --INFO--
 * Address:	8027390C
 * Size:	000080
 */
int Obj::getStickPikminNum() { return mStuckPikminCount - getCatchTargetNum(); }

/*
 * --INFO--
 * Address:	8027398C
 * Size:	0003D0
 */
FakePiki* Obj::getAttackableTarget()
{

	if (sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(C_PARMS->mGeneral.mTerritoryRadius())) {
		f32 maxAngle = PI * (DEG2RAD * C_PARMS->mGeneral.mViewAngle());
		f32 maxDist  = SQUARE(C_PARMS->mGeneral.mSightRadius());

		Iterator<Piki> iterator(pikiMgr);
		iterator.first();
		while (!iterator.isDone()) {
			Piki* c = iterator.mContainer->get(iterator.mIndex);

			if (c->isAlive() && c->isPikmin() && !c->isStickToMouth() && c->mSticker != this && c->mBounceTriangle) {
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

/*
 * --INFO--
 * Address:	80273D5C
 * Size:	000024
 */
int Obj::catchTarget() { EnemyFunc::eatPikmin(this, nullptr); }

/*
 * --INFO--
 * Address:	80273D80
 * Size:	000044
 */
void Obj::createDownEffect() { EnemyBase::createBounceEffect(mPosition, getDownSmokeScale()); }
} // namespace Sarai
} // namespace Game
