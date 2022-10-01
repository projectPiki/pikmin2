#include "Game/Cave/RandMapMgr.h"
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
			randcomp       = randcomp * rand() / 32768.0f;
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
	MapNode* childMap = m_mapNode->getChild();
	while (childMap != nullptr) {
		MapNode* nextNode = childMap->getNext();
		MapNode* thisNode = childMap; // ??

		int childArea  = childMap->m_unitInfo->getUnitSizeX() * childMap->m_unitInfo->getUnitSizeY();
		int childDoors = childMap->getNumDoors();

		MapNode* currNode = nextNode;
		for (currNode; currNode != nullptr; currNode = currNode->getNext()) {

			int nextArea  = currNode->m_unitInfo->getUnitSizeX() * currNode->m_unitInfo->getUnitSizeY();
			int nextDoors = currNode->getNumDoors();

			if ((childArea > nextArea) || (childArea == nextArea) && (childDoors > nextDoors)) {
				thisNode->del();
				m_mapNode->add(thisNode);
				break;
			}
		}

		childMap = nextNode;
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r25, r3
	lwz      r3, 0xc(r3)
	lwz      r31, 0x10(r3)
	b        lbl_8024C0F0

lbl_8024C060:
	lwz      r29, 4(r31)
	mr       r28, r31
	lwz      r3, 0x18(r31)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	mr       r30, r3
	lwz      r3, 0x18(r31)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	mullw    r27, r3, r30
	mr       r3, r31
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r30, r3
	mr       r26, r29
	b        lbl_8024C0E4

lbl_8024C094:
	lwz      r3, 0x18(r26)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	mr       r31, r3
	lwz      r3, 0x18(r26)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	mullw    r31, r3, r31
	mr       r3, r26
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r27, r31
	bgt      lbl_8024C0C8
	bne      lbl_8024C0E0
	cmpw     r30, r3
	ble      lbl_8024C0E0

lbl_8024C0C8:
	mr       r3, r28
	bl       del__5CNodeFv
	lwz      r3, 0xc(r25)
	mr       r4, r28
	bl       add__5CNodeFP5CNode
	b        lbl_8024C0EC

lbl_8024C0E0:
	lwz      r26, 4(r26)

lbl_8024C0E4:
	cmplwi   r26, 0
	bne      lbl_8024C094

lbl_8024C0EC:
	mr       r31, r29

lbl_8024C0F0:
	cmplwi   r31, 0
	bne      lbl_8024C060
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024C10C
 * Size:	00014C
 */
void MapUnitGenerator::createMapPartsList()
{
	for (int i = 0; i < 3; i++) {
		MapNode* childNode   = getStartNode();
		MapNode* currMapNode = getMapNodeItem(i);

		for (childNode; childNode != nullptr; childNode = childNode->getNext()) {
			if (i == currMapNode->m_unitInfo->getUnitKind()) {
				currMapNode->add(new MapNode(currMapNode->m_unitInfo));
			}
		}

		int childCount = currMapNode->getChildCount();

		for (int j = 0; j < childCount; j++) {
			MapNode* randNode = static_cast<MapNode*>(currMapNode->getChildAt((int)(childCount * randFloat())));

			if (randNode != nullptr) {
				randNode->del();
				currMapNode->add(randNode);
			}
		}
	}
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stmw     r23, 0x2c(r1)
	lfd      f30, lbl_8051A7E0@sda21(r2)
	mr       r31, r3
	lfs      f31, lbl_8051A7DC@sda21(r2)
	li       r26, 0
	li       r27, 0
	lis      r29, 0x4330

lbl_8024C144:
	lwz      r3, 0xc(r31)
	lwz      r0, 0x10(r31)
	lwz      r28, 0x10(r3)
	add      r25, r0, r27
	b        lbl_8024C190

lbl_8024C158:
	lwz      r3, 0x18(r28)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpw     r26, r3
	bne      lbl_8024C18C
	li       r3, 0x40
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8024C184
	lwz      r4, 0x18(r28)
	bl       __ct__Q34Game4Cave7MapNodeFPQ34Game4Cave8UnitInfo
	mr       r4, r3

lbl_8024C184:
	mr       r3, r25
	bl       add__5CNodeFP5CNode

lbl_8024C18C:
	lwz      r28, 4(r28)

lbl_8024C190:
	cmplwi   r28, 0
	bne      lbl_8024C158
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	li       r24, 0
	xoris    r30, r28, 0x8000
	b        lbl_8024C21C

lbl_8024C1BC:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r29, 8(r1)
	mr       r3, r25
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r30, 0x14(r1)
	fsubs    f0, f0, f30
	stw      r29, 0x10(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r4, 0x1c(r1)
	bl       getChildAt__5CNodeFi
	or.      r23, r3, r3
	beq      lbl_8024C218
	bl       del__5CNodeFv
	mr       r3, r25
	mr       r4, r23
	bl       add__5CNodeFP5CNode

lbl_8024C218:
	addi     r24, r24, 1

lbl_8024C21C:
	cmpw     r24, r28
	blt      lbl_8024C1BC
	addi     r26, r26, 1
	addi     r27, r27, 0x40
	cmpwi    r26, 3
	blt      lbl_8024C144
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lmw      r23, 0x2c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
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
		if ((capInfo != nullptr) && (!capInfo->m_tekiEmpty) && (tekiInfo = capInfo->getTekiInfo())) {
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
	if ((id == EnemyTypeID::EnemyID_Pom) ||   // candypop base type
	    ((id - 3) <= 4U) ||                   // 3,4,5,6,7 = colors
	    (id == EnemyTypeID::EnemyID_RandPom)) // queen candypop
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
	if (gameSystem != nullptr && gameSystem->m_mode == GSM_STORY_MODE) {
		_04 = 4;
	}
}

} // namespace Cave
} // namespace Game
