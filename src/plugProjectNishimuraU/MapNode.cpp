#include "Game/Cave/RandMapMgr.h"

namespace Game {
namespace Cave {
/*
 * --INFO--
 * Address:	80242D58
 * Size:	000018
 */
AdjustInfo::AdjustInfo()
{
	mMapTile        = nullptr;
	mBirthDoorIndex = -1;
	mDoorScore      = -1;
}

/*
 * --INFO--
 * Address:	80242D70
 * Size:	0002AC
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

/*
 * --INFO--
 * Address:	8024301C
 * Size:	00000C
 */
void MapNode::setOffset(int x, int y)
{
	mXGridOffset = x;
	mYGridOffset = y;
}

/*
 * --INFO--
 * Address:	80243028
 * Size:	000024
 */
int MapNode::getDoorDirect(int idx) { return getDoorNode(idx)->mDoor.mDirection; }

/*
 * --INFO--
 * Address:	8024304C
 * Size:	000100
 */
void MapNode::getDoorOffset(int idx, int& x, int& y)
{
	DoorNode* door = getDoorNode(idx);
	// clang-format off
	/*
	Offset is measured from map origin. First, finds top left of unit on grid
	(i.e., grid offset), then adds unit size or door offset as necessary.
    x-->
  y	 ____________
  |	|            |
  v	|            |
    |    unit    |
    |            |
    |____________|
	
	*/
	// clang-format on

	switch (door->mDoor.mDirection) {
	case CD_UP:
		x = mXGridOffset + door->mDoor.mOffset;
		y = mYGridOffset;
		break;

	case CD_RIGHT:
		x = mXGridOffset + mUnitInfo->getUnitSizeX();
		y = mYGridOffset + door->mDoor.mOffset;
		break;

	case CD_DOWN:
		x = mXGridOffset + door->mDoor.mOffset;
		y = mYGridOffset + mUnitInfo->getUnitSizeY();
		break;

	case CD_LEFT:
		x = mXGridOffset;
		y = mYGridOffset + door->mDoor.mOffset;
		break;
	}
}

/*
 * --INFO--
 * Address:	8024314C
 * Size:	0000FC
 */
bool MapNode::isDoorSet(DoorNode* testDoor, int x, int y, int idx)
{
	DoorNode* door = getDoorNode(idx);
	if (door->isDoorAdjust(testDoor)) {
		setOffset(x, y);

		if (door->mDoor.mDirection == CD_UP) {
			mXGridOffset -= door->mDoor.mOffset;

		} else if (door->mDoor.mDirection == CD_DOWN) {
			mXGridOffset -= door->mDoor.mOffset;
			mYGridOffset -= mUnitInfo->getUnitSizeY();

		} else if (door->mDoor.mDirection == CD_LEFT) {
			mYGridOffset -= door->mDoor.mOffset;

		} else if (door->mDoor.mDirection == CD_RIGHT) {
			mXGridOffset -= mUnitInfo->getUnitSizeX();
			mYGridOffset -= door->mDoor.mOffset;
		}

		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80243248
 * Size:	000034
 */
void MapNode::setDoorClose(int idx, MapNode* partner, int partnerIdx)
{
	mAdjustInfo[idx].mMapTile        = partner;
	mAdjustInfo[idx].mBirthDoorIndex = partnerIdx;

	partner->mAdjustInfo[partnerIdx].mMapTile        = this;
	partner->mAdjustInfo[partnerIdx].mBirthDoorIndex = idx;
}

/*
 * --INFO--
 * Address:	8024327C
 * Size:	00009C
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

/*
 * --INFO--
 * Address:	80243318
 * Size:	00001C
 */
bool MapNode::isDoorClose(int idx) { return mAdjustInfo[idx].mMapTile; }

/*
 * --INFO--
 * Address:	80243334
 * Size:	000100
 */
void MapNode::resetDoorScore()
{
	int numDoors = getNumDoors();
	for (int i = 0; i < numDoors; i++) {
		mAdjustInfo[i].mDoorScore = -1;
	}
}

/*
 * --INFO--
 * Address:	80243434
 * Size:	000034
 */
void MapNode::setDoorScore(int idx, int score)
{
	// set door score
	mAdjustInfo[idx].mDoorScore = score;
	// set partner door score as well
	mAdjustInfo[idx].mMapTile->mAdjustInfo[mAdjustInfo[idx].mBirthDoorIndex].mDoorScore = score;
}

/*
 * --INFO--
 * Address:	80243468
 * Size:	00001C
 */
bool MapNode::isDoorScoreSetDone(int idx) { return (mAdjustInfo[idx].mDoorScore >= 0); }

/*
 * --INFO--
 * Address:	80243484
 * Size:	000024
 */
DoorNode* MapNode::getDoorNode(int idx) { return mUnitInfo->getDoorNode(idx); }

/*
 * --INFO--
 * Address:	802434A8
 * Size:	000014
 */
AdjustNode* MapNode::getAdjustNode(int idx) { return &mUnitInfo->mDoorCounts[idx]; }

/*
 * --INFO--
 * Address:	802434BC
 * Size:	000164
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

/*
 * --INFO--
 * Address:	80243620
 * Size:	000198
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

/*
 * --INFO--
 * Address:	802437B8
 * Size:	0000AC
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
			if (gen->mSpawnType == BaseGen::TekiA__Easy) {
				score = 2;
			} else if (gen->mSpawnType == BaseGen::TekiB__Hard) {
				score = 10;
			}
		}

		mEnemyScore += score * enemy->getBirthCount();
	}
}

/*
 * --INFO--
 * Address:	80243864
 * Size:	000008
 */
void MapNode::setNodeScore(int score) { mNodeScore = score; }

/*
 * --INFO--
 * Address:	8024386C
 * Size:	00000C
 */
void MapNode::copyNodeScoreToVersusScore() { mVsScore = mNodeScore; }

/*
 * --INFO--
 * Address:	80243878
 * Size:	000014
 */
void MapNode::subNodeScoreToVersusScore() { mVsScore -= mNodeScore; }

/*
 * --INFO--
 * Address:	8024388C
 * Size:	000110
 */
void MapNode::draw(f32 x, f32 y, f32 scale)
{
	f32 x0 = mXGridOffset * scale + x;
	f32 y0 = mYGridOffset * scale + y;

	f32 x1 = scale * mUnitInfo->getUnitSizeX() + x0;
	f32 y1 = scale * mUnitInfo->getUnitSizeY() + y0;

	mUnitInfo->draw(x0, y0, x1, y1);
}

/*
 * --INFO--
 * Address:	8024399C
 * Size:	000008
 */
int MapNode::getNodeOffsetX() { return mXGridOffset; }

/*
 * --INFO--
 * Address:	802439A4
 * Size:	000008
 */
int MapNode::getNodeOffsetY() { return mYGridOffset; }

/*
 * --INFO--
 * Address:	802439AC
 * Size:	000008
 */
int MapNode::getEnemyScore() { return mEnemyScore; }

/*
 * --INFO--
 * Address:	802439B4
 * Size:	000008
 */
int MapNode::getNodeScore() { return mNodeScore; }

/*
 * --INFO--
 * Address:	802439BC
 * Size:	000008
 */
int MapNode::getVersusScore() { return mVsScore; }

/*
 * --INFO--
 * Address:	802439C4
 * Size:	000024
 */
char* MapNode::getUnitName() { return mUnitInfo->getUnitName(); }

/*
 * --INFO--
 * Address:	802439E8
 * Size:	0000D0
 */
void MapNode::getNodeCentreOffset(f32& x, f32& y)
{
	x = (f32)mUnitInfo->getUnitSizeX() / 2 + getNodeOffsetX();
	y = (f32)mUnitInfo->getUnitSizeY() / 2 + getNodeOffsetY();
}

/*
 * --INFO--
 * Address:	80243AB8
 * Size:	000024
 */
int MapNode::getDirection() { return mUnitInfo->getUnitRotation(); }

/*
 * --INFO--
 * Address:	80243ADC
 * Size:	0001C4
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
				case CD_UP:
					x += testGen->mPosition.x;
					y += testGen->mPosition.z;
					break;

				case CD_RIGHT:
					x -= testGen->mPosition.z;
					y += testGen->mPosition.x;
					break;

				case CD_DOWN:
					x -= testGen->mPosition.x;
					y -= testGen->mPosition.z;
					break;

				case CD_LEFT:
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

/*
 * --INFO--
 * Address:	80243CA0
 * Size:	00025C
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
	case CD_UP: {
		f32 xTemp = (f32)xInt + 0.5f;
		x         = xTemp * 170.0f;
		y         = (f32)yInt * 170.0f;
		break;
	}
	case CD_RIGHT: {
		f32 xTemp = (f32)yInt + 0.5f;
		x         = (f32)xInt * 170.0f;
		y         = xTemp * 170.0f;
		break;
	}
	case CD_DOWN: {
		f32 xTemp = (f32)xInt + 0.5f;
		x         = xTemp * 170.0f;
		y         = (f32)yInt * 170.0f;
		break;
	}
	case CD_LEFT: {
		f32 xTemp = (f32)yInt + 0.5f;
		x         = (f32)xInt * 170.0f;
		y         = xTemp * 170.0f;
		break;
	}
	}

	return Vector3f(x, 0.0f, y);
}

/*
 * --INFO--
 * Address:	80243EFC
 * Size:	0000EC
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

/*
 * --INFO--
 * Address:	80243FE8
 * Size:	000078
 */
f32 MapNode::getDoorGlobalDirection(int idx)
{
	f32 dir = -HALF_PI * getDoorDirect(idx);
	if (dir < 0.0f) {
		dir = TAU + dir;
	} else if (dir >= TAU) {
		dir -= TAU;
	}

	return dir;
}

/*
 * --INFO--
 * Address:	80244060
 * Size:	000034
 */
int MapNode::getNumDoors() { return mUnitInfo->mDoorNode->getChildCount(); }
} // namespace Cave
} // namespace Game
