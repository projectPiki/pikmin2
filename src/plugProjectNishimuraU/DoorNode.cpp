#include "Game/Cave/Node.h"

namespace Game {
namespace Cave {
/*
 * --INFO--
 * Address:	8024B874
 * Size:	000014
 */
Adjust::Adjust()
{
	_00 = -1;
	_04 = -1;
	_08 = -1;
}

/*
 * --INFO--
 * Address:	8024B888
 * Size:	000044
 */
AdjustNode::AdjustNode()
    : CNode()
{
	m_node = nullptr;
}

/*
 * --INFO--
 * Address:	8024B8CC
 * Size:	00004C
 */
AdjustNode::AdjustNode(Adjust* node)
    : CNode()
{
	m_node = node;
}

/*
 * --INFO--
 * Address:	8024B918
 * Size:	000010
 */
Door::Door()
    : _00(-1)
    , _04(-1)
{
}

/*
 * --INFO--
 * Address:	8024B928
 * Size:	000050
 */
DoorNode::DoorNode()
    : CNode()
{
	reset();
}

/*
 * --INFO--
 * Address:	8024B978
 * Size:	000064
 */
DoorNode::DoorNode(Door& door)
{
	m_node._00 = door._00;
	m_node._04 = door._04;
}

/*
 * --INFO--
 * Address:	8024B9DC
 * Size:	000070
 */
bool DoorNode::isDoorAdjust(DoorNode* other)
{
	s32 x = m_node._00;
	s32 y = other->m_node._00;

	if (!x && y == 2) {
		return true;
	}

	if (x == 2 && !y) {
		return true;
	}

	if (x == 3 && y == 1) {
		return true;
	}

	if (x == 1 && y == 3) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8024BA4C
 * Size:	000060
 */
DoorNode::~DoorNode() { }
} // namespace Cave
} // namespace Game