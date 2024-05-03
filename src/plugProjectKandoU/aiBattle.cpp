#include "PikiAI.h"
#include "Game/Piki.h"
#include "efx/TPk.h"
#include "efx/PikiDamage.h"
#include "PikiAI.h"
#include "Game/EnemyBase.h"
#include "Game/enemyInfo.h"
#include "Game/gameStat.h"
#include "Game/PikiState.h"
#include "Game/Footmark.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"
#include "utilityU.h"

namespace PikiAI {

#if MATCHING
static const char unusedAiBattleName[] = "aiBattle";
#endif

/**
 * @note Address: 0x8022ECB4
 * @note Size: 0xB8
 */
ActBattle::ActBattle(Game::Piki* piki)
    : Action(piki)
{
	mFlags       = 0;
	mName        = "Battle";
	mApproachPos = new ActApproachPos(piki);
}

/**
 * @note Address: 0x8022ED6C
 * @note Size: 0x44
 */
void ActBattle::emotion_success()
{
	Game::EmotionStateArg arg(1);
	mParent->mFsm->transit(mParent, Game::PIKISTATE_Emotion, &arg);
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
Action* ActBattle::getTekiAction()
{
	if (mOther && mOther->getCurrActionID() == PikiAI::ACT_Battle) {
		return mOther->getCurrAction();
	}

	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void ActBattle::send(BattleMessage& msg)
{
	// UNUSED/INLINED
}

/**
 * @note Address: N/A
 * @note Size: 0x11C
 */
void ActBattle::recv(BattleMessage& msg)
{
	ActBattle* battle = msg.mBattle;

	if (battle && battle->mState != BATTLE_Damage) {
		if (randFloat() > 0.5f) {
			if (battle->mOther && randFloat() > 0.9f) {
				battle->initApproach();

				Game::InteractFlick flick(battle->mOther, 60.0f, 0.0f, FLICK_BACKWARD_ANGLE);
				battle->mParent->stimulate(flick);
			} else {
				battle->initApproach();
			}
		}
	}
}

/**
 * @note Address: 0x8022EDB0
 * @note Size: 0x300
 */
void ActBattle::init(PikiAI::ActionArg* arg)
{
	bool isBattleArg = false;
	if (arg) {
		bool strCheck = strcmp("ActBattleArg", arg->getName()) == 0;
		if (strCheck) {
			isBattleArg = true;
		}
	}

	P2ASSERTLINE(179, isBattleArg);

	PikiAI::ActBattleArg* battleArg = static_cast<PikiAI::ActBattleArg*>(arg);

	mOther = battleArg->mAggressor;

	Game::InteractBattle battle(mParent);
	mOther->stimulate(battle);

	if (battleArg->mIsAttackStart) {
		setFlag(BATTLEFLAG_InBattle);
	} else if (mOther == mOther->getVsBattlePiki()) {
		setFlag(BATTLEFLAG_InBattle);
	} else {
		resetFlag(BATTLEFLAG_InBattle);
	}

	initApproach();
	mHitCount = 0;

	Vector3f midPoint = (mParent->getPosition() + mOther->getPosition());
	midPoint *= 0.5f;
	Sys::Sphere searchSphere(midPoint, 10.0f);
	Game::CellIteratorArg iterArg(searchSphere);
	iterArg.mOptimise = false;

	Game::CellIterator iter(iterArg);
	CI_LOOP(iter)
	{
		Game::Piki* piki = static_cast<Game::Piki*>(*iter);
		if (!piki->isPiki() || piki->getVsBattlePiki()) {
			continue;
		}

		Vector3f pushDir = piki->getPosition();
		pushDir          = pushDir - searchSphere.mPosition;
		pushDir.y        = 0.0f;
		pushDir.normalise();
		pushDir *= 50.0f;
		pushDir.y = 100.0f;
		Game::InteractWind wind(mParent, 0.0f, &pushDir);
		piki->stimulate(wind);
	}
}

/**
 * @note Address: 0x8022F0B0
 * @note Size: 0xEC
 */
int ActBattle::exec()
{
	if (!mOther || !mOther->isAlive() || mOther != mParent->getVsBattlePiki() || mParent != mOther->getVsBattlePiki()) {
		return ACTEXEC_Success;
	}

	if (!isFlag(BATTLEFLAG_InBattle)) {
		return ACTEXEC_Fail;
	}

	PSMGetPikiBattleD()->mVoteState++;

	switch (mState) {
	case BATTLE_Approach:
		execApproach();
		break;

	case BATTLE_Battle:
		execBattle();
		break;

	case BATTLE_Damage:
		execDamage();
		break;
	}

	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8022F19C
 * @note Size: 0xC
 */
void ActBattle::cleanup() { mOther = nullptr; }

/**
 * @note Address: 0x8022F1A8
 * @note Size: 0x4
 */
void ActBattle::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/**
 * @note Address: 0x8022F1AC
 * @note Size: 0x484
 */
void ActBattle::onKeyEvent(SysShape::KeyEvent const& event)
{
	if (mState == BATTLE_Battle) {
		switch (event.mType) {
		case KEYEVENT_2: {
			BattleMessage msg;
			msg.mBattle = static_cast<ActBattle*>(getTekiAction());
			recv(msg);

			if (mParent->doped()) {
				efx::TPkAttackDP dp;
				Vector3f offset = mParent->mLeafStemOffset;
				efx::Arg fxArg;
				fxArg.mPosition = offset;
				dp.create(&fxArg);

			} else {
				efx::PikiDamage pd;
				Vector3f offset = mParent->mLeafStemOffset;
				efx::Arg fxArg;
				fxArg.mPosition = offset;
				pd.create(&fxArg);
			}

			mParent->startSound(mOther, PSSE_PK_SE_ATTACKHIT, true);
		} break;

		case KEYEVENT_END: {
			initApproach();

			if (++mHitCount >= (int)(2.2f * randFloat()) + 6) { // hit cap is either 6, 7 or 8
				if (mOther && mOther->getVsBattlePiki() == mParent) {
					// this whole calculation ended up being unused, other piki dies either way
					f32 otherHappa = 0.5f * mOther->getHappa() + 1.0f;  // 1, 1.5, 2
					f32 thisHappa  = 0.5f * mParent->getHappa() + 1.0f; // 1, 1.5, 2

					if (mOther->doped()) {
						otherHappa = 2.5f;
					}

					if (mParent->doped()) {
						thisHappa = 2.5f;
					}

					// both result in the same outcome - would've been ~29% for leaf to kill spicy, up to ~74% for spicy to kill leaf
					if (randFloat() <= thisHappa / (thisHappa + otherHappa)) {
						Game::DyingStateArg arg;
						arg.mDoUseKillArg = true;
						mOther->mFsm->transit(mOther, Game::PIKISTATE_Dying, &arg);
					} else {
						Game::DyingStateArg arg;
						arg.mDoUseKillArg = true;
						mOther->mFsm->transit(mOther, Game::PIKISTATE_Dying, &arg);
					}
				} else {
					resetFlag(BATTLEFLAG_InBattle);
				}
			}
		} break;
		}
		return;
	}

	if (mState == BATTLE_Damage) {
		initApproach();
	}
}

/**
 * @note Address: 0x8022F630
 * @note Size: 0xBC
 */
void ActBattle::initApproach()
{
	if (mOther) {
		Vector3f pos = mOther->getPosition();

		// no time limit
		PikiAI::ApproachPosActionArg arg(pos, 10.0f, -1.0f);
		arg.mIsElasticSpeed = true;
		mApproachPos->init(&arg);
		mState = BATTLE_Approach;
	}
}

/**
 * @note Address: 0x8022F6EC
 * @note Size: 0x50
 */
int ActBattle::execApproach()
{
	if (mApproachPos->exec() == ACTEXEC_Success) {
		initBattle();
	}

	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8022F73C
 * @note Size: 0xC8
 */
void ActBattle::initBattle()
{
	mState = BATTLE_Battle;

	if (randFloat() > 0.5f) {
		mParent->startMotion(Game::IPikiAnims::PUNCH, Game::IPikiAnims::PUNCH, this, nullptr);
	} else {
		mParent->startMotion(Game::IPikiAnims::PUNCH2, Game::IPikiAnims::PUNCH2, this, nullptr);
	}
}

/**
 * @note Address: 0x8022F804
 * @note Size: 0xFC
 */
int ActBattle::execBattle()
{
	if (!mParent->assertMotion(Game::IPikiAnims::PUNCH) && !mParent->assertMotion(Game::IPikiAnims::PUNCH2)) {
		initApproach();
	}

	mParent->mTargetVelocity = Vector3f(0.0f);

	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8022F900
 * @note Size: 0xE8
 */
int ActBattle::execDamage()
{
	if (!mParent->assertMotion(Game::IPikiAnims::DAMAGE)) {
		initApproach();
	}

	mParent->mTargetVelocity = Vector3f(0.0f);

	return ACTEXEC_Continue;
}
} // namespace PikiAI
