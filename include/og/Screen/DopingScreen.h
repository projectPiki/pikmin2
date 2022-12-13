#ifndef _OG_SCREEN_DOPINGSCREEN_H
#define _OG_SCREEN_DOPINGSCREEN_H

#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"
#include "og/Screen/Data.h"
#include "Vector2.h"
#include "efx2d/T2DExtractUp.h"

namespace og {
namespace Screen {
struct ScaleMgr;

struct DopingCheck {
	DopingCheck();
	void init(J2DPane*, J2DPane*, ScaleMgr*, ScaleMgr*);
	void update();
	void effStart(J2DPane*);
	inline void startGetEff(J2DPane*);
	void startGetEff_Up();
	void startGetEff_Down();

	J2DPane* m_pane1;           // _00
	J2DPane* m_pane2;           // _04
	f32 m_naviLife;             // _08
	int m_followPiki;           // _0C
	int m_nextThrowPiki;        // _10
	u32 m_sprays1;              // _14
	u32 m_sprays2;              // _18
	u8 m_activeNaviID;          // _1C
	u32* _20;                   // _20, unknown
	u32* _24;                   // _24, unknown
	u32 _28;                    // _28, unknown
	u32 _2C;                    // _2C, unknown
	efx2d::T2DExtractUp* m_efx; // _30, unknown
	ScaleMgr* m_scaleMgr1;      // _34
	ScaleMgr* m_scaleMgr2;      // _38
	f32 _3C;                    // _3C
	u8 _40;                     // _40
};

struct DopingScreen : public P2DScreen::Mgr_tuning {
	DopingScreen();

	virtual ~DopingScreen() { } // _08 (weak)
	virtual void update();      // _30

	void setCallBack(JKRArchive*);
	void setParam(DataNavi&);
	void adjPos(f32, f32);
	void setDopingEnable(bool, bool);
	void openDopingUp();
	void openDopingDown();
	void openDopingKey();

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	DopingCheck* m_dopingCheck; // _148
	J2DPane* m_paneAll;         // _14C
	J2DPane* m_paneSpray0;      // _150
	J2DPane* m_paneSpray1;      // _154
	J2DPane* m_paneJujiKey;     // _158, the center DPad
	J2DPane* m_paneBottleR;     // _15C
	J2DPane* m_paneBottleY;     // _160, these pane names are a leftover of the beta HUD
	Vector2f m_rootPosition;    // _164
	Vector2f m_offset;          // _16C
	bool m_dope0Enabled;        // _174
	bool m_dope1Enabled;        // _175
	bool m_gottenSpray0;        // _176
	bool m_gottenSpray1;        // _177
	bool m_gottenJujiKey;       // _178
	f32 m_scaleSpray0Get;       // _17C
	f32 m_scaleSpray1Get;       // _180
	f32 m_scaleJujiKey;         // _184
	ScaleMgr* m_scaleMgr1;      // _188
	ScaleMgr* m_scaleMgr2;      // _18C
	ScaleMgr* m_scaleMgr3;      // _190
	u8 _194[0x4];               // _194, unknown
};
} // namespace Screen
} // namespace og

#endif
