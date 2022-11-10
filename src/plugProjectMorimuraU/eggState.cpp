#include "types.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/Entities/Egg.h"
#include "efx/TEggdown.h"
#include "efx/TEnemyBomb.h"
#include "PSM/EnemyBase.h"

namespace Game {
namespace Egg {
/*
 * --INFO--
 * Address:	8034B3C4
 * Size:	000054
 */
void FSM::init(Game::EnemyBase* enemy)
{
	create(EGG_Count);
	registerState(new StateWait(EGG_Wait));
}

/*
 * --INFO--
 * Address:	8034B418
 * Size:	00003C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	m_name = "wait";
}

/*
 * --INFO--
 * Address:	8034B454
 * Size:	000040
 */

void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(0, nullptr);
	enemy->stopMotion();
}

/*
 * --INFO--
 * Address:	8034B494
 * Size:	0001A8
 */
void StateWait::exec(EnemyBase* enemy)
{
	if (enemy->m_health <= 0.0f) {
		static_cast<Obj*>(enemy)->genItem();

		Vector3f fxPos;
		enemy->getCommonEffectPos(fxPos);

		EnemyTypeID::EEnemyTypeID id = enemy->getEnemyTypeID();
		efx::ArgEnemyType type(fxPos, id, 1.0f);

		efx::TEggdown eggdown;
		eggdown.create(&type);

		efx::TEnemyBomb enemybomb;
		enemybomb.create(&type);

		enemy->m_soundObj->startSound(PSSE_EN_EGG_BREAK, 0);

		enemy->kill(nullptr);
	}

	if (enemy->m_toFlick >= 1.0f) {
		enemy->startMotion();
		enemy->m_toFlick = 0.0f;
	}

	if (enemy->m_curAnim->m_isRunning && (u32)enemy->m_curAnim->m_type == KEYEVENT_END) {
		enemy->startMotion(0, nullptr);
		enemy->stopMotion();
	}
}
} // namespace Egg
} // namespace Game
