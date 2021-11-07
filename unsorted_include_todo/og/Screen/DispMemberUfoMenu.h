#ifndef _OG_SCREEN_DISPMEMBERUFOMENU_H
#define _OG_SCREEN_DISPMEMBERUFOMENU_H

namespace og {
namespace Screen {
	struct DispMemberBase {
		virtual void _00() = 0;           // _00
		virtual void _04() = 0;           // _04
		virtual void _08() = 0;           // _08
		virtual void doSetSubMemberAll(); // _0C

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

namespace og {
namespace Screen {
	struct DispMemberUfoMenu : public DispMemberBase {
		virtual void getSize();           // _00
		virtual void getOwnerID();        // _04
		virtual void getMemberID();       // _08
		virtual void doSetSubMemberAll(); // _0C

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

#endif
