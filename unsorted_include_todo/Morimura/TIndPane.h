#ifndef _MORIMURA_TINDPANE_H
#define _MORIMURA_TINDPANE_H

/*
    __vt__Q28Morimura8TIndPane:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28Morimura8TIndPaneFv
    .4byte getChildCount__5CNodeFv
    .4byte draw__Q28Morimura8TIndPaneFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Morimura {
struct TIndPane : public CNode {
	virtual ~TIndPane();          // _00
	virtual void getChildCount(); // _04
	virtual void draw();          // _08

	// _00 VTBL
};
} // namespace Morimura

#endif
