#ifndef _KH_SCREEN_DISPWINLOSEREASON_H
#define _KH_SCREEN_DISPWINLOSEREASON_H

/*
    __vt__Q32kh6Screen17DispWinLoseReason:
    .4byte 0
    .4byte 0
    .4byte getSize__Q32kh6Screen17DispWinLoseReasonFv
    .4byte getOwnerID__Q32kh6Screen17DispWinLoseReasonFv
    .4byte getMemberID__Q32kh6Screen17DispWinLoseReasonFv
    .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
*/

namespace og {
namespace Screen {
struct DispMemberBase {
	virtual void getSize();           // _08 (inline)
	virtual void getOwnerID();        // _0C (inline)
	virtual void getMemberID();       // _10 (inline)
	virtual void doSetSubMemberAll(); // _14 (inline)
};
} // namespace Screen
} // namespace og

namespace kh {
namespace Screen {
struct DispWinLoseReason : public DispMemberBase {
	virtual void getSize();     // _08 (inline)
	virtual void getOwnerID();  // _0C (inline)
	virtual void getMemberID(); // _10 (inline)
};
} // namespace Screen
} // namespace kh

#endif
