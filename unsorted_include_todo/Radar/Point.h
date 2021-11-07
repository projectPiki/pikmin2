#ifndef _RADAR_POINT_H
#define _RADAR_POINT_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Radar {
struct Point : public CNode {
	virtual ~Point();             // _00
	virtual void getChildCount(); // _04
	virtual void _08() = 0;       // _08

	// _00 VTBL
};
} // namespace Radar

#endif
