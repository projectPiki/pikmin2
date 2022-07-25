#ifndef _P2JME_WINDOW_DRAWINFO_H
#define _P2JME_WINDOW_DRAWINFO_H

/*
    __vt__Q35P2JME6Window8DrawInfo:
    .4byte 0
    .4byte 0
    .4byte __dt__Q35P2JME6Window8DrawInfoFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace P2JME {
namespace Window {
struct DrawInfo : public CNode {
	virtual ~DrawInfo();    // _08 (weak)
	virtual void _10() = 0; // _10

	DrawInfo();
};
} // namespace Window
} // namespace P2JME

#endif
