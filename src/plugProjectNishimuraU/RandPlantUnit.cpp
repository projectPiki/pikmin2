#include "types.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/Cave/RandMapUnit.h"
#include "Game/Cave/Node.h"
#include "Game/Cave/Info.h"
#include "Dolphin/rand.h"

namespace Game {

/*
 * --INFO--
 * Address:	8029EF0C
 * Size:	00005C
 */
Game::Cave::RandPlantUnit::RandPlantUnit(Game::Cave::MapUnitGenerator* generator)
{
	// Constructor for RandPlantUnit
	//     - takes a MapUnitGenerator as input
	//     - initialises mCurrentPlantCount to 0
	//     - adds up all plant teki weights to get mDesiredPlantCount

	// set base attributes
	mGenerator         = generator;
	mCurrentPlantCount = 0; // initial plant count = 0
	mDesiredPlantCount = 0; // initial desired plant count = 0

	// calculate desired plant count from plant weights

	// loop through the enemy nodes for the MapUnitGenerator
	EnemyNode* currEnemyNode = (EnemyNode*)mGenerator->mEnemyNodeA->mChild;
	for (currEnemyNode; currEnemyNode; currEnemyNode = (EnemyNode*)currEnemyNode->mNext) {

		// if TekiInfo exists and the Teki type is 6 (plant), add its weight to desiredPlantCount
		if ((currEnemyNode->mEnemyUnit->mTekiInfo) && (currEnemyNode->mEnemyUnit->mTekiInfo->mType == 6)) {
			mDesiredPlantCount += currEnemyNode->mEnemyUnit->mTekiInfo->mWeight;
		}
	}
}

/*
 * --INFO--
 * Address:	8029EF68
 * Size:	0000DC
 */
void Game::Cave::RandPlantUnit::setPlantSlot()
{
	// make nodes for new plants if there's room for them

	// check that we have space for new plants
	if (mCurrentPlantCount < mDesiredPlantCount) {

		// only try to place a max of 100 plants, regardless of desired plant count
		for (int i = 0; i < 100; i++) {
			// initially null basegen pointer
			BaseGen* currBaseGen = nullptr;
			// get an empty plant spot and basegen pointer
			MapNode* currMapNode = getPlantSetMapNode(&currBaseGen);
			// get a plant unit/type
			EnemyUnit* currPlantUnit = getPlantUnit(currBaseGen);

			// if mapnode and plant type exist, make a new plant node
			if (currPlantUnit && currMapNode) {
				// make plant
				EnemyNode* newPlant = new EnemyNode(currPlantUnit, currBaseGen, 1);
				// make data global on map node
				newPlant->makeGlobalData(currMapNode);
				// add plant to enemy nodes
				currMapNode->mEnemyNode->add((EnemyNode*)newPlant);
				// increment plant count
				mCurrentPlantCount++;

				// check we haven't hit our plant limit
				if (!(mCurrentPlantCount < mDesiredPlantCount)) {
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

/*
 * --INFO--
 * Address:	8029F044
 * Size:	000134
 */
Game::Cave::MapNode* Game::Cave::RandPlantUnit::getPlantSetMapNode(Game::Cave::BaseGen** baseGenOut)
{
	// make list of EMPTY plant spawns and pick one at random
	// returns mapnode of randomly selected plant spawn and puts pointer to basegen for plant in baseGenOut

	// set up some arrays to hold the mapnodes and basegen for plants
	// hopefully we don't have more than 512 of each lol
	MapNode* mapNodeArr[512];
	BaseGen* baseGenArr[512];

	// counter for how many plant spawns we find
	int count = 0;

	// loop through all the map nodes
	MapNode* currMapNode = (MapNode*)mGenerator->mPlacedMapNodes->mChild;
	for (currMapNode; currMapNode; currMapNode = (MapNode*)currMapNode->mNext) {

		// get the 'base' base gen for current map node
		BaseGen* mapBaseGen = currMapNode->mUnitInfo->getBaseGen();
		if (mapBaseGen) { // if it exists, loop through the base gen for the map node
			BaseGen* currBaseGen = (BaseGen*)mapBaseGen->mChild;
			for (currBaseGen; currBaseGen; currBaseGen = (BaseGen*)currBaseGen->mNext) {

				// if the spawn type is 6 (plant) and it DOESN'T have a plant, add it to the list
				if ((currBaseGen->mSpawnType == 6) && (isPlantSet(currMapNode, currBaseGen))) {
					mapNodeArr[count] = currMapNode;
					baseGenArr[count] = currBaseGen;
					count += 1;
				}
			}
		}
	}

	// assuming we hit a plant spawn, pick one from the list at random
	// return the map node pointer, and put the basegen pointer into *baseGenOut
	if (count) {
		int randBase = (int)(count * randFloat());
		*baseGenOut  = baseGenArr[randBase];
		return mapNodeArr[randBase];
	}
	// if we didn't hit any empty spawns, return nullptr
	return 0;
}

/*
 * --INFO--
 * Address:	8029F178
 * Size:	000068
 */
Game::Cave::EnemyUnit* Game::Cave::RandPlantUnit::getPlantUnit(Game::Cave::BaseGen* plantBaseGen)
{
	// gets the (next) plant unit

	int desiredPlantCount = 0;

	// check given BaseGen isn't null
	if (plantBaseGen) {

		// loop through the enemy nodes for the MapUnitGenerator
		EnemyNode* currEnemyNode = (EnemyNode*)mGenerator->mEnemyNodeA->mChild;
		for (currEnemyNode; currEnemyNode; currEnemyNode = (EnemyNode*)currEnemyNode->mNext) {
			// if TekiInfo exists and Teki type = 6 (plant), add weight to desiredPlantCount
			if (currEnemyNode->mEnemyUnit->mTekiInfo && (currEnemyNode->mEnemyUnit->mTekiInfo->mType == 6)) {
				desiredPlantCount += currEnemyNode->mEnemyUnit->mTekiInfo->mWeight;

				// if we've gotten further than currentPlantCount, return plant
				if (mCurrentPlantCount < desiredPlantCount) {
					return currEnemyNode->mEnemyUnit;
				}
			}
		}
	}
	// if BaseGen was null, return null ptr
	return 0;
}

/*
 * --INFO--
 * Address:	8029F1E0
 * Size:	000048
 */
bool Game::Cave::RandPlantUnit::isPlantSet(Game::Cave::MapNode* testMapNode, Game::Cave::BaseGen* testBaseGen)
{
	// check if there's no plant
	// returns 0 if a plant exists in testMapNode with given testBaseGen
	// returns 1 if not

	// check given BaseGen exists
	if (testBaseGen) {
		// loop through all the enemy nodes for given map node
		EnemyNode* currEnemyNode = (EnemyNode*)testMapNode->mEnemyNode->mChild;
		for (currEnemyNode; currEnemyNode; currEnemyNode = (EnemyNode*)currEnemyNode->mNext) {

			// if enemy node basegen matches given basegen, plant exists, no free space
			if (currEnemyNode->mBaseGen == testBaseGen) {
				return false;
			}
		}
		// no more enemy nodes to check, we have free space, so return true
		// (this is a stupid control flow but it matches)
		goto end_section;
	} else { // given BaseGen doesn't exist, return false
		return false;
	}
end_section: // don't ask
	return true;
}
} // namespace Game
