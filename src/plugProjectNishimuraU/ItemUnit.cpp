#include "Game/Cave/Node.h"
namespace Game {
/*
 * --INFO--
 * Address:	8024E170
 * Size:	00006C
 */
Cave::ItemNode::ItemNode()
{
	m_unit       = nullptr;
	m_generator  = nullptr;
	m_birthCount = 0;

	m_direction = 0;

	m_position.z = 0;
	m_position.y = 0;
	m_position.x = 0;
}

/*
 * --INFO--
 * Address:	8024E1DC
 * Size:	00008C
 */
Cave::ItemNode::ItemNode(Cave::ItemUnit* unit, Cave::BaseGen* generator, int count)
{
	m_unit       = unit;
	m_generator  = generator;
	m_birthCount = count;

	m_direction = 0;

	m_position.z = 0;
	m_position.y = 0;
	m_position.x = 0;
}

/*
 * --INFO--
 * Address:	8024E268
 * Size:	000068
 */
void Cave::ItemNode::makeGlobalData(Cave::MapNode* node)
{
	m_position  = node->getBaseGenGlobalPosition(m_generator);
	m_direction = node->getBaseGenGlobalDirection(m_generator);
}

/*
 * --INFO--
 * Address:	8024E2D0
 * Size:	000020
 */
int Cave::ItemNode::getObjectId()
{
	if (m_unit->m_info) {
		return m_unit->m_info->m_caveID;
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
int Cave::ItemNode::getBirthCount() { return m_birthCount; }

/*
 * --INFO--
 * Address:	8024E300
 * Size:	000014
 */
void Cave::ItemNode::getBirthPosition(float& x, float& z)
{
	x = m_position.x;
	z = m_position.z;
}

/*
 * --INFO--
 * Address:	8024E314
 * Size:	000008
 */
f32 Cave::ItemNode::getDirection() { return m_direction; }
} // namespace Game
