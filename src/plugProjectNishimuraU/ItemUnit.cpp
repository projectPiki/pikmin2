#include "Game/Cave/Node.h"

namespace Game {
namespace Cave {
/*
 * --INFO--
 * Address:	8024E170
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	8024E1DC
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	8024E268
 * Size:	000068
 */
void ItemNode::makeGlobalData(MapNode* mapTile)
{
	mPosition  = mapTile->getBaseGenGlobalPosition(mSpawn);
	mDirection = mapTile->getBaseGenGlobalDirection(mSpawn);
}

/*
 * --INFO--
 * Address:	8024E2D0
 * Size:	000020
 */
int ItemNode::getObjectId()
{
	if (mUnit->mInfo) {
		return mUnit->mInfo->mCaveID;
	}

	return -1;
}

/*
 * --INFO--
 * Address:	8024E2F0
 * Size:	000008
 */
u32 ItemNode::getObjectType() { return OBJLAYOUT_Item; }

/*
 * --INFO--
 * Address:	8024E2F8
 * Size:	000008
 */
int ItemNode::getBirthCount() { return mBirthCount; }

/*
 * --INFO--
 * Address:	8024E300
 * Size:	000014
 */
void ItemNode::getBirthPosition(f32& x, f32& y)
{
	x = mPosition.x;
	y = mPosition.z;
}

/*
 * --INFO--
 * Address:	8024E314
 * Size:	000008
 */
f32 ItemNode::getDirection() { return mDirection; }
} // namespace Cave
} // namespace Game
