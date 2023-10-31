#include "types.h"
#include "Vector3.h"
#include "Game/Cave/RandMapMgr.h"
#include "trig.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {

/*
 * --INFO--
 * Address:	802440F4
 * Size:	000074
 */
EnemyNode::EnemyNode()
{
	mEnemyUnit      = nullptr;
	mSpawn          = nullptr;
	mBirthDoorIndex = -1;
	mBirthCount     = 0;

	mDirection = 0.0f;

	mBirthPos.z = 0.0f;
	mBirthPos.y = 0.0f;
	mBirthPos.x = 0.0f;
}

/*
 * --INFO--
 * Address:	802441C8
 * Size:	000094
 */
EnemyNode::EnemyNode(EnemyUnit* unit, BaseGen* spawn, int count)
{
	mEnemyUnit      = unit;
	mSpawn          = spawn;
	mBirthDoorIndex = -1;
	mBirthCount     = count;

	mDirection = 0.0f;

	mBirthPos.z = 0.0f;
	mBirthPos.y = 0.0f;
	mBirthPos.x = 0.0f;
}

/*
 * --INFO--
 * Address:	8024425C
 * Size:	0001A8
 */
void EnemyNode::makeGlobalData(MapNode* mapTile)
{
	// get global position and direction from mapTile
	mBirthPos  = mapTile->getBaseGenGlobalPosition(mSpawn);
	mDirection = mapTile->getBaseGenGlobalDirection(mSpawn);

	// if teki type is 0 (easy), give it a random distance + direction from spawn centre, within radius
	if (mSpawn && mSpawn->mSpawnType == BaseGen::TekiA__Easy) {

		// get random radius between 0 and max radius
		f32 radius = randWeightFloat(mSpawn->mRadius);

		// set random direction from 0 to 2*pi
		mDirection = randWeightFloat(TAU);

		// move 2D position according to random radius and random direction
		mBirthPos.x += radius * sinf(mDirection);
		mBirthPos.z += radius * cosf(mDirection);
	}
}

/*
 * --INFO--
 * Address:	80244404
 * Size:	000020
 */
void EnemyNode::setGlobalData(Vector3f& pos, f32 direction)
{
	mBirthPos  = pos;
	mDirection = direction;
}

/*
 * --INFO--
 * Address:	80244424
 * Size:	000008
 */
void EnemyNode::setBirthDoorIndex(int idx) { mBirthDoorIndex = idx; }

/*
 * --INFO--
 * Address:	8024442C
 * Size:	000020
 */
int EnemyNode::getObjectId()
{
	TekiInfo* tekiInfo = mEnemyUnit->mTekiInfo;
	if (tekiInfo) {
		return mEnemyUnit->mTekiInfo->mEnemyID;
	}
	return -1;
}

/*
 * --INFO--
 * Address:	8024444C
 * Size:	000020
 */
u32 EnemyNode::getExtraCode()
{
	TekiInfo* tekiInfo = mEnemyUnit->mTekiInfo;
	if (tekiInfo) {
		return tekiInfo->mOtakaraItemCode.mValue;
	}
	return 0;
}

/*
 * --INFO--
 * Address:	8024446C
 * Size:	000020
 */
u32 EnemyNode::getObjectType()
{
	// return drop type for enemy (i.e. condition for falling, if falling)
	TekiInfo* tekiInfo = mEnemyUnit->mTekiInfo;
	if (tekiInfo) {
		return tekiInfo->mDropMode;
	}
	return DROP_NoDrop;
}

/*
 * --INFO--
 * Address:	8024448C
 * Size:	000008
 */
int EnemyNode::getBirthCount() { return mBirthCount; }

/*
 * --INFO--
 * Address:	80244494
 * Size:	000014
 */
void EnemyNode::getBirthPosition(f32& x, f32& y)
{
	x = mBirthPos.x;
	y = mBirthPos.z;
}

/*
 * --INFO--
 * Address:	802444A8
 * Size:	000008
 */
f32 EnemyNode::getDirection() { return mDirection; }

/*
 * --INFO--
 * Address:	802444B0
 * Size:	000008
 */
int EnemyNode::getBirthDoorIndex() { return mBirthDoorIndex; }
} // namespace Cave
} // namespace Game
