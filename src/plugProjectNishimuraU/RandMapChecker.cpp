#include "types.h"
#include "Game/Cave/RandMapUnit.h"
#include "Game/Cave/Node.h"

namespace Game {
namespace Cave {

/*
 * --INFO--
 * Address:	80245664
 * Size:	000008
 * Matches!
 */
RandMapChecker::RandMapChecker(MapNode* mapnode) { m_mapNode = mapnode; }

/*
 * --INFO--
 * Address:	8024566C
 * Size:	00007C
 * Matches!
 */
bool RandMapChecker::isPutOnMap(MapNode* mapnode)
{
	if (isPartsOnParts(mapnode))
		return false;
	if (isDoorOnParts(mapnode))
		return false;
	if (isPartsOnDoor(mapnode))
		return false;
	return true;
}

/*
 * --INFO--
 * Address:	802456E8
 * Size:	0000F0
 * Description: Appears to check if map parts would overlap
 * Matches!
 */
bool RandMapChecker::isPartsOnParts(MapNode* mapnode)
{
	int outerX1, outerY1, outerX2, outerY2;
	int innerX1, innerY1, innerX2, innerY2;

	outerX1 = mapnode->getNodeOffsetX();
	outerY1 = mapnode->getNodeOffsetY();
	outerX2 = outerX1 + mapnode->m_unitInfo->getUnitSizeX();
	outerY2 = outerY1 + mapnode->m_unitInfo->getUnitSizeY();

	for (CNode* node = m_mapNode->m_child; node != nullptr; node = node->m_next) {
		MapNode* nextMapNode = (MapNode*)node;
		innerX1              = nextMapNode->getNodeOffsetX();
		innerY1              = nextMapNode->getNodeOffsetY();
		innerX2              = innerX1 + nextMapNode->m_unitInfo->getUnitSizeX();
		innerY2              = innerY1 + nextMapNode->m_unitInfo->getUnitSizeY();

		if (isInnerBox(outerX1, outerY1, outerX2, outerY2, innerX1, innerY1, innerX2, innerY2))
			return true;
	}

	return false;
};

/*
 * --INFO--
 * Address:	802457D8
 * Size:	000220
 * Matches!
 */
bool RandMapChecker::isDoorOnParts(MapNode* mapnode)
{
	int outerX1, outerY1, outerX2, outerY2;
	int innerX1, innerY1, innerX2, innerY2;

	int doorCount1 = mapnode->getNumDoors();
	outerX1        = mapnode->getNodeOffsetX();
	outerY1        = mapnode->getNodeOffsetY();

	for (int doorIndex = 0; doorCount1 > doorIndex; doorIndex++) {
		bool b_flag = false;
		mapnode->getDoorOffset(doorIndex, outerX1, outerY1);

		for (CNode* node = m_mapNode->m_child; node != nullptr; node = node->m_next) {
			MapNode* mapNode = (MapNode*)node;

			int doorCount2 = mapNode->getNumDoors();
			for (int doorIndex2 = 0; doorIndex2 < doorCount2; doorIndex2++) {
				if ((!b_flag) && (!(mapNode->isDoorClose(doorIndex2)))) {
					if (mapnode->getDoorNode(doorIndex)->isDoorAdjust(mapNode->getDoorNode(doorIndex2))) {
						mapNode->getDoorOffset(doorIndex2, outerX2, outerY2);
						if (outerX1 == outerX2 && outerY1 == outerY2)
							b_flag = true;
					}
				}
			}
		}

		if (!b_flag) {
			switch (mapnode->getDoorDirect(doorIndex)) {
			case CD_UP:
				outerY1--;
				break;
			case CD_LEFT:
				outerX1--;
			case CD_RIGHT:
			case CD_DOWN:
				break;
			}

			outerX2 = outerX1 + 1;
			outerY2 = outerY1 + 1;

			for (CNode* node = m_mapNode->m_child; node != nullptr; node = node->m_next) {
				MapNode* mapNode = (MapNode*)node;

				innerX1 = mapNode->getNodeOffsetX();
				innerY1 = mapNode->getNodeOffsetY();
				innerX2 = innerX1 + mapNode->m_unitInfo->getUnitSizeX();
				innerY2 = innerY1 + mapNode->m_unitInfo->getUnitSizeY();

				if (isInnerBox(outerX1, outerY1, outerX2, outerY2, innerX1, innerY1, innerX2, innerY2))
					return true;
			}
		}
	};

	return false;
}

/*
 * --INFO--
 * Address:	802459F8
 * Size:	0001E8
 * Matches!
 */
bool RandMapChecker::isPartsOnDoor(MapNode* mapnode)
{
	int outerX1, outerY1, innerX1, innerY1;
	int outerX2, outerY2, innerX2, innerY2;

	outerX1 = mapnode->getNodeOffsetX();
	outerY1 = mapnode->getNodeOffsetY();
	outerX2 = outerX1 + mapnode->m_unitInfo->getUnitSizeX();
	outerY2 = outerY1 + mapnode->m_unitInfo->getUnitSizeY();

	for (CNode* node = m_mapNode->m_child; node != nullptr; node = node->m_next) {
		MapNode* child = (MapNode*)node;

		int doorCount1 = child->getNumDoors();
		for (int adjustInfoIndex = 0; adjustInfoIndex < doorCount1; adjustInfoIndex++) {

			bool b_flag;
			if (!child->isDoorClose(adjustInfoIndex)) {
				b_flag         = false;
				int doorCount2 = mapnode->getNumDoors();
				child->getDoorOffset(adjustInfoIndex, innerX1, innerY1);
				for (int adjustInfoIndex2 = 0; adjustInfoIndex2 < doorCount2; adjustInfoIndex2++) {
					if (!b_flag) {
						if (child->getDoorNode(adjustInfoIndex)->isDoorAdjust(mapnode->getDoorNode(adjustInfoIndex2))) {
							mapnode->getDoorOffset(adjustInfoIndex2, innerX2, innerY2);
							if (innerX1 == innerX2 && innerY1 == innerY2)
								b_flag = true;
						}
					}
				}

				if (!b_flag) {
					switch (child->getDoorDirect(adjustInfoIndex)) {
					case CD_UP:
						innerY1--;
						break;
					case CD_LEFT:
						innerX1--;
					case CD_RIGHT:
					case CD_DOWN:
						break;
					}

					innerX2 = innerX1 + 1;
					innerY2 = innerY1 + 1;

					if (isInnerBox(outerX1, outerY1, outerX2, outerY2, innerX1, innerY1, innerX2, innerY2))
						return true;
				}
			}
		}
	};

	return false;
}

/*
 * --INFO--
 * Address:	80245BE0
 * Size:	00007C
 * Matches!
 */
bool RandMapChecker::isInnerBox(int outerX1, int outerY1, int outerX2, int outerY2, int innerX1, int innerY1, int innerX2, int innerY2)
{
	if (outerX1 < innerX1) {
		if (outerY1 < innerY1) {
			if (outerX2 > innerX1 && outerY2 > innerY1)
				return true;
		} else {
			if (outerY1 < innerY2 && outerX2 > innerX1)
				return true;
		}
	} else {
		if (outerX1 < innerX2) {
			if (outerY1 < innerY1) {
				if (outerY2 > innerY1)
					return true;
			} else {
				if (outerY1 < innerY2)
					return true;
			}
		}
	}

	return false;
}
} // namespace Cave
} // namespace Game
