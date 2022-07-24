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
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Screen {
struct SceneInfoList : public CNode {
	virtual ~SceneInfoList(); // _08
	virtual void _10() = 0;   // _10

	// _00 VTBL
};
} // namespace Screen

#endif
