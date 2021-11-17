#ifndef _EBI_P2DSCREEN_MGR_H
#define _EBI_P2DSCREEN_MGR_H

#include "JSystem/J2D/J2DPane.h"
#include "CNode.h"

namespace P2DScreen {

struct Node : public CNode {
	virtual ~Node() { }
	virtual void update();
	virtual void draw(struct Graphics&, struct J2DGrafContext&);
	virtual void doInit();
};

struct Mgr : public J2DScreen {
	virtual ~Mgr();

	char _00[0x114]; // _00
	Node _118;       // _118
};

} // namespace P2DScreen

#endif
