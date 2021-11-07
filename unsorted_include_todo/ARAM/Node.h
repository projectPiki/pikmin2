#ifndef _ARAM_NODE_H
#define _ARAM_NODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace ARAM {
struct Node : public CNode {
	virtual ~Node();              // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace ARAM

#endif
