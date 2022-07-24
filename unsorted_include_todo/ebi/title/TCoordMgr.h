#ifndef _EBI_TITLE_TCOORDMGR_H
#define _EBI_TITLE_TCOORDMGR_H

/*
    __vt__Q33ebi5title9TCoordMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q33ebi5title9TCoordMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace ebi {
namespace title {
struct TCoordMgr : public CNode {
	virtual ~TCoordMgr(); // _08

	// _00 VTBL
};
} // namespace title
} // namespace ebi

#endif
