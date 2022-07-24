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
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

struct GenericContainer : public CNode {
	virtual ~GenericContainer(); // _08
	virtual void _10() = 0;      // _10
	virtual void _14() = 0;      // _14
	virtual void _18() = 0;      // _18
	virtual void _1C() = 0;      // _1C

	// _00 VTBL
};

#endif
