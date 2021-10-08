#ifndef _NODE_H
#define _NODE_H

#include "types.h"
class Node {
public:
	float radius;
	Node* pPrevious;
	Node* pNext;
	Node* pCurrent;
	uint flags;
};

#endif
