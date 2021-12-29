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
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace P2JME {
namespace Window {
	struct DrawInfo : public CNode {
		virtual ~DrawInfo();          // _00
		virtual void getChildCount(); // _04
		virtual void _08() = 0;       // _08

		// _00 VTBL
	};
} // namespace Window
} // namespace P2JME

#endif
