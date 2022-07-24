#ifndef _KH_SCREEN_DISPDAYENDRESULTINCP_H
#define _KH_SCREEN_DISPDAYENDRESULTINCP_H

/*
    __vt__Q32kh6Screen20DispDayEndResultIncP:
    .4byte 0
    .4byte 0
    .4byte getSize__Q32kh6Screen20DispDayEndResultIncPFv
    .4byte getOwnerID__Q32kh6Screen20DispDayEndResultIncPFv
    .4byte getMemberID__Q32kh6Screen20DispDayEndResultIncPFv
    .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
*/

namespace og {
namespace Screen {
struct DispMemberBase {
	virtual void getSize();           // _08
	virtual void getOwnerID();        // _0C
	virtual void getMemberID();       // _10
	virtual void doSetSubMemberAll(); // _14

	// _00 VTBL
};
} // namespace Screen
} // namespace og

namespace kh {
namespace Screen {
struct DispDayEndResultIncP : public DispMemberBase {
	virtual void getSize();     // _08
	virtual void getOwnerID();  // _0C
	virtual void getMemberID(); // _10

	// _00 VTBL
};
} // namespace Screen
} // namespace kh

#endif
