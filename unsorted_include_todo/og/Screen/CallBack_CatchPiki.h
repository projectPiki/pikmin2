#ifndef _OG_SCREEN_CALLBACK_CATCHPIKI_H
#define _OG_SCREEN_CALLBACK_CATCHPIKI_H

/*
    __vt__Q32og6Screen18CallBack_CatchPiki:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32og6Screen18CallBack_CatchPikiFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q32og6Screen18CallBack_CatchPikiFv
    .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace P2DScreen {
struct Node {
	virtual ~Node();                               // _08 (inline)
	virtual void _0C() = 0;                        // _0C
	virtual void update();                         // _10
	virtual void draw(Graphics&, J2DGrafContext&); // _14 (inline)
	virtual void doInit();                         // _18 (inline)
};
} // namespace P2DScreen

namespace og {
namespace Screen {
struct CallBack_CatchPiki : public CNode, public Node {
	virtual ~CallBack_CatchPiki(); // _08 (inline)
	virtual void update();         // _10
	virtual void _1C() = 0;        // _1C

	CallBack_CatchPiki();
	void init(J2DScreen*, unsigned long long, unsigned long*, JKRArchive*);
	void setPikiIcon(int);
};
} // namespace Screen
} // namespace og

#endif
