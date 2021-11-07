#ifndef _SYS_DRAWBUFFERS_H
#define _SYS_DRAWBUFFERS_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Sys {
struct DrawBuffers : public CNode {
	virtual ~DrawBuffers();       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Sys

#endif
