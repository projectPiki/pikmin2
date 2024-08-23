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
    , mInitArg(nullptr)
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
void ActFormation::inform(int slotID) { mSlotID = slotID; }

/**
 * @note Address: 0x8019CE70
 * @note Size: 0xC
 */
void ActFormation::startSort() { mSortState = 2; }

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

	bool cstickTest = mParent->mNavi->isCStickNetural();
	JUT_ASSERTLINE(661, mCPlate->validSlot(mSlotID), "invalid slotId!\n");

	Vector3f slotPos; // 0x138
	mCPlate->getSlotPosition(mSlotID, slotPos);

	if (!mParent->mNavi->commandOn()) {
		Vector3f sep     = slotPos - mParent->getPosition(); // 0x12c
		f32 dist         = sep.length();                     // f26
		Vector3f pikiPos = mParent->getPosition();           // 0x120
		if ((Game::gameSystem->mFrameTimer - mFrameTimer) < 0x32 && dist > 60.0f) {
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

	Vector3f sep = slotPos - mParent->getPosition(); // 0x114
	f32 dist     = sep.length();                     // f31

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
				// ?
			}

			slotPos              = mParent->mNavi->getPosition(); // 0x138
			mHasLostNumbness     = false;
			Vector3f naviPikiDir = slotPos - mParent->getPosition(); // 0xf8
			naviPikiDir.normalise();

			if (qdist2(slotPos.x, slotPos.z, mParent->getPosition().x, mParent->getPosition().z) <= 40.0f) {
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
		f32 angle                = JMAAtan2Radian(naviPikiSep.x, naviPikiSep.z); // f26
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

		sep = mParent->mNavi->getPosition() - mParent->getPosition(); // 0x114

		f32 angle = angDist(JMAAtan2Radian(sep.x, sep.z), mParent->mFaceDir); // f26
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

		f32 factor  = 10.0f / static_cast<Game::PikiParms*>(mParent->mParms)->mCreatureProps.mProps.mAccel.mValue; // f26
		f32 speed   = mParent->getSpeed(1.0f);                                                                     // f1
		f32 factor2 = (0.5f * (speed / factor)) * speed;                                                           // f7

		f32 simSpeed = mParent->mVelocity.length(); // f3
		f32 factor3  = (0.5f * (simSpeed / factor)) * simSpeed;

		if (dist < factor3) {
			mParent->mTargetVelocity = Vector3f(0.0f);
			sep                      = mParent->mNavi->getPosition() - mParent->getPosition();   // 0x114
			f32 angle                = angDist(JMAAtan2Radian(sep.x, sep.z), mParent->mFaceDir); // f26
			mParent->setMoveRotation(false);
			mParent->mFaceDir += 0.3f * angle;
		} else if (dist < factor2) {
			f32 val                  = SQUARE(simSpeed) + (8.0f * factor) * dist;
			f32 val2                 = 0.5f * _sqrtf2(val) + simSpeed;
			mParent->mTargetVelocity = sep * val2;
		} else {
			mParent->setSpeed(1.0f, sep);
		}

		Vector3f naviPikiSep = mParent->getPosition() - mParent->mNavi->getPosition(); // f30, f29, f28
		Vector3f plateSep    = mParent->mNavi->getPosition() - mCPlate->mMaxPositionOffset;
		plateSep.normalise();

		if (plateSep.dot(naviPikiSep) > 0.0f) {
			Vector3f impulse = Vector3f(-naviPikiSep.z, 0.0f, naviPikiSep.x); // f29, f27, f30
			if (mSlotID & 1) {
				impulse.negate();
			}

			impulse.normalise();

			if (newVer && cstickTest) {
				impulse = Vector3f(0.0f);
			}

			f32 currSpeed = mParent->mTargetVelocity.length(); // f28

			mParent->mTargetVelocity += impulse * mParent->getSpeed(1.0f);
			mParent->mTargetVelocity.normalise();
			mParent->mTargetVelocity *= currSpeed;
		}
	} else {
		mDistanceType = 4;
		mParent->setSpeed(1.0f, sep);

		Vector3f naviPikiSep = mParent->getPosition() - mParent->mNavi->getPosition(); // f30, f29, f28
		Vector3f plateSep    = mParent->mNavi->getPosition() - mCPlate->mMaxPositionOffset;
		plateSep.normalise();

		if (plateSep.dot(naviPikiSep) > 0.0f) {
			Vector3f impulse = Vector3f(-naviPikiSep.z, 0.0f, naviPikiSep.x); // f29, f27, f30
			if (mSlotID & 1) {
				impulse.negate();
			}

			impulse.normalise();

			if (newVer && cstickTest) {
				impulse = Vector3f(0.0f);
			}

			f32 currSpeed = mParent->mTargetVelocity.length(); // f28

			mParent->mTargetVelocity += impulse * mParent->getSpeed(1.0f);
			mParent->mTargetVelocity.normalise();
			mParent->mTargetVelocity *= currSpeed;
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

	/*
	stwu     r1, -0x1c0(r1)
	mflr     r0
	stw      r0, 0x1c4(r1)
	stfd     f31, 0x1b0(r1)
	psq_st   f31, 440(r1), 0, qr0
	stfd     f30, 0x1a0(r1)
	psq_st   f30, 424(r1), 0, qr0
	stfd     f29, 0x190(r1)
	psq_st   f29, 408(r1), 0, qr0
	stfd     f28, 0x180(r1)
	psq_st   f28, 392(r1), 0, qr0
	stfd     f27, 0x170(r1)
	psq_st   f27, 376(r1), 0, qr0
	stfd     f26, 0x160(r1)
	psq_st   f26, 360(r1), 0, qr0
	stw      r31, 0x15c(r1)
	stw      r30, 0x158(r1)
	stw      r29, 0x154(r1)
	mr       r31, r3
	lbz      r3, 0x38(r3)
	cmplwi   r3, 0
	beq      lbl_8019D6E0
	addi     r0, r3, -1
	stb      r0, 0x38(r31)

lbl_8019D6E0:
	lwz      r0, 0x34(r31)
	cmpwi    r0, -1
	bne      lbl_8019D6F4
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019D6F4:
	lbz      r0, 0x20(r31)
	cmplwi   r0, 0
	bne      lbl_8019D724
	lwz      r3, 0x14(r31)
	cmplwi   r3, 0
	beq      lbl_8019D724
	lwz      r3, 0x250(r3)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_8019D724
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019D724:
	lwz      r3, 0x14(r31)
	cmplwi   r3, 0
	beq      lbl_8019D750
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019D750
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019D750:
	lbz      r0, 0x20(r31)
	cmplwi   r0, 0
	bne      lbl_8019D7CC
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_8019D778
	cmpwi    r0, 3
	bne      lbl_8019D77C

lbl_8019D778:
	li       r3, 1

lbl_8019D77C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019D7CC
	lwz      r3, 0x14(r31)
	cmplwi   r3, 0
	beq      lbl_8019D7CC
	lwz      r0, 0x278(r3)
	cmplwi   r0, 0
	bne      lbl_8019D7CC
	bl       getStateID__Q24Game4NaviFv
	cmpwi    r3, 1
	bne      lbl_8019D7CC
	li       r0, 0
	stw      r0, 0x24(r31)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019D7CC:
	lwz      r3, 4(r31)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lhz      r3, 0x2a(r31)
	li       r0, 5
	sth      r3, 0x2c(r31)
	sth      r0, 0x2a(r31)
	lbz      r0, 0x54(r31)
	cmplwi   r0, 0
	beq      lbl_8019D884
	lwz      r3, 4(r31)
	lwz      r3, 0x1b8(r3)
	cmplwi   r3, 0
	beq      lbl_8019D818
	lha      r0, 0x20(r3)
	b        lbl_8019D81C

lbl_8019D818:
	li       r0, -1

lbl_8019D81C:
	cmpwi    r0, 0x1a
	beq      lbl_8019D850
	li       r0, 0
	li       r4, 0x1e
	stb      r0, 0x54(r31)
	li       r5, 0x1e
	li       r6, 0
	li       r7, 0
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_8019D850:
	lwz      r4, 4(r31)
	li       r3, 1
	lfs      f2, lbl_80518FF0@sda21(r2)
	lfs      f0, 0x1e4(r4)
	lfs      f1, 0x1e8(r4)
	fmuls    f0, f0, f2
	lfs      f3, 0x1ec(r4)
	fmuls    f1, f1, f2
	fmuls    f2, f3, f2
	stfs     f0, 0x1e4(r4)
	stfs     f1, 0x1e8(r4)
	stfs     f2, 0x1ec(r4)
	b        lbl_8019ED1C

lbl_8019D884:
	lbz      r0, 0x60(r31)
	stb      r0, 0x61(r31)
	lwz      r3, 4(r31)
	lwz      r3, 0x2c4(r3)
	cmplwi   r3, 0
	bne      lbl_8019D8A4
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019D8A4:
	bl       isCStickNetural__Q24Game4NaviFv
	mr       r30, r3
	lwz      r3, 0x5c(r31)
	lwz      r4, 0x34(r31)
	bl       validSlot__Q24Game6CPlateFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019D8DC
	lis      r3, lbl_8047F190@ha
	lis      r5, lbl_8047F1E0@ha
	addi     r3, r3, lbl_8047F190@l
	li       r4, 0x295
	addi     r5, r5, lbl_8047F1E0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019D8DC:
	lwz      r3, 0x5c(r31)
	addi     r5, r1, 0x138
	lwz      r4, 0x34(r31)
	bl       "getSlotPosition__Q24Game6CPlateFiR10Vector3<f>"
	lwz      r3, 4(r31)
	lwz      r3, 0x2c4(r3)
	bl       commandOn__Q24Game4NaviFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019DB10
	lwz      r4, 4(r31)
	addi     r3, r1, 0xec
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x138(r1)
	lfs      f0, 0xec(r1)
	lfs      f1, 0x13c(r1)
	fsubs    f3, f2, f0
	lfs      f0, 0xf0(r1)
	lfs      f4, 0x140(r1)
	fsubs    f2, f1, f0
	lfs      f1, 0xf4(r1)
	fmuls    f0, f3, f3
	fsubs    f4, f4, f1
	lfs      f1, lbl_80518FE8@sda21(r2)
	fmuls    f5, f2, f2
	stfs     f3, 0x12c(r1)
	fmuls    f6, f4, f4
	fadds    f0, f0, f5
	stfs     f2, 0x130(r1)
	stfs     f4, 0x134(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019D984
	fmadds   f0, f3, f3, f5
	fadds    f26, f6, f0
	fcmpo    cr0, f26, f1
	ble      lbl_8019D988
	frsqrte  f0, f26
	fmuls    f26, f0, f26
	b        lbl_8019D988

lbl_8019D984:
	fmr      f26, f1

lbl_8019D988:
	lwz      r4, 4(r31)
	addi     r3, r1, 0xe0
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xe0(r1)
	lfs      f1, 0xe4(r1)
	lfs      f0, 0xe8(r1)
	stfs     f2, 0x120(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stfs     f1, 0x124(r1)
	stfs     f0, 0x128(r1)
	lwz      r4, 0x44(r31)
	lwz      r0, 0x50(r3)
	subf     r0, r4, r0
	srawi    r3, r0, 0x1f
	xor      r0, r3, r0
	subf     r0, r3, r0
	cmpwi    r0, 0x32
	bge      lbl_8019DAFC
	lfs      f0, lbl_80518FF4@sda21(r2)
	fcmpo    cr0, f26, f0
	ble      lbl_8019DAFC
	lbz      r0, 0x40(r31)
	cmplwi   r0, 3
	ble      lbl_8019DB20
	lwz      r3, 4(r31)
	addi     r4, r1, 0x120
	lwz      r5, 0x48(r31)
	lwz      r3, 0x2c4(r3)
	lwz      r3, 0x2d8(r3)
	bl       "findNearest2__Q24Game9FootmarksFR10Vector3<f>i"
	stw      r3, 0x3c(r31)
	lwz      r3, 0x3c(r31)
	cmplwi   r3, 0
	beq      lbl_8019DB20
	lfs      f3, 4(r3)
	lfs      f2, 0x124(r1)
	lfs      f1, 0(r3)
	lfs      f0, 0x120(r1)
	fsubs    f4, f3, f2
	lfs      f3, 8(r3)
	fsubs    f2, f1, f0
	lfs      f0, 0x128(r1)
	fmuls    f5, f4, f4
	lfs      f1, lbl_80518FE8@sda21(r2)
	fsubs    f3, f3, f0
	stfs     f4, 0x130(r1)
	fmuls    f0, f2, f2
	stfs     f2, 0x12c(r1)
	fmuls    f4, f3, f3
	stfs     f3, 0x134(r1)
	fadds    f0, f0, f5
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019DA88
	fmadds   f0, f2, f2, f5
	fadds    f4, f4, f0
	fcmpo    cr0, f4, f1
	ble      lbl_8019DA8C
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_8019DA8C

lbl_8019DA88:
	fmr      f4, f1

lbl_8019DA8C:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_8019DAC8
	lfs      f0, lbl_80518FF8@sda21(r2)
	lfs      f2, 0x12c(r1)
	fdivs    f3, f0, f4
	lfs      f1, 0x130(r1)
	lfs      f0, 0x134(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x12c(r1)
	stfs     f1, 0x130(r1)
	stfs     f0, 0x134(r1)
	b        lbl_8019DACC

lbl_8019DAC8:
	fmr      f4, f0

lbl_8019DACC:
	lfs      f0, lbl_80518FFC@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_8019DAE4
	lwz      r3, 0x3c(r31)
	lwz      r0, 0xc(r3)
	stw      r0, 0x48(r31)

lbl_8019DAE4:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x12c
	lfs      f1, lbl_80518FF8@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	li       r3, 1
	b        lbl_8019ED1C

lbl_8019DAFC:
	li       r3, 0
	li       r0, -1
	stb      r3, 0x40(r31)
	stw      r0, 0x48(r31)
	b        lbl_8019DB20

lbl_8019DB10:
	li       r3, 0
	li       r0, -1
	stb      r3, 0x40(r31)
	stw      r0, 0x48(r31)

lbl_8019DB20:
	lwz      r4, 4(r31)
	addi     r3, r1, 0xd4
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	lfs      f0, 0xd8(r1)
	lfs      f1, 0x23c(r3)
	lfs      f3, 0x240(r3)
	fsubs    f4, f1, f0
	lfs      f2, 0xdc(r1)
	lfs      f1, 0x238(r3)
	lfs      f0, 0xd4(r1)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019DB8C
	ble      lbl_8019DB90
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8019DB90

lbl_8019DB8C:
	fmr      f1, f0

lbl_8019DB90:
	lfs      f0, 0x50(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x50(r31)
	lwz      r3, 4(r31)
	lbz      r0, 0x2b8(r3)
	cmpwi    r0, 5
	beq      lbl_8019DCCC
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_80519000@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8019DCCC
	lfs      f2, 0x200(r3)
	lfs      f1, 0x204(r3)
	fmuls    f0, f2, f2
	lfs      f3, 0x208(r3)
	fmuls    f4, f1, f1
	lfs      f1, lbl_80518FE8@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019DC08
	fmadds   f0, f2, f2, f4
	fadds    f2, f3, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8019DC0C
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019DC0C

lbl_8019DC08:
	fmr      f2, f1

lbl_8019DC0C:
	lfs      f0, lbl_80519004@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8019DCCC
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14c(r1)
	lfd      f3, lbl_80519038@sda21(r2)
	stw      r0, 0x148(r1)
	lfs      f1, lbl_80519008@sda21(r2)
	lfd      f2, 0x148(r1)
	lfs      f0, lbl_8051900C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8019DCC4
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14c(r1)
	lfd      f3, lbl_80519038@sda21(r2)
	stw      r0, 0x148(r1)
	lfs      f1, lbl_80519008@sda21(r2)
	lfd      f2, 0x148(r1)
	lfs      f0, lbl_80519010@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019DCC4
	lwz      r3, 4(r31)
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_8019DCB4
	lwz      r4, 4(r31)
	li       r5, 0x1e
	li       r6, 0
	lwz      r3, 0x28c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8019DCB4:
	lfs      f0, lbl_80518FE8@sda21(r2)
	li       r3, 1
	stfs     f0, 0x50(r31)
	b        lbl_8019ED1C

lbl_8019DCC4:
	lfs      f0, lbl_80518FE8@sda21(r2)
	stfs     f0, 0x50(r31)

lbl_8019DCCC:
	lwz      r4, 4(r31)
	addi     r3, r1, 0xc8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x140(r1)
	lfs      f0, 0xd0(r1)
	lfs      f1, 0x138(r1)
	fsubs    f4, f2, f0
	lfs      f0, 0xc8(r1)
	lfs      f3, 0x13c(r1)
	fsubs    f2, f1, f0
	lfs      f0, 0xcc(r1)
	fmuls    f5, f4, f4
	fsubs    f3, f3, f0
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f6, f2, f2
	stfs     f2, 0x114(r1)
	fadds    f1, f6, f5
	stfs     f3, 0x118(r1)
	stfs     f4, 0x11c(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_8019DD44
	fmadds   f31, f2, f2, f5
	fcmpo    cr0, f31, f0
	ble      lbl_8019DD48
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_8019DD48

lbl_8019DD44:
	fmr      f31, f0

lbl_8019DD48:
	lfs      f0, 0x118(r1)
	lfs      f1, lbl_80518FE8@sda21(r2)
	fmuls    f3, f0, f0
	fadds    f0, f6, f3
	fadds    f0, f5, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019DD80
	fmadds   f0, f2, f2, f3
	fadds    f3, f5, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8019DD84
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019DD84

lbl_8019DD80:
	fmr      f3, f1

lbl_8019DD84:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019DDBC
	lfs      f0, lbl_80518FF8@sda21(r2)
	lfs      f2, 0x114(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x118(r1)
	lfs      f0, 0x11c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x114(r1)
	stfs     f1, 0x118(r1)
	stfs     f0, 0x11c(r1)

lbl_8019DDBC:
	lfs      f0, lbl_80518FF4@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8019E2A0
	lwz      r3, 4(r31)
	lwz      r3, 0x2c4(r3)
	lbz      r0, 0x30c(r3)
	cmplwi   r0, 0
	beq      lbl_8019E2A0
	lhz      r0, 0x28(r31)
	cmplwi   r0, 2
	beq      lbl_8019E2A0
	lbz      r0, 0x60(r31)
	cmplwi   r0, 0
	bne      lbl_8019DE54
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14c(r1)
	lwz      r3, 4(r31)
	stw      r0, 0x148(r1)
	lfd      f2, lbl_80519038@sda21(r2)
	lfd      f1, 0x148(r1)
	lfs      f0, lbl_80519008@sda21(r2)
	fsubs    f1, f1, f2
	lwz      r4, 0x2c4(r3)
	lfs      f2, lbl_80519014@sda21(r2)
	lwz      r3, 0xc0(r4)
	fdivs    f3, f1, f0
	lfs      f1, 0x308(r4)
	lfs      f0, 0x8b8(r3)
	fnmsubs  f1, f2, f3, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8019DE54
	li       r0, 1
	li       r3, 1
	stb      r0, 0x60(r31)
	b        lbl_8019ED1C

lbl_8019DE54:
	lhz      r0, 0x28(r31)
	cmplwi   r0, 0
	bne      lbl_8019E1E4
	li       r4, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	sth      r4, 0x2a(r31)
	cmplwi   r4, 0
	addi     r0, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	lwz      r3, 4(r31)
	lwz      r3, 0x2c4(r3)
	lwz      r3, 0x254(r3)
	stw      r0, 0x104(r1)
	stw      r4, 0x110(r1)
	stw      r4, 0x108(r1)
	stw      r3, 0x10c(r1)
	bne      lbl_8019DEAC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x108(r1)
	b        lbl_8019E008

lbl_8019DEAC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x108(r1)
	b        lbl_8019DF18

lbl_8019DEC4:
	lwz      r3, 0x10c(r1)
	lwz      r4, 0x108(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x110(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019E008
	lwz      r3, 0x10c(r1)
	lwz      r4, 0x108(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x108(r1)

lbl_8019DF18:
	lwz      r12, 0x104(r1)
	addi     r3, r1, 0x104
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019DEC4
	b        lbl_8019E008

lbl_8019DF38:
	lwz      r3, 0x10c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x110(r1)
	cmplwi   r0, 0
	bne      lbl_8019DF78
	lwz      r3, 0x10c(r1)
	lwz      r4, 0x108(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x108(r1)
	b        lbl_8019E008

lbl_8019DF78:
	lwz      r3, 0x10c(r1)
	lwz      r4, 0x108(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x108(r1)
	b        lbl_8019DFEC

lbl_8019DF98:
	lwz      r3, 0x10c(r1)
	lwz      r4, 0x108(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x110(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019E008
	lwz      r3, 0x10c(r1)
	lwz      r4, 0x108(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x108(r1)

lbl_8019DFEC:
	lwz      r12, 0x104(r1)
	addi     r3, r1, 0x104
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019DF98

lbl_8019E008:
	lwz      r3, 0x10c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x108(r1)
	cmplw    r4, r3
	bne      lbl_8019DF38
	lwz      r4, 4(r31)
	addi     r3, r1, 0xbc
	lwz      r4, 0x2c4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xbc(r1)
	li       r0, 0
	lfs      f1, 0xc0(r1)
	addi     r3, r1, 0xb0
	lfs      f0, 0xc4(r1)
	stfs     f2, 0x138(r1)
	stfs     f1, 0x13c(r1)
	stfs     f0, 0x140(r1)
	stb      r0, 0x60(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x138(r1)
	lfs      f0, 0xb0(r1)
	lfs      f1, 0x13c(r1)
	fsubs    f3, f2, f0
	lfs      f0, 0xb4(r1)
	lfs      f4, 0x140(r1)
	fsubs    f2, f1, f0
	lfs      f1, 0xb8(r1)
	fmuls    f0, f3, f3
	fsubs    f4, f4, f1
	lfs      f1, lbl_80518FE8@sda21(r2)
	fmuls    f5, f2, f2
	stfs     f3, 0xf8(r1)
	fmuls    f6, f4, f4
	fadds    f0, f0, f5
	stfs     f2, 0xfc(r1)
	stfs     f4, 0x100(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019E0E8
	fmadds   f0, f3, f3, f5
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8019E0EC
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019E0EC

lbl_8019E0E8:
	fmr      f3, f1

lbl_8019E0EC:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019E124
	lfs      f0, lbl_80518FF8@sda21(r2)
	lfs      f2, 0xf8(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0xfc(r1)
	lfs      f0, 0x100(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0xf8(r1)
	stfs     f1, 0xfc(r1)
	stfs     f0, 0x100(r1)

lbl_8019E124:
	lwz      r4, 4(r31)
	addi     r3, r1, 0x98
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0xa4
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x138(r1)
	lfs      f2, 0x140(r1)
	lfs      f3, 0xa4(r1)
	lfs      f4, 0xa0(r1)
	bl       qdist2__Fffff
	lfs      f0, lbl_80519018@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8019E190
	lhz      r0, 0x28(r31)
	cmplwi   r0, 1
	beq      lbl_8019E1DC
	mr       r3, r31
	bl       setFormed__Q26PikiAI12ActFormationFv
	b        lbl_8019E1DC

lbl_8019E190:
	lwz      r3, 4(r31)
	addi     r4, r1, 0xf8
	lfs      f1, lbl_80518FF8@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	lbz      r0, 0x61(r31)
	cmplwi   r0, 0
	beq      lbl_8019E1DC
	lbz      r0, 0x60(r31)
	cmplwi   r0, 0
	bne      lbl_8019E1DC
	lwz      r3, 4(r31)
	li       r4, 0x1e
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_8019E1DC:
	li       r3, 1
	b        lbl_8019ED1C

lbl_8019E1E4:
	li       r0, 1
	lfs      f0, lbl_80518FE8@sda21(r2)
	sth      r0, 0x2a(r31)
	addi     r3, r1, 0x80
	lwz      r4, 4(r31)
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x8c
	lwz      r4, 0x2c4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x8c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x80(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f2, 0x94(r1)
	lfs      f0, 0x88(r1)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r3, 4(r31)
	fmr      f26, f1
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	fmr      f1, f26
	lfs      f2, 0x1fc(r3)
	bl       angDist__Fff
	lwz      r4, 4(r31)
	li       r3, 1
	lfs      f2, lbl_8051901C@sda21(r2)
	lfs      f0, 0x1fc(r4)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x1fc(r4)
	b        lbl_8019ED1C

lbl_8019E2A0:
	lfs      f0, lbl_80519020@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8019E2BC
	li       r0, 0
	sth      r0, 0x2e(r31)
	b        lbl_8019E320

lbl_8019E2BC:
	lfs      f0, lbl_80519024@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8019E318
	lhz      r3, 0x2e(r31)
	addi     r0, r3, 1
	sth      r0, 0x2e(r31)
	lhz      r0, 0x2c(r31)
	cmplwi   r0, 2
	bne      lbl_8019E300
	lwz      r3, 4(r31)
	lfs      f0, lbl_80519028@sda21(r2)
	lwz      r3, 0x2c4(r3)
	lfs      f1, 0x308(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8019E300
	li       r0, 0
	sth      r0, 0x2e(r31)

lbl_8019E300:
	lhz      r0, 0x2e(r31)
	cmplwi   r0, 6
	blt      lbl_8019E320
	li       r0, 6
	sth      r0, 0x2e(r31)
	b        lbl_8019E320

lbl_8019E318:
	li       r0, 0
	sth      r0, 0x2e(r31)

lbl_8019E320:
	lfs      f0, lbl_80519020@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	beq      lbl_8019E34C
	lhz      r0, 0x2e(r31)
	cmplwi   r0, 6
	bge      lbl_8019E42C
	lfs      f0, lbl_80519024@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8019E42C

lbl_8019E34C:
	li       r0, 2
	lfs      f0, lbl_80518FE8@sda21(r2)
	sth      r0, 0x2a(r31)
	addi     r3, r1, 0x68
	lwz      r4, 4(r31)
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x74
	lwz      r4, 0x2c4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x7c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x70(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x74(r1)
	fsubs    f2, f2, f0
	lfs      f0, 0x68(r1)
	lfs      f3, 0x78(r1)
	fsubs    f1, f1, f0
	lfs      f0, 0x6c(r1)
	stfs     f2, 0x11c(r1)
	fsubs    f0, f3, f0
	stfs     f1, 0x114(r1)
	stfs     f0, 0x118(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r3, 4(r31)
	lfs      f2, 0x1fc(r3)
	bl       angDist__Fff
	lwz      r3, 4(r31)
	fmr      f26, f1
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	lfs      f1, lbl_8051901C@sda21(r2)
	lfs      f0, 0x1fc(r3)
	fmadds   f0, f1, f26, f0
	stfs     f0, 0x1fc(r3)
	lhz      r0, 0x28(r31)
	cmplwi   r0, 1
	beq      lbl_8019EBF8
	mr       r3, r31
	bl       setFormed__Q26PikiAI12ActFormationFv
	b        lbl_8019EBF8

lbl_8019E42C:
	lfs      f0, lbl_80519024@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8019E914
	li       r0, 3
	li       r4, 0
	sth      r0, 0x2a(r31)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x60(r31)
	cmplwi   r0, 0
	beq      lbl_8019E478
	lfs      f0, lbl_80518FEC@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8019E478
	li       r0, 1
	stb      r0, 0x60(r31)

lbl_8019E478:
	lwz      r3, 4(r31)
	lfs      f2, lbl_80518FEC@sda21(r2)
	lwz      r4, 0xc0(r3)
	lfs      f1, lbl_80518FF8@sda21(r2)
	lfs      f0, 0x9c(r4)
	fdivs    f26, f2, f0
	bl       getSpeed__Q24Game4PikiFf
	fdivs    f0, f1, f26
	lwz      r4, 4(r31)
	lfs      f2, lbl_8051902C@sda21(r2)
	lfs      f5, 0x200(r4)
	lfs      f4, 0x204(r4)
	lfs      f6, 0x208(r4)
	fmuls    f3, f2, f0
	lfs      f2, lbl_80518FE8@sda21(r2)
	fmuls    f0, f5, f5
	fmuls    f4, f4, f4
	fmuls    f6, f6, f6
	fmuls    f7, f3, f1
	fadds    f0, f0, f4
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f2
	ble      lbl_8019E4F0
	fmadds   f0, f5, f5, f4
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f2
	ble      lbl_8019E4F4
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019E4F4

lbl_8019E4F0:
	fmr      f3, f2

lbl_8019E4F4:
	fdivs    f0, f3, f26
	lfs      f1, lbl_8051902C@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f0, f0, f3
	fcmpo    cr0, f31, f0
	bge      lbl_8019E5CC
	lfs      f0, lbl_80518FE8@sda21(r2)
	addi     r3, r1, 0x50
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x5c
	lwz      r4, 0x2c4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x64(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x58(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x5c(r1)
	fsubs    f2, f2, f0
	lfs      f0, 0x50(r1)
	lfs      f3, 0x60(r1)
	fsubs    f1, f1, f0
	lfs      f0, 0x54(r1)
	stfs     f2, 0x11c(r1)
	fsubs    f0, f3, f0
	stfs     f1, 0x114(r1)
	stfs     f0, 0x118(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r3, 4(r31)
	lfs      f2, 0x1fc(r3)
	bl       angDist__Fff
	lwz      r3, 4(r31)
	fmr      f26, f1
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	lfs      f1, lbl_8051901C@sda21(r2)
	lfs      f0, 0x1fc(r3)
	fmadds   f0, f1, f26, f0
	stfs     f0, 0x1fc(r3)
	b        lbl_8019E644

lbl_8019E5CC:
	fcmpo    cr0, f31, f7
	bge      lbl_8019E634
	lfs      f1, lbl_80519030@sda21(r2)
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f1, f1, f26
	fmuls    f1, f1, f31
	fmadds   f2, f3, f3, f1
	fcmpo    cr0, f2, f0
	ble      lbl_8019E600
	ble      lbl_8019E604
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019E604

lbl_8019E600:
	fmr      f2, f0

lbl_8019E604:
	lfs      f1, lbl_8051902C@sda21(r2)
	lfs      f0, 0x114(r1)
	fmadds   f3, f1, f2, f3
	lfs      f1, 0x118(r1)
	lfs      f2, 0x11c(r1)
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	stfs     f0, 0x1e4(r4)
	stfs     f1, 0x1e8(r4)
	stfs     f2, 0x1ec(r4)
	b        lbl_8019E644

lbl_8019E634:
	lfs      f1, lbl_80518FF8@sda21(r2)
	mr       r3, r4
	addi     r4, r1, 0x114
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"

lbl_8019E644:
	lwz      r4, 4(r31)
	addi     r3, r1, 0x38
	lwz      r4, 0x2c4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x44
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x2c
	lfs      f1, 0x4c(r1)
	lwz      r4, 0x2c4(r4)
	lfs      f0, 0x40(r1)
	lwz      r12, 0(r4)
	lfs      f3, 0x48(r1)
	fsubs    f28, f1, f0
	lfs      f2, 0x3c(r1)
	lfs      f1, 0x44(r1)
	lfs      f0, 0x38(r1)
	fsubs    f29, f3, f2
	lwz      r12, 8(r12)
	fsubs    f30, f1, f0
	lwz      r29, 0x5c(r31)
	mtctr    r12
	bctrl
	lfs      f1, 0x30(r1)
	lfs      f0, 0xa8(r29)
	lfs      f2, 0x34(r1)
	fsubs    f3, f1, f0
	lfs      f0, 0xac(r29)
	lfs      f1, 0x2c(r1)
	fsubs    f4, f2, f0
	lfs      f0, 0xa4(r29)
	fmuls    f5, f3, f3
	fsubs    f2, f1, f0
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f6, f4, f4
	fmadds   f1, f2, f2, f5
	fadds    f1, f6, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019E70C
	ble      lbl_8019E710
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8019E710

lbl_8019E70C:
	fmr      f1, f0

lbl_8019E710:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8019E730
	lfs      f0, lbl_80518FF8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_8019E730:
	fmuls    f0, f3, f29
	lfs      f27, lbl_80518FE8@sda21(r2)
	fmadds   f0, f2, f30, f0
	fmadds   f0, f4, f28, f0
	fcmpo    cr0, f0, f27
	ble      lbl_8019EBF8
	lwz      r0, 0x34(r31)
	fneg     f29, f28
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8019E764
	fneg     f29, f29
	fneg     f27, f27
	fneg     f30, f30

lbl_8019E764:
	fmuls    f1, f27, f27
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f2, f30, f30
	fmadds   f1, f29, f29, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019E790
	ble      lbl_8019E794
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8019E794

lbl_8019E790:
	fmr      f1, f0

lbl_8019E794:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8019E7B4
	lfs      f0, lbl_80518FF8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f29, f29, f0
	fmuls    f27, f27, f0
	fmuls    f30, f30, f0

lbl_8019E7B4:
	lbz      r0, newVer@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8019E7D4
	clrlwi.  r0, r30, 0x18
	bne      lbl_8019E7D4
	lfs      f29, lbl_80518FE8@sda21(r2)
	fmr      f27, f29
	fmr      f30, f29

lbl_8019E7D4:
	lwz      r3, 4(r31)
	lfs      f1, lbl_80518FE8@sda21(r2)
	lfs      f3, 0x1e4(r3)
	lfs      f2, 0x1e8(r3)
	fmuls    f0, f3, f3
	lfs      f4, 0x1ec(r3)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019E820
	fmadds   f0, f3, f3, f2
	fadds    f28, f4, f0
	fcmpo    cr0, f28, f1
	ble      lbl_8019E824
	frsqrte  f0, f28
	fmuls    f28, f0, f28
	b        lbl_8019E824

lbl_8019E820:
	fmr      f28, f1

lbl_8019E824:
	lfs      f1, lbl_8051902C@sda21(r2)
	bl       getSpeed__Q24Game4PikiFf
	lwz      r3, 4(r31)
	fmuls    f0, f29, f1
	fmuls    f4, f27, f1
	lfs      f2, lbl_80518FE8@sda21(r2)
	lfs      f3, 0x1e4(r3)
	fmuls    f5, f30, f1
	lfs      f1, 0x1e8(r3)
	fadds    f0, f3, f0
	lfs      f3, 0x1ec(r3)
	fadds    f1, f1, f4
	stfs     f0, 0x1e4(r3)
	fadds    f0, f3, f5
	stfs     f1, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)
	lwz      r3, 4(r31)
	lfs      f3, 0x1e4(r3)
	lfs      f1, 0x1e8(r3)
	fmuls    f0, f3, f3
	lfs      f4, 0x1ec(r3)
	fmuls    f1, f1, f1
	fmuls    f4, f4, f4
	fadds    f0, f0, f1
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f2
	ble      lbl_8019E8AC
	fmadds   f0, f3, f3, f1
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f2
	ble      lbl_8019E8B0
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019E8B0

lbl_8019E8AC:
	fmr      f3, f2

lbl_8019E8B0:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019E8E8
	lfs      f1, lbl_80518FF8@sda21(r2)
	lfs      f0, 0x1e4(r3)
	fdivs    f1, f1, f3
	fmuls    f0, f0, f1
	stfs     f0, 0x1e4(r3)
	lfs      f0, 0x1e8(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x1e8(r3)
	lfs      f0, 0x1ec(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x1ec(r3)

lbl_8019E8E8:
	lwz      r3, 4(r31)
	lfs      f0, 0x1e4(r3)
	lfs      f1, 0x1e8(r3)
	fmuls    f0, f0, f28
	lfs      f2, 0x1ec(r3)
	fmuls    f1, f1, f28
	fmuls    f2, f2, f28
	stfs     f0, 0x1e4(r3)
	stfs     f1, 0x1e8(r3)
	stfs     f2, 0x1ec(r3)
	b        lbl_8019EBF8

lbl_8019E914:
	li       r0, 4
	lfs      f1, lbl_80518FF8@sda21(r2)
	sth      r0, 0x2a(r31)
	addi     r4, r1, 0x114
	lwz      r3, 4(r31)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	lwz      r4, 4(r31)
	addi     r3, r1, 0x14
	lwz      r4, 0x2c4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 8
	lfs      f1, 0x28(r1)
	lwz      r4, 0x2c4(r4)
	lfs      f0, 0x1c(r1)
	lwz      r12, 0(r4)
	lfs      f3, 0x24(r1)
	fsubs    f29, f1, f0
	lfs      f2, 0x18(r1)
	lfs      f1, 0x20(r1)
	lfs      f0, 0x14(r1)
	fsubs    f28, f3, f2
	lwz      r12, 8(r12)
	fsubs    f30, f1, f0
	lwz      r29, 0x5c(r31)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0xa8(r29)
	lfs      f2, 0x10(r1)
	fsubs    f3, f1, f0
	lfs      f0, 0xac(r29)
	lfs      f1, 8(r1)
	fsubs    f4, f2, f0
	lfs      f0, 0xa4(r29)
	fmuls    f5, f3, f3
	fsubs    f2, f1, f0
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f6, f4, f4
	fmadds   f1, f2, f2, f5
	fadds    f1, f6, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019E9F4
	ble      lbl_8019E9F8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8019E9F8

lbl_8019E9F4:
	fmr      f1, f0

lbl_8019E9F8:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8019EA18
	lfs      f0, lbl_80518FF8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_8019EA18:
	fmuls    f0, f3, f28
	lfs      f26, lbl_80518FE8@sda21(r2)
	fmadds   f0, f2, f30, f0
	fmadds   f0, f4, f29, f0
	fcmpo    cr0, f0, f26
	ble      lbl_8019EBF8
	lwz      r0, 0x34(r31)
	fneg     f27, f29
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8019EA4C
	fneg     f27, f27
	fneg     f26, f26
	fneg     f30, f30

lbl_8019EA4C:
	fmuls    f1, f26, f26
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f2, f30, f30
	fmadds   f1, f27, f27, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019EA78
	ble      lbl_8019EA7C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8019EA7C

lbl_8019EA78:
	fmr      f1, f0

lbl_8019EA7C:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8019EA9C
	lfs      f0, lbl_80518FF8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0
	fmuls    f30, f30, f0

lbl_8019EA9C:
	lbz      r0, newVer@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8019EABC
	clrlwi.  r0, r30, 0x18
	bne      lbl_8019EABC
	lfs      f27, lbl_80518FE8@sda21(r2)
	fmr      f26, f27
	fmr      f30, f27

lbl_8019EABC:
	lwz      r3, 4(r31)
	lfs      f1, lbl_80518FE8@sda21(r2)
	lfs      f3, 0x1e4(r3)
	lfs      f2, 0x1e8(r3)
	fmuls    f0, f3, f3
	lfs      f4, 0x1ec(r3)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019EB08
	fmadds   f0, f3, f3, f2
	fadds    f28, f4, f0
	fcmpo    cr0, f28, f1
	ble      lbl_8019EB0C
	frsqrte  f0, f28
	fmuls    f28, f0, f28
	b        lbl_8019EB0C

lbl_8019EB08:
	fmr      f28, f1

lbl_8019EB0C:
	lfs      f1, lbl_8051902C@sda21(r2)
	bl       getSpeed__Q24Game4PikiFf
	lwz      r3, 4(r31)
	fmuls    f0, f27, f1
	fmuls    f4, f26, f1
	lfs      f2, lbl_80518FE8@sda21(r2)
	lfs      f3, 0x1e4(r3)
	fmuls    f5, f30, f1
	lfs      f1, 0x1e8(r3)
	fadds    f0, f3, f0
	lfs      f3, 0x1ec(r3)
	fadds    f1, f1, f4
	stfs     f0, 0x1e4(r3)
	fadds    f0, f3, f5
	stfs     f1, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)
	lwz      r3, 4(r31)
	lfs      f3, 0x1e4(r3)
	lfs      f1, 0x1e8(r3)
	fmuls    f0, f3, f3
	lfs      f4, 0x1ec(r3)
	fmuls    f1, f1, f1
	fmuls    f4, f4, f4
	fadds    f0, f0, f1
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f2
	ble      lbl_8019EB94
	fmadds   f0, f3, f3, f1
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f2
	ble      lbl_8019EB98
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019EB98

lbl_8019EB94:
	fmr      f3, f2

lbl_8019EB98:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019EBD0
	lfs      f1, lbl_80518FF8@sda21(r2)
	lfs      f0, 0x1e4(r3)
	fdivs    f1, f1, f3
	fmuls    f0, f0, f1
	stfs     f0, 0x1e4(r3)
	lfs      f0, 0x1e8(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x1e8(r3)
	lfs      f0, 0x1ec(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x1ec(r3)

lbl_8019EBD0:
	lwz      r3, 4(r31)
	lfs      f0, 0x1e4(r3)
	lfs      f1, 0x1e8(r3)
	fmuls    f0, f0, f28
	lfs      f2, 0x1ec(r3)
	fmuls    f1, f1, f28
	fmuls    f2, f2, f28
	stfs     f0, 0x1e4(r3)
	stfs     f1, 0x1e8(r3)
	stfs     f2, 0x1ec(r3)

lbl_8019EBF8:
	lwz      r3, 4(r31)
	lwz      r3, 0xc0(r3)
	lfs      f0, 0x840(r3)
	fcmpo    cr0, f31, f0
	bge      lbl_8019EC20
	lfs      f0, lbl_80518FE8@sda21(r2)
	li       r0, 0
	stfs     f0, 0x58(r31)
	stb      r0, 0x30(r31)
	b        lbl_8019ECDC

lbl_8019EC20:
	lfs      f0, 0x868(r3)
	fcmpo    cr0, f31, f0
	bge      lbl_8019ECC8
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x58(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x58(r31)
	lbz      r0, 0x30(r31)
	cmplwi   r0, 0
	bne      lbl_8019EC90
	lwz      r5, 0x34(r31)
	cmpwi    r5, -1
	beq      lbl_8019EC88
	lwz      r3, 0x5c(r31)
	lwz      r4, 4(r31)
	bl       releaseSlot__Q24Game6CPlateFPQ24Game8Creaturei
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_8019EC74
	lwz      r5, 0xc(r31)

lbl_8019EC74:
	lwz      r3, 0x5c(r31)
	li       r6, 0
	lwz      r4, 4(r31)
	bl getSlot__Q24Game6CPlateFPQ24Game8CreaturePQ24Game18SlotChangeListenerb
	stw      r3, 0x34(r31)

lbl_8019EC88:
	li       r0, 1
	stb      r0, 0x30(r31)

lbl_8019EC90:
	lbz      r0, 0x20(r31)
	cmplwi   r0, 0
	bne      lbl_8019ECA8
	lwz      r0, 0x34(r31)
	cmpwi    r0, -1
	beq      lbl_8019ECC0

lbl_8019ECA8:
	lwz      r3, 4(r31)
	lfs      f1, 0x58(r31)
	lwz      r3, 0xc0(r3)
	lfs      f0, 0x890(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8019ECDC

lbl_8019ECC0:
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019ECC8:
	lbz      r0, 0x20(r31)
	cmplwi   r0, 0
	bne      lbl_8019ECDC
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019ECDC:
	lbz      r0, 0x61(r31)
	cmplwi   r0, 0
	beq      lbl_8019ED18
	lbz      r0, 0x60(r31)
	cmplwi   r0, 0
	bne      lbl_8019ED18
	lwz      r3, 4(r31)
	li       r4, 0x1e
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_8019ED18:
	li       r3, 1

lbl_8019ED1C:
	psq_l    f31, 440(r1), 0, qr0
	lfd      f31, 0x1b0(r1)
	psq_l    f30, 424(r1), 0, qr0
	lfd      f30, 0x1a0(r1)
	psq_l    f29, 408(r1), 0, qr0
	lfd      f29, 0x190(r1)
	psq_l    f28, 392(r1), 0, qr0
	lfd      f28, 0x180(r1)
	psq_l    f27, 376(r1), 0, qr0
	lfd      f27, 0x170(r1)
	psq_l    f26, 360(r1), 0, qr0
	lfd      f26, 0x160(r1)
	lwz      r31, 0x15c(r1)
	lwz      r30, 0x158(r1)
	lwz      r0, 0x1c4(r1)
	lwz      r29, 0x154(r1)
	mtlr     r0
	addi     r1, r1, 0x1c0
	blr
	*/
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
bool ActFormation::resumable() { return true; }

/**
 * @note Address: 0x8019EE3C
 * @note Size: 0x8
 */
u32 ActFormation::getNextAIType() { return mNextAIType; }

} // namespace PikiAI
