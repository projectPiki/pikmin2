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
/*
 * --INFO--
 * Address:	802312F4
 * Size:	000098
 */
ActBore::ActBore(Game::Piki* piki)
    : Action(piki)
{
	mActions[BORE_Rest]    = new ActRest(piki);
	mActions[BORE_Oneshot] = new ActOneshot(piki);
}

/*
 * --INFO--
 * Address:	8023138C
 * Size:	000080
 */
void ActBore::init(ActionArg* arg)
{
	mRandBehaviorType = randFloat() * BORE_BEHAVIOURS_FLOAT; // choose random behaviour between 0 and 1 (rounds down)
	mOneshotTimer     = 0.0f;
	startCurrAction();
	mFlag.clear();
}

/*
 * --INFO--
 * Address:	8023140C
 * Size:	000180
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

/*
 * --INFO--
 * Address:	8023158C
 * Size:	00007C
 */
void ActBore::finish()
{
	P2ASSERTLINE(70, mRandBehaviorType < BORE_BehaviourCount);
	mActions[mRandBehaviorType]->finish();
	setFlag(BOREFLAG_Finished);
}

/*
 * --INFO--
 * Address:	80231608
 * Size:	000294
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

/*
 * --INFO--
 * Address:	8023189C
 * Size:	000004
 */
void ActBore::cleanup() { }

/*
 * --INFO--
 * Address:	802318A0
 * Size:	00009C
 */
ActRest::ActRest(Game::Piki* piki)
    : ActBoreBase(piki)
{
}

/*
 * --INFO--
 * Address:	8023193C
 * Size:	00001C
 */
void ActRest::finish()
{
	setFlag(RESTFLAG_ForceFinish);
	mParent->mAnimSpeed = 60.0f;
}

/*
 * --INFO--
 * Address:	80231958
 * Size:	000080
 */
void ActRest::init(ActionArg* arg)
{
	mState = REST_Start;
	sitDown();
	mTimer = randFloat() * 4.0f + 5.0f; // 4-9s
	mFlag.clear();
	mParent->mAnimSpeed = 30.0f;
}

/*
 * --INFO--
 * Address:	802319D8
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	80231A90
 * Size:	000330
 */
int ActRest::exec()
{
	if (isFlag(RESTFLAG_CanInterrupt)) {
		return ACTEXEC_Success;
	}

	mParent->mVelocity = Vector3f(0.0f);

	if (mParent->getAnimSpeed() == 0.0f) {
		mParent->mAnimSpeed = 30.0f;
	}

	int animIdx;
	if (mParent->mAnimator.mSelfAnimator.mAnimInfo) {
		animIdx = mParent->mAnimator.mSelfAnimator.mAnimInfo->mId;
	} else {
		animIdx = Game::IPikiAnims::NULLANIM;
	}

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

		if (mParent->mAnimator.mSelfAnimator.mFlags & 1) {
			resetFlag(RESTFLAG_IsIdle);
			if (mState == REST_Sleep) {
				mState = REST_Sit;
				mParent->startMotion(Game::IPikiAnims::SUWARU, Game::IPikiAnims::SUWARU, this, nullptr);
				mParent->mAnimator.mSelfAnimator.setFrameByKeyType(KEYEVENT_NULL);
				mParent->mAnimator.mBoundAnimator.setFrameByKeyType(KEYEVENT_NULL);
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

/*
 * --INFO--
 * Address:	80231DC0
 * Size:	000004
 */
void ActRest::cleanup() { }

/*
 * --INFO--
 * Address:	80231DC4
 * Size:	0001F4
 */
void ActRest::onKeyEvent(SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_1:
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
				mParent->mAnimator.mSelfAnimator.setFrameByKeyType(KEYEVENT_NULL);
				mParent->mAnimator.mBoundAnimator.setFrameByKeyType(KEYEVENT_NULL);
				break;
			}
		}
		break;
	}
}

/*
 * --INFO--
 * Address:	80231FB8
 * Size:	0000BC
 */
ActOneshot::ActOneshot(Game::Piki* piki)
    : ActBoreBase(piki)
{
}

/*
 * --INFO--
 * Address:	80232074
 * Size:	000094
 */
void ActOneshot::init(ActionArg* arg)
{
	P2ASSERTLINE(267, arg);
	ActOneshotArg* sarg = static_cast<ActOneshotArg*>(arg);
	mOneshotArg.mAnimID = sarg->mAnimID;
	mParent->startMotion(mOneshotArg.mAnimID, mOneshotArg.mAnimID, this, nullptr);
	mFlag.clear();
}

/*
 * --INFO--
 * Address:	80232108
 * Size:	000048
 */
void ActOneshot::finish()
{
	mParent->mAnimSpeed = 60.0f;
	mParent->finishMotion();
	setFlag(ONESHOTFLAG_ForceFinish);
}

/*
 * --INFO--
 * Address:	80232150
 * Size:	000070
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

/*
 * --INFO--
 * Address:	802321C0
 * Size:	000004
 */
void ActOneshot::cleanup() { }

/*
 * --INFO--
 * Address:	802321C4
 * Size:	000150
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
