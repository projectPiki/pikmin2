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
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct CourseCache : public CNode {
	virtual ~CourseCache(); // _08 (weak)

	void getColorMePikmins(unsigned char*, int);
	CourseCache(int);
	void beginSave(int);
	void write(Stream&);
	void read(Stream&);
};
} // namespace Game

#endif
