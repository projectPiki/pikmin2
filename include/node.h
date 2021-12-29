#ifndef _NODE_H
#define _NODE_H

#include "types.h"

struct Graphics;

struct Node {
	char* m_name; // _00
	Node* m_next; // _04
	u32 _08;      // _08
	Node* _0C;    // _0C
	Node* _10;    // _10
	u32 _14;      // _14
	Node* _18;    // _18
	u32 _1C;      // _1C

	Node() { init(); }

	virtual void update();         // _08
	virtual void draw(Graphics&);  // _0C
	virtual void displayInfo(int); // _10

	void init();
};

#endif
