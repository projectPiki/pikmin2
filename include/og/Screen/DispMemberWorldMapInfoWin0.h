#ifndef _OG_SCREEN_DISPMEMBERWORLDMAPINFOWIN0_H
#define _OG_SCREEN_DISPMEMBERWORLDMAPINFOWIN0_H

#include "og/Screen/ogScreen.h"

namespace og {
namespace Screen {
	struct DispMemberWorldMapInfoWin0 : public DispMemberBase {
		virtual i32 getSize();            // _00
		virtual u32 getOwnerID();         // _04
		virtual u64 getMemberID();        // _08
		virtual void doSetSubMemberAll(); // _0C

		int _08;   // _08
		u8 _0C[4]; // _0C
		u64 _10;   // _10
		u64 _18;   // _18
		u8 _20;    // _20
		u8 _21;    // _21
		u32 : 0;
		u8 _24[4]; // _24
	};
} // namespace Screen
} // namespace og

#endif
