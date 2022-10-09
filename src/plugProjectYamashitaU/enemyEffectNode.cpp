#include "Game/EnemyEffectNode.h"
#include "Game/EnemyBase.h"
#include "efx/TEnemyHamon.h"

namespace Game {

/*
 * --INFO--
 * Address:	8012E510
 * Size:	000134
 */
EnemyEffectNodeHamon::EnemyEffectNodeHamon() { }

/*
 * --INFO--
 * Address:	8012E7DC
 * Size:	00011C
 */
void EnemyEffectNodeHamon::create(EnemyBase* enemy)
{
	if (enemy->inWater()) {
		efx::ArgEnemyType fxArg(enemy->getPosition(), enemy->getEnemyTypeID(), enemy->m_scaleModifier);
		m_enemyHamon.create(&fxArg);

		m_enemyHamon.m_seaHeightPtr = enemy->m_waterBox->getSeaHeightPtr();
	}
}

/*
 * --INFO--
 * Address:	8012E8F8
 * Size:	00002C
 */
void EnemyEffectNodeHamon::fade(EnemyBase* enemy) { m_enemyHamon.fade(); }

/*
 * --INFO--
 * Address:	8012E9B8
 * Size:	00002C
 */
void EnemyEffectNodeHamon::forceKill(EnemyBase* enemy) { m_enemyHamon.forceKill(); }

/*
 * --INFO--
 * Address:	8012EA78
 * Size:	00004C
 */
void EnemyEffectNodeHamon::update(EnemyBase* enemy)
{
	Vector3f position;
	enemy->getEfxHamonPos(&position);
	m_enemyHamon.update(position);
}

} // namespace Game
