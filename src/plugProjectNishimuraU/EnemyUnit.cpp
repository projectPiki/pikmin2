#include "types.h"
#include "Vector3.h"
#include "Game/Cave/RandMapMgr.h"
#include "trig.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {

/**
 * @note Address: 0x802440F4
 * @note Size: 0x74
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

/**
 * @note Address: 0x802441C8
 * @note Size: 0x94
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

/**
 * @note Address: 0x8024425C
 * @note Size: 0x1A8
 */
void EnemyNode::makeGlobalData(MapNode* mapTile)
{
	// get global position and direction from mapTile
	mBirthPos  = mapTile->getBaseGenGlobalPosition(mSpawn);
	mDirection = mapTile->getBaseGenGlobalDirection(mSpawn);

	// if teki type is 0 (easy), give it a random distance + direction from spawn centre, within radius
	if (mSpawn && mSpawn->mSpawnType == BaseGen::CGT_EnemyEasy) {

		// get random radius between 0 and max radius
		f32 radius = randWeightFloat(mSpawn->mRadius);

		// set random direction from 0 to 2*pi
		mDirection = randWeightFloat(TAU);

		// move 2D position according to random radius and random direction
		mBirthPos.x += radius * sinf(mDirection);
		mBirthPos.z += radius * cosf(mDirection);
	}
}

/**
 * @note Address: 0x80244404
 * @note Size: 0x20
 */
void EnemyNode::setGlobalData(Vector3f& pos, f32 direction)
{
	mBirthPos  = pos;
	mDirection = direction;
}

/**
 * @note Address: 0x80244424
 * @note Size: 0x8
 */
void EnemyNode::setBirthDoorIndex(int idx) { mBirthDoorIndex = idx; }

/**
 * @note Address: 0x8024442C
 * @note Size: 0x20
 */
int EnemyNode::getObjectId()
{
	TekiInfo* tekiInfo = mEnemyUnit->mTekiInfo;
	if (tekiInfo) {
		return mEnemyUnit->mTekiInfo->mEnemyID;
	}
	return -1;
}

/**
 * @note Address: 0x8024444C
 * @note Size: 0x20
 */
u32 EnemyNode::getExtraCode()
{
	TekiInfo* tekiInfo = mEnemyUnit->mTekiInfo;
	if (tekiInfo) {
		return tekiInfo->mOtakaraItemCode.mValue;
	}
	return 0;
}

/**
 * @note Address: 0x8024446C
 * @note Size: 0x20
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

/**
 * @note Address: 0x8024448C
 * @note Size: 0x8
 */
int EnemyNode::getBirthCount() { return mBirthCount; }

/**
 * @note Address: 0x80244494
 * @note Size: 0x14
 */
void EnemyNode::getBirthPosition(f32& x, f32& y)
{
	x = mBirthPos.x;
	y = mBirthPos.z;
}

/**
 * @note Address: 0x802444A8
 * @note Size: 0x8
 */
f32 EnemyNode::getDirection() { return mDirection; }

/**
 * @note Address: 0x802444B0
 * @note Size: 0x8
 */
int EnemyNode::getBirthDoorIndex() { return mBirthDoorIndex; }
} // namespace Cave
} // namespace Game
