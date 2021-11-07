#ifndef _KH_SCREEN_DISPDAYENDRESULT_H
#define _KH_SCREEN_DISPDAYENDRESULT_H

namespace kh {
namespace Screen {
	struct DispDayEndResult {
		virtual void getSize();           // _00
		virtual void getOwnerID();        // _04
		virtual void getMemberID();       // _08
		virtual void doSetSubMemberAll(); // _0C

		// _00 VTBL
	};
} // namespace Screen
} // namespace kh

#endif
