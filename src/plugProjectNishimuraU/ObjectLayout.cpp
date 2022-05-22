#include "types.h"
#include "Game/Cave/ObjectLayout.h"
#include "Game/Cave/Node.h"

namespace Game {
namespace Cave {
/*
 * --INFO--
 * Address:	80250824
 * Size:	0000CC
 */
ObjectLayout::ObjectLayout(MapNode* node)
{
	m_nodeList = new ObjectLayoutNode*[8];
	for (int i = 0; i < 8; i++) {
		m_nodeList[i] = nullptr;
	}

	if (node) {
		m_nodeList[0] = node->m_enemyNode;
		m_nodeList[1] = node->m_itemNode;
		m_nodeList[2] = node->m_gateNode;
	}
}

/*
 * --INFO--
 * Address:	802508F0
 * Size:	000010
 */
void ObjectLayout::setNode(int idx, ObjectLayoutNode* layoutNode) { m_nodeList[idx] = layoutNode; }

/*
 * --INFO--
 * Address:	80250900
 * Size:	000048
 */
s32 ObjectLayout::getCount(int idx)
{
	ObjectLayoutNode* node = m_nodeList[idx];
	return node ? node->getChildCount() : 0;
}

/*
 * --INFO--
 * Address:	80250948
 * Size:	000040
 */
CNode* ObjectLayout::getNode(int idx, int at)
{
	ObjectLayoutNode* node = m_nodeList[idx];
	return node ? node->getChildAt(at) : nullptr;
}
} // namespace Cave
} // namespace Game
