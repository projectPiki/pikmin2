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

	u32 mStartFrame; // _18
	u32 mEndFrame;   // _1C
	char mMesgID[8]; // _20
};

/**
 * @size{0x24}
 */
struct Mgr : public CNode {
	Mgr();

	virtual ~Mgr() { }          // _08 (weak)
	virtual void read(Stream&); // _10

	void draw(Graphics&);
	P2JME::Caption::TControl* getFreeMessage();
	void reset();
	void resetMessageObjs();
	void update(s32);

	// Unused/inlined:
	void setCurrentNode(s32);

	P2JME::Caption::TControl* mControls; // _18
	Node* mNode;                         // _1C
	u8 _20[4];                           // _20
};
} // namespace Caption

#endif
