#ifndef _GENERICCONTAINER_H
#define _GENERICCONTAINER_H

/*
    __vt__16GenericContainer:
    .4byte 0
    .4byte 0
    .4byte __dt__16GenericContainerFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct GenericContainer : public CNode {
	virtual ~GenericContainer();  // _00
	virtual void getChildCount(); // _04
	virtual void _08() = 0;       // _08
	virtual void _0C() = 0;       // _0C
	virtual void _10() = 0;       // _10
	virtual void _14() = 0;       // _14

	// _00 VTBL
};

#endif
