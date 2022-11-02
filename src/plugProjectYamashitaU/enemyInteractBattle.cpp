#include "Game/EnemyBase.h"
#include "Game/Interaction.h"
#include "Game/Navi.h"

namespace Game {

/*
 * --INFO--
 * Address:	8010BA00
 * Size:	00007C
 */
bool InteractHipdrop::actEnemy(Game::EnemyBase* enemy)
{
	bool callback = enemy->pressCallBack(m_creature, m_damage, m_collPart);
	if (!callback) {
		callback = enemy->hipdropCallBack(m_creature, m_damage, m_collPart);
	}
	return callback;
}

/*
 * --INFO--
 * Address:	8010BA7C
 * Size:	000074
 */
bool InteractEarthquake::actEnemy(Game::EnemyBase* enemy)
{
	bool callback = false;
	if (!enemy->checkBirthTypeDropEarthquake()) {
		callback = enemy->earthquakeCallBack(m_creature, m_bounceFactor);
	}
	return callback;
}

/*
 * --INFO--
 * Address:	8010BAF0
 * Size:	000040
 */
bool InteractPress::actEnemy(Game::EnemyBase* enemy) { return enemy->pressCallBack(m_creature, m_damage, m_collPart); }

/*
 * --INFO--
 * Address:	8010BB30
 * Size:	000040
 */
bool InteractFlyCollision::actEnemy(Game::EnemyBase* enemy) { return enemy->flyCollisionCallBack(m_creature, _08, m_collPart); }

/*
 * --INFO--
 * Address:	8010BB70
 * Size:	00011C
 */
bool InteractAttack::actEnemy(Game::EnemyBase* enemy)
{
	bool callback = false;
	if (!enemy->isEvent(0, EB_Vulnerable)) {
		bool flag = false;
		if (m_creature->isNavi()) {
			if (static_cast<Navi*>(m_creature)->m_naviIndex.typeView == 0) {
				if (!enemy->isEvent(0, EB_17)) {
					flag = true;
					enemy->setEvent(0, EB_17);
				}
			} else {
				if (!enemy->isEvent(0, EB_18)) {
					flag = true;
					enemy->setEvent(0, EB_18);
				}
			}
		} else {
			flag = true;
		}

		if (flag) {
			if (enemy->isEvent(0, EB_Bittered)) {
				m_damage *= enemy->getDamageCoeStoneState();
			}
			callback = enemy->damageCallBack(m_creature, m_damage, m_collPart);
		}
	}
	return callback;
}

/*
 * --INFO--
 * Address:	8010BC8C
 * Size:	000038
 */
bool InteractDrop::actEnemy(Game::EnemyBase* enemy) { return enemy->dropCallBack(m_creature); }

/*
 * --INFO--
 * Address:	8010BCC4
 * Size:	000078
 */
bool InteractBomb::actEnemy(Game::EnemyBase* enemy)
{
	bool callback = false;
	if (!enemy->isBeforeAppearState()) {
		callback = enemy->bombCallBack(m_creature, m_direction, m_damage);
	}
	return callback;
}
} // namespace Game
