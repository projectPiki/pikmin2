#ifndef _GAME_COURSEINFO_H
#define _GAME_COURSEINFO_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct CourseInfo : public CNode {
	virtual ~CourseInfo();        // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
