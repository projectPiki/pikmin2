#ifndef _SCREEN_SCENEINFOLIST_H
#define _SCREEN_SCENEINFOLIST_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Screen {
struct SceneInfoList : public CNode {
	virtual ~SceneInfoList();     // _00
	virtual void getChildCount(); // _04
	virtual void _08() = 0;       // _08

	// _00 VTBL
};
} // namespace Screen

#endif
