#include "efx/PikiDamage.h"
#include "efx/TPk.h"
#include "efx/TWeedPull.h"
#include "Game/Entities/ItemWeed.h"
#include "Game/Piki.h"
#include "nans.h"
#include "PikiAI.h"
#include "string.h"

namespace PikiAI {

static const int unusedArray[] = { 0, 0, 0 };

/*
 * --INFO--
 * Address:	8020D784
 * Size:	00004C
 */
void ActWeed::getInfo(char* infoStringBuffer)
{
	const char* states[2] = { "SA", "AJ" }; // 0 = stick attack, 1 = adjust
	sprintf(infoStringBuffer, "Weed %s", states[mState]);
}

/*
 * --INFO--
 * Address:	8020D7D0
 * Size:	000094
 */
ActWeed::ActWeed(Game::Piki* parent)
    : Action(parent)
    , mFlockAttack(new ActFlockAttack(parent))
    , mApproachPos(new ActApproachPos(parent))
{
	mName = "Weed";
}

/*
 * --INFO--
 * Address:	8020D864
 * Size:	000170
 */
void ActWeed::init(ActionArg* arg)
{
	bool isWeedArg = false;
	if (arg) {
		bool strCheck = strcmp("ActWeedArg", arg->getName()) == 0;
		if (strCheck) {
			isWeedArg = true;
		}
	}
	P2ASSERTLINE(120, isWeedArg);
	ActWeedArg* weedArg = static_cast<ActWeedArg*>(arg);
	JUT_ASSERTLINE(124, arg, "no actweedarg");
	mWeed = weedArg->mWeed;
	JUT_ASSERTLINE(127, mWeed, "ActWeed:no target");
	mFlockMgr = mWeed->getFlockMgr();
	JUT_ASSERTLINE(130, mFlockMgr, "no flockmgr");
	mIsAttacking = false;

	if (mFlockMgr->isAttackable()) {
		mFlockMgr->mNumAttackers++;
		mIsAttacking = true;
	}

	decideTarget();
	initAdjust();
}

/*
 * --INFO--
 * Address:	8020D9D4
 * Size:	000068
 */
void ActWeed::decideTarget()
{
	Vector3f parentPos = mParent->getPosition();
	mTargetFlockIdx    = mFlockMgr->getNearestFlock(parentPos);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void ActWeed::initStickAttack()
{
	bool isWeed = mFlockMgr->isWeed(mTargetFlockIdx) > 0; // sigh
	f32 damage  = mParent->getAttackDamage();
	FlockAttackActionArg flockAttackActionArg(damage, isWeed, mWeed, mTargetFlockIdx);
	mFlockAttack->init(&flockAttackActionArg);
	mState = WEED_Attack;
}

/*
 * --INFO--
 * Address:	8020DA3C
 * Size:	000188
 */
void ActWeed::initAdjust()
{
	if (mTargetFlockIdx != -1) {
		calcAttackPos();
		f32 radius   = mFlockMgr->getRadius(mTargetFlockIdx);
		f32 modifier = 10.0f;
		if (mFlockMgr->isWeed(mTargetFlockIdx)) {
			modifier = 4.0f;
		}
		// no time limit
		ApproachPosActionArg approachPosActionArg(mAttackPosition, radius + modifier, -1.0f);
		mState = WEED_Adjust;
		mApproachPos->init(&approachPosActionArg);
	}
}

/*
 * --INFO--
 * Address:	8020DBC4
 * Size:	0000D0
 */
void ActWeed::calcAttackPos()
{
	if (mTargetFlockIdx != -1) {
		mAttackPosition = mFlockMgr->getPosition(mTargetFlockIdx);
	}
}

/*
 * --INFO--
 * Address:	8020DC94
 * Size:	000840
 */
int ActWeed::exec()
{
	if (!mIsAttacking) {
		return ACTEXEC_Fail;
	}
	if (mWeed == nullptr) {
		return ACTEXEC_Fail;
	}
	switch (mState) {
	case WEED_Attack: {
		int flockAttackResult = mFlockAttack->exec();
		if (flockAttackResult == ACTEXEC_Success) {
			if (!mWeed->isAlive()) {
				return ACTEXEC_Success;
			}
			decideTarget();
			initAdjust();
		} else if (flockAttackResult == ACTEXEC_Fail) {
			decideTarget();
			initAdjust();
		}
	} break;

	case WEED_Adjust: {
		if (mTargetFlockIdx == -1) {
			decideTarget();
			initAdjust();
		}
		if (!mWeed->isAlive()) {
			return ACTEXEC_Success;
		}
		calcAttackPos();
		mApproachPos->mGoalPosition = mAttackPosition;
		int approachResult          = mApproachPos->exec();
		if (approachResult == ACTEXEC_Success && mState == WEED_Adjust) {
			initStickAttack();
		}
	} break;
	}
	return ACTEXEC_Continue;
}

/*
 * --INFO--
 * Address:	8020E4D4
 * Size:	000068
 */
void ActWeed::cleanup()
{
	switch (mState) {
	case WEED_Attack:
		mFlockAttack->cleanup();
	}

	if (mIsAttacking) {
		mFlockMgr->mNumAttackers--;
	}
}

/*
 * --INFO--
 * Address:	8020E53C
 * Size:	000004
 */
void ActWeed::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	8020E540
 * Size:	000088
 */
ActFlockAttack::ActFlockAttack(Game::Piki* parent)
    : Action(parent)
    , MotionListener()
{
	mTarget = nullptr;
}

/*
 * --INFO--
 * Address:	8020E5C8
 * Size:	000138
 */
void ActFlockAttack::init(ActionArg* arg)
{
	bool isFlockArg = false;
	if (arg) {
		bool strCheck = strcmp("FlockAttackActionArg", arg->getName()) == 0;
		if (strCheck) {
			isFlockArg = true;
		}
	}
	P2ASSERTLINE(276, isFlockArg);
	FlockAttackActionArg* flockArg = static_cast<FlockAttackActionArg*>(arg);

	mTarget     = nullptr;
	mTarget     = flockArg->mTarget;
	mDamage     = flockArg->mDamage;
	mFlockIndex = flockArg->mFlockIndex;
	if (flockArg->mType == Game::ItemWeed::WEEDTYPE_Grass) {
		mWeedType = Game::ItemWeed::WEEDTYPE_Grass;
		mAnimIdx  = Game::IPikiAnims::NUKU;
	} else {
		mAnimIdx  = Game::IPikiAnims::ATTACK1;
		mWeedType = Game::ItemWeed::WEEDTYPE_Stone;
	}
	mParent->startMotion(mAnimIdx, mAnimIdx, this, nullptr);
	mFlags.clear();
	mParent->mVelocity = Vector3f(0.0f);
}

/*
 * --INFO--
 * Address:	8020E700
 * Size:	000324
 */
int ActFlockAttack::exec()
{
	if (!mTarget) {
		return ACTEXEC_Success;
	}
	if (!mTarget->isAlive()) {
		return ACTEXEC_Success;
	}
	if (isFlag(FLOCK_AnimFinished)) {
		int result = ACTEXEC_Fail;
		if (isFlag(FLOCK_Dead)) {
			result = ACTEXEC_Success;
		}
		return result;
	}
	if (!mParent->assertMotion(mAnimIdx)) {
		return ACTEXEC_Fail;
	}
	if (isFlag(FLOCK_AttackReady) && !isFlag(FLOCK_AttackFinished)) {
		int idx = mFlockIndex;
		Game::InteractFlockAttack interaction(mParent, idx, mDamage, false);
		if (mTarget->stimulate(interaction)) {
			// we're hitting rocks/stone
			if (mWeedType == Game::ItemWeed::WEEDTYPE_Stone) {
				mParent->startSound(mTarget, PSSE_PK_SE_HIT_STONE, true);
				if (mParent->doped()) { // doped attack
					efx::TPkAttackDP dp;
					Vector3f offset = mParent->mLeafStemOffset;
					efx::Arg arg;
					arg.mPosition = offset;
					dp.create(&arg);

				} else { // regular attack
					efx::PikiDamage pd;
					Vector3f offset = mParent->mLeafStemOffset;
					efx::Arg arg;
					arg.mPosition = offset;
					pd.create(&arg);
				}

				// we're plucking grass
			} else {
				efx::Arg arg;
				arg.mPosition = interaction.mFlockPosition;
				efx::TWeedPull wp;
				wp.create(&arg);
				mParent->startSound(mTarget, PSSE_PK_SE_PULL_GRASS, true);
			}
			if (interaction.mIsFlockDead) {
				setFlag(FLOCK_Dead);
			}
			setFlag(FLOCK_AttackFinished);
		}
	}
	return ACTEXEC_Continue;
}

/*
 * --INFO--
 * Address:	8020EA24
 * Size:	000064
 */
void ActFlockAttack::onKeyEvent(SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.mType) {
	case KEYEVENT_2:
		setFlag(FLOCK_AttackReady);
		break;
	case KEYEVENT_3:
		resetFlag(FLOCK_AttackReady);
		resetFlag(FLOCK_AttackFinished);
		break;
	case KEYEVENT_END:
		setFlag(FLOCK_AnimFinished);
		break;
	default:
		break;
	}
}

/*
 * --INFO--
 * Address:	8020EA88
 * Size:	00000C
 */
void ActFlockAttack::cleanup() { mTarget = nullptr; }

} // namespace PikiAI
