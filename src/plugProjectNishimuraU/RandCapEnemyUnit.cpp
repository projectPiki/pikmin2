#include "types.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/Cave/RandMapUnit.h"
#include "Game/Cave/Node.h"
#include "Game/Cave/Info.h"
#include "Dolphin/string.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {

/**
 * Constructor for RandCapEnemyUnit.
 *
 * --INFO--
 * Address:	80300E68
 * Size:	00002C
 */
RandCapEnemyUnit::RandCapEnemyUnit(MapUnitGenerator* mapUnitGenerator)
{
	mMapUnitGenerator = mapUnitGenerator;
	mEnemyNode[0]     = mMapUnitGenerator->mEnemyNodeB;
	mEnemyNode[1]     = mMapUnitGenerator->mEnemyNodeC;
	mPerSpawn[0]      = 0;
	mPerSpawn[1]      = 0;
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
	MapNode* placedMapNode;
	MapNode* groundNode;
	MapNode* fallingNode;

	placedMapNode = mMapUnitGenerator->mPlacedMapNodes;
	groundNode    = (MapNode*)placedMapNode->mChild;

	// Ground teki check
	while (groundNode) {
		if (groundNode->mUnitInfo->getUnitKind() == UNITKIND_Cap) { // make sure we're in a cap
			char* unitName = groundNode->getUnitName();
			// make sure no treasure/hole placed && make sure no ground cap teki already placed
			if ((strncmp(unitName, "item", 4) == 0) && (mRandItemUnit->isGroundCapEnemySetDone(groundNode) == false)) {
				// set the enemy slot (0 for ground teki)
				setCapCommonEnemySlot(groundNode, 0);
			}
		}
		groundNode = (MapNode*)groundNode->mNext;
	}
	fallingNode = (MapNode*)placedMapNode->mChild;

	// Falling teki check
	while (fallingNode) {
		if (fallingNode->mUnitInfo->getUnitKind() == UNITKIND_Cap) { // make sure we're in a cap
			char* unitName = fallingNode->getUnitName();
			// make sure no treasure/hole placed && make sure no falling cap teki already placed
			if ((strncmp(unitName, "item", 4) == 0) && (mRandItemUnit->isFallCapEnemySetDone(fallingNode) == false)) {
				// set the enemy slot (1 for falling teki)
				setCapCommonEnemySlot(fallingNode, 1);
			}
		}
		fallingNode = (MapNode*)fallingNode->mNext;
	}
}

/**
 * Sets slots for cap enemies based on max num + weights.
 *
 * --INFO--
 * Address:	80300FA4
 * Size:	0001BC
 */
void RandCapEnemyUnit::setCapCommonEnemySlot(MapNode* inputMapNode, int spawnType)
{
	EnemyNode* node;

	int tekiWeight  = 0;
	int tekiCount_1 = 0;

	for (node = (EnemyNode*)mEnemyNode[spawnType]->mChild; node; node = (EnemyNode*)node->mNext) {
		if (TekiInfo* tekiInfo = node->getTekiInfo()) {

			tekiCount_1 += tekiInfo->mWeight / 10; // max number to place
			tekiWeight += tekiInfo->mWeight % 10;  // weighting

			// check if we have any left to place of that type
			if (tekiCount_1 > mPerSpawn[spawnType]) {
				int setCount = 1; // default to 1
				                  // if teki type is 0 and we have room for another, make it 2
				if ((tekiInfo->mType == 0) && ((tekiCount_1 - mPerSpawn[spawnType]) > 1)) {
					setCount = 2;
				}
				// set the cap enemy
				setCapEnemy(inputMapNode, node->mEnemyUnit, spawnType, setCount);
				return;
			}
		}
	}

	// calculate random weight based on total tekiWeights
	int randWeight = tekiWeight * randFloat();

	TekiInfo* tekiInfo;
	int tekiCount_2 = 0;

	for (EnemyNode* node = (EnemyNode*)mEnemyNode[spawnType]->mChild; node; node = (EnemyNode*)node->mNext) {
		tekiInfo = node->mEnemyUnit->mTekiInfo;
		if (tekiInfo) {
			tekiCount_2 += tekiInfo->mWeight % 10; // add up the weightings as we go

			// if we've gone past enough weights, time to set a teki
			if (tekiCount_2 > randWeight) {
				int setCount = 1; // default to 1
				                  // if teki type is 0, we can place more, so make it 2
				if (tekiInfo->mType == 0) {
					setCount = 2;
				}
				// set the cap enemy
				setCapEnemy(inputMapNode, node->mEnemyUnit, spawnType, setCount);
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
void RandCapEnemyUnit::setCapEnemy(MapNode* inputMapNode, EnemyUnit* inputEnemyUnit, int spawnType, int setCount)
{
	// also keep track of if it's grounded or falling
	// setCount = how many to place
	for (int i = 0; i < setCount; i++) {
		// make a new EnemyNode for the enemy
		EnemyNode* newNode = new EnemyNode(inputEnemyUnit, nullptr, 1);
		newNode->makeGlobalData(inputMapNode);

		inputMapNode->mEnemyNode->add(newNode);

		// increment total ground/falling teki count
		mPerSpawn[spawnType]++;
	}
}

} // namespace Cave
} // namespace Game
