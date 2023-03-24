#include "Game/Cave/Node.h"
#include "Dolphin/math.h"

namespace Game {
namespace Cave {
/*
 * --INFO--
 * Address:	8024FCC8
 * Size:	00005C
 */
GateNode::GateNode()
{
	mUnit      = nullptr;
	mIndex     = 0;
	mDirection = 0.0f;
}

/*
 * --INFO--
 * Address:	8024FD24
 * Size:	00009C
 */
GateNode::GateNode(GateUnit* unit, int index, int dir)
{
	mUnit      = unit;
	mIndex     = index;
	mDirection = -HALF_PI * dir;
}

/*
 * --INFO--
 * Address:	8024FDC0
 * Size:	000020
 */
int GateNode::getObjectId()
{
	if (mUnit->mInfo) {
		return mUnit->mInfo->mCaveID;
	}

	return -1;
}

/*
 * --INFO--
 * Address:	8024FDE0
 * Size:	000008
 */
u32 GateNode::getObjectType() { return OBJLAYOUT_Gate; }

/*
 * --INFO--
 * Address:	8024FDE8
 * Size:	000008
 */
int GateNode::getBirthCount() { return 1; }

/*
 * --INFO--
 * Address:	8024FDF0
 * Size:	000008
 */
f32 GateNode::getDirection() { return mDirection; }

/*
 * --INFO--
 * Address:	8024FDF8
 * Size:	000008
 */
int GateNode::getBirthDoorIndex() { return mIndex; }
} // namespace Cave
} // namespace Game
