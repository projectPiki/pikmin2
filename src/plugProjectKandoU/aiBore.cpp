#include "PikiAI.h"
#include "Dolphin/rand.h"
#include "KandoLib/Choice.h"
#include "Game/Piki.h"
#include "System.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSScene.h"
#include "PSM/Scene.h"

#define BORE_BEHAVIOURS_FLOAT (2.0f) // what behaviours to randomly choose between - should match BORE_BehaviourCount

namespace PikiAI {
/**
 * @note Address: 0x802312F4
 * @note Size: 0x98
 */
ActBore::ActBore(Game::Piki* piki)
    : Action(piki)
{
	mActions[BORE_Rest]    = new ActRest(piki);
	mActions[BORE_Oneshot] = new ActOneshot(piki);
}

/**
 * @note Address: 0x8023138C
 * @note Size: 0x80
 */
void ActBore::init(ActionArg* arg)
{
	mRandBehaviorType = randFloat() * BORE_BEHAVIOURS_FLOAT; // choose random behaviour between 0 and 1 (rounds down)
	mOneshotTimer     = 0.0f;
	startCurrAction();
	mFlag.clear();
}

/**
 * @note Address: 0x8023140C
 * @note Size: 0x180
 */
void ActBore::startCurrAction()
{
	P2ASSERTLINE(39, mRandBehaviorType < BORE_BehaviourCount);
	if (mOneshotTimer < 2.0f) {
		mRandBehaviorType = BORE_Oneshot;
	}

	switch (mRandBehaviorType) {
	case BORE_Rest:
		mActions[mRandBehaviorType]->init(nullptr);
		break;

	case BORE_Oneshot: // do a silly little action.
		ActOneshotArg arg;
		KandoLib::Choice choice[] = {
			{ Game::IPikiAnims::AKUBI, 0.05f },    // yawn, 5% chance
			{ Game::IPikiAnims::CHATTING, 0.35f }, // chatting, 35% chance
			{ Game::IPikiAnims::SAGASU2, 0.4f },   // look around, 40% chance
			{ Game::IPikiAnims::IRAIRA, 0.1f },    // frustrated, 20% chance (inc. fall-through 10% from not adding up to 1)
		};

		arg.mAnimID = KandoLib::getRandomChoice(choice, ARRAY_SIZE(choice));
		mActions[mRandBehaviorType]->init(&arg);
		break;
	}

	mForceFinishTimer = randFloat() * 6.0f + 6.0f;
}

/**
 * @note Address: 0x8023158C
 * @note Size: 0x7C
 */
void ActBore::finish()
{
	P2ASSERTLINE(70, mRandBehaviorType < BORE_BehaviourCount);
	mActions[mRandBehaviorType]->finish();
	setFlag(BOREFLAG_Finished);
}

/**
 * @note Address: 0x80231608
 * @note Size: 0x294
 */
int ActBore::exec()
{
	if (mOneshotTimer < 2.0f) {
		mOneshotTimer += sys->mDeltaTime;
	}

	P2ASSERTLINE(81, mRandBehaviorType < BORE_BehaviourCount);
	int actionResult = mActions[mRandBehaviorType]->exec();
	if (actionResult == ACTEXEC_Success || actionResult == ACTEXEC_Fail) {
		if (isFlag(BOREFLAG_Finished)) {
			return ACTEXEC_Success;
		}
		mRandBehaviorType = randFloat() * BORE_BEHAVIOURS_FLOAT;
		startCurrAction();

	} else {
		mForceFinishTimer -= sys->mDeltaTime;
		if (mForceFinishTimer <= 0.0f) {
			mActions[mRandBehaviorType]->finish();
		}
	}
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8023189C
 * @note Size: 0x4
 */
void ActBore::cleanup() { }

/**
 * @note Address: 0x802318A0
 * @note Size: 0x9C
 */
ActRest::ActRest(Game::Piki* piki)
    : ActBoreBase(piki)
{
}

/**
 * @note Address: 0x8023193C
 * @note Size: 0x1C
 */
void ActRest::finish()
{
	setFlag(RESTFLAG_ForceFinish);
	mParent->mAnimSpeed = 60.0f;
}

/**
 * @note Address: 0x80231958
 * @note Size: 0x80
 */
void ActRest::init(ActionArg* arg)
{
	mState = REST_Start;
	sitDown();
	mTimer = randFloat() * 4.0f + 5.0f; // 4-9s
	mFlag.clear();
	mParent->mAnimSpeed = 30.0f;
}

/**
 * @note Address: 0x802319D8
 * @note Size: 0xB8
 */
void ActRest::sitDown()
{
	switch (mState) {
	case REST_Start:
		mParent->startMotion(Game::IPikiAnims::SUWARU, Game::IPikiAnims::SUWARU, this, nullptr);
		mState = REST_Sit;
		break;

	case REST_Sit:
		mParent->startMotion(Game::IPikiAnims::NERU, Game::IPikiAnims::NERU, this, nullptr);
		mState = REST_Sleep;
		break;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void ActRest::standUp()
{
	switch (mState) {
	case REST_Sit:
		mParent->finishMotion();
		setFlag(RESTFLAG_IsIdle);
		break;

	case REST_Sleep:
		mParent->finishMotion();
		setFlag(RESTFLAG_IsIdle);
		break;
	}
}

/**
 * @note Address: 0x80231A90
 * @note Size: 0x330
 */
int ActRest::exec()
{
	if (isFlag(RESTFLAG_CanInterrupt)) {
		return ACTEXEC_Success;
	}

	mParent->mTargetVelocity = Vector3f(0.0f);

	if (mParent->getAnimSpeed() == 0.0f) {
		mParent->mAnimSpeed = 30.0f;
	}

	int animIdx = mParent->mAnimator.mSelfAnimator.getAnimIndex();

	if (animIdx != Game::IPikiAnims::NERU && animIdx != Game::IPikiAnims::SUWARU) {
		return ACTEXEC_Fail;
	}

	if (isFlag(RESTFLAG_ForceFinish)) {
		if (!isFlag(RESTFLAG_IsIdle)) {
			if (mState >= REST_Sit) {
				standUp();
				return ACTEXEC_Continue;
			}
			return ACTEXEC_Success;
		}

		if (mParent->mAnimator.mSelfAnimator.isFlag(SysShape::Animator::AnimCompleted)) {
			resetFlag(RESTFLAG_IsIdle);
			if (mState == REST_Sleep) {
				mState = REST_Sit;
				mParent->startMotion(Game::IPikiAnims::SUWARU, Game::IPikiAnims::SUWARU, this, nullptr);
				mParent->mAnimator.mSelfAnimator.setFrameByKeyType(KEYEVENT_LOOP_START);
				mParent->mAnimator.mBoundAnimator.setFrameByKeyType(KEYEVENT_LOOP_START);
			}
		}
		return ACTEXEC_Continue;
	}

	mTimer -= sys->mDeltaTime;

	// after 4-9s (or 2-5s on repeat), piki has a 50% chance to sit "further" down (start -> sit, sit -> sleep), or get up.
	if (!isFlag(RESTFLAG_IsIdle) && mTimer < 0.0f) {
		if (mState <= REST_Sit && randFloat() > 0.5f) {
			sitDown();

			// otherwise, if it's lying down
		} else if (mState >= REST_Sit) {
			standUp();
		}

		mTimer = 2.0f * randFloat() + 3.0f; // timer reset to between 2-5s
	}

	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x80231DC0
 * @note Size: 0x4
 */
void ActRest::cleanup() { }

/**
 * @note Address: 0x80231DC4
 * @note Size: 0x1F4
 */
void ActRest::onKeyEvent(SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_LOOP_END:
		break;

	case KEYEVENT_200:
		if (PSMGetGameScene()->akubiOK()) {
			mParent->startSound(PSSE_PK_VC_SLEEP, true);
		}
		break;

	case KEYEVENT_END:
		if (isFlag(RESTFLAG_IsIdle)) {
			switch (mState) {
			case REST_Sit:
				resetFlag(RESTFLAG_IsIdle);
				mState = REST_Start;
				setFlag(RESTFLAG_CanInterrupt);
				break;

			case REST_Sleep:
				resetFlag(RESTFLAG_IsIdle);
				mState = REST_Sit;
				mParent->startMotion(Game::IPikiAnims::SUWARU, Game::IPikiAnims::SUWARU, this, nullptr);
				mParent->mAnimator.mSelfAnimator.setFrameByKeyType(KEYEVENT_LOOP_START);
				mParent->mAnimator.mBoundAnimator.setFrameByKeyType(KEYEVENT_LOOP_START);
				break;
			}
		}
		break;
	}
}

/**
 * @note Address: 0x80231FB8
 * @note Size: 0xBC
 */
ActOneshot::ActOneshot(Game::Piki* piki)
    : ActBoreBase(piki)
{
}

/**
 * @note Address: 0x80232074
 * @note Size: 0x94
 */
void ActOneshot::init(ActionArg* arg)
{
	P2ASSERTLINE(267, arg);
	ActOneshotArg* sarg = static_cast<ActOneshotArg*>(arg);
	mOneshotArg.mAnimID = sarg->mAnimID;
	mParent->startMotion(mOneshotArg.mAnimID, mOneshotArg.mAnimID, this, nullptr);
	mFlag.clear();
}

/**
 * @note Address: 0x80232108
 * @note Size: 0x48
 */
void ActOneshot::finish()
{
	mParent->mAnimSpeed = 60.0f;
	mParent->finishMotion();
	setFlag(ONESHOTFLAG_ForceFinish);
}

/**
 * @note Address: 0x80232150
 * @note Size: 0x70
 */
int ActOneshot::exec()
{
	Vector3f vel(0.0f);
	mParent->setCurrVelocity(vel);
	if (isFlag(ONESHOTFLAG_ForceFinish)) {
		return ACTEXEC_Success;
	}

	if (isFlag(ONESHOTFLAG_AnimFinished)) {
		return ACTEXEC_Success;
	}

	int animIdx = mParent->mAnimator.mSelfAnimator.getAnimIndex();
	if (mOneshotArg.mAnimID != animIdx) {
		return ACTEXEC_Fail;
	}

	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x802321C0
 * @note Size: 0x4
 */
void ActOneshot::cleanup() { }

/**
 * @note Address: 0x802321C4
 * @note Size: 0x150
 */
void ActOneshot::onKeyEvent(SysShape::KeyEvent const& event)
{
	if (event.mType == KEYEVENT_END) {
		setFlag(ONESHOTFLAG_AnimFinished);
	}
	if (event.mType != KEYEVENT_200 || mOneshotArg.mAnimID != Game::IPikiAnims::AKUBI) {
		return;
	}

	// if yawning, make yawn sound at appropriate time in animation.
	if (PSMGetGameScene()->akubiOK()) {
		mParent->mSoundObj->startFreePikiSound(PSSE_PK_VC_AKUBI, 90, 0);
	}
}

} // namespace PikiAI
