#include "IDelegate.h"
#include "Game/NaviState.h"
#include "Game/gameConfig.h"
#include "Game/CameraMgr.h"
#include "Game/MapMgr.h"
#include "Game/NaviParms.h"
#include "Game/Stickers.h"
#include "Game/MoviePlayer.h"
#include "Game/AIConstants.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Dolphin/rand.h"
#include "efx/TDopingSmoke.h"
#include "efx/TEnemyDownWat.h"
#include "PikiAI.h"
#include "Game/Entities/ItemPikihead.h"
#include "Game/Entities/ItemHole.h"
#include "Game/Entities/ItemCave.h"
#include "efx/TEnemyDownSmoke.h"
#include "Game/rumble.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "Game/PikiState.h"
#include "PSSystem/PSSystemIF.h"
#include "KandoLib/Choice.h"
#include "nans.h"
#include "Game/CPlate.h"
#include "Screen/Game2DMgr.h"
#include "utilityU.h"
#include "JSystem/JUtility/JUTGamePad.h"

int unusedNaviStateArray[] = { 1, 2, 3, 0 }; // ?

static const int unusedNaviStateArray2[] = { 0, 0, 0 };
static const char unusedNaviStateName[]  = "naviState";

namespace {
SoundID se_taisos[3]    = { PSSE_PL_WAIT_TAISO_ORIMA, PSSE_PL_WAIT_TAISO_LUGI, PSSE_PL_WAIT_TAISO_SHACHO };
SoundID se_chats[3]     = { PSSE_PL_WAIT_CHAT_ORIMA, PSSE_PL_WAIT_CHAT_LUGI, PSSE_PL_WAIT_CHAT_SHACHO };
SoundID se_lookbacks[3] = { PSSE_PL_WAIT_LOOKBACK_ORIMA, PSSE_PL_WAIT_LOOKBACK_LUGI, PSSE_PL_WAIT_LOOKBACK_SHACHO };
SoundID se_novis[3]     = { PSSE_PL_WAIT_NOVI_ORIMA, PSSE_PL_WAIT_NOVI_LUGI, PSSE_PL_WAIT_NOVI_SHACHO };
SoundID se_jumps[3]     = { PSSE_PL_WAIT_JUMP_ORIMA, PSSE_PL_WAIT_JUMP_LUGI, PSSE_PL_WAIT_JUMP_SHACHO };
SoundID se_kyoros[3]    = { PSSE_PL_WAIT_KYORO_ORIMA, PSSE_PL_WAIT_KYORO_LUGI, PSSE_PL_WAIT_KYORO_SHACHO };
} // namespace

namespace Game {

/**
 * @note Address: 0x8017D44C
 * @note Size: 0x4
 */
void NaviState::draw2d(J2DGrafContext& graf, int& a2)
{
}

// /**
//  * @note Address: N/A
//  * @note Size: 0xC
//  */
// void NaviState::getBackupStateID()
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x94
//  */
// void NaviState::playBiku(Navi* navi)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void NaviState::playChangeVoice(Navi* navi)
{
	if (navi->mNaviIndex == NAVIID_Olimar) { // OLIMAR
		PSSystem::spSysIF->playSystemSe(PSSE_SY_CHANGE_ORIMA, 0);

	} else if (playData->isStoryFlag(STORY_DebtPaid)) { // PRESIDENT
		PSSystem::spSysIF->playSystemSe(PSSE_SY_CHANGE_SHACHO, 0);

	} else { // LOUIE
		PSSystem::spSysIF->playSystemSe(PSSE_SY_CHANGE_LUI, 0);
	}

	if (navi->mNaviIndex == NAVIID_Olimar) { // OLIMAR
		navi->mSoundObj->startSound(PSSE_PL_PIKON_ORIMA, 0);

	} else if (playData->isStoryFlag(STORY_DebtPaid)) { // PRESIDENT
		navi->mSoundObj->startSound(PSSE_PL_PIKON_SHACHO, 0);

	} else { // LOUIE
		navi->mSoundObj->startSound(PSSE_PL_PIKON_LUI, 0);
	}
	// UNUSED FUNCTION
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x94
//  */
// void NaviState::playPikon(Navi* navi)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0xC
//  */
// void NaviFSM::clearBackupState()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8017D450
 * @note Size: 0x84
 */
void NaviFSM::transit(Navi* navi, int stateID, StateArg* stateArg)
{
	int currID = getCurrID(navi);

	if (currID == NSID_Walk || currID == NSID_Follow) {
		if (mBackupStateID != currID) {
			mBackupStateID = currID;
		}
	}

	StateMachine<Navi>::transit(navi, stateID, stateArg);
}

/**
 * @note Address: 0x8017D4D4
 * @note Size: 0x820
 */
void NaviFSM::init(Navi* navi)
{
	mBackupStateID = NSID_NULL;
	create(NSID_StateCount);

	registerState(new NaviWalkState);
	registerState(new NaviFollowState);
	registerState(new NaviPunchState);
	registerState(new NaviChangeState);
	registerState(new NaviGatherState);
	registerState(new NaviThrowState);
	registerState(new NaviThrowWaitState);
	registerState(new NaviDopeState);
	registerState(new NaviNukuState);
	registerState(new NaviNukuAdjustState);
	registerState(new NaviContainerState);
	registerState(new NaviAbsorbState);
	registerState(new NaviFlickState);
	registerState(new NaviDamagedState);
	registerState(new NaviPressedState);
	registerState(new NaviFallMeckState);
	registerState(new NaviKokeDamageState);
	registerState(new NaviSaraiState);
	registerState(new NaviSaraiExitState);
	registerState(new NaviDeadState);
	registerState(new NaviStuckState);
	registerState(new NaviDemo_UfoState);
	registerState(new NaviDemo_HoleInState);
	registerState(new NaviPelletState);
	registerState(new NaviCarryBombState);
	registerState(new NaviClimbState);
	registerState(new NaviPathMoveState);
}

/**
 * @note Address: 0x8017DCF4
 * @note Size: 0xD8
 */
void NaviCarryBombState::init(Navi* navi, StateArg* stateArg)
{
	mBomb = static_cast<NaviCarryBombArg*>(stateArg)->mBomb;
	if (!mBomb) {
		transit(navi, NSID_Walk, nullptr);
	} else {
		navi->startMotion(IPikiAnims::PICK_PUT, IPikiAnims::PICK_PUT, navi, nullptr);
		navi->enableMotionBlend();

		navi->mSoundObj->startSound(PSSE_PL_PICKUP_BOMB, 0);

		updateMatrix(navi);
		mBomb->startCapture(&mCaptureMatrix);
	}
	mDoThrow = false;
}

/**
 * @note Address: 0x8017DDFC
 * @note Size: 0x148
 */
void NaviCarryBombState::updateMatrix(Navi* navi)
{
	Vector3f translation = navi->getPosition();

	f32 faceDir = navi->getFaceDir();
	Vector3f rotation(0.0f, faceDir, 0.0f);

	translation += getRotationOffset(17.0f, 4.8f, (const f32)faceDir);

	mCaptureMatrix.makeTR(translation, rotation);
}

/**
 * @note Address: 0x8017DF44
 * @note Size: 0x24C
 */
void NaviCarryBombState::exec(Navi* navi)
{
	navi->control();
	updateMatrix(navi);

	if (mBomb) {
		Matrixf mat;
		Vector3f rotation(0.0f, navi->getFaceDir(), 0.0f);
		mat.makeTR(Vector3f::zero, rotation);
		mBomb->updateCapture(mat);
	}

	if (!mDoThrow) {
		if (!mBomb->mCaptureMatrix || !mBomb) {
			transit(navi, NSID_Walk, nullptr);
			return;
		}

		if (navi->mController1 && navi->mController1->isButtonDown(JUTGamePad::PRESS_A)) {
			navi->finishMotion();
			mDoThrow = true;
		} else if (navi->mController1 && navi->mController1->isButtonDown(JUTGamePad::PRESS_B)) {
			transit(navi, NSID_Walk, nullptr);
		}
	}
}

/**
 * @note Address: 0x8017E190
 * @note Size: 0x17C
 */
void NaviCarryBombState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_LOOP_END:
		if (mDoThrow && mBomb) {
			f32 faceDir     = navi->getFaceDir();
			Vector3f offset = getRotationOffset(260.0f, 340.0f, (const f32)faceDir);

			navi->mSoundObj->startSound(PSSE_PL_THROW, 0);
			mBomb->setVelocity(offset);
			mBomb->endCapture();
			mBomb = nullptr;
		}
		break;

	case KEYEVENT_END:
		transit(navi, NSID_Walk, nullptr);
		break;
	}
}

/**
 * @note Address: 0x8017E30C
 * @note Size: 0x2C
 */
void NaviCarryBombState::cleanup(Navi* navi)
{
	if (mBomb) {
		mBomb->endCapture();
	}
}

/**
 * @note Address: 0x8017E338
 * @note Size: 0x58
 */
void NaviStuckState::init(Navi* navi, StateArg* stateArg)
{
	mWiggleCounter = 0;
	mIdleTimer     = 0.45f;
	if (navi->mController1) {
		mPrevStickDirection = Vector3f(navi->mController1->getMainStickX(), 0.0f, navi->mController1->getMainStickY());
	}

	navi->releasePikis();
}

/**
 * @note Address: 0x8017E390
 * @note Size: 0x4BC
 */
void NaviStuckState::exec(Navi* navi)
{
	if (!navi->mController1 || !navi->mStickCount) {
		transit(navi, NSID_Walk, nullptr);
		return;
	}

	navi->control();

	f32 stickZ = navi->mController1->getMainStickY();
	f32 stickX = navi->mController1->getMainStickX();
	Vector3f stickVals(stickX, 0.0f, stickZ);
	f32 stickMag = stickVals.length();

	if (stickMag > 0.3f) {
		f32 dir = stickVals.dot(mPrevStickDirection);
		if (dir < 0.5f) {
			mWiggleCounter++;
			if (mWiggleCounter > 9) {
				Stickers stickers(navi);

				Iterator<Creature> iter(&stickers);
				CI_LOOP(iter)
				{
					Creature* creature = *iter;
					if (creature) {
						if (randFloat() > 0.05f) {
							f32 knockback = 120.0f + 100.0f * randFloat();
							f32 angle     = FLICK_BACKWARD_ANGLE;
							if (randFloat() > 0.1f) {
								angle = JMAAtan2Radian(stickX, stickZ);
								angle = roundAng(0.9424779f * (randFloat() - 0.5f) + angle);
							}

							InteractFlick flick(navi, knockback, 5.0f, angle);
							creature->stimulate(flick);
						}
					}
				}

				mWiggleCounter = 0;
			}
			mPrevStickDirection = Vector3f(stickX, 0.0f, stickZ);
			mIdleTimer          = 0.2f;
		}
	}

	mIdleTimer -= sys->mDeltaTime;
	if (mIdleTimer < 0.0f) {
		mPrevStickDirection = Vector3f(stickX, 0.0f, stickZ);
		mWiggleCounter      = 0;
		mIdleTimer          = 0.5f;
	}
}

/**
 * @note Address: 0x8017E84C
 * @note Size: 0x4
 */
void NaviStuckState::cleanup(Navi* navi)
{
}

/**
 * @note Address: 0x8017E850
 * @note Size: 0xDC
 */
void NaviWalkState::init(Navi* navi, StateArg* stateArg)
{
	if (navi->isAlive() && !navi->isMovieActor()) {
		navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
	}

	mAIState        = WALKAI_Control;
	mIdleTimer      = 3.0f;
	mTarget         = nullptr;
	mPosition       = navi->getPosition();
	mCollisionTimer = 0;
}

/**
 * @note Address: 0x8017E92C
 * @note Size: 0x634
 */
void NaviWalkState::exec(Navi* navi)
{
	if (mCollisionTimer) {
		mCollisionTimer--;
	}

	if (navi->isAlive()) {
		navi->control();
		navi->findNextThrowPiki();

		if (!navi->mController1 && !navi->isMovieActor()) {
			if (mAIState == WALKAI_Control) {
				mAIState   = WALKAI_Wait;
				mIdleTimer = 2.0f;
			}
			execAI(navi);

		} else if (navi->mController1 && !navi->isMovieActor() && navi->mSceneAnimationTimer > 9.0f) {
			if (mAIState == WALKAI_Control) {
				initAI_animation(navi);
			}
			execAI(navi);

		} else if (navi->mController1 && mAIState && navi->mSceneAnimationTimer <= 9.0f) {
			mAIState = WALKAI_Control;
			navi->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);
		}

		if (!navi->mController1 || navi->isMovieActor()) {
			// feels like commented out code here.
			navi->isMovieActor();
			return;
		}

		if (moviePlayer->mDemoState == DEMOSTATE_Inactive) {
			if (navi->mStickCount) {
				transit(navi, NSID_Stuck, nullptr);
				return;
			}

#if defined(VERSION_JP)
			if (!gGameConfig.mParms.mE3version.mData) {
#endif
				Onyon* onyon = navi->checkOnyon();
				if (onyon && navi->mController1->isButtonDown(JUTGamePad::PRESS_A) && onyon->mOnyonType != ONYON_TYPE_POD) {
					NaviContainerArg containerArg(onyon);
					transit(navi, NSID_Container, &containerArg);
					return;
				}
#if defined(VERSION_JP)
			}
#endif

			if (navi->mController1->isButtonDown(JUTGamePad::PRESS_B)) {
				transit(navi, NSID_Gather, nullptr);
				return;
			}

			if (navi->mController1->isButtonDown(JUTGamePad::PRESS_A)) {
				if (!navi->procActionButton()) {
					if (navi->throwable()) {
						transit(navi, NSID_ThrowWait, nullptr);
					}
					return;
				}
				return;
			}

			if (navi->mController1->isButtonDown(JUTGamePad::PRESS_DPAD_UP)) {
				NaviDopeArg dopeArg(SPRAY_TYPE_BITTER);
				transit(navi, NSID_Dope, &dopeArg);
				return;
			}

			if (navi->mController1->isButtonDown(JUTGamePad::PRESS_DPAD_DOWN)) {
				NaviDopeArg dopeArg(SPRAY_TYPE_SPICY);
				transit(navi, NSID_Dope, &dopeArg);
				return;
			}

			if (navi->mController1->isButtonDown(JUTGamePad::PRESS_X)) {
				if (!navi->releasePikis()) {
					mDismissTimer = 20;
				} else {
					mDismissTimer = 1;
				}
			}

			if (navi->mController1->isButtonHeld(JUTGamePad::PRESS_X)) {
				if (mDismissTimer != 0) {
					mDismissTimer++;

					if (mDismissTimer > 35) {
						mDismissTimer = 0;
						if (playData->mOlimarData->hasItem(OlimarData::ODII_FiveManNapsack) || !gameSystem->isStoryMode()) {
							transit(navi, NSID_Pellet, nullptr);
							return;
						}
					}
				}
			} else {
				mDismissTimer = 0;
			}

			if (!gameSystem->paused_soft() && moviePlayer->mDemoState == DEMOSTATE_Inactive && !gameSystem->isMultiplayerMode()
			    && navi->mController1->isButtonDown(JUTGamePad::PRESS_Y) && playData->isDemoFlag(DEMO_Unlock_Captain_Switch)) {

				Navi* otherNavi = naviMgr->getAt(GET_OTHER_NAVI(navi));
				int otherNaviID = otherNavi->getStateID();

				if (otherNavi->isAlive() && otherNaviID != NSID_Nuku && otherNaviID != NSID_NukuAdjust && otherNaviID != NSID_Punch) {
					gameSystem->mSection->pmTogglePlayer();

					playChangeVoice(otherNavi);

					if (otherNavi->getStateID() == NSID_Follow) {
						InteractFue whistle(otherNavi, false, false); // don't combine parties, is NOT new to party
						navi->stimulate(whistle);
					}

					otherNavi->getStateID(); // commented out code probably.

					if (otherNavi->mCurrentState->needYChangeMotion()) {
						otherNavi->mFsm->transit(otherNavi, NSID_Change, nullptr);
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x8017EF68
 * @note Size: 0x4
 */
void NaviWalkState::cleanup(Navi* navi)
{
}

/**
 * @note Address: 0x8017EF6C
 * @note Size: 0x198
 */
void NaviWalkState::collisionCallback(Navi* navi, CollEvent& event)
{
	Creature* collider = event.mCollidingCreature;
	if (moviePlayer->mDemoState == DEMOSTATE_Inactive && collider->mObjectTypeID == OBJTYPE_Honey) {
		ItemHoney::Item* drop = static_cast<ItemHoney::Item*>(collider);
		if (drop->mHoneyType != HONEY_Y && drop->absorbable()) {
			NaviAbsorbArg absorbArg(drop);
			navi->mFsm->transit(navi, NSID_Absorb, &absorbArg);
		}
	}

	if (moviePlayer->mDemoState == DEMOSTATE_Inactive && gameSystem->isVersusMode() && collider->isTeki() && !collider->mCaptureMatrix
	    && collider->isAlive() && static_cast<EnemyBase*>(collider)->getEnemyTypeID() == EnemyTypeID::EnemyID_Bomb && navi->mController1) {

		f32 x = -navi->mController1->getMainStickX(); // idk why this is negative lol.
		f32 y = navi->mController1->getMainStickY();
		if (x * x + y * y > 0.5f) {
			if (mCollisionTimer < 100) {
				mCollisionTimer += 3;
			}

			if (mCollisionTimer > 60) {
				NaviCarryBombArg bombArg(collider);
				transit(navi, NSID_CarryBomb, &bombArg);
			}
		}
	}
}

/**
 * @note Address: 0x8017F104
 * @note Size: 0x94
 */
void NaviWalkState::execAI(Navi* navi)
{
	switch (mAIState) {
	case WALKAI_Wait:
		execAI_wait(navi);
		checkAI(navi);
		break;

	case WALKAI_Animation:
		execAI_animation(navi);
		checkAI(navi);
		break;

	case WALKAI_Escape:
		execAI_escape(navi);
		break;

	case WALKAI_Attack:
		execAI_attack(navi);
		break;
	}
}

/**
 * @note Address: 0x8017F198
 * @note Size: 0x23C
 */
bool NaviWalkState::checkAI(Navi* navi)
{
	if (navi->mController1) {
		return false;
	}

	Vector3f naviPos = navi->getPosition();
	Creature* target = nullptr;

	Sys::Sphere sphere(naviPos, 100.0f);
	CellIteratorArg iterArg(sphere);
	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive() && creature->isTeki() && creature->isLivingThing()
		    && static_cast<EnemyBase*>(creature)->mSfxEmotion != EMOTE_None) {
			target = creature;
			break;
		}

		if (!target && creature != navi && creature->isNavi()) {
			target = creature;
		}
	}

	if (target && target->isTeki()) {
		mTarget         = target;
		char bitterType = EnemyInfoFunc::getEnemyInfo(static_cast<EnemyBase*>(target)->getEnemyTypeID(), 0xFFFF)->mBitterDrops;

		switch (bitterType) {
		case BDT_Weak:
			initAI_wait(navi);
			break;

		case BDT_Normal:
			initAI_escape(navi);
			break;

		default: // strong, triple, empty, empty two, mini boss, boss, final boss
			initAI_escape(navi);
			break;
		}

		return true;
	}

	if (target && target->isNavi()) {
		mTarget = target;
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8017F3D4
 * @note Size: 0x100
 */
void NaviWalkState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& event)
{
	if (mAIState && event.mType == KEYEVENT_END && mAIState == WALKAI_Animation) {
		initAI_wait(navi);
	}

	if (gameSystem && gameSystem->mIsFrozen) {
		return;
	}

	if (event.mAnimIdx == IPikiAnims::JUMP && event.mType == KEYEVENT_200) {
		if (navi->mNaviIndex == NAVIID_Olimar) { // olimar
			navi->mSoundObj->startSound(PSSE_PL_WAIT_LAND_ORIMA, 0);

		} else if (playData->isStoryFlag(STORY_DebtPaid)) { // president
			navi->mSoundObj->startSound(PSSE_PL_WAIT_LAND_SHACHO, 0);

		} else { // louie
			navi->mSoundObj->startSound(PSSE_PL_WAIT_LAND_LUGI, 0);
		}
	}
}

/**
 * @note Address: 0x8017F4D4
 * @note Size: 0x34
 */
void NaviWalkState::wallCallback(Navi* navi, Vector3f&)
{
	if (mAIState == WALKAI_Escape && mEscapeTimer == 0) {
		mIsEscapeCCW = (!mIsEscapeCCW);
		mEscapeTimer = 10;
	}
}

/**
 * @note Address: 0x8017F508
 * @note Size: 0x48
 */
void NaviWalkState::initAI_wait(Navi* navi)
{
	mAIState = WALKAI_Wait;
	navi->startMotion(IPikiAnims::ASIBUMI, IPikiAnims::ASIBUMI, nullptr, nullptr);
}

/**
 * @note Address: 0x8017F550
 * @note Size: 0x1C4
 */
void NaviWalkState::execAI_wait(Navi* navi)
{
	blendVelocity(navi, Vector3f::zero);
	mIdleTimer -= sys->mDeltaTime;

	if (mIdleTimer <= 0.0f) {
		initAI_animation(navi);
		mIdleTimer = 2.0f + randFloat();
		return;
	}

	if (mTarget) {
		Vector3f naviPos   = navi->getPosition();
		Vector3f targetPos = mTarget->getPosition();
		f32 dx             = naviPos.x - targetPos.x;
		f32 dz             = naviPos.z - targetPos.z;
		if (dx * dx + dz * dz > SQUARE(100.0f)) {
			mTarget = nullptr;
			return;
		}

		Vector3f::getFlatDirectionFromTo(naviPos, targetPos);

		navi->mFaceDir += 0.2f * angDist(roundAng(JMAAtan2Radian(targetPos.x, targetPos.z)), navi->mFaceDir);
		navi->mFaceDir = roundAng(navi->mFaceDir);
	}
}

/**
 * @note Address: 0x8017F714
 * @note Size: 0x26C
 */
void NaviWalkState::initAI_animation(Navi* navi)
{
	mAIState = WALKAI_Animation;

	KandoLib::Choice choiceListIdle[4]
	    = { { IPikiAnims::AKUBI, 0.25f }, { IPikiAnims::FURIMUKU, 0.25f }, { IPikiAnims::SAGASU2, 0.25f }, { IPikiAnims::JUMP, 0.25f } };
	KandoLib::Choice choiceListControl[4]
	    = { { IPikiAnims::AKUBI, 0.25f }, { IPikiAnims::FURIMUKU, 0.25f }, { IPikiAnims::SAGASU2, 0.25f }, { IPikiAnims::GATTU, 0.25f } };

	int animIdx;
	if (navi->mController1) {
		animIdx = KandoLib::getRandomChoice(choiceListControl, 4);
	} else {
		animIdx = KandoLib::getRandomChoice(choiceListIdle, 4);
	}

	mAnimIdx = animIdx;

	navi->startMotion(animIdx, animIdx, navi, nullptr);

	if (gameSystem && gameSystem->mIsFrozen) {
		return;
	}

	int naviIdx = navi->mNaviIndex;
#if defined(VERSION_JP)
	if (gameSystem->isStoryMode() && playData->isStoryFlag(STORY_DebtPaid)) {
#else
	if (naviIdx == NAVIID_Louie && gameSystem->isStoryMode() && playData->isStoryFlag(STORY_DebtPaid)) {
#endif
		naviIdx++; // president!
	}

	switch (animIdx) {
	case IPikiAnims::FURIMUKU:
		navi->mSoundObj->startSound(se_lookbacks[naviIdx], 0);
		break;
	case IPikiAnims::AKUBI:
		navi->mSoundObj->startSound(se_novis[naviIdx], 0);
		break;
	case IPikiAnims::JUMP:
		navi->mSoundObj->startSound(se_jumps[naviIdx], 0);
		break;
	case IPikiAnims::SAGASU2:
		navi->mSoundObj->startSound(se_kyoros[naviIdx], 0);
		break;
	case IPikiAnims::GATTU:
		navi->mSoundObj->startSound(se_taisos[naviIdx], 0);
		break;
	}
}

/**
 * @note Address: 0x8017F980
 * @note Size: 0x80
 */
void NaviWalkState::execAI_animation(Navi* navi)
{
	blendVelocity(navi, Vector3f::zero);
	if (!navi->assertMotion(mAnimIdx)) {
		mAIState = WALKAI_Wait;
		navi->startMotion(IPikiAnims::ASIBUMI, IPikiAnims::ASIBUMI, nullptr, nullptr);
	}
}

// /**
//  * @note Address: N/A
//  * @note Size: 0xC
//  */
// void NaviWalkState::initAI_attack(Navi* navi)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8017FA00
 * @note Size: 0x240
 */
void NaviWalkState::execAI_attack(Navi* navi)
{
	if (!mTarget->isAlive()) {
		mAIState = WALKAI_Wait;
		navi->startMotion(IPikiAnims::ASIBUMI, IPikiAnims::ASIBUMI, nullptr, nullptr);
		mTarget = nullptr;
		return;
	}

	Vector3f targetPos = mTarget->getPosition();
	Vector3f naviPos   = navi->getPosition();

	Vector3f sep = targetPos - naviPos;
	f32 dist     = sep.normalise();

	Sys::Sphere boundingSphere;
	mTarget->getBoundingSphere(boundingSphere);

	dist -= boundingSphere.mRadius;

	navi->control();

	sep = sep * naviMgr->mNaviParms->mNaviParms.mMoveSpeed.mValue * 0.5f;
	blendVelocity(navi, sep);

	if (dist < 10.0f) {
		navi->turnTo(targetPos);
		transit(navi, NSID_Punch, nullptr);
	}
}

/**
 * @note Address: 0x8017FC40
 * @note Size: 0x8C
 */
void NaviWalkState::initAI_escape(Navi* navi)
{
	mAIState     = WALKAI_Escape;
	mIdleTimer   = 0.0f;
	mIsEscapeCCW = (int)(2.0f * randFloat()) != 0; // 75% chance true (CCW), 25% chance false (CW)
	mEscapeTimer = 0;
}

/**
 * @note Address: 0x8017FCCC
 * @note Size: 0x2B4
 */
void NaviWalkState::execAI_escape(Navi* navi)
{
	if (!mTarget->isAlive()) {
		mIdleTimer = 5.0f;
		mAIState   = WALKAI_Wait;
		navi->startMotion(IPikiAnims::ASIBUMI, IPikiAnims::ASIBUMI, nullptr, nullptr);
		mTarget = nullptr;
		return;
	}

	if (mEscapeTimer != 0) {
		mEscapeTimer--;
	}

	Vector3f targetPos = mTarget->getPosition();
	Vector3f naviPos   = navi->getPosition();

	Vector3f sep = naviPos - targetPos;
	f32 length   = sep.normalise();

	Sys::Sphere boundingSphere;
	mTarget->getBoundingSphere(boundingSphere);

	f32 dist = length - boundingSphere.mRadius;
	mTarget->isTeki(); // probably some commented out code around here.

	if (dist > 35.0f) {
		mIdleTimer = 5.0f;
		mAIState   = WALKAI_Wait;
		navi->startMotion(IPikiAnims::ASIBUMI, IPikiAnims::ASIBUMI, nullptr, nullptr);
		return;
	}

	if (dist > 15.0f) {
		f32 x = sep.x;
		sep.x = sep.z;
		sep.z = -x;
		if (!mIsEscapeCCW) {
			sep.z = -sep.z;
			sep.x = -sep.x;
		}
	}

	navi->control();

	sep = sep * naviMgr->mNaviParms->mNaviParms.mMoveSpeed.mValue;
	blendVelocity(navi, sep);
}

/**
 * @note Address: 0x8017FF80
 * @note Size: 0x34
 */
void NaviWalkState::blendVelocity(Navi* navi, Vector3f& targetVel)
{
	navi->mTargetVelocity += targetVel;
}

/**
 * @note Address: 0x8017FFB4
 * @note Size: 0xA8
 */
void NaviChangeState::init(Navi* navi, StateArg* stateArg)
{
	if (!navi->isMovieActor()) {
		navi->startMotion(IPikiAnims::KIZUKU, IPikiAnims::KIZUKU, navi, nullptr);
	}

	mNewNavi    = naviMgr->getAt(GET_OTHER_NAVI(navi));
	mIsFinished = false;
}

/**
 * @note Address: 0x8018005C
 * @note Size: 0x58
 */
void NaviChangeState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& event)
{
	if (event.mType == KEYEVENT_END) {
		mIsFinished = true;
		navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
	}
}

/**
 * @note Address: 0x801800B4
 * @note Size: 0xAC
 */
void NaviChangeState::exec(Navi* navi)
{
	if (navi->isMovieActor()) {
		transit(navi, NSID_Walk, nullptr);
	}
	navi->mTargetVelocity = Vector3f(0.0f);

	if (mIsFinished == true) {
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80180160
 * @note Size: 0x4
 */
void NaviChangeState::cleanup(Navi* navi)
{
}

/**
 * @note Address: 0x80180164
 * @note Size: 0x16C
 */
void NaviFollowState::init(Navi* navi, StateArg* stateArg)
{
	NaviFollowArg* followArg = static_cast<NaviFollowArg*>(stateArg);
	if (followArg && followArg->mIsNewToParty) {

		navi->startMotion(IPikiAnims::KIZUKU, IPikiAnims::KIZUKU, navi, nullptr);
		mFollowState = FOLLOW_AlertJump;

		if (navi->mNaviIndex == NAVIID_Olimar) {
			navi->mSoundObj->startSound(PSSE_PL_BIKU_ORIMA, 0);

		} else if (playData->isStoryFlag(STORY_DebtPaid)) {
			navi->mSoundObj->startSound(PSSE_PL_BIKU_SHACHO, 0);

		} else {
			navi->mSoundObj->startSound(PSSE_PL_BIKU_LUGI, 0);
		}

	} else {
		mFollowState = FOLLOW_Normal;
		navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
	}

	mTargetNavi = naviMgr->getAt(GET_OTHER_NAVI(navi));
	navi->setMoveRotation(true);
	mIdleCounter = 0;
	mTargetEnemy = nullptr;
}

/**
 * @note Address: 0x801802D0
 * @note Size: 0x174
 */
void NaviFollowState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& event)
{
	if (event.mType == KEYEVENT_END) {
		switch (mFollowState) {
		case FOLLOW_AlertJump:
			mFollowState = FOLLOW_Normal;
			navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
			break;

		case FOLLOW_IdleGoof:
			mIdleCounter = 0;
			mFollowState = FOLLOW_Normal;
			navi->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);
			break;
		}
	}

	if (gameSystem && gameSystem->mIsFrozen) {
		return;
	}

	if (event.mAnimIdx == IPikiAnims::JUMP && event.mType == KEYEVENT_200) {
		if (navi->mNaviIndex == NAVIID_Olimar) { // OLIMAR
			navi->mSoundObj->startSound(PSSE_PL_WAIT_LAND_ORIMA, 0);

		} else if (playData->isStoryFlag(STORY_DebtPaid)) { // PRESIDENT
			navi->mSoundObj->startSound(PSSE_PL_WAIT_LAND_SHACHO, 0);

		} else { // LOUIE
			navi->mSoundObj->startSound(PSSE_PL_WAIT_LAND_LUGI, 0);
		}
	}
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x7C
//  */
// void NaviFollowState::messageAttack(Creature*)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80180444
 * @note Size: 0x9A0
 */
void NaviFollowState::exec(Navi* navi)
{
	if (moviePlayer && moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		return;
	}
	if (navi->mController1) {
		transit(navi, NSID_Walk, nullptr);
		return;
	}

	if (mFollowState == FOLLOW_AlertJump) {
		if (!navi->assertMotion(IPikiAnims::KIZUKU)) {
			mFollowState = FOLLOW_Normal;
			navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
		}
		navi->mTargetVelocity = 0.0f;
		return;
	}

	if (mTargetNavi->isStickTo()) {
		transit(navi, NSID_Walk, nullptr);
		return;
	}

	if (mFollowState == FOLLOW_PunchTarget) {
		// put us back to normal follow if target is Weird (doesnt exist, is dead already, is flying or underground)
		if (!mTargetEnemy || !mTargetEnemy->isAlive() || mTargetEnemy->isFlying() || mTargetEnemy->isUnderground()) {
			mFollowState = FOLLOW_Normal;
			mTargetEnemy = nullptr;
			navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);

		} else {
			// PUNCH TARGET TOO! TAKE THAT! GANG VIOLENCE!
			Sys::Sphere targetPos;
			mTargetEnemy->getBoundingSphere(targetPos);

			Vector3f targetDir = targetPos.mPosition;
			Vector3f naviPos   = navi->getPosition();
			targetDir          = targetDir - naviPos;
			f32 dist           = targetDir.normalise();
			if (dist - targetPos.mRadius < 8.0f) {
				// CLOSE ENOUGH, PUNCH TARGET
				navi->turnTo(targetPos.mPosition);
				NaviPunchArg arg;
				arg.mIsFollowing = true;
				arg.mNextState   = NSID_Follow;
				transit(navi, NSID_Punch, &arg);

			} else {
				if (++mPunchSeekCounter >= 60) {
					// we tried for 2 whole seconds, give up on punching target.
					mFollowState = FOLLOW_Normal;
					navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
					mTargetEnemy = nullptr;

				} else {
					// WE ARE A TARGET-SEEKING PUNCHING MISSILE
					navi->control();
					f32 speed             = naviMgr->mNaviParms->mNaviParms.mMoveSpeed() * 0.5f;
					navi->mTargetVelocity = targetDir * speed;
				}
			}
		}
		return;
	}

	f32 leaderSpeed     = mTargetNavi->mVelocity.length();
	bool isLeaderMoving = false;
	if (leaderSpeed > 20.0f) {
		isLeaderMoving = true;
	}

	// we're meant to be goofing!
	if (mFollowState == FOLLOW_IdleGoof) {
		if (isLeaderMoving) {
			// NO TIME TO GOOF!
			// make the lil startled jump
			navi->startMotion(IPikiAnims::KIZUKU, IPikiAnims::KIZUKU, navi, nullptr);
			mFollowState = FOLLOW_AlertJump;

		} else {
			// try and do lil idle goof
			navi->mTargetVelocity = Vector3f(0.0f);
			if (!navi->assertMotion(mAnimID)) {
				// if goof fails or we're done goofing, go back to normal follow
				mFollowState = FOLLOW_Normal;
				navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
			}
		}
		return;
	}

	if (isLeaderMoving) {
		mIdleCounter = 0;

	} else if (mIdleCounter < 90) {
		mIdleCounter++;

	} else {
		// TIME TO GOOF AGAIN

		// choose between these 4 goofs with uniform chance
		KandoLib::Choice choice[4] = {
			{ IPikiAnims::JUMP, 0.25f }, { IPikiAnims::AKUBI, 0.25f }, { IPikiAnims::CHATTING, 0.25f }, { IPikiAnims::SAGASU2, 0.25f }
		};

		int animIdx = KandoLib::getRandomChoice(choice, 4);
		mAnimID     = animIdx;
		navi->startMotion(animIdx, animIdx, navi, nullptr);
		mFollowState = FOLLOW_IdleGoof;
		if (gameSystem && !gameSystem->mIsFrozen) {
			// get right id for each navi for sounds
			// 0 for olimar, 1 for louie, or 2 for president
			int naviID = navi->mNaviIndex;
#if defined(VERSION_JP)
			if (gameSystem->isStoryMode() && playData->isStoryFlag(STORY_DebtPaid)) {
#else
			if (naviID == NAVIID_Louie && gameSystem->isStoryMode() && playData->isStoryFlag(STORY_DebtPaid)) {
#endif
				naviID++;
			}

			// make appropriate sound
			switch (animIdx) {
			case IPikiAnims::CHATTING:
				navi->mSoundObj->startSound(se_chats[naviID], nullptr);
				break;
			case IPikiAnims::AKUBI:
				navi->mSoundObj->startSound(se_novis[naviID], nullptr);
				break;
			case IPikiAnims::JUMP:
				navi->mSoundObj->startSound(se_jumps[naviID], nullptr);
				break;
			case IPikiAnims::SAGASU2:
				navi->mSoundObj->startSound(se_kyoros[naviID], nullptr);
				break;
			}
		}
	}

	Vector3f targetPos = mTargetNavi->getPosition();
	f32 leaderAngle    = mTargetNavi->getFaceDir();
	int leaderState    = mTargetNavi->getStateID();

	if (!isLeaderMoving && (leaderState == NSID_Throw || leaderState == NSID_ThrowWait)) {
		// if leader is throwing, adjust target position
		// THIS IS WHAT CAUSES CAPTAINS TO PUSH EACH OTHER WHILE THROWING SMH
		Vector3f offset = getDirection(1.4137167f + leaderAngle, 30.0f); // about 81 degrees CCW from leader angle
		targetPos += offset;
	} else if (leaderState == NSID_Punch) {
		f32 rad         = -mTargetNavi->mCPlateMgr->mBaseRadius;
		Vector3f offset = getDirection(leaderAngle, rad);
		targetPos += offset;
	}

	Vector3f targetVel = mTargetNavi->mTargetVelocity;
	Vector3f naviPos   = navi->getPosition();

	// get the direction we're gonna wanna move in
	Vector3f newVel = targetPos - naviPos;
	f32 targetDist  = newVel.normalise();

	// speed based on if we have rush boots or not
	f32 newSpeed;
	if (navi->getOlimarData()->hasItem(OlimarData::ODII_RepugnantAppendage)) {
		newSpeed = naviMgr->mNaviParms->mNaviParms.mRushBootSpeed();
	} else {
		newSpeed = naviMgr->mNaviParms->mNaviParms.mMoveSpeed();
	}

	// don't bother moving if we're already within 30 units of the leader
	if (targetDist < 30.0f) {
		newSpeed = 0.0f;
	}

	newVel *= newSpeed;

	// if we're within 60 units, do a simple averaged velocity to drop us into position
	if (targetDist < 60.0f) {
		newVel = newVel * 0.5f + targetVel * 0.5f;
	}

	// we're too far away (probably stuck), put us out of the party
	if (targetDist > 430.0f) {
		transit(navi, NSID_Walk, nullptr);
		return;
	}

	// move!
	navi->control();
	navi->mTargetVelocity = newVel;
}

/**
 * @note Address: 0x80180DE4
 * @note Size: 0x4
 */
void NaviFollowState::cleanup(Navi* navi)
{
}

/**
 * @note Address: 0x80180DE8
 * @note Size: 0x40
 */
NaviPunchState::NaviPunchState()
    : NaviState(NSID_Punch)
    , mIsFollowing(false)
    , mNextStateID(NSID_Walk)
{
}

/**
 * @note Address: 0x80180E28
 * @note Size: 0xD4
 */
void NaviPunchState::init(Navi* navi, StateArg* stateArg)
{
	NaviPunchArg* punchArg = static_cast<NaviPunchArg*>(stateArg);
	if (punchArg) {
		mIsFollowing = punchArg->mIsFollowing;
		mNextStateID = punchArg->mNextState;
	} else {
		mIsFollowing = false;
		mNextStateID = NSID_Walk;
	}

	navi->startMotion(IPikiAnims::PUNCH, IPikiAnims::PUNCH, navi, nullptr);
	navi->mSoundObj->startSound(PSSE_PL_ORIMA_PUNCH_SWING, 0);
	navi->enableMotionBlend();

	mIsPunchReady     = false;
	mNavi             = navi;
	mTarget           = nullptr;
	mUnused1C         = 0;
	mComboCounter     = 0;
	mIsNextPunchReady = false;
	mIdleCounter      = 0;
	mIsTargetHit      = false;
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x108
//  */
// void NaviPunchState::renzokuInit(Navi* navi)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80180EFC
 * @note Size: 0x300
 */
void NaviPunchState::hitCallback(CollPart* collpart)
{
	if (playData->isDemoFlag(DEMO_Meet_Red_Pikmin) && collpart) {
		bool isRocketFist = false; // is this the third WHABAM punch from a rocket fist captain
		f32 damage        = 7.5f;

		if (mNavi->mAnimator.mSelfAnimator.getAnimIndex() == IPikiAnims::PUNCH3) {
			isRocketFist = true;
			damage *= 2.5f;
		}

		InteractAttack attack(mNavi, damage, collpart);
		if (mTarget->stimulate(attack)) {
			Vector3f fxPos  = collpart->mPosition;
			CollPart* rHand = mNavi->mCollTree->getCollPart('rhnd');

			fxPos = fxPos - rHand->mPosition;
			fxPos.normalise();

			fxPos *= 15.0f;
			fxPos += rHand->mPosition;

			efx::Arg fxArg(fxPos);
			efx::TOrimapunch fxPunch;
			fxPunch.create(&fxArg);

			if (isRocketFist) {
				mNavi->mSoundObj->startSound(PSSE_PK_SE_HIT_STONE, 0);
			} else {
				mNavi->mSoundObj->startSound(PSSE_PL_ORIMA_PUNCH_HIT, 0);
			}

			mIsTargetHit = true;

			if (!mIsFollowing) {
				Navi* otherNavi = naviMgr->getAt(GET_OTHER_NAVI(mNavi));
				if (otherNavi && otherNavi->isAlive() && otherNavi->getStateID() == NSID_Follow) {
					NaviFollowState* otherNaviState = static_cast<NaviFollowState*>(otherNavi->mCurrentState);
					Creature* target                = mTarget;

					// if other navi is following or goofing off (not new follow or punching)
					if (otherNaviState->mFollowState == NaviFollowState::FOLLOW_Normal
					    || otherNaviState->mFollowState == NaviFollowState::FOLLOW_IdleGoof) {

						// if our target is an enemy, make other navi punch the enemy too
						if (target->isTeki()) {
							otherNaviState->mTargetEnemy      = target;
							otherNaviState->mFollowState      = NaviFollowState::FOLLOW_PunchTarget;
							otherNaviState->mPunchSeekCounter = 0;
							otherNaviState->mIdleCounter      = 0;
						}
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x801811FC
 * @note Size: 0x3A4
 */
void NaviPunchState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& event)
{
	switch (event.mType) {
	case KEYEVENT_2:
		mIsPunchReady = true;
		f32 cosTheta, sinTheta;
		f32 angle       = navi->getFaceDir();
		f32 punchDist   = 15.0f; // horizontal punch distance
		f32 punchRadius = 20.0f;

		if (event.mAnimIdx == IPikiAnims::PUNCH3) {
			punchDist   = 25.0f;
			punchRadius = 35.0f;
		}

		cosTheta = dolcosf(angle);
		sinTheta = dolsinf(angle);
		Sys::Sphere hitSphere;

		Vector3f naviPos = navi->getPosition();
		Vector3f hitBoxPos(punchDist * sinTheta, punchRadius, punchDist * cosTheta);
		hitSphere.mRadius   = punchRadius;
		hitSphere.mPosition = hitBoxPos + naviPos;

		// find something to hit!
		CellIteratorArg iterArg(hitSphere);
		CellIterator iter(iterArg);

		CI_LOOP(iter)
		{
			iter.dump(); // debug

			Creature* creature = static_cast<Creature*>(*iter);
			if (!creature->isNavi() && creature->mCollTree && creature != navi && creature->isAlive()) {
				// punchable!
				mTarget = creature;

				P2DEBUG("%s, %s", creature->getCreatureName(), creature->getCreatureID()); // debug thing probably

				Delegate1<NaviPunchState, CollPart*> delegate(this, hitCallback);
				creature->mCollTree->checkCollision(hitSphere, &delegate);
			}
		}
		break;

	case KEYEVENT_END:
		if (mIsNextPunchReady) {
			if (playData->mOlimarData->hasItem(OlimarData::ODII_BruteKnuckles)) {
				// advance the combo counter!
				if (++mComboCounter <= 1) {
					// first or second punch
					navi->startMotion(IPikiAnims::PUNCH2, IPikiAnims::PUNCH2, navi, nullptr);
					navi->mSoundObj->startSound(PSSE_PL_ORIMA_PUNCH_SWING, 0);

				} else {
					// BIG THIRD PUNCH
					navi->startMotion(IPikiAnims::PUNCH3, IPikiAnims::PUNCH3, navi, nullptr);
					navi->mSoundObj->startSound(PSSE_PL_ORIMA_PUNCH_SWING, 0);
				}

				navi->enableMotionBlend();
				mIsPunchReady     = false;
				mTarget           = nullptr;
				mUnused1C         = 0;
				mIsNextPunchReady = false;
				mIsTargetHit      = false;

			} else {
				mIdleCounter = 4; // 4 frames before we go back to walking
				mNavi->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);
			}
		} else {
			mIdleCounter = 4; // 4 frames before we go back to walking
			mNavi->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);
		}
		break;
	}
}

/**
 * @note Address: 0x801815A0
 * @note Size: 0x17C
 */
void NaviPunchState::exec(Navi* navi)
{
	if (mIdleCounter) {
		if (--mIdleCounter == 0) {
			// we've been idle too long, go back to regular state
			transit(navi, mNextStateID, nullptr);

		} else if (!navi->assertMotion(IPikiAnims::PUNCH) && !navi->assertMotion(IPikiAnims::PUNCH2)
		           && !navi->assertMotion(IPikiAnims::PUNCH3)) {

			// no valid punch animation is happening, go back to regular state
			transit(navi, mNextStateID, nullptr);
		}
		return;
	}

	// ready another punch!
	if (!mIsFollowing && navi->mController1 && navi->mController1->isButtonDown(JUTGamePad::PRESS_A) && !mIsNextPunchReady
	    && mComboCounter < 2) {
		mIsNextPunchReady = true;
	}

	navi->control();
	navi->findNextThrowPiki();
	if (!navi->assertMotion(IPikiAnims::PUNCH) && !navi->assertMotion(IPikiAnims::PUNCH2) && !navi->assertMotion(IPikiAnims::PUNCH3)) {
		transit(navi, mNextStateID, nullptr);
	}
}

/**
 * @note Address: 0x8018171C
 * @note Size: 0x4
 */
void NaviPunchState::cleanup(Navi* navi)
{
}

/**
 * @note Address: 0x80181720
 * @note Size: 0xA0
 */
void NaviPathMoveState::init(Navi* navi, StateArg* stateArg)
{
	bool dontStartWalking = false;
	mPathfinderContextID  = 0;
	if (stateArg) {
		mPosition = static_cast<NaviPathMoveStateArg*>(stateArg)->mPosition;
		if (initPathfinding(navi) == 1) {
			dontStartWalking = true;
		}
	}
	if (dontStartWalking) {
		return;
	}
	transit(navi, NSID_Walk, nullptr);
}

/**
 * @note Address: 0x801817C0
 * @note Size: 0xD8
 */
void NaviPathMoveState::exec(Navi* navi)
{
	bool startWalking = false;
	switch (mSubState) {
	case PATHMOVE_FindPath:
		if (execPathfinding(navi) == 2) {
			startWalking = true;
		}
		break;
	case PATHMOVE_Move: {
		int moveResult = execMove(navi);
		if (moveResult == 2) {
			startWalking = true;
		} else if (moveResult == 1) {
			startWalking = true;
		}
	} break;
	case PATHMOVE_MoveGoal:
		if (execMoveGoal(navi) == 2) {
			startWalking = true;
		}
		break;
	}
	if (startWalking) {
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80181898
 * @note Size: 0x44
 */
void NaviPathMoveState::cleanup(Navi* navi)
{
	releasePathfinder();
}

/**
 * @note Address: 0x801818DC
 * @note Size: 0x1BC
 */
int NaviPathMoveState::initPathfinding(Navi* navi)
{
	WayPoint* wp;
	Vector3f naviPosition = navi->getPosition();
	WPEdgeSearchArg edgeSearchArg(naviPosition);
	edgeSearchArg.mRoomID = navi->mRoomIndex;
	if (navi->inWater()) {
		edgeSearchArg.mInWater = true;
	}
	if (mapMgr->mRouteMgr->getNearestEdge(edgeSearchArg)) {
		wp = !edgeSearchArg.mWp1->isFlag(WPF_Closed) ? edgeSearchArg.mWp1 : edgeSearchArg.mWp2;
	} else {
		if (mapMgr->mRouteMgr->getNearestEdge(edgeSearchArg)) {
			wp = edgeSearchArg.mWp1->isFlag(WPF_Closed) ? edgeSearchArg.mWp2 : edgeSearchArg.mWp1;
		} else {
			return 2;
		}
	}
	releasePathfinder();
	WPSearchArg wpSearchArg(mPosition, nullptr, false, 10.0f);
	WayPoint* searchResult = mapMgr->mRouteMgr->getNearestWayPoint(wpSearchArg);
	if (searchResult == nullptr) {
		return 2;
	}
	PathfindRequest request(wp->mIndex, searchResult->mIndex, PATHFLAG_RequireOpen);
	mPathfinderContextID = testPathfinder->start(request);
	mSubState            = PATHMOVE_FindPath;
	return 1;
}

/**
 * @note Address: 0x80181A98
 * @note Size: 0x90
 */
int NaviPathMoveState::execPathfinding(Navi* navi)
{
	if (mPathfinderContextID == 0) {
		return 2;
	}
	switch (testPathfinder->check(mPathfinderContextID)) {
	case 0:
		_2C       = testPathfinder->makepath(mPathfinderContextID, mNodes);
		mNodes[1] = mNodes[0];
		mSubState = PATHMOVE_Move;
		break;
	case 1:
		return 2;
	}
	return 0;
}

/**
 * @note Address: 0x80181B28
 * @note Size: 0x15C
 */
int NaviPathMoveState::execMove(Navi* navi)
{
	WayPoint* wp     = mapMgr->mRouteMgr->getWayPoint(mNodes[0]->mWpIndex);
	Vector3f wpPos   = wp->mPosition;
	wpPos.y          = 0.0f;
	Vector3f naviPos = navi->getPosition();
	naviPos.y        = 0.0f;
	Vector3f diff    = wpPos - naviPos;
	f32 dist         = diff.normalise();

	if (dist < 15.0f) {
		mNodes[0] = mNodes[0]->mNext;
		if (!mNodes[0]) {
			return 1;
		}
	}
	navi->control();
	navi->mTargetVelocity = diff * 150.0f;
	return 0;
}

/**
 * @note Address: 0x80181C84
 * @note Size: 0x8
 */
int NaviPathMoveState::execMoveGoal(Navi* navi)
{
	return 0;
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x8
//  */
// void NaviPathMoveState::getWayPont(int)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80181C8C
 * @note Size: 0xE4
 */
void NaviNukuState::init(Navi* navi, StateArg* stateArg)
{
	if (stateArg != nullptr) {
		mIsFollower = static_cast<NaviNukuArg*>(stateArg)->mIsFollowing;
	} else {
		mIsFollower = false;
	}
	if (navi->mPluckingCounter != 0) {
		mAnimID = IPikiAnims::NUKU3;
	} else {
		mAnimID = IPikiAnims::NUKU;
	}
	navi->startMotion(mAnimID, mAnimID, navi, nullptr);
	mCounter = static_cast<NaviParms*>(navi->mParms)->mNaviParms.mLoopCountToPluck;
	navi->mSoundObj->startSound(PSSE_PL_PULLING_PIKI, 0);
	mDidPluckSE = false;
	mIsActive   = false;
	mDidPressA  = false;
	mUnusedBool = false;
	navi->mMass = 0.0f;
}

/**
 * @note Address: 0x80181D70
 * @note Size: 0x18C
 */
void NaviNukuState::exec(Navi* navi)
{
	if (moviePlayer && moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		if (mIsFollower) {
			NaviFollowArg followArg(false); // not new to party
			transit(navi, NSID_Follow, &followArg);
			return;
		}
		transit(navi, NSID_Walk, nullptr);
		return;
	}
	navi->mVelocity       = 0.0f;
	navi->mTargetVelocity = 0.0f;
	if (!navi->assertMotion(mAnimID)) {
		if (mIsFollower) {
			NaviFollowArg followArg(false); // not new to party
			transit(navi, NSID_Follow, &followArg);
		} else {
			transit(navi, NSID_Walk, nullptr);
		}
		navi->mPluckingCounter = 0;
	} else if (!mIsFollower) {
		if (!mDidPressA && navi->mController1->isButtonHeld(JUTGamePad::PRESS_A)) {
			mDidPressA = true;
		}
		if (mDidPressA && !navi->mController1->isButtonHeld(JUTGamePad::PRESS_A)) {
			mIsActive = true;
			navi->mPluckingCounter++;
		}
	}
}

/**
 * @note Address: 0x80181EFC
 * @note Size: 0x2C
 */
void NaviNukuState::cleanup(Navi* navi)
{
	navi->mMass = 1.0f;
	navi->startThrowDisable();
}

/**
 * @note Address: 0x80181F28
 * @note Size: 0x178
 */
void NaviNukuState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& key)
{
	switch (key.mType) {
	case KEYEVENT_2:
		mUnusedBool = true;
		mCounter--;
		if (mCounter == 0) {
			navi->mSoundObj->startSound(PSSE_PL_PULLOUT_PIKI, 0);
			mDidPluckSE = true;
		}
		break;
	case KEYEVENT_END:
		if (mIsActive) {
			if (mIsFollower || !navi->procActionButton()) {
				mIsActive = false;
				if (mIsFollower) {
					NaviFollowArg arg(false); // not new to party
					transit(navi, NSID_Follow, &arg);
				} else {
					transit(navi, NSID_Walk, nullptr);
				}
				navi->mPluckingCounter = 0;
			}
		} else {
			if (mIsFollower) {
				NaviFollowArg arg(false); // not new to party
				transit(navi, NSID_Follow, &arg);
			} else {
				transit(navi, NSID_Walk, nullptr);
			}
			navi->mPluckingCounter = 0;
		}
		break;
	}
}

/**
 * @note Address: 0x801820A0
 * @note Size: 0x240
 */
void NaviNukuAdjustState::init(Navi* navi, StateArg* stateArg)
{
	playData->setDemoFlag(DEMO_Pluck_First_Pikmin);
#if defined(VERSION_JP)
	P2ASSERTLINE(2760, stateArg);
#else
	P2ASSERTLINE(2769, stateArg);
#endif

	NaviNukuAdjustStateArg* arg = static_cast<NaviNukuAdjustStateArg*>(stateArg);

	mAngleToItem    = arg->mAngleToItem;
	mUnusedVelocity = arg->mUnusedVelocity;
	mUnusedState    = arg->mUnusedState;
	mPikiHead       = arg->mPikihead;
	mIsFollowing    = arg->mIsFollowing;
	mUnusedBool     = false;

	Vector3f diff;
	diff         = arg->mPikihead->getPosition() - navi->getPosition();
	mAngleToPiki = JMAAtan2Radian(diff.x, diff.z);
	diff.normalise();
	mTargetPosition = arg->mPikihead->getPosition() - (diff * 6.0f);

	navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
	navi->enableMotionBlend();
	navi->setMoveRotation(false);
	mIsMoving       = 0;
	navi->mMass     = 0.0f;
	mWallHitCounter = 0;
}

/**
 * @note Address: 0x801822E0
 * @note Size: 0x10
 */
void NaviNukuAdjustState::wallCallback(Navi* navi, Vector3f&)
{
	mWallHitCounter++;
}

/**
 * @note Address: 0x801822F0
 * @note Size: 0x64
 */
bool NaviNukuAdjustState::ignoreAtari(Creature* creature)
{
	bool result = false;
	if (creature->isNavi() || creature->mObjectTypeID == OBJTYPE_Onyon) {
		result = true;
	}
	return result;
}

/**
 * @note Address: 0x80182354
 * @note Size: 0xC4
 */
void NaviNukuAdjustState::collisionCallback(Navi* navi, CollEvent& collEvent)
{
	Piki* piki = static_cast<Piki*>(collEvent.mCollidingCreature);
	if (piki->isPiki() || piki->isNavi() || !piki->isCollisionFlick()) {
		return;
	}

	mIsMoving             = true;
	mCollidedPikiPosition = piki->getPosition();
}

/**
 * @note Address: 0x80182418
 * @note Size: 0x784
 */
void NaviNukuAdjustState::exec(Navi* navi)
{
	if (moviePlayer && moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		if (mIsFollowing) {
			transit(navi, NSID_Follow, nullptr);
		} else {
			transit(navi, NSID_Walk, nullptr);
		}
		return;
	}

	if (!mPikiHead->isAlive()) {
		if (mIsFollowing) {
			transit(navi, NSID_Follow, nullptr);
		} else {
			transit(navi, NSID_Walk, nullptr);
		}
		return;
	}

	if (!mIsFollowing) {
		navi->makeCStick(false);
	}

	if (navi->mController1 && navi->mController1->getButton() & Controller::PRESS_B) {
		navi->mPluckingCounter = 0;
		transit(navi, NSID_Walk, nullptr);
		return;
	}

	mNaviPosition = navi->getPosition();

	Vector3f diff;
	diff = mPikiHead->getPosition() - navi->getPosition();
	diff.length(); // unused

	diff                     = mTargetPosition - navi->getPosition();
	f32 targetToNaviDistance = Vector2f(diff.x, diff.z).length();
	f32 absoluteDeltaY       = absF(diff.y);

	f32 normalisedDistance = diff.normalise();

	f32 newFaceDir = mAngleToPiki;
	f32 angle      = angDist(newFaceDir, navi->mFaceDir);
	if (absF(angle) < (PI / 10.0f) && targetToNaviDistance < 2.0f && absoluteDeltaY < 10.0f) {
		navi->mFaceDir      = newFaceDir;
		PikiMgr::mBirthMode = PikiMgr::PSM_Force;
		Piki* piki          = pikiMgr->birth();
		PikiMgr::mBirthMode = PikiMgr::PSM_Normal;

		if (!piki) {
			if (mIsFollowing) {
				transit(navi, NSID_Follow, nullptr);
			} else {
				transit(navi, NSID_Walk, nullptr);
			}
			return;
		}

		piki->init(nullptr);
		piki->changeShape(mPikiHead->mColor);
		piki->changeHappa(mPikiHead->mHeadType);

		Vector3f sproutPos = mPikiHead->getPosition();
		piki->setPosition(sproutPos, false);
		mPikiHead->kill(nullptr);
		mPikiHead = nullptr;

		NukareStateArg nukareArg;
		nukareArg.mIsPlucking = navi->mPluckingCounter != 0;
		nukareArg.mNavi       = navi;
		piki->mFsm->transit(piki, PIKISTATE_Nukare, &nukareArg);

		NaviNukuArg nukuArg;
		nukuArg.mIsFollowing = mIsFollowing;

		transit(navi, NSID_Nuku, &nukuArg);

	} else {
		f32 angleOffset = 0.2f * angle;
		navi->mFaceDir  = roundAng(navi->mFaceDir + angleOffset);

		f32 speed = 100.0f;
		if (speed * sys->mDeltaTime > normalisedDistance) {
			speed = 0.5f / sys->mDeltaTime;
		}

		navi->mVelocity       = diff * speed;
		navi->mTargetVelocity = Vector3f(0.0f);
		navi->mTargetVelocity = diff * speed;
	}

	if (mWallHitCounter > 10) {
		if (mIsFollowing) {
			transit(navi, NSID_Follow, nullptr);
		} else {
			transit(navi, NSID_Walk, nullptr);
		}

		return;
	}

	if (!mIsMoving) {
		return;
	}

	Vector3f currentVel = navi->mVelocity;
	mIsMoving--;
	Vector3f naviPos = navi->getPosition();

	diff                 = mCollidedPikiPosition;
	f32 heightDifference = diff.y - naviPos.y;
	diff                 = diff - naviPos;
	diff.y               = heightDifference;

	f32 distancePikiToNavi = diff.normalise();

	// If the distance is 0, return
	if (!(distancePikiToNavi > 0.0f)) {
		return;
	}

	f32 velocityDifference = diff.z * currentVel.x - diff.x * currentVel.z;
	Vector3f newVel(-diff.z, 0.0f, diff.x);

	f32 simSpeed = currentVel.length();

	newVel.x = newVel.x * simSpeed;
	newVel.y = newVel.y * simSpeed;
	newVel.z = newVel.z * simSpeed;
	if (!(velocityDifference < 0.0f)) {
		newVel *= -1.0f;
	}

	// Interpolate 35% current velocity and 65% new velocity
	diff = currentVel * 0.35f + newVel * 0.65f;

	f32 speed = diff.normalise();
	if (speed != 0.0f) {
		Vector3f finalVel     = diff * simSpeed;
		navi->mVelocity       = finalVel;
		navi->mTargetVelocity = finalVel;
	}
}

/**
 * @note Address: 0x80182B9C
 * @note Size: 0x50
 */
void NaviNukuAdjustState::cleanup(Navi* navi)
{
	mWallHitCounter = 0;
	navi->setMoveRotation(true);
	navi->mMass = 1.0f;
}

/**
 * @note Address: 0x80182BEC
 * @note Size: 0x5EC
 */
void NaviDopeState::init(Navi* navi, StateArg* stateArg)
{
#if defined(VERSION_JP)
	P2ASSERTLINE(2997, stateArg);
#else
	P2ASSERTLINE(3006, stateArg);
#endif
	mDopeType         = static_cast<NaviDopeArg*>(stateArg)->mType;
	Vector3f naviPos  = navi->getPosition(); // f31, f30, f29
	Vector3f squadPos = Vector3f(0.0f);      // f28, f27, f26
	mUsedDope         = false;
	int pikis         = 0;
	Iterator<Creature> iterator(navi->mCPlateMgr);
	CI_LOOP(iterator)
	{
		Creature* follower = *iterator;
		if (follower->isPiki()) {
			squadPos += follower->getPosition();
			pikis++;
		}
	}

	if ((mDopeType == SPRAY_TYPE_BITTER || pikis > 0) && navi->hasDope(mDopeType)) {

		if (mDopeType == SPRAY_TYPE_BITTER) {
			navi->startMotion(IPikiAnims::GROWUP2, IPikiAnims::GROWUP2, navi, nullptr);
		} else {
			navi->startMotion(IPikiAnims::GROWUP2, IPikiAnims::GROWUP2, navi, nullptr);
		}
		navi->enableMotionBlend();
		Vector3f dopePos = naviPos;
		if (mDopeType == SPRAY_TYPE_BITTER) {
			squadPos = navi->mWhistle->mPosition - naviPos;
			squadPos.normalise();
			dopePos = naviPos + (squadPos * 70.0f);

		} else if (pikis > 0) {
			squadPos = squadPos * (1.0f / (f32)pikis);
			squadPos = squadPos - naviPos;
			squadPos.normalise();
		} else {
			squadPos = Vector3f(0.0f, 1.0f, 0.0f);
		}

		u16 dopeType = SPRAY_TYPE_BITTER;
		if (mDopeType != SPRAY_TYPE_BITTER) {
			dopeType = SPRAY_TYPE_SPICY;
			navi->mSoundObj->startSound(PSSE_PL_EMIT_RED_DOPING, 0);
		} else {
			navi->mSoundObj->startSound(PSSE_PL_EMIT_BLK_DOPING, 0);
		}
		efx::ArgDopingSmoke arg(naviPos, squadPos, dopeType);
		efx::TDopingSmoke efx;
		efx.create(&arg);
		mUsedDope = true;
		navi->applyDopes(mDopeType, dopePos);
		navi->useDope(mDopeType);
	}
}

/**
 * @note Address: 0x801831D8
 * @note Size: 0xA0
 */
void NaviDopeState::exec(Navi* navi)
{
	navi->control();
	if (!mUsedDope) {
		transit(navi, NSID_Walk, nullptr);
	} else if (!navi->assertMotion(IPikiAnims::GROWUP2)) {
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80183278
 * @note Size: 0x4
 */
void NaviDopeState::cleanup(Navi* navi)
{
}

/**
 * @note Address: 0x8018327C
 * @note Size: 0x4C
 */
void NaviDopeState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& keyEvent)
{
	if (mUsedDope && keyEvent.mType == KEYEVENT_END) {
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x801832C8
 * @note Size: 0xE0
 */
void NaviClimbState::init(Navi* navi, StateArg* stateArg)
{
#if defined(VERSION_JP)
	JUT_PANICLINE(3100, "navi climb\n");
#else
	JUT_PANICLINE(3109, "navi climb\n");
#endif

#if defined(VERSION_JP)
	P2ASSERTLINE(3103, stateArg);
#else
	P2ASSERTLINE(3112, stateArg);
#endif
	navi->startMotion(IPikiAnims::HNOBORU, IPikiAnims::HNOBORU, navi, nullptr);
	navi->enableMotionBlend();
	mClimbObj = static_cast<ClimbStateArg*>(stateArg)->mObj;
	mTubePart = mClimbObj->mCollTree->mPart->getChild();
	prepare(navi);
}

/**
 * @note Address: 0x801833A8
 * @note Size: 0xBC
 */
void NaviClimbState::prepare(Navi* navi)
{
	navi->endStick();
	navi->startStick(mClimbObj, mTubePart);
	Sys::Tube tube;
	mTubePart->getTube(tube);
	tube.getAxisVector(mClimbAxis);
	mClimbDist = tube.mStartPos.distance(tube.mEndPos);
}

/**
 * @note Address: 0x80183464
 * @note Size: 0x2BC
 */
void NaviClimbState::exec(Navi* navi)
{
	navi->mVelocity = mClimbAxis * 100.0f * navi->mController1->mMStick.mYPos;
	navi->move(sys->mDeltaTime);
	if (navi->mController1->getButton() & Controller::PRESS_B) {
		transit(navi, NSID_Walk, nullptr);
	}

	f32 climbY = navi->mClimbingPosition.y;

	Sys::Sphere naviSphere;
	navi->getBoundingSphere(naviSphere);

	f32 factor = 4.0f / mClimbDist;
	if (climbY > 1.0f + factor) {
		CollPart* child = mTubePart->getChild();
		if (child && (child->isTube() || child->isTubeTree())) {
			mTubePart = child;
			navi->endStick();
			navi->startStick(mClimbObj, mTubePart);

			Sys::Tube tube;
			mTubePart->getTube(tube);
			tube.getAxisVector(mClimbAxis);
			mClimbDist = tube.mStartPos.distance(tube.mEndPos);
			return;
		}

		transit(navi, NSID_Walk, nullptr);
		return;
	}

	if (climbY < -factor) {
		CollPart* parent = mTubePart->getParent();
		if (parent && (parent->isTube() || parent->isTubeTree())) {
			mTubePart = parent;
			navi->endStick();
			navi->startStick(mClimbObj, mTubePart);

			Sys::Tube tube;
			mTubePart->getTube(tube);
			tube.getAxisVector(mClimbAxis);
			mClimbDist = tube.mStartPos.distance(tube.mEndPos);
			return;
		}

		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80183720
 * @note Size: 0x24
 */
void NaviClimbState::cleanup(Navi* navi)
{
	navi->endStick();
}

/**
 * @note Address: 0x80183744
 * @note Size: 0xB8
 */
void NaviFallMeckState::init(Navi* navi, StateArg* stateArg)
{
	if (stateArg == nullptr) {
		mDamage = 0.0f;
	} else {
		mDamage = static_cast<NaviFallMeckArg*>(stateArg)->mDamage;
	}
	navi->startMotion(IPikiAnims::FALL, IPikiAnims::FALL, nullptr, nullptr);
	navi->endStick();
	mSubState = FALLMECK_Fall;
	if (mDamage > 0.0f) {
		navi->mVelocity.y       = -400.0f;
		navi->mTargetVelocity.y = navi->mVelocity.y;
	} else {
		navi->mVelocity.y       = -100.0f;
		navi->mTargetVelocity.y = navi->mVelocity.y;
	}
}

/**
 * @note Address: 0x801837FC
 * @note Size: 0x9C
 */
void NaviFallMeckState::exec(Navi* navi)
{
	if (mSubState != FALLMECK_Fall) {
		navi->mTargetVelocity = 0.0f;
		navi->mVelocity       = 0.0f;
	}
	if (mSubState == FALLMECK_Fall && !navi->assertMotion(IPikiAnims::FALL)) {
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80183898
 * @note Size: 0x4
 */
void NaviFallMeckState::cleanup(Navi* navi)
{
}

/**
 * @note Address: 0x8018389C
 * @note Size: 0x9C
 */
void NaviFallMeckState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& keyEvent)
{
	if (keyEvent.mType != KEYEVENT_END) {
		return;
	}
	if (mSubState == FALLMECK_GetUp) {
		navi->startMotion(IPikiAnims::GETUP, IPikiAnims::GETUP, navi, nullptr);
		mSubState = FALLMECK_Finished;
	} else if (mSubState == FALLMECK_Finished) {
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80183938
 * @note Size: 0x268
 */
void NaviFallMeckState::bounceCallback(Navi* navi, Sys::Triangle*)
{
	if (navi->inWater()) {
		efx::TEnemyDownWat effect;
		Vector3f pos = navi->getPosition();
		pos.y        = *navi->mWaterBox->getSeaHeightPtr();
		efx::ArgScale arg(pos, 0.5f);
		effect.create(&arg);

	} else {
		efx::TEnemyDownSmoke effect(1.0f);
		effect.mScale = 0.5f;
		Vector3f pos  = navi->getPosition();
		efx::Arg arg(pos);
		effect.create(&arg);
	}

	if (mSubState == FALLMECK_Fall) {
		f32 damage = mDamage;
		if (damage > 0.0f) {
			NaviKokeDamageInitArg arg(1.0f, 0, nullptr, damage);
			navi->addDamage(0.0f, true);
			transit(navi, NSID_KokeDamage, &arg);
		} else {
			rumbleMgr->startRumble(RUMBLETYPE_Nudge, navi->mNaviIndex);
			transit(navi, NSID_Walk, nullptr);
		}
	}
}

/**
 * @note Address: 0x80183BA0
 * @note Size: 0x12C
 */
void NaviFlickState::init(Navi* navi, StateArg* stateArg)
{
	NaviFlickArg* flickArg;
	if (stateArg == nullptr) {
#if defined(VERSION_JP)
		JUT_PANICLINE(3275, "flick needs NaviFlickInitArg !\n");
#else
		JUT_PANICLINE(3284, "flick needs NaviFlickInitArg !\n");
#endif
	} else {
		flickArg   = static_cast<NaviFlickArg*>(stateArg);
		mDamage    = flickArg->mDamage;
		mDirection = flickArg->mDirection;
		mFlicker   = flickArg->mCreature;
	}
	navi->startMotion(IPikiAnims::JHIT, IPikiAnims::JHIT, navi, nullptr);
	mSubState         = FLICK_Hit;
	navi->mVelocity.y = 0.0f;
	navi->mFaceDir    = roundAng(JMAAtan2Radian(mDirection.x, mDirection.z) + PI);
	navi->mSoundObj->startSound(PSSE_PL_ORIMA_DAMAGE, 0);
	navi->mEffectsObj->createOrimadamage_(navi->mEffectsObj->mHeadMtx->mMatrix.mtxView);
	PSM::DamageDirector* director = PSMGetDamageD();
	if (director != nullptr) {
		director->directOn();
	}
}

/**
 * @note Address: 0x80183CCC
 * @note Size: 0x118
 */
void NaviFlickState::exec(Navi* navi)
{
	switch (mSubState) {
	case FLICK_Hit:
		navi->mVelocity.x = mDirection.x;
		navi->mVelocity.z = mDirection.z;
		if (!navi->assertMotion(IPikiAnims::JHIT)) {
			NaviKokeDamageInitArg kokeDamageArg(1.0f, 0, mFlicker, mDamage);
			transit(navi, NSID_KokeDamage, &kokeDamageArg);
		}
		break;
	case FLICK_Fling:
		navi->mVelocity.x *= 0.9f;
		navi->mVelocity.z *= 0.9f;
		if (navi->mFakePikiBounceTriangle != nullptr) {
			NaviKokeDamageInitArg kokeDamageArg(1.0f, 0, mFlicker, mDamage);
			transit(navi, NSID_KokeDamage, &kokeDamageArg);
		}
		break;
	}
}

/**
 * @note Address: 0x80183DE4
 * @note Size: 0x4
 */
void NaviFlickState::cleanup(Navi* navi)
{
}

/**
 * @note Address: 0x80183DE8
 * @note Size: 0x64
 */
void NaviFlickState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& keyEvent)
{
	if (keyEvent.mType == KEYEVENT_END && mSubState == FLICK_Hit) {
		mSubState = FLICK_Fling;
		navi->startMotion(IPikiAnims::JKOKE, IPikiAnims::JKOKE, nullptr, nullptr);
	}
}

/**
 * @note Address: 0x80183E4C
 * @note Size: 0x70
 */
void NaviFlickState::bounceCallback(Navi* navi, Sys::Triangle*)
{
	NaviKokeDamageInitArg kokeDamageArg(1.0f, 0, nullptr, mDamage);
	transit(navi, NSID_KokeDamage, &kokeDamageArg);
	navi->inWater();
}

/**
 * @note Address: 0x80183EBC
 * @note Size: 0xC0
 */
void NaviKokeDamageState::init(Navi* navi, StateArg* stateArg)
{
	if (!stateArg) {
		mDamage            = 0.0f;
		mTimer             = 0.0f;
		mCreature          = nullptr;
		mPlaySoundOnDamage = false;
	} else {
		NaviKokeDamageInitArg* arg = static_cast<NaviKokeDamageInitArg*>(stateArg);

		mDamage            = arg->mDamage;
		mTimer             = arg->mTimer;
		mCreature          = arg->mCreature;
		mPlaySoundOnDamage = arg->mPlaySoundOnDamage;
	}

	navi->startMotion(IPikiAnims::JKOKE, IPikiAnims::JKOKE, navi, nullptr);
	rumbleMgr->startRumble(RUMBLETYPE_NaviDamage, navi->mNaviIndex);
	mSubState = KOKEDAMAGE_Fall;
}

/**
 * @note Address: 0x80183F7C
 * @note Size: 0x208
 */
void NaviKokeDamageState::exec(Navi* navi)
{
	if (moviePlayer && moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		transit(navi, NSID_Walk, nullptr);
	} else if (gameSystem && !gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {
		transit(navi, NSID_Walk, nullptr);
	} else {
		navi->mTargetVelocity = 0.0f;
		navi->mVelocity       = 0.0f;
		if (mSubState == KOKEDAMAGE_Lay) {
			mTimer -= sys->mDeltaTime;
			if (mTimer <= 0.0f) {
				navi->startMotion(IPikiAnims::GETUP, IPikiAnims::GETUP, navi, nullptr);
				mSubState = KOKEDAMAGE_GetUp;
			}
		}
		if (mSubState == KOKEDAMAGE_Fall && !navi->assertMotion(IPikiAnims::JKOKE)) {
			if (static_cast<NaviFSM*>(mStateMachine)->mBackupStateID == -1) {
				transit(navi, NSID_Walk, nullptr);
			} else {
				transit(navi, static_cast<NaviFSM*>(mStateMachine)->mBackupStateID, nullptr);
			}
		}
		if (mSubState == KOKEDAMAGE_GetUp && !navi->assertMotion(IPikiAnims::GETUP)) {
			if (static_cast<NaviFSM*>(mStateMachine)->mBackupStateID == -1) {
				transit(navi, NSID_Walk, nullptr);
			} else {
				transit(navi, static_cast<NaviFSM*>(mStateMachine)->mBackupStateID, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x80184184
 * @note Size: 0x4
 */
void NaviKokeDamageState::cleanup(Navi* navi)
{
}

/**
 * @note Address: 0x80184188
 * @note Size: 0x9C
 */
void NaviKokeDamageState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& key)
{
	if (key.mType == KEYEVENT_END) {
		if (mSubState == KOKEDAMAGE_Fall) {
			mSubState = KOKEDAMAGE_Lay;
			navi->addDamage(mDamage, mPlaySoundOnDamage);
		} else if (mSubState == KOKEDAMAGE_GetUp) {
			if (static_cast<NaviFSM*>(mStateMachine)->mBackupStateID == -1) {
				transit(navi, NSID_Walk, nullptr);
			} else {
				transit(navi, static_cast<NaviFSM*>(mStateMachine)->mBackupStateID, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x80184224
 * @note Size: 0x6C
 */
void NaviSaraiState::init(Navi* navi, StateArg* stateArg)
{
	navi->startMotion(IPikiAnims::FALL, IPikiAnims::FALL, nullptr, nullptr);
	mInputFlags   = 0;
	mEscapeInputs = 0;
	navi->releasePikis();
}

/**
 * @note Address: 0x80184290
 * @note Size: 0x380
 */
void NaviSaraiState::exec(Navi* navi)
{
	if ((mInputFlags & JUTGamePad::ANALOG_UP) && mEscapeInputs) {
		mEscapeInputs--;
	}

	mInputFlags <<= 1;
	if (!navi->isStickTo()) {
		navi->endStick();
		transit(navi, NSID_Walk, nullptr);
	} else {
		if (navi->mController1
		    && navi->mController1->getButtonDown()
		           & (JUTGamePad::ANALOG_DOWN | JUTGamePad::ANALOG_UP | JUTGamePad::ANALOG_LEFT | JUTGamePad::ANALOG_RIGHT)) {
			mInputFlags |= 1;
			mEscapeInputs++;
		}
	}

	if (!gameSystem->paused_soft() && !gameSystem->isMultiplayerMode() && navi->mController1
	    && navi->mController1->isButtonDown(JUTGamePad::PRESS_Y)) {

		Navi* currNavi = naviMgr->getAt(GET_OTHER_NAVI(navi));
		int currID     = currNavi->getStateID();

		if (currNavi->isAlive() && currID != NSID_Nuku && currID != NSID_NukuAdjust && currID != NSID_Punch) {
			gameSystem->mSection->pmTogglePlayer();

			playChangeVoice(currNavi);

			if (currNavi->mCurrentState->needYChangeMotion()) {
				currNavi->mFsm->transit(currNavi, NSID_Change, nullptr);
			}
		}
	}

	f32 speed = 30.0f;
	if (mEscapeInputs >= 6) {
		f32 rate = mEscapeInputs / 22.0f;
		speed    = rate * 60.0f + 60.0f;
		if (randFloat() < rate * rate && randFloat() < 0.1f) {
			transit(navi, NSID_SaraiExit, nullptr);
		}
	}
	navi->mAnimSpeed = speed;
}

/**
 * @note Address: 0x80184610
 * @note Size: 0xC
 */
void NaviSaraiState::cleanup(Navi* navi)
{
	navi->mAnimSpeed = 30.0f;
}

/**
 * @note Address: 0x8018461C
 * @note Size: 0x6C
 */
void NaviSaraiExitState::init(Navi* navi, StateArg* stateArg)
{
	navi->endStick();
	navi->startMotion(IPikiAnims::FALL, IPikiAnims::FALL, nullptr, nullptr);
	navi->setAtari(false);
}

/**
 * @note Address: 0x80184688
 * @note Size: 0x4C
 */
void NaviSaraiExitState::exec(Navi* navi)
{
	if (navi->mFakePikiBounceTriangle != nullptr || navi->mFloorTriangle != nullptr) {
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x801846D4
 * @note Size: 0x34
 */
void NaviSaraiExitState::cleanup(Navi* navi)
{
	navi->setAtari(true);
}

/**
 * @note Address: 0x80184708
 * @note Size: 0x34
 */
void NaviSaraiExitState::bounceCallback(Navi* navi, Sys::Triangle*)
{
	transit(navi, NSID_Walk, nullptr);
}

/**
 * @note Address: 0x8018473C
 * @note Size: 0x5FC
 */
void NaviContainerState::init(Navi* navi, StateArg* stateArg)
{
#if defined(VERSION_JP)
	P2ASSERTLINE(3593, stateArg);
#else
	P2ASSERTLINE(3602, stateArg);
#endif
	mOnyon = static_cast<NaviContainerArg*>(stateArg)->mOnyon;

	Screen::gGame2DMgr->setGamePad(navi->mController1);
	int type      = mOnyon->mOnyonType;
	mIsScreenOpen = false;

	if (mOnyon->mOnyonType == ONYON_TYPE_SHIP) {
		og::Screen::DispMemberUfoGroup disp;

		disp.mContena1.mDataContena.mOnyonID = White;
		int max                              = playData->mPikiContainer.getColorSum(White) - mOnyon->mWhitesToWithdraw;
		if (max < 0) {
			max = 0;
		}
		disp.mContena1.mDataContena.mInOnionCount   = max;
		disp.mContena1.mDataContena.mCurrField      = 128000;
		disp.mContena1.mDataContena.mInSquadCount   = GameStat::formationPikis.getCount(navi->mNaviIndex, White);
		disp.mContena1.mDataContena.mMaxPikiOnField = MAX_PIKI_COUNT;
		disp.mContena1.mDataContena.mInParty2       = GameStat::formationPikis.getTotal(navi->mNaviIndex);
		disp.mContena1.mDataContena.mOnMapCount     = GameStat::getMapPikmins(AllPikminCalcs) - GameStat::getZikatuPikmins(AllPikminCalcs);
		disp.mContena1.mDataContena.mMaxPikiCount   = MAX_PIKI_COUNT - GameStat::getZikatuPikmins(AllPikminCalcs);

		disp.mContena2.mDataContena.mOnyonID = Purple;
		max                                  = playData->mPikiContainer.getColorSum(Purple) - mOnyon->mPurplesToWithdraw;
		if (max < 0) {
			max = 0;
		}
		disp.mContena2.mDataContena.mInOnionCount   = max;
		disp.mContena2.mDataContena.mCurrField      = 128000;
		disp.mContena2.mDataContena.mInSquadCount   = GameStat::formationPikis.getCount(navi->mNaviIndex, Purple);
		disp.mContena2.mDataContena.mMaxPikiOnField = MAX_PIKI_COUNT;
		disp.mContena2.mDataContena.mInParty2       = GameStat::formationPikis.getTotal(navi->mNaviIndex);
		disp.mContena2.mDataContena.mOnMapCount     = GameStat::getMapPikmins(AllPikminCalcs) - GameStat::getZikatuPikmins(AllPikminCalcs);
		disp.mContena2.mDataContena.mMaxPikiCount   = MAX_PIKI_COUNT - GameStat::getZikatuPikmins(AllPikminCalcs);

		disp.mHasWhite    = playData->hasContainer(White);
		disp.mHasPurple   = playData->hasContainer(Purple);
		disp.mHasPaidDebt = playData->isStoryFlag(STORY_DebtPaid);
		if (!disp.mHasWhite && !disp.mHasPurple) {
			mIsScreenOpen = false;
		} else {
			mIsScreenOpen = Screen::gGame2DMgr->open_UfoMenu(disp);
		}
	} else {
		og::Screen::DispMemberContena disp;

		disp.mDataContena.mOnyonID        = type;
		disp.mDataContena.mInOnionCount   = playData->mPikiContainer.getColorSum(type);
		disp.mDataContena.mCurrField      = 128000;
		disp.mDataContena.mInSquadCount   = GameStat::formationPikis.getCount(navi->mNaviIndex, type);
		disp.mDataContena.mMaxPikiOnField = MAX_PIKI_COUNT;
		disp.mDataContena.mInParty2       = GameStat::formationPikis.getTotal(navi->mNaviIndex);
		disp.mDataContena.mOnMapCount     = GameStat::getMapPikmins(AllPikminCalcs) - GameStat::getZikatuPikmins(AllPikminCalcs);
		disp.mDataContena.mMaxPikiCount   = MAX_PIKI_COUNT - GameStat::getZikatuPikmins(AllPikminCalcs);

		mIsScreenOpen = Screen::gGame2DMgr->open_Contena(disp);
	}

	if (mIsScreenOpen) {
		gameSystem->setFrozen(true, "open-cont");
		gameSystem->setMoviePause(true, "open-cont");
	}

	_18           = true;
	mShipPikiType = mOnyon->mOnyonType;
}

/**
 * @note Address: 0x80184D38
 * @note Size: 0x270
 */
void NaviContainerState::exec(Navi* navi)
{
	if (!mIsScreenOpen) {
		transit(navi, NSID_Walk, nullptr);
		return;
	}

	if (mOnyon->mOnyonType == ONYON_TYPE_SHIP) {
		switch (Screen::gGame2DMgr->check_UfoMenu()) {
		case Screen::Game2DMgr::CHECK2D_Ufo_Cancel:
			transit(navi, NSID_Walk, nullptr);
			break;
		case Screen::Game2DMgr::CHECK2D_Ufo_Confirmed:
			int a;
			int b;
			Screen::gGame2DMgr->result_UfoMenu(&a, &b);
			int pikiNum  = 0;
			bool isWhite = true;
			if (a != 0) {
				isWhite = true;
				pikiNum = a;
			} else if (b != 0) {
				pikiNum = b;
				isWhite = false;
			}
			if (pikiNum < 0) {
				if (isWhite) {
					mShipPikiType = White;
				} else {
					mShipPikiType = Purple;
				}
				mOnyon->exitPikis(-pikiNum, mShipPikiType);
			} else if (pikiNum > 0) {
				if (isWhite) {
					mShipPikiType = White;
				} else {
					mShipPikiType = Purple;
				}
				enterPikis(navi, pikiNum);
			}
			transit(navi, NSID_Walk, nullptr);
			break;
		default:
			navi->mVelocity       = 0.0f;
			navi->mTargetVelocity = 0.0f;
		}
	} else {
		switch (Screen::gGame2DMgr->check_Contena()) {
		case Screen::Game2DMgr::CHECK2D_Contena_Cancel:
			transit(navi, NSID_Walk, nullptr);
			break;
		case Screen::Game2DMgr::CHECK2D_Contena_Confirmed:
			int res = Screen::gGame2DMgr->result_Contena();
			if (res < 0) {
				Onyon* onyon = mOnyon;
				if (onyon->mOnyonType == ONYON_TYPE_SHIP) {
					onyon->exitPikis(-res, mShipPikiType);
				} else {
					onyon->exitPikis(-res, onyon->mOnyonType);
				}
			} else if (res > 0) {
				enterPikis(navi, res);
			}
			transit(navi, NSID_Walk, nullptr);
			break;
		default:
			navi->mVelocity       = 0.0f;
			navi->mTargetVelocity = 0.0f;
		}
	}
}

/**
 * @note Address: 0x80184FA8
 * @note Size: 0x2A0
 */
void NaviContainerState::enterPikis(Navi* navi, int maxPikis)
{
	Piki* pikis[MAX_PIKI_COUNT];
	int pikiNum = 0;
	Iterator<Creature> iterator(navi->mCPlateMgr);

	CI_LOOP(iterator)
	{
		Piki* piki = static_cast<Piki*>(*iterator);
		bool pass  = false;
		int type   = mOnyon->mOnyonType;
		if ((u32)type == ONYON_TYPE_SHIP) {
			if (mShipPikiType == piki->getKind()) {
				pass = true;
			}
		} else if (piki->mPikiKind == type) {
			pass = true;
		}

		if (pass) {
			pikis[pikiNum++] = piki;
			if (pikiNum >= maxPikis) {
				break;
			}
		}
	}

	for (int i = 0; i < pikiNum; i++) {
		PikiAI::CreatureActionArg arg(mOnyon);
		pikis[i]->mBrain->start(PikiAI::ACT_Enter, &arg);
	}
}

/**
 * @note Address: 0x80185248
 * @note Size: 0x44
 */
void NaviContainerState::cleanup(Navi* navi)
{
	gameSystem->setFrozen(false, "open-cont");
	gameSystem->setMoviePause(false, "open-cont");
}

/**
 * @note Address: 0x8018528C
 * @note Size: 0x140
 */
void NaviAbsorbState::init(Navi* navi, StateArg* stateArg)
{
	NaviAbsorbArg* absorbArg = static_cast<NaviAbsorbArg*>(stateArg);
#if defined(VERSION_JP)
	P2ASSERTLINE(3906, absorbArg != nullptr);
#else
	P2ASSERTLINE(3915, absorbArg != nullptr);
#endif
	mDrop = absorbArg->mDrop;
#if defined(VERSION_JP)
	P2ASSERTLINE(3908, mDrop != nullptr);
#else
	P2ASSERTLINE(3917, mDrop != nullptr);
#endif
	navi->startMotion(IPikiAnims::MIZUNOMI, IPikiAnims::MIZUNOMI, navi, nullptr);
	navi->mSoundObj->startSound(PSSE_PL_DRINK, 0);
	mSubState             = ABSORB_Start;
	mHasAbsorbed          = false;
	Vector3f dropPosition = mDrop->getPosition();
	navi->turnTo(dropPosition);
	cameraMgr->controllerLock(navi->mNaviIndex);
	cameraMgr->startDemoCamera(navi->mNaviIndex, CAMDEMO_NearLow);
}

/**
 * @note Address: 0x801853CC
 * @note Size: 0xF0
 */
void NaviAbsorbState::exec(Navi* navi)
{
	navi->mVelocity.z     = 0.0f;
	navi->mVelocity.x     = 0.0f;
	navi->mTargetVelocity = 0.0f;
	if (mSubState == ABSORB_Absorbing) {
		if (mDrop->isAlive() && !mHasAbsorbed) {
			InteractAbsorb act(navi);
			mDrop->stimulate(act);
			mHasAbsorbed = true;
		}
	}

	if (!navi->assertMotion(IPikiAnims::MIZUNOMI)) {
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x801854BC
 * @note Size: 0x174
 */
void NaviAbsorbState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& key)
{
	switch (key.mType) {
	case KEYEVENT_LOOP_START:
		mSubState = ABSORB_Absorbing;
		break;
	case KEYEVENT_LOOP_END:
#if defined(VERSION_JP)
		P2ASSERTLINE(3947, mDrop->mObjectTypeID == OBJTYPE_Honey);
#else
		P2ASSERTLINE(3956, mDrop->mObjectTypeID == OBJTYPE_Honey);
#endif
		ItemHoney::Item* item = mDrop;
		if (!mDrop->isAlive() || !item->isShrinking()) {
			mSubState = ABSORB_Finished;
			navi->finishMotion();
		}
		break;
	case KEYEVENT_END:
		if (mHasAbsorbed) {
#if defined(VERSION_JP)
			P2ASSERTLINE(3959, mDrop->mObjectTypeID == OBJTYPE_Honey);
#else
			P2ASSERTLINE(3968, mDrop->mObjectTypeID == OBJTYPE_Honey);
#endif
			navi->incDopeCount(mDrop->mHoneyType != HONEY_R);
			transit(navi, NSID_Walk, nullptr);
		} else {
			transit(navi, NSID_Walk, nullptr);
		}
		break;
	}
}

/**
 * @note Address: 0x80185630
 * @note Size: 0x40
 */
void NaviAbsorbState::cleanup(Navi* navi)
{
	cameraMgr->controllerUnLock(navi->mNaviIndex);
	cameraMgr->finishDemoCamera(navi->mNaviIndex);
}

/**
 * @note Address: 0x80185670
 * @note Size: 0x84
 */
void NaviDamagedState::init(Navi* navi, StateArg* stateArg)
{
#if defined(VERSION_JP)
	P2ASSERTLINE(3993, stateArg);
#else
	P2ASSERTLINE(4002, stateArg);
#endif
	navi->startMotion(IPikiAnims::DAMAGE, IPikiAnims::DAMAGE, navi, nullptr);
	navi->enableMotionBlend();
}

/**
 * @note Address: 0x801856F4
 * @note Size: 0x98
 */
void NaviDamagedState::exec(Navi* navi)
{
	if (!navi->assertMotion(IPikiAnims::DAMAGE)) {
		if (static_cast<NaviFSM*>(mStateMachine)->mBackupStateID == -1) {
			transit(navi, NSID_Walk, nullptr);
		} else {
			transit(navi, static_cast<NaviFSM*>(mStateMachine)->mBackupStateID, nullptr);
		}
	}
}

/**
 * @note Address: 0x8018578C
 * @note Size: 0x28
 */
void NaviDamagedState::cleanup(Navi* navi)
{
	navi->setInvincibleTimer(60);
}

/**
 * @note Address: 0x801857B4
 * @note Size: 0x68
 */
void NaviDamagedState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& key)
{
	if (key.mType == KEYEVENT_END) {
		if (static_cast<NaviFSM*>(mStateMachine)->mBackupStateID == -1) {
			transit(navi, NSID_Walk, nullptr);
		} else {
			transit(navi, static_cast<NaviFSM*>(mStateMachine)->mBackupStateID, nullptr);
		}
	}
}

/**
 * @note Address: 0x8018581C
 * @note Size: 0x5C
 */
void NaviDeadState::init(Navi* navi, StateArg* stateArg)
{
	gameSystem->getSection()->gmOrimaDown(navi->mNaviIndex);
	navi->setAlive(false);
}

/**
 * @note Address: 0x80185878
 * @note Size: 0x20
 */
void NaviDeadState::exec(Navi* navi)
{
	navi->mTargetVelocity = 0.0f;
	navi->mVelocity       = 0.0f;
}

/**
 * @note Address: 0x80185898
 * @note Size: 0x4
 */
void NaviDeadState::cleanup(Navi* navi)
{
}

/**
 * @note Address: 0x8018589C
 * @note Size: 0x40
 */
void NaviDeadState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& keyEvent)
{
	if (keyEvent.mType == KEYEVENT_END) {
		navi->setAlive(false);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x2FC
 */
Piki* NaviGatherInitArg::findTargetPikmin(Navi* navi)
{
	Piki* nearest = nullptr;
	f32 nearestDistance;
	Vector3f position = navi->getPosition();
	Iterator<Piki> iterator(pikiMgr);
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		if (piki->isAlive()) {
			Vector3f offset = piki->getPosition() - position;
			f32 distance    = offset.length();
			if (!nearest || distance < nearestDistance) {
				nearest         = piki;
				nearestDistance = distance;
			}
		}
	}
	return nearest;
}

/**
 * @note Address: 0x801858DC
 * @note Size: 0xF8
 */
void NaviGatherState::init(Navi* navi, StateArg* stateArg)
{
	NaviGatherInitArg* arg = static_cast<NaviGatherInitArg*>(stateArg);
	if (arg) {
		_10 = arg->_00;
		_11 = arg->_01;
	} else {
		_10 = false;
	}
	navi->startMotion(IPikiAnims::FUE, IPikiAnims::FUE, nullptr, nullptr);
	navi->enableMotionBlend();
	navi->mWhistle->start();
	if (!_10) {
		rumbleMgr->startRumble(RUMBLETYPE_Whistle, navi->mNaviIndex);
	}
	efx::TNaviEffect* effect = navi->mEffectsObj;
	f32 rad                  = navi->mWhistle->mRadius;
	effect->createCursor_(*effect->mNaviPos, rad);
	effect->createLightAct_(effect->mBeaconMtx->mMatrix.mtxView);
	effect->createFueact_(effect->mBeaconMtx->mMatrix.mtxView, effect->mNaviPos);
}

/**
 * @note Address: 0x801859D4
 * @note Size: 0x12C
 */
void NaviGatherState::exec(Navi* navi)
{
	if (_10) {
		Vector3f pos = 0.0f;
		navi->mWhistle->update(pos, true);
		navi->callPikis();
		if (navi->mWhistle->timeout()) {
			transit(navi, NSID_Walk, nullptr);
		}
	} else if (navi->mController1) {
		navi->mSoundObj->playShugoSE();
		navi->control();
		navi->callPikis();
		if (navi->mController1->getButtonUp() & Controller::PRESS_B) {
			navi->mWhistle->stop();
			transit(navi, NSID_Walk, nullptr);
		} else {
			if (navi->mWhistle->timeout()) {
				transit(navi, NSID_Walk, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x80185B00
 * @note Size: 0x60
 */
void NaviGatherState::cleanup(Navi* navi)
{
	if (!_10) {
		rumbleMgr->stopRumble(3, navi->mNaviIndex);
	}
	efx::TNaviEffect* effectsObj = navi->mEffectsObj;
	effectsObj->killCursor_();
	effectsObj->killLightAct_();
	effectsObj->killFueact_();
}

/**
 * @note Address: 0x80185B60
 * @note Size: 0xF4
 */
NaviThrowWaitState::NaviThrowWaitState()
    : NaviState(NSID_ThrowWait)
{
	mDelegate = new Delegate<NaviThrowWaitState>(this, doAnimCallback);
}

/**
 * @note Address: 0x80185C54
 * @note Size: 0x4
 */
void NaviThrowWaitState::draw2d(J2DGrafContext&, int&)
{
}

/**
 * @note Address: 0x80185C58
 * @note Size: 0x2C
 */
void NaviThrowWaitState::resume(Navi* navi)
{
	cleanup(navi);
}

/**
 * @note Address: 0x80185C84
 * @note Size: 0x34
 */
void NaviThrowWaitState::restart(Navi* navi)
{
	transit(navi, NSID_Walk, nullptr);
}

/**
 * @note Address: 0x80185CB8
 * @note Size: 0x558
 */
void NaviThrowWaitState::init(Navi* navi, StateArg* stateArg)
{
	mCurrHappa           = -1;
	mNavi                = navi;
	f32 minDist          = 80.0f;
	navi->mHoldPikiTimer = 0.0f;
	Piki* retPiki        = nullptr;
	mHeldPiki            = nullptr;
	mNextPiki            = nullptr;

	Iterator<Creature> iterator(navi->mCPlateMgr);
	CI_LOOP(iterator)
	{
		Piki* piki = static_cast<Piki*>(*iterator);

		Vector3f diff        = piki->getPosition() - navi->getPosition();
		f32 faceDir          = navi->mFaceDir;
		Vector3f naviFaceDir = getDirection(faceDir);
		f32 sqrDist          = diff.sqrMagnitude();
		f32 dist             = sqrtfClamped(sqrDist);
		if (!(absF(diff.y) > 15.0f)) {
			if (diff.dot(naviFaceDir) > -0.1f) {
				dist += 10.0f;
			}
			if (dist < minDist && piki->getStateID() == PIKISTATE_Walk && piki->isThrowable()) {
				retPiki = piki;
				minDist = dist;
			}
		}
	}

	if (minDist <= static_cast<NaviParms*>(navi->mParms)->mNaviParms.mGrabPikiRange.mValue) {
		mHeldPiki = retPiki;
	} else {
		mNextPiki = retPiki;
	}

	if (mHeldPiki) {
		navi->mAnimSpeed = 30.0f;
		navi->startMotion(IPikiAnims::THROWWWAIT, IPikiAnims::THROWWWAIT, this, nullptr);
		navi->enableMotionBlend();
	} else {
		Piki* piki = mNextPiki;
		if (piki) {
			piki->mFsm->transit(piki, PIKISTATE_GoHang, nullptr);
		}
	}
	mHasHeldPiki     = false;
	mHoldChargeLevel = 0;
	if (mHeldPiki) {
		rumbleMgr->startRumble(RUMBLETYPE_Nudge, mNavi->mNaviIndex);
		mHeldPiki->mFsm->transit(mHeldPiki, PIKISTATE_Hanged, nullptr);
		mHasHeldPiki = true;
	}
	navi->mHoldPikiCharge  = mHoldChargeLevel / 3.0f * (CG_NAVIPARMS(navi).mThrowDistanceMax() - CG_NAVIPARMS(navi).mThrowDistanceMin())
	                       + CG_NAVIPARMS(navi).mThrowDistanceMin();
	navi->mHoldPikiCharge2 = mHoldChargeLevel / 3.0f * (CG_NAVIPARMS(navi).mThrowHeightMax() - CG_NAVIPARMS(navi).mThrowHeightMin())
	                       + CG_NAVIPARMS(navi).mThrowHeightMin();
	mNextPikiTimeLimit     = 3.0f;
	mInitialSortDelayTimer = 0.1f;
	navi->setDoAnimCallback(mDelegate);
}

/**
 * @note Address: 0x80186210
 * @note Size: 0x3C
 */
void NaviThrowWaitState::onKeyEvent(SysShape::KeyEvent const& key)
{
	switch (key.mType) {
	case KEYEVENT_2:
		break;
	case KEYEVENT_LOOP_END:
		if (mHoldChargeLevel < 3) {
			mHoldChargeLevel++;
		}
		break;
	}
	_24 = 0;
}

/**
 * @note Address: 0x8018624C
 * @note Size: 0x24
 */
void NaviThrowWaitState::doAnimCallback()
{
	lockHangPiki(mNavi);
}

/**
 * @note Address: 0x80186270
 * @note Size: 0x84
 */
void NaviThrowWaitState::lockHangPiki(Navi* navi)
{
	if (mHeldPiki && mHasHeldPiki) {
		CollPart* part = navi->mCollTree->getCollPart('rhnd');
		Vector3f pos;
		pos = part->mPosition;
		pos.y -= 6.0f;
		mHeldPiki->setPosition(pos, false);
	}
}

/**
 * @note Address: 0x801862F4
 * @note Size: 0xAE0
 */
void NaviThrowWaitState::exec(Navi* navi)
{
	if (moviePlayer && moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		transit(navi, NSID_Walk, nullptr);
		return;
	}

	if (!navi->mController1) {
		return;
	}

	navi->control();

	if (!mHeldPiki) {
		if (mNextPiki) {
			mNextPikiTimeLimit -= sys->mDeltaTime;
			if (mNextPikiTimeLimit < 0.0f) {
				transit(navi, NSID_Walk, nullptr);
				return;
			}

			if (navi->mController1->getButtonDown() & Controller::PRESS_B) {
				transit(navi, NSID_Walk, nullptr);
				return;
			}
			CollPart* part   = navi->mCollTree->getCollPart('rhnd');
			Vector3f handPos = part->mPosition;
			Vector3f pikiPos = mNextPiki->getPosition();
			f32 diffX        = handPos.x - pikiPos.x;
			f32 diffY        = handPos.y - pikiPos.y;
			f32 diffZ        = handPos.z - pikiPos.z;
			Vector3f handToPiki(diffX, diffY, diffZ);
			f32 dist = handToPiki.length();
			if (dist <= 32.5f) {
				navi->mAnimSpeed = 30.0f;
				navi->startMotion(IPikiAnims::THROWWWAIT, IPikiAnims::THROWWWAIT, this, nullptr);
				navi->enableMotionBlend();
				mHeldPiki = mNextPiki;
				mNextPiki = nullptr;
				rumbleMgr->startRumble(RUMBLETYPE_Nudge, mNavi->mNaviIndex);
				mHeldPiki->mFsm->transit(mHeldPiki, PIKISTATE_Hanged, nullptr);
				mHasHeldPiki = true;
			} else {
				return;
			}
		} else {
			transit(navi, NSID_Punch, nullptr);
			return;
		}
	}

	navi->mNextThrowPiki = mHeldPiki;

	navi->mHoldPikiCharge  = mHoldChargeLevel / 3.0f * (CG_NAVIPARMS(navi).mThrowDistanceMax() - CG_NAVIPARMS(navi).mThrowDistanceMin())
	                       + CG_NAVIPARMS(navi).mThrowDistanceMin();
	navi->mHoldPikiCharge2 = mHoldChargeLevel / 3.0f * (CG_NAVIPARMS(navi).mThrowHeightMax() - CG_NAVIPARMS(navi).mThrowHeightMin())
	                       + CG_NAVIPARMS(navi).mThrowHeightMin();

	if (mHeldPiki && mHasHeldPiki) {
		int stateID = mHeldPiki->getStateID();
		if (stateID != PIKISTATE_Hanged && stateID != PIKISTATE_GoHang) {
			transit(navi, NSID_Walk, nullptr);
			return;
		}
	}

	if (navi->mController1->getButtonDown() & Controller::PRESS_DPAD_RIGHT) {
		mCurrHappa    = -1;
		int currColor = mHeldPiki->getKind();
		int pikisNext[(PikiColorCount - 1)];
		for (int i = 0; i < (PikiColorCount - 1); i++) {
			pikisNext[i] = ((currColor + i + 1) % PikiColorCount);
		}

		Piki* newPiki = nullptr;
		for (int i = 0; i < (PikiColorCount - 1); i++) {
			Piki* p = findNearestColorPiki(navi, pikisNext[i]);
			if (p) {
				newPiki = p;
				break;
			}
		}

		if (newPiki) {
			Piki* held = mHeldPiki;
			if (held->mNavi) {
				if (currColor == Bulbmin) {
					held->mNavi->mSoundObj->stopSound(PSSE_PK_HAPPA_THROW_WAIT, 0);
				} else {
					held->mNavi->mSoundObj->stopSound(PSSE_PK_VC_THROW_WAIT, 0);
				}
			}
			held->mFsm->transit(held, PIKISTATE_Walk, nullptr);
			mHeldPiki = newPiki;
			newPiki->mFsm->transit(newPiki, PIKISTATE_Hanged, nullptr);
			sortPikis(navi);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_THROW_PIKI_CHANGE, 0);
			rumbleMgr->startRumble(RUMBLETYPE_Nudge, navi->mNaviIndex);
			return;
		}

	} else if (navi->mController1->getButtonDown() & Controller::PRESS_DPAD_LEFT) {
		mCurrHappa    = -1;
		int currColor = mHeldPiki->getKind();
		int pikisNext[(PikiColorCount - 1)];
		for (int i = 0; i < (PikiColorCount - 1); i++) {
			pikisNext[i] = ((currColor + ((PikiColorCount - 2) - i) + 1) % PikiColorCount);
		}

		Piki* newPiki = nullptr;
		for (int i = 0; i < (PikiColorCount - 1); i++) {
			Piki* p = findNearestColorPiki(navi, pikisNext[i]);
			if (p) {
				newPiki = p;
				break;
			}
		}
		if (newPiki) {
			Piki* held = mHeldPiki;
			if (held->mNavi) {
				if (currColor == Bulbmin) {
					held->mNavi->mSoundObj->stopSound(PSSE_PK_HAPPA_THROW_WAIT, 0);
				} else {
					held->mNavi->mSoundObj->stopSound(PSSE_PK_VC_THROW_WAIT, 0);
				}
			}
			held->mFsm->transit(held, PIKISTATE_Walk, nullptr);
			mHeldPiki = newPiki;
			newPiki->mFsm->transit(newPiki, PIKISTATE_Hanged, nullptr);
			sortPikis(navi);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_THROW_PIKI_CHANGE, 0);
			rumbleMgr->startRumble(RUMBLETYPE_Nudge, navi->mNaviIndex);
			return;
		}

	} else if (navi->mController1->getButtonDown() & Controller::PRESS_DPAD_UP
	           || navi->mController1->getButtonDown() & Controller::PRESS_DPAD_DOWN) {
		int i;
		int currHappa = mHeldPiki->getHappa();
		int currColor = mHeldPiki->getKind();
		bool isButton = (navi->mController1->getButtonDown() & Controller::PRESS_DPAD_DOWN) != 0;
		Piki* newPiki;
		for (i = 0; i < MaxHappaStage; i++) {
			if (isButton) {
				mCurrHappa = (mCurrHappa + (PikiGrowthStageCount - 1)) % PikiGrowthStageCount; // leaf->flower, flower->bud, bud->leaf
			} else {
				mCurrHappa = (mCurrHappa + 1) % PikiGrowthStageCount; // leaf->bud, bud->flower, flower->leaf
			}
			newPiki = findNearestColorPiki(navi, currColor);
			if (newPiki) {
				if (newPiki->getHappa() != currHappa) {
					break;
				}
			}
			newPiki = nullptr;
		}
		if (newPiki) {
			Piki* held = mHeldPiki;
			if (held->mNavi) {
				if (currColor == Bulbmin) {
					held->mNavi->mSoundObj->stopSound(PSSE_PK_HAPPA_THROW_WAIT, 0);
				} else {
					held->mNavi->mSoundObj->stopSound(PSSE_PK_VC_THROW_WAIT, 0);
				}
			}

			held->mFsm->transit(held, PIKISTATE_Walk, nullptr);
			mHeldPiki = newPiki;
			newPiki->mFsm->transit(newPiki, PIKISTATE_Hanged, nullptr);
			sortPikis(navi);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_THROW_PIKI_CHANGE, 0);
			rumbleMgr->startRumble(RUMBLETYPE_Nudge, navi->mNaviIndex);
			return;
		}
	}

	if (!(navi->mController1->getButton() & Controller::PRESS_A)) {
		sortPikis(navi);
		navi->mHoldPikiTimer = mHoldChargeLevel / 3.0f * CG_NAVIPARMS(navi).mTimeLimitForThrowing();
		NaviThrowInitArg arg(mHeldPiki);
		transit(navi, NSID_Throw, &arg);
		return;
	}

	navi->mHoldPikiTimer += sys->mDeltaTime;

	if (navi->mHoldPikiTimer > CG_NAVIPARMS(navi).mTimeLimitForThrowing()) {
		navi->mHoldPikiTimer = CG_NAVIPARMS(navi).mTimeLimitForThrowing();
	}
	if (mInitialSortDelayTimer > 0.0f) {
		mInitialSortDelayTimer -= sys->mDeltaTime;
		if (mInitialSortDelayTimer <= 0.0f) {
			sortPikis(navi);
		}
		return;
	}

	if (navi->mCPlateMgr->mActiveGroupSize > 0) {
		Vector3f slotPos = navi->mCPlateMgr->mSlots->mPosition;
		Vector3f naviPos = navi->getPosition();
		f32 diffX        = slotPos.x - naviPos.x;
		f32 diffY        = slotPos.y - naviPos.y;
		f32 diffZ        = slotPos.z - naviPos.z;
		Vector3f sep(diffX, diffY, diffZ);
		if (sep.length() > 30.0f) {
			Vector3f naviPos = navi->getPosition();
			Vector3f naviVel = navi->getVelocity();
			navi->mCPlateMgr->setPos(naviPos, navi->mFaceDir + PI, naviVel, 1.0f);
			sortPikis(navi);
		}
	}
}

/**
 * @note Address: 0x80186DD4
 * @note Size: 0x2FC
 */
Piki* NaviThrowWaitState::findNearestColorPiki(Navi* navi, int color)
{
	f32 minDist   = 140.0f;
	Piki* retpiki = nullptr;
	Iterator<Creature> iterator(navi->mCPlateMgr);
	CI_LOOP(iterator)
	{
		Piki* piki = static_cast<Piki*>(*iterator);
		if (piki->getKind() == color && (mCurrHappa == -1 || mCurrHappa == piki->getHappa())) {
			Vector3f diff = piki->getPosition() - navi->getPosition();
			f32 dist      = diff.length();
			if (dist < minDist && piki->getStateID() == PIKISTATE_Walk && piki->isThrowable()) {
				retpiki = piki;
				minDist = dist;
			}
		}
	}
	return retpiki;
}

/**
 * @note Address: 0x801870D0
 * @note Size: 0x270
 */
void NaviThrowWaitState::sortPikis(Navi* navi)
{
	navi->mCPlateMgr->sortByColor(mHeldPiki, mCurrHappa);

	Vector3f naviPos = navi->getPosition();

	navi->mCPlateMgr->setPos(naviPos, navi->mFaceDir + PI, navi->mVelocity, 1.0f);

	Iterator<Creature> iterator(navi->mCPlateMgr);
	CI_LOOP(iterator)
	{
		Piki* piki = static_cast<Piki*>(*iterator);
		if (piki->getCurrActionID() == PikiAI::ACT_Formation) {
			PikiAI::ActFormation* act = static_cast<PikiAI::ActFormation*>(piki->getCurrAction());
			if (act) {
				act->startSort();
			}
		}
	}
}

/**
 * @note Address: 0x80187340
 * @note Size: 0x68
 */
void NaviThrowWaitState::cleanup(Navi* navi)
{
	navi->mSoundObj->stopSound(PSSE_PK_HAPPA_THROW_WAIT, 0);
	navi->mSoundObj->stopSound(PSSE_PK_VC_THROW_WAIT, 0);
	navi->clearDoAnimCallback();
}

/**
 * @note Address: 0x801873A8
 * @note Size: 0xC8
 */
void NaviThrowState::init(Navi* navi, StateArg* stateArg)
{
	navi->mAnimSpeed = 30.0f;
	navi->startMotion(IPikiAnims::THROW, IPikiAnims::THROW, this, nullptr);
	navi->enableMotionBlend();
	mHasThrown = false;
	mDidCancel = false;
	mNavi      = navi;
	mPiki      = static_cast<NaviThrowInitArg*>(stateArg)->mPiki;
	if (!navi->assertMotion(IPikiAnims::THROW)) {
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80187470
 * @note Size: 0xD4
 */
void NaviThrowState::onKeyEvent(SysShape::KeyEvent const& key)
{
	switch (key.mType) {
	case KEYEVENT_2:
		if (!mPiki->isThrowable()) {
			mHasThrown = true;
		} else {
			Vector3f pos = mNavi->mWhistle->getPosition();
			mNavi->throwPiki(mPiki, pos);
			mPiki->mFsm->transit(mPiki, PIKISTATE_Flying, nullptr);
			mHasThrown = true;
		}
		break;
	case KEYEVENT_END:
		transit(mNavi, NSID_Walk, nullptr);
		break;
	}
}

/**
 * @note Address: 0x80187544
 * @note Size: 0xF0
 */
void NaviThrowState::exec(Navi* navi)
{
	if (navi->mController1) {
		navi->control();
		if (navi->mController1->getButton() & Controller::PRESS_B) {
			mDidCancel = true;
		}
		navi->findNextThrowPiki();
		if (mHasThrown && navi->mController1->getButtonDown() & Controller::PRESS_A && navi->throwable()) {
			transit(navi, NSID_ThrowWait, nullptr);
		}
		if (mHasThrown && navi->mController1->getButtonDown() & Controller::PRESS_B) {
			transit(navi, NSID_Gather, nullptr);
		}
	}
}

/**
 * @note Address: 0x80187634
 * @note Size: 0x4
 */
void NaviThrowState::cleanup(Navi* navi)
{
}

/**
 * @note Address: 0x80187638
 * @note Size: 0x1C0
 */
void NaviPelletState::init(Navi* navi, StateArg* stateArg)
{
	mDoForceWakeup = false;
	navi->startMotion(IPikiAnims::JKOKE, IPikiAnims::JKOKE, navi, nullptr);

	if (navi->mNaviIndex == NAVIID_Olimar) {
		navi->mSoundObj->startSound(PSSE_PL_SLEEP_ORIMA, 0);
	} else if (playData->isStoryFlag(STORY_DebtPaid)) {
		navi->mSoundObj->startSound(PSSE_PL_SLEEP_SHACHO, 0);
	} else {
		navi->mSoundObj->startSound(PSSE_PL_SLEEP_LUGI, 0);
	}

	Vector3f pos = navi->getPosition();
	pos.y += 5.0f;

	PelletViewArg arg;
	arg.mEnemyName = "orima";
	arg.mPosition  = pos;
	arg.mEnemy     = navi;
	arg.mMatrix    = &navi->mBaseTrMatrix;
	if (navi->mNaviIndex == NAVIID_Olimar) {
		arg.mScale = OLIMAR_SCALE;
	} else {
		arg.mScale = LOUIE_SCALE;
	}
	navi->becomePellet(&arg);
	navi->setAtari(false);
	mSubState = PELLET_LayDown;
}

/**
 * @note Address: 0x801877F8
 * @note Size: 0x3F8
 */
void NaviPelletState::exec(Navi* navi)
{
	if (!navi->mPellet) {
		transit(navi, NSID_Walk, nullptr);
		return;
	}

	if (navi->mController1 && moviePlayer->mDemoState == DEMOSTATE_Inactive) {
		if (!gameSystem->paused_soft() && !gameSystem->isMultiplayerMode() && navi->mController1
		    && navi->mController1->isButtonDown(JUTGamePad::PRESS_Y) && playData->isDemoFlag(DEMO_Unlock_Captain_Switch)) {

			Navi* currNavi = naviMgr->getAt(GET_OTHER_NAVI(navi));
			int currID     = currNavi->getStateID();

			if (currNavi->isAlive() && currID != NSID_Nuku && currID != NSID_NukuAdjust && currID != NSID_Punch) {
				gameSystem->mSection->pmTogglePlayer();

				playChangeVoice(currNavi);

				if (currNavi->mCurrentState->needYChangeMotion()) {
					currNavi->mFsm->transit(currNavi, NSID_Change, nullptr);
				}
			}
		}

		if (mSubState == PELLET_Wait || mSubState == PELLET_LayDown) {
			if (navi->mController1 && navi->mController1->isButtonDown(Controller::PRESS_ABX | Controller::PRESS_DPAD)) {
				if (mDoForceWakeup) {
					navi->mAnimSpeed = 60.0f;
					navi->finishMotion();
				} else {
					navi->startMotion(IPikiAnims::GETUP, IPikiAnims::GETUP, navi, nullptr);
					if (navi->mNaviIndex == NAVIID_Olimar) {
						navi->mSoundObj->startSound(PSSE_PL_WAKEUP_ORIMA, 0);
					} else if (playData->isStoryFlag(STORY_DebtPaid)) {
						navi->mSoundObj->startSound(PSSE_PL_WAKEUP_SHACHO, 0);
					} else {
						navi->mSoundObj->startSound(PSSE_PL_WAKEUP_LUGI, 0);
					}
				}
				mSubState = PELLET_GetUp;
			}
		}

		if (mSubState == PELLET_Finished) {
			Pellet* pelt = navi->mPellet;
			if (pelt) {
				pelt->kill(nullptr);
			}
			transit(navi, NSID_Walk, nullptr);
		}

		Pellet* pelt = navi->mPellet;
		if (!pelt) {
			transit(navi, NSID_Walk, nullptr);
		} else {
			pelt->getPosition();
			navi->mVelocity = 0.0f;
		}
	}
}

/**
 * @note Address: 0x80187BF0
 * @note Size: 0x12C
 */
void NaviPelletState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& key)
{
	if (mDoForceWakeup) {
		if (key.mType == KEYEVENT_LOOP_END) {
			if (navi->mAnimator.mSelfAnimator.isFlag(SysShape::Animator::AnimFinishMotion)) {
				if (playData->isStoryFlag(STORY_DebtPaid)) {
					navi->mSoundObj->startSound(PSSE_PL_WAKEUP_SHACHO, 0);
				} else {
					navi->mSoundObj->startSound(PSSE_PL_WAKEUP_LUGI, 0);
				}
			}
			switch (mSubState) {
			case PELLET_LayDown:
				mSubState = PELLET_Wait;
				break;
			default:
				break;
			}
		}
		if (key.mType == KEYEVENT_END) {
			switch (mSubState) {
			case PELLET_GetUp:
				mSubState = PELLET_Finished;
				break;
			default:
				break;
			}
		}
	} else {
		if (key.mType == KEYEVENT_END) {
			switch (mSubState) {
			case PELLET_LayDown:
				mSubState = PELLET_Wait;
				break;
			case PELLET_GetUp:
				mSubState = PELLET_Finished;
				break;
			}
		}
	}
}

/**
 * @note Address: 0x80187D1C
 * @note Size: 0x80
 */
void NaviPelletState::cleanup(Navi* navi)
{
	if (navi->mPellet) {
		navi->mPellet->kill(nullptr);
	}
	navi->setAtari(true);
	navi->mAcceleration   = 0.0f;
	navi->mVelocity       = 0.0f;
	navi->mTargetVelocity = 0.0f;
}

/**
 * @note Address: 0x80187D9C
 * @note Size: 0x48
 */
void NaviDemo_UfoState::init(Navi* navi, StateArg* stateArg)
{
	mSubState = UFO_GoTo;
	navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
}

/**
 * @note Address: 0x80187DE4
 * @note Size: 0xB0
 */
void NaviDemo_UfoState::exec(Navi* navi)
{
	switch (mSubState) {
	case UFO_GoTo:
		if (execGoto(navi)) {
			mSubState = UFO_Suck;
			initSuck(navi);
		}
		break;
	case UFO_Suck:
		if (execSuck(navi)) {
			mSubState = UFO_Finished;
		}
		break;
	case UFO_Finished:
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80187E94
 * @note Size: 0x4
 */
void NaviDemo_UfoState::cleanup(Navi* navi)
{
}

/**
 * @note Address: 0x80187E98
 * @note Size: 0x17C
 */
bool NaviDemo_UfoState::execGoto(Navi* navi)
{
	Vector3f shipPos = ItemOnyon::mgr->mUfo->getGoalPos();
	Vector3f naviPos = navi->getPosition();
	Vector3f diff    = shipPos - naviPos;
	if ((diff.x * diff.x) + (diff.z * diff.z) < 900.0f) {
		navi->mVelocity       = 0.0f;
		navi->mTargetVelocity = 0.0f;
		return true;
	}

	diff.normalise();
	navi->mTargetVelocity = diff * naviMgr->mNaviParms->mNaviParms.mMoveSpeed.mValue * 0.5f;
	return false;
}

/**
 * @note Address: 0x80188014
 * @note Size: 0x118
 */
void NaviDemo_UfoState::initSuck(Navi* navi)
{
	Onyon* ship   = ItemOnyon::mgr->mUfo;
	Vector3f diff = ship->getSuckPos() - navi->getPosition();
	mDist         = diff.length();

	_14             = 0.0f;
	navi->mVelocity = Vector3f(navi->mVelocity.x, 0.0f, navi->mVelocity.z);

	mScaleMod = 1.0f;
	mStartPos = navi->getPosition();
	mProgress = 0.0f;
	mSpeed    = 0.0f;
}

/**
 * @note Address: 0x8018812C
 * @note Size: 0x120
 */
bool NaviDemo_UfoState::execSuck(Navi* navi)
{
	Vector3f goalPos = ItemOnyon::mgr->mUfo->getSuckPos();
	Vector3f dir     = Vector3f::sub2(goalPos, mStartPos);
	Vector3f setPos  = mStartPos + dir * mProgress;
	navi->setPosition(setPos, false);
	navi->mScale = -(mProgress * 0.75f - 1.0f) * mScaleMod;

	mProgress += (mSpeed * sys->mDeltaTime) / mDist;
	mSpeed += sys->mDeltaTime * 720.0f;
	if (mProgress >= 1.0f) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8018824C
 * @note Size: 0x58C
 */
void NaviDemo_HoleInState::init(Navi* navi, StateArg* stateArg)
{
	mSubState = HOLEIN_GoTo;
	navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
	mHoleObj    = nullptr;
	f32 maxDist = 12800.0f;

	Vector3f naviPos = navi->getPosition();

	Iterator<BaseItem> iterator(ItemCave::mgr);
	CI_LOOP(iterator)
	{
		ItemCave::Item* cave = static_cast<ItemCave::Item*>(*iterator);
		Vector3f cavePos     = cave->getPosition();
		f32 dist             = cavePos.distance(naviPos);
		if (dist < maxDist) {
			maxDist  = dist;
			mHoleObj = cave;
		}
	}

	naviPos = navi->getPosition();

	Iterator<BaseItem> iterator2(ItemHole::mgr);
	CI_LOOP(iterator2)
	{
		ItemHole::Item* cave = static_cast<ItemHole::Item*>(*iterator2);
		Vector3f cavePos     = cave->getPosition();
		f32 dist             = cavePos.distance(naviPos);
		if (dist < maxDist) {
			maxDist  = dist;
			mHoleObj = cave;
		}
	}
}

/**
 * @note Address: 0x801887D8
 * @note Size: 0xA8
 */
void NaviDemo_HoleInState::exec(Navi* navi)
{
	switch (mSubState) {
	case HOLEIN_GoTo:
		if (execGoto(navi)) {
			mSubState = HOLEIN_Hesitate;
			initHesitate(navi);
		}
		break;
	case HOLEIN_Hesitate:
		if (execHesitate(navi)) {
			mSubState = HOLEIN_Fall;
			initFall(navi);
		}
		break;
	case HOLEIN_Fall:
		execFall(navi);
		break;
	}
}

/**
 * @note Address: 0x80188880
 * @note Size: 0xC
 */
void NaviDemo_HoleInState::onKeyEvent(Navi* navi, SysShape::KeyEvent const&)
{
	mReady = true;
}

/**
 * @note Address: 0x8018888C
 * @note Size: 0x4
 */
void NaviDemo_HoleInState::cleanup(Navi* navi)
{
}

/**
 * @note Address: 0x80188890
 * @note Size: 0x178
 */
bool NaviDemo_HoleInState::execGoto(Navi* navi)
{
	Vector3f holePos = mHoleObj->getPosition();
	Vector3f naviPos = navi->getPosition();
	Vector3f diff    = holePos - naviPos;
	if ((diff.x * diff.x) + (diff.z * diff.z) < 2500.0f) {
		navi->mVelocity       = 0.0f;
		navi->mTargetVelocity = 0.0f;
		return true;
	}

	diff.normalise();
	navi->mTargetVelocity = diff * naviMgr->mNaviParms->mNaviParms.mMoveSpeed.mValue * 0.5f;
	return false;
}

/**
 * @note Address: 0x80188A08
 * @note Size: 0x60
 */
void NaviDemo_HoleInState::initHesitate(Navi* navi)
{
	navi->startMotion(IPikiAnims::SAGASU, IPikiAnims::SAGASU, navi, nullptr);
	mReady = false;
}

/**
 * @note Address: 0x80188A68
 * @note Size: 0x16C
 */
bool NaviDemo_HoleInState::execHesitate(Navi* navi)
{
	if (mReady) {
		Vector3f holePos = mHoleObj->getPosition();
		Vector3f diff    = holePos - navi->getPosition();
		diff.normalise();

		diff.x *= 2.0f;
		diff.z *= 2.0f;
		Vector3f velocity(diff.x, 240.0f, diff.z);
		navi->mVelocity       = velocity;
		navi->mTargetVelocity = velocity;
		navi->setMapCollision(false);
		return true;
	}

	navi->mVelocity       = 0.0f;
	navi->mTargetVelocity = 0.0f;
	return false;
}

/**
 * @note Address: 0x80188BD4
 * @note Size: 0x4
 */
void NaviDemo_HoleInState::initFall(Navi* navi)
{
}

/**
 * @note Address: 0x80188BD8
 * @note Size: 0x8
 */
bool NaviDemo_HoleInState::execFall(Navi* navi)
{
	return false;
}

/**
 * @note Address: 0x80188BE0
 * @note Size: 0x144
 */
void NaviPressedState::init(Navi* navi, StateArg* stateArg)
{
	mScaleBackup = navi->mScale;

	navi->mScale = Vector3f(1.5f, 0.01f, 1.5f);
	mTimer       = 2.0f;
	navi->setUpdateTrMatrix(false);
	Vector3f rot(-HALF_PI, navi->mFaceDir, 0.0f);
	rot.x        = 0.0f;
	Vector3f pos = navi->getPosition();
	pos.y += 2.0f;

	navi->mBaseTrMatrix.makeSRT(navi->mScale, rot, pos);
	navi->setAtari(false);
	mSubState = PRESSED_Wait;
	navi->mSoundObj->startSound(PSSE_PL_ORIMA_DAMAGE, 0);
	PSM::DamageDirector* psm = PSMGetDamageD();
	if (psm) {
		psm->directOn();
	}
}

/**
 * @note Address: 0x80188D24
 * @note Size: 0x270
 */
void NaviPressedState::exec(Navi* navi)
{
	if (moviePlayer->isFlag(MVP_IsActive)) {
		transit(navi, NSID_Walk, nullptr);
		return;
	}

	Vector3f rot(-HALF_PI, navi->mFaceDir, 0.0f);
	Vector3f pos = navi->getPosition();
	rot.x        = 0.0f;

	mTimer -= sys->mDeltaTime;
	switch (mSubState) {
	case PRESSED_Wait:
		pos.y += 2.0f;
		navi->mBaseTrMatrix.makeSRT(navi->mScale, rot, pos);
		if (mTimer <= 0.0f) {
			mSubState = PRESSED_Restore;
			mTimer    = 0.7f;
		}
		break;
	case PRESSED_Restore:
		f32 y      = 1.0f - mTimer / 0.7f;
		f32 xz     = mTimer * TAU * 4.0f;
		f32 sinVal = (0.5f * (1.0f - y)) * sinf(xz);
		y += sinVal;
		if (y < 0.0f) {
			y = 0.0f;
		}

		Vector3f otherVec(1.5f * (1.0f - y), 0.01f * (1.0f - y), 1.5f * (1.0f - y));
		navi->mScale = Vector3f(y * mScaleBackup.x + otherVec.x, y * mScaleBackup.y + otherVec.y, y * mScaleBackup.x + otherVec.z);
		pos.y += 2.0f;
		navi->mBaseTrMatrix.makeSRT(navi->mScale, rot, pos);
		if (mTimer <= 0.0f) {
			transit(navi, NSID_Walk, nullptr);
		}
		break;
	}

	navi->mVelocity       = 0.0f;
	navi->mTargetVelocity = 0.0f;
}

/**
 * @note Address: 0x80188F94
 * @note Size: 0x7C
 */
void NaviPressedState::cleanup(Navi* navi)
{
	navi->setAtari(true);
	navi->setUpdateTrMatrix(true);
	navi->mScale = mScaleBackup;
}

} // namespace Game
