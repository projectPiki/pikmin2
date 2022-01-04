#include "types.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/Entities/Egg.h"
#include "PSM/EnemyBase.h"

namespace Game {
namespace Egg {
/*
 * --INFO--
 * Address:	8034B3C4
 * Size:	000054
 */
void FSM::init(Game::EnemyBase* base)
{
	create(1);
	registerState(new StateWait(EggState::Wait));
}

/*
 * --INFO--
 * Address:	8034B418
 * Size:	00003C
 */
StateWait::StateWait(int id)
    : State(id)
{
	m_name = "wait";
}

/*
 * --INFO--
 * Address:	8034B454
 * Size:	000040
 */

void StateWait::init(Game::EnemyBase* base, Game::StateArg* arg)
{
	base->startMotion(0, nullptr);
	base->stopMotion();
}

/*
 * --INFO--
 * Address:	8034B494
 * Size:	0001A8
 */
void StateWait::exec(Game::EnemyBase* base)
{
	Obj* eggObj = (Obj*)base;

	if (eggObj->m_health <= 0.0f) {
		eggObj->genItem();

		Vector3f fxPos;
		eggObj->getCommonEffectPos(fxPos);

		EnemyTypeID::EEnemyTypeID id = eggObj->getEnemyTypeID();

		efx::ArgEnemyType type(fxPos, id, 1.0f);

		efx::TEggdown eggdown;
		eggdown.m_emitters[0] = nullptr;
		eggdown.create(&type);

		efx::TEnemyBomb enemybomb;
		enemybomb.create(&type);

		eggObj->m_soundObj->startSound(0x58DC, 0);

		eggObj->kill(nullptr);
	}

	if (eggObj->m_toFlick >= 1.0f) {
		eggObj->startMotion();
		eggObj->m_toFlick = 0.0f;
	}

	EnemyAnimKeyEvent* ekEvent = eggObj->m_animKeyEvent;
	if (ekEvent->m_running && ekEvent->m_type == 1000) {
		eggObj->startMotion(0, nullptr);
		eggObj->stopMotion();
	}
}
} // namespace Egg
} // namespace Game
