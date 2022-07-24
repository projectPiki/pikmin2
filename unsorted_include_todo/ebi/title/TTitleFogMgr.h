#ifndef _EBI_TITLE_TTITLEFOGMGR_H
#define _EBI_TITLE_TTITLEFOGMGR_H

/*
    __vt__Q33ebi5title12TTitleFogMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q33ebi5title12TTitleFogMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace ebi {
namespace title {
struct TTitleFogMgr : public CNode {
	virtual ~TTitleFogMgr(); // _08

	// _00 VTBL
};
} // namespace title
} // namespace ebi

#endif
