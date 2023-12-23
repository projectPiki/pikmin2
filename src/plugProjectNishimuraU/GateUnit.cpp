#include "Game/Cave/Node.h"
#include "math.h"

namespace Game {
namespace Cave {
/**
 * @note Address: 0x8024FCC8
 * @note Size: 0x5C
 */
GateNode::GateNode()
{
	mUnit      = nullptr;
	mIndex     = 0;
	mDirection = 0.0f;
}

/**
 * @note Address: 0x8024FD24
 * @note Size: 0x9C
 */
GateNode::GateNode(GateUnit* unit, int index, int dir)
{
	mUnit      = unit;
	mIndex     = index;
	mDirection = -HALF_PI * dir;
}

/**
 * @note Address: 0x8024FDC0
 * @note Size: 0x20
 */
int GateNode::getObjectId()
{
	if (mUnit->mInfo) {
		return mUnit->mInfo->mCaveID;
	}

	return -1;
}

/**
 * @note Address: 0x8024FDE0
 * @note Size: 0x8
 */
u32 GateNode::getObjectType() { return OBJLAYOUT_Gate; }

/**
 * @note Address: 0x8024FDE8
 * @note Size: 0x8
 */
int GateNode::getBirthCount() { return 1; }

/**
 * @note Address: 0x8024FDF0
 * @note Size: 0x8
 */
f32 GateNode::getDirection() { return mDirection; }

/**
 * @note Address: 0x8024FDF8
 * @note Size: 0x8
 */
int GateNode::getBirthDoorIndex() { return mIndex; }
} // namespace Cave
} // namespace Game
