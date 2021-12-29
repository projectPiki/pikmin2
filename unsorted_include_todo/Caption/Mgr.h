#ifndef _CAPTION_MGR_H
#define _CAPTION_MGR_H

/*
    __vt__Q27Caption3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q27Caption3MgrFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q27Caption3MgrFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Caption {
struct Mgr : public CNode {
	virtual ~Mgr();               // _00
	virtual void getChildCount(); // _04
	virtual void read(Stream&);   // _08

	// _00 VTBL
};
} // namespace Caption

#endif
