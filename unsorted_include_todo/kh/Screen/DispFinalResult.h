#ifndef _KH_SCREEN_DISPFINALRESULT_H
#define _KH_SCREEN_DISPFINALRESULT_H

/*
    __vt__Q32kh6Screen15DispFinalResult:
    .4byte 0
    .4byte 0
    .4byte getSize__Q32kh6Screen15DispFinalResultFv
    .4byte getOwnerID__Q32kh6Screen15DispFinalResultFv
    .4byte getMemberID__Q32kh6Screen15DispFinalResultFv
    .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
*/

namespace og {
namespace Screen {
	struct DispMemberBase {
		virtual void getSize();           // _00
		virtual void getOwnerID();        // _04
		virtual void getMemberID();       // _08
		virtual void doSetSubMemberAll(); // _0C

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

namespace kh {
namespace Screen {
	struct DispFinalResult : public DispMemberBase {
		virtual void getSize();           // _00
		virtual void getOwnerID();        // _04
		virtual void getMemberID();       // _08
		virtual void doSetSubMemberAll(); // _0C

		// _00 VTBL
	};
} // namespace Screen
} // namespace kh

#endif
