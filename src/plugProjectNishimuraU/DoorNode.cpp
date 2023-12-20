#include "Game/Cave/Node.h"

namespace Game {
namespace Cave {
/**
 * @note Address: 0x8024B874
 * @note Size: 0x14
 */
Adjust::Adjust()
    : mDoorID(-1)
    , mDistance(-1)
    , mTekiFlags(-1)
{
}

/**
 * @note Address: 0x8024B888
 * @note Size: 0x44
 */
AdjustNode::AdjustNode() { mAdjust = nullptr; }

/**
 * @note Address: 0x8024B8CC
 * @note Size: 0x4C
 */
AdjustNode::AdjustNode(Adjust* adj) { mAdjust = adj; }

/**
 * @note Address: 0x8024B918
 * @note Size: 0x10
 */
Door::Door()
    : mDirection(-1)
    , mOffset(-1)
{
}

/**
 * @note Address: 0x8024B928
 * @note Size: 0x50
 */
DoorNode::DoorNode() { reset(); }

/**
 * @note Address: 0x8024B978
 * @note Size: 0x64
 */
DoorNode::DoorNode(Door& door)
{
	mDoor.mDirection = door.mDirection;
	mDoor.mOffset    = door.mOffset;
}

/**
 * @note Address: 0x8024B9DC
 * @note Size: 0x70
 */
bool DoorNode::isDoorAdjust(DoorNode* other)
{
	int x = mDoor.mDirection;
	int y = other->mDoor.mDirection;

	if (x == CD_Up && y == CD_Down) {
		return true;
	}

	if (x == CD_Down && y == CD_Up) {
		return true;
	}

	if (x == CD_Left && y == CD_Right) {
		return true;
	}

	if (x == CD_Right && y == CD_Left) {
		return true;
	}

	return false;
}
} // namespace Cave
} // namespace Game
