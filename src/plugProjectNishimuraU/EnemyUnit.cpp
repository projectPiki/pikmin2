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
	// Constructor for EnemyNode
	//     - default = 0 for all, except birthDoorIndex = -1

	mEnemyUnit      = 0;
	mBaseGen        = 0;
	mBirthDoorIndex = -1;
	mBirthCount     = 0;
	mDirection      = 0.0f;
	mBirthPos.z     = 0.0f;
	mBirthPos.y     = 0.0f;
	mBirthPos.x     = 0.0f;
}

// /*
//  * --INFO--
//  * Address:	80244168
//  * Size:	000060
//  */
// WEAK - Game/Cave/ObjectLayout.h
// ObjectLayoutNode::~ObjectLayoutNode() { }

/*
 * --INFO--
 * Address:	802441C8
 * Size:	000094
 */
EnemyNode::EnemyNode(EnemyUnit* inputEnemyUnit, BaseGen* inputBaseGen, int birthCount)
{
	// Constructor for EnemyNode with inputs
	//     - sets mEnemyUnit, mBaseGen and mBirthCount based on inputs, everything else to 0
	//     - (except mBirthDoorIndex to -1)
	mEnemyUnit      = inputEnemyUnit;
	mBaseGen        = inputBaseGen;
	mBirthDoorIndex = -1;
	mBirthCount     = birthCount;
	mDirection      = 0.0f;
	mBirthPos.z     = 0.0f;
	mBirthPos.y     = 0.0f;
	mBirthPos.x     = 0.0f;
}

/*
 * --INFO--
 * Address:	8024425C
 * Size:	0001A8
 */
void EnemyNode::makeGlobalData(MapNode* mapNode)
{
	// get global position and direction from mapNode
	mBirthPos  = mapNode->getBaseGenGlobalPosition(mBaseGen);
	mDirection = mapNode->getBaseGenGlobalDirection(mBaseGen);

	// if teki type is 0 (easy), give it a random distance from spawn within radius + random direction
	if ((mBaseGen) && (mBaseGen->mSpawnType == 0)) {

		// get max radius of spawn
		float radius = mBaseGen->mRadius;
		// get random radius between 0 and max radius
		radius = randWeightFloat(radius);

		// set random direction from 0 to 2pi (0 to 360 degrees)
		mDirection = randWeightFloat(TAU);

		// move position x and y (z) according to random radius and random direction
		mBirthPos.x += radius * pikmin2_sinf(mDirection); // inlined in header
		mBirthPos.z += radius * pikmin2_cosf(mDirection); // inlined in header
	}
}

/*
 * --INFO--
 * Address:	80244404
 * Size:	000020
 */
void EnemyNode::setGlobalData(Vector3f& pos, float direction)
{
	// set position and direction based on inputs
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
	// get enemy ID from mTekiInfo; if no teki info, set to -1
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
	// return code of item dweevil is carrying, if any
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
	return 0;
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
void EnemyNode::getBirthPosition(float& x, float& y)
{
	// get x and y (z) positions
	x = mBirthPos.x;
	y = mBirthPos.z;
}

/*
 * --INFO--
 * Address:	802444A8
 * Size:	000008
 */
float EnemyNode::getDirection() { return mDirection; }

/*
 * --INFO--
 * Address:	802444B0
 * Size:	000008
 */
int EnemyNode::getBirthDoorIndex() { return mBirthDoorIndex; }

/*
 * --INFO--
 * Address:	802444B8
 * Size:	000070
 */
// WEAK - in Game/Cave/Node.h
// EnemyNode::~EnemyNode() { }

} // namespace Cave
} // namespace Game
