#include "Game/Cave/Node.h"

namespace Game {
namespace Cave {
/*
 * --INFO--
 * Address:	8024B874
 * Size:	000014
 */
Adjust::Adjust()
    : mDoorID(-1)
    , mDistance(-1)
    , mTekiFlags(-1)
{
}

/*
 * --INFO--
 * Address:	8024B888
 * Size:	000044
 */
AdjustNode::AdjustNode() { mAdjust = nullptr; }

/*
 * --INFO--
 * Address:	8024B8CC
 * Size:	00004C
 */
AdjustNode::AdjustNode(Adjust* adj) { mAdjust = adj; }

/*
 * --INFO--
 * Address:	8024B918
 * Size:	000010
 */
Door::Door()
    : mDirection(-1)
    , mOffset(-1)
{
}

/*
 * --INFO--
 * Address:	8024B928
 * Size:	000050
 */
DoorNode::DoorNode() { reset(); }

/*
 * --INFO--
 * Address:	8024B978
 * Size:	000064
 */
DoorNode::DoorNode(Door& door)
{
	mDoor.mDirection = door.mDirection;
	mDoor.mOffset    = door.mOffset;
}

/*
 * --INFO--
 * Address:	8024B9DC
 * Size:	000070
 */
bool DoorNode::isDoorAdjust(DoorNode* other)
{
	int x = mDoor.mDirection;
	int y = other->mDoor.mDirection;

	if (x == CD_UP && y == CD_DOWN) {
		return true;
	}

	if (x == CD_DOWN && y == CD_UP) {
		return true;
	}

	if (x == CD_LEFT && y == CD_RIGHT) {
		return true;
	}

	if (x == CD_RIGHT && y == CD_LEFT) {
		return true;
	}

	return false;
}
} // namespace Cave
} // namespace Game
