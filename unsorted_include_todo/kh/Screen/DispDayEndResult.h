#ifndef _KH_SCREEN_DISPDAYENDRESULT_H
#define _KH_SCREEN_DISPDAYENDRESULT_H

/*
    __vt__Q32kh6Screen16DispDayEndResult:
    .4byte 0
    .4byte 0
    .4byte getSize__Q32kh6Screen16DispDayEndResultFv
    .4byte getOwnerID__Q32kh6Screen16DispDayEndResultFv
    .4byte getMemberID__Q32kh6Screen16DispDayEndResultFv
    .4byte doSetSubMemberAll__Q32kh6Screen16DispDayEndResultFv
*/

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
