#ifndef _OG_SCREEN_DISPMEMBERUFOGROUP_H
#define _OG_SCREEN_DISPMEMBERUFOGROUP_H

namespace og {
namespace Screen {
	struct DispMemberUfoGroup {
		virtual void getSize();           // _00
		virtual void getOwnerID();        // _04
		virtual void getMemberID();       // _08
		virtual void doSetSubMemberAll(); // _0C
		virtual void _10() = 0;           // _10
		virtual void _14() = 0;           // _14
		virtual void _18() = 0;           // _18
		virtual void _1C() = 0;           // _1C
		virtual void _20() = 0;           // _20
		virtual void _24() = 0;           // _24

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

#endif
