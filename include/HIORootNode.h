#ifndef _HIOROOTNODE_H
#define _HIOROOTNODE_H

#include "types.h"
#include "CNode.h"

struct HIORootNode : public CNode {
	virtual ~HIORootNode(); // _08 (weak)

	// _00      = VTBL
	// _00-_18  = CNode
};

#endif
