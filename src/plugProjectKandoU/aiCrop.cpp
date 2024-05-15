#include "Dolphin/rand.h"
#include "Game/Piki.h"
#include "Game/gameStat.h"
#include "Game/Entities/ItemPlant.h"
#include "PikiAI.h"
#include "types.h"

static const char unusedName[] = "actBreakWall";

namespace PikiAI {

/**
 * @note Address: 0x801E3E50
 * @note Size: 0xD4
 */
ActCrop::ActCrop(Game::Piki* parent)
    : Action(parent)
{
	mStickAttack = new ActStickAttack(parent);
	mGotoPos     = new ActGotoPos(parent);
	mName        = "Crop";
}

/**
 * @note Address: 0x801E3F24
 * @note Size: 0x108
 */
void ActCrop::init(ActionArg* arg)
{
	bool isCropArg = false;
	if (arg) {
		bool strCheck = strcmp("ActCropArg", arg->getName()) == 0;
		if (strCheck) {
			isCropArg = true;
		}
	}
	P2ASSERTLINE(69, isCropArg);

	ActCropArg* cropArg = static_cast<ActCropArg*>(arg);

	Game::GameStat::workPikis.inc(mParent);

	mCreature = cropArg->mCreature;
	mCollPart = nullptr;

	if (mParent->isStickTo() && mParent->mStuckCollPart->mCurrentID.match('tops', '*')) {
		initAttack();
	} else {
		initGoto();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void ActCrop::initClimb()
{
	mState    = CROP_Climb;
	mCollPart = mCreature->mCollTree->mPart->getChild();
	prepareClimb();
}

/**
 * @note Address: N/A
 * @note Size: 0x114
 */
void ActCrop::prepareClimb()
{
	mParent->startMotion(Game::IPikiAnims::HNOBORU, Game::IPikiAnims::HNOBORU, nullptr, nullptr);
	mParent->endStick();
	mParent->startStick(mCreature, mCollPart);

	Sys::Tube tube;
	mCollPart->getTube(tube);
	tube.getAxisVector(mClimbDirection);

	f32 len = tube.mStartPos.distance(tube.mEndPos);
	P2ASSERTLINE(102, len > 0.0f);
	mPlantHeightRatio = 1.0f / len;
}

/**
 * @note Address: 0x801E402C
 * @note Size: 0x2C8
 */
int ActCrop::execClimb()
{
	// climb up at 25 unit speed
	mParent->mVelocity = mClimbDirection * 25.0f;
	mParent->move(sys->mDeltaTime);

	if (mParent->mClimbingPosition.y > 1.0f - (2.0f * mPlantHeightRatio)) {
		if (mCollPart->getChild() && mCollPart->getChild()->mPartType == COLLTYPE_TUBETREE) {
			mCollPart = mCollPart->getChild();
			prepareClimb();
		} else {
			initAttack();
		}
	} else if (mParent->mClimbingPosition.y < -(2.0f * mPlantHeightRatio)) {
		if (mCollPart->getParent() && mCollPart->getParent()->mPartType == COLLTYPE_TUBETREE) {
			mCollPart = mCollPart->getParent();
			prepareClimb();
		} else {
			return ACTEXEC_Fail;
		}
	}

	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x801E42F4
 * @note Size: 0x98
 */
void ActCrop::initGoto()
{
	Vector3f creaturePosition = mCreature->getPosition();
	GotoPosActionArg gotoPosArg;
	gotoPosArg.mPosition = creaturePosition;
	gotoPosArg.mRadius   = 20.0f;
	mGotoPos->init(&gotoPosArg);
	mState = CROP_Goto;
}

/**
 * @note Address: 0x801E438C
 * @note Size: 0xFC
 */
void ActCrop::initAttack()
{
	CollPart* part = mCreature->mCollTree->getCollPart('tops');
	if (part) {
		mParent->endStick();
		mAttackDir = randFloat() * TAU;
		mParent->startStick(mCreature, part);
	}
	f32 damage = mParent->getAttackDamage();
	StickAttackActionArg stickAttackArg(damage, mCreature, Game::IPikiAnims::NULLANIM, 0);
	mStickAttack->init(&stickAttackArg);
	mState               = CROP_Attack;
	mIsDirectionReversed = true;
}

/**
 * @note Address: 0x801E4488
 * @note Size: 0x6AC
 */
int ActCrop::exec()
{
	switch (mState) {
	case CROP_Attack:
		// if no berries to attack, fall off plant in some random direction
		if (!static_cast<Game::ItemPlant::Plant*>(mCreature)->hasFruits()) {
			f32 randAngle      = TAU * randFloat();
			mParent->mVelocity = Vector3f(sinf(randAngle) * 40.0f, 200.0f, cosf(randAngle) * 40.0f);
			return ACTEXEC_Fail;
		}

		Vector3f unitXZVel = getDirection(mAttackDir);
		CollPart* part     = mCreature->mCollTree->getCollPart('tops');
		Vector3f sep       = mParent->getPosition() - part->mPosition;
		sep.normalise();
		Vector3f unitYVel(0.0f, 1.0f, 0.0f);

		f32 horizComp = unitXZVel.dot(sep);
		f32 yComp     = unitYVel.dot(sep);
		f32 negYComp  = -yComp;
		mParent->endStick();

		if (mIsDirectionReversed) {
			if (yComp > 0.9f) {
				mIsDirectionReversed = false;
			}
		} else {
			if (yComp < -0.9f) {
				mIsDirectionReversed = true;
			}
			horizComp = -horizComp;
		}

		// weird weighting but sure
		Vector3f horizVel  = unitXZVel * negYComp;
		Vector3f vertVel   = unitYVel * horizComp;
		mParent->mVelocity = horizVel + vertVel;
		mParent->mVelocity = mParent->mVelocity * 10.0f;
		mParent->move(sys->mDeltaTime);

		mParent->startStick(mCreature, part);

		// once attacking, keep attacking (until no more berries)
		if (mStickAttack->exec() == ACTEXEC_Success) {
			initAttack();
		}
		break;

	case CROP_Climb:
		int res = execClimb();
		if (res == ACTEXEC_Success) {
			initAttack();
			return ACTEXEC_Continue;
		}
		return res;

	case CROP_Goto:
		if (mGotoPos->exec() == ACTEXEC_Success) {
			initClimb();
		}
		break;
	}

	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x801E4B34
 * @note Size: 0x40
 */
void ActCrop::cleanup()
{
	Game::GameStat::workPikis.dec(mParent);
	mParent->endStick();
}

/**
 * @note Address: 0x801E4B74
 * @note Size: 0x4
 */
void ActCrop::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/**
 * @note Address: 0x801E4B78
 * @note Size: 0x4
 */
void ActCrop::onKeyEvent(const SysShape::KeyEvent&) { }

} // namespace PikiAI
