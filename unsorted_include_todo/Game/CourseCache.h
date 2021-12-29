#ifndef _GAME_COURSECACHE_H
#define _GAME_COURSECACHE_H

/*
    __vt__Q24Game11CourseCache:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game11CourseCacheFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct CourseCache : public CNode {
	virtual ~CourseCache();       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
