#include "node.h"
#include "CNode.h"
#include "JSystem/JUT/JUTException.h"
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

	OSReport("[%s]\n", m_name);

	Node* next = m_next;
	if (next) {
		next = (Node*)(((u8*)next) - 12);
	}

	while (next) {
		next->_0C->displayInfo(whitespaceAmt + 1);

		next = next->_18;
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
	Node* next = m_next;
	if (next) {
		next = (Node*)(((u8*)next) - 12);
	}

	while (next) {
		next->_0C->update();

		next = next->_18;
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
	Node* next = m_next;
	if (next) {
		next = (Node*)(((u8*)next) - 12);
	}

	while (next) {
		next->_0C->draw(gfx);

		next = next->_18;
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
	CNode* child = m_child;

	if (m_child) {
		// Add to our children and assign the variables appropriately
		// this
		// |||| (parent is this and the child is newChild)
		// newChild
		newChild->m_parent = this;
		m_child            = newChild;

		// (nothing) <= newChild => otherChild
		newChild->m_prev = nullptr;
		newChild->m_next = child;

		// newChild <= otherChild
		child->m_prev = newChild;
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
	CNode* child = m_child;
	if (child) {
		// Iterate to the end of the child list
		while (child->m_next) {
			child = child->m_next;
		}

		// Add the child to the end of the list
		child->m_next  = newAdd;
		newAdd->m_prev = child;
	} else {
		// Set the child if it doesn't exist
		m_child = newAdd;
	}

	newAdd->m_parent = this;

	// Double check we haven't added the child twice!
	CNode* c = m_child;
	for (s32 addErrCount = 0; c; c = c->m_next) {
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

	while (node = node->m_next) {
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
	while (endCheck->m_next) {
		JUT_ASSERTLINE(274, endCheck != newEnd, "CNode concat Loop Err!\n");
		endCheck = endCheck->m_next;
	}

	// We assume the new end node wasn't found, so we will traverse to the end
	// of the list and add it ourselves
	while (curEnd->m_next) {
		curEnd = curEnd->m_next;
	}

	// Add the node to the next one on
	curEnd->m_next = newEnd;
	newEnd->m_prev = curEnd;
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
	CNode* parent = m_parent;
	if (!parent) {
		return;
	}

	CNode* curChild = parent->m_child;
	CNode* oldChild = nullptr;
	while (curChild) {
		// Is the current node us?
		if (curChild == this) {
			// If there was a node before us
			if (oldChild) {
				// Change the next node from this to the one after us
				oldChild->m_next = curChild->m_next;

				// If there was a node after us
				CNode* next = curChild->m_next;
				if (next) {
					// Change the previous node to the one before us
					next->m_prev = oldChild;
				}

				// Null our variables so we are alone :(
				m_prev   = nullptr;
				m_next   = nullptr;
				m_parent = nullptr;
			} else {
				// There wasn't a node before us, so assign the child to the
				// next node on
				parent->m_child = curChild->m_next;

				// If there was a node after us, we'll make sure it doesn't have
				// a previous node as we're deleting ourself
				CNode* next = curChild->m_next;
				if (next) {
					next->m_prev = nullptr;
				}

				// Null our variables so we are alone :(
				m_prev   = nullptr;
				m_next   = nullptr;
				m_parent = nullptr;
			}

			return;
		}

		// Move to the next node
		oldChild = curChild;
		curChild = curChild->m_next;
	}
}

/*
 * --INFO--
 * Address:	80411668
 * Size:	000034
 */
int CNode::getChildCount()
{
	if (m_child) {
		CNode* child = m_child;
		u32 i        = 0;

		for (; child; child = child->m_next, i++) { }

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
	CNode* child = m_child;

	for (s32 i = 0; i < idx; child = child->m_next, i++) {
		JUT_ASSERTLINE(351, child, "%d child (realchild = %d)!\n", idx, getChildCount());
	}

	return child;
}
