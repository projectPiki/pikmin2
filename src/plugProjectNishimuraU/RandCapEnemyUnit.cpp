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
 * --INFO--
 * Address:	80300E68
 * Size:	00002C
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
 * --INFO--
 * Address:	80300E94
 * Size:	000008
 */
void RandCapEnemyUnit::setManageClassPtr(RandItemUnit* randItemUnit) { mRandItemUnit = randItemUnit; }

/**
 * Sets ground and falling teki slots in caps.
 *
 * --INFO--
 * Address:	80300E9C
 * Size:	000108
 */
void RandCapEnemyUnit::setCapEnemySlot()
{
	MapNode* placedMapNode = mGenerator->getPlacedNodes();

	FOREACH_NODE(MapNode, placedMapNode->mChild, currTile)
	{
		if (currTile->mUnitInfo->getUnitKind() == UNITKIND_Cap) { // make sure we're in a cap
			// make sure no treasure/hole placed && make sure no ground cap teki already placed
			if ((strncmp(currTile->getUnitName(), "item", 4) == 0) && !mRandItemUnit->isGroundCapEnemySetDone(currTile)) {
				// set the enemy slot (0 for ground teki)
				setCapCommonEnemySlot(currTile, SPAWN_Ground);
			}
		}
	}

	FOREACH_NODE(MapNode, placedMapNode->mChild, currTile)
	{
		if (currTile->mUnitInfo->getUnitKind() == UNITKIND_Cap) { // make sure we're in a cap
			// make sure no treasure/hole placed && make sure no falling cap teki already placed
			if ((strncmp(currTile->getUnitName(), "item", 4) == 0) && !mRandItemUnit->isFallCapEnemySetDone(currTile)) {
				// set the enemy slot (1 for falling teki)
				setCapCommonEnemySlot(currTile, SPAWN_Falling);
			}
		}
	}
}

/**
 * Sets slots for cap enemies based on max num + weights.
 *
 * --INFO--
 * Address:	80300FA4
 * Size:	0001BC
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
				if ((tekiInfo->mType == BaseGen::TekiA__Easy) && ((tekiCount_1 - mEnemyCounts[spawnType]) > 1)) {
					setCount = 2;
				}
				// set the cap enemy
				setCapEnemy(mapTile, node->mEnemyUnit, spawnType, setCount);
				return;
			}
		}
	}

	// calculate random weight based on total tekiWeights
	int randWeight = tekiWeight * randFloat();

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
				if (tekiInfo->mType == BaseGen::TekiA__Easy) {
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
 * --INFO--
 * Address:	80301160
 * Size:	000098
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
