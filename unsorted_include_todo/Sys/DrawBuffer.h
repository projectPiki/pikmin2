#ifndef _SYS_DRAWBUFFER_H
#define _SYS_DRAWBUFFER_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Sys {
struct DrawBuffer : public CNode {
	virtual ~DrawBuffer();        // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Sys

#endif
