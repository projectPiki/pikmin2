#include "types.h"
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
	if (floorInfo != nullptr) {
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

			if (gate != nullptr && room != nullptr) {
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
		if (info != nullptr) {
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
	if (node != nullptr) {
		return node;
	}

	node = getRoomMinScoreDoor(idx);
	if (node != nullptr) {
		return node;
	}

	if ((randWeightFloat(1.0f)) < 0.8f) {
		node = getRoomLowScoreDoor(idx);
		if (node != nullptr) {
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
// WIP: https://decomp.me/scratch/fXzXU
// just one regswap left
void RandGateUnit::getRoomLowScoreDoor(int& idx)
{
    MapNode* nodeArray[512];
    int idxArray[512];
    int scoreArray[512];
    int total = 0;
    int scoreSum = 0;
    int score = 0;
    
    MapNode* placedNodes = m_generator->m_placedMapNodes;
    MapNode* node1 = static_cast<MapNode*>(placedNodes->m_child);
    for (node1; node1 != nullptr; node1 = static_cast<MapNode*>(node1->m_next)) {
        if (node1->m_unitInfo->getUnitKind() == 1) {
            for (int i = 0; i < node1->getNumDoors(); i++) {
                if ((node1->m_adjustInfo[i].m_doorScore > score) && !node1->isGateSetDoor(i)) {
                    score = node1->m_adjustInfo[i].m_doorScore;
                }
            }
        }
    }
    
    MapNode* node2 = static_cast<MapNode*>(placedNodes->m_child);
    for (node2; node2 != nullptr; node2 = static_cast<MapNode*>(node2->m_next)) {
        if (node2->m_unitInfo->getUnitKind() == 1) {
            for (int i = 0; i < node2->getNumDoors(); i++) {
                if (!node2->isGateSetDoor(i)) {
                    nodeArray[total] = node2;
                    idxArray[total] = i;
                    scoreArray[total] = (score + 1) - node2->m_adjustInfo[i].m_doorScore;
                    scoreSum += scoreArray[total];
                    total++;
                }
            }
        }
    }

    if (scoreSum != 0) {
        int randLimit = scoreSum * randFloat();
        int tally = 0;
        for (int i = 0; i < total; i++) {
            tally += scoreArray[i];
            if (tally > randLimit) {
                idx = idxArray[i];
                return nodeArray[i];
            }
        }
    }
    return nullptr;
	/*
	stwu     r1, -0x1860(r1)
	mflr     r0
	stw      r0, 0x1864(r1)
	stmw     r18, 0x1828(r1)
	mr       r18, r4
	li       r23, 0
	li       r22, 0
	li       r21, 0
	lwz      r3, 0(r3)
	lwz      r19, 0x28(r3)
	lwz      r24, 0x10(r19)
	b        lbl_80250438

lbl_802503CC:
	lwz      r3, 0x18(r24)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_80250434
	li       r25, 0
	li       r20, 0
	b        lbl_80250424

lbl_802503E8:
	lwz      r3, 0x28(r24)
	addi     r0, r20, 8
	lwzx     r0, r3, r0
	cmpw     r0, r21
	ble      lbl_8025041C
	mr       r3, r24
	mr       r4, r25
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8025041C
	lwz      r3, 0x28(r24)
	addi     r0, r20, 8
	lwzx     r21, r3, r0

lbl_8025041C:
	addi     r20, r20, 0xc
	addi     r25, r25, 1

lbl_80250424:
	mr       r3, r24
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r25, r3
	blt      lbl_802503E8

lbl_80250434:
	lwz      r24, 4(r24)

lbl_80250438:
	cmplwi   r24, 0
	bne      lbl_802503CC
	addi     r24, r1, 8
	lwz      r20, 0x10(r19)
	mr       r25, r24
	addi     r27, r1, 0x1008
	addi     r26, r1, 0x808
	b        lbl_802504F4

lbl_80250458:
	lwz      r3, 0x18(r20)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_802504F0
	mr       r31, r27
	mr       r30, r26
	mr       r28, r25
	li       r19, 0
	li       r29, 0
	b        lbl_802504E0

lbl_80250480:
	mr       r3, r20
	mr       r4, r19
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_802504D8
	lwz      r4, 0x28(r20)
	addi     r3, r29, 8
	stw      r20, 0(r31)
	addi     r0, r21, 1
	lwzx     r3, r4, r3
	addi     r31, r31, 4
	stw      r19, 0(r30)
	addi     r30, r30, 4
	subf     r0, r3, r0
	addi     r27, r27, 4
	stw      r0, 0(r28)
	addi     r26, r26, 4
	addi     r25, r25, 4
	addi     r23, r23, 1
	lwz      r0, 0(r28)
	addi     r28, r28, 4
	add      r22, r22, r0

lbl_802504D8:
	addi     r29, r29, 0xc
	addi     r19, r19, 1

lbl_802504E0:
	mr       r3, r20
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r19, r3
	blt      lbl_80250480

lbl_802504F0:
	lwz      r20, 4(r20)

lbl_802504F4:
	cmplwi   r20, 0
	bne      lbl_80250458
	cmpwi    r22, 0
	beq      lbl_8025059C
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x180c(r1)
	xoris    r0, r22, 0x8000
	lfd      f2, lbl_8051A880@sda21(r2)
	li       r5, 0
	stw      r4, 0x1808(r1)
	li       r6, 0
	lfs      f0, lbl_8051A878@sda21(r2)
	lfd      f1, 0x1808(r1)
	stw      r0, 0x1814(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x1810(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x1810(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x1818(r1)
	lwz      r3, 0x181c(r1)
	mtctr    r23
	cmpwi    r23, 0
	ble      lbl_8025059C

lbl_80250564:
	lwz      r0, 0(r24)
	add      r5, r5, r0
	cmpw     r5, r3
	ble      lbl_80250590
	slwi     r4, r6, 2
	addi     r3, r1, 0x808
	lwzx     r0, r3, r4
	addi     r3, r1, 0x1008
	lwzx     r3, r3, r4
	stw      r0, 0(r18)
	b        lbl_802505A0

lbl_80250590:
	addi     r24, r24, 4
	addi     r6, r6, 1
	bdnz     lbl_80250564

lbl_8025059C:
	li       r3, 0

lbl_802505A0:
	lmw      r18, 0x1828(r1)
	lwz      r0, 0x1864(r1)
	mtlr     r0
	addi     r1, r1, 0x1860
	blr
	*/
}

/*
 * --INFO--
 * Address:	802505B4
 * Size:	000270
 */
// WIP: https://decomp.me/scratch/Ywy5M
// a couple regswaps right at the end
void RandGateUnit::getRandomScoreDoor(int& idx)
{
    MapNode* nodeArray[1024];
    int idxArray[1024];
    int doorNumArray[1024];
    
    int total = 0; 
    int totalCount = 0; 
    
    MapNode* node = static_cast<MapNode*>(m_generator->m_placedMapNodes->m_child);
    for (node; node != nullptr; node = static_cast<MapNode*>(node->m_next)) {
        int kind = node->m_unitInfo->getUnitKind();
        int doorCount = node->getNumDoors();
        if (kind ==  1) {
            for (int i = 0; i < doorCount; i++) {
                if (!node->isGateSetDoor(i)) {
                    nodeArray[total] = node;
                    idxArray[total] = i;
                    doorNumArray[total] = doorCount;
                    totalCount += doorNumArray[total];
                    total++;
                }
            }
        } else if (kind == 2) {
            for (int i = 0; i < doorCount; i++) {
                if (!node->isGateSetDoor(i)) {
                    nodeArray[total] = node;
                    idxArray[total] = i;
                    doorNumArray[total] = 10 / doorCount;
                    totalCount += doorNumArray[total];
                    total++;
                } 
            }
        } else if (kind == 0) { 
            for (int i = 0; i < doorCount; i++) {
                if (!node->isGateSetDoor(i)) {
                    nodeArray[total] = node;
                    idxArray[total] = i;
                    doorNumArray[total] = doorCount;
                    totalCount += doorNumArray[total];
                    total++;
                } 
            }
        }
    }

    if (totalCount != 0) {
        int randLimit = totalCount * randFloat();
        int tally = 0;
        for (int i = 0; i < total; i++) {
            tally += doorNumArray[i];
            if (tally > randLimit) {
                idx = idxArray[i];
                return nodeArray[i];
            }
        }
    }
    return nullptr;
	/*
	stwu     r1, -0x3050(r1)
	mflr     r0
	stw      r0, 0x3054(r1)
	stmw     r21, 0x3024(r1)
	mr       r28, r4
	li       r31, 0
	li       r27, 0
	li       r30, 0
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r29, 0x10(r3)
	b        lbl_80250760

lbl_802505E4:
	lwz      r3, 0x18(r29)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	mr       r26, r3
	mr       r3, r29
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpwi    r26, 1
	mr       r25, r3
	bne      lbl_80250670
	addi     r26, r1, 0x2008
	addi     r24, r1, 0x1008
	addi     r23, r1, 8
	li       r22, 0
	add      r26, r26, r27
	add      r24, r24, r27
	add      r23, r23, r27
	b        lbl_80250664

lbl_80250624:
	mr       r3, r29
	mr       r4, r22
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80250660
	stw      r25, 0(r23)
	addi     r31, r31, 1
	addi     r27, r27, 4
	lwz      r0, 0(r23)
	addi     r23, r23, 4
	stw      r29, 0(r26)
	addi     r26, r26, 4
	add      r30, r30, r0
	stw      r22, 0(r24)
	addi     r24, r24, 4

lbl_80250660:
	addi     r22, r22, 1

lbl_80250664:
	cmpw     r22, r25
	blt      lbl_80250624
	b        lbl_8025075C

lbl_80250670:
	cmpwi    r26, 2
	bne      lbl_802506EC
	li       r0, 0xa
	addi     r23, r1, 0x2008
	divw     r26, r0, r25
	addi     r24, r1, 0x1008
	addi     r22, r1, 8
	add      r23, r23, r27
	add      r24, r24, r27
	add      r22, r22, r27
	li       r21, 0
	b        lbl_802506E0

lbl_802506A0:
	mr       r3, r29
	mr       r4, r21
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_802506DC
	stw      r26, 0(r22)
	addi     r31, r31, 1
	addi     r27, r27, 4
	lwz      r0, 0(r22)
	addi     r22, r22, 4
	stw      r29, 0(r23)
	addi     r23, r23, 4
	add      r30, r30, r0
	stw      r21, 0(r24)
	addi     r24, r24, 4

lbl_802506DC:
	addi     r21, r21, 1

lbl_802506E0:
	cmpw     r21, r25
	blt      lbl_802506A0
	b        lbl_8025075C

lbl_802506EC:
	cmpwi    r26, 0
	bne      lbl_8025075C
	addi     r22, r1, 0x2008
	addi     r23, r1, 0x1008
	addi     r24, r1, 8
	li       r21, 0
	add      r22, r22, r27
	add      r23, r23, r27
	add      r24, r24, r27
	b        lbl_80250754

lbl_80250714:
	mr       r3, r29
	mr       r4, r21
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80250750
	stw      r25, 0(r24)
	addi     r31, r31, 1
	addi     r27, r27, 4
	lwz      r0, 0(r24)
	addi     r24, r24, 4
	stw      r29, 0(r22)
	addi     r22, r22, 4
	add      r30, r30, r0
	stw      r21, 0(r23)
	addi     r23, r23, 4

lbl_80250750:
	addi     r21, r21, 1

lbl_80250754:
	cmpw     r21, r25
	blt      lbl_80250714

lbl_8025075C:
	lwz      r29, 4(r29)

lbl_80250760:
	cmplwi   r29, 0
	bne      lbl_802505E4
	cmpwi    r30, 0
	beq      lbl_8025080C
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x300c(r1)
	xoris    r0, r30, 0x8000
	lfd      f2, lbl_8051A880@sda21(r2)
	addi     r5, r1, 8
	stw      r4, 0x3008(r1)
	li       r6, 0
	lfs      f0, lbl_8051A878@sda21(r2)
	li       r7, 0
	lfd      f1, 0x3008(r1)
	stw      r0, 0x3014(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x3010(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x3010(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x3018(r1)
	lwz      r3, 0x301c(r1)
	mtctr    r31
	cmpwi    r31, 0
	ble      lbl_8025080C

lbl_802507D4:
	lwz      r0, 0(r5)
	add      r6, r6, r0
	cmpw     r6, r3
	ble      lbl_80250800
	slwi     r4, r7, 2
	addi     r3, r1, 0x1008
	lwzx     r0, r3, r4
	addi     r3, r1, 0x2008
	lwzx     r3, r3, r4
	stw      r0, 0(r28)
	b        lbl_80250810

lbl_80250800:
	addi     r5, r5, 4
	addi     r7, r7, 1
	bdnz     lbl_802507D4

lbl_8025080C:
	li       r3, 0

lbl_80250810:
	lmw      r21, 0x3024(r1)
	lwz      r0, 0x3054(r1)
	mtlr     r0
	addi     r1, r1, 0x3050
	blr
	*/
}
} // namespace Cave
} // namespace Game
