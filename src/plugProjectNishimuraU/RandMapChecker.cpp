#include "types.h"
#include "Game/Cave/RandMapUnit.h"
#include "Game/Cave/Node.h"

namespace Game {
namespace Cave {

/**
 * @note Address: 0x80245664
 * @note Size: 0x8
 * Matches!
 */
RandMapChecker::RandMapChecker(MapNode* mapnode) { mMapNode = mapnode; }

/**
 * @note Address: 0x8024566C
 * @note Size: 0x7C
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

/**
 * @note Address: 0x802456E8
 * @note Size: 0xF0
 * Description: Appears to check if map parts would overlap
 * Matches!
 */
bool RandMapChecker::isPartsOnParts(MapNode* mapnode)
{
	int outerX1, outerY1, outerX2, outerY2;
	int innerX1, innerY1, innerX2, innerY2;

	outerX1 = mapnode->getNodeOffsetX();
	outerY1 = mapnode->getNodeOffsetY();
	outerX2 = outerX1 + mapnode->mUnitInfo->getUnitSizeX();
	outerY2 = outerY1 + mapnode->mUnitInfo->getUnitSizeY();

	for (CNode* node = mMapNode->mChild; node != nullptr; node = node->mNext) {
		MapNode* nextMapNode = (MapNode*)node;
		innerX1              = nextMapNode->getNodeOffsetX();
		innerY1              = nextMapNode->getNodeOffsetY();
		innerX2              = innerX1 + nextMapNode->mUnitInfo->getUnitSizeX();
		innerY2              = innerY1 + nextMapNode->mUnitInfo->getUnitSizeY();

		if (isInnerBox(outerX1, outerY1, outerX2, outerY2, innerX1, innerY1, innerX2, innerY2))
			return true;
	}

	return false;
};

/**
 * @note Address: 0x802457D8
 * @note Size: 0x220
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

		for (CNode* node = mMapNode->mChild; node != nullptr; node = node->mNext) {
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
			case CD_Up:
				outerY1--;
				break;
			case CD_Left:
				outerX1--;
			case CD_Right:
			case CD_Down:
				break;
			}

			outerX2 = outerX1 + 1;
			outerY2 = outerY1 + 1;

			for (CNode* node = mMapNode->mChild; node != nullptr; node = node->mNext) {
				MapNode* mapNode = (MapNode*)node;

				innerX1 = mapNode->getNodeOffsetX();
				innerY1 = mapNode->getNodeOffsetY();
				innerX2 = innerX1 + mapNode->mUnitInfo->getUnitSizeX();
				innerY2 = innerY1 + mapNode->mUnitInfo->getUnitSizeY();

				if (isInnerBox(outerX1, outerY1, outerX2, outerY2, innerX1, innerY1, innerX2, innerY2))
					return true;
			}
		}
	};

	return false;
}

/**
 * @note Address: 0x802459F8
 * @note Size: 0x1E8
 * Matches!
 */
bool RandMapChecker::isPartsOnDoor(MapNode* mapnode)
{
	int outerX1, outerY1, innerX1, innerY1;
	int outerX2, outerY2, innerX2, innerY2;

	outerX1 = mapnode->getNodeOffsetX();
	outerY1 = mapnode->getNodeOffsetY();
	outerX2 = outerX1 + mapnode->mUnitInfo->getUnitSizeX();
	outerY2 = outerY1 + mapnode->mUnitInfo->getUnitSizeY();

	for (CNode* node = mMapNode->mChild; node != nullptr; node = node->mNext) {
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
					case CD_Up:
						innerY1--;
						break;
					case CD_Left:
						innerX1--;
					case CD_Right:
					case CD_Down:
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

/**
 * @note Address: 0x80245BE0
 * @note Size: 0x7C
 *
 */
bool RandMapChecker::isInnerBox(int outerX1, int outerY1, int outerX2, int outerY2, int innerX1, int innerY1, int innerX2, int innerY2)
{
	if (outerX1 < innerX1) {
		if (outerY1 < innerY1) {
			if (outerX2 > innerX1 && outerY2 > innerY1)
				return true;
		} else if (outerY1 < innerY2 && outerX2 > innerX1) {
			return true;
		}
	} else {
		if (outerX1 < innerX2) {
			if (outerY1 < innerY1) {
				if (outerY2 > innerY1)
					return true;
			} else if (outerY1 < innerY2) {
				return true;
			}
		}
	}

	return false;
}
} // namespace Cave
} // namespace Game
