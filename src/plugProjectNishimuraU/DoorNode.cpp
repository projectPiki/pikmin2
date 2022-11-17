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
    : m_direction(-1)
    , m_offset(-1)
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
	m_node.m_direction = door.m_direction;
	m_node.m_offset    = door.m_offset;
}

/*
 * --INFO--
 * Address:	8024B9DC
 * Size:	000070
 */
bool DoorNode::isDoorAdjust(DoorNode* other)
{
	CardinalDirection x = (CardinalDirection)m_node.m_direction;
	CardinalDirection y = (CardinalDirection)other->m_node.m_direction;

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
