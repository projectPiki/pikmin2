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
RandMapChecker::RandMapChecker(MapNode* mapnode)
{
	mMapNode = mapnode;
}

/**
 * Checks if it is valid to place the mapnode
 * 
 * @note Address: 0x8024566C
 * @note Size: 0x7C
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
 * Checks if the mapnode's unit would overlap with any existing placed units
 * 
 * @note Address: 0x802456E8
 * @note Size: 0xF0
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
 * Checks if our mapnode's doors collide
 * into an existing unit and don't link
 * up with a door
 * @note Address: 0x802457D8
 * @note Size: 0x220
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
 * Checks if we cause an existing door to
 * collide with a side of our
 * room that isn't a door
 * 
 * @note Address: 0x802459F8
 * @note Size: 0x1E8
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
 * Checks if "our" box and "their" box interlap in any way
 * 
 * (doesn't use any members, so out to be static)
 * 
 * @note Address: 0x80245BE0
 * @note Size: 0x7C
 *
 */
bool RandMapChecker::isInnerBox(int ourTopLeftX, int ourTopLeftY, int ourBottomRightX, int ourBottomRightY, 
	int theirTopLeftX, int theirTopLeftY, int theirBottomRightX, int theirBottomRightY)
{
	// holy shit this is such a bad way to do this, wtf P2 devs
	if (ourTopLeftX < theirTopLeftX) {
		if (ourTopLeftY < theirTopLeftY) {
			if (ourBottomRightX > theirTopLeftX && ourBottomRightY > theirTopLeftY) {
				return true;
			}
		} else if (ourTopLeftY < theirBottomRightY && ourBottomRightX > theirTopLeftX) {
			return true;
		}
	} else {
		if (ourTopLeftX < theirBottomRightX) {
			if (ourTopLeftY < theirTopLeftY) {
				if (ourBottomRightY > theirTopLeftY) {
					return true;
				}
			} else if (ourTopLeftY < theirBottomRightY) {
				return true;
			}
		}
	}

	return false;
}
} // namespace Cave
} // namespace Game
