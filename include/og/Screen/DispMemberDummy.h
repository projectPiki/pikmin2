#ifndef _OG_SCREEN_DISPMEMBERDUMMY_H
#define _OG_SCREEN_DISPMEMBERDUMMY_H

#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"

namespace og {
namespace Screen {
/**
 * @size{0x8}
 */
struct DispMemberDummy : public DispMemberBase {
	/**
	 * @reifiedAddress{8030D844}
	 * @reifiedFile{plugProjectOgawaU/testScene.cpp}
	 */
	virtual u32 getSize() // _08
	{
		return sizeof(DispMemberDummy);
	}

	/**
	 * @reifiedAddress{8030D84C}
	 * @reifiedFile{plugProjectOgawaU/testScene.cpp}
	 */
	virtual u32 getOwnerID() // _0C
	{
		return OWNER_OGA;
	}

	/**
	 * @reifiedAddress{8030D858}
	 * @reifiedFile{plugProjectOgawaU/testScene.cpp}
	 */
	virtual u64 getMemberID() // _10
	{
		return MEMBER_DUMMY;
	}
};
} // namespace Screen
} // namespace og

#endif
