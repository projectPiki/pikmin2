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

	mMapNode    = new MapNode;
	mMapNodeArr = new MapNode[3];

	mEnemyNodeA = new EnemyNode;
	mEnemyNodeB = new EnemyNode;
	mEnemyNodeC = new EnemyNode;

	mGateNode = new GateNode;
	mItemNode = new ItemNode;

	mPlacedMapNodes  = new MapNode;
	mVisitedMapNodes = new MapNode;

	mFloorInfo    = floorInfo;
	mIsFinalFloor = isFinalFloor;

	if (mFloorInfo) {
		mHasEscapeFountain = mFloorInfo->hasEscapeFountain(-1);
	} else {
		mHasEscapeFountain = false;
	}

	if ((gameSystem) && (gameSystem->isVersusMode())) {
		mIsVersusMode = true;
	} else {
		mIsVersusMode = false;
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
	mEditMapUnit = nullptr;

	if (mIsVersusMode && editInfo) {
		if (editInfo->_1C < -1) {
			float randcomp = 1.0f;
			randcomp       = randWeightFloat(randcomp);
			if (randcomp < editInfo->mChanceOfUse) {
				mEditMapUnit = editInfo;
			}
		} else if (editInfo->_1C >= 0) {
			mEditMapUnit = editInfo;
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
			currMapUnits->setUnitName(const_cast<char*>(currInterface->mName));
			currMapUnits->setUnitIndex(i);
			currMapUnits->setUnitKind((s16)currInterface->mUnitKind);

			int cellX;
			int cellY;
			currInterface->getCellSize(cellX, cellY);
			currMapUnits->setUnitSize(cellX, cellY);

			int currDoorCount = currInterface->getDoorCount();
			currMapUnits->setDoorNum(currDoorCount);

			currMapUnits->setBaseGenPtr(currInterface->mBaseGen);

			for (int j = 0; j < currDoorCount; j++) {
				Game::Door* currDoor = currInterface->getDoor(j);

				Game::Cave::Door doorInfo;
				doorInfo.mOffset    = currDoor->mOffs;
				doorInfo.mDirection = currDoor->mDir;

				int linkCount = currDoor->getLinkCount();
				currMapUnits->mDoorNode->add(new DoorNode(doorInfo));

				for (int k = 0; k < linkCount; k++) {
					DoorLink* link = currDoor->getLink(k);

					Adjust* currAdjust     = new Adjust();
					currAdjust->mDoorID    = link->mDoorID;
					currAdjust->mDistance  = link->mDistance / 10.0f;
					currAdjust->mTekiFlags = link->mTekiFlags;

					AdjustNode* currAdjustNode = new AdjustNode(currAdjust);

					currMapUnits->mDoorCounts[j].add(currAdjustNode);
				}
			}

			for (int j = 0; j < 4; j++) {
				UnitInfo* currInfo = new UnitInfo(currMapUnits);
				currInfo->setUnitRotation(j);
				currInfo->create();
				MapNode* currMapNode = new MapNode(currInfo);

				mMapNode->add(currMapNode);
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
	if (!mIsVersusMode) {
		return true;
	}

	if (mEditMapUnit) {
		return true;
	}

	if (interface->mUnitKind != 1) {
		return true;
	}
	BaseGen* currBaseGen = interface->mBaseGen;
	if (currBaseGen) {
		BaseGen* childGen = (BaseGen*)currBaseGen->mChild;
		for (childGen; childGen; childGen = (BaseGen*)childGen->mNext) {
			if (childGen->mSpawnType == 7) {
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
	for (childMap = mMapNode->getChild(); childMap; childMap = nextNode) {
		nextNode       = childMap->getNext();
		childMap_CNode = (CNode*)childMap;

		int childArea  = childMap->mUnitInfo->getUnitSizeX() * childMap->mUnitInfo->getUnitSizeY();
		int childDoors = childMap->getNumDoors();

		MapNode* currNode = nextNode;
		for (currNode; currNode; currNode = currNode->getNext()) {

			int nextArea  = currNode->mUnitInfo->getUnitSizeX() * currNode->mUnitInfo->getUnitSizeY();
			int nextDoors = currNode->getNumDoors();

			if ((childArea > nextArea) || (childArea == nextArea) && (childDoors > nextDoors)) {
				childMap_CNode->del();
				mMapNode->add(childMap_CNode);
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
		for (childNode; childNode; childNode = childNode->mNext) {
			MapNode* mapNode = static_cast<MapNode*>(childNode);
			if (i == mapNode->mUnitInfo->getUnitKind()) {
				currMapNode->add(new MapNode(mapNode->mUnitInfo));
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
	for (int i = 0; i < mFloorInfo->getTekiInfoNum(); i++) {
		enemyUnit            = new EnemyUnit;
		enemyNode            = new EnemyNode(enemyUnit, 0, i);
		enemyUnit->mTekiInfo = mFloorInfo->getTekiInfo(i);
		mEnemyNodeA->add(enemyNode);
	}
}

/*
 * --INFO--
 * Address:	8024C30C
 * Size:	0000EC
 */
void MapUnitGenerator::createCapEnemyList()
{
	for (int i = 0; i < mFloorInfo->getCapInfoNum(); i++) {
		CapInfo* capInfo = mFloorInfo->getCapInfo(i);
		TekiInfo* tekiInfo;
		if (capInfo && (!capInfo->mTekiEmpty) && (tekiInfo = capInfo->getTekiInfo())) {
			EnemyUnit* enemyUnit = new EnemyUnit;

			EnemyNode* enemyNode = new EnemyNode(enemyUnit, 0, i);
			enemyUnit->mTekiInfo = tekiInfo;
			if (tekiInfo->mDropMode == 0 || isPomGroup(tekiInfo)) {
				mEnemyNodeB->add(enemyNode);
			} else {
				mEnemyNodeC->add(enemyNode);
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
	EnemyTypeID::EEnemyTypeID id = tekiInfo->mEnemyID;
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
	for (int i = 0; i < mFloorInfo->getGateInfoNum(); i++) {
		GateUnit* gateUnit = new GateUnit;
		GateNode* gateNode = new GateNode(gateUnit, i, 0);
		gateUnit->mInfo    = mFloorInfo->getGateInfo(i);
		mGateNode->add(gateNode);
	}
}

/*
 * --INFO--
 * Address:	8024C4DC
 * Size:	0000B4
 */
void MapUnitGenerator::createItemList()
{
	for (int i = 0; i < mFloorInfo->getItemInfoNum(); i++) {
		ItemUnit* itemUnit = new ItemUnit;
		ItemNode* itemNode = new ItemNode(itemUnit, nullptr, i);
		itemUnit->mInfo    = mFloorInfo->getItemInfo(i);
		mItemNode->add(itemNode);
	}
}

/*
 * --INFO--
 * Address:	8024C590
 * Size:	00002C
 */
void MapUnitGenerator::createCaveLevel()
{
	mRandItemType = 0;
	if (gameSystem && gameSystem->mMode == GSM_STORY_MODE) {
		mRandItemType = 4;
	}
}

} // namespace Cave
} // namespace Game
