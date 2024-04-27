#include "Game/Entities/BlackMan.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/MapMgr.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PSM/EnemyBoss.h"
#include "nans.h"

namespace Game {
namespace BlackMan {

/**
 * @note Address: 0x803A3AF0
 * @note Size: 0x174
 */
void FSM::init(EnemyBase* enemy)
{
	create(WRAITH_Count);
	registerState(new StateWalk(WRAITH_Walk));
	registerState(new StateDead(WRAITH_Dead));
	registerState(new StateFreeze(WRAITH_Freeze));
	registerState(new StateBend(WRAITH_Bend));
	registerState(new StateEscape(WRAITH_Escape));
	registerState(new StateFall(WRAITH_Fall));
	registerState(new StateRecover(WRAITH_Recover));
	registerState(new StateFlick(WRAITH_Flick));
	registerState(new StateTired(WRAITH_Tired));
}

/**
 * @note Address: 0x803A3C64
 * @note Size: 0x3C
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	mName = "walk";
}

/**
 * @note Address: 0x803A3CA0
 * @note Size: 0x80
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wraith = OBJ(enemy);
	bool check;
	if (wraith->mTyre == nullptr || wraith->mEscapePhase == 2) {
		check = false;
	} else {
		check = true;
	}

	if (check) {
		wraith->startMotion(WRAITHANIM_Move, nullptr);
	} else {
		wraith->startMotion(WRAITHANIM_Run, nullptr);
	}

	wraith->createTraceEffect();
}

/**
 * @note Address: 0x803A3D20
 * @note Size: 0x1D4
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* wraith = OBJ(enemy);
	wraith->walkFunc();
	if (wraith->mHealth <= 0.0f) {
		transit(wraith, WRAITH_Dead, nullptr);
		return;
	}

	if (wraith->isTyreDead()) {
		transit(wraith, WRAITH_Escape, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(wraith, false)) {
		wraith->mPostFlickState = 0;
		transit(wraith, WRAITH_Flick, nullptr);
		return;
	}

	if (wraith->isReachToGoal(wraith->getParms()->mWaypointGoalRadius)) {
		wraith->findNextRoutePoint();
		return;
	}

	if (wraith->mCurAnim->mIsPlaying) {
		switch (wraith->mCurAnim->mType) {
		case KEYEVENT_2:
		case KEYEVENT_3:
			Vector3f position = wraith->getPosition();
			if (wraith->getCurrAnimIndex() == WRAITHANIM_Walk) {
				cameraMgr->startVibration(VIBTYPE_LightMidShort, position, CAMNAVI_Both);
				rumbleMgr->startRumble(RUMBLETYPE_Fixed8, position, RUMBLEID_Both);
			}

			if (wraith->getCurrAnimIndex() == WRAITHANIM_Run) {
				cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
				rumbleMgr->startRumble(RUMBLETYPE_Fixed8, position, RUMBLEID_Both);
			}
			break;
		}
	}
}

/**
 * @note Address: 0x803A3EF4
 * @note Size: 0x24
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	Obj* wraith = OBJ(enemy);
	wraith->fadeTraceEffect();
}

/**
 * @note Address: 0x803A3F18
 * @note Size: 0x3C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/**
 * @note Address: 0x803A3F54
 * @note Size: 0x64
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->startMotion(WRAITHANIM_Dead, nullptr);

	Obj* wraith = OBJ(enemy);
	wraith->deadTraceEffect();
	wraith->deathProcedure();
}

/**
 * @note Address: 0x803A3FB8
 * @note Size: 0xFC
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* wraith = OBJ(enemy);
	if (wraith->mCurAnim->mIsPlaying) {
		Vector3f position = wraith->getPosition();
		switch (wraith->mCurAnim->mType) {
		case KEYEVENT_2:
		case KEYEVENT_3:
		case KEYEVENT_4:
			cameraMgr->startVibration(VIBTYPE_MidMidShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, position, RUMBLEID_Both);
			break;
		case KEYEVENT_5:
			wraith->deadEffect();
			break;
		case KEYEVENT_END:
			cameraMgr->startVibration(VIBTYPE_MidFastLong, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed15, position, RUMBLEID_Both);
			wraith->kill(nullptr);
			break;
		}
	}
}

/**
 * @note Address: 0x803A40B4
 * @note Size: 0x3C
 */
StateFreeze::StateFreeze(int stateID)
    : State(stateID)
{
	mName = "freeze";
}

/**
 * @note Address: 0x803A40F0
 * @note Size: 0x90
 */
void StateFreeze::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wraith = OBJ(enemy);
	wraith->collisionStOn();

	bool check = false;
	if (enemy->getCurrAnimIndex() == WRAITHANIM_Flick2) {
		check = true;
	}
	enemy->startMotion(WRAITHANIM_Bend2, nullptr);
	if (check) {
		enemy->setMotionFrame(3.0f);
	}

	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->mTargetVelocity  = Vector3f(0.0f);
}

/**
 * @note Address: 0x803A4180
 * @note Size: 0x2F4
 */
void StateFreeze::exec(EnemyBase* enemy)
{
	Obj* wraith = OBJ(enemy);
	wraith->mFreezeTimer++;
	if (wraith->mHealth <= 0.0f) {
		transit(wraith, WRAITH_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(wraith, false)) {
		wraith->mPostFlickState = 2;
		transit(wraith, WRAITH_Flick, nullptr);
		return;
	}

	if (wraith->mCurAnim->mIsPlaying) {
		if ((u32)wraith->mCurAnim->mType == KEYEVENT_2) {
			Vector3f position = wraith->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidMidShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, position, RUMBLEID_Both);

			f32 faceDir = wraith->getFaceDir();
			position.x += 32.0f * sinf(faceDir) - 4.0f * cosf(faceDir);
			position.z += 32.0f * cosf(faceDir) - 4.0f * sinf(faceDir);
			wraith->createBounceEffect(position, 0.42f);

		} else if ((u32)wraith->mCurAnim->mType == KEYEVENT_END) {
			transit(wraith, WRAITH_Walk, nullptr);
			wraith->collisionStOff();
		}
	} else if (wraith->mFreezeTimer > wraith->getParms()->mProperParms.mFreezeTimerLength.mValue) {
		wraith->finishMotion();
	}
}

/**
 * @note Address: 0x803A4474
 * @note Size: 0x24
 */
void StateFreeze::cleanup(EnemyBase* enemy)
{
	Obj* wraith = OBJ(enemy);
	wraith->collisionStOff();
}

/**
 * @note Address: 0x803A4498
 * @note Size: 0x3C
 */
StateBend::StateBend(int stateID)
    : State(stateID)
{
	mName = "bend";
}

/**
 * @note Address: 0x803A44D4
 * @note Size: 0x74
 */
void StateBend::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wraith = OBJ(enemy);
	wraith->collisionStOn();

	bool check = false;
	if (enemy->getCurrAnimIndex() == WRAITHANIM_Flick) {
		check = true;
	}

	enemy->startMotion(WRAITHANIM_Bend, nullptr);

	if (check) {
		enemy->setMotionFrame(5.0f);
	}
}

/**
 * @note Address: 0x803A4548
 * @note Size: 0x1E8
 */
void StateBend::exec(EnemyBase* enemy)
{
	Obj* wraith = OBJ(enemy);
	if (wraith->mHealth <= 0.0f) {
		transit(wraith, WRAITH_Dead, nullptr);
		return;
	}

	if (wraith->isTyreDead()) {
		transit(wraith, WRAITH_Escape, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(wraith, false)) {
		wraith->mPostFlickState = 3;
		transit(wraith, WRAITH_Flick, nullptr);
		return;
	}

	if (wraith->mCurAnim->mIsPlaying) {
		if ((u32)wraith->mCurAnim->mType == KEYEVENT_2) {
			wraith->bendEffect();
			Vector3f position = wraith->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidMidShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, position, RUMBLEID_Both);

		} else if ((u32)wraith->mCurAnim->mType == KEYEVENT_END) {
			wraith->collisionStOff();
			if (wraith->isTyreDead()) {
				transit(wraith, WRAITH_Escape, nullptr);

			} else {
				transit(wraith, WRAITH_Recover, nullptr);
			}
		}
	} else {
		wraith->mFreezeTimer++;
		if (wraith->mFreezeTimer > wraith->getParms()->mProperParms.mDosinStopTimerLength.mValue) {
			wraith->finishMotion();
		}
	}
}

/**
 * @note Address: 0x803A4730
 * @note Size: 0x24
 */
void StateBend::cleanup(EnemyBase* enemy)
{
	Obj* wraith = OBJ(enemy);
	wraith->collisionStOff();
}

/**
 * @note Address: 0x803A4754
 * @note Size: 0x3C
 */
StateEscape::StateEscape(int stateID)
    : State(stateID)
{
	mName = "escape";
}

/**
 * @note Address: 0x803A4790
 * @note Size: 0xB0
 */
void StateEscape::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(WRAITHANIM_GetOff, nullptr);

	Obj* wraith = OBJ(enemy);
	wraith->escape();
	wraith->collisionStOff();

	PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(wraith->mSoundObj);
	PSM::checkMidBoss(soundObj);
	if (soundObj != nullptr && soundObj->mAppearFlag) {
		soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_WaterwraithEscape);
	}
}

/**
 * @note Address: 0x803A4840
 * @note Size: 0x2B4
 */
void StateEscape::exec(EnemyBase* enemy)
{
	Obj* wraith = OBJ(enemy);
	Vector3f position;
	if (wraith->mCurAnim->mIsPlaying) {
		switch (wraith->mCurAnim->mType) {
		case KEYEVENT_2:
			wraith->flick();
			break;

		case KEYEVENT_3:
		case KEYEVENT_4:
			position = wraith->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastLong, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed16, position, RUMBLEID_Both);

			f32 faceDir = wraith->getFaceDir();
			position.x += -22.0f * sinf(faceDir) - 30.0f * cosf(faceDir);
			position.z += -22.0f * cosf(faceDir) - 30.0f * sinf(faceDir);
			wraith->createBounceEffect(position, 0.85f);
			break;

		case KEYEVENT_5:
			position = wraith->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastLong, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed16, position, RUMBLEID_Both);
			break;

		case KEYEVENT_END:
			transit(wraith, WRAITH_Walk, nullptr);
			break;
		}
	}
}

/**
 * @note Address: 0x803A4AF4
 * @note Size: 0x3C
 */
StateFall::StateFall(int stateID)
    : State(stateID)
{
	mName = "fall";
}

/**
 * @note Address: 0x803A4B30
 * @note Size: 0x4C
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(WRAITHANIM_Land, nullptr);
	enemy->hardConstraintOn();
	enemy->enableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x803A4B7C
 * @note Size: 0x178
 */
void StateFall::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if ((u32)enemy->mCurAnim->mType == KEYEVENT_2) {
			OBJ(enemy)->appearFanfare();
			Vector3f position = enemy->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastLong, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, position, RUMBLEID_Both);

		} else if ((u32)enemy->mCurAnim->mType == KEYEVENT_END) {
			if (OBJ(enemy)->isFallEnd()) {
				enemy->disableEvent(0, EB_NoInterrupt);
				transit(enemy, WRAITH_Recover, nullptr);
			}
		}
	}

	Vector3f position = enemy->getPosition();
	f32 initY         = position.y;
	position.y += 20.0f;

	f32 minY    = mapMgr->getMinY(position);
	f32 minDist = OBJ(enemy)->getParms()->mFallMinDistance;
	minDist += minY;

	if (initY < minDist) {
		enemy->finishMotion();
	}
}

/**
 * @note Address: 0x803A4CF4
 * @note Size: 0x3C
 */
StateRecover::StateRecover(int stateID)
    : State(stateID)
{
	mName = "recover";
}

/**
 * @note Address: 0x803A4D30
 * @note Size: 0xC8
 */
void StateRecover::init(EnemyBase* enemy, StateArg* stateArg)
{

	if (enemy->getCurrAnimIndex() != WRAITHANIM_Land) {
		PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(enemy->mSoundObj);
		PSM::checkMidBoss(soundObj);
		if (soundObj != nullptr && soundObj->mAppearFlag) {
			soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_Attack);
		}
	}

	enemy->startMotion(WRAITHANIM_Recover, nullptr);
	Obj* wraith = OBJ(enemy);
	wraith->recoverFlick();
	wraith->tyreUpEffect();
}

/**
 * @note Address: 0x803A4DF8
 * @note Size: 0x16C
 */
void StateRecover::exec(EnemyBase* enemy)
{
	Obj* wraith = OBJ(enemy);
	wraith->recover();
	if (wraith->isTyreDead()) {
		transit(wraith, WRAITH_Escape, nullptr);
		return;
	}

	if (wraith->mCurAnim->mIsPlaying) {
		switch (wraith->mCurAnim->mType) {
		case KEYEVENT_2:
			wraith->flick();
			break;

		case KEYEVENT_3:
			wraith->flick();
			wraith->tyreFlick();
			break;

		case KEYEVENT_4:
			wraith->tyreDownEffect();
			break;

		case KEYEVENT_5:
			if (wraith->isFinalFloor()) {
				PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(enemy->mSoundObj);
				PSM::checkMidBoss(soundObj);
				if (soundObj) {
					soundObj->setAppearFlag(true);
				}
			}
			break;
		case KEYEVENT_END:
			wraith->moveRestart();
			transit(wraith, WRAITH_Walk, nullptr);
			break;
		}
	}
}

/**
 * @note Address: 0x803A4F64
 * @note Size: 0x3C
 */
StateFlick::StateFlick(int stateID)
    : State(stateID)
{
	mName = "flick";
}

/**
 * @note Address: 0x803A4FA0
 * @note Size: 0x158
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	bool check;
	if (OBJ(enemy)->mTyre == nullptr || OBJ(enemy)->mEscapePhase == 2) {
		check = false;
	} else {
		check = true;
	}

	if (check) {
		enemy->startMotion(WRAITHANIM_Flick, nullptr);
		PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(enemy->mSoundObj);
		PSM::checkMidBoss(soundObj);
		if (soundObj != nullptr && soundObj->mAppearFlag) {
			soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_Flick);
		}
	} else {
		enemy->startMotion(WRAITHANIM_Flick2, nullptr);
		PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(enemy->mSoundObj);
		PSM::checkMidBoss(soundObj);
		if (soundObj != nullptr && soundObj->mAppearFlag) {
			soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_WaterwraithFlick);
		}
	}

	OBJ(enemy)->createFlickEffect();
}

/**
 * @note Address: 0x803A50F8
 * @note Size: 0xB8
 */
void StateFlick::exec(EnemyBase* enemy)
{
	if (OBJ(enemy)->isTyreDead()) {
		transit(enemy, WRAITH_Escape, nullptr);
		return;
	}

	if (enemy->mCurAnim->mIsPlaying) {
		if ((u32)enemy->mCurAnim->mType == KEYEVENT_2) {
			OBJ(enemy)->flick();

		} else if ((u32)enemy->mCurAnim->mType == KEYEVENT_END) {
			transit(enemy, OBJ(enemy)->mPostFlickState, nullptr);
		}
	}
}

/**
 * @note Address: 0x803A51B0
 * @note Size: 0x24
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* wraith = OBJ(enemy);
	wraith->fadeFlickEffect();
}

/**
 * @note Address: 0x803A51D4
 * @note Size: 0x3C
 */
StateTired::StateTired(int stateID)
    : State(stateID)
{
	mName = "tired";
}

/**
 * @note Address: 0x803A5210
 * @note Size: 0x5C
 */
void StateTired::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(WRAITHANIM_Wait2, nullptr);
	enemy->mTargetVelocity = Vector3f(0.0f);
	_10                    = 0;
}

/**
 * @note Address: 0x803A526C
 * @note Size: 0xC0
 */
void StateTired::exec(EnemyBase* enemy)
{
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);

	if (enemy->mCurAnim->mIsPlaying) {
		if ((u32)enemy->mCurAnim->mType == KEYEVENT_END) {
			OBJ(enemy)->flick();
			transit(enemy, WRAITH_Walk, nullptr);
		}
		return;
	}

	_10++;
	Obj* wraith = OBJ(enemy);
	if (_10 > wraith->getParms()->mProperParms.mStandStillTimerLength.mValue) {
		enemy->finishMotion();
	}
}

} // namespace BlackMan
} // namespace Game
