#ifndef _NODE_H
#define _NODE_H

struct Node {
	virtual void update();         // _00
	virtual void draw(Graphics&);  // _04
	virtual void displayInfo(int); // _08
	virtual void _0C() = 0;        // _0C

	// _00 VTBL
};

#endif
