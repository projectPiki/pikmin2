#include "Game/Entities/OtakaraBase.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace OtakaraBase {

const char basestatename[] = "246-OtakaraBaseState";

/*
 * --INFO--
 * Address:	802B37A8
 * Size:	0004D4
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

/*
 * --INFO--
 * Address:	802B3C7C
 * Size:	00005C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->m_simVelocity = Vector3f(0.0f);
	enemy->deathProcedure();
	enemy->resetEvent(0, EB_Cullable);
	enemy->startMotion(10, nullptr);
}

/*
 * --INFO--
 * Address:	802B3CD8
 * Size:	000044
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->m_curAnim->m_isRunning && (u32)enemy->m_curAnim->m_type == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802B3D1C
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase*) { }

/*
 * --INFO--
 * Address:	802B3D20
 * Size:	00007C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota              = static_cast<Obj*>(enemy);
	ota->m_nextState      = OTA_Null;
	ota->_2C4             = 0.0f;
	ota->m_escapeSfxTimer = 0.0f;
	ota->m_simVelocity    = Vector3f(0.0f);

	ota->setEmotionExcitement();
	ota->startMotion(3, nullptr);
	ota->_2D0 = 1;
	ota->startChargeEffect();
}

/*
 * --INFO--
 * Address:	802B3DA0
 * Size:	000290
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* ota = static_cast<Obj*>(enemy);
	if (ota->_2C4 > static_cast<Parms*>(ota->m_parms)->m_properParms.m_fp10.m_value) {
		ota->finishMotion();
	}
	ota->_2C4 += sys->m_deltaTime;

	if (ota->_2D0) {
		ota->getJAIObject()->startSound(PSSE_EN_OTAKARA_CHARGE, 0);
	}

	EnemyAnimKeyEvent* event = ota->m_curAnim;
	if (event->m_isRunning) {
		if ((u32)event->m_type == 2) {
			Parms* parms = static_cast<Parms*>(ota->m_parms);
			EnemyFunc::flickStickPikmin(ota, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
			ota->m_toFlick = 0.0f;

		} else if ((u32)event->m_type == 3) {
			ota->_2C8 = 0.0f;
			ota->_2D0 = 0;
			ota->finishChargeEffect();
			ota->createDisChargeEffect();

		} else if ((u32)event->m_type == 1000) {
			if (ota->m_health <= 0.0f) {
				transit(ota, OTA_Dead, nullptr);
				return;
			}

			if (ota->isMovePositionSet(false)) {
				Vector3f movePos = ota->m_movePosition;
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

/*
 * --INFO--
 * Address:	802B4038
 * Size:	000024
 */
void StateFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802B405C
 * Size:	000050
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota              = static_cast<Obj*>(enemy);
	ota->m_nextState      = OTA_Null;
	ota->m_escapeSfxTimer = 0.0f;
	ota->m_simVelocity    = Vector3f(0.0f);
	ota->m_targetCreature = nullptr;
	ota->startMotion(0, nullptr);
}

/*
 * --INFO--
 * Address:	802B40AC
 * Size:	0001CC
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* ota = static_cast<Obj*>(enemy);
	if (ota->isMovePositionSet(false)) {
		Vector3f movePos = ota->m_movePosition;
		Vector3f pos     = ota->getPosition();
		f32 angle        = angXZ(movePos.x, movePos.z, pos);
		if (FABS(angDist(angle, ota->getFaceDir())) <= THIRD_PI) {
			ota->m_nextState = OTA_Move;
			ota->finishMotion();
			if (ota->isTakeTreasure()) {
				ota->m_nextState   = OTA_Take;
				ota->m_simVelocity = Vector3f(0.0f);
				ota->finishMotion();
			}
		} else {
			ota->m_nextState = OTA_Turn;
			ota->finishMotion();
		}
	}

	if (EnemyFunc::isStartFlick(ota, false)) {
		ota->m_nextState = OTA_Flick;
		ota->finishMotion();
	}

	if (ota->m_health <= 0.0f) {
		ota->m_nextState = OTA_Dead;
		ota->finishMotion();
	}

	if (ota->m_curAnim->m_isRunning && (u32)ota->m_curAnim->m_type == KEYEVENT_END) {
		transit(ota, ota->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802B4278
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802B427C
 * Size:	000048
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota         = static_cast<Obj*>(enemy);
	ota->m_nextState = OTA_Null;
	ota->setEmotionExcitement();
	ota->startMotion(1, nullptr);
}

/*
 * --INFO--
 * Address:	802B42C4
 * Size:	000244
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* ota = static_cast<Obj*>(enemy);
	if (ota->isMovePositionSet(false)) {
		Vector3f movePos = Vector3f(ota->m_movePosition);
		Vector3f pos     = ota->getPosition();
		f32 angle        = angXZ(movePos.x, movePos.z, pos);
		if (FABS(angDist(angle, ota->getFaceDir())) <= THIRD_PI) {
			Parms* parms = static_cast<Parms*>(ota->m_parms);
			EnemyFunc::walkToTarget(ota, movePos, parms->m_general.m_moveSpeed.m_value, parms->m_general.m_rotationalAccel.m_value,
			                        parms->m_general.m_rotationalSpeed.m_value);
			if (ota->isTakeTreasure()) {
				ota->m_nextState   = OTA_Take;
				ota->m_simVelocity = Vector3f(0.0f);
				ota->finishMotion();
			}
		} else {
			ota->m_nextState   = OTA_Turn;
			ota->m_simVelocity = Vector3f(0.0f);
			ota->finishMotion();
		}
	} else {
		ota->m_nextState   = OTA_Wait;
		ota->m_simVelocity = Vector3f(0.0f);
		ota->finishMotion();
	}

	if (EnemyFunc::isStartFlick(ota, false)) {
		ota->m_nextState   = OTA_Flick;
		ota->m_simVelocity = Vector3f(0.0f);
		ota->finishMotion();
	}

	if (ota->m_health <= 0.0f) {
		ota->m_nextState   = OTA_Dead;
		ota->m_simVelocity = Vector3f(0.0f);
		ota->finishMotion();
	}

	ota->startEscapeSE();

	if (ota->m_curAnim->m_isRunning && (u32)ota->m_curAnim->m_type == KEYEVENT_END) {
		transit(ota, ota->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802B4508
 * Size:	000024
 */
void StateMove::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802B452C
 * Size:	000058
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota           = static_cast<Obj*>(enemy);
	ota->m_nextState   = OTA_Null;
	ota->m_simVelocity = Vector3f(0.0f);
	ota->setEmotionExcitement();
	ota->startMotion(2, nullptr);
}

/*
 * --INFO--
 * Address:	802B4584
 * Size:	000264
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* ota = static_cast<Obj*>(enemy);
	if (ota->isMovePositionSet(false)) {
		Vector2f XZ;
		XZ.x          = ota->m_movePosition.x;
		XZ.y          = ota->m_movePosition.z;
		f32 angleDist = ota->changeFaceDir(XZ);

		f64 abs = fabs(angleDist);
		if ((f32)(abs) <= THIRD_PI) {
			ota->m_nextState = OTA_Move;
			ota->finishMotion();
			if (ota->isTakeTreasure()) {
				ota->m_nextState   = OTA_Take;
				ota->m_simVelocity = Vector3f(0.0f);
				ota->finishMotion();
			}
		}
	} else {
		ota->m_nextState = OTA_Wait;
		ota->finishMotion();
	}

	if (EnemyFunc::isStartFlick(ota, false)) {
		ota->m_nextState = OTA_Flick;
		ota->finishMotion();
	}

	if (ota->m_health <= 0.0f) {
		ota->m_nextState = OTA_Dead;
		ota->finishMotion();
	}

	ota->startEscapeSE();

	if (ota->m_curAnim->m_isRunning && (u32)ota->m_curAnim->m_type == KEYEVENT_END) {
		transit(ota, ota->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802B47E8
 * Size:	000024
 */
void StateTurn::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802B480C
 * Size:	000050
 */
void StateTake::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota              = static_cast<Obj*>(enemy);
	ota->m_nextState      = OTA_Null;
	ota->m_escapeSfxTimer = 0.0f;
	ota->setEmotionExcitement();
	ota->startMotion(4, nullptr);
}

/*
 * --INFO--
 * Address:	802B485C
 * Size:	000154
 */
void StateTake::exec(EnemyBase* enemy)
{
	Obj* ota         = static_cast<Obj*>(enemy);
	Vector3f movePos = Vector3f(ota->m_movePosition);
	Parms* parms     = static_cast<Parms*>(ota->m_parms);
	EnemyFunc::walkToTarget(ota, movePos, parms->m_general.m_moveSpeed.m_value, parms->m_general.m_rotationalAccel.m_value,
	                        parms->m_general.m_rotationalSpeed.m_value);
	EnemyAnimKeyEvent* event = ota->m_curAnim;
	if (event->m_isRunning) {
		if ((u32)event->m_type == 2) {
			ota->takeTreasure();
		} else if ((u32)event->m_type == 1000) {
			if (ota->m_treasure) {
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

/*
 * --INFO--
 * Address:	802B49B0
 * Size:	000024
 */
void StateTake::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802B49D4
 * Size:	000048
 */
void StateItemWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota              = static_cast<Obj*>(enemy);
	ota->m_nextState      = OTA_Null;
	ota->m_escapeSfxTimer = 0.0f;
	ota->m_simVelocity    = Vector3f(0.0f);
	ota->startMotion(5, nullptr);
}

/*
 * --INFO--
 * Address:	802B4A1C
 * Size:	0001D8
 */
void StateItemWait::exec(EnemyBase* enemy)
{
	Obj* ota = static_cast<Obj*>(enemy);
	if (ota->isMovePositionSet(true)) {
		Vector3f movePos = ota->m_movePosition;
		Vector3f pos     = ota->getPosition();
		f32 angle        = angXZ(movePos.x, movePos.z, pos);
		if (FABS(angDist(angle, ota->getFaceDir())) <= THIRD_PI) {
			ota->m_nextState = OTA_ItemMove;
			ota->finishMotion();
		} else {
			ota->m_nextState = OTA_ItemTurn;
			ota->finishMotion();
		}
	}

	if (EnemyFunc::isStartFlick(ota, false)) {
		ota->m_nextState = OTA_ItemFlick;
		ota->finishMotion();
	}
	if (ota->isDropTreasure()) {
		ota->m_nextState = OTA_ItemDrop;
		ota->finishMotion();

	} else if (gameSystem != nullptr && gameSystem->m_mode == GSM_VERSUS_MODE) {
		if (ota->m_health <= 0.0f) {
			ota->m_nextState = OTA_ItemDrop;
			ota->finishMotion();
		}
	}

	if (ota->m_curAnim->m_isRunning && (u32)ota->m_curAnim->m_type == KEYEVENT_END) {
		transit(ota, ota->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802B4BF4
 * Size:	000004
 */
void StateItemWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802B4BF8
 * Size:	000048
 */
void StateItemMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota         = static_cast<Obj*>(enemy);
	ota->m_nextState = OTA_Null;
	ota->setEmotionExcitement();
	ota->startMotion(6, nullptr);
}

/*
 * --INFO--
 * Address:	802B4C40
 * Size:	000260
 */
void StateItemMove::exec(EnemyBase* enemy)
{
	Obj* ota = static_cast<Obj*>(enemy);

	if (ota->isMovePositionSet(true)) {
		Vector3f movePos = Vector3f(ota->m_movePosition);
		Vector3f pos     = ota->getPosition();
		f32 angle        = angXZ(movePos.x, movePos.z, pos);
		if (FABS(angDist(angle, ota->getFaceDir())) <= THIRD_PI) {
			Parms* parms = static_cast<Parms*>(ota->m_parms);
			EnemyFunc::walkToTarget(ota, movePos, parms->m_general.m_moveSpeed.m_value, parms->m_general.m_rotationalAccel.m_value,
			                        parms->m_general.m_rotationalSpeed.m_value);
		} else {
			ota->m_nextState   = OTA_ItemTurn;
			ota->m_simVelocity = Vector3f(0.0f);
			ota->finishMotion();
		}

	} else {
		ota->m_nextState   = OTA_ItemWait;
		ota->m_simVelocity = Vector3f(0.0f);
		ota->finishMotion();
	}

	if (EnemyFunc::isStartFlick(ota, false)) {
		ota->m_nextState   = OTA_ItemFlick;
		ota->m_simVelocity = Vector3f(0.0f);
		ota->finishMotion();
	}

	if (ota->isDropTreasure()) {
		ota->m_nextState   = OTA_ItemDrop;
		ota->m_simVelocity = Vector3f(0.0f);
		ota->finishMotion();

	} else if (gameSystem != nullptr && gameSystem->m_mode == GSM_VERSUS_MODE) {
		if (ota->m_health <= 0.0f) {
			ota->m_nextState   = OTA_ItemDrop;
			ota->m_simVelocity = Vector3f(0.0f);
			ota->finishMotion();
		}
	}

	ota->startEscapeSE();

	if (ota->m_curAnim->m_isRunning && (u32)ota->m_curAnim->m_type == KEYEVENT_END) {
		transit(enemy, ota->m_nextState, nullptr); // dumb that this fixes regswaps, really should be ota
	}
}

/*
 * --INFO--
 * Address:	802B4EA0
 * Size:	000024
 */
void StateItemMove::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802B4EC4
 * Size:	000058
 */
void StateItemTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota           = static_cast<Obj*>(enemy);
	ota->m_nextState   = OTA_Null;
	ota->m_simVelocity = Vector3f(0.0f);
	ota->setEmotionExcitement();
	ota->startMotion(7, nullptr);
}

/*
 * --INFO--
 * Address:	802B4F1C
 * Size:	000270
 */
void StateItemTurn::exec(EnemyBase* enemy)
{
	Obj* ota = static_cast<Obj*>(enemy);

	if (ota->isMovePositionSet(true)) {
		Vector2f XZ;
		XZ.x          = ota->m_movePosition.x;
		XZ.y          = ota->m_movePosition.z;
		f32 angleDist = ota->changeFaceDir(XZ);

		f64 abs = fabs(angleDist);
		if ((f32)(abs) <= THIRD_PI) {
			ota->m_nextState = OTA_ItemMove;
			ota->finishMotion();
		}
	} else {
		ota->m_nextState = OTA_ItemWait;
		ota->finishMotion();
	}

	if (EnemyFunc::isStartFlick(ota, false)) {
		ota->m_nextState = OTA_ItemFlick;
		ota->finishMotion();
	}

	if (ota->isDropTreasure()) {
		ota->m_nextState = OTA_ItemDrop;
		ota->finishMotion();

	} else if (gameSystem != nullptr && gameSystem->m_mode == GSM_VERSUS_MODE) {
		if (ota->m_health <= 0.0f) {
			ota->m_nextState = OTA_ItemDrop;
			ota->finishMotion();
		}
	}

	ota->startEscapeSE();

	if (ota->m_curAnim->m_isRunning && (u32)ota->m_curAnim->m_type == KEYEVENT_END) {
		transit(enemy, ota->m_nextState, nullptr); // dumb that this fixes regswaps, really should be ota
	}
}

/*
 * --INFO--
 * Address:	802B518C
 * Size:	000024
 */
void StateItemTurn::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802B51B0
 * Size:	00007C
 */
void StateItemFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota              = static_cast<Obj*>(enemy);
	ota->m_nextState      = OTA_Null;
	ota->_2C4             = 0.0f;
	ota->m_escapeSfxTimer = 0.0f;
	ota->m_simVelocity    = Vector3f(0.0f);
	ota->setEmotionExcitement();
	ota->startMotion(8, nullptr);
	ota->_2D0 = 1;
	ota->startChargeEffect();
}

/*
 * --INFO--
 * Address:	802B522C
 * Size:	000254
 */
void StateItemFlick::exec(EnemyBase* enemy)
{
	Obj* ota = static_cast<Obj*>(enemy);
	if (ota->_2C4 > static_cast<Parms*>(ota->m_parms)->m_properParms.m_fp11.m_value) {
		ota->finishMotion();
	}
	ota->_2C4 += sys->m_deltaTime;

	EnemyAnimKeyEvent* event = ota->m_curAnim;
	if (event->m_isRunning) {
		if ((u32)event->m_type == 2) {
			Parms* parms = static_cast<Parms*>(ota->m_parms);
			EnemyFunc::flickStickPikmin(ota, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
			ota->m_toFlick = 0.0f;

		} else if ((u32)event->m_type == 3) {
			ota->_2C8 = 0.0f;
			ota->_2D0 = 0;
			ota->finishChargeEffect();
			ota->createDisChargeEffect();

		} else if ((u32)event->m_type == 1000) {
			if (ota->isDropTreasure()) {
				transit(ota, OTA_ItemDrop, nullptr);
				return;
			}

			if (ota->isMovePositionSet(true)) {
				Vector3f movePos = ota->m_movePosition;
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

/*
 * --INFO--
 * Address:	802B5480
 * Size:	000024
 */
void StateItemFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802B54A4
 * Size:	00005C
 */
void StateItemDrop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota              = static_cast<Obj*>(enemy);
	ota->m_nextState      = OTA_Null;
	ota->m_escapeSfxTimer = 0.0f;
	ota->m_simVelocity    = Vector3f(0.0f);
	ota->setEmotionExcitement();
	ota->startMotion(9, nullptr);
}

/*
 * --INFO--
 * Address:	802B5500
 * Size:	0001F8
 */
void StateItemDrop::exec(EnemyBase* enemy)
{
	Obj* ota = static_cast<Obj*>(enemy);

	EnemyAnimKeyEvent* event = ota->m_curAnim;
	if (event->m_isRunning) {
		if ((u32)event->m_type == 2) {
			ota->fallTreasure(true);

		} else if ((u32)event->m_type == 1000) {
			if (ota->m_health <= 0.0f) {
				transit(ota, OTA_Dead, nullptr);
				return;
			} else if (EnemyFunc::isStartFlick(ota, false)) {
				transit(ota, OTA_Flick, nullptr);
				return;
			}

			if (ota->isMovePositionSet(false)) {
				Vector3f movePos = ota->m_movePosition;
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

/*
 * --INFO--
 * Address:	802B56F8
 * Size:	00002C
 */
void StateItemDrop::cleanup(EnemyBase* enemy)
{
	Obj* ota  = static_cast<Obj*>(enemy);
	ota->_2E8 = 0.0f;
	ota->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	802B5724
 * Size:	000048
 */
void StateBombWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota           = static_cast<Obj*>(enemy);
	ota->m_nextState   = OTA_Null;
	ota->_2E8          = 0.0f;
	ota->m_simVelocity = Vector3f(0.0f);
	ota->startMotion(5, nullptr);
}

/*
 * --INFO--
 * Address:	802B576C
 * Size:	0001C0
 */
void StateBombWait::exec(EnemyBase* enemy)
{
	Obj* ota = static_cast<Obj*>(enemy);

	if (ota->m_targetCreature == nullptr) {
		ota->kill(nullptr);
		return;
	}

	if (ota->isTransitChaseState()) {
		ota->finishMotion();
	}

	EnemyAnimKeyEvent* event = ota->m_curAnim;
	if (event->m_isRunning && ((u32)event->m_type == 1000)) {
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

/*
 * --INFO--
 * Address:	802B592C
 * Size:	000004
 */
void StateBombWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802B5930
 * Size:	000048
 */
void StateBombMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota         = static_cast<Obj*>(enemy);
	ota->m_nextState = OTA_Null;
	ota->setEmotionExcitement();
	ota->startMotion(6, nullptr);
}

/*
 * --INFO--
 * Address:	802B5978
 * Size:	0001E8
 */
void StateBombMove::exec(EnemyBase* enemy)
{
	Obj* ota = static_cast<Obj*>(enemy);

	if (ota->m_targetCreature == nullptr) {
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
			Parms* parms = static_cast<Parms*>(ota->m_parms);
			EnemyFunc::walkToTarget(ota, creaturePos, parms->m_general.m_moveSpeed.m_value, parms->m_general.m_rotationalAccel.m_value,
			                        parms->m_general.m_rotationalSpeed.m_value);
		} else {
			ota->m_nextState   = OTA_BombTurn;
			ota->m_simVelocity = Vector3f(0.0f);
			ota->finishMotion();
		}
	} else {
		ota->m_nextState   = OTA_BombWait;
		ota->m_simVelocity = Vector3f(0.0f);
		ota->finishMotion();
	}

	ota->startEscapeSE();

	if (ota->m_curAnim->m_isRunning && ((u32)ota->m_curAnim->m_type == KEYEVENT_END)) {
		transit(ota, ota->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802B5B60
 * Size:	000024
 */
void StateBombMove::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802B5B84
 * Size:	000058
 */
void StateBombTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* ota           = static_cast<Obj*>(enemy);
	ota->m_nextState   = OTA_Null;
	ota->m_simVelocity = Vector3f(0.0f);
	ota->setEmotionExcitement();
	ota->startMotion(7, nullptr);
}

/*
 * --INFO--
 * Address:	802B5BDC
 * Size:	000224
 */
void StateBombTurn::exec(EnemyBase* enemy)
{
	Obj* ota = static_cast<Obj*>(enemy);

	if (ota->m_targetCreature == nullptr) {
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
			ota->m_nextState = OTA_BombMove;
			ota->finishMotion();
		}
	} else {
		ota->m_nextState = OTA_BombWait;
		ota->finishMotion();
	}

	ota->startEscapeSE();

	if (ota->m_curAnim->m_isRunning && ((u32)ota->m_curAnim->m_type == KEYEVENT_END)) {
		transit(ota, ota->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802B5E00
 * Size:	000024
 */
void StateBombTurn::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }
} // namespace OtakaraBase
} // namespace Game
