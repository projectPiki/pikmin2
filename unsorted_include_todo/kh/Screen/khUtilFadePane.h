#ifndef _KH_SCREEN_KHUTILFADEPANE_H
#define _KH_SCREEN_KHUTILFADEPANE_H

/*
    __vt__Q32kh6Screen14khUtilFadePane:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32kh6Screen14khUtilFadePaneFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q32kh6Screen14khUtilFadePaneFv
    .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
    .4byte fadein_finish__Q32kh6Screen14khUtilFadePaneFv
    .4byte fadeout_finish__Q32kh6Screen14khUtilFadePaneFv
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

namespace kh {
namespace Screen {
struct khUtilFadePane : public CNode, public Node {
	virtual ~khUtilFadePane();     // _08 (inline)
	virtual void update();         // _10
	virtual void fadein_finish();  // _1C (inline)
	virtual void fadeout_finish(); // _20 (inline)
	virtual void _24() = 0;        // _24

	void create(P2DScreen::Mgr*, unsigned long long, unsigned char);
	khUtilFadePane(unsigned char);
	void add(J2DPane*);
	void fadein();
	void fadeout();
	void set_init_alpha(unsigned char);
};
} // namespace Screen
} // namespace kh

#endif
