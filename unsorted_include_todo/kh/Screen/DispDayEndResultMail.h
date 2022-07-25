#ifndef _KH_SCREEN_DISPDAYENDRESULTMAIL_H
#define _KH_SCREEN_DISPDAYENDRESULTMAIL_H

/*
    __vt__Q32kh6Screen20DispDayEndResultMail:
    .4byte 0
    .4byte 0
    .4byte getSize__Q32kh6Screen20DispDayEndResultMailFv
    .4byte getOwnerID__Q32kh6Screen20DispDayEndResultMailFv
    .4byte getMemberID__Q32kh6Screen20DispDayEndResultMailFv
    .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
*/

namespace og {
namespace Screen {
struct DispMemberBase {
	virtual void getSize();           // _08 (weak)
	virtual void getOwnerID();        // _0C (weak)
	virtual void getMemberID();       // _10 (weak)
	virtual void doSetSubMemberAll(); // _14 (weak)
};
} // namespace Screen
} // namespace og

namespace kh {
namespace Screen {
struct DispDayEndResultMail : public DispMemberBase {
	virtual void getSize();     // _08 (weak)
	virtual void getOwnerID();  // _0C (weak)
	virtual void getMemberID(); // _10 (weak)

	DispDayEndResultMail(JKRHeap*, kh::Screen::MailCategory);
};
} // namespace Screen
} // namespace kh

#endif
