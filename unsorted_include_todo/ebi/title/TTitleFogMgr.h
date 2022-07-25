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
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace ebi {
namespace title {
struct TTitleFogMgr : public CNode {
	virtual ~TTitleFogMgr(); // _08 (weak)

	void setGX(Camera&);
	void loadSettingFile(JKRArchive*, char*);
};
} // namespace title
} // namespace ebi

#endif
