#ifndef _EBI_TITLE_CHAPPY_TMGR_H
#define _EBI_TITLE_CHAPPY_TMGR_H

/*
    __vt__Q43ebi5title6Chappy4TMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q43ebi5title6Chappy4TMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace ebi {
namespace title {
namespace Chappy {
struct TMgr : public CNode {
	virtual ~TMgr(); // _08 (weak)

	TMgr();
	void setArchive(JKRArchive*);
	void initUnit();
};
} // namespace Chappy
} // namespace title
} // namespace ebi

#endif
