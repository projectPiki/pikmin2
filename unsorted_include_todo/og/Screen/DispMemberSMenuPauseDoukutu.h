#ifndef _OG_SCREEN_DISPMEMBERSMENUPAUSEDOUKUTU_H
#define _OG_SCREEN_DISPMEMBERSMENUPAUSEDOUKUTU_H

/*
    __vt__Q32og6Screen27DispMemberSMenuPauseDoukutu:
    .4byte 0
    .4byte 0
    .4byte getSize__Q32og6Screen27DispMemberSMenuPauseDoukutuFv
    .4byte getOwnerID__Q32og6Screen27DispMemberSMenuPauseDoukutuFv
    .4byte getMemberID__Q32og6Screen27DispMemberSMenuPauseDoukutuFv
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

namespace og {
namespace Screen {
struct DispMemberSMenuPauseDoukutu : public DispMemberBase {
	virtual void getSize();     // _08 (inline)
	virtual void getOwnerID();  // _0C (inline)
	virtual void getMemberID(); // _10 (inline)
};
} // namespace Screen
} // namespace og

#endif
