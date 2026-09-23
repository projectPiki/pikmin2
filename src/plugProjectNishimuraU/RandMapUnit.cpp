#include "Game/Cave/RandMapUnit.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/arith.h"
#include "Dolphin/rand.h"
#include "types.h"
#include "sysMath.h"

namespace Game {
namespace Cave {

/**
 * @note Address: 0x80245C5C
 * @note Size: 0x30
 */
EditMapUnit::EditMapUnit()
{
	mChanceOfUse = 0.0f;
	mEditCount   = 0;
	mUnitCounts  = nullptr;
	mUnitNames   = nullptr;
	mDirections  = nullptr;
	mXOffsets    = nullptr;
	mYOffsets    = nullptr;
	mEditNum     = -128;
}

/**
 * @note Address: 0x80245C8C
 * @note Size: 0xB8
 */
void EditMapUnit::read(char* filepath)
{
	void* resource = JKRDvdToMainRam(filepath, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	if (resource) {
		RamStream stream(resource, -1);
		read(&stream);
		delete[] resource;

	} else {
		JUT_PANICLINE(85, "edit map none : %s\n", filepath);
	}
}

/**
 * @note Address: 0x80245D44
 * @note Size: 0x1E8
 */
void EditMapUnit::read(Stream* stream)
{
	stream->setMode(STREAM_MODE_TEXT, 1);
	mChanceOfUse = stream->readFloat();
	mEditCount   = stream->readInt();
	mUnitCounts  = new int[mEditCount];
	mUnitNames   = new char**[mEditCount];
	mDirections  = new int*[mEditCount];
	mXOffsets    = new int*[mEditCount];
	mYOffsets    = new int*[mEditCount];

	for (int i = 0; i < mEditCount; i++) {
		mUnitCounts[i] = stream->readInt();
		mUnitNames[i]  = new char*[mUnitCounts[i]];
		mDirections[i] = new int[mUnitCounts[i]];
		mXOffsets[i]   = new int[mUnitCounts[i]];
		mYOffsets[i]   = new int[mUnitCounts[i]];

		for (int j = 0; j < mUnitCounts[i]; j++) {
			char* name       = stream->readString(nullptr, 0);
			mUnitNames[i][j] = new char[strlen(name) + 1];
			strcpy(mUnitNames[i][j], name);

			mDirections[i][j] = stream->readInt();
			mXOffsets[i][j]   = stream->readInt();
			mYOffsets[i][j]   = stream->readInt();
		}
	}

	mEditNum = -128;
}

/**
 * @note Address: 0x80245F2C
 * @note Size: 0x54
 */
void EditMapUnit::setEditNumber(int editNo)
{
	if (editNo == -1) {
		mEditNum = editNo;
		return;
	}

	if (mEditCount > 0) {
		if (editNo >= 0) {
			int ceil = mEditCount - 1;
			if (editNo < 0) {
				editNo = 0;
			} else if (editNo > ceil) {
				editNo = ceil;
			}
			mEditNum = editNo;
		}

	} else {
		mEditNum = -1;
	}
}

/**
 * @note Address: 0x80245F80
 * @note Size: 0x19C
 */
RandMapUnit::RandMapUnit(MapUnitGenerator* generator)
{
	mGenerator           = generator;
	MapNode* nodeArray   = mGenerator->getMapNodeKinds();
	MapNode* placedNodes = mGenerator->getPlacedNodes();

	mUnitKindChildCounts = new int[3];
	for (int i = 0; i < 3; i++) {
		mUnitKindChildCounts[i] = nodeArray[i].getChildCount();
	}

	FloorInfo* info = mGenerator->getFloorInfo();
	if (info) {
		mRoomCount  = info->getRoomNum();
		mRouteRatio = info->getRouteRatio();
		f32 tempMax = 0.01f * info->getCapMax();
		// bound between 0.0f and 1.0f.
		mCapMax = (tempMax < 0.0f) ? 0.0f : (tempMax > 1.0f) ? 1.0f : tempMax;
	} else {
		mRoomCount  = 2;
		mRouteRatio = 0.0f;
		mCapMax     = 0.0f;
	}

	mMapHasDiameter36 = false;
	mDoorCount        = 0;

	FOREACH_NODE(MapNode, generator->mMemMapList->mChild, currNode)
	{
		int numDoors = currNode->getNumDoors();
		if (numDoors > mDoorCount) {
			mDoorCount = numDoors;
		}
	}

	mChecker = new RandMapChecker(placedNodes);

	mNeedsLoopMapNodeCheck   = true;
	mCapCandidateCount       = 0;
	mCapCandidateNodes       = new MapNode*[16];
	mCapCandidateDoorIndices = new int[16];
}

/**
 * @note Address: 0x8024611C
 * @note Size: 0xF4
 */
void RandMapUnit::setMapUnit()
{
	if (mGenerator->mEditMapUnit) {
		setEditorMapUnit();
	} else {
		setFirstMapUnit();
	}

	if (getOpenDoorNum() != 0) {
		for (int i = 0; i < 500; i++) {
			MapNode* tile = getRandMapUnit();
			if (tile) {
				addMap(tile->mUnitInfo, tile->getNodeOffsetX(), tile->getNodeOffsetY(), true);
			}

			if (getOpenDoorNum() == 0) {
				changeCapToRootLoopMapUnit();

				if (getOpenDoorNum() == 0) {
					changeTwoToOneMapUnit();

					if (getOpenDoorNum() == 0) {
						return;
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x80246210
 * @note Size: 0x34
 */
int RandMapUnit::getAliveMapIndex(MapNode* tile)
{
	int index = 0;
	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currNode)
	{
		if (tile == currNode) {
			return index;
		}

		index++;
	}

	return -1;
}

/**
 * @note Address: 0x80246244
 * @note Size: 0xA0
 */
void RandMapUnit::getTextureSize(int& x, int& y)
{
	int tempX = -12800;
	int tempY = -12800;

	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currNode)
	{
		int newX = currNode->getNodeOffsetX() + currNode->mUnitInfo->getUnitSizeX();
		int newY = currNode->getNodeOffsetY() + currNode->mUnitInfo->getUnitSizeY();

		if (newX > tempX) {
			tempX = newX;
		}

		if (newY > tempY) {
			tempY = newY;
		}
	}

	x = tempX;
	y = tempY;
}

/**
 * @note Address: 0x802462E4
 * @note Size: 0x6C
 */
MapNode* RandMapUnit::getRandMapUnit()
{
	if (getPartsKindNum(UNITKIND_Room) < mRoomCount) {
		return getNormalRandMapUnit();
	}

	createLoopMapNodeCheck();

	MapNode* loopNode = getLoopRandMapUnit();
	if (loopNode) {
		return loopNode;
	}

	return getLoopEndMapUnit();
}

/**
 * @note Address: 0x80246350
 * @note Size: 0x284
 */
void RandMapUnit::changeCapToRootLoopMapUnit()
{
	char* unitNames[16];

	// MapNode* placedNodes;
	MapNode* nodeArray   = mGenerator->mMapNodeKinds;
	MapNode* placedNodes = mGenerator->getPlacedNodes();
	int nameCount        = 0;
	FOREACH_NODE(MapNode, nodeArray[2].mChild, currNode)
	{
		if (currNode->mUnitInfo->getUnitSizeX() == 1 && currNode->mUnitInfo->getUnitSizeY() == 1 && currNode->getNumDoors() == 2
		    && currNode->getDoorDirect(CD_Up) == 0 && currNode->getDoorDirect(CD_Right) == 2) {
			unitNames[nameCount] = currNode->mUnitInfo->getUnitName();
			nameCount++;
		}
	}

	if (nameCount) {
		FOREACH_NODE(MapNode, placedNodes->mChild, currNode)
		{
			if (currNode->mUnitInfo->getUnitKind() == UNITKIND_Cap) {
				MapNode* tile = nullptr;
				int X         = currNode->getNodeOffsetX();
				int Y         = currNode->getNodeOffsetY();

				int newX = X;
				int newY = Y;

				int doorDirect = (int)currNode->getDoorDirect(CD_Up);
				switch (doorDirect) {
				case CD_Up:
					newY++;
					break;

				case CD_Right:
					newX = X - 1;
					break;

				case CD_Down:
					newY--;
					break;

				case CD_Left:
					newX = X + 1;
					break;
				}

				FOREACH_NODE(MapNode, placedNodes->mChild, otherNode)
				{
					if (currNode != otherNode && otherNode->mUnitInfo->getUnitKind() == UNITKIND_Corridor) {
						if (otherNode->getNodeOffsetX() == newX && otherNode->getNodeOffsetY() == newY) {
							tile = otherNode;
							break;
						}
					}
				}

				if (tile) {
					deleteMapNode(currNode);
					deleteMapNode(tile);

					int randIdx    = randInt(nameCount);
					char* randName = unitNames[randIdx];

					FOREACH_NODE(MapNode, nodeArray[2].mChild, anotherNode)
					{
						if (anotherNode->mUnitInfo->getUnitName() == randName && doorDirect == anotherNode->getDoorDirect(CD_Up)) {
							addMap(anotherNode->mUnitInfo, X, Y, true);
							return;
						}
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x802465D4
 * @note Size: 0x360
 */
void RandMapUnit::changeTwoToOneMapUnit()
{
	char* firstUnitNames[16];
	int firstNamesCount  = 0;
	int secondNamesCount = 0;

	MapNode* nodeArray   = mGenerator->getMapNodeKinds();
	MapNode* placedNodes = mGenerator->mPlacedMapNodes;

	FOREACH_NODE(MapNode, nodeArray[2].mChild, currNode)
	{
		if (currNode->mUnitInfo->getUnitSizeX() == 1 && currNode->mUnitInfo->getUnitSizeY() == 1 && currNode->getNumDoors() == 2
		    && currNode->getDoorDirect(CD_Up) == 0 && currNode->getDoorDirect(CD_Right) == 2) {
			firstUnitNames[firstNamesCount] = currNode->mUnitInfo->getUnitName();
			firstNamesCount++;
		}
	}

	char* secondUnitNames[16];
	FOREACH_NODE(MapNode, nodeArray[2].mChild, currNode)
	{
		if (currNode->mUnitInfo->getUnitSizeX() == 1 && currNode->mUnitInfo->getUnitSizeY() == 2 && currNode->getNumDoors() == 2
		    && currNode->getDoorDirect(CD_Up) == 0 && currNode->getDoorDirect(CD_Right) == 2) {
			secondUnitNames[secondNamesCount] = currNode->mUnitInfo->getUnitName();
			secondNamesCount++;
		}
	}

	if (firstNamesCount && secondNamesCount) {
		CNode* nextNode;
		for (CNode* node = placedNodes->mChild; node; node = nextNode) {
			nextNode          = node->mNext;
			MapNode* currNode = static_cast<MapNode*>(node);
			bool check        = false;
			for (int i = 0; i < firstNamesCount; i++) {
				if (currNode->mUnitInfo->getUnitName() == firstUnitNames[i]) {
					check = true;
				}
			}

			MapNode* targetNode = nullptr;
			if (check) {
				for (int i = 0; i < 2; i++) {
					if (!targetNode && currNode->mAdjustInfo[i].mMapTile) {
						for (int j = 0; j < firstNamesCount; j++) {
							if (currNode->mAdjustInfo[i].mMapTile->mUnitInfo->getUnitName() == firstUnitNames[j]) {
								targetNode = currNode->mAdjustInfo[i].mMapTile;
								break;
							}
						}
					}
				}
			}

			if (targetNode) {
				int X = minVal(currNode->getNodeOffsetX(), targetNode->getNodeOffsetX());
				int Y = minVal(currNode->getNodeOffsetY(), targetNode->getNodeOffsetY());

				bool xDiff = (currNode->getNodeOffsetX() != targetNode->getNodeOffsetX());

				deleteMapNode(currNode);
				deleteMapNode(targetNode);

				int randIdx    = randInt(secondNamesCount);
				char* randName = secondUnitNames[randIdx];
				FOREACH_NODE(MapNode, nodeArray[2].mChild, anotherNode)
				{
					if (anotherNode->mUnitInfo->getUnitName() == randName && xDiff == anotherNode->getDoorDirect(CD_Up)) {
						addMap(anotherNode->mUnitInfo, X, Y, true);
						break;
					}
				}

				nextNode = placedNodes->mChild;
			}
		}
	}
}

/**
 * @note Address: 0x80246934
 * @note Size: 0x144
 */
void RandMapUnit::setEditorMapUnit()
{
	MapNode* mapNode      = mGenerator->getMemMapList();
	EditMapUnit* editUnit = mGenerator->getEditMapUnit();

	int editNo = editUnit->mEditNum;
	if (editNo < 0) {
		int count = editUnit->mEditCount;
		editNo    = randInt(count);
	}

	int last = editUnit->mUnitCounts[editNo] - 1;

	for (int i = 0; i < editUnit->mUnitCounts[editNo]; i++) {
		FOREACH_NODE(MapNode, mapNode->mChild, currNode)
		{
			if (editUnit->mDirections[editNo][i] == currNode->getDirection()
			    && strcmp(currNode->getUnitName(), editUnit->mUnitNames[editNo][i]) == 0) {
				addMap(currNode->mUnitInfo, editUnit->mXOffsets[editNo][i], editUnit->mYOffsets[editNo][i], i == last);
			}
		}
	}
}

/**
 * @note Address: 0x80246A78
 * @note Size: 0x6C
 */
void RandMapUnit::setFirstMapUnit()
{
	MapNode* firstUnit = getFirstMapUnit();
	if (firstUnit) {
		addMap(firstUnit->mUnitInfo, firstUnit->getNodeOffsetX(), firstUnit->getNodeOffsetY(), true);
	}
}

/**
 * @note Address: 0x80246AE4
 * @note Size: 0x8C
 */
MapNode* RandMapUnit::getFirstMapUnit()
{
	FOREACH_NODE(MapNode, mGenerator->mMapNodeKinds[1].mChild, currNode)
	{
		BaseGen* gen = currNode->mUnitInfo->getBaseGen();
		if (gen) {
			FOREACH_NODE(BaseGen, gen->mChild, currGen)
			{
				if (currGen->mSpawnType == BaseGen::CGT_Start) {
					currNode->setOffset(0, 0);
					return currNode;
				}
			}
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x80246B70
 * @note Size: 0x188
 */
MapNode* RandMapUnit::getNormalRandMapUnit()
{
	int intArr[16];
	int kindOrder[UNITKIND_Count];
	int doorNum  = getOpenDoorNum();
	int randDoor = randInt(doorNum);

	MapNode* nodeArray = mGenerator->getMapNodeKind(0);

	int doorIdx;
	int doorX;
	int doorY;
	MapNode* node  = getCalcDoorIndex(doorIdx, doorX, doorY, randDoor);
	DoorNode* door = node->getDoorNode(doorIdx);

	if (node && door) {
		setUnitKindOrder(node, kindOrder);
		for (int i = 0; i < UNITKIND_Count; i++) {
			setUnitDoorSorting(kindOrder[i]);
			FOREACH_NODE(MapNode, nodeArray[kindOrder[i]].mChild, currNode)
			{
				int currDoorNum = currNode->getNumDoors();
				setRandomDoorIndex(intArr, currDoorNum);

				for (int j = 0; j < currDoorNum; j++) {
					if (currNode->isDoorSet(door, doorX, doorY, intArr[j]) && mChecker->isPutOnMap(currNode)) {
						return currNode;
					}
				}
			}
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x80246CF8
 * @note Size: 0xC8
 */
void RandMapUnit::setUnitKindOrder(MapNode* node, int* unitList)
{
	f32 ratio = mRouteRatio;

	if (mMapHasDiameter36) {
		ratio = 0.0f;
	}

	if (node->mUnitInfo->getUnitKind() == UNITKIND_Room) {
		ratio *= 2.0f;
	}

	unitList[2] = UNITKIND_Cap;
	if (randWeightFloat(1.0f) < ratio) {
		unitList[0] = UNITKIND_Corridor;
		unitList[1] = UNITKIND_Room;
	} else {
		unitList[0] = UNITKIND_Room;
		unitList[1] = UNITKIND_Corridor;
	}
}

/**
 * @note Address: 0x80246DC0
 * @note Size: 0x314
 */
void RandMapUnit::setUnitDoorSorting(int kind)
{
	if (kind == UNITKIND_Corridor) {
		MapNode* corrTiles = mGenerator->getMapNodeKind(kind);
		int doorOffsets[16];
		int openDoorNum = getOpenDoorNum();
		if (openDoorNum < 4) {
			for (int i = 0; i < mDoorCount; i++) {
				doorOffsets[i] = mDoorCount - i;
			}
		} else {
			for (int i = 0; i < mDoorCount; i++) {
				doorOffsets[i] = i + 1;
			}

			if (openDoorNum < 10) {
				for (int i = 0; i < mDoorCount; i++) {
					int randIdx          = randInt(mDoorCount);
					int currOffset       = doorOffsets[i];
					doorOffsets[i]       = doorOffsets[randIdx];
					doorOffsets[randIdx] = currOffset;
				}
			}
		}

		for (int i = 0; i < mDoorCount; i++) {
			int counter = 0;
			FOREACH_NODE(MapNode, corrTiles->mChild, currTile)
			{
				if (doorOffsets[i] == currTile->getNumDoors()) {
					counter++;
				}
			}

			for (int j = 0; j < counter; j++) {
				FOREACH_NODE(MapNode, corrTiles->mChild, currTile)
				{
					if (doorOffsets[i] == currTile->getNumDoors()) {
						currTile->del();
						corrTiles->add(currTile);
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x802470D4
 * @note Size: 0x164
 */
void RandMapUnit::setRandomDoorIndex(int* list, int max)
{
	int i;
	for (i = 0; i < max; i++) {
		list[i] = i;
	}

	for (i = 0; i < max; i++) {
		int randIdx    = randInt(max);
		int currOffset = list[i];
		list[i]        = list[randIdx];
		list[randIdx]  = currOffset;
	}
}

/**
 * @note Address: 0x80247238
 * @note Size: 0x208
 */
MapNode* RandMapUnit::getLoopRandMapUnit()
{
	MapNode* tileList[512];
	int openDoorNum = getOpenDoorNum();
	int loopCount   = getLoopMapNode(tileList);

	int doorIdx, x, y;
	MapNode* firstLink;
	int oppDir;
	for (int i = 0; i < openDoorNum; i++) {
		MapNode* tile = getCalcDoorIndex(doorIdx, x, y, i);

		// Skip if loop map node check fails
		if (!isLoopMapNodeCheck(tile, doorIdx)) {
			continue;
		}

		DoorNode* door = tile->getDoorNode(doorIdx);
		int d;
		firstLink = getLinkDoorNodeFirst(tile, doorIdx, x, y, d);

		// Skip if no first link
		if (!firstLink) {
			continue;
		}

		// Get the direction of the door in the tile
		const int tileDir = tile->getDoorDirect(doorIdx);

		// Get the direction of the door in the first link
		const int linkDir = getLinkDoorDirection(tile, doorIdx, firstLink, d);

		int directions[2];
		directions[0] = linkDir;
		directions[1] = tileDir;

		// Calculate the opposite direction of the tile's door (left -> right, up -> down, etc.)
		oppDir = (tileDir + 2) % 4;

		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < loopCount; k++) {
				// Get the directions of the doors in the current tile
				int loopDir0 = tileList[k]->getDoorDirect(CD_Up);
				int loopDir1 = tileList[k]->getDoorDirect(CD_Right);

				// Check if the first door's direction is the opposite of the tile's door and the second door's direction matches the
				// current direction
				if (loopDir0 == oppDir && loopDir1 == directions[j]) {
					// Check if the door is set and if the tile can be put on the map
					if (tileList[k]->isDoorSet(door, x, y, 0) && mChecker->isPutOnMap(tileList[k])) {
						return tileList[k];
					}
				}
				// Check if the second door's direction is the opposite of the tile's door and the first door's direction matches the
				// current direction
				else if (loopDir1 == oppDir && loopDir0 == directions[j]) {
					// Check if the door is set and if the tile can be put on the map
					if (tileList[k]->isDoorSet(door, x, y, 1) && mChecker->isPutOnMap(tileList[k])) {
						return tileList[k];
					}
				}
			}
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x80247440
 * @note Size: 0xC8
 */
MapNode* RandMapUnit::getCalcDoorIndex(int& doorIdx, int& doorOffsetX, int& doorOffsetY, int targetDoorCount)
{
	int doorCount = 0;
	for (CNode* node = mGenerator->getPlacedNodes()->mChild; node; node = node->mNext) {
		MapNode* currTile = static_cast<MapNode*>(node);
		for (doorIdx = 0; doorIdx < currTile->getNumDoors(); doorIdx++) {
			if (!currTile->isDoorClose(doorIdx)) {
				if (doorCount == targetDoorCount) {
					currTile->getDoorNode(doorIdx);
					currTile->getDoorOffset(doorIdx, doorOffsetX, doorOffsetY);
					return currTile;
				}
				doorCount++;
			}
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x80247508
 * @note Size: 0x12C
 */
MapNode* RandMapUnit::getLinkDoorNodeFirst(MapNode* tile, int doorIdx, int b, int c, int& d)
{
	int minIdx      = 255;
	int doorDirect  = tile->getDoorDirect(doorIdx);
	MapNode* target = nullptr;

	FOREACH_NODE(MapNode, mGenerator->getPlacedNodes()->mChild, currTile)
	{
		if (tile == currTile) {
			continue;
		}

		for (int i = 0; i < currTile->getNumDoors(); i++) {
			// Matches the logic within weird register in getLoopRandMapUnit. INLINE???
			if (!currTile->isDoorClose(i)) {
				currTile->getDoorNode(i);

				int x, y;
				currTile->getDoorOffset(i, x, y);

				if (isInLinkArea(doorDirect, b, c, x, y)) {
					int idx = _abs(b - x) + _abs(c - y);

					if (idx < minIdx) {
						d      = i;
						minIdx = idx;
						target = currTile;
					}
				}
			}
		}
	}

	return target;
}

/**
 * @note Address: 0x80247634
 * @note Size: 0xD0
 */
bool RandMapUnit::isInLinkArea(int direction, int p2, int p3, int p4, int p5)
{
	int xDiff = p4 - p2;
	int yDiff = p5 - p3;
	int xCalc = _abs(xDiff);
	int yCalc = _abs(yDiff);

	switch (direction) {
	case CD_Up:
		if (xCalc < 10 && yCalc < 10 && yDiff <= 0) {
			return true;
		}
		break;
	case CD_Right:
		if (xCalc < 10 && xDiff >= 0 && yCalc < 10) {
			return true;
		}
		break;
	case CD_Down:
		if (xCalc < 10 && yCalc < 10 && yDiff >= 0) {
			return true;
		}
		break;
	case CD_Left:
		if (xCalc < 10 && xDiff <= 0 && yCalc < 10) {
			return true;
		}
		break;
	}

	return false;
}

/**
 * @note Address: 0x80247704
 * @note Size: 0x130
 */
u32 RandMapUnit::getLoopMapNode(MapNode** nodes)
{
	int counter = 0;
	FOREACH_NODE(MapNode, mGenerator->mMapNodeKinds[UNITKIND_Corridor].mChild, node)
	{
		if (node->mUnitInfo->getUnitSizeX() == 1 && node->mUnitInfo->getUnitSizeY() == 1 && node->getNumDoors() == 2) {
			nodes[counter] = node;
			counter++;
		}
	}

	if (counter) {
		for (int i = 0; i < counter; i++) {
			int randIdx       = randInt(counter);
			MapNode* prevNode = nodes[i];
			nodes[i]          = nodes[randIdx];
			nodes[randIdx]    = prevNode;
		}
	}

	return counter;
}

/**
 * @note Address: 0x80247834
 * @note Size: 0xEC
 */
int RandMapUnit::getLinkDoorDirection(MapNode* tileA, int doorIdxA, MapNode* tileB, int doorIdxB)
{
	int x1, y1;
	tileA->getDoorOffset(doorIdxA, x1, y1);
	int x2, y2;
	tileB->getDoorOffset(doorIdxB, x2, y2);
	int direction1 = tileA->getDoorDirect(doorIdxA);
	int direction2 = tileB->getDoorDirect(doorIdxB);

	int xDiff = x2 - x1;
	int yDiff = y2 - y1;

	if (direction1 == CD_Up) {
		return getUpToLinkDoorDir(direction2, xDiff, yDiff);
	} else if (direction1 == CD_Right) {
		return getRightToLinkDoorDir(direction2, xDiff, yDiff);
	} else if (direction1 == CD_Down) {
		return getDownToLinkDoorDir(direction2, xDiff, yDiff);
	} else if (direction1 == CD_Left) {
		return getLeftToLinkDoorDir(direction2, xDiff, yDiff);
	}

	return -1;
}

/**
 * @note Address: 0x80247920
 * @note Size: 0xBC
 */
int RandMapUnit::getUpToLinkDoorDir(int direction, int xDiff, int yDiff)
{
	if (yDiff > -2) {
		if (xDiff < 0) {
			return CD_Left;
		}
		return CD_Right;
	}

	if (xDiff < -1) {
		return CD_Left;
	}

	if (xDiff == -1) {
		if (direction == CD_Down || direction == CD_Left) {
			return CD_Left;
		}
		return CD_Up;
	}

	if (xDiff == 0) {
		if (direction == CD_Up || direction == CD_Left) {
			return CD_Left;
		}
		return CD_Up;
	}

	if (xDiff == 1) {
		if (direction == CD_Right || direction == CD_Down) {
			return CD_Right;
		}
		return CD_Up;
	}

	return xDiff > 1; // CD_Right if true, CD_Up if not
}

/**
 * @note Address: 0x802479DC
 * @note Size: 0xC4
 */
int RandMapUnit::getRightToLinkDoorDir(int direction, int xDiff, int yDiff)
{
	if (xDiff == 0) {
		return yDiff > CD_Up ? CD_Down : (int)CD_Up;
	}

	if (yDiff < -1) {
		return CD_Up;
	}

	if (yDiff == -1) {
		if (direction == CD_Up || direction == CD_Left) {
			return CD_Up;
		}
		return CD_Right;
	}

	if (yDiff == 0) {
		if (direction == CD_Up || direction == CD_Right) {
			return CD_Up;
		}

		return CD_Right;
	}

	if (yDiff == 1) {
		if (direction == CD_Down || direction == CD_Left) {
			return CD_Down;
		}

		return CD_Right;
	}

	return (yDiff > 1) + 1;
}

/**
 * @note Address: 0x80247AA0
 * @note Size: 0xBC
 */
int RandMapUnit::getDownToLinkDoorDir(int direction, int xDiff, int yDiff)
{
	if (yDiff == 0) {
		if (xDiff > 0) {
			return CD_Right;
		}
		return CD_Left;
	}

	if (xDiff < -1) {
		return CD_Left;
	}

	if (xDiff == -1) {
		if (direction == CD_Up || direction == CD_Left) {
			return CD_Left;
		}
		return CD_Down;
	}

	if (xDiff == 0) {
		if (direction == CD_Down || direction == CD_Left) {
			return CD_Left;
		}
		return CD_Down;
	}

	if (xDiff == 1) {
		if (direction == CD_Up || direction == CD_Right) {
			return CD_Right;
		}

		return CD_Down;
	}

	return xDiff > CD_Right ? CD_Right : (int)CD_Down;
}

/**
 * @note Address: 0x80247B5C
 * @note Size: 0xC0
 */
int RandMapUnit::getLeftToLinkDoorDir(int direction, int xDiff, int yDiff)
{
	if (xDiff > -2) {
		return yDiff > CD_Up ? CD_Down : (int)CD_Up;
	}

	if (yDiff < -1) {
		return CD_Up;
	}

	if (yDiff == -1) {
		if (direction == CD_Up || direction == CD_Right) {
			return CD_Up;
		}
		return CD_Left;
	}

	if (yDiff == 0) {
		if (direction == CD_Up || direction == CD_Left) {
			return CD_Up;
		}
		return CD_Left;
	}

	if (yDiff == 1) {
		if (direction == CD_Right || direction == CD_Down) {
			return CD_Down;
		}

		return CD_Left;
	}

	return yDiff > CD_Right ? CD_Down : (int)CD_Left;
}

/**
 * @note Address: 0x80247C1C
 * @note Size: 0x2F0
 */
MapNode* RandMapUnit::getLoopEndMapUnit()
{
	MapNode* mapNodeTypes = mGenerator->getMapNodeKinds();
	int doorIndex, doorOffsetX, doorOffsetY;
	MapNode* unblockedMapNode   = getCalcDoorIndex(doorIndex, doorOffsetX, doorOffsetY, 0);
	DoorNode* unblockedDoorNode = unblockedMapNode->getDoorNode(doorIndex);
	int doorTypes[3]            = { 0, 2, 1 };
	if (unblockedMapNode && unblockedDoorNode) {
		for (int typeIndex = 0; typeIndex < 3; ++typeIndex) {
			for (int doorCount = 0; doorCount < mDoorCount; ++doorCount) {
				int count = doorCount + 1;
				for (MapNode* mapNode = static_cast<MapNode*>(mapNodeTypes[doorTypes[typeIndex]].mChild); mapNode;
				     mapNode          = static_cast<MapNode*>(mapNode->mNext)) {
					if (mapNode->getNumDoors() != count) {
						continue;
					}
					int doorIndices[16];
					setRandomDoorIndex(doorIndices, count);
					for (int i = 0; i < count; ++i) {
						if (mapNode->isDoorSet(unblockedDoorNode, doorOffsetX, doorOffsetY, doorIndices[i])
						    && mChecker->isPutOnMap(mapNode)) {
							return mapNode;
						}
					}
				}
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x80247F0C
 * @note Size: 0x70
 */
int RandMapUnit::getPartsKindNum(int kind)
{
	int counter = 0;
	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currNode)
	{
		if (currNode->mUnitInfo->getUnitKind() == kind) {
			counter++;
		}
	}

	return counter;
}

/**
 * @note Address: 0x80247F7C
 * @note Size: 0x8C
 */
int RandMapUnit::getOpenDoorNum()
{
	int counter = 0;
	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currNode)
	{
		for (int i = 0; i < currNode->getNumDoors(); i++) {
			if (!currNode->isDoorClose(i)) {
				counter++;
			}
		}
	}

	return counter;
}

/**
 * @note Address: 0x80248008
 * @note Size: 0xB4
 */
void RandMapUnit::addMap(UnitInfo* info, int x, int y, bool updatePriority)
{
	MapNode* newTile = new MapNode(info);
	if (newTile) {
		newTile->clearRelations();
		newTile->setOffset(x, y);
		mGenerator->mPlacedMapNodes->add(newTile);
	}

	if (updatePriority) {
		closeDoorCheck();
		moveCentre();
		changeMapPriority(info);
	}
}

/**
 * @note Address: 0x802480BC
 * @note Size: 0x3DC
 */
void RandMapUnit::changeMapPriority(UnitInfo* info)
{
	int unitKind                = info->getUnitKind();
	MapUnitGenerator* generator = mGenerator;
	MapNode& rootMapNode        = generator->mMapNodeKinds[unitKind];
	if (unitKind == UNITKIND_Room) {
		MapNode* placed = generator->getPlacedNodes();
		info->getUnitName();
		int lastFourStart = mUnitKindChildCounts[UNITKIND_Room] - 4;
		int unitCounts[128];
		char* unitNames[128];
		int addedUnitCount = 0;
		for (int i = 0; i < 128; ++i) {
			unitCounts[i] = 0;
			unitNames[i]  = nullptr;
		}
		for (MapNode* node = static_cast<MapNode*>(placed->mChild); node; node = static_cast<MapNode*>(node->mNext)) {
			if (node->mUnitInfo->getUnitKind() == UNITKIND_Room) {
				bool toAdd = true;
				for (int i = 0; i < addedUnitCount; ++i) {
					if (!strcmp(unitNames[i], node->getUnitName())) {
						++unitCounts[i];
						toAdd = false;
						break;
					}
				}
				if (toAdd) {
					unitNames[addedUnitCount] = node->getUnitName();
					++unitCounts[addedUnitCount];
					++addedUnitCount;
				}
			}
		}
		for (int i = 0; i < addedUnitCount - 1; ++i) {
			for (int j = i + 1; j < addedUnitCount; ++j) {
				if (unitCounts[i] > unitCounts[j]) {
					int count     = unitCounts[i];
					char* name    = unitNames[i];
					unitCounts[i] = unitCounts[j];
					unitNames[i]  = unitNames[j];
					unitCounts[j] = count;
					unitNames[j]  = name;
				}
			}
		}
		for (int i = 0; i < addedUnitCount; ++i) {
			for (int j = 0; j < 4; ++j) {
				for (MapNode* node = static_cast<MapNode*>(rootMapNode.mChild); node; node = static_cast<MapNode*>(node->mNext)) {
					if (!strcmp(node->getUnitName(), unitNames[i])) {
						node->del();
						rootMapNode.add(node);
					}
				}
			}
			for (int j = 0; j < 4; ++j) {
				CNode* node = rootMapNode.getChildAt(lastFourStart + randInt(4));
				if (node) {
					node->del();
					rootMapNode.add(node);
				}
			}
		}
	} else {
		for (int i = 0; i < mUnitKindChildCounts[unitKind]; ++i) {
			CNode* node = rootMapNode.getChildAt(randInt(mUnitKindChildCounts[unitKind]));
			if (node) {
				node->del();
				rootMapNode.add(node);
			}
		}
	}
}

/**
 * @note Address: 0x80248498
 * @note Size: 0x12C
 */
void RandMapUnit::moveCentre()
{
	int maxX = -12800;
	int maxY = -12800;
	int minX = 12800;
	int minY = 12800;

	Cave::MapNode* rootNode = mGenerator->mPlacedMapNodes;
	for (Cave::MapNode* currentNode = static_cast<Cave::MapNode*>(rootNode->mChild); currentNode;
	     currentNode                = static_cast<Cave::MapNode*>(currentNode->mNext)) {

		int nodeOffsetX = currentNode->getNodeOffsetX();
		int nodeSizeX   = currentNode->mUnitInfo->getUnitSizeX() + nodeOffsetX;
		int nodeOffsetY = currentNode->getNodeOffsetY();
		int nodeSizeY   = currentNode->mUnitInfo->getUnitSizeY() + nodeOffsetY;

		if (nodeOffsetX < minX)
			minX = nodeOffsetX;
		if (nodeSizeX > maxX)
			maxX = nodeSizeX;
		if (nodeOffsetY < minY)
			minY = nodeOffsetY;
		if (nodeSizeY > maxY)
			maxY = nodeSizeY;
	}

	// Move all nodes so that the bounding box is at the origin
	for (Cave::MapNode* currentNode = static_cast<Cave::MapNode*>(rootNode->mChild); currentNode;
	     currentNode                = static_cast<Cave::MapNode*>(currentNode->mNext)) {
		int nodeOffsetX = currentNode->getNodeOffsetX();
		int nodeOffsetY = currentNode->getNodeOffsetY();

		int x = nodeOffsetX - minX;
		int y = nodeOffsetY - minY;

		currentNode->setOffset(x, y);
	}

	if (!mMapHasDiameter36) {
		int x = maxX - minX;

		if (x > 35) {
			mMapHasDiameter36 = true;
		}

		int y = maxY - minY;
		if (y > 35) {
			mMapHasDiameter36 = true;
		}
	}
}

/**
 * @note Address: 0x802485C4
 * @note Size: 0x134
 */
void RandMapUnit::closeDoorCheck()
{
	Cave::MapNode* rootNode = mGenerator->mPlacedMapNodes;
	for (Cave::MapNode* currentNode = static_cast<Cave::MapNode*>(rootNode->mChild); currentNode;
	     currentNode                = static_cast<Cave::MapNode*>(currentNode->mNext)) {
		// Iterate over all doors of the current node
		for (int doorIdx = 0; doorIdx < currentNode->getNumDoors(); ++doorIdx) {
			// If the door is closed, skip it
			if (currentNode->isDoorClose(doorIdx)) {
				continue;
			}

			int offsetX, offsetY;
			currentNode->getDoorOffset(doorIdx, offsetX, offsetY);

			// Get the node connected to the door and its offset
			Cave::DoorNode* doorNode = currentNode->getDoorNode(doorIdx);

			// Iterate over all child nodes of the root node again
			for (Cave::MapNode* otherNode = static_cast<Cave::MapNode*>(rootNode->mChild); otherNode;
			     otherNode                = static_cast<Cave::MapNode*>(otherNode->mNext)) {
				// If the nodes are the same, skip it
				if (currentNode == otherNode) {
					continue;
				}

				// Iterate over all doors of the other node
				for (int otherDoorIdx = 0; otherDoorIdx < otherNode->getNumDoors(); ++otherDoorIdx) {
					// If the door nodes are the same and the offsets are the same, close the door
					if (doorNode->isDoorAdjust(otherNode->getDoorNode(otherDoorIdx))) {
						int otherOffsetX, otherOffsetY;
						otherNode->getDoorOffset(otherDoorIdx, otherOffsetX, otherOffsetY);

						if (offsetX == otherOffsetX && offsetY == otherOffsetY) {
							currentNode->setDoorClose(doorIdx, otherNode, otherDoorIdx);
						}
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x802486F8
 * @note Size: 0x38
 */
void RandMapUnit::deleteMapNode(MapNode* tile)
{
	tile->detachDoorClose();
	tile->del();
}

/**
 * @note Address: 0x80248730
 * @note Size: 0x198
 */
void RandMapUnit::createLoopMapNodeCheck()
{
	if (!mNeedsLoopMapNodeCheck) {
		return;
	}
	mNeedsLoopMapNodeCheck = false;
	int unclosedDoors      = getOpenDoorNum();
	int doorIndex, x, y;
	for (int i = 0; i < unclosedDoors; ++i) {
		if (mCapCandidateCount < 16 && randWeightFloat(1.0f) < mCapMax) {
			MapNode* node                                = getCalcDoorIndex(doorIndex, x, y, i);
			mCapCandidateNodes[mCapCandidateCount]       = node;
			mCapCandidateDoorIndices[mCapCandidateCount] = doorIndex;
			++mCapCandidateCount;
		}
	}
}

/**
 * @note Address: 0x802488C8
 * @note Size: 0x4C
 */
bool RandMapUnit::isLoopMapNodeCheck(MapNode* tile, int idx)
{
	for (int i = 0; i < mCapCandidateCount; i++) {
		if (tile == mCapCandidateNodes[i] && idx == mCapCandidateDoorIndices[i]) {
			return false;
		}
	}

	return true;
}
} // namespace Cave
} // namespace Game
