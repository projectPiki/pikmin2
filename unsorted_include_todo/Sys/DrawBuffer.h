#ifndef _SYS_DRAWBUFFER_H
#define _SYS_DRAWBUFFER_H

/*
    __vt__Q23Sys10DrawBuffer:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23Sys10DrawBufferFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Sys {
struct DrawBuffer : public CNode {
	virtual ~DrawBuffer(); // _08

	// _00 VTBL
};
} // namespace Sys

#endif
