#include "types.h"
#include "Game/Cave/RandMapUnit.h"

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
	int thisX1, thisY1, thisX2, thisY2;
	int nextX1, nextY1, nextX2, nextY2;

	thisX1 = mapnode->getNodeOffsetX();
	thisY1 = mapnode->getNodeOffsetY();
	thisX2 = thisX1 + mapnode->m_unitInfo->getUnitSizeX();
	thisY2 = thisY1 + mapnode->m_unitInfo->getUnitSizeY();

	for (CNode* node = m_mapNode->m_child; node != nullptr; node = node->m_next) {
		MapNode* nextMapNode = (MapNode*)node;
		nextX1               = nextMapNode->getNodeOffsetX();
		nextY1               = nextMapNode->getNodeOffsetY();
		nextX2               = nextX1 + nextMapNode->m_unitInfo->getUnitSizeX();
		nextY2               = nextY1 + nextMapNode->m_unitInfo->getUnitSizeY();

		if (isInnerBox(thisX1, thisY1, thisX2, thisY2, nextX1, nextY1, nextX2, nextY2))
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
	int thisX1, thisY1, nextX1, nextY1;
	int thisX2, thisY2, nextX2, nextY2;

	int doorCount1 = mapnode->getNumDoors();
	thisX1         = mapnode->getNodeOffsetX();
	thisY1         = mapnode->getNodeOffsetY();

	for (int doorIndex = 0; doorCount1 > doorIndex; doorIndex++) {
		bool b_flag = false;
		mapnode->getDoorOffset(doorIndex, thisX1, thisY1);

		for (CNode* node = m_mapNode->m_child; node != nullptr; node = node->m_next) {
			MapNode* mapNode = (MapNode*)node;

			int doorCount2 = mapNode->getNumDoors();
			for (int doorIndex2 = 0; doorIndex2 < doorCount2; doorIndex2++) {
				if ((!b_flag) && (!(mapNode->isDoorClose(doorIndex2)))) {
					if (mapnode->getDoorNode(doorIndex)->isDoorAdjust(mapNode->getDoorNode(doorIndex2))) {
						mapNode->getDoorOffset(doorIndex2, nextX1, nextY1);
						if (thisX1 == nextX1 && thisY1 == nextY1)
							b_flag = true;
					}
				}
			}
		}

		if (!b_flag) {
			switch (mapnode->getDoorDirect(doorIndex)) {
			case CD_UP:
				thisY1--;
				break;
			case CD_LEFT:
				thisX1--;
			case CD_RIGHT:
			case CD_DOWN:
				break;
			}

			nextX1 = thisX1 + 1;
			nextY1 = thisY1 + 1;

			for (CNode* node = m_mapNode->m_child; node != nullptr; node = node->m_next) {
				MapNode* mapNode = (MapNode*)node;

				thisX2 = mapNode->getNodeOffsetX();
				thisY2 = mapNode->getNodeOffsetY();
				nextX2 = thisX2 + mapNode->m_unitInfo->getUnitSizeX();
				nextY2 = thisY2 + mapNode->m_unitInfo->getUnitSizeY();

				if (isInnerBox(thisX1, thisY1, nextX1, nextY1, thisX2, thisY2, nextX2, nextY2))
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
	int thisX1, thisY1, nextX1, nextY1;
	int thisX2, thisY2, nextX2, nextY2;

	thisX1 = mapnode->getNodeOffsetX();
	thisY1 = mapnode->getNodeOffsetY();
	thisX2 = thisX1 + mapnode->m_unitInfo->getUnitSizeX();
	thisY2 = thisY1 + mapnode->m_unitInfo->getUnitSizeY();

	for (CNode* node = m_mapNode->m_child; node != nullptr; node = node->m_next) {
		MapNode* child = (MapNode*)node;

		int doorCount1 = child->getNumDoors();
		for (int adjustInfoIndex = 0; adjustInfoIndex < doorCount1; adjustInfoIndex++) {

			bool b_flag;
			if (!child->isDoorClose(adjustInfoIndex)) {
				b_flag         = false;
				int doorCount2 = mapnode->getNumDoors();
				child->getDoorOffset(adjustInfoIndex, nextX1, nextY1);
				for (int adjustInfoIndex2 = 0; adjustInfoIndex2 < doorCount2; adjustInfoIndex2++) {
					if (!b_flag) {
						if (child->getDoorNode(adjustInfoIndex)->isDoorAdjust(mapnode->getDoorNode(adjustInfoIndex2))) {
							mapnode->getDoorOffset(adjustInfoIndex2, nextX2, nextY2);
							if (nextX1 == nextX2 && nextY1 == nextY2)
								b_flag = true;
						}
					}
				}

				if (!b_flag) {
					switch (child->getDoorDirect(adjustInfoIndex)) {
					case CD_UP:
						nextY1--;
						break;
					case CD_LEFT:
						nextX1--;
					case CD_RIGHT:
					case CD_DOWN:
						break;
					}

					nextX2 = nextX1 + 1;
					nextY2 = nextY1 + 1;

					if (isInnerBox(thisX1, thisY1, thisX2, thisY2, nextX1, nextY1, nextX2, nextY2))
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
