#include "Dolphin/rand.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/PikiMgr.h"
#include "Game/Stickers.h"
#include "Game/gameStat.h"
#include "Game/pelletMgr.h"
#include "Game/Piki.h"
#include "Game/PikiState.h"
#include "PikiAI.h"

namespace PikiAI {

static const char unusedName[] = "actTransport";

/**
 * @note Address: 0x801A1914
 * @note Size: 0x64
 */
void ActTransport::getInfo(char* infoStringBuffer)
{
	char* stateName[3] = { "SLOT", "LIFT", "MOVE" };
	sprintf(infoStringBuffer, "CARRY %s", stateName[mState]);
}

/**
 * @note Address: 0x801A1978
 * @note Size: 0xD0
 */
ActTransport::ActTransport(Game::Piki* parent)
    : Action(parent)
    , mGotoSlot(new ActGotoSlot(parent))
    , mPathMove(new ActPathMove(parent))
{
	mName = "Carry";
}

/**
 * @note Address: 0x801A1A48
 * @note Size: 0x17C
 */
void ActTransport::init(ActionArg* settings)
{
	Game::GameStat::workPikis.inc(mParent);

	bool isTportArg = false;
	if (settings) {
		bool strCheck = strcmp("ActTransportArg", settings->getName()) == 0;
		if (strCheck) {
			isTportArg = true;
		}
	}
	P2ASSERTLINE(175, isTportArg);

	ActTransportArg* arg = static_cast<ActTransportArg*>(settings);

	mPellet = arg->mPellet;
	mGoal   = arg->mGoal;
	_1C     = arg->mUnusedPos;
	_28     = arg->mUnusedSlotVal;

	mParent->startMotion(Game::IPikiAnims::WAIT, Game::IPikiAnims::WAIT, nullptr, nullptr);
	mParent->mTargetVelocity = Vector3f(0.0f);
	mState                   = TRANSPORT_Slot;

	GotoSlotArg gotoSlotArg(mPellet, SLOTSEARCH_Nearest);
	mGotoSlot->init(&gotoSlotArg);

	mIsLiftAnimReady  = false;
	mIsPathMoveActive = false;
	mIsMoving         = false;
	mIsCaptured       = true;
}

/**
 * @note Address: 0x801A1BC4
 * @note Size: 0x44
 */
void ActTransport::emotion_success()
{
	Game::EmotionStateArg emotionArg(1);
	mParent->mFsm->transit(mParent, Game::PIKISTATE_Emotion, &emotionArg);
}

/**
 * @note Address: 0x801A1C08
 * @note Size: 0x4
 */
void ActTransport::emotion_fail() { }

/**
 * @note Address: 0x801A1C0C
 * @note Size: 0x3E8
 */
int ActTransport::exec()
{
	if (mPellet && !mPellet->isAlive()) {
		P2DEBUG("dead pellet: %d", mParent->getCreatureID());
		return ACTEXEC_Success;
	}

	bool isCaptured;
	if (mPellet && mPellet->mCaptureMatrix) {
		isCaptured = true;
	} else {
		isCaptured = false;
	}

	switch (mState) {
	case TRANSPORT_Slot: {
		if (isCaptured) {
			mIsCaptured = isCaptured;
			return ACTEXEC_Fail;
		}
		int gotoSlotResult = mGotoSlot->exec();
		if (gotoSlotResult == ACTEXEC_Success) {
			initLift();
		} else if (gotoSlotResult == ACTEXEC_Fail) {
			mIsCaptured = isCaptured;
			return ACTEXEC_Fail;
		}
	} break;

	case TRANSPORT_Lift: {
		if (!isCaptured) {
			mIsCaptured = isCaptured;
			return execLift();
		}
		mIsCaptured = isCaptured;
		return ACTEXEC_Continue;
	} break;

	case TRANSPORT_Move: {
		if (isCaptured) {
			if (!mParent->isStickTo()) {
				if (mIsPathMoveActive) {
					mPathMove->cleanup();
					mIsPathMoveActive = false;
				}
				mParent->finishMotion();
				mIsCaptured = isCaptured;
				return ACTEXEC_Success;
			}
			mIsCaptured = isCaptured;
			return ACTEXEC_Continue;
		}
		if (mIsCaptured && mIsMoving) {
			mPathMove->cleanup();
			mIsMoving = false;
		}
		Game::Pellet* pellet = mPellet;
		int carryingCount    = pellet->getTotalCarryPikmins();
		int requiredCount    = pellet->getPelletConfigMin();
		if (carryingCount < requiredCount) {
			mPellet->endPick(false);
			pellet->setVelocity(Vector3f::zero);
			mIsCaptured = isCaptured;
			return ACTEXEC_Fail;
		}
		if (isStickLeader()) {
			if (!mIsMoving) {
				P2DEBUG("%s %d", static_cast<Game::Creature*>(mPellet)->getCreatureName(), mPellet->getCreatureID());
				PathMoveArg pathMoveArg(mPellet, _1C, _28, 0);
				mPathMove->init(&pathMoveArg);
				mIsMoving = true;
			}
			int pathMoveResult = mPathMove->exec();
			mIsPathMoveActive  = true;
			if (pathMoveResult == ACTEXEC_Success) {
				mGoal = mPathMove->mOnyon;
				mPellet->endPick(true);
				Game::InteractSuck interaction(mGoal);
				mPellet->stimulate(interaction);
				mIsCaptured = isCaptured;
				return ACTEXEC_Success;
			}
		} else {
			if (!mParent->isStickTo()) {
				if (mIsPathMoveActive) {
					mPathMove->cleanup();
					mIsPathMoveActive = false;
				}
				mParent->finishMotion();
				mIsCaptured = isCaptured;
				return ACTEXEC_Success;
			}
			if (mIsMoving) {
				mPathMove->cleanup();
				mIsMoving = false;
			}
		}
	} break;
	}
	mIsCaptured = isCaptured;
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x801A1FF4
 * @note Size: 0x78
 */
void ActTransport::cleanup()
{
	if (mIsMoving) {
		mPathMove->cleanup();
	}
	Game::GameStat::workPikis.dec(mParent);
	mParent->endStick();
	Vector3f position = mParent->getPosition();
	P2DEBUG("ActTransport stopped at {%d, %d, %d}!", position.x, position.y, position.z);
}

/**
 * @note Address: 0x801A206C
 * @note Size: 0x11C
 */
void ActTransport::onKeyEvent(SysShape::KeyEvent const& keyEvent)
{
	s16 animID = Game::IPikiAnims::AKUBI;
	if (mParent->mAnimator.mSelfAnimator.mAnimInfo != nullptr) {
		animID = mParent->mAnimator.mSelfAnimator.mAnimInfo->mId;
	}

	switch (keyEvent.mType) {
	case KEYEVENT_2:
		if (animID == Game::IPikiAnims::PICKLOOP) {
			mIsLiftAnimReady = true;
		}
		break;

	case KEYEVENT_LOOP_END: {
		Game::Pellet* pellet = mPellet;
		if (pellet->isPicked()) {
			mParent->startSound(pellet, PSSE_PK_VC_LIFT_MOVE, PSGame::SeMgr::SETSE_PikiCarry);
		}
		if (mState == TRANSPORT_Lift) {
			int carryingCount = mPellet->getTotalCarryPikmins();
			int requiredCount = mPellet->getPelletConfigMin();
			if (carryingCount < requiredCount) {
				mLiftTimer--;
				if (mLiftTimer < 0) {
					mParent->finishMotion();
				}
			}
		}
	} break;

	case KEYEVENT_END:
		if (mState == TRANSPORT_Lift) {
			initLift();
		}
		break;
	}
}

/**
 * @note Address: 0x801A2188
 * @note Size: 0x9C
 */
bool ActTransport::isStickLeader()
{
	if (mParent->mSticker) {
		Game::Creature* piki = nullptr;
		for (Game::Creature* stuck = mParent->mSticker->mSticked; stuck; stuck = stuck->mCaptured) {
			if (stuck->isPiki()) {
				piki = stuck;
				break;
			}
		}
		if (piki == mParent) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x801A2224
 * @note Size: 0xBC
 */
void ActTransport::initLift()
{
	mState = TRANSPORT_Lift;
	mParent->startMotion(Game::IPikiAnims::PICKLOOP, Game::IPikiAnims::PICKLOOP, this, nullptr);
	mIsLiftAnimReady = false;
	mLiftTimer       = randFloat() * 3.0f + 5.0f;
	mParent->startSound(mPellet, PSSE_PK_VC_LIFT_TRY, PSGame::SeMgr::SETSE_PikiCarry);
}

/**
 * @note Address: 0x801A22E0
 * @note Size: 0x414
 */
int ActTransport::execLift()
{
	if (!mParent->assertMotion(Game::IPikiAnims::PICKLOOP)) {
		return ACTEXEC_Fail;
	}

	int carryCapacity = 0;

	Game::Stickers stickers(mPellet);
	Iterator<Game::Creature> iter(&stickers);
	CI_LOOP(iter)
	{
		Game::Creature* creature = *iter;
		if (creature->isPiki()) {
			Game::Piki* piki = static_cast<Game::Piki*>(creature);
			if (piki->getCurrActionID() == ACT_Transport && static_cast<ActTransport*>(piki->getCurrAction())->mIsLiftAnimReady) {
				carryCapacity += Game::pikiMgr->getColorTransportScale(piki->getKind());
			}
		}
	}

	Game::Pellet* pellet = mPellet;
	if (mIsLiftAnimReady && carryCapacity >= pellet->getPelletConfigMin()) {
		mParent->startMotion(Game::IPikiAnims::PICK_PUT, Game::IPikiAnims::PICK_PUT, this, nullptr);
		mParent->enableMotionBlend();
		mParent->mAnimator.mSelfAnimator.setCurrFrame(11.0f);
		mParent->mAnimator.mBoundAnimator.setCurrFrame(11.0f);
		mState = TRANSPORT_Move;
		if (isStickLeader()) {
			if (!mPellet->isPicked()) {
				mParent->startSound(mPellet, PSSE_PK_VC_LIFT_SUCCESS, false);
			}
			mPellet->startPick();
			PathMoveArg pathMoveArg(mPellet, _1C, _28, 0);
			mPathMove->init(&pathMoveArg);
			mIsMoving = true;
		}
	}
	return ACTEXEC_Continue;
}
} // namespace PikiAI
