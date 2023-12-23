#include "types.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/Cave/RandMapUnit.h"
#include "Game/Cave/Node.h"
#include "Game/Cave/Info.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {
/**
 * @note Address: 0x8029EF0C
 * @note Size: 0x5C
 */
RandPlantUnit::RandPlantUnit(MapUnitGenerator* generator)
{
	mGenerator = generator;
	mCount     = 0;
	mGoalCount = 0;

	// calculate desired plant count from plant weights
	FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
	{
		// if TekiInfo exists and the Teki type is 6 (plant), add its weight to goal count
		if ((currEnemy->mEnemyUnit->mTekiInfo) && (currEnemy->mEnemyUnit->mTekiInfo->mType == BaseGen::CGT_Plant)) {
			mGoalCount += currEnemy->mEnemyUnit->mTekiInfo->mWeight;
		}
	}
}

/**
 * @note Address: 0x8029EF68
 * @note Size: 0xDC
 */
void Game::Cave::RandPlantUnit::setPlantSlot()
{
	// make nodes for new plants if there's room for them

	// check that we have space for new plants
	if (mCount < mGoalCount) {

		// only try to place a max of 100 plants, regardless of desired plant count
		for (int i = 0; i < 100; i++) {

			BaseGen* spawn       = nullptr;
			MapNode* mapTile     = getPlantSetMapNode(&spawn);
			EnemyUnit* plantUnit = getPlantUnit(spawn);

			// if we have a plant and a spawn tile, add plant
			if (plantUnit && mapTile) {
				EnemyNode* newPlant = new EnemyNode(plantUnit, spawn, 1);
				newPlant->makeGlobalData(mapTile);
				mapTile->mEnemyNode->add(newPlant);
				mCount++;

				// check we haven't hit our plant limit
				if (!(mCount < mGoalCount)) {
					return;
				} else {
					continue;
				}
			}

			// if plant type doesn't exist or there aren't any empty spots left
			// don't bother trying again
			return;
		}
	}
}

/**
 * @note Address: 0x8029F044
 * @note Size: 0x134
 */
MapNode* RandPlantUnit::getPlantSetMapNode(BaseGen** plantSpawnsList)
{
	// make list of EMPTY plant spawns and pick one at random
	// returns mapnode of randomly selected plant spawn and puts pointer to basegen for plant in outSpawn

	// hopefully we don't have more than 512 open spawns...
	MapNode* tileList[512];
	BaseGen* spawnList[512];

	// counter for how many plant spawns we find
	int count = 0;

	// loop through all the map tiles and spawn spots and find empty plant slots
	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currTile)
	{
		BaseGen* spawn = currTile->mUnitInfo->getBaseGen();
		if (spawn) {
			FOREACH_NODE(BaseGen, spawn->mChild, currSpawn)
			{
				if ((currSpawn->mSpawnType == BaseGen::CGT_Plant) && (isPlantSet(currTile, currSpawn))) {
					tileList[count]  = currTile;
					spawnList[count] = currSpawn;
					count++;
				}
			}
		}
	}

	// assuming we hit at least one plant spawn, pick one from the list at random
	// return the map node pointer, and put the basegen pointer into *baseGenOut
	if (count) {
		int randBase     = randInt(count);
		*plantSpawnsList = spawnList[randBase];
		return tileList[randBase];
	}
	// if we didn't hit any empty spawns, return nullptr
	return nullptr;
}

/**
 * @note Address: 0x8029F178
 * @note Size: 0x68
 */
EnemyUnit* RandPlantUnit::getPlantUnit(BaseGen* spawn)
{
	// gets the (next) plant unit to place

	int slotCount = 0;

	// check given spawn isn't null
	if (spawn) {
		FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
		{
			// if TekiInfo exists and Teki type = plant, add weight to slotCount
			if (currEnemy->mEnemyUnit->mTekiInfo && (currEnemy->mEnemyUnit->mTekiInfo->mType == BaseGen::CGT_Plant)) {
				slotCount += currEnemy->mEnemyUnit->mTekiInfo->mWeight;

				// if we've gotten further than current plant count, we've hit the next plant type to add
				if (mCount < slotCount) {
					return currEnemy->mEnemyUnit;
				}
			}
		}
	}

	// if spawn was null, return nullptr
	return nullptr;
}

/**
 * @note Address: 0x8029F1E0
 * @note Size: 0x48
 */
bool RandPlantUnit::isPlantSet(MapNode* testTile, BaseGen* testSpawn)
{
	// check if a given spawn is empty (i.e. if a plant can be set there)

	// check given spawn exists
	if (testSpawn) {
		// loop through all the enemy nodes for given map tile and check if one exists in given spawn
		FOREACH_NODE(EnemyNode, testTile->mEnemyNode->mChild, currEnemy)
		{
			if (currEnemy->mSpawn == testSpawn) {
				return false;
			}
		}

	} else { // given spawn doesn't exist, return false
		return false;
	}

	// we checked all current enemies, none are in given spawn location, so it must be free.
	return true;
}
} // namespace Cave
} // namespace Game
