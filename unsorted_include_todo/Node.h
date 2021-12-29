#ifndef _NODE_H
#define _NODE_H

/*
    __vt__4Node:
    .4byte 0
    .4byte 0
    .4byte update__4NodeFv
    .4byte draw__4NodeFR8Graphics
    .4byte displayInfo__4NodeFi
    .4byte 0
*/

struct Node {
	virtual void update();         // _00
	virtual void draw(Graphics&);  // _04
	virtual void displayInfo(int); // _08
	virtual void _0C() = 0;        // _0C

	// _00 VTBL
};

#endif
