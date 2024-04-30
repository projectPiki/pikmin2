#ifndef _NODE_H
#define _NODE_H

#include "types.h"
#include "JSystem/JSupport/JSUList.h"

struct Graphics;

struct CoreNode {
	CoreNode()
	    : mTree(this)
	{
		mName = "root";
	}

	char* mName;             // _00
	JSUTree<CoreNode> mTree; // _04
};

struct Node : public CoreNode {
	Node() { init(); }

	virtual void update();         // _08
	virtual void draw(Graphics&);  // _0C
	virtual void displayInfo(int); // _10

	void init();

	// _00-_20 = CoreNode
};

#endif
