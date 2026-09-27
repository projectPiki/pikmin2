#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {
/**
 * @note Address: 0x80248914
 * @note Size: 0xA8
 */
RandEnemyUnit::RandEnemyUnit(MapUnitGenerator* generator, bool isVersusHiba)
{
	mGenerator  = generator;
	mTotalCount = 0;
	if (mGenerator->mFloorInfo) {
		mMaxEnemies = mGenerator->mFloorInfo->getTekiMax();
	} else {
		mMaxEnemies = 0;
	}

	mMapTile   = nullptr;
	mSpawn     = nullptr;
	mEnemyUnit = nullptr;

	if (isVersusHiba && mGenerator->mIsVersusMode) {
		mIsVersusHiba = true;
	} else {
		mIsVersusHiba = false;
	}

	setEnemyTypeWeight();
}

/**
 * @note Address: 0x802489BC
 * @note Size: 0x8
 */
void RandEnemyUnit::setManageClassPtr(RandMapScore* score)
{
	mMapScore = score;
}

/**
 * @note Address: 0x802489C4
 * @note Size: 0x54
 */
void RandEnemyUnit::setEnemySlot()
{
	if (mTotalCount < mMaxEnemies) {
		setEnemyTypeC();
		setEnemyTypeF();
		setEnemyTypeB();
		setEnemyTypeA();
	}
}

/**
 * @note Address: 0x80248A18
 * @note Size: 0x278
 */
void RandEnemyUnit::setEnemyTypeWeight()
{
	EnemyNode* mainNode = mGenerator->mMainEnemies;

	int enemyTypes[4] = { BaseGen::CGT_EnemyEasy, BaseGen::CGT_EnemyHard, BaseGen::CGT_DoorSeam, BaseGen::CGT_EnemySpecial };

	int weightList[4];
	int countList[4];
	int totalWeights = 0;

	for (int i = 0; i < 4; i++) {
		mTypeCount[i] = 0;
		mTypeMax[i]   = 0;
	}

	for (int i = 0; i < 4; i++) {
		weightList[i] = 0;
		countList[i]  = 0;
	}

	FOREACH_NODE(EnemyNode, mainNode->mChild, currEnemy)
	{
		TekiInfo* tekiInfo = currEnemy->getTekiInfo();
		if (tekiInfo) {
			for (int i = 0; i < 4; i++) {
				if (tekiInfo->mType == enemyTypes[i]) {
					int weight = tekiInfo->mWeight % 10;
					int num    = tekiInfo->mWeight / 10;
					if (weight) {
						totalWeights += weight;
						weightList[i] += weight;
					}
					if (num) {
						mTypeMax[i] += num;
						countList[i] += num;
					}
				}
			}
		}
	}

	int tallyWeights[4];

	int tally    = 0;
	int totalNum = 0;
	for (int i = 0; i < 4; i++) {
		totalNum += countList[i];
		tally += weightList[i];
		tallyWeights[i] = tally;
	}

	for (int i = totalNum; i < mMaxEnemies; i++) {
		int randEnemy = randInt(totalWeights);
		for (int j = 0; j < 4; j++) {
			if (randEnemy < tallyWeights[j]) {
				mTypeMax[j]++;
				break;
			}
		}
	}
}

/**
 * @note Address: 0x80248C90
 * @note Size: 0xF0
 */
void RandEnemyUnit::setEnemyTypeC()
{
	if (mGenerator->mIsVersusMode) {
		setVersusHibaTypeC();
	}

	if (mTypeCount[TEKITYPE_C] < mTypeMax[TEKITYPE_C]) {
		if (mGenerator->mIsVersusMode) {
			setVersusEnemyTypeC();
		}
		if (mTypeCount[TEKITYPE_C] < mTypeMax[TEKITYPE_C]) {
			for (int i = 0; i < 100; i++) {
				int slot = -1;
				setSlotEnemyTypeC(slot, -1);
				setUnitRandEnemyTypeC();
				if (mMapTile && slot >= 0 && mEnemyUnit) {
					makeSetEnemyTypeC(mMapTile, slot, mEnemyUnit);
					if (mTypeCount[TEKITYPE_C] < mTypeMax[TEKITYPE_C]) {
						continue;
					}
					return;
				}
				return;
			}
		}
	}
}

/**
 * @note Address: 0x80248D80
 * @note Size: 0xCC
 */
void RandEnemyUnit::setEnemyTypeF()
{
	if (mTypeCount[TEKITYPE_F] < mTypeMax[TEKITYPE_F]) {
		if (mGenerator->mIsVersusMode) {
			setVersusEnemyTypeF();
		}
		if (mTypeCount[TEKITYPE_F] < mTypeMax[TEKITYPE_F]) {
			for (int i = 0; i < 100; i++) {
				setSlotEnemyTypeF(-1);
				setUnitRandEnemyTypeF();
				if (mMapTile && mSpawn && mEnemyUnit) {
					makeSetEnemyTypeF(mMapTile, mSpawn, mEnemyUnit);
					if (mTypeCount[TEKITYPE_F] < mTypeMax[TEKITYPE_F]) {
						continue;
					}
					return;
				}
				return;
			}
		}
	}
}

/**
 * @note Address: 0x80248E4C
 * @note Size: 0xCC
 */
void RandEnemyUnit::setEnemyTypeB()
{
	if (mTypeCount[TEKITYPE_B] < mTypeMax[TEKITYPE_B]) {
		if (mGenerator->mIsVersusMode) {
			setVersusEnemyTypeB();
		}
		if (mTypeCount[TEKITYPE_B] < mTypeMax[TEKITYPE_B]) {
			for (int i = 0; i < 100; i++) {
				setSlotEnemyTypeB(-1);
				setUnitRandEnemyTypeB();
				if (mMapTile && mSpawn && mEnemyUnit) {
					makeSetEnemyTypeB(mMapTile, mSpawn, mEnemyUnit);
					if (mTypeCount[TEKITYPE_B] < mTypeMax[TEKITYPE_B]) {
						continue;
					}
					return;
				}
				return;
			}
		}
	}
}

/**
 * @note Address: 0x80248F18
 * @note Size: 0x104
 */
void RandEnemyUnit::setEnemyTypeA()
{
	if (mTypeCount[TEKITYPE_A] < mTypeMax[TEKITYPE_A]) {
		if (mGenerator->mIsVersusMode) {
			setVersusEasyEnemy();
			setVersusEnemyTypeA();
		}
		if (mTypeCount[TEKITYPE_A] < mTypeMax[TEKITYPE_A]) {
			for (int i = 0; i < 100; i++) {
				int max   = 0;
				int min   = 0;
				int count = 0;
				setSlotEnemyTypeA(max, min, -1);
				setUnitRandEnemyTypeA(count, max, min);
				if (mMapTile && mSpawn && mEnemyUnit && count) {
					makeSetEnemyTypeA(mMapTile, mSpawn, mEnemyUnit, count);
					if (mTypeCount[TEKITYPE_A] < mTypeMax[TEKITYPE_A]) {
						continue;
					}
					return;
				}
				return;
			}
		}
	}
}

/**
 * @note Address: 0x8024901C
 * @note Size: 0x190
 */
void RandEnemyUnit::setVersusHibaTypeC()
{
	if (mIsVersusHiba) {
		TekiInfo* info = new TekiInfo;
		info->mEnemyID = EnemyTypeID::EnemyID_ElecHiba;
		info->mType    = BaseGen::CGT_DoorSeam;

		EnemyUnit* unit = new EnemyUnit;
		unit->mTekiInfo = info;

		FOREACH_NODE(MapNode, mGenerator->getPlacedNodes()->mChild, currTile)
		{
			if (currTile->mUnitInfo->getUnitKind() == UNITKIND_Room) {
				int numDoors = currTile->getNumDoors();
				for (int i = 0; i < numDoors; i++) {
					if (!currTile->isGateSetDoor(i)) {
						Vector3f pos     = currTile->getDoorGlobalPosition(i);
						f32 dir          = currTile->getDoorGlobalDirection(i);
						EnemyNode* enemy = new EnemyNode(unit, nullptr, 1);
						enemy->setGlobalData(pos, dir);
						enemy->setBirthDoorIndex(i);
						currTile->mEnemyNode->add(enemy);
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x802491AC
 * @note Size: 0x1A4
 */
void RandEnemyUnit::setVersusEnemyTypeC()
{
	int count = 0;
	FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
	{
		TekiInfo* info = currEnemy->getTekiInfo();
		if (info && info->mType == BaseGen::CGT_DoorSeam) {
			count += info->mWeight / 10;
			if (count > mTypeCount[TEKITYPE_C]) {
				int altNum     = (count - mTypeCount[TEKITYPE_C]) % 2;
				int roundedMax = ((count - mTypeCount[TEKITYPE_C]) / 2) * 2;

				int randIdx = randInt(2);
				for (int i = 0; i < roundedMax; i++, randIdx ^= 1) {
					int slot = -1;
					setSlotEnemyTypeC(slot, randIdx);

					if (mMapTile && slot >= 0 && mEnemyUnit) {
						makeSetEnemyTypeC(mMapTile, slot, mEnemyUnit);
						continue;
					}
					return;
				}

				if (altNum) {
					int slot = -1;
					setSlotEnemyTypeC(slot, -1);

					if (mMapTile && slot >= 0 && mEnemyUnit) {
						makeSetEnemyTypeC(mMapTile, slot, mEnemyUnit);
						continue;
					}
					return;
				}
			}
		}
	}
}

/**
 * @note Address: 0x80249350
 * @note Size: 0x2F8
 */
void RandEnemyUnit::setSlotEnemyTypeC(int& doorIdx, int vsColor)
{
	MapNode* mapTiles[256];
	int openDoorIndices[256];
	int doorScores[256];

	int counter    = 0;
	int scoreTally = 0;

	MapNode* placedNodes = mGenerator->getPlacedNodes();

	if (mGenerator->mIsVersusMode) { // Versus mode
		int vsScore = 0;
		int sign    = 0;
		if (vsColor == Blue) {
			MapNode* redOnyon = mMapScore->getFixObjNode(FIXNODE_VsRedOnyon);
			if (redOnyon) {
				vsScore = redOnyon->getVersusScore();
				sign    = -1;
			}
		} else if (vsColor == Red) {
			MapNode* blueOnyon = mMapScore->getFixObjNode(FIXNODE_VsBlueOnyon);
			if (blueOnyon) {
				vsScore = blueOnyon->getVersusScore();
				sign    = 1;
			}
		}
		for (CNode* child = placedNodes->mChild; child; child = child->mNext) {
			MapNode* node = static_cast<MapNode*>(child);
			// caps are always connected to not-caps, so don't need to worry about them
			if (node->mUnitInfo->getUnitKind() == UNITKIND_Room || node->mUnitInfo->getUnitKind() == UNITKIND_Corridor) {
				int numDoors = node->getNumDoors();
				for (int i = 0; i < numDoors; i++) {
					if (!node->isGateSetDoor(i)) {
						mapTiles[counter]        = node;
						openDoorIndices[counter] = i;
						doorScores[counter]      = sign * (vsScore + mapTiles[counter]->getVersusScore());
						if (doorScores[counter] <= 0) {
							doorScores[counter] = 1;
						}
						scoreTally += doorScores[counter];
						counter++;
					}
				}
			}
		}

	} else { // story mode
		for (CNode* child = placedNodes->mChild; child; child = child->mNext) {
			MapNode* node = static_cast<MapNode*>(child);
			// caps are always connected to not-caps, so don't need to worry about them
			if (node->mUnitInfo->getUnitKind() == UNITKIND_Room || node->mUnitInfo->getUnitKind() == UNITKIND_Corridor) {
				int numDoors = node->getNumDoors();

				int scoreWeight = 1; // corridor weight
				if (node->mUnitInfo->getUnitKind() == UNITKIND_Room) {
					scoreWeight = 100; // room weight
				}

				// make list of all open doors, their map tiles, and their score
				for (int i = 0; i < numDoors; i++) {
					if (!node->isGateSetDoor(i)) { // if door is open
						mapTiles[counter]        = node;
						openDoorIndices[counter] = i;
						doorScores[counter]      = scoreWeight;
						scoreTally += doorScores[counter];
						counter++;
					}
				}
			}
		}
	}

	mMapTile = nullptr;
	mSpawn   = nullptr;

	if (counter == 0) {
		return;
	}

	int randScoreThreshold = randInt(scoreTally);
	int scoreCounter       = 0;
	for (int i = 0; i < counter; i++) {
		scoreCounter += doorScores[i];
		if (scoreCounter > randScoreThreshold) {
			mMapTile = mapTiles[i];
			doorIdx  = openDoorIndices[i];
			return;
		}
	}
}

/**
 * @note Address: 0x80249648
 * @note Size: 0x1A0
 */
void RandEnemyUnit::setUnitRandEnemyTypeC()
{
	EnemyUnit* enemyList[128];
	int weightList[128];

	int counter     = 0;
	int weightTally = 0;

	EnemyUnit* enemy;
	int weightCounter = 0;
	EnemyNode* node;

	for (node = static_cast<EnemyNode*>(mGenerator->mMainEnemies->mChild); node; node = static_cast<EnemyNode*>(node->mNext)) {
		enemy = node->mEnemyUnit;
		if (enemy->mTekiInfo && enemy->mTekiInfo->mType == BaseGen::CGT_DoorSeam) {
			int ones = enemy->mTekiInfo->mWeight % 10;
			int tens = enemy->mTekiInfo->mWeight / 10;
			if (tens) {
				weightCounter += tens;
				if (weightCounter > mTypeCount[TEKITYPE_C]) {
					mEnemyUnit = enemy;
					return;
				}
			}

			if (ones) {
				enemyList[counter]  = enemy;
				weightList[counter] = ones;
				weightTally += weightList[counter];
				counter++;
			}
		}
	}

	mEnemyUnit = nullptr;
	if (weightTally == 0) {
		return;
	}

	int randWeightThreshold = (f32)weightTally * randFloat();
	int ctr                 = 0;
	for (int i = 0; i < counter; i++) {
		ctr += weightList[i];
		if (ctr > randWeightThreshold) {
			mEnemyUnit = enemyList[i];
			return;
		}
	}
}

/**
 * @note Address: 0x802497E8
 * @note Size: 0xD8
 */
void RandEnemyUnit::makeSetEnemyTypeC(MapNode* tile, int doorIdx, EnemyUnit* enemy)
{
	Vector3f doorPos     = tile->getDoorGlobalPosition(doorIdx);
	f32 doorDir          = tile->getDoorGlobalDirection(doorIdx);
	EnemyNode* enemyNode = new EnemyNode(enemy, nullptr, 1);
	enemyNode->setGlobalData(doorPos, doorDir);
	enemyNode->setBirthDoorIndex(doorIdx);
	tile->mEnemyNode->add(enemyNode);
	mTypeCount[TEKITYPE_C]++;
	mTotalCount++;
}

/**
 * @note Address: 0x802498C0
 * @note Size: 0x17C
 */
void RandEnemyUnit::setVersusEnemyTypeF()
{
	int count = 0;
	FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
	{
		TekiInfo* info = currEnemy->getTekiInfo();
		if (info && info->mType == BaseGen::CGT_EnemySpecial) {
			count += info->mWeight / 10;
			if (count > mTypeCount[TEKITYPE_F]) {
				int altNum     = (count - mTypeCount[TEKITYPE_F]) % 2;
				int roundedMax = ((count - mTypeCount[TEKITYPE_F]) / 2) * 2;

				int randIdx = randInt(2);
				for (int i = 0; i < roundedMax; i++, randIdx ^= 1) {
					setSlotEnemyTypeF(randIdx);

					if (mMapTile && mSpawn) {
						makeSetEnemyTypeF(mMapTile, mSpawn, currEnemy->mEnemyUnit);
						continue;
					}
					return;
				}

				if (altNum) {
					setSlotEnemyTypeF(-1);

					if (mMapTile && mSpawn) {
						makeSetEnemyTypeF(mMapTile, mSpawn, currEnemy->mEnemyUnit);
						continue;
					}
					return;
				}
			}
		}
	}
}

/**
 * @note Address: 0x80249A3C
 * @note Size: 0x3E0
 */
void RandEnemyUnit::setSlotEnemyTypeF(int vsColor)
{
	MapNode* nodeList[128];
	BaseGen* spawnList[128];
	int scoreList[128];
	Vector3f vecArray[3];
	f32 floatArray[3] = { 300.0f, 150.0f, 150.0f };

	int counter      = 0;
	int vsScore      = 0;
	int vsSign       = 0;
	int spawnCounter = 0;
	int scoreTally   = 0;

	MapNode* fixNode;
	BaseGen* fixGen;
	MapNode* placedNodes = mGenerator->getPlacedNodes();
	if (mGenerator->mIsVersusMode) {
		for (int i = FIXNODE_VsStart; i <= FIXNODE_VsEnd; i++) {
			fixNode = mMapScore->getFixObjNode(i);
			fixGen  = mMapScore->getFixObjGen(i);
			if (!fixNode) {
				continue;
			}

			Vector3f spawnPos   = fixNode->getBaseGenGlobalPosition(fixGen);
			vecArray[counter]   = spawnPos;
			floatArray[counter] = 400.0f;

			if (vsColor == Blue && counter == 0) {
				vsScore = fixNode->getVersusScore();
				vsSign  = -1;
			} else if (vsColor == Red && counter == 1) {
				vsScore = fixNode->getVersusScore();
				vsSign  = 1;
			}
			counter++;
		}
	} else {
		// loop through start and exits (pod, hole, fountain)
		for (int i = FIXNODE_Pod; i <= FIXNODE_Fountain; i++) {
			fixNode = mMapScore->getFixObjNode(i);
			fixGen  = mMapScore->getFixObjGen(i);
			if (fixNode) {
				Vector3f spawnPos = fixNode->getBaseGenGlobalPosition(fixGen);
				vecArray[counter] = spawnPos;
				counter++;
			}
		}
	}

	FOREACH_NODE(MapNode, placedNodes->mChild, node)
	{
		if (node->mUnitInfo->getUnitKind() != UNITKIND_Room) {
			continue;
		}

		BaseGen* spawnRoot = node->mUnitInfo->getBaseGen();
		if (!spawnRoot) {
			continue;
		}

		FOREACH_NODE(BaseGen, spawnRoot->mChild, spawn)
		{
			if (spawn->mSpawnType != BaseGen::CGT_EnemySpecial) {
				continue;
			}

			if (isEnemySetGen(node, spawn)) {
				continue;
			}

			bool check = true;
			for (int i = 0; i < counter; i++) {
				if (check) {
					Vector3f spawnPos = node->getBaseGenGlobalPosition(spawn);
					if (spawnPos.distance(vecArray[i]) < floatArray[i]) {
						check = false;
					}
				}
			}

			if (check) {
				nodeList[spawnCounter]  = node;
				spawnList[spawnCounter] = spawn;
				scoreList[spawnCounter] = vsSign * (vsScore + nodeList[spawnCounter]->getVersusScore());
				if (scoreList[spawnCounter] <= 0) {
					scoreList[spawnCounter] = 1;
				}

				scoreTally += scoreList[spawnCounter];
				spawnCounter++;
			}
		}
	}

	mMapTile = nullptr;
	mSpawn   = nullptr;

	if (spawnCounter == 0) {
		return;
	}

	int randScoreThreshold = (f32)scoreTally * randFloat();
	int scoreCounter       = 0;
	for (int i = 0; i < spawnCounter; i++) {
		scoreCounter += scoreList[i];
		if (scoreCounter > randScoreThreshold) {
			mMapTile = nodeList[i];
			mSpawn   = spawnList[i];
			return;
		}
	}
}

/**
 * @note Address: 0x80249E1C
 * @note Size: 0x1A0
 */
void RandEnemyUnit::setUnitRandEnemyTypeF()
{
	EnemyUnit* enemyList[128];
	int weightList[128];

	int counter     = 0;
	int weightTally = 0;

	EnemyUnit* enemy;
	int weightCounter = 0;
	EnemyNode* node;

	for (node = static_cast<EnemyNode*>(mGenerator->mMainEnemies->mChild); node; node = static_cast<EnemyNode*>(node->mNext)) {
		enemy = node->mEnemyUnit;
		if (enemy->mTekiInfo && enemy->mTekiInfo->mType == BaseGen::CGT_EnemySpecial) {
			int ones = enemy->mTekiInfo->mWeight % 10;
			int tens = enemy->mTekiInfo->mWeight / 10;
			if (tens) {
				weightCounter += tens;
				if (weightCounter > mTypeCount[TEKITYPE_F]) {
					mEnemyUnit = enemy;
					return;
				}
			}

			if (ones) {
				enemyList[counter]  = enemy;
				weightList[counter] = ones;
				weightTally += weightList[counter];
				counter++;
			}
		}
	}

	mEnemyUnit = nullptr;
	if (weightTally == 0) {
		return;
	}

	int randWeightThreshold = (f32)weightTally * randFloat();
	int ctr                 = 0;
	for (int i = 0; i < counter; i++) {
		ctr += weightList[i];
		if (ctr > randWeightThreshold) {
			mEnemyUnit = enemyList[i];
			return;
		}
	}
}

/**
 * @note Address: 0x80249FBC
 * @note Size: 0x88
 */
void RandEnemyUnit::makeSetEnemyTypeF(MapNode* tile, BaseGen* spawn, EnemyUnit* enemy)
{
	EnemyNode* enemyNode = new EnemyNode(enemy, spawn, 1);
	enemyNode->makeGlobalData(tile);
	tile->mEnemyNode->add(enemyNode);
	mTypeCount[TEKITYPE_F]++;
	mTotalCount++;
}

/**
 * @note Address: 0x8024A044
 * @note Size: 0x17C
 */
void RandEnemyUnit::setVersusEnemyTypeB()
{
	int count = 0;
	FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
	{
		TekiInfo* info = currEnemy->getTekiInfo();
		if (info && info->mType == BaseGen::CGT_EnemyHard) {
			count += info->mWeight / 10;
			if (count > mTypeCount[TEKITYPE_B]) {
				int altNum     = (count - mTypeCount[TEKITYPE_B]) % 2;
				int roundedMax = ((count - mTypeCount[TEKITYPE_B]) / 2) * 2;

				int randIdx = randInt(2);
				for (int i = 0; i < roundedMax; i++, randIdx ^= 1) {
					setSlotEnemyTypeB(randIdx);

					if (mMapTile && mSpawn) {
						makeSetEnemyTypeB(mMapTile, mSpawn, currEnemy->mEnemyUnit);
						continue;
					}
					return;
				}

				if (altNum) {
					setSlotEnemyTypeB(-1);

					if (mMapTile && mSpawn) {
						makeSetEnemyTypeB(mMapTile, mSpawn, currEnemy->mEnemyUnit);
						continue;
					}
					return;
				}
			}
		}
	}
}

/**
 * @note Address: 0x8024A1C0
 * @note Size: 0x3E0
 */
void RandEnemyUnit::setSlotEnemyTypeB(int vsColor)
{
	MapNode* nodeList[128];
	BaseGen* spawnList[128];
	int scoreList[128];
	Vector3f vecArray[3];
	f32 floatArray[3] = { 300.0f, 200.0f, 200.0f };

	int counter      = 0;
	int vsScore      = 0;
	int vsSign       = 0;
	int spawnCounter = 0;
	int scoreTally   = 0;

	MapNode* fixNode;
	BaseGen* fixGen;
	MapNode* placedNodes = mGenerator->getPlacedNodes();
	if (mGenerator->mIsVersusMode) {
		for (int i = FIXNODE_VsStart; i <= FIXNODE_VsEnd; i++) {
			fixNode = mMapScore->getFixObjNode(i);
			fixGen  = mMapScore->getFixObjGen(i);
			if (!fixNode) {
				continue;
			}

			Vector3f spawnPos   = fixNode->getBaseGenGlobalPosition(fixGen);
			vecArray[counter]   = spawnPos;
			floatArray[counter] = 400.0f;

			if (vsColor == Blue && counter == 0) {
				vsScore = fixNode->getVersusScore();
				vsSign  = -1;
			} else if (vsColor == Red && counter == 1) {
				vsScore = fixNode->getVersusScore();
				vsSign  = 1;
			}
			counter++;
		}
	} else {
		// loop through start and exits (pod, hole, fountain)
		for (int i = FIXNODE_Pod; i <= FIXNODE_Fountain; i++) {
			fixNode = mMapScore->getFixObjNode(i);
			fixGen  = mMapScore->getFixObjGen(i);
			if (fixNode) {
				Vector3f spawnPos = fixNode->getBaseGenGlobalPosition(fixGen);
				vecArray[counter] = spawnPos;
				counter++;
			}
		}
	}

	FOREACH_NODE(MapNode, placedNodes->mChild, node)
	{
		if (node->mUnitInfo->getUnitKind() != UNITKIND_Room) {
			continue;
		}

		BaseGen* spawnRoot = node->mUnitInfo->getBaseGen();
		if (!spawnRoot) {
			continue;
		}

		FOREACH_NODE(BaseGen, spawnRoot->mChild, spawn)
		{
			if (spawn->mSpawnType != BaseGen::CGT_EnemyHard) {
				continue;
			}

			if (isEnemySetGen(node, spawn)) {
				continue;
			}

			bool check = true;
			for (int i = 0; i < counter; i++) {
				if (check) {
					Vector3f spawnPos = node->getBaseGenGlobalPosition(spawn);
					if (spawnPos.distance(vecArray[i]) < floatArray[i]) {
						check = false;
					}
				}
			}

			if (check) {
				nodeList[spawnCounter]  = node;
				spawnList[spawnCounter] = spawn;
				scoreList[spawnCounter] = vsSign * (vsScore + nodeList[spawnCounter]->getVersusScore());
				if (scoreList[spawnCounter] <= 0) {
					scoreList[spawnCounter] = 1;
				}

				scoreTally += scoreList[spawnCounter];
				spawnCounter++;
			}
		}
	}

	mMapTile = nullptr;
	mSpawn   = nullptr;

	if (spawnCounter == 0) {
		return;
	}

	int randScoreThreshold = (f32)scoreTally * randFloat();
	int scoreCounter       = 0;
	for (int i = 0; i < spawnCounter; i++) {
		scoreCounter += scoreList[i];
		if (scoreCounter > randScoreThreshold) {
			mMapTile = nodeList[i];
			mSpawn   = spawnList[i];
			return;
		}
	}
}

/**
 * @note Address: 0x8024A5A0
 * @note Size: 0x1A0
 */
void RandEnemyUnit::setUnitRandEnemyTypeB()
{
	EnemyUnit* enemyList[128];
	int weightList[128];

	int counter     = 0;
	int weightTally = 0;

	EnemyUnit* enemy;
	int weightCounter = 0;
	EnemyNode* node;

	for (node = static_cast<EnemyNode*>(mGenerator->mMainEnemies->mChild); node; node = static_cast<EnemyNode*>(node->mNext)) {
		enemy = node->mEnemyUnit;
		if (enemy->mTekiInfo && enemy->mTekiInfo->mType == BaseGen::CGT_EnemyHard) {
			int ones = enemy->mTekiInfo->mWeight % 10;
			int tens = enemy->mTekiInfo->mWeight / 10;
			if (tens) {
				weightCounter += tens;
				if (weightCounter > mTypeCount[TEKITYPE_B]) {
					mEnemyUnit = enemy;
					return;
				}
			}

			if (ones) {
				enemyList[counter]  = enemy;
				weightList[counter] = ones;
				weightTally += weightList[counter];
				counter++;
			}
		}
	}

	mEnemyUnit = nullptr;
	if (weightTally == 0) {
		return;
	}

	int randWeightThreshold = (f32)weightTally * randFloat();
	int ctr                 = 0;
	for (int i = 0; i < counter; i++) {
		ctr += weightList[i];
		if (ctr > randWeightThreshold) {
			mEnemyUnit = enemyList[i];
			return;
		}
	}
}

/**
 * @note Address: 0x8024A740
 * @note Size: 0x88
 */
void RandEnemyUnit::makeSetEnemyTypeB(MapNode* tile, BaseGen* spawn, EnemyUnit* enemy)
{
	EnemyNode* enemyNode = new EnemyNode(enemy, spawn, 1);
	enemyNode->makeGlobalData(tile);
	tile->mEnemyNode->add(enemyNode);
	mTypeCount[TEKITYPE_B]++;
	mTotalCount++;
}

/**
 * @note Address: 0x8024A7C8
 * @note Size: 0x2CC
 */
void RandEnemyUnit::setVersusEasyEnemy()
{
	MapNode* onyonNodes[] = { nullptr, nullptr };
	BaseGen* onyonGens[]  = { nullptr, nullptr };

	onyonNodes[0] = mMapScore->getFixObjNode(FIXNODE_VsRedOnyon);
	onyonGens[0]  = mMapScore->getFixObjGen(FIXNODE_VsRedOnyon);
	onyonNodes[1] = mMapScore->getFixObjNode(FIXNODE_VsBlueOnyon);
	onyonGens[1]  = mMapScore->getFixObjGen(FIXNODE_VsBlueOnyon);

	EnemyTypeID::EEnemyTypeID vsEasyIDs[] = { EnemyTypeID::EnemyID_Pelplant, EnemyTypeID::EnemyID_UjiA };

	int enemyCounts[ARRAY_SIZE(vsEasyIDs)][2] = { { 0, 0 }, { 0, 0 } };

	EnemyNode* mainNode = mGenerator->mMainEnemies;
	int* counts;

	EnemyUnit* enemyUnits[] = { nullptr, nullptr };

	EnemyNode* nextNode;
	EnemyNode* currNode;
	for (currNode = (EnemyNode*)(mainNode->mChild); currNode;) {
		EnemyUnit* unit    = currNode->mEnemyUnit;
		TekiInfo* currInfo = currNode->getTekiInfo();
		nextNode           = (EnemyNode*)currNode->mNext;

		if (currInfo) {
			if (currInfo->mEnemyID == vsEasyIDs[0]) {
				enemyCounts[0][0] += currInfo->mWeight / 10;
				enemyUnits[0] = unit;
				currNode->del();
				mainNode->addHead(currNode);
			} else if (currInfo->mEnemyID == vsEasyIDs[1]) {
				enemyCounts[1][0] += currInfo->mWeight / 10;
				enemyUnits[1] = unit;
				currNode->del();
				mainNode->addHead(currNode);
			}
		}
		currNode = nextNode;
	}

	counts = enemyCounts[0];
	for (int i = 0; i < 2; counts += 2, i++) {
		if (counts[0] == 0) {
			continue;
		}

		f32 tieBreaker = 0.0f;
		if (counts[0] % 2 != 0) { // this is... always even in-game
			tieBreaker = randWeightFloat(2.0f);
		}

		counts[1] = tieBreaker + counts[0] / 2;
		counts[0] -= counts[1];
		if (enemyUnits[i]) {
			for (int j = 0; j < 2; j++) {
				if (counts[j]) {
					BaseGen* spawnBaseGen = getVersusEasyEnemyBaseGen(onyonNodes[j], onyonGens[j]);
					if (spawnBaseGen) {
						makeSetEnemyTypeA(onyonNodes[j], spawnBaseGen, enemyUnits[i], counts[j]);
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x8024AA94
 * @note Size: 0x144
 */
BaseGen* RandEnemyUnit::getVersusEasyEnemyBaseGen(MapNode* refTile, BaseGen* refSpawn)
{
	f32 minDist              = 12800.0f;
	BaseGen* goodEnoughSpawn = nullptr; // within 200 units of refSpawn
	BaseGen* closestSpawn    = nullptr;

	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, node)
	{
		if (node != refTile) {
			continue;
		}

		BaseGen* rootSpawn = node->mUnitInfo->getBaseGen();
		if (!rootSpawn) {
			continue;
		}
		FOREACH_NODE(BaseGen, rootSpawn->mChild, spawn)
		{
			if (spawn->mSpawnType != BaseGen::CGT_EnemyEasy) {
				continue;
			}

			if (isEnemySetGen(node, spawn)) {
				continue;
			}

			f32 dist = spawn->mPosition.distance(refSpawn->mPosition);
			if (dist < 200.0f) {
				goodEnoughSpawn = spawn;
			} else if (dist < minDist) {
				closestSpawn = spawn;
				minDist      = dist;
			}
		}
	}

	if (closestSpawn) {
		return closestSpawn;
	}

	return goodEnoughSpawn;
}

/**
 * @note Address: 0x8024ABD8
 * @note Size: 0x1D4
 */
void RandEnemyUnit::setVersusEnemyTypeA()
{
	int count = 0;
	FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
	{
		TekiInfo* info = currEnemy->getTekiInfo();
		if (info && info->mType == BaseGen::CGT_EnemyEasy) {
			count += info->mWeight / 10;
			if (count > mTypeCount[TEKITYPE_A]) {
				int remaining = (count - mTypeCount[TEKITYPE_A]);

				int vsColor = randInt(2);

				for (int i = 0; i < remaining; i++, vsColor ^= 1) {
					if (count <= mTypeCount[TEKITYPE_A]) {
						continue;
					}
					int max    = 0;
					int min    = 0;
					int offset = 0;
					setSlotEnemyTypeA(max, min, vsColor);

					max = minVal(max, count - mTypeCount[TEKITYPE_A]);

					int enemiesToMake;
					if (max <= min) {
						enemiesToMake = max;
					} else {
						offset += randInt(max - min + 1);
						enemiesToMake = min + offset;
					}

					if (mMapTile && mSpawn && enemiesToMake) {
						makeSetEnemyTypeA(mMapTile, mSpawn, currEnemy->mEnemyUnit, enemiesToMake);
						continue;
					}
					return;
				}
			}
		}
	}
}

/**
 * @note Address: 0x8024ADAC
 * @note Size: 0x3D4
 */
void RandEnemyUnit::setSlotEnemyTypeA(int& max, int& min, int vsColor)
{
	MapNode* nodeList[128];
	BaseGen* spawnList[128];
	int scoreList[128];
	Vector3f vecArray[2];
	f32 floatArray[2] = { 400.0f, 400.0f };

	int counter      = 0;
	int vsScore      = 0;
	int vsSign       = 0;
	int spawnCounter = 0;
	int scoreTally   = 0;

	MapNode* fixNode;
	BaseGen* fixGen;
	MapNode* placedNodes = mGenerator->getPlacedNodes();
	if (mGenerator->mIsVersusMode) {
		for (int i = FIXNODE_VsStart; i <= FIXNODE_VsEnd; i++) {
			fixNode = mMapScore->getFixObjNode(i);
			fixGen  = mMapScore->getFixObjGen(i);
			if (!fixNode) {
				continue;
			}

			Vector3f spawnPos = fixNode->getBaseGenGlobalPosition(fixGen);
			vecArray[counter] = spawnPos;

			if (vsColor == Blue && counter == 0) {
				vsScore = fixNode->getVersusScore();
				vsSign  = -1;
			} else if (vsColor == Red && counter == 1) {
				vsScore = fixNode->getVersusScore();
				vsSign  = 1;
			}
			counter++;
		}
	} else {
		fixNode = mMapScore->getFixObjNode(FIXNODE_Pod);
		fixGen  = mMapScore->getFixObjGen(FIXNODE_Pod);
		if (fixNode) {
			Vector3f spawnPos   = fixNode->getBaseGenGlobalPosition(fixGen);
			vecArray[counter]   = spawnPos;
			floatArray[counter] = 300.0f;
			counter++;
		}
	}

	FOREACH_NODE(MapNode, placedNodes->mChild, node)
	{
		if (node->mUnitInfo->getUnitKind() != UNITKIND_Room) {
			continue;
		}

		BaseGen* spawnRoot = node->mUnitInfo->getBaseGen();
		if (!spawnRoot) {
			continue;
		}

		FOREACH_NODE(BaseGen, spawnRoot->mChild, spawn)
		{
			if (spawn->mSpawnType != BaseGen::CGT_EnemyEasy) {
				continue;
			}

			if (isEnemySetGen(node, spawn)) {
				continue;
			}

			bool check = true;
			for (int i = 0; i < counter; i++) {
				if (check) {
					Vector3f spawnPos = node->getBaseGenGlobalPosition(spawn);
					if (spawnPos.distance(vecArray[i]) < floatArray[i]) {
						check = false;
					}
				}
			}

			if (check) {
				nodeList[spawnCounter]  = node;
				spawnList[spawnCounter] = spawn;
				scoreList[spawnCounter] = vsSign * (vsScore + nodeList[spawnCounter]->getVersusScore());
				if (scoreList[spawnCounter] <= 0) {
					scoreList[spawnCounter] = 1;
				}

				scoreTally += scoreList[spawnCounter];
				spawnCounter++;
			}
		}
	}

	mMapTile = nullptr;
	mSpawn   = nullptr;

	if (spawnCounter == 0) {
		return;
	}

	int randScoreThreshold = (f32)scoreTally * randFloat();
	int scoreCounter       = 0;
	for (int i = 0; i < spawnCounter; i++) {
		scoreCounter += scoreList[i];
		if (scoreCounter > randScoreThreshold) {
			mMapTile = nodeList[i];
			mSpawn   = spawnList[i];

			max = spawnList[i]->mMaximum;
			min = spawnList[i]->mMinimum;
			return;
		}
	}
}

/**
 * @note Address: 0x8024B180
 * @note Size: 0x298
 */
void RandEnemyUnit::setUnitRandEnemyTypeA(int& count, int max, int min)
{
	EnemyUnit* enemyList[128];
	int weightList[128];

	int counter     = 0;
	int weightTally = 0;

	EnemyUnit* enemy;
	int weightCounter = 0;
	EnemyNode* node;

	for (node = static_cast<EnemyNode*>(mGenerator->mMainEnemies->mChild); node; node = static_cast<EnemyNode*>(node->mNext)) {
		enemy = node->mEnemyUnit;
		if (enemy->mTekiInfo && enemy->mTekiInfo->mType == BaseGen::CGT_EnemyEasy) {
			int ones = enemy->mTekiInfo->mWeight % 10;
			int tens = enemy->mTekiInfo->mWeight / 10;
			if (tens) {
				weightCounter += tens;
				if (weightCounter > mTypeCount[TEKITYPE_A]) {
					mEnemyUnit = enemy;

					int goalAmt = weightCounter - mTypeCount[TEKITYPE_A];
					if (max < goalAmt) {
						goalAmt = max;
					}
					if (goalAmt <= min) {
						count = goalAmt;
						return;
					}

					count = min + randInt(goalAmt - min + 1);
					return;
				}
			}

			if (ones) {
				enemyList[counter]  = enemy;
				weightList[counter] = ones;
				weightTally += weightList[counter];
				counter++;
			}
		}
	}

	mEnemyUnit = nullptr;
	if (weightTally == 0) {
		return;
	}

	int randWeightThreshold = (f32)weightTally * randFloat();
	int ctr                 = 0;
	for (int i = 0; i < counter; i++) {
		ctr += weightList[i];
		if (ctr > randWeightThreshold) {
			mEnemyUnit = enemyList[i];

			int goalAmt = mMaxEnemies - mTotalCount;
			if (max < goalAmt) {
				goalAmt = max;
			}

			if (goalAmt <= min) {
				count = goalAmt;
				return;
			}

			count = min + randInt(goalAmt - min + 1);
			return;
		}
	}
}

/**
 * @note Address: 0x8024B418
 * @note Size: 0x420
 */
void RandEnemyUnit::makeSetEnemyTypeA(MapNode* tile, BaseGen* spawn, EnemyUnit* enemy, int count)
{
	Vector3f vecArray[16];
	Vector3f spawnPos = tile->getBaseGenGlobalPosition(spawn);
	f32 radius        = spawn->mRadius;
	for (int i = 0; i < count; i++) {
		f32 randDist  = randWeightFloat(radius);
		f32 randAngle = randWeightFloat(TAU);
		vecArray[i].x = randDist * sinf(randAngle) + spawnPos.x;
		vecArray[i].y = spawnPos.y;
		vecArray[i].z = randDist * cosf(randAngle) + spawnPos.z;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < count; j++) {
			for (int k = 0; k < count; k++) {
				if (j == k) {
					continue;
				}
				f32 dist     = vecArray[j].distance(vecArray[k]);
				Vector3f sep = vecArray[j] - vecArray[k];
				if (dist < 35.0f) {
					sep.normalise();
					sep *= (0.5f * (35.0f - dist));
					vecArray[j] += sep;
					vecArray[k] -= sep;
				}
			}
		}
	}

	for (int i = 0; i < count; i++) {
		EnemyNode* enemyNode = new EnemyNode(enemy, spawn, 1);
		f32 dir              = JMAAtan2Radian(vecArray[i].x - spawnPos.x, vecArray[i].z - spawnPos.z);
		enemyNode->setGlobalData(vecArray[i], dir);
		tile->mEnemyNode->add(enemyNode);
	}

	mTypeCount[TEKITYPE_A] += count;
	mTotalCount += count;
}

/**
 * @note Address: 0x8024B838
 * @note Size: 0x3C
 */
bool RandEnemyUnit::isEnemySetGen(MapNode* tile, BaseGen* spawn)
{
	if (spawn) {
		for (EnemyNode* node = static_cast<EnemyNode*>(tile->mEnemyNode->mChild); node; node = static_cast<EnemyNode*>(node->mNext)) {
			if (node->mSpawn == spawn) {
				return true;
			}
		}
	}

	return false;
}
} // namespace Cave
} // namespace Game
