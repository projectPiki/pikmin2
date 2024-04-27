#include "types.h"
#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/gx.h"

namespace Game {
namespace Cave {

/**
 * @note Address: 0x802427A8
 * @note Size: 0xA4
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
		mSizeX = ((u32)mTexture->mTexInfo->mSizeX) / 8;
		mSizeY = ((u32)mTexture->mTexInfo->mSizeY) / 8;
	}

	mDoorNode   = new DoorNode();
	mDoorCounts = 0;
}

/**
 * @note Address: 0x8024284C
 * @note Size: 0x60
 */
void MapUnits::setDoorNum(int doorNum)
{
	// Construct new AdjustNode array for number of doors
	mDoorCounts = new AdjustNode[doorNum];
}

/**
 * @note Address: 0x8024290C
 * @note Size: 0x8
 */
void MapUnits::setUnitName(char* name) { mName = name; }

/**
 * @note Address: 0x80242914
 * @note Size: 0x8
 */
void MapUnits::setUnitIndex(int idx) { mIndex = idx; }

/**
 * @note Address: 0x8024291C
 * @note Size: 0x8
 */
void MapUnits::setUnitKind(int kind) { mKind = kind; }

/**
 * @note Address: 0x80242924
 * @note Size: 0xC
 */
void MapUnits::setUnitSize(int sizeX, int sizeY)
{
	mSizeX = sizeX;
	mSizeY = sizeY;
}

/**
 * @note Address: 0x80242930
 * @note Size: 0x8
 */
void MapUnits::setBaseGenPtr(BaseGen* baseGen) { mBaseGen = baseGen; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void MapUnits::setUnitTexture(JUTTexture* texture) { mTexture = texture; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
char* MapUnits::getUnitName() { return mName; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
int MapUnits::getUnitIndex() { return mIndex; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
int MapUnits::getUnitKind() { return mKind; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
int MapUnits::getUnitSizeX() { return mSizeX; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
int MapUnits::getUnitSizeY() { return mSizeY; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
BaseGen* MapUnits::getBaseGen() { return mBaseGen; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
JUTTexture* MapUnits::getUnitTexture() { return mTexture; }

/**
 * @note Address: 0x80242938
 * @note Size: 0x64
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

/**
 * @note Address: 0x8024299C
 * @note Size: 0xC
 */
void UnitInfo::setUnitTexture(JUTTexture* texture) { mMapUnits->mTexture = texture; }

/**
 * @note Address: 0x802429A8
 * @note Size: 0x8
 */
void UnitInfo::setUnitRotation(int rot) { mUnitRotation = rot; }

/**
 * @note Address: 0x802429B0
 * @note Size: 0x1BC
 */
void UnitInfo::create()
{
	// sets up unit sizes + directions based on details in mMapUnits + current rotation

	// load all door nodes from mMapUnits into mDoorNode
	DoorNode* mapDoorNode = static_cast<DoorNode*>(mMapUnits->mDoorNode->mChild);
	for (mapDoorNode; mapDoorNode; mapDoorNode = static_cast<DoorNode*>(mapDoorNode->mNext)) {
		DoorNode* newDoorNode         = new DoorNode();
		newDoorNode->mDoor.mDirection = mapDoorNode->mDoor.mDirection;
		newDoorNode->mDoor.mOffset    = mapDoorNode->mDoor.mOffset;
		mDoorNode->add(newDoorNode);
	}

	// get AdjustInfo* from mMapUnits
	mDoorCounts = mMapUnits->mDoorCounts;

	// if unit is facing up or down, use X and Y as normal
	if ((mUnitRotation == CD_Up) || (mUnitRotation == CD_Down)) {
		mUnitSizeX = mMapUnits->getUnitSizeX();
		mUnitSizeY = mMapUnits->getUnitSizeY();
	} else { // if unit is facing left or right, swap X and Y
		mUnitSizeX = mMapUnits->getUnitSizeY();
		mUnitSizeY = mMapUnits->getUnitSizeX();
	}

	// set defaults for door offsets
	int X = mMapUnits->getUnitSizeX() - 1;
	int Y = mMapUnits->getUnitSizeY() - 1;

	// set all door offsets based on their directions
	DoorNode* unitDoorNode = static_cast<DoorNode*>(mDoorNode->mChild);
	for (unitDoorNode; unitDoorNode; unitDoorNode = static_cast<DoorNode*>(unitDoorNode->mNext)) {

		int doorDir      = unitDoorNode->mDoor.mDirection; // default direction
		int newDirection = (doorDir + mUnitRotation) % 4;  // rotate with unit

		unitDoorNode->mDoor.mDirection = newDirection; // set as new door direction
		// set offset based on new direction vs old direction
		if (doorDir == CD_Up) {
			if ((newDirection == CD_Down) || (newDirection == CD_Left)) {
				unitDoorNode->mDoor.mOffset = (X - unitDoorNode->mDoor.mOffset);
			}
		} else if (doorDir == CD_Right) {
			if ((newDirection == CD_Down) || (newDirection == CD_Left)) {
				unitDoorNode->mDoor.mOffset = (Y - unitDoorNode->mDoor.mOffset);
			}
		} else if (doorDir == CD_Down) {
			if ((newDirection == CD_Up) || (newDirection == CD_Right)) {
				unitDoorNode->mDoor.mOffset = (X - unitDoorNode->mDoor.mOffset);
			}
		} else if (doorDir == CD_Left) {
			if ((newDirection == CD_Up) || (newDirection == CD_Right)) {
				unitDoorNode->mDoor.mOffset = (Y - unitDoorNode->mDoor.mOffset);
			}
		}
	}
}

/**
 * @note Address: 0x80242B6C
 * @note Size: 0xC
 */
char* UnitInfo::getUnitName() { return mMapUnits->mName; }

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
int UnitInfo::getUnitIndex()
{
	// UNUSED FUNCTION
	return mMapUnits->mIndex;
}

/**
 * @note Address: 0x80242B78
 * @note Size: 0xC
 */
int UnitInfo::getUnitKind() { return mMapUnits->mKind; }

/**
 * @note Address: 0x80242B84
 * @note Size: 0x8
 */
int UnitInfo::getUnitSizeX() { return mUnitSizeX; }

/**
 * @note Address: 0x80242B8C
 * @note Size: 0x8
 */
int UnitInfo::getUnitSizeY() { return mUnitSizeY; }

/**
 * @note Address: 0x80242B94
 * @note Size: 0x8
 */
int UnitInfo::getUnitRotation() { return mUnitRotation; }

/**
 * @note Address: 0x80242B9C
 * @note Size: 0x24
 */
DoorNode* UnitInfo::getDoorNode(int doorNum) { return static_cast<DoorNode*>(mDoorNode->getChildAt(doorNum)); }

/**
 * @note Address: 0x80242BC0
 * @note Size: 0xC
 */
BaseGen* UnitInfo::getBaseGen() { return mMapUnits->mBaseGen; }

/**
 * @note Address: 0x80242BCC
 * @note Size: 0x18C
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
		case CD_Up: // default, no rotation
			break;
		case CD_Right:
			u1 = 0;
			u3 = 16;

			v0 = 16;
			v2 = 0;
			break;
		case CD_Down:
			u0 = 16;
			u1 = 0;
			u2 = 0;
			u3 = 16;

			v0 = 16;
			v1 = 16;
			v2 = 0;
			v3 = 0;
			break;
		case CD_Left:
			u0 = 16;
			u2 = 0;

			v1 = 16;
			v3 = 0;
			break;
		}
		// set GX positions and coords
		texture->load(GX_TEXMAP0);

		GXBegin(GX_QUADS, GX_VTXFMT0, 4);

		f32 z = 0.0f;

		// bottom left
		GXPosition3f32(x0, y0, z);
		GXTexCoord2s8(u0, v0);

		// bottom right
		GXPosition3f32(x1, y0, z);
		GXTexCoord2s8(u1, v1);

		// top right
		GXPosition3f32(x1, y1, z);
		GXTexCoord2s8(u2, v2);

		// top left
		GXPosition3f32(x0, y1, z);
		GXTexCoord2s8(u3, v3);
	}
}
} // namespace Cave
} // namespace Game
