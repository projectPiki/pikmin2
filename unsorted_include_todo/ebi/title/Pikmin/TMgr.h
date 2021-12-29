#ifndef _EBI_TITLE_PIKMIN_TMGR_H
#define _EBI_TITLE_PIKMIN_TMGR_H

/*
    __vt__Q43ebi5title6Pikmin4TMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q43ebi5title6Pikmin4TMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace ebi {
namespace title {
	namespace Pikmin {
		struct TMgr : public CNode {
			virtual ~TMgr();              // _00
			virtual void getChildCount(); // _04

			// _00 VTBL
		};
	} // namespace Pikmin
} // namespace title
} // namespace ebi

#endif
