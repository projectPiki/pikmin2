#include "node.h"
#include "CNode.h"
#include "JSystem/JUtility/JUTException.h"
#include "Dolphin/os.h"

/**
 * @note Address: 0x80411204
 * @note Size: 0x4
 */
void Node::init() { }

/**
 * @note Address: 0x80411208
 * @note Size: 0xB0
 */
void Node::displayInfo(int whitespaceAmt)
{
	for (s32 i = 0; i < whitespaceAmt; i++) {
		OSReport("    ");
	}

	OSReport("[%s]\n", mName);

	JSUTreeIterator<CoreNode> iterator;
	for (iterator = mTree.getFirstChild(); iterator != mTree.getEndChild();) {
		Node* child = static_cast<Node*>(iterator.getObject());
		child->displayInfo(whitespaceAmt + 1);
		iterator++;
	}
}

/**
 * @note Address: 0x804112B8
 * @note Size: 0x64
 */
void Node::update()
{
	JSUTreeIterator<CoreNode> iterator;
	for (iterator = mTree.getFirstChild(); iterator != mTree.getEndChild();) {
		Node* child = static_cast<Node*>(iterator.getObject());
		child->update();
		iterator++;
	}
}

/**
 * @note Address: 0x8041131C
 * @note Size: 0x74
 */
void Node::draw(Graphics& gfx)
{
	JSUTreeIterator<CoreNode> iterator;
	for (iterator = mTree.getFirstChild(); iterator != mTree.getEndChild();) {
		Node* child = static_cast<Node*>(iterator.getObject());
		child->draw(gfx);
		iterator++;
	}
}

/**
 * @note Address: 0x80411390
 * @note Size: 0x30
 */
CNode::CNode()
{
	reset("CNode");
	setName("CNode");
}

/**
 * @note Address: 0x804113C0
 * @note Size: 0x48
 */
void CNode::addHead(CNode* newChild)
{
	CNode* child = mChild;

	if (mChild) {
		// Add to our children and assign the variables appropriately
		// this
		// |||| (parent is this and the child is newChild)
		// newChild
		newChild->mParent = this;
		mChild            = newChild;

		// (nothing) <= newChild => otherChild
		newChild->mPrev = nullptr;
		newChild->mNext = child;

		// newChild <= otherChild
		child->mPrev = newChild;
		return;
	}

	// If we didn't have any children to add it to, add it as a new child
	add(newChild);
}

/**
 * @note Address: 0x80411408
 * @note Size: 0xB0
 */
void CNode::add(CNode* newAdd)
{
	CNode* child = mChild;
	if (child) {
		// Iterate to the end of the child list
		while (child->mNext) {
			child = child->mNext;
		}

		// Add the child to the end of the list
		child->mNext  = newAdd;
		newAdd->mPrev = child;
	} else {
		// Set the child if it doesn't exist
		mChild = newAdd;
	}

	newAdd->mParent = this;

	// Double check we haven't added the child twice!
	CNode* c = mChild;
	for (s32 addErrCount = 0; c; c = c->mNext) {
		if (c == newAdd) {
			addErrCount++;
		}

		JUT_ASSERTLINE(242, addErrCount <= 1, "CNode add err count %d\n", addErrCount);
	}
}

/**
 * @note Address: 0x804114B8
 * @note Size: 0x20
 */
int CNode::calcNextCount()
{
	int i       = 1;
	CNode* node = this;

	while (node = node->mNext) {
		i++;
	}

	return i;
}

/**
 * @note Address: 0x804114D8
 * @note Size: 0xB0
 */
void CNode::concat(CNode* newEnd)
{
	CNode* curEnd   = this;
	CNode* endCheck = this;

	JUT_ASSERTLINE(270, this != newEnd, "CNode concat Loop Err!\n");

	// Check if we already have the new end node
	while (endCheck->mNext) {
		JUT_ASSERTLINE(274, endCheck != newEnd, "CNode concat Loop Err!\n");
		endCheck = endCheck->mNext;
	}

	// We assume the new end node wasn't found, so we will traverse to the end
	// of the list and add it ourselves
	while (curEnd->mNext) {
		curEnd = curEnd->mNext;
	}

	// Add the node to the next one on
	curEnd->mNext = newEnd;
	newEnd->mPrev = curEnd;
}

/**
 * @note Address: 0x80411588
 * @note Size: 0x48
 */
CNode::~CNode() { }

/**
 * @brief Deletes the current node from its parent's child list.
 *
 * This function removes the current node from its parent's child list.
 * If there are other nodes before or after the current node, pointers are updated to maintain the linked list structure.
 * If the current node is the only child of its parent, the parent's child pointer is updated to the next node, if any.
 *
 * @note This function assumes that the current node has a valid parent.
 *
 * @note Address: 0x804115D0
 * @note Size: 0x98
 */
void CNode::del()
{
	CNode* parent = mParent;
	if (!parent) {
		return;
	}

	CNode* curChild = parent->mChild;
	CNode* oldChild = nullptr;
	while (curChild) {
		// Is the current node us?
		if (curChild == this) {
			// If there was a node before us
			if (oldChild) {
				// Change the next node from this to the one after us
				oldChild->mNext = curChild->mNext;

				// If there was a node after us
				CNode* next = curChild->mNext;
				if (next) {
					// Change the previous node to the one before us
					next->mPrev = oldChild;
				}

				// Null our variables so we are alone :(
				mPrev   = nullptr;
				mNext   = nullptr;
				mParent = nullptr;
			} else {
				// There wasn't a node before us, so assign the child to the
				// next node on
				parent->mChild = curChild->mNext;

				// If there was a node after us, we'll make sure it doesn't have
				// a previous node as we're deleting ourself
				CNode* next = curChild->mNext;
				if (next) {
					next->mPrev = nullptr;
				}

				// Null our variables so we are alone :(
				mPrev   = nullptr;
				mNext   = nullptr;
				mParent = nullptr;
			}

			return;
		}

		// Move to the next node
		oldChild = curChild;
		curChild = curChild->mNext;
	}
}

/**
 * @note Address: 0x80411668
 * @note Size: 0x34
 */
int CNode::getChildCount()
{
	if (mChild) {
		CNode* child = mChild;
		u32 i        = 0;

		for (; child; child = child->mNext, i++) { }

		return i;
	}

	return 0;
}

/**
 * @note Address: 0x8041169C
 * @note Size: 0x94
 */
CNode* CNode::getChildAt(int idx)
{
	CNode* child = mChild;

	for (s32 i = 0; i < idx; child = child->mNext, i++) {
		JUT_ASSERTLINE(351, child, "%d child (realchild = %d)!\n", idx, getChildCount());
	}

	return child;
}
