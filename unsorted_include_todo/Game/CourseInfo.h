#ifndef _GAME_COURSEINFO_H
#define _GAME_COURSEINFO_H

/*
    __vt__Q24Game10CourseInfo:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game10CourseInfoFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct CourseInfo : public CNode {
	virtual ~CourseInfo(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
