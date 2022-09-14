#ifndef _MORIMURA_DAYENDCOUNT_H
#define _MORIMURA_DAYENDCOUNT_H

#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JUT/TColor.h"
#include "Morimura/TTestBase.h"
#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"
#include "Screen/Bases.h"
#include "types.h"

struct Graphics;
struct JKRArchive;
struct J2DPane;

namespace P2DScreen {
struct Mgr_tuning;
}

namespace og {
namespace Screen {

/**
 * @size{0x10}
 */
struct DispMemberDayEndCount : public DispMemberBase {
	/**
	 * @reifiedAddress{}
	 * @reifiedFile{}
	 */
	virtual u32 getSize() // _00
	{
		return sizeof(DispMemberDayEndCount);
	}

	/**
	 * @reifiedAddress{}
	 * @reifiedFile{}
	 */
	virtual u32 getOwnerID() // _04
	{
		return OWNER_MRMR;
	}

	/**
	 * @reifiedAddress{}
	 * @reifiedFile{}
	 */
	virtual u64 getMemberID() // _08
	{
		return MEMBER_DAY_END_COUNT;
	}

	float _08; // _08
	float _0C; // _0C
};

} // namespace Screen
} // namespace og

namespace Morimura {

/**
 * @size{0xD4}
 */
struct TDayEndCount : public TTestBase {
	TDayEndCount();

	virtual ~TDayEndCount();                                 // _00
	virtual bool doStart(const ::Screen::StartSceneArg*);    // _2C
	virtual void doCreate(JKRArchive*);                      // _34
	virtual bool doUpdate();                                 // _40
	virtual void doDraw(Graphics&);                          // _50
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _60

	void reset();

	JKRArchive* m_archive;                           // _78
	og::Screen::DispMemberDayEndCount* m_dispMember; // _7C
	P2DScreen::Mgr_tuning* _80;                      // _80
	J2DPicture* _84;                                 // _84
	J2DPane** _88;                                   // _88
	J2DPicture* _8C;                                 // _8C
	int _90;                                         // _90
	u8 _94;                                          // _94
	JGeometry::TVec2<short> _96[4];                  // _96
	JGeometry::TVec2<short> _A6[4];                  // _A6
	float _B8;                                       // _B8
	float _BC;                                       // _BC
	float _C0;                                       // _C0
	float _C4;                                       // _C4
	u8 _C8;                                          // _C8
	u8 _C9;                                          // _C9
	u8 _CA;                                          // _CA
	float m_scale;                                   // _CC
	float m_offsetY;                                 // _D0
};

} // namespace Morimura

#endif
