#include "types.h"
#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/gx.h"

namespace Game {
namespace Cave {

/*
 * --INFO--
 * Address:	802427A8
 * Size:	0000A4
 */
MapUnits::MapUnits(JUTTexture* texture)
{
	// Constructor for MapUnits struct
	//     - sets texture and unit sizes based on input texture
	//     - constructs a new DoorNode
	//     - sets everything else to 0 or -1 (whichever 'null' should be)
	mTexture = texture;
	mBaseGen = 0;
	mName    = 0;
	mIndex   = -1;
	mKind    = -1;
	mSizeX   = -1;
	mSizeY   = -1;
	if (mTexture) {
		mSizeX = ((u32)mTexture->mTexInfo->mSizeX) >> 3;
		mSizeY = ((u32)mTexture->mTexInfo->mSizeY) >> 3;
	}

	mDoorNode   = new DoorNode();
	mDoorCounts = 0;
}

/*
 * --INFO--
 * Address:	8024284C
 * Size:	000060
 */
void MapUnits::setDoorNum(int doorNum)
{
	// Construct new AdjustNode array for number of doors
	mDoorCounts = new AdjustNode[doorNum];
}

/*
 * --INFO--
 * Address:	8024290C
 * Size:	000008
 */
void MapUnits::setUnitName(char* name) { mName = name; }

/*
 * --INFO--
 * Address:	80242914
 * Size:	000008
 */
void MapUnits::setUnitIndex(int idx) { mIndex = idx; }

/*
 * --INFO--
 * Address:	8024291C
 * Size:	000008
 */
void MapUnits::setUnitKind(int kind) { mKind = kind; }

/*
 * --INFO--
 * Address:	80242924
 * Size:	00000C
 */
void MapUnits::setUnitSize(int sizeX, int sizeY)
{
	mSizeX = sizeX;
	mSizeY = sizeY;
}

/*
 * --INFO--
 * Address:	80242930
 * Size:	000008
 */
void MapUnits::setBaseGenPtr(BaseGen* baseGen) { mBaseGen = baseGen; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void Cave::MapUnits::setUnitTexture(JUTTexture*)
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// char* Cave::MapUnits::getUnitName()
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// int Cave::MapUnits::getUnitIndex()
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// int Cave::MapUnits::getUnitKind()
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// int Cave::MapUnits::getUnitSizeX()
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// int Cave::MapUnits::getUnitSizeY()
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// BaseGen* Cave::MapUnits::getBaseGen()
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// JUTTexture* Cave::MapUnits::getUnitTexture()
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80242938
 * Size:	000064
 */
UnitInfo::UnitInfo(MapUnits* mapUnits)
{
	// Constructor for UnitInfo struct
	//    - sets mMapUnits to input mapUnits
	//    - creates new DoorNode
	//    - sets everything else to 'null' (0 or -1 depending)

	mMapUnits     = mapUnits;
	mUnitRotation = -1;
	mUnitSizeX    = -1;
	mUnitSizeY    = -1;
	mDoorNode     = new DoorNode;
	mDoorCounts   = 0;
}

/*
 * --INFO--
 * Address:	8024299C
 * Size:	00000C
 */
void UnitInfo::setUnitTexture(JUTTexture* texture) { mMapUnits->mTexture = texture; }

/*
 * --INFO--
 * Address:	802429A8
 * Size:	000008
 */
void UnitInfo::setUnitRotation(int rot) { mUnitRotation = rot; }

/*
 * --INFO--
 * Address:	802429B0
 * Size:	0001BC
 */
void UnitInfo::create()
{
	// sets up unit sizes + directions based on details in mMapUnits + current rotation

	// load all door nodes from mMapUnits into mDoorNode
	DoorNode* mapDoorNode = (DoorNode*)mMapUnits->mDoorNode->mChild;
	for (mapDoorNode; mapDoorNode; mapDoorNode = (DoorNode*)mapDoorNode->mNext) {
		DoorNode* newDoorNode         = new DoorNode();
		newDoorNode->mDoor.mDirection = mapDoorNode->mDoor.mDirection;
		newDoorNode->mDoor.mOffset    = mapDoorNode->mDoor.mOffset;
		mDoorNode->add(newDoorNode);
	}

	// get AdjustInfo* from mMapUnits
	mDoorCounts = mMapUnits->mDoorCounts;

	// if unit is facing up or down, use X and Y as normal
	if ((mUnitRotation == 0) || (mUnitRotation == 2)) {
		mUnitSizeX = mMapUnits->mSizeX;
		mUnitSizeY = mMapUnits->mSizeY;
	} else { // if unit is facing left or right, swap X and Y
		mUnitSizeX = mMapUnits->mSizeY;
		mUnitSizeY = mMapUnits->mSizeX;
	}

	// set defaults for door offsets
	int X = mMapUnits->mSizeX - 1;
	int Y = mMapUnits->mSizeY - 1;

	// set all door offsets based on their directions
	DoorNode* unitDoorNode = (DoorNode*)mDoorNode->mChild;
	for (unitDoorNode; unitDoorNode; unitDoorNode = (DoorNode*)unitDoorNode->mNext) {

		int doorDir      = unitDoorNode->mDoor.mDirection; // default direction
		int newDirection = (doorDir + mUnitRotation) % 4;  // rotate with unit

		unitDoorNode->mDoor.mDirection = newDirection; // set as new door direction
		// set offset based on new direction vs old direction
		if (doorDir == CD_UP) {
			if ((newDirection == CD_DOWN) || (newDirection == CD_LEFT)) {
				unitDoorNode->mDoor.mOffset = (X - unitDoorNode->mDoor.mOffset);
			}
		} else if (doorDir == CD_RIGHT) {
			if ((newDirection == CD_DOWN) || (newDirection == CD_LEFT)) {
				unitDoorNode->mDoor.mOffset = (Y - unitDoorNode->mDoor.mOffset);
			}
		} else if (doorDir == CD_DOWN) {
			if ((newDirection == CD_UP) || (newDirection == CD_RIGHT)) {
				unitDoorNode->mDoor.mOffset = (X - unitDoorNode->mDoor.mOffset);
			}
		} else if (doorDir == CD_LEFT) {
			if ((newDirection == CD_UP) || (newDirection == CD_RIGHT)) {
				unitDoorNode->mDoor.mOffset = (Y - unitDoorNode->mDoor.mOffset);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80242B6C
 * Size:	00000C
 */
char* UnitInfo::getUnitName() { return mMapUnits->mName; }

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
// int Cave::UnitInfo::getUnitIndex()
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80242B78
 * Size:	00000C
 */
int UnitInfo::getUnitKind() { return mMapUnits->mKind; }

/*
 * --INFO--
 * Address:	80242B84
 * Size:	000008
 */
int UnitInfo::getUnitSizeX() { return mUnitSizeX; }

/*
 * --INFO--
 * Address:	80242B8C
 * Size:	000008
 */
int UnitInfo::getUnitSizeY() { return mUnitSizeY; }

/*
 * --INFO--
 * Address:	80242B94
 * Size:	000008
 */
int UnitInfo::getUnitRotation() { return mUnitRotation; }

/*
 * --INFO--
 * Address:	80242B9C
 * Size:	000024
 */
DoorNode* UnitInfo::getDoorNode(int doorNum) { return (DoorNode*)mDoorNode->getChildAt(doorNum); }

/*
 * --INFO--
 * Address:	80242BC0
 * Size:	00000C
 */
BaseGen* UnitInfo::getBaseGen() { return mMapUnits->mBaseGen; }

/*
 * --INFO--
 * Address:	80242BCC
 * Size:	00018C
 */
void UnitInfo::draw(f32 x0, f32 y0, f32 x1, f32 y1)
{
	// Draw texture for UnitInfo based on rotation and
	// mMapUnits->mTexture
	JUTTexture* texture = mMapUnits->mTexture;
	if (texture) {
		// default first-input GX coords
		s8 u0 = 0;
		s8 u1 = 16;
		s8 u2 = 16;
		s8 u3 = 0;

		// default second-input GX coords
		s8 v0 = 0;
		s8 v1 = 0;
		s8 v2 = 16;
		s8 v3 = 16;

		// modify GX coords based on rotation of unit
		switch (mUnitRotation) {
		case 0: // facing up/default, no rotation
			break;
		case 1: // facing right
			u1 = 0;
			u3 = 16;

			v0 = 16;
			v2 = 0;
			break;
		case 2: // facing down
			u0 = 16;
			u1 = 0;
			u2 = 0;
			u3 = 16;

			v0 = 16;
			v1 = 16;
			v2 = 0;
			v3 = 0;
			break;
		case 3: // facing left
			u0 = 16;
			u2 = 0;

			v1 = 16;
			v3 = 0;
			break;
		}
		// set GX positions and coords
		texture->load(GX_TEXMAP0);

		GXBegin(GX_QUADS, GX_VTXFMT0, 4);

		// bottom left
		GXPosition3f32(x0, y0, 0.0f);
		GXTexCoord2s8(u0, v0);

		// bottom right
		GXPosition3f32(x1, y0, 0.0f);
		GXTexCoord2s8(u1, v1);

		// top right
		GXPosition3f32(x1, y1, 0.0f);
		GXTexCoord2s8(u2, v2);

		// top left
		GXPosition3f32(x0, y1, 0.0f);
		GXTexCoord2s8(u3, v3);
	}
}
} // namespace Cave
} // namespace Game
