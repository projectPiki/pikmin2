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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Morimura {
struct TIndPane : public CNode {
	virtual ~TIndPane(); // _08 (inline)
	virtual void draw(); // _10

	TIndPane();
	void createIndTexture(const char*);
	void createCaptureTexture(_GXTexFmt);
};
} // namespace Morimura

#endif
