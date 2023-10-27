#ifndef _NODE_H
#define _NODE_H

#include "types.h"

struct Graphics;

struct Node {
	char* mName;   // _00
	Node* mParent; // _04
	u32 _08;       // _08
	Node* mNext;   // _0C
	Node* mPrev;   // _10
	u32 _14;       // _14
	Node* mChild;  // _18
	u32 _1C;       // _1C

	Node() { init(); }

	virtual void update();         // _08
	virtual void draw(Graphics&);  // _0C
	virtual void displayInfo(int); // _10

	void init();
};

#endif
