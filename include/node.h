#ifndef _NODE_H
#define _NODE_H

#include "types.h"
#include "Graphics.h"
class Node {
public:
	float radius;
	Node* pPrevious;
	Node* pNext;
	Node* pCurrent;
	uint flags;

    void init();
    void displayInfo(int);
    void update();
    void draw(Graphics&);
};

#endif
