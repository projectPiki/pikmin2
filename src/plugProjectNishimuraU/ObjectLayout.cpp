#include "types.h"
#include "Game/Cave/ObjectLayout.h"

namespace Game {
namespace Cave {
	/*
	 * --INFO--
	 * Address:	80250824
	 * Size:	0000CC
	 */
	ObjectLayout::ObjectLayout(MapNode* node)
	{
		_04 = new ObjectLayoutNode*[8];
		for (int i = 0; i < 8; i++) {
			_04[i] = 0;
		}

		if (node) {
			_04[0] = node->m_enemyNode;
			_04[1] = node->m_itemNode;
			_04[2] = node->m_gateNode;
		}
	}

	/*
	 * --INFO--
	 * Address:	802508F0
	 * Size:	000010
	 */
	void ObjectLayout::setNode(int idx, ObjectLayoutNode* layoutNode)
	{
		_04[idx] = layoutNode;
	}

	/*
	 * --INFO--
	 * Address:	80250900
	 * Size:	000048
	 */
	s32 ObjectLayout::getCount(int idx)
	{
		ObjectLayoutNode* node = _04[idx];
		return node ? node->getChildCount() : 0;
	}

	/*
	 * --INFO--
	 * Address:	80250948
	 * Size:	000040
	 */
	CNode* ObjectLayout::getNode(int idx, int at)
	{
		ObjectLayoutNode* node = _04[idx];
		return node ? node->getChildAt(at) : nullptr;
	}
} // namespace Cave
} // namespace Game
