#ifndef _DEMO_HIOROOTNODE_H
#define _DEMO_HIOROOTNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Demo {
struct HIORootNode : public CNode {
	virtual ~HIORootNode();       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Demo

#endif
