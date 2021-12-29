#ifndef _RADAR_POINT_H
#define _RADAR_POINT_H

/*
    __vt__Q25Radar5Point:
    .4byte 0
    .4byte 0
    .4byte __dt__Q25Radar5PointFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _00
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
