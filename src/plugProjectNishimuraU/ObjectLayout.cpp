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
	mNodeList = new ObjectLayoutNode*[8];
	for (int i = 0; i < 8; i++) {
		mNodeList[i] = nullptr;
	}

	if (node) {
		mNodeList[0] = node->mEnemyNode;
		mNodeList[1] = node->mItemNode;
		mNodeList[2] = node->mGateNode;
	}
}

/*
 * --INFO--
 * Address:	802508F0
 * Size:	000010
 */
void ObjectLayout::setNode(int idx, ObjectLayoutNode* layoutNode) { mNodeList[idx] = layoutNode; }

/*
 * --INFO--
 * Address:	80250900
 * Size:	000048
 */
s32 ObjectLayout::getCount(int idx)
{
	ObjectLayoutNode* node = mNodeList[idx];
	return node ? node->getChildCount() : 0;
}

/*
 * --INFO--
 * Address:	80250948
 * Size:	000040
 */
CNode* ObjectLayout::getNode(int idx, int at)
{
	ObjectLayoutNode* node = mNodeList[idx];
	return node ? node->getChildAt(at) : nullptr;
}
} // namespace Cave
} // namespace Game
