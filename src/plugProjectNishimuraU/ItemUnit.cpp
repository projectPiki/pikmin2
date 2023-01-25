#include "Game/Cave/Node.h"
namespace Game {
/*
 * --INFO--
 * Address:	8024E170
 * Size:	00006C
 */
Cave::ItemNode::ItemNode()
{
	mUnit       = nullptr;
	mGenerator  = nullptr;
	mBirthCount = 0;

	mDirection = 0;

	mPosition.z = 0;
	mPosition.y = 0;
	mPosition.x = 0;
}

/*
 * --INFO--
 * Address:	8024E1DC
 * Size:	00008C
 */
Cave::ItemNode::ItemNode(Cave::ItemUnit* unit, Cave::BaseGen* generator, int count)
{
	mUnit       = unit;
	mGenerator  = generator;
	mBirthCount = count;

	mDirection = 0;

	mPosition.z = 0;
	mPosition.y = 0;
	mPosition.x = 0;
}

/*
 * --INFO--
 * Address:	8024E268
 * Size:	000068
 */
void Cave::ItemNode::makeGlobalData(Cave::MapNode* node)
{
	mPosition  = node->getBaseGenGlobalPosition(mGenerator);
	mDirection = node->getBaseGenGlobalDirection(mGenerator);
}

/*
 * --INFO--
 * Address:	8024E2D0
 * Size:	000020
 */
int Cave::ItemNode::getObjectId()
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
u32 Cave::ItemNode::getObjectType() { return Item; }

/*
 * --INFO--
 * Address:	8024E2F8
 * Size:	000008
 */
int Cave::ItemNode::getBirthCount() { return mBirthCount; }

/*
 * --INFO--
 * Address:	8024E300
 * Size:	000014
 */
void Cave::ItemNode::getBirthPosition(float& x, float& z)
{
	x = mPosition.x;
	z = mPosition.z;
}

/*
 * --INFO--
 * Address:	8024E314
 * Size:	000008
 */
f32 Cave::ItemNode::getDirection() { return mDirection; }
} // namespace Game
