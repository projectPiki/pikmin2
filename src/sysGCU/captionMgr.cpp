#include "Caption.h"
#include "JSystem/JUT/JUTException.h"
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
	m_startFrame = 0;
	m_endFrame   = 1;
	strcpy(m_mesgID, "----_--");
	m_name = m_mesgID;
}

/*
 * --INFO--
 * Address:	804508E8
 * Size:	000064
 * Reads a caption node entry from the config file
 */
void Caption::Node::read(Stream& input)
{
	input.readString(m_mesgID, 8);
	m_startFrame = (u16)input.readShort();
	m_endFrame   = (u16)input.readShort();
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
	m_node = nullptr;
	_20[0] = 0;
	_20[1] = 0;
	_20[2] = 0;
	_20[3] = 0;

	m_controls = new P2JME::Caption::TControl[3];
	for (u32 i = 0; i < 3; i++) {
		m_controls[i].init();
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

	FOREACH_NODE(Node, m_child, node) { node->read(input); }
}

/*
 * --INFO--
 * Address:	80450BA8
 * Size:	000068
 */
void Caption::Mgr::reset()
{
	FOREACH_NODE(Node, m_child, node) { node->del(); }

	del();
	m_child = nullptr;
	m_node  = nullptr;
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
		m_controls[i].reset();
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
	Node* node = (Node*)m_child;
	for (node; node; node = (Node*)node->m_next) {
		if (id <= (int)node->m_endFrame) {
			break;
		}
	}
	m_node = node;
}

/*
 * --INFO--
 * Address:	80450C78
 * Size:	000194
 */
void Caption::Mgr::update(long num)
{
	if (num >= 0) {
		Node* node = m_node;
		if (node != nullptr) {
			if (num <= (int)node->m_endFrame) {
				Node* child = static_cast<Node*>(node->m_prev);
				if (child != nullptr) {
					if (num <= (int)child->m_endFrame) {
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
		if (m_node && node != m_node) {
			P2JME::Caption::TControl* msg = getFreeMessage();
			P2ASSERTLINE(355, msg);
			msg->start(m_node->m_mesgID, m_node->m_startFrame, m_node->m_endFrame);
		}

		for (u32 i = 0; i < 3; i++) {
			m_controls[i].updateSetFrame(num);
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
	gfx.m_orthoGraph.setPort();
	if (m_node) {
		for (u32 i = 0; i < 3; i++) {
			m_controls[i].draw(gfx);
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
		if ((int)m_controls[i]._5C == 0) {
			ret = &m_controls[i];
			break;
		}
	}
	return ret;
}
