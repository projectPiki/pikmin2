#ifndef _OG_SCREEN_DISPMEMBERSMENUPAUSEVS_H
#define _OG_SCREEN_DISPMEMBERSMENUPAUSEVS_H

#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"

namespace og {
namespace Screen {
struct DispMemberSMenuPauseVS : public DispMemberBase {
	/**
	 * @reifiedAddress{802175E4}
	 * @reifiedFile{plugProjectKandoU/singleGS_MainGame.cpp}
	 */
	virtual u32 getSize() // _00
	{
		return 0xC;
	}

	/**
	 * @reifiedAddress{802175EC}
	 * @reifiedFile{plugProjectKandoU/singleGS_MainGame.cpp}
	 */
	virtual u32 getOwnerID() // _04
	{
		return OWNER_OGA;
	}

	/**
	 * @reifiedAddress{802175F8}
	 * @reifiedFile{plugProjectKandoU/singleGS_MainGame.cpp}
	 */
	virtual u64 getMemberID() // _08
	{
		return MEMBER_START_MENU_PAUSE_VS;
	}

	int _08; // _08
};
} // namespace Screen
} // namespace og

#endif
