#ifndef _SYS_DRAWBUFFERS_H
#define _SYS_DRAWBUFFERS_H

/*
    __vt__Q23Sys11DrawBuffers:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23Sys11DrawBuffersFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Sys {
struct DrawBuffers : public CNode {
	virtual ~DrawBuffers(); // _08

	// _00 VTBL
};
} // namespace Sys

#endif
