#include "Game/Cave/Node.h"

namespace Game {
namespace Cave {
/**
 * @note Address: 0x8024E170
 * @note Size: 0x6C
 */
ItemNode::ItemNode()
{
	mUnit       = nullptr;
	mSpawn      = nullptr;
	mBirthCount = 0;

	mDirection = 0.0f;

	mPosition.z = 0.0f;
	mPosition.y = 0.0f;
	mPosition.x = 0.0f;
}

/**
 * @note Address: 0x8024E1DC
 * @note Size: 0x8C
 */
ItemNode::ItemNode(ItemUnit* unit, BaseGen* spawn, int count)
{
	mUnit       = unit;
	mSpawn      = spawn;
	mBirthCount = count;

	mDirection = 0.0f;

	mPosition.z = 0.0f;
	mPosition.y = 0.0f;
	mPosition.x = 0.0f;
}

/**
 * @note Address: 0x8024E268
 * @note Size: 0x68
 */
void ItemNode::makeGlobalData(MapNode* mapTile)
{
	mPosition  = mapTile->getBaseGenGlobalPosition(mSpawn);
	mDirection = mapTile->getBaseGenGlobalDirection(mSpawn);
}

/**
 * @note Address: 0x8024E2D0
 * @note Size: 0x20
 */
int ItemNode::getObjectId()
{
	if (mUnit->mInfo) {
		return mUnit->mInfo->mCaveID;
	}

	return -1;
}

/**
 * @note Address: 0x8024E2F0
 * @note Size: 0x8
 */
u32 ItemNode::getObjectType() { return OBJLAYOUT_Item; }

/**
 * @note Address: 0x8024E2F8
 * @note Size: 0x8
 */
int ItemNode::getBirthCount() { return mBirthCount; }

/**
 * @note Address: 0x8024E300
 * @note Size: 0x14
 */
void ItemNode::getBirthPosition(f32& x, f32& y)
{
	x = mPosition.x;
	y = mPosition.z;
}

/**
 * @note Address: 0x8024E314
 * @note Size: 0x8
 */
f32 ItemNode::getDirection() { return mDirection; }
} // namespace Cave
} // namespace Game
