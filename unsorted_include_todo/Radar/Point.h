#ifndef _RADAR_POINT_H
#define _RADAR_POINT_H

/*
    __vt__Q25Radar5Point:
    .4byte 0
    .4byte 0
    .4byte __dt__Q25Radar5PointFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Radar {
struct Point : public CNode {
	virtual ~Point(); // _08

	// _00 VTBL
};
} // namespace Radar

#endif
