#include "Caption.h"
#include "P2Macros.h"
#include "stream.h"
#include "P2JME/Caption.h"

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
Caption::Node::Node()
    : CNode("")
{
	mStartFrame = 0;
	mEndFrame   = 1;
	strcpy(mMesgID, "----_--");
	mName = mMesgID;
}

/**
 * @note Address: 0x804508E8
 * @note Size: 0x64
 * Reads a caption node entry from the config file
 */
void Caption::Node::read(Stream& input)
{
	input.readString(mMesgID, 8);
	mStartFrame = (u16)input.readShort();
	mEndFrame   = (u16)input.readShort();
}

/**
 * @note Address: 0x8045094C
 * @note Size: 0xD4
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

/**
 * @note Address: 0x80450AA0
 * @note Size: 0x108
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

/**
 * @note Address: 0x80450BA8
 * @note Size: 0x68
 */
void Caption::Mgr::reset()
{
	FOREACH_NODE(Node, mChild, node) { node->del(); }

	del();
	mChild = nullptr;
	mNode  = nullptr;
	resetMessageObjs();
}

/**
 * @note Address: 0x80450C10
 * @note Size: 0x68
 */
void Caption::Mgr::resetMessageObjs()
{
	for (u32 i = 0; i < 3; i++) {
		mControls[i].reset();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void Caption::Mgr::setCurrentNode(s32 id)
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

/**
 * @note Address: 0x80450C78
 * @note Size: 0x194
 */
void Caption::Mgr::update(s32 num)
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

/**
 * @note Address: 0x80450E0C
 * @note Size: 0x98
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

/**
 * @note Address: 0x80450EA4
 * @note Size: 0x5C
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
