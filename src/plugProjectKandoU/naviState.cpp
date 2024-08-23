#include "Game/NaviState.h"
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
#include "PSM/Navi.h"
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
void NaviState::draw2d(J2DGrafContext& graf, int& a2) { }

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

	Vector3f stickVals(navi->mController1->getMainStickX(), 0.0f, navi->mController1->getMainStickY());
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
								angle = JMath::atanTable_.atan2_(stickVals.x, stickVals.z);
								angle = roundAng(0.9424779f * (randFloat() - 0.5f) + angle);
							}

							InteractFlick flick(navi, knockback, 5.0f, angle);
							creature->stimulate(flick);
						}
					}
				}

				mWiggleCounter = 0;
			}
			mPrevStickDirection = Vector3f(stickVals.x, 0.0f, stickVals.z);
			mIdleTimer          = 0.2f;
		}
	}

	mIdleTimer -= sys->mDeltaTime;
	if (mIdleTimer < 0.0f) {
		mPrevStickDirection = Vector3f(stickVals.x, 0.0f, stickVals.z);
		mWiggleCounter      = 0;
		mIdleTimer          = 0.5f;
	}
}

/**
 * @note Address: 0x8017E84C
 * @note Size: 0x4
 */
void NaviStuckState::cleanup(Navi* navi) { }

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

			Onyon* onyon = navi->checkOnyon();
			if (onyon && navi->mController1->isButtonDown(JUTGamePad::PRESS_A) && onyon->mOnyonType != ONYON_TYPE_POD) {
				NaviContainerArg containerArg(onyon);
				transit(navi, NSID_Container, &containerArg);
				return;
			}

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
void NaviWalkState::cleanup(Navi* navi) { }

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
		Vector3f sep       = naviPos - targetPos;
		f32 rad            = 100.0f;
		if (sep.sqrMagnitude2D() > SQUARE(rad)) {
			mTarget = nullptr;
			return;
		}

		Vector3f::getFlatDirectionFromTo(naviPos, targetPos);

		navi->mFaceDir += 0.2f * angDist(roundAng(JMAAtan2Radian(targetPos.x, targetPos.z)), navi->mFaceDir);
		navi->mFaceDir = roundAng(navi->mFaceDir);
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	lis      r5, "zero__10Vector3<f>"@ha
	mr       r30, r3
	addi     r5, r5, "zero__10Vector3<f>"@l
	mr       r31, r4
	bl       "blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x14(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x14(r30)
	lfs      f1, 0x14(r30)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8017F5F4
	mr       r3, r30
	mr       r4, r31
	bl       initAI_animation__Q24Game13NaviWalkStateFPQ24Game4Navi
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_80518C30@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_80518C08@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_80518C3C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fadds    f0, f0, f1
	stfs     f0, 0x14(r30)
	b        lbl_8017F6EC

lbl_8017F5F4:
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_8017F6EC
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r30)
	addi     r3, r1, 8
	lfs      f31, 0x14(r1)
	lwz      r12, 0(r4)
	lfs      f30, 0x1c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x10(r1)
	lfs      f4, 8(r1)
	fsubs    f1, f30, f2
	lfs      f0, lbl_80518C44@sda21(r2)
	fsubs    f3, f31, f4
	fmuls    f1, f1, f1
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8017F668
	li       r0, 0
	stw      r0, 0x18(r30)
	b        lbl_8017F6EC

lbl_8017F668:
	fsubs    f2, f2, f30
	lfs      f3, lbl_80518BE0@sda21(r2)
	fsubs    f1, f4, f31
	fmuls    f4, f2, f2
	fmadds   f0, f1, f1, f3
	fadds    f4, f4, f0
	fcmpo    cr0, f4, f3
	ble      lbl_8017F698
	ble      lbl_8017F69C
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_8017F69C

lbl_8017F698:
	fmr      f4, f3

lbl_8017F69C:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_8017F6B8
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f4
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0

lbl_8017F6B8:
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lfs      f2, 0x1fc(r31)
	bl       angDist__Fff
	lfs      f2, lbl_80518C28@sda21(r2)
	lfs      f0, 0x1fc(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x1fc(r31)
	lfs      f1, 0x1fc(r31)
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)

lbl_8017F6EC:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
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
	if (naviIdx == NAVIID_Louie && gameSystem->isStoryMode() && playData->isStoryFlag(STORY_DebtPaid)) {
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

	// some dumb regswaps in here
	if (dist > 15.0f) {
		Vector3f oldSep = Vector3f(-sep.x, 0.0f, sep.z);
		sep.x           = oldSep.z;
		sep.z           = oldSep.x;
		if (!mIsEscapeCCW) {
			sep.x = -oldSep.z;
			sep.z = -(f32)(f64)oldSep.x;
		}
	}

	navi->control();

	sep = sep * naviMgr->mNaviParms->mNaviParms.mMoveSpeed.mValue;
	blendVelocity(navi, sep);
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017FD5C
	lfs      f0, lbl_80518C24@sda21(r2)
	li       r0, 1
	mr       r3, r31
	li       r4, 1
	stfs     f0, 0x14(r30)
	li       r5, 1
	li       r6, 0
	li       r7, 0
	stb      r0, 0x10(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x18(r30)
	b        lbl_8017FF50

lbl_8017FD5C:
	lbz      r3, 0x29(r30)
	cmplwi   r3, 0
	beq      lbl_8017FD70
	addi     r0, r3, -1
	stb      r0, 0x29(r30)

lbl_8017FD70:
	lwz      r4, 0x18(r30)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x18(r1)
	lfs      f29, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	fsubs    f3, f1, f31
	lfs      f4, 0x10(r1)
	fsubs    f2, f0, f30
	lfs      f1, lbl_80518BE0@sda21(r2)
	fsubs    f4, f4, f29
	fmuls    f0, f3, f3
	fmuls    f5, f2, f2
	stfs     f3, 0x30(r1)
	fmuls    f6, f4, f4
	stfs     f2, 0x34(r1)
	fadds    f0, f0, f5
	stfs     f4, 0x38(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8017FE0C
	fmadds   f0, f3, f3, f5
	fadds    f31, f6, f0
	fcmpo    cr0, f31, f1
	ble      lbl_8017FE10
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_8017FE10

lbl_8017FE0C:
	fmr      f31, f1

lbl_8017FE10:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8017FE4C
	lfs      f0, lbl_80518C48@sda21(r2)
	lfs      f2, 0x30(r1)
	fdivs    f3, f0, f31
	lfs      f1, 0x34(r1)
	lfs      f0, 0x38(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x30(r1)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	b        lbl_8017FE50

lbl_8017FE4C:
	fmr      f31, f0

lbl_8017FE50:
	lwz      r3, 0x18(r30)
	addi     r4, r1, 0x20
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r30)
	lfs      f0, 0x2c(r1)
	lwz      r12, 0(r3)
	fsubs    f29, f31, f0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518C50@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_8017FEC8
	lfs      f0, lbl_80518C24@sda21(r2)
	li       r0, 1
	mr       r3, r31
	li       r4, 1
	stfs     f0, 0x14(r30)
	li       r5, 1
	li       r6, 0
	li       r7, 0
	stb      r0, 0x10(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	b        lbl_8017FF50

lbl_8017FEC8:
	lfs      f0, lbl_80518C54@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_8017FF08
	lfs      f0, 0x30(r1)
	lfs      f2, 0x38(r1)
	fneg     f0, f0
	stfs     f2, 0x30(r1)
	stfs     f0, 0x38(r1)
	lbz      r0, 0x28(r30)
	cmplwi   r0, 0
	bne      lbl_8017FF08
	frsp     f1, f0
	fneg     f0, f2
	fneg     f1, f1
	stfs     f0, 0x30(r1)
	stfs     f1, 0x38(r1)

lbl_8017FF08:
	mr       r3, r31
	bl       control__Q24Game4NaviFv
	lwz      r5, naviMgr__4Game@sda21(r13)
	mr       r3, r30
	lfs      f2, 0x38(r1)
	mr       r4, r31
	lwz      r6, 0xc8(r5)
	addi     r5, r1, 0x30
	lfs      f1, 0x34(r1)
	lfs      f3, 0x3b8(r6)
	lfs      f0, 0x30(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x38(r1)
	stfs     f0, 0x30(r1)
	stfs     f1, 0x34(r1)
	bl       "blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"

lbl_8017FF50:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x8017FF80
 * @note Size: 0x34
 */
void NaviWalkState::blendVelocity(Navi* navi, Vector3f& targetVel) { navi->mTargetVelocity += targetVel; }

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
void NaviChangeState::cleanup(Navi* navi) { }

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
			if (naviID == NAVIID_Louie && gameSystem->isStoryMode() && playData->mStoryFlags & STORY_DebtPaid) {
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
void NaviFollowState::cleanup(Navi* navi) { }

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
void NaviPunchState::cleanup(Navi* navi) { }

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
	switch (_10) {
	case 0:
		if (execPathfinding(navi) == 2) {
			startWalking = true;
		}
		break;
	case 1: {
		int moveResult = execMove(navi);
		if (moveResult == 2) {
			startWalking = true;
		} else if (moveResult == 1) {
			startWalking = true;
		}
	} break;
	case 2:
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
void NaviPathMoveState::cleanup(Navi* navi) { releasePathfinder(); }

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
	PathfindRequest request(wp->mIndex, searchResult->mIndex, 1);
	mPathfinderContextID = testPathfinder->start(request);
	_10                  = 0;
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
		_10       = 1;
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
int NaviPathMoveState::execMoveGoal(Navi* navi) { return 0; }

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
		mIsFollower = 0;
	}
	if (navi->mPluckingCounter != 0) {
		mAnimID = IPikiAnims::NUKU3;
	} else {
		mAnimID = IPikiAnims::NUKU;
	}
	navi->startMotion(mAnimID, mAnimID, navi, nullptr);
	mCounter = static_cast<NaviParms*>(navi->mParms)->mNaviParms.mLoopCountToPluck;
	navi->mSoundObj->startSound(PSSE_PL_PULLING_PIKI, 0);
	mDidPluckSE = 0;
	mIsActive   = 0;
	mDidPressA  = 0;
	_15         = 0;
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
		if (mIsFollower != 0) {
			NaviFollowArg followArg(false); // not new to party
			transit(navi, NSID_Follow, &followArg);
		} else {
			transit(navi, NSID_Walk, nullptr);
		}
		navi->mPluckingCounter = 0;
	} else if (mIsFollower == 0) {
		if (mDidPressA == 0 && navi->mController1->isButtonHeld(JUTGamePad::PRESS_A)) {
			mDidPressA = 1;
		}
		if (mDidPressA != 0 && !navi->mController1->isButtonHeld(JUTGamePad::PRESS_A)) {
			mIsActive = 1;
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
		_15 = true;
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
	P2ASSERTLINE(2769, stateArg);

	NaviNukuAdjustStateArg* arg = static_cast<NaviNukuAdjustStateArg*>(stateArg);

	mAngleToItem    = arg->mAngleToItem;
	mUnusedVelocity = arg->mUnusedVelocity;
	mUnusedState    = arg->mUnusedState;
	mPikiHead       = arg->mPikihead;
	mIsFollowing    = arg->_18;
	mUnusedBool     = 0;

	Vector3f diff = arg->mPikihead->getPosition() - navi->getPosition();
	mAngleToPiki  = JMAAtan2Radian(diff.x, diff.z);
	diff.normalise();
	mTargetPosition = arg->mPikihead->getPosition() - (diff * 6.0f);

	navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
	navi->enableMotionBlend();
	navi->setMoveRotation(false);
	mIsMoving       = 0;
	navi->mMass     = 0.0f;
	mWallHitCounter = 0;
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r29, r3
	lwz      r3, playData__4Game@sda21(r13)
	mr       r30, r4
	mr       r31, r5
	li       r4, 0
	bl       setDemoFlag__Q24Game8PlayDataFi
	cmplwi   r31, 0
	bne      lbl_8018210C
	lis      r3, lbl_8047EB4C@ha
	lis      r5, lbl_8047EB5C@ha
	addi     r3, r3, lbl_8047EB4C@l
	li       r4, 0xad1
	addi     r5, r5, lbl_8047EB5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8018210C:
	lfs      f0, 0(r31)
	li       r0, 0
	mr       r4, r30
	addi     r3, r1, 0x14
	stfs     f0, 0x30(r29)
	lfs      f0, 4(r31)
	stfs     f0, 0x34(r29)
	lfs      f0, 8(r31)
	stfs     f0, 0x38(r29)
	lfs      f0, 0xc(r31)
	stfs     f0, 0x3c(r29)
	lwz      r5, 0x10(r31)
	stw      r5, 0x40(r29)
	lwz      r5, 0x14(r31)
	stw      r5, 0x44(r29)
	lbz      r5, 0x18(r31)
	stb      r5, 0x48(r29)
	stb      r0, 0x20(r29)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x20(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f2, 0x14(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x28(r1)
	lfs      f0, 0x1c(r1)
	fsubs    f30, f3, f2
	lfs      f2, 0x24(r1)
	fsubs    f31, f1, f0
	lfs      f0, 0x18(r1)
	fmr      f1, f30
	fsubs    f29, f2, f0
	fmr      f2, f31
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmuls    f2, f29, f29
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmuls    f3, f31, f31
	stfs     f1, 0x10(r29)
	fmadds   f1, f30, f30, f2
	fadds    f1, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801821E4
	ble      lbl_801821E8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801821E8

lbl_801821E4:
	fmr      f1, f0

lbl_801821E8:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80182208
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f30, f30, f0
	fmuls    f29, f29, f0
	fmuls    f31, f31, f0

lbl_80182208:
	lwz      r4, 0x14(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, lbl_80518C80@sda21(r2)
	mr       r3, r30
	lfs      f1, 8(r1)
	li       r4, 0x1e
	fmuls    f0, f30, f4
	lfs      f3, 0xc(r1)
	fmuls    f2, f29, f4
	lfs      f5, 0x10(r1)
	fmuls    f4, f31, f4
	li       r5, 0x1e
	fsubs    f0, f1, f0
	li       r6, 0
	fsubs    f1, f3, f2
	li       r7, 0
	fsubs    f2, f5, f4
	stfs     f0, 0x14(r29)
	stfs     f1, 0x18(r29)
	stfs     f2, 0x1c(r29)
	lwz      r12, 0(r30)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       enableMotionBlend__Q24Game8FakePikiFv
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0(r30)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lfs      f0, lbl_80518BE0@sda21(r2)
	stb      r0, 0x4c(r29)
	stfs     f0, 0x118(r30)
	stb      r0, 0x5c(r29)
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x74(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/**
 * @note Address: 0x801822E0
 * @note Size: 0x10
 */
void NaviNukuAdjustState::wallCallback(Navi* navi, Vector3f&) { mWallHitCounter++; }

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

	Vector3f sproutToNavi = mPikiHead->getPosition() - navi->getPosition();
	sproutToNavi.length(); // unused

	Vector3f targetToNavi    = mTargetPosition - navi->getPosition(); // f26, f27, f28
	f32 targetToNaviDistance = targetToNavi.length2D();               // f31
	f32 absoluteDeltaY       = absF(targetToNavi.y);

	f32 normalisedDistance = targetToNavi.normalise(); // f30, why tho

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

		navi->mVelocity       = targetToNavi * speed;
		navi->mTargetVelocity = Vector3f(0.0f);
		navi->mTargetVelocity = targetToNavi * speed;
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

	Vector3f currentVel = navi->mVelocity; // f31, f30, f29
	mIsMoving--;
	Vector3f naviPos = navi->getPosition();

	Vector3f pikiToNavi    = mCollidedPikiPosition - naviPos;
	f32 distancePikiToNavi = pikiToNavi.normalise();

	// If the distance is 0, return
	if (!(distancePikiToNavi > 0.0f)) {
		return;
	}

	f32 velocityDifference = pikiToNavi.z * currentVel.z - targetToNavi.x * currentVel.x;
	Vector3f newVel(pikiToNavi.x, 0.0f, -pikiToNavi.z);

	f32 simSpeed = currentVel.length();

	newVel *= simSpeed;
	if (!(velocityDifference < 0.0f)) {
		newVel *= -1.0f;
	}

	// Interpolate 35% current velocity and 65% new velocity
	Vector3f blendedVel = currentVel * 0.35f + newVel * 0.65f;

	f32 speed = blendedVel.normalise();
	if (speed != 0.0f) {
		Vector3f finalVel     = blendedVel * simSpeed;
		navi->mVelocity       = finalVel;
		navi->mTargetVelocity = finalVel;
	}

	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stfd     f28, 0xb0(r1)
	psq_st   f28, 184(r1), 0, qr0
	stfd     f27, 0xa0(r1)
	psq_st   f27, 168(r1), 0, qr0
	stfd     f26, 0x90(r1)
	psq_st   f26, 152(r1), 0, qr0
	stfd     f25, 0x80(r1)
	psq_st   f25, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	lwz      r5, moviePlayer__4Game@sda21(r13)
	mr       r30, r3
	mr       r31, r4
	cmplwi   r5, 0
	beq      lbl_801824CC
	lwz      r0, 0x18(r5)
	cmpwi    r0, 0
	beq      lbl_801824CC
	lbz      r0, 0x48(r30)
	cmplwi   r0, 0
	beq      lbl_801824B0
	lwz      r12, 0(r3)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

	lbl_801824B0:
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

	lbl_801824CC:
	lwz      r3, 0x44(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018253C
	lbz      r0, 0x48(r30)
	cmplwi   r0, 0
	beq      lbl_80182518
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

	lbl_80182518:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

	lbl_8018253C:
	lbz      r0, 0x48(r30)
	cmplwi   r0, 0
	bne      lbl_80182554
	mr       r3, r31
	li       r4, 0
	bl       makeCStick__Q24Game4NaviFb

	lbl_80182554:
	lwz      r3, 0x278(r31)
	cmplwi   r3, 0
	beq      lbl_80182598
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80182598
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x26a(r31)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

	lbl_80182598:
	mr       r4, r31
	addi     r3, r1, 0x50
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x50(r1)
	mr       r4, r31
	addi     r3, r1, 0x38
	stfs     f0, 0x24(r30)
	lfs      f0, 0x54(r1)
	stfs     f0, 0x28(r30)
	lfs      f0, 0x58(r1)
	stfs     f0, 0x2c(r30)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x44(r30)
	addi     r3, r1, 0x44
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x48(r1)
	lfs      f0, 0x3c(r1)
	lfs      f3, 0x44(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x38(r1)
	lfs      f1, 0x4c(r1)
	lfs      f0, 0x40(r1)
	fsubs    f2, f3, f2
	fmuls    f4, f4, f4
	fsubs    f3, f1, f0
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmadds   f1, f2, f2, f4
	fmuls    f2, f3, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x14(r30)
	lfs      f2, 0x2c(r1)
	lfs      f1, 0x1c(r30)
	lfs      f0, 0x34(r1)
	fsubs    f28, f3, f2
	lfs      f2, 0x18(r30)
	fsubs    f26, f1, f0
	lfs      f1, 0x30(r1)
	fmuls    f4, f28, f28
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f27, f2, f1
	fmuls    f3, f26, f26
	fadds    f1, f4, f3
	fcmpo    cr0, f1, f0
	ble      lbl_801826A0
	fmadds   f31, f28, f28, f3
	fcmpo    cr0, f31, f0
	ble      lbl_801826A4
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801826A4

	lbl_801826A0:
	fmr      f31, f0

	lbl_801826A4:
	fmuls    f5, f27, f27
	lfs      f1, lbl_80518BE0@sda21(r2)
	fabs     f2, f27
	fadds    f0, f4, f5
	frsp     f29, f2
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801826E0
	fmadds   f0, f28, f28, f5
	fadds    f30, f3, f0
	fcmpo    cr0, f30, f1
	ble      lbl_801826E4
	frsqrte  f0, f30
	fmuls    f30, f0, f30
	b        lbl_801826E4

	lbl_801826E0:
	fmr      f30, f1

	lbl_801826E4:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_80182708
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f30
	fmuls    f28, f28, f0
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0
	b        lbl_8018270C

	lbl_80182708:
	fmr      f30, f0

	lbl_8018270C:
	lfs      f25, 0x10(r30)
	lfs      f2, 0x1fc(r31)
	fmr      f1, f25
	bl       angDist__Fff
	fabs     f2, f1
	lfs      f0, lbl_80518C84@sda21(r2)
	frsp     f2, f2
	fcmpo    cr0, f2, f0
	bge      lbl_801828AC
	lfs      f0, lbl_80518C3C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_801828AC
	lfs      f0, lbl_80518C4C@sda21(r2)
	fcmpo    cr0, f29, f0
	bge      lbl_801828AC
	stfs     f25, 0x1fc(r31)
	li       r0, 1
	stw      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	or.      r29, r3, r3
	stw      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	bne      lbl_801827CC
	lbz      r0, 0x48(r30)
	cmplwi   r0, 0
	beq      lbl_801827A8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

	lbl_801827A8:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

	lbl_801827CC:
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r4, 0x44(r30)
	mr       r3, r29
	lhz      r4, 0x1f4(r4)
	bl       changeShape__Q24Game4PikiFi
	lwz      r4, 0x44(r30)
	mr       r3, r29
	lhz      r4, 0x1f6(r4)
	bl       changeHappa__Q24Game4PikiFi
	lwz      r4, 0x44(r30)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	mr       r3, r29
	lfs      f1, 0x24(r1)
	addi     r4, r1, 0x5c
	lfs      f0, 0x28(r1)
	li       r5, 0
	stfs     f2, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r3, 0x44(r30)
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	li       r0, 0
	mr       r4, r29
	stw      r0, 0x44(r30)
	addi     r6, r1, 0xc
	li       r5, 0xc
	lbz      r3, 0x26a(r31)
	neg      r0, r3
	stw      r31, 0x10(r1)
	or       r0, r0, r3
	srwi     r0, r0, 0x1f
	stb      r0, 0xc(r1)
	lwz      r3, 0x28c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x48(r30)
	mr       r3, r30
	mr       r4, r31
	addi     r6, r1, 8
	stb      r0, 8(r1)
	li       r5, 8
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182918

	lbl_801828AC:
	lfs      f0, lbl_80518C28@sda21(r2)
	lfs      f2, 0x1fc(r31)
	fmuls    f0, f0, f1
	fadds    f1, f2, f0
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f4, lbl_80518C14@sda21(r2)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x54(r3)
	fmuls    f0, f4, f1
	fcmpo    cr0, f0, f30
	ble      lbl_801828E4
	lfs      f0, lbl_80518C04@sda21(r2)
	fdivs    f4, f0, f1

	lbl_801828E4:
	fmuls    f3, f28, f4
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmuls    f2, f27, f4
	fmuls    f1, f26, f4
	stfs     f3, 0x200(r31)
	stfs     f2, 0x204(r31)
	stfs     f1, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	stfs     f3, 0x1e4(r31)
	stfs     f2, 0x1e8(r31)
	stfs     f1, 0x1ec(r31)

	lbl_80182918:
	lbz      r0, 0x5c(r30)
	cmplwi   r0, 0xa
	ble      lbl_80182978
	lbz      r0, 0x48(r30)
	cmplwi   r0, 0
	beq      lbl_80182954
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

	lbl_80182954:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

	lbl_80182978:
	lbz      r3, 0x4c(r30)
	cmplwi   r3, 0
	beq      lbl_80182B48
	lfs      f29, 0x200(r31)
	addi     r0, r3, -1
	lfs      f30, 0x204(r31)
	mr       r4, r31
	lfs      f31, 0x208(r31)
	addi     r3, r1, 0x14
	stb      r0, 0x4c(r30)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x54(r30)
	lfs      f0, 0x18(r1)
	lfs      f2, 0x50(r30)
	fsubs    f4, f1, f0
	lfs      f1, 0x14(r1)
	lfs      f3, 0x58(r30)
	lfs      f0, 0x1c(r1)
	fsubs    f5, f2, f1
	fmuls    f1, f4, f4
	fsubs    f3, f3, f0
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmadds   f1, f5, f5, f1
	fmuls    f2, f3, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80182A00
	ble      lbl_80182A04
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80182A04

	lbl_80182A00:
	fmr      f1, f0

	lbl_80182A04:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80182A24
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f5, f5, f0
	fmuls    f3, f3, f0
	b        lbl_80182A28

	lbl_80182A24:
	fmr      f1, f0

	lbl_80182A28:
	lfs      f2, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f2
	ble      lbl_80182B48
	fmuls    f0, f30, f30
	fmuls    f1, f5, f31
	fmuls    f4, f31, f31
	fmadds   f0, f29, f29, f0
	fmsubs   f1, f3, f29, f1
	fneg     f3, f3
	fadds    f7, f4, f0
	fcmpo    cr0, f7, f2
	ble      lbl_80182A68
	ble      lbl_80182A6C
	frsqrte  f0, f7
	fmuls    f7, f0, f7
	b        lbl_80182A6C

	lbl_80182A68:
	fmr      f7, f2

	lbl_80182A6C:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmuls    f3, f3, f7
	fmuls    f8, f5, f7
	fcmpo    cr0, f1, f0
	fmuls    f1, f0, f7
	blt      lbl_80182A94
	lfs      f0, lbl_80518C88@sda21(r2)
	fmuls    f3, f3, f0
	fmuls    f1, f1, f0
	fmuls    f8, f8, f0

	lbl_80182A94:
	lfs      f6, lbl_80518C8C@sda21(r2)
	lfs      f4, lbl_80518C90@sda21(r2)
	fmuls    f2, f30, f6
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmuls    f1, f1, f4
	fmuls    f5, f29, f6
	fmuls    f3, f3, f4
	fadds    f9, f2, f1
	fmuls    f2, f31, f6
	fmuls    f1, f8, f4
	fadds    f4, f5, f3
	fmuls    f3, f9, f9
	fadds    f5, f2, f1
	fmadds   f1, f4, f4, f3
	fmuls    f2, f5, f5
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80182AEC
	ble      lbl_80182AF0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80182AF0

	lbl_80182AEC:
	fmr      f1, f0

	lbl_80182AF0:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80182B14
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f4, f4, f0
	fmuls    f9, f9, f0
	fmuls    f5, f5, f0
	b        lbl_80182B18

	lbl_80182B14:
	fmr      f1, f0

	lbl_80182B18:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpu    cr0, f0, f1
	beq      lbl_80182B48
	fmuls    f0, f4, f7
	fmuls    f1, f9, f7
	fmuls    f2, f5, f7
	stfs     f0, 0x200(r31)
	stfs     f1, 0x204(r31)
	stfs     f2, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f1, 0x1e8(r31)
	stfs     f2, 0x1ec(r31)

	lbl_80182B48:
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	psq_l    f28, 184(r1), 0, qr0
	lfd      f28, 0xb0(r1)
	psq_l    f27, 168(r1), 0, qr0
	lfd      f27, 0xa0(r1)
	psq_l    f26, 152(r1), 0, qr0
	lfd      f26, 0x90(r1)
	psq_l    f25, 136(r1), 0, qr0
	lfd      f25, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r0, 0xf4(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
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
	P2ASSERTLINE(3006, stateArg);
	mDopeType         = static_cast<NaviDopeArg*>(stateArg)->mType;
	Vector3f naviPos  = navi->getPosition(); // f31, f30, f29
	Vector3f squadPos = Vector3f(0.0f);      // f28, f27, f26
	_14               = 0;
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
			squadPos = squadPos * (1.0f / (f32)pikis) - naviPos;
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
		_14 = 1;
		navi->applyDopes(mDopeType, dopePos);
		navi->useDope(mDopeType);
	}
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	stw      r28, 0x70(r1)
	or.      r28, r5, r5
	mr       r29, r3
	mr       r30, r4
	bne      lbl_80182C64
	lis      r3, lbl_8047EB4C@ha
	lis      r5, lbl_8047EB5C@ha
	addi     r3, r3, lbl_8047EB4C@l
	li       r4, 0xbbe
	addi     r5, r5, lbl_8047EB5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80182C64:
	lwz      r0, 0(r28)
	mr       r4, r30
	addi     r3, r1, 0x14
	stw      r0, 0x10(r29)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x14(r1)
	li       r4, 0
	lfs      f30, 0x18(r1)
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	lfs      f29, 0x1c(r1)
	cmplwi   r4, 0
	lfs      f26, lbl_80518BE0@sda21(r2)
	addi     r0, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	stb      r4, 0x14(r29)
	li       r31, 0
	fmr      f27, f26
	lwz      r3, 0x254(r30)
	fmr      f28, f26
	stw      r0, 0x38(r1)
	stw      r4, 0x44(r1)
	stw      r4, 0x3c(r1)
	stw      r3, 0x40(r1)
	bne      lbl_80182CE4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80182E90

lbl_80182CE4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80182D50

lbl_80182CFC:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80182E90
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80182D50:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80182CFC
	b        lbl_80182E90

lbl_80182D70:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80182DD4
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r31, r31, 1
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fadds    f26, f26, f2
	fadds    f27, f27, f1
	fadds    f28, f28, f0

lbl_80182DD4:
	lwz      r0, 0x44(r1)
	cmplwi   r0, 0
	bne      lbl_80182E00
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80182E90

lbl_80182E00:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80182E74

lbl_80182E20:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80182E90
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80182E74:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80182E20

lbl_80182E90:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x3c(r1)
	cmplw    r4, r3
	bne      lbl_80182D70
	lwz      r4, 0x10(r29)
	cmpwi    r4, 1
	beq      lbl_80182EC4
	cmpwi    r31, 0
	ble      lbl_80183188

lbl_80182EC4:
	mr       r3, r30
	bl       hasDope__Q24Game4NaviFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80183188
	lwz      r0, 0x10(r29)
	cmpwi    r0, 1
	bne      lbl_80182F14
	cmplwi   r30, 0
	mr       r6, r30
	beq      lbl_80182EF0
	addi     r6, r30, 0x178

lbl_80182EF0:
	lwz      r12, 0(r30)
	mr       r3, r30
	li       r4, 0x13
	li       r5, 0x13
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	b        lbl_80182F44

lbl_80182F14:
	cmplwi   r30, 0
	mr       r6, r30
	beq      lbl_80182F24
	addi     r6, r30, 0x178

lbl_80182F24:
	lwz      r12, 0(r30)
	mr       r3, r30
	li       r4, 0x13
	li       r5, 0x13
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl

lbl_80182F44:
	mr       r3, r30
	bl       enableMotionBlend__Q24Game8FakePikiFv
	stfs     f31, 0x2c(r1)
	stfs     f30, 0x30(r1)
	stfs     f29, 0x34(r1)
	lwz      r0, 0x10(r29)
	cmpwi    r0, 1
	bne      lbl_80182FFC
	lwz      r3, 0x28c(r30)
	lfs      f0, lbl_80518BE0@sda21(r2)
	lfs      f1, 0x10(r3)
	lfs      f2, 0xc(r3)
	fsubs    f27, f1, f30
	lfs      f1, 0x14(r3)
	fsubs    f28, f2, f31
	fsubs    f26, f1, f29
	fmuls    f1, f27, f27
	fmuls    f2, f26, f26
	fmadds   f1, f28, f28, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80182FAC
	ble      lbl_80182FB0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80182FB0

lbl_80182FAC:
	fmr      f1, f0

lbl_80182FB0:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80182FD0
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f28, f28, f0
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0

lbl_80182FD0:
	lfs      f0, lbl_80518C94@sda21(r2)
	fmuls    f2, f28, f0
	fmuls    f1, f27, f0
	fmuls    f0, f26, f0
	fadds    f2, f31, f2
	fadds    f1, f30, f1
	fadds    f0, f29, f0
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	b        lbl_801830A0

lbl_80182FFC:
	cmpwi    r31, 0
	ble      lbl_80183094
	xoris    r3, r31, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x6c(r1)
	lfd      f2, lbl_80518C30@sda21(r2)
	stw      r0, 0x68(r1)
	lfs      f3, lbl_80518C48@sda21(r2)
	lfd      f1, 0x68(r1)
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f1, f1, f2
	fdivs    f2, f3, f1
	fmuls    f3, f27, f2
	fmuls    f1, f28, f2
	fmuls    f2, f26, f2
	fsubs    f27, f3, f30
	fsubs    f26, f1, f29
	fsubs    f28, f2, f31
	fmuls    f1, f27, f27
	fmuls    f2, f26, f26
	fmadds   f1, f28, f28, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8018306C
	ble      lbl_80183070
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80183070

lbl_8018306C:
	fmr      f1, f0

lbl_80183070:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801830A0
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f28, f28, f0
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0
	b        lbl_801830A0

lbl_80183094:
	lfs      f28, lbl_80518BE0@sda21(r2)
	lfs      f27, lbl_80518C48@sda21(r2)
	fmr      f26, f28

lbl_801830A0:
	lwz      r0, 0x10(r29)
	li       r28, 1
	cmpwi    r0, 1
	beq      lbl_801830D4
	lwz      r3, 0x26c(r30)
	li       r28, 0
	li       r4, 0x861
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_801830F0

lbl_801830D4:
	lwz      r3, 0x26c(r30)
	li       r4, 0x860
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_801830F0:
	lis      r3, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx3Arg@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple1@ha
	stw      r0, 0x20(r1)
	addi     r5, r4, __vt__Q23efx3Arg@l
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx14ArgDopingSmoke@ha
	lis      r3, __vt__Q23efx12TDopingSmoke@ha
	stw      r5, 0x48(r1)
	addi     r7, r4, __vt__Q23efx14ArgDopingSmoke@l
	li       r6, 0x44
	li       r5, 0
	stw      r0, 0x20(r1)
	addi     r0, r3, __vt__Q23efx12TDopingSmoke@l
	addi     r3, r1, 0x20
	stfs     f31, 0x4c(r1)
	addi     r4, r1, 0x48
	stfs     f30, 0x50(r1)
	stfs     f29, 0x54(r1)
	stw      r7, 0x48(r1)
	stfs     f28, 0x58(r1)
	stfs     f27, 0x5c(r1)
	stfs     f26, 0x60(r1)
	sth      r28, 0x64(r1)
	sth      r6, 0x24(r1)
	stw      r5, 0x28(r1)
	stw      r0, 0x20(r1)
	bl       create__Q23efx12TDopingSmokeFPQ23efx3Arg
	li       r0, 1
	mr       r3, r30
	stb      r0, 0x14(r29)
	addi     r5, r1, 0x2c
	lwz      r4, 0x10(r29)
	bl       "applyDopes__Q24Game4NaviFiR10Vector3<f>"
	lwz      r4, 0x10(r29)
	mr       r3, r30
	bl       useDope__Q24Game4NaviFi

lbl_80183188:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r0, 0xe4(r1)
	lwz      r28, 0x70(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x801831D8
 * @note Size: 0xA0
 */
void NaviDopeState::exec(Navi* navi)
{
	navi->control();
	if (_14 == 0) {
		transit(navi, NSID_Walk, nullptr);
	} else if (!navi->assertMotion(IPikiAnims::GROWUP2)) {
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80183278
 * @note Size: 0x4
 */
void NaviDopeState::cleanup(Navi* navi) { }

/**
 * @note Address: 0x8018327C
 * @note Size: 0x4C
 */
void NaviDopeState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& keyEvent)
{
	if (_14 != 0 && keyEvent.mType == 1000) {
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x801832C8
 * @note Size: 0xE0
 */
void NaviClimbState::init(Navi* navi, StateArg* stateArg)
{
	JUT_PANICLINE(3109, "navi climb\n");

	P2ASSERTLINE(3112, stateArg);
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
	tube.getAxisVector(_10);
	_1C = tube.mStartPos.distance(tube.mEndPos);
}

/**
 * @note Address: 0x80183464
 * @note Size: 0x2BC
 */
void NaviClimbState::exec(Navi* navi)
{
	navi->mVelocity = _10 * 100.0f * navi->mController1->mMStick.mYPos;
	navi->move(sys->mDeltaTime);
	if (navi->mController1->getButton() & Controller::PRESS_B) {
		transit(navi, NSID_Walk, nullptr);
	}

	f32 climbY = navi->mClimbingPosition.y;

	Sys::Sphere naviSphere;
	navi->getBoundingSphere(naviSphere);

	f32 factor = 4.0f / _1C;
	if (climbY > 1.0f + factor) {
		CollPart* child = mTubePart->getChild();
		if (child && (child->isTube() || child->isTubeTree())) {
			mTubePart = child;
			navi->endStick();
			navi->startStick(mClimbObj, mTubePart);

			Sys::Tube tube;
			mTubePart->getTube(tube);
			tube.getAxisVector(_10);
			_1C = tube.mStartPos.distance(tube.mEndPos);
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
			tube.getAxisVector(_10);
			_1C = tube.mStartPos.distance(tube.mEndPos);
			return;
		}

		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80183720
 * @note Size: 0x24
 */
void NaviClimbState::cleanup(Navi* navi) { navi->endStick(); }

/**
 * @note Address: 0x80183744
 * @note Size: 0xB8
 */
void NaviFallMeckState::init(Navi* navi, StateArg* stateArg)
{
	if (stateArg == nullptr) {
		_10 = 0.0f;
	} else {
		_10 = static_cast<NaviFallMeckArg*>(stateArg)->_00;
	}
	navi->startMotion(IPikiAnims::FALL, IPikiAnims::FALL, nullptr, nullptr);
	navi->endStick();
	_14 = 0;
	if (_10 > 0.0f) {
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
	if (_14 != 0) {
		navi->mTargetVelocity = 0.0f;
		navi->mVelocity       = 0.0f;
	}
	if (_14 == 0 && !navi->assertMotion(IPikiAnims::FALL)) {
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80183898
 * @note Size: 0x4
 */
void NaviFallMeckState::cleanup(Navi* navi) { }

/**
 * @note Address: 0x8018389C
 * @note Size: 0x9C
 */
void NaviFallMeckState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& keyEvent)
{
	if (keyEvent.mType != 1000) {
		return;
	}
	if (_14 == 1) {
		navi->startMotion(IPikiAnims::GETUP, IPikiAnims::GETUP, navi, nullptr);
		_14 = 2;
	} else if (_14 == 2) {
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

	if (_14 == 0) {
		f32 damage = _10;
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
		JUT_PANICLINE(3284, "flick needs NaviFlickInitArg !\n");
	} else {
		flickArg   = static_cast<NaviFlickArg*>(stateArg);
		mDamage    = flickArg->mDamage;
		mDirection = flickArg->mDirection;
		mFlicker   = flickArg->mCreature;
	}
	navi->startMotion(IPikiAnims::JHIT, IPikiAnims::JHIT, navi, nullptr);
	_10               = 0;
	navi->mVelocity.y = 0.0f;
	navi->mFaceDir    = roundAng(JMath::atanTable_.atan2_(mDirection.x, mDirection.z) + PI);
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
	switch (_10) {
	case 0:
		navi->mVelocity.x = mDirection.x;
		navi->mVelocity.z = mDirection.z;
		if (!navi->assertMotion(IPikiAnims::JHIT)) {
			NaviKokeDamageInitArg kokeDamageArg(1.0f, 0, mFlicker, mDamage);
			transit(navi, NSID_KokeDamage, &kokeDamageArg);
		}
		break;
	case 1:
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
void NaviFlickState::cleanup(Navi* navi) { }

/**
 * @note Address: 0x80183DE8
 * @note Size: 0x64
 */
void NaviFlickState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& keyEvent)
{
	if (keyEvent.mType == KEYEVENT_END && _10 == 0) {
		_10 = 1;
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
		mPlaySoundOnDamage = 0;
	} else {
		NaviKokeDamageInitArg* arg = static_cast<NaviKokeDamageInitArg*>(stateArg);

		mDamage            = arg->mDamage;
		mTimer             = arg->mTimer;
		mCreature          = arg->mCreature;
		mPlaySoundOnDamage = arg->mPlaySoundOnDamage;
	}

	navi->startMotion(IPikiAnims::JKOKE, IPikiAnims::JKOKE, navi, nullptr);
	rumbleMgr->startRumble(RUMBLETYPE_NaviDamage, navi->mNaviIndex);
	mState = 0;
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
		if (mState == 1) {
			mTimer -= sys->mDeltaTime;
			if (mTimer <= 0.0f) {
				navi->startMotion(IPikiAnims::GETUP, IPikiAnims::GETUP, navi, nullptr);
				mState = 2;
			}
		}
		if (mState == 0 && !navi->assertMotion(IPikiAnims::JKOKE)) {
			if (static_cast<NaviFSM*>(mStateMachine)->mBackupStateID == -1) {
				transit(navi, NSID_Walk, nullptr);
			} else {
				transit(navi, static_cast<NaviFSM*>(mStateMachine)->mBackupStateID, nullptr);
			}
		}
		if (mState == 2 && !navi->assertMotion(IPikiAnims::GETUP)) {
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
void NaviKokeDamageState::cleanup(Navi* navi) { }

/**
 * @note Address: 0x80184188
 * @note Size: 0x9C
 */
void NaviKokeDamageState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& key)
{
	if (key.mType == KEYEVENT_END) {
		if (mState == 0) {
			mState = 1;
			navi->addDamage(mDamage, mPlaySoundOnDamage);
		} else if (mState == 2) {
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
void NaviSaraiState::cleanup(Navi* navi) { navi->mAnimSpeed = 30.0f; }

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
void NaviSaraiExitState::cleanup(Navi* navi) { navi->setAtari(true); }

/**
 * @note Address: 0x80184708
 * @note Size: 0x34
 */
void NaviSaraiExitState::bounceCallback(Navi* navi, Sys::Triangle*) { transit(navi, NSID_Walk, nullptr); }

/**
 * @note Address: 0x8018473C
 * @note Size: 0x5FC
 */
void NaviContainerState::init(Navi* navi, StateArg* stateArg)
{
	P2ASSERTLINE(3602, stateArg);
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
		disp.mHasPaidDebt = playData->mStoryFlags & STORY_DebtPaid;
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
	Piki* pikis[100];
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
	P2ASSERTLINE(3915, absorbArg != nullptr);
	mDrop = absorbArg->mDrop;
	P2ASSERTLINE(3917, mDrop != nullptr);
	navi->startMotion(IPikiAnims::MIZUNOMI, IPikiAnims::MIZUNOMI, navi, nullptr);
	navi->mSoundObj->startSound(PSSE_PL_DRINK, 0);
	_10                   = 0;
	_18                   = 0;
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
	if (_10 == 1) {
		if (mDrop->isAlive() && !_18) {
			InteractAbsorb act(navi);
			mDrop->stimulate(act);
			_18 = true;
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
		_10 = 1;
		break;
	case KEYEVENT_LOOP_END:
		P2ASSERTLINE(3956, mDrop->mObjectTypeID == OBJTYPE_Honey);
		ItemHoney::Item* item = mDrop;
		if (!mDrop->isAlive() || !item->isShrinking()) {
			_10 = 2;
			navi->finishMotion();
		}
		break;
	case KEYEVENT_END:
		if (_18) {
			P2ASSERTLINE(3968, mDrop->mObjectTypeID == OBJTYPE_Honey);
			navi->incDopeCount(mDrop->mHoneyType != 1);
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
	P2ASSERTLINE(4002, stateArg);
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
void NaviDamagedState::cleanup(Navi* navi) { navi->setInvincibleTimer(60); }

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
void NaviDeadState::cleanup(Navi* navi) { }

/**
 * @note Address: 0x8018589C
 * @note Size: 0x40
 */
void NaviDeadState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& keyEvent)
{
	if (keyEvent.mType == 1000) {
		navi->setAlive(false);
	}
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x2FC
//  */
// void NaviGatherInitArg::findTargetPikmin(Navi* navi)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x801858DC
 * @note Size: 0xF8
 */
void NaviGatherState::init(Navi* navi, StateArg* stateArg)
{
	NaviGatherArg* arg = static_cast<NaviGatherArg*>(stateArg);
	if (arg) {
		_10 = arg->_00;
		_11 = arg->_01;
	} else {
		_10 = 0;
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
	if (_10 == 0) {
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
void NaviThrowWaitState::draw2d(J2DGrafContext&, int&) { }

/**
 * @note Address: 0x80185C58
 * @note Size: 0x2C
 */
void NaviThrowWaitState::resume(Navi* navi) { cleanup(navi); }

/**
 * @note Address: 0x80185C84
 * @note Size: 0x34
 */
void NaviThrowWaitState::restart(Navi* navi) { transit(navi, NSID_Walk, nullptr); }

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
		Vector3f naviFaceDir = getDirection(navi->mFaceDir);
		f32 dist             = diff.length();
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
			piki->mFsm->transit(piki, PIKISTATE_GoHang, 0);
		}
	}
	mHasHeldPiki     = false;
	mHoldChargeLevel = 0;
	if (mHeldPiki) {
		rumbleMgr->startRumble(RUMBLETYPE_Nudge, mNavi->mNaviIndex);
		mHeldPiki->mFsm->transit(mHeldPiki, PIKISTATE_Hanged, 0);
		mHasHeldPiki = true;
	}
	navi->mHoldPikiCharge = mHoldChargeLevel / 3.0f * (CG_NAVIPARMS(navi).mThrowDistanceMax() - CG_NAVIPARMS(navi).mThrowDistanceMin())
	                      + CG_NAVIPARMS(navi).mThrowDistanceMin();
	navi->mHoldPikiCharge2 = mHoldChargeLevel / 3.0f * (CG_NAVIPARMS(navi).mThrowHeightMax() - CG_NAVIPARMS(navi).mThrowHeightMin())
	                       + CG_NAVIPARMS(navi).mThrowHeightMin();
	mNextPikiTimeLimit     = 3.0f;
	mInitialSortDelayTimer = 0.1f;
	navi->setDoAnimCallback(mDelegate);
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stmw     r27, 0x4c(r1)
	mr       r28, r3
	li       r0, -1
	stw      r0, 0x38(r3)
	mr       r29, r4
	li       r4, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	stw      r29, 0x34(r28)
	cmplwi   r4, 0
	lfs      f0, lbl_80518BE0@sda21(r2)
	addi     r0, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	lfs      f29, lbl_80518CB8@sda21(r2)
	li       r30, 0
	stfs     f0, 0x2b0(r29)
	stw      r4, 0x14(r28)
	stw      r4, 0x18(r28)
	lwz      r3, 0x254(r29)
	stw      r0, 0x20(r1)
	stw      r4, 0x2c(r1)
	stw      r4, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_80185D5C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80185DE4

lbl_80185D5C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80185DC8

lbl_80185D74:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80185DE4
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80185DC8:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80185D74

lbl_80185DE4:
	lis      r3, sincosTable___5JMath@ha
	lfs      f30, lbl_80518BE0@sda21(r2)
	lfs      f31, lbl_80518BE8@sda21(r2)
	addi     r31, r3, sincosTable___5JMath@l
	lfs      f28, lbl_80518C54@sda21(r2)
	b        lbl_8018603C

lbl_80185DFC:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r29)
	mr       r27, r3
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r27
	addi     r3, r1, 0x14
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f6, 0x1fc(r29)
	lfs      f1, 0x1c(r1)
	lfs      f0, 0x10(r1)
	fmr      f5, f6
	lfs      f3, 0x18(r1)
	fcmpo    cr0, f6, f30
	lfs      f2, 0xc(r1)
	fsubs    f4, f1, f0
	lfs      f1, 0x14(r1)
	lfs      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f7, f1, f0
	bge      lbl_80185E7C
	fneg     f5, f6

lbl_80185E7C:
	fmuls    f0, f5, f31
	fcmpo    cr0, f6, f30
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r31, r0
	lfs      f3, 4(r3)
	bge      lbl_80185ECC
	lfs      f0, lbl_80518BEC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f6, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f5, f0
	b        lbl_80185EEC

lbl_80185ECC:
	fmuls    f0, f6, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f5, r3, r0

lbl_80185EEC:
	fmuls    f0, f2, f2
	fmuls    f1, f4, f4
	fmadds   f0, f7, f7, f0
	fadds    f6, f1, f0
	fcmpo    cr0, f6, f30
	ble      lbl_80185F14
	ble      lbl_80185F18
	frsqrte  f0, f6
	fmuls    f6, f0, f6
	b        lbl_80185F18

lbl_80185F14:
	fmr      f6, f30

lbl_80185F18:
	fabs     f0, f2
	fmr      f27, f6
	frsp     f0, f0
	fcmpo    cr0, f0, f28
	bgt      lbl_80185F80
	lfs      f1, lbl_80518BE0@sda21(r2)
	lfs      f0, lbl_80518CBC@sda21(r2)
	fmuls    f1, f2, f1
	fmadds   f1, f7, f5, f1
	fmadds   f1, f4, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80185F50
	lfs      f0, lbl_80518C4C@sda21(r2)
	fadds    f27, f6, f0

lbl_80185F50:
	fcmpo    cr0, f27, f29
	bge      lbl_80185F80
	mr       r3, r27
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_80185F80
	mr       r3, r27
	bl       isThrowable__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80185F80
	mr       r30, r27
	fmr      f29, f27

lbl_80185F80:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_80185FAC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8018603C

lbl_80185FAC:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80186020

lbl_80185FCC:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018603C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80186020:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80185FCC

lbl_8018603C:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_80185DFC
	lwz      r3, 0xc0(r29)
	lfs      f0, 0x660(r3)
	fcmpo    cr0, f29, f0
	cror     2, 0, 2
	bne      lbl_80186078
	stw      r30, 0x14(r28)
	b        lbl_8018607C

lbl_80186078:
	stw      r30, 0x18(r28)

lbl_8018607C:
	lwz      r0, 0x14(r28)
	cmplwi   r0, 0
	beq      lbl_801860CC
	lfs      f0, lbl_80518C64@sda21(r2)
	cmplwi   r28, 0
	mr       r6, r28
	stfs     f0, 0x234(r29)
	beq      lbl_801860A0
	lwz      r6, 0x10(r28)

lbl_801860A0:
	lwz      r12, 0(r29)
	mr       r3, r29
	li       r4, 0x22
	li       r5, 0x22
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       enableMotionBlend__Q24Game8FakePikiFv
	b        lbl_801860F4

lbl_801860CC:
	lwz      r4, 0x18(r28)
	cmplwi   r4, 0
	beq      lbl_801860F4
	lwz      r3, 0x28c(r4)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_801860F4:
	li       r0, 0
	stb      r0, 0x20(r28)
	stw      r0, 0x1c(r28)
	lwz      r0, 0x14(r28)
	cmplwi   r0, 0
	beq      lbl_80186148
	lwz      r5, 0x34(r28)
	li       r4, 2
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	lhz      r5, 0x2dc(r5)
	bl       startRumble__Q24Game9RumbleMgrFii
	lwz      r4, 0x14(r28)
	li       r5, 4
	li       r6, 0
	lwz      r3, 0x28c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x20(r28)

lbl_80186148:
	lwz      r4, 0x1c(r28)
	lis      r0, 0x4330
	lwz      r5, 0xc0(r29)
	mr       r3, r29
	xoris    r4, r4, 0x8000
	stw      r0, 0x40(r1)
	lfd      f5, lbl_80518C30@sda21(r2)
	stw      r4, 0x44(r1)
	lfs      f4, lbl_80518C38@sda21(r2)
	lfd      f1, 0x40(r1)
	lfs      f0, 0x520(r5)
	fsubs    f3, f1, f5
	lfs      f2, 0x548(r5)
	stw      r0, 0x38(r1)
	fsubs    f1, f0, f2
	lfs      f0, lbl_80518C1C@sda21(r2)
	fdivs    f3, f3, f4
	fmadds   f1, f3, f1, f2
	stfs     f1, 0x2b4(r29)
	lwz      r0, 0x1c(r28)
	lwz      r4, 0xc0(r29)
	xoris    r0, r0, 0x8000
	stw      r0, 0x3c(r1)
	lfs      f1, 0x570(r4)
	lfd      f3, 0x38(r1)
	lfs      f2, 0x598(r4)
	fsubs    f3, f3, f5
	fsubs    f1, f1, f2
	fdivs    f3, f3, f4
	fmadds   f1, f3, f1, f2
	stfs     f1, 0x2b8(r29)
	stfs     f4, 0x28(r28)
	stfs     f0, 0x2c(r28)
	lwz      r4, 0x30(r28)
	bl       setDoAnimCallback__Q24Game8FakePikiFP9IDelegate
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	lmw      r27, 0x4c(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
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
void NaviThrowWaitState::doAnimCallback() { lockHangPiki(mNavi); }

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
			f32 dist         = handPos.distance(pikiPos);
			if (!(dist <= 32.5f))
				return;

			navi->mAnimSpeed = 30.0f;
			navi->startMotion(IPikiAnims::THROWWWAIT, IPikiAnims::THROWWWAIT, this, nullptr);
			navi->enableMotionBlend();
			mHeldPiki = mNextPiki;
			mNextPiki = nullptr;
			rumbleMgr->startRumble(RUMBLETYPE_Nudge, mNavi->mNaviIndex);
			mHeldPiki->mFsm->transit(mHeldPiki, PIKISTATE_Hanged, nullptr);
			mHasHeldPiki = true;
		} else {
			transit(navi, NSID_Punch, nullptr);
			return;
		}
	}

	navi->mNextThrowPiki = mHeldPiki;

	f32 min               = CG_NAVIPARMS(navi).mThrowDistanceMin();
	f32 max               = CG_NAVIPARMS(navi).mThrowDistanceMax();
	navi->mHoldPikiCharge = mHoldChargeLevel / 3.0f * (max - min) + min;

	max                    = CG_NAVIPARMS(navi).mThrowHeightMax();
	min                    = CG_NAVIPARMS(navi).mThrowHeightMin();
	navi->mHoldPikiCharge2 = mHoldChargeLevel / 3.0f * (max - min) + min;

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
		bool isButton = navi->mController1->isButtonDown(Controller::PRESS_DPAD_DOWN);
		int currColor = mHeldPiki->mPikiKind;
		int currHappa = mHeldPiki->mHappaKind;
		Piki* newPiki;
		for (int i = 0; i < MaxHappaStage; i++) {
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
		if (slotPos.distance(naviPos) > 30.0f) {
			Vector3f naviPos = navi->getPosition();
			Vector3f naviVel = navi->getVelocity();
			navi->mCPlateMgr->setPos(naviPos, navi->mFaceDir + PI, naviVel, 1.0f);
			sortPikis(navi);
		}
	}

	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stmw     r23, 0x9c(r1)
	lwz      r5, moviePlayer__4Game@sda21(r13)
	mr       r28, r3
	mr       r29, r4
	cmplwi   r5, 0
	beq      lbl_80186358
	lwz      r0, 0x18(r5)
	cmpwi    r0, 0
	beq      lbl_80186358
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186DA8

lbl_80186358:
	lwz      r0, 0x278(r29)
	cmplwi   r0, 0
	beq      lbl_80186DA8
	mr       r3, r29
	bl       control__Q24Game4NaviFv
	lwz      r0, 0x14(r28)
	cmplwi   r0, 0
	bne      lbl_80186544
	lwz      r0, 0x18(r28)
	cmplwi   r0, 0
	beq      lbl_80186520
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x28(r28)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x28(r28)
	lfs      f1, 0x28(r28)
	fcmpo    cr0, f1, f0
	bge      lbl_801863CC
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186DA8

lbl_801863CC:
	lwz      r3, 0x278(r29)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80186400
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186DA8

lbl_80186400:
	lis      r4, 0x72686E64@ha
	lwz      r3, 0x114(r29)
	addi     r4, r4, 0x72686E64@l
	bl       getCollPart__8CollTreeFUl
	lwz      r4, 0x18(r28)
	lfs      f31, 0x4c(r3)
	lwz      r12, 0(r4)
	lfs      f30, 0x50(r3)
	lwz      r12, 8(r12)
	lfs      f29, 0x54(r3)
	addi     r3, r1, 0x30
	mtctr    r12
	bctrl
	lfs      f0, 0x34(r1)
	lfs      f2, 0x30(r1)
	fsubs    f4, f30, f0
	lfs      f1, 0x38(r1)
	fsubs    f3, f31, f2
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f2, f29, f1
	fmuls    f1, f4, f4
	fmuls    f2, f2, f2
	fmadds   f1, f3, f3, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80186478
	ble      lbl_8018647C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8018647C

lbl_80186478:
	fmr      f1, f0

lbl_8018647C:
	lfs      f0, lbl_80518CC0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80186DA8
	lfs      f0, lbl_80518C64@sda21(r2)
	cmplwi   r28, 0
	mr       r6, r28
	stfs     f0, 0x234(r29)
	beq      lbl_801864A4
	lwz      r6, 0x10(r28)

lbl_801864A4:
	lwz      r12, 0(r29)
	mr       r3, r29
	li       r4, 0x22
	li       r5, 0x22
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       enableMotionBlend__Q24Game8FakePikiFv
	lwz      r3, 0x18(r28)
	li       r0, 0
	li       r4, 2
	stw      r3, 0x14(r28)
	stw      r0, 0x18(r28)
	lwz      r5, 0x34(r28)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	lhz      r5, 0x2dc(r5)
	bl       startRumble__Q24Game9RumbleMgrFii
	lwz      r4, 0x14(r28)
	li       r5, 4
	li       r6, 0
	lwz      r3, 0x28c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x20(r28)
	b        lbl_80186544
	b        lbl_80186DA8

lbl_80186520:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186DA8

lbl_80186544:
	lwz      r3, 0x14(r28)
	lis      r0, 0x4330
	stw      r0, 0x88(r1)
	lfd      f4, lbl_80518C30@sda21(r2)
	stw      r3, 0x2a8(r29)
	lfs      f3, lbl_80518C38@sda21(r2)
	lwz      r3, 0x1c(r28)
	lwz      r4, 0xc0(r29)
	xoris    r3, r3, 0x8000
	stw      r0, 0x90(r1)
	lfs      f0, 0x520(r4)
	stw      r3, 0x8c(r1)
	lfs      f1, 0x548(r4)
	lfd      f2, 0x88(r1)
	fsubs    f0, f0, f1
	fsubs    f2, f2, f4
	fdivs    f2, f2, f3
	fmadds   f0, f2, f0, f1
	stfs     f0, 0x2b4(r29)
	lwz      r0, 0x1c(r28)
	lwz      r3, 0xc0(r29)
	xoris    r0, r0, 0x8000
	stw      r0, 0x94(r1)
	lfs      f0, 0x570(r3)
	lfd      f2, 0x90(r1)
	lfs      f1, 0x598(r3)
	fsubs    f2, f2, f4
	fsubs    f0, f0, f1
	fdivs    f2, f2, f3
	fmadds   f0, f2, f0, f1
	stfs     f0, 0x2b8(r29)
	lwz      r3, 0x14(r28)
	cmplwi   r3, 0
	beq      lbl_80186610
	lbz      r0, 0x20(r28)
	cmplwi   r0, 0
	beq      lbl_80186610
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 4
	beq      lbl_80186610
	cmpwi    r3, 3
	beq      lbl_80186610
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186DA8

lbl_80186610:
	lwz      r3, 0x278(r29)
	lwz      r3, 0x1c(r3)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_8018681C
	li       r0, -1
	lis      r3, 0x92492493@ha
	stw      r0, 0x38(r28)
	addi     r9, r3, 0x92492493@l
	addi     r26, r1, 0x6c
	li       r31, 0
	lwz      r3, 0x14(r28)
	li       r30, 0
	lbz      r27, 0x2b8(r3)
	addi     r10, r27, 1
	addi     r7, r27, 2
	mulhw    r6, r9, r10
	addi     r5, r27, 3
	addi     r3, r27, 4
	addi     r0, r27, 5
	addi     r12, r27, 6
	mulhw    r4, r9, r7
	add      r6, r6, r10
	srawi    r8, r6, 2
	mulhw    r6, r9, r5
	srwi     r11, r8, 0x1f
	add      r4, r4, r7
	add      r8, r8, r11
	srawi    r11, r4, 2
	mulhw    r4, r9, r3
	add      r6, r6, r5
	srwi     r24, r11, 0x1f
	srawi    r23, r6, 2
	add      r6, r11, r24
	mulhw    r11, r9, r0
	add      r4, r4, r3
	srwi     r25, r23, 0x1f
	srawi    r24, r4, 2
	add      r4, r23, r25
	mulhw    r9, r9, r12
	srwi     r25, r24, 0x1f
	add      r11, r11, r0
	add      r25, r24, r25
	srawi    r23, r11, 2
	mulli    r6, r6, 7
	add      r9, r9, r12
	srwi     r24, r23, 0x1f
	mulli    r4, r4, 7
	srawi    r9, r9, 2
	subf     r6, r6, r7
	stw      r6, 0x70(r1)
	srwi     r11, r9, 0x1f
	mulli    r6, r25, 7
	subf     r4, r4, r5
	add      r23, r23, r24
	stw      r4, 0x74(r1)
	mulli    r4, r23, 7
	add      r9, r9, r11
	subf     r3, r6, r3
	stw      r3, 0x78(r1)
	mulli    r8, r8, 7
	subf     r0, r4, r0
	stw      r0, 0x7c(r1)
	mulli    r3, r9, 7
	subf     r8, r8, r10
	stw      r8, 0x6c(r1)
	subf     r0, r3, r12
	stw      r0, 0x80(r1)

lbl_8018671C:
	lwz      r5, 0(r26)
	mr       r3, r28
	mr       r4, r29
	bl       findNearestColorPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navii
	cmplwi   r3, 0
	beq      lbl_8018673C
	mr       r31, r3
	b        lbl_8018674C

lbl_8018673C:
	addi     r30, r30, 1
	addi     r26, r26, 4
	cmpwi    r30, 6
	blt      lbl_8018671C

lbl_8018674C:
	cmplwi   r31, 0
	beq      lbl_80186BA4
	lwz      r23, 0x14(r28)
	lwz      r3, 0x2c4(r23)
	cmplwi   r3, 0
	beq      lbl_801867A8
	cmpwi    r27, 5
	bne      lbl_8018678C
	lwz      r3, 0x26c(r3)
	li       r4, 0x286b
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_801867A8

lbl_8018678C:
	lwz      r3, 0x26c(r3)
	li       r4, 0x2802
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801867A8:
	lwz      r3, 0x28c(r23)
	mr       r4, r23
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r31, 0x14(r28)
	mr       r4, r31
	li       r5, 4
	li       r6, 0
	lwz      r3, 0x28c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r29
	bl       sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1822
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	lhz      r5, 0x2dc(r29)
	bl       startRumble__Q24Game9RumbleMgrFii
	b        lbl_80186DA8

lbl_8018681C:
	clrlwi.  r0, r3, 0x1f
	beq      lbl_80186A20
	li       r0, -1
	lis      r3, 0x92492493@ha
	stw      r0, 0x38(r28)
	addi     r9, r3, 0x92492493@l
	addi     r26, r1, 0x54
	li       r30, 0
	lwz      r3, 0x14(r28)
	li       r31, 0
	lbz      r27, 0x2b8(r3)
	addi     r10, r27, 6
	addi     r7, r27, 5
	mulhw    r6, r9, r10
	addi     r5, r27, 4
	addi     r3, r27, 3
	addi     r0, r27, 2
	addi     r12, r27, 1
	mulhw    r4, r9, r7
	add      r6, r6, r10
	srawi    r8, r6, 2
	mulhw    r6, r9, r5
	srwi     r11, r8, 0x1f
	add      r4, r4, r7
	add      r8, r8, r11
	srawi    r11, r4, 2
	mulhw    r4, r9, r3
	add      r6, r6, r5
	srwi     r24, r11, 0x1f
	srawi    r23, r6, 2
	add      r6, r11, r24
	mulhw    r11, r9, r0
	add      r4, r4, r3
	srwi     r25, r23, 0x1f
	srawi    r24, r4, 2
	add      r4, r23, r25
	mulhw    r9, r9, r12
	srwi     r23, r24, 0x1f
	add      r11, r11, r0
	add      r23, r24, r23
	srawi    r25, r11, 2
	mulli    r6, r6, 7
	add      r9, r9, r12
	srwi     r24, r25, 0x1f
	mulli    r4, r4, 7
	srawi    r9, r9, 2
	subf     r6, r6, r7
	stw      r6, 0x58(r1)
	srwi     r11, r9, 0x1f
	mulli    r6, r23, 7
	subf     r4, r4, r5
	add      r25, r25, r24
	stw      r4, 0x5c(r1)
	mulli    r4, r25, 7
	add      r9, r9, r11
	subf     r3, r6, r3
	stw      r3, 0x60(r1)
	mulli    r8, r8, 7
	subf     r0, r4, r0
	stw      r0, 0x64(r1)
	mulli    r3, r9, 7
	subf     r8, r8, r10
	stw      r8, 0x54(r1)
	subf     r0, r3, r12
	stw      r0, 0x68(r1)

lbl_80186920:
	lwz      r5, 0(r26)
	mr       r3, r28
	mr       r4, r29
	bl       findNearestColorPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navii
	cmplwi   r3, 0
	beq      lbl_80186940
	mr       r30, r3
	b        lbl_80186950

lbl_80186940:
	addi     r31, r31, 1
	addi     r26, r26, 4
	cmpwi    r31, 6
	blt      lbl_80186920

lbl_80186950:
	cmplwi   r30, 0
	beq      lbl_80186BA4
	lwz      r23, 0x14(r28)
	lwz      r3, 0x2c4(r23)
	cmplwi   r3, 0
	beq      lbl_801869AC
	cmpwi    r27, 5
	bne      lbl_80186990
	lwz      r3, 0x26c(r3)
	li       r4, 0x286b
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_801869AC

lbl_80186990:
	lwz      r3, 0x26c(r3)
	li       r4, 0x2802
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801869AC:
	lwz      r3, 0x28c(r23)
	mr       r4, r23
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r30, 0x14(r28)
	mr       r4, r30
	li       r5, 4
	li       r6, 0
	lwz      r3, 0x28c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r29
	bl       sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1822
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	lhz      r5, 0x2dc(r29)
	bl       startRumble__Q24Game9RumbleMgrFii
	b        lbl_80186DA8

lbl_80186A20:
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	bne      lbl_80186A30
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_80186BA4

lbl_80186A30:
	lwz      r4, 0x14(r28)
	rlwinm   r31, r3, 0x1e, 0x1f, 0x1f
	li       r26, 0
	lbz      r30, 0x2b8(r4)
	lbz      r27, 0x2b9(r4)

lbl_80186A44:
	cmplwi   r31, 0
	beq      lbl_80186A78
	lwz      r4, 0x38(r28)
	lis      r3, 0x55555556@ha
	addi     r0, r3, 0x55555556@l
	addi     r4, r4, 2
	mulhw    r3, r0, r4
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf     r0, r0, r4
	stw      r0, 0x38(r28)
	b        lbl_80186AA0

lbl_80186A78:
	lwz      r4, 0x38(r28)
	lis      r3, 0x55555556@ha
	addi     r0, r3, 0x55555556@l
	addi     r4, r4, 1
	mulhw    r3, r0, r4
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf     r0, r0, r4
	stw      r0, 0x38(r28)

lbl_80186AA0:
	mr       r3, r28
	mr       r4, r29
	mr       r5, r30
	bl       findNearestColorPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navii
	or.      r23, r3, r3
	beq      lbl_80186AC4
	lbz      r0, 0x2b9(r23)
	cmpw     r27, r0
	bne      lbl_80186AD4

lbl_80186AC4:
	addi     r26, r26, 1
	li       r23, 0
	cmpwi    r26, 2
	blt      lbl_80186A44

lbl_80186AD4:
	cmplwi   r23, 0
	beq      lbl_80186BA4
	lwz      r24, 0x14(r28)
	lwz      r3, 0x2c4(r24)
	cmplwi   r3, 0
	beq      lbl_80186B30
	cmpwi    r30, 5
	bne      lbl_80186B14
	lwz      r3, 0x26c(r3)
	li       r4, 0x286b
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186B30

lbl_80186B14:
	lwz      r3, 0x26c(r3)
	li       r4, 0x2802
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80186B30:
	lwz      r3, 0x28c(r24)
	mr       r4, r24
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r23, 0x14(r28)
	mr       r4, r23
	li       r5, 4
	li       r6, 0
	lwz      r3, 0x28c(r23)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r29
	bl       sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1822
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	lhz      r5, 0x2dc(r29)
	bl       startRumble__Q24Game9RumbleMgrFii
	b        lbl_80186DA8

lbl_80186BA4:
	lwz      r3, 0x278(r29)
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_80186C24
	mr       r3, r28
	mr       r4, r29
	bl       sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	lwz      r4, 0x1c(r28)
	lis      r0, 0x4330
	lwz      r7, 0xc0(r29)
	mr       r3, r28
	xoris    r5, r4, 0x8000
	stw      r0, 0x90(r1)
	lfd      f3, lbl_80518C30@sda21(r2)
	mr       r4, r29
	stw      r5, 0x94(r1)
	addi     r6, r1, 8
	lfs      f1, lbl_80518C38@sda21(r2)
	li       r5, 5
	lfd      f2, 0x90(r1)
	lfs      f0, 0x4f8(r7)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f1, f0
	stfs     f0, 0x2b0(r29)
	lwz      r0, 0x14(r28)
	stw      r0, 8(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186DA8

lbl_80186C24:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2b0(r29)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2b0(r29)
	lwz      r3, 0xc0(r29)
	lfs      f1, 0x2b0(r29)
	lfs      f0, 0x4f8(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80186C50
	stfs     f0, 0x2b0(r29)

lbl_80186C50:
	lfs      f2, 0x2c(r28)
	lfs      f1, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_80186C90
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0x2c(r28)
	lfs      f0, 0x2c(r28)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_80186DA8
	mr       r3, r28
	mr       r4, r29
	bl       sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	b        lbl_80186DA8

lbl_80186C90:
	lwz      r3, 0x254(r29)
	lwz      r0, 0xbc(r3)
	cmpwi    r0, 0
	ble      lbl_80186DA8
	mr       r4, r29
	lwz      r5, 0xc0(r3)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x24
	lfs      f29, 0xc(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x10(r5)
	lfs      f31, 0x14(r5)
	mtctr    r12
	bctrl
	lfs      f0, 0x28(r1)
	lfs      f2, 0x24(r1)
	fsubs    f4, f30, f0
	lfs      f1, 0x2c(r1)
	fsubs    f3, f29, f2
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f2, f31, f1
	fmuls    f1, f4, f4
	fmuls    f2, f2, f2
	fmadds   f1, f3, f3, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80186D0C
	ble      lbl_80186D10
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80186D10

lbl_80186D0C:
	fmr      f1, f0

lbl_80186D10:
	lfs      f0, lbl_80518C64@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80186DA8
	mr       r4, r29
	addi     r3, r1, 0x18
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x18(r1)
	mr       r4, r29
	lfs      f1, 0x1c(r1)
	addi     r3, r1, 0xc
	lfs      f0, 0x20(r1)
	stfs     f2, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	addi     r4, r1, 0x48
	lfs      f2, 0x10(r1)
	addi     r5, r1, 0x3c
	lfs      f0, 0x14(r1)
	stfs     f1, 0x3c(r1)
	lfs      f1, lbl_80518CA4@sda21(r2)
	stfs     f2, 0x40(r1)
	lfs      f2, lbl_80518C48@sda21(r2)
	stfs     f0, 0x44(r1)
	lfs      f0, 0x1fc(r29)
	lwz      r3, 0x254(r29)
	fadds    f1, f1, f0
	bl       "setPos__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>f"
	mr       r3, r28
	mr       r4, r29
	bl       sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi

lbl_80186DA8:
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	lmw      r23, 0x9c(r1)
	lwz      r0, 0xf4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
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
	mDidCancel = 0;
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
	case 2:
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
void NaviThrowState::cleanup(Navi* navi) { }

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
	} else if (playData->mStoryFlags & STORY_DebtPaid) {
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
	mState = 0;
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

		if (mState == 1 || mState == 0) {
			// probably a combination of enums
			if (navi->mController1 && navi->mController1->getButtonDown() & 0x70f) {
				if (mDoForceWakeup) {
					navi->mAnimSpeed = 60.0f;
					navi->finishMotion();
				} else {
					navi->startMotion(IPikiAnims::GETUP, IPikiAnims::GETUP, navi, nullptr);
					if (navi->mNaviIndex == NAVIID_Olimar) {
						navi->mSoundObj->startSound(PSSE_PL_WAKEUP_ORIMA, 0);
					} else if (playData->mStoryFlags & STORY_DebtPaid) {
						navi->mSoundObj->startSound(PSSE_PL_WAKEUP_SHACHO, 0);
					} else {
						navi->mSoundObj->startSound(PSSE_PL_WAKEUP_LUGI, 0);
					}
				}
				mState = 2;
			}
		}

		if (mState == 3) {
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
		if (key.mType == 1) {
			if (navi->mAnimator.mSelfAnimator.isFlag(SysShape::Animator::AnimFinishMotion)) {
				if (playData->mStoryFlags & STORY_DebtPaid) {
					navi->mSoundObj->startSound(PSSE_PL_WAKEUP_SHACHO, 0);
				} else {
					navi->mSoundObj->startSound(PSSE_PL_WAKEUP_LUGI, 0);
				}
			}
			switch (mState) {
			case 0:
				mState = 1;
				break;
			default:
				break;
			}
		}
		if (key.mType == KEYEVENT_END) {
			switch (mState) {
			case 2:
				mState = 3;
				break;
			default:
				break;
			}
		}
	} else {
		if (key.mType == KEYEVENT_END) {
			switch (mState) {
			case 0:
				mState = 1;
				break;
			case 2:
				mState = 3;
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
	_10 = 0;
	navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, nullptr, nullptr);
}

/**
 * @note Address: 0x80187DE4
 * @note Size: 0xB0
 */
void NaviDemo_UfoState::exec(Navi* navi)
{
	switch (_10) {
	case 0:
		if (execGoto(navi)) {
			_10 = 1;
			initSuck(navi);
		}
		break;
	case 1:
		if (execSuck(navi)) {
			_10 = 2;
		}
		break;
	case 2:
		transit(navi, NSID_Walk, nullptr);
	}
}

/**
 * @note Address: 0x80187E94
 * @note Size: 0x4
 */
void NaviDemo_UfoState::cleanup(Navi* navi) { }

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
	f32 dist      = diff.length();
	_18           = dist;

	_14               = 0.0f;
	navi->mVelocity.y = 0.0f;

	_1C = 1.0f;
	_24 = navi->getPosition();
	_20 = 0.0f;
	_30 = 0.0f;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r4
	stw      r29, 0x34(r1)
	mr       r29, r3
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r5, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r12, 8(r12)
	lwz      r31, 0xb0(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 0x194(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x24(r1)
	lfs      f0, 0x18(r1)
	lfs      f3, 0x28(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x1c(r1)
	lfs      f1, 0x20(r1)
	lfs      f0, 0x14(r1)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801880B8
	ble      lbl_801880BC
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801880BC

lbl_801880B8:
	fmr      f1, f0

lbl_801880BC:
	stfs     f1, 0x18(r29)
	mr       r4, r30
	lfs      f2, lbl_80518BE0@sda21(r2)
	addi     r3, r1, 8
	lfs      f0, lbl_80518C48@sda21(r2)
	stfs     f2, 0x14(r29)
	stfs     f2, 0x204(r30)
	stfs     f0, 0x1c(r29)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f1, 0x24(r29)
	lfs      f1, 0xc(r1)
	stfs     f1, 0x28(r29)
	lfs      f1, 0x10(r1)
	stfs     f1, 0x2c(r29)
	stfs     f0, 0x20(r29)
	stfs     f0, 0x30(r29)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8018812C
 * @note Size: 0x120
 */
bool NaviDemo_UfoState::execSuck(Navi* navi)
{
	Vector3f goalPos = ItemOnyon::mgr->mUfo->getSuckPos();
	Vector3f setPos  = _24 + (goalPos - _24) * _20;
	navi->setPosition(setPos, false);
	navi->mScale = -(_20 * 0.75f - 1.0f) * _1C;

	_20 += (_30 * sys->mDeltaTime) / _18;
	_30 += sys->mDeltaTime * 720.0f;
	return _20 >= 1.0f;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	addi     r3, r1, 8
	lwz      r5, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r4, 0xb0(r5)
	lwz      r12, 0(r4)
	lwz      r12, 0x194(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x10(r1)
	mr       r3, r31
	lfs      f5, 0x2c(r30)
	addi     r4, r1, 0x14
	lfs      f0, 0xc(r1)
	li       r5, 0
	lfs      f6, 0x28(r30)
	fsubs    f2, f1, f5
	lfs      f4, 0x20(r30)
	fsubs    f3, f0, f6
	lfs      f1, 8(r1)
	lfs      f7, 0x24(r30)
	fmuls    f0, f2, f4
	fsubs    f2, f1, f7
	fmuls    f1, f3, f4
	fadds    f0, f5, f0
	fmuls    f2, f2, f4
	fadds    f1, f6, f1
	stfs     f0, 0x1c(r1)
	fadds    f0, f7, f2
	stfs     f1, 0x18(r1)
	stfs     f0, 0x14(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f2, lbl_80518CDC@sda21(r2)
	lfs      f1, 0x20(r30)
	lfs      f4, lbl_80518C48@sda21(r2)
	lfs      f0, 0x1c(r30)
	fnmsubs  f1, f2, f1, f4
	lfs      f2, lbl_80518CE0@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x168(r31)
	stfs     f0, 0x16c(r31)
	stfs     f0, 0x170(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f3, 0x30(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x18(r30)
	fmuls    f1, f3, f1
	lfs      f3, 0x20(r30)
	fdivs    f0, f1, f0
	fadds    f0, f3, f0
	stfs     f0, 0x20(r30)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x30(r30)
	lfs      f1, 0x54(r3)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x30(r30)
	lfs      f0, 0x20(r30)
	fcmpo    cr0, f0, f4
	cror     2, 1, 2
	mfcr     r0
	lwz      r31, 0x2c(r1)
	rlwinm   r3, r0, 3, 0x1f, 0x1f
	lwz      r0, 0x34(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8018824C
 * @note Size: 0x58C
 */
void NaviDemo_HoleInState::init(Navi* navi, StateArg* stateArg)
{
	mSubState = GoTo;
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
	case GoTo:
		if (execGoto(navi)) {
			mSubState = Hesitate;
			initHesitate(navi);
		}
		break;
	case Hesitate:
		if (execHesitate(navi)) {
			mSubState = Fall;
			initFall(navi);
		}
		break;
	case Fall:
		execFall(navi);
		break;
	}
}

/**
 * @note Address: 0x80188880
 * @note Size: 0xC
 */
void NaviDemo_HoleInState::onKeyEvent(Navi* navi, SysShape::KeyEvent const&) { _12 = 1; }

/**
 * @note Address: 0x8018888C
 * @note Size: 0x4
 */
void NaviDemo_HoleInState::cleanup(Navi* navi) { }

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
	_12 = 0;
}

/**
 * @note Address: 0x80188A68
 * @note Size: 0x16C
 */
bool NaviDemo_HoleInState::execHesitate(Navi* navi)
{
	if (_12) {
		Vector3f holePos = mHoleObj->getPosition();
		Vector3f diff    = holePos - navi->getPosition();
		diff.normalise();

		Vector3f velocity(diff.x, 240.0f, diff.z);
		velocity.x *= 2.0f;
		velocity.z *= 2.0f;
		navi->mVelocity       = velocity;
		navi->mTargetVelocity = velocity;
		navi->setMapCollision(false);
		return true;
	}

	navi->mVelocity       = 0.0f;
	navi->mTargetVelocity = 0.0f;
	return false;

	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	lbz      r0, 0x12(r3)
	mr       r31, r4
	cmplwi   r0, 0
	beq      lbl_80188B88
	lwz      r4, 0x14(r3)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x18(r1)
	lfs      f29, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 0x10(r1)
	fsubs    f3, f30, f0
	lfs      f1, 8(r1)
	fsubs    f4, f29, f2
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f2, f31, f1
	fmuls    f1, f3, f3
	fmuls    f3, f4, f4
	fmadds   f1, f2, f2, f1
	fadds    f1, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80188B20
	ble      lbl_80188B24
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80188B24

lbl_80188B20:
	fmr      f1, f0

lbl_80188B24:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80188B40
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f4, f4, f0

lbl_80188B40:
	lfs      f1, lbl_80518C3C@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_80518CEC@sda21(r2)
	li       r4, 0
	fmuls    f2, f2, f1
	fmuls    f4, f4, f1
	stfs     f2, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f4, 0x208(r31)
	stfs     f2, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f4, 0x1ec(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x1f0(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80188BA8

lbl_80188B88:
	lfs      f0, lbl_80518BE0@sda21(r2)
	li       r3, 0
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)

lbl_80188BA8:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x80188BD4
 * @note Size: 0x4
 */
void NaviDemo_HoleInState::initFall(Navi* navi) { }

/**
 * @note Address: 0x80188BD8
 * @note Size: 0x8
 */
bool NaviDemo_HoleInState::execFall(Navi* navi) { return false; }

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
	_20 = 0;
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
	if (moviePlayer->isFlag(1)) {
		transit(navi, NSID_Walk, nullptr);
		return;
	}

	Vector3f rot(-HALF_PI, navi->mFaceDir, 0.0f);
	Vector3f pos = navi->getPosition();
	rot.x        = 0.0f;

	mTimer -= sys->mDeltaTime;
	switch (_20) {
	case 0:
		pos.y += 2.0f;
		navi->mBaseTrMatrix.makeSRT(navi->mScale, rot, pos);
		if (mTimer <= 0.0f) {
			_20    = 1;
			mTimer = 0.7f;
		}
		break;
	case 1:
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
