#include "types.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/Cave/RandMapUnit.h"
#include "Game/Cave/Node.h"
#include "Game/Cave/Info.h"
#include "string.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {

/**
 * @note Address: 0x80300E68
 * @note Size: 0x2C
 */
RandCapEnemyUnit::RandCapEnemyUnit(MapUnitGenerator* mapUnitGenerator)
{
	mGenerator                  = mapUnitGenerator;
	mEnemies[SPAWN_Ground]      = mGenerator->mCapEnemiesGround;
	mEnemies[SPAWN_Falling]     = mGenerator->mCapEnemiesFalling;
	mEnemyCounts[SPAWN_Ground]  = 0;
	mEnemyCounts[SPAWN_Falling] = 0;
}

/**
 * Sets RandItemUnit pointer (mRandItemUnit).
 *
 * @note Address: 0x80300E94
 * @note Size: 0x8
 */
void RandCapEnemyUnit::setManageClassPtr(RandItemUnit* randItemUnit) { mRandItemUnit = randItemUnit; }

/**
 * Sets ground and falling teki slots in caps.
 *
 * @note Address: 0x80300E9C
 * @note Size: 0x108
 */
void RandCapEnemyUnit::setCapEnemySlot()
{
	MapNode* placedMapNode = mGenerator->getPlacedNodes();

	FOREACH_NODE(MapNode, placedMapNode->mChild, currTile)
	{
		if (currTile->mUnitInfo->getUnitKind() == UNITKIND_Cap) { // make sure we're in a cap
			// make sure no treasure/hole placed && make sure no ground cap teki already placed
			if (IS_SAME_STRING_PREFIX(currTile->getUnitName(), "item") && !mRandItemUnit->isGroundCapEnemySetDone(currTile)) {
				// set the enemy slot (0 for ground teki)
				setCapCommonEnemySlot(currTile, SPAWN_Ground);
			}
		}
	}

	FOREACH_NODE(MapNode, placedMapNode->mChild, currTile)
	{
		if (currTile->mUnitInfo->getUnitKind() == UNITKIND_Cap) { // make sure we're in a cap
			// make sure no treasure/hole placed && make sure no falling cap teki already placed
			if (IS_SAME_STRING_PREFIX(currTile->getUnitName(), "item") && !mRandItemUnit->isFallCapEnemySetDone(currTile)) {
				// set the enemy slot (1 for falling teki)
				setCapCommonEnemySlot(currTile, SPAWN_Falling);
			}
		}
	}
}

/**
 * Sets slots for cap enemies based on max num + weights.
 *
 * @note Address: 0x80300FA4
 * @note Size: 0x1BC
 */
void RandCapEnemyUnit::setCapCommonEnemySlot(MapNode* mapTile, int spawnType)
{
	EnemyNode* node;

	int tekiWeight  = 0;
	int tekiCount_1 = 0;

	// NB: can't use the FOREACH_NODE macro here bc of regswap shenanigans
	for (node = (EnemyNode*)mEnemies[spawnType]->mChild; node; node = (EnemyNode*)node->mNext) {
		if (TekiInfo* tekiInfo = node->getTekiInfo()) {

			tekiCount_1 += tekiInfo->mWeight / 10; // max number to place
			tekiWeight += tekiInfo->mWeight % 10;  // weighting

			// check if we have any left to place of that type
			if (tekiCount_1 > mEnemyCounts[spawnType]) {
				int setCount = 1; // default to 1
				                  // if teki type is 0 and we have room for another, make it 2
				if ((tekiInfo->mType == BaseGen::CGT_EnemyEasy) && ((tekiCount_1 - mEnemyCounts[spawnType]) > 1)) {
					setCount = 2;
				}
				// set the cap enemy
				setCapEnemy(mapTile, node->mEnemyUnit, spawnType, setCount);
				return;
			}
		}
	}

	// calculate random weight based on total tekiWeights
	int randWeight = randInt(tekiWeight);

	TekiInfo* tekiInfo;
	int tekiCount_2 = 0;

	FOREACH_NODE(EnemyNode, mEnemies[spawnType]->mChild, node)
	{
		tekiInfo = node->mEnemyUnit->mTekiInfo;
		if (tekiInfo) {
			tekiCount_2 += tekiInfo->mWeight % 10; // add up the weightings as we go

			// if we've gone past enough weights, time to set a teki
			if (tekiCount_2 > randWeight) {
				int setCount = 1; // default to 1
				                  // if teki type is 0, we can place more, so make it 2
				if (tekiInfo->mType == BaseGen::CGT_EnemyEasy) {
					setCount = 2;
				}
				// set the cap enemy
				setCapEnemy(mapTile, node->mEnemyUnit, spawnType, setCount);
				return;
			}
		}
	}
}

/**
 * Sets cap enemies.
 *
 * @note Address: 0x80301160
 * @note Size: 0x98
 */
void RandCapEnemyUnit::setCapEnemy(MapNode* mapTile, EnemyUnit* enemyUnit, int spawnType, int setCount)
{
	// also keep track of if it's grounded or falling
	// setCount = how many to place
	for (int i = 0; i < setCount; i++) {
		// make a new enemy
		EnemyNode* enemy = new EnemyNode(enemyUnit, nullptr, 1);
		enemy->makeGlobalData(mapTile);
		mapTile->mEnemyNode->add(enemy);

		// increment total ground/falling teki count as appropriate
		mEnemyCounts[spawnType]++;
	}
}

} // namespace Cave
} // namespace Game
