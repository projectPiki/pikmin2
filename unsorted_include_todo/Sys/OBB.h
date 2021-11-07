#ifndef _SYS_OBB_H
#define _SYS_OBB_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Sys {
struct OBB : public CNode {
	virtual ~OBB();               // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Sys

#endif
