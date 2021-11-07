#ifndef _SYSSHAPE_ANIMINFO_H
#define _SYSSHAPE_ANIMINFO_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace SysShape {
struct AnimInfo : public CNode {
	virtual ~AnimInfo();          // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace SysShape

#endif
