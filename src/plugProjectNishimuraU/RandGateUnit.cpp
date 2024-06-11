#include "Dolphin/rand.h"
#include "Game/Cave/RandMapMgr.h"

namespace Game {
namespace Cave {
/**
 * @note Address: 0x8024FE70
 * @note Size: 0x74
 */
RandGateUnit::RandGateUnit(MapUnitGenerator* generator)
{
	mGenerator       = generator;
	mGatePlacedCount = 0;

	FloorInfo* floorInfo = mGenerator->mFloorInfo;
	if (floorInfo) {
		mGateMax       = floorInfo->getGateMax();
		mGateWeightSum = floorInfo->getGateWeightSum();
	} else {
		mGateMax       = 0;
		mGateWeightSum = 0;
	}
}

/**
 * @note Address: 0x8024FEE4
 * @note Size: 0xC
 */
void RandGateUnit::setManageClassPtr(RandMapScore* score, RandItemUnit* item)
{
	mMapScore = score;
	mItemUnit = item;
}

/**
 * @note Address: 0x8024FEF0
 * @note Size: 0xD8
 */
void RandGateUnit::setGateDoor()
{
	MapNode* room;
	if (mGatePlacedCount < mGateMax) {
		for (int i = 0; i < 100; i++) {
			GateUnit* gate = getGateUnit();
			int roomNum;
			room = getRoomNodePtr(roomNum);

			if (gate != nullptr && room) {
				int doorDirect = room->getDoorDirect(roomNum);
				room->mGateNode->add(new GateNode(gate, roomNum, doorDirect));
				mGatePlacedCount++;

				if (mGatePlacedCount < mGateMax) {
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
 * @note Address: 0x8024FFC8
 * @note Size: 0xD4
 */
GateUnit* RandGateUnit::getGateUnit()
{
	int weight     = mGateWeightSum;
	GateNode* node = static_cast<GateNode*>(mGenerator->mGateNode);

	int gateSum    = 0;
	int randCutoff = randInt(weight);

	GateUnit* gate;
	GateInfo* info;
	for (GateNode* child = static_cast<GateNode*>(node->mChild); child != nullptr; child = static_cast<GateNode*>(child->mNext)) {
		gate = child->mUnit;
		info = gate->mInfo;
		if (info) {
			gateSum += info->mWeight;
		} else {
			gateSum++;
		}
		if (gateSum > randCutoff) {
			return gate;
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8025009C
 * @note Size: 0xBC
 */
MapNode* RandGateUnit::getRoomNodePtr(int& idx)
{
	MapNode* node = getItemSetCapDoor(idx);
	if (node) {
		return node;
	}

	node = getRoomMinScoreDoor(idx);
	if (node) {
		return node;
	}

	if ((randWeightFloat(1.0f)) < 0.8f) {
		node = getRoomLowScoreDoor(idx);
		if (node) {
			return node;
		}
	}

	return getRandomScoreDoor(idx);
}

/**
 * @note Address: 0x80250158
 * @note Size: 0x160
 */
MapNode* RandGateUnit::getItemSetCapDoor(int& idx)
{
	MapNode* nodeArray[512];
	int idxArray[512];
	int validDoorCount = 0;

	MapNode* node = static_cast<MapNode*>(mGenerator->mPlacedMapNodes->mChild);
	for (node; node != nullptr; node = static_cast<MapNode*>(node->mNext)) {
		if (node->mUnitInfo->getUnitKind() == UNITKIND_Cap && IS_SAME_STRING_PREFIX(node->getUnitName(), "item")
		    && mItemUnit->isItemSetDone(node, nullptr)) {
			for (int i = 0; i < node->getNumDoors(); i++) {
				if (!node->isGateSetDoor(i)) {
					nodeArray[validDoorCount] = node;
					idxArray[validDoorCount]  = i;
					validDoorCount++;
				}
			}
		}
	}

	if (validDoorCount != 0) {
		int randIdx = randInt(validDoorCount);
		idx         = idxArray[randIdx];
		return nodeArray[randIdx];
	}
	return nullptr;
}

/**
 * @note Address: 0x802502B8
 * @note Size: 0xE4
 */
MapNode* RandGateUnit::getRoomMinScoreDoor(int& idx)
{
	MapNode* node = static_cast<MapNode*>(mGenerator->mPlacedMapNodes->mChild);
	for (node; node != nullptr; node = static_cast<MapNode*>(node->mNext)) {
		if (node->mUnitInfo->getUnitKind() == UNITKIND_Room && node != mMapScore->getFixObjNode(FIXNODE_Pod)) {
			int minScore = 128000;
			for (int i = 0; i < node->getNumDoors(); i++) {
				int doorScore = node->mAdjustInfo[i].mDoorScore;
				if (doorScore < minScore) {
					minScore = doorScore;
					idx      = i;
				}
			}
			if (minScore < 128000 && !node->isGateSetDoor(idx)) {
				return node;
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8025039C
 * @note Size: 0x218
 */
Game::Cave::MapNode* Game::Cave::RandGateUnit::getRoomLowScoreDoor(int& idx)
{
	MapNode* nodeArray[512];
	int idxArray[512], scoreArray[512];
	int total = 0, scoreSum = 0, score = 0;
	// score = scoreSum = total = 0;
	MapNode* placedNodes = mGenerator->getPlacedNodes();
	for (MapNode* node = placedNodes->getChild(); node != nullptr; node = node->getNext()) {
		if (node->mUnitInfo->getUnitKind() == UNITKIND_Room) {
			for (int i = 0; i < node->getNumDoors(); i++) {
				if ((node->mAdjustInfo[i].mDoorScore > score) && !node->isGateSetDoor(i)) {
					score = node->mAdjustInfo[i].mDoorScore;
				}
			}
		}
	}

	for (MapNode* node = placedNodes->getChild(); node != nullptr; node = node->getNext()) {
		if (node->mUnitInfo->getUnitKind() == UNITKIND_Room) {
			for (int i = 0; i < node->getNumDoors(); i++) {
				if (!node->isGateSetDoor(i)) {
					nodeArray[total]  = node;
					idxArray[total]   = i;
					scoreArray[total] = (score + 1) - node->mAdjustInfo[i].mDoorScore;
					scoreSum += scoreArray[total];
					total++;
				}
			}
		}
	}

	if (scoreSum != 0) {
		int randLimit = randInt(scoreSum), tally = 0;
		for (int i = 0; i < total; i++) {
			tally += scoreArray[i];
			if (tally > randLimit) {
				idx = idxArray[i];
				return nodeArray[i];
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x802505B4
 * @note Size: 0x270
 */
MapNode* RandGateUnit::getRandomScoreDoor(int& idx)
{
	MapNode* nodeArray[1024];
	int idxArray[1024], doorNumArray[1024];

	int total = 0, totalCount = 0;

	for (MapNode* node = mGenerator->mPlacedMapNodes->getChild(); node != nullptr; node = node->getNext()) {
		int kind      = node->mUnitInfo->getUnitKind();
		int doorCount = node->getNumDoors();
		if (kind == UNITKIND_Room) {
			for (int i = 0; i < doorCount; i++) {
				if (!node->isGateSetDoor(i)) {
					nodeArray[total]    = node;
					idxArray[total]     = i;
					doorNumArray[total] = doorCount;
					totalCount += doorNumArray[total];
					total++;
				}
			}
		} else if (kind == UNITKIND_Corridor) {
			for (int i = 0; i < doorCount; i++) {
				if (!node->isGateSetDoor(i)) {
					nodeArray[total]    = node;
					idxArray[total]     = i;
					doorNumArray[total] = 10 / doorCount;
					totalCount += doorNumArray[total];
					total++;
				}
			}
		} else if (kind == UNITKIND_Cap) {
			for (int i = 0; i < doorCount; i++) {
				if (!node->isGateSetDoor(i)) {
					nodeArray[total]    = node;
					idxArray[total]     = i;
					doorNumArray[total] = doorCount;
					totalCount += doorNumArray[total];
					total++;
				}
			}
		}
	}

	if (totalCount != 0) {
		int randLimit = randInt(totalCount);
		int* pDoorNum = doorNumArray;
		for (int tally = 0, i = 0; i < total; i++) {
			tally += *pDoorNum;
			if (tally > randLimit) {
				idx = idxArray[i];
				return nodeArray[i];
			}
			pDoorNum++;
		}
	}
	return nullptr;
}
} // namespace Cave
} // namespace Game
