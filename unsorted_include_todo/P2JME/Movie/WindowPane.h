#ifndef _P2JME_MOVIE_WINDOWPANE_H
#define _P2JME_MOVIE_WINDOWPANE_H

/*
    __vt__Q35P2JME5Movie10WindowPane:
    .4byte 0
    .4byte 0
    .4byte __dt__Q35P2JME5Movie10WindowPaneFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q35P2JME5Movie10WindowPaneFv
    .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q35P2JME5Movie10WindowPaneFv
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
};
} // namespace P2DScreen

namespace P2JME {
namespace Movie {
struct WindowPane : public CNode, public Node {
	virtual ~WindowPane();  // _08 (inline)
	virtual void update();  // _10
	virtual void doInit();  // _18
	virtual void _1C() = 0; // _1C

	void moveWindow(bool);
	void open(float);
};
} // namespace Movie
} // namespace P2JME

#endif
