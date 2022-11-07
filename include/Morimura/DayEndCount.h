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
	virtual void doDraw(Graphics& gfx);                      // _50
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _60

	void reset();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* m_archive;                           // _78
	og::Screen::DispMemberDayEndCount* m_dispMember; // _7C
	P2DScreen::Mgr_tuning* _80;                      // _80
	J2DPicture* _84;                                 // _84
	J2DPane** _88;                                   // _88
	J2DPicture* _8C;                                 // _8C
	int _90;                                         // _90
	u8 _94;                                          // _94
	JGeometry::TVec2<s16> _96[4];                    // _96
	JGeometry::TVec2<s16> _A6[4];                    // _A6
	f32 _B8;                                         // _B8
	f32 _BC;                                         // _BC
	f32 _C0;                                         // _C0
	f32 _C4;                                         // _C4
	u8 _C8;                                          // _C8
	u8 _C9;                                          // _C9
	u8 _CA;                                          // _CA
	f32 m_scale;                                     // _CC
	f32 m_offsetY;                                   // _D0
};

} // namespace Morimura

#endif
