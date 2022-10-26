#ifndef _MORIMURA_DISPMEMBERVSSELECT_H
#define _MORIMURA_DISPMEMBERVSSELECT_H

#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"

struct JKRHeap;

namespace Game {
struct Vs2D_TitleInfo;
} // namespace Game

namespace og {
namespace Screen {
struct DispMemberWorldMapInfoWin0;
}
} // namespace og

namespace Morimura {
struct DispMemberVsSelect : public og::Screen::DispMemberBase {
	/**
	 * @reifiedAddress{802291F4}
	 * @reifiedFile{plugProjectKandoU/vsGS_Title.cpp}
	 */
	virtual u32 getSize() // _00
	{
		return 0x38;
	}

	/**
	 * @reifiedAddress{802291FC}
	 * @reifiedFile{plugProjectKandoU/vsGS_Title.cpp}
	 */
	virtual u32 getOwnerID() // _04
	{
		return OWNER_MRMR;
	}

	/**
	 * @reifiedAddress{80229208}
	 * @reifiedFile{plugProjectKandoU/vsGS_Title.cpp}
	 */
	virtual u64 getMemberID() // _08
	{
		return MEMBER_VS_SELECT;
	}

	Game::Vs2D_TitleInfo* m_titleInfo;                              // _08
	JKRHeap* m_heap;                                                // _0C
	og::Screen::DispMemberWorldMapInfoWin0* m_dispWorldMapInfoWin0; // _10
	int _14;                                                        // _14
	u32 _18;                                                        // _18
	int _1C;                                                        // _1C
	int _20;                                                        // _20
	u32 m_redWinCount;                                              // _24
	u32 m_blueWinCount;                                             // _28
	int _2C;                                                        // _2C
	int m_stageCount;                                               // _30
	int _34;                                                        // _34
};
} // namespace Morimura

#endif
