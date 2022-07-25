#ifndef _KH_SCREEN_DISPREADYGO_H
#define _KH_SCREEN_DISPREADYGO_H

/*
    __vt__Q32kh6Screen11DispReadyGo:
    .4byte 0
    .4byte 0
    .4byte getSize__Q32kh6Screen11DispReadyGoFv
    .4byte getOwnerID__Q32kh6Screen11DispReadyGoFv
    .4byte getMemberID__Q32kh6Screen11DispReadyGoFv
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
struct DispReadyGo : public DispMemberBase {
	virtual void getSize();     // _08 (weak)
	virtual void getOwnerID();  // _0C (weak)
	virtual void getMemberID(); // _10 (weak)
};
} // namespace Screen
} // namespace kh

#endif
