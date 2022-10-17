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
	m_mapUnitGenerator = mapUnitGenerator;
	m_enemyNode[0]     = m_mapUnitGenerator->m_enemyNodeB;
	m_enemyNode[1]     = m_mapUnitGenerator->m_enemyNodeC;
	m_perSpawn[0]      = 0;
	m_perSpawn[1]      = 0;
}

/**
 * Sets RandItemUnit pointer (m_randItemUnit).
 *
 * --INFO--
 * Address:	80300E94
 * Size:	000008
 */
void RandCapEnemyUnit::setManageClassPtr(RandItemUnit* randItemUnit) { m_randItemUnit = randItemUnit; }

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

	placedMapNode = m_mapUnitGenerator->m_placedMapNodes;
	groundNode    = (MapNode*)placedMapNode->m_child;

	// Ground teki check
	while (groundNode) {
		if (groundNode->m_unitInfo->getUnitKind() == 0) { // make sure we're in a cap
			char* unitName = groundNode->getUnitName();
			// make sure no treasure/hole placed && make sure no ground cap teki already placed
			if ((strncmp(unitName, "item", 4) == 0) && (m_randItemUnit->isGroundCapEnemySetDone(groundNode) == false)) {
				// set the enemy slot (0 for ground teki)
				setCapCommonEnemySlot(groundNode, 0);
			}
		}
		groundNode = (MapNode*)groundNode->m_next;
	}
	fallingNode = (MapNode*)placedMapNode->m_child;

	// Falling teki check
	while (fallingNode) {
		if (fallingNode->m_unitInfo->getUnitKind() == 0) { // make sure we're in a cap
			char* unitName = fallingNode->getUnitName();
			// make sure no treasure/hole placed && make sure no falling cap teki already placed
			if ((strncmp(unitName, "item", 4) == 0) && (m_randItemUnit->isFallCapEnemySetDone(fallingNode) == false)) {
				// set the enemy slot (1 for falling teki)
				setCapCommonEnemySlot(fallingNode, 1);
			}
		}
		fallingNode = (MapNode*)fallingNode->m_next;
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

	for (node = (EnemyNode*)m_enemyNode[spawnType]->m_child; node; node = (EnemyNode*)node->m_next) {
		if (TekiInfo* tekiInfo = node->getTekiInfo()) {

			tekiCount_1 += tekiInfo->m_weight / 10; // max number to place
			tekiWeight += tekiInfo->m_weight % 10;  // weighting

			// check if we have any left to place of that type
			if (tekiCount_1 > m_perSpawn[spawnType]) {
				int setCount = 1; // default to 1
				                  // if teki type is 0 and we have room for another, make it 2
				if ((tekiInfo->m_type == 0) && ((tekiCount_1 - m_perSpawn[spawnType]) > 1)) {
					setCount = 2;
				}
				// set the cap enemy
				setCapEnemy(inputMapNode, node->m_enemyUnit, spawnType, setCount);
				return;
			}
		}
	}

	// calculate random weight based on total tekiWeights
	int randWeight = tekiWeight * randFloat();

	TekiInfo* tekiInfo;
	int tekiCount_2 = 0;

	for (EnemyNode* node = (EnemyNode*)m_enemyNode[spawnType]->m_child; node; node = (EnemyNode*)node->m_next) {
		tekiInfo = node->m_enemyUnit->m_tekiInfo;
		if (tekiInfo) {
			tekiCount_2 += tekiInfo->m_weight % 10; // add up the weightings as we go

			// if we've gone past enough weights, time to set a teki
			if (tekiCount_2 > randWeight) {
				int setCount = 1; // default to 1
				                  // if teki type is 0, we can place more, so make it 2
				if (tekiInfo->m_type == 0) {
					setCount = 2;
				}
				// set the cap enemy
				setCapEnemy(inputMapNode, node->m_enemyUnit, spawnType, setCount);
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

		inputMapNode->m_enemyNode->add(newNode);

		// increment total ground/falling teki count
		m_perSpawn[spawnType]++;
	}
}

} // namespace Cave
} // namespace Game
