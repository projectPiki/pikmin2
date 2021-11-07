#ifndef _OG_SCREEN_DISPMEMBERSMENUALL_H
#define _OG_SCREEN_DISPMEMBERSMENUALL_H

namespace og {
namespace Screen {
	struct DispMemberSMenuAll {
		virtual void getSize();           // _00
		virtual void getOwnerID();        // _04
		virtual void getMemberID();       // _08
		virtual void doSetSubMemberAll(); // _0C

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

#endif
