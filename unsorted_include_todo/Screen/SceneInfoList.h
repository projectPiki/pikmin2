#ifndef _SCREEN_SCENEINFOLIST_H
#define _SCREEN_SCENEINFOLIST_H

/*
    __vt__Q26Screen13SceneInfoList:
    .4byte 0
    .4byte 0
    .4byte __dt__Q26Screen13SceneInfoListFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _00
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
