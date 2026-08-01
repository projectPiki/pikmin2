#include "Game/PikiState.h"
#include "Game/Piki.h"
#include "Game/PikiParms.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/NaviState.h"
#include "Game/NaviParms.h"
#include "Game/MapMgr.h"
#include "Game/rumble.h"
#include "Game/MoviePlayer.h"
#include "Game/DeathMgr.h"
#include "Game/CameraMgr.h"
#include "Game/Interaction.h"
#include "Game/AIConstants.h"
#include "Game/EnemyBase.h"
#include "Game/Entities/ItemPikihead.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/CPlate.h"
#include "efx/TPiku.h"
#include "efx/TPk.h"
#include "efx/TEnemyDive.h"
#include "KandoLib/Choice.h"
#include "P2Macros.h"
#include "PSM/Navi.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "System.h"
#include "PikiAI.h"
#include "nans.h"

namespace Game {

static const int someArray[3] = { 0, 0, 0 };
static const char fileName[]  = "pikiState";

/**
 * @note Address: N/A
 */
static inline f32 getVectorLength(f32 z, f32 x, f32 y)
{
	Vector2f sqr(z * z, x * x + y * y);
	f32 length = sqr.x + sqr.y;
	__sqrtf(length, &length);
	return length;
}

/**
 * @note Address: 0x80189378
 * @note Size: 0x4
 */
void PikiState::dump()
{
}

/**
 * @note Address: 0x8018937C
 * @note Size: 0x30
 */
void PikiState::getInfo(char* string)
{
	sprintf(string, "%s", mName);
}

/**
 * @note Address: 0x801893AC
 * @note Size: 0xB6C
 */
void PikiFSM::init(Piki* piki)
{
	create(PIKISTATE_Count);
	registerState(new PikiWalkState);
	registerState(new PikiDemoWaitState);
	registerState(new PikiLookAtState);
	registerState(new PikiGoHangState);
	registerState(new PikiHangedState);
	registerState(new PikiWaterHangedState);
	registerState(new PikiFlyingState);
	registerState(new PikiKokeDamageState);
	registerState(new PikiBlowState);
	registerState(new PikiFlickState);
	registerState(new PikiDrownState);
	registerState(new PikiSwallowedState);
	registerState(new PikiNukareState);
	registerState(new PikiAbsorbState);
	registerState(new PikiGrowupState);
	registerState(new PikiTaneState);
	registerState(new PikiDopeState);
	registerState(new PikiAutoNukiState);
	registerState(new PikiHipDropState);
	registerState(new PikiEmotionState);
	registerState(new PikiPressedState);
	registerState(new PikiPanicState);
	registerState(new PikiDenkiDyingState);
	registerState(new PikiFallMeckState);
	registerState(new PikiDyingState);
	registerState(new PikiDeadState);
	registerState(new PikiSuikomiState);
	registerState(new PikiHoleinState);
	registerState(new PikiFountainonState);
	registerState(new PikiKokeState);
	registerState(new PikiEscapeState);
	registerState(new PikiCarrotState);
}

/**
 * @note Address: 0x80189F18
 * @note Size: 0x118
 */
void PikiFSM::transit(Piki* piki, int stateID, StateArg* stateArg)
{
	PikiState* currentState = piki->mCurrentState;
	if (currentState != nullptr && currentState->mId == PIKISTATE_Carrot) {
		currentState->cleanup(piki);
		return;
	}

	if (currentState) {
		if (!currentState->soft_transittable(stateID)) {
			return;
		}

		if (!currentState->transittable(stateID)) {
			JUT_PANICLINE(701, "*Transit(%d)(%d)\n(%s)=>(%s)\n", currentState->mId, mIdToIndexArray[stateID], currentState->mName,
			              static_cast<PikiState*>(mStates[mIdToIndexArray[stateID]])->mName);
			JUT_PANICLINE(702, "---------- だめだよ～\n");
		}
	}

	mStateID = stateID;
	StateMachine::transit(piki, stateID, stateArg);
}

/**
 * @note Address: 0x8018A030
 * @note Size: 0x50
 */
void PikiFSM::transitForce(Piki* piki, int stateID, StateArg* stateArg)
{
	PikiState* currentState = piki->mCurrentState;
	if (currentState != nullptr && currentState->mId == PIKISTATE_Carrot) {
		currentState->cleanup(piki);
	} else {
		StateMachine::transit(piki, stateID, stateArg);
	}
}

/**
 * @note Address: 0x8018A080
 * @note Size: 0x40
 */
void PikiWalkState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);
}

/**
 * @note Address: 0x8018A0C0
 * @note Size: 0x24
 */
void PikiWalkState::exec(Piki* piki)
{
	piki->mBrain->exec();
}

/**
 * @note Address: 0x8018A0E4
 * @note Size: 0x4
 */
void PikiWalkState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x8018A0E8
 * @note Size: 0x40
 */
void PikiDemoWaitState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);
}

/**
 * @note Address: 0x8018A128
 * @note Size: 0x24
 */
void PikiDemoWaitState::exec(Piki* piki)
{
	piki->mBrain->exec();
}

/**
 * @note Address: 0x8018A14C
 * @note Size: 0x4
 */
void PikiDemoWaitState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x8018A150
 * @note Size: 0x100
 */
void PikiCarrotState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);
	piki->mTraceMoveRadius = 0.3f;
	piki->setMoveVelocity(false);
	piki->setMoveRotation(false);
	piki->setCollisionFlick(true);
	piki->setUpdateTrMatrix(true);
	mTimeRemaining = 3.0f * randFloat() + 10.0f;
	mIsPlanted     = false;
}

/**
 * @note Address: 0x8018A250
 * @note Size: 0x334
 */
void PikiCarrotState::exec(Piki* piki)
{
	if (piki->isAlive()) {
		piki->mTargetVelocity = Vector3f(0.0f);
		if (mIsPlanted) {
			piki->setPosition(mPosition, false);
			piki->mVelocity = Vector3f(0.0f);
		}

		mTimeRemaining -= sys->mDeltaTime;

		if (mTimeRemaining <= 0.0f) {
			Vector3f position = piki->getPosition();
			efx::Arg fxArg(position);
			efx::TPikuDead deadFX;

			deadFX.create(&fxArg);

			piki->startSound(PSSE_PK_CARROT_CRUSH, false);

			piki->kill(nullptr);
		}
		piki->mAnimSpeed = 0.0f;
	}

	Vector3f pos = piki->mVelocity;
	f32 length   = pos.normalise();
	if (length > 0.0f) {
		pos.negate();
		Matrixf natMatrix;
		natMatrix.makeNaturalPosture(pos, 0.0f);
		Matrixf matST;
		matST.makeST(piki->mScale, Vector3f::zero);
		Matrixf concatMtx;
		Vector3f translation(0.0f, -10.0f, 0.0f);
		natMatrix.setTranslation(translation);
		piki->mBaseTrMatrix = natMatrix + matST;

		Vector3f newPos = piki->getPosition();
		piki->mBaseTrMatrix.setTranslation(newPos);
	}
}

/**
 * @note Address: 0x8018A584
 * @note Size: 0xD8
 */
void PikiCarrotState::cleanup(Piki* piki)
{
	piki->setUpdateTrMatrix(true);
	Vector3f position = piki->getPosition();
	efx::Arg fxArg(position);
	efx::TPikuBomb bombFx;
	bombFx.create(&fxArg);

	piki->startSound(PSSE_PK_CARROT_CRUSH, false);
	piki->kill(nullptr);
}

/**
 * @note Address: 0x8018A65C
 * @note Size: 0x124
 */
void PikiCarrotState::bounceCallback(Piki* piki, Sys::Triangle* triangle)
{
	if (!mIsPlanted) {
		mIsPlanted  = true;
		mPosition   = piki->getPosition();
		mPosition.y = mapMgr->getMinY(mPosition);
		efx::Arg fxArg(mPosition);
		mPosition.y -= 8.0f;
		piki->mSoundObj->startFreePikiSound(PSSE_PK_CARROT_GROUND, 0, 0);

		efx::TPkAp appearFx;
		appearFx.create(&fxArg);
	}
}

/**
 * @note Address: 0x8018A780
 * @note Size: 0x4
 */
void PikiCarrotState::collisionCallback(Piki* piki, Game::CollEvent&)
{
}

/**
 * @note Address: 0x8018A784
 * @note Size: 0xD8
 */
void PikiSwallowedState::init(Piki* piki, StateArg* stateArg)
{
	int animIdx;
	SwallowedStateArg* swallowedArg = static_cast<SwallowedStateArg*>(stateArg);
	if (swallowedArg) {
		animIdx = swallowedArg->mAnimIdx;
	} else {
		animIdx = IPikiAnims::ESA; // i.e., eat
	}

	piki->startMotion(animIdx, animIdx, nullptr, nullptr);

	Creature* creature = piki->mSticker;
	CollPart* collpart = piki->mStuckCollPart;

	if (piki->getCurrAction()) {
		piki->getCurrAction()->cleanup();
		piki->clearCurrAction();
		piki->getCreatureID();
	}

	if (creature != nullptr && collpart) {
		piki->startStickMouth(creature, collpart);
	}
}

/**
 * @note Address: 0x8018A85C
 * @note Size: 0x74
 */
void PikiSwallowedState::exec(Piki* piki)
{
	if (!piki->isStickToMouth()) {
		piki->startSound(PSSE_PK_VC_SAVED, false);
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x8018A900
 * @note Size: 0x54
 */
void PikiSwallowedState::cleanup(Piki* piki)
{
	piki->endStick();
	piki->mBrain->start(PikiAI::ACT_Free, nullptr);
	piki->getCreatureID();
}

/**
 * @note Address: 0x8018A954
 * @note Size: 0x20C
 */
void PikiHoleinState::init(Piki* piki, StateArg* stateArg)
{
	HoleinStateArg* holeinArg = static_cast<HoleinStateArg*>(stateArg);
	if (holeinArg == nullptr) {
		JUT_PANICLINE(949, "need HoleinStateArg !\n");
	}

	piki->endStick();
	piki->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, nullptr, nullptr);
	Vector3f pikiPos;
	pikiPos    = piki->getPosition();
	mPosDiff   = holeinArg->mPosition - pikiPos;
	mPosDiff.y = 0.0f;

	mTargetDist = mPosDiff.normalise();
	mTargetDist *= 0.5f;

	mGoalPos = pikiPos + mPosDiff * mTargetDist;
	mTimer   = -mTargetDist;

	mCountdown      = 0.3f * randFloat();
	mNeedHoldPos    = false;
	mHasPlayedSound = false;

	piki->movie_begin(false);
	mScale = 1.0f;
}

/**
 * @note Address: 0x8018AB60
 * @note Size: 0x1C0
 */
void PikiHoleinState::exec(Piki* piki)
{
	piki->endStick();
	piki->mScale = Vector3f(mScale);

	if (mNeedHoldPos) {
		piki->setPosition(mHeldPosition, false);
		return;
	}

	if (mCountdown > 0.0f) {
		mCountdown -= sys->mDeltaTime;
		return;
	}

	if (!mHasPlayedSound) {
		mHasPlayedSound = true;
		piki->startSound(PSSE_PK_VC_JUMP_INTO_HOLE, 0);
	}

	// some nonsense here
	f32 p1            = -40.0f / SQUARE(mTargetDist);
	f32 factor        = (40.0f + mTimer * (p1 * mTimer));
	Vector3f position = mGoalPos + mPosDiff * mTimer;
	position.y += factor;

	piki->setPosition(position, false);

	mTimer += 80.0f * sys->mDeltaTime;
	f32 val = mTargetDist * 0.2f;
	if (mTimer > val) {
		mScale = (1.5f * mTargetDist - (mTimer - val)) / (mTargetDist * 1.3f);
	}

	if ((mTimer >= 1.5f * mTargetDist) && (!mNeedHoldPos)) {
		mNeedHoldPos  = true;
		mHeldPosition = position;
	}
}

/**
 * @note Address: 0x8018AD20
 * @note Size: 0x4
 */
void PikiHoleinState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x8018AD24
 * @note Size: 0x1F4
 */
void PikiFountainonState::init(Piki* piki, StateArg* stateArg)
{
	FountainonStateArg* fountainonArg = static_cast<FountainonStateArg*>(stateArg);
	if (fountainonArg == nullptr) {
		JUT_PANICLINE(1050, "need FountainonStateArg !\n");
	}

	piki->endStick();
	piki->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, nullptr, nullptr);

	Vector3f pikiPos;
	pikiPos      = piki->getPosition();
	mAvgPosition = pikiPos * 0.6f + fountainonArg->mPosition * 0.39999998f;
	mPosDiff     = mAvgPosition - pikiPos;

	mTargetDist = mPosDiff.normalise();

	mTimer = -mTargetDist;

	mCountdown = 0.3f * randFloat();
	piki->movie_begin(false);
}

/**
 * @note Address: 0x8018AF18
 * @note Size: 0x1A0
 */
void PikiFountainonState::exec(Piki* piki)
{
	if (mCountdown > 0.0f) {
		mCountdown -= sys->mDeltaTime;
		if (mCountdown <= 0.0f) {
			piki->startSound(PSSE_PK_VC_JUMP_INTO_HOLE, 0);
		}
		return;
	}

	Vector3f position;

	f32 p1          = mTargetDist * 0.39999998f;
	f32 p2          = -50.0f / SQUARE(mTargetDist);
	f32 otherFactor = 50.0f + mTimer * (p2 * mTimer);

	if (mTimer >= p1) {
		f32 factor = 50.0f + p1 * (p2 * p1) + (mTimer - p1);
		position   = mAvgPosition + mPosDiff * p1;
		position.y += factor;
		mTimer += sys->mDeltaTime * 400.0f;
	} else {
		position = mAvgPosition + mPosDiff * mTimer;
		position.y += otherFactor;
		mTimer += sys->mDeltaTime * 40.0f;

		if (mTimer >= mTargetDist * 0.39999998f) {
			piki->startSound(PSSE_PK_ESCAPE_HOLE, 0);
		}
	}

	piki->setPosition(position, false);
}

/**
 * @note Address: 0x8018B0B8
 * @note Size: 0x4
 */
void PikiFountainonState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x8018B0BC
 * @note Size: 0xC8
 */
void PikiTaneState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::HANG, IPikiAnims::HANG, nullptr, nullptr);
	mVerticalDrag   = 10.0f - 0.5f * randFloat();
	mHorizontalDrag = 0.2f * mVerticalDrag;
	mVerticalDrag *= 0.25f;
	piki->setCollisionFlick(false);
}

/**
 * @note Address: 0x8018B184
 * @note Size: 0x38
 */
void PikiTaneState::exec(Piki* piki)
{
	piki->applyAirDrag(sys->mDeltaTime, mHorizontalDrag, mVerticalDrag);
}

/**
 * @note Address: 0x8018B1BC
 * @note Size: 0x34
 */
void PikiTaneState::cleanup(Piki* piki)
{
	piki->setCollisionFlick(true);
}

/**
 * @note Address: 0x8018B1F0
 * @note Size: 0x64
 */
void PikiTaneState::bounceCallback(Piki* piki, Sys::Triangle*)
{
	piki->mBrain->start(PikiAI::ACT_Free, nullptr);
	transit(piki, PIKISTATE_Walk, nullptr);
}

/**
 * @note Address: 0x8018B254
 * @note Size: 0x114
 */
void PikiNukareState::init(Piki* piki, StateArg* stateArg)
{
	NukareStateArg* nukareArg = static_cast<NukareStateArg*>(stateArg);
	P2ASSERTLINE(1166, nukareArg != nullptr);

	piki->mTargetVelocity = Vector3f(0.0f);
	piki->mFaceDir        = nukareArg->mNavi->getFaceDir();

	mNavi       = nukareArg->mNavi;
	piki->mNavi = nukareArg->mNavi;
	if (nukareArg->mIsPlucking) {
		mAnimIdx = IPikiAnims::NUKARE3;
	} else {
		mAnimIdx = IPikiAnims::NUKARERU;
	}

	piki->startMotion(mAnimIdx, mAnimIdx, piki, nullptr);
	mDoFinish = false;

	// Stop time from advancing and disallow pausing when a new type starts to be plucked,
	// so the player can't avoid the new pikmin cutscene (this flag is reset after any cutscene finishes)
	// (Note that this isn't set when using pluckaphone on the Pikmin)
	if (!playData->hasMetPikmin(piki->mPikiKind)) {
		gameSystem->setFlag(GAMESYS_DisablePause);
	}
}

/**
 * @note Address: 0x8018B368
 * @note Size: 0xC
 */
bool PikiNukareState::soft_transittable(int stateID)
{
	return (stateID == PIKISTATE_Walk);
}

/**
 * @note Address: 0x8018B374
 * @note Size: 0x150
 */
void PikiNukareState::exec(Piki* piki)
{
	if (!piki->assertMotion(mAnimIdx)) {
		mDoFinish = true;
	}

	if (mDoFinish) {
		Vector3f position = piki->mCollTree->mPart->mPosition;
		transit(piki, PIKISTATE_Walk, nullptr);
		position.y = mapMgr->getMinY(position);
		piki->setPosition(position, false);

		PikiAI::ActFormationInitArg initArg(piki->mNavi);
		piki->mBrain->start(PikiAI::ACT_Formation, &initArg);

		int pikiType = piki->mPikiKind;
		if (pikiType >= FirstPikmin && pikiType <= LastStoredPikiColor) {
			if (!playData->hasMetPikmin(piki->mPikiKind)) {
				gameSystem->mSection->playMovie_helloPikmin(piki);
			}
		}
	}
}

/**
 * @note Address: 0x8018B4C4
 * @note Size: 0x20C
 */
void PikiNukareState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.mType) {
	case KEYEVENT_2:
		rumbleMgr->startRumble(RUMBLETYPE_PluckPiki, (int)mNavi->mNaviIndex);

		Vector3f position = piki->getPosition();
		piki->setFPFlag(FPFLAGS_PikiBeingPlucked);
		Sys::Sphere sphere(position, 10.0f);
		WaterBox* wbox = piki->checkWater(nullptr, sphere);

		if (wbox) {
			efx::TEnemyDive diveFx;
			efx::ArgScale fxArg(position, 1.2f);
			diveFx.create(&fxArg);

			if (piki->mNavi == nullptr) {
				JUT_PANICLINE(1242, "getNavi():pullW");
			}

			piki->startSound(piki->mNavi, PSSE_EV_ITEM_LAND_WATER1_S, true);
			piki->startSound(piki->mNavi, PSSE_PL_PULLOUT_PIKI, false);

		} else {
			if (piki->mNavi == nullptr) {
				JUT_PANICLINE(1246, "getNavi():Pull");
			}
			efx::createSimplePkAp(position);
			piki->startSound(piki->mNavi, PSSE_PL_PULLOUT_PIKI, false);
		}

		break;
	case KEYEVENT_END:
		mDoFinish = true;
		break;
	}
}

/**
 * @note Address: 0x8018B6D0
 * @note Size: 0x10
 */
void PikiNukareState::cleanup(Piki* piki)
{
	piki->resetFPFlag(FPFLAGS_PikiBeingPlucked);
}

/**
 * @note Address: 0x8018B6E0
 * @note Size: 0xB8
 */
void PikiDopeState::init(Piki* piki, StateArg* stateArg)
{
	DopeStateArg* dopeArg = static_cast<DopeStateArg*>(stateArg);
	P2ASSERTLINE(1270, dopeArg != nullptr);
	mDopeState            = dopeArg->mDopeType;
	mStartWaitTime        = 0.3f * randFloat();
	mHasAnimStarted       = false;
	piki->mTargetVelocity = Vector3f(0.0f);
	mNavi                 = nullptr;
}

/**
 * @note Address: 0x8018B798
 * @note Size: 0x8
 */
void PikiDopeState::onFlute(Piki* piki, Navi* navi)
{
	mNavi = navi;
}

/**
 * @note Address: 0x8018B7A0
 * @note Size: 0x18C
 */
void PikiDopeState::exec(Piki* piki)
{
	if (!mHasAnimStarted) {
		mStartWaitTime -= sys->mDeltaTime;
		if (mStartWaitTime <= 0.0f) {
			mHasAnimStarted = true;

			if (randFloat() > 0.5f) { // the illusion of choice.
				mAnimIdx = IPikiAnims::GROWUP1;
			} else {
				mAnimIdx = IPikiAnims::GROWUP1;
			}

			piki->startMotion(mAnimIdx, mAnimIdx, piki, nullptr);
		}

	} else if (!piki->assertMotion(mAnimIdx)) {
		piki->getCreatureID();

		if (mNavi) {
			piki->mNavi = mNavi;
			PikiAI::ActFormationInitArg initArg(piki->mNavi);
			piki->mBrain->start(PikiAI::ACT_Formation, &initArg);
		}

		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x8018B92C
 * @note Size: 0xD8
 */
void PikiDopeState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.mType) {
	case 2:
		piki->startDope(mDopeState);
		break;
	case 1000:
		if (mNavi) {
			piki->mNavi = mNavi;
			PikiAI::ActFormationInitArg initArg(piki->mNavi);
			piki->mBrain->start(PikiAI::ACT_Formation, &initArg);
		}

		transit(piki, PIKISTATE_Walk, nullptr);
		break;
	}
}

/**
 * @note Address: 0x8018BA04
 * @note Size: 0x4
 */
void PikiDopeState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x8018BA08
 * @note Size: 0x24
 */
bool PikiPanicState::soft_transittable(int stateID)
{
	return !(stateID == PIKISTATE_Blow || stateID == PIKISTATE_Panic || stateID == PIKISTATE_FallMeck);
}

/**
 * @note Address: 0x8018BA2C
 * @note Size: 0x70
 */
bool PikiPanicState::transittable(int stateID)
{
	if (mPanicType == PIKIPANIC_Panic && stateID != PIKISTATE_Panic) {
		return true;
	}

	if (stateID == PIKISTATE_Dying || (u32)(stateID - 10) <= 1 || // drown or swallowed
	    (u32)(stateID - 20) <= 2 ||                               // pressed, panic or zapped
	    stateID == PIKISTATE_Suikomi || stateID == PIKISTATE_Hanged || stateID == PIKISTATE_Flying) {
		return true;
	}

	return (mIsCalled != 0);
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
inline void PikiPanicState::startSound(Piki* piki)
{
	u32 panicSound = PSSE_PK_VC_PANIC;
	switch (mPanicType) {
	case PIKIPANIC_Water:
		panicSound = PSSE_PK_VC_WATER_PANIC;
		break;
	case PIKIPANIC_Fire:
		panicSound = PSSE_PK_VC_FIRED;
		break;
	case PIKIPANIC_Gas:
	case PIKIPANIC_Panic:
	case PIKIPANIC_Other:
		break;
	}

	piki->mSoundObj->startFreePikiSetSound(panicSound, PSGame::SeMgr::SETSE_PikiPanicRun, 90, 0);
}

/**
 * @note Address: 0x8018BA9C
 * @note Size: 0x280
 */
void PikiPanicState::init(Piki* piki, StateArg* stateArg)
{
	PanicStateArg* panicArg = static_cast<PanicStateArg*>(stateArg);
	P2ASSERTLINE(1399, panicArg != nullptr);
	mPanicType       = panicArg->mPanicType;
	mIsCalled        = false;
	mIsLobsterLanded = true;
	piki->setMoveRotation(true);
	mDeathTimer = piki->getParms()->mPikiParms.mPanicMaxTime.mValue;
	mDeathTimer *= (0.1f * randFloat() + 1.0f);
	mDramaTimer = 0.1f;
	mAngle      = piki->mFaceDir;
	mSpeed      = 1.0f;
	piki->endStick();

	switch (mPanicType) {
	case PIKIPANIC_Water:
		efx::TPkEffect* effectsObjWat = piki->mEffectsObj;
		effectsObjWat->setFlag(PKEFF_Water);
		effectsObjWat->createWater_(effectsObjWat->mAltStemPosition);
		piki->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
		break;

	case PIKIPANIC_Gas:
		efx::TPkEffect* effectsObjGas = piki->mEffectsObj;
		effectsObjGas->setFlag(PKEFF_Gas);
		effectsObjGas->createChudoku_(effectsObjGas->mStemPosition);
		piki->startMotion(IPikiAnims::GASDEAD, IPikiAnims::GASDEAD, nullptr, nullptr);
		piki->setMoveRotation(false);
		break;

	case PIKIPANIC_Fire:
		piki->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
		efx::TPkEffect* effectsObjFire = piki->mEffectsObj;
		effectsObjFire->setFlag(PKEFF_Fire);
		effectsObjFire->createMoe_(effectsObjFire->mStemPosition);
		break;

	case PIKIPANIC_Panic:
	case PIKIPANIC_Other:
		mSubState   = 0;
		mDramaTimer = 0.3f * randFloat();
		break;
	}

	startSound(piki);
	mDemoWaitTime = 2.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x17C
 */
inline void PikiPanicState::checkDemo(Piki* piki)
{
	int flag = 0;
	if (mPanicType == PIKIPANIC_Fire) {
		flag = DEMO_Pikmin_In_Danger_Fire;
	} else if (mPanicType == PIKIPANIC_Water) {
		flag = DEMO_Pikmin_In_Danger_Water;
	} else if (mPanicType == PIKIPANIC_Gas) {
		flag = DEMO_Pikmin_In_Danger_Poison;
	}

	if (flag != 0 && !playData->isDemoFlag(flag) && gameSystem->isStoryMode() && gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {
		mDemoWaitTime -= sys->mDeltaTime;
		if (mDemoWaitTime <= 0.0f) {
			playData->setDemoFlag(flag);

			MoviePlayArg playArg("x16_hiba", nullptr, nullptr, 0);
			playArg.mOrigin            = piki->getPosition();
			playArg.mAngle             = piki->getFaceDir();
			moviePlayer->mTargetObject = piki;
			moviePlayer->play(playArg);
		}
	}
}

/**
 * @note Address: 0x8018BD1C
 * @note Size: 0x260
 */
void PikiPanicState::exec(Piki* piki)
{
	if (mPanicType == PIKIPANIC_Panic || mPanicType == PIKIPANIC_Other) {
		piki->mTargetVelocity = Vector3f(0.0f);
		switch (mSubState) {
		case 0:
			mDramaTimer -= sys->mDeltaTime;
			if (mDramaTimer <= 0.0f) {
				mSubState = 1;
				piki->startMotion(IPikiAnims::KIZUKU, IPikiAnims::KIZUKU, piki, nullptr);
			}
			return;

		case 1:
			if (!piki->assertMotion(IPikiAnims::KIZUKU)) {
				mSubState = 2;
			}
			return;
		}
	} else {
		checkDemo(piki);
	}

	if (mPanicType == PIKIPANIC_Gas) {
		panicLobster(piki);
	} else {
		panicRun(piki);
	}
}

/**
 * @note Address: 0x8018BF7C
 * @note Size: 0x48
 */
void PikiPanicState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	mSubState = 2;
	piki->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
}

/**
 * @note Address: 0x8018BFC4
 * @note Size: 0x2BC
 */
void PikiPanicState::panicRun(Piki* piki)
{
	Vector3f direction = Vector3f(sinf(mAngle), 0.0f, cosf(mAngle));
	piki->setSpeed(mSpeed, direction);
	mDeathTimer -= sys->mDeltaTime;
	mDramaTimer -= sys->mDeltaTime;

	if (mDeathTimer < 0.0f) {
		if (mPanicType == PIKIPANIC_Panic) {
			transit(piki, PIKISTATE_Walk, nullptr);
			return;
		}

		switch (mPanicType) {
		case PIKIPANIC_Fire:
			deathMgr->inc(DeathCounter::COD_Fire);
			break;
		case PIKIPANIC_Water:
			deathMgr->inc(DeathCounter::COD_Water);
			break;
		case PIKIPANIC_Gas:
			deathMgr->inc(DeathCounter::COD_Poison);
			break;
		}
		transit(piki, PIKISTATE_Dying, nullptr);
		return;
	}

	if (mDramaTimer < 0.0f) {
		startSound(piki);
		mDramaTimer     = 0.2f * randFloat() + 0.2f;
		f32 angleOffset = DEG2RAD * (15.0f * randFloat() + 30.0f) * PI;
		if (piki->mMgrIndex % 2 == 1) {
			angleOffset = -angleOffset;
		}
		mAngle += angleOffset;
		mAngle = roundAng(mAngle);
		mSpeed *= 0.99f;
	}
}

/**
 * @note Address: 0x8018C280
 * @note Size: 0x2D4
 */
void PikiPanicState::panicLobster(Piki* piki)
{
	if (mIsLobsterLanded) {
		mIsLobsterLanded = false;
		f32 oldAngle     = piki->mFaceDir;

		f32 angleOffset = DEG2RAD * (15.0f * randFloat() + 10.0f) * PI;
		if (piki->mMgrIndex % 2 == 1) {
			angleOffset = -angleOffset;
		}
		oldAngle += angleOffset;

		f32 newAngle    = roundAng(oldAngle);
		f32 factor      = 20.0f * randFloat() + 120.0f;
		f32 randHeight  = 80.0f * randFloat() + 100.0f;
		Vector3f newPos = Vector3f(factor * sinf(newAngle), randHeight, factor * cosf(newAngle));

		piki->mFaceDir  = newAngle;
		piki->mVelocity = newPos;

		if (mPanicType == PIKIPANIC_Gas) {
			piki->startSound(PSSE_PK_VC_GAS_POISONING, true);
		}
	}

	mDeathTimer -= sys->mDeltaTime;

	if (mDeathTimer < 0.0f) {
		switch (mPanicType) {
		case PIKIPANIC_Fire:
			deathMgr->inc(DeathCounter::COD_Fire);
			break;
		case PIKIPANIC_Water:
			deathMgr->inc(DeathCounter::COD_Water);
			break;
		case PIKIPANIC_Gas:
			deathMgr->inc(DeathCounter::COD_Poison);
			break;
		}

		if (mPanicType == PIKIPANIC_Gas) {
			DyingStateArg dyingArg;
			dyingArg.mAnimIdx = IPikiAnims::GDEAD;
			transit(piki, PIKISTATE_Dying, &dyingArg);
			return;
		}

		transit(piki, PIKISTATE_Dying, nullptr);
	}
}

/**
 * @note Address: 0x8018C554
 * @note Size: 0xE4
 */
void PikiPanicState::cleanup(Piki* piki)
{
	piki->setMoveRotation(true);
	if (piki->mFsm->mStateID != PIKISTATE_Dying) {
		efx::TPkEffect* effectsObjFire = piki->mEffectsObj;
		effectsObjFire->killMoe_();
		if (effectsObjFire->isFlag(PKEFF_Fire)) {
			effectsObjFire->resetFlag(PKEFF_Fire);
			effectsObjFire->createMoeSmoke_(effectsObjFire->mStemPosition);
			effectsObjFire->mMoeSmokeTimer = 60;
			efx::createSimpleChinka(*effectsObjFire->mStemPosition);
		}

		efx::TPkEffect* effectsObjWater = piki->mEffectsObj;
		effectsObjWater->killWater_();
		if (effectsObjWater->isFlag(PKEFF_Water)) {
			effectsObjWater->resetFlag(PKEFF_Water);
			efx::createSimpleWaterOff(*effectsObjWater->mAltStemPosition);
		}

		efx::TPkEffect* effectsObjGas = piki->mEffectsObj;
		effectsObjGas->killChudoku_();
		if (effectsObjGas->isFlag(PKEFF_Gas)) {
			effectsObjGas->resetFlag(PKEFF_Gas);
			efx::createSimpleGedoku(*effectsObjGas->mStemPosition);
		}
	}
}

/**
 * @note Address: 0x8018C638
 * @note Size: 0xC
 */
void PikiPanicState::bounceCallback(Piki* piki, Sys::Triangle*)
{
	mIsLobsterLanded = true;
}

/**
 * @note Address: 0x8018C644
 * @note Size: 0x11C
 */
void PikiPanicState::onFlute(Piki* piki, Game::Navi*)
{
	mIsCalled = true;
	transit(piki, PIKISTATE_Walk, nullptr);

	switch (mPanicType) {
	case PIKIPANIC_Fire:
		efx::TPkEffect* effectsObjFire = piki->mEffectsObj;
		effectsObjFire->killMoe_();
		if (effectsObjFire->isFlag(PKEFF_Fire)) {
			effectsObjFire->resetFlag(PKEFF_Fire);
			effectsObjFire->createMoeSmoke_(effectsObjFire->mStemPosition);
			effectsObjFire->mMoeSmokeTimer = 60;
			efx::createSimpleChinka(*effectsObjFire->mStemPosition);
		}
		break;
	case PIKIPANIC_Water:
		efx::TPkEffect* effectsObjWater = piki->mEffectsObj;
		effectsObjWater->killWater_();
		if (effectsObjWater->isFlag(PKEFF_Water)) {
			effectsObjWater->resetFlag(PKEFF_Water);
			efx::createSimpleWaterOff(*effectsObjWater->mAltStemPosition);
		}
		break;
	case PIKIPANIC_Gas:
		piki->setGasInvincible(90);
		efx::TPkEffect* effectsObjGas = piki->mEffectsObj;
		effectsObjGas->killChudoku_();
		if (effectsObjGas->isFlag(PKEFF_Gas)) {
			effectsObjGas->resetFlag(PKEFF_Gas);
			efx::createSimpleGedoku(*effectsObjGas->mStemPosition);
		}
		break;
	}
}

/**
 * @note Address: 0x8018C760
 * @note Size: 0x4
 */
void PikiDeadState::init(Piki* piki, StateArg* stateArg)
{
}

/**
 * @note Address: 0x8018C764
 * @note Size: 0x4
 */
void PikiDeadState::exec(Piki* piki)
{
}

/**
 * @note Address: 0x8018C768
 * @note Size: 0x10
 */
bool PikiDyingState::transittable(int stateID)
{
	return (u8)(stateID == PIKISTATE_Dead);
}

/**
 * @note Address: 0x8018C778
 * @note Size: 0xB4
 */
void PikiDyingState::init(Piki* piki, StateArg* stateArg)
{
	DyingStateArg* dyingArg = static_cast<DyingStateArg*>(stateArg);
	mAnimIdx                = IPikiAnims::DEAD;
	mDoUseKillArg           = false;
	if (dyingArg) {
		mAnimIdx      = dyingArg->mAnimIdx;
		mDoUseKillArg = dyingArg->mDoUseKillArg;
		if (mAnimIdx == IPikiAnims::NULLANIM) {
			mAnimIdx = IPikiAnims::DEAD;
		}
	}

	piki->startMotion(mAnimIdx, mAnimIdx, piki, nullptr);
	piki->mTargetVelocity = Vector3f(0.0f);
	piki->mSoundObj->startFreePikiSound(PSSE_PK_VC_DEAD1, 0, 0);
}

/**
 * @note Address: 0x8018C82C
 * @note Size: 0xDC
 */
void PikiDyingState::exec(Piki* piki)
{
	piki->mTargetVelocity = Vector3f(0.0f);
	if (!piki->assertMotion(mAnimIdx) && piki->isAlive()) {
		if (mDoUseKillArg) {
			PikiKillArg killArg(-CKILL_VsChargePiki);
			piki->kill(&killArg);

		} else if (moviePlayer == nullptr || !moviePlayer->isPlaying("s09_holein")) {
			piki->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x8018C908
 * @note Size: 0x4
 */
void PikiDyingState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x8018C90C
 * @note Size: 0x64
 */
void PikiDyingState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	if (mDoUseKillArg) {
		PikiKillArg killArg(-CKILL_VsChargePiki);
		piki->kill(&killArg);
	} else {
		piki->kill(nullptr);
	}
}

/**
 * @note Address: 0x8018C970
 * @note Size: 0x10
 */
bool PikiDenkiDyingState::soft_transittable(int stateID)
{
	return (u8)(stateID == PIKISTATE_Dead);
}

/**
 * @note Address: 0x8018C980
 * @note Size: 0x10
 */
bool PikiDenkiDyingState::transittable(int stateID)
{
	return (u8)(stateID == PIKISTATE_Dead);
}

/**
 * @note Address: 0x8018C990
 * @note Size: 0x84
 */
void PikiDenkiDyingState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::DEAD, IPikiAnims::DEAD, piki, nullptr);
	mWaitTime             = 0.3f;
	piki->mTargetVelocity = Vector3f(0.0f);
	piki->mVelocity       = Vector3f(0.0f);
}

/**
 * @note Address: 0x8018CA14
 * @note Size: 0x138
 */
void PikiDenkiDyingState::exec(Piki* piki)
{
	piki->mTargetVelocity = Vector3f(0.0f);
	piki->mVelocity       = Vector3f(0.0f);
	mWaitTime -= sys->mDeltaTime;

	if (mWaitTime <= 0.0f) {
		efx::TPkKanden kandenFx;
		efx::Arg fxArg;
		fxArg.mPosition = piki->getPosition(); // why do this differently, smh.
		kandenFx.create(&fxArg);

		deathMgr->inc(DeathCounter::COD_Electricity);
		piki->startSound(PSSE_PK_VC_ELEC_DEAD, true);
		piki->kill(nullptr);
	}
}

/**
 * @note Address: 0x8018CB4C
 * @note Size: 0x4
 */
void PikiDenkiDyingState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x8018CB50
 * @note Size: 0x10
 */
bool PikiPressedState::soft_transittable(int stateID)
{
	return (stateID == PIKISTATE_Dead);
}

/**
 * @note Address: 0x8018CB60
 * @note Size: 0x10
 */
bool PikiPressedState::transittable(int stateID)
{
	return (u8)(stateID == PIKISTATE_Dead);
}

/**
 * @note Address: 0x8018CB70
 * @note Size: 0xC8
 */
void PikiPressedState::init(Piki* piki, StateArg* stateArg)
{
	f32 pressedScale = piki->getParms()->mPikiParms.mPressedScale.mValue;
	piki->mScale     = Vector3f(pressedScale, pressedScale, 0.01f);
	mWaitTime        = 1.5f;
	piki->setUpdateTrMatrix(false);

	Vector3f rotation    = Vector3f(-HALF_PI, piki->mFaceDir, 0.0f);
	Vector3f translation = piki->getPosition();
	translation.y += 2.0f;

	piki->mBaseTrMatrix.makeSRT(piki->mScale, rotation, translation);
}

/**
 * @note Address: 0x8018CC38
 * @note Size: 0x10C
 */
void PikiPressedState::exec(Piki* piki)
{
	Vector3f rotation    = Vector3f(-HALF_PI, piki->mFaceDir, 0.0f);
	Vector3f translation = piki->getPosition();
	translation.y += 2.0f;

	piki->mBaseTrMatrix.makeSRT(piki->mScale, rotation, translation);

	mWaitTime -= sys->mDeltaTime;
	if (mWaitTime <= 0.0f) {
		if (piki->isPikmin()) {
			deathMgr->inc(DeathCounter::COD_Battle);
		}
		piki->kill(nullptr);
	}

	piki->mVelocity       = Vector3f(0.0f);
	piki->mTargetVelocity = Vector3f(0.0f);
}

/**
 * @note Address: 0x8018CD44
 * @note Size: 0x34
 */
void PikiPressedState::cleanup(Piki* piki)
{
	piki->setUpdateTrMatrix(true);
}

/**
 * @note Address: 0x8018CD78
 * @note Size: 0x84
 */
void PikiLookAtState::init(Piki* piki, StateArg* stateArg)
{
	mWaitTime = 0.3f * randFloat();
	mSubState = 0;
	piki->mSoundObj->startFreePikiSound(PSSE_PK_VC_CALLED, 90, 0);
}

/**
 * @note Address: 0x8018CDFC
 * @note Size: 0x4
 */
void PikiLookAtState::onFlute(Piki* piki, Game::Navi*)
{
}

/**
 * @note Address: 0x8018CE00
 * @note Size: 0x180
 */
void PikiLookAtState::exec(Piki* piki)
{
	piki->mTargetVelocity = Vector3f(0.0f);
	switch (mSubState) {
	case 0:
		mWaitTime -= sys->mDeltaTime;
		if (mWaitTime < 0.0f) {
			mWaitTime = 0.0f;
			piki->startMotion(IPikiAnims::KIZUKU, IPikiAnims::KIZUKU, this, nullptr);
			mSubState = 1;
		}
		break;

	case 1:
		if (!piki->assertMotion(IPikiAnims::KIZUKU)) {
			mSubState = 2;
		}
		break;

	case 2:
		if (piki->mNavi) {
			PikiAI::ActFormationInitArg initArg(piki->mNavi);
			initArg.mDoUseTouchCooldown = true;
			piki->mBrain->start(PikiAI::ACT_Formation, &initArg);
			transit(piki, PIKISTATE_Walk, nullptr);

		} else {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
		break;
	}
}

/**
 * @note Address: 0x8018CF80
 * @note Size: 0x28
 */
void PikiLookAtState::onKeyEvent(SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.mType) {
	case 1000:
		mSubState = 2;
		break;
	case 0:
	case 1:
	case 2:
	case 3:
		break;
	}
}

/**
 * @note Address: 0x8018CFA8
 * @note Size: 0x4
 */
void PikiLookAtState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x8018CFAC
 * @note Size: 0x1FC
 */
void PikiAutoNukiState::init(Piki* piki, StateArg* stateArg)
{
	mTimer = 0.2f * randFloat();
	mState = 0;
	piki->startMotion(IPikiAnims::KAIFUKU2, IPikiAnims::KAIFUKU2, piki, nullptr);
	mState            = 1;
	Vector3f position = piki->getPosition();
	Sys::Sphere sphere(position, 10.0f);
	WaterBox* wbox = piki->checkWater(nullptr, sphere);

	if (wbox) {
		efx::TEnemyDive diveFx;
		efx::ArgScale fxArg(position, 1.2f);
		diveFx.create(&fxArg);
		if (piki->mNavi) {
			piki->startSound(piki->mNavi, PSSE_EV_ITEM_LAND_WATER1_S, true);
			piki->startSound(piki->mNavi, PSSE_PL_PULLOUT_PIKI, false);
		}
	} else if (piki->mNavi) {
		efx::createSimplePkAp(position);
		piki->startSound(piki->mNavi, PSSE_PL_PULLOUT_PIKI, false);
	}
}

/**
 * @note Address: 0x8018D1A8
 * @note Size: 0x300
 */
void PikiAutoNukiState::exec(Piki* piki)
{
	switch (mState) {
	case 0:
		mTimer -= sys->mDeltaTime;
		if (mTimer < 0.0f) {
			mTimer = 0.0f;
			piki->startMotion(IPikiAnims::KAIFUKU2, IPikiAnims::KAIFUKU2, piki, nullptr);
			mState = 1;

			Vector3f position = piki->getPosition();
			Sys::Sphere sphere(position, 10.0f);
			WaterBox* wbox = piki->checkWater(nullptr, sphere);

			if (wbox) {
				efx::TEnemyDive diveFx;
				efx::ArgScale fxArg(position, 1.2f);
				diveFx.create(&fxArg);

				if (piki->mNavi) {
					piki->startSound(piki->mNavi, PSSE_EV_ITEM_LAND_WATER1_S, true);
					piki->startSound(piki->mNavi, PSSE_PL_PULLOUT_PIKI, false);
				}

			} else if (piki->mNavi) {
				efx::createSimplePkAp(position);
				piki->startSound(piki->mNavi, PSSE_PL_PULLOUT_PIKI, false);
			}
		}
		break;

	case 1:
		if (!piki->assertMotion(IPikiAnims::KAIFUKU2)) {
			mState = 2;
		}
		break;

	case 2:
		if (piki->mNavi) {
			PikiAI::ActFormationInitArg initArg(piki->mNavi);
			initArg.mDoUseTouchCooldown = true;
			piki->mBrain->start(PikiAI::ACT_Formation, &initArg);

		} else {
			piki->mBrain->start(PikiAI::ACT_Free, nullptr);
		}

		transit(piki, PIKISTATE_Walk, nullptr);

		int type = piki->mPikiKind;
		if (type >= FirstPikmin && type <= LastStoredPikiColor && !playData->hasMetPikmin(type)) {
			gameSystem->mSection->playMovie_helloPikmin(piki);
		}

		break;
	}
}

/**
 * @note Address: 0x8018D4A8
 * @note Size: 0x28
 */
void PikiAutoNukiState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.mType) {
	case KEYEVENT_END:
		mState = 2;
		break;
	case KEYEVENT_2:
		break;
	}
}

/**
 * @note Address: 0x8018D4D0
 * @note Size: 0x4
 */
void PikiAutoNukiState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x8018D4D4
 * @note Size: 0x64
 */
void PikiGoHangState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, nullptr, nullptr);
	piki->setCollisionFlick(false);
}

/**
 * @note Address: 0x8018D538
 * @note Size: 0x1C8
 */
void PikiGoHangState::exec(Piki* piki)
{
	if (piki->mNavi == nullptr) {
		transit(piki, PIKISTATE_Walk, nullptr);
		return;
	}

	CollPart* collpart = piki->mNavi->mCollTree->getCollPart('rhnd');
	Vector3f diff      = collpart->mPosition - piki->getPosition();
	f32 length         = diff.normalise();
	f32 scale          = 1.0f;
	if (length > 2.0f * naviMgr->mNaviParms->mNaviParms.mGrabPikiRange()) {
		scale = 2.0f;
	}
	f32 factor       = scale * static_cast<PikiParms*>(piki->mParms)->mPikiParms.mRunSpeed();
	Vector3f naviPos = piki->mNavi->mVelocity;
	factor += naviPos.length();
	piki->mTargetVelocity = diff * factor;

	if (piki->mNavi->getStateID() != NSID_ThrowWait) {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x8018D700
 * @note Size: 0x34
 */
void PikiGoHangState::cleanup(Piki* piki)
{
	piki->setCollisionFlick(true);
}

/**
 * @note Address: 0x8018D734
 * @note Size: 0x4
 */
void PikiHangedState::onKeyEvent(SysShape::KeyEvent const& keyEvent)
{
}

/**
 * @note Address: 0x8018D738
 * @note Size: 0xC4
 */
void PikiHangedState::init(Piki* piki, StateArg* stateArg)
{
	piki->startSound(PSSE_PK_VC_HANG, false);
	piki->startMotion(IPikiAnims::HANG, IPikiAnims::HANG, this, nullptr);
	piki->mVelocity       = Vector3f(0.0f);
	piki->mTargetVelocity = Vector3f(0.0f);
	if (piki->mNavi) {
		piki->startSound(piki->mNavi, PSSE_PK_VC_THROW_WAIT, false);
	}

	piki->setAtari(false);
}

/**
 * @note Address: 0x8018D7FC
 * @note Size: 0x6C
 */
void PikiHangedState::exec(Piki* piki)
{
	if (piki->mNavi != nullptr && piki->mNavi->getStateID() != NSID_ThrowWait) {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x8018D868
 * @note Size: 0x34
 */
void PikiHangedState::cleanup(Piki* piki)
{
	piki->setAtari(true);
}

/**
 * @note Address: 0x8018D89C
 * @note Size: 0x6C
 */
bool PikiHangedState::ignoreAtari(Piki* piki, Creature* creature)
{
	if (creature->isNavi() || creature->isPiki()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8018D908
 * @note Size: 0x4
 */
void PikiWaterHangedState::onKeyEvent(SysShape::KeyEvent const&)
{
}

/**
 * @note Address: 0x8018D90C
 * @note Size: 0xC4
 */
void PikiWaterHangedState::init(Piki* piki, StateArg* stateArg)
{
	WaterHangedStateArg* waterHangedArg = static_cast<WaterHangedStateArg*>(stateArg);
	if (waterHangedArg) {
		mPiki = waterHangedArg->mPiki;
	} else {
		mPiki = nullptr;
	}

	piki->startSound(PSSE_PK_VC_HANG, false);
	piki->startMotion(IPikiAnims::HANG, IPikiAnims::HANG, this, nullptr);
	piki->mVelocity       = Vector3f(0.0f);
	piki->mTargetVelocity = Vector3f(0.0f);
	piki->setAtari(false);
}

/**
 * @note Address: 0x8018D9D0
 * @note Size: 0xA8
 */
void PikiWaterHangedState::exec(Piki* piki)
{
	if (mPiki) {
		int currActID   = mPiki->getCurrActionID();
		int currStateID = mPiki->getStateID();

		if (currActID != PikiAI::ACT_Rescue || currStateID != PIKISTATE_Walk) {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
	} else {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x8018DA78
 * @note Size: 0x34
 */
void PikiWaterHangedState::cleanup(Piki* piki)
{
	piki->setAtari(true);
}

/**
 * @note Address: 0x8018DAAC
 * @note Size: 0x6C
 */
bool PikiWaterHangedState::ignoreAtari(Piki* piki, Creature* creature)
{
	if (creature->isNavi() || creature->isPiki()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8018DB18
 * @note Size: 0x70
 */
void PikiHipDropState::init(Piki* piki, StateArg* stateArg)
{
	piki->mVelocity.z = 0.0f;
	piki->mVelocity.x = 0.0f;
	mSubState         = 0;
	mWaitTimer        = 0.25f;
	piki->mVelocity.y = 0.0f;

	efx::TPkEffect* effectsObj = piki->mEffectsObj;
	effectsObj->killNage_();
	effectsObj->createBlackDown_(effectsObj->mHamonPosPtr);
	piki->mUpdateContext.mDoForceActive = true;
}

/**
 * @note Address: 0x8018DB88
 * @note Size: 0x3C8
 */
void PikiHipDropState::exec(Piki* piki)
{
	if (mSubState == 0) {
		piki->mVelocity.y = 0.0f;
		mWaitTimer -= sys->mDeltaTime;
		if (mWaitTimer <= 0.0f) {
			piki->mVelocity.y      = -_aiConstants->mGravity.mData * 0.5f;
			Creature* closestEnemy = nullptr;
			f32 minDist            = 12800.0f;
			Vector3f position      = piki->getPosition();
			Sys::Sphere sphere(position, 50.0f);
			CellIteratorArg iterArg(sphere);
			iterArg.mUseCustomRadius = 1;
			CellIterator iterator(iterArg);

			CI_LOOP(iterator)
			{
				Creature* creature = static_cast<Creature*>(*iterator);
				if (creature->isTeki() && creature->isAlive() && creature->isLivingThing()) {
					Vector3f creaturePos = creature->getPosition();
					Vector3f pikiPos     = piki->getPosition();

					f32 diffX    = creaturePos.x - pikiPos.x;
					f32 diffZ    = creaturePos.z - pikiPos.z;
					f32 diffY    = creaturePos.y - pikiPos.y;
					f32 currDist = getVectorLength(diffZ, diffX, diffY);

					if (currDist < minDist) {
						minDist      = currDist;
						closestEnemy = creature;
					}
				}
			}

			if (closestEnemy) {
				Vector3f enemyPos = closestEnemy->getPosition();
				enemyPos          = enemyPos - position;
				f32 dist          = _sqrtf(enemyPos.x * enemyPos.x + enemyPos.z * enemyPos.z);

				if (dist > 0.0f) {
					enemyPos *= 120.0f * (1.0f / dist);
					piki->mVelocity.x = enemyPos.x;
					piki->mVelocity.z = enemyPos.z;
				}
			}
			mSubState = 1;
			piki->startMotion(IPikiAnims::FALL, IPikiAnims::FALL, nullptr, nullptr);
		}

	} else if (mSubState == 1) {
		piki->mFaceDir += sys->mDeltaTime * PI / 0.2f;
		piki->mFaceDir = roundAng(piki->mFaceDir);

	} else if (mSubState == 2) {
		piki->mTargetVelocity = Vector3f(0.0f);
		mWaitTimer -= sys->mDeltaTime;
		if (mWaitTimer <= 0.0f) {
			transit(piki, PIKISTATE_Walk, nullptr);
			if (!piki->invokeAI()) {
				piki->mBrain->start(PikiAI::ACT_Free, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x8018DF50
 * @note Size: 0x38
 */
void PikiHipDropState::cleanup(Piki* piki)
{
	piki->mEffectsObj->killBlackDown_();
	piki->mUpdateContext.mDoForceActive = false;
}

/**
 * @note Address: 0x8018DF88
 * @note Size: 0x4
 */
void PikiHipDropState::onKeyEvent(Piki* piki, SysShape::KeyEvent const&)
{
}

/**
 * @note Address: 0x8018DF8C
 * @note Size: 0x2C
 */
void PikiHipDropState::bounceCallback(Piki* piki, Sys::Triangle* triangle)
{
	if (mSubState != 2) {
		dosin(piki);
	}
}

/**
 * @note Address: 0x8018DFB8
 * @note Size: 0x2E0
 */
void PikiHipDropState::collisionCallback(Piki* piki, CollEvent& collEvent)
{
	if (!collEvent.mCollidingCreature->isPiki()) {
		Vector3f position = piki->getPosition();
		efx::createSimpleBlackDrop(position);
		rumbleMgr->startRumble(RUMBLETYPE_Fixed11, position, RUMBLEID_Both);
		cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);

		if (!collEvent.mCollidingCreature->isTeki()) {
			piki->startSound(PSSE_PK_SE_DOSUN, false);
		}
	} else {
		return;
	}

	if (collEvent.mCollidingCreature->isTeki()) {
		InteractHipdrop hipdrop(piki, piki->getParms()->mPikiParms.mPoundDamage.mValue, collEvent.mCollisionObj);
		bool check        = false;
		Vector3f velocity = piki->getVelocity();
		if (velocity.y < 0.0f) {
			check = collEvent.mCollidingCreature->stimulate(hipdrop);
			earthquake(piki);
		}

		InteractPress press(piki, 10.0f, collEvent.mCollisionObj);
		Vector3f velocity2 = piki->getVelocity();
		if (velocity2.y < 0.0f) {
			check = collEvent.mCollidingCreature->stimulate(press);
		}

		piki->startSound(PSSE_PK_SE_DOSUN_HIT, false);
		if (!check && collEvent.mCollisionObj != nullptr && collEvent.mCollisionObj->isStickable()
		    && collEvent.mCollidingCreature->isLivingThing()) {
			piki->startStick(collEvent.mCollidingCreature, collEvent.mCollisionObj);
			piki->startSound(collEvent.mCollidingCreature, PSSE_PK_SE_ATTACH, true);
		}
	}

	if (piki->getStateID() == PIKISTATE_HipDrop) {
		transit(piki, PIKISTATE_Walk, nullptr);
		if (!piki->invokeAI(&collEvent, true)) {
			piki->mBrain->start(PikiAI::ACT_Free, nullptr);
		}
	}
}

/**
 * @note Address: 0x8018E298
 * @note Size: 0x2C
 */
void PikiHipDropState::platCallback(Piki* piki, Game::PlatEvent&)
{
	if (mSubState != 2) {
		dosin(piki);
	}
}

/**
 * @note Address: 0x8018E2C4
 * @note Size: 0xBC
 */
void PikiHipDropState::dosin(Piki* piki)
{
	Vector3f position = piki->getPosition();
	efx::createSimpleBlackDrop(position);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed11, position, RUMBLEID_Both);
	cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
	piki->startSound(PSSE_PK_SE_DOSUN, false);
	mSubState  = 2;
	mWaitTimer = 0.3f;
	earthquake(piki);
}

/**
 * @note Address: 0x8018E380
 * @note Size: 0x108
 */
void PikiHipDropState::earthquake(Piki* piki)
{
	Vector3f position = piki->getPosition();
	f32 rad           = pikiMgr->mParms->mPikiParms.mPoundAOERange.mValue;
	Sys::Sphere sphere(position, rad);
	CellIteratorArg iterArg(sphere);
	iterArg.mUseCustomRadius = 1;

	CellIterator iterator(iterArg);
	iterator.first();

	while (!iterator.isDone()) {
		Creature* creature = static_cast<Creature*>(*iterator);
		InteractEarthquake earthquake(piki, 1.0f);
		creature->stimulate(earthquake);
		iterator.next();
	}
}

/**
 * @note Address: 0x8018E488
 * @note Size: 0x88
 */
void PikiFallMeckState::init(Piki* piki, StateArg* stateArg)
{
	FallMeckStateArg* fallArg = static_cast<FallMeckStateArg*>(stateArg);
	piki->startMotion(IPikiAnims::FALL, IPikiAnims::FALL, nullptr, nullptr);
	piki->endStick();
	if (fallArg) {
		mDoAutoPluck = fallArg->mDoAutoPluck;
	} else {
		mDoAutoPluck = false;
	}
}

/**
 * @note Address: 0x8018E510
 * @note Size: 0x38
 */
void PikiFallMeckState::exec(Piki* piki)
{
	if (piki->mFakePikiBounceTriangle) {
		bounceCallback(piki, piki->mFakePikiBounceTriangle);
	}
}

/**
 * @note Address: 0x8018E548
 * @note Size: 0x4
 */
void PikiFallMeckState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x8018E54C
 * @note Size: 0x4
 */
void PikiFallMeckState::collisionCallback(Piki* piki, Game::CollEvent&)
{
}

/**
 * @note Address: 0x8018E550
 * @note Size: 0x34
 */
void PikiFallMeckState::platCallback(Piki* piki, PlatEvent& platEvent)
{
	transit(piki, PIKISTATE_Walk, nullptr);
}

/**
 * @note Address: N/A
 * @note Size: 0x284
 */
bool PikiFallMeckState::becomePikihead(Piki* piki)
{
	bool check;
	if (GameStat::mePikis >= 99) {
		return false;
	} else {
		PikiMgr::mBirthMode        = PikiMgr::PSM_Force;
		ItemPikihead::Item* sprout = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
		PikiMgr::mBirthMode        = PikiMgr::PSM_Normal;

		Vector3f pikiPos = piki->getPosition();
		pikiPos.y        = mapMgr->getMinY(pikiPos);
		if (sprout) {
			if (piki->inWater()) {
				efx::TEnemyDive fxDive;
				efx::ArgScale fxArg(pikiPos, 1.2f);

				fxDive.create(&fxArg);
			} else {
				efx::createSimplePkAp(pikiPos);
				piki->startSound(PSSE_PK_SE_ONY_SEED_GROUND, true);
			}

			ItemPikihead::InitArg initArg((EPikiKind)piki->mPikiKind, Vector3f::zero, true, Leaf, -1.0f);

			if (mDoAutoPluck) {
				initArg.mAutopluckTimer = 10.0f + 3.0f * sys->mDeltaTime;
			}
			sprout->init(&initArg);
			sprout->setPosition(pikiPos, false);

			CreatureKillArg killArg(CKILL_DontCountAsDeath);

			piki->kill(&killArg);

			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x8018E584
 * @note Size: 0x54C
 */
void PikiFallMeckState::bounceCallback(Piki* piki, Sys::Triangle* triangle)
{
	bool check;
	if (mDoAutoPluck && triangle && ItemPikihead::mgr) {
		if (becomePikihead(piki)) {
			return;
		}
	} else if (triangle && !triangle->mCode.isBald() && piki->might_bury() && ItemPikihead::mgr) {
		if (becomePikihead(piki)) {
			return;
		}
	}

	transit(piki, PIKISTATE_Walk, nullptr);
}

/**
 * @note Address: 0x8018EAD0
 * @note Size: 0xA0
 */
void PikiSuikomiState::init(Piki* piki, StateArg* stateArg)
{
	SuikomiStateArg* suikomiArg = static_cast<SuikomiStateArg*>(stateArg);
	P2ASSERTLINE(2572, suikomiArg != nullptr);
	mCreature        = suikomiArg->mCreature;
	mCollpart        = suikomiArg->mCollpart;
	mStomachCollpart = suikomiArg->mStomachCollpart;
	mState           = 0;
	piki->setMoveVelocity(false);
	piki->endStick();
}

/**
 * @note Address: 0x8018EB70
 * @note Size: 0xEC
 */
void PikiSuikomiState::exec(Piki* piki)
{
	if (!mCreature->isAlive()) {
		piki->mScale = Vector3f(piki->getBaseScale());
		piki->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, nullptr, nullptr);
		transit(piki, PIKISTATE_Walk, nullptr);
		return;
	}

	if (mState == 0) {
		execMouth(piki);
	} else if (mState == 1) {
		execString(piki);
	} else {
		execStomach(piki);
	}
}

/**
 * @note Address: 0x8018EC5C
 * @note Size: 0x1FC
 */
void PikiSuikomiState::execMouth(Piki* piki)
{
	Vector3f position;
	if (mCollpart == nullptr) {
		position = mStomachCollpart->mPosition;
		position.y -= mStomachCollpart->mRadius;

	} else {
		Sys::Tube tube;
		mCollpart->getTube(tube);
		position = tube.mStartPos;
	}

	Vector3f pikiPos = piki->getPosition();
	Vector3f diff    = position - pikiPos;
	f32 length       = _normalise2(diff);

	if (length < 10.0f) {
		if (mCollpart == nullptr) {
			piki->setMoveVelocity(true);
			piki->startCaptureStomach(mStomachCollpart);
			mState = 2;
			piki->startMotion(IPikiAnims::ESA, IPikiAnims::ESA, piki, nullptr);
			mTimer = pikiMgr->mParms->mPikiParms.mKurageKillTime.mValue;
		} else {
			piki->startStick(mCreature, mCollpart);
			piki->setMoveVelocity(true);
			mState = 1;
		}

	} else {
		piki->mVelocity = diff * 600.0f;
	}
}

/**
 * @note Address: 0x8018EE58
 * @note Size: 0x38
 */
void PikiSuikomiState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	if (keyEvent.mType == KEYEVENT_LOOP_START) {
		piki->startSound(PSSE_PK_VC_SWALLOWED, PSGame::SeMgr::SETSE_PikiInJellyfloat);
	}
}

/**
 * @note Address: 0x8018EE90
 * @note Size: 0x108
 */
void PikiSuikomiState::execString(Piki* piki)
{
	Sys::Tube tube;
	mCollpart->getTube(tube);
	Vector3f axisVec;
	tube.getAxisVector(axisVec);
	axisVec *= 350.0f;

	piki->mVelocity = axisVec;
	piki->move(sys->mDeltaTime);

	if (piki->mClimbingPosition.y >= 1.0f) {
		piki->endStick();
		piki->startCaptureStomach(mStomachCollpart);
		mState = 2;
		piki->startMotion(IPikiAnims::ESA, IPikiAnims::ESA, nullptr, nullptr);
		mTimer = pikiMgr->mParms->mPikiParms.mKurageKillTime.mValue;
	}
}

/**
 * @note Address: 0x8018EF98
 * @note Size: 0x14
 */
bool PikiSuikomiState::ignoreAtari(Piki* piki, Creature* creature)
{
	return (u8)(mCreature == creature);
}

/**
 * @note Address: 0x8018EFAC
 * @note Size: 0x1C0
 */
void PikiSuikomiState::execStomach(Piki* piki)
{
	if (mCreature) {
		if (mCreature->mObjectTypeID != OBJTYPE_Teki) {
			JUT_PANICLINE(2680, "not teki (%s)!", mCreature->getCreatureName());
		}

		EnemyBase* enemy = static_cast<EnemyBase*>(mCreature);
		if (!enemy->isEvent(0, EB_Bittered) && !(enemy->mHealth <= 0.0f)) {
			mTimer -= sys->mDeltaTime;
		}
	}

	if (mState == 3) {
		f32 scale = mTimer / 0.5f;
		scale *= piki->getBaseScale();
		piki->mScale = Vector3f(scale);
		if (mTimer <= 0.0f) {
			if (piki->isPikmin()) {
				deathMgr->inc(DeathCounter::COD_Battle);
			}

			piki->kill(nullptr);
		}

	} else if (piki->mTargetCollObj == nullptr) {
		Vector3f vec = Vector3f(0.0f, -900.0f, 0.0f);
		BlowStateArg blowArg(vec, 0.0f, 0, 10, mCreature);
		transit(piki, PIKISTATE_Blow, &blowArg);

	} else if (mTimer <= 0.0f) {
		mState = 3;
		mTimer = 0.5f;
	}
}

/**
 * @note Address: 0x8018F16C
 * @note Size: 0x48
 */
void PikiSuikomiState::cleanup(Piki* piki)
{
	piki->endCaptureStomach();
	piki->setMoveVelocity(true);
}

/**
 * @note Address: 0x8018F1B4
 * @note Size: 0x4
 */
void PikiFlyingState::stopEffect()
{
}

/**
 * @note Address: 0x8018F1B8
 * @note Size: 0x4
 */
void PikiFlyingState::restartEffect()
{
}

/**
 * @note Address: 0x8018F1BC
 * @note Size: 0x124
 */
void PikiFlyingState::init(Piki* piki, StateArg* stateArg)
{
	piki->startMotion(IPikiAnims::ROLLJUMP, IPikiAnims::ROLLJUMP, nullptr, nullptr);

	Navi* navi = piki->mNavi;
	if (navi) {
		if (piki->getKind() == Bulbmin) {
			navi->mSoundObj->stopSound(PSSE_PK_HAPPA_THROW_WAIT, 0);
		} else {
			navi->mSoundObj->stopSound(PSSE_PK_VC_THROW_WAIT, 0);
		}
	}

	piki->mSoundObj->startFreePikiSound(PSSE_PK_VC_THROWN, 90, 0);

	mIsFlowerPiki = 0;
	mFrameCounter = 0;
	mUnusedVal    = 0;
	piki->setMoveVelocity(false);

	efx::TPkEffect* effectsObj = piki->mEffectsObj;
	effectsObj->createNage_(effectsObj->mHamonPosPtr, effectsObj->mBaseObjMatrix->mMatrix.mtxView);
	piki->mUpdateContext.mDoForceActive = true;
	if (PikiMgr::throwPikiDebug) {
		piki->setDebugCollision(true);
	}
}

/**
 * @note Address: 0x8018F2E0
 * @note Size: 0x74
 */
void PikiFlyingState::bounceCallback(Piki* piki, Sys::Triangle* triangle)
{
	transit(piki, PIKISTATE_Walk, nullptr);
	if (!piki->invokeAI()) {
		piki->mBrain->start(PikiAI::ACT_Free, nullptr);
	}

	piki->mSoundObj->startFreePikiSound(PSSE_PK_VC_LAND, 90, 0);
}

/**
 * @note Address: 0x8018F354
 * @note Size: 0x328
 */
void PikiFlyingState::collisionCallback(Piki* piki, CollEvent& event)
{
	Creature* creature = event.mCollidingCreature;
	if (event.mCollisionObj) {
		event.mCollisionObj->isStickable();
	}

	piki->ignoreAtari(event.mCollidingCreature);

	if (creature->isTeki() && creature->isAlive()) {
		bool pressCheck = false;

		Vector3f pikiVel = piki->getVelocity();
		if (pikiVel.y < 0.0f) {
			InteractPress press(piki, 10.0f, event.mCollisionObj);
			pressCheck = event.mCollidingCreature->stimulate(press);
		}

		if (!pressCheck) {
			InteractFlyCollision flyCol(piki, 10.0f, event.mCollisionObj);
			pressCheck = event.mCollidingCreature->stimulate(flyCol);
		}

		if (!pressCheck) {
			if (event.mCollisionObj && event.mCollisionObj->isStickable() && creature->isLivingThing()) {
				piki->startStick(event.mCollidingCreature, event.mCollisionObj);
				piki->startSound(event.mCollidingCreature, PSSE_PK_SE_ATTACH, true);
			} else {
				Vector3f pikiPos = piki->getPosition();
				efx::createSimpleInstick(pikiPos);
			}
		}
	}

	if (creature->mObjectTypeID == OBJTYPE_Plant && event.mCollisionObj && event.mCollisionObj->mCurrentID.match('tops', '*')) {
		piki->startStick(event.mCollidingCreature, event.mCollisionObj);
		piki->startSound(event.mCollidingCreature, PSSE_PK_SE_ATTACH, true);

		transit(piki, PIKISTATE_Walk, nullptr);

		PikiAI::ActCropArg cropArg;
		cropArg.mCreature = creature;

		piki->mBrain->start(PikiAI::ACT_Crop, &cropArg);

	} else if (piki->getStateID() == PIKISTATE_Flying && creature->isCollisionFlick()) {
		transit(piki, PIKISTATE_Walk, nullptr);
		if (!piki->invokeAI(&event, true)) {
			piki->mBrain->start(PikiAI::ACT_Free, nullptr);
		}

		// uh-huh.
		if (piki->mBrain->getCurrAction()) {
			piki->mBrain->getCurrAction();
		}
	}
}

/**
 * @note Address: 0x8018F67C
 * @note Size: 0x6C
 */
bool PikiFlyingState::ignoreAtari(Piki* piki, Creature* creature)
{
	if (creature->isNavi() || creature->isPiki()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8018F6E8
 * @note Size: 0x3CC
 */
void PikiFlyingState::exec(Piki* piki)
{
	if (++mFrameCounter >= 240) {
		bounceCallback(piki, nullptr);
		return;
	}

	if (piki->getKind() == Purple && piki->mVelocity.y <= 0.0f) {
		transit(piki, PIKISTATE_HipDrop, nullptr);
		return;
	}

	f32 fallDiff;
	f32 gravity          = _aiConstants->mGravity();
	f32 gravityFactor    = gravity * 0.8f;
	f32 flowerFallFactor = gravity * piki->getParms()->mPikiParms.mFlowerPikiGravity();

	fallDiff       = gravityFactor - flowerFallFactor;
	f32 fallScale  = 0.15f;
	f32 fallFactor = (gravityFactor * fallScale - 0.075f * fallDiff) - flowerFallFactor * fallScale;

	if (mIsFlowerPiki == 0 && piki->getHappa() == Flower && piki->mVelocity.y <= 0.0f) {
		mIsFlowerPiki = 1;
		piki->startMotion(IPikiAnims::HANG, IPikiAnims::HANG, nullptr, nullptr);

		f32 throwHeight;
		if (piki->getKind() == Yellow) {
			throwHeight = naviMgr->mNaviParms->mNaviParms.mThrowHeightYellow();
		} else {
			throwHeight = naviMgr->mNaviParms->mNaviParms.mThrowHeightMax();
		}

		f32 heightOffset   = _sqrtf(SQUARE(fallFactor) + throwHeight * 2.0f * flowerFallFactor);
		f32 landingTime    = naviMgr->mNaviParms->mNaviParms.mLandingTime();
		f32 heightFactor   = -fallFactor + heightOffset;
		f32 throwMagnitude = landingTime * 0.5f / (heightFactor / flowerFallFactor);

		mVelocityDirection.x = piki->mVelocity.x;
		mVelocityDirection.y = 0.0f;
		mVelocityDirection.z = piki->mVelocity.z;

		mVelocityDirection.normalise();

		f32 speed             = piki->mVelocity.length2D();
		mDirectionalSpeed     = speed;
		mHalfDirectionalSpeed = 0.5f * speed;

		piki->mVelocity.scale2D(throwMagnitude);
		piki->mTargetVelocity.set2D(piki->mVelocity);

		piki->mVelocity.y       = 0.0f;
		piki->mTargetVelocity.y = 0.0f;
		mSlowFallWaitTimer      = 0.0f;
	} else if (mIsFlowerPiki) {
		piki->mFaceDir = roundAng(piki->mFaceDir + PI * sys->mDeltaTime / 0.42f);
		mSlowFallWaitTimer += sys->mDeltaTime;

		f32 randRange = ((randFloat() - 0.5f) * 0.01f);
		f32 activeFallFactor;
		if (mSlowFallWaitTimer < fallScale) {
			activeFallFactor = gravityFactor - mSlowFallWaitTimer * (fallDiff / fallScale);
		} else {
			activeFallFactor = flowerFallFactor;
		}

		f32 flowerGravity  = _aiConstants->mGravity() - activeFallFactor;
		f32 randFactor     = 1.0f + randRange;
		f32 velocityChange = randFactor * flowerGravity;
		piki->mVelocity.y  = velocityChange * sys->mDeltaTime + piki->mVelocity.y;
	}
}

/**
 * @note Address: 0x8018FAB4
 * @note Size: 0x68
 */
void PikiFlyingState::cleanup(Piki* piki)
{
	piki->mUpdateContext.mDoForceActive = false;
	piki->setMoveVelocity(true);
	piki->mEffectsObj->killNage_();
	piki->setDebugCollision(false);
}

/**
 * @note Address: 0x8018FB1C
 * @note Size: 0x170
 */
void PikiFlickState::init(Piki* piki, StateArg* stateArg)
{
	// ??
	JUT_PANICLINE(3057, "flick:init:erase\n");
	mState = FLICK_Start;

	FlickStateArg* flickArg = static_cast<FlickStateArg*>(stateArg);
	mKnockBackAngle         = flickArg->mAngle;
	mFaceDirOffset          = 0.1f * (PI * randFloat());
	piki->mVelocity.y       = 50.0f * randFloat() + 100.0f;
	f32 baseSpeed           = flickArg->mSpeed;
	mKnockBackSpeed         = (0.1f * baseSpeed) * randFloat() + baseSpeed;

	piki->startMotion(IPikiAnims::JHIT, IPikiAnims::JHIT, this, nullptr);
	mPiki       = piki;
	mIsWhistled = false;
}

/**
 * @note Address: 0x8018FC8C
 * @note Size: 0x18
 */
void PikiFlickState::onFlute(Piki* piki, Navi* navi)
{
	mKnockDownTimer = 0.0f;
	mIsWhistled     = true;
	piki->mNavi     = navi;
}

/**
 * @note Address: 0x8018FCA4
 * @note Size: 0x208
 */
void PikiFlickState::exec(Piki* piki)
{
	// ???
	JUT_PANICLINE(3092, "flick:exec:erase\n");
	if (mState == FLICK_Start) { // yeet the piki.
		f32 speed         = mKnockBackSpeed;
		piki->mVelocity.x = -speed * sinf(mKnockBackAngle);
		piki->mVelocity.z = -speed * cosf(mKnockBackAngle);

		piki->mFaceDir = roundAng(piki->mFaceDir + mFaceDirOffset);
		return;
	}

	if (mState == FLICK_Land) { // piki has landed.
		mKnockDownTimer -= sys->mDeltaTime;
		if (mKnockDownTimer < 0.0f && piki->isAlive()) { // if knock down timer has expired + piki is alive (!), get up.
			piki->startMotion(IPikiAnims::GETUP, IPikiAnims::GETUP, this, nullptr);
			mState = FLICK_Stand;
		}

		// Adjust simulation velocity?
		piki->mVelocity.x = 0.9f * piki->mVelocity.x;
		piki->mVelocity.z = 0.9f * piki->mVelocity.z;

		// set actual velocity to 0.
		piki->mTargetVelocity = Vector3f(0.0f);
		return;
	}

	// we're either flying through the air or standing up
	piki->mVelocity.x = 0.9f * piki->mVelocity.x;
	piki->mVelocity.z = 0.9f * piki->mVelocity.z;

	piki->mTargetVelocity = Vector3f(0.0f);
}

/**
 * @note Address: 0x8018FEAC
 * @note Size: 0x124
 */
void PikiFlickState::onKeyEvent(SysShape::KeyEvent const& event)
{
	Piki* piki = mPiki;
	switch (event.mType) {
	case KEYEVENT_END:
		if (mState == FLICK_Start) { // initial flick anim ends
			piki->startMotion(IPikiAnims::JKOKE, IPikiAnims::JKOKE, this, nullptr);
			mState = FLICK_InAir;
			return;
		}

		if (mState == FLICK_InAir) { // thrown through air animation ends
			mState      = FLICK_Land;
			f32 minTime = static_cast<PikiParms*>(piki->mParms)->mPikiParms.mKnockdownRecoverTimeMin.mValue;
			f32 maxTime = static_cast<PikiParms*>(piki->mParms)->mPikiParms.mKnockdownRecoverTimeMax.mValue;

			mKnockDownTimer = (maxTime - minTime) * randFloat() + minTime;
			return;
		}

		// getup animation ends
		randFloat(); // something's gotten commented out here I assume
		transit(piki, PIKISTATE_Walk, nullptr);
		break;
	}
}

/**
 * @note Address: 0x8018FFD0
 * @note Size: 0xAC
 */
void PikiFlickState::cleanup(Piki* piki)
{
	// if piki is alive and has been whistled by a captain, put them in the party!
	if (piki->isAlive() && mIsWhistled) {
		PikiAI::ActFormationInitArg initArg(piki->mNavi);
		initArg.mDoUseTouchCooldown = true;
		piki->mBrain->start(PikiAI::ACT_Formation, &initArg);
	}
}

/**
 * @note Address: 0x8019007C
 * @note Size: 0x1A4
 */
void PikiBlowState::init(Piki* piki, StateArg* stateArg)
{
	BlowStateArg* blowArg = static_cast<BlowStateArg*>(stateArg);
	if (!blowArg) {
		JUT_PANICLINE(3223, "flick needs PikiBlowInitArg !\n");
	} else {
		mBlowDirection = blowArg->mBlowDirection;
		mChanceToLeaf  = blowArg->mChanceToLeaf;
		mIsLethal      = blowArg->mIsLethal;
		mFlags         = blowArg->mFlags;
		mHeldNavi      = blowArg->mHeldNavi;
	}

	mIsWhistled = false;
	piki->startMotion(IPikiAnims::JHIT, IPikiAnims::JHIT, piki, nullptr);
	mState = 0;

	piki->mVelocity.y = mBlowDirection.y * (0.1f * randFloat() + 1.0f);
	piki->mFaceDir    = roundAng(JMAAtan2Radian(mBlowDirection.x, mBlowDirection.z) + PI);

	if (mFlags & 0x4) {
		if (piki->getHappa() >= Bud) {
			efx::TPkEffect* effectObj = piki->mEffectsObj;
			efx::createSimpleChiru(*effectObj->mStemPosition, effectObj->mPikiColor);
			piki->startSound(PSSE_PK_FLOWER_FALL_VOICE, true);
			piki->mHappaKind = Leaf;
		}
	} else {
		piki->startSound(PSSE_PK_VC_SCATTERED, true);
	}

	if (piki->isStickTo()) {
		piki->endStick();
	}
}

/**
 * @note Address: 0x80190220
 * @note Size: 0x140
 */
void PikiBlowState::exec(Piki* piki)
{
	if (piki->isStickTo()) {
		piki->endStick();
	}

	switch (mState) {
	case BLOW_Start:
		piki->mVelocity.x = mBlowDirection.x;
		piki->mVelocity.z = mBlowDirection.z;
		if (!piki->assertMotion(IPikiAnims::JHIT)) {
			mState = BLOW_Knockback;
			piki->startMotion(IPikiAnims::JKOKE, IPikiAnims::JKOKE, piki, nullptr);
		}
		break;
	case BLOW_Knockback:
		piki->mVelocity.x *= 0.9f;
		piki->mVelocity.z *= 0.9f;
		if (!piki->assertMotion(IPikiAnims::JKOKE)) {
			transit(piki, PIKISTATE_Walk, nullptr);
		} else if (piki->mFakePikiBounceTriangle) {
			bounceCallback(piki, piki->mFakePikiBounceTriangle);
		}
		break;
	}
}

/**
 * @note Address: 0x80190360
 * @note Size: 0x4
 */
void PikiBlowState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x80190364
 * @note Size: 0x64
 */
void PikiBlowState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& keyEvent)
{
	if (keyEvent.mType == KEYEVENT_END && mState == BLOW_Start) {
		mState = BLOW_Knockback;
		piki->startMotion(IPikiAnims::JKOKE, IPikiAnims::JKOKE, nullptr, nullptr);
	}
}

/**
 * @note Address: 0x801903C8
 * @note Size: 0x10
 */
void PikiBlowState::onFlute(Piki* piki, Navi* navi)
{
	mIsWhistled = true;
	piki->mNavi = navi;
}

/**
 * @note Address: 0x801903D8
 * @note Size: 0x168
 */
void PikiBlowState::bounceCallback(Piki* piki, Sys::Triangle* triangle)
{
	u16 flag = (mIsWhistled ? 0x8000 : 0) | mFlags;
	KokeDamageStateArg kokeArg(flag, 1.0f);
	if (randFloat() < mChanceToLeaf) {
		if (piki->getHappa() >= Bud) {
			efx::TPkEffect* effectsObj = piki->mEffectsObj;
			efx::createSimpleChiru(*effectsObj->mStemPosition, effectsObj->mPikiColor);
			piki->mHappaKind = Leaf;
		}

		if (mHeldNavi) {
			piki->startSound(mHeldNavi, PSSE_PK_VC_DAMAGED, true);
		}
	}

	if (mIsLethal) {
		piki->startSound(PSSE_PK_VC_PRESSED, true);
		if (piki->isPikmin()) {
			DeathMgr::inc(DeathCounter::COD_Explosion);
		}
		piki->kill(nullptr);
		transit(piki, PIKISTATE_Dead, nullptr);

	} else {
		transit(piki, PIKISTATE_KokeDamage, &kokeArg);
	}
}

/**
 * @note Address: 0x80190540
 * @note Size: 0x8C
 */
void PikiKokeDamageState::init(Piki* piki, StateArg* stateArg)
{
	KokeDamageStateArg* kokeArg = static_cast<KokeDamageStateArg*>(stateArg);
	if (!kokeArg) {
		mTimer = 0.0f;
		mFlags = 0;

	} else {
		mTimer = kokeArg->mTime;
		mFlags = kokeArg->mFlags;
	}

	piki->startMotion(IPikiAnims::JKOKE, IPikiAnims::JKOKE, piki, nullptr);
	mState = KOKEDAMAGE_Start;
}

/**
 * @note Address: 0x801905CC
 * @note Size: 0x15C
 */
void PikiKokeDamageState::exec(Piki* piki)
{
	piki->mTargetVelocity = Vector3f(0.0f);
	piki->mVelocity       = Vector3f(0.0f);

	if (mState == KOKEDAMAGE_Unk1) {
		mTimer -= sys->mDeltaTime;
		if (mTimer <= 0.0f) {
			piki->startMotion(IPikiAnims::GETUP, IPikiAnims::GETUP, piki, nullptr);
			mState = KOKEDAMAGE_Unk2;
		}
	}

	if (mState == 0 && !piki->assertMotion(IPikiAnims::JKOKE)) {
		mState = KOKEDAMAGE_Unk1;
		return;
	}

	if (mState == KOKEDAMAGE_Unk2 && !piki->assertMotion(IPikiAnims::GETUP)) {
		if (mFlags & 0x8) {
			EmotionStateArg emotionArg(5);
			transit(piki, PIKISTATE_Emotion, &emotionArg);
		} else {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
	}
}

/**
 * @note Address: 0x80190728
 * @note Size: 0x1C
 */
void PikiKokeDamageState::onFlute(Piki* piki, Navi* navi)
{
	mFlags |= 0x8000;
	mTimer      = 0.0f;
	piki->mNavi = navi;
}

/**
 * @note Address: 0x80190744
 * @note Size: 0xE8
 */
void PikiKokeDamageState::cleanup(Piki* piki)
{
	if (piki->isAlive()) {
		if (mFlags & 0x8000) {
			PikiAI::ActFormationInitArg formArg(piki->mNavi);
			formArg.mDoUseTouchCooldown = true;
			piki->mBrain->start(PikiAI::ACT_Formation, &formArg);
		} else if (mFlags & 0x2) {
			if (piki->getKind() != Bulbmin) {
				piki->mBrain->start(PikiAI::ACT_Free, nullptr);
			}
		} else {
			piki->startSound(PSSE_PK_VC_ANGRY1, true);
		}
	}
}

/**
 * @note Address: 0x8019082C
 * @note Size: 0x60
 */
void PikiKokeDamageState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	if (event.mType == KEYEVENT_END) {
		if (mState == KOKEDAMAGE_Start) {
			mState = KOKEDAMAGE_Unk1;
			return;
		}

		if (mState == KOKEDAMAGE_Unk2) {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
	}
}

/**
 * @note Address: 0x8019088C
 * @note Size: 0x120
 */
void PikiKokeState::init(Piki* piki, StateArg* stateArg)
{
	if (randFloat() < 0.99f) {
		piki->startMotion(IPikiAnims::KOROBU2, IPikiAnims::KOROBU2, piki, nullptr);
		mFallSoundType = true;
	} else {
		piki->startMotion(IPikiAnims::KOROBU, IPikiAnims::KOROBU, piki, nullptr);
		mFallSoundType = false;
	}

	mTimer = 4.0f * randFloat() + 3.0f;
}

/**
 * @note Address: 0x801909AC
 * @note Size: 0xC
 */
void PikiKokeState::onFlute(Piki* piki, Navi* navi)
{
	mTimer = 0;
}

/**
 * @note Address: 0x801909B8
 * @note Size: 0x94
 */
void PikiKokeState::exec(Piki* piki)
{
	int animIdx = piki->mAnimator.mSelfAnimator.getAnimIndex();

	if (animIdx != IPikiAnims::KOROBU && animIdx != IPikiAnims::KOROBU2) {
		transit(piki, PIKISTATE_Walk, nullptr);
	}

	// *= doesnt work here
	piki->mTargetVelocity = piki->mTargetVelocity * 0.955f;
}

/**
 * @note Address: 0x80190A4C
 * @note Size: 0xF0
 */
void PikiKokeState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_200:
		if (mFallSoundType) {
			piki->startSound(PSSE_PK_VC_SLIP1, true);
		} else {
			piki->startSound(PSSE_PK_VC_SLIP2, true);
		}
		break;

	case KEYEVENT_2:
		piki->mVelocity       = Vector3f(0.0f);
		piki->mTargetVelocity = Vector3f(0.0f);
		break;

	case KEYEVENT_LOOP_END:
		mTimer--;
		if (mTimer <= 0) {
			piki->mAnimator.mSelfAnimator.setFlag(SysShape::Animator::AnimFinishMotion);
			piki->mAnimator.mBoundAnimator.setFlag(SysShape::Animator::AnimFinishMotion);
		}
		break;

	case KEYEVENT_END:
		transit(piki, PIKISTATE_Walk, nullptr);
		break;
	}
}

/**
 * @note Address: 0x80190B3C
 * @note Size: 0x4
 */
void PikiKokeState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x80190B40
 * @note Size: 0x200
 */
void PikiDrownState::init(Piki* piki, StateArg* stateArg)
{
	piki->mBrain->start(PikiAI::ACT_Free, nullptr);
	piki->startMotion(IPikiAnims::TYAKUSUI, IPikiAnims::TYAKUSUI, piki, nullptr);

	if (piki->mAnimator.mSelfAnimator.getAnimIndex() == IPikiAnims::TYAKUSUI) {
		mSubState = 0;
	} else {
		mSubState = 1;
		piki->startMotion(IPikiAnims::OBORERU, IPikiAnims::OBORERU, piki, nullptr);
	}

	mSizumuAnimDelay      = randInt(2) + 6;
	piki->mTargetVelocity = Vector3f(0.0f);
	mUnusedVal            = 0;
	piki->mTargetVelocity = Vector3f(0.0f);

	if (piki->isStickTo()) {
		piki->endStick();
	}

	mNavi      = nullptr;
	mIsCalled  = false;
	mMoveState = 0;
	_18        = 0.0f;
	mIsEscaped = false;

	efx::TPkEffect* effectsObj = piki->mEffectsObj;
	effectsObj->killMoe_();
	if (effectsObj->isFlag(PKEFF_Fire)) {
		effectsObj->resetFlag(PKEFF_Fire);
		effectsObj->createMoeSmoke_(effectsObj->mStemPosition);
		effectsObj->mMoeSmokeTimer = 60;
		efx::createSimpleChinka(*effectsObj->mStemPosition);
	}

	efx::TPkEffect* effectsObj2 = piki->mEffectsObj;
	effectsObj2->killWater_();
	if (effectsObj2->isFlag(PKEFF_Water)) {
		effectsObj2->resetFlag(PKEFF_Water);
		efx::createSimpleWaterOff(*effectsObj2->mAltStemPosition);
	}

	efx::TPkEffect* effectsObj3 = piki->mEffectsObj;
	effectsObj3->killChudoku_();
	if (effectsObj3->isFlag(PKEFF_Gas)) {
		effectsObj3->resetFlag(PKEFF_Gas);
		efx::createSimpleGedoku(*effectsObj3->mStemPosition);
	}
}

/**
 * @note Address: 0x80190D40
 * @note Size: 0x40
 */
bool PikiDrownState::soft_transittable(int stateID)
{
	return stateID == PIKISTATE_Emotion || stateID == PIKISTATE_Pressed || stateID == PIKISTATE_WaterHanged;
}

/**
 * @note Address: 0x80190D80
 * @note Size: 0x10
 */
void PikiDrownState::onFlute(Piki* piki, Navi* navi)
{
	mNavi     = navi;
	mIsCalled = true;
}

/**
 * @note Address: 0x80190D90
 * @note Size: 0xC
 */
void PikiDrownState::outWaterCallback(Piki* piki)
{
	mIsEscaped = true;
}

/**
 * @note Address: 0x80190D9C
 * @note Size: 0x74C
 */
void PikiDrownState::exec(Piki* piki)
{
	if (mIsEscaped) {
		if (mNavi) {
			Vector3f naviPos = mNavi->getPosition();
			Vector3f pikiPos = piki->getPosition();
			piki->mFaceDir   = JMAAtan2Radian(naviPos.x - pikiPos.x, naviPos.z - pikiPos.z);
		}

		piki->mVelocity = Vector3f(100.0f * sinf(piki->mFaceDir), 160.0f, 100.0f * cosf(piki->mFaceDir));
		EmotionStateArg emotionArg(5);
		transit(piki, PIKISTATE_Emotion, &emotionArg);
		return;
	}

	if (piki->mWaterBox) {
		f32 level        = piki->mWaterBox->getSeaLevel();
		Vector3f pikiPos = piki->getPosition();

		if (mSubState == 0) {
			switch (mMoveState) {
			case 0:
				piki->mVelocity.z = 0.0f;
				piki->mVelocity.x = 0.0f;
				if (piki->mVelocity.y < 60.0f) {
					piki->mVelocity.y += 500.0f * sys->mDeltaTime;
				}
				piki->mTargetVelocity = piki->mVelocity;
				break;

			case 2:
				piki->mVelocity       = Vector3f(0.0f);
				piki->mVelocity.y     = 60.0f;
				piki->mTargetVelocity = piki->mVelocity;

				Vector3f newPikiPos = piki->getPosition();
				if (newPikiPos.y >= level - 5.0f) {
					piki->mPosition.x = newPikiPos.x;
					piki->mPosition.y = level - 5.0f;
					piki->mPosition.z = newPikiPos.z;
					mSubState         = 1;
					piki->startMotion(IPikiAnims::OBORERU, IPikiAnims::OBORERU, piki, nullptr);
					piki->mSoundObj->startFreePikiSetSound(PSSE_PK_VC_WATER_DROWN, PSGame::SeMgr::SETSE_PikiWorking, 0, 0);
				}
				break;
			}
		} else if (mSubState == 2) {
			piki->mVelocity.z       = 0.0f;
			piki->mVelocity.x       = 0.0f;
			piki->mVelocity.y       = -5.0f;
			piki->mTargetVelocity.y = piki->mVelocity.y;
			piki->mTargetVelocity.z = 0.0f;
			piki->mTargetVelocity.x = 0.0f;
		} else {
			Vector3f newPikiPos = piki->getPosition();
			if (newPikiPos.y < level - 5.0f) {
				piki->mPosition.x = newPikiPos.x;
				piki->mPosition.y = level - 5.0f;
				piki->mPosition.z = newPikiPos.z;
			}
			piki->mVelocity.y       = 0.0f;
			piki->mTargetVelocity.y = 0.0f;
		}
	}

	if (mSubState == 1 && !piki->assertMotion(IPikiAnims::OBORERU)) {
		mSubState = 2;
		piki->startMotion(IPikiAnims::SIZUMU, IPikiAnims::SIZUMU, piki, nullptr);

	} else if (mSubState == 2 && !piki->assertMotion(IPikiAnims::IPikiAnims::SIZUMU)) {
		DeathMgr::inc(DeathCounter::COD_Water);
		piki->mTekiKillID = -1;
		piki->kill(nullptr);
	}

	if (mSubState == 1) {
		Navi* navi;
		if (mNavi) {
			navi = mNavi;
		} else {
			navi = piki->mNavi;
		}

		Vector3f naviPos;
		Vector3f pikiPos;
		if (!navi) {
			for (int i = 0; i < 2; i++) {
				Navi* currNavi = naviMgr->getAt(i);
				if (currNavi->isAlive()) {
					naviPos = currNavi->getPosition();
					pikiPos = piki->getPosition();
					if (naviPos.distance(pikiPos) < 1000.0f) {
						navi = currNavi;
					}
				}
			}
		}

		if (!mIsCalled) {
			piki->mTargetVelocity.x = 0.0f;
			piki->mTargetVelocity.z = 0.0f;
			piki->mVelocity.z       = 0.0f;
			piki->mVelocity.x       = 0.0f;
			return;
		}

		if (navi) {
			Vector3f sep = navi->getPosition() - piki->getPosition();
			sep.normalise();

			mMoveVelocity = sep * piki->getSpeed(0.5f);

			//naviPos gets reused here matches retail
			naviPos = mMoveVelocity - piki->mTargetVelocity;

			f32 speedDiff = naviPos.normalise();
			f32 oldX      = piki->mTargetVelocity.x;
			f32 frame;
			f32 modifier = 15.0f;
			if (mIsCalled) {
				modifier *= 2.0f;
			}
			frame = sys->mDeltaTime;
			Vector3f oldVel(oldX, piki->mTargetVelocity.y, piki->mTargetVelocity.z);

			if (speedDiff > modifier * frame) {
				piki->mTargetVelocity = oldVel + (naviPos * modifier) * frame;
			} else {
				piki->mTargetVelocity = oldVel + naviPos * frame;
			}

			piki->mVelocity.x = piki->mTargetVelocity.x;
			piki->mVelocity.z = piki->mTargetVelocity.z;
			piki->mVelocity   = piki->mTargetVelocity;
		}
	}
}

/**
 * @note Address: 0x801914E8
 * @note Size: 0x4
 */
void PikiDrownState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x801914EC
 * @note Size: 0x120
 */
void PikiDrownState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_2:
		if (mSubState == 0) {
			mMoveState = 2;
		}
		break;

	case KEYEVENT_LOOP_START:
		piki->mSoundObj->startFreePikiSetSound(PSSE_PK_VC_WATER_DROWN, PSGame::SeMgr::SETSE_PikiWorking, 0, 0);
		break;

	case KEYEVENT_LOOP_END:
		if (mSubState == 1) {
			mSizumuAnimDelay--;
			if (mSizumuAnimDelay == 0) {
				mSubState = 2;
				piki->startMotion(IPikiAnims::SIZUMU, IPikiAnims::SIZUMU, piki, nullptr);
			}
		}
		break;

	case KEYEVENT_END:
		switch (mSubState) {
		case 0:
			// commented out code probably
			break;
		case 2:
			DeathMgr::inc(DeathCounter::COD_Water);
			piki->mTekiKillID = -1;
			piki->kill(nullptr);
			break;
		}
		break;
	}
}

/**
 * @note Address: 0x8019160C
 * @note Size: 0x358
 */
void PikiEmotionState::init(Piki* piki, StateArg* stateArg)
{
	EmotionStateArg* emotionArg = static_cast<EmotionStateArg*>(stateArg);
	P2ASSERTLINE(3929, emotionArg);

	mEmotionType = emotionArg->mType;
	mUnusedVal   = 0;

	if (mEmotionType == 9) {
		return;
	}

	switch (mEmotionType) {
	case 0: {
		KandoLib::Choice choiceList[3] = { { IPikiAnims::JUMPB1, 0.33f }, { IPikiAnims::JUMP, 0.33f }, { IPikiAnims::JUMPR1, 0.33f } };

		u32 choice = KandoLib::getRandomChoice(choiceList, 3);
		mAnimIdx   = choice;

		piki->startMotion(choice, choice, piki, nullptr);
		break;
	}

	case 1: {
		KandoLib::Choice choiceList[3] = { { IPikiAnims::JUMPB1, 0.33f }, { IPikiAnims::JUMP, 0.33f }, { IPikiAnims::JUMPR1, 0.33f } };

		u32 choice = KandoLib::getRandomChoice(choiceList, 3);
		mAnimIdx   = choice;

		piki->startMotion(choice, choice, piki, nullptr);
		break;
	}

	case 2: {
		KandoLib::Choice choiceList[2] = { { IPikiAnims::SAGASU, 0.5f }, { IPikiAnims::SAGASU2, 0.5f } };

		u32 choice = KandoLib::getRandomChoice(choiceList, 2);
		mAnimIdx   = choice;

		piki->startMotion(choice, choice, piki, nullptr);
		break;
	}

	case 4: {
		KandoLib::Choice choiceList[2] = { { IPikiAnims::GAKKARI, 0.5f }, { IPikiAnims::SAGASU2, 0.5f } };

		u32 choice = KandoLib::getRandomChoice(choiceList, 2);
		mAnimIdx   = choice;

		piki->startMotion(choice, choice, piki, nullptr);
		break;
	}

	case 3: {
		mAnimIdx = IPikiAnims::GAKKARI;
		piki->startMotion(IPikiAnims::GAKKARI, IPikiAnims::GAKKARI, piki, nullptr);
		break;
	}

	case 5: {
		mAnimIdx = IPikiAnims::MIZUAGE;
		piki->startMotion(IPikiAnims::MIZUAGE, IPikiAnims::MIZUAGE, piki, nullptr);
		break;
	}

	case 6: {
		mAnimIdx = IPikiAnims::JUMPB1;
		piki->startMotion(IPikiAnims::JUMPB1, IPikiAnims::JUMPB1, piki, nullptr);
		break;
	}

	case 7: {
		mAnimIdx = IPikiAnims::WAIT;
		piki->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, piki, nullptr);
		break;
	}

	case 8:
		JUT_PANICLINE(4112, "rapCnt の使い方がよくなので凍結中! (RAPTURE)\n");
		break;
	}
}

/**
 * @note Address: 0x80191964
 * @note Size: 0xA8
 */
void PikiEmotionState::exec(Piki* piki)
{
	piki->mTargetVelocity = Vector3f(0.0f);
	if (!piki->assertMotion(mAnimIdx)) {
		transit(piki, PIKISTATE_Walk, nullptr);
	} else if (mEmotionType == 9) {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80191A0C
 * @note Size: 0x4
 */
void PikiEmotionState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x80191A10
 * @note Size: 0xC0
 */
void PikiEmotionState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_200:
		switch (mAnimIdx) {
		case IPikiAnims::MIZUAGE:
			piki->startSound(PSSE_PK_VC_BURUBURU, true);
			break;
		}
		break;

	case KEYEVENT_END:
		if (mEmotionType == 8) {
			mRepeatCounter--;
			if (mRepeatCounter) {
				EmotionStateArg emotionArg(mEmotionType);
				init(piki, &emotionArg);
				return;
			}
		}
		mRepeatCounter = 0;
		transit(piki, PIKISTATE_Walk, nullptr);
		break;
	}
}

/**
 * @note Address: 0x80191AD0
 * @note Size: 0x170
 */
void PikiAbsorbState::init(Piki* piki, StateArg* stateArg)
{
	AbsorbStateArg* absorbArg = static_cast<AbsorbStateArg*>(stateArg);
	P2ASSERTLINE(4210, absorbArg);
	mAbsorbingCreature = absorbArg->mCreature;
	P2ASSERTLINE(4212, mAbsorbingCreature);
	piki->startMotion(IPikiAnims::MIZUNOMI, IPikiAnims::MIZUNOMI, piki, nullptr);
	mState             = 0;
	mHasAbsorbed       = 0;
	Vector3f targetPos = mAbsorbingCreature->getPosition();
	piki->turnTo(targetPos);

	P2ASSERTLINE(4219, mAbsorbingCreature->getJAIObject());
	piki->mSoundObj->startPikiSound(mAbsorbingCreature->getJAIObject(), PSSE_PK_VC_DRINK, 0);
	mAbsorbTimer = 0;
}

/**
 * @note Address: 0x80191C40
 * @note Size: 0x154
 */
void PikiAbsorbState::exec(Piki* piki)
{
	piki->mVelocity.z     = 0.0f;
	piki->mVelocity.x     = 0.0f;
	piki->mTargetVelocity = Vector3f(0.0f);

	if (mState == 1 && mAbsorbingCreature->isAlive() && !mHasAbsorbed) {
		InteractAbsorb absorb(piki);
		mAbsorbingCreature->stimulate(absorb);
		mHasAbsorbed = 1;
	}

	if (!mHasAbsorbed) {
		mAbsorbTimer++;
		if (mAbsorbTimer > 180) {
			mHasAbsorbed = 1;
			mAbsorbTimer = 180;
		}
	}

	if (!piki->assertMotion(IPikiAnims::MIZUNOMI)) {
		if (mHasAbsorbed) {
			transit(piki, PIKISTATE_Growup, nullptr);
		} else {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
	}
}

/**
 * @note Address: 0x80191D94
 * @note Size: 0x12C
 */
void PikiAbsorbState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_LOOP_START:
		mState = 1;
		break;

	case KEYEVENT_LOOP_END:
		Creature* creature = mAbsorbingCreature;
		P2ASSERTLINE(4261, creature->mObjectTypeID == OBJTYPE_Honey);
		ItemHoney::Item* nectar = (ItemHoney::Item*)mAbsorbingCreature;

		if (!mAbsorbingCreature->isAlive() || mHasAbsorbed || !nectar->isShrinking()) {
			mState = 2;
			piki->finishMotion();
		}
		break;

	case KEYEVENT_END:
		if (mHasAbsorbed) {
			transit(piki, PIKISTATE_Growup, nullptr);
		} else {
			transit(piki, PIKISTATE_Walk, nullptr);
		}
		break;
	}
}

/**
 * @note Address: 0x80191EC0
 * @note Size: 0x4
 */
void PikiAbsorbState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x80191EC4
 * @note Size: 0xE0
 */
void PikiGrowupState::init(Piki* piki, StateArg* stateArg)
{
	if (randFloat() > 0.5f) {
		mAnimIdx = IPikiAnims::GROWUP1;
	} else {
		mAnimIdx = IPikiAnims::GROWUP2;
	}

	piki->startMotion(mAnimIdx, mAnimIdx, piki, nullptr);

	if (!piki->assertMotion(mAnimIdx)) {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80191FA4
 * @note Size: 0x78
 */
void PikiGrowupState::exec(Piki* piki)
{
	piki->mTargetVelocity = Vector3f(0.0f);
	if (!piki->assertMotion(mAnimIdx)) {
		transit(piki, PIKISTATE_Walk, nullptr);
	}
}

/**
 * @note Address: 0x8019201C
 * @note Size: 0x1A0
 */
void PikiGrowupState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_2:
		if (piki->getHappa() != Flower) {
			piki->changeHappa(Flower);
			piki->startSound(PSSE_PK_FLOWER_VOICE, true);
			if (piki->getCurrActionID() == 0) {
				if (!piki->mNavi) {
					piki->mNavi = naviMgr->getAliveOrima(ALIVEORIMA_Active);
				}

				piki->mNavi->mCPlateMgr->changeFlower(piki);
			}

			if (gameSystem->isFlag(GAMESYS_IsGameWorldActive) && !playData->isDemoFlag(DEMO_First_Nectar_Use)) {
				if (moviePlayer) {
					MoviePlayArg movieArg("g34_yellow_extract", nullptr, nullptr, 0);
					movieArg.setTarget(piki);
					moviePlayer->mTargetObject = piki;
					moviePlayer->play(movieArg);
				}

				playData->setDemoFlag(DEMO_First_Nectar_Use);
			}
		}
		break;

	case KEYEVENT_END:
		transit(piki, PIKISTATE_Walk, nullptr);
		break;
	}
}

/**
 * @note Address: 0x801921BC
 * @note Size: 0x4
 */
void PikiGrowupState::cleanup(Piki* piki)
{
}

/**
 * @note Address: 0x801921C0
 * @note Size: 0x20
 */
void PikiEscapeState::init(Piki* piki, StateArg* stateArg)
{
	initRun(piki);
}

/**
 * @note Address: 0x801921E0
 * @note Size: 0x74
 */
void PikiEscapeState::initRun(Piki* piki)
{
	mSubState = 0;

	u8 check;
	if (randFloat() > 0.5f) {
		check = 1;
	} else {
		check = 0;
	}

	mDoFinishAnim = check;
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x120
//  */
// void PikiEscapeState::initKoke(Piki* piki)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x190
 */
Creature* PikiEscapeState::findTeki(Piki* piki)
{
	Vector3f pikiPos = piki->getPosition();

	Sys::Sphere sphere(pikiPos, 200.0f);

	CellIteratorArg iterArg(sphere);
	CellIterator iter(iterArg);

	f32 minDist      = 200.0f;
	Creature* target = nullptr;

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isTeki() && creature->isLivingThing() && creature->isAlive()) {
			Vector3f creaturePos = creature->getPosition();
			Vector3f diff
			    = Vector3f(creaturePos.y - sphere.mPosition.y, creaturePos.z - sphere.mPosition.z, creaturePos.x - sphere.mPosition.x);
			f32 len = _length2(diff);
			if (len < minDist) {
				target  = creature;
				minDist = len;
			}
		}
	}

	return target;
}

/**
 * @note Address: 0x80192254
 * @note Size: 0x5C8
 */
void PikiEscapeState::exec(Piki* piki)
{
	switch (mSubState) {
	case 1:
	case 2:
		piki->mTargetVelocity = piki->mTargetVelocity * 0.955f;
		return;
	}

	Creature* target = findTeki(piki);

	if (target) {
		Vector3f targetPos = target->getPosition();
		Vector3f pikiPos   = piki->getPosition();

		Vector3f diff = pikiPos - targetPos;

		f32 dist = diff.normalise();

		Vector3f axis(0.0f, 1.0f, 0.0f);
		if ((u8)mDoFinishAnim != (u8)0) {
			axis.y = -1.0f;
		}

		// cross product needs fixing.
		Vector3f vec = cross(diff, axis);
		vec.normalise();

		f32 randVal = randFloat();
		if (dist - target->getBodyRadius() < 20.0f * randVal - 10.0f) {
			piki->setSpeed(0.6f, diff);
		} else {
			piki->setSpeed(0.6f, vec);
		}

		if (randFloat() < 0.01f) {
			if (randFloat() < 0.2f) {
				piki->startMotion(IPikiAnims::KOROBU2, IPikiAnims::KOROBU2, piki, nullptr);
				mSubState = 2;
			} else {
				piki->startMotion(IPikiAnims::KOROBU, IPikiAnims::KOROBU, piki, nullptr);
				mSubState = 1;
			}

			mDoFinishAnim = 4.0f * randFloat() + 3.0f;
			return;
		}

		if (randFloat() < 0.1f) {
			mSubState     = 0;
			mDoFinishAnim = (randFloat() > 0.5f) ? 1 : 0;
		}
	}
}

/**
 * @note Address: 0x8019281C
 * @note Size: 0x17C
 */
void PikiEscapeState::onKeyEvent(Piki* piki, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_200:
		switch (mSubState) {
		case 2:
			piki->startSound(PSSE_PK_VC_SLIP1, true);
			break;
		case 1:
			piki->startSound(PSSE_PK_VC_SLIP2, true);
			break;
		}
		break;

	case KEYEVENT_2:
		if (mSubState == 1 || mSubState == 2) {
			piki->mVelocity       = Vector3f(0.0f);
			piki->mTargetVelocity = Vector3f(0.0f);
		}
		break;

	case KEYEVENT_LOOP_END:
		if (mSubState == 1 || mSubState == 2) {
			mDoFinishAnim--;
			if (mDoFinishAnim <= 0) {
				piki->mAnimator.mSelfAnimator.mFlags |= SysShape::Animator::AnimFinishMotion;
				piki->mAnimator.mBoundAnimator.mFlags |= SysShape::Animator::AnimFinishMotion;
			}
		}
		break;

	case KEYEVENT_END:
		if (mSubState == 1 || mSubState == 2) {
			mSubState     = 0;
			mDoFinishAnim = (randFloat() > 0.5f) ? 1 : 0;
		}
		break;
	}
}

/**
 * @note Address: 0x80192998
 * @note Size: 0x4
 */
void PikiEscapeState::cleanup(Piki* piki)
{
}

} // namespace Game
