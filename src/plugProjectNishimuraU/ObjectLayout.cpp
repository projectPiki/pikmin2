#include "types.h"
#include "Game/Cave/ObjectLayout.h"
#include "Game/Cave/Node.h"

namespace Game {
namespace Cave {
/**
 * @note Address: 0x80250824
 * @note Size: 0xCC
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

/**
 * @note Address: 0x802508F0
 * @note Size: 0x10
 */
void ObjectLayout::setNode(int idx, ObjectLayoutNode* layoutNode) { mNodeList[idx] = layoutNode; }

/**
 * @note Address: 0x80250900
 * @note Size: 0x48
 */
int ObjectLayout::getCount(int idx)
{
	ObjectLayoutNode* node = mNodeList[idx];
	return node ? node->getChildCount() : 0;
}

/**
 * @note Address: 0x80250948
 * @note Size: 0x40
 */
ObjectLayoutNode* ObjectLayout::getNode(int nodeIndex, int childIndex)
{
	ObjectLayoutNode* node = mNodeList[nodeIndex];
	return node ? (ObjectLayoutNode*)node->getChildAt(childIndex) : nullptr;
}
} // namespace Cave
} // namespace Game
