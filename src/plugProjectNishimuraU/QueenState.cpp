#include "Game/Entities/Queen.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace Queen {
/**
 * @note Address: 0x80287B70
 * @note Size: 0x278
 */
void FSM::init(EnemyBase* enemy)
{
	create(7);
	registerState(new StateDead);
	registerState(new StateSleep);
	registerState(new StateWait);
	registerState(new StateDamage);
	registerState(new StateFlick);
	registerState(new StateRolling);
	registerState(new StateBorn);
}

/**
 * @note Address: 0x80287DE8
 * @note Size: 0x58
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen = OBJ(enemy);
	queen->createDeadEffect();
	queen->mTargetVelocity = Vector3f(0.0f);
	queen->deathProcedure();
	queen->startMotion(QUEENANIM_Dead, nullptr);
}

/**
 * @note Address: 0x80287E40
 * @note Size: 0xB8
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* queen = OBJ(enemy);
	if (queen->mCurAnim->mIsPlaying != 0) {
		if ((u32)queen->mCurAnim->mType == KEYEVENT_2) {
			Vector3f position = queen->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, position, RUMBLEID_Both);
		} else if ((u32)queen->mCurAnim->mType == KEYEVENT_END) {
			queen->releaseJointShadow();
			queen->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x80287EF8
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80287EFC
 * @note Size: 0x70
 */
void StateSleep::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen              = OBJ(enemy);
	queen->mNextState       = QUEEN_NULL;
	queen->mIsAttackLoopBGM = false;
	queen->mWaitTimer       = 0.0f;
	queen->mPrevHitNum      = queen->mFlickTimer;
	queen->hardConstraintOn();
	queen->mTargetVelocity = Vector3f(0.0f);
	queen->startMotion(QUEENANIM_Sleep, nullptr);
}

/**
 * @note Address: 0x80287F6C
 * @note Size: 0x154
 */
void StateSleep::exec(EnemyBase* enemy)
{
	Obj* queen = OBJ(enemy);
	if ((queen->mHealth <= 0.0f) || (queen->isHitCounterUp()) || (queen->isCreateBaby())) {
		queen->finishMotion();
	}

	if (queen->isFinishMotion()) {
		if (queen->mHealth <= 0.0f) {
			queen->mNextState = QUEEN_Dead;
		} else if (EnemyFunc::isStartFlick(queen, false)) {
			queen->mNextState = QUEEN_Flick;
		} else if (queen->mStuckPikminCount != 0) {
			queen->mNextState = QUEEN_Damage;
		} else {
			queen->mNextState = QUEEN_Wait;
		}
	}

	if (queen->mCurAnim->mIsPlaying != 0) {
		if ((u32)queen->mCurAnim->mType == 0) {
			queen->startSleepEffect();
		} else if ((u32)queen->mCurAnim->mType == KEYEVENT_2) {
			queen->finishSleepEffect();
			queen->createWakeUpEffect();
			queen->setMidBossAppearBGM();
		} else if ((u32)queen->mCurAnim->mType == KEYEVENT_END) {
			transit(queen, queen->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802880C0
 * @note Size: 0x40
 */
void StateSleep::cleanup(EnemyBase* enemy)
{
	Obj* queen = OBJ(enemy);
	queen->hardConstraintOff();
	queen->finishSleepEffect();
	queen->setMidBossAppearBGM();
}

/**
 * @note Address: 0x80288100
 * @note Size: 0x70
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen              = OBJ(enemy);
	queen->mNextState       = QUEEN_NULL;
	queen->mIsAttackLoopBGM = false;
	queen->mWaitTimer       = 0.0f;
	queen->mPrevHitNum      = queen->mFlickTimer;
	queen->hardConstraintOn();
	queen->mTargetVelocity = Vector3f(0.0f);
	queen->startMotion(QUEENANIM_Wait, nullptr);
}

/**
 * @note Address: 0x80288170
 * @note Size: 0x13C
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* queen = OBJ(enemy);
	if (!queen->isCreateBaby() && (queen->mWaitTimer > 30.0f)) {
		queen->mNextState = QUEEN_Sleep;
		queen->finishMotion();
	}

	if (queen->isHitCounterUp()) {
		queen->mNextState = QUEEN_Damage;
		queen->finishMotion();
	}

	if (queen->isCreateBaby()) {
		queen->mNextState = QUEEN_Born;
		queen->finishMotion();
	}

	if (EnemyFunc::isStartFlick(queen, false)) {
		queen->mNextState = QUEEN_Flick;
		queen->finishMotion();
	}

	if (queen->mHealth <= 0.0f) {
		queen->mNextState = QUEEN_Dead;
		queen->finishMotion();
	}

	queen->mWaitTimer += sys->mDeltaTime;

	if ((queen->mCurAnim->mIsPlaying != 0) && ((u32)queen->mCurAnim->mType == KEYEVENT_END)) {
		transit(queen, queen->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802882AC
 * @note Size: 0x24
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
}

/**
 * @note Address: 0x802882D0
 * @note Size: 0x78
 */
void StateDamage::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen              = OBJ(enemy);
	queen->mNextState       = QUEEN_NULL;
	queen->mIsAttackLoopBGM = false;
	queen->mWaitTimer       = 0.0f;
	queen->startDamageEffect();
	queen->hardConstraintOn();
	queen->mTargetVelocity = Vector3f(0.0f);
	queen->setEmotionExcitement();
	queen->startMotion(QUEENANIM_Damage, nullptr);
}

/**
 * @note Address: 0x80288348
 * @note Size: 0xF4
 */
void StateDamage::exec(EnemyBase* enemy)
{
	Obj* queen = OBJ(enemy);

	if (queen->isCreateBaby()) {
		queen->mNextState = QUEEN_Born;
		queen->finishMotion();
	}

	if (queen->mStuckPikminCount == 0) {
		queen->mNextState = QUEEN_Wait;
		queen->finishMotion();
	}

	if (EnemyFunc::isStartFlick(queen, false)) {
		queen->mNextState = QUEEN_Flick;
		queen->finishMotion();
	}

	if (queen->mHealth <= 0.0f) {
		queen->mNextState = QUEEN_Dead;
		queen->finishMotion();
	}

	if ((queen->mCurAnim->mIsPlaying != 0) && ((u32)queen->mCurAnim->mType == KEYEVENT_END)) {
		transit(queen, queen->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x8028843C
 * @note Size: 0x40
 */
void StateDamage::cleanup(EnemyBase* enemy)
{
	Obj* queen = OBJ(enemy);
	queen->hardConstraintOff();
	queen->finishDamageEffect();
	queen->setEmotionCaution();
}

/**
 * @note Address: 0x8028847C
 * @note Size: 0x80
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen              = OBJ(enemy);
	queen->mNextState       = QUEEN_NULL;
	queen->mIsAttackLoopBGM = false;
	queen->mWaitTimer       = 0.0f;
	queen->createFlickEffect();
	queen->hardConstraintOn();
	queen->mTargetVelocity = Vector3f(0.0f);
	queen->setEmotionExcitement();
	queen->startMotion(QUEENANIM_Flick, nullptr);
	queen->startBossChargeBGM();
}

/**
 * @note Address: 0x802884FC
 * @note Size: 0xFC
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* queen = OBJ(enemy);
	if (queen->mCurAnim->mIsPlaying != 0) {
		if ((u32)queen->mCurAnim->mType == KEYEVENT_2) {
			queen->flickPikmin(queen->getFaceDir());
		} else if ((u32)queen->mCurAnim->mType == KEYEVENT_END) {
			if (queen->mHealth <= 0.0f) {
				transit(queen, QUEEN_Dead, nullptr);
			} else if (queen->isRollingAttackLeft()) {
				transit(queen, QUEEN_Rolling, (StateArg*)"left");
			} else {
				transit(queen, QUEEN_Rolling, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802885F8
 * @note Size: 0x38
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80288630
 * @note Size: 0x88
 */
void StateRolling::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen             = OBJ(enemy);
	queen->mNextState      = QUEEN_NULL;
	queen->mIsRolling      = false;
	queen->mTargetVelocity = Vector3f(0.0f);
	queen->setEmotionExcitement();
	RollingStateArg* arg = static_cast<RollingStateArg*>(stateArg);
	if (arg) {
		queen->startMotion(QUEENANIM_RollingL, nullptr);
	} else {
		queen->startMotion(QUEENANIM_RollingR, nullptr);
	}
}

/**
 * @note Address: 0x802886B8
 * @note Size: 0x5BC
 */
void StateRolling::exec(EnemyBase* enemy)
{
	Obj* queen = OBJ(enemy);
	if (OBJ(enemy)->mIsRolling) {

		f32 initAngle;
		if (queen->getCurrAnimIndex() == 5) {
			initAngle = HALF_PI;
		} else {
			initAngle = -HALF_PI;
		}

		f32 theta    = initAngle + queen->getFaceDir();
		Vector3f dir = getDirection(theta);

		Vector3f position = queen->getPosition();
		Vector3f home     = queen->mHomePosition;
		Vector3f sep      = position - home;
		sep.y             = 0.0f;
		f32 dotProd       = sep.dot(dir);

		if (dotProd > CG_GENERALPARMS(queen).mTerritoryRadius()) {
			queen->mTargetVelocity = Vector3f(0.0f);
		} else {
			f32 increasedRad = 10.0f + CG_GENERALPARMS(queen).mTerritoryRadius();
			dir *= increasedRad;
			Vector3f newSep = home - position;

			newSep = dir + newSep;
			newSep.toFlatDirection();

			newSep.x *= CG_GENERALPARMS(queen).mMoveSpeed();
			newSep.z *= CG_GENERALPARMS(queen).mMoveSpeed();

			queen->setTargetVelocity(newSep);
		}

		queen->flickPikmin(FLICK_BACKWARD_ANGLE);
		queen->rollingAttack();
		queen->mWaitTimer += sys->mDeltaTime;

		Vector3f camPos = queen->getPosition();
		cameraMgr->startVibration(VIBTYPE_MidFastShort, camPos, CAMNAVI_Both);

	} else {
		queen->mTargetVelocity = Vector3f(0.0f);
	}

	if (queen->mHealth <= 0.0f) {
		queen->mNextState      = QUEEN_Dead;
		queen->mIsRolling      = false;
		queen->mTargetVelocity = Vector3f(0.0f);

		queen->finishMotion();
		queen->finishBossAttackLoopBGM();
	}

	if (queen->mCurAnim->mIsPlaying != 0) {
		if ((u32)queen->mCurAnim->mType == KEYEVENT_2) {

			f32 initAngle;
			if (queen->getCurrAnimIndex() == 5) {
				initAngle = HALF_PI;
			} else {
				initAngle = -HALF_PI;
			}

			f32 theta    = initAngle + queen->getFaceDir();
			Vector3f dir = getDirection(theta);
			Vector3f sep = queen->getPosition() - queen->mHomePosition;
			sep.y        = 0.0f;
			f32 dotProd  = sep.dot(dir);

			Parms* parms  = CG_PARMS(queen);
			f32 territory = parms->mGeneral.mTerritoryRadius.mValue - 50.0f;
			f32 homeRad   = -(50.0f + parms->mGeneral.mHomeRadius.mValue);

			if (queen->mHealth <= 0.0f) {
				queen->finishBossAttackLoopBGM();
			}

			if (dotProd > territory) {
				if (queen->mIsRolling) {
					queen->createCrashFallRock();
					Vector3f anotherPos = queen->getPosition();

					cameraMgr->startVibration(VIBTYPE_Crash, anotherPos, CAMNAVI_Both);
					rumbleMgr->startRumble(RUMBLETYPE_Fixed15, anotherPos, RUMBLEID_Both);
				}
				queen->mIsRolling = false;
				queen->mNextState = QUEEN_Rolling;

				queen->finishMotion();
				queen->finishRollingEffect(true);
				queen->getJAIObject()->startSound(PSSE_EN_QUEEN_CRUSH, 0);
			} else if ((queen->mWaitTimer > CG_PROPERPARMS(queen).mRollingTime.mValue) && (dotProd > homeRad) && (dotProd < 50.0f)) {
				if (queen->mIsRolling) {
					queen->finishBossAttackLoopBGM();
				}

				queen->mIsRolling = false;
				queen->mNextState = QUEEN_Wait;

				queen->finishMotion();
				queen->finishRollingEffect(false);
			}
		} else if ((u32)queen->mCurAnim->mType == 0) {
			if (!queen->mIsRolling) {
				queen->mIsRolling = true;

				queen->startRollingEffect();
				queen->startBossAttackLoopBGM();
			}
		} else if ((u32)queen->mCurAnim->mType == KEYEVENT_END) {
			if (queen->getCurrAnimIndex() == 6) {
				transit(queen, queen->mNextState, (StateArg*)"left");
			} else {
				transit(queen, queen->mNextState, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x80288C74
 * @note Size: 0x4C
 */
void StateRolling::cleanup(EnemyBase* enemy)
{
	Obj* queen = OBJ(enemy);
	queen->setEmotionCaution();
	queen->forceFinishRollingEffect();
	queen->mFlickTimer = 0.0f;
	queen->mPrevHitNum = 0.0f;
	queen->mIsRolling  = false;
}

/**
 * @note Address: 0x80288CC0
 * @note Size: 0x70
 */
void StateBorn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen              = OBJ(enemy);
	queen->mNextState       = QUEEN_NULL;
	queen->mIsAttackLoopBGM = false;
	queen->mWaitTimer       = 0.0f;
	queen->hardConstraintOn();
	queen->mTargetVelocity = Vector3f(0.0f);
	queen->startMotion(QUEENANIM_Born, nullptr);
	queen->setEmotionExcitement();
}

/**
 * @note Address: 0x80288D30
 * @note Size: 0xA8
 */
void StateBorn::exec(EnemyBase* enemy)
{
	Obj* queen = OBJ(enemy);
	if (queen->mCurAnim->mIsPlaying != 0) {
		if ((u32)queen->mCurAnim->mType == KEYEVENT_2) {
			queen->createBabyChappy();
			queen->createBornEffect();
		} else if ((u32)queen->mCurAnim->mType == KEYEVENT_END) {
			if (queen->mHealth <= 0.0f) {
				transit(queen, QUEEN_Dead, nullptr);
			} else {
				transit(queen, QUEEN_Wait, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x80288DD8
 * @note Size: 0x40
 */
void StateBorn::cleanup(EnemyBase* enemy)
{
	Obj* queen = OBJ(enemy);
	queen->hardConstraintOff();
	queen->setEmotionCaution();
	queen->mBirthTimer = 0.0f;
}

} // namespace Queen
} // namespace Game
