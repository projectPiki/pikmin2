#include "node.h"
#include "CNode.h"
#include "JSystem/JUtility/JUTException.h"
#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	80411204
 * Size:	000004
 */
void Node::init() { }

/*
 * --INFO--
 * Address:	80411208
 * Size:	0000B0
 */
void Node::displayInfo(int whitespaceAmt)
{
	for (s32 i = 0; i < whitespaceAmt; i++) {
		OSReport("    ");
	}

	OSReport("[%s]\n", mName);

	Node* next = mParent;
	if (next) {
		next = (Node*)(((u8*)next) - 12);
	}

	while (next) {
		next->mNext->displayInfo(whitespaceAmt + 1);

		next = next->mChild;
		if (next) {
			next = (Node*)(((u8*)next) - 12);
		}
	}
}

/*
 * --INFO--
 * Address:	804112B8
 * Size:	000064
 */
void Node::update()
{
	Node* next = mParent;
	if (next) {
		next = (Node*)(((u8*)next) - 12);
	}

	while (next) {
		next->mNext->update();

		next = next->mChild;
		if (next) {
			next = (Node*)(((u8*)next) - 12);
		}
	}
}

/*
 * --INFO--
 * Address:	8041131C
 * Size:	000074
 */
void Node::draw(Graphics& gfx)
{
	Node* next = mParent;
	if (next) {
		next = (Node*)(((u8*)next) - 12);
	}

	while (next) {
		next->mNext->draw(gfx);

		next = next->mChild;
		if (next) {
			next = (Node*)(((u8*)next) - 12);
		}
	}
}

/*
 * --INFO--
 * Address:	80411390
 * Size:	000030
 */
CNode::CNode()
{
	reset("CNode");
	setName("CNode");
}

/*
 * --INFO--
 * Address:	804113C0
 * Size:	000048
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

/*
 * --INFO--
 * Address:	80411408
 * Size:	0000B0
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

/*
 * --INFO--
 * Address:	804114B8
 * Size:	000020
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

/*
 * --INFO--
 * Address:	804114D8
 * Size:	0000B0
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

/*
 * --INFO--
 * Address:	80411588
 * Size:	000048
 */
CNode::~CNode() { }

/*
 * --INFO--
 * Address:	804115D0
 * Size:	000098
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

/*
 * --INFO--
 * Address:	80411668
 * Size:	000034
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

/*
 * --INFO--
 * Address:	8041169C
 * Size:	000094
 */
CNode* CNode::getChildAt(int idx)
{
	CNode* child = mChild;

	for (s32 i = 0; i < idx; child = child->mNext, i++) {
		JUT_ASSERTLINE(351, child, "%d child (realchild = %d)!\n", idx, getChildCount());
	}

	return child;
}
