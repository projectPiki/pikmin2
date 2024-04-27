#include "Game/Entities/OtakaraBase.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace OtakaraBase {

const char basestatename[] = "246-OtakaraBaseState";

/**
 * @note Address: 0x802B37A8
 * @note Size: 0x4D4
 */
void FSM::init(EnemyBase* enemy)
{
	create(OTA_Count);

	registerState(new StateDead);
	registerState(new StateFlick);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateTurn);
	registerState(new StateTake);

	registerState(new StateItemWait);
	registerState(new StateItemMove);
	registerState(new StateItemTurn);
	registerState(new StateItemFlick);
	registerState(new StateItemDrop);

	registerState(new StateBombWait);
	registerState(new StateBombMove);
	registerState(new StateBombTurn);
}

/**
 * @note Address: 0x802B3C7C
 * @note Size: 0x5C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->startMotion(OTAKARAANIM_Dead, nullptr);
}

/**
 * @note Address: 0x802B3CD8
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x802B3D1C
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase*) { }

/**
 * @note Address: 0x802B3D20
 * @note Size: 0x7C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota              = OBJ(enemy);
	ota->mNextState       = OTA_Null;
	ota->mAttackWaitTimer = 0.0f;
	ota->mEscapeSfxTimer  = 0.0f;
	ota->mTargetVelocity  = Vector3f(0.0f);

	ota->setEmotionExcitement();
	ota->startMotion(OTAKARAANIM_Attack, nullptr);
	ota->mIsAttackCharging = 1;
	ota->startChargeEffect();
}

/**
 * @note Address: 0x802B3DA0
 * @note Size: 0x290
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* ota = OBJ(enemy);
	if (ota->mAttackWaitTimer > CG_PROPERPARMS(ota).mNormalAttack.mValue) {
		ota->finishMotion();
	}
	ota->mAttackWaitTimer += sys->mDeltaTime;

	if (ota->mIsAttackCharging) {
		ota->getJAIObject()->startSound(PSSE_EN_OTAKARA_CHARGE, 0);
	}

	EnemyAnimKeyEvent* event = ota->mCurAnim;
	if (event->mIsPlaying) {
		if ((u32)event->mType == 2) {
			Parms* parms = CG_PARMS(ota);
			EnemyFunc::flickStickPikmin(ota, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			ota->mFlickTimer = 0.0f;

		} else if ((u32)event->mType == 3) {
			ota->mAttackActiveTimer = 0.0f;
			ota->mIsAttackCharging  = 0;
			ota->finishChargeEffect();
			ota->createDisChargeEffect();

		} else if ((u32)event->mType == 1000) {
			if (ota->mHealth <= 0.0f) {
				transit(ota, OTA_Dead, nullptr);
				return;
			}

			if (ota->isMovePositionSet(false)) {
				Vector3f movePos = ota->mMovePosition;
				Vector3f pos     = ota->getPosition();
				f32 angle        = angXZ(movePos.x, movePos.z, pos);
				if (FABS(angDist(angle, ota->getFaceDir())) <= THIRD_PI) {
					transit(ota, OTA_Move, nullptr);
					return;
				}
				transit(ota, OTA_Turn, nullptr);
				return;
			}

			transit(ota, OTA_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802B4038
 * @note Size: 0x24
 */
void StateFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802B405C
 * @note Size: 0x50
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota             = OBJ(enemy);
	ota->mNextState      = OTA_Null;
	ota->mEscapeSfxTimer = 0.0f;
	ota->mTargetVelocity = Vector3f(0.0f);
	ota->mTargetCreature = nullptr;
	ota->startMotion(OTAKARAANIM_Wait, nullptr);
}

/**
 * @note Address: 0x802B40AC
 * @note Size: 0x1CC
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* ota = OBJ(enemy);
	if (ota->isMovePositionSet(false)) {
		Vector3f movePos = ota->mMovePosition;
		Vector3f pos     = ota->getPosition();
		f32 angle        = angXZ(movePos.x, movePos.z, pos);
		if (FABS(angDist(angle, ota->getFaceDir())) <= THIRD_PI) {
			ota->mNextState = OTA_Move;
			ota->finishMotion();
			if (ota->isTakeTreasure()) {
				ota->mNextState      = OTA_Take;
				ota->mTargetVelocity = Vector3f(0.0f);
				ota->finishMotion();
			}
		} else {
			ota->mNextState = OTA_Turn;
			ota->finishMotion();
		}
	}

	if (EnemyFunc::isStartFlick(ota, false)) {
		ota->mNextState = OTA_Flick;
		ota->finishMotion();
	}

	if (ota->mHealth <= 0.0f) {
		ota->mNextState = OTA_Dead;
		ota->finishMotion();
	}

	if (ota->mCurAnim->mIsPlaying && (u32)ota->mCurAnim->mType == KEYEVENT_END) {
		transit(ota, ota->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802B4278
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802B427C
 * @note Size: 0x48
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota        = OBJ(enemy);
	ota->mNextState = OTA_Null;
	ota->setEmotionExcitement();
	ota->startMotion(OTAKARAANIM_Move, nullptr);
}

/**
 * @note Address: 0x802B42C4
 * @note Size: 0x244
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* ota = OBJ(enemy);
	if (ota->isMovePositionSet(false)) {
		Vector3f movePos = Vector3f(ota->mMovePosition);
		Vector3f pos     = ota->getPosition();
		f32 angle        = angXZ(movePos.x, movePos.z, pos);
		if (FABS(angDist(angle, ota->getFaceDir())) <= THIRD_PI) {
			Parms* parms = CG_PARMS(ota);
			EnemyFunc::walkToTarget(ota, movePos, parms->mGeneral.mMoveSpeed.mValue, parms->mGeneral.mTurnSpeed.mValue,
			                        parms->mGeneral.mMaxTurnAngle.mValue);
			if (ota->isTakeTreasure()) {
				ota->mNextState      = OTA_Take;
				ota->mTargetVelocity = Vector3f(0.0f);
				ota->finishMotion();
			}
		} else {
			ota->mNextState      = OTA_Turn;
			ota->mTargetVelocity = Vector3f(0.0f);
			ota->finishMotion();
		}
	} else {
		ota->mNextState      = OTA_Wait;
		ota->mTargetVelocity = Vector3f(0.0f);
		ota->finishMotion();
	}

	if (EnemyFunc::isStartFlick(ota, false)) {
		ota->mNextState      = OTA_Flick;
		ota->mTargetVelocity = Vector3f(0.0f);
		ota->finishMotion();
	}

	if (ota->mHealth <= 0.0f) {
		ota->mNextState      = OTA_Dead;
		ota->mTargetVelocity = Vector3f(0.0f);
		ota->finishMotion();
	}

	ota->startEscapeSE();

	if (ota->mCurAnim->mIsPlaying && (u32)ota->mCurAnim->mType == KEYEVENT_END) {
		transit(ota, ota->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802B4508
 * @note Size: 0x24
 */
void StateMove::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802B452C
 * @note Size: 0x58
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota             = OBJ(enemy);
	ota->mNextState      = OTA_Null;
	ota->mTargetVelocity = Vector3f(0.0f);
	ota->setEmotionExcitement();
	ota->startMotion(OTAKARAANIM_Turn, nullptr);
}

/**
 * @note Address: 0x802B4584
 * @note Size: 0x264
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* ota = OBJ(enemy);
	if (ota->isMovePositionSet(false)) {
		Vector2f XZ;
		XZ.x          = ota->mMovePosition.x;
		XZ.y          = ota->mMovePosition.z;
		f32 angleDist = ota->changeFaceDir(XZ);

		f64 abs = fabs(angleDist);
		if ((f32)(abs) <= THIRD_PI) {
			ota->mNextState = OTA_Move;
			ota->finishMotion();
			if (ota->isTakeTreasure()) {
				ota->mNextState      = OTA_Take;
				ota->mTargetVelocity = Vector3f(0.0f);
				ota->finishMotion();
			}
		}
	} else {
		ota->mNextState = OTA_Wait;
		ota->finishMotion();
	}

	if (EnemyFunc::isStartFlick(ota, false)) {
		ota->mNextState = OTA_Flick;
		ota->finishMotion();
	}

	if (ota->mHealth <= 0.0f) {
		ota->mNextState = OTA_Dead;
		ota->finishMotion();
	}

	ota->startEscapeSE();

	if (ota->mCurAnim->mIsPlaying && (u32)ota->mCurAnim->mType == KEYEVENT_END) {
		transit(ota, ota->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802B47E8
 * @note Size: 0x24
 */
void StateTurn::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802B480C
 * @note Size: 0x50
 */
void StateTake::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota             = OBJ(enemy);
	ota->mNextState      = OTA_Null;
	ota->mEscapeSfxTimer = 0.0f;
	ota->setEmotionExcitement();
	ota->startMotion(OTAKARAANIM_TakeItem, nullptr);
}

/**
 * @note Address: 0x802B485C
 * @note Size: 0x154
 */
void StateTake::exec(EnemyBase* enemy)
{
	Obj* ota         = OBJ(enemy);
	Vector3f movePos = Vector3f(ota->mMovePosition);
	Parms* parms     = CG_PARMS(ota);
	EnemyFunc::walkToTarget(ota, movePos, parms->mGeneral.mMoveSpeed.mValue, parms->mGeneral.mTurnSpeed.mValue,
	                        parms->mGeneral.mMaxTurnAngle.mValue);
	EnemyAnimKeyEvent* event = ota->mCurAnim;
	if (event->mIsPlaying) {
		if ((u32)event->mType == 2) {
			ota->takeTreasure();
		} else if ((u32)event->mType == 1000) {
			if (ota->mTreasure) {
				if (ota->isDropTreasure()) {
					transit(ota, OTA_ItemDrop, nullptr);
				} else if (EnemyFunc::isStartFlick(ota, false)) {
					transit(ota, OTA_ItemFlick, nullptr);
				} else {
					transit(ota, OTA_ItemMove, nullptr);
				}
			} else {
				transit(ota, OTA_ItemDrop, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802B49B0
 * @note Size: 0x24
 */
void StateTake::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802B49D4
 * @note Size: 0x48
 */
void StateItemWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota             = OBJ(enemy);
	ota->mNextState      = OTA_Null;
	ota->mEscapeSfxTimer = 0.0f;
	ota->mTargetVelocity = Vector3f(0.0f);
	ota->startMotion(OTAKARAANIM_ItemWait, nullptr);
}

/**
 * @note Address: 0x802B4A1C
 * @note Size: 0x1D8
 */
void StateItemWait::exec(EnemyBase* enemy)
{
	Obj* ota = OBJ(enemy);
	if (ota->isMovePositionSet(true)) {
		Vector3f movePos = ota->mMovePosition;
		Vector3f pos     = ota->getPosition();
		f32 angle        = angXZ(movePos.x, movePos.z, pos);
		if (FABS(angDist(angle, ota->getFaceDir())) <= THIRD_PI) {
			ota->mNextState = OTA_ItemMove;
			ota->finishMotion();
		} else {
			ota->mNextState = OTA_ItemTurn;
			ota->finishMotion();
		}
	}

	if (EnemyFunc::isStartFlick(ota, false)) {
		ota->mNextState = OTA_ItemFlick;
		ota->finishMotion();
	}
	if (ota->isDropTreasure()) {
		ota->mNextState = OTA_ItemDrop;
		ota->finishMotion();

	} else if (gameSystem != nullptr && gameSystem->isVersusMode()) {
		if (ota->mHealth <= 0.0f) {
			ota->mNextState = OTA_ItemDrop;
			ota->finishMotion();
		}
	}

	if (ota->mCurAnim->mIsPlaying && (u32)ota->mCurAnim->mType == KEYEVENT_END) {
		transit(ota, ota->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802B4BF4
 * @note Size: 0x4
 */
void StateItemWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802B4BF8
 * @note Size: 0x48
 */
void StateItemMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota        = OBJ(enemy);
	ota->mNextState = OTA_Null;
	ota->setEmotionExcitement();
	ota->startMotion(OTAKARAANIM_ItemMove, nullptr);
}

/**
 * @note Address: 0x802B4C40
 * @note Size: 0x260
 */
void StateItemMove::exec(EnemyBase* enemy)
{
	Obj* ota = OBJ(enemy);

	if (ota->isMovePositionSet(true)) {
		Vector3f movePos = Vector3f(ota->mMovePosition);
		Vector3f pos     = ota->getPosition();
		f32 angle        = angXZ(movePos.x, movePos.z, pos);
		if (FABS(angDist(angle, ota->getFaceDir())) <= THIRD_PI) {
			Parms* parms = CG_PARMS(ota);
			EnemyFunc::walkToTarget(ota, movePos, parms->mGeneral.mMoveSpeed.mValue, parms->mGeneral.mTurnSpeed.mValue,
			                        parms->mGeneral.mMaxTurnAngle.mValue);
		} else {
			ota->mNextState      = OTA_ItemTurn;
			ota->mTargetVelocity = Vector3f(0.0f);
			ota->finishMotion();
		}

	} else {
		ota->mNextState      = OTA_ItemWait;
		ota->mTargetVelocity = Vector3f(0.0f);
		ota->finishMotion();
	}

	if (EnemyFunc::isStartFlick(ota, false)) {
		ota->mNextState      = OTA_ItemFlick;
		ota->mTargetVelocity = Vector3f(0.0f);
		ota->finishMotion();
	}

	if (ota->isDropTreasure()) {
		ota->mNextState      = OTA_ItemDrop;
		ota->mTargetVelocity = Vector3f(0.0f);
		ota->finishMotion();

	} else if (gameSystem != nullptr && gameSystem->isVersusMode()) {
		if (ota->mHealth <= 0.0f) {
			ota->mNextState      = OTA_ItemDrop;
			ota->mTargetVelocity = Vector3f(0.0f);
			ota->finishMotion();
		}
	}

	ota->startEscapeSE();

	if (ota->mCurAnim->mIsPlaying && (u32)ota->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, ota->mNextState, nullptr); // dumb that this fixes regswaps, really should be ota
	}
}

/**
 * @note Address: 0x802B4EA0
 * @note Size: 0x24
 */
void StateItemMove::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802B4EC4
 * @note Size: 0x58
 */
void StateItemTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota             = OBJ(enemy);
	ota->mNextState      = OTA_Null;
	ota->mTargetVelocity = Vector3f(0.0f);
	ota->setEmotionExcitement();
	ota->startMotion(OTAKARAANIM_ItemTurn, nullptr);
}

/**
 * @note Address: 0x802B4F1C
 * @note Size: 0x270
 */
void StateItemTurn::exec(EnemyBase* enemy)
{
	Obj* ota = OBJ(enemy);

	if (ota->isMovePositionSet(true)) {
		Vector2f XZ;
		XZ.x          = ota->mMovePosition.x;
		XZ.y          = ota->mMovePosition.z;
		f32 angleDist = ota->changeFaceDir(XZ);

		f64 abs = fabs(angleDist);
		if ((f32)(abs) <= THIRD_PI) {
			ota->mNextState = OTA_ItemMove;
			ota->finishMotion();
		}
	} else {
		ota->mNextState = OTA_ItemWait;
		ota->finishMotion();
	}

	if (EnemyFunc::isStartFlick(ota, false)) {
		ota->mNextState = OTA_ItemFlick;
		ota->finishMotion();
	}

	if (ota->isDropTreasure()) {
		ota->mNextState = OTA_ItemDrop;
		ota->finishMotion();

	} else if (gameSystem != nullptr && gameSystem->isVersusMode()) {
		if (ota->mHealth <= 0.0f) {
			ota->mNextState = OTA_ItemDrop;
			ota->finishMotion();
		}
	}

	ota->startEscapeSE();

	if (ota->mCurAnim->mIsPlaying && (u32)ota->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, ota->mNextState, nullptr); // dumb that this fixes regswaps, really should be ota
	}
}

/**
 * @note Address: 0x802B518C
 * @note Size: 0x24
 */
void StateItemTurn::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802B51B0
 * @note Size: 0x7C
 */
void StateItemFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota              = OBJ(enemy);
	ota->mNextState       = OTA_Null;
	ota->mAttackWaitTimer = 0.0f;
	ota->mEscapeSfxTimer  = 0.0f;
	ota->mTargetVelocity  = Vector3f(0.0f);
	ota->setEmotionExcitement();
	ota->startMotion(OTAKARAANIM_ItemAttack, nullptr);
	ota->mIsAttackCharging = 1;
	ota->startChargeEffect();
}

/**
 * @note Address: 0x802B522C
 * @note Size: 0x254
 */
void StateItemFlick::exec(EnemyBase* enemy)
{
	Obj* ota = OBJ(enemy);
	if (ota->mAttackWaitTimer > CG_PROPERPARMS(ota).mOtakaraAttack.mValue) {
		ota->finishMotion();
	}
	ota->mAttackWaitTimer += sys->mDeltaTime;

	EnemyAnimKeyEvent* event = ota->mCurAnim;
	if (event->mIsPlaying) {
		if ((u32)event->mType == 2) {
			Parms* parms = CG_PARMS(ota);
			EnemyFunc::flickStickPikmin(ota, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			ota->mFlickTimer = 0.0f;

		} else if ((u32)event->mType == 3) {
			ota->mAttackActiveTimer = 0.0f;
			ota->mIsAttackCharging  = 0;
			ota->finishChargeEffect();
			ota->createDisChargeEffect();

		} else if ((u32)event->mType == 1000) {
			if (ota->isDropTreasure()) {
				transit(ota, OTA_ItemDrop, nullptr);
				return;
			}

			if (ota->isMovePositionSet(true)) {
				Vector3f movePos = ota->mMovePosition;
				Vector3f pos     = ota->getPosition();
				f32 angle        = angXZ(movePos.x, movePos.z, pos);
				if (FABS(angDist(angle, ota->getFaceDir())) <= THIRD_PI) {
					transit(ota, OTA_ItemMove, nullptr);
					return;
				}
				transit(ota, OTA_ItemTurn, nullptr);
				return;
			}

			transit(ota, OTA_ItemWait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802B5480
 * @note Size: 0x24
 */
void StateItemFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802B54A4
 * @note Size: 0x5C
 */
void StateItemDrop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota             = OBJ(enemy);
	ota->mNextState      = OTA_Null;
	ota->mEscapeSfxTimer = 0.0f;
	ota->mTargetVelocity = Vector3f(0.0f);
	ota->setEmotionExcitement();
	ota->startMotion(OTAKARAANIM_DropItem, nullptr);
}

/**
 * @note Address: 0x802B5500
 * @note Size: 0x1F8
 */
void StateItemDrop::exec(EnemyBase* enemy)
{
	Obj* ota = OBJ(enemy);

	EnemyAnimKeyEvent* event = ota->mCurAnim;
	if (event->mIsPlaying) {
		if ((u32)event->mType == 2) {
			ota->fallTreasure(true);

		} else if ((u32)event->mType == 1000) {
			if (ota->mHealth <= 0.0f) {
				transit(ota, OTA_Dead, nullptr);
				return;
			} else if (EnemyFunc::isStartFlick(ota, false)) {
				transit(ota, OTA_Flick, nullptr);
				return;
			}

			if (ota->isMovePositionSet(false)) {
				Vector3f movePos = ota->mMovePosition;
				Vector3f pos     = ota->getPosition();
				f32 angle        = angXZ(movePos.x, movePos.z, pos);
				if (FABS(angDist(angle, ota->getFaceDir())) <= THIRD_PI) {
					transit(ota, OTA_Move, nullptr);
					return;
				}
				transit(ota, OTA_Turn, nullptr);
				return;
			}

			transit(ota, OTA_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802B56F8
 * @note Size: 0x2C
 */
void StateItemDrop::cleanup(EnemyBase* enemy)
{
	Obj* ota                   = OBJ(enemy);
	ota->mItemSearchDelayTimer = 0.0f;
	ota->setEmotionCaution();
}

/**
 * @note Address: 0x802B5724
 * @note Size: 0x48
 */
void StateBombWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota                   = OBJ(enemy);
	ota->mNextState            = OTA_Null;
	ota->mItemSearchDelayTimer = 0.0f;
	ota->mTargetVelocity       = Vector3f(0.0f);
	ota->startMotion(OTAKARAANIM_ItemWait, nullptr);
}

/**
 * @note Address: 0x802B576C
 * @note Size: 0x1C0
 */
void StateBombWait::exec(EnemyBase* enemy)
{
	Obj* ota = OBJ(enemy);

	if (ota->mTargetCreature == nullptr) {
		ota->kill(nullptr);
		return;
	}

	if (ota->isTransitChaseState()) {
		ota->finishMotion();
	}

	EnemyAnimKeyEvent* event = ota->mCurAnim;
	if (event->mIsPlaying && ((u32)event->mType == 1000)) {
		Creature* creature = ota->getChaseTargetCreature();
		if (creature) {
			Vector3f creaturePos = creature->getPosition();
			Vector3f pos         = ota->getPosition();
			f32 angle            = angXZ(creaturePos.x, creaturePos.z, pos);
			if (FABS(angDist(angle, ota->getFaceDir())) <= THIRD_PI) {
				transit(ota, OTA_BombMove, nullptr);
				return;
			}
			transit(ota, OTA_BombTurn, nullptr);
			return;
		}
		transit(ota, OTA_BombWait, nullptr);
	}
}

/**
 * @note Address: 0x802B592C
 * @note Size: 0x4
 */
void StateBombWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802B5930
 * @note Size: 0x48
 */
void StateBombMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota        = OBJ(enemy);
	ota->mNextState = OTA_Null;
	ota->setEmotionExcitement();
	ota->startMotion(OTAKARAANIM_ItemMove, nullptr);
}

/**
 * @note Address: 0x802B5978
 * @note Size: 0x1E8
 */
void StateBombMove::exec(EnemyBase* enemy)
{
	Obj* ota = OBJ(enemy);

	if (ota->mTargetCreature == nullptr) {
		ota->kill(nullptr);
		return;
	}

	ota->stimulateBomb();

	Creature* creature = ota->getChaseTargetCreature();
	if (creature) {
		Vector3f creaturePos = creature->getPosition();
		Vector3f pos         = ota->getPosition();
		f32 angle            = angXZ(creaturePos.x, creaturePos.z, pos);
		if (FABS(angDist(angle, ota->getFaceDir())) <= THIRD_PI) {
			Parms* parms = CG_PARMS(ota);
			EnemyFunc::walkToTarget(ota, creaturePos, parms->mGeneral.mMoveSpeed.mValue, parms->mGeneral.mTurnSpeed.mValue,
			                        parms->mGeneral.mMaxTurnAngle.mValue);
		} else {
			ota->mNextState      = OTA_BombTurn;
			ota->mTargetVelocity = Vector3f(0.0f);
			ota->finishMotion();
		}
	} else {
		ota->mNextState      = OTA_BombWait;
		ota->mTargetVelocity = Vector3f(0.0f);
		ota->finishMotion();
	}

	ota->startEscapeSE();

	if (ota->mCurAnim->mIsPlaying && ((u32)ota->mCurAnim->mType == KEYEVENT_END)) {
		transit(ota, ota->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802B5B60
 * @note Size: 0x24
 */
void StateBombMove::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802B5B84
 * @note Size: 0x58
 */
void StateBombTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota             = OBJ(enemy);
	ota->mNextState      = OTA_Null;
	ota->mTargetVelocity = Vector3f(0.0f);
	ota->setEmotionExcitement();
	ota->startMotion(OTAKARAANIM_ItemTurn, nullptr);
}

/**
 * @note Address: 0x802B5BDC
 * @note Size: 0x224
 */
void StateBombTurn::exec(EnemyBase* enemy)
{
	Obj* ota = OBJ(enemy);

	if (ota->mTargetCreature == nullptr) {
		ota->kill(nullptr);
		return;
	}

	ota->stimulateBomb();

	Creature* creature = ota->getChaseTargetCreature();
	if (creature) {
		Vector3f creaturePos = creature->getPosition();
		Vector2f XZ;
		XZ.x          = creaturePos.x;
		XZ.y          = creaturePos.z;
		f32 angleDist = ota->changeFaceDir(XZ);

		f64 abs = fabs(angleDist);
		if ((f32)(abs) <= THIRD_PI) {
			ota->mNextState = OTA_BombMove;
			ota->finishMotion();
		}
	} else {
		ota->mNextState = OTA_BombWait;
		ota->finishMotion();
	}

	ota->startEscapeSE();

	if (ota->mCurAnim->mIsPlaying && ((u32)ota->mCurAnim->mType == KEYEVENT_END)) {
		transit(ota, ota->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802B5E00
 * @note Size: 0x24
 */
void StateBombTurn::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }
} // namespace OtakaraBase
} // namespace Game
