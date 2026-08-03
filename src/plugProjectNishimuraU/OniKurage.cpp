#include "Game/Entities/OniKurage.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "PSM/Navi.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace OniKurage {

namespace {
const f32 cDefaultKamuJointOffset[2] = { 7.5f, -7.5f };
const f32 cFlickKamuJointOffset[2]   = { 10.0f, -10.0f };
} // namespace

static inline f32 weightVal(f32 y, f32 x, f32 yWeight, f32 xWeight)
{
	return y * yWeight + xWeight * x;
}

/**
 * @note Address: 0x802D3F84
 * @note Size: 0x140
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM());
	createEffect();
}

/**
 * @note Address: 0x802D40C4
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
}

/**
 * @note Address: 0x802D40C8
 * @note Size: 0xB0
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	enableEvent(0, EB_Untargetable);
	disableEvent(0, EB_DeathEffectEnabled);
	mNextState      = ONIKURAGE_NULL;
	mStateTimer     = 0.0f;
	mFallTimer      = 0.0f;
	mMovePitchTimer = 3.5f;
	mSuckedPiki     = 0;
	mIsSucking      = false;

	mSuckedNavis[1] = nullptr;
	mSuckedNavis[0] = nullptr;

	setupEffect();
	startEyeHireBodyEffect();

	mFsm->start(this, ONIKURAGE_Wait, nullptr);
}

/**
 * @note Address: 0x802D4178
 * @note Size: 0x54
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishEyeBodyEffect();
	finishHireEffect();
	finishSuckEffect();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x802D41CC
 * @note Size: 0x108
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mMouthSlots.update();
	updateFallTimer();

	if (isAlive() && isEvent(0, EB_Cullable)) {
		if (isFlying()) {
			getJAIObject()->startSound(PSSE_EN_ONIKURAGE_AIR, 0);
		}

		if (isEvent(0, EB_TakingDamage) && mDamageAnimTimer == 0.0f) {
			getJAIObject()->startSound(PSSE_EN_ONIKURAGE_DAMAGE, 0);
		}
	}
}

/**
 * @note Address: 0x802D42D4
 * @note Size: 0x34
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	escapeCheckNavi();
}

/**
 * @note Address: 0x802D4308
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x802D430C
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x802D432C
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802D4378
 * @note Size: 0x10C
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* worldMat     = mModel->getJoint("koshi1")->getWorldMatrix();
	shadowParam.mPosition = Vector3f(worldMat->mMatrix.mtxView[0][3], worldMat->mMatrix.mtxView[1][3], worldMat->mMatrix.mtxView[2][3]);

	f32 minY = mapMgr->getMinY(shadowParam.mPosition);

	if (isFlying()) {
		shadowParam.mPosition.y = 25.0f + minY;
	} else {
		shadowParam.mPosition.y = 5.0f + minY;
	}

	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);

	if (isFlying()) {
		shadowParam.mBoundingSphere.mRadius = 100.0f;
	} else {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	}

	shadowParam.mSize = 25.0f;
}

/**
 * @note Address: 0x802D4484
 * @note Size: 0x38
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (part) {
		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802D44BC
 * @note Size: 0x44
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishEyeBodyEffect();
	finishHireEffect();
	finishSuckEffect();
}

/**
 * @note Address: 0x802D4500
 * @note Size: 0xB8
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	startEyeHireBodyEffect();

	int id = getStateID();
	if ((id >= ONIKURAGE_Wait && id <= ONIKURAGE_Drop) || (id >= ONIKURAGE_TakeOff && id <= ONIKURAGE_FlyFlick)) {
		if (mSuckedNavis[0] || mSuckedNavis[1]) {
			mFsm->transit(this, ONIKURAGE_GroundFlick, nullptr);
		} else {
			mFsm->transit(this, ONIKURAGE_TakeOff, nullptr);
		}
	}
}

/**
 * @note Address: 0x802D45B8
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x802D45EC
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x802D4620
 * @note Size: 0x20
 */
void Obj::doStartMovie()
{
	effectDrawOff();
}

/**
 * @note Address: 0x802D4640
 * @note Size: 0x20
 */
void Obj::doEndMovie()
{
	effectDrawOn();
}

/**
 * @note Address: 0x802D4660
 * @note Size: 0xC8
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(2);
	mMouthSlots.setup(0, mModel, "Proom");
	mMouthSlots.setup(1, mModel, "Proom");

	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		slot->mIsOniKurage  = true;
		f32 offset          = cDefaultKamuJointOffset[i];
		slot->mRadius       = 1.0f;
		slot->mOffset.x     = offset;
	}
}

/**
 * @note Address: 0x802D4728
 * @note Size: 0x98
 */
f32 Obj::setHeightVelocity(f32 yOffset, f32 speedFactor)
{
	f32 minY = mapMgr->getMinY(mPosition);

	mCurrentVelocity.y
	    = (speedFactor + C_PROPERPARMS.mRiseFactor.mValue) * ((yOffset + C_PROPERPARMS.mFlightHeight.mValue + minY) - mPosition.y);

	return mPosition.y - minY;
}

/**
 * @note Address: 0x802D47C0
 * @note Size: 0x1D8
 */
void Obj::setRandTarget()
{
	f32 randRadius
	    = randWeightFloat(C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue) + C_GENERALPARMS.mHomeRadius.mValue;
	Vector3f pos     = getPosition();
	Vector3f homePos = mHomePosition;
	f32 ang          = JMAAtan2Radian(pos.x - homePos.x, pos.z - homePos.z);

	f32 theta = HALF_PI + (randWeightFloat(PI) + ang);

	mTargetPosition = Vector3f(randRadius * sinf(theta) + homePos.x, homePos.y, randRadius * cosf(theta) + homePos.z);
}

/**
 * @note Address: 0x802D4998
 * @note Size: 0xA4
 */
f32 Obj::getMovePitchOffset()
{
	mMovePitchTimer += sys->mDeltaTime * PI;

	if (mMovePitchTimer > TAU) {
		mMovePitchTimer -= TAU;
	}

	return 20.0f * sinf(mMovePitchTimer);
}

/**
 * @note Address: 0x802D4A3C
 * @note Size: 0x1A8
 */
f32 Obj::getAttackPitchOffset()
{
	f32 keyFrames[7] = { 0.0f, 30.0f, 65.0f, 80.0f, 95.0f, 108.0f, 120.0f };
	f32 offsets[7]   = { 0.0f, -30.0f, 30.0f, -50.0f, 0.0f, -40.0f, 0.0f };

	f32 currFrame = getMotionFrame();

	f32 attackOffset = 0.0f;

	for (int i = 0; i < 6; i++) {
		int j       = i + 1;
		f32 prevKey = keyFrames[i];
		if (currFrame >= prevKey) {
			f32 nextKey = keyFrames[j];
			if (currFrame < nextKey) {
				f32 factor   = (currFrame - prevKey) / (nextKey - prevKey);
				attackOffset = factor * offsets[j] + (1.0f - factor) * offsets[i];
			}
		}
	}

	return attackOffset;
}

/**
 * @note Address: 0x802D4BE4
 * @note Size: 0x1A8
 */
f32 Obj::getFlickPitchOffset()
{
	f32 keyFrames[7] = { 0.0f, 10.0f, 15.0f, 20.0f, 30.0f, 40.0f, 60.0f };    // ??
	f32 offsets[7]   = { 0.0f, -80.0f, 80.0f, -100.0f, 30.0f, -50.0f, 0.0f }; // ??

	f32 currFrame = getMotionFrame();

	f32 flickOffset = 0.0f;

	for (int i = 0; i < 6; i++) {
		int j       = i + 1;
		f32 prevKey = keyFrames[i];
		if (currFrame >= prevKey) {
			f32 nextKey = keyFrames[j];
			if (currFrame < nextKey) {
				f32 factor  = (currFrame - prevKey) / (nextKey - prevKey);
				flickOffset = factor * offsets[j] + (1.0f - factor) * offsets[i];
			}
		}
	}

	return flickOffset;
}

/**
 * @note Address: 0x802D4D8C
 * @note Size: 0x144
 */
f32 Obj::getTakeOffPitchOffset()
{
	f32 keyFrames[5] = { 32.0f, 40.0f, 52.0f, 70.0f, 80.0f };
	f32 offsets[5]   = { 0.0f, -50.0f, -60.0f, -10.0f, -10.0f };

	f32 currFrame = getMotionFrame();

	f32 takeOffOffset = 0.0f;

	for (int i = 0; i < 4; i++) {
		int j       = i + 1;
		f32 prevKey = keyFrames[i];
		if (currFrame >= prevKey) {
			f32 nextKey = keyFrames[j];
			if (currFrame < nextKey) {
				f32 factor    = (currFrame - prevKey) / (nextKey - prevKey);
				takeOffOffset = factor * offsets[j] + (1.0f - factor) * offsets[i];
			}
		}
	}

	return takeOffOffset;
}

/**
 * @note Address: 0x802D4ED0
 * @note Size: 0x168
 */
f32 Obj::getFallPitchOffset(f32 currFrame)
{
	currFrame        = 30.0f * currFrame;
	f32 keyFrames[8] = { 7.0f, 17.0f, 27.0f, 37.0f, 47.0f, 57.0f, 67.0f, 77.0f };
	f32 offsets[8]   = { -25.0f, -15.0f, -40.0f, -30.0f, -45.0f, -35.0f, -70.0f, 0.0f };

	f32 fallOffset = 0.0f;

	for (int i = 0; i < 4; i++) {
		int j       = i + 1;
		f32 prevKey = keyFrames[i];
		if (currFrame >= prevKey) {
			f32 nextKey = keyFrames[j];
			if (currFrame < nextKey) {
				f32 factor = (currFrame - prevKey) / (nextKey - prevKey);
				fallOffset = factor * offsets[j] + (1.0f - factor) * offsets[i];
			}
		}
	}

	return fallOffset;
}

/**
 * @note Address: 0x802D5038
 * @note Size: 0x30
 */
void Obj::updateFallTimer()
{
	if (mStuckPikminCount != 0) {
		mFallTimer += sys->mDeltaTime;
		return;
	}

	mFallTimer = 0.0f;
}

/**
 * @note Address: 0x802D5068
 * @note Size: 0xA4
 */
StateID Obj::getFlyingNextState()
{
	if (mHealth <= 0.0f) {
		return ONIKURAGE_Dead;
	}

	if (EnemyFunc::getStickPikminColorNum(this, Purple) > 0) {
		return ONIKURAGE_Fall;
	}

	if (mFallTimer > C_PROPERPARMS.mShakeTime.mValue || mStuckPikminCount >= C_PROPERPARMS.mMinFallPiki.mValue) {
		if (mStuckPikminCount < C_PROPERPARMS.mMinFallPiki.mValue) {
			return ONIKURAGE_FlyFlick;
		} else {
			return ONIKURAGE_Fall;
		}
	}

	return ONIKURAGE_NULL;
}

/**
 * @note Address: 0x802D510C
 * @note Size: 0x340
 */
Creature* Obj::getSearchedTarget(f32 offset)
{
	Creature* target = nullptr;

	if (sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(C_GENERALPARMS.mTerritoryRadius())) {
		f32 currY       = mPosition.y;
		f32 minY        = currY - offset - 50.0f;
		f32 fovAng      = PI * (DEG2RAD * C_GENERALPARMS.mViewAngle());
		f32 maxDist     = SQUARE(C_GENERALPARMS.mSightRadius());
		f32 attackRange = SQUARE(C_GENERALPARMS.mMaxAttackRange());

		Sys::Sphere sphere(mPosition, C_GENERALPARMS.mSightRadius());
		CellIteratorArg iterArg(sphere);
		iterArg.mOptimise = true;
		CellIterator iter(iterArg);

		CI_LOOP(iter)
		{
			Creature* creature = (Creature*)*iter;
			if (creature->isAlive() && creature->mSticker != this) {
				bool isValidTarget = creature->isNavi();
				if (!isValidTarget && creature->isPiki() && static_cast<Piki*>(creature)->isPikmin()) {
					isValidTarget = true;
				}
				if (isValidTarget) {
					Vector3f pikiPos = creature->getPosition();
					if (pikiPos.y > minY && pikiPos.y < currY) {
						f32 dist = sqrDistanceXZ(mPosition, pikiPos);
						if (dist < attackRange) {
							return creature;
						}

						if (dist < maxDist) {
							f32 angSep = getAngDist(creature);
							if (absVal(angSep) <= fovAng) {
								target  = creature;
								maxDist = dist;
							}
						}
					}
				}
			}
		}
	}

	return target;
}

/**
 * @note Address: 0x802D544C
 * @note Size: 0x238
 */
bool Obj::isSuck(f32 offset, Creature* target)
{
	f32 currY    = mPosition.y;            // f30
	f32 minY     = currY - offset - 50.0f; // f29
	f32 maxRange = SQUARE(C_GENERALPARMS.mMaxAttackRange());

	if (target) {
		Vector3f targetPos = target->getPosition();
		if (targetPos.y > minY && targetPos.y < currY) {
			if (sqrDistanceXZ(mPosition, targetPos) < maxRange) {
				return true;
			}
		}
	} else {
		Sys::Sphere sphere(mPosition, C_GENERALPARMS.mMaxAttackRange());
		CellIteratorArg iterArg(sphere);
		iterArg.mOptimise = true;
		CellIterator iter(iterArg);

		CI_LOOP(iter)
		{
			Creature* creature = (Creature*)*iter;
			if (creature->isAlive() && creature->mSticker != this) {
				bool isValidTarget = creature->isNavi();
				if (!isValidTarget && creature->isPiki() && static_cast<Piki*>(creature)->isPikmin()) {
					isValidTarget = true;
				}
				if (isValidTarget) {
					Vector3f pikiPos = creature->getPosition();
					if (pikiPos.y > minY && pikiPos.y < currY && sqrDistanceXZ(mPosition, pikiPos) < maxRange) {
						return true;
					}
				}
			}
		}
	}

	return false;
}

/**
 * @note Address: 0x802D5684
 * @note Size: 0x434
 */
bool Obj::suckPikmin(f32 offset)
{
	f32 currY    = mPosition.y;
	f32 minY     = currY - offset - 50.0f;
	f32 maxRange = SQUARE(C_GENERALPARMS.mAttackRadius());

	CollPart* part   = mCollTree->getCollPart('suck');
	Vector3f partPos = part->mPosition;

	Iterator<Piki> iter(pikiMgr);
	CI_LOOP(iter)
	{
		Piki* currPiki = *iter;
		if (currPiki->isAlive() && currPiki->isPikmin() && currPiki->mSticker != this) {
			if (mSuckedPiki < C_PROPERPARMS.mMaxSuckPiki() && randWeightFloat(1.0f) < C_PROPERPARMS.mSuckChance()) {
				Vector3f pikiPos = currPiki->getPosition();
				if (pikiPos.y > minY && pikiPos.y < currY && sqrDistanceXZ(mPosition, pikiPos) < maxRange) {
					Vector3f suckVec = partPos - pikiPos;
					InteractSuikomi_Test suck(this, &suckVec, nullptr, part);
					if (currPiki->stimulate(suck)) {
						mSuckedPiki++;
						getJAIObject()->startSound(PSSE_EN_KURAGE_GET_PIKI, 0);
					}
				}
			}
		}
	}

	return mSuckedPiki >= C_PROPERPARMS.mMaxSuckPiki.mValue;
}

/**
 * @note Address: 0x802D5AB8
 * @note Size: 0x570
 */
bool Obj::suckNavi(f32 offset)
{
	f32 currY    = mPosition.y;
	f32 minY     = currY - offset - 50.0f;
	f32 maxRange = SQUARE(C_GENERALPARMS.mAttackRadius());

	CollPart* part   = mCollTree->getCollPart('suck');
	Vector3f partPos = part->mPosition;

	Iterator<Navi> iter(naviMgr);
	CI_LOOP(iter)
	{
		Navi* currNavi = *iter;
		if (currNavi->isAlive() && currNavi->mSticker != this) {
			Vector3f naviPos = currNavi->getPosition();
			if (naviPos.y > minY && naviPos.y < currY && sqrDistanceXZ(mPosition, naviPos) < maxRange) {
				for (int i = 0; i < mMouthSlots.getMax(); i++) {
					MouthCollPart* slot = mMouthSlots.getSlot(i);
					if (!slot->mStuckCreature) {
						Matrixf* worldMat = mModel->getJoint("Proom")->getWorldMatrix();
						Vector3f xVec, yVec, zVec;
						worldMat->getColumn(0, xVec);
						worldMat->getColumn(1, yVec);
						worldMat->getColumn(2, zVec);

						xVec.normalise();
						yVec.normalise();
						zVec.normalise();

						Vector3f sep  = naviPos - partPos;
						slot->mOffset = Vector3f(xVec.dot(sep), yVec.dot(sep), zVec.dot(sep));
						InteractSarai suck(this, 1.0f, slot);

						if (currNavi->stimulate(suck)) {
							mSuckedNavis[i] = currNavi;
						}
						break;
					}
				}
			}
		}
	}

	if (mSuckedNavis[0] || mSuckedNavis[1]) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802D6028
 * @note Size: 0x26C
 */
void Obj::updateCollPartOffset()
{
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		if (slot->mStuckCreature) {
			if (absVal(slot->mOffset.x - cDefaultKamuJointOffset[i]) > 1.0f || absVal(20.0f + slot->mOffset.y) > 1.0f
			    || absVal(slot->mOffset.z) > 1.0f) {
				slot->mOffset.x = weightVal(slot->mOffset.x, cDefaultKamuJointOffset[i], 0.8f, 0.2f);
				slot->mOffset.y = adjustVal(slot->mOffset.y, -20.0f, 7.5f);
				slot->mOffset.z *= 0.8f;

				if (absVal(slot->mOffset.x - cDefaultKamuJointOffset[i]) < 1.0f && absVal(20.0f + slot->mOffset.y) < 1.0f
				    && absVal(slot->mOffset.z) < 1.0f) {

					if (mSuckedNavis[i]) {
						mSuckedNavis[i]->mSoundObj->startSound(PSSE_EN_ONIKURAGE_GET_ORIMA, 0);
					}
					Vector3f pos = getPosition();
					cameraMgr->startVibration(VIBTYPE_LightSlowLong, pos, CAMNAVI_Both);
					rumbleMgr->startRumble(RUMBLETYPE_Fixed10, pos, RUMBLEID_Both);
				}
			}
		}
	}
}

/**
 * @note Address: 0x802D6294
 * @note Size: 0x100
 */
bool Obj::isFinishNaviSuck()
{
	bool result = true;
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		if (slot->mStuckCreature) {
			if (absVal(slot->mOffset.x - cDefaultKamuJointOffset[i]) > 1.0f || absVal(20.0f + slot->mOffset.y) > 1.0f
			    || absVal(slot->mOffset.z) > 1.0f) {
				result = false;
			}
		}
	}

	return result;
}

/**
 * @note Address: 0x802D6394
 * @note Size: 0x28
 */
bool Obj::isNaviSucked()
{
	if (mSuckedNavis[0] || mSuckedNavis[1]) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802D63BC
 * @note Size: 0x29C
 */
void Obj::flickStickNavi(bool check)
{
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		if (slot->mStuckCreature) {
			f32 offset = cFlickKamuJointOffset[i];
			f32 val    = -50.0f;
			if (check) {
				offset = cDefaultKamuJointOffset[i];
				val    = -75.0f;
			}

			slot->mOffset.x = adjustVal(slot->mOffset.x, offset, 1.0f);
			slot->mOffset.y = adjustVal(slot->mOffset.y, val, 10.0f);

			if (absVal(slot->mOffset.x - offset) < 1.0f && absVal(slot->mOffset.y - val) < 1.0f) {
				Creature* navi = slot->mStuckCreature;
				if (navi) {
					InteractFlick flick(this, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE);
					navi->stimulate(flick);

					Vector3f naviPos = navi->getPosition();
					Vector3f sep     = naviPos - mPosition;
					sep.y            = 0.0f;

					sep.normalise();
					sep *= 50.0f;
					InteractBomb bomb(this, C_GENERALPARMS.mAttackDamage.mValue, &sep);
					navi->stimulate(bomb);
				}
			}
		}
	}
}

/**
 * @note Address: 0x802D6658
 * @note Size: 0x130
 */
void Obj::escapeCheckNavi()
{
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		if (slot->mStuckCreature) {
			if (!mSuckedNavis[i]) {
				mSuckedNavis[i] = static_cast<Navi*>(slot->mStuckCreature);
			}
		} else if (mSuckedNavis[i]) {
			if (isEvent(0, EB_Bittered)) {
				mHealth = 0.0f;
			} else {
				createFlickNaviEffect();
				Vector3f pos = getPosition();
				cameraMgr->startVibration(VIBTYPE_LightSlowShort, pos, CAMNAVI_Both);
				rumbleMgr->startRumble(RUMBLETYPE_Fixed10, pos, RUMBLEID_Both);
				mSuckedNavis[i]->mSoundObj->startSound(PSSE_EN_ONIKURAGE_VOMIT, 0);
			}
			mSuckedNavis[i] = nullptr;
		}
	}
}

/**
 * @note Address: 0x802D6788
 * @note Size: 0x340
 */
void Obj::createEffect()
{
	mEfxEyeL    = new efx::TKurageEye();
	mEfxEyeR    = new efx::TKurageEye();
	mEfxHire    = new efx::TKurageHire();
	mEfxKira    = new efx::TKurageKira(&mPosition);
	mEfxSui     = new efx::TKurageSui();
	mEfxGepu    = new efx::TKurageGepu(&mPosition);
	mEfxDeadrun = new efx::TKurageDeadrun();
}

/**
 * @note Address: 0x802D6AC8
 * @note Size: 0x8C
 */
void Obj::setupEffect()
{
	mEfxEyeL->mMtx = mModel->getJoint("Ltuno2")->getWorldMatrix();
	mEfxEyeR->mMtx = mModel->getJoint("Rtuno2")->getWorldMatrix();
	mEfxHire->setMtxptr(mModel->getJoint("nyoro")->getWorldMatrix()->mMatrix.mtxView);
	mEfxDeadrun->mMtx = mModel->getJoint("center")->getWorldMatrix();
}

/**
 * @note Address: 0x802D6B54
 * @note Size: 0x88
 */
void Obj::startEyeHireBodyEffect()
{
	mEfxEyeL->create(nullptr);
	mEfxEyeR->create(nullptr);
	mEfxHire->create(nullptr);
	mEfxKira->create(nullptr);
}

/**
 * @note Address: 0x802D6BDC
 * @note Size: 0x7C
 */
void Obj::finishEyeBodyEffect()
{
	mEfxEyeL->fade();
	mEfxEyeR->fade();
	mEfxKira->fade();

	mEfxDeadrun->create(nullptr);
}

/**
 * @note Address: 0x802D6C58
 * @note Size: 0x24
 */
void Obj::setHireEffectLife(s16 lifeTime)
{
	mEfxHire->setLifeTime(lifeTime);
}

/**
 * @note Address: 0x802D6C7C
 * @note Size: 0x50
 */
void Obj::finishHireEffect()
{
	mEfxHire->fade();
	mEfxDeadrun->fade();
}

/**
 * @note Address: 0x802D6CCC
 * @note Size: 0x58
 */
void Obj::startSuckEffect(Vector3f& pos)
{
	efx::Arg fxArg(pos);
	mEfxSui->create(&fxArg);
}

/**
 * @note Address: 0x802D6D24
 * @note Size: 0x24
 */
void Obj::updateSuckEffect(Vector3f& pos)
{
	mEfxSui->setGlobalTranslation(pos);
}

/**
 * @note Address: 0x802D6D48
 * @note Size: 0x30
 */
void Obj::finishSuckEffect()
{
	mEfxSui->fade();
}

/**
 * @note Address: 0x802D6D78
 * @note Size: 0x34
 */
void Obj::createFlickNaviEffect()
{
	mEfxGepu->create(nullptr);
}

/**
 * @note Address: 0x802D6DAC
 * @note Size: 0x9C
 */
void Obj::createBodyBombEffect()
{
	Matrixf* worldMat = mModel->getJoint("center")->getWorldMatrix();
	Vector3f pos;
	worldMat->getTranslation(pos);

	efx::TKurageBomb bombFX;
	efx::Arg fxArg(pos);
	bombFX.create(&fxArg);
}

/**
 * @note Address: 0x802D6E48
 * @note Size: 0x44
 */
void Obj::createDownEffect()
{
	createBounceEffect(mPosition, getDownSmokeScale());
}

/**
 * @note Address: 0x802D6E94
 * @note Size: 0xB4
 */
void Obj::effectDrawOn()
{
	mEfxEyeL->endDemoDrawOn();
	mEfxEyeR->endDemoDrawOn();
	mEfxHire->endDemoDrawOn();
	mEfxKira->endDemoDrawOn();
	mEfxSui->endDemoDrawOn();
	mEfxGepu->endDemoDrawOn();
	mEfxDeadrun->endDemoDrawOn();
}

/**
 * @note Address: 0x802D6F48
 * @note Size: 0xB4
 */
void Obj::effectDrawOff()
{
	mEfxEyeL->startDemoDrawOff();
	mEfxEyeR->startDemoDrawOff();
	mEfxHire->startDemoDrawOff();
	mEfxKira->startDemoDrawOff();
	mEfxSui->startDemoDrawOff();
	mEfxGepu->startDemoDrawOff();
	mEfxDeadrun->startDemoDrawOff();
}

} // namespace OniKurage
} // namespace Game
