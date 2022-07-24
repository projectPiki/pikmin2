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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Radar {
struct Point : public CNode {
	virtual ~Point(); // _08 (inline)

	void getPosition();
	Point();
};
} // namespace Radar

#endif
