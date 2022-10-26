#ifndef _CAPTION_H
#define _CAPTION_H

#include "CNode.h"

struct Graphics;
struct Stream;
namespace P2JME {
namespace Caption {
struct TControl;
}
} // namespace P2JME

namespace Caption {

/**
 * @size{0x28}
 */
struct Node : public CNode {
	Node();

	virtual ~Node() { }         // _08 (weak)
	virtual void read(Stream&); // _10

	u32 m_startFrame; // _18
	u32 m_endFrame;   // _1C
	char m_mesgID[8]; // _20
};

/**
 * @size{0x24}
 */
struct Mgr : public CNode {
	Mgr();

	virtual ~Mgr();             // _08 (weak)
	virtual void read(Stream&); // _10

	void draw(Graphics&);
	P2JME::Caption::TControl* getFreeMessage();
	void reset();
	void resetMessageObjs();
	void update(long);

	// Unused/inlined:
	void setCurrentNode(long);

	P2JME::Caption::TControl* m_controls; // _18
	Node* m_node;                         // _1C
	u8 _20[4];                            // _20
};
} // namespace Caption

#endif
