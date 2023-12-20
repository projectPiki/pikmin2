#include "Game/EnemyEffectNode.h"
#include "Game/EnemyBase.h"
#include "efx/TEnemyHamon.h"

namespace Game {

/**
 * @note Address: 0x8012E510
 * @note Size: 0x134
 */
EnemyEffectNodeHamon::EnemyEffectNodeHamon() { }

/**
 * @note Address: 0x8012E7DC
 * @note Size: 0x11C
 */
void EnemyEffectNodeHamon::create(EnemyBase* enemy)
{
	if (enemy->inWater()) {
		efx::ArgEnemyType fxArg(enemy->getPosition(), enemy->getEnemyTypeID(), enemy->mScaleModifier);
		mEnemyHamon.create(&fxArg);

		mEnemyHamon.mSeaHeightPtr = enemy->mWaterBox->getSeaHeightPtr();
	}
}

/**
 * @note Address: 0x8012E8F8
 * @note Size: 0x2C
 */
void EnemyEffectNodeHamon::fade(EnemyBase* enemy) { mEnemyHamon.fade(); }

/**
 * @note Address: 0x8012E9B8
 * @note Size: 0x2C
 */
void EnemyEffectNodeHamon::forceKill(EnemyBase* enemy) { mEnemyHamon.forceKill(); }

/**
 * @note Address: 0x8012EA78
 * @note Size: 0x4C
 */
void EnemyEffectNodeHamon::update(EnemyBase* enemy)
{
	Vector3f position;
	enemy->getEfxHamonPos(&position);
	mEnemyHamon.update(position);
}

} // namespace Game
