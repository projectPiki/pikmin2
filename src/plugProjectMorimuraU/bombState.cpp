#include "types.h"
#include "Game/Entities/Bomb.h"
#include "Game/Entities/OtakaraBase.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "efx/TBombrock.h"
#include "nans.h"

namespace Game {
namespace Bomb {
/*
 * --INFO--
 * Address:	803493F8
 * Size:	000078
 */
void FSM::init(EnemyBase*)
{
	create(BOMB_Count);
	registerState(new StateWait(BOMB_Wait));
	registerState(new StateBomb(BOMB_Bomb));
}

/*
 * --INFO--
 * Address:	80349470
 * Size:	00003C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	m_name = "wait";
}

/*
 * --INFO--
 * Address:	803494AC
 * Size:	00005C
 */
void Bomb::StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bomb = static_cast<Obj*>(enemy);
	bomb->startMotion(0, nullptr);
	bomb->stopMotion();
	bomb->setEmotionCaution();
	_10 = 0;
}

/*
 * --INFO--
 * Address:	80349508
 * Size:	000148
 */
void Bomb::StateWait::exec(EnemyBase* enemy)
{
	Obj* bomb = static_cast<Obj*>(enemy);
	if ((bomb->_2BC != 0) && (bomb->m_captureMatrix == nullptr)) {
		_10++;
		if (_10 > 200) {
			bomb->kill(nullptr);
		}
	}

	if (!bomb->isStopMotion()) {
		bomb->addDamage(sys->m_deltaTime, 1.0f);
		bomb->m_soundObj->startSound(PSSE_EN_BOMB_LOOP, 0);
	} else if (bomb->isAnimStart()) {
		bomb->setEvent(0, EB_22);
		bomb->startMotion();
		bomb->resetEvent(0, EB_Cullable);
		bomb->setEmotionExcitement();
	}

	if (bomb->m_curAnim->m_isRunning != 0) {
		switch (bomb->m_curAnim->m_type) {
		case 2:
			bomb->resetEvent(0, EB_22);
			break;
		case 1000:
			transit(bomb, BOMB_Bomb, nullptr);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	80349650
 * Size:	00003C
 */
StateBomb::StateBomb(int stateID)
    : State(stateID)
{
	m_name = "bomb";
}

/*
 * --INFO--
 * Address:	8034968C
 * Size:	000060
 */
void Bomb::StateBomb::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->resetEvent(0, EB_Cullable);
	enemy->startMotion(1, nullptr);
	enemy->setEmotionExcitement();
	_10 = 0;
}

/*
 * --INFO--
 * Address:	803496EC
 * Size:	0005C4
 */
void StateBomb::exec(EnemyBase* enemy)
{
	enemy->m_soundObj->startSound(PSSE_EN_BOMB_LOOP, 0);
	enemy->addDamage(sys->m_deltaTime, 1.0f);

	if (enemy->m_health <= 0.0f) {
		_10++;
		if (!(_10 < 10)) {
			_10 = 0;
			enemy->setEmotionCaution();
			Vector3f effectPos;
			enemy->getCommonEffectPos(effectPos);
			EnemyTypeID::EEnemyTypeID id = static_cast<Obj*>(enemy)->getEnemyTypeID();
			efx::ArgEnemyType fxArg(effectPos, id, 1.0f);
			efx::TBombrock bombEffect;
			efx::TBombrockABCD* abcdPtr = &bombEffect.m_efxBombABCD;
			efx::TBombrockEFGH* efghPtr = &bombEffect.m_efxBombEFGH;

			if (abcdPtr->create(&fxArg)) {
				efghPtr->create(&fxArg);
			}
			static_cast<Obj*>(enemy)->m_efxLight->forceKill();
			enemy->m_soundObj->startSound(PSSE_PK_SE_BOMB, 0);

			if (enemy->m_waterBox) {
				static_cast<Obj*>(enemy)->bombEffInWater();
			}

			cameraMgr->startVibration(12, effectPos, 2);
			rumbleMgr->startRumble(15, effectPos, 2);

			Vector3f position = enemy->getPosition();
			Parms* parms      = static_cast<Parms*>(enemy->m_parms);
			f32 offset        = parms->m_properParms.m_fp02.m_value;
			f32 max           = position.y + offset;
			f32 min           = position.y - offset;

			Sys::Sphere sphere;
			sphere.m_position = Vector3f(position);
			sphere.m_radius   = parms->m_general.m_fp22.m_value;
			CellIteratorArg iteratorArg(sphere);
			iteratorArg._14 = 1;

			CellIterator iterator(iteratorArg);
			CI_LOOP(iterator)
			{
				Creature* creature = static_cast<Creature*>(*iterator);
				if (creature->isAlive() && (creature != enemy)) {
					Vector3f creaturePos = creature->getPosition();
					if (!(creaturePos.y > max) && !(creaturePos.y < min)) {
						if (creature->isTeki()) {

							f32 weight = 1.0f;
							f32 force  = weight * static_cast<Parms*>(enemy->m_parms)->m_properParms.m_fp01.m_value;
							InteractBomb interBomb(enemy, force, &Vector3f::zero);

							creature->stimulate(interBomb);

						} else if (creature->isNavi() || creature->isPiki()) {
							Creature* target = static_cast<Obj*>(enemy)->m_otakara;

							if (static_cast<Obj*>(enemy)->m_otakara == nullptr) {
								target = enemy;
							}

							Vector3f sep = creature->getPosition();
							sep -= position;
							_normaliseXZ(sep);

							f32 pikiWeight = 100.0f;
							if (creature->isPiki()) {
								pikiWeight = 200.0f;
							}

							f32 force = static_cast<Parms*>(enemy->m_parms)->m_general.m_attackDamage.m_value;
							sep.x *= pikiWeight;
							sep.y = pikiWeight;
							sep.z *= pikiWeight;

							InteractBomb interBomb(target, force, &sep);

							creature->stimulate(interBomb);
						}
					}
				}
			}

			enemy->kill(nullptr);
		}
	}
}

} // namespace Bomb
} // namespace Game
