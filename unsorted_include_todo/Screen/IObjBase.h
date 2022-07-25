#ifndef _SCREEN_IOBJBASE_H
#define _SCREEN_IOBJBASE_H

/*
    __vt__Q26Screen8IObjBase:
    .4byte 0
    .4byte 0
    .4byte __dt__Q26Screen8IObjBaseFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
    .4byte 0
    .4byte "@24@__dt__Q26Screen8IObjBaseFv"
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Screen {
struct IObjBase : public CNode {
	virtual ~IObjBase();    // _08 (weak)
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14
};
} // namespace Screen

#endif
