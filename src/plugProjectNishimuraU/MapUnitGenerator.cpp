#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace Cave {

/*
 * --INFO--
 * Address:	8024BAAC
 * Size:	000200
 */
MapUnitGenerator::MapUnitGenerator(MapUnitInterface* interface, int p1, FloorInfo* floorInfo, bool isFinalFloor, EditMapUnit* editInfo)
{
	// Constructor for MapUnitGenerator
	//     - creates new mapnodes, enemynodes, gatenode, itemnode and sets some bools
	//     - calls all default functions to create The Map

	m_mapNode    = new MapNode;
	m_mapNodeArr = new MapNode[3];

	m_enemyNodeA = new EnemyNode;
	m_enemyNodeB = new EnemyNode;
	m_enemyNodeC = new EnemyNode;

	m_gateNode = new GateNode;
	m_itemNode = new ItemNode;

	m_placedMapNodes  = new MapNode;
	m_visitedMapNodes = new MapNode;

	m_floorInfo    = floorInfo;
	m_isFinalFloor = isFinalFloor;

	if (m_floorInfo) {
		m_hasEscapeFountain = m_floorInfo->hasEscapeFountain(-1);
	} else {
		m_hasEscapeFountain = false;
	}

	if ((gameSystem) && (gameSystem->m_mode == GSM_VERSUS_MODE)) {
		m_versusMode = true;
	} else {
		m_versusMode = false;
	}

	createEditMapInfo(editInfo);
	createMemList(interface, p1);
	memMapListSorting();
	createMapPartsList();
	createEnemyList();
	createCapEnemyList();
	createGateList();
	createItemList();
	createCaveLevel();
}

/*
 * --INFO--
 * Address:	8024BCD0
 * Size:	0000AC
 */
void MapUnitGenerator::createEditMapInfo(EditMapUnit* editInfo)
{
	m_editMapUnit = 0;

	if (m_versusMode && editInfo) {
		if (editInfo->_1C < -1) {
			float randcomp = 1.0f;
			randcomp       = randWeightFloat(randcomp);
			if (randcomp < editInfo->_00) {
				m_editMapUnit = editInfo;
			}
		} else if (editInfo->_1C >= 0) {
			m_editMapUnit = editInfo;
		}
	}
}

/*
 * --INFO--
 * Address:	8024BD7C
 * Size:	00024C
 */
void MapUnitGenerator::createMemList(MapUnitInterface* interface, int interfaceCount)
{
	for (int i = 0; i < interfaceCount; i++) {
		MapUnitInterface* currInterface = &interface[i];

		if (isCreateList(currInterface)) {
			MapUnits* currMapUnits = new MapUnits(nullptr);
			currMapUnits->setUnitName(const_cast<char*>(currInterface->m_name));
			currMapUnits->setUnitIndex(i);
			currMapUnits->setUnitKind((s16)currInterface->m_unitKind);

			int cellX;
			int cellY;
			currInterface->getCellSize(cellX, cellY);
			currMapUnits->setUnitSize(cellX, cellY);

			int currDoorCount = currInterface->getDoorCount();
			currMapUnits->setDoorNum(currDoorCount);

			currMapUnits->setBaseGenPtr(currInterface->m_baseGen);

			for (int j = 0; j < currDoorCount; j++) {
				Game::Door* currDoor = currInterface->getDoor(j);

				Game::Cave::Door doorInfo;
				doorInfo.m_offset    = currDoor->m_offs;
				doorInfo.m_direction = currDoor->m_dir;

				int linkCount = currDoor->getLinkCount();
				currMapUnits->m_doorNode->add(new DoorNode(doorInfo));

				for (int k = 0; k < linkCount; k++) {
					DoorLink* link = currDoor->getLink(k);

					Adjust* currAdjust = new Adjust();
					currAdjust->_00    = link->m_doorID;
					currAdjust->_04    = (s32)(link->m_dist / 10.0f);
					currAdjust->_08    = (s32)link->m_tekiFlag;

					AdjustNode* currAdjustNode = new AdjustNode(currAdjust);

					currMapUnits->m_doorCounts[j].add(currAdjustNode);
				}
			}

			for (int j = 0; j < 4; j++) {
				UnitInfo* currInfo = new UnitInfo(currMapUnits);
				currInfo->setUnitRotation(j);
				currInfo->create();
				MapNode* currMapNode = new MapNode(currInfo);

				m_mapNode->add(currMapNode);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8024BFC8
 * Size:	000078
 */
bool Cave::MapUnitGenerator::isCreateList(Game::MapUnitInterface* interface)
{
	if (!m_versusMode) {
		return true;
	}

	if (m_editMapUnit) {
		return true;
	}

	if (interface->m_unitKind != 1) {
		return true;
	}
	BaseGen* currBaseGen = interface->m_baseGen;
	if (currBaseGen) {
		BaseGen* childGen = (BaseGen*)currBaseGen->m_child;
		for (childGen; childGen; childGen = (BaseGen*)childGen->m_next) {
			if (childGen->m_spawnType == 7) {
				return true;
			}
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	8024C040
 * Size:	0000CC
 */
void MapUnitGenerator::memMapListSorting()
{
	MapNode* childMap;
	MapNode* nextNode;
	CNode* childMap_CNode;
	for (childMap = m_mapNode->getChild(); childMap; childMap = nextNode) {
		nextNode       = childMap->getNext();
		childMap_CNode = (CNode*)childMap;

		int childArea  = childMap->m_unitInfo->getUnitSizeX() * childMap->m_unitInfo->getUnitSizeY();
		int childDoors = childMap->getNumDoors();

		MapNode* currNode = nextNode;
		for (currNode; currNode; currNode = currNode->getNext()) {

			int nextArea  = currNode->m_unitInfo->getUnitSizeX() * currNode->m_unitInfo->getUnitSizeY();
			int nextDoors = currNode->getNumDoors();

			if ((childArea > nextArea) || (childArea == nextArea) && (childDoors > nextDoors)) {
				childMap_CNode->del();
				m_mapNode->add(childMap_CNode);
				break;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8024C10C
 * Size:	00014C
 */
void MapUnitGenerator::createMapPartsList()
{
	for (int i = 0; i < 3; i++) {
		CNode* childNode = getStartNode();
		CNode* currNode  = getMapNodeItem(i);

		MapNode* currMapNode = static_cast<MapNode*>(currNode);
		for (childNode; childNode; childNode = childNode->m_next) {
			MapNode* mapNode = static_cast<MapNode*>(childNode);
			if (i == mapNode->m_unitInfo->getUnitKind()) {
				currMapNode->add(new MapNode(mapNode->m_unitInfo));
			}
		}

		for (int childCount = currMapNode->getChildCount(), j = 0; j < childCount; j++) {
			int randIdx = (childCount * randFloat());

			if (CNode* randNode = static_cast<MapNode*>(currMapNode->getChildAt(randIdx))) {
				randNode->del();
				currNode->add(randNode);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8024C258
 * Size:	0000B4
 */
void MapUnitGenerator::createEnemyList()
{
	EnemyNode* enemyNode;
	EnemyUnit* enemyUnit;
	for (int i = 0; i < m_floorInfo->getTekiInfoNum(); i++) {
		enemyUnit             = new EnemyUnit;
		enemyNode             = new EnemyNode(enemyUnit, 0, i);
		enemyUnit->m_tekiInfo = m_floorInfo->getTekiInfo(i);
		m_enemyNodeA->add(enemyNode);
	}
}

/*
 * --INFO--
 * Address:	8024C30C
 * Size:	0000EC
 */
void MapUnitGenerator::createCapEnemyList()
{
	for (int i = 0; i < m_floorInfo->getCapInfoNum(); i++) {
		CapInfo* capInfo = m_floorInfo->getCapInfo(i);
		TekiInfo* tekiInfo;
		if (capInfo && (!capInfo->m_tekiEmpty) && (tekiInfo = capInfo->getTekiInfo())) {
			EnemyUnit* enemyUnit = new EnemyUnit;

			EnemyNode* enemyNode  = new EnemyNode(enemyUnit, 0, i);
			enemyUnit->m_tekiInfo = tekiInfo;
			if (tekiInfo->m_dropMode == 0 || isPomGroup(tekiInfo)) {
				m_enemyNodeB->add(enemyNode);
			} else {
				m_enemyNodeC->add(enemyNode);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8024C3F8
 * Size:	000030
 */
bool MapUnitGenerator::isPomGroup(TekiInfo* tekiInfo)
{
	EnemyTypeID::EEnemyTypeID id = tekiInfo->m_enemyID;
	if ((id == EnemyTypeID::EnemyID_Pom) ||       // candypop base type
	    (id == EnemyTypeID::EnemyID_BluePom) ||   // blue candypop
	    (id == EnemyTypeID::EnemyID_RedPom) ||    // red candypop
	    (id == EnemyTypeID::EnemyID_YellowPom) || // yellow candypop
	    (id == EnemyTypeID::EnemyID_BlackPom) ||  // black candypop
	    (id == EnemyTypeID::EnemyID_WhitePom) ||  // white candypop
	    (id == EnemyTypeID::EnemyID_RandPom))     // queen candypop
	{
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8024C428
 * Size:	0000B4
 */
void MapUnitGenerator::createGateList()
{
	for (int i = 0; i < m_floorInfo->getGateInfoNum(); i++) {
		GateUnit* gateUnit = new GateUnit;
		GateNode* gateNode = new GateNode(gateUnit, i, 0);
		gateUnit->m_info   = m_floorInfo->getGateInfo(i);
		m_gateNode->add(gateNode);
	}
}

/*
 * --INFO--
 * Address:	8024C4DC
 * Size:	0000B4
 */
void MapUnitGenerator::createItemList()
{
	for (int i = 0; i < m_floorInfo->getItemInfoNum(); i++) {
		ItemUnit* itemUnit = new ItemUnit;
		ItemNode* itemNode = new ItemNode(itemUnit, nullptr, i);
		itemUnit->m_info   = m_floorInfo->getItemInfo(i);
		m_itemNode->add(itemNode);
	}
}

/*
 * --INFO--
 * Address:	8024C590
 * Size:	00002C
 */
void MapUnitGenerator::createCaveLevel()
{
	_04 = 0;
	if (gameSystem && gameSystem->m_mode == GSM_STORY_MODE) {
		_04 = 4;
	}
}

} // namespace Cave
} // namespace Game
