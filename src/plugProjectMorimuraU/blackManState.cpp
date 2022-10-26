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

/*
 * --INFO--
 * Address:	803A3AF0
 * Size:	000174
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

/*
 * --INFO--
 * Address:	803A3C64
 * Size:	00003C
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	m_name = "walk";
}

/*
 * --INFO--
 * Address:	803A3CA0
 * Size:	000080
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wraith = static_cast<Obj*>(enemy);
	bool check;
	if (wraith->m_tyre == nullptr || wraith->_2E0 == 2) {
		check = false;
	} else {
		check = true;
	}

	if (check) {
		wraith->startMotion(6, nullptr);
	} else {
		wraith->startMotion(8, nullptr);
	}

	wraith->createTraceEffect();
}

/*
 * --INFO--
 * Address:	803A3D20
 * Size:	0001D4
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* wraith = static_cast<Obj*>(enemy);
	wraith->walkFunc();
	if (wraith->m_health <= 0.0f) {
		transit(wraith, WRAITH_Dead, nullptr);
		return;
	}

	if (wraith->isTyreDead()) {
		transit(wraith, WRAITH_Escape, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(wraith, false)) {
		wraith->_2DC = 0;
		transit(wraith, WRAITH_Flick, nullptr);
		return;
	}

	if (wraith->isReachToGoal(wraith->getParms()->_A1C)) {
		wraith->findNextRoutePoint();
		return;
	}

	if (wraith->m_curAnim->m_isRunning) {
		switch (wraith->m_curAnim->m_type) {
		case KEYEVENT_2:
		case KEYEVENT_3:
			Vector3f position = wraith->getPosition();
			if (wraith->getCurrAnimIndex() == 11) {
				cameraMgr->startVibration(3, position, 2);
				rumbleMgr->startRumble(8, position, 2);
			}

			if (wraith->getCurrAnimIndex() == 8) {
				cameraMgr->startVibration(6, position, 2);
				rumbleMgr->startRumble(8, position, 2);
			}
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	803A3EF4
 * Size:	000024
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	Obj* wraith = static_cast<Obj*>(enemy);
	wraith->fadeTraceEffect();
}

/*
 * --INFO--
 * Address:	803A3F18
 * Size:	00003C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	m_name = "dead";
}

/*
 * --INFO--
 * Address:	803A3F54
 * Size:	000064
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->m_impVelocity = Vector3f(0.0f);
	enemy->m_simVelocity = Vector3f(0.0f);
	enemy->startMotion(2, nullptr);

	Obj* wraith = static_cast<Obj*>(enemy);
	wraith->deadTraceEffect();
	wraith->deathProcedure();
}

/*
 * --INFO--
 * Address:	803A3FB8
 * Size:	0000FC
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* wraith = static_cast<Obj*>(enemy);
	if (wraith->m_curAnim->m_isRunning) {
		Vector3f position = wraith->getPosition();
		switch (wraith->m_curAnim->m_type) {
		case KEYEVENT_2:
		case KEYEVENT_3:
		case KEYEVENT_4:
			cameraMgr->startVibration(12, position, 2);
			rumbleMgr->startRumble(14, position, 2);
			break;
		case KEYEVENT_5:
			wraith->deadEffect();
			break;
		case KEYEVENT_END:
			cameraMgr->startVibration(17, position, 2);
			rumbleMgr->startRumble(15, position, 2);
			wraith->kill(nullptr);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	803A40B4
 * Size:	00003C
 */
StateFreeze::StateFreeze(int stateID)
    : State(stateID)
{
	m_name = "freeze";
}

/*
 * --INFO--
 * Address:	803A40F0
 * Size:	000090
 */
void StateFreeze::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wraith = static_cast<Obj*>(enemy);
	wraith->collisionStOn();

	bool check = false;
	if (enemy->getCurrAnimIndex() == 4) {
		check = true;
	}
	enemy->startMotion(1, nullptr);
	if (check) {
		enemy->setMotionFrame(3.0f);
	}

	enemy->m_impVelocity = Vector3f(0.0f);
	enemy->m_simVelocity = Vector3f(0.0f);
}

/*
 * --INFO--
 * Address:	803A4180
 * Size:	0002F4
 */
void StateFreeze::exec(EnemyBase* enemy)
{
	Obj* wraith = static_cast<Obj*>(enemy);
	wraith->_2CC++;
	if (wraith->m_health <= 0.0f) {
		transit(wraith, WRAITH_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(wraith, false)) {
		wraith->_2DC = 2;
		transit(wraith, WRAITH_Flick, nullptr);
		return;
	}

	if (wraith->m_curAnim->m_isRunning) {
		if ((u32)wraith->m_curAnim->m_type == KEYEVENT_2) {
			Vector3f position = wraith->getPosition();
			cameraMgr->startVibration(12, position, 2);
			rumbleMgr->startRumble(14, position, 2);

			f32 faceDir = wraith->getFaceDir();
			position.x += 32.0f * pikmin2_sinf(faceDir) - 4.0f * pikmin2_cosf(faceDir);
			position.z += 32.0f * pikmin2_cosf(faceDir) - 4.0f * pikmin2_sinf(faceDir);
			wraith->createBounceEffect(position, 0.42f);

		} else if ((u32)wraith->m_curAnim->m_type == KEYEVENT_END) {
			transit(wraith, WRAITH_Walk, nullptr);
			wraith->collisionStOff();
		}
	} else if (wraith->_2CC > wraith->getParms()->m_properParms.m_ip04.m_value) {
		wraith->finishMotion();
	}
}

/*
 * --INFO--
 * Address:	803A4474
 * Size:	000024
 */
void StateFreeze::cleanup(EnemyBase* enemy)
{
	Obj* wraith = static_cast<Obj*>(enemy);
	wraith->collisionStOff();
}

/*
 * --INFO--
 * Address:	803A4498
 * Size:	00003C
 */
StateBend::StateBend(int stateID)
    : State(stateID)
{
	m_name = "bend";
}

/*
 * --INFO--
 * Address:	803A44D4
 * Size:	000074
 */
void StateBend::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wraith = static_cast<Obj*>(enemy);
	wraith->collisionStOn();

	bool check = false;
	if (enemy->getCurrAnimIndex() == 3) {
		check = true;
	}

	enemy->startMotion(0, nullptr);

	if (check) {
		enemy->setMotionFrame(5.0f);
	}
}

/*
 * --INFO--
 * Address:	803A4548
 * Size:	0001E8
 */
void StateBend::exec(EnemyBase* enemy)
{
	Obj* wraith = static_cast<Obj*>(enemy);
	if (wraith->m_health <= 0.0f) {
		transit(wraith, WRAITH_Dead, nullptr);
		return;
	}

	if (wraith->isTyreDead()) {
		transit(wraith, WRAITH_Escape, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(wraith, false)) {
		wraith->_2DC = 3;
		transit(wraith, WRAITH_Flick, nullptr);
		return;
	}

	if (wraith->m_curAnim->m_isRunning) {
		if ((u32)wraith->m_curAnim->m_type == KEYEVENT_2) {
			wraith->bendEffect();
			Vector3f position = wraith->getPosition();
			cameraMgr->startVibration(12, position, 2);
			rumbleMgr->startRumble(14, position, 2);

		} else if ((u32)wraith->m_curAnim->m_type == KEYEVENT_END) {
			wraith->collisionStOff();
			if (wraith->isTyreDead()) {
				transit(wraith, WRAITH_Escape, nullptr);

			} else {
				transit(wraith, WRAITH_Recover, nullptr);
			}
		}
	} else {
		wraith->_2CC++;
		if (wraith->_2CC > wraith->getParms()->m_properParms.m_ip03.m_value) {
			wraith->finishMotion();
		}
	}
}

/*
 * --INFO--
 * Address:	803A4730
 * Size:	000024
 */
void StateBend::cleanup(EnemyBase* enemy)
{
	Obj* wraith = static_cast<Obj*>(enemy);
	wraith->collisionStOff();
}

/*
 * --INFO--
 * Address:	803A4754
 * Size:	00003C
 */
StateEscape::StateEscape(int stateID)
    : State(stateID)
{
	m_name = "escape";
}

/*
 * --INFO--
 * Address:	803A4790
 * Size:	0000B0
 */
void StateEscape::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(5, nullptr);

	Obj* wraith = static_cast<Obj*>(enemy);
	wraith->escape();
	wraith->collisionStOff();

	PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(wraith->m_soundObj);
	PSM::checkMidBoss(soundObj);
	if (soundObj != nullptr && soundObj->m_appearFlag) {
		soundObj->jumpRequest(11);
	}
}

/*
 * --INFO--
 * Address:	803A4840
 * Size:	0002B4
 */
void StateEscape::exec(EnemyBase* enemy)
{
	Obj* wraith = static_cast<Obj*>(enemy);
	Vector3f position;
	if (wraith->m_curAnim->m_isRunning) {
		switch (wraith->m_curAnim->m_type) {
		case KEYEVENT_2:
			wraith->flick();
			break;

		case KEYEVENT_3:
		case KEYEVENT_4:
			position = wraith->getPosition();
			cameraMgr->startVibration(17, position, 2);
			rumbleMgr->startRumble(16, position, 2);

			f32 faceDir = wraith->getFaceDir();
			position.x += -22.0f * pikmin2_sinf(faceDir) - 30.0f * pikmin2_cosf(faceDir);
			position.z += -22.0f * pikmin2_cosf(faceDir) - 30.0f * pikmin2_sinf(faceDir);
			wraith->createBounceEffect(position, 0.85f);
			break;

		case KEYEVENT_5:
			position = wraith->getPosition();
			cameraMgr->startVibration(17, position, 2);
			rumbleMgr->startRumble(16, position, 2);
			break;

		case KEYEVENT_END:
			transit(wraith, WRAITH_Walk, nullptr);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	803A4AF4
 * Size:	00003C
 */
StateFall::StateFall(int stateID)
    : State(stateID)
{
	m_name = "fall";
}

/*
 * --INFO--
 * Address:	803A4B30
 * Size:	00004C
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(13, nullptr);
	enemy->hardConstraintOn();
	enemy->setEvent(0, EB_22);
}

/*
 * --INFO--
 * Address:	803A4B7C
 * Size:	000178
 */
void StateFall::exec(EnemyBase* enemy)
{
	if (enemy->m_curAnim->m_isRunning) {
		if ((u32)enemy->m_curAnim->m_type == KEYEVENT_2) {
			static_cast<Obj*>(enemy)->appearFanfare();
			Vector3f position = enemy->getPosition();
			cameraMgr->startVibration(17, position, 2);
			rumbleMgr->startRumble(14, position, 2);

		} else if ((u32)enemy->m_curAnim->m_type == KEYEVENT_END) {
			if (static_cast<Obj*>(enemy)->isFallEnd()) {
				enemy->resetEvent(0, EB_22);
				transit(enemy, WRAITH_Recover, nullptr);
			}
		}
	}

	Vector3f position = enemy->getPosition();
	f32 initY         = position.y;
	position.y += 20.0f;

	f32 minY     = mapMgr->getMinY(position);
	f32 someParm = static_cast<Obj*>(enemy)->getParms()->_A48;
	someParm += minY;

	if (initY < someParm) {
		enemy->finishMotion();
	}
}

/*
 * --INFO--
 * Address:	803A4CF4
 * Size:	00003C
 */
StateRecover::StateRecover(int stateID)
    : State(stateID)
{
	m_name = "recover";
}

/*
 * --INFO--
 * Address:	803A4D30
 * Size:	0000C8
 */
void StateRecover::init(EnemyBase* enemy, StateArg* stateArg)
{

	if (enemy->getCurrAnimIndex() != 13) {
		PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(enemy->m_soundObj);
		PSM::checkMidBoss(soundObj);
		if (soundObj != nullptr && soundObj->m_appearFlag) {
			soundObj->jumpRequest(3);
		}
	}

	enemy->startMotion(7, nullptr);
	Obj* wraith = static_cast<Obj*>(enemy);
	wraith->recoverFlick();
	wraith->tyreUpEffect();
}

/*
 * --INFO--
 * Address:	803A4DF8
 * Size:	00016C
 */
void StateRecover::exec(EnemyBase* enemy)
{
	Obj* wraith = static_cast<Obj*>(enemy);
	wraith->recover();
	if (wraith->isTyreDead()) {
		transit(wraith, WRAITH_Escape, nullptr);
		return;
	}

	if (wraith->m_curAnim->m_isRunning) {
		switch (wraith->m_curAnim->m_type) {
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
				PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(enemy->m_soundObj);
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

/*
 * --INFO--
 * Address:	803A4F64
 * Size:	00003C
 */
StateFlick::StateFlick(int stateID)
    : State(stateID)
{
	m_name = "flick";
}

/*
 * --INFO--
 * Address:	803A4FA0
 * Size:	000158
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	bool check;
	if (static_cast<Obj*>(enemy)->m_tyre == nullptr || static_cast<Obj*>(enemy)->_2E0 == 2) {
		check = false;
	} else {
		check = true;
	}

	if (check) {
		enemy->startMotion(3, nullptr);
		PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(enemy->m_soundObj);
		PSM::checkMidBoss(soundObj);
		if (soundObj != nullptr && soundObj->m_appearFlag) {
			soundObj->jumpRequest(4);
		}
	} else {
		enemy->startMotion(4, nullptr);
		PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(enemy->m_soundObj);
		PSM::checkMidBoss(soundObj);
		if (soundObj != nullptr && soundObj->m_appearFlag) {
			soundObj->jumpRequest(12);
		}
	}

	static_cast<Obj*>(enemy)->createFlickEffect();
}

/*
 * --INFO--
 * Address:	803A50F8
 * Size:	0000B8
 */
void StateFlick::exec(EnemyBase* enemy)
{
	if (static_cast<Obj*>(enemy)->isTyreDead()) {
		transit(enemy, WRAITH_Escape, nullptr);
		return;
	}

	if (enemy->m_curAnim->m_isRunning) {
		if ((u32)enemy->m_curAnim->m_type == KEYEVENT_2) {
			static_cast<Obj*>(enemy)->flick();

		} else if ((u32)enemy->m_curAnim->m_type == KEYEVENT_END) {
			transit(enemy, static_cast<Obj*>(enemy)->_2DC, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	803A51B0
 * Size:	000024
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* wraith = static_cast<Obj*>(enemy);
	wraith->fadeFlickEffect();
}

/*
 * --INFO--
 * Address:	803A51D4
 * Size:	00003C
 */
StateTired::StateTired(int stateID)
    : State(stateID)
{
	m_name = "tired";
}

/*
 * --INFO--
 * Address:	803A5210
 * Size:	00005C
 */
void StateTired::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(10, nullptr);
	enemy->m_simVelocity = Vector3f(0.0f);
	_10                  = 0;
}

/*
 * --INFO--
 * Address:	803A526C
 * Size:	0000C0
 */
void StateTired::exec(EnemyBase* enemy)
{
	enemy->m_simVelocity = Vector3f(0.0f);
	enemy->m_impVelocity = Vector3f(0.0f);

	if (enemy->m_curAnim->m_isRunning) {
		if ((u32)enemy->m_curAnim->m_type == KEYEVENT_END) {
			static_cast<Obj*>(enemy)->flick();
			transit(enemy, WRAITH_Walk, nullptr);
		}
		return;
	}

	_10++;
	Obj* wraith = static_cast<Obj*>(enemy);
	if (_10 > wraith->getParms()->m_properParms.m_ip06.m_value) {
		enemy->finishMotion();
	}
}

} // namespace BlackMan
} // namespace Game
