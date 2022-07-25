#ifndef _EBI_TITLE_PIKMIN_TBOIDPARAMMGR_H
#define _EBI_TITLE_PIKMIN_TBOIDPARAMMGR_H

/*
    __vt__Q43ebi5title6Pikmin13TBoidParamMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q43ebi5title6Pikmin13TBoidParamMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace ebi {
namespace title {
namespace Pikmin {
struct TBoidParamMgr : public CNode {
	virtual ~TBoidParamMgr(); // _08 (weak)
};
} // namespace Pikmin
} // namespace title
} // namespace ebi

#endif
