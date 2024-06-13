#include "Game/Cave/RandMapMgr.h"

namespace Game {
namespace Cave {
/**
 * @note Address: 0x80242D58
 * @note Size: 0x18
 */
AdjustInfo::AdjustInfo()
{
	mMapTile        = nullptr;
	mBirthDoorIndex = -1;
	mDoorScore      = -1;
}

/**
 * @note Address: 0x80242D70
 * @note Size: 0x2AC
 */
MapNode::MapNode(UnitInfo* info)
    : mUnitInfo(nullptr)
    , mEnemyNode(nullptr)
    , mGateNode(nullptr)
    , mItemNode(nullptr)
    , mAdjustInfo(nullptr)
    , mXGridOffset(-1)
    , mYGridOffset(-1)
    , mEnemyScore(-1)
    , mNodeScore(-1)
    , mVsScore(-1)
{
	if (info) {
		mUnitInfo    = info;
		mEnemyNode   = new EnemyNode();
		mGateNode    = new GateNode();
		mItemNode    = new ItemNode();
		int numDoors = getNumDoors();
		mAdjustInfo  = new AdjustInfo[numDoors];
		for (int i = 0; i < numDoors; i++) {
			mAdjustInfo[i].mMapTile        = nullptr;
			mAdjustInfo[i].mBirthDoorIndex = -1;
			mAdjustInfo[i].mDoorScore      = -1;
		}
	}
}

/**
 * @note Address: 0x8024301C
 * @note Size: 0xC
 */
void MapNode::setOffset(int x, int y)
{
	mXGridOffset = x;
	mYGridOffset = y;
}

/**
 * @note Address: 0x80243028
 * @note Size: 0x24
 */
int MapNode::getDoorDirect(int idx) { return getDoorNode(idx)->mDoor.mDirection; }

/**
 * @note Address: 0x8024304C
 * @note Size: 0x100
 */
void MapNode::getDoorOffset(int idx, int& x, int& y)
{
	DoorNode* door = getDoorNode(idx);
	// clang-format off
	/*
	Offset is measured from map origin. First, finds top left of unit on grid
	(i.e., grid offset), then adds unit size or door offset as necessary.
	x-->
  y  ____________
  | |            |
  v |            |
	|    unit    |
	|            |
	|____________|

	*/
	// clang-format on

	switch (door->mDoor.mDirection) {
	case CD_Up:
		x = mXGridOffset + door->mDoor.mOffset;
		y = mYGridOffset;
		break;

	case CD_Right:
		x = mXGridOffset + mUnitInfo->getUnitSizeX();
		y = mYGridOffset + door->mDoor.mOffset;
		break;

	case CD_Down:
		x = mXGridOffset + door->mDoor.mOffset;
		y = mYGridOffset + mUnitInfo->getUnitSizeY();
		break;

	case CD_Left:
		x = mXGridOffset;
		y = mYGridOffset + door->mDoor.mOffset;
		break;
	}
}

/**
 * Checks if a door is set at the specified position and adjusts the offsets accordingly.
 *
 * @param testDoor The door to test against.
 * @param x The x-coordinate of the position.
 * @param y The y-coordinate of the position.
 * @param idx The index of the door node.
 * @return True if a door is set at the position and the offsets are adjusted, false otherwise.
 *
 * @note Address: 0x8024314C
 * @note Size: 0xFC
 */
bool MapNode::isDoorSet(DoorNode* testDoor, int x, int y, int idx)
{
	DoorNode* door = getDoorNode(idx);
	if (door->isDoorAdjust(testDoor)) {
		setOffset(x, y);

		if (door->mDoor.mDirection == CD_Up) {
			mXGridOffset -= door->mDoor.mOffset;

		} else if (door->mDoor.mDirection == CD_Down) {
			mXGridOffset -= door->mDoor.mOffset;
			mYGridOffset -= mUnitInfo->getUnitSizeY();

		} else if (door->mDoor.mDirection == CD_Left) {
			mYGridOffset -= door->mDoor.mOffset;

		} else if (door->mDoor.mDirection == CD_Right) {
			mXGridOffset -= mUnitInfo->getUnitSizeX();
			mYGridOffset -= door->mDoor.mOffset;
		}

		return true;
	}

	return false;
}

/**
 * @note Address: 0x80243248
 * @note Size: 0x34
 */
void MapNode::setDoorClose(int idx, MapNode* partner, int partnerIdx)
{
	mAdjustInfo[idx].mMapTile        = partner;
	mAdjustInfo[idx].mBirthDoorIndex = partnerIdx;

	partner->mAdjustInfo[partnerIdx].mMapTile        = this;
	partner->mAdjustInfo[partnerIdx].mBirthDoorIndex = idx;
}

/**
 * @note Address: 0x8024327C
 * @note Size: 0x9C
 */
void MapNode::detachDoorClose()
{
	int numDoors = getNumDoors();
	for (int i = 0; i < numDoors; i++) {
		// if door is connected to another door, need to detach that first
		if (mAdjustInfo[i].mMapTile) {
			int idx                                                   = mAdjustInfo[i].mBirthDoorIndex;
			mAdjustInfo[i].mMapTile->mAdjustInfo[idx].mMapTile        = nullptr;
			mAdjustInfo[i].mMapTile->mAdjustInfo[idx].mBirthDoorIndex = -1;
		}

		// detach door
		mAdjustInfo[i].mMapTile        = nullptr;
		mAdjustInfo[i].mBirthDoorIndex = -1;
	}
}

/**
 * @note Address: 0x80243318
 * @note Size: 0x1C
 */
bool MapNode::isDoorClose(int idx) { return mAdjustInfo[idx].mMapTile; }

/**
 * @note Address: 0x80243334
 * @note Size: 0x100
 */
void MapNode::resetDoorScore()
{
	int numDoors = getNumDoors();
	for (int i = 0; i < numDoors; i++) {
		mAdjustInfo[i].mDoorScore = -1;
	}
}

/**
 * @note Address: 0x80243434
 * @note Size: 0x34
 */
void MapNode::setDoorScore(int idx, int score)
{
	// set door score
	mAdjustInfo[idx].mDoorScore = score;
	// set partner door score as well
	mAdjustInfo[idx].mMapTile->mAdjustInfo[mAdjustInfo[idx].mBirthDoorIndex].mDoorScore = score;
}

/**
 * @note Address: 0x80243468
 * @note Size: 0x1C
 */
bool MapNode::isDoorScoreSetDone(int idx) { return (mAdjustInfo[idx].mDoorScore >= 0); }

/**
 * @note Address: 0x80243484
 * @note Size: 0x24
 */
DoorNode* MapNode::getDoorNode(int idx) { return mUnitInfo->getDoorNode(idx); }

/**
 * @note Address: 0x802434A8
 * @note Size: 0x14
 */
AdjustNode* MapNode::getAdjustNode(int idx) { return &mUnitInfo->mDoorCounts[idx]; }

/**
 * @note Address: 0x802434BC
 * @note Size: 0x164
 */
bool MapNode::isGateSetDoor(int idx)
{
	// check this tile's door for a gate
	FOREACH_NODE(GateNode, mGateNode->mChild, currGate)
	{
		if (currGate->getBirthDoorIndex() == idx) {
			return true;
		}
	}

	// check partner door for a gate
	FOREACH_NODE(GateNode, mAdjustInfo[idx].mMapTile->mGateNode->mChild, partnerGate)
	{
		if (partnerGate->getBirthDoorIndex() == mAdjustInfo[idx].mBirthDoorIndex) {
			return true;
		}
	}

	// check this tile's door for a seam teki
	FOREACH_NODE(EnemyNode, mEnemyNode->mChild, currEnemy)
	{
		if (currEnemy->getBirthDoorIndex() == idx) {
			return true;
		}
	}

	// check partner door for a seam teki
	FOREACH_NODE(EnemyNode, mAdjustInfo[idx].mMapTile->mEnemyNode->mChild, partnerEnemy)
	{
		if (partnerEnemy->getBirthDoorIndex() == mAdjustInfo[idx].mBirthDoorIndex) {
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x80243620
 * @note Size: 0x198
 */
int MapNode::getGateScore(int idx)
{
	int gateScore = 0;

	// if this tile's door has a gate, increase score by health of gate (or 1000 if no info)
	FOREACH_NODE(GateNode, mGateNode->mChild, currGate)
	{
		if (currGate->getBirthDoorIndex() == idx) {
			int inc = 1000;
			if (currGate->mUnit->mInfo) {
				inc = (int)currGate->mUnit->mInfo->mLife;
			}
			gateScore = inc;
			break;
		}
	}

	// if partner door has a gate, increase score by health of gate (or 1000 if no info)
	FOREACH_NODE(GateNode, mAdjustInfo[idx].mMapTile->mGateNode->mChild, partnerGate)
	{
		if (partnerGate->getBirthDoorIndex() == mAdjustInfo[idx].mBirthDoorIndex) {
			int inc = 1000;
			if (partnerGate->mUnit->mInfo) {
				inc = (int)partnerGate->mUnit->mInfo->mLife;
			}
			gateScore += inc;
			break;
		}
	}

	// if this tile's door has a seam teki, increase score by 5
	FOREACH_NODE(EnemyNode, mEnemyNode->mChild, currEnemy)
	{
		if (currEnemy->getBirthDoorIndex() == idx) {
			gateScore += 5;
			break;
		}
	}

	// if partner door has a seam teki, increase score by 5
	FOREACH_NODE(EnemyNode, mAdjustInfo[idx].mMapTile->mEnemyNode->mChild, partnerEnemy)
	{
		if (partnerEnemy->getBirthDoorIndex() == mAdjustInfo[idx].mBirthDoorIndex) {
			gateScore += 5;
			break;
		}
	}

	return gateScore;
}

/**
 * @note Address: 0x802437B8
 * @note Size: 0xAC
 */
void MapNode::setEnemyScore()
{
	mEnemyScore = 0;
	FOREACH_NODE(CNode, mEnemyNode->mChild, currEnemy)
	{
		EnemyNode* enemy = static_cast<EnemyNode*>(currEnemy);
		BaseGen* gen     = enemy->mSpawn;
		int score        = 0;
		if (gen) {
			if (gen->mSpawnType == BaseGen::CGT_EnemyEasy) {
				score = 2;
			} else if (gen->mSpawnType == BaseGen::CGT_EnemyHard) {
				score = 10;
			}
		}

		mEnemyScore += score * enemy->getBirthCount();
	}
}

/**
 * @note Address: 0x80243864
 * @note Size: 0x8
 */
void MapNode::setNodeScore(int score) { mNodeScore = score; }

/**
 * @note Address: 0x8024386C
 * @note Size: 0xC
 */
void MapNode::copyNodeScoreToVersusScore() { mVsScore = mNodeScore; }

/**
 * @note Address: 0x80243878
 * @note Size: 0x14
 */
void MapNode::subNodeScoreToVersusScore() { mVsScore -= mNodeScore; }

/**
 * @note Address: 0x8024388C
 * @note Size: 0x110
 */
void MapNode::draw(f32 x, f32 y, f32 scale)
{
	f32 x0 = mXGridOffset * scale + x;
	f32 y0 = mYGridOffset * scale + y;

	f32 x1 = scale * mUnitInfo->getUnitSizeX() + x0;
	f32 y1 = scale * mUnitInfo->getUnitSizeY() + y0;

	mUnitInfo->draw(x0, y0, x1, y1);
}

/**
 * @note Address: 0x8024399C
 * @note Size: 0x8
 */
int MapNode::getNodeOffsetX() { return mXGridOffset; }

/**
 * @note Address: 0x802439A4
 * @note Size: 0x8
 */
int MapNode::getNodeOffsetY() { return mYGridOffset; }

/**
 * @note Address: 0x802439AC
 * @note Size: 0x8
 */
int MapNode::getEnemyScore() { return mEnemyScore; }

/**
 * @note Address: 0x802439B4
 * @note Size: 0x8
 */
int MapNode::getNodeScore() { return mNodeScore; }

/**
 * @note Address: 0x802439BC
 * @note Size: 0x8
 */
int MapNode::getVersusScore() { return mVsScore; }

/**
 * @note Address: 0x802439C4
 * @note Size: 0x24
 */
char* MapNode::getUnitName() { return mUnitInfo->getUnitName(); }

/**
 * @note Address: 0x802439E8
 * @note Size: 0xD0
 */
void MapNode::getNodeCentreOffset(f32& x, f32& y)
{
	x = (f32)mUnitInfo->getUnitSizeX() / 2 + getNodeOffsetX();
	y = (f32)mUnitInfo->getUnitSizeY() / 2 + getNodeOffsetY();
}

/**
 * @note Address: 0x80243AB8
 * @note Size: 0x24
 */
int MapNode::getDirection() { return mUnitInfo->getUnitRotation(); }

/**
 * @note Address: 0x80243ADC
 * @note Size: 0x1C4
 */
Vector3f Cave::MapNode::getBaseGenGlobalPosition(BaseGen* testGen)
{
	f32 height = 0.0f;
	f32 x;
	f32 y;
	getNodeCentreOffset(x, y);
	x *= 170.0f;
	y *= 170.0f;

	BaseGen* gen = mUnitInfo->getBaseGen();
	if (gen) {
		FOREACH_NODE(BaseGen, gen->mChild, currGen)
		{
			if (currGen == testGen) {
				height = testGen->mPosition.y;

				switch (mUnitInfo->getUnitRotation()) {
				case CD_Up:
					x += testGen->mPosition.x;
					y += testGen->mPosition.z;
					break;

				case CD_Right:
					x -= testGen->mPosition.z;
					y += testGen->mPosition.x;
					break;

				case CD_Down:
					x -= testGen->mPosition.x;
					y -= testGen->mPosition.z;
					break;

				case CD_Left:
					x += testGen->mPosition.z;
					y -= testGen->mPosition.x;
					break;
				}
				break;
			}
		}
	}
	return Vector3f(x, height, y);
}

/**
 * @note Address: 0x80243CA0
 * @note Size: 0x25C
 */
Vector3f MapNode::getDoorGlobalPosition(int idx)
{
	f32 x = 0.0f;
	f32 y = 0.0f;

	int direction = getDoorDirect(idx);

	int xInt;
	int yInt;
	getDoorOffset(idx, xInt, yInt);

	switch (direction) {
	case CD_Up: {
		f32 xTemp = (f32)xInt + 0.5f;
		x         = xTemp * 170.0f;
		y         = (f32)yInt * 170.0f;
		break;
	}
	case CD_Right: {
		f32 xTemp = (f32)yInt + 0.5f;
		x         = (f32)xInt * 170.0f;
		y         = xTemp * 170.0f;
		break;
	}
	case CD_Down: {
		f32 xTemp = (f32)xInt + 0.5f;
		x         = xTemp * 170.0f;
		y         = (f32)yInt * 170.0f;
		break;
	}
	case CD_Left: {
		f32 xTemp = (f32)yInt + 0.5f;
		x         = (f32)xInt * 170.0f;
		y         = xTemp * 170.0f;
		break;
	}
	}

	return Vector3f(x, 0.0f, y);
}

/**
 * @note Address: 0x80243EFC
 * @note Size: 0xEC
 */
f32 MapNode::getBaseGenGlobalDirection(BaseGen* testGen)
{
	f32 dir = -HALF_PI * mUnitInfo->getUnitRotation();
	clampAngle(dir);

	f32 globalDir = dir;

	BaseGen* gen = mUnitInfo->getBaseGen();
	if (gen) {
		FOREACH_NODE(BaseGen, gen->mChild, currGen)
		{
			if (currGen == testGen) {
				globalDir += (PI * currGen->mAngle) / 180.0f;
				break;
			}
		}
	}

	return globalDir;
}

/**
 * @note Address: 0x80243FE8
 * @note Size: 0x78
 */
f32 MapNode::getDoorGlobalDirection(int idx)
{
	f32 dir = -HALF_PI * getDoorDirect(idx);
	clampAngle(dir);

	return dir;
}

/**
 * @note Address: 0x80244060
 * @note Size: 0x34
 */
int MapNode::getNumDoors() { return mUnitInfo->mDoorNode->getChildCount(); }
} // namespace Cave
} // namespace Game
