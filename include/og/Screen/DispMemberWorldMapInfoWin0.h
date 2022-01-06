#ifndef _OG_SCREEN_DISPMEMBERWORLDMAPINFOWIN0_H
#define _OG_SCREEN_DISPMEMBERWORLDMAPINFOWIN0_H

#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"

namespace og {
namespace Screen {
struct DispMemberWorldMapInfoWin0 : public DispMemberBase {
	inline DispMemberWorldMapInfoWin0()
	    : DispMemberBase()
	{
		_08 = 0;
		_10 = '4710_00';
		_18 = '4711_00';
		_20 = 0xB4;
		_21 = 0;
	}
	/**
	 * @reifiedAddress{8032BA74}
	 * @reifiedFile{plugProjectOgawaU/ogObjWorldMapInfoWindow0.cpp}
	 */
	virtual u32 getSize() // _00
	{
		return 0x28;
	}

	/**
	 * @reifiedAddress{8032BA7C}
	 * @reifiedFile{plugProjectOgawaU/ogObjWorldMapInfoWindow0.cpp}
	 */
	virtual u32 getOwnerID() // _04
	{
		return OWNER_OGA;
	}

	/**
	 * @reifiedAddress{8032BA88}
	 * @reifiedFile{plugProjectOgawaU/ogObjWorldMapInfoWindow0.cpp}
	 */
	virtual u64 getMemberID() // _08
	{
		return MEMBER_WORLD_MAP_INFO_WINDOW_0;
	}

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
