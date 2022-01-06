#ifndef _MORIMURA_DISPMEMBERZUKANITEM_H
#define _MORIMURA_DISPMEMBERZUKANITEM_H

#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"

struct JKRExpHeap;

namespace Game {
namespace ResultTexMgr {
struct Mgr;
} // namespace ResultTexMgr
namespace IllustratedBook {
struct EnemyTexMgr;
} // namespace IllustratedBook
} // namespace Game

namespace og {
namespace Screen {
struct DispMemberWorldMapInfoWin0;
} // namespace Screen
} // namespace og

namespace Morimura {
struct DispMemberZukanItem : public og::Screen::DispMemberBase {
	/**
	 * @reifiedAddress{802271A4}
	 * @reifiedFile{plugProjectKandoU/singleGS_Zukan.cpp}
	 */
	virtual u32 getSize() // _00
	{
		return 0x20;
	}

	/**
	 * @reifiedAddress{802271AC}
	 * @reifiedFile{plugProjectKandoU/singleGS_Zukan.cpp}
	 */
	virtual u32 getOwnerID() // _04
	{
		return OWNER_MRMR;
	}

	/**
	 * @reifiedAddress{802271B8}
	 * @reifiedFile{plugProjectKandoU/singleGS_Zukan.cpp}
	 */
	virtual u64 getMemberID() // _08
	{
		return MEMBER_ZUKAN_ITEM;
	}

	JKRExpHeap* m_debugExpHeap;                                     // _08
	JUTTexture* m_texture;                                          // _0C
	Game::ResultTexMgr::Mgr* m_resultTexMgr;                        // _10
	Game::IllustratedBook::EnemyTexMgr* m_enemyTexMgr;              // _14
	og::Screen::DispMemberWorldMapInfoWin0* m_dispWorldMapInfoWin0; // _18
	int _1C;                                                        // _1C
};
} // namespace Morimura

#endif
