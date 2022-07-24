#ifndef _OG_SCREEN_DISPMEMBERUFOGROUP_H
#define _OG_SCREEN_DISPMEMBERUFOGROUP_H

/*
    __vt__Q32og6Screen18DispMemberUfoGroup:
    .4byte 0
    .4byte 0
    .4byte getSize__Q32og6Screen18DispMemberUfoGroupFv
    .4byte getOwnerID__Q32og6Screen18DispMemberUfoGroupFv
    .4byte getMemberID__Q32og6Screen18DispMemberUfoGroupFv
    .4byte doSetSubMemberAll__Q32og6Screen18DispMemberUfoGroupFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace og {
namespace Screen {
struct DispMemberUfoGroup {
	virtual void getSize();           // _08 (inline)
	virtual void getOwnerID();        // _0C (inline)
	virtual void getMemberID();       // _10 (inline)
	virtual void doSetSubMemberAll(); // _14 (inline)
	virtual void _18() = 0;           // _18
	virtual void _1C() = 0;           // _1C
	virtual void _20() = 0;           // _20
	virtual void _24() = 0;           // _24
	virtual void _28() = 0;           // _28
	virtual void _2C() = 0;           // _2C
};
} // namespace Screen
} // namespace og

#endif
