#include "Game/Cave/RandMapUnit.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/arith.h"
#include "Dolphin/rand.h"
#include "types.h"

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
	MapNode* placedNodes = mGenerator->getPlacedNodes();

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
		MapNode* currNode = static_cast<MapNode*>(placedNodes->mChild);
		for (; currNode; currNode = static_cast<MapNode*>(currNode->mNext)) {
			MapNode* nextNode = static_cast<MapNode*>(currNode->mNext);
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
				int X        = targetNode->getNodeOffsetX();
				int currentX = currNode->getNodeOffsetX();
				if (currentX < X) {
					X = currentX;
				}

				int Y        = targetNode->getNodeOffsetY();
				int currentY = currNode->getNodeOffsetY();
				if (currentY < Y) {
					Y = currentY;
				}

				int xDiff = (targetNode->getNodeOffsetX() != currNode->getNodeOffsetX());

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

				nextNode = static_cast<MapNode*>(placedNodes->mChild);
			}
		}
	}
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stmw     r19, 0xac(r1)
	mr       r25, r3
	addi     r30, r1, 0x48
	li       r29, 0
	mr       r21, r30
	li       r28, 0
	lwz      r3, 0x20(r3)
	lwz      r31, 0x10(r3)
	lwz      r24, 0x28(r3)
	lwz      r20, 0x90(r31)
	b        lbl_8024667C

lbl_8024660C:
	lwz      r3, 0x18(r20)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_80246678
	lwz      r3, 0x18(r20)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_80246678
	mr       r3, r20
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpwi    r3, 2
	bne      lbl_80246678
	mr       r3, r20
	li       r4, 0
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpwi    r3, 0
	bne      lbl_80246678
	mr       r3, r20
	li       r4, 1
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpwi    r3, 2
	bne      lbl_80246678
	lwz      r3, 0x18(r20)
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	stw      r3, 0(r21)
	addi     r21, r21, 4
	addi     r29, r29, 1

lbl_80246678:
	lwz      r20, 4(r20)

lbl_8024667C:
	cmplwi   r20, 0
	bne      lbl_8024660C
	lwz      r20, 0x90(r31)
	addi     r21, r1, 8
	b        lbl_80246700

lbl_80246690:
	lwz      r3, 0x18(r20)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_802466FC
	lwz      r3, 0x18(r20)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 2
	bne      lbl_802466FC
	mr       r3, r20
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpwi    r3, 2
	bne      lbl_802466FC
	mr       r3, r20
	li       r4, 0
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpwi    r3, 0
	bne      lbl_802466FC
	mr       r3, r20
	li       r4, 1
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpwi    r3, 2
	bne      lbl_802466FC
	lwz      r3, 0x18(r20)
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	stw      r3, 0(r21)
	addi     r21, r21, 4
	addi     r28, r28, 1

lbl_802466FC:
	lwz      r20, 4(r20)

lbl_80246700:
	cmplwi   r20, 0
	bne      lbl_80246690
	cmpwi    r29, 0
	beq      lbl_80246920
	cmpwi    r28, 0
	beq      lbl_80246920
	lwz      r3, 0x10(r24)
	b        lbl_80246918

lbl_80246720:
	lwz      r23, 4(r3)
	mr       r27, r3
	mr       r21, r30
	li       r20, 0
	li       r22, 0
	b        lbl_80246758

lbl_80246738:
	lwz      r3, 0x18(r27)
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0(r21)
	cmplw    r3, r0
	bne      lbl_80246750
	li       r20, 1

lbl_80246750:
	addi     r21, r21, 4
	addi     r22, r22, 1

lbl_80246758:
	cmpw     r22, r29
	blt      lbl_80246738
	clrlwi.  r0, r20, 0x18
	li       r26, 0
	beq      lbl_802467E0
	li       r21, 0
	li       r22, 0

lbl_80246774:
	cmplwi   r26, 0
	bne      lbl_802467D0
	lwz      r3, 0x28(r27)
	lwzx     r0, r3, r22
	cmplwi   r0, 0
	beq      lbl_802467D0
	mr       r20, r30
	li       r19, 0
	b        lbl_802467C8

lbl_80246798:
	lwz      r0, 0x28(r27)
	lwzx     r3, r22, r0
	lwz      r3, 0x18(r3)
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0(r20)
	cmplw    r3, r0
	bne      lbl_802467C0
	lwz      r3, 0x28(r27)
	lwzx     r26, r3, r22
	b        lbl_802467D0

lbl_802467C0:
	addi     r20, r20, 4
	addi     r19, r19, 1

lbl_802467C8:
	cmpw     r19, r29
	blt      lbl_80246798

lbl_802467D0:
	addi     r21, r21, 1
	addi     r22, r22, 0xc
	cmpwi    r21, 2
	blt      lbl_80246774

lbl_802467E0:
	cmplwi   r26, 0
	beq      lbl_80246914
	mr       r3, r26
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	mr       r23, r3
	mr       r3, r27
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	cmpw     r3, r23
	bge      lbl_80246808
	mr       r23, r3

lbl_80246808:
	mr       r3, r26
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	mr       r22, r3
	mr       r3, r27
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	cmpw     r3, r22
	bge      lbl_80246828
	mr       r22, r3

lbl_80246828:
	mr       r3, r26
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	mr       r21, r3
	mr       r3, r27
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	subf     r4, r3, r21
	subf     r0, r21, r3
	or       r0, r4, r0
	mr       r3, r25
	mr       r4, r27
	srwi     r19, r0, 0x1f
	bl       deleteMapNode__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNode
	mr       r3, r25
	mr       r4, r26
	bl       deleteMapNode__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNode
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x8c(r1)
	xoris    r0, r28, 0x8000
	lfd      f2, lbl_8051A770@sda21(r2)
	addi     r3, r1, 8
	stw      r4, 0x88(r1)
	lfs      f0, lbl_8051A778@sda21(r2)
	lfd      f1, 0x88(r1)
	stw      r0, 0x94(r1)
	fsubs    f1, f1, f2
	lwz      r21, 0x90(r31)
	stw      r4, 0x90(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x90(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x98(r1)
	lwz      r0, 0x9c(r1)
	slwi     r0, r0, 2
	lwzx     r20, r3, r0
	b        lbl_80246908

lbl_802468C4:
	lwz      r3, 0x18(r21)
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	cmplw    r3, r20
	bne      lbl_80246904
	mr       r3, r21
	li       r4, 0
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpw     r19, r3
	bne      lbl_80246904
	lwz      r4, 0x18(r21)
	mr       r3, r25
	mr       r5, r23
	mr       r6, r22
	li       r7, 1
	bl       addMap__Q34Game4Cave11RandMapUnitFPQ34Game4Cave8UnitInfoiib
	b        lbl_80246910

lbl_80246904:
	lwz      r21, 4(r21)

lbl_80246908:
	cmplwi   r21, 0
	bne      lbl_802468C4

lbl_80246910:
	lwz      r23, 0x10(r24)

lbl_80246914:
	mr       r3, r23

lbl_80246918:
	cmplwi   r3, 0
	bne      lbl_80246720

lbl_80246920:
	lmw      r19, 0xac(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
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
	for (int i = 0; i < max; i++) {
		list[i] = i;
	}

	for (int i = 0; i < max; i++) {
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
		int oppDir = (tileDir + 2) % 4;

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
	/*
	stwu     r1, -0x850(r1)
	mflr     r0
	stw      r0, 0x854(r1)
	stmw     r21, 0x824(r1)
	mr       r25, r3
	bl       getOpenDoorNum__Q34Game4Cave11RandMapUnitFv
	mr       r30, r3
	mr       r3, r25
	addi     r4, r1, 0x20
	bl getLoopMapNode__Q34Game4Cave11RandMapUnitFPPQ34Game4Cave7MapNode mr
r31, r3 li       r28, 0 b        lbl_80247420

lbl_8024726C:
	mr       r3, r25
	mr       r7, r28
	addi     r4, r1, 0x14
	addi     r5, r1, 0x10
	addi     r6, r1, 0xc
	bl       getCalcDoorIndex__Q34Game4Cave11RandMapUnitFRiRiRii
	mr       r22, r3
	lwz      r5, 0x14(r1)
	mr       r3, r25
	mr       r4, r22
	bl isLoopMapNodeCheck__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNodei
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024741C
	lwz      r4, 0x14(r1)
	mr       r3, r22
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	lwz      r5, 0x14(r1)
	mr       r27, r3
	lwz      r6, 0x10(r1)
	mr       r3, r25
	lwz      r7, 0xc(r1)
	mr       r4, r22
	addi     r8, r1, 8
	bl
getLinkDoorNodeFirst__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNodeiiiRi
or. r23, r3, r3 beq      lbl_8024741C lwz      r4, 0x14(r1) mr       r3, r22
bl getDoorDirect__Q34Game4Cave7MapNodeFi lwz      r5, 0x14(r1) mr       r24,
r3 lwz r7, 8(r1) mr       r3, r25 mr       r4, r22 mr       r6, r23 bl
getLinkDoorDirection__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNodeiPQ34Game4Cave7MapNodei
	addi     r4, r24, 2
	stw      r3, 0x18(r1)
	slwi     r0, r4, 0x1e
	addi     r29, r1, 0x18
	srwi     r3, r4, 0x1f
	stw      r24, 0x1c(r1)
	subf     r0, r3, r0
	li       r26, 0
	rotlwi   r0, r0, 2
	add      r22, r0, r3

lbl_80247324:
	addi     r23, r1, 0x20
	li       r21, 0
	b        lbl_80247404

lbl_80247330:
	lwz      r3, 0(r23)
	li       r4, 0
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	mr       r24, r3
	lwz      r3, 0(r23)
	li       r4, 1
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpw     r24, r22
	bne      lbl_802473A4
	lwz      r0, 0(r29)
	cmpw     r3, r0
	bne      lbl_802473A4
	lwz      r3, 0(r23)
	mr       r4, r27
	lwz      r5, 0x10(r1)
	li       r7, 0
	lwz      r6, 0xc(r1)
	bl       isDoorSet__Q34Game4Cave7MapNodeFPQ34Game4Cave8DoorNodeiii
	clrlwi.  r0, r3, 0x18
	beq      lbl_802473FC
	lwz      r3, 0x28(r25)
	lwz      r4, 0(r23)
	bl       isPutOnMap__Q34Game4Cave14RandMapCheckerFPQ34Game4Cave7MapNode
	clrlwi.  r0, r3, 0x18
	beq      lbl_802473FC
	slwi     r0, r21, 2
	addi     r3, r1, 0x20
	lwzx     r3, r3, r0
	b        lbl_8024742C

lbl_802473A4:
	cmpw     r3, r22
	bne      lbl_802473FC
	lwz      r0, 0(r29)
	cmpw     r24, r0
	bne      lbl_802473FC
	lwz      r3, 0(r23)
	mr       r4, r27
	lwz      r5, 0x10(r1)
	li       r7, 1
	lwz      r6, 0xc(r1)
	bl       isDoorSet__Q34Game4Cave7MapNodeFPQ34Game4Cave8DoorNodeiii
	clrlwi.  r0, r3, 0x18
	beq      lbl_802473FC
	lwz      r3, 0x28(r25)
	lwz      r4, 0(r23)
	bl       isPutOnMap__Q34Game4Cave14RandMapCheckerFPQ34Game4Cave7MapNode
	clrlwi.  r0, r3, 0x18
	beq      lbl_802473FC
	slwi     r0, r21, 2
	addi     r3, r1, 0x20
	lwzx     r3, r3, r0
	b        lbl_8024742C

lbl_802473FC:
	addi     r23, r23, 4
	addi     r21, r21, 1

lbl_80247404:
	cmpw     r21, r31
	blt      lbl_80247330
	addi     r26, r26, 1
	addi     r29, r29, 4
	cmpwi    r26, 2
	blt      lbl_80247324

lbl_8024741C:
	addi     r28, r28, 1

lbl_80247420:
	cmpw     r28, r30
	blt      lbl_8024726C
	li       r3, 0

lbl_8024742C:
	lmw      r21, 0x824(r1)
	lwz      r0, 0x854(r1)
	mtlr     r0
	addi     r1, r1, 0x850
	blr
	*/
}

/**
 * @note Address: 0x80247440
 * @note Size: 0xC8
 */
MapNode* RandMapUnit::getCalcDoorIndex(int& doorIdx, int& doorOffsetX, int& doorOffsetY, int targetDoorCount)
{
	int doorCount = 0;

	// Iterate over all placed nodes
	FOREACH_NODE(MapNode, mGenerator->getPlacedNodes()->mChild, currTile)
	{
		// Remove this line and all registers are different
		// Keep this line and they line up, but you're one instruction over...
		// WTF? (HP + Intns 2024)
		doorIdx = 0;

		// Iterate over all doors in the current node
		for (doorIdx = 0; doorIdx < currTile->getNumDoors(); doorIdx++) {
			// Skip if the door is closed
			if (currTile->isDoorClose(doorIdx)) {
				continue;
			}

			// If we've reached the target door count, get the door offset and return the current node
			if (doorCount == targetDoorCount) {
				currTile->getDoorNode(doorIdx);
				currTile->getDoorOffset(doorIdx, doorOffsetX, doorOffsetY);
				return currTile;
			}

			doorCount++;
		}
	}

	return nullptr;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r4
	mr       r27, r5
	mr       r28, r6
	mr       r29, r7
	li       r31, 0
	lwz      r3, 0x20(r3)
	lwz      r3, 0x28(r3)
	lwz      r30, 0x10(r3)
	b        lbl_802474E8

lbl_80247474:
	li       r0, 0
	stw      r0, 0(r26)
	b        lbl_802474D0

lbl_80247480:
	mr       r3, r30
	bl       isDoorClose__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_802474C4
	cmpw     r31, r29
	bne      lbl_802474C0
	lwz      r4, 0(r26)
	mr       r3, r30
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	lwz      r4, 0(r26)
	mr       r3, r30
	mr       r5, r27
	mr       r6, r28
	bl       getDoorOffset__Q34Game4Cave7MapNodeFiRiRi
	mr       r3, r30
	b        lbl_802474F4

lbl_802474C0:
	addi     r31, r31, 1

lbl_802474C4:
	lwz      r3, 0(r26)
	addi     r0, r3, 1
	stw      r0, 0(r26)

lbl_802474D0:
	mr       r3, r30
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	lwz      r4, 0(r26)
	cmpw     r4, r3
	blt      lbl_80247480
	lwz      r30, 4(r30)

lbl_802474E8:
	cmplwi   r30, 0
	bne      lbl_80247474
	li       r3, 0

lbl_802474F4:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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

inline Cave::DoorNode* findUnblockedDoorNode(Cave::MapNode*& mapNode, int& offsetX, int& offsetY)
{
	Cave::DoorNode* doorNode = nullptr;
	int closedDoors          = 0;

	// Find an unblocked door
	while (mapNode) {
		for (int doorIndex = 0; doorIndex < mapNode->getNumDoors(); ++doorIndex) {
			if (!mapNode->isDoorClose(doorIndex) && !closedDoors) {
				doorNode = mapNode->getDoorNode(doorIndex);
				mapNode->getDoorOffset(doorIndex, offsetX, offsetY);
			} else {
				closedDoors++;
			}
		}

		mapNode = static_cast<Cave::MapNode*>(mapNode->mNext);
	}

	return mapNode->getDoorNode(0);
}

/**
 * @note Address: 0x80247C1C
 * @note Size: 0x2F0
 */
MapNode* RandMapUnit::getLoopEndMapUnit()
{
	Cave::MapUnitGenerator* mapUnitGenerator = mGenerator;
	Cave::MapNode* mapNodeTypes              = mapUnitGenerator->getMapNodeKinds();

	int doorOffsetX, doorOffsetY = 0;
	Cave::MapNode* unblockedMapNode;

	Cave::MapNode* mapNode            = static_cast<Cave::MapNode*>(mapUnitGenerator->getPlacedNodes()->mChild);
	Cave::DoorNode* unblockedDoorNode = findUnblockedDoorNode(mapNode, doorOffsetX, doorOffsetY);

	int doorTypes[3] = { 0, 2, 1 };

	for (int typeIndex = 0; typeIndex < 3; typeIndex++) {
		for (int doorCount = 0; doorCount < mDoorCount; doorCount++) {
			for (Cave::MapNode* mapNode = &mapNodeTypes[doorTypes[typeIndex]]; mapNode; mapNode = (MapNode*)mapNode->mNext) {
				int dc = doorCount + 1;

				if (mapNode->getNumDoors() != dc) {
					continue;
				}

				int doorIndices[8];
				for (int i = 0; i < dc; ++i) {
					doorIndices[i] = i;
				}

				// Shuffle the doorIndices
				for (int i = 0; i < dc; i++) {
					int j          = randInt(doorCount);
					int temp       = doorIndices[i];
					doorIndices[i] = doorIndices[j];
					doorIndices[j] = temp;
				}

				for (int i = 0; i < dc; ++i) {
					if (!mapNode->isDoorSet(unblockedDoorNode, doorOffsetX, doorOffsetY, doorIndices[i])
					    || !mChecker->isPutOnMap(mapNode)) {
						continue;
					}

					return mapNode;
				}
			}
		}

		return nullptr;
	}

	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stmw     r19, 0x7c(r1)
	mr       r21, r3
	li       r20, 0
	lwz      r4, 0x20(r3)
	lwz      r3, 0x28(r4)
	lwz      r31, 0x10(r4)
	lwz      r19, 0x10(r3)
	b        lbl_80247CBC

lbl_80247C58:
	li       r22, 0
	b        lbl_80247CA8

lbl_80247C60:
	mr       r3, r19
	mr       r4, r22
	bl       isDoorClose__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80247CA4
	cmpwi    r20, 0
	bne      lbl_80247CA0
	mr       r3, r19
	mr       r4, r22
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	mr       r3, r19
	mr       r4, r22
	addi     r5, r1, 0xc
	addi     r6, r1, 8
	bl       getDoorOffset__Q34Game4Cave7MapNodeFiRiRi
	b        lbl_80247CC8

lbl_80247CA0:
	addi     r20, r20, 1

lbl_80247CA4:
	addi     r22, r22, 1

lbl_80247CA8:
	mr       r3, r19
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r22, r3
	blt      lbl_80247C60
	lwz      r19, 4(r19)

lbl_80247CBC:
	cmplwi   r19, 0
	bne      lbl_80247C58
	li       r19, 0

lbl_80247CC8:
	mr       r3, r19
	mr       r4, r22
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	lis      r4, lbl_804840B4@ha
	mr       r26, r3
	addi     r5, r4, lbl_804840B4@l
	cmplwi   r19, 0
	lwz      r4, 0(r5)
	lwz      r3, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 0x10(r1)
	stw      r3, 0x14(r1)
	stw      r0, 0x18(r1)
	beq      lbl_80247EE4
	cmplwi   r26, 0
	beq      lbl_80247EE4
	li       r25, 0
	addi     r29, r1, 0x10

lbl_80247D10:
	li       r24, 0
	b        lbl_80247EC8

lbl_80247D18:
	lwz      r0, 0(r29)
	addi     r23, r24, 1
	slwi     r3, r0, 6
	addi     r0, r3, 0x10
	lwzx     r22, r31, r0
	b        lbl_80247EBC

lbl_80247D30:
	mr       r3, r22
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r23, r3
	bne      lbl_80247EB8
	cmpwi    r23, 0
	li       r7, 0
	ble      lbl_80247DE4
	cmpwi    r23, 8
	addi     r3, r23, -8
	ble      lbl_80247DB8
	addi     r0, r3, 7
	addi     r8, r1, 0x1c
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80247DB8

lbl_80247D70:
	stw      r7, 0(r8)
	addi     r3, r7, 1
	addi     r0, r7, 2
	addi     r6, r7, 3
	stw      r3, 4(r8)
	addi     r5, r7, 4
	addi     r4, r7, 5
	addi     r3, r7, 6
	stw      r0, 8(r8)
	addi     r0, r7, 7
	addi     r7, r7, 8
	stw      r6, 0xc(r8)
	stw      r5, 0x10(r8)
	stw      r4, 0x14(r8)
	stw      r3, 0x18(r8)
	stw      r0, 0x1c(r8)
	addi     r8, r8, 0x20
	bdnz     lbl_80247D70

lbl_80247DB8:
	slwi     r3, r7, 2
	addi     r4, r1, 0x1c
	subf     r0, r7, r23
	add      r4, r4, r3
	mtctr    r0
	cmpw     r7, r23
	bge      lbl_80247DE4

lbl_80247DD4:
	stw      r7, 0(r4)
	addi     r4, r4, 4
	addi     r7, r7, 1
	bdnz     lbl_80247DD4

lbl_80247DE4:
	addi     r28, r1, 0x1c
	lfd      f30, lbl_8051A770@sda21(r2)
	lfs      f31, lbl_8051A778@sda21(r2)
	mr       r30, r28
	xoris    r20, r23, 0x8000
	li       r27, 0
	lis      r19, 0x4330
	b        lbl_80247E5C

lbl_80247E04:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r19, 0x60(r1)
	lwz      r4, 0(r30)
	addi     r27, r27, 1
	stw      r0, 0x64(r1)
	lfd      f0, 0x60(r1)
	stw      r20, 0x6c(r1)
	fsubs    f0, f0, f30
	stw      r19, 0x68(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x68(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	slwi     r3, r0, 2
	lwzx     r0, r28, r3
	stw      r0, 0(r30)
	addi     r30, r30, 4
	stwx     r4, r28, r3

lbl_80247E5C:
	cmpw     r27, r23
	blt      lbl_80247E04
	li       r19, 0
	b        lbl_80247EB0

lbl_80247E6C:
	lwz      r5, 0xc(r1)
	mr       r3, r22
	lwz      r6, 8(r1)
	mr       r4, r26
	lwz      r7, 0(r28)
	bl       isDoorSet__Q34Game4Cave7MapNodeFPQ34Game4Cave8DoorNodeiii
	clrlwi.  r0, r3, 0x18
	beq      lbl_80247EA8
	lwz      r3, 0x28(r21)
	mr       r4, r22
	bl       isPutOnMap__Q34Game4Cave14RandMapCheckerFPQ34Game4Cave7MapNode
	clrlwi.  r0, r3, 0x18
	beq      lbl_80247EA8
	mr       r3, r22
	b        lbl_80247EE8

lbl_80247EA8:
	addi     r28, r28, 4
	addi     r19, r19, 1

lbl_80247EB0:
	cmpw     r19, r23
	blt      lbl_80247E6C

lbl_80247EB8:
	lwz      r22, 4(r22)

lbl_80247EBC:
	cmplwi   r22, 0
	bne      lbl_80247D30
	addi     r24, r24, 1

lbl_80247EC8:
	lwz      r0, 0(r21)
	cmpw     r24, r0
	blt      lbl_80247D18
	addi     r25, r25, 1
	addi     r29, r29, 4
	cmpwi    r25, 3
	blt      lbl_80247D10

lbl_80247EE4:
	li       r3, 0

lbl_80247EE8:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	lmw      r19, 0x7c(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
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
	int unitKind                      = info->getUnitKind();
	Cave::MapUnitGenerator* generator = mGenerator;
	Cave::MapNode& rootMapNode        = generator->mMapNodeKinds[unitKind << 6];
	if (unitKind == Cave::UNITKIND_Room) {
		Cave::MapNode* placed = generator->mPlacedMapNodes;
		info->getUnitName();
		int addedUnitCount = 0;

		char* x[8][16];
		char* y[8][16];
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 16; j++) {
				x[i][j] = nullptr;
				y[i][j] = nullptr;
			}
		}

		char** unitCountsFirst = x[0];
		char** unitNamesFirst  = y[0];
		for (MapNode* i = (MapNode*)placed->mChild; i; i = (MapNode*)i->mNext) {
			if (i->mUnitInfo->getUnitKind() == Cave::UNITKIND_Room) {
				bool toAdd = true;

				for (int index = 0; index < addedUnitCount; index++) {
					if (!strcmp((char*)y[0], i->getUnitName())) {
						toAdd = false;
						x[0][index]++;
						break;
					}
				}

				if (toAdd) {
					char* unitName = i->getUnitName();

					char* previousName = unitCountsFirst[0];
					addedUnitCount++;
					unitNamesFirst[0] = unitName;
					unitNamesFirst++;
					unitCountsFirst[0] = previousName + 1;
				}
			}
		}

	} else {
		int childCount;
		for (int i = 0; i < (childCount = mUnitKindChildCounts[unitKind]); ++i) {
			f32 randomIndex = randFloat() * static_cast<f32>(childCount);

			CNode* selectedNode = rootMapNode.getChildAt(randomIndex);
			if (selectedNode) {
				selectedNode->del();
				rootMapNode.add(selectedNode);
			}
		}
	}

	// unitKind = Game::Cave::UnitInfo::getUnitKind(a2);
	// v8 = a1->dword20;
	// v9 = *(v8 + 16) + (v7 << 6);
	// if (v7 == 1) {
	// 	v10 = *(v8 + 40);
	// 	Game::Cave::UnitInfo::getUnitName(a2);
	// 	v11 = v52;
	// 	v12 = v51;
	// 	v13 = v52;
	// 	v14 = v51;
	// 	v15 = 0;
	// 	v16 = *(a1->dword24 + 4) - 4;
	// 	v17 = 8;
	// 	do {
	// 		*v13    = 0;
	// 		*v14    = 0;
	// 		v13[1]  = 0;
	// 		v14[1]  = 0;
	// 		v13[2]  = 0;
	// 		v14[2]  = 0;
	// 		v13[3]  = 0;
	// 		v14[3]  = 0;
	// 		v13[4]  = 0;
	// 		v14[4]  = 0;
	// 		v13[5]  = 0;
	// 		v14[5]  = 0;
	// 		v13[6]  = 0;
	// 		v14[6]  = 0;
	// 		v13[7]  = 0;
	// 		v14[7]  = 0;
	// 		v13[8]  = 0;
	// 		v14[8]  = 0;
	// 		v13[9]  = 0;
	// 		v14[9]  = 0;
	// 		v13[10] = 0;
	// 		v14[10] = 0;
	// 		v13[11] = 0;
	// 		v14[11] = 0;
	// 		v13[12] = 0;
	// 		v14[12] = 0;
	// 		v13[13] = 0;
	// 		v14[13] = 0;
	// 		v13[14] = 0;
	// 		v14[14] = 0;
	// 		v13[15] = 0;
	// 		v13 += 16;
	// 		v14[15] = 0;
	// 		v14 += 16;
	// 		--v17;
	// 	} while (v17);
	// 	v18 = *(v10 + 16);
	// 	v19 = v51;
	// 	v20 = v52;
	// 	while (v18) {
	// 		if (Game::Cave::UnitInfo::getUnitKind(*(v18 + 24)) == 1) {
	// 			v21 = v51;
	// 			v22 = 1;
	// 			for (i = 0; i < v15; ++i) {
	// 				v24 = Game::Cave::MapNode::getUnitName(v18);
	// 				if (!strcmp(*v21, v24)) {
	// 					v22 = 0;
	// 					++v52[i];
	// 					break;
	// 				}
	// 				++v21;
	// 			}
	// 			if (v22) {
	// 				v25 = Game::Cave::MapNode::getUnitName(v18);
	// 				v26 = *v20;
	// 				++v15;
	// 				*v19++ = v25;
	// 				*v20++ = v26 + 1;
	// 			}
	// 		}
	// 		v18 = *(v18 + 4);
	// 	}
	// 	v27 = v51;
	// 	for (j = 0; j < v15 - 1; ++j) {
	// 		v29 = j + 1;
	// 		v30 = &v52[j + 1];
	// 		v31 = &v51[j + 1];
	// 		v32 = v15 - (j + 1);
	// 		if (j + 1 < v15) {
	// 			do {
	// 				v33 = *v11;
	// 				if (*v11 > *v30) {
	// 					v34  = *v27;
	// 					v35  = *v31;
	// 					*v11 = *v30;
	// 					*v27 = v35;
	// 					*v30 = v33;
	// 					*v31 = v34;
	// 				}
	// 				++v30;
	// 				++v31;
	// 				++v29;
	// 				--v32;
	// 			} while (v32);
	// 		}
	// 		++v11;
	// 		++v27;
	// 	}
	// 	for (k = 0; k < v15; ++k) {
	// 		v37 = 0;
	// 		do {
	// 			for (l = *(v9 + 16); l; l = *(l + 4)) {
	// 				v39 = Game::Cave::MapNode::getUnitName(l);
	// 				if (!strcmp(v39, *v12)) {
	// 					CNode::del(l);
	// 					CNode::add(v9, l);
	// 				}
	// 			}
	// 			++v37;
	// 		} while (v37 < 4);
	// 		v40 = 0;
	// 		do {
	// 			v53          = rand() ^ 0x80000000 | 0x4330000000000000LL;
	// 			LODWORD(v54) = (4.0 * ((*&v53 - 4.503601774854144e15) / 32768.0));
	// 			v41          = CNode::getChildAt(v9, v16 + LODWORD(v54));
	// 			v42          = v41;
	// 			if (v41) {
	// 				CNode::del(v41);
	// 				CNode::add(v9, v42);
	// 			}
	// 			++v40;
	// 		} while (v40 < 4);
	// 		++v12;
	// 	}
	// } else {
	// 	v43 = 4 * v7;
	// 	for (m = 0;; ++m) {
	// 		v47 = *(v43 + a1->dword24);
	// 		if (m >= v47)
	// 			break;
	// 		LODWORD(v54) = rand() ^ 0x80000000;
	// 		HIDWORD(v54) = 1127219200;
	// 		LODWORD(v53) = v47 ^ 0x80000000;
	// 		HIDWORD(v53) = 1127219200;
	// 		LODWORD(v55) = ((*&v53 - 4.503601774854144e15) * ((v54 - 4.503601774854144e15) / 32768.0));
	// 		v45          = CNode::getChildAt(v9, SLODWORD(v55));
	// 		v46          = v45;
	// 		if (v45) {
	// 			CNode::del(v45);
	// 			CNode::add(v9, v46);
	// 		}
	// 	}
	// }
	/*
	stwu     r1, -0x480(r1)
	mflr     r0
	stw      r0, 0x484(r1)
	stfd     f31, 0x470(r1)
	psq_st   f31, 1144(r1), 0, qr0
	stfd     f30, 0x460(r1)
	psq_st   f30, 1128(r1), 0, qr0
	stfd     f29, 0x450(r1)
	psq_st   f29, 1112(r1), 0, qr0
	stmw     r21, 0x424(r1)
	mr       r21, r4
	mr       r23, r3
	mr       r3, r21
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	lwz      r5, 0x20(r23)
	cmpwi    r3, 1
	slwi     r0, r3, 6
	lwz      r4, 0x10(r5)
	add      r29, r4, r0
	bne      lbl_802483E0
	lwz      r26, 0x28(r5)
	mr       r3, r21
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	lwz      r3, 0x24(r23)
	addi     r30, r1, 0x208
	addi     r31, r1, 8
	li       r0, 8
	lwz      r3, 4(r3)
	mr       r4, r30
	mr       r5, r31
	li       r27, 0
	addi     r28, r3, -4
	mtctr    r0

	lbl_80248140:
	li       r0, 0
	stw      r0, 0(r4)
	stw      r0, 0(r5)
	stw      r0, 4(r4)
	stw      r0, 4(r5)
	stw      r0, 8(r4)
	stw      r0, 8(r5)
	stw      r0, 0xc(r4)
	stw      r0, 0xc(r5)
	stw      r0, 0x10(r4)
	stw      r0, 0x10(r5)
	stw      r0, 0x14(r4)
	stw      r0, 0x14(r5)
	stw      r0, 0x18(r4)
	stw      r0, 0x18(r5)
	stw      r0, 0x1c(r4)
	stw      r0, 0x1c(r5)
	stw      r0, 0x20(r4)
	stw      r0, 0x20(r5)
	stw      r0, 0x24(r4)
	stw      r0, 0x24(r5)
	stw      r0, 0x28(r4)
	stw      r0, 0x28(r5)
	stw      r0, 0x2c(r4)
	stw      r0, 0x2c(r5)
	stw      r0, 0x30(r4)
	stw      r0, 0x30(r5)
	stw      r0, 0x34(r4)
	stw      r0, 0x34(r5)
	stw      r0, 0x38(r4)
	stw      r0, 0x38(r5)
	stw      r0, 0x3c(r4)
	addi     r4, r4, 0x40
	stw      r0, 0x3c(r5)
	addi     r5, r5, 0x40
	bdnz     lbl_80248140
	lwz      r23, 0x10(r26)
	mr       r25, r31
	mr       r24, r30
	b        lbl_80248278

	lbl_802481E0:
	lwz      r3, 0x18(r23)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_80248274
	mr       r26, r31
	li       r22, 1
	li       r21, 0
	b        lbl_80248240

	lbl_80248200:
	mr       r3, r23
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	mr       r4, r3
	lwz      r3, 0(r26)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80248238
	slwi     r5, r21, 2
	addi     r4, r1, 0x208
	lwzx     r3, r4, r5
	li       r22, 0
	addi     r0, r3, 1
	stwx     r0, r4, r5
	b        lbl_80248248

	lbl_80248238:
	addi     r26, r26, 4
	addi     r21, r21, 1

	lbl_80248240:
	cmpw     r21, r27
	blt      lbl_80248200

	lbl_80248248:
	clrlwi.  r0, r22, 0x18
	beq      lbl_80248274
	mr       r3, r23
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	lwz      r4, 0(r24)
	addi     r27, r27, 1
	stw      r3, 0(r25)
	addi     r25, r25, 4
	addi     r0, r4, 1
	stw      r0, 0(r24)
	addi     r24, r24, 4

	lbl_80248274:
	lwz      r23, 4(r23)

	lbl_80248278:
	cmplwi   r23, 0
	bne      lbl_802481E0
	mr       r6, r31
	addi     r3, r27, -1
	li       r9, 0
	b        lbl_802482FC

	lbl_80248290:
	addi     r10, r9, 1
	addi     r4, r1, 0x208
	slwi     r7, r10, 2
	addi     r5, r1, 8
	subf     r0, r10, r27
	add      r4, r4, r7
	add      r5, r5, r7
	mtctr    r0
	cmpw     r10, r27
	bge      lbl_802482F0

	lbl_802482B8:
	lwz      r7, 0(r30)
	lwz      r8, 0(r4)
	cmpw     r7, r8
	ble      lbl_802482E0
	lwz      r11, 0(r6)
	lwz      r0, 0(r5)
	stw      r8, 0(r30)
	stw      r0, 0(r6)
	stw      r7, 0(r4)
	stw      r11, 0(r5)

	lbl_802482E0:
	addi     r4, r4, 4
	addi     r5, r5, 4
	addi     r10, r10, 1
	bdnz     lbl_802482B8

	lbl_802482F0:
	addi     r30, r30, 4
	addi     r6, r6, 4
	addi     r9, r9, 1

	lbl_802482FC:
	cmpw     r9, r3
	blt      lbl_80248290
	lfd      f29, lbl_8051A770@sda21(r2)
	li       r21, 0
	lfs      f31, lbl_8051A778@sda21(r2)
	lis      r30, 0x4330
	lfs      f30, lbl_8051A780@sda21(r2)
	b        lbl_802483D4

	lbl_8024831C:
	li       r22, 0

	lbl_80248320:
	lwz      r23, 0x10(r29)
	b        lbl_80248358

	lbl_80248328:
	mr       r3, r23
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	lwz      r4, 0(r31)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80248354
	mr       r3, r23
	bl       del__5CNodeFv
	mr       r3, r29
	mr       r4, r23
	bl       add__5CNodeFP5CNode

	lbl_80248354:
	lwz      r23, 4(r23)

	lbl_80248358:
	cmplwi   r23, 0
	bne      lbl_80248328
	addi     r22, r22, 1
	cmpwi    r22, 4
	blt      lbl_80248320
	li       r22, 0

	lbl_80248370:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r30, 0x408(r1)
	mr       r3, r29
	stw      r0, 0x40c(r1)
	lfd      f0, 0x408(r1)
	fsubs    f0, f0, f29
	fdivs    f0, f0, f31
	fmuls    f0, f30, f0
	fctiwz   f0, f0
	stfd     f0, 0x410(r1)
	lwz      r0, 0x414(r1)
	add      r4, r28, r0
	bl       getChildAt__5CNodeFi
	or.      r23, r3, r3
	beq      lbl_802483C0
	bl       del__5CNodeFv
	mr       r3, r29
	mr       r4, r23
	bl       add__5CNodeFP5CNode

	lbl_802483C0:
	addi     r22, r22, 1
	cmpwi    r22, 4
	blt      lbl_80248370
	addi     r31, r31, 4
	addi     r21, r21, 1

	lbl_802483D4:
	cmpw     r21, r27
	blt      lbl_8024831C
	b        lbl_8024846C

	lbl_802483E0:
	lfd      f30, lbl_8051A770@sda21(r2)
	slwi     r24, r3, 2
	lfs      f31, lbl_8051A778@sda21(r2)
	li       r21, 0
	lis      r27, 0x4330
	b        lbl_8024845C

	lbl_802483F8:
	bl       rand
	xoris    r3, r3, 0x8000
	xoris    r0, r25, 0x8000
	stw      r3, 0x414(r1)
	mr       r3, r29
	stw      r27, 0x410(r1)
	lfd      f0, 0x410(r1)
	stw      r0, 0x40c(r1)
	fsubs    f0, f0, f30
	stw      r27, 0x408(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x408(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x418(r1)
	lwz      r4, 0x41c(r1)
	bl       getChildAt__5CNodeFi
	or.      r22, r3, r3
	beq      lbl_80248458
	bl       del__5CNodeFv
	mr       r3, r29
	mr       r4, r22
	bl       add__5CNodeFP5CNode

	lbl_80248458:
	addi     r21, r21, 1

	lbl_8024845C:
	lwz      r0, 0x24(r23)
	lwzx     r25, r24, r0
	cmpw     r21, r25
	blt      lbl_802483F8

	lbl_8024846C:
	psq_l    f31, 1144(r1), 0, qr0
	lfd      f31, 0x470(r1)
	psq_l    f30, 1128(r1), 0, qr0
	lfd      f30, 0x460(r1)
	psq_l    f29, 1112(r1), 0, qr0
	lfd      f29, 0x450(r1)
	lmw      r21, 0x424(r1)
	lwz      r0, 0x484(r1)
	mtlr     r0
	addi     r1, r1, 0x480
	blr
	*/
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

	int unclosedDoors;
	Cave::MapNode* rootNode = mGenerator->mPlacedMapNodes;
	for (Cave::MapNode* currentNode = static_cast<Cave::MapNode*>(rootNode->mChild); currentNode;
	     currentNode                = static_cast<Cave::MapNode*>(currentNode->mNext)) {
		for (int doorIdx = 0; doorIdx < currentNode->getNumDoors(); doorIdx++) {
			if (currentNode->isDoorClose(doorIdx)) {
				continue;
			}

			unclosedDoors++;
		}
	}

	for (int doorIdx = 0; doorIdx < unclosedDoors; ++doorIdx) {
		if (mCapCandidateCount >= 16) {
			continue;
		}

		f32 x = randWeightFloat(1.0f);
		if (x < mCapMax) {
			Cave::MapNode* selectedNode = nullptr;

			rootNode = mGenerator->mPlacedMapNodes;
			for (Cave::MapNode* currentNode = static_cast<Cave::MapNode*>(rootNode->mChild); currentNode;
			     currentNode                = static_cast<Cave::MapNode*>(currentNode->mNext)) {

				int unclosedDoorIdx;
				for (int doorIdx = 0;; ++doorIdx) {
					if (doorIdx == currentNode->getNumDoors()) {
						break;
					}

					if (currentNode->isDoorClose(doorIdx)) {
						continue;
					}

					if (unclosedDoorIdx == doorIdx) {
						Cave::MapNode* node = (Cave::MapNode*)currentNode->getDoorNode(doorIdx);

						int x, y;
						node->getDoorOffset(doorIdx, x, y);
						if (node->getNumDoors()) {
							mCapCandidateNodes[mCapCandidateCount]         = node;
							mCapCandidateDoorIndices[mCapCandidateCount++] = doorIdx;
							break;
						}
					}

					++unclosedDoorIdx;
				}
			}
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r28, r3
	lbz      r0, 0xd(r3)
	cmplwi   r0, 0
	beq      lbl_802488B4
	li       r31, 0
	stb      r31, 0xd(r28)
	lwz      r3, 0x20(r28)
	lwz      r3, 0x28(r3)
	lwz      r27, 0x10(r3)
	b        lbl_802487A0

lbl_80248768:
	li       r29, 0
	b        lbl_8024878C

lbl_80248770:
	mr       r3, r27
	mr       r4, r29
	bl       isDoorClose__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80248788
	addi     r31, r31, 1

lbl_80248788:
	addi     r29, r29, 1

lbl_8024878C:
	mr       r3, r27
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r29, r3
	blt      lbl_80248770
	lwz      r27, 4(r27)

lbl_802487A0:
	cmplwi   r27, 0
	bne      lbl_80248768
	li       r29, 0
	b        lbl_802488AC

lbl_802487B0:
	lwz      r0, 0x10(r28)
	cmpwi    r0, 0x10
	bge      lbl_802488A8
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051A770@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_8051A768@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051A778@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, 0x14(r28)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802488A8
	lwz      r3, 0x20(r28)
	li       r26, 0
	lwz      r3, 0x28(r3)
	lwz      r27, 0x10(r3)
	b        lbl_80248870

lbl_8024880C:
	li       r30, 0
	b        lbl_8024885C

lbl_80248814:
	mr       r3, r27
	mr       r4, r30
	bl       isDoorClose__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80248858
	cmpw     r26, r29
	bne      lbl_80248854
	mr       r3, r27
	mr       r4, r30
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	mr       r3, r27
	mr       r4, r30
	addi     r5, r1, 0xc
	addi     r6, r1, 8
	bl       getDoorOffset__Q34Game4Cave7MapNodeFiRiRi
	b        lbl_8024887C

lbl_80248854:
	addi     r26, r26, 1

lbl_80248858:
	addi     r30, r30, 1

lbl_8024885C:
	mr       r3, r27
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r30, r3
	blt      lbl_80248814
	lwz      r27, 4(r27)

lbl_80248870:
	cmplwi   r27, 0
	bne      lbl_8024880C
	li       r27, 0

lbl_8024887C:
	lwz      r0, 0x10(r28)
	lwz      r3, 0x18(r28)
	slwi     r0, r0, 2
	stwx     r27, r3, r0
	lwz      r0, 0x10(r28)
	lwz      r3, 0x1c(r28)
	slwi     r0, r0, 2
	stwx     r30, r3, r0
	lwz      r3, 0x10(r28)
	addi     r0, r3, 1
	stw      r0, 0x10(r28)

lbl_802488A8:
	addi     r29, r29, 1

lbl_802488AC:
	cmpw     r29, r31
	blt      lbl_802487B0

lbl_802488B4:
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
