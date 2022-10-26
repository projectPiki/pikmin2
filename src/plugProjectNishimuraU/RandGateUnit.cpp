#include "Dolphin/rand.h"
#include "Game/Cave/RandMapMgr.h"

namespace Game {
namespace Cave {
/*
 * --INFO--
 * Address:	8024FE70
 * Size:	000074
 */
RandGateUnit::RandGateUnit(MapUnitGenerator* generator)
{
	m_generator       = generator;
	m_gatePlacedCount = 0;

	FloorInfo* floorInfo = m_generator->m_floorInfo;
	if (floorInfo) {
		m_gateMax       = floorInfo->getGateMax();
		m_gateWeightSum = floorInfo->getGateWeightSum();
	} else {
		m_gateMax       = 0;
		m_gateWeightSum = 0;
	}
}

/*
 * --INFO--
 * Address:	8024FEE4
 * Size:	00000C
 */
void RandGateUnit::setManageClassPtr(RandMapScore* score, RandItemUnit* item)
{
	m_mapScore = score;
	m_itemUnit = item;
}

/*
 * --INFO--
 * Address:	8024FEF0
 * Size:	0000D8
 */
void RandGateUnit::setGateDoor()
{
	MapNode* room;
	if (m_gatePlacedCount < m_gateMax) {
		for (int i = 0; i < 100; i++) {
			GateUnit* gate = getGateUnit();
			int roomNum;
			room = getRoomNodePtr(roomNum);

			if (gate != nullptr && room) {
				int doorDirect = room->getDoorDirect(roomNum);
				room->m_gateNode->add(new GateNode(gate, roomNum, doorDirect));
				m_gatePlacedCount++;

				if (m_gatePlacedCount < m_gateMax) {
					continue;
				} else {
					return;
				}
			}
			return;
		}
	}
}

/*
 * --INFO--
 * Address:	8024FFC8
 * Size:	0000D4
 */
GateUnit* RandGateUnit::getGateUnit()
{
	int weight     = m_gateWeightSum;
	GateNode* node = static_cast<GateNode*>(m_generator->m_gateNode);

	int gateSum    = 0;
	int randCutoff = (int)(weight * randFloat());

	GateUnit* gate;
	GateInfo* info;
	for (GateNode* child = static_cast<GateNode*>(node->m_child); child != nullptr; child = static_cast<GateNode*>(child->m_next)) {
		gate = child->m_unit;
		info = gate->m_info;
		if (info) {
			gateSum += info->m_weight;
		} else {
			gateSum++;
		}
		if (gateSum > randCutoff) {
			return gate;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	8025009C
 * Size:	0000BC
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

/*
 * --INFO--
 * Address:	80250158
 * Size:	000160
 */
MapNode* RandGateUnit::getItemSetCapDoor(int& idx)
{
	MapNode* nodeArray[512];
	int idxArray[512];
	int validDoorCount = 0;

	MapNode* node = static_cast<MapNode*>(m_generator->m_placedMapNodes->m_child);
	for (node; node != nullptr; node = static_cast<MapNode*>(node->m_next)) {
		if (node->m_unitInfo->getUnitKind() == 0 && !strncmp(node->getUnitName(), "item", 4) && m_itemUnit->isItemSetDone(node, nullptr)) {
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
		int randIdx = validDoorCount * randFloat();
		idx         = idxArray[randIdx];
		return nodeArray[randIdx];
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	802502B8
 * Size:	0000E4
 */
MapNode* RandGateUnit::getRoomMinScoreDoor(int& idx)
{
	MapNode* node = static_cast<MapNode*>(m_generator->m_placedMapNodes->m_child);
	for (node; node != nullptr; node = static_cast<MapNode*>(node->m_next)) {
		if (node->m_unitInfo->getUnitKind() == 1 && node != m_mapScore->getFixObjNode(0)) {
			int minScore = 128000;
			for (int i = 0; i < node->getNumDoors(); i++) {
				int doorScore = node->m_adjustInfo[i].m_doorScore;
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

/*
 * --INFO--
 * Address:	8025039C
 * Size:	000218
 */
Game::Cave::MapNode* Game::Cave::RandGateUnit::getRoomLowScoreDoor(int& idx)
{
	MapNode* nodeArray[512];
	int idxArray[512], scoreArray[512];
	int total = 0, scoreSum = 0, score = 0;
	// score = scoreSum = total = 0;
	MapNode* placedNodes = m_generator->getPlacedNodes();
	for (MapNode* node = placedNodes->getChild(); node != nullptr; node = node->getNext()) {
		if (node->m_unitInfo->getUnitKind() == 1) {
			for (int i = 0; i < node->getNumDoors(); i++) {
				if ((node->m_adjustInfo[i].m_doorScore > score) && !node->isGateSetDoor(i)) {
					score = node->m_adjustInfo[i].m_doorScore;
				}
			}
		}
	}

	for (MapNode* node = placedNodes->getChild(); node != nullptr; node = node->getNext()) {
		if (node->m_unitInfo->getUnitKind() == 1) {
			for (int i = 0; i < node->getNumDoors(); i++) {
				if (!node->isGateSetDoor(i)) {
					nodeArray[total]  = node;
					idxArray[total]   = i;
					scoreArray[total] = (score + 1) - node->m_adjustInfo[i].m_doorScore;
					scoreSum += scoreArray[total];
					total++;
				}
			}
		}
	}

	if (scoreSum != 0) {
		int randLimit = scoreSum * randFloat(), tally = 0;
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

/*
 * --INFO--
 * Address:	802505B4
 * Size:	000270
 */
MapNode* RandGateUnit::getRandomScoreDoor(int& idx)
{
	MapNode* nodeArray[1024];
	int idxArray[1024], doorNumArray[1024];

	int total = 0, totalCount = 0;

	for (MapNode* node = m_generator->m_placedMapNodes->getChild(); node != nullptr; node = node->getNext()) {
		int kind      = node->m_unitInfo->getUnitKind();
		int doorCount = node->getNumDoors();
		if (kind == 1) {
			for (int i = 0; i < doorCount; i++) {
				if (!node->isGateSetDoor(i)) {
					nodeArray[total]    = node;
					idxArray[total]     = i;
					doorNumArray[total] = doorCount;
					totalCount += doorNumArray[total];
					total++;
				}
			}
		} else if (kind == 2) {
			for (int i = 0; i < doorCount; i++) {
				if (!node->isGateSetDoor(i)) {
					nodeArray[total]    = node;
					idxArray[total]     = i;
					doorNumArray[total] = 10 / doorCount;
					totalCount += doorNumArray[total];
					total++;
				}
			}
		} else if (kind == 0) {
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
		int randLimit = totalCount * randFloat();
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
