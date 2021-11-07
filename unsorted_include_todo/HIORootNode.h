#ifndef _HIOROOTNODE_H
#define _HIOROOTNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct HIORootNode : public CNode {
	virtual ~HIORootNode();       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

#endif
