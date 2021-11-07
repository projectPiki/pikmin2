#ifndef _EBI_TITLE_TCOORDMGR_H
#define _EBI_TITLE_TCOORDMGR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace ebi {
namespace title {
	struct TCoordMgr : public CNode {
		virtual ~TCoordMgr();         // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace title
} // namespace ebi

#endif
