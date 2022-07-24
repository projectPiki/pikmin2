#ifndef _MORIMURA_TVSSELECTINDPANE_H
#define _MORIMURA_TVSSELECTINDPANE_H

/*
    __vt__Q28Morimura16TVsSelectIndPane:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28Morimura16TVsSelectIndPaneFv
    .4byte getChildCount__5CNodeFv
    .4byte draw__Q28Morimura16TVsSelectIndPaneFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Morimura {
struct TVsSelectIndPane : public CNode {
	virtual ~TVsSelectIndPane(); // _08 (inline)
	virtual void draw();         // _10
	virtual void _14() = 0;      // _14
};
} // namespace Morimura

#endif
