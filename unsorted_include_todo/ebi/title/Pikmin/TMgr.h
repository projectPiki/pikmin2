#ifndef _EBI_TITLE_PIKMIN_TMGR_H
#define _EBI_TITLE_PIKMIN_TMGR_H

struct CNode {
	virtual void _00() = 0;       // _00
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
