#ifndef _MORIMURA_DISPMEMBERCHALLENGESELECT_H
#define _MORIMURA_DISPMEMBERCHALLENGESELECT_H

#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"

struct JKRExpHeap;

namespace Game {
struct Challenge2D_TitleInfo;
} // namespace Game

namespace og {
namespace Screen {
struct DispMemberWorldMapInfoWin0;
} // namespace Screen
} // namespace og

namespace Morimura {
struct DispMemberChallengeSelect : public og::Screen::DispMemberBase {
	/**
	 * @reifiedAddress{8022921C}
	 * @reifiedFile{plugProjectKandoU/vsGS_Title.cpp}
	 */
	virtual u32 getSize() // _00
	{
		return 0x24;
	}

	/**
	 * @reifiedAddress{80229224}
	 * @reifiedFile{plugProjectKandoU/vsGS_Title.cpp}
	 */
	virtual u32 getOwnerID() // _04
	{
		return OWNER_MRMR;
	}

	/**
	 * @reifiedAddress{80229230}
	 * @reifiedFile{plugProjectKandoU/vsGS_Title.cpp}
	 */
	virtual u64 getMemberID() // _08
	{
		return MEMBER_CHALLENGE_SELECT;
	}

	Game::Challenge2D_TitleInfo* m_titleInfo;                       // _08
	JKRExpHeap* m_debugExpHeap;                                     // _0C
	int m_stageNumber;                                              // _10
	int m_selectedStageIndex;                                       // _14
	int m_playType;                                                 // _18
	int _1C;                                                        // _1C
	og::Screen::DispMemberWorldMapInfoWin0* m_dispWorldMapInfoWin0; // _20
};
} // namespace Morimura

#endif
