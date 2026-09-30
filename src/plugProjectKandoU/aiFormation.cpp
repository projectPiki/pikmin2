#include "PikiAI.h"
#include "Game/Piki.h"
#include "Game/PikiMgr.h"
#include "Game/PikiState.h"
#include "Game/Navi.h"
#include "Game/NaviParms.h"
#include "Game/NaviState.h"
#include "Game/gameStat.h"
#include "Game/CPlate.h"
#include "Game/GameSystem.h"
#include "Game/SingleGameSection.h"
#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"
#include "Game/Footmark.h"
#include "Dolphin/rand.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/arith.h"
#include "P2Macros.h"
#include "Iterator.h"
#include "nans.h"

static bool newVer = true;

namespace PikiAI {

static const int someFormationArray[3] = { 0, 0, 0 };
static const char formationName[]      = "actFormation";

/**
 * @note Address: 0x8019CD70
 * @note Size: 0xF8
 */
ActFormation::ActFormation(Game::Piki* p)
    : Action(p)
    , mInitArg(static_cast<Game::Creature*>(nullptr))
{
	mName   = "Formation";
	mCPlate = nullptr;
	mSlotID = -1;
	mNavi   = nullptr;
}

/**
 * @note Address: 0x8019CE68
 * @note Size: 0x8
 */
void ActFormation::inform(int slotID)
{
	mSlotID = slotID;
}

/**
 * @note Address: 0x8019CE70
 * @note Size: 0xC
 */
void ActFormation::startSort()
{
	mSortState = 2;
}

/**
 * @note Address: 0x8019CE7C
 * @note Size: 0x1B4
 */
void ActFormation::init(ActionArg* initArg)
{
	ActFormationInitArg* formationArg = static_cast<ActFormationInitArg*>(initArg);
	P2ASSERTLINE(267, formationArg);
	mNextAIType = 1;

	Game::Navi* currNavi = mParent->mNavi;

	mNavi = mParent->mNavi;
	Game::GameStat::formationPikis.inc(mParent);
	mInitArg.mCreature           = formationArg->mCreature;
	mInitArg.mIsDemoFollow       = formationArg->mIsDemoFollow;
	mInitArg.mDoUseTouchCooldown = formationArg->mDoUseTouchCooldown;

	if (mInitArg.mDoUseTouchCooldown) {
		mTouchingNaviCooldownTimer = 45;
	} else {
		mTouchingNaviCooldownTimer = 0;
	}

	Game::Navi* initNavi = static_cast<Game::Navi*>(formationArg->mCreature);
	bool initCheck       = formationArg->mIsDemoFollow;

	if (!initNavi) {
		mSlotID = -1;
		return;
	}

	mDistanceType         = 5;
	mOldDistanceType      = 5;
	mDistanceCounter      = 0;
	mHasLostNumbness      = false;
	mHadNumbnessLastFrame = false;

	mCPlate = initNavi->mCPlateMgr;
	mSlotID = mCPlate->getSlot(mParent, this, initCheck);
	if (mSlotID == -1 && initCheck) {
		JUT_PANICLINE(330, "slot id is -1");
	}

	mParent->startMotion(Game::IPikiAnims::RUN2, Game::IPikiAnims::RUN2, nullptr, nullptr);

	mHasReleasedSlot   = false;
	mUnusedVal         = 0;
	mSortState         = 0;
	mAnimationTimer    = 0;
	mTripCheckMoveDist = 0.0f;
	mIsAnimating       = 0;
	mFootmark          = nullptr;

	mParent->setPastel(false);
	mTouchingWallTimer = 0;
	mFootmarkFlags     = -1;
	mParent->setFreeLightEffect(false);
}

/**
 * @note Address: 0x8019D030
 * @note Size: 0x58
 */
void ActFormation::wallCallback(Vector3f&)
{
	mFrameTimer = Game::gameSystem->mFrameTimer;
	if (mTouchingWallTimer < 30) {
		mTouchingWallTimer++;
	}

	if (mTouchingWallTimer > 8 && mSortState != 1) {
		mTouchingWallTimer = 0;
	}

	if (mTouchingWallTimer > 20) {
		mTouchingWallTimer = 0;
	}
}

/**
 * @note Address: 0x8019D088
 * @note Size: 0x45C
 */
void ActFormation::setFormed()
{
	mSortState = 1;

	// if Meet Red Pikmin cutscene hasn't played, play it.
	if (!Game::playData->isDemoFlag(Game::DEMO_Meet_Red_Pikmin)) {

		Iterator<Game::Piki> iterator(Game::pikiMgr);
		CI_LOOP(iterator)
		{
			Game::Piki* piki = (*iterator);
			piki->movie_begin(false);
		}

		Game::Navi* navi = Game::naviMgr->getActiveNavi();
		P2ASSERTLINE(438, navi);

		Game::playData->setDemoFlag(Game::DEMO_Meet_Red_Pikmin);

		Game::MoviePlayArg playArg("x02_watch_red_pikmin", nullptr, nullptr, 0);
		playArg.setTarget(navi);
		Game::moviePlayer->mTargetObject = navi;

		Game::moviePlayer->play(playArg);

		Game::gameSystem->mSection->disableTimer(Game::DEMOTIMER_Meet_Red_Pikmin);
	}

	Game::Navi* navi = mParent->mNavi;
	int index        = NAVIID_Olimar;
	if (navi) {
		index = navi->mNaviIndex;
	}

	/* do more checks if:
	    a) we're above ground,
	    b) some flag is set,
	    c) reds-purples cutscene hasn't played, and
	    d) purples in ship cutscene HAS played
	*/
	if (!Game::gameSystem->mIsInCave && Game::gameSystem->isFlag(Game::GAMESYS_IsGameWorldActive)
	    && !Game::playData->isDemoFlag(Game::DEMO_Reds_Purples_Tutorial) && Game::playData->isDemoFlag(Game::DEMO_Purples_In_Ship)) {

		int redCount = Game::GameStat::formationPikis.getCount(index, Game::Red);

		// if we have reds in squad...
		if (redCount > 0) {

			int purpleCount = Game::GameStat::formationPikis.getCount(index, Game::Purple);

			// ... AND we have purples in squad...
			if (purpleCount > 0) {

				// ... AND the reds-purples timer isn't already going...
				if (Game::gameSystem->mSection->getTimerType() != Game::DEMOTIMER_Reds_Purples_Tutorial) {

					// set reds-purples cutscene timer to 10s.
					Game::gameSystem->mSection->enableTimer(10.0f, Game::DEMOTIMER_Reds_Purples_Tutorial);
				}
			}
		}
	}
}

/**
 * @note Address: 0x8019D4E4
 * @note Size: 0xF8
 */
void ActFormation::onKeyEvent(SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.mType) {
	case KEYEVENT_2:
		if (mIsAnimating) {
			mParent->mVelocity       = Vector3f(0.0f);
			mParent->mTargetVelocity = Vector3f(0.0f);
		}
		break;

	case KEYEVENT_LOOP_END:
		if (mIsAnimating) {
			mAnimationTimer--;
			if (mAnimationTimer <= 0) {
				mParent->mAnimator.mSelfAnimator.setFlag(SysShape::Animator::AnimFinishMotion);
				mParent->mAnimator.mBoundAnimator.setFlag(SysShape::Animator::AnimFinishMotion);
			}
		}
		break;

	case KEYEVENT_END:
		if (mIsAnimating) {
			mIsAnimating = 0;
			mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);
		}
		break;
	}
}

/**
 * @note Address: 0x8019D5DC
 * @note Size: 0xA4
 */
void ActFormation::cleanup()
{
	mParent->setGasInvincible(0);
	mParent->setMoveRotation(true);

	Game::Navi* currNavi = mParent->mNavi;

	mParent->mNavi = mNavi;
	Game::GameStat::formationPikis.dec(mParent);
	mParent->mNavi = currNavi;

	if (mSlotID != -1) {
		mCPlate->releaseSlot(mParent, mSlotID);
	}

	mCPlate = nullptr;
	mSlotID = -1;
}

// honestly with how huge this function is, I believe this being a real used pragma here
#pragma inline_max_total_size(16384)
/**
 * @note Address: 0x8019D680
 * @note Size: 0x16E8
 */
int PikiAI::ActFormation::exec()
{
	if (mTouchingNaviCooldownTimer) {
		mTouchingNaviCooldownTimer--;
	}

	if (mSlotID == -1) {
		return ACTEXEC_Fail;
	}

	if (!mInitArg.mIsDemoFollow && mNavi && mNavi->mPellet) {
		return ACTEXEC_Fail;
	}

	if (mNavi && !mNavi->isAlive()) {
		return ACTEXEC_Fail;
	}

	if (!mInitArg.mIsDemoFollow && !Game::gameSystem->isMultiplayerMode() && mNavi && !mNavi->mController1
	    && mNavi->getStateID() == Game::NSID_Follow) {
		mNextAIType = ACT_Formation;
		mParent->getCreatureID();
		return ACTEXEC_Fail;
	}

	mParent->setMoveRotation(true);
	mOldDistanceType = mDistanceType;
	mDistanceType    = 5;
	if (mIsAnimating) {
		int animId = mParent->mAnimator.mSelfAnimator.getAnimIndex();
		if (animId != Game::IPikiAnims::KOROBU) {
			mIsAnimating = 0;
			mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);
		}

		mParent->mTargetVelocity = mParent->mTargetVelocity * 0.955f;
		return ACTEXEC_Continue;
	}

	mHadNumbnessLastFrame = mHasLostNumbness;
	if (!mParent->mNavi) {
		return ACTEXEC_Fail;
	}

	bool isCStickNeutral = mParent->mNavi->isCStickNetural();
	JUT_ASSERTLINE(661, mCPlate->validSlot(mSlotID), "invalid slotId!\n");

	Vector3f slotPos;
	mCPlate->getSlotPosition(mSlotID, slotPos);

	if (!mParent->mNavi->commandOn()) {
		Vector3f sep     = slotPos - mParent->getPosition();
		f32 dist         = sep.length();
		Vector3f pikiPos = mParent->getPosition();
		if (_abs(Game::gameSystem->mFrameTimer - mFrameTimer) < 0x32 && dist > 60.0f) {
			if (mTouchingWallTimer > 3) {
				mFootmark = mParent->mNavi->mFootmarks->findNearest2(pikiPos, mFootmarkFlags);
				if (mFootmark) {
					sep = mFootmark->mPosition - pikiPos;
					if (sep.normalise() < 20.0f) {
						mFootmarkFlags = mFootmark->mFlags;
					}

					mParent->setSpeed(1.0f, sep);
					return ACTEXEC_Continue;
				}
			}
		} else {
			mTouchingWallTimer = 0;
			mFootmarkFlags     = -1;
		}
	} else {
		mTouchingWallTimer = 0;
		mFootmarkFlags     = -1;
	}

	// add to how much the piki has moved since the last trip, if it exceeds 100
	// and the piki is currently at 110+ speed, do a rng check to trip
	// whether it passes the rng or not, reset the move distance each time
	Vector3f moveSep = mParent->mPreviousPosition - mParent->getPosition();
	mTripCheckMoveDist += moveSep.length();

	if (mParent->getKind() != Game::Bulbmin && mTripCheckMoveDist >= 100.0f && mParent->mVelocity.length() > 110.0f) {
		if (randFloat() >= 0.99f && randFloat() > 0.7f) {
			if (mParent->getStateID() == Game::PIKISTATE_Walk) {
				mParent->mFsm->transit(mParent, Game::PIKISTATE_Koke, nullptr);
			}
			mTripCheckMoveDist = 0.0f;
			return ACTEXEC_Continue;
		}

		mTripCheckMoveDist = 0.0f;
	}

	Vector3f sep = slotPos - mParent->getPosition();
	f32 dist     = sep.length2D();

	sep.normalise();

	if (dist < 60.0f && mParent->mNavi->mCommandOn1 && mSortState != FORMATION_SORT_STARTED) {
		if (!mHasLostNumbness
		    && (mParent->mNavi->mSceneAnimationTimer - 2.0f * randFloat())
		           >= static_cast<Game::NaviParms*>(mParent->mNavi->mParms)->mNaviParms.mPikiLoseNumbnessTime.mValue) {
			mHasLostNumbness = true;
			return ACTEXEC_Continue;
		}

		if (mSortState == FORMATION_SORT_NONE) {
			mDistanceType = 0;
			Iterator<Game::Creature> iter(mParent->mNavi->mCPlateMgr);
			CI_LOOP(iter)
			{
				Game::Creature* creature = *iter;
			}

			slotPos               = mParent->mNavi->getPosition();
			mHasLostNumbness      = false;
			Vector3f pikiPosition = mParent->getPosition();

			const f32& naviX = slotPos.x;
			const f32& naviZ = slotPos.z;
			Vector3f naviPikiDir(naviX - pikiPosition.x, slotPos.y - pikiPosition.y, naviZ - pikiPosition.z);
			naviPikiDir.normalise();

			if (qdist2(naviX, naviZ, mParent->getPosition().x, mParent->getPosition().z) <= 40.0f) {
				if (mSortState != FORMATION_SORT_FORMED) {
					setFormed();
				}
			} else {
				mParent->setSpeed(1.0f, naviPikiDir);
				// if the piki lost numbness last frame, but not this frame, start the walk anim
				if (mHadNumbnessLastFrame && !mHasLostNumbness) {
					mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);
				}
			}

			return ACTEXEC_Continue;
		}

		mDistanceType            = 1;
		mParent->mTargetVelocity = Vector3f(0.0f);
		Vector3f naviPikiSep     = mParent->mNavi->getPosition() - mParent->getPosition();
		f32 angle                = JMAAtan2Radian(naviPikiSep.x, naviPikiSep.z);
		mParent->setMoveRotation(false);
		mParent->mFaceDir += 0.3f * angDist(angle, mParent->mFaceDir);
		return ACTEXEC_Continue;
	}

	if (dist <= 7.0f) {
		mDistanceCounter = 0;
	} else if (dist < 15.0f) {
		mDistanceCounter++;
		if (mOldDistanceType == 2 && mParent->mNavi->mSceneAnimationTimer > 0.1f) {
			mDistanceCounter = 0;
		}

		if (mDistanceCounter >= 6) {
			mDistanceCounter = 6;
		}
	} else {
		mDistanceCounter = 0;
	}

	if (dist <= 7.0f || (mDistanceCounter < 6 && dist <= 15.0f)) {
		mDistanceType            = 2;
		mParent->mTargetVelocity = Vector3f(0.0f);

		sep = mParent->mNavi->getPosition() - mParent->getPosition();

		f32 angle = angDist(JMAAtan2Radian(sep.x, sep.z), mParent->mFaceDir);
		mParent->setMoveRotation(false);
		mParent->mFaceDir += 0.3f * angle;
		if (mSortState != FORMATION_SORT_FORMED) {
			setFormed();
		}

	} else if (dist < 15.0f) {
		mDistanceType = 3;
		mParent->setMoveRotation(false);

		if (mHasLostNumbness && dist < 10.0f) {
			mHasLostNumbness = true; // this has to be true to get... set to true lol
		}

		f32 factor          = 10.0f / static_cast<Game::PikiParms*>(mParent->mParms)->mCreatureProps.mProps.mAccel.mValue;
		f32 speed           = mParent->getSpeed(1.0f);
		f32 halfSpeedFactor = 0.5f * (speed / factor);
		f32 factor2         = halfSpeedFactor * speed;

		f32 simSpeed           = mParent->mVelocity.length();
		f32 halfSimSpeedFactor = 0.5f * (simSpeed / factor);
		f32 factor3            = halfSimSpeedFactor * simSpeed;

		if (dist < factor3) {
			mParent->mTargetVelocity = Vector3f(0.0f);
			sep                      = mParent->mNavi->getPosition() - mParent->getPosition();
			f32 angle                = angDist(JMAAtan2Radian(sep.x, sep.z), mParent->mFaceDir);
			mParent->setMoveRotation(false);
			mParent->mFaceDir += 0.3f * angle;
		} else if (dist < factor2) {
			f32 val2                 = 0.5f * sqrtfClamped(SQUARE(simSpeed) + (8.0f * factor) * dist) + simSpeed;
			mParent->mTargetVelocity = sep * val2;
		} else {
			mParent->setSpeed(1.0f, sep);
		}

		Vector3f naviPikiSep;
		naviPikiSep.sub(mParent->getPosition(), mParent->mNavi->getPosition());
		Vector3f plateSep = mParent->mNavi->getPosition() - mCPlate->mMaxPositionOffset;
		plateSep.normalize();

		if (plateSep.dot(naviPikiSep) > 0.0f) {
			Vector3f impulse = Vector3f(-naviPikiSep.z, 0.0f, naviPikiSep.x); // f29, f27, f30
			if (!(mSlotID & 1)) {
				impulse.negate();
			}

			impulse.normalise();

			if (newVer && !isCStickNeutral) {
				impulse = Vector3f(0.0f);
			}

			f32 currSpeed = mParent->getTargetSpeed();

			mParent->mTargetVelocity = mParent->mTargetVelocity + impulse * mParent->getSpeed(0.5f);
			mParent->mTargetVelocity.normalise();
			mParent->mTargetVelocity = mParent->mTargetVelocity * currSpeed;
		}
	} else {
		mDistanceType = 4;
		mParent->setSpeed(1.0f, sep);

		Vector3f naviPikiSep;
		naviPikiSep.sub(mParent->getPosition(), mParent->mNavi->getPosition());
		Vector3f plateSep = mParent->mNavi->getPosition() - mCPlate->mMaxPositionOffset;
		plateSep.normalize();

		if (plateSep.dot(naviPikiSep) > 0.0f) {
			Vector3f impulse = Vector3f(-naviPikiSep.z, 0.0f, naviPikiSep.x); // f29, f27, f30
			if (!(mSlotID & 1)) {
				impulse.negate();
			}

			impulse.normalise();

			if (newVer && !isCStickNeutral) {
				impulse = Vector3f(0.0f);
			}

			f32 currSpeed = mParent->getTargetSpeed();

			mParent->mTargetVelocity = mParent->mTargetVelocity + impulse * mParent->getSpeed(0.5f);
			mParent->mTargetVelocity.normalise();
			mParent->mTargetVelocity = mParent->mTargetVelocity * currSpeed;
		}
	}

	if (dist < static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mWhiteDistance.mValue) {
		mLostPikiTimer   = 0.0f;
		mHasReleasedSlot = false;
	} else if (dist < static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mGrayDistance.mValue) {
		mLostPikiTimer += sys->mDeltaTime;
		if (!mHasReleasedSlot) {
			if (mSlotID != -1) {
				mCPlate->releaseSlot(mParent, mSlotID);
				mSlotID = mCPlate->getSlot(mParent, this, false);
			}
			mHasReleasedSlot = true;
		}
		if ((!mInitArg.mIsDemoFollow && mSlotID == -1)
		    || mLostPikiTimer > static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mLostChildTime.mValue) {
			return ACTEXEC_Fail;
		}

	} else if (!mInitArg.mIsDemoFollow) {
		return ACTEXEC_Fail;
	}

	// if the piki lost numbness last frame, but not this frame, start the walk anim
	if (mHadNumbnessLastFrame && !mHasLostNumbness) {
		mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);
	}

	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8019ED68
 * @note Size: 0x74
 */
void ActFormation::collisionCallback(Game::Piki* p, Game::CollEvent& collEvent)
{
	bool isBeingCommanded = false;
	Game::Navi* navi      = p->mNavi;
	if (navi) {
		isBeingCommanded = navi->commandOn();
		if (mTouchingNaviCooldownTimer) {
			isBeingCommanded = false;
		}
	}

	p->invokeAI(&collEvent, isBeingCommanded);
}

/**
 * @note Address: 0x8019EDDC
 * @note Size: 0x58
 */
void ActFormation::platCallback(Game::Piki* p, Game::PlatEvent& platEvent)
{
	Game::Navi* navi = p->mNavi;
	if (navi && navi->commandOn()) {
		p->invokeAI(&platEvent);
	}
}

/**
 * @note Address: 0x8019EE34
 * @note Size: 0x8
 */
bool ActFormation::resumable()
{
	return true;
}

/**
 * @note Address: 0x8019EE3C
 * @note Size: 0x8
 */
u32 ActFormation::getNextAIType()
{
	return mNextAIType;
}

} // namespace PikiAI
