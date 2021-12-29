#ifndef _KH_SCREEN_DISPDAYENDRESULTITEM_H
#define _KH_SCREEN_DISPDAYENDRESULTITEM_H

/*
    __vt__Q32kh6Screen20DispDayEndResultItem:
    .4byte 0
    .4byte 0
    .4byte getSize__Q32kh6Screen20DispDayEndResultItemFv
    .4byte getOwnerID__Q32kh6Screen20DispDayEndResultItemFv
    .4byte getMemberID__Q32kh6Screen20DispDayEndResultItemFv
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
	struct DispDayEndResultItem : public DispMemberBase {
		virtual void getSize();           // _00
		virtual void getOwnerID();        // _04
		virtual void getMemberID();       // _08
		virtual void doSetSubMemberAll(); // _0C

		// _00 VTBL
	};
} // namespace Screen
} // namespace kh

#endif
