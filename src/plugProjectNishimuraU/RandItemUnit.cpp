#include "types.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/Cave/RandMapUnit.h"
#include "Game/Cave/Node.h"
#include "Game/Cave/Info.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {

static const char randItemUnitName[] = "246-RandItemUnit";

/**
 * @note Address: 0x8024E38C
 * @note Size: 0x64
 */
RandItemUnit::RandItemUnit(MapUnitGenerator* generator)
{
	mGenerator = generator;
	mItemCount = 0;
	if (mGenerator->mFloorInfo) {
		mMax = mGenerator->mFloorInfo->getItemMax();
	} else {
		mMax = 0;
	}
	mMapTileList = nullptr;
	mSpawnList   = nullptr;
}

/**
 * @note Address: 0x8024E3F0
 * @note Size: 0x8
 */
void RandItemUnit::setManageClassPtr(RandMapScore* ptr) { mMapScore = ptr; }

/**
 * @note Address: 0x8024E3F8
 * @note Size: 0x104
 */
void RandItemUnit::setItemSlot()
{
	// check that we have space for new items
	if (mItemCount < mMax) {
		// only try to place a max of 100 items, regardless of desired item count
		for (int i = 0; i < 100; i++) {
			// initially null basegen pointer
			BaseGen* currBaseGen = nullptr;
			MapNode* currMapNode;
			// check for hard mode
			if (isItemSetHard()) {
				currMapNode = getItemHardSetMapNode(&currBaseGen);
			} else {
				currMapNode = getItemNormalSetMapNode(&currBaseGen);
			}

			// get an item unit
			ItemUnit* curritemUnit = getItemUnit();

			// if mapnode and item unit exist, make a new item node
			if (currMapNode && curritemUnit) {
				// make item
				ItemNode* newitem = new ItemNode(curritemUnit, currBaseGen, 1);
				// make data global on map node
				newitem->makeGlobalData(currMapNode);
				// add item to nodes
				currMapNode->mItemNode->add((ItemNode*)newitem);
				// increment item count and check we haven't hit our item limit
				mItemCount++;
				if (mItemCount < mMax) {
					continue;
				} else {
					return;
				}
			}
			return;
		}
	}
}

/**
 * @note Address: 0x8024E4FC
 * @note Size: 0x110
 */
bool RandItemUnit::isItemSetDone(MapNode* mapNode, BaseGen* baseGen)
{
	if (baseGen) {
		FOREACH_NODE(ItemNode, mapNode->mItemNode->mChild, node)
		{
			if (node->mSpawn == baseGen) {
				return true;
			}
		}
	} else {
		if (mapNode == mMapScore->getFixObjNode(FIXNODE_Hole)) {
			return true;
		}
		if (mapNode == mMapScore->getFixObjNode(FIXNODE_Fountain)) {
			return true;
		}
		if (mapNode->mItemNode->mChild) {
			return true;
		}

		FOREACH_NODE(EnemyNode, mapNode->mEnemyNode->mChild, node)
		{
			TekiInfo* info = node->mEnemyUnit->mTekiInfo;
			if (info && (info->mDropMode == 0) && (info->mType != BaseGen::CGT_DoorSeam) && (info->mType != BaseGen::CGT_Plant)) {
				return true;
			}
		}
	}
	return false;
}

/**
 * @note Address: 0x8024E60C
 * @note Size: 0xE8
 */
bool RandItemUnit::isGroundCapEnemySetDone(MapNode* mapNode)
{
	if (mapNode == mMapScore->getFixObjNode(FIXNODE_Hole)) {
		return true;
	}
	if (mapNode == mMapScore->getFixObjNode(FIXNODE_Fountain)) {
		return true;
	}
	if (mapNode->mItemNode->mChild) {
		return true;
	}

	FOREACH_NODE(EnemyNode, mapNode->mEnemyNode->mChild, node)
	{
		TekiInfo* info = node->mEnemyUnit->mTekiInfo;
		if (info && (info->mType != BaseGen::CGT_DoorSeam) && (info->mType != BaseGen::CGT_Plant)
		    && (info->mDropMode == 0 || (mGenerator->isPomGroup(info)))) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x8024E6F4
 * @note Size: 0xD0
 */
bool RandItemUnit::isFallCapEnemySetDone(MapNode* mapNode)
{
	if (mapNode == mMapScore->getFixObjNode(FIXNODE_Hole)) {
		return true;
	}
	if (mapNode == mMapScore->getFixObjNode(FIXNODE_Fountain)) {
		return true;
	}

	FOREACH_NODE(EnemyNode, mapNode->mEnemyNode->mChild, node)
	{
		TekiInfo* info = node->mEnemyUnit->mTekiInfo;
		if (info && (info->mType != BaseGen::CGT_DoorSeam) && (info->mType != BaseGen::CGT_Plant)
		    && (info->mDropMode != 0 || (mGenerator->isPomGroup(info)))) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x8024E7C4
 * @note Size: 0xC
 */
void RandItemUnit::setItemDropPositionList(MapNode** tileList, BaseGen** spawnList)
{
	mMapTileList = tileList;
	mSpawnList   = spawnList;
}

/**
 * @note Address: 0x8024E7D0
 * @note Size: 0x228
 */
void RandItemUnit::getItemDropPosition(Vector3f& position, f32 weight, int floorIndex)
{

	MapNode* nodes[2];
	MapNode* dropList[256];
	MapNode* dropNode;

	nodes[0] = mGenerator->mPlacedMapNodes;
	nodes[1] = mGenerator->mVisitedMapNodes;

	int score = weight * (f32)mMapScore->getVersusLowScore() + (1.0f - weight) * (f32)mMapScore->getVersusHighScore();

	if (floorIndex < 0) {
		int dropIndex = 1280000;
		for (int i = 0; i < 2; i++) {
			FOREACH_NODE(MapNode, nodes[i]->mChild, mapNode) { getItemDropMapNode(mapNode, &dropNode, score, dropIndex); }
		}

		if (dropNode) {
			position = getItemBaseGenPosition(dropNode, score);
		} else {
			JUT_PANICLINE(375, "item slot none\n");
		}

	} else {
		int dropIndex = 0;
		BaseGen* basegen[256];
		for (int i = 0; i < 2; i++) {
			FOREACH_NODE(MapNode, nodes[i]->mChild, mapNode) { getItemDropList(mapNode, dropList, basegen, dropIndex); }
		}

		if (floorIndex < dropIndex) {
			position = getItemBaseGenPosition(dropList, basegen, dropIndex, score, floorIndex);
		} else {
			JUT_PANICLINE(398, "item slot not enough\n");
		}
	}
}

/**
 * @note Address: 0x8024E9F8
 * @note Size: 0x38C
 */
MapNode* RandItemUnit::getItemNormalSetMapNode(BaseGen** outGens)
{
	MapNode* mapNodeList[512];
	BaseGen* baseGenList[512];
	int nodeScoreList[512];
	int counter    = 0;
	int totalScore = 0;

	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currMapNode)
	{
		if (currMapNode->mUnitInfo->getUnitKind() == UNITKIND_Room) {
			int slotNum = getItemSlotNum(currMapNode);
			if (slotNum) {
				BaseGen* baseGen = currMapNode->mUnitInfo->getBaseGen();
				if (baseGen) {
					FOREACH_NODE(BaseGen, baseGen->mChild, currBaseGen)
					{
						if (currBaseGen->mSpawnType == BaseGen::CGT_TreasureItem) {
							if (!isItemSetDone(currMapNode, currBaseGen)) {
								mapNodeList[counter]   = currMapNode;
								baseGenList[counter]   = currBaseGen;
								nodeScoreList[counter] = (currMapNode->getNodeScore() / slotNum) + 1;
								totalScore += nodeScoreList[counter];
								counter++;
							}
						}
					}
				}
			}
		} else if (IS_SAME_STRING_PREFIX(currMapNode->getUnitName(), "item")) {
			if (!isItemSetDone(currMapNode, nullptr)) {
				mapNodeList[counter]   = currMapNode;
				baseGenList[counter]   = nullptr;
				nodeScoreList[counter] = (currMapNode->getNodeScore() * 10) + 1;
				totalScore += nodeScoreList[counter];
				counter++;
			}
		}
	}

	if (totalScore) {
		int randScore    = randInt(totalScore);
		int scoreCounter = 0;
		for (int i = 0; i < counter; i++) {
			scoreCounter += nodeScoreList[i];
			if (scoreCounter > randScore) {
				outGens[0] = baseGenList[i];
				return mapNodeList[i];
			}
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x8024ED84
 * @note Size: 0x340
 */
MapNode* RandItemUnit::getItemHardSetMapNode(BaseGen** outGens)
{
	MapNode* mapNodeList[512];
	BaseGen* baseGenList[512];
	int counter    = 0;
	int totalScore = -1;

	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currMapNode)
	{
		if (currMapNode->mUnitInfo->getUnitKind() == UNITKIND_Room) {
			int currItemCount = static_cast<ItemNode*>(currMapNode->mItemNode)->getChildCount() + 1;
			int currScore     = currMapNode->getNodeScore() / currItemCount;
			BaseGen* baseGen  = currMapNode->mUnitInfo->getBaseGen();
			if (baseGen) {
				FOREACH_NODE(BaseGen, baseGen->mChild, currBaseGen)
				{
					if (currBaseGen->mSpawnType == BaseGen::CGT_TreasureItem) {
						if (!isItemSetDone(currMapNode, currBaseGen)) {
							if (currScore >= totalScore) {
								if (currScore > totalScore) {
									counter    = 0;
									totalScore = currScore;
								}
								mapNodeList[counter] = currMapNode;
								baseGenList[counter] = currBaseGen;
								counter++;
							}
						}
					}
				}
			}

		} else if (IS_SAME_STRING_PREFIX(currMapNode->getUnitName(), "item")) {
			int currScore = currMapNode->getNodeScore() + 1;
			if (!isItemSetDone(currMapNode, nullptr)) {
				if (currScore >= totalScore) {
					if (currScore > totalScore) {
						counter    = 0;
						totalScore = currScore;
					}
					mapNodeList[counter] = currMapNode;
					baseGenList[counter] = nullptr;
					counter++;
				}
			}
		}
	}

	if (counter) {
		int randIndex = randInt(counter);
		outGens[0]    = baseGenList[randIndex];
		return mapNodeList[randIndex];
	}

	return nullptr;
}

/**
 * @note Address: 0x8024F0C4
 * @note Size: 0x180
 */
ItemUnit* RandItemUnit::getItemUnit()
{
	ItemUnit* unitList[512];
	int weightList[512];
	int total   = 0;
	int counter = 0;
	int tally   = 0;
	FOREACH_NODE(ItemNode, mGenerator->mItemNode->mChild, currItem)
	{
		if (currItem->mUnit->mInfo) {
			int weight = currItem->mUnit->mInfo->mWeight % 10;
			int val    = currItem->mUnit->mInfo->mWeight / 10;

			if (weight) {
				unitList[counter]   = currItem->mUnit;
				weightList[counter] = weight;
				tally += weightList[counter];
				counter++;
			}

			if (val) {
				total += val;
				if (mItemCount < total) {
					return currItem->mUnit;
				}
			}
		}
	}

	if (tally) {
		int randLimit = randInt(tally);
		int newTally  = 0;
		for (int i = 0; i < counter; i++) {
			newTally += weightList[i];
			if (newTally > randLimit) {
				return unitList[i];
			}
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x8024F244
 * @note Size: 0x60
 */
int RandItemUnit::getItemSlotNum(MapNode* mapNode)
{
	int itemSlotNum  = 0;
	BaseGen* baseGen = mapNode->mUnitInfo->getBaseGen();
	if (baseGen) {
		FOREACH_NODE(BaseGen, baseGen->mChild, node)
		{
			if (node->mSpawnType == BaseGen::CGT_TreasureItem) {
				itemSlotNum++;
			}
		}
	}
	return itemSlotNum;
}

/**
 * @note Address: 0x8024F2A4
 * @note Size: 0x5C
 */
bool RandItemUnit::isItemSetHard()
{
	switch (mGenerator->mRandItemType) {
	case 0:
	case 1:
		return false;
	case 2:
	case 3:
		if (mItemCount != 0) {
			return false;
		}
		return true;
	case 4:
		return true;
	default:
		return false;
	}
}

/**
 * @note Address: 0x8024F300
 * @note Size: 0x148
 */
void RandItemUnit::getItemDropMapNode(MapNode* targetTile, MapNode** nodeList, int currentScore, int& bestScore)
{
	bool check   = false;
	int unitKind = targetTile->mUnitInfo->getUnitKind();

	if (unitKind == UNITKIND_Room) {
		check = true;
	} else if (unitKind == UNITKIND_Cap) {
		if (IS_SAME_STRING_PREFIX(targetTile->getUnitName(), "item")) {
			check = true;
		}
	} else if (unitKind == UNITKIND_Corridor) {
		if (targetTile->getNumDoors() == 2) {
			// make sure doors are parallel- north/south are even, east/west are odd
			int doorDir = (targetTile->getDoorDirect(CD_Up) + targetTile->getDoorDirect(CD_Right)) % 2;
			if (doorDir == 0) {
				check = true;
			}
		} else {
			check = true;
		}
	}

	if (check) {
		int scoreDiff = targetTile->getVersusScore() - currentScore;
		int absScore  = absVal(scoreDiff);
		if (absScore < bestScore || (absScore == bestScore && randWeightFloat(1.0f) < 0.5f)) {
			*nodeList = targetTile;
			bestScore = absScore;
		}
	}
}

/**
 * @note Address: 0x8024F448
 * @note Size: 0x314
 */
Vector3f RandItemUnit::getItemBaseGenPosition(MapNode* node, int score)
{
	BaseGen* genList[64];
	int counter        = 0;
	Vector3f globalPos = node->getBaseGenGlobalPosition(nullptr);
	BaseGen* gen       = node->mUnitInfo->getBaseGen();
	if (gen) {
		FOREACH_NODE(BaseGen, gen->mChild, currGen)
		{
			if (currGen->mSpawnType == BaseGen::CGT_TreasureItem) {
				genList[counter] = currGen;
				counter++;
			} else if (currGen->mSpawnType == BaseGen::CGT_EnemyEasy) {
				genList[counter] = currGen;
				counter++;
			} else if (currGen->mSpawnType == BaseGen::CGT_EnemyHard) {
				genList[counter] = currGen;
				counter++;
			}
		}
	}

	if (counter > 0) {
		Vector3f positions[32];
		Vector3f onyonPos;
		if (node->getVersusScore() - score > 0) {
			onyonPos = mMapScore->getFixObjNode(FIXNODE_VsRedOnyon)->getBaseGenGlobalPosition(mMapScore->getFixObjGen(FIXNODE_VsRedOnyon));
		} else {
			onyonPos
			    = mMapScore->getFixObjNode(FIXNODE_VsBlueOnyon)->getBaseGenGlobalPosition(mMapScore->getFixObjGen(FIXNODE_VsBlueOnyon));
		}

		int counter2 = 0;
		f32 sqrDist  = sqrDistanceXZ(onyonPos, globalPos);
		for (int i = 0; i < counter; i++) {
			Vector3f genPos = node->getBaseGenGlobalPosition(genList[i]);
			if (sqrDistanceXZ(onyonPos, genPos) < sqrDist) {
				positions[counter2] = genPos;
				counter2++;
			}
		}

		if (counter2) {
			int randIdx      = randInt(counter2);
			Vector3f* outVec = &positions[randIdx];
			return *outVec;
		} else {
			int randIdx = randInt(counter);
			return node->getBaseGenGlobalPosition(genList[randIdx]);
		}
	} else {
		return globalPos;
	}
}

/**
 * @note Address: 0x8024F75C
 * @note Size: 0x18C
 */
void RandItemUnit::getItemDropList(MapNode* targetTile, MapNode** nodeList, BaseGen** dropList, int& idx)
{
	int unitKind = targetTile->mUnitInfo->getUnitKind();
	if (unitKind == UNITKIND_Room) {
		BaseGen* gen = targetTile->mUnitInfo->getBaseGen();
		if (gen) {
			FOREACH_NODE(BaseGen, gen->mChild, currGen)
			{
				if (currGen->mSpawnType == BaseGen::CGT_TreasureItem) {
					nodeList[idx] = targetTile;
					dropList[idx] = currGen;
					idx++;
				}
			}
		}
	} else if (unitKind == UNITKIND_Cap) {
		if (IS_SAME_STRING_PREFIX(targetTile->getUnitName(), "item")) {
			nodeList[idx] = targetTile;
			dropList[idx] = nullptr;
			idx++;
		}
	} else if (unitKind == UNITKIND_Corridor) {
		if (targetTile->getNumDoors() == 2) {
			// make sure doors are parallel- north/south are even, east/west are odd
			int doorDir = (targetTile->getDoorDirect(CD_Up) + targetTile->getDoorDirect(CD_Right)) % 2;
			if (doorDir == 0) {
				nodeList[idx] = targetTile;
				dropList[idx] = nullptr;
				idx++;
			}
		} else {
			nodeList[idx] = targetTile;
			dropList[idx] = nullptr;
			idx++;
		}
	}
}

/**
 * @note Address: 0x8024F8E8
 * @note Size: 0x2CC
 */
Vector3f RandItemUnit::getItemBaseGenPosition(MapNode** candidates, BaseGen** spawnerList, int nodeCount, int minScore, int idx)
{
	MapNode* redOnyonNode  = mMapScore->getFixObjNode(FIXNODE_VsRedOnyon);  // r27
	MapNode* blueOnyonNode = mMapScore->getFixObjNode(FIXNODE_VsBlueOnyon); // r28

	BaseGen* redOnyonGen  = mMapScore->getFixObjGen(FIXNODE_VsRedOnyon);  // r29
	BaseGen* blueOnyonGen = mMapScore->getFixObjGen(FIXNODE_VsBlueOnyon); // r30

	f32 maxDist = 400.0f;
	int distScores[128];

	for (int i = 0; i < nodeCount; i++) {
		MapNode* currNode = candidates[i];
		f32 len           = 400.0f;
		if (redOnyonNode == currNode) {
			Vector3f onyonPos = redOnyonGen->mPosition;
			Vector3f genPos   = spawnerList[i]->mPosition;
			Vector3f sep      = Vector3f(onyonPos.y - genPos.y, onyonPos.z - genPos.z, onyonPos.x - genPos.x);
			len               = _length2(sep);
		} else if (blueOnyonNode == currNode) {
			Vector3f onyonPos = blueOnyonGen->mPosition;
			Vector3f genPos   = spawnerList[i]->mPosition;
			Vector3f sep      = Vector3f(onyonPos.y - genPos.y, onyonPos.z - genPos.z, onyonPos.x - genPos.x);
			len               = _length2(sep);
		}

		if (len < maxDist) {
			distScores[i] = 12800 - (int)len;
		} else {
			distScores[i] = absVal(currNode->getVersusScore() - minScore);
		}
	}

	getItemDropSortingList(candidates, spawnerList, distScores, nodeCount);

	for (int i = 0; i < nodeCount; i++) {
		bool check = true;
		for (int j = 0; j < idx; j++) {
			if (candidates[i] == mMapTileList[j] && spawnerList[i] == mSpawnList[j]) {
				check = false;
			}
		}

		if (check) {
			mMapTileList[idx] = candidates[i];
			mSpawnList[idx]   = spawnerList[i];

			return mMapTileList[idx]->getBaseGenGlobalPosition(mSpawnList[idx]);
		}
	}

	JUT_PANICLINE(928, "not search item slot\n");
	return Vector3f::zero;
}

/**
 * @note Address: 0x8024FBB4
 * @note Size: 0x114
 */
void RandItemUnit::getItemDropSortingList(MapNode** candidateNodes, BaseGen** spawnerList, int* scores, int count)
{
	int max = count - 1;
	for (int i = 0; i < max; i++) {
		for (int j = i + 1; j < count; j++) {
			if (scores[i] > scores[j] || (scores[i] == scores[j] && randWeightFloat(1.0f) < 0.5f)) {
				MapNode* oldNode  = candidateNodes[i];
				BaseGen* oldGen   = spawnerList[i];
				int oldScore      = scores[i];
				candidateNodes[i] = candidateNodes[j];
				spawnerList[i]    = spawnerList[j];
				scores[i]         = scores[j];
				candidateNodes[j] = oldNode;
				spawnerList[j]    = oldGen;
				scores[j]         = oldScore;
			}
		}
	}
}
} // namespace Cave
} // namespace Game
