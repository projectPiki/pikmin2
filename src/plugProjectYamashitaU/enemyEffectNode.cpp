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
		efx::ArgEnemyType fxArg(enemy->getPosition(), enemy->getEnemyTypeID(), enemy->mScaleModifier);
		mEnemyHamon.create(&fxArg);

		mEnemyHamon.mSeaHeightPtr = enemy->mWaterBox->getSeaHeightPtr();
	}
}

/*
 * --INFO--
 * Address:	8012E8F8
 * Size:	00002C
 */
void EnemyEffectNodeHamon::fade(EnemyBase* enemy) { mEnemyHamon.fade(); }

/*
 * --INFO--
 * Address:	8012E9B8
 * Size:	00002C
 */
void EnemyEffectNodeHamon::forceKill(EnemyBase* enemy) { mEnemyHamon.forceKill(); }

/*
 * --INFO--
 * Address:	8012EA78
 * Size:	00004C
 */
void EnemyEffectNodeHamon::update(EnemyBase* enemy)
{
	Vector3f position;
	enemy->getEfxHamonPos(&position);
	mEnemyHamon.update(position);
}

} // namespace Game
