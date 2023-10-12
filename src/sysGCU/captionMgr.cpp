#include "Caption.h"
#include "P2Macros.h"
#include "stream.h"
#include "P2JME/Caption.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
Caption::Node::Node()
    : CNode("")
{
	mStartFrame = 0;
	mEndFrame   = 1;
	strcpy(mMesgID, "----_--");
	mName = mMesgID;
}

/*
 * --INFO--
 * Address:	804508E8
 * Size:	000064
 * Reads a caption node entry from the config file
 */
void Caption::Node::read(Stream& input)
{
	input.readString(mMesgID, 8);
	mStartFrame = (u16)input.readShort();
	mEndFrame   = (u16)input.readShort();
}

/*
 * --INFO--
 * Address:	8045094C
 * Size:	0000D4
 * __ct
 */
Caption::Mgr::Mgr()
    : CNode("キャプションマネージャ")
{
	mNode  = nullptr;
	_20[0] = 0;
	_20[1] = 0;
	_20[2] = 0;
	_20[3] = 0;

	mControls = new P2JME::Caption::TControl[3];
	for (u32 i = 0; i < 3; i++) {
		mControls[i].init();
	}
}

/*
 * --INFO--
 * Address:	80450AA0
 * Size:	000108
 */
void Caption::Mgr::read(Stream& input)
{
	int nodeCount = input.readInt();

	P2ASSERTLINE(254, nodeCount >= 0);

	for (int i = 0; i < nodeCount; i++) {
		Node* node = new Node;
		add(node);
	}

	FOREACH_NODE(Node, mChild, node) { node->read(input); }
}

/*
 * --INFO--
 * Address:	80450BA8
 * Size:	000068
 */
void Caption::Mgr::reset()
{
	FOREACH_NODE(Node, mChild, node) { node->del(); }

	del();
	mChild = nullptr;
	mNode  = nullptr;
	resetMessageObjs();
}

/*
 * --INFO--
 * Address:	80450C10
 * Size:	000068
 */
void Caption::Mgr::resetMessageObjs()
{
	for (u32 i = 0; i < 3; i++) {
		mControls[i].reset();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void Caption::Mgr::setCurrentNode(long id)
{
	// needs to be like this to get regalloc correct, FOREACH doesn't work
	Node* node = (Node*)mChild;
	for (node; node; node = (Node*)node->mNext) {
		if (id <= (int)node->mEndFrame) {
			break;
		}
	}
	mNode = node;
}

/*
 * --INFO--
 * Address:	80450C78
 * Size:	000194
 */
void Caption::Mgr::update(long num)
{
	if (num >= 0) {
		Node* node = mNode;
		if (node != nullptr) {
			if (num <= (int)node->mEndFrame) {
				Node* child = static_cast<Node*>(node->mPrev);
				if (child != nullptr) {
					if (num <= (int)child->mEndFrame) {
						setCurrentNode(num);
					}
				} else {
					setCurrentNode(num);
				}
			} else {
				setCurrentNode(num);
			}
		} else {
			setCurrentNode(num);
		}
		if (mNode && node != mNode) {
			P2JME::Caption::TControl* msg = getFreeMessage();
			P2ASSERTLINE(355, msg);
			msg->start(mNode->mMesgID, mNode->mStartFrame, mNode->mEndFrame);
		}

		for (u32 i = 0; i < 3; i++) {
			mControls[i].updateSetFrame(num);
		}
	}
}

/*
 * --INFO--
 * Address:	80450E0C
 * Size:	000098
 */
void Caption::Mgr::draw(Graphics& gfx)
{
	gfx.mOrthoGraph.setPort();
	if (mNode) {
		for (u32 i = 0; i < 3; i++) {
			mControls[i].draw(gfx);
		}
	}
}

/*
 * --INFO--
 * Address:	80450EA4
 * Size:	00005C
 */
P2JME::Caption::TControl* Caption::Mgr::getFreeMessage()
{
	P2JME::Caption::TControl* ret = nullptr;
	for (u32 i = 0; i < 3; i++) {
		if ((int)mControls[i].mState == 0) {
			ret = &mControls[i];
			break;
		}
	}
	return ret;
}
